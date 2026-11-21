#include "protos.h"

void f_005541c0(void) /* sub_5541C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005541c0);
    /* 005541c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005541c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005541c3: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005541c6: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 005541c9: mov dword ptr [ebp - 0x2c], 0x13895 */ W32((u32)(r_ebp+0xffffffd4u), 0x13895u);
    /* 005541d0: mov dword ptr [ebp - 0x28], 0x1388f */ W32((u32)(r_ebp+0xffffffd8u), 0x1388fu);
    /* 005541d7: mov dword ptr [ebp - 0x24], 0x13890 */ W32((u32)(r_ebp+0xffffffdcu), 0x13890u);
    /* 005541de: mov dword ptr [ebp - 0x20], 0x1388e */ W32((u32)(r_ebp+0xffffffe0u), 0x1388eu);
    /* 005541e5: mov dword ptr [ebp - 0x1c], 0x13891 */ W32((u32)(r_ebp+0xffffffe4u), 0x13891u);
    /* 005541ec: mov dword ptr [ebp - 0x18], 0x13894 */ W32((u32)(r_ebp+0xffffffe8u), 0x13894u);
    /* 005541f3: mov dword ptr [ebp - 0x14], 0x13896 */ W32((u32)(r_ebp+0xffffffecu), 0x13896u);
    /* 005541fa: mov dword ptr [ebp - 0x10], 0x13892 */ W32((u32)(r_ebp+0xfffffff0u), 0x13892u);
    /* 00554201: mov dword ptr [ebp - 0xc], 0x13897 */ W32((u32)(r_ebp+0xfffffff4u), 0x13897u);
    /* 00554208: mov dword ptr [ebp - 8], 0x13898 */ W32((u32)(r_ebp+0xfffffff8u), 0x13898u);
    /* 0055420f: mov dword ptr [ebp - 4], 0x13893 */ W32((u32)(r_ebp+0xfffffffcu), 0x13893u);
    /* 00554216: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 0055421b: mov ecx, dword ptr [eax + 0x4f14] */ r_ecx = R32((u32)(r_eax+0x4f14u));
    /* 00554221: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 00554224: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00554227: mov eax, dword ptr [ebp + edx*4 - 0x2c] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xffffffd4u));
    /* 0055422b: mov esp, ebp */ r_esp = r_ebp;
    /* 0055422d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055422e: ret  */ FN_RET(0x005541c0); r_esp += 4; return;
}

void f_00554230(void) /* sub_554230 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00554230);
    /* 00554230: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00554231: mov ebp, esp */ r_ebp = r_esp;
    /* 00554233: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00554236: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00554239: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055423c: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0055423f: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00554245: mov edx, dword ptr [ecx + 0x4f14] */ r_edx = R32((u32)(r_ecx+0x4f14u));
    /* 0055424b: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0055424e: cmp dword ptr [ebp - 0xc], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00554252: ja 0x554288 */ if ((!fC&&!fZ)) goto L_00554288;
L_00554254:; BB(0x00554254);
    /* 00554254: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00554257: jmp dword ptr [eax*4 + 0x554294] */ { u32 t = R32((u32)(r_eax*4+0x554294u)); switch (t) { case 0x55427au: goto L_0055427a; case 0x55425eu: goto L_0055425e; case 0x554265u: goto L_00554265; case 0x55426cu: goto L_0055426c; case 0x554281u: goto L_00554281; case 0x554273u: goto L_00554273; default: UNSUP(0x00554257, "jump table entry is not a known target"); } }
L_0055425e:; BB(0x0055425e);
    /* 0055425e: mov eax, 0x1389b */ r_eax = 0x1389bu;
    /* 00554263: jmp 0x55428d */ goto L_0055428d;
L_00554265:; BB(0x00554265);
    /* 00554265: mov eax, 0x1389c */ r_eax = 0x1389cu;
    /* 0055426a: jmp 0x55428d */ goto L_0055428d;
L_0055426c:; BB(0x0055426c);
    /* 0055426c: mov eax, 0x1389a */ r_eax = 0x1389au;
    /* 00554271: jmp 0x55428d */ goto L_0055428d;
L_00554273:; BB(0x00554273);
    /* 00554273: mov eax, 0x30f356 */ r_eax = 0x30f356u;
    /* 00554278: jmp 0x55428d */ goto L_0055428d;
L_0055427a:; BB(0x0055427a);
    /* 0055427a: mov eax, 0x30f355 */ r_eax = 0x30f355u;
    /* 0055427f: jmp 0x55428d */ goto L_0055428d;
L_00554281:; BB(0x00554281);
    /* 00554281: mov eax, 0x30f354 */ r_eax = 0x30f354u;
    /* 00554286: jmp 0x55428d */ goto L_0055428d;
L_00554288:; BB(0x00554288);
    /* 00554288: mov eax, 0x1389a */ r_eax = 0x1389au;
L_0055428d:; BB(0x0055428d);
    /* 0055428d: mov esp, ebp */ r_esp = r_ebp;
    /* 0055428f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00554290: ret  */ FN_RET(0x00554230); r_esp += 4; return;
}

