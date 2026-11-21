#include "protos.h"

void f_006604f0(void) /* LoginHelpGroupBox::vfunc15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006604f0);
    /* 006604f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006604f1: mov ebp, esp */ r_ebp = r_esp;
    /* 006604f3: sub esp, 0xc8 */ {  u32 a = r_esp; u32 b = 0xc8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006604f9: mov dword ptr [ebp - 0xc8], ecx */ W32((u32)(r_ebp+0xffffff38u), r_ecx);
    /* 006604ff: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00660506: cmp dword ptr [0x16306b0], 0 */ {  u32 a = R32((u32)(0x16306b0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066050d: jne 0x660514 */ if (!fZ) goto L_00660514;
L_0066050f:; BB(0x0066050f);
    /* 0066050f: jmp 0x660b60 */ goto L_00660b60;
L_00660514:; BB(0x00660514);
    /* 00660514: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00660516: mov ecx, dword ptr [0x16306b0] */ r_ecx = R32((u32)(0x16306b0u));
    /* 0066051c: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x660521u); f_005fb300();
    /* 00660521: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 00660524: mov dword ptr [ebp - 0x7c], 0 */ W32((u32)(r_ebp+0xffffff84u), 0x0u);
    /* 0066052b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0066052d: mov ecx, dword ptr [0x16306b0] */ r_ecx = R32((u32)(0x16306b0u));
    /* 00660533: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x660538u); f_005fb300();
    /* 00660538: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 0066053b: mov dword ptr [ebp - 0x74], 1 */ W32((u32)(r_ebp+0xffffff8cu), 0x1u);
    /* 00660542: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00660544: mov ecx, dword ptr [0x16306b0] */ r_ecx = R32((u32)(0x16306b0u));
    /* 0066054a: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x66054fu); f_005fb300();
    /* 0066054f: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 00660552: mov dword ptr [ebp - 0x6c], 2 */ W32((u32)(r_ebp+0xffffff94u), 0x2u);
    /* 00660559: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0066055b: mov ecx, dword ptr [0x16306b0] */ r_ecx = R32((u32)(0x16306b0u));
    /* 00660561: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x660566u); f_005fb300();
    /* 00660566: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 00660569: mov dword ptr [ebp - 0x64], 3 */ W32((u32)(r_ebp+0xffffff9cu), 0x3u);
    /* 00660570: push 0x5a */ { u32 v = 0x5au; r_esp -= 4; W32(r_esp, v); }
    /* 00660572: mov ecx, dword ptr [0x16306b0] */ r_ecx = R32((u32)(0x16306b0u));
    /* 00660578: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x66057du); f_005fb300();
    /* 0066057d: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 00660580: mov dword ptr [ebp - 0x5c], 4 */ W32((u32)(r_ebp+0xffffffa4u), 0x4u);
    /* 00660587: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00660589: mov ecx, dword ptr [0x16306b0] */ r_ecx = R32((u32)(0x16306b0u));
    /* 0066058f: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x660594u); f_005fb300();
    /* 00660594: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 00660597: mov dword ptr [ebp - 0x54], 5 */ W32((u32)(r_ebp+0xffffffacu), 0x5u);
    /* 0066059e: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006605a0: mov ecx, dword ptr [0x16306b0] */ r_ecx = R32((u32)(0x16306b0u));
    /* 006605a6: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x6605abu); f_005fb300();
    /* 006605ab: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 006605ae: mov dword ptr [ebp - 0x4c], 6 */ W32((u32)(r_ebp+0xffffffb4u), 0x6u);
    /* 006605b5: mov eax, dword ptr [0x16306b0] */ r_eax = R32((u32)(0x16306b0u));
    /* 006605ba: mov ecx, dword ptr [eax + 0x1bc] */ r_ecx = R32((u32)(r_eax+0x1bcu));
    /* 006605c0: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 006605c3: mov dword ptr [ebp - 0x44], 7 */ W32((u32)(r_ebp+0xffffffbcu), 0x7u);
    /* 006605ca: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006605cc: push 0x5f */ { u32 v = 0x5fu; r_esp -= 4; W32(r_esp, v); }
    /* 006605ce: mov ecx, dword ptr [0x16306b0] */ r_ecx = R32((u32)(0x16306b0u));
    /* 006605d4: call 0x5fb3f0 */ r_esp -= 4; W32(r_esp, 0x6605d9u); f_005fb3f0();
    /* 006605d9: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 006605dc: mov dword ptr [ebp - 0x3c], 8 */ W32((u32)(r_ebp+0xffffffc4u), 0x8u);
    /* 006605e3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006605e5: push 0x60 */ { u32 v = 0x60u; r_esp -= 4; W32(r_esp, v); }
    /* 006605e7: mov ecx, dword ptr [0x16306b0] */ r_ecx = R32((u32)(0x16306b0u));
    /* 006605ed: call 0x5fb3f0 */ r_esp -= 4; W32(r_esp, 0x6605f2u); f_005fb3f0();
    /* 006605f2: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 006605f5: mov dword ptr [ebp - 0x34], 9 */ W32((u32)(r_ebp+0xffffffccu), 0x9u);
    /* 006605fc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006605fe: mov ecx, dword ptr [0x16306b0] */ r_ecx = R32((u32)(0x16306b0u));
    /* 00660604: call 0x5fb720 */ r_esp -= 4; W32(r_esp, 0x660609u); f_005fb720();
    /* 00660609: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 0066060c: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 0066060f: mov dword ptr [ebp - 0x2c], 0xa */ W32((u32)(r_ebp+0xffffffd4u), 0xau);
    /* 00660616: push 0x63 */ { u32 v = 0x63u; r_esp -= 4; W32(r_esp, v); }
    /* 00660618: mov ecx, dword ptr [0x16306b0] */ r_ecx = R32((u32)(0x16306b0u));
    /* 0066061e: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x660623u); f_005fb300();
    /* 00660623: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00660626: mov dword ptr [ebp - 0x24], 0xb */ W32((u32)(r_ebp+0xffffffdcu), 0xbu);
    /* 0066062d: push 0x5b */ { u32 v = 0x5bu; r_esp -= 4; W32(r_esp, v); }
    /* 0066062f: mov ecx, dword ptr [0x16306b0] */ r_ecx = R32((u32)(0x16306b0u));
    /* 00660635: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x66063au); f_005fb300();
    /* 0066063a: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0066063d: mov dword ptr [ebp - 0x1c], 0xc */ W32((u32)(r_ebp+0xffffffe4u), 0xcu);
    /* 00660644: push 0x5c */ { u32 v = 0x5cu; r_esp -= 4; W32(r_esp, v); }
    /* 00660646: mov ecx, dword ptr [0x16306b0] */ r_ecx = R32((u32)(0x16306b0u));
    /* 0066064c: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x660651u); f_005fb5e0();
    /* 00660651: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00660654: mov dword ptr [ebp - 0x14], 0xd */ W32((u32)(r_ebp+0xffffffecu), 0xdu);
    /* 0066065b: mov dword ptr [ebp - 0xc], 0xe */ W32((u32)(r_ebp+0xfffffff4u), 0xeu);
    /* 00660662: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00660669: jmp 0x660674 */ goto L_00660674;
L_0066066b:; BB(0x0066066b);
    /* 0066066b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0066066e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00660671: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_00660674:; BB(0x00660674);
    /* 00660674: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00660677: cmp ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0066067a: jge 0x6606b7 */ if ((fS==fO)) goto L_006606b7;
L_0066067c:; BB(0x0066067c);
    /* 0066067c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0066067f: cmp dword ptr [ebp + edx*8 - 0x80], 0 */ {  u32 a = R32((u32)(r_ebp+r_edx*8+0xffffff80u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00660684: je 0x6606b5 */ if (fZ) goto L_006606b5;
L_00660686:; BB(0x00660686);
    /* 00660686: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00660689: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066068a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0066068d: mov edx, dword ptr [ebp + ecx*8 - 0x80] */ r_edx = R32((u32)(r_ebp+r_ecx*8+0xffffff80u));
    /* 00660691: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00660694: mov ecx, dword ptr [ebp + eax*8 - 0x80] */ r_ecx = R32((u32)(r_ebp+r_eax*8+0xffffff80u));
    /* 00660698: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0066069a: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 006606a0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6606a2u); call_ind(t); }
    /* 006606a2: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 006606a5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006606a7: je 0x6606b5 */ if (fZ) goto L_006606b5;
L_006606a9:; BB(0x006606a9);
    /* 006606a9: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006606ac: mov eax, dword ptr [ebp + edx*8 - 0x7c] */ r_eax = R32((u32)(r_ebp+r_edx*8+0xffffff84u));
    /* 006606b0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 006606b3: jmp 0x6606b7 */ goto L_006606b7;
L_006606b5:; BB(0x006606b5);
    /* 006606b5: jmp 0x66066b */ goto L_0066066b;
L_006606b7:; BB(0x006606b7);
    /* 006606b7: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006606bb: jne 0x6606ec */ if (!fZ) goto L_006606ec;
L_006606bd:; BB(0x006606bd);
    /* 006606bd: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006606c0: cmp dword ptr [ecx + 0x18], 3 */ {  u32 a = R32((u32)(r_ecx+0x18u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006606c4: jne 0x6606e7 */ if (!fZ) goto L_006606e7;
L_006606c6:; BB(0x006606c6);
    /* 006606c6: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 006606cb: mov edx, dword ptr [ebp - 0xc8] */ r_edx = R32((u32)(r_ebp+0xffffff38u));
    /* 006606d1: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 006606d4: mov ecx, dword ptr [ebp - 0xc8] */ r_ecx = R32((u32)(r_ebp+0xffffff38u));
    /* 006606da: mov ecx, dword ptr [ecx + 0x6c] */ r_ecx = R32((u32)(r_ecx+0x6cu));
    /* 006606dd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006606df: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 006606e5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6606e7u); call_ind(t); }
L_006606e7:; BB(0x006606e7);
    /* 006606e7: jmp 0x660b60 */ goto L_00660b60;
L_006606ec:; BB(0x006606ec);
    /* 006606ec: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006606f0: jne 0x660728 */ if (!fZ) goto L_00660728;
L_006606f2:; BB(0x006606f2);
    /* 006606f2: push 0x6df11c */ { u32 v = 0x6df11cu; r_esp -= 4; W32(r_esp, v); }
    /* 006606f7: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x6606fcu); f_00630f40();
    /* 006606fc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006606ff: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 00660705: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0066070b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066070c: mov edx, dword ptr [ebp - 0xc8] */ r_edx = R32((u32)(r_ebp+0xffffff38u));
    /* 00660712: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00660715: mov ecx, dword ptr [ebp - 0xc8] */ r_ecx = R32((u32)(r_ebp+0xffffff38u));
    /* 0066071b: mov ecx, dword ptr [ecx + 0x6c] */ r_ecx = R32((u32)(r_ecx+0x6cu));
    /* 0066071e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00660720: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00660726: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x660728u); call_ind(t); }
L_00660728:; BB(0x00660728);
    /* 00660728: cmp dword ptr [ebp - 4], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066072c: jne 0x6607cf */ if (!fZ) goto L_006607cf;
L_00660732:; BB(0x00660732);
    /* 00660732: push 0x6deca8 */ { u32 v = 0x6deca8u; r_esp -= 4; W32(r_esp, v); }
    /* 00660737: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x66073cu); f_00630f40();
    /* 0066073c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066073f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00660740: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00660742: mov ecx, dword ptr [0x16306b0] */ r_ecx = R32((u32)(0x16306b0u));
    /* 00660748: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x66074du); f_005fb300();
    /* 0066074d: mov ecx, eax */ r_ecx = r_eax;
    /* 0066074f: call 0x602b70 */ r_esp -= 4; W32(r_esp, 0x660754u); f_00602b70();
    /* 00660754: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00660755: call 0x686ec0 */ r_esp -= 4; W32(r_esp, 0x66075au); f_00686ec0();
    /* 0066075a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066075d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066075f: jne 0x660799 */ if (!fZ) goto L_00660799;
L_00660761:; BB(0x00660761);
    /* 00660761: push 0x6df0fc */ { u32 v = 0x6df0fcu; r_esp -= 4; W32(r_esp, v); }
    /* 00660766: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x66076bu); f_00630f40();
    /* 0066076b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066076e: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 00660774: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0066077a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066077b: mov edx, dword ptr [ebp - 0xc8] */ r_edx = R32((u32)(r_ebp+0xffffff38u));
    /* 00660781: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00660784: mov ecx, dword ptr [ebp - 0xc8] */ r_ecx = R32((u32)(r_ebp+0xffffff38u));
    /* 0066078a: mov ecx, dword ptr [ecx + 0x6c] */ r_ecx = R32((u32)(r_ecx+0x6cu));
    /* 0066078d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0066078f: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00660795: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x660797u); call_ind(t); }
    /* 00660797: jmp 0x6607cf */ goto L_006607cf;
L_00660799:; BB(0x00660799);
    /* 00660799: push 0x6df0dc */ { u32 v = 0x6df0dcu; r_esp -= 4; W32(r_esp, v); }
    /* 0066079e: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x6607a3u); f_00630f40();
    /* 006607a3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006607a6: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 006607ac: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 006607b2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006607b3: mov edx, dword ptr [ebp - 0xc8] */ r_edx = R32((u32)(r_ebp+0xffffff38u));
    /* 006607b9: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 006607bc: mov ecx, dword ptr [ebp - 0xc8] */ r_ecx = R32((u32)(r_ebp+0xffffff38u));
    /* 006607c2: mov ecx, dword ptr [ecx + 0x6c] */ r_ecx = R32((u32)(r_ecx+0x6cu));
    /* 006607c5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006607c7: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 006607cd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6607cfu); call_ind(t); }
L_006607cf:; BB(0x006607cf);
    /* 006607cf: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006607d3: jne 0x66080b */ if (!fZ) goto L_0066080b;
L_006607d5:; BB(0x006607d5);
    /* 006607d5: push 0x6df0c0 */ { u32 v = 0x6df0c0u; r_esp -= 4; W32(r_esp, v); }
    /* 006607da: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x6607dfu); f_00630f40();
    /* 006607df: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006607e2: mov dword ptr [ebp - 0x90], eax */ W32((u32)(r_ebp+0xffffff70u), r_eax);
    /* 006607e8: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 006607ee: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006607ef: mov edx, dword ptr [ebp - 0xc8] */ r_edx = R32((u32)(r_ebp+0xffffff38u));
    /* 006607f5: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 006607f8: mov ecx, dword ptr [ebp - 0xc8] */ r_ecx = R32((u32)(r_ebp+0xffffff38u));
    /* 006607fe: mov ecx, dword ptr [ecx + 0x6c] */ r_ecx = R32((u32)(r_ecx+0x6cu));
    /* 00660801: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00660803: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00660809: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66080bu); call_ind(t); }
L_0066080b:; BB(0x0066080b);
    /* 0066080b: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066080f: jne 0x660847 */ if (!fZ) goto L_00660847;
L_00660811:; BB(0x00660811);
    /* 00660811: push 0x6df0a0 */ { u32 v = 0x6df0a0u; r_esp -= 4; W32(r_esp, v); }
    /* 00660816: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x66081bu); f_00630f40();
    /* 0066081b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066081e: mov dword ptr [ebp - 0x94], eax */ W32((u32)(r_ebp+0xffffff6cu), r_eax);
    /* 00660824: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 0066082a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066082b: mov edx, dword ptr [ebp - 0xc8] */ r_edx = R32((u32)(r_ebp+0xffffff38u));
    /* 00660831: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00660834: mov ecx, dword ptr [ebp - 0xc8] */ r_ecx = R32((u32)(r_ebp+0xffffff38u));
    /* 0066083a: mov ecx, dword ptr [ecx + 0x6c] */ r_ecx = R32((u32)(r_ecx+0x6cu));
    /* 0066083d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0066083f: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00660845: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x660847u); call_ind(t); }
L_00660847:; BB(0x00660847);
    /* 00660847: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066084b: jne 0x660883 */ if (!fZ) goto L_00660883;
L_0066084d:; BB(0x0066084d);
    /* 0066084d: push 0x6df07c */ { u32 v = 0x6df07cu; r_esp -= 4; W32(r_esp, v); }
    /* 00660852: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x660857u); f_00630f40();
    /* 00660857: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066085a: mov dword ptr [ebp - 0x98], eax */ W32((u32)(r_ebp+0xffffff68u), r_eax);
    /* 00660860: mov ecx, dword ptr [ebp - 0x98] */ r_ecx = R32((u32)(r_ebp+0xffffff68u));
    /* 00660866: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00660867: mov edx, dword ptr [ebp - 0xc8] */ r_edx = R32((u32)(r_ebp+0xffffff38u));
    /* 0066086d: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00660870: mov ecx, dword ptr [ebp - 0xc8] */ r_ecx = R32((u32)(r_ebp+0xffffff38u));
    /* 00660876: mov ecx, dword ptr [ecx + 0x6c] */ r_ecx = R32((u32)(r_ecx+0x6cu));
    /* 00660879: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0066087b: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00660881: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x660883u); call_ind(t); }
L_00660883:; BB(0x00660883);
    /* 00660883: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00660887: jne 0x6608bf */ if (!fZ) goto L_006608bf;
L_00660889:; BB(0x00660889);
    /* 00660889: push 0x6df05c */ { u32 v = 0x6df05cu; r_esp -= 4; W32(r_esp, v); }
    /* 0066088e: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x660893u); f_00630f40();
    /* 00660893: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00660896: mov dword ptr [ebp - 0x9c], eax */ W32((u32)(r_ebp+0xffffff64u), r_eax);
    /* 0066089c: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 006608a2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006608a3: mov edx, dword ptr [ebp - 0xc8] */ r_edx = R32((u32)(r_ebp+0xffffff38u));
    /* 006608a9: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 006608ac: mov ecx, dword ptr [ebp - 0xc8] */ r_ecx = R32((u32)(r_ebp+0xffffff38u));
    /* 006608b2: mov ecx, dword ptr [ecx + 0x6c] */ r_ecx = R32((u32)(r_ecx+0x6cu));
    /* 006608b5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006608b7: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 006608bd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6608bfu); call_ind(t); }
L_006608bf:; BB(0x006608bf);
    /* 006608bf: cmp dword ptr [ebp - 4], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006608c3: jne 0x6608fb */ if (!fZ) goto L_006608fb;
L_006608c5:; BB(0x006608c5);
    /* 006608c5: push 0x6df03c */ { u32 v = 0x6df03cu; r_esp -= 4; W32(r_esp, v); }
    /* 006608ca: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x6608cfu); f_00630f40();
    /* 006608cf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006608d2: mov dword ptr [ebp - 0xa0], eax */ W32((u32)(r_ebp+0xffffff60u), r_eax);
    /* 006608d8: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 006608de: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006608df: mov edx, dword ptr [ebp - 0xc8] */ r_edx = R32((u32)(r_ebp+0xffffff38u));
    /* 006608e5: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 006608e8: mov ecx, dword ptr [ebp - 0xc8] */ r_ecx = R32((u32)(r_ebp+0xffffff38u));
    /* 006608ee: mov ecx, dword ptr [ecx + 0x6c] */ r_ecx = R32((u32)(r_ecx+0x6cu));
    /* 006608f1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006608f3: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 006608f9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6608fbu); call_ind(t); }
L_006608fb:; BB(0x006608fb);
    /* 006608fb: cmp dword ptr [ebp - 4], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006608ff: jne 0x6609f8 */ if (!fZ) goto L_006609f8;
L_00660905:; BB(0x00660905);
    /* 00660905: mov ecx, dword ptr [0x16306b0] */ r_ecx = R32((u32)(0x16306b0u));
    /* 0066090b: mov edx, dword ptr [ecx + 0x1bc] */ r_edx = R32((u32)(r_ecx+0x1bcu));
    /* 00660911: movzx eax, byte ptr [edx + 0x88] */ r_eax = (u32)R8((u32)(r_edx+0x88u));
    /* 00660918: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066091a: je 0x66096b */ if (fZ) goto L_0066096b;
L_0066091c:; BB(0x0066091c);
    /* 0066091c: mov ecx, dword ptr [0x16306b0] */ r_ecx = R32((u32)(0x16306b0u));
    /* 00660922: call 0x65c7f0 */ r_esp -= 4; W32(r_esp, 0x660927u); f_0065c7f0();
    /* 00660927: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0066092a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066092c: je 0x66096b */ if (fZ) goto L_0066096b;
L_0066092e:; BB(0x0066092e);
    /* 0066092e: push 0x6df014 */ { u32 v = 0x6df014u; r_esp -= 4; W32(r_esp, v); }
    /* 00660933: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x660938u); f_00630f40();
    /* 00660938: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066093b: mov dword ptr [ebp - 0xa4], eax */ W32((u32)(r_ebp+0xffffff5cu), r_eax);
    /* 00660941: mov edx, dword ptr [ebp - 0xa4] */ r_edx = R32((u32)(r_ebp+0xffffff5cu));
    /* 00660947: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00660948: mov eax, dword ptr [ebp - 0xc8] */ r_eax = R32((u32)(r_ebp+0xffffff38u));
    /* 0066094e: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 00660951: mov edx, dword ptr [ebp - 0xc8] */ r_edx = R32((u32)(r_ebp+0xffffff38u));
    /* 00660957: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0066095a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066095c: mov ecx, eax */ r_ecx = r_eax;
    /* 0066095e: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00660964: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x660966u); call_ind(t); }
    /* 00660966: jmp 0x6609f8 */ goto L_006609f8;
L_0066096b:; BB(0x0066096b);
    /* 0066096b: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00660971: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00660973: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00660979: mov eax, dword ptr [edx + 0xc8] */ r_eax = R32((u32)(r_edx+0xc8u));
    /* 0066097f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x660981u); call_ind(t); }
    /* 00660981: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00660984: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00660986: je 0x6609c2 */ if (fZ) goto L_006609c2;
L_00660988:; BB(0x00660988);
    /* 00660988: push 0x6defec */ { u32 v = 0x6defecu; r_esp -= 4; W32(r_esp, v); }
    /* 0066098d: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x660992u); f_00630f40();
    /* 00660992: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00660995: mov dword ptr [ebp - 0xa8], eax */ W32((u32)(r_ebp+0xffffff58u), r_eax);
    /* 0066099b: mov edx, dword ptr [ebp - 0xa8] */ r_edx = R32((u32)(r_ebp+0xffffff58u));
    /* 006609a1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006609a2: mov eax, dword ptr [ebp - 0xc8] */ r_eax = R32((u32)(r_ebp+0xffffff38u));
    /* 006609a8: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 006609ab: mov edx, dword ptr [ebp - 0xc8] */ r_edx = R32((u32)(r_ebp+0xffffff38u));
    /* 006609b1: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 006609b4: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006609b6: mov ecx, eax */ r_ecx = r_eax;
    /* 006609b8: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 006609be: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6609c0u); call_ind(t); }
    /* 006609c0: jmp 0x6609f8 */ goto L_006609f8;
L_006609c2:; BB(0x006609c2);
    /* 006609c2: push 0x6defc0 */ { u32 v = 0x6defc0u; r_esp -= 4; W32(r_esp, v); }
    /* 006609c7: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x6609ccu); f_00630f40();
    /* 006609cc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006609cf: mov dword ptr [ebp - 0xac], eax */ W32((u32)(r_ebp+0xffffff54u), r_eax);
    /* 006609d5: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 006609db: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006609dc: mov edx, dword ptr [ebp - 0xc8] */ r_edx = R32((u32)(r_ebp+0xffffff38u));
    /* 006609e2: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 006609e5: mov ecx, dword ptr [ebp - 0xc8] */ r_ecx = R32((u32)(r_ebp+0xffffff38u));
    /* 006609eb: mov ecx, dword ptr [ecx + 0x6c] */ r_ecx = R32((u32)(r_ecx+0x6cu));
    /* 006609ee: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006609f0: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 006609f6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6609f8u); call_ind(t); }
L_006609f8:; BB(0x006609f8);
    /* 006609f8: cmp dword ptr [ebp - 4], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006609fc: jne 0x660a34 */ if (!fZ) goto L_00660a34;
L_006609fe:; BB(0x006609fe);
    /* 006609fe: push 0x6def98 */ { u32 v = 0x6def98u; r_esp -= 4; W32(r_esp, v); }
    /* 00660a03: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x660a08u); f_00630f40();
    /* 00660a08: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00660a0b: mov dword ptr [ebp - 0xb0], eax */ W32((u32)(r_ebp+0xffffff50u), r_eax);
    /* 00660a11: mov ecx, dword ptr [ebp - 0xb0] */ r_ecx = R32((u32)(r_ebp+0xffffff50u));
    /* 00660a17: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00660a18: mov edx, dword ptr [ebp - 0xc8] */ r_edx = R32((u32)(r_ebp+0xffffff38u));
    /* 00660a1e: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00660a21: mov ecx, dword ptr [ebp - 0xc8] */ r_ecx = R32((u32)(r_ebp+0xffffff38u));
    /* 00660a27: mov ecx, dword ptr [ecx + 0x6c] */ r_ecx = R32((u32)(r_ecx+0x6cu));
    /* 00660a2a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00660a2c: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00660a32: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x660a34u); call_ind(t); }
L_00660a34:; BB(0x00660a34);
    /* 00660a34: cmp dword ptr [ebp - 4], 9 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00660a38: jne 0x660a70 */ if (!fZ) goto L_00660a70;
L_00660a3a:; BB(0x00660a3a);
    /* 00660a3a: push 0x6def70 */ { u32 v = 0x6def70u; r_esp -= 4; W32(r_esp, v); }
    /* 00660a3f: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x660a44u); f_00630f40();
    /* 00660a44: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00660a47: mov dword ptr [ebp - 0xb4], eax */ W32((u32)(r_ebp+0xffffff4cu), r_eax);
    /* 00660a4d: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00660a53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00660a54: mov edx, dword ptr [ebp - 0xc8] */ r_edx = R32((u32)(r_ebp+0xffffff38u));
    /* 00660a5a: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00660a5d: mov ecx, dword ptr [ebp - 0xc8] */ r_ecx = R32((u32)(r_ebp+0xffffff38u));
    /* 00660a63: mov ecx, dword ptr [ecx + 0x6c] */ r_ecx = R32((u32)(r_ecx+0x6cu));
    /* 00660a66: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00660a68: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00660a6e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x660a70u); call_ind(t); }
L_00660a70:; BB(0x00660a70);
    /* 00660a70: cmp dword ptr [ebp - 4], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00660a74: jne 0x660aac */ if (!fZ) goto L_00660aac;
L_00660a76:; BB(0x00660a76);
    /* 00660a76: push 0x6def4c */ { u32 v = 0x6def4cu; r_esp -= 4; W32(r_esp, v); }
    /* 00660a7b: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x660a80u); f_00630f40();
    /* 00660a80: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00660a83: mov dword ptr [ebp - 0xb8], eax */ W32((u32)(r_ebp+0xffffff48u), r_eax);
    /* 00660a89: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 00660a8f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00660a90: mov edx, dword ptr [ebp - 0xc8] */ r_edx = R32((u32)(r_ebp+0xffffff38u));
    /* 00660a96: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00660a99: mov ecx, dword ptr [ebp - 0xc8] */ r_ecx = R32((u32)(r_ebp+0xffffff38u));
    /* 00660a9f: mov ecx, dword ptr [ecx + 0x6c] */ r_ecx = R32((u32)(r_ecx+0x6cu));
    /* 00660aa2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00660aa4: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00660aaa: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x660aacu); call_ind(t); }
L_00660aac:; BB(0x00660aac);
    /* 00660aac: cmp dword ptr [ebp - 4], 0xb */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00660ab0: jne 0x660ae8 */ if (!fZ) goto L_00660ae8;
L_00660ab2:; BB(0x00660ab2);
    /* 00660ab2: push 0x6def28 */ { u32 v = 0x6def28u; r_esp -= 4; W32(r_esp, v); }
    /* 00660ab7: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x660abcu); f_00630f40();
    /* 00660abc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00660abf: mov dword ptr [ebp - 0xbc], eax */ W32((u32)(r_ebp+0xffffff44u), r_eax);
    /* 00660ac5: mov ecx, dword ptr [ebp - 0xbc] */ r_ecx = R32((u32)(r_ebp+0xffffff44u));
    /* 00660acb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00660acc: mov edx, dword ptr [ebp - 0xc8] */ r_edx = R32((u32)(r_ebp+0xffffff38u));
    /* 00660ad2: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00660ad5: mov ecx, dword ptr [ebp - 0xc8] */ r_ecx = R32((u32)(r_ebp+0xffffff38u));
    /* 00660adb: mov ecx, dword ptr [ecx + 0x6c] */ r_ecx = R32((u32)(r_ecx+0x6cu));
    /* 00660ade: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00660ae0: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00660ae6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x660ae8u); call_ind(t); }
L_00660ae8:; BB(0x00660ae8);
    /* 00660ae8: cmp dword ptr [ebp - 4], 0xc */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00660aec: jne 0x660b24 */ if (!fZ) goto L_00660b24;
L_00660aee:; BB(0x00660aee);
    /* 00660aee: push 0x6def00 */ { u32 v = 0x6def00u; r_esp -= 4; W32(r_esp, v); }
    /* 00660af3: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x660af8u); f_00630f40();
    /* 00660af8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00660afb: mov dword ptr [ebp - 0xc0], eax */ W32((u32)(r_ebp+0xffffff40u), r_eax);
    /* 00660b01: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 00660b07: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00660b08: mov edx, dword ptr [ebp - 0xc8] */ r_edx = R32((u32)(r_ebp+0xffffff38u));
    /* 00660b0e: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00660b11: mov ecx, dword ptr [ebp - 0xc8] */ r_ecx = R32((u32)(r_ebp+0xffffff38u));
    /* 00660b17: mov ecx, dword ptr [ecx + 0x6c] */ r_ecx = R32((u32)(r_ecx+0x6cu));
    /* 00660b1a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00660b1c: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00660b22: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x660b24u); call_ind(t); }
L_00660b24:; BB(0x00660b24);
    /* 00660b24: cmp dword ptr [ebp - 4], 0xd */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00660b28: jne 0x660b60 */ if (!fZ) goto L_00660b60;
L_00660b2a:; BB(0x00660b2a);
    /* 00660b2a: push 0x6deed8 */ { u32 v = 0x6deed8u; r_esp -= 4; W32(r_esp, v); }
    /* 00660b2f: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x660b34u); f_00630f40();
    /* 00660b34: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00660b37: mov dword ptr [ebp - 0xc4], eax */ W32((u32)(r_ebp+0xffffff3cu), r_eax);
    /* 00660b3d: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 00660b43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00660b44: mov edx, dword ptr [ebp - 0xc8] */ r_edx = R32((u32)(r_ebp+0xffffff38u));
    /* 00660b4a: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00660b4d: mov ecx, dword ptr [ebp - 0xc8] */ r_ecx = R32((u32)(r_ebp+0xffffff38u));
    /* 00660b53: mov ecx, dword ptr [ecx + 0x6c] */ r_ecx = R32((u32)(r_ecx+0x6cu));
    /* 00660b56: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00660b58: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00660b5e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x660b60u); call_ind(t); }
L_00660b60:; BB(0x00660b60);
    /* 00660b60: mov esp, ebp */ r_esp = r_ebp;
    /* 00660b62: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00660b63: ret 4 */ FN_RET(0x006604f0); r_esp += 8; return;
}

