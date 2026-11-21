#include "protos.h"

void f_00622340(void) /* sub_622340 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00622340);
    /* 00622340: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00622341: mov ebp, esp */ r_ebp = r_esp;
    /* 00622343: sub esp, 0x100 */ {  u32 a = r_esp; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00622349: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
    /* 00622350: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 00622357: mov dword ptr [ebp - 0x8c], 2 */ W32((u32)(r_ebp+0xffffff74u), 0x2u);
    /* 00622361: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 00622368: mov dword ptr [ebp - 0x90], 1 */ W32((u32)(r_ebp+0xffffff70u), 0x1u);
    /* 00622372: mov dword ptr [ebp - 0x74], 4 */ W32((u32)(r_ebp+0xffffff8cu), 0x4u);
    /* 00622379: mov dword ptr [ebp - 0x84], 1 */ W32((u32)(r_ebp+0xffffff7cu), 0x1u);
    /* 00622383: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0062238a: call 0x622d10 */ r_esp -= 4; W32(r_esp, 0x62238fu); f_00622d10();
    /* 0062238f: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 00622392: mov dword ptr [ebp - 0x14], 0x75f748 */ W32((u32)(r_ebp+0xffffffecu), 0x75f748u);
    /* 00622399: mov eax, dword ptr [ebp + 0x20] */ r_eax = R32((u32)(r_ebp+0x20u));
    /* 0062239c: imul eax, dword ptr [ebp - 0x74] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xffffff8cu)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006223a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006223a1: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x6223a6u); f_00686d82();
    /* 006223a6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006223a9: mov dword ptr [ebp - 0xc0], eax */ W32((u32)(r_ebp+0xffffff40u), r_eax);
    /* 006223af: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 006223b5: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 006223b8: mov edx, dword ptr [ebp + 0x20] */ r_edx = R32((u32)(r_ebp+0x20u));
    /* 006223bb: imul edx, dword ptr [ebp - 0x84] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_ebp+0xffffff7cu)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006223c2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006223c3: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x6223c8u); f_00686d82();
    /* 006223c8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006223cb: mov dword ptr [ebp - 0xc4], eax */ W32((u32)(r_ebp+0xffffff3cu), r_eax);
    /* 006223d1: mov eax, dword ptr [ebp - 0xc4] */ r_eax = R32((u32)(r_ebp+0xffffff3cu));
    /* 006223d7: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 006223da: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 006223dd: lea edx, [ecx*4 + 8] */ r_edx = (u32)(r_ecx*4+0x8u);
    /* 006223e4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006223e5: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x6223eau); f_00686d82();
    /* 006223ea: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006223ed: mov dword ptr [ebp - 0xc8], eax */ W32((u32)(r_ebp+0xffffff38u), r_eax);
    /* 006223f3: mov eax, dword ptr [ebp - 0xc8] */ r_eax = R32((u32)(r_ebp+0xffffff38u));
    /* 006223f9: mov dword ptr [ebp - 0xac], eax */ W32((u32)(r_ebp+0xffffff54u), r_eax);
    /* 006223ff: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 00622402: lea edx, [ecx*4 + 8] */ r_edx = (u32)(r_ecx*4+0x8u);
    /* 00622409: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062240a: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x62240fu); f_00686d82();
    /* 0062240f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00622412: mov dword ptr [ebp - 0xcc], eax */ W32((u32)(r_ebp+0xffffff34u), r_eax);
    /* 00622418: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 0062241e: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 00622424: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 00622427: lea edx, [ecx*4 + 8] */ r_edx = (u32)(r_ecx*4+0x8u);
    /* 0062242e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062242f: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x622434u); f_00686d82();
    /* 00622434: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00622437: mov dword ptr [ebp - 0xd0], eax */ W32((u32)(r_ebp+0xffffff30u), r_eax);
    /* 0062243d: mov eax, dword ptr [ebp - 0xd0] */ r_eax = R32((u32)(r_ebp+0xffffff30u));
    /* 00622443: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00622446: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 00622449: lea edx, [ecx*4 + 8] */ r_edx = (u32)(r_ecx*4+0x8u);
    /* 00622450: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00622451: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x622456u); f_00686d82();
    /* 00622456: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00622459: mov dword ptr [ebp - 0xd4], eax */ W32((u32)(r_ebp+0xffffff2cu), r_eax);
    /* 0062245f: mov eax, dword ptr [ebp - 0xd4] */ r_eax = R32((u32)(r_ebp+0xffffff2cu));
    /* 00622465: mov dword ptr [ebp - 0xbc], eax */ W32((u32)(r_ebp+0xffffff44u), r_eax);
    /* 0062246b: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 0062246e: lea edx, [ecx*4 + 8] */ r_edx = (u32)(r_ecx*4+0x8u);
    /* 00622475: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00622476: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x62247bu); f_00686d82();
    /* 0062247b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062247e: mov dword ptr [ebp - 0xd8], eax */ W32((u32)(r_ebp+0xffffff28u), r_eax);
    /* 00622484: mov eax, dword ptr [ebp - 0xd8] */ r_eax = R32((u32)(r_ebp+0xffffff28u));
    /* 0062248a: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 0062248d: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 00622490: lea edx, [ecx*4 + 8] */ r_edx = (u32)(r_ecx*4+0x8u);
    /* 00622497: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00622498: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x62249du); f_00686d82();
    /* 0062249d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006224a0: mov dword ptr [ebp - 0xdc], eax */ W32((u32)(r_ebp+0xffffff24u), r_eax);
    /* 006224a6: mov eax, dword ptr [ebp - 0xdc] */ r_eax = R32((u32)(r_ebp+0xffffff24u));
    /* 006224ac: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 006224af: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 006224b2: lea edx, [ecx*4 + 8] */ r_edx = (u32)(r_ecx*4+0x8u);
    /* 006224b9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006224ba: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006224bc: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 006224c2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006224c3: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x6224c8u); f_00686fa2();
    /* 006224c8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006224cb: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 006224ce: lea edx, [ecx*4 + 8] */ r_edx = (u32)(r_ecx*4+0x8u);
    /* 006224d5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006224d6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006224d8: mov eax, dword ptr [ebp - 0xbc] */ r_eax = R32((u32)(r_ebp+0xffffff44u));
    /* 006224de: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006224df: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x6224e4u); f_00686fa2();
    /* 006224e4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006224e7: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 006224ea: lea edx, [ecx*4 + 8] */ r_edx = (u32)(r_ecx*4+0x8u);
    /* 006224f1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006224f2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006224f4: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 006224f7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006224f8: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x6224fdu); f_00686fa2();
    /* 006224fd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00622500: mov dword ptr [ebp - 0x2c], 0x76014e */ W32((u32)(r_ebp+0xffffffd4u), 0x76014eu);
    /* 00622507: mov dword ptr [ebp - 0x9c], 0x760956 */ W32((u32)(r_ebp+0xffffff64u), 0x760956u);
    /* 00622511: mov dword ptr [ebp - 0x98], 0x76115e */ W32((u32)(r_ebp+0xffffff68u), 0x76115eu);
    /* 0062251b: mov dword ptr [ebp - 0x18], 0x761966 */ W32((u32)(r_ebp+0xffffffe8u), 0x761966u);
    /* 00622522: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 00622529: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
    /* 00622530: jmp 0x62253b */ goto L_0062253b;
L_00622532:; BB(0x00622532);
    /* 00622532: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00622535: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00622538: mov dword ptr [ebp - 0x60], ecx */ W32((u32)(r_ebp+0xffffffa0u), r_ecx);
L_0062253b:; BB(0x0062253b);
    /* 0062253b: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0062253e: cmp edx, dword ptr [ebp + 0x24] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x24u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00622541: jge 0x622c11 */ if ((fS==fO)) goto L_00622c11;
L_00622547:; BB(0x00622547);
    /* 00622547: mov eax, dword ptr [ebp + 0x20] */ r_eax = R32((u32)(r_ebp+0x20u));
    /* 0062254a: imul eax, dword ptr [ebp - 0x74] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xffffff8cu)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0062254e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062254f: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00622552: imul ecx, dword ptr [ebp + 0x20] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0x20u)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00622556: imul ecx, dword ptr [ebp - 0x74] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0xffffff8cu)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0062255a: add ecx, dword ptr [ebp + 0x14] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x14u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062255d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062255e: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00622561: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00622562: call 0x686fde */ r_esp -= 4; W32(r_esp, 0x622567u); f_00686fde();
    /* 00622567: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062256a: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062256d: mov dword ptr [ebp - 0xb0], eax */ W32((u32)(r_ebp+0xffffff50u), r_eax);
    /* 00622573: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 00622576: mov dword ptr [ebp - 0x54], ecx */ W32((u32)(r_ebp+0xffffffacu), r_ecx);
    /* 00622579: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0062257c: imul edx, dword ptr [ebp + 0x20] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_ebp+0x20u)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00622580: add edx, dword ptr [ebp + 0x1c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x1cu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00622583: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 00622586: mov eax, dword ptr [ebp - 0xac] */ r_eax = R32((u32)(r_ebp+0xffffff54u));
    /* 0062258c: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0062258f: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00622592: mov dword ptr [ebp - 0xa8], ecx */ W32((u32)(r_ebp+0xffffff58u), r_ecx);
    /* 00622598: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0062259b: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 0062259e: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 006225a4: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006225a7: mov dword ptr [ebp - 0xb8], eax */ W32((u32)(r_ebp+0xffffff48u), r_eax);
    /* 006225ad: mov ecx, dword ptr [ebp - 0xbc] */ r_ecx = R32((u32)(r_ebp+0xffffff44u));
    /* 006225b3: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006225b6: mov dword ptr [ebp - 0x68], ecx */ W32((u32)(r_ebp+0xffffff98u), r_ecx);
    /* 006225b9: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 006225bc: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006225bf: mov dword ptr [ebp - 0xb4], edx */ W32((u32)(r_ebp+0xffffff4cu), r_edx);
    /* 006225c5: cmp dword ptr [ebp - 0x44], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffbcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006225c9: je 0x6226a6 */ if (fZ) goto L_006226a6;
L_006225cf:; BB(0x006225cf);
    /* 006225cf: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 006225d5: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006225d7: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 006225da: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006225dd: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006225df: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006225e2: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 006225e5: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006225e7: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 006225ea: mov eax, dword ptr [ebp + 0x20] */ r_eax = R32((u32)(r_ebp+0x20u));
    /* 006225ed: imul eax, dword ptr [ebp - 0x74] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xffffff8cu)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006225f1: sub eax, dword ptr [ebp - 0x74] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffff8cu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006225f4: add eax, dword ptr [ebp - 0xb0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffff50u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006225fa: mov dword ptr [ebp - 0xb0], eax */ W32((u32)(r_ebp+0xffffff50u), r_eax);
    /* 00622600: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 00622603: imul ecx, dword ptr [ebp - 0x84] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0xffffff7cu)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0062260a: sub ecx, dword ptr [ebp - 0x84] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffff7cu)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00622610: add ecx, dword ptr [ebp - 0x54] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffacu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00622613: mov dword ptr [ebp - 0x54], ecx */ W32((u32)(r_ebp+0xffffffacu), r_ecx);
    /* 00622616: mov edx, dword ptr [ebp + 0x20] */ r_edx = R32((u32)(r_ebp+0x20u));
    /* 00622619: imul edx, dword ptr [ebp - 0x28] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_ebp+0xffffffd8u)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0062261d: sub edx, dword ptr [ebp - 0x28] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffd8u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00622620: add edx, dword ptr [ebp - 0x1c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00622623: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 00622626: mov eax, dword ptr [ebp + 0x20] */ r_eax = R32((u32)(r_ebp+0x20u));
    /* 00622629: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0062262c: lea edx, [ecx + eax*4 + 4] */ r_edx = (u32)(r_ecx+r_eax*4+0x4u);
    /* 00622630: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 00622633: mov eax, dword ptr [ebp + 0x20] */ r_eax = R32((u32)(r_ebp+0x20u));
    /* 00622636: mov ecx, dword ptr [ebp - 0xa8] */ r_ecx = R32((u32)(r_ebp+0xffffff58u));
    /* 0062263c: lea edx, [ecx + eax*4 + 4] */ r_edx = (u32)(r_ecx+r_eax*4+0x4u);
    /* 00622640: mov dword ptr [ebp - 0xa8], edx */ W32((u32)(r_ebp+0xffffff58u), r_edx);
    /* 00622646: mov eax, dword ptr [ebp + 0x20] */ r_eax = R32((u32)(r_ebp+0x20u));
    /* 00622649: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0062264c: lea edx, [ecx + eax*4 + 4] */ r_edx = (u32)(r_ecx+r_eax*4+0x4u);
    /* 00622650: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 00622653: mov eax, dword ptr [ebp + 0x20] */ r_eax = R32((u32)(r_ebp+0x20u));
    /* 00622656: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 0062265c: lea edx, [ecx + eax*4] */ r_edx = (u32)(r_ecx+r_eax*4);
    /* 0062265f: mov dword ptr [ebp - 0xb8], edx */ W32((u32)(r_ebp+0xffffff48u), r_edx);
    /* 00622665: mov eax, dword ptr [ebp + 0x20] */ r_eax = R32((u32)(r_ebp+0x20u));
    /* 00622668: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0062266b: lea edx, [ecx + eax*4] */ r_edx = (u32)(r_ecx+r_eax*4);
    /* 0062266e: mov dword ptr [ebp - 0x68], edx */ W32((u32)(r_ebp+0xffffff98u), r_edx);
    /* 00622671: mov eax, dword ptr [ebp + 0x20] */ r_eax = R32((u32)(r_ebp+0x20u));
    /* 00622674: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0062267a: lea edx, [ecx + eax*4] */ r_edx = (u32)(r_ecx+r_eax*4);
    /* 0062267d: mov dword ptr [ebp - 0xb4], edx */ W32((u32)(r_ebp+0xffffff4cu), r_edx);
    /* 00622683: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00622686: mov dword ptr [eax - 4], 0 */ W32((u32)(r_eax+0xfffffffcu), 0x0u);
    /* 0062268d: mov ecx, dword ptr [ebp - 0xa8] */ r_ecx = R32((u32)(r_ebp+0xffffff58u));
    /* 00622693: mov dword ptr [ecx - 4], 0 */ W32((u32)(r_ecx+0xfffffffcu), 0x0u);
    /* 0062269a: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0062269d: mov dword ptr [edx - 4], 0 */ W32((u32)(r_edx+0xfffffffcu), 0x0u);
    /* 006226a4: jmp 0x6226dc */ goto L_006226dc;
L_006226a6:; BB(0x006226a6);
    /* 006226a6: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 006226ac: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 006226af: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006226b2: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006226b5: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 006226b8: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 006226bb: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 006226be: mov dword ptr [eax + 4], 0 */ W32((u32)(r_eax+0x4u), 0x0u);
    /* 006226c5: mov ecx, dword ptr [ebp - 0xa8] */ r_ecx = R32((u32)(r_ebp+0xffffff58u));
    /* 006226cb: mov dword ptr [ecx + 4], 0 */ W32((u32)(r_ecx+0x4u), 0x0u);
    /* 006226d2: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006226d5: mov dword ptr [edx + 4], 0 */ W32((u32)(r_edx+0x4u), 0x0u);
L_006226dc:; BB(0x006226dc);
    /* 006226dc: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 006226df: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 006226e5: mov ecx, dword ptr [ebp - 0xa8] */ r_ecx = R32((u32)(r_ebp+0xffffff58u));
    /* 006226eb: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
    /* 006226f1: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006226f4: mov dword ptr [edx], 0 */ W32((u32)(r_edx), 0x0u);
    /* 006226fa: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 00622701: jmp 0x62270c */ goto L_0062270c;
L_00622703:; BB(0x00622703);
    /* 00622703: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00622706: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00622709: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_0062270c:; BB(0x0062270c);
    /* 0062270c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062270f: cmp ecx, dword ptr [ebp + 0x20] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x20u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00622712: jge 0x622b96 */ if ((fS==fO)) goto L_00622b96;
L_00622718:; BB(0x00622718);
    /* 00622718: mov edx, dword ptr [ebp - 0xb0] */ r_edx = R32((u32)(r_ebp+0xffffff50u));
    /* 0062271e: add edx, dword ptr [ebp - 0x5c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffa4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00622721: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 00622724: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 0062272a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0062272c: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0062272f: add eax, dword ptr [ecx + edx*4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+r_edx*4)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00622732: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00622735: movsx eax, word ptr [edx + eax*2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+r_eax*2));
    /* 00622739: mov dword ptr [ebp - 0xa4], eax */ W32((u32)(r_ebp+0xffffff5cu), r_eax);
    /* 0062273f: mov ecx, dword ptr [ebp - 0xb0] */ r_ecx = R32((u32)(r_ebp+0xffffff50u));
    /* 00622745: add ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00622748: movzx edx, byte ptr [ecx] */ r_edx = (u32)R8((u32)(r_ecx));
    /* 0062274b: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0062274e: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00622750: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 00622753: add edx, dword ptr [eax + ecx*4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+r_ecx*4)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00622756: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00622759: movsx edx, word ptr [ecx + edx*2] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+r_edx*2));
    /* 0062275d: mov dword ptr [ebp - 0x80], edx */ W32((u32)(r_ebp+0xffffff80u), r_edx);
    /* 00622760: mov eax, dword ptr [ebp - 0xb0] */ r_eax = R32((u32)(r_ebp+0xffffff50u));
    /* 00622766: add eax, dword ptr [ebp - 0x8c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffff74u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062276c: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 0062276f: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00622775: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00622777: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0062277a: add ecx, dword ptr [edx + eax*4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+r_eax*4)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062277d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00622780: movsx ecx, word ptr [eax + ecx*2] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+r_ecx*2));
    /* 00622784: mov dword ptr [ebp - 0x7c], ecx */ W32((u32)(r_ebp+0xffffff84u), r_ecx);
    /* 00622787: mov edx, dword ptr [ebp - 0xa4] */ r_edx = R32((u32)(r_ebp+0xffffff5cu));
    /* 0062278d: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00622790: mov dword ptr [ebp - 0xa0], edx */ W32((u32)(r_ebp+0xffffff60u), r_edx);
    /* 00622796: mov eax, dword ptr [ebp - 0x80] */ r_eax = R32((u32)(r_ebp+0xffffff80u));
    /* 00622799: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0062279c: mov dword ptr [ebp - 0x94], eax */ W32((u32)(r_ebp+0xffffff6cu), r_eax);
    /* 006227a2: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 006227a5: sar ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 006227a8: mov dword ptr [ebp - 0x4c], ecx */ W32((u32)(r_ebp+0xffffffb4u), r_ecx);
    /* 006227ab: mov edx, dword ptr [ebp - 0xa0] */ r_edx = R32((u32)(r_ebp+0xffffff60u));
    /* 006227b1: shl edx, 6 */ { u32 c = (6u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 006227b4: shl edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 006227b7: mov eax, dword ptr [ebp - 0x94] */ r_eax = R32((u32)(r_ebp+0xffffff6cu));
    /* 006227bd: shl eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 006227c0: add edx, dword ptr [ebp - 0x4c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffb4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006227c3: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006227c5: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 006227c8: lea edx, [ecx + eax*4] */ r_edx = (u32)(r_ecx+r_eax*4);
    /* 006227cb: mov dword ptr [ebp - 0x78], edx */ W32((u32)(r_ebp+0xffffff88u), r_edx);
    /* 006227ce: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 006227d1: cmp dword ptr [eax], 0 */ {  u32 a = R32((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006227d4: jne 0x6227fc */ if (!fZ) goto L_006227fc;
L_006227d6:; BB(0x006227d6);
    /* 006227d6: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 006227d9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006227da: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006227dd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006227de: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 006227e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006227e2: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 006227e8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006227e9: mov edx, dword ptr [ebp - 0xa0] */ r_edx = R32((u32)(r_ebp+0xffffff60u));
    /* 006227ef: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006227f0: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 006227f3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006227f4: call 0x622e00 */ r_esp -= 4; W32(r_esp, 0x6227f9u); f_00622e00();
    /* 006227f9: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006227fc:; BB(0x006227fc);
    /* 006227fc: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 006227ff: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00622801: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00622804: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 00622807: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 0062280a: mov cl, byte ptr [ebp - 0x48] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffb8u))) & 0xffu);
    /* 0062280d: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
    /* 0062280f: cmp dword ptr [ebp - 0x90], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff70u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00622816: je 0x62283e */ if (fZ) goto L_0062283e;
L_00622818:; BB(0x00622818);
    /* 00622818: mov edx, dword ptr [ebp - 0xb0] */ r_edx = R32((u32)(r_ebp+0xffffff50u));
    /* 0062281e: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00622821: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 00622824: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00622826: jne 0x62282e */ if (!fZ) goto L_0062282e;
L_00622828:; BB(0x00622828);
    /* 00622828: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0062282b: mov byte ptr [ecx], 0 */ W8((u32)(r_ecx), 0x0u);
L_0062282e:; BB(0x0062282e);
    /* 0062282e: mov edx, dword ptr [ebp - 0xb0] */ r_edx = R32((u32)(r_ebp+0xffffff50u));
    /* 00622834: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00622837: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0062283a: mov cl, byte ptr [edx] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 0062283c: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
L_0062283e:; BB(0x0062283e);
    /* 0062283e: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00622841: imul edx, edx, 3 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x3u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00622844: add edx, dword ptr [ebp + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00622847: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 0062284a: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0062284d: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 00622850: mov edx, dword ptr [ebp - 0xa4] */ r_edx = R32((u32)(r_ebp+0xffffff5cu));
    /* 00622856: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00622858: mov dword ptr [ebp - 0xa0], edx */ W32((u32)(r_ebp+0xffffff60u), r_edx);
    /* 0062285e: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00622861: movzx ecx, byte ptr [eax + 1] */ r_ecx = (u32)R8((u32)(r_eax+0x1u));
    /* 00622865: mov edx, dword ptr [ebp - 0x80] */ r_edx = R32((u32)(r_ebp+0xffffff80u));
    /* 00622868: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0062286a: mov dword ptr [ebp - 0x94], edx */ W32((u32)(r_ebp+0xffffff6cu), r_edx);
    /* 00622870: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00622873: movzx ecx, byte ptr [eax + 2] */ r_ecx = (u32)R8((u32)(r_eax+0x2u));
    /* 00622877: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 0062287a: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0062287c: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 0062287f: cmp dword ptr [ebp - 0x44], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffbcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00622883: je 0x6229ff */ if (fZ) goto L_006229ff;
L_00622889:; BB(0x00622889);
    /* 00622889: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 0062288f: sub eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00622892: mov dword ptr [ebp - 0xb8], eax */ W32((u32)(r_ebp+0xffffff48u), r_eax);
    /* 00622898: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 0062289e: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 006228a1: movsx eax, word ptr [edx + ecx*2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+r_ecx*2));
    /* 006228a5: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 006228ab: add eax, dword ptr [ecx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006228ad: mov edx, dword ptr [ebp - 0xb8] */ r_edx = R32((u32)(r_ebp+0xffffff48u));
    /* 006228b3: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 006228b5: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 006228b8: sub eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006228bb: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 006228be: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 006228c4: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 006228c7: movsx eax, word ptr [edx + ecx*2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+r_ecx*2));
    /* 006228cb: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 006228ce: add eax, dword ptr [ecx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006228d0: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 006228d3: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 006228d5: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 006228db: sub eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006228de: mov dword ptr [ebp - 0xb4], eax */ W32((u32)(r_ebp+0xffffff4cu), r_eax);
    /* 006228e4: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 006228e7: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 006228ea: movsx eax, word ptr [edx + ecx*2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+r_ecx*2));
    /* 006228ee: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 006228f4: add eax, dword ptr [ecx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006228f6: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 006228fc: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 006228fe: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 00622904: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 0062290a: movsx edx, word ptr [ecx + eax*2] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+r_eax*2));
    /* 0062290e: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00622911: add edx, dword ptr [eax] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00622913: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00622916: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 00622918: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0062291b: sub edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0062291e: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 00622921: mov eax, dword ptr [ebp - 0x94] */ r_eax = R32((u32)(r_ebp+0xffffff6cu));
    /* 00622927: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 0062292d: movsx edx, word ptr [ecx + eax*2] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+r_eax*2));
    /* 00622931: mov eax, dword ptr [ebp - 0xa8] */ r_eax = R32((u32)(r_ebp+0xffffff58u));
    /* 00622937: add edx, dword ptr [eax] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00622939: mov ecx, dword ptr [ebp - 0xa8] */ r_ecx = R32((u32)(r_ebp+0xffffff58u));
    /* 0062293f: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 00622941: mov edx, dword ptr [ebp - 0xa8] */ r_edx = R32((u32)(r_ebp+0xffffff58u));
    /* 00622947: sub edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0062294a: mov dword ptr [ebp - 0xa8], edx */ W32((u32)(r_ebp+0xffffff58u), r_edx);
    /* 00622950: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00622953: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00622959: movsx edx, word ptr [ecx + eax*2] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+r_eax*2));
    /* 0062295d: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00622960: add edx, dword ptr [eax] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00622962: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00622965: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 00622967: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0062296a: sub edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0062296d: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 00622970: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 00622976: mov ecx, dword ptr [ebp - 0x98] */ r_ecx = R32((u32)(r_ebp+0xffffff68u));
    /* 0062297c: movsx edx, word ptr [ecx + eax*2] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+r_eax*2));
    /* 00622980: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00622983: add edx, dword ptr [eax] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00622985: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00622988: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 0062298a: mov edx, dword ptr [ebp - 0x94] */ r_edx = R32((u32)(r_ebp+0xffffff6cu));
    /* 00622990: mov eax, dword ptr [ebp - 0x98] */ r_eax = R32((u32)(r_ebp+0xffffff68u));
    /* 00622996: movsx ecx, word ptr [eax + edx*2] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+r_edx*2));
    /* 0062299a: mov edx, dword ptr [ebp - 0xa8] */ r_edx = R32((u32)(r_ebp+0xffffff58u));
    /* 006229a0: add ecx, dword ptr [edx] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006229a2: mov eax, dword ptr [ebp - 0xa8] */ r_eax = R32((u32)(r_ebp+0xffffff58u));
    /* 006229a8: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 006229aa: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 006229ad: mov edx, dword ptr [ebp - 0x98] */ r_edx = R32((u32)(r_ebp+0xffffff68u));
    /* 006229b3: movsx eax, word ptr [edx + ecx*2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+r_ecx*2));
    /* 006229b7: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 006229ba: add eax, dword ptr [ecx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006229bc: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 006229bf: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 006229c1: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 006229c7: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006229ca: movsx edx, word ptr [ecx + eax*2] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+r_eax*2));
    /* 006229ce: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006229d1: mov dword ptr [eax - 4], edx */ W32((u32)(r_eax+0xfffffffcu), r_edx);
    /* 006229d4: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 006229da: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006229dd: movsx eax, word ptr [edx + ecx*2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+r_ecx*2));
    /* 006229e1: mov ecx, dword ptr [ebp - 0xa8] */ r_ecx = R32((u32)(r_ebp+0xffffff58u));
    /* 006229e7: mov dword ptr [ecx - 4], eax */ W32((u32)(r_ecx+0xfffffffcu), r_eax);
    /* 006229ea: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 006229ed: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006229f0: movsx ecx, word ptr [eax + edx*2] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+r_edx*2));
    /* 006229f4: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 006229f7: mov dword ptr [edx - 4], ecx */ W32((u32)(r_edx+0xfffffffcu), r_ecx);
    /* 006229fa: jmp 0x622b70 */ goto L_00622b70;
L_006229ff:; BB(0x006229ff);
    /* 006229ff: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 00622a05: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00622a08: mov dword ptr [ebp - 0xb8], eax */ W32((u32)(r_ebp+0xffffff48u), r_eax);
    /* 00622a0e: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 00622a14: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00622a17: movsx eax, word ptr [edx + ecx*2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+r_ecx*2));
    /* 00622a1b: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 00622a21: add eax, dword ptr [ecx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00622a23: mov edx, dword ptr [ebp - 0xb8] */ r_edx = R32((u32)(r_ebp+0xffffff48u));
    /* 00622a29: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00622a2b: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 00622a2e: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00622a31: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 00622a34: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 00622a3a: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00622a3d: movsx eax, word ptr [edx + ecx*2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+r_ecx*2));
    /* 00622a41: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 00622a44: add eax, dword ptr [ecx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00622a46: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 00622a49: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00622a4b: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 00622a51: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00622a54: mov dword ptr [ebp - 0xb4], eax */ W32((u32)(r_ebp+0xffffff4cu), r_eax);
    /* 00622a5a: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00622a5d: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00622a60: movsx eax, word ptr [edx + ecx*2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+r_ecx*2));
    /* 00622a64: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00622a6a: add eax, dword ptr [ecx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00622a6c: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00622a72: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00622a74: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 00622a7a: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00622a80: movsx edx, word ptr [ecx + eax*2] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+r_eax*2));
    /* 00622a84: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00622a87: add edx, dword ptr [eax] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00622a89: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00622a8c: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 00622a8e: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00622a91: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00622a94: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 00622a97: mov eax, dword ptr [ebp - 0x94] */ r_eax = R32((u32)(r_ebp+0xffffff6cu));
    /* 00622a9d: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00622aa3: movsx edx, word ptr [ecx + eax*2] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+r_eax*2));
    /* 00622aa7: mov eax, dword ptr [ebp - 0xa8] */ r_eax = R32((u32)(r_ebp+0xffffff58u));
    /* 00622aad: add edx, dword ptr [eax] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00622aaf: mov ecx, dword ptr [ebp - 0xa8] */ r_ecx = R32((u32)(r_ebp+0xffffff58u));
    /* 00622ab5: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 00622ab7: mov edx, dword ptr [ebp - 0xa8] */ r_edx = R32((u32)(r_ebp+0xffffff58u));
    /* 00622abd: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00622ac0: mov dword ptr [ebp - 0xa8], edx */ W32((u32)(r_ebp+0xffffff58u), r_edx);
    /* 00622ac6: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00622ac9: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00622acf: movsx edx, word ptr [ecx + eax*2] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+r_eax*2));
    /* 00622ad3: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00622ad6: add edx, dword ptr [eax] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00622ad8: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00622adb: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 00622add: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00622ae0: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00622ae3: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 00622ae6: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 00622aec: mov ecx, dword ptr [ebp - 0x98] */ r_ecx = R32((u32)(r_ebp+0xffffff68u));
    /* 00622af2: movsx edx, word ptr [ecx + eax*2] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+r_eax*2));
    /* 00622af6: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00622af9: add edx, dword ptr [eax] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00622afb: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00622afe: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 00622b00: mov edx, dword ptr [ebp - 0x94] */ r_edx = R32((u32)(r_ebp+0xffffff6cu));
    /* 00622b06: mov eax, dword ptr [ebp - 0x98] */ r_eax = R32((u32)(r_ebp+0xffffff68u));
    /* 00622b0c: movsx ecx, word ptr [eax + edx*2] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+r_edx*2));
    /* 00622b10: mov edx, dword ptr [ebp - 0xa8] */ r_edx = R32((u32)(r_ebp+0xffffff58u));
    /* 00622b16: add ecx, dword ptr [edx] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00622b18: mov eax, dword ptr [ebp - 0xa8] */ r_eax = R32((u32)(r_ebp+0xffffff58u));
    /* 00622b1e: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 00622b20: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00622b23: mov edx, dword ptr [ebp - 0x98] */ r_edx = R32((u32)(r_ebp+0xffffff68u));
    /* 00622b29: movsx eax, word ptr [edx + ecx*2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+r_ecx*2));
    /* 00622b2d: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00622b30: add eax, dword ptr [ecx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00622b32: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00622b35: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00622b37: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 00622b3d: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00622b40: movsx edx, word ptr [ecx + eax*2] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+r_eax*2));
    /* 00622b44: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00622b47: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 00622b4a: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 00622b50: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00622b53: movsx eax, word ptr [edx + ecx*2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+r_ecx*2));
    /* 00622b57: mov ecx, dword ptr [ebp - 0xa8] */ r_ecx = R32((u32)(r_ebp+0xffffff58u));
    /* 00622b5d: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00622b60: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00622b63: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00622b66: movsx ecx, word ptr [eax + edx*2] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+r_edx*2));
    /* 00622b6a: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00622b6d: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
L_00622b70:; BB(0x00622b70);
    /* 00622b70: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 00622b73: add eax, dword ptr [ebp - 0x34] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffccu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00622b76: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 00622b79: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00622b7c: add ecx, dword ptr [ebp - 0x20] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00622b7f: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00622b82: mov edx, dword ptr [ebp - 0xb0] */ r_edx = R32((u32)(r_ebp+0xffffff50u));
    /* 00622b88: add edx, dword ptr [ebp - 0x3c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffc4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00622b8b: mov dword ptr [ebp - 0xb0], edx */ W32((u32)(r_ebp+0xffffff50u), r_edx);
    /* 00622b91: jmp 0x622703 */ goto L_00622703;
L_00622b96:; BB(0x00622b96);
    /* 00622b96: mov eax, dword ptr [ebp - 0xac] */ r_eax = R32((u32)(r_ebp+0xffffff54u));
    /* 00622b9c: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 00622b9f: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 00622ba5: mov dword ptr [ebp - 0xac], ecx */ W32((u32)(r_ebp+0xffffff54u), r_ecx);
    /* 00622bab: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 00622bae: mov dword ptr [ebp - 0x88], edx */ W32((u32)(r_ebp+0xffffff78u), r_edx);
    /* 00622bb4: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00622bb7: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 00622bba: mov ecx, dword ptr [ebp - 0xbc] */ r_ecx = R32((u32)(r_ebp+0xffffff44u));
    /* 00622bc0: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 00622bc3: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 00622bc6: mov dword ptr [ebp - 0xbc], edx */ W32((u32)(r_ebp+0xffffff44u), r_edx);
    /* 00622bcc: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 00622bcf: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 00622bd2: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 00622bd5: mov dword ptr [ebp - 0x50], ecx */ W32((u32)(r_ebp+0xffffffb0u), r_ecx);
    /* 00622bd8: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 00622bdb: mov dword ptr [ebp - 0x6c], edx */ W32((u32)(r_ebp+0xffffff94u), r_edx);
    /* 00622bde: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00622be0: cmp dword ptr [ebp - 0x44], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffbcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00622be4: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00622be7: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00622bea: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 00622bed: imul ecx, dword ptr [ebp - 0x84] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0xffffff7cu)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00622bf4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00622bf5: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 00622bf8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00622bf9: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 00622bfc: imul eax, dword ptr [ebp + 0x20] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0x20u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00622c00: add eax, dword ptr [ebp + 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x18u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00622c03: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00622c04: call 0x686fde */ r_esp -= 4; W32(r_esp, 0x622c09u); f_00686fde();
    /* 00622c09: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00622c0c: jmp 0x622532 */ goto L_00622532;
L_00622c11:; BB(0x00622c11);
    /* 00622c11: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00622c14: sub ecx, 0x3fc */ {  u32 a = r_ecx; u32 b = 0x3fcu; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00622c1a: mov dword ptr [ebp - 0x58], ecx */ W32((u32)(r_ebp+0xffffffa8u), r_ecx);
    /* 00622c1d: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00622c20: mov dword ptr [ebp - 0xe0], edx */ W32((u32)(r_ebp+0xffffff20u), r_edx);
    /* 00622c26: mov eax, dword ptr [ebp - 0xe0] */ r_eax = R32((u32)(r_ebp+0xffffff20u));
    /* 00622c2c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00622c2d: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x622c32u); f_00686cae();
    /* 00622c32: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00622c35: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 00622c3b: mov dword ptr [ebp - 0xe4], ecx */ W32((u32)(r_ebp+0xffffff1cu), r_ecx);
    /* 00622c41: mov edx, dword ptr [ebp - 0xe4] */ r_edx = R32((u32)(r_ebp+0xffffff1cu));
    /* 00622c47: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00622c48: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x622c4du); f_00686cae();
    /* 00622c4d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00622c50: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 00622c56: mov dword ptr [ebp - 0xe8], eax */ W32((u32)(r_ebp+0xffffff18u), r_eax);
    /* 00622c5c: mov ecx, dword ptr [ebp - 0xe8] */ r_ecx = R32((u32)(r_ebp+0xffffff18u));
    /* 00622c62: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00622c63: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x622c68u); f_00686cae();
    /* 00622c68: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00622c6b: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00622c6e: mov dword ptr [ebp - 0xec], edx */ W32((u32)(r_ebp+0xffffff14u), r_edx);
    /* 00622c74: mov eax, dword ptr [ebp - 0xec] */ r_eax = R32((u32)(r_ebp+0xffffff14u));
    /* 00622c7a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00622c7b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x622c80u); f_00686cae();
    /* 00622c80: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00622c83: mov ecx, dword ptr [ebp - 0xbc] */ r_ecx = R32((u32)(r_ebp+0xffffff44u));
    /* 00622c89: mov dword ptr [ebp - 0xf0], ecx */ W32((u32)(r_ebp+0xffffff10u), r_ecx);
    /* 00622c8f: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 00622c95: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00622c96: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x622c9bu); f_00686cae();
    /* 00622c9b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00622c9e: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 00622ca1: mov dword ptr [ebp - 0xf4], eax */ W32((u32)(r_ebp+0xffffff0cu), r_eax);
    /* 00622ca7: mov ecx, dword ptr [ebp - 0xf4] */ r_ecx = R32((u32)(r_ebp+0xffffff0cu));
    /* 00622cad: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00622cae: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x622cb3u); f_00686cae();
    /* 00622cb3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00622cb6: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 00622cb9: mov dword ptr [ebp - 0xf8], edx */ W32((u32)(r_ebp+0xffffff08u), r_edx);
    /* 00622cbf: mov eax, dword ptr [ebp - 0xf8] */ r_eax = R32((u32)(r_ebp+0xffffff08u));
    /* 00622cc5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00622cc6: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x622ccbu); f_00686cae();
    /* 00622ccb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00622cce: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00622cd1: mov dword ptr [ebp - 0xfc], ecx */ W32((u32)(r_ebp+0xffffff04u), r_ecx);
    /* 00622cd7: mov edx, dword ptr [ebp - 0xfc] */ r_edx = R32((u32)(r_ebp+0xffffff04u));
    /* 00622cdd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00622cde: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x622ce3u); f_00686cae();
    /* 00622ce3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00622ce6: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 00622ce9: mov dword ptr [ebp - 0x100], eax */ W32((u32)(r_ebp+0xffffff00u), r_eax);
    /* 00622cef: mov ecx, dword ptr [ebp - 0x100] */ r_ecx = R32((u32)(r_ebp+0xffffff00u));
    /* 00622cf5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00622cf6: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x622cfbu); f_00686cae();
    /* 00622cfb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00622cfe: mov esp, ebp */ r_esp = r_ebp;
    /* 00622d00: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00622d01: ret  */ FN_RET(0x00622340); r_esp += 4; return;
}

void f_00622d10(void) /* sub_622D10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00622d10);
    /* 00622d10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00622d11: mov ebp, esp */ r_ebp = r_esp;
    /* 00622d13: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00622d16: push 0x1ff0 */ { u32 v = 0x1ff0u; r_esp -= 4; W32(r_esp, v); }
    /* 00622d1b: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x622d20u); f_00686d82();
    /* 00622d20: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00622d23: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00622d26: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00622d29: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00622d2c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00622d2f: add ecx, 0x3fc */ {  u32 a = r_ecx; u32 b = 0x3fcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00622d35: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00622d38: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 00622d3f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00622d46: jmp 0x622d5a */ goto L_00622d5a;
L_00622d48:; BB(0x00622d48);
    /* 00622d48: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00622d4b: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00622d4e: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 00622d51: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00622d54: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00622d57: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_00622d5a:; BB(0x00622d5a);
    /* 00622d5a: cmp dword ptr [ebp - 4], 0x10 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00622d5e: jge 0x622d7e */ if ((fS==fO)) goto L_00622d7e;
L_00622d60:; BB(0x00622d60);
    /* 00622d60: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00622d63: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00622d66: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00622d69: mov dword ptr [edx + ecx*4], eax */ W32((u32)(r_edx+r_ecx*4), r_eax);
    /* 00622d6c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00622d6f: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00622d71: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00622d74: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00622d76: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00622d79: mov dword ptr [eax + edx*4], ecx */ W32((u32)(r_eax+r_edx*4), r_ecx);
    /* 00622d7c: jmp 0x622d48 */ goto L_00622d48;
L_00622d7e:; BB(0x00622d7e);
    /* 00622d7e: jmp 0x622d9c */ goto L_00622d9c;
L_00622d80:; BB(0x00622d80);
    /* 00622d80: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00622d83: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00622d86: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00622d89: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00622d8c: and edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00622d8f: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); fC = (b != 0); }
    /* 00622d91: sbb edx, edx */ { u32 c = fC; u32 a = r_edx; u32 b = r_edx; u32 r = (a - b - c) & 0xffffffffu; r_edx = r;  }
    /* 00622d93: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00622d96: add edx, dword ptr [ebp - 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00622d99: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_00622d9c:; BB(0x00622d9c);
    /* 00622d9c: cmp dword ptr [ebp - 4], 0x30 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00622da0: jge 0x622dc0 */ if ((fS==fO)) goto L_00622dc0;
L_00622da2:; BB(0x00622da2);
    /* 00622da2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00622da5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00622da8: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00622dab: mov dword ptr [ecx + eax*4], edx */ W32((u32)(r_ecx+r_eax*4), r_edx);
    /* 00622dae: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00622db1: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00622db3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00622db6: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00622db8: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00622dbb: mov dword ptr [edx + ecx*4], eax */ W32((u32)(r_edx+r_ecx*4), r_eax);
    /* 00622dbe: jmp 0x622d80 */ goto L_00622d80;
L_00622dc0:; BB(0x00622dc0);
    /* 00622dc0: jmp 0x622dcb */ goto L_00622dcb;
L_00622dc2:; BB(0x00622dc2);
    /* 00622dc2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00622dc5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00622dc8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00622dcb:; BB(0x00622dcb);
    /* 00622dcb: cmp dword ptr [ebp - 4], 0xff */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00622dd2: jg 0x622df2 */ if ((!fZ&&fS==fO)) goto L_00622df2;
L_00622dd4:; BB(0x00622dd4);
    /* 00622dd4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00622dd7: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00622dda: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00622ddd: mov dword ptr [edx + ecx*4], eax */ W32((u32)(r_edx+r_ecx*4), r_eax);
    /* 00622de0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00622de3: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00622de5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00622de8: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00622dea: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00622ded: mov dword ptr [eax + edx*4], ecx */ W32((u32)(r_eax+r_edx*4), r_ecx);
    /* 00622df0: jmp 0x622dc2 */ goto L_00622dc2;
L_00622df2:; BB(0x00622df2);
    /* 00622df2: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00622df5: mov esp, ebp */ r_esp = r_ebp;
    /* 00622df7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00622df8: ret  */ FN_RET(0x00622d10); r_esp += 4; return;
}

void f_00622e00(void) /* sub_622E00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00622e00);
    /* 00622e00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00622e01: mov ebp, esp */ r_ebp = r_esp;
    /* 00622e03: sub esp, 0x828 */ {  u32 a = r_esp; u32 b = 0x828u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00622e09: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00622e0c: sar eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00622e0f: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
    /* 00622e12: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00622e15: sar ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00622e18: mov dword ptr [ebp + 0x10], ecx */ W32((u32)(r_ebp+0x10u), r_ecx);
    /* 00622e1b: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 00622e1e: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00622e21: mov dword ptr [ebp + 0x14], edx */ W32((u32)(r_ebp+0x14u), r_edx);
    /* 00622e24: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00622e27: shl eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00622e2a: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00622e2d: mov dword ptr [ebp - 0x828], eax */ W32((u32)(r_ebp+0xfffff7d8u), r_eax);
    /* 00622e33: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00622e36: shl ecx, 5 */ { u32 c = (5u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00622e39: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00622e3c: mov dword ptr [ebp - 0x41c], ecx */ W32((u32)(r_ebp+0xfffffbe4u), r_ecx);
    /* 00622e42: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 00622e45: shl edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00622e48: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00622e4b: mov dword ptr [ebp - 0x824], edx */ W32((u32)(r_ebp+0xfffff7dcu), r_edx);
    /* 00622e51: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 00622e54: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00622e55: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 00622e58: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00622e59: lea edx, [ebp - 0x400] */ r_edx = (u32)(r_ebp+0xfffffc00u);
    /* 00622e5f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00622e60: mov eax, dword ptr [ebp - 0x824] */ r_eax = R32((u32)(r_ebp+0xfffff7dcu));
    /* 00622e66: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00622e67: mov ecx, dword ptr [ebp - 0x41c] */ r_ecx = R32((u32)(r_ebp+0xfffffbe4u));
    /* 00622e6d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00622e6e: mov edx, dword ptr [ebp - 0x828] */ r_edx = R32((u32)(r_ebp+0xfffff7d8u));
    /* 00622e74: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00622e75: call 0x622fd0 */ r_esp -= 4; W32(r_esp, 0x622e7au); f_00622fd0();
    /* 00622e7a: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00622e7d: mov dword ptr [ebp - 0x404], eax */ W32((u32)(r_ebp+0xfffffbfcu), r_eax);
    /* 00622e83: lea eax, [ebp - 0x820] */ r_eax = (u32)(r_ebp+0xfffff7e0u);
    /* 00622e89: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00622e8a: lea ecx, [ebp - 0x400] */ r_ecx = (u32)(r_ebp+0xfffffc00u);
    /* 00622e90: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00622e91: mov edx, dword ptr [ebp - 0x404] */ r_edx = R32((u32)(r_ebp+0xfffffbfcu));
    /* 00622e97: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00622e98: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 00622e9b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00622e9c: mov ecx, dword ptr [ebp - 0x824] */ r_ecx = R32((u32)(r_ebp+0xfffff7dcu));
    /* 00622ea2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00622ea3: mov edx, dword ptr [ebp - 0x41c] */ r_edx = R32((u32)(r_ebp+0xfffffbe4u));
    /* 00622ea9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00622eaa: mov eax, dword ptr [ebp - 0x828] */ r_eax = R32((u32)(r_ebp+0xfffff7d8u));
    /* 00622eb0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00622eb1: call 0x623400 */ r_esp -= 4; W32(r_esp, 0x622eb6u); f_00623400();
    /* 00622eb6: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00622eb9: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00622ebc: shl ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00622ebf: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
    /* 00622ec2: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00622ec5: shl edx, 3 */ { u32 c = (3u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00622ec8: mov dword ptr [ebp + 0x10], edx */ W32((u32)(r_ebp+0x10u), r_edx);
    /* 00622ecb: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00622ece: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00622ed1: mov dword ptr [ebp + 0x14], eax */ W32((u32)(r_ebp+0x14u), r_eax);
    /* 00622ed4: lea ecx, [ebp - 0x820] */ r_ecx = (u32)(r_ebp+0xfffff7e0u);
    /* 00622eda: mov dword ptr [ebp - 0x40c], ecx */ W32((u32)(r_ebp+0xfffffbf4u), r_ecx);
    /* 00622ee0: mov dword ptr [ebp - 0x414], 0 */ W32((u32)(r_ebp+0xfffffbecu), 0x0u);
    /* 00622eea: jmp 0x622efb */ goto L_00622efb;
L_00622eec:; BB(0x00622eec);
    /* 00622eec: mov edx, dword ptr [ebp - 0x414] */ r_edx = R32((u32)(r_ebp+0xfffffbecu));
    /* 00622ef2: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00622ef5: mov dword ptr [ebp - 0x414], edx */ W32((u32)(r_ebp+0xfffffbecu), r_edx);
L_00622efb:; BB(0x00622efb);
    /* 00622efb: cmp dword ptr [ebp - 0x414], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffbecu)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00622f02: jge 0x622fbd */ if ((fS==fO)) goto L_00622fbd;
L_00622f08:; BB(0x00622f08);
    /* 00622f08: mov dword ptr [ebp - 0x418], 0 */ W32((u32)(r_ebp+0xfffffbe8u), 0x0u);
    /* 00622f12: jmp 0x622f23 */ goto L_00622f23;
L_00622f14:; BB(0x00622f14);
    /* 00622f14: mov eax, dword ptr [ebp - 0x418] */ r_eax = R32((u32)(r_ebp+0xfffffbe8u));
    /* 00622f1a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00622f1d: mov dword ptr [ebp - 0x418], eax */ W32((u32)(r_ebp+0xfffffbe8u), r_eax);
L_00622f23:; BB(0x00622f23);
    /* 00622f23: cmp dword ptr [ebp - 0x418], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffbe8u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00622f2a: jge 0x622fb8 */ if ((fS==fO)) goto L_00622fb8;
L_00622f30:; BB(0x00622f30);
    /* 00622f30: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00622f33: add ecx, dword ptr [ebp - 0x414] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffbecu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00622f39: shl ecx, 6 */ { u32 c = (6u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00622f3c: shl ecx, 5 */ { u32 c = (5u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00622f3f: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00622f42: add edx, dword ptr [ebp - 0x418] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffbe8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00622f48: shl edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00622f4b: add ecx, dword ptr [ebp + 0x14] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x14u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00622f4e: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00622f50: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00622f53: lea ecx, [eax + edx*4] */ r_ecx = (u32)(r_eax+r_edx*4);
    /* 00622f56: mov dword ptr [ebp - 0x408], ecx */ W32((u32)(r_ebp+0xfffffbf8u), r_ecx);
    /* 00622f5c: mov dword ptr [ebp - 0x410], 0 */ W32((u32)(r_ebp+0xfffffbf0u), 0x0u);
    /* 00622f66: jmp 0x622f77 */ goto L_00622f77;
L_00622f68:; BB(0x00622f68);
    /* 00622f68: mov edx, dword ptr [ebp - 0x410] */ r_edx = R32((u32)(r_ebp+0xfffffbf0u));
    /* 00622f6e: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00622f71: mov dword ptr [ebp - 0x410], edx */ W32((u32)(r_ebp+0xfffffbf0u), r_edx);
L_00622f77:; BB(0x00622f77);
    /* 00622f77: cmp dword ptr [ebp - 0x410], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffbf0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00622f7e: jge 0x622fb3 */ if ((fS==fO)) goto L_00622fb3;
L_00622f80:; BB(0x00622f80);
    /* 00622f80: mov eax, dword ptr [ebp - 0x40c] */ r_eax = R32((u32)(r_ebp+0xfffffbf4u));
    /* 00622f86: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00622f88: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00622f8b: mov edx, dword ptr [ebp - 0x408] */ r_edx = R32((u32)(r_ebp+0xfffffbf8u));
    /* 00622f91: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 00622f93: mov eax, dword ptr [ebp - 0x408] */ r_eax = R32((u32)(r_ebp+0xfffffbf8u));
    /* 00622f99: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00622f9c: mov dword ptr [ebp - 0x408], eax */ W32((u32)(r_ebp+0xfffffbf8u), r_eax);
    /* 00622fa2: mov ecx, dword ptr [ebp - 0x40c] */ r_ecx = R32((u32)(r_ebp+0xfffffbf4u));
    /* 00622fa8: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00622fab: mov dword ptr [ebp - 0x40c], ecx */ W32((u32)(r_ebp+0xfffffbf4u), r_ecx);
    /* 00622fb1: jmp 0x622f68 */ goto L_00622f68;
L_00622fb3:; BB(0x00622fb3);
    /* 00622fb3: jmp 0x622f14 */ goto L_00622f14;
L_00622fb8:; BB(0x00622fb8);
    /* 00622fb8: jmp 0x622eec */ goto L_00622eec;
L_00622fbd:; BB(0x00622fbd);
    /* 00622fbd: mov esp, ebp */ r_esp = r_ebp;
    /* 00622fbf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00622fc0: ret  */ FN_RET(0x00622e00); r_esp += 4; return;
}

void f_00622fd0(void) /* sub_622FD0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00622fd0);
    /* 00622fd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00622fd1: mov ebp, esp */ r_ebp = r_esp;
    /* 00622fd3: sub esp, 0x43c */ {  u32 a = r_esp; u32 b = 0x43cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00622fd9: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 00622fdc: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00622fdf: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00622fe2: add ecx, 0x1c */ {  u32 a = r_ecx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00622fe5: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00622fe8: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00622feb: add edx, dword ptr [ebp - 0x1c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00622fee: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00622ff0: mov dword ptr [ebp - 0x43c], edx */ W32((u32)(r_ebp+0xfffffbc4u), r_edx);
    /* 00622ff6: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00622ff9: add eax, 0x1c */ {  u32 a = r_eax; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00622ffc: mov dword ptr [ebp - 0x434], eax */ W32((u32)(r_ebp+0xfffffbccu), r_eax);
    /* 00623002: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00623005: add ecx, dword ptr [ebp - 0x434] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffbccu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062300b: sar ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0062300d: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00623010: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00623013: add edx, 0x18 */ {  u32 a = r_edx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00623016: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00623019: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0062301c: add eax, dword ptr [ebp - 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062301f: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00623021: mov dword ptr [ebp - 0x430], eax */ W32((u32)(r_ebp+0xfffffbd0u), r_eax);
    /* 00623027: mov dword ptr [ebp - 4], 0x7fffffff */ W32((u32)(r_ebp+0xfffffffcu), 0x7fffffffu);
    /* 0062302e: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 00623035: jmp 0x623040 */ goto L_00623040;
L_00623037:; BB(0x00623037);
    /* 00623037: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062303a: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062303d: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
L_00623040:; BB(0x00623040);
    /* 00623040: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00623043: cmp edx, dword ptr [ebp - 0x24] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00623046: jge 0x6233ae */ if ((fS==fO)) goto L_006233ae;
L_0062304c:; BB(0x0062304c);
    /* 0062304c: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062304f: imul eax, eax, 3 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00623052: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 00623055: movzx edx, byte ptr [ecx + eax] */ r_edx = (u32)R8((u32)(r_ecx+r_eax));
    /* 00623059: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0062305c: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062305f: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00623062: jge 0x6230aa */ if ((fS==fO)) goto L_006230aa;
L_00623064:; BB(0x00623064);
    /* 00623064: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00623067: sub ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0062306a: imul ecx, ecx, 0x1e */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x1eu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0062306d: mov dword ptr [ebp - 0x438], ecx */ W32((u32)(r_ebp+0xfffffbc8u), r_ecx);
    /* 00623073: mov edx, dword ptr [ebp - 0x438] */ r_edx = R32((u32)(r_ebp+0xfffffbc8u));
    /* 00623079: imul edx, dword ptr [ebp - 0x438] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_ebp+0xfffffbc8u)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00623080: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00623083: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00623086: sub eax, dword ptr [ebp - 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00623089: imul eax, eax, 0x1e */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x1eu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0062308c: mov dword ptr [ebp - 0x438], eax */ W32((u32)(r_ebp+0xfffffbc8u), r_eax);
    /* 00623092: mov ecx, dword ptr [ebp - 0x438] */ r_ecx = R32((u32)(r_ebp+0xfffffbc8u));
    /* 00623098: imul ecx, dword ptr [ebp - 0x438] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0xfffffbc8u)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0062309f: mov dword ptr [ebp - 0x42c], ecx */ W32((u32)(r_ebp+0xfffffbd4u), r_ecx);
    /* 006230a5: jmp 0x62314d */ goto L_0062314d;
L_006230aa:; BB(0x006230aa);
    /* 006230aa: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006230ad: cmp edx, dword ptr [ebp - 0x1c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006230b0: jle 0x6230f5 */ if ((fZ||fS!=fO)) goto L_006230f5;
L_006230b2:; BB(0x006230b2);
    /* 006230b2: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 006230b5: sub eax, dword ptr [ebp - 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006230b8: imul eax, eax, 0x1e */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x1eu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006230bb: mov dword ptr [ebp - 0x438], eax */ W32((u32)(r_ebp+0xfffffbc8u), r_eax);
    /* 006230c1: mov ecx, dword ptr [ebp - 0x438] */ r_ecx = R32((u32)(r_ebp+0xfffffbc8u));
    /* 006230c7: imul ecx, dword ptr [ebp - 0x438] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0xfffffbc8u)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006230ce: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 006230d1: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006230d4: sub edx, dword ptr [ebp + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006230d7: imul edx, edx, 0x1e */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x1eu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006230da: mov dword ptr [ebp - 0x438], edx */ W32((u32)(r_ebp+0xfffffbc8u), r_edx);
    /* 006230e0: mov eax, dword ptr [ebp - 0x438] */ r_eax = R32((u32)(r_ebp+0xfffffbc8u));
    /* 006230e6: imul eax, dword ptr [ebp - 0x438] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xfffffbc8u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006230ed: mov dword ptr [ebp - 0x42c], eax */ W32((u32)(r_ebp+0xfffffbd4u), r_eax);
    /* 006230f3: jmp 0x62314d */ goto L_0062314d;
L_006230f5:; BB(0x006230f5);
    /* 006230f5: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 006230fc: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006230ff: cmp ecx, dword ptr [ebp - 0x43c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffbc4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00623105: jg 0x62312b */ if ((!fZ&&fS==fO)) goto L_0062312b;
L_00623107:; BB(0x00623107);
    /* 00623107: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062310a: sub edx, dword ptr [ebp - 0x1c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0062310d: imul edx, edx, 0x1e */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x1eu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00623110: mov dword ptr [ebp - 0x438], edx */ W32((u32)(r_ebp+0xfffffbc8u), r_edx);
    /* 00623116: mov eax, dword ptr [ebp - 0x438] */ r_eax = R32((u32)(r_ebp+0xfffffbc8u));
    /* 0062311c: imul eax, dword ptr [ebp - 0x438] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xfffffbc8u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00623123: mov dword ptr [ebp - 0x42c], eax */ W32((u32)(r_ebp+0xfffffbd4u), r_eax);
    /* 00623129: jmp 0x62314d */ goto L_0062314d;
L_0062312b:; BB(0x0062312b);
    /* 0062312b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062312e: sub ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00623131: imul ecx, ecx, 0x1e */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x1eu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00623134: mov dword ptr [ebp - 0x438], ecx */ W32((u32)(r_ebp+0xfffffbc8u), r_ecx);
    /* 0062313a: mov edx, dword ptr [ebp - 0x438] */ r_edx = R32((u32)(r_ebp+0xfffffbc8u));
    /* 00623140: imul edx, dword ptr [ebp - 0x438] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_ebp+0xfffffbc8u)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00623147: mov dword ptr [ebp - 0x42c], edx */ W32((u32)(r_ebp+0xfffffbd4u), r_edx);
L_0062314d:; BB(0x0062314d);
    /* 0062314d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00623150: imul eax, eax, 3 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00623153: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 00623156: movzx edx, byte ptr [ecx + eax + 1] */ r_edx = (u32)R8((u32)(r_ecx+r_eax+0x1u));
    /* 0062315b: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0062315e: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00623161: cmp eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00623164: jge 0x6231b8 */ if ((fS==fO)) goto L_006231b8;
L_00623166:; BB(0x00623166);
    /* 00623166: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00623169: sub ecx, dword ptr [ebp + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0062316c: imul ecx, ecx, 0x3b */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x3bu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0062316f: mov dword ptr [ebp - 0x438], ecx */ W32((u32)(r_ebp+0xfffffbc8u), r_ecx);
    /* 00623175: mov edx, dword ptr [ebp - 0x438] */ r_edx = R32((u32)(r_ebp+0xfffffbc8u));
    /* 0062317b: imul edx, dword ptr [ebp - 0x438] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_ebp+0xfffffbc8u)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00623182: add edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00623185: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00623188: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062318b: sub eax, dword ptr [ebp - 0x434] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffbccu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00623191: imul eax, eax, 0x3b */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3bu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00623194: mov dword ptr [ebp - 0x438], eax */ W32((u32)(r_ebp+0xfffffbc8u), r_eax);
    /* 0062319a: mov ecx, dword ptr [ebp - 0x438] */ r_ecx = R32((u32)(r_ebp+0xfffffbc8u));
    /* 006231a0: imul ecx, dword ptr [ebp - 0x438] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0xfffffbc8u)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006231a7: add ecx, dword ptr [ebp - 0x42c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffbd4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006231ad: mov dword ptr [ebp - 0x42c], ecx */ W32((u32)(r_ebp+0xfffffbd4u), r_ecx);
    /* 006231b3: jmp 0x62326f */ goto L_0062326f;
L_006231b8:; BB(0x006231b8);
    /* 006231b8: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006231bb: cmp edx, dword ptr [ebp - 0x434] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffbccu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006231c1: jle 0x623212 */ if ((fZ||fS!=fO)) goto L_00623212;
L_006231c3:; BB(0x006231c3);
    /* 006231c3: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 006231c6: sub eax, dword ptr [ebp - 0x434] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffbccu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006231cc: imul eax, eax, 0x3b */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3bu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006231cf: mov dword ptr [ebp - 0x438], eax */ W32((u32)(r_ebp+0xfffffbc8u), r_eax);
    /* 006231d5: mov ecx, dword ptr [ebp - 0x438] */ r_ecx = R32((u32)(r_ebp+0xfffffbc8u));
    /* 006231db: imul ecx, dword ptr [ebp - 0x438] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0xfffffbc8u)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006231e2: add ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006231e5: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 006231e8: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006231eb: sub edx, dword ptr [ebp + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006231ee: imul edx, edx, 0x3b */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x3bu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006231f1: mov dword ptr [ebp - 0x438], edx */ W32((u32)(r_ebp+0xfffffbc8u), r_edx);
    /* 006231f7: mov eax, dword ptr [ebp - 0x438] */ r_eax = R32((u32)(r_ebp+0xfffffbc8u));
    /* 006231fd: imul eax, dword ptr [ebp - 0x438] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xfffffbc8u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00623204: add eax, dword ptr [ebp - 0x42c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffbd4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062320a: mov dword ptr [ebp - 0x42c], eax */ W32((u32)(r_ebp+0xfffffbd4u), r_eax);
    /* 00623210: jmp 0x62326f */ goto L_0062326f;
L_00623212:; BB(0x00623212);
    /* 00623212: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00623215: cmp ecx, dword ptr [ebp - 0x14] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00623218: jg 0x623247 */ if ((!fZ&&fS==fO)) goto L_00623247;
L_0062321a:; BB(0x0062321a);
    /* 0062321a: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062321d: sub edx, dword ptr [ebp - 0x434] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffbccu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00623223: imul edx, edx, 0x3b */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x3bu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00623226: mov dword ptr [ebp - 0x438], edx */ W32((u32)(r_ebp+0xfffffbc8u), r_edx);
    /* 0062322c: mov eax, dword ptr [ebp - 0x438] */ r_eax = R32((u32)(r_ebp+0xfffffbc8u));
    /* 00623232: imul eax, dword ptr [ebp - 0x438] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xfffffbc8u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00623239: add eax, dword ptr [ebp - 0x42c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffbd4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062323f: mov dword ptr [ebp - 0x42c], eax */ W32((u32)(r_ebp+0xfffffbd4u), r_eax);
    /* 00623245: jmp 0x62326f */ goto L_0062326f;
L_00623247:; BB(0x00623247);
    /* 00623247: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062324a: sub ecx, dword ptr [ebp + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0062324d: imul ecx, ecx, 0x3b */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x3bu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00623250: mov dword ptr [ebp - 0x438], ecx */ W32((u32)(r_ebp+0xfffffbc8u), r_ecx);
    /* 00623256: mov edx, dword ptr [ebp - 0x438] */ r_edx = R32((u32)(r_ebp+0xfffffbc8u));
    /* 0062325c: imul edx, dword ptr [ebp - 0x438] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_ebp+0xfffffbc8u)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00623263: add edx, dword ptr [ebp - 0x42c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffbd4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00623269: mov dword ptr [ebp - 0x42c], edx */ W32((u32)(r_ebp+0xfffffbd4u), r_edx);
L_0062326f:; BB(0x0062326f);
    /* 0062326f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00623272: imul eax, eax, 3 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00623275: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 00623278: movzx edx, byte ptr [ecx + eax + 2] */ r_edx = (u32)R8((u32)(r_ecx+r_eax+0x2u));
    /* 0062327d: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00623280: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00623283: cmp eax, dword ptr [ebp + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00623286: jge 0x6232d7 */ if ((fS==fO)) goto L_006232d7;
L_00623288:; BB(0x00623288);
    /* 00623288: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062328b: sub ecx, dword ptr [ebp + 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0062328e: imul ecx, ecx, 0xb */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xbu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00623291: mov dword ptr [ebp - 0x438], ecx */ W32((u32)(r_ebp+0xfffffbc8u), r_ecx);
    /* 00623297: mov edx, dword ptr [ebp - 0x438] */ r_edx = R32((u32)(r_ebp+0xfffffbc8u));
    /* 0062329d: imul edx, dword ptr [ebp - 0x438] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_ebp+0xfffffbc8u)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006232a4: add edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006232a7: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 006232aa: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 006232ad: sub eax, dword ptr [ebp - 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006232b0: imul eax, eax, 0xb */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xbu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006232b3: mov dword ptr [ebp - 0x438], eax */ W32((u32)(r_ebp+0xfffffbc8u), r_eax);
    /* 006232b9: mov ecx, dword ptr [ebp - 0x438] */ r_ecx = R32((u32)(r_ebp+0xfffffbc8u));
    /* 006232bf: imul ecx, dword ptr [ebp - 0x438] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0xfffffbc8u)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006232c6: add ecx, dword ptr [ebp - 0x42c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffbd4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006232cc: mov dword ptr [ebp - 0x42c], ecx */ W32((u32)(r_ebp+0xfffffbd4u), r_ecx);
    /* 006232d2: jmp 0x623388 */ goto L_00623388;
L_006232d7:; BB(0x006232d7);
    /* 006232d7: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006232da: cmp edx, dword ptr [ebp - 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006232dd: jle 0x62332b */ if ((fZ||fS!=fO)) goto L_0062332b;
L_006232df:; BB(0x006232df);
    /* 006232df: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 006232e2: sub eax, dword ptr [ebp - 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006232e5: imul eax, eax, 0xb */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xbu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006232e8: mov dword ptr [ebp - 0x438], eax */ W32((u32)(r_ebp+0xfffffbc8u), r_eax);
    /* 006232ee: mov ecx, dword ptr [ebp - 0x438] */ r_ecx = R32((u32)(r_ebp+0xfffffbc8u));
    /* 006232f4: imul ecx, dword ptr [ebp - 0x438] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0xfffffbc8u)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006232fb: add ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006232fe: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00623301: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00623304: sub edx, dword ptr [ebp + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00623307: imul edx, edx, 0xb */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xbu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0062330a: mov dword ptr [ebp - 0x438], edx */ W32((u32)(r_ebp+0xfffffbc8u), r_edx);
    /* 00623310: mov eax, dword ptr [ebp - 0x438] */ r_eax = R32((u32)(r_ebp+0xfffffbc8u));
    /* 00623316: imul eax, dword ptr [ebp - 0x438] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xfffffbc8u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0062331d: add eax, dword ptr [ebp - 0x42c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffbd4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00623323: mov dword ptr [ebp - 0x42c], eax */ W32((u32)(r_ebp+0xfffffbd4u), r_eax);
    /* 00623329: jmp 0x623388 */ goto L_00623388;
L_0062332b:; BB(0x0062332b);
    /* 0062332b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062332e: cmp ecx, dword ptr [ebp - 0x430] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffbd0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00623334: jg 0x623360 */ if ((!fZ&&fS==fO)) goto L_00623360;
L_00623336:; BB(0x00623336);
    /* 00623336: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00623339: sub edx, dword ptr [ebp - 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0062333c: imul edx, edx, 0xb */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xbu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0062333f: mov dword ptr [ebp - 0x438], edx */ W32((u32)(r_ebp+0xfffffbc8u), r_edx);
    /* 00623345: mov eax, dword ptr [ebp - 0x438] */ r_eax = R32((u32)(r_ebp+0xfffffbc8u));
    /* 0062334b: imul eax, dword ptr [ebp - 0x438] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xfffffbc8u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00623352: add eax, dword ptr [ebp - 0x42c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffbd4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00623358: mov dword ptr [ebp - 0x42c], eax */ W32((u32)(r_ebp+0xfffffbd4u), r_eax);
    /* 0062335e: jmp 0x623388 */ goto L_00623388;
L_00623360:; BB(0x00623360);
    /* 00623360: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00623363: sub ecx, dword ptr [ebp + 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00623366: imul ecx, ecx, 0xb */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xbu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00623369: mov dword ptr [ebp - 0x438], ecx */ W32((u32)(r_ebp+0xfffffbc8u), r_ecx);
    /* 0062336f: mov edx, dword ptr [ebp - 0x438] */ r_edx = R32((u32)(r_ebp+0xfffffbc8u));
    /* 00623375: imul edx, dword ptr [ebp - 0x438] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_ebp+0xfffffbc8u)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0062337c: add edx, dword ptr [ebp - 0x42c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffbd4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00623382: mov dword ptr [ebp - 0x42c], edx */ W32((u32)(r_ebp+0xfffffbd4u), r_edx);
L_00623388:; BB(0x00623388);
    /* 00623388: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062338b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062338e: mov dword ptr [ebp + eax*4 - 0x428], ecx */ W32((u32)(r_ebp+r_eax*4+0xfffffbd8u), r_ecx);
    /* 00623395: mov edx, dword ptr [ebp - 0x42c] */ r_edx = R32((u32)(r_ebp+0xfffffbd4u));
    /* 0062339b: cmp edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062339e: jge 0x6233a9 */ if ((fS==fO)) goto L_006233a9;
L_006233a0:; BB(0x006233a0);
    /* 006233a0: mov eax, dword ptr [ebp - 0x42c] */ r_eax = R32((u32)(r_ebp+0xfffffbd4u));
    /* 006233a6: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_006233a9:; BB(0x006233a9);
    /* 006233a9: jmp 0x623037 */ goto L_00623037;
L_006233ae:; BB(0x006233ae);
    /* 006233ae: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 006233b5: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 006233bc: jmp 0x6233c7 */ goto L_006233c7;
L_006233be:; BB(0x006233be);
    /* 006233be: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006233c1: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006233c4: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
L_006233c7:; BB(0x006233c7);
    /* 006233c7: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006233ca: cmp edx, dword ptr [ebp - 0x24] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006233cd: jge 0x6233f5 */ if ((fS==fO)) goto L_006233f5;
L_006233cf:; BB(0x006233cf);
    /* 006233cf: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006233d2: mov ecx, dword ptr [ebp + eax*4 - 0x428] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xfffffbd8u));
    /* 006233d9: cmp ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006233dc: jg 0x6233f3 */ if ((!fZ&&fS==fO)) goto L_006233f3;
L_006233de:; BB(0x006233de);
    /* 006233de: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006233e1: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 006233e4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006233e7: mov dword ptr [eax + edx*4], ecx */ W32((u32)(r_eax+r_edx*4), r_ecx);
    /* 006233ea: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006233ed: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006233f0: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_006233f3:; BB(0x006233f3);
    /* 006233f3: jmp 0x6233be */ goto L_006233be;
L_006233f5:; BB(0x006233f5);
    /* 006233f5: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 006233f8: mov esp, ebp */ r_esp = r_ebp;
    /* 006233fa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006233fb: ret  */ FN_RET(0x00622fd0); r_esp += 4; return;
}

