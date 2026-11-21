#include "protos.h"

void f_00642130(void) /* sub_642130 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00642130);
    /* 00642130: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00642131: mov ebp, esp */ r_ebp = r_esp;
    /* 00642133: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00642134: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00642135: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00642138: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0064213b: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0064213e: jmp 0x642149 */ goto L_00642149;
L_00642140:; BB(0x00642140);
    /* 00642140: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00642143: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00642146: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00642149:; BB(0x00642149);
    /* 00642149: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064214c: cmp edx, dword ptr [ebp + 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x14u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064214f: jle 0x642168 */ if ((fZ||fS!=fO)) goto L_00642168;
L_00642151:; BB(0x00642151);
    /* 00642151: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00642154: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00642157: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064215a: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 0064215d: mov dx, word ptr [esi + edx*2 - 2] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_esi+r_edx*2+0xfffffffeu))) & 0xffffu);
    /* 00642162: mov word ptr [ecx + eax*2], dx */ W16((u32)(r_ecx+r_eax*2), (u16)r_edx);
    /* 00642166: jmp 0x642140 */ goto L_00642140;
L_00642168:; BB(0x00642168);
    /* 00642168: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0064216b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0064216e: mov dx, word ptr [ebp + 0x10] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0x10u))) & 0xffffu);
    /* 00642172: mov word ptr [ecx + eax*2], dx */ W16((u32)(r_ecx+r_eax*2), (u16)r_edx);
    /* 00642176: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00642177: mov esp, ebp */ r_esp = r_ebp;
    /* 00642179: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064217a: ret  */ FN_RET(0x00642130); r_esp += 4; return;
}

void f_00642210(void) /* sub_642210 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00642210);
    /* 00642210: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00642211: mov ebp, esp */ r_ebp = r_esp;
    /* 00642213: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00642214: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00642215: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0064221c: jmp 0x642227 */ goto L_00642227;
L_0064221e:; BB(0x0064221e);
    /* 0064221e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00642221: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00642224: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00642227:; BB(0x00642227);
    /* 00642227: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064222a: cmp ecx, dword ptr [ebp + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064222d: jge 0x642245 */ if ((fS==fO)) goto L_00642245;
L_0064222f:; BB(0x0064222f);
    /* 0064222f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00642232: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00642235: movzx ecx, word ptr [eax + edx*2] */ r_ecx = (u32)R16((u32)(r_eax+r_edx*2));
    /* 00642239: movzx edx, word ptr [ebp + 0x10] */ r_edx = (u32)R16((u32)(r_ebp+0x10u));
    /* 0064223d: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064223f: jne 0x642243 */ if (!fZ) goto L_00642243;
L_00642241:; BB(0x00642241);
    /* 00642241: jmp 0x642245 */ goto L_00642245;
L_00642243:; BB(0x00642243);
    /* 00642243: jmp 0x64221e */ goto L_0064221e;
L_00642245:; BB(0x00642245);
    /* 00642245: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00642248: cmp eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064224b: jne 0x64224f */ if (!fZ) goto L_0064224f;
L_0064224d:; BB(0x0064224d);
    /* 0064224d: jmp 0x642288 */ goto L_00642288;
L_0064224f:; BB(0x0064224f);
    /* 0064224f: jmp 0x64225a */ goto L_0064225a;
L_00642251:; BB(0x00642251);
    /* 00642251: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00642254: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00642257: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0064225a:; BB(0x0064225a);
    /* 0064225a: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0064225d: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00642260: cmp dword ptr [ebp - 4], edx */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00642263: jge 0x64227c */ if ((fS==fO)) goto L_0064227c;
L_00642265:; BB(0x00642265);
    /* 00642265: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00642268: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0064226b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064226e: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 00642271: mov dx, word ptr [esi + edx*2 + 2] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_esi+r_edx*2+0x2u))) & 0xffffu);
    /* 00642276: mov word ptr [ecx + eax*2], dx */ W16((u32)(r_ecx+r_eax*2), (u16)r_edx);
    /* 0064227a: jmp 0x642251 */ goto L_00642251;
L_0064227c:; BB(0x0064227c);
    /* 0064227c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064227f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00642282: mov word ptr [ecx + eax*2], 0 */ W16((u32)(r_ecx+r_eax*2), 0x0u);
