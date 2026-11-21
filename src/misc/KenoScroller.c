#include "protos.h"

void f_00584180(void) /* KenoScroller::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00584180);
    /* 00584180: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00584181: mov ebp, esp */ r_ebp = r_esp;
    /* 00584183: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00584184: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00584187: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058418a: call 0x5f5f50 */ r_esp -= 4; W32(r_esp, 0x58418fu); f_005f5f50();
    /* 0058418f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584192: mov dword ptr [eax], 0x6cca94 */ W32((u32)(r_eax), 0x6cca94u);
    /* 00584198: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058419b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0058419e: mov dword ptr [ecx + 0x190], edx */ W32((u32)(r_ecx+0x190u), r_edx);
    /* 005841a4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005841a7: mov byte ptr [eax + 8], 0 */ W8((u32)(r_eax+0x8u), 0x0u);
    /* 005841ab: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005841ae: mov byte ptr [ecx + 9], 0 */ W8((u32)(r_ecx+0x9u), 0x0u);
    /* 005841b2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005841b5: mov dword ptr [edx + 0x194], 0 */ W32((u32)(r_edx+0x194u), 0x0u);
    /* 005841bf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005841c2: mov dword ptr [eax + 0x198], 0 */ W32((u32)(r_eax+0x198u), 0x0u);
    /* 005841cc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005841cf: mov dword ptr [ecx + 0x19c], 0 */ W32((u32)(r_ecx+0x19cu), 0x0u);
    /* 005841d9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005841dc: mov dword ptr [edx + 0x1a0], 0 */ W32((u32)(r_edx+0x1a0u), 0x0u);
    /* 005841e6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005841e9: mov esp, ebp */ r_esp = r_ebp;
    /* 005841eb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005841ec: ret 4 */ FN_RET(0x00584180); r_esp += 8; return;
}

void f_00584280(void) /* KenoScroller::vfunc15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00584280);
    /* 00584280: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00584281: mov ebp, esp */ r_ebp = r_esp;
    /* 00584283: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00584286: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00584289: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0058428c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058428d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584290: call 0x5f56a0 */ r_esp -= 4; W32(r_esp, 0x584295u); f_005f56a0();
    /* 00584295: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00584298: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058429a: jne 0x5842b3 */ if (!fZ) goto L_005842b3;
L_0058429c:; BB(0x0058429c);
    /* 0058429c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058429f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005842a1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005842a4: mov edx, dword ptr [eax + 0xa8] */ r_edx = R32((u32)(r_eax+0xa8u));
    /* 005842aa: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5842acu); call_ind(t); }
    /* 005842ac: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005842af: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005842b1: je 0x5842be */ if (fZ) goto L_005842be;
L_005842b3:; BB(0x005842b3);
    /* 005842b3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005842b6: movzx edx, byte ptr [ecx + 4] */ r_edx = (u32)R8((u32)(r_ecx+0x4u));
    /* 005842ba: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005842bc: je 0x5842c3 */ if (fZ) goto L_005842c3;
L_005842be:; BB(0x005842be);
    /* 005842be: jmp 0x5845b7 */ goto L_005845b7;
L_005842c3:; BB(0x005842c3);
    /* 005842c3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005842c6: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 005842c9: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005842cc: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005842d0: je 0x5842eb */ if (fZ) goto L_005842eb;
L_005842d2:; BB(0x005842d2);
    /* 005842d2: cmp dword ptr [ebp - 8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005842d6: je 0x58456e */ if (fZ) goto L_0058456e;
L_005842dc:; BB(0x005842dc);
    /* 005842dc: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005842e0: je 0x5843c3 */ if (fZ) goto L_005843c3;
L_005842e6:; BB(0x005842e6);
    /* 005842e6: jmp 0x5845b7 */ goto L_005845b7;
L_005842eb:; BB(0x005842eb);
    /* 005842eb: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005842ee: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005842ef: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005842f2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005842f4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005842f7: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 005842fd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5842ffu); call_ind(t); }
    /* 005842ff: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00584302: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00584304: je 0x584318 */ if (fZ) goto L_00584318;
L_00584306:; BB(0x00584306);
    /* 00584306: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00584309: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0058430c: and eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0058430f: je 0x584318 */ if (fZ) goto L_00584318;
L_00584311:; BB(0x00584311);
    /* 00584311: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00584314: mov byte ptr [ecx + 4], 1 */ W8((u32)(r_ecx+0x4u), 0x1u);
L_00584318:; BB(0x00584318);
    /* 00584318: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0058431b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058431c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058431f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00584321: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584324: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 0058432a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58432cu); call_ind(t); }
    /* 0058432c: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0058432f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00584331: je 0x5843be */ if (fZ) goto L_005843be;
L_00584337:; BB(0x00584337);
    /* 00584337: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0058433a: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0058433d: and eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00584340: je 0x5843be */ if (fZ) goto L_005843be;
