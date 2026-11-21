#include "protos.h"

void f_00592090(void) /* sub_592090 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00592090);
    /* 00592090: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00592091: mov ebp, esp */ r_ebp = r_esp;
    /* 00592093: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00592094: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00592097: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059209b: jne 0x59209f */ if (!fZ) goto L_0059209f;
L_0059209d:; BB(0x0059209d);
    /* 0059209d: jmp 0x5920d0 */ goto L_005920d0;
L_0059209f:; BB(0x0059209f);
    /* 0059209f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005920a2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005920a5: cmp dword ptr [ecx + eax*4 + 0x18], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x18u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005920aa: je 0x5920d0 */ if (fZ) goto L_005920d0;
L_005920ac:; BB(0x005920ac);
    /* 005920ac: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005920ae: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005920b1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005920b2: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005920b5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005920b8: mov edx, dword ptr [ecx + eax*4 + 0x18] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x18u));
    /* 005920bc: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005920bf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005920c2: mov ecx, dword ptr [ecx + eax*4 + 0x18] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x18u));
    /* 005920c6: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005920c8: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 005920ce: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5920d0u); call_ind(t); }
L_005920d0:; BB(0x005920d0);
    /* 005920d0: mov esp, ebp */ r_esp = r_ebp;
    /* 005920d2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005920d3: ret 8 */ FN_RET(0x00592090); r_esp += 12; return;
}

void f_005920e0(void) /* sub_5920E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005920e0);
    /* 005920e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005920e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005920e3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005920e6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005920e9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005920ec: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005920ef: mov edx, dword ptr [ecx + eax*4 + 4] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 005920f3: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005920f6: mov ecx, dword ptr [edx + eax*4 + 8] */ r_ecx = R32((u32)(r_edx+r_eax*4+0x8u));
    /* 005920fa: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005920fd: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00592100: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00592101: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00592104: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00592105: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 0059210b: call 0x598420 */ r_esp -= 4; W32(r_esp, 0x592110u); f_00598420();
    /* 00592110: mov word ptr [ebp - 8], ax */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_eax);
    /* 00592114: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00592117: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00592118: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0059211b: call 0x591120 */ r_esp -= 4; W32(r_esp, 0x592120u); f_00591120();
    /* 00592120: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00592121: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00592124: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x592129u); f_005eaf00();
    /* 00592129: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0059212c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059212d: mov ax, word ptr [ebp - 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 00592131: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00592132: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00592135: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00592136: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00592139: call 0x591070 */ r_esp -= 4; W32(r_esp, 0x59213eu); f_00591070();
    /* 0059213e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059213f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00592142: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00592144: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00592147: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 0059214d: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x59214fu); call_ind(t); }
    /* 0059214f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00592152: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00592153: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00592156: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00592157: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0059215a: call 0x5911a0 */ r_esp -= 4; W32(r_esp, 0x59215fu); f_005911a0();
    /* 0059215f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00592160: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00592163: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00592164: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00592167: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00592168: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0059216b: call 0x591160 */ r_esp -= 4; W32(r_esp, 0x592170u); f_00591160();
    /* 00592170: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00592171: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00592174: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00592176: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00592179: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0059217c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59217eu); call_ind(t); }
    /* 0059217e: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00592181: add ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00592184: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00592185: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00592188: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0059218a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059218d: mov edx, dword ptr [eax + 0x6c] */ r_edx = R32((u32)(r_eax+0x6cu));
    /* 00592190: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x592192u); call_ind(t); }
    /* 00592192: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00592195: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00592197: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059219a: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0059219d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59219fu); call_ind(t); }
    /* 0059219f: mov esp, ebp */ r_esp = r_ebp;
    /* 005921a1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005921a2: ret 8 */ FN_RET(0x005920e0); r_esp += 12; return;
}

void f_005921b0(void) /* sub_5921B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005921b0);
    /* 005921b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005921b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005921b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005921b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005921b7: mov ecx, dword ptr [0x7935a4] */ r_ecx = R32((u32)(0x7935a4u));
    /* 005921bd: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x5921c2u); f_005da7b0();
    /* 005921c2: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005921c5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005921c7: je 0x5921e8 */ if (fZ) goto L_005921e8;