L_00642288:; BB(0x00642288);
    /* 00642288: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00642289: mov esp, ebp */ r_esp = r_ebp;
    /* 0064228b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064228c: ret  */ FN_RET(0x00642210); r_esp += 4; return;
}

void f_006423a0(void) /* sub_6423A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006423a0);
    /* 006423a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006423a1: mov ebp, esp */ r_ebp = r_esp;
    /* 006423a3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006423a6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006423ad: jmp 0x6423b8 */ goto L_006423b8;
L_006423af:; BB(0x006423af);
    /* 006423af: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006423b2: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006423b5: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_006423b8:; BB(0x006423b8);
    /* 006423b8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006423bb: cmp ecx, dword ptr [ebp + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006423be: jge 0x64241f */ if ((fS==fO)) goto L_0064241f;
L_006423c0:; BB(0x006423c0);
    /* 006423c0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006423c3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006423c6: movzx ecx, word ptr [eax + edx*2] */ r_ecx = (u32)R16((u32)(r_eax+r_edx*2));
    /* 006423ca: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006423cc: jne 0x6423d0 */ if (!fZ) goto L_006423d0;
L_006423ce:; BB(0x006423ce);
    /* 006423ce: jmp 0x64241f */ goto L_0064241f;
L_006423d0:; BB(0x006423d0);
    /* 006423d0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006423d3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006423d6: mov cx, word ptr [eax + edx*2] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2))) & 0xffffu);
    /* 006423da: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006423db: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x6423e0u); f_00641280();
    /* 006423e0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006423e3: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 006423e6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006423e9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006423ec: mov cx, word ptr [eax + edx*2] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2))) & 0xffffu);
    /* 006423f0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006423f1: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x6423f6u); f_00641290();
    /* 006423f6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006423f9: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 006423fc: cmp dword ptr [ebp + 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00642400: je 0x64240a */ if (fZ) goto L_0064240a;
L_00642402:; BB(0x00642402);
    /* 00642402: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00642405: cmp edx, dword ptr [ebp + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00642408: jne 0x64241d */ if (!fZ) goto L_0064241d;
L_0064240a:; BB(0x0064240a);
    /* 0064240a: cmp dword ptr [ebp + 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064240e: je 0x642418 */ if (fZ) goto L_00642418;
L_00642410:; BB(0x00642410);
    /* 00642410: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00642413: cmp eax, dword ptr [ebp + 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x14u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00642416: jne 0x64241d */ if (!fZ) goto L_0064241d;
L_00642418:; BB(0x00642418);
    /* 00642418: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064241b: jmp 0x642422 */ goto L_00642422;
L_0064241d:; BB(0x0064241d);
    /* 0064241d: jmp 0x6423af */ goto L_006423af;
L_0064241f:; BB(0x0064241f);
    /* 0064241f: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_00642422:; BB(0x00642422);
    /* 00642422: mov esp, ebp */ r_esp = r_ebp;
    /* 00642424: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00642425: ret  */ FN_RET(0x006423a0); r_esp += 4; return;
}

void f_00642430(void) /* sub_642430 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00642430);
    /* 00642430: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00642431: mov ebp, esp */ r_ebp = r_esp;
    /* 00642433: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00642436: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00642437: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0064243a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064243b: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0064243e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064243f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00642442: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00642443: call 0x6423a0 */ r_esp -= 4; W32(r_esp, 0x642448u); f_006423a0();
    /* 00642448: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064244b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0064244d: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00642450: setne cl */ r_ecx = (r_ecx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 00642453: mov al, cl */ r_eax = (r_eax & 0xffffff00u) | (((u8)r_ecx) & 0xffu);
    /* 00642455: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00642456: ret  */ FN_RET(0x00642430); r_esp += 4; return;
}

void f_006427d0(void) /* sub_6427D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006427d0);
    /* 006427d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006427d1: mov ebp, esp */ r_ebp = r_esp;
    /* 006427d3: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006427d6: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 006427dd: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006427e4: jmp 0x6427ef */ goto L_006427ef;
L_006427e6:; BB(0x006427e6);
    /* 006427e6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006427e9: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006427ec: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_006427ef:; BB(0x006427ef);
    /* 006427ef: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006427f2: cmp ecx, dword ptr [ebp + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006427f5: jge 0x64285c */ if ((fS==fO)) goto L_0064285c;
