#include "protos.h"

void f_00665270(void) /* face::func_00665270 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00665270);
    /* 00665270: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00665271: mov ebp, esp */ r_ebp = r_esp;
    /* 00665273: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00665276: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00665279: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0066527b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0066527e: call 0x664830 */ r_esp -= 4; W32(r_esp, 0x665283u); f_00664830();
    /* 00665283: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00665286: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00665288: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0066528b: call 0x6651e0 */ r_esp -= 4; W32(r_esp, 0x665290u); f_006651e0();
    /* 00665290: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00665293: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00665296: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00665299: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0066529c: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0066529f: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 006652a2: cmp dword ptr [ebp - 0x1c], 0xd */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 006652a6: ja 0x665334 */ if ((!fC&&!fZ)) goto L_00665334;
L_006652ac:; BB(0x006652ac);
    /* 006652ac: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006652af: jmp dword ptr [edx*4 + 0x6657ac] */ { u32 t = R32((u32)(r_edx*4+0x6657acu)); switch (t) { case 0x6652b6u: goto L_006652b6; case 0x6652bfu: goto L_006652bf; case 0x6652c8u: goto L_006652c8; case 0x6652d1u: goto L_006652d1; case 0x6652dau: goto L_006652da; case 0x6652e3u: goto L_006652e3; case 0x6652ecu: goto L_006652ec; case 0x6652f5u: goto L_006652f5; case 0x6652feu: goto L_006652fe; case 0x665307u: goto L_00665307; case 0x665310u: goto L_00665310; case 0x665319u: goto L_00665319; case 0x665322u: goto L_00665322; case 0x66532bu: goto L_0066532b; case 0x6654fbu: goto L_006654fb; case 0x665504u: goto L_00665504; case 0x66550du: goto L_0066550d; case 0x665516u: goto L_00665516; case 0x66551fu: goto L_0066551f; case 0x665528u: goto L_00665528; default: UNSUP(0x006652af, "jump table entry is not a known target"); } }
L_006652b6:; BB(0x006652b6);
    /* 006652b6: mov dword ptr [ebp - 0x14], 1 */ W32((u32)(r_ebp+0xffffffecu), 0x1u);
    /* 006652bd: jmp 0x66533b */ goto L_0066533b;
L_006652bf:; BB(0x006652bf);
    /* 006652bf: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 006652c6: jmp 0x66533b */ goto L_0066533b;
L_006652c8:; BB(0x006652c8);
    /* 006652c8: mov dword ptr [ebp - 0x14], 1 */ W32((u32)(r_ebp+0xffffffecu), 0x1u);
    /* 006652cf: jmp 0x66533b */ goto L_0066533b;
L_006652d1:; BB(0x006652d1);
    /* 006652d1: mov dword ptr [ebp - 0x14], 1 */ W32((u32)(r_ebp+0xffffffecu), 0x1u);
    /* 006652d8: jmp 0x66533b */ goto L_0066533b;
L_006652da:; BB(0x006652da);
    /* 006652da: mov dword ptr [ebp - 0x14], 2 */ W32((u32)(r_ebp+0xffffffecu), 0x2u);
    /* 006652e1: jmp 0x66533b */ goto L_0066533b;
L_006652e3:; BB(0x006652e3);
    /* 006652e3: mov dword ptr [ebp - 0x14], 3 */ W32((u32)(r_ebp+0xffffffecu), 0x3u);
    /* 006652ea: jmp 0x66533b */ goto L_0066533b;
L_006652ec:; BB(0x006652ec);
    /* 006652ec: mov dword ptr [ebp - 0x14], 1 */ W32((u32)(r_ebp+0xffffffecu), 0x1u);
    /* 006652f3: jmp 0x66533b */ goto L_0066533b;
L_006652f5:; BB(0x006652f5);
    /* 006652f5: mov dword ptr [ebp - 0x14], 2 */ W32((u32)(r_ebp+0xffffffecu), 0x2u);
    /* 006652fc: jmp 0x66533b */ goto L_0066533b;
L_006652fe:; BB(0x006652fe);
    /* 006652fe: mov dword ptr [ebp - 0x14], 1 */ W32((u32)(r_ebp+0xffffffecu), 0x1u);
    /* 00665305: jmp 0x66533b */ goto L_0066533b;
L_00665307:; BB(0x00665307);
    /* 00665307: mov dword ptr [ebp - 0x14], 1 */ W32((u32)(r_ebp+0xffffffecu), 0x1u);
    /* 0066530e: jmp 0x66533b */ goto L_0066533b;
L_00665310:; BB(0x00665310);
    /* 00665310: mov dword ptr [ebp - 0x14], 1 */ W32((u32)(r_ebp+0xffffffecu), 0x1u);
    /* 00665317: jmp 0x66533b */ goto L_0066533b;
L_00665319:; BB(0x00665319);
    /* 00665319: mov dword ptr [ebp - 0x14], 1 */ W32((u32)(r_ebp+0xffffffecu), 0x1u);
    /* 00665320: jmp 0x66533b */ goto L_0066533b;
L_00665322:; BB(0x00665322);
    /* 00665322: mov dword ptr [ebp - 0x14], 2 */ W32((u32)(r_ebp+0xffffffecu), 0x2u);
    /* 00665329: jmp 0x66533b */ goto L_0066533b;