L_005921c9:; BB(0x005921c9);
    /* 005921c9: mov ecx, dword ptr [0x7935a4] */ r_ecx = R32((u32)(0x7935a4u));
    /* 005921cf: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005921d1: mov ecx, dword ptr [0x7935a4] */ r_ecx = R32((u32)(0x7935a4u));
    /* 005921d7: mov eax, dword ptr [edx + 0x2d4] */ r_eax = R32((u32)(r_edx+0x2d4u));
    /* 005921dd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5921dfu); call_ind(t); }
    /* 005921df: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005921e2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005921e4: jne 0x5921e8 */ if (!fZ) goto L_005921e8;
L_005921e6:; BB(0x005921e6);
    /* 005921e6: jmp 0x592225 */ goto L_00592225;
L_005921e8:; BB(0x005921e8);
    /* 005921e8: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 005921ee: call 0x599780 */ r_esp -= 4; W32(r_esp, 0x5921f3u); f_00599780();
    /* 005921f3: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005921f6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005921f8: jne 0x592213 */ if (!fZ) goto L_00592213;
L_005921fa:; BB(0x005921fa);
    /* 005921fa: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00592200: call 0x5df650 */ r_esp -= 4; W32(r_esp, 0x592205u); f_005df650();
    /* 00592205: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00592206: mov ecx, dword ptr [0x7935a0] */ r_ecx = R32((u32)(0x7935a0u));
    /* 0059220c: call 0x5956f0 */ r_esp -= 4; W32(r_esp, 0x592211u); f_005956f0();
    /* 00592211: jmp 0x592225 */ goto L_00592225;
L_00592213:; BB(0x00592213);
    /* 00592213: push 0xaa */ { u32 v = 0xaau; r_esp -= 4; W32(r_esp, v); }
    /* 00592218: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059221a: mov ecx, dword ptr [0x7935a4] */ r_ecx = R32((u32)(0x7935a4u));
    /* 00592220: call 0x5db8c0 */ r_esp -= 4; W32(r_esp, 0x592225u); f_005db8c0();
L_00592225:; BB(0x00592225);
    /* 00592225: mov esp, ebp */ r_esp = r_ebp;
    /* 00592227: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00592228: ret  */ FN_RET(0x005921b0); r_esp += 4; return;
}

void f_00592230(void) /* sub_592230 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00592230);
    /* 00592230: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00592231: mov ebp, esp */ r_ebp = r_esp;
    /* 00592233: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00592236: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00592239: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 0059223f: call 0x5981b0 */ r_esp -= 4; W32(r_esp, 0x592244u); f_005981b0();
    /* 00592244: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00592247: je 0x5922e8 */ if (fZ) goto L_005922e8;
L_0059224d:; BB(0x0059224d);
    /* 0059224d: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 00592253: call 0x5981b0 */ r_esp -= 4; W32(r_esp, 0x592258u); f_005981b0();
    /* 00592258: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0059225b: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059225f: jl 0x5922e8 */ if ((fS!=fO)) goto L_005922e8;
L_00592265:; BB(0x00592265);
    /* 00592265: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00592269: jg 0x5922e8 */ if ((!fZ&&fS==fO)) goto L_005922e8;
L_0059226b:; BB(0x0059226b);
    /* 0059226b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059226e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059226f: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x592274u); f_005dcb00();
    /* 00592274: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00592277: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0059227a: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059227e: je 0x5922e8 */ if (fZ) goto L_005922e8;
L_00592280:; BB(0x00592280);
    /* 00592280: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00592283: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x592288u); f_0063aac0();
    /* 00592288: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0059228a: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0059228d: cmp dword ptr [ebp - 0xc], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00592291: je 0x5922af */ if (fZ) goto L_005922af;
L_00592293:; BB(0x00592293);
    /* 00592293: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00592296: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x59229bu); f_0063aac0();
    /* 0059229b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0059229d: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 005922a0: cmp dword ptr [ebp - 0x10], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005922a4: je 0x5922af */ if (fZ) goto L_005922af;
L_005922a6:; BB(0x005922a6);
    /* 005922a6: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 005922ad: jmp 0x5922b6 */ goto L_005922b6;
L_005922af:; BB(0x005922af);
    /* 005922af: mov dword ptr [ebp - 0x18], 1 */ W32((u32)(r_ebp+0xffffffe8u), 0x1u);