L_006427f7:; BB(0x006427f7);
    /* 006427f7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006427fa: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006427fd: movzx ecx, word ptr [eax + edx*2] */ r_ecx = (u32)R16((u32)(r_eax+r_edx*2));
    /* 00642801: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00642803: jne 0x642807 */ if (!fZ) goto L_00642807;
L_00642805:; BB(0x00642805);
    /* 00642805: jmp 0x64285c */ goto L_0064285c;
L_00642807:; BB(0x00642807);
    /* 00642807: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064280a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0064280d: mov cx, word ptr [eax + edx*2] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2))) & 0xffffu);
    /* 00642811: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00642812: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x642817u); f_00641280();
    /* 00642817: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064281a: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0064281d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00642820: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00642823: mov cx, word ptr [eax + edx*2] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2))) & 0xffffu);
    /* 00642827: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00642828: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x64282du); f_00641290();
    /* 0064282d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00642830: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00642833: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00642836: cmp edx, dword ptr [ebp + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00642839: je 0x642841 */ if (fZ) goto L_00642841;
L_0064283b:; BB(0x0064283b);
    /* 0064283b: cmp dword ptr [ebp + 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064283f: jne 0x64285a */ if (!fZ) goto L_0064285a;
L_00642841:; BB(0x00642841);
    /* 00642841: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00642844: cmp eax, dword ptr [ebp + 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x14u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00642847: jl 0x64285a */ if ((fS!=fO)) goto L_0064285a;
L_00642849:; BB(0x00642849);
    /* 00642849: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0064284c: cmp ecx, dword ptr [ebp + 0x18] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x18u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064284f: jg 0x64285a */ if ((!fZ&&fS==fO)) goto L_0064285a;
L_00642851:; BB(0x00642851);
    /* 00642851: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00642854: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00642857: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0064285a:; BB(0x0064285a);
    /* 0064285a: jmp 0x6427e6 */ goto L_006427e6;
L_0064285c:; BB(0x0064285c);
    /* 0064285c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0064285f: mov esp, ebp */ r_esp = r_ebp;
    /* 00642861: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00642862: ret  */ FN_RET(0x006427d0); r_esp += 4; return;
}

void f_00642890(void) /* sub_642890 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00642890);
    /* 00642890: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00642891: mov ebp, esp */ r_ebp = r_esp;
    /* 00642893: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00642894: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 00642896: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00642898: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0064289b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064289c: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0064289f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006428a0: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006428a3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006428a4: call 0x6427d0 */ r_esp -= 4; W32(r_esp, 0x6428a9u); f_006427d0();
    /* 006428a9: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006428ac: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 006428af: cmp dword ptr [ebp + 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006428b3: jne 0x6428d3 */ if (!fZ) goto L_006428d3;
L_006428b5:; BB(0x006428b5);
    /* 006428b5: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 006428b7: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 006428b9: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 006428bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006428bd: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 006428c0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006428c1: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006428c4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006428c5: call 0x6427d0 */ r_esp -= 4; W32(r_esp, 0x6428cau); f_006427d0();
    /* 006428ca: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006428cd: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006428d0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_006428d3:; BB(0x006428d3);
    /* 006428d3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006428d6: mov esp, ebp */ r_esp = r_ebp;
    /* 006428d8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006428d9: ret  */ FN_RET(0x00642890); r_esp += 4; return;
}

void f_00642950(void) /* sub_642950 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00642950);
    /* 00642950: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00642951: mov ebp, esp */ r_ebp = r_esp;
    /* 00642953: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00642956: mov ax, word ptr [ebp + 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 0064295a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064295b: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x642960u); f_00641280();
    /* 00642960: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00642963: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00642966: mov cx, word ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 0064296a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064296b: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x642970u); f_00641290();
    /* 00642970: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00642973: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00642976: mov dx, word ptr [ebp + 0xc] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xcu))) & 0xffffu);
    /* 0064297a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064297b: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x642980u); f_00641280();
    /* 00642980: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00642983: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00642986: mov ax, word ptr [ebp + 0xc] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xcu))) & 0xffffu);
    /* 0064298a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064298b: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x642990u); f_00641290();
    /* 00642990: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00642993: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00642996: movzx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)R16((u32)(r_ebp+0xcu));
    /* 0064299a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064299c: jne 0x6429a2 */ if (!fZ) goto L_006429a2;