L_00584342:; BB(0x00584342);
    /* 00584342: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584345: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00584347: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058434a: mov eax, dword ptr [edx + 0xa8] */ r_eax = R32((u32)(r_edx+0xa8u));
    /* 00584350: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x584352u); call_ind(t); }
    /* 00584352: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00584355: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00584357: jne 0x5843be */ if (!fZ) goto L_005843be;
L_00584359:; BB(0x00584359);
    /* 00584359: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058435c: mov byte ptr [edx + 8], 1 */ W8((u32)(r_edx+0x8u), 0x1u);
    /* 00584360: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584363: mov byte ptr [eax + 9], 1 */ W8((u32)(r_eax+0x9u), 0x1u);
    /* 00584367: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0058436a: mov byte ptr [ecx + 4], 1 */ W8((u32)(r_ecx+0x4u), 0x1u);
    /* 0058436e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584371: mov ecx, dword ptr [edx + 0x190] */ r_ecx = R32((u32)(r_edx+0x190u));
    /* 00584377: call 0x585130 */ r_esp -= 4; W32(r_esp, 0x58437cu); f_00585130();
    /* 0058437c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058437e: jne 0x5843a0 */ if (!fZ) goto L_005843a0;
L_00584380:; BB(0x00584380);
    /* 00584380: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584383: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00584385: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584388: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 0058438b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58438du); call_ind(t); }
    /* 0058438d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00584390: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 00584393: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00584395: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584398: mov dword ptr [eax + 0x198], edx */ W32((u32)(r_eax+0x198u), r_edx);
    /* 0058439e: jmp 0x5843be */ goto L_005843be;
L_005843a0:; BB(0x005843a0);
    /* 005843a0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005843a3: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005843a5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005843a8: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005843ab: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5843adu); call_ind(t); }
    /* 005843ad: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005843b0: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005843b3: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005843b5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005843b8: mov dword ptr [eax + 0x194], edx */ W32((u32)(r_eax+0x194u), r_edx);
L_005843be:; BB(0x005843be);
    /* 005843be: jmp 0x5845b7 */ goto L_005845b7;
L_005843c3:; BB(0x005843c3);
    /* 005843c3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005843c6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005843c8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005843cb: mov eax, dword ptr [edx + 0xa8] */ r_eax = R32((u32)(r_edx+0xa8u));
    /* 005843d1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5843d3u); call_ind(t); }
    /* 005843d3: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005843d6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005843d8: je 0x58456c */ if (fZ) goto L_0058456c;
L_005843de:; BB(0x005843de);
    /* 005843de: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005843e1: mov ecx, dword ptr [edx + 0x190] */ r_ecx = R32((u32)(r_edx+0x190u));
    /* 005843e7: call 0x585130 */ r_esp -= 4; W32(r_esp, 0x5843ecu); f_00585130();
    /* 005843ec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005843ee: jne 0x5844a6 */ if (!fZ) goto L_005844a6;
L_005843f4:; BB(0x005843f4);
    /* 005843f4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005843f7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005843fa: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 005843fd: sub edx, dword ptr [ecx + 0x198] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x198u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00584403: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584406: cmp edx, dword ptr [eax + 0x19c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x19cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058440c: jge 0x584435 */ if ((fS==fO)) goto L_00584435;
L_0058440e:; BB(0x0058440e);
    /* 0058440e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584411: mov edx, dword ptr [ecx + 0x19c] */ r_edx = R32((u32)(r_ecx+0x19cu));
    /* 00584417: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00584418: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058441b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0058441d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584420: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 00584423: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x584425u); call_ind(t); }
    /* 00584425: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00584426: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584429: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0058442b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058442e: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00584431: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x584433u); call_ind(t); }
    /* 00584433: jmp 0x5844a1 */ goto L_005844a1;
L_00584435:; BB(0x00584435);
    /* 00584435: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00584438: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058443b: mov eax, dword ptr [ecx + 0xc] */ r_eax = R32((u32)(r_ecx+0xcu));
    /* 0058443e: sub eax, dword ptr [edx + 0x198] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x198u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00584444: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584447: cmp eax, dword ptr [ecx + 0x1a0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x1a0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058444d: jle 0x584476 */ if ((fZ||fS!=fO)) goto L_00584476;
L_0058444f:; BB(0x0058444f);
    /* 0058444f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584452: mov eax, dword ptr [edx + 0x1a0] */ r_eax = R32((u32)(r_edx+0x1a0u));
    /* 00584458: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00584459: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058445c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0058445e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584461: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 00584464: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x584466u); call_ind(t); }
    /* 00584466: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00584467: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058446a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0058446c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058446f: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00584472: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x584474u); call_ind(t); }
    /* 00584474: jmp 0x5844a1 */ goto L_005844a1;