L_0066532b:; BB(0x0066532b);
    /* 0066532b: mov dword ptr [ebp - 0x14], 2 */ W32((u32)(r_ebp+0xffffffecu), 0x2u);
    /* 00665332: jmp 0x66533b */ goto L_0066533b;
L_00665334:; BB(0x00665334);
    /* 00665334: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_0066533b:; BB(0x0066533b);
    /* 0066533b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0066533e: add eax, dword ptr [ebp - 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00665341: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00665342: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00665345: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00665348: mov ecx, dword ptr [edx + ecx*4 + 0x5c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x5cu));
    /* 0066534c: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x665351u); f_005eaf00();
    /* 00665351: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00665354: call 0x664cb0 */ r_esp -= 4; W32(r_esp, 0x665359u); f_00664cb0();
    /* 00665359: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 0066535c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066535d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00665360: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00665363: mov eax, dword ptr [edx + ecx*4 + 0x5c] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x5cu));
    /* 00665367: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066536a: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0066536d: mov ecx, dword ptr [edx + ecx*4 + 0x5c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x5cu));
    /* 00665371: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00665373: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 00665379: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x66537bu); call_ind(t); }
    /* 0066537b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0066537e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066537f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00665382: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00665385: mov ecx, dword ptr [edx + ecx*4 + 0x60] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x60u));
    /* 00665389: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x66538eu); f_005eaf00();
    /* 0066538e: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00665390: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00665393: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00665396: mov edx, dword ptr [ecx + eax*4 + 0x60] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x60u));
    /* 0066539a: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066539d: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006653a0: mov ecx, dword ptr [ecx + eax*4 + 0x60] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x60u));
    /* 006653a4: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 006653a6: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 006653ac: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6653aeu); call_ind(t); }
    /* 006653ae: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 006653b0: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006653b3: call 0x664830 */ r_esp -= 4; W32(r_esp, 0x6653b8u); f_00664830();
    /* 006653b8: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 006653bb: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 006653bd: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006653c0: call 0x6647c0 */ r_esp -= 4; W32(r_esp, 0x6653c5u); f_006647c0();
    /* 006653c5: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 006653c8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006653ca: cmp dword ptr [ebp + 8], 0xe */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006653ce: setg cl */ r_ecx = (r_ecx & 0xffffff00u) | ((((!fZ&&fS==fO)) ? 1 : 0) & 0xffu);
    /* 006653d1: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006653d4: and ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 006653d7: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 006653da: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006653e1: jmp 0x6653ec */ goto L_006653ec;
L_006653e3:; BB(0x006653e3);
    /* 006653e3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006653e6: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006653e9: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_006653ec:; BB(0x006653ec);
    /* 006653ec: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006653ef: cmp eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006653f2: jge 0x665445 */ if ((fS==fO)) goto L_00665445;
L_006653f4:; BB(0x006653f4);
    /* 006653f4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006653f7: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006653fa: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006653fd: cmp dword ptr [edx + ecx*4 + 0x5c], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x5cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00665402: je 0x665443 */ if (fZ) goto L_00665443;
L_00665404:; BB(0x00665404);
    /* 00665404: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00665407: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0066540a: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0066540d: mov ecx, dword ptr [ecx + eax*4 + 0x5c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x5cu));
    /* 00665411: call 0x5eb240 */ r_esp -= 4; W32(r_esp, 0x665416u); f_005eb240();
    /* 00665416: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00665419: jl 0x665443 */ if ((fS!=fO)) goto L_00665443;
L_0066541b:; BB(0x0066541b);
    /* 0066541b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0066541e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066541f: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00665422: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00665425: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00665428: mov edx, dword ptr [ecx + eax*4 + 0x5c] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x5cu));
    /* 0066542c: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066542f: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00665432: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00665435: mov ecx, dword ptr [ecx + eax*4 + 0x5c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x5cu));
    /* 00665439: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0066543b: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00665441: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x665443u); call_ind(t); }
L_00665443:; BB(0x00665443);
    /* 00665443: jmp 0x6653e3 */ goto L_006653e3;
L_00665445:; BB(0x00665445);
    /* 00665445: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00665447: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0066544a: call 0x664830 */ r_esp -= 4; W32(r_esp, 0x66544fu); f_00664830();
    /* 0066544f: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00665452: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00665454: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00665457: call 0x6647c0 */ r_esp -= 4; W32(r_esp, 0x66545cu); f_006647c0();
    /* 0066545c: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0066545f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00665461: cmp dword ptr [ebp + 8], 0xe */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00665465: setg cl */ r_ecx = (r_ecx & 0xffffff00u) | ((((!fZ&&fS==fO)) ? 1 : 0) & 0xffu);
    /* 00665468: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0066546b: and ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0066546e: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00665471: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00665478: jmp 0x665483 */ goto L_00665483;
L_0066547a:; BB(0x0066547a);
    /* 0066547a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066547d: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00665480: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_00665483:; BB(0x00665483);
    /* 00665483: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00665486: cmp eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00665489: jge 0x6654dc */ if ((fS==fO)) goto L_006654dc;