L_0064299e:; BB(0x0064299e);
    /* 0064299e: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006429a0: jmp 0x6429d4 */ goto L_006429d4;
L_006429a2:; BB(0x006429a2);
    /* 006429a2: movzx edx, word ptr [ebp + 8] */ r_edx = (u32)R16((u32)(r_ebp+0x8u));
    /* 006429a6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006429a8: jne 0x6429ae */ if (!fZ) goto L_006429ae;
L_006429aa:; BB(0x006429aa);
    /* 006429aa: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 006429ac: jmp 0x6429d4 */ goto L_006429d4;
L_006429ae:; BB(0x006429ae);
    /* 006429ae: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 006429b1: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006429b4: jle 0x6429ba */ if ((fZ||fS!=fO)) goto L_006429ba;
L_006429b6:; BB(0x006429b6);
    /* 006429b6: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 006429b8: jmp 0x6429d4 */ goto L_006429d4;
L_006429ba:; BB(0x006429ba);
    /* 006429ba: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006429bd: cmp ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006429c0: jle 0x6429c6 */ if ((fZ||fS!=fO)) goto L_006429c6;
L_006429c2:; BB(0x006429c2);
    /* 006429c2: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006429c4: jmp 0x6429d4 */ goto L_006429d4;
L_006429c6:; BB(0x006429c6);
    /* 006429c6: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006429c9: cmp edx, dword ptr [ebp - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006429cc: jle 0x6429d2 */ if ((fZ||fS!=fO)) goto L_006429d2;
L_006429ce:; BB(0x006429ce);
    /* 006429ce: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 006429d0: jmp 0x6429d4 */ goto L_006429d4;
L_006429d2:; BB(0x006429d2);
    /* 006429d2: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_006429d4:; BB(0x006429d4);
    /* 006429d4: mov esp, ebp */ r_esp = r_ebp;
    /* 006429d6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006429d7: ret  */ FN_RET(0x00642950); r_esp += 4; return;
}

void f_006429e0(void) /* sub_6429E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006429e0);
    /* 006429e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006429e1: mov ebp, esp */ r_ebp = r_esp;
    /* 006429e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006429e4: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 006429e7: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 006429ea: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006429ed: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006429f0: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006429f3: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 006429f7: ja 0x642a73 */ if ((!fC&&!fZ)) goto L_00642a73;
L_006429f9:; BB(0x006429f9);
    /* 006429f9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006429fc: jmp dword ptr [edx*4 + 0x642a8c] */ { u32 t = R32((u32)(r_edx*4+0x642a8cu)); switch (t) { case 0x642a57u: goto L_00642a57; case 0x642a3bu: goto L_00642a3b; case 0x642a1fu: goto L_00642a1f; case 0x642a03u: goto L_00642a03; default: UNSUP(0x006429fc, "jump table entry is not a known target"); } }
L_00642a03:; BB(0x00642a03);
    /* 00642a03: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00642a05: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00642a07: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00642a09: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00642a0b: mov ax, word ptr [ebp + 0xc] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xcu))) & 0xffffu);
    /* 00642a0f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00642a10: mov cx, word ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 00642a14: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00642a15: call 0x642aa0 */ r_esp -= 4; W32(r_esp, 0x642a1au); f_00642aa0();
    /* 00642a1a: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00642a1d: jmp 0x642a85 */ goto L_00642a85;
L_00642a1f:; BB(0x00642a1f);
    /* 00642a1f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00642a21: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00642a23: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00642a25: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00642a27: mov dx, word ptr [ebp + 0xc] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xcu))) & 0xffffu);
    /* 00642a2b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00642a2c: mov ax, word ptr [ebp + 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 00642a30: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00642a31: call 0x642aa0 */ r_esp -= 4; W32(r_esp, 0x642a36u); f_00642aa0();
    /* 00642a36: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00642a39: jmp 0x642a85 */ goto L_00642a85;