void f_005542c0(void) /* sub_5542C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005542c0);
    /* 005542c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005542c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005542c3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005542c5: push 0x6a5584 */ { u32 v = 0x6a5584u; r_esp -= 4; W32(r_esp, v); }
    /* 005542ca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005542d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005542d1: sub esp, 0x11c */ {  u32 a = r_esp; u32 b = 0x11cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005542d7: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005542dc: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005542de: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005542df: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005542e2: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005542e8: mov dword ptr [ebp - 0x124], ecx */ W32((u32)(r_ebp+0xfffffedcu), r_ecx);
    /* 005542ee: mov eax, dword ptr [ebp - 0x124] */ r_eax = R32((u32)(r_ebp+0xfffffedcu));
    /* 005542f4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005542f6: mov ecx, dword ptr [ebp - 0x124] */ r_ecx = R32((u32)(r_ebp+0xfffffedcu));
    /* 005542fc: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005542ff: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x554301u); call_ind(t); }
    /* 00554301: mov ecx, dword ptr [0x793420] */ r_ecx = R32((u32)(0x793420u));
    /* 00554307: call 0x559130 */ r_esp -= 4; W32(r_esp, 0x55430cu); f_00559130();
    /* 0055430c: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0055430f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00554311: je 0x55432d */ if (fZ) goto L_0055432d;
L_00554313:; BB(0x00554313);
    /* 00554313: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00554315: mov ecx, dword ptr [ebp - 0x124] */ r_ecx = R32((u32)(r_ebp+0xfffffedcu));
    /* 0055431b: call 0x552e90 */ r_esp -= 4; W32(r_esp, 0x554320u); f_00552e90();
    /* 00554320: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00554322: mov ecx, dword ptr [ebp - 0x124] */ r_ecx = R32((u32)(r_ebp+0xfffffedcu));
    /* 00554328: call 0x552e90 */ r_esp -= 4; W32(r_esp, 0x55432du); f_00552e90();
L_0055432d:; BB(0x0055432d);
    /* 0055432d: mov ecx, dword ptr [0x793420] */ r_ecx = R32((u32)(0x793420u));
    /* 00554333: call 0x559180 */ r_esp -= 4; W32(r_esp, 0x554338u); f_00559180();
    /* 00554338: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0055433b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055433d: je 0x554351 */ if (fZ) goto L_00554351;
L_0055433f:; BB(0x0055433f);
    /* 0055433f: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00554341: mov ecx, dword ptr [ebp - 0x124] */ r_ecx = R32((u32)(r_ebp+0xfffffedcu));
    /* 00554347: call 0x552e90 */ r_esp -= 4; W32(r_esp, 0x55434cu); f_00552e90();
    /* 0055434c: jmp 0x55444b */ goto L_0055444b;
L_00554351:; BB(0x00554351);
    /* 00554351: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00554353: mov ecx, dword ptr [ebp - 0x124] */ r_ecx = R32((u32)(r_ebp+0xfffffedcu));
    /* 00554359: call 0x552f00 */ r_esp -= 4; W32(r_esp, 0x55435eu); f_00552f00();
    /* 0055435e: mov eax, dword ptr [0x793420] */ r_eax = R32((u32)(0x793420u));
    /* 00554363: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00554366: mov dword ptr [ebp - 0x120], ecx */ W32((u32)(r_ebp+0xfffffee0u), r_ecx);
    /* 0055436c: cmp dword ptr [ebp - 0x120], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffee0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00554373: jne 0x55444b */ if (!fZ) goto L_0055444b;
L_00554379:; BB(0x00554379);
    /* 00554379: mov edx, dword ptr [ebp - 0x124] */ r_edx = R32((u32)(r_ebp+0xfffffedcu));
    /* 0055437f: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00554382: mov ecx, dword ptr [ebp - 0x124] */ r_ecx = R32((u32)(r_ebp+0xfffffedcu));
    /* 00554388: mov ecx, dword ptr [ecx + 0x6c] */ r_ecx = R32((u32)(r_ecx+0x6cu));
    /* 0055438b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0055438d: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00554390: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x554392u); call_ind(t); }
    /* 00554392: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00554394: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x554399u); f_00686d82();
    /* 00554399: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055439c: mov dword ptr [ebp - 0x11c], eax */ W32((u32)(r_ebp+0xfffffee4u), r_eax);
    /* 005543a2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005543a9: cmp dword ptr [ebp - 0x11c], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffee4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005543b0: je 0x5543c7 */ if (fZ) goto L_005543c7;
L_005543b2:; BB(0x005543b2);
    /* 005543b2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005543b4: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 005543ba: call 0x600a70 */ r_esp -= 4; W32(r_esp, 0x5543bfu); f_00600a70();
    /* 005543bf: mov dword ptr [ebp - 0x128], eax */ W32((u32)(r_ebp+0xfffffed8u), r_eax);
    /* 005543c5: jmp 0x5543d1 */ goto L_005543d1;
L_005543c7:; BB(0x005543c7);
    /* 005543c7: mov dword ptr [ebp - 0x128], 0 */ W32((u32)(r_ebp+0xfffffed8u), 0x0u);
L_005543d1:; BB(0x005543d1);
    /* 005543d1: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 005543d7: mov dword ptr [ebp - 0x118], ecx */ W32((u32)(r_ebp+0xfffffee8u), r_ecx);
    /* 005543dd: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005543e4: mov edx, dword ptr [ebp - 0x118] */ r_edx = R32((u32)(r_ebp+0xfffffee8u));
    /* 005543ea: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005543eb: mov eax, dword ptr [ebp - 0x124] */ r_eax = R32((u32)(r_ebp+0xfffffedcu));
    /* 005543f1: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 005543f4: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x5543f9u); f_005f5d50();
    /* 005543f9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005543fb: mov ecx, dword ptr [ebp - 0x124] */ r_ecx = R32((u32)(r_ebp+0xfffffedcu));
    /* 00554401: mov ecx, dword ptr [ecx + 0x70] */ r_ecx = R32((u32)(r_ecx+0x70u));
    /* 00554404: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x554409u); f_005f5d50();
    /* 00554409: mov edx, dword ptr [ebp - 0x124] */ r_edx = R32((u32)(r_ebp+0xfffffedcu));
    /* 0055440f: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00554412: mov ecx, dword ptr [ebp - 0x124] */ r_ecx = R32((u32)(r_ebp+0xfffffedcu));
    /* 00554418: mov ecx, dword ptr [ecx + 0x70] */ r_ecx = R32((u32)(r_ecx+0x70u));
    /* 0055441b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0055441d: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00554420: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x554422u); call_ind(t); }
    /* 00554422: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00554424: mov ecx, dword ptr [ebp - 0x124] */ r_ecx = R32((u32)(r_ebp+0xfffffedcu));
    /* 0055442a: mov ecx, dword ptr [ecx + 0x74] */ r_ecx = R32((u32)(r_ecx+0x74u));
    /* 0055442d: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x554432u); f_005f5d50();
    /* 00554432: mov edx, dword ptr [ebp - 0x124] */ r_edx = R32((u32)(r_ebp+0xfffffedcu));
    /* 00554438: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0055443b: mov ecx, dword ptr [ebp - 0x124] */ r_ecx = R32((u32)(r_ebp+0xfffffedcu));
    /* 00554441: mov ecx, dword ptr [ecx + 0x74] */ r_ecx = R32((u32)(r_ecx+0x74u));
    /* 00554444: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00554446: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00554449: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x55444bu); call_ind(t); }
L_0055444b:; BB(0x0055444b);
    /* 0055444b: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0055444d: mov ecx, dword ptr [ebp - 0x124] */ r_ecx = R32((u32)(r_ebp+0xfffffedcu));
    /* 00554453: call 0x552e90 */ r_esp -= 4; W32(r_esp, 0x554458u); f_00552e90();
    /* 00554458: mov ecx, dword ptr [0x793420] */ r_ecx = R32((u32)(0x793420u));
    /* 0055445e: call 0x5591a0 */ r_esp -= 4; W32(r_esp, 0x554463u); f_005591a0();
    /* 00554463: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00554466: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00554468: je 0x554480 */ if (fZ) goto L_00554480;
L_0055446a:; BB(0x0055446a);
    /* 0055446a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0055446c: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x554471u); f_005dcb00();
    /* 00554471: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00554474: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00554475: mov ecx, dword ptr [0x79341c] */ r_ecx = R32((u32)(0x79341cu));
    /* 0055447b: call 0x5dbb70 */ r_esp -= 4; W32(r_esp, 0x554480u); f_005dbb70();
L_00554480:; BB(0x00554480);
    /* 00554480: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00554483: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0055448a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0055448b: mov esp, ebp */ r_esp = r_ebp;
    /* 0055448d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055448e: ret  */ FN_RET(0x005542c0); r_esp += 4; return;
}