L_0066548b:; BB(0x0066548b);
    /* 0066548b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066548e: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00665491: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00665494: cmp dword ptr [edx + ecx*4 + 0x5c], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x5cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00665499: je 0x6654da */ if (fZ) goto L_006654da;
L_0066549b:; BB(0x0066549b);
    /* 0066549b: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066549e: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006654a1: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006654a4: mov ecx, dword ptr [ecx + eax*4 + 0x5c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x5cu));
    /* 006654a8: call 0x5eb240 */ r_esp -= 4; W32(r_esp, 0x6654adu); f_005eb240();
    /* 006654ad: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006654b0: jl 0x6654da */ if ((fS!=fO)) goto L_006654da;
L_006654b2:; BB(0x006654b2);
    /* 006654b2: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006654b5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006654b6: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 006654b9: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006654bc: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006654bf: mov edx, dword ptr [ecx + eax*4 + 0x5c] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x5cu));
    /* 006654c3: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 006654c6: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006654c9: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006654cc: mov ecx, dword ptr [ecx + eax*4 + 0x5c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x5cu));
    /* 006654d0: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 006654d2: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 006654d8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6654dau); call_ind(t); }
L_006654da:; BB(0x006654da);
    /* 006654da: jmp 0x66547a */ goto L_0066547a;
L_006654dc:; BB(0x006654dc);
    /* 006654dc: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006654df: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006654e2: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006654e5: sub edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006654e8: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 006654eb: cmp dword ptr [ebp - 0x20], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 006654ef: ja 0x665531 */ if ((!fC&&!fZ)) goto L_00665531;
L_006654f1:; BB(0x006654f1);
    /* 006654f1: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006654f4: jmp dword ptr [eax*4 + 0x6657e4] */ { u32 t = R32((u32)(r_eax*4+0x6657e4u)); switch (t) { case 0x66532bu: goto L_0066532b; case 0x665322u: goto L_00665322; case 0x665319u: goto L_00665319; case 0x665310u: goto L_00665310; case 0x665307u: goto L_00665307; case 0x6652feu: goto L_006652fe; case 0x6652f5u: goto L_006652f5; case 0x6652ecu: goto L_006652ec; case 0x6652e3u: goto L_006652e3; case 0x6652dau: goto L_006652da; case 0x6652d1u: goto L_006652d1; case 0x6652c8u: goto L_006652c8; case 0x6652bfu: goto L_006652bf; case 0x6652b6u: goto L_006652b6; case 0x6654fbu: goto L_006654fb; case 0x665504u: goto L_00665504; case 0x66550du: goto L_0066550d; case 0x665516u: goto L_00665516; case 0x66551fu: goto L_0066551f; case 0x665528u: goto L_00665528; default: UNSUP(0x006654f4, "jump table entry is not a known target"); } }
L_006654fb:; BB(0x006654fb);
    /* 006654fb: mov dword ptr [ebp - 0x14], 1 */ W32((u32)(r_ebp+0xffffffecu), 0x1u);
    /* 00665502: jmp 0x665538 */ goto L_00665538;
L_00665504:; BB(0x00665504);
    /* 00665504: mov dword ptr [ebp - 0x14], 2 */ W32((u32)(r_ebp+0xffffffecu), 0x2u);
    /* 0066550b: jmp 0x665538 */ goto L_00665538;
L_0066550d:; BB(0x0066550d);
    /* 0066550d: mov dword ptr [ebp - 0x14], 3 */ W32((u32)(r_ebp+0xffffffecu), 0x3u);
    /* 00665514: jmp 0x665538 */ goto L_00665538;
L_00665516:; BB(0x00665516);
    /* 00665516: mov dword ptr [ebp - 0x14], 3 */ W32((u32)(r_ebp+0xffffffecu), 0x3u);
    /* 0066551d: jmp 0x665538 */ goto L_00665538;
L_0066551f:; BB(0x0066551f);
    /* 0066551f: mov dword ptr [ebp - 0x14], 4 */ W32((u32)(r_ebp+0xffffffecu), 0x4u);
    /* 00665526: jmp 0x665538 */ goto L_00665538;
L_00665528:; BB(0x00665528);
    /* 00665528: mov dword ptr [ebp - 0x14], 4 */ W32((u32)(r_ebp+0xffffffecu), 0x4u);
    /* 0066552f: jmp 0x665538 */ goto L_00665538;
L_00665531:; BB(0x00665531);
    /* 00665531: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_00665538:; BB(0x00665538);
    /* 00665538: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0066553a: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0066553d: call 0x664830 */ r_esp -= 4; W32(r_esp, 0x665542u); f_00664830();
    /* 00665542: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00665545: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00665547: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0066554a: call 0x6647c0 */ r_esp -= 4; W32(r_esp, 0x66554fu); f_006647c0();
    /* 0066554f: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00665552: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00665559: jmp 0x665564 */ goto L_00665564;
L_0066555b:; BB(0x0066555b);
    /* 0066555b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066555e: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00665561: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00665564:; BB(0x00665564);
    /* 00665564: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00665567: cmp edx, dword ptr [ebp - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0066556a: jge 0x6655bf */ if ((fS==fO)) goto L_006655bf;