L_00642a3b:; BB(0x00642a3b);
    /* 00642a3b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00642a3d: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00642a3f: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00642a41: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00642a43: mov cx, word ptr [ebp + 0xc] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xcu))) & 0xffffu);
    /* 00642a47: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00642a48: mov dx, word ptr [ebp + 8] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 00642a4c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00642a4d: call 0x642aa0 */ r_esp -= 4; W32(r_esp, 0x642a52u); f_00642aa0();
    /* 00642a52: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00642a55: jmp 0x642a85 */ goto L_00642a85;
L_00642a57:; BB(0x00642a57);
    /* 00642a57: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00642a59: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00642a5b: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00642a5d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00642a5f: mov ax, word ptr [ebp + 0xc] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xcu))) & 0xffffu);
    /* 00642a63: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00642a64: mov cx, word ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 00642a68: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00642a69: call 0x642aa0 */ r_esp -= 4; W32(r_esp, 0x642a6eu); f_00642aa0();
    /* 00642a6e: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00642a71: jmp 0x642a85 */ goto L_00642a85;
L_00642a73:; BB(0x00642a73);
    /* 00642a73: mov dx, word ptr [ebp + 0xc] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xcu))) & 0xffffu);
    /* 00642a77: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00642a78: mov ax, word ptr [ebp + 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 00642a7c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00642a7d: call 0x642950 */ r_esp -= 4; W32(r_esp, 0x642a82u); f_00642950();
    /* 00642a82: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00642a85:; BB(0x00642a85);
    /* 00642a85: mov esp, ebp */ r_esp = r_ebp;
    /* 00642a87: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00642a88: ret  */ FN_RET(0x006429e0); r_esp += 4; return;
}

void f_00642aa0(void) /* sub_642AA0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00642aa0);
    /* 00642aa0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00642aa1: mov ebp, esp */ r_ebp = r_esp;
    /* 00642aa3: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00642aa6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00642aa7: movzx eax, word ptr [ebp + 0xc] */ r_eax = (u32)R16((u32)(r_ebp+0xcu));
    /* 00642aab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00642aad: jne 0x642ab6 */ if (!fZ) goto L_00642ab6;
L_00642aaf:; BB(0x00642aaf);
    /* 00642aaf: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00642ab1: jmp 0x642c0f */ goto L_00642c0f;
L_00642ab6:; BB(0x00642ab6);
    /* 00642ab6: movzx ecx, word ptr [ebp + 8] */ r_ecx = (u32)R16((u32)(r_ebp+0x8u));
    /* 00642aba: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00642abc: jne 0x642ac5 */ if (!fZ) goto L_00642ac5;
L_00642abe:; BB(0x00642abe);
    /* 00642abe: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00642ac0: jmp 0x642c0f */ goto L_00642c0f;
L_00642ac5:; BB(0x00642ac5);
    /* 00642ac5: mov dx, word ptr [ebp + 8] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 00642ac9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00642aca: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x642acfu); f_00641290();
    /* 00642acf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00642ad2: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00642ad5: je 0x642ae9 */ if (fZ) goto L_00642ae9;
L_00642ad7:; BB(0x00642ad7);
    /* 00642ad7: mov ax, word ptr [ebp + 0xc] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xcu))) & 0xffffu);
    /* 00642adb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00642adc: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x642ae1u); f_00641290();
    /* 00642ae1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00642ae4: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00642ae7: jne 0x642b45 */ if (!fZ) goto L_00642b45;
L_00642ae9:; BB(0x00642ae9);
    /* 00642ae9: mov cx, word ptr [ebp + 0xc] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xcu))) & 0xffffu);
    /* 00642aed: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00642aee: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x642af3u); f_00641290();
    /* 00642af3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00642af6: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00642af9: je 0x642b02 */ if (fZ) goto L_00642b02;
L_00642afb:; BB(0x00642afb);
    /* 00642afb: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00642afd: jmp 0x642c0f */ goto L_00642c0f;
L_00642b02:; BB(0x00642b02);
    /* 00642b02: mov dx, word ptr [ebp + 8] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 00642b06: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00642b07: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x642b0cu); f_00641290();
    /* 00642b0c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00642b0f: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00642b12: je 0x642b1b */ if (fZ) goto L_00642b1b;
