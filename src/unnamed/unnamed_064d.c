#include "protos.h"

void f_0064d1d0(void) /* sub_64D1D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064d1d0);
    /* 0064d1d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064d1d1: mov ebp, esp */ r_ebp = r_esp;
    /* 0064d1d3: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064d1d6: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0064d1d9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0064d1e0: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 0064d1e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064d1e4: call dword ptr [0x6b229c] */ { u32 t = R32((u32)(0x6b229cu)); r_esp -= 4; W32(r_esp, 0x64d1eau); call_ind(t); }
    /* 0064d1ea: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064d1ed: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0064d1f0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064d1f1: call dword ptr [0x6b2298] */ { u32 t = R32((u32)(0x6b2298u)); r_esp -= 4; W32(r_esp, 0x64d1f7u); call_ind(t); }
    /* 0064d1f7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064d1fa: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0064d1fd: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0064d200: cmp dword ptr [edx + 8], 0x16 */ {  u32 a = R32((u32)(r_edx+0x8u)); u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064d204: jge 0x64d20f */ if ((fS==fO)) goto L_0064d20f;
L_0064d206:; BB(0x0064d206);
    /* 0064d206: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0064d209: cmp dword ptr [eax + 8], 3 */ {  u32 a = R32((u32)(r_eax+0x8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064d20d: jg 0x64d216 */ if ((!fZ&&fS==fO)) goto L_0064d216;
L_0064d20f:; BB(0x0064d20f);
    /* 0064d20f: mov dword ptr [ebp - 4], 0x446 */ W32((u32)(r_ebp+0xfffffffcu), 0x446u);
L_0064d216:; BB(0x0064d216);
    /* 0064d216: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0064d219: cmp dword ptr [ecx + 8], 5 */ {  u32 a = R32((u32)(r_ecx+0x8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064d21d: jl 0x64d22f */ if ((fS!=fO)) goto L_0064d22f;
L_0064d21f:; BB(0x0064d21f);
    /* 0064d21f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0064d222: cmp dword ptr [edx + 8], 0xa */ {  u32 a = R32((u32)(r_edx+0x8u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064d226: jge 0x64d22f */ if ((fS==fO)) goto L_0064d22f;
L_0064d228:; BB(0x0064d228);
    /* 0064d228: mov dword ptr [ebp - 4], 0x445 */ W32((u32)(r_ebp+0xfffffffcu), 0x445u);
L_0064d22f:; BB(0x0064d22f);
    /* 0064d22f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0064d232: cmp dword ptr [eax + 8], 0xc */ {  u32 a = R32((u32)(r_eax+0x8u)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064d236: jne 0x64d23f */ if (!fZ) goto L_0064d23f;
L_0064d238:; BB(0x0064d238);
    /* 0064d238: mov dword ptr [ebp - 4], 0x447 */ W32((u32)(r_ebp+0xfffffffcu), 0x447u);
L_0064d23f:; BB(0x0064d23f);
    /* 0064d23f: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064d243: je 0x64d253 */ if (fZ) goto L_0064d253;
L_0064d245:; BB(0x0064d245);
    /* 0064d245: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0064d247: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x64d24cu); f_0062fbf0();
    /* 0064d24c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064d24f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064d251: jne 0x64d2a9 */ if (!fZ) goto L_0064d2a9;
L_0064d253:; BB(0x0064d253);
    /* 0064d253: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0064d256: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 0064d259: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0064d25c: cmp dword ptr [ebp - 0x18], 6 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0064d260: ja 0x64d2a9 */ if ((!fC&&!fZ)) goto L_0064d2a9;
L_0064d262:; BB(0x0064d262);
    /* 0064d262: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064d265: jmp dword ptr [eax*4 + 0x64d2b0] */ { u32 t = R32((u32)(r_eax*4+0x64d2b0u)); switch (t) { case 0x64d26cu: goto L_0064d26c; case 0x64d275u: goto L_0064d275; case 0x64d27eu: goto L_0064d27e; case 0x64d287u: goto L_0064d287; case 0x64d290u: goto L_0064d290; case 0x64d299u: goto L_0064d299; case 0x64d2a2u: goto L_0064d2a2; default: UNSUP(0x0064d265, "jump table entry is not a known target"); } }
L_0064d26c:; BB(0x0064d26c);
    /* 0064d26c: mov dword ptr [ebp - 4], 0x3ec */ W32((u32)(r_ebp+0xfffffffcu), 0x3ecu);
    /* 0064d273: jmp 0x64d2a9 */ goto L_0064d2a9;
L_0064d275:; BB(0x0064d275);
    /* 0064d275: mov dword ptr [ebp - 4], 0x3ea */ W32((u32)(r_ebp+0xfffffffcu), 0x3eau);
    /* 0064d27c: jmp 0x64d2a9 */ goto L_0064d2a9;
L_0064d27e:; BB(0x0064d27e);
    /* 0064d27e: mov dword ptr [ebp - 4], 0x3ee */ W32((u32)(r_ebp+0xfffffffcu), 0x3eeu);
    /* 0064d285: jmp 0x64d2a9 */ goto L_0064d2a9;
L_0064d287:; BB(0x0064d287);
    /* 0064d287: mov dword ptr [ebp - 4], 0x3ef */ W32((u32)(r_ebp+0xfffffffcu), 0x3efu);
    /* 0064d28e: jmp 0x64d2a9 */ goto L_0064d2a9;
L_0064d290:; BB(0x0064d290);
    /* 0064d290: mov dword ptr [ebp - 4], 0x3ed */ W32((u32)(r_ebp+0xfffffffcu), 0x3edu);
    /* 0064d297: jmp 0x64d2a9 */ goto L_0064d2a9;
L_0064d299:; BB(0x0064d299);
    /* 0064d299: mov dword ptr [ebp - 4], 0x3e9 */ W32((u32)(r_ebp+0xfffffffcu), 0x3e9u);
    /* 0064d2a0: jmp 0x64d2a9 */ goto L_0064d2a9;
L_0064d2a2:; BB(0x0064d2a2);
    /* 0064d2a2: mov dword ptr [ebp - 4], 0x3eb */ W32((u32)(r_ebp+0xfffffffcu), 0x3ebu);
L_0064d2a9:; BB(0x0064d2a9);
    /* 0064d2a9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064d2ac: mov esp, ebp */ r_esp = r_ebp;
    /* 0064d2ae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064d2af: ret  */ FN_RET(0x0064d1d0); r_esp += 4; return;
}

void f_0064d480(void) /* sub_64D480 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064d480);
    /* 0064d480: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064d481: mov ebp, esp */ r_ebp = r_esp;
    /* 0064d483: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064d486: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0064d489: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064d48c: mov byte ptr [eax + 0x38], 1 */ W8((u32)(r_eax+0x38u), 0x1u);
    /* 0064d490: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0064d492: lea ecx, [ebp - 0x1c] */ r_ecx = (u32)(r_ebp+0xffffffe4u);
    /* 0064d495: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064d496: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064d49c: call 0x5f3bf0 */ r_esp -= 4; W32(r_esp, 0x64d4a1u); f_005f3bf0();
    /* 0064d4a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064d4a2: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0064d4a8: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0064d4aa: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064d4b0: mov edx, dword ptr [eax + 0x364] */ r_edx = R32((u32)(r_eax+0x364u));
    /* 0064d4b6: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x64d4b8u); call_ind(t); }
    /* 0064d4b8: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064d4bb: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0064d4be: mov dword ptr [eax + 0x34], ecx */ W32((u32)(r_eax+0x34u), r_ecx);
    /* 0064d4c1: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064d4c7: call 0x636610 */ r_esp -= 4; W32(r_esp, 0x64d4ccu); f_00636610();
    /* 0064d4cc: cmp dword ptr [ebp - 0x18], eax */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064d4cf: jne 0x64d555 */ if (!fZ) goto L_0064d555;
L_0064d4d5:; BB(0x0064d4d5);
    /* 0064d4d5: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064d4d9: jne 0x64d500 */ if (!fZ) goto L_0064d500;
L_0064d4db:; BB(0x0064d4db);
    /* 0064d4db: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064d4dd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064d4df: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0064d4e1: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0064d4e4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064d4e5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0064d4e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064d4e9: push 0x138c */ { u32 v = 0x138cu; r_esp -= 4; W32(r_esp, v); }
    /* 0064d4ee: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064d4f1: call 0x5f2670 */ r_esp -= 4; W32(r_esp, 0x64d4f6u); f_005f2670();
    /* 0064d4f6: mov eax, 0x138c */ r_eax = 0x138cu;
    /* 0064d4fb: jmp 0x64d5cb */ goto L_0064d5cb;
L_0064d500:; BB(0x0064d500);
    /* 0064d500: cmp dword ptr [ebp - 0x10], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064d504: jne 0x64d531 */ if (!fZ) goto L_0064d531;
L_0064d506:; BB(0x0064d506);
    /* 0064d506: cmp dword ptr [ebp - 0xc], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064d50a: jne 0x64d531 */ if (!fZ) goto L_0064d531;
L_0064d50c:; BB(0x0064d50c);
    /* 0064d50c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064d50e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064d510: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0064d512: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0064d515: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064d516: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0064d519: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064d51a: push 0x138d */ { u32 v = 0x138du; r_esp -= 4; W32(r_esp, v); }
    /* 0064d51f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064d522: call 0x5f2670 */ r_esp -= 4; W32(r_esp, 0x64d527u); f_005f2670();
    /* 0064d527: mov eax, 0x138d */ r_eax = 0x138du;
    /* 0064d52c: jmp 0x64d5cb */ goto L_0064d5cb;
L_0064d531:; BB(0x0064d531);
    /* 0064d531: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064d533: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064d535: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0064d537: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0064d53a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064d53b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0064d53e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064d53f: push 0x138b */ { u32 v = 0x138bu; r_esp -= 4; W32(r_esp, v); }
    /* 0064d544: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064d547: call 0x5f2670 */ r_esp -= 4; W32(r_esp, 0x64d54cu); f_005f2670();
    /* 0064d54c: mov eax, 0x138b */ r_eax = 0x138bu;
    /* 0064d551: jmp 0x64d5cb */ goto L_0064d5cb;
L_0064d555:; BB(0x0064d555);
    /* 0064d555: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064d559: jne 0x64d57d */ if (!fZ) goto L_0064d57d;
L_0064d55b:; BB(0x0064d55b);
    /* 0064d55b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064d55d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064d55f: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0064d561: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0064d564: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064d565: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0064d568: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064d569: push 0x138a */ { u32 v = 0x138au; r_esp -= 4; W32(r_esp, v); }
    /* 0064d56e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064d571: call 0x5f2670 */ r_esp -= 4; W32(r_esp, 0x64d576u); f_005f2670();
    /* 0064d576: mov eax, 0x138a */ r_eax = 0x138au;
    /* 0064d57b: jmp 0x64d5cb */ goto L_0064d5cb;
L_0064d57d:; BB(0x0064d57d);
    /* 0064d57d: cmp dword ptr [ebp - 0x10], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064d581: jne 0x64d5ab */ if (!fZ) goto L_0064d5ab;
L_0064d583:; BB(0x0064d583);
    /* 0064d583: cmp dword ptr [ebp - 0xc], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064d587: jne 0x64d5ab */ if (!fZ) goto L_0064d5ab;
L_0064d589:; BB(0x0064d589);
    /* 0064d589: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064d58b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064d58d: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0064d58f: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0064d592: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064d593: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0064d596: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064d597: push 0x1389 */ { u32 v = 0x1389u; r_esp -= 4; W32(r_esp, v); }
    /* 0064d59c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064d59f: call 0x5f2670 */ r_esp -= 4; W32(r_esp, 0x64d5a4u); f_005f2670();
    /* 0064d5a4: mov eax, 0x1389 */ r_eax = 0x1389u;
    /* 0064d5a9: jmp 0x64d5cb */ goto L_0064d5cb;
L_0064d5ab:; BB(0x0064d5ab);
    /* 0064d5ab: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064d5ad: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064d5af: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0064d5b1: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0064d5b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064d5b5: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0064d5b8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064d5b9: push 0x1388 */ { u32 v = 0x1388u; r_esp -= 4; W32(r_esp, v); }
    /* 0064d5be: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064d5c1: call 0x5f2670 */ r_esp -= 4; W32(r_esp, 0x64d5c6u); f_005f2670();
    /* 0064d5c6: mov eax, 0x1388 */ r_eax = 0x1388u;
L_0064d5cb:; BB(0x0064d5cb);
    /* 0064d5cb: mov esp, ebp */ r_esp = r_ebp;
    /* 0064d5cd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064d5ce: ret 0xc */ FN_RET(0x0064d480); r_esp += 16; return;
}

void f_0064d5e0(void) /* sub_64D5E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064d5e0);
    /* 0064d5e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064d5e1: mov ebp, esp */ r_ebp = r_esp;
    /* 0064d5e3: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064d5e6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0064d5e7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0064d5ea: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0064d5f1: jmp 0x64d5fc */ goto L_0064d5fc;
L_0064d5f3:; BB(0x0064d5f3);
    /* 0064d5f3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064d5f6: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0064d5f9: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0064d5fc:; BB(0x0064d5fc);
    /* 0064d5fc: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064d602: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0064d604: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064d60a: mov eax, dword ptr [edx + 0x10c] */ r_eax = R32((u32)(r_edx+0x10cu));
    /* 0064d610: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64d612u); call_ind(t); }
    /* 0064d612: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064d615: jge 0x64d70b */ if ((fS==fO)) goto L_0064d70b;
L_0064d61b:; BB(0x0064d61b);
    /* 0064d61b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064d61e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0064d621: mov eax, dword ptr [edx + ecx*4] */ r_eax = R32((u32)(r_edx+r_ecx*4));
    /* 0064d624: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0064d627: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0064d62a: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x64d62fu); f_0063aac0();
    /* 0064d62f: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0064d631: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0064d634: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0064d636: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064d63a: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0064d63d: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 0064d640: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064d642: je 0x64d706 */ if (fZ) goto L_0064d706;
L_0064d648:; BB(0x0064d648);
    /* 0064d648: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064d64b: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0064d64e: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0064d651: jmp 0x64d65c */ goto L_0064d65c;
L_0064d653:; BB(0x0064d653);
    /* 0064d653: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064d656: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0064d659: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_0064d65c:; BB(0x0064d65c);
    /* 0064d65c: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0064d661: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0064d663: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064d669: mov eax, dword ptr [edx + 0x10c] */ r_eax = R32((u32)(r_edx+0x10cu));
    /* 0064d66f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64d671u); call_ind(t); }
    /* 0064d671: cmp dword ptr [ebp - 0xc], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064d674: jge 0x64d6a3 */ if ((fS==fO)) goto L_0064d6a3;
L_0064d676:; BB(0x0064d676);
    /* 0064d676: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064d679: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0064d67c: mov eax, dword ptr [edx + ecx*4] */ r_eax = R32((u32)(r_edx+r_ecx*4));
    /* 0064d67f: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0064d682: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0064d685: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x64d68au); f_0063aac0();
    /* 0064d68a: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0064d68c: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0064d68f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0064d691: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064d695: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0064d698: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 0064d69b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064d69d: jne 0x64d6a1 */ if (!fZ) goto L_0064d6a1;
L_0064d69f:; BB(0x0064d69f);
    /* 0064d69f: jmp 0x64d6a3 */ goto L_0064d6a3;
L_0064d6a1:; BB(0x0064d6a1);
    /* 0064d6a1: jmp 0x64d653 */ goto L_0064d653;
L_0064d6a3:; BB(0x0064d6a3);
    /* 0064d6a3: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064d6a9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0064d6ab: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064d6b1: mov eax, dword ptr [edx + 0x10c] */ r_eax = R32((u32)(r_edx+0x10cu));
    /* 0064d6b7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64d6b9u); call_ind(t); }
    /* 0064d6b9: cmp dword ptr [ebp - 0xc], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064d6bc: jge 0x64d706 */ if ((fS==fO)) goto L_0064d706;
L_0064d6be:; BB(0x0064d6be);
    /* 0064d6be: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064d6c1: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0064d6c4: mov eax, dword ptr [edx + ecx*4] */ r_eax = R32((u32)(r_edx+r_ecx*4));
    /* 0064d6c7: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0064d6ca: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064d6cd: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0064d6d0: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064d6d3: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 0064d6d6: mov eax, dword ptr [esi + eax*4] */ r_eax = R32((u32)(r_esi+r_eax*4));
    /* 0064d6d9: mov dword ptr [edx + ecx*4], eax */ W32((u32)(r_edx+r_ecx*4), r_eax);
    /* 0064d6dc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064d6df: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0064d6e2: mov eax, dword ptr [edx + ecx*4] */ r_eax = R32((u32)(r_edx+r_ecx*4));
    /* 0064d6e5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064d6e8: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 0064d6eb: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064d6ee: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0064d6f1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0064d6f4: mov dword ptr [eax + edx*4], ecx */ W32((u32)(r_eax+r_edx*4), r_ecx);
    /* 0064d6f7: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064d6fa: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0064d6fd: mov ecx, dword ptr [eax + edx*4] */ r_ecx = R32((u32)(r_eax+r_edx*4));
    /* 0064d700: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064d703: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
L_0064d706:; BB(0x0064d706);
    /* 0064d706: jmp 0x64d5f3 */ goto L_0064d5f3;
L_0064d70b:; BB(0x0064d70b);
    /* 0064d70b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0064d70c: mov esp, ebp */ r_esp = r_ebp;
    /* 0064d70e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064d70f: ret 4 */ FN_RET(0x0064d5e0); r_esp += 8; return;
}

void f_0064d720(void) /* sub_64D720 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064d720);
    /* 0064d720: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064d721: mov ebp, esp */ r_ebp = r_esp;
    /* 0064d723: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064d726: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0064d729: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0064d72c: cmp dword ptr [eax + 0x34], 0 */ {  u32 a = R32((u32)(r_eax+0x34u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064d730: jne 0x64d737 */ if (!fZ) goto L_0064d737;
L_0064d732:; BB(0x0064d732);
    /* 0064d732: jmp 0x64d832 */ goto L_0064d832;
L_0064d737:; BB(0x0064d737);
    /* 0064d737: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0064d73a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0064d73c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0064d73f: mov eax, dword ptr [edx + 0x134] */ r_eax = R32((u32)(r_edx+0x134u));
    /* 0064d745: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64d747u); call_ind(t); }
    /* 0064d747: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0064d74a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064d74c: je 0x64d788 */ if (fZ) goto L_0064d788;
L_0064d74e:; BB(0x0064d74e);
    /* 0064d74e: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0064d750: push 0x6d529c */ { u32 v = 0x6d529cu; r_esp -= 4; W32(r_esp, v); }
    /* 0064d755: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x64d75au); f_00630f40();
    /* 0064d75a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064d75d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064d75e: push 0x6dd010 */ { u32 v = 0x6dd010u; r_esp -= 4; W32(r_esp, v); }
    /* 0064d763: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x64d768u); f_00630f40();
    /* 0064d768: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064d76b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064d76c: call 0x62ff10 */ r_esp -= 4; W32(r_esp, 0x64d771u); f_0062ff10();
    /* 0064d771: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064d774: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064d777: jne 0x64d788 */ if (!fZ) goto L_0064d788;
L_0064d779:; BB(0x0064d779);
    /* 0064d779: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0064d77c: mov dword ptr [edx + 0x34], 0 */ W32((u32)(r_edx+0x34u), 0x0u);
    /* 0064d783: jmp 0x64d832 */ goto L_0064d832;
L_0064d788:; BB(0x0064d788);
    /* 0064d788: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064d78a: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0064d78d: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 0064d790: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0064d793: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064d794: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0064d797: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0064d799: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0064d79c: mov eax, dword ptr [edx + 0x150] */ r_eax = R32((u32)(r_edx+0x150u));
    /* 0064d7a2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64d7a4u); call_ind(t); }
    /* 0064d7a4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0064d7a7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0064d7a9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0064d7ac: mov eax, dword ptr [edx + 0x13c] */ r_eax = R32((u32)(r_edx+0x13cu));
    /* 0064d7b2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64d7b4u); call_ind(t); }
    /* 0064d7b4: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0064d7b7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064d7b9: je 0x64d7cd */ if (fZ) goto L_0064d7cd;
L_0064d7bb:; BB(0x0064d7bb);
    /* 0064d7bb: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0064d7c1: mov eax, dword ptr [edx + 0x58] */ r_eax = R32((u32)(r_edx+0x58u));
    /* 0064d7c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064d7c5: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0064d7c8: call 0x64d5e0 */ r_esp -= 4; W32(r_esp, 0x64d7cdu); f_0064d5e0();
L_0064d7cd:; BB(0x0064d7cd);
    /* 0064d7cd: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064d7d3: call 0x636610 */ r_esp -= 4; W32(r_esp, 0x64d7d8u); f_00636610();
    /* 0064d7d8: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0064d7db: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064d7e1: call 0x5f3bf0 */ r_esp -= 4; W32(r_esp, 0x64d7e6u); f_005f3bf0();
    /* 0064d7e6: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0064d7e9: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064d7ef: call 0x6375b0 */ r_esp -= 4; W32(r_esp, 0x64d7f4u); f_006375b0();
    /* 0064d7f4: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0064d7f7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064d7fa: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x64d7ffu); f_0063aac0();
    /* 0064d7ff: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0064d802: mov dl, byte ptr [ebp - 0xc] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff4u))) & 0xffu);
    /* 0064d805: mov byte ptr [eax + ecx + 0x5d], dl */ W8((u32)(r_eax+r_ecx+0x5du), (u8)r_edx);
    /* 0064d809: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064d80f: call 0x637610 */ r_esp -= 4; W32(r_esp, 0x64d814u); f_00637610();
    /* 0064d814: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0064d816: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064d818: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0064d81b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0064d81d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0064d820: mov eax, dword ptr [edx + 0x144] */ r_eax = R32((u32)(r_edx+0x144u));
    /* 0064d826: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64d828u); call_ind(t); }
    /* 0064d828: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0064d82b: mov dword ptr [ecx + 0x34], 0 */ W32((u32)(r_ecx+0x34u), 0x0u);
L_0064d832:; BB(0x0064d832);
    /* 0064d832: mov esp, ebp */ r_esp = r_ebp;
    /* 0064d834: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064d835: ret  */ FN_RET(0x0064d720); r_esp += 4; return;
}

