#include "protos.h"

void f_006241c0(void) /* sub_6241C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006241c0);
    /* 006241c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006241c1: mov ebp, esp */ r_ebp = r_esp;
    /* 006241c3: sub esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006241c6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006241c7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006241c8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006241c9: mov dword ptr [ebp - 0x5c], ecx */ W32((u32)(r_ebp+0xffffffa4u), r_ecx);
    /* 006241cc: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006241cf: cmp eax, dword ptr [ebp + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006241d2: jne 0x6241f9 */ if (!fZ) goto L_006241f9;
L_006241d4:; BB(0x006241d4);
    /* 006241d4: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 006241d7: cmp ecx, dword ptr [ebp + 0x14] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x14u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006241da: jne 0x6241f9 */ if (!fZ) goto L_006241f9;
L_006241dc:; BB(0x006241dc);
    /* 006241dc: mov edx, dword ptr [ebp + 0x1c] */ r_edx = R32((u32)(r_ebp+0x1cu));
    /* 006241df: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006241e0: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 006241e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006241e4: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 006241e7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006241e8: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006241eb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006241ec: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 006241ef: call 0x623ab0 */ r_esp -= 4; W32(r_esp, 0x6241f4u); f_00623ab0();
    /* 006241f4: jmp 0x624740 */ goto L_00624740;
L_006241f9:; BB(0x006241f9);
    /* 006241f9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006241fc: cmp eax, dword ptr [ebp + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006241ff: jne 0x624222 */ if (!fZ) goto L_00624222;
L_00624201:; BB(0x00624201);
    /* 00624201: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 00624204: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00624205: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 00624208: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00624209: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0062420c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062420d: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00624210: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00624211: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00624214: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00624215: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00624218: call 0x623f00 */ r_esp -= 4; W32(r_esp, 0x62421du); f_00623f00();
    /* 0062421d: jmp 0x624740 */ goto L_00624740;
L_00624222:; BB(0x00624222);
    /* 00624222: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00624225: cmp eax, dword ptr [ebp + 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x14u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00624228: jne 0x62424b */ if (!fZ) goto L_0062424b;
L_0062422a:; BB(0x0062422a);
    /* 0062422a: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 0062422d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062422e: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 00624231: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00624232: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00624235: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00624236: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00624239: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062423a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0062423d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062423e: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00624241: call 0x623c60 */ r_esp -= 4; W32(r_esp, 0x624246u); f_00623c60();
    /* 00624246: jmp 0x624740 */ goto L_00624740;
L_0062424b:; BB(0x0062424b);
    /* 0062424b: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0062424e: sub eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00624251: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00624254: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 00624257: sub ecx, dword ptr [ebp + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0062425a: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0062425d: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 00624264: mov dword ptr [ebp - 0x18], 1 */ W32((u32)(r_ebp+0xffffffe8u), 0x1u);
    /* 0062426b: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0062426e: call 0x6238b0 */ r_esp -= 4; W32(r_esp, 0x624273u); f_006238b0();
    /* 00624273: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00624276: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062427a: jge 0x62428c */ if ((fS==fO)) goto L_0062428c;
L_0062427c:; BB(0x0062427c);
    /* 0062427c: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062427f: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00624281: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00624284: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00624287: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00624289: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
L_0062428c:; BB(0x0062428c);
    /* 0062428c: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00624290: jge 0x6242a2 */ if ((fS==fO)) goto L_006242a2;