L_0066556c:; BB(0x0066556c);
    /* 0066556c: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066556f: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00665572: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00665575: cmp dword ptr [ecx + eax*4 + 0x5c], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x5cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066557a: je 0x6655bd */ if (fZ) goto L_006655bd;
L_0066557c:; BB(0x0066557c);
    /* 0066557c: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066557f: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00665582: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00665585: mov ecx, dword ptr [eax + edx*4 + 0x5c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x5cu));
    /* 00665589: call 0x5eb240 */ r_esp -= 4; W32(r_esp, 0x66558eu); f_005eb240();
    /* 0066558e: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00665591: jl 0x6655bd */ if ((fS!=fO)) goto L_006655bd;
L_00665593:; BB(0x00665593);
    /* 00665593: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00665596: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00665597: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066559a: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0066559d: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006655a0: mov ecx, dword ptr [eax + edx*4 + 0x5c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x5cu));
    /* 006655a4: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006655a7: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006655aa: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006655ad: mov edx, dword ptr [eax + edx*4 + 0x5c] */ r_edx = R32((u32)(r_eax+r_edx*4+0x5cu));
    /* 006655b1: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006655b3: mov ecx, edx */ r_ecx = r_edx;
    /* 006655b5: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 006655bb: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x6655bdu); call_ind(t); }
L_006655bd:; BB(0x006655bd);
    /* 006655bd: jmp 0x66555b */ goto L_0066555b;
L_006655bf:; BB(0x006655bf);
    /* 006655bf: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006655c1: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006655c4: call 0x664830 */ r_esp -= 4; W32(r_esp, 0x6655c9u); f_00664830();
    /* 006655c9: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 006655cc: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006655ce: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006655d1: call 0x6647c0 */ r_esp -= 4; W32(r_esp, 0x6655d6u); f_006647c0();
    /* 006655d6: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 006655d9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006655e0: jmp 0x6655eb */ goto L_006655eb;
L_006655e2:; BB(0x006655e2);
    /* 006655e2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006655e5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006655e8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_006655eb:; BB(0x006655eb);
    /* 006655eb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006655ee: cmp ecx, dword ptr [ebp - 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006655f1: jge 0x665644 */ if ((fS==fO)) goto L_00665644;
L_006655f3:; BB(0x006655f3);
    /* 006655f3: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006655f6: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006655f9: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006655fc: cmp dword ptr [eax + edx*4 + 0x5c], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x5cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00665601: je 0x665642 */ if (fZ) goto L_00665642;
L_00665603:; BB(0x00665603);
    /* 00665603: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00665606: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00665609: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0066560c: mov ecx, dword ptr [edx + ecx*4 + 0x5c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x5cu));
    /* 00665610: call 0x5eb240 */ r_esp -= 4; W32(r_esp, 0x665615u); f_005eb240();
    /* 00665615: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00665618: jl 0x665642 */ if ((fS!=fO)) goto L_00665642;
L_0066561a:; BB(0x0066561a);
    /* 0066561a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0066561d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066561e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00665621: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00665624: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00665627: mov eax, dword ptr [edx + ecx*4 + 0x5c] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x5cu));
    /* 0066562b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066562e: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00665631: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00665634: mov ecx, dword ptr [edx + ecx*4 + 0x5c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x5cu));
    /* 00665638: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0066563a: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 00665640: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x665642u); call_ind(t); }
L_00665642:; BB(0x00665642);
    /* 00665642: jmp 0x6655e2 */ goto L_006655e2;
L_00665644:; BB(0x00665644);
    /* 00665644: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00665647: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0066564a: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066564e: je 0x66565e */ if (fZ) goto L_0066565e;
L_00665650:; BB(0x00665650);
    /* 00665650: cmp dword ptr [ebp - 0x24], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00665654: je 0x665667 */ if (fZ) goto L_00665667;
L_00665656:; BB(0x00665656);
    /* 00665656: cmp dword ptr [ebp - 0x24], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066565a: je 0x665670 */ if (fZ) goto L_00665670;
L_0066565c:; BB(0x0066565c);
    /* 0066565c: jmp 0x665679 */ goto L_00665679;
L_0066565e:; BB(0x0066565e);
    /* 0066565e: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 00665665: jmp 0x66569b */ goto L_0066569b;
L_00665667:; BB(0x00665667);
    /* 00665667: mov dword ptr [ebp - 0x14], 1 */ W32((u32)(r_ebp+0xffffffecu), 0x1u);
    /* 0066566e: jmp 0x66569b */ goto L_0066569b;
L_00665670:; BB(0x00665670);
    /* 00665670: mov dword ptr [ebp - 0x14], 2 */ W32((u32)(r_ebp+0xffffffecu), 0x2u);
    /* 00665677: jmp 0x66569b */ goto L_0066569b;
L_00665679:; BB(0x00665679);
    /* 00665679: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0066567b: jne 0x665694 */ if (!fZ) goto L_00665694;
