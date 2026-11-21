#include "protos.h"

void f_00428000(void) /* sub_428000 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00428000);
    /* 00428000: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00428001: mov ebp, esp */ r_ebp = r_esp;
    /* 00428003: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00428006: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00428009: mov eax, dword ptr [0x7906d4] */ r_eax = R32((u32)(0x7906d4u));
    /* 0042800e: mov ecx, dword ptr [eax + 0xac4] */ r_ecx = R32((u32)(r_eax+0xac4u));
    /* 00428014: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00428017: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00428019: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042801d: setne dl */ r_edx = (r_edx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 00428020: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 00428023: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00428025: jne 0x42808a */ if (!fZ) goto L_0042808a;
L_00428027:; BB(0x00428027);
    /* 00428027: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042802a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042802b: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x428030u); f_005dcb00();
    /* 00428030: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00428033: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00428036: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00428039: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0042803c: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0042803f: cmp dword ptr [ebp - 0xc], 0x16 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00428043: je 0x428063 */ if (fZ) goto L_00428063;
L_00428045:; BB(0x00428045);
    /* 00428045: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00428048: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00428049: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x42804eu); f_005dcb00();
    /* 0042804e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00428051: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00428054: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00428057: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0042805a: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0042805d: cmp dword ptr [ebp - 0x14], 0x15 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00428061: jne 0x428075 */ if (!fZ) goto L_00428075;
L_00428063:; BB(0x00428063);
    /* 00428063: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00428065: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00428067: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042806a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042806b: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0042806e: call 0x428470 */ r_esp -= 4; W32(r_esp, 0x428073u); f_00428470();
    /* 00428073: jmp 0x428085 */ goto L_00428085;
L_00428075:; BB(0x00428075);
    /* 00428075: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00428077: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00428079: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0042807c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0042807d: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00428080: call 0x428470 */ r_esp -= 4; W32(r_esp, 0x428085u); f_00428470();
L_00428085:; BB(0x00428085);
    /* 00428085: jmp 0x428425 */ goto L_00428425;
L_0042808a:; BB(0x0042808a);
    /* 0042808a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0042808d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042808e: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00428091: call 0x428be0 */ r_esp -= 4; W32(r_esp, 0x428096u); f_00428be0();
    /* 00428096: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00428099: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042809a: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x42809fu); f_005dcb00();
    /* 0042809f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004280a2: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 004280a5: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004280a8: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 004280ab: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004280ae: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 004280b1: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 004280b4: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004280b7: sub edx, 0x13 */ {  u32 a = r_edx; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004280ba: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 004280bd: cmp dword ptr [ebp - 0x2c], 9 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004280c1: ja 0x42840e */ if ((!fC&&!fZ)) goto L_0042840e;
L_004280c7:; BB(0x004280c7);
    /* 004280c7: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 004280ca: jmp dword ptr [eax*4 + 0x42842c] */ { u32 t = R32((u32)(r_eax*4+0x42842cu)); switch (t) { case 0x4280d1u: goto L_004280d1; case 0x428192u: goto L_00428192; case 0x4282e6u: goto L_004282e6; case 0x428102u: goto L_00428102; case 0x4281efu: goto L_004281ef; case 0x428133u: goto L_00428133; case 0x428364u: goto L_00428364; case 0x42824eu: goto L_0042824e; case 0x4283bfu: goto L_004283bf; case 0x428325u: goto L_00428325; case 0x4282beu: goto L_004282be; case 0x4282e1u: goto L_004282e1; default: UNSUP(0x004280ca, "jump table entry is not a known target"); } }
L_004280d1:; BB(0x004280d1);
    /* 004280d1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004280d3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004280d5: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004280d8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004280d9: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004280dc: call 0x428470 */ r_esp -= 4; W32(r_esp, 0x4280e1u); f_00428470();
    /* 004280e1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004280e3: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004280e5: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004280e8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004280e9: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004280ec: call 0x428470 */ r_esp -= 4; W32(r_esp, 0x4280f1u); f_00428470();
    /* 004280f1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004280f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004280f5: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004280f8: call 0x4288c0 */ r_esp -= 4; W32(r_esp, 0x4280fdu); f_004288c0();
    /* 004280fd: jmp 0x428425 */ goto L_00428425;
L_00428102:; BB(0x00428102);
    /* 00428102: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00428104: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00428106: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00428109: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042810a: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0042810d: call 0x428470 */ r_esp -= 4; W32(r_esp, 0x428112u); f_00428470();
    /* 00428112: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00428114: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00428116: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00428119: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0042811a: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0042811d: call 0x428470 */ r_esp -= 4; W32(r_esp, 0x428122u); f_00428470();
    /* 00428122: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00428125: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00428126: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00428129: call 0x428a50 */ r_esp -= 4; W32(r_esp, 0x42812eu); f_00428a50();
    /* 0042812e: jmp 0x428425 */ goto L_00428425;
L_00428133:; BB(0x00428133);
    /* 00428133: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00428135: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00428137: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042813a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042813b: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0042813e: call 0x428470 */ r_esp -= 4; W32(r_esp, 0x428143u); f_00428470();
    /* 00428143: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00428146: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00428147: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0042814a: call 0x4288c0 */ r_esp -= 4; W32(r_esp, 0x42814fu); f_004288c0();
    /* 0042814f: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00428151: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x428156u); f_0062fbf0();
    /* 00428156: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00428159: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042815b: je 0x42816d */ if (fZ) goto L_0042816d;
L_0042815d:; BB(0x0042815d);
    /* 0042815d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0042815f: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00428161: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00428164: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00428165: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00428168: call 0x428470 */ r_esp -= 4; W32(r_esp, 0x42816du); f_00428470();
L_0042816d:; BB(0x0042816d);
    /* 0042816d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0042816f: push 0x31 */ { u32 v = 0x31u; r_esp -= 4; W32(r_esp, v); }
    /* 00428171: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00428174: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00428175: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00428178: call 0x428470 */ r_esp -= 4; W32(r_esp, 0x42817du); f_00428470();
    /* 0042817d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0042817f: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 00428181: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00428184: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00428185: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00428188: call 0x428470 */ r_esp -= 4; W32(r_esp, 0x42818du); f_00428470();
    /* 0042818d: jmp 0x428425 */ goto L_00428425;
L_00428192:; BB(0x00428192);
    /* 00428192: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00428194: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00428196: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00428199: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042819a: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0042819d: call 0x428470 */ r_esp -= 4; W32(r_esp, 0x4281a2u); f_00428470();
    /* 004281a2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004281a5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004281a6: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004281a9: call 0x4288c0 */ r_esp -= 4; W32(r_esp, 0x4281aeu); f_004288c0();
    /* 004281ae: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004281b0: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4281b5u); f_0062fbf0();
    /* 004281b5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004281b8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004281ba: jne 0x4281cc */ if (!fZ) goto L_004281cc;
L_004281bc:; BB(0x004281bc);
    /* 004281bc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004281be: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004281c0: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004281c3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004281c4: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004281c7: call 0x428470 */ r_esp -= 4; W32(r_esp, 0x4281ccu); f_00428470();
L_004281cc:; BB(0x004281cc);
    /* 004281cc: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004281ce: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4281d3u); f_0062fbf0();
    /* 004281d3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004281d6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004281d8: jne 0x4281ea */ if (!fZ) goto L_004281ea;
L_004281da:; BB(0x004281da);
    /* 004281da: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004281dc: push 0x3d */ { u32 v = 0x3du; r_esp -= 4; W32(r_esp, v); }
    /* 004281de: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004281e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004281e2: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004281e5: call 0x428470 */ r_esp -= 4; W32(r_esp, 0x4281eau); f_00428470();
L_004281ea:; BB(0x004281ea);
    /* 004281ea: jmp 0x428425 */ goto L_00428425;
L_004281ef:; BB(0x004281ef);
    /* 004281ef: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004281f1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004281f3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004281f6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004281f7: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004281fa: call 0x428470 */ r_esp -= 4; W32(r_esp, 0x4281ffu); f_00428470();
    /* 004281ff: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00428202: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00428203: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00428206: call 0x4288c0 */ r_esp -= 4; W32(r_esp, 0x42820bu); f_004288c0();
    /* 0042820b: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0042820d: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x428212u); f_0062fbf0();
    /* 00428212: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00428215: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00428217: jne 0x428229 */ if (!fZ) goto L_00428229;
L_00428219:; BB(0x00428219);
    /* 00428219: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0042821b: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0042821d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00428220: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00428221: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00428224: call 0x428470 */ r_esp -= 4; W32(r_esp, 0x428229u); f_00428470();
L_00428229:; BB(0x00428229);
    /* 00428229: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0042822b: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 0042822d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00428230: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00428231: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00428234: call 0x428470 */ r_esp -= 4; W32(r_esp, 0x428239u); f_00428470();
    /* 00428239: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0042823b: push 0x2e */ { u32 v = 0x2eu; r_esp -= 4; W32(r_esp, v); }
    /* 0042823d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00428240: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00428241: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00428244: call 0x428470 */ r_esp -= 4; W32(r_esp, 0x428249u); f_00428470();
    /* 00428249: jmp 0x428425 */ goto L_00428425;
L_0042824e:; BB(0x0042824e);
    /* 0042824e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00428250: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00428252: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00428255: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00428256: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00428259: call 0x428470 */ r_esp -= 4; W32(r_esp, 0x42825eu); f_00428470();
    /* 0042825e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00428261: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00428262: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00428265: call 0x4288c0 */ r_esp -= 4; W32(r_esp, 0x42826au); f_004288c0();
    /* 0042826a: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0042826c: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x428271u); f_0062fbf0();
    /* 00428271: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00428274: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00428277: jge 0x428289 */ if ((fS==fO)) goto L_00428289;
L_00428279:; BB(0x00428279);
    /* 00428279: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0042827b: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0042827d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00428280: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00428281: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00428284: call 0x428470 */ r_esp -= 4; W32(r_esp, 0x428289u); f_00428470();
L_00428289:; BB(0x00428289);
    /* 00428289: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042828c: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0042828f: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 00428295: mov edx, dword ptr [ecx + 0xac4] */ r_edx = R32((u32)(r_ecx+0xac4u));
    /* 0042829b: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 0042829e: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 004282a1: sub eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004282a4: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 004282a7: cmp dword ptr [ebp - 0x30], 6 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004282ab: ja 0x4282e1 */ if ((!fC&&!fZ)) goto L_004282e1;
L_004282ad:; BB(0x004282ad);
    /* 004282ad: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004282b0: movzx edx, byte ptr [ecx + 0x42845c] */ r_edx = (u32)R8((u32)(r_ecx+0x42845cu));
    /* 004282b7: jmp dword ptr [edx*4 + 0x428454] */ { u32 t = R32((u32)(r_edx*4+0x428454u)); switch (t) { case 0x428325u: goto L_00428325; case 0x4283bfu: goto L_004283bf; case 0x42824eu: goto L_0042824e; case 0x428364u: goto L_00428364; case 0x428133u: goto L_00428133; case 0x4281efu: goto L_004281ef; case 0x428102u: goto L_00428102; case 0x4282e6u: goto L_004282e6; case 0x428192u: goto L_00428192; case 0x4280d1u: goto L_004280d1; case 0x4282beu: goto L_004282be; case 0x4282e1u: goto L_004282e1; default: UNSUP(0x004282b7, "jump table entry is not a known target"); } }
L_004282be:; BB(0x004282be);
    /* 004282be: mov eax, dword ptr [0x7906d4] */ r_eax = R32((u32)(0x7906d4u));
    /* 004282c3: mov ecx, dword ptr [eax + 0xac4] */ r_ecx = R32((u32)(r_eax+0xac4u));
    /* 004282c9: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 004282cc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004282ce: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004282d1: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004282d4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004282d5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004282d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004282d9: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004282dc: call 0x428470 */ r_esp -= 4; W32(r_esp, 0x4282e1u); f_00428470();
L_004282e1:; BB(0x004282e1);
    /* 004282e1: jmp 0x428425 */ goto L_00428425;
L_004282e6:; BB(0x004282e6);
    /* 004282e6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004282e8: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004282ea: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004282ed: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004282ee: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004282f1: call 0x428470 */ r_esp -= 4; W32(r_esp, 0x4282f6u); f_00428470();
    /* 004282f6: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004282f9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004282fa: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004282fd: call 0x428a50 */ r_esp -= 4; W32(r_esp, 0x428302u); f_00428a50();
    /* 00428302: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00428304: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x428309u); f_0062fbf0();
    /* 00428309: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042830c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042830e: jne 0x428320 */ if (!fZ) goto L_00428320;
L_00428310:; BB(0x00428310);
    /* 00428310: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00428312: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00428314: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00428317: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00428318: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0042831b: call 0x428470 */ r_esp -= 4; W32(r_esp, 0x428320u); f_00428470();
L_00428320:; BB(0x00428320);
    /* 00428320: jmp 0x428425 */ goto L_00428425;
L_00428325:; BB(0x00428325);
    /* 00428325: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00428327: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00428329: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042832c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042832d: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00428330: call 0x428470 */ r_esp -= 4; W32(r_esp, 0x428335u); f_00428470();
    /* 00428335: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00428338: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00428339: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0042833c: call 0x4288c0 */ r_esp -= 4; W32(r_esp, 0x428341u); f_004288c0();
    /* 00428341: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00428343: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x428348u); f_0062fbf0();
    /* 00428348: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042834b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042834d: je 0x42835f */ if (fZ) goto L_0042835f;
L_0042834f:; BB(0x0042834f);
    /* 0042834f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00428351: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00428353: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00428356: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00428357: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0042835a: call 0x428470 */ r_esp -= 4; W32(r_esp, 0x42835fu); f_00428470();
L_0042835f:; BB(0x0042835f);
    /* 0042835f: jmp 0x428425 */ goto L_00428425;
L_00428364:; BB(0x00428364);
    /* 00428364: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00428366: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00428368: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042836b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042836c: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0042836f: call 0x428470 */ r_esp -= 4; W32(r_esp, 0x428374u); f_00428470();
    /* 00428374: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00428377: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00428378: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0042837b: call 0x4288c0 */ r_esp -= 4; W32(r_esp, 0x428380u); f_004288c0();
    /* 00428380: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00428382: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x428387u); f_0062fbf0();
    /* 00428387: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042838a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042838c: je 0x42839e */ if (fZ) goto L_0042839e;
L_0042838e:; BB(0x0042838e);
    /* 0042838e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00428390: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00428392: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00428395: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00428396: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00428399: call 0x428470 */ r_esp -= 4; W32(r_esp, 0x42839eu); f_00428470();
L_0042839e:; BB(0x0042839e);
    /* 0042839e: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 004283a0: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4283a5u); f_0062fbf0();
    /* 004283a5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004283a8: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004283ab: jge 0x4283bd */ if ((fS==fO)) goto L_004283bd;
L_004283ad:; BB(0x004283ad);
    /* 004283ad: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004283af: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 004283b1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004283b4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004283b5: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004283b8: call 0x428470 */ r_esp -= 4; W32(r_esp, 0x4283bdu); f_00428470();
L_004283bd:; BB(0x004283bd);
    /* 004283bd: jmp 0x428425 */ goto L_00428425;
L_004283bf:; BB(0x004283bf);
    /* 004283bf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004283c1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004283c3: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004283c6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004283c7: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004283ca: call 0x428470 */ r_esp -= 4; W32(r_esp, 0x4283cfu); f_00428470();
    /* 004283cf: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004283d1: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4283d6u); f_0062fbf0();
    /* 004283d6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004283d9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004283db: jne 0x4283ed */ if (!fZ) goto L_004283ed;
L_004283dd:; BB(0x004283dd);
    /* 004283dd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004283df: push 0x3d */ { u32 v = 0x3du; r_esp -= 4; W32(r_esp, v); }
    /* 004283e1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004283e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004283e5: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004283e8: call 0x428470 */ r_esp -= 4; W32(r_esp, 0x4283edu); f_00428470();
L_004283ed:; BB(0x004283ed);
    /* 004283ed: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 004283ef: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4283f4u); f_0062fbf0();
    /* 004283f4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004283f7: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004283fa: jge 0x42840c */ if ((fS==fO)) goto L_0042840c;
L_004283fc:; BB(0x004283fc);
    /* 004283fc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004283fe: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 00428400: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00428403: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00428404: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00428407: call 0x428470 */ r_esp -= 4; W32(r_esp, 0x42840cu); f_00428470();
L_0042840c:; BB(0x0042840c);
    /* 0042840c: jmp 0x428425 */ goto L_00428425;
L_0042840e:; BB(0x0042840e);
    /* 0042840e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00428410: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00428413: call 0x428880 */ r_esp -= 4; W32(r_esp, 0x428418u); f_00428880();
    /* 00428418: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00428419: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0042841c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0042841d: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00428420: call 0x428470 */ r_esp -= 4; W32(r_esp, 0x428425u); f_00428470();
L_00428425:; BB(0x00428425);
    /* 00428425: mov esp, ebp */ r_esp = r_ebp;
    /* 00428427: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00428428: ret 4 */ FN_RET(0x00428000); r_esp += 8; return;
}

void f_00428470(void) /* sub_428470 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00428470);
    /* 00428470: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00428471: mov ebp, esp */ r_ebp = r_esp;
    /* 00428473: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00428476: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 00428479: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042847b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042847d: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x428482u); f_0064c8a0();
    /* 00428482: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00428485: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00428488: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 0042848b: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0042848e: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00428491: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00428494: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00428497: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00428499: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042849b: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x4284a0u); f_0064c8a0();
    /* 004284a0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004284a3: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 004284a6: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 004284a9: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004284ac: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 004284af: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 004284b2: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004284b5: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004284b8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004284b9: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4284beu); f_005dcb00();
    /* 004284be: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004284c1: mov ecx, eax */ r_ecx = r_eax;
    /* 004284c3: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x4284c8u); f_005d5a50();
    /* 004284c8: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 004284cb: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 004284ce: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004284cf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004284d2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004284d3: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 004284d9: call 0x4369a0 */ r_esp -= 4; W32(r_esp, 0x4284deu); f_004369a0();
    /* 004284de: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004284e1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004284e3: je 0x4284ea */ if (fZ) goto L_004284ea;
L_004284e5:; BB(0x004284e5);
    /* 004284e5: jmp 0x42868e */ goto L_0042868e;
L_004284ea:; BB(0x004284ea);
    /* 004284ea: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 004284ed: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004284ee: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 004284f4: call 0x434880 */ r_esp -= 4; W32(r_esp, 0x4284f9u); f_00434880();
    /* 004284f9: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004284fc: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004284ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00428500: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00428503: call 0x4286a0 */ r_esp -= 4; W32(r_esp, 0x428508u); f_004286a0();
    /* 00428508: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0042850b: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0042850e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042850f: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 00428515: call 0x4388a0 */ r_esp -= 4; W32(r_esp, 0x42851au); f_004388a0();
    /* 0042851a: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0042851d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042851f: jne 0x428537 */ if (!fZ) goto L_00428537;
L_00428521:; BB(0x00428521);
    /* 00428521: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00428524: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00428525: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0042852b: call 0x4388d0 */ r_esp -= 4; W32(r_esp, 0x428530u); f_004388d0();
    /* 00428530: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00428533: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00428535: je 0x42858a */ if (fZ) goto L_0042858a;
L_00428537:; BB(0x00428537);
    /* 00428537: fild dword ptr [ebp - 0x20] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffe0u)));
    /* 0042853a: fdiv qword ptr [0x6b6978] */ ST(0) = ST(0) / R_F64((u32)(0x6b6978u));
    /* 00428540: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00428543: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 00428546: call dword ptr [0x6b2244] */ { u32 t = R32((u32)(0x6b2244u)); r_esp -= 4; W32(r_esp, 0x42854cu); call_ind(t); }
    /* 0042854c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042854f: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x428554u); f_00686cc0();
    /* 00428554: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00428557: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042855a: add edx, dword ptr [ebp - 0x28] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffd8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0042855d: cmp edx, dword ptr [ebp - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00428560: jle 0x428567 */ if ((fZ||fS!=fO)) goto L_00428567;
L_00428562:; BB(0x00428562);
    /* 00428562: jmp 0x42868e */ goto L_0042868e;
L_00428567:; BB(0x00428567);
    /* 00428567: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0042856a: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0042856c: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0042856f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00428572: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00428573: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00428576: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00428577: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0042857a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042857b: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x428580u); f_005dcb00();
    /* 00428580: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00428583: mov ecx, eax */ r_ecx = r_eax;
    /* 00428585: call 0x5d5cf0 */ r_esp -= 4; W32(r_esp, 0x42858au); f_005d5cf0();
L_0042858a:; BB(0x0042858a);
    /* 0042858a: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0042858d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042858e: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 00428594: call 0x435ca0 */ r_esp -= 4; W32(r_esp, 0x428599u); f_00435ca0();
    /* 00428599: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0042859c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042859e: jne 0x4285b6 */ if (!fZ) goto L_004285b6;
L_004285a0:; BB(0x004285a0);
    /* 004285a0: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004285a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004285a4: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 004285aa: call 0x435cf0 */ r_esp -= 4; W32(r_esp, 0x4285afu); f_00435cf0();
    /* 004285af: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004285b2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004285b4: je 0x428624 */ if (fZ) goto L_00428624;
L_004285b6:; BB(0x004285b6);
    /* 004285b6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004285b9: mov eax, dword ptr [0x7906d4] */ r_eax = R32((u32)(0x7906d4u));
    /* 004285be: mov ecx, dword ptr [eax + edx*4 + 4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 004285c2: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 004285c5: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004285c8: shl edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 004285cb: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 004285ce: lea ecx, [eax + edx + 0x48] */ r_ecx = (u32)(r_eax+r_edx+0x48u);
    /* 004285d2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004285d4: shl edx, 3 */ { u32 c = (3u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 004285d7: mov eax, dword ptr [ecx + edx] */ r_eax = R32((u32)(r_ecx+r_edx));
    /* 004285da: mov ecx, dword ptr [ecx + edx + 4] */ r_ecx = R32((u32)(r_ecx+r_edx+0x4u));
    /* 004285de: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 004285e1: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 004285e4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004285e7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004285e8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004285eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004285ec: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 004285f2: call 0x436570 */ r_esp -= 4; W32(r_esp, 0x4285f7u); f_00436570();
    /* 004285f7: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 004285fa: movzx ecx, byte ptr [ebp + 0x10] */ r_ecx = (u32)R8((u32)(r_ebp+0x10u));
    /* 004285fe: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00428600: je 0x428610 */ if (fZ) goto L_00428610;
L_00428602:; BB(0x00428602);
    /* 00428602: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00428605: cmp edx, dword ptr [ebp - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00428608: jge 0x428610 */ if ((fS==fO)) goto L_00428610;
L_0042860a:; BB(0x0042860a);
    /* 0042860a: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042860d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
L_00428610:; BB(0x00428610);
    /* 00428610: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00428613: add ecx, dword ptr [ebp - 0x20] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00428616: cmp ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00428619: jle 0x428624 */ if ((fZ||fS!=fO)) goto L_00428624;
L_0042861b:; BB(0x0042861b);
    /* 0042861b: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042861e: sub edx, dword ptr [ebp - 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00428621: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
L_00428624:; BB(0x00428624);
    /* 00428624: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00428627: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00428628: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x42862du); f_005dcb00();
    /* 0042862d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00428630: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00428633: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00428636: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x42863bu); f_0063aac0();
    /* 0042863b: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042863e: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00428641: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00428644: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00428645: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00428648: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00428649: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 0042864c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042864d: push 0x6b695c */ { u32 v = 0x6b695cu; r_esp -= 4; W32(r_esp, v); }
    /* 00428652: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x428657u); f_0062fde0();
    /* 00428657: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042865a: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0042865d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042865e: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00428661: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00428662: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00428665: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00428666: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x42866bu); f_005dcb00();
    /* 0042866b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042866e: mov ecx, eax */ r_ecx = r_eax;
    /* 00428670: call 0x5d5e10 */ r_esp -= 4; W32(r_esp, 0x428675u); f_005d5e10();
    /* 00428675: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00428677: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00428679: lea ecx, [ebp - 0x20] */ r_ecx = (u32)(r_ebp+0xffffffe0u);
    /* 0042867c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042867d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00428680: mov eax, dword ptr [0x7906d4] */ r_eax = R32((u32)(0x7906d4u));
    /* 00428685: mov ecx, dword ptr [eax + edx*4 + 4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 00428689: call 0x5cba10 */ r_esp -= 4; W32(r_esp, 0x42868eu); f_005cba10();
L_0042868e:; BB(0x0042868e);
    /* 0042868e: mov esp, ebp */ r_esp = r_ebp;
    /* 00428690: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00428691: ret 0xc */ FN_RET(0x00428470); r_esp += 16; return;
}

void f_004286a0(void) /* sub_4286A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004286a0);
    /* 004286a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004286a1: mov ebp, esp */ r_ebp = r_esp;
    /* 004286a3: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004286a6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004286a7: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 004286aa: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 004286b1: mov eax, dword ptr [0x7906d0] */ r_eax = R32((u32)(0x7906d0u));
    /* 004286b6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004286b8: mov ecx, dword ptr [0x7906d0] */ r_ecx = R32((u32)(0x7906d0u));
    /* 004286be: mov eax, dword ptr [edx + 0x2b0] */ r_eax = R32((u32)(r_edx+0x2b0u));
    /* 004286c4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4286c6u); call_ind(t); }
    /* 004286c6: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 004286c9: mov ecx, dword ptr [0x7906d0] */ r_ecx = R32((u32)(0x7906d0u));
    /* 004286cf: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004286d1: mov ecx, dword ptr [0x7906d0] */ r_ecx = R32((u32)(0x7906d0u));
    /* 004286d7: mov eax, dword ptr [edx + 0x2b4] */ r_eax = R32((u32)(r_edx+0x2b4u));
    /* 004286dd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4286dfu); call_ind(t); }
    /* 004286df: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004286e2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004286e5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004286e6: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4286ebu); f_005dcb00();
    /* 004286eb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004286ee: mov edx, dword ptr [eax + 0x4a8] */ r_edx = R32((u32)(r_eax+0x4a8u));
    /* 004286f4: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 004286f7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004286fa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004286fb: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x428700u); f_005dcb00();
    /* 00428700: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00428703: mov ecx, eax */ r_ecx = r_eax;
    /* 00428705: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x42870au); f_005d5a50();
    /* 0042870a: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0042870d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00428710: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00428711: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x428716u); f_005dcb00();
    /* 00428716: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00428719: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0042871c: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042871f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00428721: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00428724: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 00428727: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x428729u); call_ind(t); }
    /* 00428729: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0042872c: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042872f: cmp eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00428732: jge 0x42873c */ if ((fS==fO)) goto L_0042873c;
L_00428734:; BB(0x00428734);
    /* 00428734: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00428737: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0042873a: jmp 0x428742 */ goto L_00428742;
L_0042873c:; BB(0x0042873c);
    /* 0042873c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042873f: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
L_00428742:; BB(0x00428742);
    /* 00428742: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00428745: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00428748: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0042874b: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0042874e: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00428751: cmp edx, dword ptr [ebp - 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00428754: jle 0x42875d */ if ((fZ||fS!=fO)) goto L_0042875d;
L_00428756:; BB(0x00428756);
    /* 00428756: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00428758: jmp 0x42886c */ goto L_0042886c;
L_0042875d:; BB(0x0042875d);
    /* 0042875d: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0042875f: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x428764u); f_0062fbf0();
    /* 00428764: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00428767: mov esi, eax */ r_esi = r_eax;
    /* 00428769: imul esi, dword ptr [ebp - 0x10] */ { i64 t = (i64)(i32)r_esi * (i64)(i32)R32((u32)(r_ebp+0xfffffff0u)); r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0042876d: add esi, dword ptr [ebp - 0x10] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00428770: imul esi, dword ptr [ebp - 4] */ { i64 t = (i64)(i32)r_esi * (i64)(i32)R32((u32)(r_ebp+0xfffffffcu)); r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00428774: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00428776: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x42877bu); f_0062fbf0();
    /* 0042877b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042877e: mov ecx, eax */ r_ecx = r_eax;
    /* 00428780: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00428783: mov eax, esi */ r_eax = r_esi;
    /* 00428785: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00428786: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00428786, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00428786, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00428788: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0042878b: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 00428791: call 0x436a50 */ r_esp -= 4; W32(r_esp, 0x428796u); f_00436a50();
    /* 00428796: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00428799: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042879b: je 0x4287b1 */ if (fZ) goto L_004287b1;
L_0042879d:; BB(0x0042879d);
    /* 0042879d: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0042879f: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4287a4u); f_0062fbf0();
    /* 004287a4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004287a7: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004287aa: imul eax, dword ptr [ebp - 0x14] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xffffffecu)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004287ae: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_004287b1:; BB(0x004287b1);
    /* 004287b1: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 004287b7: call 0x43b4e0 */ r_esp -= 4; W32(r_esp, 0x4287bcu); f_0043b4e0();
    /* 004287bc: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004287bf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004287c1: je 0x428837 */ if (fZ) goto L_00428837;
L_004287c3:; BB(0x004287c3);
    /* 004287c3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004287c6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004287c7: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 004287cd: call 0x43b530 */ r_esp -= 4; W32(r_esp, 0x4287d2u); f_0043b530();
    /* 004287d2: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004287d5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004287d7: je 0x428837 */ if (fZ) goto L_00428837;
L_004287d9:; BB(0x004287d9);
    /* 004287d9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004287dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004287dd: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4287e2u); f_005dcb00();
    /* 004287e2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004287e5: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 004287e8: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004287eb: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004287ed: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004287f0: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 004287f3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4287f5u); call_ind(t); }
    /* 004287f5: fimul dword ptr [ebp - 0x14] */ ST(0) = ST(0) * (long double)(i32)R32((u32)(r_ebp+0xffffffecu));
    /* 004287f8: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x4287fdu); f_00686cc0();
    /* 004287fd: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00428800: jge 0x42880a */ if ((fS==fO)) goto L_0042880a;
L_00428802:; BB(0x00428802);
    /* 00428802: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00428805: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 00428808: jmp 0x428831 */ goto L_00428831;
L_0042880a:; BB(0x0042880a);
    /* 0042880a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0042880d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0042880e: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x428813u); f_005dcb00();
    /* 00428813: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00428816: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00428819: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0042881c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0042881e: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00428821: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00428824: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x428826u); call_ind(t); }
    /* 00428826: fimul dword ptr [ebp - 0x14] */ ST(0) = ST(0) * (long double)(i32)R32((u32)(r_ebp+0xffffffecu));
    /* 00428829: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x42882eu); f_00686cc0();
    /* 0042882e: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
L_00428831:; BB(0x00428831);
    /* 00428831: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00428834: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
L_00428837:; BB(0x00428837);
    /* 00428837: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0042883a: cmp edx, dword ptr [ebp - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042883d: jge 0x428847 */ if ((fS==fO)) goto L_00428847;
L_0042883f:; BB(0x0042883f);
    /* 0042883f: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00428842: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00428845: jmp 0x428863 */ goto L_00428863;
L_00428847:; BB(0x00428847);
    /* 00428847: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0042884a: cmp ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042884d: jge 0x428857 */ if ((fS==fO)) goto L_00428857;
L_0042884f:; BB(0x0042884f);
    /* 0042884f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00428852: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 00428855: jmp 0x42885d */ goto L_0042885d;
L_00428857:; BB(0x00428857);
    /* 00428857: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042885a: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
L_0042885d:; BB(0x0042885d);
    /* 0042885d: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00428860: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
L_00428863:; BB(0x00428863);
    /* 00428863: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00428866: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00428869: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
L_0042886c:; BB(0x0042886c);
    /* 0042886c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0042886d: mov esp, ebp */ r_esp = r_ebp;
    /* 0042886f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00428870: ret 4 */ FN_RET(0x004286a0); r_esp += 8; return;
}

void f_00428880(void) /* sub_428880 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00428880);
    /* 00428880: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00428881: mov ebp, esp */ r_ebp = r_esp;
    /* 00428883: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00428886: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00428889: mov eax, dword ptr [0x7906d4] */ r_eax = R32((u32)(0x7906d4u));
    /* 0042888e: mov ecx, dword ptr [eax + 0xac4] */ r_ecx = R32((u32)(r_eax+0xac4u));
    /* 00428894: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00428897: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00428899: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042889d: setne dl */ r_edx = (r_edx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 004288a0: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 004288a3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004288a5: jne 0x4288ab */ if (!fZ) goto L_004288ab;
L_004288a7:; BB(0x004288a7);
    /* 004288a7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004288a9: jmp 0x4288b0 */ goto L_004288b0;
L_004288ab:; BB(0x004288ab);
    /* 004288ab: mov eax, 4 */ r_eax = 0x4u;
L_004288b0:; BB(0x004288b0);
    /* 004288b0: mov esp, ebp */ r_esp = r_ebp;
    /* 004288b2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004288b3: ret  */ FN_RET(0x00428880); r_esp += 4; return;
}

void f_004288c0(void) /* sub_4288C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004288c0);
    /* 004288c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004288c1: mov ebp, esp */ r_ebp = r_esp;
    /* 004288c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004288c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004288c7: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 004288c9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004288cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004288cd: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 004288d3: call 0x4369a0 */ r_esp -= 4; W32(r_esp, 0x4288d8u); f_004369a0();
    /* 004288d8: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004288db: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004288dd: je 0x428907 */ if (fZ) goto L_00428907;
L_004288df:; BB(0x004288df);
    /* 004288df: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 004288e1: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004288e4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004288e5: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 004288eb: call 0x4369a0 */ r_esp -= 4; W32(r_esp, 0x4288f0u); f_004369a0();
    /* 004288f0: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004288f3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004288f5: jne 0x428907 */ if (!fZ) goto L_00428907;
L_004288f7:; BB(0x004288f7);
    /* 004288f7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004288f9: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 004288fb: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004288fe: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004288ff: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00428902: call 0x428470 */ r_esp -= 4; W32(r_esp, 0x428907u); f_00428470();
L_00428907:; BB(0x00428907);
    /* 00428907: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00428909: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0042890c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0042890d: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 00428913: call 0x4369a0 */ r_esp -= 4; W32(r_esp, 0x428918u); f_004369a0();
    /* 00428918: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0042891b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042891d: je 0x428947 */ if (fZ) goto L_00428947;
L_0042891f:; BB(0x0042891f);
    /* 0042891f: push 0x1a */ { u32 v = 0x1au; r_esp -= 4; W32(r_esp, v); }
    /* 00428921: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00428924: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00428925: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0042892b: call 0x4369a0 */ r_esp -= 4; W32(r_esp, 0x428930u); f_004369a0();
    /* 00428930: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00428933: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00428935: jne 0x428947 */ if (!fZ) goto L_00428947;
L_00428937:; BB(0x00428937);
    /* 00428937: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00428939: push 0x1a */ { u32 v = 0x1au; r_esp -= 4; W32(r_esp, v); }
    /* 0042893b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0042893e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042893f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00428942: call 0x428470 */ r_esp -= 4; W32(r_esp, 0x428947u); f_00428470();
L_00428947:; BB(0x00428947);
    /* 00428947: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 00428949: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042894c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042894d: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 00428953: call 0x4369a0 */ r_esp -= 4; W32(r_esp, 0x428958u); f_004369a0();
    /* 00428958: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0042895b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042895d: je 0x428987 */ if (fZ) goto L_00428987;
L_0042895f:; BB(0x0042895f);
    /* 0042895f: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 00428961: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00428964: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00428965: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0042896b: call 0x4369a0 */ r_esp -= 4; W32(r_esp, 0x428970u); f_004369a0();
    /* 00428970: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00428973: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00428975: jne 0x428987 */ if (!fZ) goto L_00428987;
L_00428977:; BB(0x00428977);
    /* 00428977: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00428979: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 0042897b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0042897e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0042897f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00428982: call 0x428470 */ r_esp -= 4; W32(r_esp, 0x428987u); f_00428470();
L_00428987:; BB(0x00428987);
    /* 00428987: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 00428989: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0042898c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042898d: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 00428993: call 0x4369a0 */ r_esp -= 4; W32(r_esp, 0x428998u); f_004369a0();
    /* 00428998: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0042899b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042899d: je 0x4289c7 */ if (fZ) goto L_004289c7;
L_0042899f:; BB(0x0042899f);
    /* 0042899f: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 004289a1: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004289a4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004289a5: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 004289ab: call 0x4369a0 */ r_esp -= 4; W32(r_esp, 0x4289b0u); f_004369a0();
    /* 004289b0: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004289b3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004289b5: jne 0x4289c7 */ if (!fZ) goto L_004289c7;
L_004289b7:; BB(0x004289b7);
    /* 004289b7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004289b9: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 004289bb: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004289be: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004289bf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004289c2: call 0x428470 */ r_esp -= 4; W32(r_esp, 0x4289c7u); f_00428470();
L_004289c7:; BB(0x004289c7);
    /* 004289c7: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 004289c9: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004289cc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004289cd: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 004289d3: call 0x4369a0 */ r_esp -= 4; W32(r_esp, 0x4289d8u); f_004369a0();
    /* 004289d8: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004289db: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004289dd: je 0x428a07 */ if (fZ) goto L_00428a07;
L_004289df:; BB(0x004289df);
    /* 004289df: push 0x1d */ { u32 v = 0x1du; r_esp -= 4; W32(r_esp, v); }
    /* 004289e1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004289e4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004289e5: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 004289eb: call 0x4369a0 */ r_esp -= 4; W32(r_esp, 0x4289f0u); f_004369a0();
    /* 004289f0: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004289f3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004289f5: jne 0x428a07 */ if (!fZ) goto L_00428a07;
L_004289f7:; BB(0x004289f7);
    /* 004289f7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004289f9: push 0x1d */ { u32 v = 0x1du; r_esp -= 4; W32(r_esp, v); }
    /* 004289fb: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004289fe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004289ff: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00428a02: call 0x428470 */ r_esp -= 4; W32(r_esp, 0x428a07u); f_00428470();
L_00428a07:; BB(0x00428a07);
    /* 00428a07: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 00428a09: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00428a0c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00428a0d: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 00428a13: call 0x4369a0 */ r_esp -= 4; W32(r_esp, 0x428a18u); f_004369a0();
    /* 00428a18: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00428a1b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00428a1d: je 0x428a47 */ if (fZ) goto L_00428a47;
L_00428a1f:; BB(0x00428a1f);
    /* 00428a1f: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 00428a21: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00428a24: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00428a25: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 00428a2b: call 0x4369a0 */ r_esp -= 4; W32(r_esp, 0x428a30u); f_004369a0();
    /* 00428a30: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00428a33: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00428a35: jne 0x428a47 */ if (!fZ) goto L_00428a47;
L_00428a37:; BB(0x00428a37);
    /* 00428a37: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00428a39: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 00428a3b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00428a3e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00428a3f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00428a42: call 0x428470 */ r_esp -= 4; W32(r_esp, 0x428a47u); f_00428470();
L_00428a47:; BB(0x00428a47);
    /* 00428a47: mov esp, ebp */ r_esp = r_ebp;
    /* 00428a49: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00428a4a: ret 4 */ FN_RET(0x004288c0); r_esp += 8; return;
}

void f_00428a50(void) /* sub_428A50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00428a50);
    /* 00428a50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00428a51: mov ebp, esp */ r_ebp = r_esp;
    /* 00428a53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00428a54: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00428a57: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00428a59: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00428a5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00428a5d: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 00428a63: call 0x4369a0 */ r_esp -= 4; W32(r_esp, 0x428a68u); f_004369a0();
    /* 00428a68: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00428a6b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00428a6d: je 0x428a97 */ if (fZ) goto L_00428a97;
L_00428a6f:; BB(0x00428a6f);
    /* 00428a6f: push 0x25 */ { u32 v = 0x25u; r_esp -= 4; W32(r_esp, v); }
    /* 00428a71: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00428a74: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00428a75: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 00428a7b: call 0x4369a0 */ r_esp -= 4; W32(r_esp, 0x428a80u); f_004369a0();
    /* 00428a80: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00428a83: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00428a85: jne 0x428a97 */ if (!fZ) goto L_00428a97;
L_00428a87:; BB(0x00428a87);
    /* 00428a87: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00428a89: push 0x25 */ { u32 v = 0x25u; r_esp -= 4; W32(r_esp, v); }
    /* 00428a8b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00428a8e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00428a8f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00428a92: call 0x428470 */ r_esp -= 4; W32(r_esp, 0x428a97u); f_00428470();
L_00428a97:; BB(0x00428a97);
    /* 00428a97: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00428a99: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00428a9c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00428a9d: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 00428aa3: call 0x4369a0 */ r_esp -= 4; W32(r_esp, 0x428aa8u); f_004369a0();
    /* 00428aa8: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00428aab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00428aad: je 0x428ad7 */ if (fZ) goto L_00428ad7;
L_00428aaf:; BB(0x00428aaf);
    /* 00428aaf: push 0x26 */ { u32 v = 0x26u; r_esp -= 4; W32(r_esp, v); }
    /* 00428ab1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00428ab4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00428ab5: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 00428abb: call 0x4369a0 */ r_esp -= 4; W32(r_esp, 0x428ac0u); f_004369a0();
    /* 00428ac0: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00428ac3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00428ac5: jne 0x428ad7 */ if (!fZ) goto L_00428ad7;
L_00428ac7:; BB(0x00428ac7);
    /* 00428ac7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00428ac9: push 0x26 */ { u32 v = 0x26u; r_esp -= 4; W32(r_esp, v); }
    /* 00428acb: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00428ace: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00428acf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00428ad2: call 0x428470 */ r_esp -= 4; W32(r_esp, 0x428ad7u); f_00428470();
L_00428ad7:; BB(0x00428ad7);
    /* 00428ad7: push 0x21 */ { u32 v = 0x21u; r_esp -= 4; W32(r_esp, v); }
    /* 00428ad9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00428adc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00428add: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 00428ae3: call 0x4369a0 */ r_esp -= 4; W32(r_esp, 0x428ae8u); f_004369a0();
    /* 00428ae8: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00428aeb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00428aed: je 0x428b17 */ if (fZ) goto L_00428b17;
L_00428aef:; BB(0x00428aef);
    /* 00428aef: push 0x27 */ { u32 v = 0x27u; r_esp -= 4; W32(r_esp, v); }
    /* 00428af1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00428af4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00428af5: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 00428afb: call 0x4369a0 */ r_esp -= 4; W32(r_esp, 0x428b00u); f_004369a0();
    /* 00428b00: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00428b03: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00428b05: jne 0x428b17 */ if (!fZ) goto L_00428b17;
L_00428b07:; BB(0x00428b07);
    /* 00428b07: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00428b09: push 0x27 */ { u32 v = 0x27u; r_esp -= 4; W32(r_esp, v); }
    /* 00428b0b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00428b0e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00428b0f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00428b12: call 0x428470 */ r_esp -= 4; W32(r_esp, 0x428b17u); f_00428470();
L_00428b17:; BB(0x00428b17);
    /* 00428b17: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 00428b19: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00428b1c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00428b1d: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 00428b23: call 0x4369a0 */ r_esp -= 4; W32(r_esp, 0x428b28u); f_004369a0();
    /* 00428b28: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00428b2b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00428b2d: je 0x428b57 */ if (fZ) goto L_00428b57;
L_00428b2f:; BB(0x00428b2f);
    /* 00428b2f: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 00428b31: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00428b34: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00428b35: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 00428b3b: call 0x4369a0 */ r_esp -= 4; W32(r_esp, 0x428b40u); f_004369a0();
    /* 00428b40: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00428b43: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00428b45: jne 0x428b57 */ if (!fZ) goto L_00428b57;
L_00428b47:; BB(0x00428b47);
    /* 00428b47: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00428b49: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 00428b4b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00428b4e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00428b4f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00428b52: call 0x428470 */ r_esp -= 4; W32(r_esp, 0x428b57u); f_00428470();
L_00428b57:; BB(0x00428b57);
    /* 00428b57: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 00428b59: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00428b5c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00428b5d: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 00428b63: call 0x4369a0 */ r_esp -= 4; W32(r_esp, 0x428b68u); f_004369a0();
    /* 00428b68: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00428b6b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00428b6d: je 0x428b97 */ if (fZ) goto L_00428b97;
L_00428b6f:; BB(0x00428b6f);
    /* 00428b6f: push 0x29 */ { u32 v = 0x29u; r_esp -= 4; W32(r_esp, v); }
    /* 00428b71: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00428b74: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00428b75: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 00428b7b: call 0x4369a0 */ r_esp -= 4; W32(r_esp, 0x428b80u); f_004369a0();
    /* 00428b80: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00428b83: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00428b85: jne 0x428b97 */ if (!fZ) goto L_00428b97;
L_00428b87:; BB(0x00428b87);
    /* 00428b87: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00428b89: push 0x29 */ { u32 v = 0x29u; r_esp -= 4; W32(r_esp, v); }
    /* 00428b8b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00428b8e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00428b8f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00428b92: call 0x428470 */ r_esp -= 4; W32(r_esp, 0x428b97u); f_00428470();
L_00428b97:; BB(0x00428b97);
    /* 00428b97: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00428b99: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00428b9c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00428b9d: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 00428ba3: call 0x4369a0 */ r_esp -= 4; W32(r_esp, 0x428ba8u); f_004369a0();
    /* 00428ba8: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00428bab: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00428bad: je 0x428bd7 */ if (fZ) goto L_00428bd7;
L_00428baf:; BB(0x00428baf);
    /* 00428baf: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 00428bb1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00428bb4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00428bb5: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 00428bbb: call 0x4369a0 */ r_esp -= 4; W32(r_esp, 0x428bc0u); f_004369a0();
    /* 00428bc0: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00428bc3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00428bc5: jne 0x428bd7 */ if (!fZ) goto L_00428bd7;
L_00428bc7:; BB(0x00428bc7);
    /* 00428bc7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00428bc9: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 00428bcb: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00428bce: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00428bcf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00428bd2: call 0x428470 */ r_esp -= 4; W32(r_esp, 0x428bd7u); f_00428470();
L_00428bd7:; BB(0x00428bd7);
    /* 00428bd7: mov esp, ebp */ r_esp = r_ebp;
    /* 00428bd9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00428bda: ret 4 */ FN_RET(0x00428a50); r_esp += 8; return;
}

