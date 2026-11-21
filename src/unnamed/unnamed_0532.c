#include "protos.h"

void f_00532200(void) /* sub_532200 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00532200);
    /* 00532200: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00532201: mov ebp, esp */ r_ebp = r_esp;
    /* 00532203: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00532206: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 00532209: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0053220c: call 0x532570 */ r_esp -= 4; W32(r_esp, 0x532211u); f_00532570();
    /* 00532211: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00532214: mov ecx, dword ptr [eax + 0x1d4] */ r_ecx = R32((u32)(r_eax+0x1d4u));
    /* 0053221a: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0053221d: mov eax, dword ptr [edx + 0x1d4] */ r_eax = R32((u32)(r_edx+0x1d4u));
    /* 00532223: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00532225: mov ecx, eax */ r_ecx = r_eax;
    /* 00532227: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 0053222a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53222cu); call_ind(t); }
    /* 0053222c: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0053222f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00532232: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00532235: mov edx, dword ptr [ecx + 0x1d4] */ r_edx = R32((u32)(r_ecx+0x1d4u));
    /* 0053223b: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0053223e: mov ecx, dword ptr [eax + 0x1d4] */ r_ecx = R32((u32)(r_eax+0x1d4u));
    /* 00532244: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00532246: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 00532249: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53224bu); call_ind(t); }
    /* 0053224b: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0053224e: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00532251: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00532254: add ecx, 0x184 */ {  u32 a = r_ecx; u32 b = 0x184u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0053225a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053225b: call 0x686ecc */ r_esp -= 4; W32(r_esp, 0x532260u); f_00686ecc();
    /* 00532260: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00532263: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00532266: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0053226d: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00532274: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0053227b: jmp 0x532286 */ goto L_00532286;
L_0053227d:; BB(0x0053227d);
    /* 0053227d: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00532280: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00532283: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_00532286:; BB(0x00532286);
    /* 00532286: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00532289: cmp eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053228c: jge 0x532329 */ if ((fS==fO)) goto L_00532329;
L_00532292:; BB(0x00532292);
    /* 00532292: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00532296: jle 0x5322ad */ if ((fZ||fS!=fO)) goto L_005322ad;
L_00532298:; BB(0x00532298);
    /* 00532298: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0053229b: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0053229e: mov ecx, dword ptr [edx + ecx*4 + 0x190] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x190u));
    /* 005322a5: call 0x5f5550 */ r_esp -= 4; W32(r_esp, 0x5322aau); f_005f5550();
    /* 005322aa: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
L_005322ad:; BB(0x005322ad);
    /* 005322ad: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005322b0: add eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005322b3: mov cl, byte ptr [eax + 0x184] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x184u))) & 0xffu);
    /* 005322b9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005322ba: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005322bd: call 0x532490 */ r_esp -= 4; W32(r_esp, 0x5322c2u); f_00532490();
    /* 005322c2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005322c3: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005322c6: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005322c9: mov ecx, dword ptr [eax + edx*4 + 0x194] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x194u));
    /* 005322d0: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005322d3: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005322d6: mov edx, dword ptr [eax + edx*4 + 0x194] */ r_edx = R32((u32)(r_eax+r_edx*4+0x194u));
    /* 005322dd: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005322df: mov ecx, edx */ r_ecx = r_edx;
    /* 005322e1: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 005322e7: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5322e9u); call_ind(t); }
    /* 005322e9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005322ec: add eax, dword ptr [ebp - 0x28] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffd8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005322ef: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005322f2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005322f5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005322f6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005322f9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005322fa: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005322fd: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00532300: mov edx, dword ptr [ecx + eax*4 + 0x194] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x194u));
    /* 00532307: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0053230a: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0053230d: mov ecx, dword ptr [ecx + eax*4 + 0x194] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x194u));
    /* 00532314: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00532316: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00532319: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53231bu); call_ind(t); }
    /* 0053231b: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0053231e: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00532321: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 00532324: jmp 0x53227d */ goto L_0053227d;
L_00532329:; BB(0x00532329);
    /* 00532329: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00532330: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00532333: mov ecx, dword ptr [edx + 0x1d4] */ r_ecx = R32((u32)(r_edx+0x1d4u));
    /* 00532339: call 0x5f5550 */ r_esp -= 4; W32(r_esp, 0x53233eu); f_005f5550();
    /* 0053233e: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00532341: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00532348: jmp 0x532353 */ goto L_00532353;
L_0053234a:; BB(0x0053234a);
    /* 0053234a: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0053234d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00532350: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_00532353:; BB(0x00532353);
    /* 00532353: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00532356: cmp ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00532359: jge 0x532375 */ if ((fS==fO)) goto L_00532375;
L_0053235b:; BB(0x0053235b);
    /* 0053235b: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0053235e: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00532361: mov ecx, dword ptr [eax + edx*4 + 0x194] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x194u));
    /* 00532368: call 0x5f5550 */ r_esp -= 4; W32(r_esp, 0x53236du); f_005f5550();
    /* 0053236d: add eax, dword ptr [ebp - 0x24] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00532370: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00532373: jmp 0x53234a */ goto L_0053234a;
L_00532375:; BB(0x00532375);
    /* 00532375: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00532378: mov edx, dword ptr [ecx + 0x1d4] */ r_edx = R32((u32)(r_ecx+0x1d4u));
    /* 0053237e: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00532381: mov ecx, dword ptr [eax + 0x1d4] */ r_ecx = R32((u32)(r_eax+0x1d4u));
    /* 00532387: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00532389: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 0053238c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53238eu); call_ind(t); }
    /* 0053238e: mov ecx, eax */ r_ecx = r_eax;
    /* 00532390: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00532393: sub eax, dword ptr [ebp - 0x24] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00532396: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00532397: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00532399: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0053239b: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0053239d: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005323a0: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005323a3: mov eax, dword ptr [edx + 0x194] */ r_eax = R32((u32)(r_edx+0x194u));
    /* 005323a9: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005323ac: mov ecx, dword ptr [ecx + 0x194] */ r_ecx = R32((u32)(r_ecx+0x194u));
    /* 005323b2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005323b4: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005323b7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5323b9u); call_ind(t); }
    /* 005323b9: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005323bc: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005323bf: sub ecx, dword ptr [ebp - 0x18] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005323c2: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005323c5: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005323cc: jmp 0x5323d7 */ goto L_005323d7;
L_005323ce:; BB(0x005323ce);
    /* 005323ce: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005323d1: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005323d4: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_005323d7:; BB(0x005323d7);
    /* 005323d7: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005323da: cmp eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005323dd: jge 0x532449 */ if ((fS==fO)) goto L_00532449;
L_005323df:; BB(0x005323df);
    /* 005323df: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005323e2: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005323e5: mov eax, dword ptr [edx + ecx*4 + 0x194] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x194u));
    /* 005323ec: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005323ef: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005323f2: mov ecx, dword ptr [edx + ecx*4 + 0x194] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x194u));
    /* 005323f9: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005323fb: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 005323fe: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x532400u); call_ind(t); }
    /* 00532400: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00532401: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00532404: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00532407: mov edx, dword ptr [ecx + eax*4 + 0x194] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x194u));
    /* 0053240e: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00532411: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00532414: mov ecx, dword ptr [ecx + eax*4 + 0x194] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x194u));
    /* 0053241b: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0053241d: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 00532420: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x532422u); call_ind(t); }
    /* 00532422: add eax, dword ptr [ebp - 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00532425: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00532426: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00532429: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0053242c: mov eax, dword ptr [edx + ecx*4 + 0x194] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x194u));
    /* 00532433: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00532436: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00532439: mov ecx, dword ptr [edx + ecx*4 + 0x194] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x194u));
    /* 00532440: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00532442: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 00532445: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x532447u); call_ind(t); }
    /* 00532447: jmp 0x5323ce */ goto L_005323ce;
L_00532449:; BB(0x00532449);
    /* 00532449: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00532450: jmp 0x53245b */ goto L_0053245b;
L_00532452:; BB(0x00532452);
    /* 00532452: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00532455: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00532458: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_0053245b:; BB(0x0053245b);
    /* 0053245b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0053245e: cmp ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00532461: jge 0x532488 */ if ((fS==fO)) goto L_00532488;
L_00532463:; BB(0x00532463);
    /* 00532463: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00532466: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00532469: mov ecx, dword ptr [eax + edx*4 + 0x194] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x194u));
    /* 00532470: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00532473: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00532476: mov edx, dword ptr [eax + edx*4 + 0x194] */ r_edx = R32((u32)(r_eax+r_edx*4+0x194u));
    /* 0053247d: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0053247f: mov ecx, edx */ r_ecx = r_edx;
    /* 00532481: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 00532484: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x532486u); call_ind(t); }
    /* 00532486: jmp 0x532452 */ goto L_00532452;
L_00532488:; BB(0x00532488);
    /* 00532488: mov esp, ebp */ r_esp = r_ebp;
    /* 0053248a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053248b: ret  */ FN_RET(0x00532200); r_esp += 4; return;
}