L_0066567d:; BB(0x0066567d);
    /* 0066567d: push 0x347 */ { u32 v = 0x347u; r_esp -= 4; W32(r_esp, v); }
    /* 00665682: push 0x6df9a8 */ { u32 v = 0x6df9a8u; r_esp -= 4; W32(r_esp, v); }
    /* 00665687: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0066568c: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x665691u); f_005e9f20();
    /* 00665691: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00665694:; BB(0x00665694);
    /* 00665694: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_0066569b:; BB(0x0066569b);
    /* 0066569b: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0066569d: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006656a0: call 0x664830 */ r_esp -= 4; W32(r_esp, 0x6656a5u); f_00664830();
    /* 006656a5: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 006656a8: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 006656aa: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006656ad: call 0x6647c0 */ r_esp -= 4; W32(r_esp, 0x6656b2u); f_006647c0();
    /* 006656b2: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 006656b5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006656bc: jmp 0x6656c7 */ goto L_006656c7;
L_006656be:; BB(0x006656be);
    /* 006656be: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006656c1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006656c4: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_006656c7:; BB(0x006656c7);
    /* 006656c7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006656ca: cmp ecx, dword ptr [ebp - 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006656cd: jge 0x665720 */ if ((fS==fO)) goto L_00665720;
L_006656cf:; BB(0x006656cf);
    /* 006656cf: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006656d2: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006656d5: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006656d8: cmp dword ptr [eax + edx*4 + 0x5c], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x5cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006656dd: je 0x66571e */ if (fZ) goto L_0066571e;
L_006656df:; BB(0x006656df);
    /* 006656df: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006656e2: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006656e5: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006656e8: mov ecx, dword ptr [edx + ecx*4 + 0x5c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x5cu));
    /* 006656ec: call 0x5eb240 */ r_esp -= 4; W32(r_esp, 0x6656f1u); f_005eb240();
    /* 006656f1: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006656f4: jl 0x66571e */ if ((fS!=fO)) goto L_0066571e;
L_006656f6:; BB(0x006656f6);
    /* 006656f6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006656f9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006656fa: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006656fd: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00665700: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00665703: mov eax, dword ptr [edx + ecx*4 + 0x5c] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x5cu));
    /* 00665707: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066570a: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0066570d: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00665710: mov ecx, dword ptr [edx + ecx*4 + 0x5c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x5cu));
    /* 00665714: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00665716: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 0066571c: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x66571eu); call_ind(t); }
L_0066571e:; BB(0x0066571e);
    /* 0066571e: jmp 0x6656be */ goto L_006656be;
L_00665720:; BB(0x00665720);
    /* 00665720: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00665722: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00665725: call 0x664830 */ r_esp -= 4; W32(r_esp, 0x66572au); f_00664830();
    /* 0066572a: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0066572d: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0066572f: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00665732: call 0x6647c0 */ r_esp -= 4; W32(r_esp, 0x665737u); f_006647c0();
    /* 00665737: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0066573a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00665741: jmp 0x66574c */ goto L_0066574c;
L_00665743:; BB(0x00665743);
    /* 00665743: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00665746: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00665749: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0066574c:; BB(0x0066574c);
    /* 0066574c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066574f: cmp ecx, dword ptr [ebp - 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00665752: jge 0x6657a5 */ if ((fS==fO)) goto L_006657a5;
L_00665754:; BB(0x00665754);
    /* 00665754: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00665757: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0066575a: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0066575d: cmp dword ptr [eax + edx*4 + 0x5c], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x5cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00665762: je 0x6657a3 */ if (fZ) goto L_006657a3;
L_00665764:; BB(0x00665764);
    /* 00665764: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00665767: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0066576a: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0066576d: mov ecx, dword ptr [edx + ecx*4 + 0x5c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x5cu));
    /* 00665771: call 0x5eb240 */ r_esp -= 4; W32(r_esp, 0x665776u); f_005eb240();
    /* 00665776: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00665779: jl 0x6657a3 */ if ((fS!=fO)) goto L_006657a3;
L_0066577b:; BB(0x0066577b);
    /* 0066577b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0066577e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066577f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00665782: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00665785: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00665788: mov eax, dword ptr [edx + ecx*4 + 0x5c] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x5cu));
    /* 0066578c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066578f: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00665792: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00665795: mov ecx, dword ptr [edx + ecx*4 + 0x5c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x5cu));
    /* 00665799: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0066579b: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 006657a1: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x6657a3u); call_ind(t); }
L_006657a3:; BB(0x006657a3);
    /* 006657a3: jmp 0x665743 */ goto L_00665743;
L_006657a5:; BB(0x006657a5);
    /* 006657a5: mov esp, ebp */ r_esp = r_ebp;
    /* 006657a7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006657a8: ret 8 */ FN_RET(0x00665270); r_esp += 12; return;
}