L_00584476:; BB(0x00584476);
    /* 00584476: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00584479: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058447c: mov eax, dword ptr [ecx + 0xc] */ r_eax = R32((u32)(r_ecx+0xcu));
    /* 0058447f: sub eax, dword ptr [edx + 0x198] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x198u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00584485: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00584486: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584489: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0058448b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058448e: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 00584491: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x584493u); call_ind(t); }
    /* 00584493: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00584494: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584497: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00584499: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058449c: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0058449f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5844a1u); call_ind(t); }
L_005844a1:; BB(0x005844a1);
    /* 005844a1: jmp 0x584553 */ goto L_00584553;
L_005844a6:; BB(0x005844a6);
    /* 005844a6: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005844a9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005844ac: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 005844af: sub eax, dword ptr [edx + 0x194] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x194u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005844b5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005844b8: cmp eax, dword ptr [ecx + 0x19c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x19cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005844be: jge 0x5844e7 */ if ((fS==fO)) goto L_005844e7;
L_005844c0:; BB(0x005844c0);
    /* 005844c0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005844c3: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005844c5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005844c8: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 005844cb: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5844cdu); call_ind(t); }
    /* 005844cd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005844ce: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005844d1: mov ecx, dword ptr [eax + 0x19c] */ r_ecx = R32((u32)(r_eax+0x19cu));
    /* 005844d7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005844d8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005844db: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005844dd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005844e0: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 005844e3: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5844e5u); call_ind(t); }
    /* 005844e5: jmp 0x584553 */ goto L_00584553;
L_005844e7:; BB(0x005844e7);
    /* 005844e7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005844ea: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005844ed: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 005844f0: sub edx, dword ptr [ecx + 0x194] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x194u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005844f6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005844f9: cmp edx, dword ptr [eax + 0x1a0] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x1a0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005844ff: jle 0x584528 */ if ((fZ||fS!=fO)) goto L_00584528;
L_00584501:; BB(0x00584501);
    /* 00584501: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584504: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00584506: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584509: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 0058450c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58450eu); call_ind(t); }
    /* 0058450e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058450f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584512: mov edx, dword ptr [ecx + 0x1a0] */ r_edx = R32((u32)(r_ecx+0x1a0u));
    /* 00584518: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00584519: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058451c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0058451e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584521: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00584524: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x584526u); call_ind(t); }
    /* 00584526: jmp 0x584553 */ goto L_00584553;
L_00584528:; BB(0x00584528);
    /* 00584528: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058452b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0058452d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584530: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 00584533: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x584535u); call_ind(t); }
    /* 00584535: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00584536: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00584539: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058453c: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 0058453f: sub eax, dword ptr [edx + 0x194] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x194u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00584545: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00584546: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584549: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0058454b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058454e: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00584551: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x584553u); call_ind(t); }
L_00584553:; BB(0x00584553);
    /* 00584553: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00584556: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00584557: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058455a: mov ecx, dword ptr [edx + 0x190] */ r_ecx = R32((u32)(r_edx+0x190u));
    /* 00584560: call 0x585310 */ r_esp -= 4; W32(r_esp, 0x584565u); f_00585310();
    /* 00584565: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00584568: mov byte ptr [eax + 4], 1 */ W8((u32)(r_eax+0x4u), 0x1u);
L_0058456c:; BB(0x0058456c);
    /* 0058456c: jmp 0x5845b7 */ goto L_005845b7;
L_0058456e:; BB(0x0058456e);
    /* 0058456e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00584571: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 00584574: and edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00584577: je 0x5845b7 */ if (fZ) goto L_005845b7;
L_00584579:; BB(0x00584579);
    /* 00584579: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058457c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0058457e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584581: mov eax, dword ptr [edx + 0xa8] */ r_eax = R32((u32)(r_edx+0xa8u));
    /* 00584587: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x584589u); call_ind(t); }
    /* 00584589: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0058458c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058458e: je 0x5845b7 */ if (fZ) goto L_005845b7;
L_00584590:; BB(0x00584590);
    /* 00584590: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00584593: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00584594: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584597: mov ecx, dword ptr [eax + 0x190] */ r_ecx = R32((u32)(r_eax+0x190u));
    /* 0058459d: call 0x585310 */ r_esp -= 4; W32(r_esp, 0x5845a2u); f_00585310();
    /* 005845a2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005845a5: mov byte ptr [ecx + 8], 0 */ W8((u32)(r_ecx+0x8u), 0x0u);
    /* 005845a9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005845ac: mov byte ptr [edx + 9], 0 */ W8((u32)(r_edx+0x9u), 0x0u);
    /* 005845b0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005845b3: mov byte ptr [eax + 4], 1 */ W8((u32)(r_eax+0x4u), 0x1u);
L_005845b7:; BB(0x005845b7);
    /* 005845b7: mov esp, ebp */ r_esp = r_ebp;
    /* 005845b9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005845ba: ret 4 */ FN_RET(0x00584280); r_esp += 8; return;
}

