#include "protos.h"

void f_00571200(void) /* RoadKillSlotTimerScript::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00571200);
    /* 00571200: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00571201: mov ebp, esp */ r_ebp = r_esp;
    /* 00571203: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00571205: push 0x6a604e */ { u32 v = 0x6a604eu; r_esp -= 4; W32(r_esp, v); }
    /* 0057120a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00571210: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00571211: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00571212: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00571217: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00571219: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057121a: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0057121d: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00571223: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00571226: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00571228: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057122b: call 0x5fc0d0 */ r_esp -= 4; W32(r_esp, 0x571230u); f_005fc0d0();
    /* 00571230: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00571237: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057123a: mov dword ptr [eax], 0x6ca720 */ W32((u32)(r_eax), 0x6ca720u);
    /* 00571240: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00571246: call 0x5f3e50 */ r_esp -= 4; W32(r_esp, 0x57124bu); f_005f3e50();
    /* 0057124b: add eax, 0x1c5c */ {  u32 a = r_eax; u32 b = 0x1c5cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00571250: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00571253: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 00571256: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00571259: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0057125c: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 0057125f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00571262: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00571265: mov byte ptr [edx + 0x190], 0 */ W8((u32)(r_edx+0x190u), 0x0u);
    /* 0057126c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00571273: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00571276: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00571279: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00571280: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00571281: mov esp, ebp */ r_esp = r_ebp;
    /* 00571283: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00571284: ret 4 */ FN_RET(0x00571200); r_esp += 8; return;
}

void f_00571290(void) /* RoadKillSlotTimerScript::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00571290);
    /* 00571290: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00571291: mov ebp, esp */ r_ebp = r_esp;
    /* 00571293: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00571294: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00571297: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057129a: mov dword ptr [eax], 0x6ca720 */ W32((u32)(r_eax), 0x6ca720u);
    /* 005712a0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005712a3: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 005712a6: mov byte ptr [edx + 0x190], 1 */ W8((u32)(r_edx+0x190u), 0x1u);
    /* 005712ad: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005712b0: mov dword ptr [eax + 0x20], 0 */ W32((u32)(r_eax+0x20u), 0x0u);
    /* 005712b7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005712ba: call 0x5fc150 */ r_esp -= 4; W32(r_esp, 0x5712bfu); f_005fc150();
    /* 005712bf: mov esp, ebp */ r_esp = r_ebp;
    /* 005712c1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005712c2: ret  */ FN_RET(0x00571290); r_esp += 4; return;
}

void f_005712d0(void) /* RoadKillSlotTimerScript::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005712d0);
    /* 005712d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005712d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005712d3: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005712d6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005712d9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005712dc: call 0x5fc360 */ r_esp -= 4; W32(r_esp, 0x5712e1u); f_005fc360();
    /* 005712e1: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005712e4: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005712e8: je 0x5712ef */ if (fZ) goto L_005712ef;
L_005712ea:; BB(0x005712ea);
    /* 005712ea: jmp 0x5713f7 */ goto L_005713f7;
