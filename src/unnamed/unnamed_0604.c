#include "protos.h"

void f_006041d0(void) /* sub_6041D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006041d0);
    /* 006041d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006041d1: mov ebp, esp */ r_ebp = r_esp;
    /* 006041d3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006041d6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 006041d9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006041dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006041dd: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006041e0: call 0x604460 */ r_esp -= 4; W32(r_esp, 0x6041e5u); f_00604460();
    /* 006041e5: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 006041e8: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006041ec: je 0x604208 */ if (fZ) goto L_00604208;
L_006041ee:; BB(0x006041ee);
    /* 006041ee: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006041f1: cmp dword ptr [ecx + 0xc], 0 */ {  u32 a = R32((u32)(r_ecx+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006041f5: jle 0x604206 */ if ((fZ||fS!=fO)) goto L_00604206;
L_006041f7:; BB(0x006041f7);
    /* 006041f7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006041fa: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 006041fd: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00604200: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00604203: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
L_00604206:; BB(0x00604206);
    /* 00604206: jmp 0x604215 */ goto L_00604215;
L_00604208:; BB(0x00604208);
    /* 00604208: push 0x6d782c */ { u32 v = 0x6d782cu; r_esp -= 4; W32(r_esp, v); }
    /* 0060420d: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x604212u); f_0062fde0();
    /* 00604212: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00604215:; BB(0x00604215);
    /* 00604215: mov esp, ebp */ r_esp = r_ebp;
    /* 00604217: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00604218: ret 4 */ FN_RET(0x006041d0); r_esp += 8; return;
}

void f_00604220(void) /* sub_604220 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00604220);
    /* 00604220: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00604221: mov ebp, esp */ r_ebp = r_esp;
    /* 00604223: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00604226: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00604229: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0060422c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060422d: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00604230: call 0x604460 */ r_esp -= 4; W32(r_esp, 0x604235u); f_00604460();
    /* 00604235: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00604238: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060423c: je 0x6042a8 */ if (fZ) goto L_006042a8;
L_0060423e:; BB(0x0060423e);
    /* 0060423e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00604241: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00604242: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00604245: add ecx, 0x28 */ {  u32 a = r_ecx; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00604248: call 0x62ab60 */ r_esp -= 4; W32(r_esp, 0x60424du); f_0062ab60();
    /* 0060424d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00604250: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00604253: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00604256: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00604259: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0060425c: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604260: je 0x604275 */ if (fZ) goto L_00604275;
L_00604262:; BB(0x00604262);
    /* 00604262: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00604264: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00604267: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00604269: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060426c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0060426e: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x604270u); call_ind(t); }
    /* 00604270: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00604273: jmp 0x60427c */ goto L_0060427c;
L_00604275:; BB(0x00604275);
    /* 00604275: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_0060427c:; BB(0x0060427c);
    /* 0060427c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060427f: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00604282: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00604285: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00604288: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060428c: je 0x6042a1 */ if (fZ) goto L_006042a1;
L_0060428e:; BB(0x0060428e);
    /* 0060428e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00604290: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00604293: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00604295: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00604298: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0060429a: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x60429cu); call_ind(t); }
    /* 0060429c: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0060429f: jmp 0x6042a8 */ goto L_006042a8;
L_006042a1:; BB(0x006042a1);
    /* 006042a1: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_006042a8:; BB(0x006042a8);
    /* 006042a8: mov esp, ebp */ r_esp = r_ebp;
    /* 006042aa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006042ab: ret 4 */ FN_RET(0x00604220); r_esp += 8; return;
}

void f_006042b0(void) /* sub_6042B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006042b0);
    /* 006042b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006042b1: mov ebp, esp */ r_ebp = r_esp;
    /* 006042b3: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006042b6: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 006042b9: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006042bc: add ecx, 0x28 */ {  u32 a = r_ecx; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006042bf: call 0x62ac30 */ r_esp -= 4; W32(r_esp, 0x6042c4u); f_0062ac30();
    /* 006042c4: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_006042c7:; BB(0x006042c7);
    /* 006042c7: mov eax, dword ptr [0x7950a8] */ r_eax = R32((u32)(0x7950a8u));
    /* 006042cc: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006042cf: jle 0x60438c */ if ((fZ||fS!=fO)) goto L_0060438c;
L_006042d5:; BB(0x006042d5);
    /* 006042d5: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006042d9: je 0x60438c */ if (fZ) goto L_0060438c;
L_006042df:; BB(0x006042df);
    /* 006042df: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006042e2: cmp dword ptr [ecx + 0xc], 0 */ {  u32 a = R32((u32)(r_ecx+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006042e6: jne 0x604379 */ if (!fZ) goto L_00604379;
L_006042ec:; BB(0x006042ec);
    /* 006042ec: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006042f0: je 0x6042ff */ if (fZ) goto L_006042ff;
L_006042f2:; BB(0x006042f2);
    /* 006042f2: push 0x6d784c */ { u32 v = 0x6d784cu; r_esp -= 4; W32(r_esp, v); }
    /* 006042f7: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x6042fcu); f_0062fde0();
    /* 006042fc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006042ff:; BB(0x006042ff);
    /* 006042ff: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00604302: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00604303: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00604306: add ecx, 0x28 */ {  u32 a = r_ecx; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00604309: call 0x62ab60 */ r_esp -= 4; W32(r_esp, 0x60430eu); f_0062ab60();
    /* 0060430e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00604311: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00604314: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00604317: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060431a: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0060431d: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604321: je 0x604336 */ if (fZ) goto L_00604336;
L_00604323:; BB(0x00604323);
    /* 00604323: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00604325: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00604328: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0060432a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060432d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0060432f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x604331u); call_ind(t); }
    /* 00604331: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00604334: jmp 0x60433d */ goto L_0060433d;
L_00604336:; BB(0x00604336);
    /* 00604336: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_0060433d:; BB(0x0060433d);
    /* 0060433d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00604340: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00604343: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00604346: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00604349: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060434d: je 0x604362 */ if (fZ) goto L_00604362;
L_0060434f:; BB(0x0060434f);
    /* 0060434f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00604351: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00604354: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00604356: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00604359: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0060435b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x60435du); call_ind(t); }
    /* 0060435d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00604360: jmp 0x604369 */ goto L_00604369;
L_00604362:; BB(0x00604362);
    /* 00604362: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_00604369:; BB(0x00604369);
    /* 00604369: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0060436c: add ecx, 0x28 */ {  u32 a = r_ecx; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0060436f: call 0x62ac30 */ r_esp -= 4; W32(r_esp, 0x604374u); f_0062ac30();
    /* 00604374: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00604377: jmp 0x604387 */ goto L_00604387;
L_00604379:; BB(0x00604379);
    /* 00604379: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0060437c: add ecx, 0x28 */ {  u32 a = r_ecx; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0060437f: call 0x62ace0 */ r_esp -= 4; W32(r_esp, 0x604384u); f_0062ace0();
    /* 00604384: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00604387:; BB(0x00604387);
    /* 00604387: jmp 0x6042c7 */ goto L_006042c7;
L_0060438c:; BB(0x0060438c);
    /* 0060438c: mov esp, ebp */ r_esp = r_ebp;
    /* 0060438e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060438f: ret 4 */ FN_RET(0x006042b0); r_esp += 8; return;
}

void f_006043a0(void) /* sub_6043A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006043a0);
    /* 006043a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006043a1: mov ebp, esp */ r_ebp = r_esp;
    /* 006043a3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006043a6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 006043a9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006043ac: add ecx, 0x28 */ {  u32 a = r_ecx; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006043af: call 0x62ac30 */ r_esp -= 4; W32(r_esp, 0x6043b4u); f_0062ac30();
    /* 006043b4: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_006043b7:; BB(0x006043b7);
    /* 006043b7: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006043bb: je 0x6043e9 */ if (fZ) goto L_006043e9;
L_006043bd:; BB(0x006043bd);
    /* 006043bd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006043c0: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 006043c3: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 006043c6: cmp edx, dword ptr [ebp + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006043c9: jne 0x6043d9 */ if (!fZ) goto L_006043d9;
L_006043cb:; BB(0x006043cb);
    /* 006043cb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006043ce: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 006043d1: mov edx, dword ptr [ecx + 0x34] */ r_edx = R32((u32)(r_ecx+0x34u));
    /* 006043d4: cmp edx, dword ptr [ebp + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006043d7: je 0x6043e9 */ if (fZ) goto L_006043e9;
L_006043d9:; BB(0x006043d9);
    /* 006043d9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006043dc: add ecx, 0x28 */ {  u32 a = r_ecx; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006043df: call 0x62ace0 */ r_esp -= 4; W32(r_esp, 0x6043e4u); f_0062ace0();
    /* 006043e4: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 006043e7: jmp 0x6043b7 */ goto L_006043b7;
L_006043e9:; BB(0x006043e9);
    /* 006043e9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006043ec: mov esp, ebp */ r_esp = r_ebp;
    /* 006043ee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006043ef: ret 8 */ FN_RET(0x006043a0); r_esp += 12; return;
}

void f_00604400(void) /* sub_604400 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00604400);
    /* 00604400: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00604401: mov ebp, esp */ r_ebp = r_esp;
    /* 00604403: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00604406: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00604409: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060440c: add ecx, 0x28 */ {  u32 a = r_ecx; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0060440f: call 0x62ac30 */ r_esp -= 4; W32(r_esp, 0x604414u); f_0062ac30();
    /* 00604414: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00604417:; BB(0x00604417);
    /* 00604417: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060441b: je 0x604455 */ if (fZ) goto L_00604455;
L_0060441d:; BB(0x0060441d);
    /* 0060441d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00604420: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00604423: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 00604426: cmp edx, dword ptr [ebp + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604429: jne 0x604445 */ if (!fZ) goto L_00604445;
L_0060442b:; BB(0x0060442b);
    /* 0060442b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0060442e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060442f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00604432: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 00604435: add edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00604438: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00604439: call 0x686ec0 */ r_esp -= 4; W32(r_esp, 0x60443eu); f_00686ec0();
    /* 0060443e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00604441: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604443: je 0x604455 */ if (fZ) goto L_00604455;
L_00604445:; BB(0x00604445);
    /* 00604445: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00604448: add ecx, 0x28 */ {  u32 a = r_ecx; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0060444b: call 0x62ace0 */ r_esp -= 4; W32(r_esp, 0x604450u); f_0062ace0();
    /* 00604450: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00604453: jmp 0x604417 */ goto L_00604417;
L_00604455:; BB(0x00604455);
    /* 00604455: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00604458: mov esp, ebp */ r_esp = r_ebp;
    /* 0060445a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060445b: ret 8 */ FN_RET(0x00604400); r_esp += 12; return;
}

void f_00604460(void) /* sub_604460 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00604460);
    /* 00604460: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00604461: mov ebp, esp */ r_ebp = r_esp;
    /* 00604463: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00604466: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00604469: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060446c: add ecx, 0x28 */ {  u32 a = r_ecx; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0060446f: call 0x62ac30 */ r_esp -= 4; W32(r_esp, 0x604474u); f_0062ac30();
    /* 00604474: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00604477:; BB(0x00604477);
    /* 00604477: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060447b: je 0x604498 */ if (fZ) goto L_00604498;
L_0060447d:; BB(0x0060447d);
    /* 0060447d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00604480: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00604483: cmp ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604486: je 0x604498 */ if (fZ) goto L_00604498;
L_00604488:; BB(0x00604488);
    /* 00604488: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060448b: add ecx, 0x28 */ {  u32 a = r_ecx; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0060448e: call 0x62ace0 */ r_esp -= 4; W32(r_esp, 0x604493u); f_0062ace0();
    /* 00604493: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00604496: jmp 0x604477 */ goto L_00604477;
L_00604498:; BB(0x00604498);
    /* 00604498: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060449b: mov esp, ebp */ r_esp = r_ebp;
    /* 0060449d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060449e: ret 4 */ FN_RET(0x00604460); r_esp += 8; return;
}

void f_006044b0(void) /* sub_6044B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006044b0);
    /* 006044b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006044b1: mov ebp, esp */ r_ebp = r_esp;
    /* 006044b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006044b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006044b7: mov al, byte ptr [ebp + 0x10] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x10u))) & 0xffu);
    /* 006044ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006044bb: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 006044be: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006044bf: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006044c2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006044c3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006044c6: call 0x603c50 */ r_esp -= 4; W32(r_esp, 0x6044cbu); f_00603c50();
    /* 006044cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006044cc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006044cf: call 0x6041d0 */ r_esp -= 4; W32(r_esp, 0x6044d4u); f_006041d0();
    /* 006044d4: mov esp, ebp */ r_esp = r_ebp;
    /* 006044d6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006044d7: ret 0xc */ FN_RET(0x006044b0); r_esp += 16; return;
}

void f_00604500(void) /* sub_604500 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00604500);
    /* 00604500: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00604501: mov ebp, esp */ r_ebp = r_esp;
    /* 00604503: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00604505: push 0x6aaad1 */ { u32 v = 0x6aaad1u; r_esp -= 4; W32(r_esp, v); }
    /* 0060450a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00604510: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00604511: sub esp, 0x534 */ {  u32 a = r_esp; u32 b = 0x534u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00604517: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0060451c: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0060451e: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00604521: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00604522: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00604525: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0060452b: mov dword ptr [ebp - 0x538], ecx */ W32((u32)(r_ebp+0xfffffac8u), r_ecx);
    /* 00604531: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00604538: jmp 0x604543 */ goto L_00604543;
L_0060453a:; BB(0x0060453a);
    /* 0060453a: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0060453d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00604540: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_00604543:; BB(0x00604543);
    /* 00604543: cmp dword ptr [ebp - 0x10], 0xc8 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xc8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060454a: jge 0x6046aa */ if ((fS==fO)) goto L_006046aa;
L_00604550:; BB(0x00604550);
    /* 00604550: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00604553: cmp dword ptr [ecx*4 + 0x796720], 0 */ {  u32 a = R32((u32)(r_ecx*4+0x796720u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060455b: je 0x604579 */ if (fZ) goto L_00604579;
L_0060455d:; BB(0x0060455d);
    /* 0060455d: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00604560: mov eax, dword ptr [edx*4 + 0x796720] */ r_eax = R32((u32)(r_edx*4+0x796720u));
    /* 00604567: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00604568: lea ecx, [ebp - 0x124] */ r_ecx = (u32)(r_ebp+0xfffffedcu);
    /* 0060456e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060456f: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x604574u); f_00686d8e();
    /* 00604574: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00604577: jmp 0x60457e */ goto L_0060457e;
L_00604579:; BB(0x00604579);
    /* 00604579: jmp 0x6046aa */ goto L_006046aa;
L_0060457e:; BB(0x0060457e);
    /* 0060457e: lea edx, [ebp - 0x124] */ r_edx = (u32)(r_ebp+0xfffffedcu);
    /* 00604584: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00604585: call 0x5ea540 */ r_esp -= 4; W32(r_esp, 0x60458au); f_005ea540();
    /* 0060458a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060458d: lea eax, [ebp - 0x124] */ r_eax = (u32)(r_ebp+0xfffffedcu);
    /* 00604593: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00604594: lea ecx, [ebp - 0x2b4] */ r_ecx = (u32)(r_ebp+0xfffffd4cu);
    /* 0060459a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060459b: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x6045a0u); f_00686d8e();
    /* 006045a0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006045a3: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006045a6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006045a7: lea eax, [ebp - 0x2b4] */ r_eax = (u32)(r_ebp+0xfffffd4cu);
    /* 006045ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006045ae: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x6045b3u); f_00686ec6();
    /* 006045b3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006045b6: push 0x6c2d28 */ { u32 v = 0x6c2d28u; r_esp -= 4; W32(r_esp, v); }
    /* 006045bb: lea ecx, [ebp - 0x2b4] */ r_ecx = (u32)(r_ebp+0xfffffd4cu);
    /* 006045c1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006045c2: call 0x5ea9c0 */ r_esp -= 4; W32(r_esp, 0x6045c7u); f_005ea9c0();
    /* 006045c7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006045ca: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006045cd: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006045d1: je 0x60469c */ if (fZ) goto L_0060469c;
L_006045d7:; BB(0x006045d7);
    /* 006045d7: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006045da: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006045db: call dword ptr [0x6b2258] */ { u32 t = R32((u32)(0x6b2258u)); r_esp -= 4; W32(r_esp, 0x6045e1u); call_ind(t); }
    /* 006045e1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006045e4: push 0x11c */ { u32 v = 0x11cu; r_esp -= 4; W32(r_esp, v); }
    /* 006045e9: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x6045eeu); f_00686d82();
    /* 006045ee: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006045f1: mov dword ptr [ebp - 0x52c], eax */ W32((u32)(r_ebp+0xfffffad4u), r_eax);
    /* 006045f7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006045fe: cmp dword ptr [ebp - 0x52c], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffad4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604605: je 0x60461a */ if (fZ) goto L_0060461a;
L_00604607:; BB(0x00604607);
    /* 00604607: mov ecx, dword ptr [ebp - 0x52c] */ r_ecx = R32((u32)(r_ebp+0xfffffad4u));
    /* 0060460d: call 0x62af50 */ r_esp -= 4; W32(r_esp, 0x604612u); f_0062af50();
    /* 00604612: mov dword ptr [ebp - 0x53c], eax */ W32((u32)(r_ebp+0xfffffac4u), r_eax);
    /* 00604618: jmp 0x604624 */ goto L_00604624;
L_0060461a:; BB(0x0060461a);
    /* 0060461a: mov dword ptr [ebp - 0x53c], 0 */ W32((u32)(r_ebp+0xfffffac4u), 0x0u);
L_00604624:; BB(0x00604624);
    /* 00604624: mov eax, dword ptr [ebp - 0x53c] */ r_eax = R32((u32)(r_ebp+0xfffffac4u));
    /* 0060462a: mov dword ptr [ebp - 0x528], eax */ W32((u32)(r_ebp+0xfffffad8u), r_eax);
    /* 00604630: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00604637: mov ecx, dword ptr [ebp - 0x528] */ r_ecx = R32((u32)(r_ebp+0xfffffad8u));
    /* 0060463d: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00604640: push 0x6c2d28 */ { u32 v = 0x6c2d28u; r_esp -= 4; W32(r_esp, v); }
    /* 00604645: lea edx, [ebp - 0x2b4] */ r_edx = (u32)(r_ebp+0xfffffd4cu);
    /* 0060464b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060464c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0060464f: call 0x62b0a0 */ r_esp -= 4; W32(r_esp, 0x604654u); f_0062b0a0();
    /* 00604654: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00604657: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00604658: mov ecx, dword ptr [ebp - 0x538] */ r_ecx = R32((u32)(r_ebp+0xfffffac8u));
    /* 0060465e: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00604661: call 0x62aa70 */ r_esp -= 4; W32(r_esp, 0x604666u); f_0062aa70();
    /* 00604666: movzx ecx, byte ptr [0x795fb4] */ r_ecx = (u32)R8((u32)(0x795fb4u));
    /* 0060466d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060466f: je 0x60469c */ if (fZ) goto L_0060469c;
L_00604671:; BB(0x00604671);
    /* 00604671: lea edx, [ebp - 0x2b4] */ r_edx = (u32)(r_ebp+0xfffffd4cu);
    /* 00604677: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00604678: push 0x6d7818 */ { u32 v = 0x6d7818u; r_esp -= 4; W32(r_esp, v); }
    /* 0060467d: lea eax, [ebp - 0x3ec] */ r_eax = (u32)(r_ebp+0xfffffc14u);
    /* 00604683: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00604684: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x60468au); call_ind(t); }
    /* 0060468a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060468d: lea ecx, [ebp - 0x3ec] */ r_ecx = (u32)(r_ebp+0xfffffc14u);
    /* 00604693: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00604694: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x604699u); f_0062fde0();
    /* 00604699: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0060469c:; BB(0x0060469c);
    /* 0060469c: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0060469f: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006046a2: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 006046a5: jmp 0x60453a */ goto L_0060453a;
L_006046aa:; BB(0x006046aa);
    /* 006046aa: mov byte ptr [ebp - 0x2b4], 0 */ W8((u32)(r_ebp+0xfffffd4cu), 0x0u);
    /* 006046b1: movsx eax, byte ptr [0x795f6c] */ r_eax = (u32)(i32)(i8)R8((u32)(0x795f6cu));
    /* 006046b8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006046ba: je 0x6046e3 */ if (fZ) goto L_006046e3;
L_006046bc:; BB(0x006046bc);
    /* 006046bc: mov cl, byte ptr [0x795f6c] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(0x795f6cu))) & 0xffu);
    /* 006046c2: mov byte ptr [ebp - 0x2b4], cl */ W8((u32)(r_ebp+0xfffffd4cu), (u8)r_ecx);
    /* 006046c8: mov byte ptr [ebp - 0x2b3], 0 */ W8((u32)(r_ebp+0xfffffd4du), 0x0u);
    /* 006046cf: push 0x6d7814 */ { u32 v = 0x6d7814u; r_esp -= 4; W32(r_esp, v); }
    /* 006046d4: lea edx, [ebp - 0x2b4] */ r_edx = (u32)(r_ebp+0xfffffd4cu);
    /* 006046da: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006046db: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x6046e0u); f_00686ec6();
    /* 006046e0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006046e3:; BB(0x006046e3);
    /* 006046e3: movsx eax, byte ptr [ebp - 0x2b4] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0xfffffd4cu));
    /* 006046ea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006046ec: je 0x6047eb */ if (fZ) goto L_006047eb;
L_006046f2:; BB(0x006046f2);
    /* 006046f2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006046f5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006046f6: lea edx, [ebp - 0x2b4] */ r_edx = (u32)(r_ebp+0xfffffd4cu);
    /* 006046fc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006046fd: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x604702u); f_00686ec6();
    /* 00604702: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00604705: push 0x6c2d28 */ { u32 v = 0x6c2d28u; r_esp -= 4; W32(r_esp, v); }
    /* 0060470a: lea eax, [ebp - 0x2b4] */ r_eax = (u32)(r_ebp+0xfffffd4cu);
    /* 00604710: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00604711: call 0x5ea9c0 */ r_esp -= 4; W32(r_esp, 0x604716u); f_005ea9c0();
    /* 00604716: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00604719: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0060471c: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604720: je 0x6047eb */ if (fZ) goto L_006047eb;
L_00604726:; BB(0x00604726);
    /* 00604726: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00604729: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060472a: call dword ptr [0x6b2258] */ { u32 t = R32((u32)(0x6b2258u)); r_esp -= 4; W32(r_esp, 0x604730u); call_ind(t); }
    /* 00604730: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00604733: push 0x11c */ { u32 v = 0x11cu; r_esp -= 4; W32(r_esp, v); }
    /* 00604738: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x60473du); f_00686d82();
    /* 0060473d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00604740: mov dword ptr [ebp - 0x534], eax */ W32((u32)(r_ebp+0xfffffaccu), r_eax);
    /* 00604746: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0060474d: cmp dword ptr [ebp - 0x534], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffaccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604754: je 0x604769 */ if (fZ) goto L_00604769;
L_00604756:; BB(0x00604756);
    /* 00604756: mov ecx, dword ptr [ebp - 0x534] */ r_ecx = R32((u32)(r_ebp+0xfffffaccu));
    /* 0060475c: call 0x62af50 */ r_esp -= 4; W32(r_esp, 0x604761u); f_0062af50();
    /* 00604761: mov dword ptr [ebp - 0x540], eax */ W32((u32)(r_ebp+0xfffffac0u), r_eax);
    /* 00604767: jmp 0x604773 */ goto L_00604773;
L_00604769:; BB(0x00604769);
    /* 00604769: mov dword ptr [ebp - 0x540], 0 */ W32((u32)(r_ebp+0xfffffac0u), 0x0u);
L_00604773:; BB(0x00604773);
    /* 00604773: mov edx, dword ptr [ebp - 0x540] */ r_edx = R32((u32)(r_ebp+0xfffffac0u));
    /* 00604779: mov dword ptr [ebp - 0x530], edx */ W32((u32)(r_ebp+0xfffffad0u), r_edx);
    /* 0060477f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00604786: mov eax, dword ptr [ebp - 0x530] */ r_eax = R32((u32)(r_ebp+0xfffffad0u));
    /* 0060478c: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0060478f: push 0x6c2d28 */ { u32 v = 0x6c2d28u; r_esp -= 4; W32(r_esp, v); }
    /* 00604794: lea ecx, [ebp - 0x2b4] */ r_ecx = (u32)(r_ebp+0xfffffd4cu);
    /* 0060479a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060479b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0060479e: call 0x62b0a0 */ r_esp -= 4; W32(r_esp, 0x6047a3u); f_0062b0a0();
    /* 006047a3: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006047a6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006047a7: mov ecx, dword ptr [ebp - 0x538] */ r_ecx = R32((u32)(r_ebp+0xfffffac8u));
    /* 006047ad: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006047b0: call 0x62aa20 */ r_esp -= 4; W32(r_esp, 0x6047b5u); f_0062aa20();
    /* 006047b5: movzx eax, byte ptr [0x795fb4] */ r_eax = (u32)R8((u32)(0x795fb4u));
    /* 006047bc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006047be: je 0x6047eb */ if (fZ) goto L_006047eb;
L_006047c0:; BB(0x006047c0);
    /* 006047c0: lea ecx, [ebp - 0x2b4] */ r_ecx = (u32)(r_ebp+0xfffffd4cu);
    /* 006047c6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006047c7: push 0x6d7818 */ { u32 v = 0x6d7818u; r_esp -= 4; W32(r_esp, v); }
    /* 006047cc: lea edx, [ebp - 0x524] */ r_edx = (u32)(r_ebp+0xfffffadcu);
    /* 006047d2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006047d3: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x6047d9u); call_ind(t); }
    /* 006047d9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006047dc: lea eax, [ebp - 0x524] */ r_eax = (u32)(r_ebp+0xfffffadcu);
    /* 006047e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006047e3: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x6047e8u); f_0062fde0();
    /* 006047e8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006047eb:; BB(0x006047eb);
    /* 006047eb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006047ee: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006047f5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006047f6: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006047f9: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006047fb: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x604800u); f_00686d72();
    /* 00604800: mov esp, ebp */ r_esp = r_ebp;
    /* 00604802: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00604803: ret 4 */ FN_RET(0x00604500); r_esp += 8; return;
}

void f_006048c0(void) /* sub_6048C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006048c0);
    /* 006048c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006048c1: mov ebp, esp */ r_ebp = r_esp;
    /* 006048c3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006048c6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006048cd: jmp 0x6048d8 */ goto L_006048d8;
L_006048cf:; BB(0x006048cf);
    /* 006048cf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006048d2: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006048d5: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_006048d8:; BB(0x006048d8);
    /* 006048d8: cmp dword ptr [ebp - 4], 0xc8 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xc8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006048df: jge 0x604909 */ if ((fS==fO)) goto L_00604909;
L_006048e1:; BB(0x006048e1);
    /* 006048e1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006048e4: cmp dword ptr [ecx*4 + 0x796720], 0 */ {  u32 a = R32((u32)(r_ecx*4+0x796720u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006048ec: je 0x604907 */ if (fZ) goto L_00604907;
L_006048ee:; BB(0x006048ee);
    /* 006048ee: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006048f1: mov eax, dword ptr [edx*4 + 0x796720] */ r_eax = R32((u32)(r_edx*4+0x796720u));
    /* 006048f8: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 006048fb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006048fe: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006048ff: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x604904u); f_00686cae();
    /* 00604904: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00604907:; BB(0x00604907);
    /* 00604907: jmp 0x6048cf */ goto L_006048cf;
L_00604909:; BB(0x00604909);
    /* 00604909: mov esp, ebp */ r_esp = r_ebp;
    /* 0060490b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060490c: ret  */ FN_RET(0x006048c0); r_esp += 4; return;
}

void f_006049c0(void) /* sub_6049C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006049c0);
    /* 006049c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006049c1: mov ebp, esp */ r_ebp = r_esp;
    /* 006049c3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006049c6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006049cd: jmp 0x6049d8 */ goto L_006049d8;
L_006049cf:; BB(0x006049cf);
    /* 006049cf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006049d2: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006049d5: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_006049d8:; BB(0x006049d8);
    /* 006049d8: cmp dword ptr [ebp - 4], 0xc8 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xc8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006049df: jge 0x604a17 */ if ((fS==fO)) goto L_00604a17;
L_006049e1:; BB(0x006049e1);
    /* 006049e1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006049e4: cmp dword ptr [ecx*4 + 0x796400], 0 */ {  u32 a = R32((u32)(r_ecx*4+0x796400u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006049ec: je 0x604a15 */ if (fZ) goto L_00604a15;
L_006049ee:; BB(0x006049ee);
    /* 006049ee: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006049f1: mov eax, dword ptr [edx*4 + 0x796400] */ r_eax = R32((u32)(r_edx*4+0x796400u));
    /* 006049f8: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 006049fb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006049fe: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006049ff: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x604a04u); f_00686cae();
    /* 00604a04: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00604a07: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00604a0a: mov dword ptr [edx*4 + 0x796400], 0 */ W32((u32)(r_edx*4+0x796400u), 0x0u);
L_00604a15:; BB(0x00604a15);
    /* 00604a15: jmp 0x6049cf */ goto L_006049cf;
L_00604a17:; BB(0x00604a17);
    /* 00604a17: mov esp, ebp */ r_esp = r_ebp;
    /* 00604a19: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00604a1a: ret  */ FN_RET(0x006049c0); r_esp += 4; return;
}

void f_00604af0(void) /* sub_604AF0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00604af0);
    /* 00604af0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00604af1: mov ebp, esp */ r_ebp = r_esp;
    /* 00604af3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00604af6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00604afd: jmp 0x604b08 */ goto L_00604b08;
L_00604aff:; BB(0x00604aff);
    /* 00604aff: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00604b02: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00604b05: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00604b08:; BB(0x00604b08);
    /* 00604b08: cmp dword ptr [ebp - 4], 0xc8 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xc8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00604b0f: jge 0x604b47 */ if ((fS==fO)) goto L_00604b47;
L_00604b11:; BB(0x00604b11);
    /* 00604b11: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00604b14: cmp dword ptr [ecx*4 + 0x7960e0], 0 */ {  u32 a = R32((u32)(r_ecx*4+0x7960e0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604b1c: je 0x604b45 */ if (fZ) goto L_00604b45;
L_00604b1e:; BB(0x00604b1e);
    /* 00604b1e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00604b21: mov eax, dword ptr [edx*4 + 0x7960e0] */ r_eax = R32((u32)(r_edx*4+0x7960e0u));
    /* 00604b28: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00604b2b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00604b2e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00604b2f: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x604b34u); f_00686cae();
    /* 00604b34: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00604b37: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00604b3a: mov dword ptr [edx*4 + 0x7960e0], 0 */ W32((u32)(r_edx*4+0x7960e0u), 0x0u);
L_00604b45:; BB(0x00604b45);
    /* 00604b45: jmp 0x604aff */ goto L_00604aff;
L_00604b47:; BB(0x00604b47);
    /* 00604b47: mov esp, ebp */ r_esp = r_ebp;
    /* 00604b49: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00604b4a: ret  */ FN_RET(0x00604af0); r_esp += 4; return;
}

void f_00604d80(void) /* sub_604D80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00604d80);
    /* 00604d80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00604d81: mov ebp, esp */ r_ebp = r_esp;
    /* 00604d83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00604d84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00604d87: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00604d8a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00604d8c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00604d8f: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 00604d92: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x604d94u); call_ind(t); }
    /* 00604d94: mov ecx, dword ptr [ebp + 0x34] */ r_ecx = R32((u32)(r_ebp+0x34u));
    /* 00604d97: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00604d98: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00604d9b: call 0x5f53e0 */ r_esp -= 4; W32(r_esp, 0x604da0u); f_005f53e0();
    /* 00604da0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00604da3: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 00604da6: mov dword ptr [edx + 0x80], eax */ W32((u32)(r_edx+0x80u), r_eax);
    /* 00604dac: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00604daf: mov edx, dword ptr [ebp + 0x2c] */ r_edx = R32((u32)(r_ebp+0x2cu));
    /* 00604db2: mov dword ptr [ecx + 0x50], edx */ W32((u32)(r_ecx+0x50u), r_edx);
    /* 00604db5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00604db8: mov ecx, dword ptr [ebp + 0x30] */ r_ecx = R32((u32)(r_ebp+0x30u));
    /* 00604dbb: mov dword ptr [eax + 0x54], ecx */ W32((u32)(r_eax+0x54u), r_ecx);
    /* 00604dbe: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00604dc1: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 00604dc4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00604dc7: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00604dca: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 00604dcd: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00604dcf: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00604dd2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00604dd3: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00604dd6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00604dd7: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00604dda: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00604ddb: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00604dde: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00604ddf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00604de2: mov ecx, dword ptr [ecx + 0x4c] */ r_ecx = R32((u32)(r_ecx+0x4cu));
    /* 00604de5: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x604deau); f_005eae80();
    /* 00604dea: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00604ded: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 00604df0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00604df3: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00604df6: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 00604df9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00604dfc: call 0x6050f0 */ r_esp -= 4; W32(r_esp, 0x604e01u); f_006050f0();
    /* 00604e01: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00604e04: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604e06: je 0x604e57 */ if (fZ) goto L_00604e57;
L_00604e08:; BB(0x00604e08);
    /* 00604e08: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00604e0b: add ecx, dword ptr [ebp + 0x20] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x20u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00604e0e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00604e11: mov dword ptr [edx + 0x5c], ecx */ W32((u32)(r_edx+0x5cu), r_ecx);
    /* 00604e14: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00604e17: add eax, dword ptr [ebp + 0x24] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x24u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00604e1a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00604e1d: mov dword ptr [ecx + 0x60], eax */ W32((u32)(r_ecx+0x60u), r_eax);
    /* 00604e20: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00604e23: mov dword ptr [edx + 0x68], 0 */ W32((u32)(r_edx+0x68u), 0x0u);
    /* 00604e2a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00604e2d: mov dword ptr [eax + 0x64], 0 */ W32((u32)(r_eax+0x64u), 0x0u);
    /* 00604e34: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00604e36: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 00604e39: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00604e3c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00604e3d: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00604e40: add edx, dword ptr [ebp + 0x1c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x1cu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00604e43: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00604e44: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00604e46: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 00604e49: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00604e4a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00604e4d: mov ecx, dword ptr [ecx + 0x48] */ r_ecx = R32((u32)(r_ecx+0x48u));
    /* 00604e50: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x604e55u); f_005eae80();
    /* 00604e55: jmp 0x604ea4 */ goto L_00604ea4;
L_00604e57:; BB(0x00604e57);
    /* 00604e57: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00604e5a: add edx, dword ptr [ebp + 0x20] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x20u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00604e5d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00604e60: mov dword ptr [eax + 0x64], edx */ W32((u32)(r_eax+0x64u), r_edx);
    /* 00604e63: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00604e66: add ecx, dword ptr [ebp + 0x24] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x24u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00604e69: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00604e6c: mov dword ptr [edx + 0x68], ecx */ W32((u32)(r_edx+0x68u), r_ecx);
    /* 00604e6f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00604e72: mov dword ptr [eax + 0x60], 0 */ W32((u32)(r_eax+0x60u), 0x0u);
    /* 00604e79: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00604e7c: mov dword ptr [ecx + 0x5c], 0 */ W32((u32)(r_ecx+0x5cu), 0x0u);
    /* 00604e83: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00604e85: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 00604e88: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00604e8b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00604e8c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00604e8e: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00604e91: add eax, dword ptr [ebp + 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x1cu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00604e94: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00604e95: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 00604e98: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00604e99: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00604e9c: mov ecx, dword ptr [edx + 0x48] */ r_ecx = R32((u32)(r_edx+0x48u));
    /* 00604e9f: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x604ea4u); f_005eae80();
L_00604ea4:; BB(0x00604ea4);
    /* 00604ea4: mov esp, ebp */ r_esp = r_ebp;
    /* 00604ea6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00604ea7: ret 0x30 */ FN_RET(0x00604d80); r_esp += 52; return;
}