L_005922b6:; BB(0x005922b6);
    /* 005922b6: movzx eax, byte ptr [ebp - 0x18] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffe8u));
    /* 005922ba: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005922bc: je 0x5922e8 */ if (fZ) goto L_005922e8;
L_005922be:; BB(0x005922be);
    /* 005922be: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005922c1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005922c2: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 005922c8: call 0x598700 */ r_esp -= 4; W32(r_esp, 0x5922cdu); f_00598700();
    /* 005922cd: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005922d0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005922d2: je 0x5922e8 */ if (fZ) goto L_005922e8;
L_005922d4:; BB(0x005922d4);
    /* 005922d4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005922d6: push 0x314d1a */ { u32 v = 0x314d1au; r_esp -= 4; W32(r_esp, v); }
    /* 005922db: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 005922e1: call 0x5f2b20 */ r_esp -= 4; W32(r_esp, 0x5922e6u); f_005f2b20();
    /* 005922e6: jmp 0x5922f8 */ goto L_005922f8;
L_005922e8:; BB(0x005922e8);
    /* 005922e8: push 0x314d1a */ { u32 v = 0x314d1au; r_esp -= 4; W32(r_esp, v); }
    /* 005922ed: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 005922f3: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x5922f8u); f_005f2ba0();
L_005922f8:; BB(0x005922f8);
    /* 005922f8: mov esp, ebp */ r_esp = r_ebp;
    /* 005922fa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005922fb: ret  */ FN_RET(0x00592230); r_esp += 4; return;
}

void f_00592690(void) /* sub_592690 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00592690);
    /* 00592690: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00592691: mov ebp, esp */ r_ebp = r_esp;
    /* 00592693: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00592694: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00592697: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00592699: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059269c: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x5926a1u); f_005fb2b0();
    /* 005926a1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005926a3: jne 0x5926e8 */ if (!fZ) goto L_005926e8;
L_005926a5:; BB(0x005926a5);
    /* 005926a5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005926a7: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 005926ac: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005926ae: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005926b0: movzx eax, byte ptr [ebp + 8] */ r_eax = (u32)R8((u32)(r_ebp+0x8u));
    /* 005926b4: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 005926b6: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 005926b8: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005926bb: imul eax, eax, 0x23 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x23u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005926be: add eax, 0x26 */ {  u32 a = r_eax; u32 b = 0x26u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005926c1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005926c2: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005926c4: push 0x1398 */ { u32 v = 0x1398u; r_esp -= 4; W32(r_esp, v); }
    /* 005926c9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005926cb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005926cd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005926d0: call 0x5f9ce0 */ r_esp -= 4; W32(r_esp, 0x5926d5u); f_005f9ce0();
    /* 005926d5: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 005926d7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005926d9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005926dc: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x5926e1u); f_005fb2b0();
    /* 005926e1: mov ecx, eax */ r_ecx = r_eax;
    /* 005926e3: call 0x5eb5d0 */ r_esp -= 4; W32(r_esp, 0x5926e8u); f_005eb5d0();
L_005926e8:; BB(0x005926e8);
    /* 005926e8: mov esp, ebp */ r_esp = r_ebp;
    /* 005926ea: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005926eb: ret 4 */ FN_RET(0x00592690); r_esp += 8; return;
}