void f_00532490(void) /* sub_532490 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00532490);
    /* 00532490: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00532491: mov ebp, esp */ r_ebp = r_esp;
    /* 00532493: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00532496: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00532499: movsx eax, byte ptr [ebp + 8] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0x8u));
    /* 0053249d: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005324a0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005324a3: sub ecx, 0x24 */ {  u32 a = r_ecx; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005324a6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005324a9: cmp dword ptr [ebp - 8], 0x15 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005324ad: ja 0x532511 */ if ((!fC&&!fZ)) goto L_00532511;
L_005324af:; BB(0x005324af);
    /* 005324af: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005324b2: movzx eax, byte ptr [edx + 0x532550] */ r_eax = (u32)R8((u32)(r_edx+0x532550u));
    /* 005324b9: jmp dword ptr [eax*4 + 0x53251c] */ { u32 t = R32((u32)(r_eax*4+0x53251cu)); switch (t) { case 0x53250au: goto L_0053250a; case 0x532503u: goto L_00532503; case 0x5324c0u: goto L_005324c0; case 0x5324c4u: goto L_005324c4; case 0x5324cbu: goto L_005324cb; case 0x5324d2u: goto L_005324d2; case 0x5324d9u: goto L_005324d9; case 0x5324e0u: goto L_005324e0; case 0x5324e7u: goto L_005324e7; case 0x5324eeu: goto L_005324ee; case 0x5324f5u: goto L_005324f5; case 0x5324fcu: goto L_005324fc; case 0x532511u: goto L_00532511; default: UNSUP(0x005324b9, "jump table entry is not a known target"); } }
L_005324c0:; BB(0x005324c0);
    /* 005324c0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005324c2: jmp 0x532513 */ goto L_00532513;
L_005324c4:; BB(0x005324c4);
    /* 005324c4: mov eax, 1 */ r_eax = 0x1u;
    /* 005324c9: jmp 0x532513 */ goto L_00532513;
L_005324cb:; BB(0x005324cb);
    /* 005324cb: mov eax, 2 */ r_eax = 0x2u;
    /* 005324d0: jmp 0x532513 */ goto L_00532513;
L_005324d2:; BB(0x005324d2);
    /* 005324d2: mov eax, 3 */ r_eax = 0x3u;
    /* 005324d7: jmp 0x532513 */ goto L_00532513;
L_005324d9:; BB(0x005324d9);
    /* 005324d9: mov eax, 4 */ r_eax = 0x4u;
    /* 005324de: jmp 0x532513 */ goto L_00532513;
L_005324e0:; BB(0x005324e0);
    /* 005324e0: mov eax, 5 */ r_eax = 0x5u;
    /* 005324e5: jmp 0x532513 */ goto L_00532513;
L_005324e7:; BB(0x005324e7);
    /* 005324e7: mov eax, 6 */ r_eax = 0x6u;
    /* 005324ec: jmp 0x532513 */ goto L_00532513;
L_005324ee:; BB(0x005324ee);
    /* 005324ee: mov eax, 7 */ r_eax = 0x7u;
    /* 005324f3: jmp 0x532513 */ goto L_00532513;
L_005324f5:; BB(0x005324f5);
    /* 005324f5: mov eax, 8 */ r_eax = 0x8u;
    /* 005324fa: jmp 0x532513 */ goto L_00532513;
L_005324fc:; BB(0x005324fc);
    /* 005324fc: mov eax, 9 */ r_eax = 0x9u;
    /* 00532501: jmp 0x532513 */ goto L_00532513;
L_00532503:; BB(0x00532503);
    /* 00532503: mov eax, 0xa */ r_eax = 0xau;
    /* 00532508: jmp 0x532513 */ goto L_00532513;
L_0053250a:; BB(0x0053250a);
    /* 0053250a: mov eax, 0xb */ r_eax = 0xbu;
    /* 0053250f: jmp 0x532513 */ goto L_00532513;
L_00532511:; BB(0x00532511);
    /* 00532511: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00532513:; BB(0x00532513);
    /* 00532513: mov esp, ebp */ r_esp = r_ebp;
    /* 00532515: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00532516: ret 4 */ FN_RET(0x00532490); r_esp += 8; return;
}