void f_00554670(void) /* sub_554670 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00554670);
    /* 00554670: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00554671: mov ebp, esp */ r_ebp = r_esp;
    /* 00554673: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00554675: push 0x6a55b0 */ { u32 v = 0x6a55b0u; r_esp -= 4; W32(r_esp, v); }
    /* 0055467a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00554680: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00554681: sub esp, 0x130 */ {  u32 a = r_esp; u32 b = 0x130u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00554687: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00554688: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0055468d: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0055468f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00554690: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00554693: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00554699: mov dword ptr [ebp - 0x138], ecx */ W32((u32)(r_ebp+0xfffffec8u), r_ecx);
    /* 0055469f: mov eax, dword ptr [ebp - 0x138] */ r_eax = R32((u32)(r_ebp+0xfffffec8u));
    /* 005546a5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005546a7: mov ecx, dword ptr [ebp - 0x138] */ r_ecx = R32((u32)(r_ebp+0xfffffec8u));
    /* 005546ad: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005546b0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5546b2u); call_ind(t); }
    /* 005546b2: mov ecx, dword ptr [0x793420] */ r_ecx = R32((u32)(0x793420u));
    /* 005546b8: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005546bb: mov dword ptr [ebp - 0x120], edx */ W32((u32)(r_ebp+0xfffffee0u), r_edx);
    /* 005546c1: cmp dword ptr [ebp - 0x120], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffee0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005546c8: je 0x5548e7 */ if (fZ) goto L_005548e7;
L_005546ce:; BB(0x005546ce);
    /* 005546ce: mov ecx, dword ptr [ebp - 0x138] */ r_ecx = R32((u32)(r_ebp+0xfffffec8u));
    /* 005546d4: call 0x552f70 */ r_esp -= 4; W32(r_esp, 0x5546d9u); f_00552f70();
    /* 005546d9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005546db: mov eax, dword ptr [ebp - 0x138] */ r_eax = R32((u32)(r_ebp+0xfffffec8u));
    /* 005546e1: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 005546e4: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x5546e9u); f_005f5d50();
    /* 005546e9: mov ecx, dword ptr [0x793420] */ r_ecx = R32((u32)(0x793420u));
    /* 005546ef: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 005546f2: mov dword ptr [ebp - 0x124], edx */ W32((u32)(r_ebp+0xfffffedcu), r_edx);
    /* 005546f8: cmp dword ptr [ebp - 0x124], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffedcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005546ff: jne 0x554721 */ if (!fZ) goto L_00554721;
L_00554701:; BB(0x00554701);
    /* 00554701: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00554703: mov eax, dword ptr [ebp - 0x138] */ r_eax = R32((u32)(r_ebp+0xfffffec8u));
    /* 00554709: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 0055470c: mov edx, dword ptr [ebp - 0x138] */ r_edx = R32((u32)(r_ebp+0xfffffec8u));
    /* 00554712: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00554715: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00554717: mov ecx, eax */ r_ecx = r_eax;
    /* 00554719: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0055471f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x554721u); call_ind(t); }
L_00554721:; BB(0x00554721);
    /* 00554721: mov ecx, dword ptr [ebp - 0x138] */ r_ecx = R32((u32)(r_ebp+0xfffffec8u));
    /* 00554727: mov edx, dword ptr [ecx + 0x6c] */ r_edx = R32((u32)(r_ecx+0x6cu));
    /* 0055472a: mov eax, dword ptr [ebp - 0x138] */ r_eax = R32((u32)(r_ebp+0xfffffec8u));
    /* 00554730: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 00554733: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00554735: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00554738: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x55473au); call_ind(t); }
    /* 0055473a: mov ecx, dword ptr [0x793420] */ r_ecx = R32((u32)(0x793420u));
    /* 00554740: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 00554743: mov dword ptr [ebp - 0x128], edx */ W32((u32)(r_ebp+0xfffffed8u), r_edx);
    /* 00554749: mov esi, dword ptr [ebp - 0x128] */ r_esi = R32((u32)(r_ebp+0xfffffed8u));
    /* 0055474f: sub esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00554752: mov eax, dword ptr [ebp - 0x138] */ r_eax = R32((u32)(r_ebp+0xfffffec8u));
    /* 00554758: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 0055475b: call 0x5eb220 */ r_esp -= 4; W32(r_esp, 0x554760u); f_005eb220();
    /* 00554760: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00554762: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00554765: jle 0x5547ed */ if ((fZ||fS!=fO)) goto L_005547ed;
L_0055476b:; BB(0x0055476b);
    /* 0055476b: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0055476d: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x554772u); f_00686d82();
    /* 00554772: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00554775: mov dword ptr [ebp - 0x11c], eax */ W32((u32)(r_ebp+0xfffffee4u), r_eax);
    /* 0055477b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00554782: cmp dword ptr [ebp - 0x11c], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffee4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00554789: je 0x5547b9 */ if (fZ) goto L_005547b9;
L_0055478b:; BB(0x0055478b);
    /* 0055478b: mov ecx, dword ptr [0x793420] */ r_ecx = R32((u32)(0x793420u));
    /* 00554791: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 00554794: mov dword ptr [ebp - 0x12c], edx */ W32((u32)(r_ebp+0xfffffed4u), r_edx);
    /* 0055479a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0055479c: mov eax, dword ptr [ebp - 0x12c] */ r_eax = R32((u32)(r_ebp+0xfffffed4u));
    /* 005547a2: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005547a5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005547a6: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 005547ac: call 0x600f30 */ r_esp -= 4; W32(r_esp, 0x5547b1u); f_00600f30();
    /* 005547b1: mov dword ptr [ebp - 0x13c], eax */ W32((u32)(r_ebp+0xfffffec4u), r_eax);
    /* 005547b7: jmp 0x5547c3 */ goto L_005547c3;
L_005547b9:; BB(0x005547b9);
    /* 005547b9: mov dword ptr [ebp - 0x13c], 0 */ W32((u32)(r_ebp+0xfffffec4u), 0x0u);
L_005547c3:; BB(0x005547c3);
    /* 005547c3: mov ecx, dword ptr [ebp - 0x13c] */ r_ecx = R32((u32)(r_ebp+0xfffffec4u));
    /* 005547c9: mov dword ptr [ebp - 0x118], ecx */ W32((u32)(r_ebp+0xfffffee8u), r_ecx);
    /* 005547cf: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005547d6: mov edx, dword ptr [ebp - 0x118] */ r_edx = R32((u32)(r_ebp+0xfffffee8u));
    /* 005547dc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005547dd: mov eax, dword ptr [ebp - 0x138] */ r_eax = R32((u32)(r_ebp+0xfffffec8u));
    /* 005547e3: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 005547e6: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x5547ebu); f_005f5d50();
    /* 005547eb: jmp 0x554822 */ goto L_00554822;
L_005547ed:; BB(0x005547ed);
    /* 005547ed: mov ecx, dword ptr [0x793420] */ r_ecx = R32((u32)(0x793420u));
    /* 005547f3: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005547f6: mov dword ptr [ebp - 0x130], edx */ W32((u32)(r_ebp+0xfffffed0u), r_edx);
    /* 005547fc: mov eax, dword ptr [ebp - 0x130] */ r_eax = R32((u32)(r_ebp+0xfffffed0u));
    /* 00554802: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00554805: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00554806: mov ecx, dword ptr [ebp - 0x138] */ r_ecx = R32((u32)(r_ebp+0xfffffec8u));
    /* 0055480c: mov edx, dword ptr [ecx + 0x6c] */ r_edx = R32((u32)(r_ecx+0x6cu));
    /* 0055480f: mov eax, dword ptr [ebp - 0x138] */ r_eax = R32((u32)(r_ebp+0xfffffec8u));
    /* 00554815: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 00554818: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0055481a: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00554820: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x554822u); call_ind(t); }
L_00554822:; BB(0x00554822);
    /* 00554822: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00554824: mov ecx, dword ptr [ebp - 0x138] */ r_ecx = R32((u32)(r_ebp+0xfffffec8u));
    /* 0055482a: mov ecx, dword ptr [ecx + 0x70] */ r_ecx = R32((u32)(r_ecx+0x70u));
    /* 0055482d: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x554832u); f_005f5d50();
    /* 00554832: mov edx, dword ptr [ebp - 0x138] */ r_edx = R32((u32)(r_ebp+0xfffffec8u));
    /* 00554838: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0055483b: mov ecx, dword ptr [ebp - 0x138] */ r_ecx = R32((u32)(r_ebp+0xfffffec8u));
    /* 00554841: mov ecx, dword ptr [ecx + 0x70] */ r_ecx = R32((u32)(r_ecx+0x70u));
    /* 00554844: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00554846: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00554849: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x55484bu); call_ind(t); }
    /* 0055484b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0055484d: mov ecx, dword ptr [ebp - 0x138] */ r_ecx = R32((u32)(r_ebp+0xfffffec8u));
    /* 00554853: mov ecx, dword ptr [ecx + 0x74] */ r_ecx = R32((u32)(r_ecx+0x74u));
    /* 00554856: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x55485bu); f_005f5d50();
    /* 0055485b: mov edx, dword ptr [ebp - 0x138] */ r_edx = R32((u32)(r_ebp+0xfffffec8u));
    /* 00554861: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00554864: mov ecx, dword ptr [ebp - 0x138] */ r_ecx = R32((u32)(r_ebp+0xfffffec8u));
    /* 0055486a: mov ecx, dword ptr [ecx + 0x74] */ r_ecx = R32((u32)(r_ecx+0x74u));
    /* 0055486d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0055486f: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00554872: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x554874u); call_ind(t); }
    /* 00554874: mov ecx, dword ptr [ebp - 0x138] */ r_ecx = R32((u32)(r_ebp+0xfffffec8u));
    /* 0055487a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0055487c: mov ecx, dword ptr [ebp - 0x138] */ r_ecx = R32((u32)(r_ebp+0xfffffec8u));
    /* 00554882: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 00554885: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x554887u); call_ind(t); }
    /* 00554887: mov ecx, dword ptr [0x793420] */ r_ecx = R32((u32)(0x793420u));
    /* 0055488d: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 00554890: mov dword ptr [ebp - 0x134], edx */ W32((u32)(r_ebp+0xfffffeccu), r_edx);
    /* 00554896: cmp dword ptr [ebp - 0x134], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffeccu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055489d: jne 0x5548ae */ if (!fZ) goto L_005548ae;
L_0055489f:; BB(0x0055489f);
    /* 0055489f: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005548a1: mov ecx, dword ptr [ebp - 0x138] */ r_ecx = R32((u32)(r_ebp+0xfffffec8u));
    /* 005548a7: call 0x552f00 */ r_esp -= 4; W32(r_esp, 0x5548acu); f_00552f00();
    /* 005548ac: jmp 0x5548e7 */ goto L_005548e7;
L_005548ae:; BB(0x005548ae);
    /* 005548ae: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005548b0: mov ecx, dword ptr [ebp - 0x138] */ r_ecx = R32((u32)(r_ebp+0xfffffec8u));
    /* 005548b6: call 0x552e90 */ r_esp -= 4; W32(r_esp, 0x5548bbu); f_00552e90();
    /* 005548bb: mov ecx, dword ptr [0x793420] */ r_ecx = R32((u32)(0x793420u));
    /* 005548c1: call 0x559130 */ r_esp -= 4; W32(r_esp, 0x5548c6u); f_00559130();
    /* 005548c6: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005548c9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005548cb: je 0x5548e7 */ if (fZ) goto L_005548e7;
L_005548cd:; BB(0x005548cd);
    /* 005548cd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005548cf: mov ecx, dword ptr [ebp - 0x138] */ r_ecx = R32((u32)(r_ebp+0xfffffec8u));
    /* 005548d5: call 0x552e90 */ r_esp -= 4; W32(r_esp, 0x5548dau); f_00552e90();
    /* 005548da: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005548dc: mov ecx, dword ptr [ebp - 0x138] */ r_ecx = R32((u32)(r_ebp+0xfffffec8u));
    /* 005548e2: call 0x552e90 */ r_esp -= 4; W32(r_esp, 0x5548e7u); f_00552e90();
L_005548e7:; BB(0x005548e7);
    /* 005548e7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005548ea: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005548f1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005548f2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005548f3: mov esp, ebp */ r_esp = r_ebp;
    /* 005548f5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005548f6: ret  */ FN_RET(0x00554670); r_esp += 4; return;
}