void f_005927d0(void) /* sub_5927D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005927d0);
    /* 005927d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005927d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005927d3: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005927d6: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 005927d9: mov dword ptr [ebp - 0x30], 0x185 */ W32((u32)(r_ebp+0xffffffd0u), 0x185u);
    /* 005927e0: mov dword ptr [ebp - 0x2c], 0x17a */ W32((u32)(r_ebp+0xffffffd4u), 0x17au);
    /* 005927e7: mov dword ptr [ebp - 0x28], 0x16c */ W32((u32)(r_ebp+0xffffffd8u), 0x16cu);
    /* 005927ee: mov dword ptr [ebp - 0x24], 0xc6 */ W32((u32)(r_ebp+0xffffffdcu), 0xc6u);
    /* 005927f5: mov dword ptr [ebp - 0x20], 0xd0 */ W32((u32)(r_ebp+0xffffffe0u), 0xd0u);
    /* 005927fc: mov dword ptr [ebp - 0x1c], 0xd8 */ W32((u32)(r_ebp+0xffffffe4u), 0xd8u);
    /* 00592803: mov dword ptr [ebp - 0x18], 0x225 */ W32((u32)(r_ebp+0xffffffe8u), 0x225u);
    /* 0059280a: mov dword ptr [ebp - 0x14], 0x209 */ W32((u32)(r_ebp+0xffffffecu), 0x209u);
    /* 00592811: mov dword ptr [ebp - 0x10], 0x1eb */ W32((u32)(r_ebp+0xfffffff0u), 0x1ebu);
    /* 00592818: mov dword ptr [ebp - 0xc], 0x21 */ W32((u32)(r_ebp+0xfffffff4u), 0x21u);
    /* 0059281f: mov dword ptr [ebp - 8], 0x3c */ W32((u32)(r_ebp+0xfffffff8u), 0x3cu);
    /* 00592826: mov dword ptr [ebp - 4], 0x56 */ W32((u32)(r_ebp+0xfffffffcu), 0x56u);
    /* 0059282d: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00592830: mov ecx, dword ptr [eax + 0xae0] */ r_ecx = R32((u32)(r_eax+0xae0u));
    /* 00592836: mov eax, dword ptr [ebp + ecx*4 - 0x30] */ r_eax = R32((u32)(r_ebp+r_ecx*4+0xffffffd0u));
    /* 0059283a: mov esp, ebp */ r_esp = r_ebp;
    /* 0059283c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059283d: ret 8 */ FN_RET(0x005927d0); r_esp += 12; return;
}

void f_005928a0(void) /* sub_5928A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005928a0);
    /* 005928a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005928a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005928a3: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005928a6: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 005928a9: mov dword ptr [ebp - 0x30], 0x151 */ W32((u32)(r_ebp+0xffffffd0u), 0x151u);
    /* 005928b0: mov dword ptr [ebp - 0x2c], 0x128 */ W32((u32)(r_ebp+0xffffffd4u), 0x128u);
    /* 005928b7: mov dword ptr [ebp - 0x28], 0x102 */ W32((u32)(r_ebp+0xffffffd8u), 0x102u);
    /* 005928be: mov dword ptr [ebp - 0x24], 0x152 */ W32((u32)(r_ebp+0xffffffdcu), 0x152u);
    /* 005928c5: mov dword ptr [ebp - 0x20], 0x127 */ W32((u32)(r_ebp+0xffffffe0u), 0x127u);
    /* 005928cc: mov dword ptr [ebp - 0x1c], 0x102 */ W32((u32)(r_ebp+0xffffffe4u), 0x102u);
    /* 005928d3: mov dword ptr [ebp - 0x18], 0x111 */ W32((u32)(r_ebp+0xffffffe8u), 0x111u);
    /* 005928da: mov dword ptr [ebp - 0x14], 0xf2 */ W32((u32)(r_ebp+0xffffffecu), 0xf2u);
    /* 005928e1: mov dword ptr [ebp - 0x10], 0xd4 */ W32((u32)(r_ebp+0xfffffff0u), 0xd4u);
    /* 005928e8: mov dword ptr [ebp - 0xc], 0x115 */ W32((u32)(r_ebp+0xfffffff4u), 0x115u);
    /* 005928ef: mov dword ptr [ebp - 8], 0xf4 */ W32((u32)(r_ebp+0xfffffff8u), 0xf4u);
    /* 005928f6: mov dword ptr [ebp - 4], 0xd8 */ W32((u32)(r_ebp+0xfffffffcu), 0xd8u);
    /* 005928fd: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00592900: mov ecx, dword ptr [eax + 0xae0] */ r_ecx = R32((u32)(r_eax+0xae0u));
    /* 00592906: mov eax, dword ptr [ebp + ecx*4 - 0x30] */ r_eax = R32((u32)(r_ebp+r_ecx*4+0xffffffd0u));
    /* 0059290a: mov esp, ebp */ r_esp = r_ebp;
    /* 0059290c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059290d: ret 8 */ FN_RET(0x005928a0); r_esp += 12; return;
}

