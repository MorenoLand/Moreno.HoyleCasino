#include "protos.h"

void f_00517fa0(void) /* DealStudScript::vfunc5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00517fa0);
    /* 00517fa0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00517fa1: mov ebp, esp */ r_ebp = r_esp;
    /* 00517fa3: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00517fa6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00517fa7: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00517faa: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00517fad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00517fae: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00517fb1: call 0x5fc3a0 */ r_esp -= 4; W32(r_esp, 0x517fb6u); f_005fc3a0();
    /* 00517fb6: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00517fb9: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 00517fbc: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 00517fbf: cmp dword ptr [ebp - 0x20], 7 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00517fc3: ja 0x5188d0 */ if ((!fC&&!fZ)) goto L_005188d0;
L_00517fc9:; BB(0x00517fc9);
    /* 00517fc9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00517fcc: jmp dword ptr [eax*4 + 0x5188d8] */ { u32 t = R32((u32)(r_eax*4+0x5188d8u)); switch (t) { case 0x517fd3u: goto L_00517fd3; case 0x51848cu: goto L_0051848c; case 0x5184bdu: goto L_005184bd; case 0x5184feu: goto L_005184fe; case 0x51854eu: goto L_0051854e; case 0x518586u: goto L_00518586; case 0x51877au: goto L_0051877a; case 0x5188aeu: goto L_005188ae; default: UNSUP(0x00517fcc, "jump table entry is not a known target"); } }
L_00517fd3:; BB(0x00517fd3);
    /* 00517fd3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00517fd5: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00517fdb: call 0x47e540 */ r_esp -= 4; W32(r_esp, 0x517fe0u); f_0047e540();
    /* 00517fe0: mov byte ptr [0x793030], 0 */ W8((u32)(0x793030u), 0x0u);
    /* 00517fe7: mov dword ptr [0x793070], 0 */ W32((u32)(0x793070u), 0x0u);
    /* 00517ff1: mov dword ptr [0x793058], 0 */ W32((u32)(0x793058u), 0x0u);
    /* 00517ffb: mov dword ptr [0x793158], 0 */ W32((u32)(0x793158u), 0x0u);
    /* 00518005: jmp 0x518016 */ goto L_00518016;
L_00518007:; BB(0x00518007);
    /* 00518007: mov ecx, dword ptr [0x793158] */ r_ecx = R32((u32)(0x793158u));
    /* 0051800d: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00518010: mov dword ptr [0x793158], ecx */ W32((u32)(0x793158u), r_ecx);