L_00624292:; BB(0x00624292);
    /* 00624292: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00624295: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00624297: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0062429a: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062429d: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0062429f: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_006242a2:; BB(0x006242a2);
    /* 006242a2: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 006242a5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006242a6: call 0x617b30 */ r_esp -= 4; W32(r_esp, 0x6242abu); f_00617b30();
    /* 006242ab: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006242ae: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006242b1: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 006242b4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006242b5: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 006242b8: call 0x6238d0 */ r_esp -= 4; W32(r_esp, 0x6242bdu); f_006238d0();
    /* 006242bd: mov esi, eax */ r_esi = r_eax;
    /* 006242bf: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 006242c2: call 0x623930 */ r_esp -= 4; W32(r_esp, 0x6242c7u); f_00623930();
    /* 006242c7: imul eax, dword ptr [ebp + 8] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0x8u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006242cb: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006242cd: mov dword ptr [ebp - 0x10], esi */ W32((u32)(r_ebp+0xfffffff0u), r_esi);
    /* 006242d0: mov edx, dword ptr [ebp + 0x1c] */ r_edx = R32((u32)(r_ebp+0x1cu));
    /* 006242d3: mov dword ptr [ebp - 0x60], edx */ W32((u32)(r_ebp+0xffffffa0u), r_edx);
    /* 006242d6: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 006242d9: sub eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006242dc: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 006242df: cmp dword ptr [ebp - 0x60], 0x1e */ {  u32 a = R32((u32)(r_ebp+0xffffffa0u)); u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 006242e3: ja 0x624740 */ if ((!fC&&!fZ)) goto L_00624740;
L_006242e9:; BB(0x006242e9);
    /* 006242e9: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 006242ec: movzx edx, byte ptr [ecx + 0x624760] */ r_edx = (u32)R8((u32)(r_ecx+0x624760u));
    /* 006242f3: jmp dword ptr [edx*4 + 0x62474c] */ { u32 t = R32((u32)(r_edx*4+0x62474cu)); switch (t) { case 0x6242fau: goto L_006242fa; case 0x6242feu: goto L_006242fe; case 0x6245a4u: goto L_006245a4; case 0x624676u: goto L_00624676; case 0x624740u: goto L_00624740; default: UNSUP(0x006242f3, "jump table entry is not a known target"); } }
L_006242fa:; BB(0x006242fa);
    /* 006242fa: mov byte ptr [ebp + 0x1b], 0xff */ W8((u32)(r_ebp+0x1bu), 0xffu);
L_006242fe:; BB(0x006242fe);
    /* 006242fe: mov al, byte ptr [ebp + 0x1b] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x1bu))) & 0xffu);
    /* 00624301: mov byte ptr [ebp - 0x64], al */ W8((u32)(r_ebp+0xffffff9cu), (u8)r_eax);
    /* 00624304: cmp byte ptr [ebp - 0x64], 0 */ {  u32 a = R8((u32)(r_ebp+0xffffff9cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00624308: je 0x624315 */ if (fZ) goto L_00624315;
L_0062430a:; BB(0x0062430a);
    /* 0062430a: cmp byte ptr [ebp - 0x64], 0xff */ {  u32 a = R8((u32)(r_ebp+0xffffff9cu)); u32 b = 0xffu; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0062430e: je 0x62431a */ if (fZ) goto L_0062431a;
L_00624310:; BB(0x00624310);
    /* 00624310: jmp 0x6243d2 */ goto L_006243d2;
L_00624315:; BB(0x00624315);
    /* 00624315: jmp 0x624740 */ goto L_00624740;
L_0062431a:; BB(0x0062431a);
    /* 0062431a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062431d: cmp ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00624320: jle 0x62437b */ if ((fZ||fS!=fO)) goto L_0062437b;
L_00624322:; BB(0x00624322);
    /* 00624322: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00624325: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00624328: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0062432b:; BB(0x0062432b);
    /* 0062432b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062432e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00624331: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00624334: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00624337: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00624339: je 0x624374 */ if (fZ) goto L_00624374;
L_0062433b:; BB(0x0062433b);
    /* 0062433b: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062433e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00624341: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00624343: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00624346: add ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00624349: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0062434c: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0062434f: cmp edx, dword ptr [ebp - 0x20] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00624352: jle 0x624366 */ if ((fZ||fS!=fO)) goto L_00624366;
L_00624354:; BB(0x00624354);
    /* 00624354: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00624357: sub eax, dword ptr [ebp - 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0062435a: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0062435d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00624360: add ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00624363: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_00624366:; BB(0x00624366);
    /* 00624366: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00624369: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062436c: lea ecx, [eax + edx*4] */ r_ecx = (u32)(r_eax+r_edx*4);
    /* 0062436f: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00624372: jmp 0x62432b */ goto L_0062432b;
L_00624374:; BB(0x00624374);
    /* 00624374: jmp 0x624740 */ goto L_00624740;
L_0062437b:; BB(0x0062437b);
    /* 0062437b: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062437e: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00624381: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_00624384:; BB(0x00624384);
    /* 00624384: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00624387: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062438a: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0062438d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00624390: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00624392: je 0x6243cd */ if (fZ) goto L_006243cd;
L_00624394:; BB(0x00624394);
    /* 00624394: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00624397: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0062439a: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0062439c: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0062439f: add ecx, dword ptr [ebp - 0x20] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006243a2: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 006243a5: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006243a8: cmp edx, dword ptr [ebp - 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006243ab: jle 0x6243c2 */ if ((fZ||fS!=fO)) goto L_006243c2;
L_006243ad:; BB(0x006243ad);
    /* 006243ad: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 006243b0: sub eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006243b3: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 006243b6: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006243b9: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006243bc: lea eax, [edx + ecx*4] */ r_eax = (u32)(r_edx+r_ecx*4);
    /* 006243bf: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_006243c2:; BB(0x006243c2);
    /* 006243c2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006243c5: add ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006243c8: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 006243cb: jmp 0x624384 */ goto L_00624384;
L_006243cd:; BB(0x006243cd);
    /* 006243cd: jmp 0x624740 */ goto L_00624740;
L_006243d2:; BB(0x006243d2);
    /* 006243d2: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006243d5: cmp edx, dword ptr [ebp - 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006243d8: jle 0x6244c1 */ if ((fZ||fS!=fO)) goto L_006244c1;
L_006243de:; BB(0x006243de);
    /* 006243de: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006243e1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006243e4: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_006243e7:; BB(0x006243e7);
    /* 006243e7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006243ea: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006243ed: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006243f0: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 006243f3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006243f5: je 0x6244b7 */ if (fZ) goto L_006244b7;
L_006243fb:; BB(0x006243fb);
    /* 006243fb: movzx eax, byte ptr [ebp + 0x1b] */ r_eax = (u32)R8((u32)(r_ebp+0x1bu));
    /* 006243ff: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00624402: mov esi, dword ptr [ebp - 0x10] */ r_esi = R32((u32)(r_ebp+0xfffffff0u));
    /* 00624405: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 00624408: mov esi, dword ptr [esi] */ r_esi = R32((u32)(r_esi));
    /* 0062440a: mov ebx, edi */ r_ebx = r_edi;
    /* 0062440c: mov edx, edi */ r_edx = r_edi;
    /* 0062440e: mov eax, esi */ r_eax = r_esi;
    /* 00624410: mov ecx, esi */ r_ecx = r_esi;
    /* 00624412: and ebx, 0xff00 */ {  u32 a = r_ebx; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 00624418: and edx, 0xff0000 */ {  u32 a = r_edx; u32 b = 0xff0000u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0062441e: sar ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 00624421: sar edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00624424: and eax, 0xff00 */ {  u32 a = r_eax; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00624429: and ecx, 0xff0000 */ {  u32 a = r_ecx; u32 b = 0xff0000u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0062442f: sar eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00624432: sar ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00624435: sub eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00624437: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00624439: imul eax, dword ptr [ebp - 0x24] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xffffffdcu)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0062443d: imul ecx, dword ptr [ebp - 0x24] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0xffffffdcu)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00624441: sar eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00624444: sar ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00624447: mov ebx, esi */ r_ebx = r_esi;
    /* 00624449: mov edx, esi */ r_edx = r_esi;
    /* 0062444b: and ebx, 0xff00 */ {  u32 a = r_ebx; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 00624451: sar edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00624454: sar ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 00624457: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00624459: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0062445b: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00624461: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00624467: mov eax, esi */ r_eax = r_esi;
    /* 00624469: shl ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 0062446c: sub esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0062446e: shl edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00624471: imul esi, dword ptr [ebp - 0x24] */ { i64 t = (i64)(i32)r_esi * (i64)(i32)R32((u32)(r_ebp+0xffffffdcu)); r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00624475: or ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 00624477: sar esi, 8 */ { u32 c = (8u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 0062447a: mov edi, dword ptr [ebp - 0x10] */ r_edi = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062447d: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0062447f: or ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 00624481: mov dword ptr [edi], ebx */ W32((u32)(r_edi), r_ebx);
    /* 00624483: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00624486: add ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00624489: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0062448c: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0062448f: cmp edx, dword ptr [ebp - 0x20] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00624492: jle 0x6244a6 */ if ((fZ||fS!=fO)) goto L_006244a6;
L_00624494:; BB(0x00624494);
    /* 00624494: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00624497: sub eax, dword ptr [ebp - 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0062449a: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0062449d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006244a0: add ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006244a3: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_006244a6:; BB(0x006244a6);
    /* 006244a6: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006244a9: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 006244ac: lea ecx, [eax + edx*4] */ r_ecx = (u32)(r_eax+r_edx*4);
    /* 006244af: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 006244b2: jmp 0x6243e7 */ goto L_006243e7;
L_006244b7:; BB(0x006244b7);
    /* 006244b7: jmp 0x624740 */ goto L_00624740;
L_006244c1:; BB(0x006244c1);
    /* 006244c1: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006244c4: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006244c7: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_006244ca:; BB(0x006244ca);
    /* 006244ca: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006244cd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006244d0: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006244d3: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006244d6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006244d8: je 0x62459a */ if (fZ) goto L_0062459a;
L_006244de:; BB(0x006244de);
    /* 006244de: movzx edx, byte ptr [ebp + 0x1b] */ r_edx = (u32)R8((u32)(r_ebp+0x1bu));
    /* 006244e2: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 006244e5: mov esi, dword ptr [ebp - 0x10] */ r_esi = R32((u32)(r_ebp+0xfffffff0u));
    /* 006244e8: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 006244eb: mov esi, dword ptr [esi] */ r_esi = R32((u32)(r_esi));
    /* 006244ed: mov ebx, edi */ r_ebx = r_edi;
    /* 006244ef: mov edx, edi */ r_edx = r_edi;
    /* 006244f1: mov eax, esi */ r_eax = r_esi;
    /* 006244f3: mov ecx, esi */ r_ecx = r_esi;
    /* 006244f5: and ebx, 0xff00 */ {  u32 a = r_ebx; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 006244fb: and edx, 0xff0000 */ {  u32 a = r_edx; u32 b = 0xff0000u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00624501: sar ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 00624504: sar edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00624507: and eax, 0xff00 */ {  u32 a = r_eax; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0062450c: and ecx, 0xff0000 */ {  u32 a = r_ecx; u32 b = 0xff0000u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00624512: sar eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00624515: sar ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00624518: sub eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0062451a: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0062451c: imul eax, dword ptr [ebp - 0x28] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xffffffd8u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00624520: imul ecx, dword ptr [ebp - 0x28] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0xffffffd8u)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00624524: sar eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00624527: sar ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0062452a: mov ebx, esi */ r_ebx = r_esi;
    /* 0062452c: mov edx, esi */ r_edx = r_esi;
    /* 0062452e: and ebx, 0xff00 */ {  u32 a = r_ebx; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 00624534: sar edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00624537: sar ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 0062453a: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0062453c: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0062453e: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00624544: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0062454a: mov eax, esi */ r_eax = r_esi;
    /* 0062454c: shl ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 0062454f: sub esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00624551: shl edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00624554: imul esi, dword ptr [ebp - 0x28] */ { i64 t = (i64)(i32)r_esi * (i64)(i32)R32((u32)(r_ebp+0xffffffd8u)); r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00624558: or ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 0062455a: sar esi, 8 */ { u32 c = (8u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 0062455d: mov edi, dword ptr [ebp - 0x10] */ r_edi = R32((u32)(r_ebp+0xfffffff0u));
    /* 00624560: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00624562: or ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 00624564: mov dword ptr [edi], ebx */ W32((u32)(r_edi), r_ebx);
    /* 00624566: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00624569: add eax, dword ptr [ebp - 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062456c: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0062456f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00624572: cmp ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00624575: jle 0x62458c */ if ((fZ||fS!=fO)) goto L_0062458c;
L_00624577:; BB(0x00624577);
    /* 00624577: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0062457a: sub edx, dword ptr [ebp - 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0062457d: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 00624580: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00624583: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00624586: lea edx, [ecx + eax*4] */ r_edx = (u32)(r_ecx+r_eax*4);
    /* 00624589: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_0062458c:; BB(0x0062458c);
    /* 0062458c: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062458f: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00624592: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00624595: jmp 0x6244ca */ goto L_006244ca;
L_0062459a:; BB(0x0062459a);
    /* 0062459a: jmp 0x624740 */ goto L_00624740;
L_006245a4:; BB(0x006245a4);
    /* 006245a4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006245a7: cmp ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006245aa: jle 0x624612 */ if ((fZ||fS!=fO)) goto L_00624612;
L_006245ac:; BB(0x006245ac);
    /* 006245ac: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006245af: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006245b2: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_006245b5:; BB(0x006245b5);
    /* 006245b5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006245b8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006245bb: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006245be: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006245c1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006245c3: je 0x62460b */ if (fZ) goto L_0062460b;
L_006245c5:; BB(0x006245c5);
    /* 006245c5: movzx edx, byte ptr [ebp + 0x1b] */ r_edx = (u32)R8((u32)(r_ebp+0x1bu));
    /* 006245c9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006245ca: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006245cd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006245ce: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006245d1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006245d2: call 0x61d520 */ r_esp -= 4; W32(r_esp, 0x6245d7u); f_0061d520();
    /* 006245d7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006245da: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006245dd: add edx, dword ptr [ebp - 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006245e0: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 006245e3: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 006245e6: cmp eax, dword ptr [ebp - 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006245e9: jle 0x6245fd */ if ((fZ||fS!=fO)) goto L_006245fd;
L_006245eb:; BB(0x006245eb);
    /* 006245eb: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006245ee: sub ecx, dword ptr [ebp - 0x20] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006245f1: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 006245f4: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006245f7: add edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006245fa: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_006245fd:; BB(0x006245fd);
    /* 006245fd: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00624600: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00624603: lea edx, [ecx + eax*4] */ r_edx = (u32)(r_ecx+r_eax*4);
    /* 00624606: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00624609: jmp 0x6245b5 */ goto L_006245b5;
L_0062460b:; BB(0x0062460b);
    /* 0062460b: jmp 0x624740 */ goto L_00624740;
L_00624612:; BB(0x00624612);
    /* 00624612: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00624615: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00624618: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0062461b:; BB(0x0062461b);
    /* 0062461b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062461e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00624621: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00624624: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 00624627: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00624629: je 0x624671 */ if (fZ) goto L_00624671;
L_0062462b:; BB(0x0062462b);
    /* 0062462b: movzx eax, byte ptr [ebp + 0x1b] */ r_eax = (u32)R8((u32)(r_ebp+0x1bu));
    /* 0062462f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00624630: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00624633: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00624634: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00624637: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00624638: call 0x61d520 */ r_esp -= 4; W32(r_esp, 0x62463du); f_0061d520();
    /* 0062463d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00624640: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00624643: add eax, dword ptr [ebp - 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00624646: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00624649: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0062464c: cmp ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062464f: jle 0x624666 */ if ((fZ||fS!=fO)) goto L_00624666;
L_00624651:; BB(0x00624651);
    /* 00624651: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00624654: sub edx, dword ptr [ebp - 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00624657: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0062465a: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062465d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00624660: lea edx, [ecx + eax*4] */ r_edx = (u32)(r_ecx+r_eax*4);
    /* 00624663: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_00624666:; BB(0x00624666);
    /* 00624666: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00624669: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062466c: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0062466f: jmp 0x62461b */ goto L_0062461b;
L_00624671:; BB(0x00624671);
    /* 00624671: jmp 0x624740 */ goto L_00624740;
L_00624676:; BB(0x00624676);
    /* 00624676: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00624679: cmp ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062467c: jle 0x6246e1 */ if ((fZ||fS!=fO)) goto L_006246e1;
L_0062467e:; BB(0x0062467e);
    /* 0062467e: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00624681: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00624684: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_00624687:; BB(0x00624687);
    /* 00624687: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062468a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062468d: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00624690: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00624693: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00624695: je 0x6246dd */ if (fZ) goto L_006246dd;
L_00624697:; BB(0x00624697);
    /* 00624697: movzx edx, byte ptr [ebp + 0x1b] */ r_edx = (u32)R8((u32)(r_ebp+0x1bu));
    /* 0062469b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062469c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0062469f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006246a0: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006246a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006246a4: call 0x61d6a0 */ r_esp -= 4; W32(r_esp, 0x6246a9u); f_0061d6a0();
    /* 006246a9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006246ac: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006246af: add edx, dword ptr [ebp - 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006246b2: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 006246b5: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 006246b8: cmp eax, dword ptr [ebp - 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006246bb: jle 0x6246cf */ if ((fZ||fS!=fO)) goto L_006246cf;
L_006246bd:; BB(0x006246bd);
    /* 006246bd: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006246c0: sub ecx, dword ptr [ebp - 0x20] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006246c3: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 006246c6: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006246c9: add edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006246cc: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_006246cf:; BB(0x006246cf);
    /* 006246cf: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006246d2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006246d5: lea edx, [ecx + eax*4] */ r_edx = (u32)(r_ecx+r_eax*4);
    /* 006246d8: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 006246db: jmp 0x624687 */ goto L_00624687;
L_006246dd:; BB(0x006246dd);
    /* 006246dd: jmp 0x624740 */ goto L_00624740;
L_006246e1:; BB(0x006246e1);
    /* 006246e1: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 006246e4: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006246e7: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_006246ea:; BB(0x006246ea);
    /* 006246ea: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006246ed: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006246f0: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006246f3: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 006246f6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006246f8: je 0x624740 */ if (fZ) goto L_00624740;
L_006246fa:; BB(0x006246fa);
    /* 006246fa: movzx eax, byte ptr [ebp + 0x1b] */ r_eax = (u32)R8((u32)(r_ebp+0x1bu));
    /* 006246fe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006246ff: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00624702: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00624703: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00624706: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00624707: call 0x61d6a0 */ r_esp -= 4; W32(r_esp, 0x62470cu); f_0061d6a0();
    /* 0062470c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062470f: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00624712: add eax, dword ptr [ebp - 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00624715: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00624718: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0062471b: cmp ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062471e: jle 0x624735 */ if ((fZ||fS!=fO)) goto L_00624735;
L_00624720:; BB(0x00624720);
    /* 00624720: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00624723: sub edx, dword ptr [ebp - 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00624726: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 00624729: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062472c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062472f: lea edx, [ecx + eax*4] */ r_edx = (u32)(r_ecx+r_eax*4);
    /* 00624732: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_00624735:; BB(0x00624735);
    /* 00624735: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00624738: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062473b: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0062473e: jmp 0x6246ea */ goto L_006246ea;
L_00624740:; BB(0x00624740);
    /* 00624740: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00624741: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00624742: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00624743: mov esp, ebp */ r_esp = r_ebp;
    /* 00624745: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00624746: ret 0x18 */ FN_RET(0x006241c0); r_esp += 28; return;
}

void f_00624780(void) /* sub_624780 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00624780);
    /* 00624780: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00624781: mov ebp, esp */ r_ebp = r_esp;
    /* 00624783: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00624784: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00624787:; BB(0x00624787);
    /* 00624787: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0062478a: cmp eax, dword ptr [ebp + 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x14u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062478d: jg 0x6247b6 */ if ((!fZ&&fS==fO)) goto L_006247b6;
L_0062478f:; BB(0x0062478f);
    /* 0062478f: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 00624792: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00624793: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 00624796: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00624797: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0062479a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062479b: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0062479e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062479f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006247a2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006247a3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006247a6: call 0x623c60 */ r_esp -= 4; W32(r_esp, 0x6247abu); f_00623c60();
    /* 006247ab: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006247ae: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006247b1: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
    /* 006247b4: jmp 0x624787 */ goto L_00624787;
L_006247b6:; BB(0x006247b6);
    /* 006247b6: mov esp, ebp */ r_esp = r_ebp;
    /* 006247b8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006247b9: ret 0x18 */ FN_RET(0x00624780); r_esp += 28; return;
}

void f_006247c0(void) /* sub_6247C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006247c0);
    /* 006247c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006247c1: mov ebp, esp */ r_ebp = r_esp;
    /* 006247c3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006247c6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006247c9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006247cc: call 0x62e360 */ r_esp -= 4; W32(r_esp, 0x6247d1u); f_0062e360();
    /* 006247d1: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 006247d4: fild dword ptr [ebp - 8] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff8u)));
    /* 006247d7: fmul qword ptr [ebp + 0x14] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0x14u));
    /* 006247da: fsub qword ptr [0x6b2c48] */ ST(0) = ST(0) - R_F64((u32)(0x6b2c48u));
    /* 006247e0: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x6247e5u); f_00686cc0();
    /* 006247e5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006247e6: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006247e9: call 0x62e340 */ r_esp -= 4; W32(r_esp, 0x6247eeu); f_0062e340();
    /* 006247ee: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 006247f1: fild dword ptr [ebp - 0xc] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff4u)));
    /* 006247f4: fmul qword ptr [ebp + 0xc] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0xcu));
    /* 006247f7: fsub qword ptr [0x6b2c48] */ ST(0) = ST(0) - R_F64((u32)(0x6b2c48u));
    /* 006247fd: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x624802u); f_00686cc0();
    /* 00624802: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00624803: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00624805: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00624807: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062480a: call 0x623910 */ r_esp -= 4; W32(r_esp, 0x62480fu); f_00623910();
    /* 0062480f: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00624812: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00624813: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00624816: call 0x6238f0 */ r_esp -= 4; W32(r_esp, 0x62481bu); f_006238f0();
    /* 0062481b: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0062481e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062481f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00624821: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00624823: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00624826: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00624827: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062482a: call 0x624840 */ r_esp -= 4; W32(r_esp, 0x62482fu); f_00624840();
    /* 0062482f: mov esp, ebp */ r_esp = r_ebp;
    /* 00624831: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00624832: ret 0x14 */ FN_RET(0x006247c0); r_esp += 24; return;
}

void f_00624840(void) /* sub_624840 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00624840);
    /* 00624840: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00624841: mov ebp, esp */ r_ebp = r_esp;
    /* 00624843: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00624846: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00624849: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 0062484c: sub eax, dword ptr [ebp + 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x20u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0062484f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00624850: call 0x686eba */ r_esp -= 4; W32(r_esp, 0x624855u); f_00686eba();
    /* 00624855: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00624858: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0062485b: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 0062485e: sub ecx, dword ptr [ebp + 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00624861: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00624862: call 0x686eba */ r_esp -= 4; W32(r_esp, 0x624867u); f_00686eba();
    /* 00624867: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062486a: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0062486d: mov edx, dword ptr [ebp + 0x28] */ r_edx = R32((u32)(r_ebp+0x28u));
    /* 00624870: sub edx, dword ptr [ebp + 0x20] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x20u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00624873: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00624875: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00624877: setg al */ r_eax = (r_eax & 0xffffff00u) | ((((!fZ&&fS==fO)) ? 1 : 0) & 0xffu);
    /* 0062487a: lea eax, [eax + eax - 1] */ r_eax = (u32)(r_eax+r_eax+0xffffffffu);
    /* 0062487e: mov word ptr [ebp - 0x10], ax */ W16((u32)(r_ebp+0xfffffff0u), (u16)r_eax);
    /* 00624882: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 00624885: sub ecx, dword ptr [ebp + 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00624888: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0062488a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0062488c: setg dl */ r_edx = (r_edx & 0xffffff00u) | ((((!fZ&&fS==fO)) ? 1 : 0) & 0xffu);
    /* 0062488f: lea edx, [edx + edx - 1] */ r_edx = (u32)(r_edx+r_edx+0xffffffffu);
    /* 00624893: mov word ptr [ebp - 4], dx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_edx);
    /* 00624897: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062489a: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0062489c: sub eax, dword ptr [ebp - 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0062489f: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006248a2: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006248a5: shl ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 006248a7: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 006248aa: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006248ad: shl edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 006248af: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 006248b2: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 006248b9: jmp 0x6248c4 */ goto L_006248c4;
L_006248bb:; BB(0x006248bb);
    /* 006248bb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006248be: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006248c1: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_006248c4:; BB(0x006248c4);
    /* 006248c4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006248c7: cmp ecx, dword ptr [ebp - 0x1c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006248ca: jg 0x624920 */ if ((!fZ&&fS==fO)) goto L_00624920;
L_006248cc:; BB(0x006248cc);
    /* 006248cc: mov edx, dword ptr [ebp + 0x20] */ r_edx = R32((u32)(r_ebp+0x20u));
    /* 006248cf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006248d0: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 006248d3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006248d4: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 006248d7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006248d8: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 006248db: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006248dc: mov eax, dword ptr [ebp + 0x24] */ r_eax = R32((u32)(r_ebp+0x24u));
    /* 006248df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006248e0: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 006248e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006248e4: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006248e7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006248e8: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006248eb: call 0x624930 */ r_esp -= 4; W32(r_esp, 0x6248f0u); f_00624930();
L_006248f0:; BB(0x006248f0);
    /* 006248f0: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006248f4: jl 0x62490b */ if ((fS!=fO)) goto L_0062490b;
L_006248f6:; BB(0x006248f6);
    /* 006248f6: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 006248fa: add eax, dword ptr [ebp + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006248fd: mov dword ptr [ebp + 0x10], eax */ W32((u32)(r_ebp+0x10u), r_eax);
    /* 00624900: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00624903: sub ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00624906: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00624909: jmp 0x6248f0 */ goto L_006248f0;
L_0062490b:; BB(0x0062490b);
    /* 0062490b: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0062490f: add edx, dword ptr [ebp + 0x20] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x20u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00624912: mov dword ptr [ebp + 0x20], edx */ W32((u32)(r_ebp+0x20u), r_edx);
    /* 00624915: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00624918: add eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062491b: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0062491e: jmp 0x6248bb */ goto L_006248bb;
L_00624920:; BB(0x00624920);
    /* 00624920: mov esp, ebp */ r_esp = r_ebp;
    /* 00624922: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00624923: ret 0x24 */ FN_RET(0x00624840); r_esp += 40; return;
}

void f_00624930(void) /* sub_624930 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00624930);
    /* 00624930: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00624931: mov ebp, esp */ r_ebp = r_esp;
    /* 00624933: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00624936: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00624939: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0062493c: sub eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0062493f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00624940: call 0x686eba */ r_esp -= 4; W32(r_esp, 0x624945u); f_00686eba();
    /* 00624945: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00624948: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0062494b: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 0062494e: sub ecx, dword ptr [ebp + 0x14] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x14u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00624951: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00624952: call 0x686eba */ r_esp -= 4; W32(r_esp, 0x624957u); f_00686eba();
    /* 00624957: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062495a: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0062495d: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00624960: sub edx, dword ptr [ebp + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00624963: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00624965: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00624967: setg al */ r_eax = (r_eax & 0xffffff00u) | ((((!fZ&&fS==fO)) ? 1 : 0) & 0xffu);
    /* 0062496a: lea eax, [eax + eax - 1] */ r_eax = (u32)(r_eax+r_eax+0xffffffffu);
    /* 0062496e: mov word ptr [ebp - 0x14], ax */ W16((u32)(r_ebp+0xffffffecu), (u16)r_eax);
    /* 00624972: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 00624975: sub ecx, dword ptr [ebp + 0x14] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x14u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00624978: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0062497a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0062497c: setg dl */ r_edx = (r_edx & 0xffffff00u) | ((((!fZ&&fS==fO)) ? 1 : 0) & 0xffu);
    /* 0062497f: lea edx, [edx + edx - 1] */ r_edx = (u32)(r_edx+r_edx+0xffffffffu);
    /* 00624983: mov word ptr [ebp - 4], dx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_edx);
    /* 00624987: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062498a: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0062498c: sub eax, dword ptr [ebp - 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0062498f: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00624992: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00624995: shl ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00624997: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0062499a: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062499d: shl edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0062499f: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 006249a2: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 006249a9: jmp 0x6249b4 */ goto L_006249b4;
L_006249ab:; BB(0x006249ab);
    /* 006249ab: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006249ae: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006249b1: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_006249b4:; BB(0x006249b4);
    /* 006249b4: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006249b7: cmp ecx, dword ptr [ebp - 0x20] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006249ba: jg 0x624a34 */ if ((!fZ&&fS==fO)) goto L_00624a34;
L_006249bc:; BB(0x006249bc);
    /* 006249bc: mov edx, dword ptr [ebp + 0x1c] */ r_edx = R32((u32)(r_ebp+0x1cu));
    /* 006249bf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006249c0: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006249c3: call 0x6238d0 */ r_esp -= 4; W32(r_esp, 0x6249c8u); f_006238d0();
    /* 006249c8: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006249cb: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 006249ce: imul edx, dword ptr [ecx + 0x18] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_ecx+0x18u)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006249d2: mov eax, dword ptr [eax + edx] */ r_eax = R32((u32)(r_eax+r_edx));
    /* 006249d5: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 006249d8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006249db: mov edx, dword ptr [ebp + 0x20] */ r_edx = R32((u32)(r_ebp+0x20u));
    /* 006249de: imul edx, dword ptr [ecx + 0x414] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_ecx+0x414u)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006249e5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006249e8: add edx, dword ptr [eax + 0x408] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x408u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006249ee: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006249f1: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006249f4: imul eax, dword ptr [ecx + 0x418] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ecx+0x418u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006249fb: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006249fe: mov dword ptr [edx + eax], ecx */ W32((u32)(r_edx+r_eax), r_ecx);
L_00624a01:; BB(0x00624a01);
    /* 00624a01: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00624a05: jl 0x624a1c */ if ((fS!=fO)) goto L_00624a1c;
L_00624a07:; BB(0x00624a07);
    /* 00624a07: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00624a0b: add edx, dword ptr [ebp + 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x14u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00624a0e: mov dword ptr [ebp + 0x14], edx */ W32((u32)(r_ebp+0x14u), r_edx);
    /* 00624a11: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00624a14: sub eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00624a17: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00624a1a: jmp 0x624a01 */ goto L_00624a01;
L_00624a1c:; BB(0x00624a1c);
    /* 00624a1c: movsx ecx, word ptr [ebp - 0x14] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffecu));
    /* 00624a20: add ecx, dword ptr [ebp + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00624a23: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
    /* 00624a26: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00624a29: add edx, dword ptr [ebp - 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00624a2c: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 00624a2f: jmp 0x6249ab */ goto L_006249ab;
L_00624a34:; BB(0x00624a34);
    /* 00624a34: mov esp, ebp */ r_esp = r_ebp;
    /* 00624a36: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00624a37: ret 0x1c */ FN_RET(0x00624930); r_esp += 32; return;
}

void f_00624a70(void) /* sub_624A70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00624a70);
    /* 00624a70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00624a71: mov ebp, esp */ r_ebp = r_esp;
    /* 00624a73: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00624a76: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00624a79: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00624a7a: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 00624a7d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00624a7e: lea edx, [ebp - 0x10] */ r_edx = (u32)(r_ebp+0xfffffff0u);
    /* 00624a81: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00624a82: call 0x5ec3a0 */ r_esp -= 4; W32(r_esp, 0x624a87u); f_005ec3a0();
    /* 00624a87: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00624a8a: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00624a8d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00624a8f: jne 0x624ab8 */ if (!fZ) goto L_00624ab8;
L_00624a91:; BB(0x00624a91);
    /* 00624a91: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00624a93: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00624a95: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00624a98: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00624a99: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x624a9eu); f_00686fa2();
    /* 00624a9e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00624aa1: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00624aa3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00624aa5: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00624aa8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00624aa9: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x624aaeu); f_00686fa2();
    /* 00624aae: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00624ab1: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00624ab3: jmp 0x624c42 */ goto L_00624c42;
L_00624ab8:; BB(0x00624ab8);
    /* 00624ab8: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00624abb: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00624abe: sub ecx, dword ptr [eax] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00624ac0: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 00624ac3: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00624ac6: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00624ac9: sub eax, dword ptr [edx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00624acc: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00624acf: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00624ad2: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00624ad5: sub edx, dword ptr [ecx + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x8u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00624ad8: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 00624adb: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00624ade: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00624ae1: sub ecx, dword ptr [eax + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0xcu)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00624ae4: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 00624ae7: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00624aea: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00624aec: add eax, dword ptr [ebp - 0x40] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffc0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00624aef: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00624af2: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 00624af4: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00624af7: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00624afa: add eax, dword ptr [ebp - 0x3c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffc4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00624afd: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00624b00: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00624b03: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00624b06: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00624b09: add eax, dword ptr [ebp - 0x38] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffc8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00624b0c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00624b0f: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 00624b12: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00624b15: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 00624b18: add eax, dword ptr [ebp - 0x34] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffccu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00624b1b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00624b1e: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 00624b21: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00624b24: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00624b26: add eax, dword ptr [ebp - 0x40] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffc0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00624b29: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00624b2c: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 00624b2e: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00624b31: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00624b34: add eax, dword ptr [ebp - 0x3c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffc4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00624b37: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00624b3a: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00624b3d: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00624b40: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00624b43: add eax, dword ptr [ebp - 0x38] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffc8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00624b46: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00624b49: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 00624b4c: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00624b4f: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 00624b52: add eax, dword ptr [ebp - 0x34] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffccu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00624b55: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00624b58: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 00624b5b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00624b5e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00624b5f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00624b62: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00624b63: lea ecx, [ebp - 0x20] */ r_ecx = (u32)(r_ebp+0xffffffe0u);
    /* 00624b66: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00624b67: call 0x5ec3a0 */ r_esp -= 4; W32(r_esp, 0x624b6cu); f_005ec3a0();
    /* 00624b6c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00624b6f: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00624b72: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00624b74: jne 0x624b9d */ if (!fZ) goto L_00624b9d;
L_00624b76:; BB(0x00624b76);
    /* 00624b76: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00624b78: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00624b7a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00624b7d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00624b7e: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x624b83u); f_00686fa2();
    /* 00624b83: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00624b86: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00624b88: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00624b8a: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00624b8d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00624b8e: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x624b93u); f_00686fa2();
    /* 00624b93: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00624b96: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00624b98: jmp 0x624c42 */ goto L_00624c42;
L_00624b9d:; BB(0x00624b9d);
    /* 00624b9d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00624ba0: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00624ba3: sub eax, dword ptr [edx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00624ba5: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00624ba8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00624bab: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00624bae: sub edx, dword ptr [ecx + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00624bb1: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 00624bb4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00624bb7: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00624bba: sub ecx, dword ptr [eax + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x8u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00624bbd: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00624bc0: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00624bc3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00624bc6: sub eax, dword ptr [edx + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0xcu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00624bc9: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00624bcc: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00624bcf: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00624bd1: add edx, dword ptr [ebp - 0x30] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffd0u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00624bd4: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00624bd7: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 00624bd9: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00624bdc: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00624bdf: add edx, dword ptr [ebp - 0x2c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffd4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00624be2: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00624be5: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 00624be8: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00624beb: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 00624bee: add edx, dword ptr [ebp - 0x28] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffd8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00624bf1: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00624bf4: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 00624bf7: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00624bfa: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 00624bfd: add edx, dword ptr [ebp - 0x24] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00624c00: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00624c03: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
    /* 00624c06: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00624c09: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00624c0b: add edx, dword ptr [ebp - 0x30] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffd0u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00624c0e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00624c11: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 00624c13: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00624c16: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00624c19: add edx, dword ptr [ebp - 0x2c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffd4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00624c1c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00624c1f: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 00624c22: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00624c25: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 00624c28: add edx, dword ptr [ebp - 0x28] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffd8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00624c2b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00624c2e: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 00624c31: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00624c34: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 00624c37: add edx, dword ptr [ebp - 0x24] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00624c3a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00624c3d: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
    /* 00624c40: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_00624c42:; BB(0x00624c42);
    /* 00624c42: mov esp, ebp */ r_esp = r_ebp;
    /* 00624c44: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00624c45: ret  */ FN_RET(0x00624a70); r_esp += 4; return;
}

void f_00624c50(void) /* sub_624C50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00624c50);
    /* 00624c50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00624c51: mov ebp, esp */ r_ebp = r_esp;
    /* 00624c53: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00624c56: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00624c59: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00624c5a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00624c5d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00624c5e: lea edx, [ebp - 0x10] */ r_edx = (u32)(r_ebp+0xfffffff0u);
    /* 00624c61: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00624c62: call 0x5ec3a0 */ r_esp -= 4; W32(r_esp, 0x624c67u); f_005ec3a0();
    /* 00624c67: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00624c6a: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00624c6d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00624c6f: jne 0x624c78 */ if (!fZ) goto L_00624c78;
L_00624c71:; BB(0x00624c71);
    /* 00624c71: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00624c73: jmp 0x624e15 */ goto L_00624e15;
L_00624c78:; BB(0x00624c78);
    /* 00624c78: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00624c7b: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00624c7e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00624c81: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00624c84: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 00624c87: cmp ecx, dword ptr [eax + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00624c8a: jge 0x624cc3 */ if ((fS==fO)) goto L_00624cc3;
L_00624c8c:; BB(0x00624c8c);
    /* 00624c8c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00624c8f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00624c92: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00624c94: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 00624c96: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00624c99: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00624c9c: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00624c9f: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 00624ca2: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00624ca5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00624ca8: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00624cab: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 00624cae: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00624cb1: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00624cb4: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00624cb7: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 00624cba: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00624cbd: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00624cc0: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
L_00624cc3:; BB(0x00624cc3);
    /* 00624cc3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00624cc6: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00624cc9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00624ccb: cmp edx, dword ptr [ecx] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00624ccd: jge 0x624d43 */ if ((fS==fO)) goto L_00624d43;
L_00624ccf:; BB(0x00624ccf);
    /* 00624ccf: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00624cd2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00624cd5: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00624cd7: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 00624cd9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00624cdc: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00624cdf: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00624ce2: cmp edx, dword ptr [ecx + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00624ce5: jge 0x624cf2 */ if ((fS==fO)) goto L_00624cf2;
L_00624ce7:; BB(0x00624ce7);
    /* 00624ce7: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00624cea: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00624ced: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00624cf0: jmp 0x624cfb */ goto L_00624cfb;
L_00624cf2:; BB(0x00624cf2);
    /* 00624cf2: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00624cf5: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00624cf8: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_00624cfb:; BB(0x00624cfb);
    /* 00624cfb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00624cfe: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00624d01: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 00624d04: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00624d07: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00624d0a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00624d0c: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 00624d0f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00624d12: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00624d15: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 00624d18: cmp edx, dword ptr [ecx + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00624d1b: jge 0x624d28 */ if ((fS==fO)) goto L_00624d28;
L_00624d1d:; BB(0x00624d1d);
    /* 00624d1d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00624d20: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 00624d23: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00624d26: jmp 0x624d31 */ goto L_00624d31;
L_00624d28:; BB(0x00624d28);
    /* 00624d28: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00624d2b: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 00624d2e: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
L_00624d31:; BB(0x00624d31);
    /* 00624d31: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00624d34: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00624d37: mov dword ptr [ecx + 0xc], edx */ W32((u32)(r_ecx+0xcu), r_edx);
    /* 00624d3a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00624d3d: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00624d40: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_00624d43:; BB(0x00624d43);
    /* 00624d43: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00624d46: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00624d49: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 00624d4c: cmp eax, dword ptr [edx + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00624d4f: jle 0x624dc7 */ if ((fZ||fS!=fO)) goto L_00624dc7;
L_00624d51:; BB(0x00624d51);
    /* 00624d51: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00624d54: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00624d57: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00624d5a: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 00624d5c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00624d5f: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00624d62: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 00624d65: cmp eax, dword ptr [edx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00624d68: jge 0x624d75 */ if ((fS==fO)) goto L_00624d75;
L_00624d6a:; BB(0x00624d6a);
    /* 00624d6a: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00624d6d: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00624d70: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 00624d73: jmp 0x624d7e */ goto L_00624d7e;
L_00624d75:; BB(0x00624d75);
    /* 00624d75: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00624d78: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00624d7b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
L_00624d7e:; BB(0x00624d7e);
    /* 00624d7e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00624d81: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00624d84: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00624d87: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00624d8a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00624d8d: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00624d90: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 00624d93: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00624d96: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00624d99: mov eax, dword ptr [ecx + 0xc] */ r_eax = R32((u32)(r_ecx+0xcu));
    /* 00624d9c: cmp eax, dword ptr [edx + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00624d9f: jge 0x624dac */ if ((fS==fO)) goto L_00624dac;
L_00624da1:; BB(0x00624da1);
    /* 00624da1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00624da4: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 00624da7: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 00624daa: jmp 0x624db5 */ goto L_00624db5;
L_00624dac:; BB(0x00624dac);
    /* 00624dac: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00624daf: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 00624db2: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
L_00624db5:; BB(0x00624db5);
    /* 00624db5: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00624db8: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00624dbb: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 00624dbe: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00624dc1: add ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00624dc4: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
L_00624dc7:; BB(0x00624dc7);
    /* 00624dc7: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00624dca: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00624dcd: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 00624dd0: cmp ecx, dword ptr [eax + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00624dd3: jle 0x624e0c */ if ((fZ||fS!=fO)) goto L_00624e0c;
L_00624dd5:; BB(0x00624dd5);
    /* 00624dd5: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00624dd8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00624ddb: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00624ddd: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 00624ddf: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00624de2: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00624de5: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 00624de8: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 00624deb: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00624dee: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00624df1: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00624df4: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 00624df7: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00624dfa: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00624dfd: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 00624e00: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 00624e03: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00624e06: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00624e09: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
L_00624e0c:; BB(0x00624e0c);
    /* 00624e0c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00624e0f: sub eax, dword ptr [ebp + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00624e12: sar eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
L_00624e15:; BB(0x00624e15);
    /* 00624e15: mov esp, ebp */ r_esp = r_ebp;
    /* 00624e17: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00624e18: ret  */ FN_RET(0x00624c50); r_esp += 4; return;
}