void f_00592920(void) /* sub_592920 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00592920);
    /* 00592920: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00592921: mov ebp, esp */ r_ebp = r_esp;
    /* 00592923: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00592925: push 0x6a7143 */ { u32 v = 0x6a7143u; r_esp -= 4; W32(r_esp, v); }
    /* 0059292a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00592930: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00592931: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00592934: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00592939: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0059293b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059293c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0059293f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00592945: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00592948: mov eax, dword ptr [0x79359c] */ r_eax = R32((u32)(0x79359cu));
    /* 0059294d: cmp dword ptr [eax + 0x98], 0 */ {  u32 a = R32((u32)(r_eax+0x98u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00592954: je 0x5929e8 */ if (fZ) goto L_005929e8;
L_0059295a:; BB(0x0059295a);
    /* 0059295a: push 0x7e9 */ { u32 v = 0x7e9u; r_esp -= 4; W32(r_esp, v); }
    /* 0059295f: mov ecx, dword ptr [0x79359c] */ r_ecx = R32((u32)(0x79359cu));
    /* 00592965: mov ecx, dword ptr [ecx + 0x98] */ r_ecx = R32((u32)(r_ecx+0x98u));
    /* 0059296b: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x592970u); f_005eaf00();
    /* 00592970: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00592972: mov edx, dword ptr [0x79359c] */ r_edx = R32((u32)(0x79359cu));
    /* 00592978: mov eax, dword ptr [edx + 0x98] */ r_eax = R32((u32)(r_edx+0x98u));
    /* 0059297e: mov ecx, dword ptr [0x79359c] */ r_ecx = R32((u32)(0x79359cu));
    /* 00592984: mov ecx, dword ptr [ecx + 0x98] */ r_ecx = R32((u32)(r_ecx+0x98u));
    /* 0059298a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0059298c: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00592992: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x592994u); call_ind(t); }
    /* 00592994: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00592996: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x59299bu); f_00686d82();
    /* 0059299b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059299e: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005929a1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005929a8: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005929ac: je 0x5929bf */ if (fZ) goto L_005929bf;
L_005929ae:; BB(0x005929ae);
    /* 005929ae: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005929b1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005929b2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005929b5: call 0x6010a0 */ r_esp -= 4; W32(r_esp, 0x5929bau); f_006010a0();
    /* 005929ba: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005929bd: jmp 0x5929c6 */ goto L_005929c6;
L_005929bf:; BB(0x005929bf);
    /* 005929bf: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005929c6:; BB(0x005929c6);
    /* 005929c6: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005929c9: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 005929cc: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005929d3: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005929d6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005929d7: mov ecx, dword ptr [0x79359c] */ r_ecx = R32((u32)(0x79359cu));
    /* 005929dd: mov ecx, dword ptr [ecx + 0x98] */ r_ecx = R32((u32)(r_ecx+0x98u));
    /* 005929e3: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x5929e8u); f_005f5d50();
L_005929e8:; BB(0x005929e8);
    /* 005929e8: mov edx, dword ptr [0x79359c] */ r_edx = R32((u32)(0x79359cu));
    /* 005929ee: cmp dword ptr [edx + 0x94], 0 */ {  u32 a = R32((u32)(r_edx+0x94u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005929f5: je 0x592a84 */ if (fZ) goto L_00592a84;
L_005929fb:; BB(0x005929fb);
    /* 005929fb: push 0x7e8 */ { u32 v = 0x7e8u; r_esp -= 4; W32(r_esp, v); }
    /* 00592a00: mov eax, dword ptr [0x79359c] */ r_eax = R32((u32)(0x79359cu));
    /* 00592a05: mov ecx, dword ptr [eax + 0x94] */ r_ecx = R32((u32)(r_eax+0x94u));
    /* 00592a0b: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x592a10u); f_005eaf00();
    /* 00592a10: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00592a12: mov ecx, dword ptr [0x79359c] */ r_ecx = R32((u32)(0x79359cu));
    /* 00592a18: mov edx, dword ptr [ecx + 0x94] */ r_edx = R32((u32)(r_ecx+0x94u));
    /* 00592a1e: mov eax, dword ptr [0x79359c] */ r_eax = R32((u32)(0x79359cu));
    /* 00592a23: mov ecx, dword ptr [eax + 0x94] */ r_ecx = R32((u32)(r_eax+0x94u));
    /* 00592a29: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00592a2b: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00592a31: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x592a33u); call_ind(t); }
    /* 00592a33: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00592a35: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x592a3au); f_00686d82();
    /* 00592a3a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00592a3d: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00592a40: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00592a47: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00592a4b: je 0x592a5c */ if (fZ) goto L_00592a5c;
L_00592a4d:; BB(0x00592a4d);
    /* 00592a4d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00592a4f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00592a52: call 0x6010a0 */ r_esp -= 4; W32(r_esp, 0x592a57u); f_006010a0();
    /* 00592a57: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00592a5a: jmp 0x592a63 */ goto L_00592a63;
L_00592a5c:; BB(0x00592a5c);
    /* 00592a5c: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00592a63:; BB(0x00592a63);
    /* 00592a63: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00592a66: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00592a69: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00592a70: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00592a73: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00592a74: mov eax, dword ptr [0x79359c] */ r_eax = R32((u32)(0x79359cu));
    /* 00592a79: mov ecx, dword ptr [eax + 0x94] */ r_ecx = R32((u32)(r_eax+0x94u));
    /* 00592a7f: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x592a84u); f_005f5d50();
L_00592a84:; BB(0x00592a84);
    /* 00592a84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00592a87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00592a8e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00592a8f: mov esp, ebp */ r_esp = r_ebp;
    /* 00592a91: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00592a92: ret 4 */ FN_RET(0x00592920); r_esp += 8; return;
}

void f_00592aa0(void) /* sub_592AA0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00592aa0);
    /* 00592aa0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00592aa1: mov ebp, esp */ r_ebp = r_esp;
    /* 00592aa3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00592aa5: push 0x6a7174 */ { u32 v = 0x6a7174u; r_esp -= 4; W32(r_esp, v); }
    /* 00592aaa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00592ab0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00592ab1: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00592ab4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00592ab9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00592abb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00592abc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00592abf: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00592ac5: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00592ac8: mov eax, dword ptr [0x79359c] */ r_eax = R32((u32)(0x79359cu));
    /* 00592acd: cmp dword ptr [eax + 0x98], 0 */ {  u32 a = R32((u32)(r_eax+0x98u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00592ad4: je 0x592b86 */ if (fZ) goto L_00592b86;
L_00592ada:; BB(0x00592ada);
    /* 00592ada: push 0x7e7 */ { u32 v = 0x7e7u; r_esp -= 4; W32(r_esp, v); }
    /* 00592adf: mov ecx, dword ptr [0x79359c] */ r_ecx = R32((u32)(0x79359cu));
    /* 00592ae5: mov ecx, dword ptr [ecx + 0x98] */ r_ecx = R32((u32)(r_ecx+0x98u));
    /* 00592aeb: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x592af0u); f_005eaf00();
    /* 00592af0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00592af2: mov edx, dword ptr [0x79359c] */ r_edx = R32((u32)(0x79359cu));
    /* 00592af8: mov eax, dword ptr [edx + 0x98] */ r_eax = R32((u32)(r_edx+0x98u));
    /* 00592afe: mov ecx, dword ptr [0x79359c] */ r_ecx = R32((u32)(0x79359cu));
    /* 00592b04: mov ecx, dword ptr [ecx + 0x98] */ r_ecx = R32((u32)(r_ecx+0x98u));
    /* 00592b0a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00592b0c: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00592b12: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x592b14u); call_ind(t); }
    /* 00592b14: mov ecx, dword ptr [0x79359c] */ r_ecx = R32((u32)(0x79359cu));
    /* 00592b1a: mov edx, dword ptr [ecx + 0x98] */ r_edx = R32((u32)(r_ecx+0x98u));
    /* 00592b20: mov eax, dword ptr [0x79359c] */ r_eax = R32((u32)(0x79359cu));
    /* 00592b25: mov ecx, dword ptr [eax + 0x98] */ r_ecx = R32((u32)(r_eax+0x98u));
    /* 00592b2b: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00592b2d: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00592b30: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x592b32u); call_ind(t); }
    /* 00592b32: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00592b34: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x592b39u); f_00686d82();
    /* 00592b39: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00592b3c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00592b3f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00592b46: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00592b4a: je 0x592b5d */ if (fZ) goto L_00592b5d;
L_00592b4c:; BB(0x00592b4c);
    /* 00592b4c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00592b4f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00592b50: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00592b53: call 0x6010a0 */ r_esp -= 4; W32(r_esp, 0x592b58u); f_006010a0();
    /* 00592b58: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00592b5b: jmp 0x592b64 */ goto L_00592b64;
L_00592b5d:; BB(0x00592b5d);
    /* 00592b5d: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00592b64:; BB(0x00592b64);
    /* 00592b64: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00592b67: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00592b6a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00592b71: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00592b74: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00592b75: mov ecx, dword ptr [0x79359c] */ r_ecx = R32((u32)(0x79359cu));
    /* 00592b7b: mov ecx, dword ptr [ecx + 0x98] */ r_ecx = R32((u32)(r_ecx+0x98u));
    /* 00592b81: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x592b86u); f_005f5d50();
L_00592b86:; BB(0x00592b86);
    /* 00592b86: mov edx, dword ptr [0x79359c] */ r_edx = R32((u32)(0x79359cu));
    /* 00592b8c: cmp dword ptr [edx + 0x94], 0 */ {  u32 a = R32((u32)(r_edx+0x94u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00592b93: je 0x592c40 */ if (fZ) goto L_00592c40;
L_00592b99:; BB(0x00592b99);
    /* 00592b99: push 0x7e6 */ { u32 v = 0x7e6u; r_esp -= 4; W32(r_esp, v); }
    /* 00592b9e: mov eax, dword ptr [0x79359c] */ r_eax = R32((u32)(0x79359cu));
    /* 00592ba3: mov ecx, dword ptr [eax + 0x94] */ r_ecx = R32((u32)(r_eax+0x94u));
    /* 00592ba9: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x592baeu); f_005eaf00();
    /* 00592bae: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00592bb0: mov ecx, dword ptr [0x79359c] */ r_ecx = R32((u32)(0x79359cu));
    /* 00592bb6: mov edx, dword ptr [ecx + 0x94] */ r_edx = R32((u32)(r_ecx+0x94u));
    /* 00592bbc: mov eax, dword ptr [0x79359c] */ r_eax = R32((u32)(0x79359cu));
    /* 00592bc1: mov ecx, dword ptr [eax + 0x94] */ r_ecx = R32((u32)(r_eax+0x94u));
    /* 00592bc7: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00592bc9: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00592bcf: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x592bd1u); call_ind(t); }
    /* 00592bd1: mov ecx, dword ptr [0x79359c] */ r_ecx = R32((u32)(0x79359cu));
    /* 00592bd7: mov edx, dword ptr [ecx + 0x94] */ r_edx = R32((u32)(r_ecx+0x94u));
    /* 00592bdd: mov eax, dword ptr [0x79359c] */ r_eax = R32((u32)(0x79359cu));
    /* 00592be2: mov ecx, dword ptr [eax + 0x94] */ r_ecx = R32((u32)(r_eax+0x94u));
    /* 00592be8: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00592bea: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00592bed: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x592befu); call_ind(t); }
    /* 00592bef: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00592bf1: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x592bf6u); f_00686d82();
    /* 00592bf6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00592bf9: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00592bfc: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00592c03: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00592c07: je 0x592c18 */ if (fZ) goto L_00592c18;
L_00592c09:; BB(0x00592c09);
    /* 00592c09: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00592c0b: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00592c0e: call 0x6010a0 */ r_esp -= 4; W32(r_esp, 0x592c13u); f_006010a0();
    /* 00592c13: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00592c16: jmp 0x592c1f */ goto L_00592c1f;
L_00592c18:; BB(0x00592c18);
    /* 00592c18: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00592c1f:; BB(0x00592c1f);
    /* 00592c1f: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00592c22: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00592c25: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00592c2c: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00592c2f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00592c30: mov eax, dword ptr [0x79359c] */ r_eax = R32((u32)(0x79359cu));
    /* 00592c35: mov ecx, dword ptr [eax + 0x94] */ r_ecx = R32((u32)(r_eax+0x94u));
    /* 00592c3b: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x592c40u); f_005f5d50();
L_00592c40:; BB(0x00592c40);
    /* 00592c40: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00592c43: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00592c4a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00592c4b: mov esp, ebp */ r_esp = r_ebp;
    /* 00592c4d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00592c4e: ret 4 */ FN_RET(0x00592aa0); r_esp += 8; return;
}

