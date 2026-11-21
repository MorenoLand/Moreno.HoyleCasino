#include "protos.h"

void f_005202d0(void) /* PokerRolloverChip::vfunc15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005202d0);
    /* 005202d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005202d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005202d3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005202d6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005202d9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005202dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005202dd: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005202e0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005202e2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005202e5: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 005202eb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5202edu); call_ind(t); }
    /* 005202ed: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005202f0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005202f2: je 0x52030a */ if (fZ) goto L_0052030a;
L_005202f4:; BB(0x005202f4);
    /* 005202f4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005202f7: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x5202fcu); f_005f5400();
    /* 005202fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005202fd: mov ecx, dword ptr [0x793160] */ r_ecx = R32((u32)(0x793160u));
    /* 00520303: call 0x51f790 */ r_esp -= 4; W32(r_esp, 0x520308u); f_0051f790();
    /* 00520308: jmp 0x520361 */ goto L_00520361;
L_0052030a:; BB(0x0052030a);
    /* 0052030a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00520311: jmp 0x52031c */ goto L_0052031c;
L_00520313:; BB(0x00520313);
    /* 00520313: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00520316: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00520319: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0052031c:; BB(0x0052031c);
    /* 0052031c: cmp dword ptr [ebp - 4], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00520320: jge 0x520356 */ if ((fS==fO)) goto L_00520356;
L_00520322:; BB(0x00520322);
    /* 00520322: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00520325: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00520326: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0052032c: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 0052032f: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x520334u); f_005fb300();
    /* 00520334: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00520337: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0052033a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052033b: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052033e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00520340: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00520343: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 00520349: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52034bu); call_ind(t); }
    /* 0052034b: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0052034e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00520350: je 0x520354 */ if (fZ) goto L_00520354;
L_00520352:; BB(0x00520352);
    /* 00520352: jmp 0x52036d */ goto L_0052036d;
L_00520354:; BB(0x00520354);
    /* 00520354: jmp 0x520313 */ goto L_00520313;
L_00520356:; BB(0x00520356);
    /* 00520356: mov ecx, dword ptr [0x793160] */ r_ecx = R32((u32)(0x793160u));
    /* 0052035c: call 0x51f6e0 */ r_esp -= 4; W32(r_esp, 0x520361u); f_0051f6e0();
L_00520361:; BB(0x00520361);
    /* 00520361: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00520364: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00520365: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00520368: call 0x5f4d00 */ r_esp -= 4; W32(r_esp, 0x52036du); f_005f4d00();
L_0052036d:; BB(0x0052036d);
    /* 0052036d: mov esp, ebp */ r_esp = r_ebp;
    /* 0052036f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00520370: ret 4 */ FN_RET(0x005202d0); r_esp += 8; return;
}

void f_006031d0(void) /* PokerRolloverChip::vfunc54 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006031d0);
    /* 006031d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006031d1: mov ebp, esp */ r_ebp = r_esp;
    /* 006031d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006031d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006031d7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006031da: cmp dword ptr [eax + 0x194], 3 */ {  u32 a = R32((u32)(r_eax+0x194u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006031e1: jne 0x603234 */ if (!fZ) goto L_00603234;
L_006031e3:; BB(0x006031e3);
    /* 006031e3: cmp dword ptr [ebp + 8], 1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006031e7: jne 0x603234 */ if (!fZ) goto L_00603234;
L_006031e9:; BB(0x006031e9);
    /* 006031e9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006031ec: cmp dword ptr [ecx + 0x1dc], 0 */ {  u32 a = R32((u32)(r_ecx+0x1dcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006031f3: je 0x60322f */ if (fZ) goto L_0060322f;
L_006031f5:; BB(0x006031f5);
    /* 006031f5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006031f7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006031f8: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 006031fe: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00603201: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00603202: fld1  */ FPUSH(1.0);
    /* 00603204: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00603207: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00603209: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0060320b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060320d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060320f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00603212: mov eax, dword ptr [edx + 0x1dc] */ r_eax = R32((u32)(r_edx+0x1dcu));
    /* 00603218: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00603219: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 0060321f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00603221: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 00603227: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 0060322d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x60322fu); call_ind(t); }
L_0060322f:; BB(0x0060322f);
    /* 0060322f: jmp 0x6032e6 */ goto L_006032e6;
L_00603234:; BB(0x00603234);
    /* 00603234: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00603237: cmp dword ptr [ecx + 0x194], 0 */ {  u32 a = R32((u32)(r_ecx+0x194u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060323e: jne 0x6032e6 */ if (!fZ) goto L_006032e6;
L_00603244:; BB(0x00603244);
    /* 00603244: cmp dword ptr [ebp + 8], 3 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00603248: jne 0x6032e6 */ if (!fZ) goto L_006032e6;
L_0060324e:; BB(0x0060324e);
    /* 0060324e: movzx edx, byte ptr [0x795fbf] */ r_edx = (u32)R8((u32)(0x795fbfu));
    /* 00603255: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00603257: je 0x6032a0 */ if (fZ) goto L_006032a0;
L_00603259:; BB(0x00603259);
    /* 00603259: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060325c: cmp dword ptr [eax + 0x1e4], 0 */ {  u32 a = R32((u32)(r_eax+0x1e4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00603263: je 0x60329e */ if (fZ) goto L_0060329e;
L_00603265:; BB(0x00603265);
    /* 00603265: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00603267: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00603268: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 0060326e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00603271: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00603272: fld1  */ FPUSH(1.0);
    /* 00603274: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00603277: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00603279: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0060327b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060327d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060327f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00603282: mov edx, dword ptr [ecx + 0x1e4] */ r_edx = R32((u32)(r_ecx+0x1e4u));
    /* 00603288: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00603289: mov eax, dword ptr [0x15e55e8] */ r_eax = R32((u32)(0x15e55e8u));
    /* 0060328e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00603290: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 00603296: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 0060329c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x60329eu); call_ind(t); }
L_0060329e:; BB(0x0060329e);
    /* 0060329e: jmp 0x6032e6 */ goto L_006032e6;
L_006032a0:; BB(0x006032a0);
    /* 006032a0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006032a3: cmp dword ptr [ecx + 0x1e0], 0 */ {  u32 a = R32((u32)(r_ecx+0x1e0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006032aa: je 0x6032e6 */ if (fZ) goto L_006032e6;
L_006032ac:; BB(0x006032ac);
    /* 006032ac: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006032ae: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006032af: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 006032b5: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006032b8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006032b9: fld1  */ FPUSH(1.0);
    /* 006032bb: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006032be: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006032c0: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006032c2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006032c4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006032c6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006032c9: mov eax, dword ptr [edx + 0x1e0] */ r_eax = R32((u32)(r_edx+0x1e0u));
    /* 006032cf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006032d0: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 006032d6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006032d8: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 006032de: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 006032e4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6032e6u); call_ind(t); }
L_006032e6:; BB(0x006032e6);
    /* 006032e6: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006032e9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006032ea: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006032ed: call 0x6027d0 */ r_esp -= 4; W32(r_esp, 0x6032f2u); f_006027d0();
    /* 006032f2: mov esp, ebp */ r_esp = r_ebp;
    /* 006032f4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006032f5: ret 4 */ FN_RET(0x006031d0); r_esp += 8; return;
}

