#include "protos.h"

void f_005911e0(void) /* FourCardPokerDealerDisplay::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005911e0);
    /* 005911e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005911e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005911e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005911e5: push 0x6a70c3 */ { u32 v = 0x6a70c3u; r_esp -= 4; W32(r_esp, v); }
    /* 005911ea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005911f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005911f1: sub esp, 0xfc */ {  u32 a = r_esp; u32 b = 0xfcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005911f7: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005911fc: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005911fe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005911ff: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00591202: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00591208: mov dword ptr [ebp - 0xe8], ecx */ W32((u32)(r_ebp+0xffffff18u), r_ecx);
    /* 0059120e: mov dword ptr [ebp - 0x3c], 5 */ W32((u32)(r_ebp+0xffffffc4u), 0x5u);
    /* 00591215: mov dword ptr [ebp - 0x38], 4 */ W32((u32)(r_ebp+0xffffffc8u), 0x4u);
    /* 0059121c: mov dword ptr [ebp - 0x34], 3 */ W32((u32)(r_ebp+0xffffffccu), 0x3u);
    /* 00591223: mov dword ptr [ebp - 0x30], 8 */ W32((u32)(r_ebp+0xffffffd0u), 0x8u);
    /* 0059122a: mov dword ptr [ebp - 0x2c], 7 */ W32((u32)(r_ebp+0xffffffd4u), 0x7u);
    /* 00591231: mov dword ptr [ebp - 0x28], 6 */ W32((u32)(r_ebp+0xffffffd8u), 0x6u);
    /* 00591238: mov dword ptr [ebp - 0x24], 2 */ W32((u32)(r_ebp+0xffffffdcu), 0x2u);
    /* 0059123f: mov dword ptr [ebp - 0x20], 1 */ W32((u32)(r_ebp+0xffffffe0u), 0x1u);
    /* 00591246: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 0059124d: mov dword ptr [ebp - 0x18], 0xb */ W32((u32)(r_ebp+0xffffffe8u), 0xbu);
    /* 00591254: mov dword ptr [ebp - 0x14], 0xa */ W32((u32)(r_ebp+0xffffffecu), 0xau);
    /* 0059125b: mov dword ptr [ebp - 0x10], 9 */ W32((u32)(r_ebp+0xfffffff0u), 0x9u);
    /* 00591262: mov dword ptr [ebp - 0x9c], 0x171 */ W32((u32)(r_ebp+0xffffff64u), 0x171u);
    /* 0059126c: mov dword ptr [ebp - 0x98], 0x151 */ W32((u32)(r_ebp+0xffffff68u), 0x151u);
    /* 00591276: mov dword ptr [ebp - 0x94], 0x165 */ W32((u32)(r_ebp+0xffffff6cu), 0x165u);
    /* 00591280: mov dword ptr [ebp - 0x90], 0x126 */ W32((u32)(r_ebp+0xffffff70u), 0x126u);
    /* 0059128a: mov dword ptr [ebp - 0x8c], 0x158 */ W32((u32)(r_ebp+0xffffff74u), 0x158u);
    /* 00591294: mov dword ptr [ebp - 0x88], 0x100 */ W32((u32)(r_ebp+0xffffff78u), 0x100u);
    /* 0059129e: mov dword ptr [ebp - 0x84], 0xc6 */ W32((u32)(r_ebp+0xffffff7cu), 0xc6u);
    /* 005912a8: mov dword ptr [ebp - 0x80], 0x150 */ W32((u32)(r_ebp+0xffffff80u), 0x150u);
    /* 005912af: mov dword ptr [ebp - 0x7c], 0xd0 */ W32((u32)(r_ebp+0xffffff84u), 0xd0u);
    /* 005912b6: mov dword ptr [ebp - 0x78], 0x128 */ W32((u32)(r_ebp+0xffffff88u), 0x128u);
    /* 005912bd: mov dword ptr [ebp - 0x74], 0xd8 */ W32((u32)(r_ebp+0xffffff8cu), 0xd8u);
    /* 005912c4: mov dword ptr [ebp - 0x70], 0x104 */ W32((u32)(r_ebp+0xffffff90u), 0x104u);
    /* 005912cb: mov dword ptr [ebp - 0x6c], 0x224 */ W32((u32)(r_ebp+0xffffff94u), 0x224u);
    /* 005912d2: mov dword ptr [ebp - 0x68], 0x10f */ W32((u32)(r_ebp+0xffffff98u), 0x10fu);
    /* 005912d9: mov dword ptr [ebp - 0x64], 0x20c */ W32((u32)(r_ebp+0xffffff9cu), 0x20cu);
    /* 005912e0: mov dword ptr [ebp - 0x60], 0xf1 */ W32((u32)(r_ebp+0xffffffa0u), 0xf1u);
    /* 005912e7: mov dword ptr [ebp - 0x5c], 0x1f5 */ W32((u32)(r_ebp+0xffffffa4u), 0x1f5u);
    /* 005912ee: mov dword ptr [ebp - 0x58], 0xd4 */ W32((u32)(r_ebp+0xffffffa8u), 0xd4u);
    /* 005912f5: mov dword ptr [ebp - 0x54], 0x23 */ W32((u32)(r_ebp+0xffffffacu), 0x23u);
    /* 005912fc: mov dword ptr [ebp - 0x50], 0x114 */ W32((u32)(r_ebp+0xffffffb0u), 0x114u);
    /* 00591303: mov dword ptr [ebp - 0x4c], 0x3c */ W32((u32)(r_ebp+0xffffffb4u), 0x3cu);
    /* 0059130a: mov dword ptr [ebp - 0x48], 0xf6 */ W32((u32)(r_ebp+0xffffffb8u), 0xf6u);
    /* 00591311: mov dword ptr [ebp - 0x44], 0x63 */ W32((u32)(r_ebp+0xffffffbcu), 0x63u);
    /* 00591318: mov dword ptr [ebp - 0x40], 0xd8 */ W32((u32)(r_ebp+0xffffffc0u), 0xd8u);
    /* 0059131f: push 0x6ce1b8 */ { u32 v = 0x6ce1b8u; r_esp -= 4; W32(r_esp, v); }
    /* 00591324: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x591329u); f_00630f40();
    /* 00591329: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059132c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059132d: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00591333: call 0x5f38b0 */ r_esp -= 4; W32(r_esp, 0x591338u); f_005f38b0();
    /* 00591338: push 0xfde9 */ { u32 v = 0xfde9u; r_esp -= 4; W32(r_esp, v); }
    /* 0059133d: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00591343: call 0x5f1ad0 */ r_esp -= 4; W32(r_esp, 0x591348u); f_005f1ad0();
    /* 00591348: push 0x314d1b */ { u32 v = 0x314d1bu; r_esp -= 4; W32(r_esp, v); }
    /* 0059134d: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00591353: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x591358u); f_005f2ba0();
    /* 00591358: push 0x314d1c */ { u32 v = 0x314d1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0059135d: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00591363: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x591368u); f_005f2ba0();
    /* 00591368: mov dword ptr [ebp - 0xa0], 0 */ W32((u32)(r_ebp+0xffffff60u), 0x0u);
    /* 00591372: jmp 0x591383 */ goto L_00591383;
L_00591374:; BB(0x00591374);
    /* 00591374: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 0059137a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0059137d: mov dword ptr [ebp - 0xa0], eax */ W32((u32)(r_ebp+0xffffff60u), r_eax);
L_00591383:; BB(0x00591383);
    /* 00591383: cmp dword ptr [ebp - 0xa0], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffff60u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059138a: jge 0x5914b3 */ if ((fS==fO)) goto L_005914b3;
L_00591390:; BB(0x00591390);
    /* 00591390: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00591392: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x591397u); f_00686d82();
    /* 00591397: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059139a: mov dword ptr [ebp - 0xac], eax */ W32((u32)(r_ebp+0xffffff54u), r_eax);
    /* 005913a0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005913a7: cmp dword ptr [ebp - 0xac], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff54u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005913ae: je 0x5913c3 */ if (fZ) goto L_005913c3;
L_005913b0:; BB(0x005913b0);
    /* 005913b0: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 005913b6: call 0x594090 */ r_esp -= 4; W32(r_esp, 0x5913bbu); f_00594090();
    /* 005913bb: mov dword ptr [ebp - 0xec], eax */ W32((u32)(r_ebp+0xffffff14u), r_eax);
    /* 005913c1: jmp 0x5913cd */ goto L_005913cd;
L_005913c3:; BB(0x005913c3);
    /* 005913c3: mov dword ptr [ebp - 0xec], 0 */ W32((u32)(r_ebp+0xffffff14u), 0x0u);
L_005913cd:; BB(0x005913cd);
    /* 005913cd: mov ecx, dword ptr [ebp - 0xec] */ r_ecx = R32((u32)(r_ebp+0xffffff14u));
    /* 005913d3: mov dword ptr [ebp - 0xa8], ecx */ W32((u32)(r_ebp+0xffffff58u), r_ecx);
    /* 005913d9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005913e0: mov edx, dword ptr [ebp - 0xa0] */ r_edx = R32((u32)(r_ebp+0xffffff60u));
    /* 005913e6: mov eax, dword ptr [ebp - 0xe8] */ r_eax = R32((u32)(r_ebp+0xffffff18u));
    /* 005913ec: mov ecx, dword ptr [ebp - 0xa8] */ r_ecx = R32((u32)(r_ebp+0xffffff58u));
    /* 005913f2: mov dword ptr [eax + edx*4 + 4], ecx */ W32((u32)(r_eax+r_edx*4+0x4u), r_ecx);
    /* 005913f6: mov edx, dword ptr [ebp - 0xa0] */ r_edx = R32((u32)(r_ebp+0xffffff60u));
    /* 005913fc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005913fd: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 00591403: mov ecx, dword ptr [ebp - 0xe8] */ r_ecx = R32((u32)(r_ebp+0xffffff18u));
    /* 00591409: mov ecx, dword ptr [ecx + eax*4 + 4] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 0059140d: call 0x594190 */ r_esp -= 4; W32(r_esp, 0x591412u); f_00594190();
    /* 00591412: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 00591417: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x59141cu); f_00686d82();
    /* 0059141c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059141f: mov dword ptr [ebp - 0xb4], eax */ W32((u32)(r_ebp+0xffffff4cu), r_eax);
    /* 00591425: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0059142c: cmp dword ptr [ebp - 0xb4], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff4cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00591433: je 0x591448 */ if (fZ) goto L_00591448;
L_00591435:; BB(0x00591435);
    /* 00591435: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0059143b: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x591440u); f_005ec5a0();
    /* 00591440: mov dword ptr [ebp - 0xf0], eax */ W32((u32)(r_ebp+0xffffff10u), r_eax);
    /* 00591446: jmp 0x591452 */ goto L_00591452;
L_00591448:; BB(0x00591448);
    /* 00591448: mov dword ptr [ebp - 0xf0], 0 */ W32((u32)(r_ebp+0xffffff10u), 0x0u);
L_00591452:; BB(0x00591452);
    /* 00591452: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 00591458: mov dword ptr [ebp - 0xb0], edx */ W32((u32)(r_ebp+0xffffff50u), r_edx);
    /* 0059145e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00591465: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 0059146b: mov ecx, dword ptr [ebp - 0xe8] */ r_ecx = R32((u32)(r_ebp+0xffffff18u));
    /* 00591471: mov edx, dword ptr [ebp - 0xb0] */ r_edx = R32((u32)(r_ebp+0xffffff50u));
    /* 00591477: mov dword ptr [ecx + eax*4 + 0x80], edx */ W32((u32)(r_ecx+r_eax*4+0x80u), r_edx);
    /* 0059147e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00591480: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 00591482: push 0x51 */ { u32 v = 0x51u; r_esp -= 4; W32(r_esp, v); }
    /* 00591484: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00591486: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00591488: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0059148a: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 0059148f: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 00591491: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00591496: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 0059149c: mov ecx, dword ptr [ebp - 0xe8] */ r_ecx = R32((u32)(r_ebp+0xffffff18u));
    /* 005914a2: mov ecx, dword ptr [ecx + eax*4 + 0x80] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x80u));
    /* 005914a9: call 0x5ec8f0 */ r_esp -= 4; W32(r_esp, 0x5914aeu); f_005ec8f0();
    /* 005914ae: jmp 0x591374 */ goto L_00591374;
L_005914b3:; BB(0x005914b3);
    /* 005914b3: mov dword ptr [ebp - 0xa4], 0 */ W32((u32)(r_ebp+0xffffff5cu), 0x0u);
    /* 005914bd: jmp 0x5914ce */ goto L_005914ce;
L_005914bf:; BB(0x005914bf);
    /* 005914bf: mov edx, dword ptr [ebp - 0xa4] */ r_edx = R32((u32)(r_ebp+0xffffff5cu));
    /* 005914c5: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005914c8: mov dword ptr [ebp - 0xa4], edx */ W32((u32)(r_ebp+0xffffff5cu), r_edx);
L_005914ce:; BB(0x005914ce);
    /* 005914ce: cmp dword ptr [ebp - 0xa4], 0xc */ {  u32 a = R32((u32)(r_ebp+0xffffff5cu)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005914d5: jge 0x5916ec */ if ((fS==fO)) goto L_005916ec;
L_005914db:; BB(0x005914db);
    /* 005914db: push 0xae4 */ { u32 v = 0xae4u; r_esp -= 4; W32(r_esp, v); }
    /* 005914e0: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5914e5u); f_00686d82();
    /* 005914e5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005914e8: mov dword ptr [ebp - 0xbc], eax */ W32((u32)(r_ebp+0xffffff44u), r_eax);
    /* 005914ee: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 005914f5: cmp dword ptr [ebp - 0xbc], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff44u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005914fc: je 0x591511 */ if (fZ) goto L_00591511;
L_005914fe:; BB(0x005914fe);
    /* 005914fe: mov ecx, dword ptr [ebp - 0xbc] */ r_ecx = R32((u32)(r_ebp+0xffffff44u));
    /* 00591504: call 0x5926f0 */ r_esp -= 4; W32(r_esp, 0x591509u); f_005926f0();
    /* 00591509: mov dword ptr [ebp - 0xf4], eax */ W32((u32)(r_ebp+0xffffff0cu), r_eax);
    /* 0059150f: jmp 0x59151b */ goto L_0059151b;
L_00591511:; BB(0x00591511);
    /* 00591511: mov dword ptr [ebp - 0xf4], 0 */ W32((u32)(r_ebp+0xffffff0cu), 0x0u);
L_0059151b:; BB(0x0059151b);
    /* 0059151b: mov eax, dword ptr [ebp - 0xf4] */ r_eax = R32((u32)(r_ebp+0xffffff0cu));
    /* 00591521: mov dword ptr [ebp - 0xb8], eax */ W32((u32)(r_ebp+0xffffff48u), r_eax);
    /* 00591527: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0059152e: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 00591534: mov edx, dword ptr [ebp - 0xe8] */ r_edx = R32((u32)(r_ebp+0xffffff18u));
    /* 0059153a: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 00591540: mov dword ptr [edx + ecx*4 + 0x18], eax */ W32((u32)(r_edx+r_ecx*4+0x18u), r_eax);
    /* 00591544: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 0059154a: mov edx, dword ptr [ebp - 0xe8] */ r_edx = R32((u32)(r_ebp+0xffffff18u));
    /* 00591550: mov eax, dword ptr [edx + ecx*4 + 0x18] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x18u));
    /* 00591554: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 0059155a: mov dword ptr [eax + 0xae0], ecx */ W32((u32)(r_eax+0xae0u), r_ecx);
    /* 00591560: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00591562: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00591564: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00591566: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00591568: push 0x310e9e */ { u32 v = 0x310e9eu; r_esp -= 4; W32(r_esp, v); }
    /* 0059156d: mov edx, dword ptr [ebp - 0xa4] */ r_edx = R32((u32)(r_ebp+0xffffff5cu));
    /* 00591573: mov eax, dword ptr [ebp - 0xe8] */ r_eax = R32((u32)(r_ebp+0xffffff18u));
    /* 00591579: mov ecx, dword ptr [eax + edx*4 + 0x18] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x18u));
    /* 0059157d: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x591582u); f_005eae80();
    /* 00591582: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 00591588: mov edx, dword ptr [ebp + ecx*4 - 0x3c] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffc4u));
    /* 0059158c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059158d: mov eax, dword ptr [ebp - 0xa4] */ r_eax = R32((u32)(r_ebp+0xffffff5cu));
    /* 00591593: mov ecx, dword ptr [ebp - 0xe8] */ r_ecx = R32((u32)(r_ebp+0xffffff18u));
    /* 00591599: mov edx, dword ptr [ecx + eax*4 + 0x18] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x18u));
    /* 0059159d: mov eax, dword ptr [ebp - 0xa4] */ r_eax = R32((u32)(r_ebp+0xffffff5cu));
    /* 005915a3: mov ecx, dword ptr [ebp - 0xe8] */ r_ecx = R32((u32)(r_ebp+0xffffff18u));
    /* 005915a9: mov ecx, dword ptr [ecx + eax*4 + 0x18] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x18u));
    /* 005915ad: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005915af: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005915b5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5915b7u); call_ind(t); }
    /* 005915b7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005915b9: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 005915bf: mov edx, dword ptr [ebp - 0xe8] */ r_edx = R32((u32)(r_ebp+0xffffff18u));
    /* 005915c5: mov ecx, dword ptr [edx + ecx*4 + 0x18] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x18u));
    /* 005915c9: call 0x5eb5d0 */ r_esp -= 4; W32(r_esp, 0x5915ceu); f_005eb5d0();
    /* 005915ce: mov eax, dword ptr [ebp - 0xa4] */ r_eax = R32((u32)(r_ebp+0xffffff5cu));
    /* 005915d4: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 005915da: mov edx, dword ptr [ecx + eax*4 + 8] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x8u));
    /* 005915de: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005915df: mov eax, dword ptr [ebp - 0xa4] */ r_eax = R32((u32)(r_ebp+0xffffff5cu));
    /* 005915e5: mov ecx, dword ptr [ebp - 0xe8] */ r_ecx = R32((u32)(r_ebp+0xffffff18u));
    /* 005915eb: mov ecx, dword ptr [ecx + eax*4 + 0x18] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x18u));
    /* 005915ef: call 0x5cc2c0 */ r_esp -= 4; W32(r_esp, 0x5915f4u); f_005cc2c0();
    /* 005915f4: mov edx, dword ptr [ebp - 0xa4] */ r_edx = R32((u32)(r_ebp+0xffffff5cu));
    /* 005915fa: mov eax, dword ptr [ebp - 0xe8] */ r_eax = R32((u32)(r_ebp+0xffffff18u));
    /* 00591600: mov ecx, dword ptr [eax + edx*4 + 0x18] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x18u));
    /* 00591604: mov edx, dword ptr [ebp - 0xa4] */ r_edx = R32((u32)(r_ebp+0xffffff5cu));
    /* 0059160a: mov eax, dword ptr [ebp - 0xe8] */ r_eax = R32((u32)(r_ebp+0xffffff18u));
    /* 00591610: mov edx, dword ptr [eax + edx*4 + 0x18] */ r_edx = R32((u32)(r_eax+r_edx*4+0x18u));
    /* 00591614: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00591616: mov ecx, edx */ r_ecx = r_edx;
    /* 00591618: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 0059161b: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x59161du); call_ind(t); }
    /* 0059161d: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 00591622: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x591627u); f_00686d82();
    /* 00591627: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059162a: mov dword ptr [ebp - 0xc4], eax */ W32((u32)(r_ebp+0xffffff3cu), r_eax);
    /* 00591630: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 00591637: cmp dword ptr [ebp - 0xc4], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff3cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059163e: je 0x591653 */ if (fZ) goto L_00591653;
L_00591640:; BB(0x00591640);
    /* 00591640: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 00591646: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x59164bu); f_005eaaf0();
    /* 0059164b: mov dword ptr [ebp - 0xf8], eax */ W32((u32)(r_ebp+0xffffff08u), r_eax);
    /* 00591651: jmp 0x59165d */ goto L_0059165d;
L_00591653:; BB(0x00591653);
    /* 00591653: mov dword ptr [ebp - 0xf8], 0 */ W32((u32)(r_ebp+0xffffff08u), 0x0u);
L_0059165d:; BB(0x0059165d);
    /* 0059165d: mov eax, dword ptr [ebp - 0xf8] */ r_eax = R32((u32)(r_ebp+0xffffff08u));
    /* 00591663: mov dword ptr [ebp - 0xc0], eax */ W32((u32)(r_ebp+0xffffff40u), r_eax);
    /* 00591669: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00591670: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 00591676: mov edx, dword ptr [ebp - 0xe8] */ r_edx = R32((u32)(r_ebp+0xffffff18u));
    /* 0059167c: mov eax, dword ptr [ebp - 0xc0] */ r_eax = R32((u32)(r_ebp+0xffffff40u));
    /* 00591682: mov dword ptr [edx + ecx*4 + 0x50], eax */ W32((u32)(r_edx+r_ecx*4+0x50u), r_eax);
    /* 00591686: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00591688: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0059168a: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 00591690: mov edx, dword ptr [ebp + ecx*8 - 0x98] */ r_edx = R32((u32)(r_ebp+r_ecx*8+0xffffff68u));
    /* 00591697: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00591698: mov eax, dword ptr [ebp - 0xa4] */ r_eax = R32((u32)(r_ebp+0xffffff5cu));
    /* 0059169e: mov ecx, dword ptr [ebp + eax*8 - 0x9c] */ r_ecx = R32((u32)(r_ebp+r_eax*8+0xffffff64u));
    /* 005916a5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005916a6: push 0x311292 */ { u32 v = 0x311292u; r_esp -= 4; W32(r_esp, v); }
    /* 005916ab: mov edx, dword ptr [ebp - 0xa4] */ r_edx = R32((u32)(r_ebp+0xffffff5cu));
    /* 005916b1: mov eax, dword ptr [ebp - 0xe8] */ r_eax = R32((u32)(r_ebp+0xffffff18u));
    /* 005916b7: mov ecx, dword ptr [eax + edx*4 + 0x50] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x50u));
    /* 005916bb: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x5916c0u); f_005eae80();
    /* 005916c0: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 005916c6: mov edx, dword ptr [ebp - 0xe8] */ r_edx = R32((u32)(r_ebp+0xffffff18u));
    /* 005916cc: mov eax, dword ptr [edx + ecx*4 + 0x50] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x50u));
    /* 005916d0: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 005916d6: mov edx, dword ptr [ebp - 0xe8] */ r_edx = R32((u32)(r_ebp+0xffffff18u));
    /* 005916dc: mov ecx, dword ptr [edx + ecx*4 + 0x50] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x50u));
    /* 005916e0: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005916e2: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 005916e5: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5916e7u); call_ind(t); }
    /* 005916e7: jmp 0x5914bf */ goto L_005914bf;
L_005916ec:; BB(0x005916ec);
    /* 005916ec: push -0x36 */ { u32 v = 0xffffffcau; r_esp -= 4; W32(r_esp, v); }
    /* 005916ee: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 005916f0: mov eax, dword ptr [ebp - 0xe8] */ r_eax = R32((u32)(r_ebp+0xffffff18u));
    /* 005916f6: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 005916f9: mov edx, dword ptr [ebp - 0xe8] */ r_edx = R32((u32)(r_ebp+0xffffff18u));
    /* 005916ff: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00591702: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00591704: mov ecx, eax */ r_ecx = r_eax;
    /* 00591706: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00591709: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59170bu); call_ind(t); }
    /* 0059170b: push -0x34 */ { u32 v = 0xffffffccu; r_esp -= 4; W32(r_esp, v); }
    /* 0059170d: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 0059170f: mov ecx, dword ptr [ebp - 0xe8] */ r_ecx = R32((u32)(r_ebp+0xffffff18u));
    /* 00591715: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 00591718: mov eax, dword ptr [ebp - 0xe8] */ r_eax = R32((u32)(r_ebp+0xffffff18u));
    /* 0059171e: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 00591721: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00591723: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00591726: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x591728u); call_ind(t); }
    /* 00591728: push -0x31 */ { u32 v = 0xffffffcfu; r_esp -= 4; W32(r_esp, v); }
    /* 0059172a: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0059172c: mov ecx, dword ptr [ebp - 0xe8] */ r_ecx = R32((u32)(r_ebp+0xffffff18u));
    /* 00591732: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00591735: mov eax, dword ptr [ebp - 0xe8] */ r_eax = R32((u32)(r_ebp+0xffffff18u));
    /* 0059173b: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0059173e: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00591740: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00591743: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x591745u); call_ind(t); }
    /* 00591745: push -0x34 */ { u32 v = 0xffffffccu; r_esp -= 4; W32(r_esp, v); }
    /* 00591747: push -3 */ { u32 v = 0xfffffffdu; r_esp -= 4; W32(r_esp, v); }
    /* 00591749: mov ecx, dword ptr [ebp - 0xe8] */ r_ecx = R32((u32)(r_ebp+0xffffff18u));
    /* 0059174f: mov edx, dword ptr [ecx + 0x24] */ r_edx = R32((u32)(r_ecx+0x24u));
    /* 00591752: mov eax, dword ptr [ebp - 0xe8] */ r_eax = R32((u32)(r_ebp+0xffffff18u));
    /* 00591758: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 0059175b: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0059175d: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00591760: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x591762u); call_ind(t); }
    /* 00591762: push -0x33 */ { u32 v = 0xffffffcdu; r_esp -= 4; W32(r_esp, v); }
    /* 00591764: push -6 */ { u32 v = 0xfffffffau; r_esp -= 4; W32(r_esp, v); }
    /* 00591766: mov ecx, dword ptr [ebp - 0xe8] */ r_ecx = R32((u32)(r_ebp+0xffffff18u));
    /* 0059176c: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0059176f: mov eax, dword ptr [ebp - 0xe8] */ r_eax = R32((u32)(r_ebp+0xffffff18u));
    /* 00591775: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 00591778: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0059177a: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0059177d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59177fu); call_ind(t); }
    /* 0059177f: push -0x30 */ { u32 v = 0xffffffd0u; r_esp -= 4; W32(r_esp, v); }
    /* 00591781: push -8 */ { u32 v = 0xfffffff8u; r_esp -= 4; W32(r_esp, v); }
    /* 00591783: mov ecx, dword ptr [ebp - 0xe8] */ r_ecx = R32((u32)(r_ebp+0xffffff18u));
    /* 00591789: mov edx, dword ptr [ecx + 0x2c] */ r_edx = R32((u32)(r_ecx+0x2cu));
    /* 0059178c: mov eax, dword ptr [ebp - 0xe8] */ r_eax = R32((u32)(r_ebp+0xffffff18u));
    /* 00591792: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 00591795: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00591797: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0059179a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59179cu); call_ind(t); }
    /* 0059179c: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0059179e: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 005917a0: mov ecx, dword ptr [ebp - 0xe8] */ r_ecx = R32((u32)(r_ebp+0xffffff18u));
    /* 005917a6: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 005917a9: mov eax, dword ptr [ebp - 0xe8] */ r_eax = R32((u32)(r_ebp+0xffffff18u));
    /* 005917af: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 005917b2: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005917b4: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 005917b7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5917b9u); call_ind(t); }
    /* 005917b9: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 005917bb: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 005917bd: mov ecx, dword ptr [ebp - 0xe8] */ r_ecx = R32((u32)(r_ebp+0xffffff18u));
    /* 005917c3: mov edx, dword ptr [ecx + 0x34] */ r_edx = R32((u32)(r_ecx+0x34u));
    /* 005917c6: mov eax, dword ptr [ebp - 0xe8] */ r_eax = R32((u32)(r_ebp+0xffffff18u));
    /* 005917cc: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 005917cf: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005917d1: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 005917d4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5917d6u); call_ind(t); }
    /* 005917d6: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 005917d8: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 005917da: mov ecx, dword ptr [ebp - 0xe8] */ r_ecx = R32((u32)(r_ebp+0xffffff18u));
    /* 005917e0: mov edx, dword ptr [ecx + 0x38] */ r_edx = R32((u32)(r_ecx+0x38u));
    /* 005917e3: mov eax, dword ptr [ebp - 0xe8] */ r_eax = R32((u32)(r_ebp+0xffffff18u));
    /* 005917e9: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 005917ec: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005917ee: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 005917f1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5917f3u); call_ind(t); }
    /* 005917f3: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 005917f5: push -0xb */ { u32 v = 0xfffffff5u; r_esp -= 4; W32(r_esp, v); }
    /* 005917f7: mov ecx, dword ptr [ebp - 0xe8] */ r_ecx = R32((u32)(r_ebp+0xffffff18u));
    /* 005917fd: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 00591800: mov eax, dword ptr [ebp - 0xe8] */ r_eax = R32((u32)(r_ebp+0xffffff18u));
    /* 00591806: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 00591809: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0059180b: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0059180e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x591810u); call_ind(t); }
    /* 00591810: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 00591812: push -0x10 */ { u32 v = 0xfffffff0u; r_esp -= 4; W32(r_esp, v); }
    /* 00591814: mov ecx, dword ptr [ebp - 0xe8] */ r_ecx = R32((u32)(r_ebp+0xffffff18u));
    /* 0059181a: mov edx, dword ptr [ecx + 0x40] */ r_edx = R32((u32)(r_ecx+0x40u));
    /* 0059181d: mov eax, dword ptr [ebp - 0xe8] */ r_eax = R32((u32)(r_ebp+0xffffff18u));
    /* 00591823: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 00591826: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00591828: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0059182b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59182du); call_ind(t); }
    /* 0059182d: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0059182f: push -0x13 */ { u32 v = 0xffffffedu; r_esp -= 4; W32(r_esp, v); }
    /* 00591831: mov ecx, dword ptr [ebp - 0xe8] */ r_ecx = R32((u32)(r_ebp+0xffffff18u));
    /* 00591837: mov edx, dword ptr [ecx + 0x44] */ r_edx = R32((u32)(r_ecx+0x44u));
    /* 0059183a: mov eax, dword ptr [ebp - 0xe8] */ r_eax = R32((u32)(r_ebp+0xffffff18u));
    /* 00591840: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 00591843: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00591845: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00591848: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59184au); call_ind(t); }
    /* 0059184a: push 0x198 */ { u32 v = 0x198u; r_esp -= 4; W32(r_esp, v); }
    /* 0059184f: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x591854u); f_00686d82();
    /* 00591854: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00591857: mov dword ptr [ebp - 0xcc], eax */ W32((u32)(r_ebp+0xffffff34u), r_eax);
    /* 0059185d: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 00591864: cmp dword ptr [ebp - 0xcc], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff34u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059186b: je 0x591892 */ if (fZ) goto L_00591892;
L_0059186d:; BB(0x0059186d);
    /* 0059186d: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 00591873: call 0x5cd6a0 */ r_esp -= 4; W32(r_esp, 0x591878u); f_005cd6a0();
    /* 00591878: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 0059187e: mov dword ptr [ecx], 0x6ce0f4 */ W32((u32)(r_ecx), 0x6ce0f4u);
    /* 00591884: mov edx, dword ptr [ebp - 0xcc] */ r_edx = R32((u32)(r_ebp+0xffffff34u));
    /* 0059188a: mov dword ptr [ebp - 0xfc], edx */ W32((u32)(r_ebp+0xffffff04u), r_edx);
    /* 00591890: jmp 0x59189c */ goto L_0059189c;
L_00591892:; BB(0x00591892);
    /* 00591892: mov dword ptr [ebp - 0xfc], 0 */ W32((u32)(r_ebp+0xffffff04u), 0x0u);
L_0059189c:; BB(0x0059189c);
    /* 0059189c: mov eax, dword ptr [ebp - 0xfc] */ r_eax = R32((u32)(r_ebp+0xffffff04u));
    /* 005918a2: mov dword ptr [ebp - 0xc8], eax */ W32((u32)(r_ebp+0xffffff38u), r_eax);
    /* 005918a8: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005918af: mov ecx, dword ptr [ebp - 0xe8] */ r_ecx = R32((u32)(r_ebp+0xffffff18u));
    /* 005918b5: mov edx, dword ptr [ebp - 0xc8] */ r_edx = R32((u32)(r_ebp+0xffffff38u));
    /* 005918bb: mov dword ptr [ecx + 0x48], edx */ W32((u32)(r_ecx+0x48u), r_edx);
    /* 005918be: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005918c0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005918c2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005918c4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005918c6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005918c8: mov eax, dword ptr [ebp - 0xe8] */ r_eax = R32((u32)(r_ebp+0xffffff18u));
    /* 005918ce: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 005918d1: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x5918d6u); f_005eae80();
    /* 005918d6: push 0x184 */ { u32 v = 0x184u; r_esp -= 4; W32(r_esp, v); }
    /* 005918db: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5918e0u); f_00686d82();
    /* 005918e0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005918e3: mov dword ptr [ebp - 0xd4], eax */ W32((u32)(r_ebp+0xffffff2cu), r_eax);
    /* 005918e9: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 005918f0: cmp dword ptr [ebp - 0xd4], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff2cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005918f7: je 0x59190c */ if (fZ) goto L_0059190c;
L_005918f9:; BB(0x005918f9);
    /* 005918f9: mov ecx, dword ptr [ebp - 0xd4] */ r_ecx = R32((u32)(r_ebp+0xffffff2cu));
    /* 005918ff: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x591904u); f_005f5bf0();
    /* 00591904: mov dword ptr [ebp - 0x100], eax */ W32((u32)(r_ebp+0xffffff00u), r_eax);
    /* 0059190a: jmp 0x591916 */ goto L_00591916;
L_0059190c:; BB(0x0059190c);
    /* 0059190c: mov dword ptr [ebp - 0x100], 0 */ W32((u32)(r_ebp+0xffffff00u), 0x0u);
L_00591916:; BB(0x00591916);
    /* 00591916: mov ecx, dword ptr [ebp - 0x100] */ r_ecx = R32((u32)(r_ebp+0xffffff00u));
    /* 0059191c: mov dword ptr [ebp - 0xd0], ecx */ W32((u32)(r_ebp+0xffffff30u), r_ecx);
    /* 00591922: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00591929: mov edx, dword ptr [ebp - 0xe8] */ r_edx = R32((u32)(r_ebp+0xffffff18u));
    /* 0059192f: mov eax, dword ptr [ebp - 0xd0] */ r_eax = R32((u32)(r_ebp+0xffffff30u));
    /* 00591935: mov dword ptr [edx + 0x94], eax */ W32((u32)(r_edx+0x94u), r_eax);
    /* 0059193b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0059193d: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 0059193f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00591941: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00591943: push 0x7e6 */ { u32 v = 0x7e6u; r_esp -= 4; W32(r_esp, v); }
    /* 00591948: mov ecx, dword ptr [ebp - 0xe8] */ r_ecx = R32((u32)(r_ebp+0xffffff18u));
    /* 0059194e: mov ecx, dword ptr [ecx + 0x94] */ r_ecx = R32((u32)(r_ecx+0x94u));
    /* 00591954: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x591959u); f_005eae80();
    /* 00591959: push 0x184 */ { u32 v = 0x184u; r_esp -= 4; W32(r_esp, v); }
    /* 0059195e: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x591963u); f_00686d82();
    /* 00591963: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00591966: mov dword ptr [ebp - 0xdc], eax */ W32((u32)(r_ebp+0xffffff24u), r_eax);
    /* 0059196c: mov dword ptr [ebp - 4], 6 */ W32((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 00591973: cmp dword ptr [ebp - 0xdc], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff24u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059197a: je 0x59198f */ if (fZ) goto L_0059198f;
L_0059197c:; BB(0x0059197c);
    /* 0059197c: mov ecx, dword ptr [ebp - 0xdc] */ r_ecx = R32((u32)(r_ebp+0xffffff24u));
    /* 00591982: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x591987u); f_005f5bf0();
    /* 00591987: mov dword ptr [ebp - 0x104], eax */ W32((u32)(r_ebp+0xfffffefcu), r_eax);
    /* 0059198d: jmp 0x591999 */ goto L_00591999;
L_0059198f:; BB(0x0059198f);
    /* 0059198f: mov dword ptr [ebp - 0x104], 0 */ W32((u32)(r_ebp+0xfffffefcu), 0x0u);
L_00591999:; BB(0x00591999);
    /* 00591999: mov edx, dword ptr [ebp - 0x104] */ r_edx = R32((u32)(r_ebp+0xfffffefcu));
    /* 0059199f: mov dword ptr [ebp - 0xd8], edx */ W32((u32)(r_ebp+0xffffff28u), r_edx);
    /* 005919a5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005919ac: mov eax, dword ptr [ebp - 0xe8] */ r_eax = R32((u32)(r_ebp+0xffffff18u));
    /* 005919b2: mov ecx, dword ptr [ebp - 0xd8] */ r_ecx = R32((u32)(r_ebp+0xffffff28u));
    /* 005919b8: mov dword ptr [eax + 0x98], ecx */ W32((u32)(r_eax+0x98u), r_ecx);
    /* 005919be: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005919c0: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 005919c2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005919c4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005919c6: push 0x7e7 */ { u32 v = 0x7e7u; r_esp -= 4; W32(r_esp, v); }
    /* 005919cb: mov edx, dword ptr [ebp - 0xe8] */ r_edx = R32((u32)(r_ebp+0xffffff18u));
    /* 005919d1: mov ecx, dword ptr [edx + 0x98] */ r_ecx = R32((u32)(r_edx+0x98u));
    /* 005919d7: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x5919dcu); f_005eae80();
    /* 005919dc: push 0x184 */ { u32 v = 0x184u; r_esp -= 4; W32(r_esp, v); }
    /* 005919e1: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5919e6u); f_00686d82();
    /* 005919e6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005919e9: mov dword ptr [ebp - 0xe4], eax */ W32((u32)(r_ebp+0xffffff1cu), r_eax);
    /* 005919ef: mov dword ptr [ebp - 4], 7 */ W32((u32)(r_ebp+0xfffffffcu), 0x7u);
    /* 005919f6: cmp dword ptr [ebp - 0xe4], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff1cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005919fd: je 0x591a12 */ if (fZ) goto L_00591a12;
L_005919ff:; BB(0x005919ff);
    /* 005919ff: mov ecx, dword ptr [ebp - 0xe4] */ r_ecx = R32((u32)(r_ebp+0xffffff1cu));
    /* 00591a05: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x591a0au); f_005f5bf0();
    /* 00591a0a: mov dword ptr [ebp - 0x108], eax */ W32((u32)(r_ebp+0xfffffef8u), r_eax);
    /* 00591a10: jmp 0x591a1c */ goto L_00591a1c;
L_00591a12:; BB(0x00591a12);
    /* 00591a12: mov dword ptr [ebp - 0x108], 0 */ W32((u32)(r_ebp+0xfffffef8u), 0x0u);
L_00591a1c:; BB(0x00591a1c);
    /* 00591a1c: mov eax, dword ptr [ebp - 0x108] */ r_eax = R32((u32)(r_ebp+0xfffffef8u));
    /* 00591a22: mov dword ptr [ebp - 0xe0], eax */ W32((u32)(r_ebp+0xffffff20u), r_eax);
    /* 00591a28: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00591a2f: mov ecx, dword ptr [ebp - 0xe8] */ r_ecx = R32((u32)(r_ebp+0xffffff18u));
    /* 00591a35: mov edx, dword ptr [ebp - 0xe0] */ r_edx = R32((u32)(r_ebp+0xffffff20u));
    /* 00591a3b: mov dword ptr [ecx + 0x9c], edx */ W32((u32)(r_ecx+0x9cu), r_edx);
    /* 00591a41: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00591a43: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00591a45: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00591a47: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00591a49: push 0x7d7 */ { u32 v = 0x7d7u; r_esp -= 4; W32(r_esp, v); }
    /* 00591a4e: mov eax, dword ptr [ebp - 0xe8] */ r_eax = R32((u32)(r_ebp+0xffffff18u));
    /* 00591a54: mov ecx, dword ptr [eax + 0x9c] */ r_ecx = R32((u32)(r_eax+0x9cu));
    /* 00591a5a: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x591a5fu); f_005eae80();
    /* 00591a5f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00591a62: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00591a69: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00591a6a: mov esp, ebp */ r_esp = r_ebp;
    /* 00591a6c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00591a6d: ret  */ FN_RET(0x005911e0); r_esp += 4; return;
}