L_00642b14:; BB(0x00642b14);
    /* 00642b14: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00642b16: jmp 0x642c0f */ goto L_00642c0f;
L_00642b1b:; BB(0x00642b1b);
    /* 00642b1b: mov ax, word ptr [ebp + 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 00642b1f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00642b20: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x642b25u); f_00641280();
    /* 00642b25: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00642b28: mov esi, eax */ r_esi = r_eax;
    /* 00642b2a: mov cx, word ptr [ebp + 0xc] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xcu))) & 0xffffu);
    /* 00642b2e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00642b2f: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x642b34u); f_00641280();
    /* 00642b34: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00642b37: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00642b39: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00642b3b: setg dl */ r_edx = (r_edx & 0xffffff00u) | ((((!fZ&&fS==fO)) ? 1 : 0) & 0xffu);
    /* 00642b3e: mov al, dl */ r_eax = (r_eax & 0xffffff00u) | (((u8)r_edx) & 0xffu);
    /* 00642b40: jmp 0x642c0f */ goto L_00642c0f;
L_00642b45:; BB(0x00642b45);
    /* 00642b45: mov ax, word ptr [ebp + 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 00642b49: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00642b4a: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x642b4fu); f_00641290();
    /* 00642b4f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00642b52: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00642b55: jne 0x642b5e */ if (!fZ) goto L_00642b5e;
L_00642b57:; BB(0x00642b57);
    /* 00642b57: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00642b59: jmp 0x642c0f */ goto L_00642c0f;
L_00642b5e:; BB(0x00642b5e);
    /* 00642b5e: mov cx, word ptr [ebp + 0xc] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xcu))) & 0xffffu);
    /* 00642b62: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00642b63: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x642b68u); f_00641290();
    /* 00642b68: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00642b6b: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00642b6e: jne 0x642b77 */ if (!fZ) goto L_00642b77;
L_00642b70:; BB(0x00642b70);
    /* 00642b70: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00642b72: jmp 0x642c0f */ goto L_00642c0f;
L_00642b77:; BB(0x00642b77);
    /* 00642b77: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00642b7a: mov dword ptr [ebp + edx*4 - 0x1c], 4 */ W32((u32)(r_ebp+r_edx*4+0xffffffe4u), 0x4u);
    /* 00642b82: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00642b85: mov dword ptr [ebp + eax*4 - 0x1c], 3 */ W32((u32)(r_ebp+r_eax*4+0xffffffe4u), 0x3u);
    /* 00642b8d: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 00642b90: mov dword ptr [ebp + ecx*4 - 0x1c], 2 */ W32((u32)(r_ebp+r_ecx*4+0xffffffe4u), 0x2u);
    /* 00642b98: mov edx, dword ptr [ebp + 0x1c] */ r_edx = R32((u32)(r_ebp+0x1cu));
    /* 00642b9b: mov dword ptr [ebp + edx*4 - 0x1c], 1 */ W32((u32)(r_ebp+r_edx*4+0xffffffe4u), 0x1u);
    /* 00642ba3: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 00642baa: mov ax, word ptr [ebp + 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 00642bae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00642baf: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x642bb4u); f_00641290();
    /* 00642bb4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00642bb7: mov ecx, dword ptr [ebp + eax*4 - 0x1c] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffffe4u));
    /* 00642bbb: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00642bbe: mov dx, word ptr [ebp + 0xc] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xcu))) & 0xffffu);
    /* 00642bc2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00642bc3: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x642bc8u); f_00641290();
    /* 00642bc8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00642bcb: mov eax, dword ptr [ebp + eax*4 - 0x1c] */ r_eax = R32((u32)(r_ebp+r_eax*4+0xffffffe4u));
    /* 00642bcf: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00642bd2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00642bd5: cmp ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00642bd8: jle 0x642bde */ if ((fZ||fS!=fO)) goto L_00642bde;
L_00642bda:; BB(0x00642bda);
    /* 00642bda: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00642bdc: jmp 0x642c0f */ goto L_00642c0f;
L_00642bde:; BB(0x00642bde);
    /* 00642bde: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00642be1: cmp edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00642be4: jle 0x642bea */ if ((fZ||fS!=fO)) goto L_00642bea;
L_00642be6:; BB(0x00642be6);
    /* 00642be6: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00642be8: jmp 0x642c0f */ goto L_00642c0f;
