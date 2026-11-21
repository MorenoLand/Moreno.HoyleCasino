#include "protos.h"

void f_006781a0(void) /* CardsDialogHelpGroupBox::vfunc15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006781a0);
    /* 006781a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006781a1: mov ebp, esp */ r_ebp = r_esp;
    /* 006781a3: sub esp, 0x94 */ {  u32 a = r_esp; u32 b = 0x94u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006781a9: mov dword ptr [ebp - 0x8c], ecx */ W32((u32)(r_ebp+0xffffff74u), r_ecx);
    /* 006781af: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006781b6: cmp dword ptr [0x16306dc], 0 */ {  u32 a = R32((u32)(0x16306dcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006781bd: jne 0x6781c4 */ if (!fZ) goto L_006781c4;
L_006781bf:; BB(0x006781bf);
    /* 006781bf: jmp 0x678659 */ goto L_00678659;
L_006781c4:; BB(0x006781c4);
    /* 006781c4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006781c6: mov ecx, dword ptr [0x16306dc] */ r_ecx = R32((u32)(0x16306dcu));
    /* 006781cc: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x6781d1u); f_005fb300();
    /* 006781d1: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 006781d4: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
    /* 006781db: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006781dd: mov ecx, dword ptr [0x16306dc] */ r_ecx = R32((u32)(0x16306dcu));
    /* 006781e3: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x6781e8u); f_005fb300();
    /* 006781e8: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 006781eb: mov dword ptr [ebp - 0x54], 1 */ W32((u32)(r_ebp+0xffffffacu), 0x1u);
    /* 006781f2: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006781f4: mov ecx, dword ptr [0x16306dc] */ r_ecx = R32((u32)(0x16306dcu));
    /* 006781fa: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x6781ffu); f_005fb300();
    /* 006781ff: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 00678202: mov dword ptr [ebp - 0x4c], 2 */ W32((u32)(r_ebp+0xffffffb4u), 0x2u);
    /* 00678209: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067820b: mov ecx, dword ptr [0x16306dc] */ r_ecx = R32((u32)(0x16306dcu));
    /* 00678211: call 0x5fb720 */ r_esp -= 4; W32(r_esp, 0x678216u); f_005fb720();
    /* 00678216: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00678218: je 0x678232 */ if (fZ) goto L_00678232;
L_0067821a:; BB(0x0067821a);
    /* 0067821a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067821c: mov ecx, dword ptr [0x16306dc] */ r_ecx = R32((u32)(0x16306dcu));
    /* 00678222: call 0x5fb720 */ r_esp -= 4; W32(r_esp, 0x678227u); f_005fb720();
    /* 00678227: mov eax, dword ptr [eax + 0x48] */ r_eax = R32((u32)(r_eax+0x48u));
    /* 0067822a: mov dword ptr [ebp - 0x90], eax */ W32((u32)(r_ebp+0xffffff70u), r_eax);
    /* 00678230: jmp 0x67823c */ goto L_0067823c;
L_00678232:; BB(0x00678232);
    /* 00678232: mov dword ptr [ebp - 0x90], 0 */ W32((u32)(r_ebp+0xffffff70u), 0x0u);
L_0067823c:; BB(0x0067823c);
    /* 0067823c: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 00678242: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 00678245: mov dword ptr [ebp - 0x44], 3 */ W32((u32)(r_ebp+0xffffffbcu), 0x3u);
    /* 0067824c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067824e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00678250: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 00678256: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00678258: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0067825e: mov edx, dword ptr [eax + 0x1b0] */ r_edx = R32((u32)(r_eax+0x1b0u));
    /* 00678264: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x678266u); call_ind(t); }
    /* 00678266: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00678267: mov ecx, dword ptr [0x16306dc] */ r_ecx = R32((u32)(0x16306dcu));
    /* 0067826d: call 0x5fb3f0 */ r_esp -= 4; W32(r_esp, 0x678272u); f_005fb3f0();
    /* 00678272: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00678275: mov dword ptr [ebp - 0x3c], 4 */ W32((u32)(r_ebp+0xffffffc4u), 0x4u);
    /* 0067827c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067827e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00678280: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 00678285: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00678287: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0067828d: mov eax, dword ptr [edx + 0x1b0] */ r_eax = R32((u32)(r_edx+0x1b0u));
    /* 00678293: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x678295u); call_ind(t); }
    /* 00678295: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00678296: mov ecx, dword ptr [0x16306dc] */ r_ecx = R32((u32)(0x16306dcu));
    /* 0067829c: call 0x5fb3f0 */ r_esp -= 4; W32(r_esp, 0x6782a1u); f_005fb3f0();
    /* 006782a1: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 006782a4: mov dword ptr [ebp - 0x34], 5 */ W32((u32)(r_ebp+0xffffffccu), 0x5u);
    /* 006782ab: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006782ad: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006782af: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006782b5: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006782b7: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006782bd: mov eax, dword ptr [edx + 0x1b0] */ r_eax = R32((u32)(r_edx+0x1b0u));
    /* 006782c3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6782c5u); call_ind(t); }
    /* 006782c5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006782c6: mov ecx, dword ptr [0x16306dc] */ r_ecx = R32((u32)(0x16306dcu));
    /* 006782cc: call 0x5fb3f0 */ r_esp -= 4; W32(r_esp, 0x6782d1u); f_005fb3f0();
    /* 006782d1: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 006782d4: mov dword ptr [ebp - 0x2c], 6 */ W32((u32)(r_ebp+0xffffffd4u), 0x6u);
    /* 006782db: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006782dd: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 006782df: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006782e5: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006782e7: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006782ed: mov eax, dword ptr [edx + 0x1b0] */ r_eax = R32((u32)(r_edx+0x1b0u));
    /* 006782f3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6782f5u); call_ind(t); }
    /* 006782f5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006782f6: mov ecx, dword ptr [0x16306dc] */ r_ecx = R32((u32)(0x16306dcu));
    /* 006782fc: call 0x5fb3f0 */ r_esp -= 4; W32(r_esp, 0x678301u); f_005fb3f0();
    /* 00678301: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00678304: mov dword ptr [ebp - 0x24], 7 */ W32((u32)(r_ebp+0xffffffdcu), 0x7u);
    /* 0067830b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067830d: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0067830f: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00678315: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00678317: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0067831d: mov eax, dword ptr [edx + 0x1b0] */ r_eax = R32((u32)(r_edx+0x1b0u));
    /* 00678323: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x678325u); call_ind(t); }
    /* 00678325: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00678326: mov ecx, dword ptr [0x16306dc] */ r_ecx = R32((u32)(0x16306dcu));
    /* 0067832c: call 0x5fb3f0 */ r_esp -= 4; W32(r_esp, 0x678331u); f_005fb3f0();
    /* 00678331: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00678334: mov dword ptr [ebp - 0x1c], 8 */ W32((u32)(r_ebp+0xffffffe4u), 0x8u);
    /* 0067833b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067833d: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0067833f: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00678345: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00678347: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0067834d: mov eax, dword ptr [edx + 0x1b0] */ r_eax = R32((u32)(r_edx+0x1b0u));
    /* 00678353: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x678355u); call_ind(t); }
    /* 00678355: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00678356: mov ecx, dword ptr [0x16306dc] */ r_ecx = R32((u32)(0x16306dcu));
    /* 0067835c: call 0x5fb3f0 */ r_esp -= 4; W32(r_esp, 0x678361u); f_005fb3f0();
    /* 00678361: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00678364: mov dword ptr [ebp - 0x14], 9 */ W32((u32)(r_ebp+0xffffffecu), 0x9u);
    /* 0067836b: mov dword ptr [ebp - 8], 0xa */ W32((u32)(r_ebp+0xfffffff8u), 0xau);
    /* 00678372: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 00678379: jmp 0x678384 */ goto L_00678384;
L_0067837b:; BB(0x0067837b);
    /* 0067837b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0067837e: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00678381: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_00678384:; BB(0x00678384);
    /* 00678384: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00678387: cmp edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067838a: jge 0x6783c7 */ if ((fS==fO)) goto L_006783c7;
L_0067838c:; BB(0x0067838c);
    /* 0067838c: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0067838f: cmp dword ptr [ebp + eax*8 - 0x60], 0 */ {  u32 a = R32((u32)(r_ebp+r_eax*8+0xffffffa0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00678394: je 0x6783c5 */ if (fZ) goto L_006783c5;
L_00678396:; BB(0x00678396);
    /* 00678396: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00678399: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067839a: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0067839d: mov eax, dword ptr [ebp + edx*8 - 0x60] */ r_eax = R32((u32)(r_ebp+r_edx*8+0xffffffa0u));
    /* 006783a1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006783a4: mov ecx, dword ptr [ebp + ecx*8 - 0x60] */ r_ecx = R32((u32)(r_ebp+r_ecx*8+0xffffffa0u));
    /* 006783a8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006783aa: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 006783b0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6783b2u); call_ind(t); }
    /* 006783b2: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 006783b5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006783b7: je 0x6783c5 */ if (fZ) goto L_006783c5;
L_006783b9:; BB(0x006783b9);
    /* 006783b9: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006783bc: mov eax, dword ptr [ebp + edx*8 - 0x5c] */ r_eax = R32((u32)(r_ebp+r_edx*8+0xffffffa4u));
    /* 006783c0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 006783c3: jmp 0x6783c7 */ goto L_006783c7;
L_006783c5:; BB(0x006783c5);
    /* 006783c5: jmp 0x67837b */ goto L_0067837b;
L_006783c7:; BB(0x006783c7);
    /* 006783c7: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006783cb: jne 0x6783fc */ if (!fZ) goto L_006783fc;
L_006783cd:; BB(0x006783cd);
    /* 006783cd: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006783d0: cmp dword ptr [ecx + 0x18], 3 */ {  u32 a = R32((u32)(r_ecx+0x18u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006783d4: jne 0x6783f7 */ if (!fZ) goto L_006783f7;
L_006783d6:; BB(0x006783d6);
    /* 006783d6: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 006783db: mov edx, dword ptr [ebp - 0x8c] */ r_edx = R32((u32)(r_ebp+0xffffff74u));
    /* 006783e1: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 006783e4: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 006783ea: mov ecx, dword ptr [ecx + 0x6c] */ r_ecx = R32((u32)(r_ecx+0x6cu));
    /* 006783ed: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006783ef: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 006783f5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6783f7u); call_ind(t); }
L_006783f7:; BB(0x006783f7);
    /* 006783f7: jmp 0x678659 */ goto L_00678659;
L_006783fc:; BB(0x006783fc);
    /* 006783fc: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00678400: jne 0x678432 */ if (!fZ) goto L_00678432;
L_00678402:; BB(0x00678402);
    /* 00678402: push 0x6e1f9c */ { u32 v = 0x6e1f9cu; r_esp -= 4; W32(r_esp, v); }
    /* 00678407: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x67840cu); f_00630f40();
    /* 0067840c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067840f: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 00678412: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 00678415: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00678416: mov edx, dword ptr [ebp - 0x8c] */ r_edx = R32((u32)(r_ebp+0xffffff74u));
    /* 0067841c: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0067841f: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 00678425: mov ecx, dword ptr [ecx + 0x6c] */ r_ecx = R32((u32)(r_ecx+0x6cu));
    /* 00678428: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0067842a: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00678430: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x678432u); call_ind(t); }
L_00678432:; BB(0x00678432);
    /* 00678432: cmp dword ptr [ebp - 4], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00678436: jne 0x678468 */ if (!fZ) goto L_00678468;
L_00678438:; BB(0x00678438);
    /* 00678438: push 0x6e1f7c */ { u32 v = 0x6e1f7cu; r_esp -= 4; W32(r_esp, v); }
    /* 0067843d: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x678442u); f_00630f40();
    /* 00678442: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00678445: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 00678448: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0067844b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067844c: mov edx, dword ptr [ebp - 0x8c] */ r_edx = R32((u32)(r_ebp+0xffffff74u));
    /* 00678452: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00678455: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 0067845b: mov ecx, dword ptr [ecx + 0x6c] */ r_ecx = R32((u32)(r_ecx+0x6cu));
    /* 0067845e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00678460: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00678466: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x678468u); call_ind(t); }
L_00678468:; BB(0x00678468);
    /* 00678468: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067846c: jne 0x67849e */ if (!fZ) goto L_0067849e;
L_0067846e:; BB(0x0067846e);
    /* 0067846e: push 0x6e1f5c */ { u32 v = 0x6e1f5cu; r_esp -= 4; W32(r_esp, v); }
    /* 00678473: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x678478u); f_00630f40();
    /* 00678478: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067847b: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 0067847e: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 00678481: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00678482: mov edx, dword ptr [ebp - 0x8c] */ r_edx = R32((u32)(r_ebp+0xffffff74u));
    /* 00678488: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0067848b: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 00678491: mov ecx, dword ptr [ecx + 0x6c] */ r_ecx = R32((u32)(r_ecx+0x6cu));
    /* 00678494: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00678496: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0067849c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67849eu); call_ind(t); }
L_0067849e:; BB(0x0067849e);
    /* 0067849e: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006784a2: jne 0x678509 */ if (!fZ) goto L_00678509;
L_006784a4:; BB(0x006784a4);
    /* 006784a4: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006784aa: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006784ac: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006784b2: mov eax, dword ptr [edx + 0xc0] */ r_eax = R32((u32)(r_edx+0xc0u));
    /* 006784b8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6784bau); call_ind(t); }
    /* 006784ba: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 006784bd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006784bf: je 0x6784cd */ if (fZ) goto L_006784cd;
L_006784c1:; BB(0x006784c1);
    /* 006784c1: mov dword ptr [ebp - 0x94], 0x6e1f30 */ W32((u32)(r_ebp+0xffffff6cu), 0x6e1f30u);
    /* 006784cb: jmp 0x6784d7 */ goto L_006784d7;
L_006784cd:; BB(0x006784cd);
    /* 006784cd: mov dword ptr [ebp - 0x94], 0x6e1f04 */ W32((u32)(r_ebp+0xffffff6cu), 0x6e1f04u);
L_006784d7:; BB(0x006784d7);
    /* 006784d7: mov edx, dword ptr [ebp - 0x94] */ r_edx = R32((u32)(r_ebp+0xffffff6cu));
    /* 006784dd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006784de: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x6784e3u); f_00630f40();
    /* 006784e3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006784e6: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 006784e9: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 006784ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006784ed: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 006784f3: mov edx, dword ptr [ecx + 0x6c] */ r_edx = R32((u32)(r_ecx+0x6cu));
    /* 006784f6: mov eax, dword ptr [ebp - 0x8c] */ r_eax = R32((u32)(r_ebp+0xffffff74u));
    /* 006784fc: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 006784ff: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00678501: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00678507: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x678509u); call_ind(t); }
L_00678509:; BB(0x00678509);
    /* 00678509: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067850d: jne 0x67853f */ if (!fZ) goto L_0067853f;
L_0067850f:; BB(0x0067850f);
    /* 0067850f: push 0x6e1ee4 */ { u32 v = 0x6e1ee4u; r_esp -= 4; W32(r_esp, v); }
    /* 00678514: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x678519u); f_00630f40();
    /* 00678519: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067851c: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 0067851f: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 00678522: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00678523: mov edx, dword ptr [ebp - 0x8c] */ r_edx = R32((u32)(r_ebp+0xffffff74u));
    /* 00678529: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0067852c: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 00678532: mov ecx, dword ptr [ecx + 0x6c] */ r_ecx = R32((u32)(r_ecx+0x6cu));
    /* 00678535: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00678537: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0067853d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67853fu); call_ind(t); }
L_0067853f:; BB(0x0067853f);
    /* 0067853f: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00678543: jne 0x678575 */ if (!fZ) goto L_00678575;
L_00678545:; BB(0x00678545);
    /* 00678545: push 0x6e1ec4 */ { u32 v = 0x6e1ec4u; r_esp -= 4; W32(r_esp, v); }
    /* 0067854a: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x67854fu); f_00630f40();
    /* 0067854f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00678552: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 00678555: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 00678558: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00678559: mov edx, dword ptr [ebp - 0x8c] */ r_edx = R32((u32)(r_ebp+0xffffff74u));
    /* 0067855f: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00678562: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 00678568: mov ecx, dword ptr [ecx + 0x6c] */ r_ecx = R32((u32)(r_ecx+0x6cu));
    /* 0067856b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0067856d: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00678573: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x678575u); call_ind(t); }
L_00678575:; BB(0x00678575);
    /* 00678575: cmp dword ptr [ebp - 4], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00678579: jne 0x6785ab */ if (!fZ) goto L_006785ab;
L_0067857b:; BB(0x0067857b);
    /* 0067857b: push 0x6e1ea4 */ { u32 v = 0x6e1ea4u; r_esp -= 4; W32(r_esp, v); }
    /* 00678580: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x678585u); f_00630f40();
    /* 00678585: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00678588: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 0067858b: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 0067858e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067858f: mov edx, dword ptr [ebp - 0x8c] */ r_edx = R32((u32)(r_ebp+0xffffff74u));
    /* 00678595: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00678598: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 0067859e: mov ecx, dword ptr [ecx + 0x6c] */ r_ecx = R32((u32)(r_ecx+0x6cu));
    /* 006785a1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006785a3: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 006785a9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6785abu); call_ind(t); }
L_006785ab:; BB(0x006785ab);
    /* 006785ab: cmp dword ptr [ebp - 4], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006785af: jne 0x6785e1 */ if (!fZ) goto L_006785e1;
L_006785b1:; BB(0x006785b1);
    /* 006785b1: push 0x6e1e84 */ { u32 v = 0x6e1e84u; r_esp -= 4; W32(r_esp, v); }
    /* 006785b6: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x6785bbu); f_00630f40();
    /* 006785bb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006785be: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 006785c1: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 006785c4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006785c5: mov edx, dword ptr [ebp - 0x8c] */ r_edx = R32((u32)(r_ebp+0xffffff74u));
    /* 006785cb: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 006785ce: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 006785d4: mov ecx, dword ptr [ecx + 0x6c] */ r_ecx = R32((u32)(r_ecx+0x6cu));
    /* 006785d7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006785d9: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 006785df: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6785e1u); call_ind(t); }
L_006785e1:; BB(0x006785e1);
    /* 006785e1: cmp dword ptr [ebp - 4], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006785e5: jne 0x67861d */ if (!fZ) goto L_0067861d;
L_006785e7:; BB(0x006785e7);
    /* 006785e7: push 0x6e1e64 */ { u32 v = 0x6e1e64u; r_esp -= 4; W32(r_esp, v); }
    /* 006785ec: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x6785f1u); f_00630f40();
    /* 006785f1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006785f4: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 006785fa: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 00678600: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00678601: mov edx, dword ptr [ebp - 0x8c] */ r_edx = R32((u32)(r_ebp+0xffffff74u));
    /* 00678607: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0067860a: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 00678610: mov ecx, dword ptr [ecx + 0x6c] */ r_ecx = R32((u32)(r_ecx+0x6cu));
    /* 00678613: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00678615: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0067861b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67861du); call_ind(t); }
L_0067861d:; BB(0x0067861d);
    /* 0067861d: cmp dword ptr [ebp - 4], 9 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00678621: jne 0x678659 */ if (!fZ) goto L_00678659;
L_00678623:; BB(0x00678623);
    /* 00678623: push 0x6e1e44 */ { u32 v = 0x6e1e44u; r_esp -= 4; W32(r_esp, v); }
    /* 00678628: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x67862du); f_00630f40();
    /* 0067862d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00678630: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 00678636: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0067863c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067863d: mov edx, dword ptr [ebp - 0x8c] */ r_edx = R32((u32)(r_ebp+0xffffff74u));
    /* 00678643: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00678646: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 0067864c: mov ecx, dword ptr [ecx + 0x6c] */ r_ecx = R32((u32)(r_ecx+0x6cu));
    /* 0067864f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00678651: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00678657: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x678659u); call_ind(t); }
L_00678659:; BB(0x00678659);
    /* 00678659: mov esp, ebp */ r_esp = r_ebp;
    /* 0067865b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067865c: ret 4 */ FN_RET(0x006781a0); r_esp += 8; return;
}