void f_00554950(void) /* sub_554950 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00554950);
    /* 00554950: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00554951: mov ebp, esp */ r_ebp = r_esp;
    /* 00554953: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00554955: push 0x6a55e4 */ { u32 v = 0x6a55e4u; r_esp -= 4; W32(r_esp, v); }
    /* 0055495a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00554960: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00554961: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00554964: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00554969: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0055496b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055496c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0055496f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00554975: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 00554978: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 0055497d: mov ecx, dword ptr [eax + 0x4f14] */ r_ecx = R32((u32)(r_eax+0x4f14u));
    /* 00554983: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00554986: mov edx, dword ptr [0x793420] */ r_edx = R32((u32)(0x793420u));
    /* 0055498c: add edx, 0x22 */ {  u32 a = r_edx; u32 b = 0x22u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055498f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00554990: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00554993: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00554994: mov ecx, dword ptr [0x793428] */ r_ecx = R32((u32)(0x793428u));
    /* 0055499a: call 0x54c460 */ r_esp -= 4; W32(r_esp, 0x55499fu); f_0054c460();
    /* 0055499f: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005549a2: mov ecx, dword ptr [0x793420] */ r_ecx = R32((u32)(0x793420u));
    /* 005549a8: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 005549ab: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 005549ae: cmp dword ptr [ebp - 0x28], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005549b2: jne 0x5549d2 */ if (!fZ) goto L_005549d2;
L_005549b4:; BB(0x005549b4);
    /* 005549b4: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005549b6: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005549b9: call 0x552e90 */ r_esp -= 4; W32(r_esp, 0x5549beu); f_00552e90();
    /* 005549be: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005549c0: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005549c3: call 0x552e90 */ r_esp -= 4; W32(r_esp, 0x5549c8u); f_00552e90();
    /* 005549c8: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005549ca: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005549cd: call 0x552e90 */ r_esp -= 4; W32(r_esp, 0x5549d2u); f_00552e90();
L_005549d2:; BB(0x005549d2);
    /* 005549d2: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005549d5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005549d7: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005549da: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005549dd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5549dfu); call_ind(t); }
    /* 005549df: cmp dword ptr [ebp - 0x10], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005549e3: jle 0x554b48 */ if ((fZ||fS!=fO)) goto L_00554b48;
L_005549e9:; BB(0x005549e9);
    /* 005549e9: mov ecx, dword ptr [0x793420] */ r_ecx = R32((u32)(0x793420u));
    /* 005549ef: movzx edx, byte ptr [ecx + 0x2c] */ r_edx = (u32)R8((u32)(r_ecx+0x2cu));
    /* 005549f3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005549f5: jne 0x554b48 */ if (!fZ) goto L_00554b48;
L_005549fb:; BB(0x005549fb);
    /* 005549fb: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005549fe: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 00554a01: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00554a04: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00554a07: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00554a09: mov ecx, eax */ r_ecx = r_eax;
    /* 00554a0b: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00554a0e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x554a10u); call_ind(t); }
    /* 00554a10: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00554a13: imul ecx, ecx, 6 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x6u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00554a16: add ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00554a19: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00554a1a: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00554a1d: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00554a20: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00554a23: mov ecx, dword ptr [ecx + 0x70] */ r_ecx = R32((u32)(r_ecx+0x70u));
    /* 00554a26: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00554a28: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00554a2e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x554a30u); call_ind(t); }
    /* 00554a30: mov ecx, dword ptr [0x793420] */ r_ecx = R32((u32)(0x793420u));
    /* 00554a36: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 00554a39: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 00554a3c: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00554a3f: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 00554a42: call 0x5eb220 */ r_esp -= 4; W32(r_esp, 0x554a47u); f_005eb220();
    /* 00554a47: add eax, dword ptr [ebp - 0x2c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffd4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00554a4a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00554a4b: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00554a4e: mov edx, dword ptr [ecx + 0x74] */ r_edx = R32((u32)(r_ecx+0x74u));
    /* 00554a51: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00554a54: mov ecx, dword ptr [eax + 0x74] */ r_ecx = R32((u32)(r_eax+0x74u));
    /* 00554a57: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00554a59: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00554a5f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x554a61u); call_ind(t); }
    /* 00554a61: mov ecx, dword ptr [0x793420] */ r_ecx = R32((u32)(0x793420u));
    /* 00554a67: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 00554a6a: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 00554a6d: cmp dword ptr [ebp - 0x30], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00554a71: jne 0x554aa0 */ if (!fZ) goto L_00554aa0;
L_00554a73:; BB(0x00554a73);
    /* 00554a73: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00554a76: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 00554a79: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00554a7c: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00554a7f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00554a81: mov ecx, eax */ r_ecx = r_eax;
    /* 00554a83: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00554a86: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x554a88u); call_ind(t); }
    /* 00554a88: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00554a8b: mov edx, dword ptr [ecx + 0x74] */ r_edx = R32((u32)(r_ecx+0x74u));
    /* 00554a8e: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00554a91: mov ecx, dword ptr [eax + 0x74] */ r_ecx = R32((u32)(r_eax+0x74u));
    /* 00554a94: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00554a96: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00554a99: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x554a9bu); call_ind(t); }
    /* 00554a9b: jmp 0x554b48 */ goto L_00554b48;
L_00554aa0:; BB(0x00554aa0);
    /* 00554aa0: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 00554aa2: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x554aa7u); f_00686d82();
    /* 00554aa7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00554aaa: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00554aad: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00554ab4: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00554ab8: je 0x554ad1 */ if (fZ) goto L_00554ad1;
L_00554aba:; BB(0x00554aba);
    /* 00554aba: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00554abc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00554abe: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00554ac0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00554ac2: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00554ac4: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00554ac7: call 0x601110 */ r_esp -= 4; W32(r_esp, 0x554accu); f_00601110();
    /* 00554acc: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00554acf: jmp 0x554ad8 */ goto L_00554ad8;
L_00554ad1:; BB(0x00554ad1);
    /* 00554ad1: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_00554ad8:; BB(0x00554ad8);
    /* 00554ad8: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00554adb: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00554ade: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00554ae5: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00554ae8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00554ae9: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00554aec: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 00554aef: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x554af4u); f_005f5d50();
    /* 00554af4: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 00554af6: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x554afbu); f_00686d82();
    /* 00554afb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00554afe: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00554b01: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00554b08: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00554b0c: je 0x554b25 */ if (fZ) goto L_00554b25;
L_00554b0e:; BB(0x00554b0e);
    /* 00554b0e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00554b10: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00554b12: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00554b14: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00554b16: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00554b18: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00554b1b: call 0x601110 */ r_esp -= 4; W32(r_esp, 0x554b20u); f_00601110();
    /* 00554b20: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00554b23: jmp 0x554b2c */ goto L_00554b2c;
L_00554b25:; BB(0x00554b25);
    /* 00554b25: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_00554b2c:; BB(0x00554b2c);
    /* 00554b2c: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00554b2f: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00554b32: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00554b39: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00554b3c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00554b3d: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00554b40: mov ecx, dword ptr [eax + 0x74] */ r_ecx = R32((u32)(r_eax+0x74u));
    /* 00554b43: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x554b48u); f_005f5d50();
L_00554b48:; BB(0x00554b48);
    /* 00554b48: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00554b4b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00554b52: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00554b53: mov esp, ebp */ r_esp = r_ebp;
    /* 00554b55: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00554b56: ret  */ FN_RET(0x00554950); r_esp += 4; return;
}