L_00642bea:; BB(0x00642bea);
    /* 00642bea: mov ax, word ptr [ebp + 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 00642bee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00642bef: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x642bf4u); f_00641280();
    /* 00642bf4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00642bf7: mov esi, eax */ r_esi = r_eax;
    /* 00642bf9: mov cx, word ptr [ebp + 0xc] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xcu))) & 0xffffu);
    /* 00642bfd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00642bfe: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x642c03u); f_00641280();
    /* 00642c03: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00642c06: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00642c08: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00642c0a: setg dl */ r_edx = (r_edx & 0xffffff00u) | ((((!fZ&&fS==fO)) ? 1 : 0) & 0xffu);
    /* 00642c0d: mov al, dl */ r_eax = (r_eax & 0xffffff00u) | (((u8)r_edx) & 0xffu);
L_00642c0f:; BB(0x00642c0f);
    /* 00642c0f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00642c10: mov esp, ebp */ r_esp = r_ebp;
    /* 00642c12: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00642c13: ret  */ FN_RET(0x00642aa0); r_esp += 4; return;
}

void f_00642c20(void) /* sub_642C20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00642c20);
    /* 00642c20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00642c21: mov ebp, esp */ r_ebp = r_esp;
    /* 00642c23: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00642c26: mov ax, word ptr [ebp + 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 00642c2a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00642c2b: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x642c30u); f_00641280();
    /* 00642c30: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00642c33: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00642c36: mov cx, word ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 00642c3a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00642c3b: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x642c40u); f_00641290();
    /* 00642c40: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00642c43: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00642c46: mov dx, word ptr [ebp + 0xc] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xcu))) & 0xffffu);
    /* 00642c4a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00642c4b: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x642c50u); f_00641280();
    /* 00642c50: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00642c53: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00642c56: mov ax, word ptr [ebp + 0xc] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xcu))) & 0xffffu);
    /* 00642c5a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00642c5b: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x642c60u); f_00641290();
    /* 00642c60: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00642c63: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00642c66: movzx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)R16((u32)(r_ebp+0xcu));
    /* 00642c6a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00642c6c: jne 0x642c72 */ if (!fZ) goto L_00642c72;
L_00642c6e:; BB(0x00642c6e);
    /* 00642c6e: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00642c70: jmp 0x642ca4 */ goto L_00642ca4;
L_00642c72:; BB(0x00642c72);
    /* 00642c72: movzx edx, word ptr [ebp + 8] */ r_edx = (u32)R16((u32)(r_ebp+0x8u));
    /* 00642c76: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00642c78: jne 0x642c7e */ if (!fZ) goto L_00642c7e;
L_00642c7a:; BB(0x00642c7a);
    /* 00642c7a: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00642c7c: jmp 0x642ca4 */ goto L_00642ca4;
L_00642c7e:; BB(0x00642c7e);
    /* 00642c7e: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00642c81: cmp eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00642c84: jle 0x642c8a */ if ((fZ||fS!=fO)) goto L_00642c8a;
L_00642c86:; BB(0x00642c86);
    /* 00642c86: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00642c88: jmp 0x642ca4 */ goto L_00642ca4;
L_00642c8a:; BB(0x00642c8a);
    /* 00642c8a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00642c8d: cmp ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00642c90: jle 0x642c96 */ if ((fZ||fS!=fO)) goto L_00642c96;
L_00642c92:; BB(0x00642c92);
    /* 00642c92: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00642c94: jmp 0x642ca4 */ goto L_00642ca4;
L_00642c96:; BB(0x00642c96);
    /* 00642c96: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00642c99: cmp edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00642c9c: jle 0x642ca2 */ if ((fZ||fS!=fO)) goto L_00642ca2;
L_00642c9e:; BB(0x00642c9e);
    /* 00642c9e: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00642ca0: jmp 0x642ca4 */ goto L_00642ca4;
L_00642ca2:; BB(0x00642ca2);
    /* 00642ca2: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_00642ca4:; BB(0x00642ca4);
    /* 00642ca4: mov esp, ebp */ r_esp = r_ebp;
    /* 00642ca6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00642ca7: ret  */ FN_RET(0x00642c20); r_esp += 4; return;
}