L_005712ef:; BB(0x005712ef);
    /* 005712ef: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005712f5: call 0x5f3e50 */ r_esp -= 4; W32(r_esp, 0x5712fau); f_005f3e50();
    /* 005712fa: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005712fd: mov edx, dword ptr [ecx + 0x24] */ r_edx = R32((u32)(r_ecx+0x24u));
    /* 00571300: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00571302: mov eax, edx */ r_eax = r_edx;
    /* 00571304: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00571305: mov ecx, 0x3c */ r_ecx = 0x3cu;
    /* 0057130a: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0057130a, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0057130a, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0057130c: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0057130f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00571312: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00571313: mov ecx, 0x3c */ r_ecx = 0x3cu;
    /* 00571318: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00571318, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00571318, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0057131a: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0057131d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00571320: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00571321: mov ecx, 0x3c */ r_ecx = 0x3cu;
    /* 00571326: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00571326, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00571326, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00571328: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0057132b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057132e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057132f: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00571332: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00571335: mov edx, dword ptr [ecx + 0x184] */ r_edx = R32((u32)(r_ecx+0x184u));
    /* 0057133b: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0057133e: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00571341: mov ecx, dword ptr [ecx + 0x184] */ r_ecx = R32((u32)(r_ecx+0x184u));
    /* 00571347: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00571349: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0057134f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x571351u); call_ind(t); }
    /* 00571351: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00571354: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00571355: mov ecx, 0xa */ r_ecx = 0xau;
    /* 0057135a: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0057135a, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0057135a, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0057135c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057135d: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00571360: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 00571363: mov ecx, dword ptr [eax + 0x188] */ r_ecx = R32((u32)(r_eax+0x188u));
    /* 00571369: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0057136c: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 0057136f: mov edx, dword ptr [eax + 0x188] */ r_edx = R32((u32)(r_eax+0x188u));
    /* 00571375: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00571377: mov ecx, edx */ r_ecx = r_edx;
    /* 00571379: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 0057137f: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x571381u); call_ind(t); }
    /* 00571381: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00571384: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00571385: mov ecx, 0xa */ r_ecx = 0xau;
    /* 0057138a: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0057138a, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0057138a, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0057138c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057138d: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00571390: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 00571393: mov ecx, dword ptr [eax + 0x18c] */ r_ecx = R32((u32)(r_eax+0x18cu));
    /* 00571399: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0057139c: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 0057139f: mov edx, dword ptr [eax + 0x18c] */ r_edx = R32((u32)(r_eax+0x18cu));
    /* 005713a5: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005713a7: mov ecx, edx */ r_ecx = r_edx;
    /* 005713a9: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 005713af: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5713b1u); call_ind(t); }
    /* 005713b1: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005713b5: jne 0x5713d7 */ if (!fZ) goto L_005713d7;
L_005713b7:; BB(0x005713b7);
    /* 005713b7: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005713bb: jne 0x5713d7 */ if (!fZ) goto L_005713d7;
L_005713bd:; BB(0x005713bd);
    /* 005713bd: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005713c0: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 005713c3: mov byte ptr [ecx + 0x190], 1 */ W8((u32)(r_ecx+0x190u), 0x1u);
    /* 005713ca: mov ecx, dword ptr [0x793450] */ r_ecx = R32((u32)(0x793450u));
    /* 005713d0: call 0x56f480 */ r_esp -= 4; W32(r_esp, 0x5713d5u); f_0056f480();
    /* 005713d5: jmp 0x5713f5 */ goto L_005713f5;
L_005713d7:; BB(0x005713d7);
    /* 005713d7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005713d9: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005713dc: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005713de: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005713e1: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005713e4: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5713e6u); call_ind(t); }
    /* 005713e6: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005713e8: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005713eb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005713ed: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005713f0: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 005713f3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5713f5u); call_ind(t); }
L_005713f5:; BB(0x005713f5);
    /* 005713f5: jmp 0x571412 */ goto L_00571412;
L_005713f7:; BB(0x005713f7);
    /* 005713f7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 005713f9: jne 0x571412 */ if (!fZ) goto L_00571412;
L_005713fb:; BB(0x005713fb);
    /* 005713fb: push 0x66a */ { u32 v = 0x66au; r_esp -= 4; W32(r_esp, v); }
    /* 00571400: push 0x6ca2b4 */ { u32 v = 0x6ca2b4u; r_esp -= 4; W32(r_esp, v); }
    /* 00571405: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0057140a: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x57140fu); f_005e9f20();
    /* 0057140f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00571412:; BB(0x00571412);
    /* 00571412: mov esp, ebp */ r_esp = r_ebp;
    /* 00571414: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00571415: ret  */ FN_RET(0x005712d0); r_esp += 4; return;
}