void f_00554c80(void) /* sub_554C80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00554c80);
    /* 00554c80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00554c81: mov ebp, esp */ r_ebp = r_esp;
    /* 00554c83: sub esp, 0x78 */ {  u32 a = r_esp; u32 b = 0x78u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00554c86: mov dword ptr [ebp - 0x78], ecx */ W32((u32)(r_ebp+0xffffff88u), r_ecx);
    /* 00554c89: mov eax, dword ptr [0x793420] */ r_eax = R32((u32)(0x793420u));
    /* 00554c8e: movzx ecx, byte ptr [eax + 0x2c] */ r_ecx = (u32)R8((u32)(r_eax+0x2cu));
    /* 00554c92: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00554c94: jne 0x554e3a */ if (!fZ) goto L_00554e3a;
L_00554c9a:; BB(0x00554c9a);
    /* 00554c9a: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00554c9e: je 0x554e3a */ if (fZ) goto L_00554e3a;
L_00554ca4:; BB(0x00554ca4);
    /* 00554ca4: cmp dword ptr [ebp + 8], 0x14 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00554ca8: jg 0x554ceb */ if ((!fZ&&fS==fO)) goto L_00554ceb;
L_00554caa:; BB(0x00554caa);
    /* 00554caa: mov edx, dword ptr [ebp - 0x78] */ r_edx = R32((u32)(r_ebp+0xffffff88u));
    /* 00554cad: add edx, 0x94 */ {  u32 a = r_edx; u32 b = 0x94u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00554cb3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00554cb4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00554cb5: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 00554cbb: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00554cbe: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00554cbf: fld1  */ FPUSH(1.0);
    /* 00554cc1: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00554cc4: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00554cc6: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00554cc8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00554cca: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00554ccc: push 0x18a94 */ { u32 v = 0x18a94u; r_esp -= 4; W32(r_esp, v); }
    /* 00554cd1: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 00554cd6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00554cd8: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00554cde: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 00554ce4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x554ce6u); call_ind(t); }
    /* 00554ce6: jmp 0x554e3a */ goto L_00554e3a;
L_00554ceb:; BB(0x00554ceb);
    /* 00554ceb: cmp dword ptr [ebp + 8], 0x64 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00554cef: jg 0x554d33 */ if ((!fZ&&fS==fO)) goto L_00554d33;
L_00554cf1:; BB(0x00554cf1);
    /* 00554cf1: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 00554cf4: add ecx, 0x94 */ {  u32 a = r_ecx; u32 b = 0x94u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00554cfa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00554cfb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00554cfc: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 00554d02: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00554d05: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00554d06: fld1  */ FPUSH(1.0);
    /* 00554d08: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00554d0b: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00554d0d: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00554d0f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00554d11: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00554d13: push 0x18a94 */ { u32 v = 0x18a94u; r_esp -= 4; W32(r_esp, v); }
    /* 00554d18: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 00554d1e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00554d20: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00554d26: mov edx, dword ptr [eax + 0x80] */ r_edx = R32((u32)(r_eax+0x80u));
    /* 00554d2c: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x554d2eu); call_ind(t); }
    /* 00554d2e: jmp 0x554e3a */ goto L_00554e3a;
L_00554d33:; BB(0x00554d33);
    /* 00554d33: mov eax, dword ptr [0x793420] */ r_eax = R32((u32)(0x793420u));
    /* 00554d38: mov cl, byte ptr [eax + 0x2d] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x2du))) & 0xffu);
    /* 00554d3b: mov byte ptr [ebp - 0x71], cl */ W8((u32)(r_ebp+0xffffff8fu), (u8)r_ecx);
    /* 00554d3e: movzx edx, byte ptr [ebp - 0x71] */ r_edx = (u32)R8((u32)(r_ebp+0xffffff8fu));
    /* 00554d42: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00554d44: jne 0x554dc1 */ if (!fZ) goto L_00554dc1;
L_00554d46:; BB(0x00554d46);
    /* 00554d46: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 00554d49: add eax, 0x94 */ {  u32 a = r_eax; u32 b = 0x94u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00554d4e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00554d4f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00554d50: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 00554d56: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00554d59: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00554d5a: fld1  */ FPUSH(1.0);
    /* 00554d5c: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00554d5f: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00554d61: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00554d63: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00554d65: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00554d67: push 0x18a94 */ { u32 v = 0x18a94u; r_esp -= 4; W32(r_esp, v); }
    /* 00554d6c: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00554d72: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00554d74: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00554d7a: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 00554d80: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x554d82u); call_ind(t); }
    /* 00554d82: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 00554d85: add ecx, 0x98 */ {  u32 a = r_ecx; u32 b = 0x98u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00554d8b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00554d8c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00554d8d: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 00554d93: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00554d96: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00554d97: fld1  */ FPUSH(1.0);
    /* 00554d99: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00554d9c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00554d9e: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00554da0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00554da2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00554da4: push 0x18a95 */ { u32 v = 0x18a95u; r_esp -= 4; W32(r_esp, v); }
    /* 00554da9: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 00554daf: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00554db1: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00554db7: mov edx, dword ptr [eax + 0x80] */ r_edx = R32((u32)(r_eax+0x80u));
    /* 00554dbd: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x554dbfu); call_ind(t); }
    /* 00554dbf: jmp 0x554e3a */ goto L_00554e3a;
L_00554dc1:; BB(0x00554dc1);
    /* 00554dc1: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 00554dc4: add eax, 0x94 */ {  u32 a = r_eax; u32 b = 0x94u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00554dc9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00554dca: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00554dcb: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 00554dd1: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00554dd4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00554dd5: fld1  */ FPUSH(1.0);
    /* 00554dd7: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00554dda: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00554ddc: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00554dde: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00554de0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00554de2: push 0x18a94 */ { u32 v = 0x18a94u; r_esp -= 4; W32(r_esp, v); }
    /* 00554de7: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00554ded: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00554def: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00554df5: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 00554dfb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x554dfdu); call_ind(t); }
    /* 00554dfd: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 00554e00: add ecx, 0x98 */ {  u32 a = r_ecx; u32 b = 0x98u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00554e06: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00554e07: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00554e08: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 00554e0e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00554e11: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00554e12: fld1  */ FPUSH(1.0);
    /* 00554e14: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00554e17: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00554e19: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00554e1b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00554e1d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00554e1f: push 0x18a95 */ { u32 v = 0x18a95u; r_esp -= 4; W32(r_esp, v); }
    /* 00554e24: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 00554e2a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00554e2c: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00554e32: mov edx, dword ptr [eax + 0x80] */ r_edx = R32((u32)(r_eax+0x80u));
    /* 00554e38: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x554e3au); call_ind(t); }
L_00554e3a:; BB(0x00554e3a);
    /* 00554e3a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00554e3d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00554e3e: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 00554e41: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00554e43: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 00554e46: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 00554e49: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x554e4bu); call_ind(t); }
    /* 00554e4b: mov esp, ebp */ r_esp = r_ebp;
    /* 00554e4d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00554e4e: ret 4 */ FN_RET(0x00554c80); r_esp += 8; return;
}

void f_00554f60(void) /* sub_554F60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00554f60);
    /* 00554f60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00554f61: mov ebp, esp */ r_ebp = r_esp;
    /* 00554f63: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00554f66: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00554f69: mov ecx, dword ptr [0x793420] */ r_ecx = R32((u32)(0x793420u));
    /* 00554f6f: call 0x557dc0 */ r_esp -= 4; W32(r_esp, 0x554f74u); f_00557dc0();
    /* 00554f74: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 00554f79: mov ecx, dword ptr [eax + 0x4f14] */ r_ecx = R32((u32)(r_eax+0x4f14u));
    /* 00554f7f: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00554f82: mov edx, dword ptr [0x793420] */ r_edx = R32((u32)(0x793420u));
    /* 00554f88: add edx, 0x22 */ {  u32 a = r_edx; u32 b = 0x22u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00554f8b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00554f8c: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00554f8f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00554f90: mov ecx, dword ptr [0x793428] */ r_ecx = R32((u32)(0x793428u));
    /* 00554f96: call 0x54d6a0 */ r_esp -= 4; W32(r_esp, 0x554f9bu); f_0054d6a0();
    /* 00554f9b: mov byte ptr [ebp - 5], al */ W8((u32)(r_ebp+0xfffffffbu), (u8)r_eax);
    /* 00554f9e: movsx ecx, byte ptr [ebp - 5] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebp+0xfffffffbu));
    /* 00554fa2: cmp ecx, 0x2e */ {  u32 a = r_ecx; u32 b = 0x2eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00554fa5: jne 0x554fbb */ if (!fZ) goto L_00554fbb;
L_00554fa7:; BB(0x00554fa7);
    /* 00554fa7: mov ecx, dword ptr [0x793420] */ r_ecx = R32((u32)(0x793420u));
    /* 00554fad: call 0x5573f0 */ r_esp -= 4; W32(r_esp, 0x554fb2u); f_005573f0();
    /* 00554fb2: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00554fb5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00554fb7: je 0x554fbb */ if (fZ) goto L_00554fbb;
L_00554fb9:; BB(0x00554fb9);
    /* 00554fb9: jmp 0x555017 */ goto L_00555017;
L_00554fbb:; BB(0x00554fbb);
    /* 00554fbb: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00554fc2: jmp 0x554fcd */ goto L_00554fcd;
L_00554fc4:; BB(0x00554fc4);
    /* 00554fc4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00554fc7: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00554fca: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00554fcd:; BB(0x00554fcd);
    /* 00554fcd: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00554fd1: jge 0x55500a */ if ((fS==fO)) goto L_0055500a;
L_00554fd3:; BB(0x00554fd3);
    /* 00554fd3: mov ecx, dword ptr [0x793428] */ r_ecx = R32((u32)(0x793428u));
    /* 00554fd9: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00554fdc: movsx edx, byte ptr [ecx + 0x14] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x14u));
    /* 00554fe0: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00554fe3: je 0x555008 */ if (fZ) goto L_00555008;
L_00554fe5:; BB(0x00554fe5);
    /* 00554fe5: mov eax, dword ptr [0x793428] */ r_eax = R32((u32)(0x793428u));
    /* 00554fea: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00554fed: movsx ecx, byte ptr [eax + 0x14] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x14u));
    /* 00554ff1: mov edx, dword ptr [0x793420] */ r_edx = R32((u32)(0x793420u));
    /* 00554ff7: mov ax, word ptr [edx + ecx*2 + 0x22] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x22u))) & 0xffffu);
    /* 00554ffc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00554ffd: mov ecx, dword ptr [0x793420] */ r_ecx = R32((u32)(0x793420u));
    /* 00555003: call 0x557a30 */ r_esp -= 4; W32(r_esp, 0x555008u); f_00557a30();
L_00555008:; BB(0x00555008);
    /* 00555008: jmp 0x554fc4 */ goto L_00554fc4;
L_0055500a:; BB(0x0055500a);
    /* 0055500a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055500d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0055500f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00555012: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00555015: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x555017u); call_ind(t); }
L_00555017:; BB(0x00555017);
    /* 00555017: mov esp, ebp */ r_esp = r_ebp;
    /* 00555019: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055501a: ret  */ FN_RET(0x00554f60); r_esp += 4; return;
}