void f_00665800(void) /* face::func_00665800 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00665800);
    /* 00665800: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00665801: mov ebp, esp */ r_ebp = r_esp;
    /* 00665803: sub esp, 0x414 */ {  u32 a = r_esp; u32 b = 0x414u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00665809: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0066580e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00665810: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00665813: mov byte ptr [ebp - 0x408], 0 */ W8((u32)(r_ebp+0xfffffbf8u), 0x0u);
    /* 0066581a: push 0x3ff */ { u32 v = 0x3ffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066581f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00665821: lea eax, [ebp - 0x407] */ r_eax = (u32)(r_ebp+0xfffffbf9u);
    /* 00665827: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00665828: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x66582du); f_00686fa2();
    /* 0066582d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00665830: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00665833: movsx edx, byte ptr [ecx] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx));
    /* 00665836: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00665838: jne 0x665844 */ if (!fZ) goto L_00665844;
L_0066583a:; BB(0x0066583a);
    /* 0066583a: mov eax, 0x21 */ r_eax = 0x21u;
    /* 0066583f: jmp 0x6659c3 */ goto L_006659c3;
L_00665844:; BB(0x00665844);
    /* 00665844: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00665847: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00665848: push 0x6d61f8 */ { u32 v = 0x6d61f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0066584d: push 0x795fc0 */ { u32 v = 0x795fc0u; r_esp -= 4; W32(r_esp, v); }
    /* 00665852: push 0x6de52c */ { u32 v = 0x6de52cu; r_esp -= 4; W32(r_esp, v); }
    /* 00665857: lea ecx, [ebp - 0x408] */ r_ecx = (u32)(r_ebp+0xfffffbf8u);
    /* 0066585d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066585e: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x665864u); call_ind(t); }
    /* 00665864: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00665867: push 0x6df8cc */ { u32 v = 0x6df8ccu; r_esp -= 4; W32(r_esp, v); }
    /* 0066586c: lea edx, [ebp - 0x408] */ r_edx = (u32)(r_ebp+0xfffffbf8u);
    /* 00665872: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00665873: call dword ptr [0x6b22fc] */ { u32 t = R32((u32)(0x6b22fcu)); r_esp -= 4; W32(r_esp, 0x665879u); call_ind(t); }
    /* 00665879: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066587c: mov dword ptr [ebp - 0x40c], eax */ W32((u32)(r_ebp+0xfffffbf4u), r_eax);
    /* 00665882: cmp dword ptr [ebp - 0x40c], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffbf4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00665889: jne 0x665895 */ if (!fZ) goto L_00665895;
L_0066588b:; BB(0x0066588b);
    /* 0066588b: mov eax, 0x21 */ r_eax = 0x21u;
    /* 00665890: jmp 0x6659c3 */ goto L_006659c3;
L_00665895:; BB(0x00665895);
    /* 00665895: push 0x6df8c4 */ { u32 v = 0x6df8c4u; r_esp -= 4; W32(r_esp, v); }
    /* 0066589a: mov eax, dword ptr [ebp - 0x40c] */ r_eax = R32((u32)(r_ebp+0xfffffbf4u));
    /* 006658a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006658a1: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x6658a6u); f_00686d8e();
    /* 006658a6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006658a9: push 0x6c2d28 */ { u32 v = 0x6c2d28u; r_esp -= 4; W32(r_esp, v); }
    /* 006658ae: lea ecx, [ebp - 0x408] */ r_ecx = (u32)(r_ebp+0xfffffbf8u);
    /* 006658b4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006658b5: call 0x5ea9c0 */ r_esp -= 4; W32(r_esp, 0x6658bau); f_005ea9c0();
    /* 006658ba: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006658bd: mov dword ptr [ebp - 0x410], eax */ W32((u32)(r_ebp+0xfffffbf0u), r_eax);
    /* 006658c3: cmp dword ptr [ebp - 0x410], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffbf0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006658ca: jne 0x665967 */ if (!fZ) goto L_00665967;
L_006658d0:; BB(0x006658d0);
    /* 006658d0: push 0x6c2d2c */ { u32 v = 0x6c2d2cu; r_esp -= 4; W32(r_esp, v); }
    /* 006658d5: lea edx, [ebp - 0x408] */ r_edx = (u32)(r_ebp+0xfffffbf8u);
    /* 006658db: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006658dc: call 0x5ea9c0 */ r_esp -= 4; W32(r_esp, 0x6658e1u); f_005ea9c0();
    /* 006658e1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006658e4: mov dword ptr [ebp - 0x410], eax */ W32((u32)(r_ebp+0xfffffbf0u), r_eax);
    /* 006658ea: cmp dword ptr [ebp - 0x410], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffbf0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006658f1: jne 0x665918 */ if (!fZ) goto L_00665918;
L_006658f3:; BB(0x006658f3);
    /* 006658f3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 006658f5: jne 0x66590e */ if (!fZ) goto L_0066590e;
L_006658f7:; BB(0x006658f7);
    /* 006658f7: push 0x373 */ { u32 v = 0x373u; r_esp -= 4; W32(r_esp, v); }
    /* 006658fc: push 0x6df9a8 */ { u32 v = 0x6df9a8u; r_esp -= 4; W32(r_esp, v); }
    /* 00665901: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00665906: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x66590bu); f_005e9f20();
    /* 0066590b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0066590e:; BB(0x0066590e);
    /* 0066590e: mov eax, 0x21 */ r_eax = 0x21u;
    /* 00665913: jmp 0x6659c3 */ goto L_006659c3;
L_00665918:; BB(0x00665918);
    /* 00665918: mov dword ptr [ebp - 0x414], 0x21 */ W32((u32)(r_ebp+0xfffffbecu), 0x21u);
    /* 00665922: mov edx, dword ptr [ebp - 0x410] */ r_edx = R32((u32)(r_ebp+0xfffffbf0u));
    /* 00665928: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00665929: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0066592b: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0066592d: lea eax, [ebp - 0x414] */ r_eax = (u32)(r_ebp+0xfffffbecu);
    /* 00665933: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00665934: call dword ptr [0x6b2260] */ { u32 t = R32((u32)(0x6b2260u)); r_esp -= 4; W32(r_esp, 0x66593au); call_ind(t); }
    /* 0066593a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066593d: mov ecx, dword ptr [ebp - 0x410] */ r_ecx = R32((u32)(r_ebp+0xfffffbf0u));
    /* 00665943: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00665944: call dword ptr [0x6b2258] */ { u32 t = R32((u32)(0x6b2258u)); r_esp -= 4; W32(r_esp, 0x66594au); call_ind(t); }
    /* 0066594a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066594d: push 0x6c2d28 */ { u32 v = 0x6c2d28u; r_esp -= 4; W32(r_esp, v); }
    /* 00665952: lea edx, [ebp - 0x408] */ r_edx = (u32)(r_ebp+0xfffffbf8u);
    /* 00665958: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00665959: call 0x5ea9c0 */ r_esp -= 4; W32(r_esp, 0x66595eu); f_005ea9c0();
    /* 0066595e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00665961: mov dword ptr [ebp - 0x410], eax */ W32((u32)(r_ebp+0xfffffbf0u), r_eax);
L_00665967:; BB(0x00665967);
    /* 00665967: cmp dword ptr [ebp - 0x410], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffbf0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066596e: jne 0x665992 */ if (!fZ) goto L_00665992;
L_00665970:; BB(0x00665970);
    /* 00665970: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00665972: jne 0x66598b */ if (!fZ) goto L_0066598b;
L_00665974:; BB(0x00665974);
    /* 00665974: push 0x37e */ { u32 v = 0x37eu; r_esp -= 4; W32(r_esp, v); }
    /* 00665979: push 0x6df9a8 */ { u32 v = 0x6df9a8u; r_esp -= 4; W32(r_esp, v); }
    /* 0066597e: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00665983: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x665988u); f_005e9f20();
    /* 00665988: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0066598b:; BB(0x0066598b);
    /* 0066598b: mov eax, 0x21 */ r_eax = 0x21u;
    /* 00665990: jmp 0x6659c3 */ goto L_006659c3;
L_00665992:; BB(0x00665992);
    /* 00665992: mov edx, dword ptr [ebp - 0x410] */ r_edx = R32((u32)(r_ebp+0xfffffbf0u));
    /* 00665998: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00665999: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0066599b: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0066599d: lea eax, [ebp - 0x414] */ r_eax = (u32)(r_ebp+0xfffffbecu);
    /* 006659a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006659a4: call dword ptr [0x6b225c] */ { u32 t = R32((u32)(0x6b225cu)); r_esp -= 4; W32(r_esp, 0x6659aau); call_ind(t); }
    /* 006659aa: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006659ad: mov ecx, dword ptr [ebp - 0x410] */ r_ecx = R32((u32)(r_ebp+0xfffffbf0u));
    /* 006659b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006659b4: call dword ptr [0x6b2258] */ { u32 t = R32((u32)(0x6b2258u)); r_esp -= 4; W32(r_esp, 0x6659bau); call_ind(t); }
    /* 006659ba: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006659bd: mov eax, dword ptr [ebp - 0x414] */ r_eax = R32((u32)(r_ebp+0xfffffbecu));
L_006659c3:; BB(0x006659c3);
    /* 006659c3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006659c6: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006659c8: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x6659cdu); f_00686d72();
    /* 006659cd: mov esp, ebp */ r_esp = r_ebp;
    /* 006659cf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006659d0: ret  */ FN_RET(0x00665800); r_esp += 4; return;
}

void f_006659e0(void) /* face::func_006659e0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006659e0);
    /* 006659e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006659e1: mov ebp, esp */ r_ebp = r_esp;
    /* 006659e3: sub esp, 0x410 */ {  u32 a = r_esp; u32 b = 0x410u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006659e9: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 006659ee: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006659f0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 006659f3: mov byte ptr [ebp - 0x408], 0 */ W8((u32)(r_ebp+0xfffffbf8u), 0x0u);
    /* 006659fa: push 0x3ff */ { u32 v = 0x3ffu; r_esp -= 4; W32(r_esp, v); }
    /* 006659ff: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00665a01: lea eax, [ebp - 0x407] */ r_eax = (u32)(r_ebp+0xfffffbf9u);
    /* 00665a07: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00665a08: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x665a0du); f_00686fa2();
    /* 00665a0d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00665a10: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00665a13: movsx edx, byte ptr [ecx] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx));
    /* 00665a16: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00665a18: jne 0x665a1f */ if (!fZ) goto L_00665a1f;
L_00665a1a:; BB(0x00665a1a);
    /* 00665a1a: jmp 0x665aff */ goto L_00665aff;
L_00665a1f:; BB(0x00665a1f);
    /* 00665a1f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00665a22: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00665a23: push 0x6d61f8 */ { u32 v = 0x6d61f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00665a28: push 0x795fc0 */ { u32 v = 0x795fc0u; r_esp -= 4; W32(r_esp, v); }
    /* 00665a2d: push 0x6de52c */ { u32 v = 0x6de52cu; r_esp -= 4; W32(r_esp, v); }
    /* 00665a32: lea ecx, [ebp - 0x408] */ r_ecx = (u32)(r_ebp+0xfffffbf8u);
    /* 00665a38: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00665a39: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x665a3fu); call_ind(t); }
    /* 00665a3f: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00665a42: push 0x6df8cc */ { u32 v = 0x6df8ccu; r_esp -= 4; W32(r_esp, v); }
    /* 00665a47: lea edx, [ebp - 0x408] */ r_edx = (u32)(r_ebp+0xfffffbf8u);
    /* 00665a4d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00665a4e: call dword ptr [0x6b22fc] */ { u32 t = R32((u32)(0x6b22fcu)); r_esp -= 4; W32(r_esp, 0x665a54u); call_ind(t); }
    /* 00665a54: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00665a57: mov dword ptr [ebp - 0x40c], eax */ W32((u32)(r_ebp+0xfffffbf4u), r_eax);
    /* 00665a5d: cmp dword ptr [ebp - 0x40c], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffbf4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00665a64: jne 0x665a83 */ if (!fZ) goto L_00665a83;
L_00665a66:; BB(0x00665a66);
    /* 00665a66: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00665a68: jne 0x665a81 */ if (!fZ) goto L_00665a81;
L_00665a6a:; BB(0x00665a6a);
    /* 00665a6a: push 0x392 */ { u32 v = 0x392u; r_esp -= 4; W32(r_esp, v); }
    /* 00665a6f: push 0x6df9a8 */ { u32 v = 0x6df9a8u; r_esp -= 4; W32(r_esp, v); }
    /* 00665a74: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00665a79: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x665a7eu); f_005e9f20();
    /* 00665a7e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00665a81:; BB(0x00665a81);
    /* 00665a81: jmp 0x665aff */ goto L_00665aff;
L_00665a83:; BB(0x00665a83);
    /* 00665a83: push 0x6df8c4 */ { u32 v = 0x6df8c4u; r_esp -= 4; W32(r_esp, v); }
    /* 00665a88: mov edx, dword ptr [ebp - 0x40c] */ r_edx = R32((u32)(r_ebp+0xfffffbf4u));
    /* 00665a8e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00665a8f: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x665a94u); f_00686d8e();
    /* 00665a94: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00665a97: push 0x6c2d2c */ { u32 v = 0x6c2d2cu; r_esp -= 4; W32(r_esp, v); }
    /* 00665a9c: lea eax, [ebp - 0x408] */ r_eax = (u32)(r_ebp+0xfffffbf8u);
    /* 00665aa2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00665aa3: call 0x5ea9c0 */ r_esp -= 4; W32(r_esp, 0x665aa8u); f_005ea9c0();
    /* 00665aa8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00665aab: mov dword ptr [ebp - 0x410], eax */ W32((u32)(r_ebp+0xfffffbf0u), r_eax);
    /* 00665ab1: cmp dword ptr [ebp - 0x410], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffbf0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00665ab8: jne 0x665ad7 */ if (!fZ) goto L_00665ad7;
L_00665aba:; BB(0x00665aba);
    /* 00665aba: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00665abc: jne 0x665ad5 */ if (!fZ) goto L_00665ad5;
L_00665abe:; BB(0x00665abe);
    /* 00665abe: push 0x398 */ { u32 v = 0x398u; r_esp -= 4; W32(r_esp, v); }
    /* 00665ac3: push 0x6df9a8 */ { u32 v = 0x6df9a8u; r_esp -= 4; W32(r_esp, v); }
    /* 00665ac8: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00665acd: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x665ad2u); f_005e9f20();
    /* 00665ad2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00665ad5:; BB(0x00665ad5);
    /* 00665ad5: jmp 0x665aff */ goto L_00665aff;
L_00665ad7:; BB(0x00665ad7);
    /* 00665ad7: mov eax, dword ptr [ebp - 0x410] */ r_eax = R32((u32)(r_ebp+0xfffffbf0u));
    /* 00665add: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00665ade: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00665ae0: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00665ae2: lea ecx, [ebp + 0xc] */ r_ecx = (u32)(r_ebp+0xcu);
    /* 00665ae5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00665ae6: call dword ptr [0x6b2260] */ { u32 t = R32((u32)(0x6b2260u)); r_esp -= 4; W32(r_esp, 0x665aecu); call_ind(t); }
    /* 00665aec: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00665aef: mov edx, dword ptr [ebp - 0x410] */ r_edx = R32((u32)(r_ebp+0xfffffbf0u));
    /* 00665af5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00665af6: call dword ptr [0x6b2258] */ { u32 t = R32((u32)(0x6b2258u)); r_esp -= 4; W32(r_esp, 0x665afcu); call_ind(t); }
    /* 00665afc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00665aff:; BB(0x00665aff);
    /* 00665aff: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00665b02: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00665b04: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x665b09u); f_00686d72();
    /* 00665b09: mov esp, ebp */ r_esp = r_ebp;
    /* 00665b0b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00665b0c: ret  */ FN_RET(0x006659e0); r_esp += 4; return;
}