L_00518016:; BB(0x00518016);
    /* 00518016: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051801c: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x518021u); f_0047f950();
    /* 00518021: cmp dword ptr [0x793158], eax */ {  u32 a = R32((u32)(0x793158u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00518027: jge 0x51811b */ if ((fS==fO)) goto L_0051811b;
L_0051802d:; BB(0x0051802d);
    /* 0051802d: mov edx, dword ptr [0x793158] */ r_edx = R32((u32)(0x793158u));
    /* 00518033: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00518034: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051803a: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x51803fu); f_0047e390();
    /* 0051803f: mov ecx, eax */ r_ecx = r_eax;
    /* 00518041: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x518046u); f_004c6cb0();
    /* 00518046: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00518048: je 0x5180e0 */ if (fZ) goto L_005180e0;
L_0051804e:; BB(0x0051804e);
    /* 0051804e: mov eax, dword ptr [0x793158] */ r_eax = R32((u32)(0x793158u));
    /* 00518053: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00518054: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051805a: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x51805fu); f_0047e390();
    /* 0051805f: mov ecx, eax */ r_ecx = r_eax;
    /* 00518061: call 0x4c6a70 */ r_esp -= 4; W32(r_esp, 0x518066u); f_004c6a70();
    /* 00518066: mov esi, eax */ r_esi = r_eax;
    /* 00518068: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051806e: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x518073u); f_0047bc20();
    /* 00518073: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00518075: jl 0x5180e0 */ if ((fS!=fO)) goto L_005180e0;
L_00518077:; BB(0x00518077);
    /* 00518077: mov ecx, dword ptr [0x793158] */ r_ecx = R32((u32)(0x793158u));
    /* 0051807d: mov word ptr [ecx*2 + 0x792de8], 0xffff */ W16((u32)(r_ecx*2+0x792de8u), 0xffffu);
    /* 00518087: mov edx, dword ptr [0x793158] */ r_edx = R32((u32)(0x793158u));
    /* 0051808d: mov word ptr [edx*2 + 0x792990], 0xffff */ W16((u32)(r_edx*2+0x792990u), 0xffffu);
    /* 00518097: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00518099: mov eax, dword ptr [0x793158] */ r_eax = R32((u32)(0x793158u));
    /* 0051809e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051809f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005180a5: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x5180aau); f_0047e390();
    /* 005180aa: mov ecx, eax */ r_ecx = r_eax;
    /* 005180ac: call 0x4c7030 */ r_esp -= 4; W32(r_esp, 0x5180b1u); f_004c7030();
    /* 005180b1: mov ecx, dword ptr [0x793070] */ r_ecx = R32((u32)(0x793070u));
    /* 005180b7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005180b8: mov edx, dword ptr [0x793158] */ r_edx = R32((u32)(0x793158u));
    /* 005180be: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005180bf: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005180c5: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x5180cau); f_0047e390();
    /* 005180ca: mov ecx, eax */ r_ecx = r_eax;
    /* 005180cc: call 0x4c7070 */ r_esp -= 4; W32(r_esp, 0x5180d1u); f_004c7070();
    /* 005180d1: mov eax, dword ptr [0x793070] */ r_eax = R32((u32)(0x793070u));
    /* 005180d6: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005180d9: mov dword ptr [0x793070], eax */ W32((u32)(0x793070u), r_eax);
    /* 005180de: jmp 0x518116 */ goto L_00518116;
L_005180e0:; BB(0x005180e0);
    /* 005180e0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005180e2: mov ecx, dword ptr [0x793158] */ r_ecx = R32((u32)(0x793158u));
    /* 005180e8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005180e9: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005180ef: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x5180f4u); f_0047e390();
    /* 005180f4: mov ecx, eax */ r_ecx = r_eax;
    /* 005180f6: call 0x4c7030 */ r_esp -= 4; W32(r_esp, 0x5180fbu); f_004c7030();
    /* 005180fb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005180fd: mov edx, dword ptr [0x793158] */ r_edx = R32((u32)(0x793158u));
    /* 00518103: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00518104: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051810a: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x51810fu); f_0047e390();
    /* 0051810f: mov ecx, eax */ r_ecx = r_eax;
    /* 00518111: call 0x4c7070 */ r_esp -= 4; W32(r_esp, 0x518116u); f_004c7070();
L_00518116:; BB(0x00518116);
    /* 00518116: jmp 0x518007 */ goto L_00518007;
L_0051811b:; BB(0x0051811b);
    /* 0051811b: cmp dword ptr [0x793070], 2 */ {  u32 a = R32((u32)(0x793070u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00518122: jge 0x518147 */ if ((fS==fO)) goto L_00518147;
L_00518124:; BB(0x00518124);
    /* 00518124: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00518126: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00518129: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0051812b: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0051812e: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00518131: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x518133u); call_ind(t); }
    /* 00518133: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00518135: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00518138: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0051813a: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0051813d: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00518140: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x518142u); call_ind(t); }
    /* 00518142: jmp 0x5188d0 */ goto L_005188d0;
L_00518147:; BB(0x00518147);
    /* 00518147: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051814d: call 0x47e860 */ r_esp -= 4; W32(r_esp, 0x518152u); f_0047e860();
    /* 00518152: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00518158: call 0x47e170 */ r_esp -= 4; W32(r_esp, 0x51815du); f_0047e170();
    /* 0051815d: cmp eax, 0x17 */ {  u32 a = r_eax; u32 b = 0x17u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00518160: jne 0x518167 */ if (!fZ) goto L_00518167;
L_00518162:; BB(0x00518162);
    /* 00518162: jmp 0x518244 */ goto L_00518244;
L_00518167:; BB(0x00518167);
    /* 00518167: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051816d: cmp dword ptr [ecx + 0xd4], -1 */ {  u32 a = R32((u32)(r_ecx+0xd4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00518174: jne 0x5181b5 */ if (!fZ) goto L_005181b5;
L_00518176:; BB(0x00518176);
    /* 00518176: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 0051817c: cmp dword ptr [edx + 0xd0], -1 */ {  u32 a = R32((u32)(r_edx+0xd0u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00518183: je 0x51819e */ if (fZ) goto L_0051819e;
L_00518185:; BB(0x00518185);
    /* 00518185: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051818b: call 0x47bbc0 */ r_esp -= 4; W32(r_esp, 0x518190u); f_0047bbc0();
    /* 00518190: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00518196: mov dword ptr [ecx + 0xd4], eax */ W32((u32)(r_ecx+0xd4u), r_eax);
    /* 0051819c: jmp 0x5181b5 */ goto L_005181b5;
L_0051819e:; BB(0x0051819e);
    /* 0051819e: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 005181a4: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 005181a9: mov ecx, dword ptr [eax + 0xd8] */ r_ecx = R32((u32)(r_eax+0xd8u));
    /* 005181af: mov dword ptr [edx + 0xd4], ecx */ W32((u32)(r_edx+0xd4u), r_ecx);
L_005181b5:; BB(0x005181b5);
    /* 005181b5: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 005181bb: mov eax, dword ptr [edx + 0xd4] */ r_eax = R32((u32)(r_edx+0xd4u));
    /* 005181c1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005181c4: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005181ca: mov dword ptr [ecx + 0xd4], eax */ W32((u32)(r_ecx+0xd4u), r_eax);
    /* 005181d0: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005181d6: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x5181dbu); f_0047f950();
    /* 005181db: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005181de: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 005181e4: cmp dword ptr [edx + 0xd4], eax */ {  u32 a = R32((u32)(r_edx+0xd4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005181ea: jle 0x5181fb */ if ((fZ||fS!=fO)) goto L_005181fb;
L_005181ec:; BB(0x005181ec);
    /* 005181ec: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 005181f1: mov dword ptr [eax + 0xd4], 0 */ W32((u32)(r_eax+0xd4u), 0x0u);
L_005181fb:; BB(0x005181fb);
    /* 005181fb: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00518201: mov edx, dword ptr [ecx + 0xd4] */ r_edx = R32((u32)(r_ecx+0xd4u));
    /* 00518207: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00518208: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051820e: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x518213u); f_0047e390();
    /* 00518213: mov ecx, eax */ r_ecx = r_eax;
    /* 00518215: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x51821au); f_004c7010();
    /* 0051821a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051821c: je 0x5181b5 */ if (fZ) goto L_005181b5;
L_0051821e:; BB(0x0051821e);
    /* 0051821e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00518224: call 0x47bbc0 */ r_esp -= 4; W32(r_esp, 0x518229u); f_0047bbc0();
    /* 00518229: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051822f: cmp eax, dword ptr [ecx + 0xd4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0xd4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00518235: je 0x518244 */ if (fZ) goto L_00518244;
L_00518237:; BB(0x00518237);
    /* 00518237: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051823d: call 0x47bac0 */ r_esp -= 4; W32(r_esp, 0x518242u); f_0047bac0();
    /* 00518242: jmp 0x51821e */ goto L_0051821e;
L_00518244:; BB(0x00518244);
    /* 00518244: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051824a: call 0x47ecf0 */ r_esp -= 4; W32(r_esp, 0x51824fu); f_0047ecf0();
    /* 0051824f: mov dword ptr [0x793154], 0 */ W32((u32)(0x793154u), 0x0u);
    /* 00518259: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051825f: call 0x47bbc0 */ r_esp -= 4; W32(r_esp, 0x518264u); f_0047bbc0();
    /* 00518264: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00518265: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051826b: call 0x47e400 */ r_esp -= 4; W32(r_esp, 0x518270u); f_0047e400();
L_00518270:; BB(0x00518270);
    /* 00518270: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00518276: call 0x47e440 */ r_esp -= 4; W32(r_esp, 0x51827bu); f_0047e440();
    /* 0051827b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00518281: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x518286u); f_0047e3b0();
    /* 00518286: mov ecx, eax */ r_ecx = r_eax;
    /* 00518288: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x51828du); f_004c7010();
    /* 0051828d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051828f: je 0x518270 */ if (fZ) goto L_00518270;
L_00518291:; BB(0x00518291);
    /* 00518291: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00518297: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x51829cu); f_0047e190();
    /* 0051829c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051829f: jne 0x5182aa */ if (!fZ) goto L_005182aa;
L_005182a1:; BB(0x005182a1);
    /* 005182a1: cmp dword ptr [0x793070], 7 */ {  u32 a = R32((u32)(0x793070u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005182a8: jg 0x5182cb */ if ((!fZ&&fS==fO)) goto L_005182cb;
L_005182aa:; BB(0x005182aa);
    /* 005182aa: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005182b0: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x5182b5u); f_0047e190();
    /* 005182b5: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005182b8: jne 0x51836c */ if (!fZ) goto L_0051836c;
L_005182be:; BB(0x005182be);
    /* 005182be: cmp dword ptr [0x793070], 7 */ {  u32 a = R32((u32)(0x793070u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005182c5: jle 0x51836c */ if ((fZ||fS!=fO)) goto L_0051836c;
L_005182cb:; BB(0x005182cb);
    /* 005182cb: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005182d1: call 0x47bbc0 */ r_esp -= 4; W32(r_esp, 0x5182d6u); f_0047bbc0();
    /* 005182d6: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fS = ((r >> 31) & 1); }
    /* 005182d9: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005182dc: jns 0x5182ef */ if (!fS) goto L_005182ef;
L_005182de:; BB(0x005182de);
    /* 005182de: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005182e4: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x5182e9u); f_0047f950();
    /* 005182e9: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005182ec: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005182ef:; BB(0x005182ef);
    /* 005182ef: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005182f2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005182f3: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005182f9: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x5182feu); f_0047e390();
    /* 005182fe: mov ecx, eax */ r_ecx = r_eax;
    /* 00518300: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x518305u); f_004c7010();
    /* 00518305: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00518307: je 0x518324 */ if (fZ) goto L_00518324;
L_00518309:; BB(0x00518309);
    /* 00518309: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051830c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051830d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00518313: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x518318u); f_0047e390();
    /* 00518318: mov ecx, eax */ r_ecx = r_eax;
    /* 0051831a: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x51831fu); f_004c6cb0();
    /* 0051831f: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00518322: jne 0x518342 */ if (!fZ) goto L_00518342;
L_00518324:; BB(0x00518324);
    /* 00518324: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00518327: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fS = ((r >> 31) & 1); }
    /* 0051832a: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0051832d: jns 0x518340 */ if (!fS) goto L_00518340;
L_0051832f:; BB(0x0051832f);
    /* 0051832f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00518335: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x51833au); f_0047f950();
    /* 0051833a: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0051833d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00518340:; BB(0x00518340);
    /* 00518340: jmp 0x5182ef */ goto L_005182ef;
L_00518342:; BB(0x00518342);
    /* 00518342: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00518344: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00518347: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00518348: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051834e: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x518353u); f_0047e390();
    /* 00518353: mov ecx, eax */ r_ecx = r_eax;
    /* 00518355: call 0x4c7030 */ r_esp -= 4; W32(r_esp, 0x51835au); f_004c7030();
    /* 0051835a: mov eax, dword ptr [0x793070] */ r_eax = R32((u32)(0x793070u));
    /* 0051835f: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00518362: mov dword ptr [0x793070], eax */ W32((u32)(0x793070u), r_eax);
    /* 00518367: jmp 0x518291 */ goto L_00518291;
L_0051836c:; BB(0x0051836c);
    /* 0051836c: mov dword ptr [0x793070], 0 */ W32((u32)(0x793070u), 0x0u);
    /* 00518376: mov dword ptr [0x793058], 0 */ W32((u32)(0x793058u), 0x0u);
    /* 00518380: mov dword ptr [0x793158], 0 */ W32((u32)(0x793158u), 0x0u);
    /* 0051838a: jmp 0x51839b */ goto L_0051839b;
L_0051838c:; BB(0x0051838c);
    /* 0051838c: mov ecx, dword ptr [0x793158] */ r_ecx = R32((u32)(0x793158u));
    /* 00518392: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00518395: mov dword ptr [0x793158], ecx */ W32((u32)(0x793158u), r_ecx);
L_0051839b:; BB(0x0051839b);
    /* 0051839b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005183a1: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x5183a6u); f_0047f950();
    /* 005183a6: cmp dword ptr [0x793158], eax */ {  u32 a = R32((u32)(0x793158u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005183ac: jge 0x51845f */ if ((fS==fO)) goto L_0051845f;
L_005183b2:; BB(0x005183b2);
    /* 005183b2: mov edx, dword ptr [0x793158] */ r_edx = R32((u32)(0x793158u));
    /* 005183b8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005183b9: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005183bf: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x5183c4u); f_0047e390();
    /* 005183c4: mov ecx, eax */ r_ecx = r_eax;
    /* 005183c6: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x5183cbu); f_004c7010();
    /* 005183cb: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005183ce: jne 0x518440 */ if (!fZ) goto L_00518440;
L_005183d0:; BB(0x005183d0);
    /* 005183d0: mov eax, dword ptr [0x793070] */ r_eax = R32((u32)(0x793070u));
    /* 005183d5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005183d6: mov ecx, dword ptr [0x793158] */ r_ecx = R32((u32)(0x793158u));
    /* 005183dc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005183dd: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005183e3: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x5183e8u); f_0047e390();
    /* 005183e8: mov ecx, eax */ r_ecx = r_eax;
    /* 005183ea: call 0x4c7070 */ r_esp -= 4; W32(r_esp, 0x5183efu); f_004c7070();
    /* 005183ef: mov edx, dword ptr [0x793158] */ r_edx = R32((u32)(0x793158u));
    /* 005183f5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005183f6: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005183fc: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x518401u); f_0047e390();
    /* 00518401: mov ecx, eax */ r_ecx = r_eax;
    /* 00518403: call 0x4c9160 */ r_esp -= 4; W32(r_esp, 0x518408u); f_004c9160();
    /* 00518408: mov eax, dword ptr [0x793158] */ r_eax = R32((u32)(0x793158u));
    /* 0051840d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051840e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00518414: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x518419u); f_0047e390();
    /* 00518419: mov ecx, eax */ r_ecx = r_eax;
    /* 0051841b: call 0x4dd760 */ r_esp -= 4; W32(r_esp, 0x518420u); f_004dd760();
    /* 00518420: mov ecx, dword ptr [0x793070] */ r_ecx = R32((u32)(0x793070u));
    /* 00518426: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00518429: mov dword ptr [0x793070], ecx */ W32((u32)(0x793070u), r_ecx);
    /* 0051842f: mov edx, dword ptr [0x793058] */ r_edx = R32((u32)(0x793058u));
    /* 00518435: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00518438: mov dword ptr [0x793058], edx */ W32((u32)(0x793058u), r_edx);
    /* 0051843e: jmp 0x51845a */ goto L_0051845a;
L_00518440:; BB(0x00518440);
    /* 00518440: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00518442: mov eax, dword ptr [0x793158] */ r_eax = R32((u32)(0x793158u));
    /* 00518447: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00518448: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051844e: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x518453u); f_0047e390();
    /* 00518453: mov ecx, eax */ r_ecx = r_eax;
    /* 00518455: call 0x4c7070 */ r_esp -= 4; W32(r_esp, 0x51845au); f_004c7070();
L_0051845a:; BB(0x0051845a);
    /* 0051845a: jmp 0x51838c */ goto L_0051838c;
L_0051845f:; BB(0x0051845f);
    /* 0051845f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00518462: mov dword ptr [ecx + 0x20], 0 */ W32((u32)(r_ecx+0x20u), 0x0u);
    /* 00518469: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051846b: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0051846e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00518470: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00518473: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00518476: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x518478u); call_ind(t); }
    /* 00518478: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051847a: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0051847d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0051847f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00518482: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00518485: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x518487u); call_ind(t); }
    /* 00518487: jmp 0x5188d0 */ goto L_005188d0;
L_0051848c:; BB(0x0051848c);
    /* 0051848c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00518492: mov ecx, dword ptr [ecx + 0x30] */ r_ecx = R32((u32)(r_ecx+0x30u));
    /* 00518495: call 0x4654d0 */ r_esp -= 4; W32(r_esp, 0x51849au); f_004654d0();
    /* 0051849a: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0051849c: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0051849f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005184a1: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005184a4: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005184a7: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5184a9u); call_ind(t); }
    /* 005184a9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005184ab: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005184ae: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005184b0: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005184b3: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 005184b6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5184b8u); call_ind(t); }
    /* 005184b8: jmp 0x5188d0 */ goto L_005188d0;
L_005184bd:; BB(0x005184bd);
    /* 005184bd: mov cx, word ptr [0x793070] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(0x793070u))) & 0xffffu);
    /* 005184c4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005184c5: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005184cb: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005184ce: call 0x4f4320 */ r_esp -= 4; W32(r_esp, 0x5184d3u); f_004f4320();
    /* 005184d3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005184d5: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005184db: call 0x47ec90 */ r_esp -= 4; W32(r_esp, 0x5184e0u); f_0047ec90();
    /* 005184e0: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005184e2: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005184e5: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005184e7: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005184ea: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005184ed: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5184efu); call_ind(t); }
    /* 005184ef: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005184f1: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005184f4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005184f6: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005184f9: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 005184fc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5184feu); call_ind(t); }
L_005184fe:; BB(0x005184fe);
    /* 005184fe: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00518504: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x518509u); f_0047e3b0();
    /* 00518509: mov ecx, eax */ r_ecx = r_eax;
    /* 0051850b: call 0x4c7050 */ r_esp -= 4; W32(r_esp, 0x518510u); f_004c7050();
    /* 00518510: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00518511: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00518517: call 0x47bc60 */ r_esp -= 4; W32(r_esp, 0x51851cu); f_0047bc60();
    /* 0051851c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051851d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00518523: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00518526: call 0x4f5110 */ r_esp -= 4; W32(r_esp, 0x51852bu); f_004f5110();
    /* 0051852b: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0051852d: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00518530: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00518532: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00518535: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00518538: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x51853au); call_ind(t); }
    /* 0051853a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051853c: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0051853f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00518541: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00518544: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00518547: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x518549u); call_ind(t); }
    /* 00518549: jmp 0x5188d0 */ goto L_005188d0;
L_0051854e:; BB(0x0051854e);
    /* 0051854e: call 0x516e20 */ r_esp -= 4; W32(r_esp, 0x518553u); f_00516e20();
    /* 00518553: mov dword ptr [0x793034], eax */ W32((u32)(0x793034u), r_eax);
    /* 00518558: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051855e: call 0x47e500 */ r_esp -= 4; W32(r_esp, 0x518563u); f_0047e500();
    /* 00518563: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00518565: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00518568: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0051856a: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0051856d: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00518570: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x518572u); call_ind(t); }
    /* 00518572: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00518574: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00518577: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00518579: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0051857c: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0051857f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x518581u); call_ind(t); }
    /* 00518581: jmp 0x5188d0 */ goto L_005188d0;
L_00518586:; BB(0x00518586);
    /* 00518586: cmp dword ptr [0x793034], -1 */ {  u32 a = R32((u32)(0x793034u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051858d: jne 0x5185db */ if (!fZ) goto L_005185db;
L_0051858f:; BB(0x0051858f);
    /* 0051858f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00518595: call 0x47bbc0 */ r_esp -= 4; W32(r_esp, 0x51859au); f_0047bbc0();
    /* 0051859a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051859b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005185a1: call 0x47e400 */ r_esp -= 4; W32(r_esp, 0x5185a6u); f_0047e400();
L_005185a6:; BB(0x005185a6);
    /* 005185a6: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005185ac: call 0x47e440 */ r_esp -= 4; W32(r_esp, 0x5185b1u); f_0047e440();
    /* 005185b1: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005185b7: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x5185bcu); f_0047e3b0();
    /* 005185bc: mov ecx, eax */ r_ecx = r_eax;
    /* 005185be: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x5185c3u); f_004c7010();
    /* 005185c3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005185c5: je 0x5185a6 */ if (fZ) goto L_005185a6;
L_005185c7:; BB(0x005185c7);
    /* 005185c7: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005185c9: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005185cc: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005185ce: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005185d1: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005185d4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5185d6u); call_ind(t); }
    /* 005185d6: jmp 0x518766 */ goto L_00518766;
L_005185db:; BB(0x005185db);
    /* 005185db: cmp dword ptr [0x793034], -3 */ {  u32 a = R32((u32)(0x793034u)); u32 b = 0xfffffffdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005185e2: jne 0x518739 */ if (!fZ) goto L_00518739;
L_005185e8:; BB(0x005185e8);
    /* 005185e8: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005185ee: call 0x47bbc0 */ r_esp -= 4; W32(r_esp, 0x5185f3u); f_0047bbc0();
    /* 005185f3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005185f4: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005185fa: call 0x47e400 */ r_esp -= 4; W32(r_esp, 0x5185ffu); f_0047e400();
L_005185ff:; BB(0x005185ff);
    /* 005185ff: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00518605: call 0x47e440 */ r_esp -= 4; W32(r_esp, 0x51860au); f_0047e440();
    /* 0051860a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00518610: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x518615u); f_0047e3b0();
    /* 00518615: mov ecx, eax */ r_ecx = r_eax;
    /* 00518617: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x51861cu); f_004c7010();
    /* 0051861c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051861e: je 0x5185ff */ if (fZ) goto L_005185ff;
L_00518620:; BB(0x00518620);
    /* 00518620: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00518626: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00518629: call 0x4f6420 */ r_esp -= 4; W32(r_esp, 0x51862eu); f_004f6420();
    /* 0051862e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00518630: jle 0x518721 */ if ((fZ||fS!=fO)) goto L_00518721;
L_00518636:; BB(0x00518636);
    /* 00518636: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051863c: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0051863f: call 0x4f6420 */ r_esp -= 4; W32(r_esp, 0x518644u); f_004f6420();
    /* 00518644: mov esi, eax */ r_esi = r_eax;
    /* 00518646: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051864c: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x518651u); f_0047bc20();
    /* 00518651: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00518654: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00518655: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051865b: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0051865e: call 0x4f64b0 */ r_esp -= 4; W32(r_esp, 0x518663u); f_004f64b0();
    /* 00518663: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 00518666: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00518667: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051866d: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x518672u); f_0047e3d0();
    /* 00518672: mov ecx, eax */ r_ecx = r_eax;
    /* 00518674: call 0x4c6b80 */ r_esp -= 4; W32(r_esp, 0x518679u); f_004c6b80();
    /* 00518679: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051867f: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00518682: call 0x4f64b0 */ r_esp -= 4; W32(r_esp, 0x518687u); f_004f64b0();
    /* 00518687: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 0051868a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051868b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00518691: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x518696u); f_0047e3d0();
    /* 00518696: mov ecx, eax */ r_ecx = r_eax;
    /* 00518698: call 0x4da300 */ r_esp -= 4; W32(r_esp, 0x51869du); f_004da300();
    /* 0051869d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051869f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005186a5: call 0x47ec90 */ r_esp -= 4; W32(r_esp, 0x5186aau); f_0047ec90();
    /* 005186aa: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005186b0: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005186b3: call 0x4f64b0 */ r_esp -= 4; W32(r_esp, 0x5186b8u); f_004f64b0();
    /* 005186b8: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 005186bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005186bc: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005186c2: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x5186c7u); f_0047e3d0();
    /* 005186c7: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005186ca: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005186cd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005186cf: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005186d5: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005186d8: call 0x4f6420 */ r_esp -= 4; W32(r_esp, 0x5186ddu); f_004f6420();
    /* 005186dd: mov esi, eax */ r_esi = r_eax;
    /* 005186df: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005186e5: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x5186eau); f_0047bc20();
    /* 005186ea: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005186ed: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005186ee: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5186f3u); f_0064c8a0();
    /* 005186f3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005186f6: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005186f9: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005186fc: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005186ff: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00518702: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00518705: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00518708: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051870b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051870c: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0051870f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00518710: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00518712: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00518715: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00518716: mov ecx, dword ptr [0x79506c] */ r_ecx = R32((u32)(0x79506cu));
    /* 0051871c: call 0x5e7e40 */ r_esp -= 4; W32(r_esp, 0x518721u); f_005e7e40();
L_00518721:; BB(0x00518721);
    /* 00518721: mov byte ptr [0x793030], 1 */ W8((u32)(0x793030u), 0x1u);
    /* 00518728: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0051872a: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0051872d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0051872f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00518732: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00518735: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x518737u); call_ind(t); }
    /* 00518737: jmp 0x518766 */ goto L_00518766;
L_00518739:; BB(0x00518739);
    /* 00518739: mov ecx, dword ptr [0x793034] */ r_ecx = R32((u32)(0x793034u));
    /* 0051873f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00518740: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00518746: call 0x47e490 */ r_esp -= 4; W32(r_esp, 0x51874bu); f_0047e490();
    /* 0051874b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051874c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00518752: call 0x47e400 */ r_esp -= 4; W32(r_esp, 0x518757u); f_0047e400();
    /* 00518757: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00518759: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0051875c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0051875e: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00518761: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00518764: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x518766u); call_ind(t); }
L_00518766:; BB(0x00518766);
    /* 00518766: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00518768: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0051876b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0051876d: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00518770: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00518773: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x518775u); call_ind(t); }
    /* 00518775: jmp 0x5188d0 */ goto L_005188d0;
L_0051877a:; BB(0x0051877a);
    /* 0051877a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00518780: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x518785u); f_0047e3b0();
    /* 00518785: mov ecx, eax */ r_ecx = r_eax;
    /* 00518787: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x51878cu); f_004c7010();
    /* 0051878c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051878e: jne 0x5187a7 */ if (!fZ) goto L_005187a7;
L_00518790:; BB(0x00518790);
    /* 00518790: push 0xe5b */ { u32 v = 0xe5bu; r_esp -= 4; W32(r_esp, v); }
    /* 00518795: push 0x6c13b8 */ { u32 v = 0x6c13b8u; r_esp -= 4; W32(r_esp, v); }
    /* 0051879a: push 0x6bf338 */ { u32 v = 0x6bf338u; r_esp -= 4; W32(r_esp, v); }
    /* 0051879f: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5187a4u); f_005e9f20();
    /* 005187a4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005187a7:; BB(0x005187a7);
    /* 005187a7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005187a9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005187ab: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005187ad: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005187b0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005187b1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005187b3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005187b5: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005187bb: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x5187c0u); f_0047e3b0();
    /* 005187c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005187c1: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005187c7: call 0x47b010 */ r_esp -= 4; W32(r_esp, 0x5187ccu); f_0047b010();
L_005187cc:; BB(0x005187cc);
    /* 005187cc: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005187d2: call 0x47e440 */ r_esp -= 4; W32(r_esp, 0x5187d7u); f_0047e440();
    /* 005187d7: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005187dd: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x5187e2u); f_0047e3b0();
    /* 005187e2: mov ecx, eax */ r_ecx = r_eax;
    /* 005187e4: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x5187e9u); f_004c7010();
    /* 005187e9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005187eb: je 0x5187cc */ if (fZ) goto L_005187cc;
L_005187ed:; BB(0x005187ed);
    /* 005187ed: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005187f0: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 005187f3: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005187f6: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005187f9: mov dword ptr [edx + 0x20], ecx */ W32((u32)(r_edx+0x20u), r_ecx);
    /* 005187fc: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005187ff: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00518802: cmp ecx, dword ptr [0x793070] */ {  u32 a = r_ecx; u32 b = R32((u32)(0x793070u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00518808: jne 0x518821 */ if (!fZ) goto L_00518821;
L_0051880a:; BB(0x0051880a);
    /* 0051880a: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0051880d: mov dword ptr [edx + 0x20], 0 */ W32((u32)(r_edx+0x20u), 0x0u);
    /* 00518814: mov eax, dword ptr [0x793154] */ r_eax = R32((u32)(0x793154u));
    /* 00518819: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051881c: mov dword ptr [0x793154], eax */ W32((u32)(0x793154u), r_eax);
L_00518821:; BB(0x00518821);
    /* 00518821: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00518823: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00518826: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00518828: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0051882b: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0051882e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x518830u); call_ind(t); }
    /* 00518830: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00518836: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x51883bu); f_0047e190();
    /* 0051883b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051883e: jne 0x51885a */ if (!fZ) goto L_0051885a;
L_00518840:; BB(0x00518840);
    /* 00518840: cmp dword ptr [0x793154], 2 */ {  u32 a = R32((u32)(0x793154u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00518847: jge 0x518858 */ if ((fS==fO)) goto L_00518858;
L_00518849:; BB(0x00518849);
    /* 00518849: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0051884b: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0051884e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00518850: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00518853: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00518856: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x518858u); call_ind(t); }
L_00518858:; BB(0x00518858);
    /* 00518858: jmp 0x5188ac */ goto L_005188ac;
L_0051885a:; BB(0x0051885a);
    /* 0051885a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00518860: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x518865u); f_0047e190();
    /* 00518865: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00518868: jne 0x518884 */ if (!fZ) goto L_00518884;
L_0051886a:; BB(0x0051886a);
    /* 0051886a: cmp dword ptr [0x793154], 1 */ {  u32 a = R32((u32)(0x793154u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00518871: jge 0x518882 */ if ((fS==fO)) goto L_00518882;
L_00518873:; BB(0x00518873);
    /* 00518873: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00518875: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00518878: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0051887a: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0051887d: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00518880: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x518882u); call_ind(t); }
L_00518882:; BB(0x00518882);
    /* 00518882: jmp 0x5188ac */ goto L_005188ac;
L_00518884:; BB(0x00518884);
    /* 00518884: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051888a: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x51888fu); f_0047e190();
    /* 0051888f: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00518892: jne 0x5188ac */ if (!fZ) goto L_005188ac;
L_00518894:; BB(0x00518894);
    /* 00518894: cmp dword ptr [0x793154], 7 */ {  u32 a = R32((u32)(0x793154u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051889b: jge 0x5188ac */ if ((fS==fO)) goto L_005188ac;
L_0051889d:; BB(0x0051889d);
    /* 0051889d: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0051889f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005188a2: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005188a4: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005188a7: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005188aa: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5188acu); call_ind(t); }
L_005188ac:; BB(0x005188ac);
    /* 005188ac: jmp 0x5188d0 */ goto L_005188d0;
L_005188ae:; BB(0x005188ae);
    /* 005188ae: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005188b0: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005188b3: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 005188b6: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005188b9: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 005188bc: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005188be: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 005188c1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5188c3u); call_ind(t); }
    /* 005188c3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005188c5: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005188c8: mov ecx, dword ptr [ecx + 0xc] */ r_ecx = R32((u32)(r_ecx+0xcu));
    /* 005188cb: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x5188d0u); f_005fc420();
L_005188d0:; BB(0x005188d0);
    /* 005188d0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005188d1: mov esp, ebp */ r_esp = r_ebp;
    /* 005188d3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005188d4: ret 4 */ FN_RET(0x00517fa0); r_esp += 8; return;
}