void f_00532570(void) /* sub_532570 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00532570);
    /* 00532570: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00532571: mov ebp, esp */ r_ebp = r_esp;
    /* 00532573: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00532574: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00532577: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053257a: mov byte ptr [eax + 0x184], 0 */ W8((u32)(r_eax+0x184u), 0x0u);
    /* 00532581: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00532584: add ecx, 0x184 */ {  u32 a = r_ecx; u32 b = 0x184u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0053258a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053258b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053258e: call 0x5325a0 */ r_esp -= 4; W32(r_esp, 0x532593u); f_005325a0();
    /* 00532593: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00532594: call 0x6311e0 */ r_esp -= 4; W32(r_esp, 0x532599u); f_006311e0();
    /* 00532599: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053259c: mov esp, ebp */ r_esp = r_ebp;
    /* 0053259e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053259f: ret  */ FN_RET(0x00532570); r_esp += 4; return;
}

void f_005325a0(void) /* sub_5325A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005325a0);
    /* 005325a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005325a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005325a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005325a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005325a7: mov ecx, dword ptr [0x79338c] */ r_ecx = R32((u32)(0x79338cu));
    /* 005325ad: call 0x537260 */ r_esp -= 4; W32(r_esp, 0x5325b2u); f_00537260();
    /* 005325b2: mov esp, ebp */ r_esp = r_ebp;
    /* 005325b4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005325b5: ret  */ FN_RET(0x005325a0); r_esp += 4; return;
}

void f_005325c0(void) /* sub_5325C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005325c0);
    /* 005325c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005325c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005325c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005325c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005325c7: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005325c9: jmp 0x53260f */ goto L_0053260f;
L_0053260f:; BB(0x0053260f);
    /* 0053260f: mov esp, ebp */ r_esp = r_ebp;
    /* 00532611: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00532612: ret  */ FN_RET(0x005325c0); r_esp += 4; return;
}

void f_00532690(void) /* sub_532690 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00532690);
    /* 00532690: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00532691: mov ebp, esp */ r_ebp = r_esp;
    /* 00532693: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00532694: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00532697: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053269a: mov ecx, dword ptr [eax + 0x194] */ r_ecx = R32((u32)(r_eax+0x194u));
    /* 005326a0: call 0x5f54c0 */ r_esp -= 4; W32(r_esp, 0x5326a5u); f_005f54c0();
    /* 005326a5: mov esp, ebp */ r_esp = r_ebp;
    /* 005326a7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005326a8: ret  */ FN_RET(0x00532690); r_esp += 4; return;
}

void f_005326b0(void) /* sub_5326B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005326b0);
    /* 005326b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005326b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005326b3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005326b6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005326b9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005326c0: jmp 0x5326cb */ goto L_005326cb;
L_005326c2:; BB(0x005326c2);
    /* 005326c2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005326c5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005326c8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005326cb:; BB(0x005326cb);
    /* 005326cb: cmp dword ptr [ebp - 4], 0x10 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005326cf: jge 0x5326f4 */ if ((fS==fO)) goto L_005326f4;
L_005326d1:; BB(0x005326d1);
    /* 005326d1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005326d4: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005326d7: mov eax, dword ptr [edx + ecx*4 + 0x194] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x194u));
    /* 005326de: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005326e1: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005326e4: mov ecx, dword ptr [edx + ecx*4 + 0x194] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x194u));
    /* 005326eb: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005326ed: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 005326f0: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5326f2u); call_ind(t); }
    /* 005326f2: jmp 0x5326c2 */ goto L_005326c2;
L_005326f4:; BB(0x005326f4);
    /* 005326f4: mov esp, ebp */ r_esp = r_ebp;
    /* 005326f6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005326f7: ret  */ FN_RET(0x005326b0); r_esp += 4; return;
}

void f_00532700(void) /* sub_532700 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00532700);
    /* 00532700: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00532701: mov ebp, esp */ r_ebp = r_esp;
    /* 00532703: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00532706: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00532709: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0053270c: add eax, 0x184 */ {  u32 a = r_eax; u32 b = 0x184u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00532711: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00532712: call 0x686ecc */ r_esp -= 4; W32(r_esp, 0x532717u); f_00686ecc();
    /* 00532717: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053271a: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0053271d: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00532724: jmp 0x53272f */ goto L_0053272f;
L_00532726:; BB(0x00532726);
    /* 00532726: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00532729: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0053272c: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_0053272f:; BB(0x0053272f);
    /* 0053272f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00532732: cmp edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00532735: jge 0x53275a */ if ((fS==fO)) goto L_0053275a;
L_00532737:; BB(0x00532737);
    /* 00532737: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0053273a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0053273d: mov edx, dword ptr [ecx + eax*4 + 0x194] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x194u));
    /* 00532744: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00532747: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0053274a: mov ecx, dword ptr [ecx + eax*4 + 0x194] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x194u));
    /* 00532751: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00532753: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00532756: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x532758u); call_ind(t); }
    /* 00532758: jmp 0x532726 */ goto L_00532726;
L_0053275a:; BB(0x0053275a);
    /* 0053275a: mov esp, ebp */ r_esp = r_ebp;
    /* 0053275c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053275d: ret  */ FN_RET(0x00532700); r_esp += 4; return;
}

