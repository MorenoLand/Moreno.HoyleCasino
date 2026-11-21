#include "protos.h"

void f_005d52e0(void) /* sub_5D52E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d52e0);
    /* 005d52e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d52e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005d52e3: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d52e6: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 005d52e9: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d52eb: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 005d52f0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d52f2: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005d52f8: mov eax, dword ptr [edx + 0x33c] */ r_eax = R32((u32)(r_edx+0x33cu));
    /* 005d52fe: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d5300u); call_ind(t); }
    /* 005d5300: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005d5303: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5305: je 0x5d5443 */ if (fZ) goto L_005d5443;
L_005d530b:; BB(0x005d530b);
    /* 005d530b: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d530e: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005d5311: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d5312: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005d5318: call 0x5de320 */ r_esp -= 4; W32(r_esp, 0x5d531du); f_005de320();
    /* 005d531d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d5320: jle 0x5d5443 */ if ((fZ||fS!=fO)) goto L_005d5443;
L_005d5326:; BB(0x005d5326);
    /* 005d5326: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d5329: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5d532eu); f_0063aac0();
    /* 005d532e: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005d5330: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005d5333: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005d5335: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5339: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 005d533c: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 005d533f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5341: je 0x5d5357 */ if (fZ) goto L_005d5357;
L_005d5343:; BB(0x005d5343);
    /* 005d5343: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d5346: mov edx, dword ptr [ecx + 0x3a4] */ r_edx = R32((u32)(r_ecx+0x3a4u));
    /* 005d534c: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005d534f: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d5352: jmp 0x5d5452 */ goto L_005d5452;
L_005d5357:; BB(0x005d5357);
    /* 005d5357: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d535e: jmp 0x5d5369 */ goto L_005d5369;
L_005d5360:; BB(0x005d5360);
    /* 005d5360: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5363: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d5366: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005d5369:; BB(0x005d5369);
    /* 005d5369: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005d536f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d5371: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005d5377: mov eax, dword ptr [edx + 0x10c] */ r_eax = R32((u32)(r_edx+0x10cu));
    /* 005d537d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d537fu); call_ind(t); }
    /* 005d537f: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d5382: jge 0x5d5443 */ if ((fS==fO)) goto L_005d5443;
L_005d5388:; BB(0x005d5388);
    /* 005d5388: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d538b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d538e: cmp edx, dword ptr [ecx + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5391: jne 0x5d5398 */ if (!fZ) goto L_005d5398;
L_005d5393:; BB(0x005d5393);
    /* 005d5393: jmp 0x5d5443 */ goto L_005d5443;
L_005d5398:; BB(0x005d5398);
    /* 005d5398: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 005d539d: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 005d53a0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d53a3: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 005d53a6: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005d53a9: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d53ac: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5d53b1u); f_0063aac0();
    /* 005d53b1: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005d53b3: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005d53b6: cmp dword ptr [ebp - 0x10], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d53ba: je 0x5d53d8 */ if (fZ) goto L_005d53d8;
L_005d53bc:; BB(0x005d53bc);
    /* 005d53bc: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d53bf: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5d53c4u); f_0063aac0();
    /* 005d53c4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d53c6: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005d53c9: cmp dword ptr [ebp - 0x14], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d53cd: je 0x5d53d8 */ if (fZ) goto L_005d53d8;
L_005d53cf:; BB(0x005d53cf);
    /* 005d53cf: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 005d53d6: jmp 0x5d53df */ goto L_005d53df;
L_005d53d8:; BB(0x005d53d8);
    /* 005d53d8: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
L_005d53df:; BB(0x005d53df);
    /* 005d53df: movzx eax, byte ptr [ebp - 0x30] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffd0u));
    /* 005d53e3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d53e5: je 0x5d543e */ if (fZ) goto L_005d543e;
L_005d53e7:; BB(0x005d53e7);
    /* 005d53e7: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005d53ed: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 005d53f0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d53f3: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 005d53f6: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005d53f9: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d53fc: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5d5401u); f_0063aac0();
    /* 005d5401: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d5404: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005d5407: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d540a: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5d540fu); f_0063aac0();
    /* 005d540f: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d5412: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005d5415: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d5418: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d5419: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d541c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d541d: call 0x686ec0 */ r_esp -= 4; W32(r_esp, 0x5d5422u); f_00686ec0();
    /* 005d5422: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d5425: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5427: jne 0x5d543e */ if (!fZ) goto L_005d543e;
L_005d5429:; BB(0x005d5429);
    /* 005d5429: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d542c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d542d: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5d5432u); f_005dcb00();
    /* 005d5432: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d5435: mov ecx, eax */ r_ecx = r_eax;
    /* 005d5437: call 0x5d52e0 */ r_esp -= 4; W32(r_esp, 0x5d543cu); f_005d52e0();
    /* 005d543c: jmp 0x5d5452 */ goto L_005d5452;
L_005d543e:; BB(0x005d543e);
    /* 005d543e: jmp 0x5d5360 */ goto L_005d5360;
L_005d5443:; BB(0x005d5443);
    /* 005d5443: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d5446: mov eax, dword ptr [edx + 0x3a4] */ r_eax = R32((u32)(r_edx+0x3a4u));
    /* 005d544c: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005d544f: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
L_005d5452:; BB(0x005d5452);
    /* 005d5452: mov esp, ebp */ r_esp = r_ebp;
    /* 005d5454: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d5455: ret  */ FN_RET(0x005d52e0); r_esp += 4; return;
}

void f_005d5460(void) /* sub_5D5460 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d5460);
    /* 005d5460: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d5461: mov ebp, esp */ r_ebp = r_esp;
    /* 005d5463: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d5464: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d5467: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d546a: call 0x5d52e0 */ r_esp -= 4; W32(r_esp, 0x5d546fu); f_005d52e0();
    /* 005d546f: mov al, byte ptr [eax + 0x28] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0x28u))) & 0xffu);
    /* 005d5472: mov esp, ebp */ r_esp = r_ebp;
    /* 005d5474: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d5475: ret  */ FN_RET(0x005d5460); r_esp += 4; return;
}

void f_005d5480(void) /* sub_5D5480 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d5480);
    /* 005d5480: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d5481: mov ebp, esp */ r_ebp = r_esp;
    /* 005d5483: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d5484: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d5487: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d548a: call 0x5d52e0 */ r_esp -= 4; W32(r_esp, 0x5d548fu); f_005d52e0();
    /* 005d548f: mov cl, byte ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 005d5492: mov byte ptr [eax + 0x28], cl */ W8((u32)(r_eax+0x28u), (u8)r_ecx);
    /* 005d5495: mov esp, ebp */ r_esp = r_ebp;
    /* 005d5497: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d5498: ret 4 */ FN_RET(0x005d5480); r_esp += 8; return;
}

void f_005d54a0(void) /* sub_5D54A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d54a0);
    /* 005d54a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d54a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005d54a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d54a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d54a7: cmp dword ptr [ebp + 8], -1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d54ab: jne 0x5d54bb */ if (!fZ) goto L_005d54bb;
L_005d54ad:; BB(0x005d54ad);
    /* 005d54ad: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005d54b3: call 0x5f3bf0 */ r_esp -= 4; W32(r_esp, 0x5d54b8u); f_005f3bf0();
    /* 005d54b8: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
L_005d54bb:; BB(0x005d54bb);
    /* 005d54bb: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d54be: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d54bf: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005d54c5: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d54c7: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005d54cd: mov eax, dword ptr [edx + 0x3dc] */ r_eax = R32((u32)(r_edx+0x3dcu));
    /* 005d54d3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d54d5u); call_ind(t); }
    /* 005d54d5: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 005d54d8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d54db: call 0x5d52e0 */ r_esp -= 4; W32(r_esp, 0x5d54e0u); f_005d52e0();
    /* 005d54e0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d54e3: movzx edx, byte ptr [eax + ecx + 0x31] */ r_edx = (u32)R8((u32)(r_eax+r_ecx+0x31u));
    /* 005d54e8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d54ea: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 005d54ed: mov esp, ebp */ r_esp = r_ebp;
    /* 005d54ef: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d54f0: ret 4 */ FN_RET(0x005d54a0); r_esp += 8; return;
}

void f_005d5500(void) /* sub_5D5500 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d5500);
    /* 005d5500: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d5501: mov ebp, esp */ r_ebp = r_esp;
    /* 005d5503: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d5504: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d5507: cmp dword ptr [ebp + 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d550b: jne 0x5d551b */ if (!fZ) goto L_005d551b;
L_005d550d:; BB(0x005d550d);
    /* 005d550d: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005d5513: call 0x5f3bf0 */ r_esp -= 4; W32(r_esp, 0x5d5518u); f_005f3bf0();
    /* 005d5518: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
L_005d551b:; BB(0x005d551b);
    /* 005d551b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005d551e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d551f: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005d5525: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d5527: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005d552d: mov eax, dword ptr [edx + 0x3dc] */ r_eax = R32((u32)(r_edx+0x3dcu));
    /* 005d5533: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d5535u); call_ind(t); }
    /* 005d5535: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
    /* 005d5538: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d553b: call 0x5d52e0 */ r_esp -= 4; W32(r_esp, 0x5d5540u); f_005d52e0();
    /* 005d5540: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005d5543: mov dl, byte ptr [ebp + 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 005d5546: mov byte ptr [eax + ecx + 0x31], dl */ W8((u32)(r_eax+r_ecx+0x31u), (u8)r_edx);
    /* 005d554a: mov esp, ebp */ r_esp = r_ebp;
    /* 005d554c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d554d: ret 8 */ FN_RET(0x005d5500); r_esp += 12; return;
}

void f_005d5550(void) /* sub_5D5550 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d5550);
    /* 005d5550: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d5551: mov ebp, esp */ r_ebp = r_esp;
    /* 005d5553: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d5554: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d5557: cmp dword ptr [ebp + 8], -1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d555b: jne 0x5d556b */ if (!fZ) goto L_005d556b;
L_005d555d:; BB(0x005d555d);
    /* 005d555d: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005d5563: call 0x5f3bf0 */ r_esp -= 4; W32(r_esp, 0x5d5568u); f_005f3bf0();
    /* 005d5568: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
L_005d556b:; BB(0x005d556b);
    /* 005d556b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d556e: call 0x5d52e0 */ r_esp -= 4; W32(r_esp, 0x5d5573u); f_005d52e0();
    /* 005d5573: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d5576: movzx edx, byte ptr [eax + ecx + 0x47] */ r_edx = (u32)R8((u32)(r_eax+r_ecx+0x47u));
    /* 005d557b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d557d: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 005d5580: mov esp, ebp */ r_esp = r_ebp;
    /* 005d5582: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d5583: ret 4 */ FN_RET(0x005d5550); r_esp += 8; return;
}

void f_005d5590(void) /* sub_5D5590 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d5590);
    /* 005d5590: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d5591: mov ebp, esp */ r_ebp = r_esp;
    /* 005d5593: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d5594: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d5597: cmp dword ptr [ebp + 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d559b: jne 0x5d55ab */ if (!fZ) goto L_005d55ab;
L_005d559d:; BB(0x005d559d);
    /* 005d559d: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005d55a3: call 0x5f3bf0 */ r_esp -= 4; W32(r_esp, 0x5d55a8u); f_005f3bf0();
    /* 005d55a8: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
L_005d55ab:; BB(0x005d55ab);
    /* 005d55ab: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d55ae: call 0x5d52e0 */ r_esp -= 4; W32(r_esp, 0x5d55b3u); f_005d52e0();
    /* 005d55b3: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005d55b6: mov dl, byte ptr [ebp + 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 005d55b9: mov byte ptr [eax + ecx + 0x47], dl */ W8((u32)(r_eax+r_ecx+0x47u), (u8)r_edx);
    /* 005d55bd: mov esp, ebp */ r_esp = r_ebp;
    /* 005d55bf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d55c0: ret 8 */ FN_RET(0x005d5590); r_esp += 12; return;
}

void f_005d55d0(void) /* sub_5D55D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d55d0);
    /* 005d55d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d55d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005d55d3: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d55d6: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 005d55d9: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005d55dc: mov byte ptr [eax + 0x4a1], 0 */ W8((u32)(r_eax+0x4a1u), 0x0u);
    /* 005d55e3: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005d55e6: mov byte ptr [ecx + 0x4a0], 0 */ W8((u32)(r_ecx+0x4a0u), 0x0u);
    /* 005d55ed: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005d55f0: mov byte ptr [edx + 0x4a2], 0 */ W8((u32)(r_edx+0x4a2u), 0x0u);
    /* 005d55f7: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005d55fa: mov dword ptr [eax + 0x4a4], 0 */ W32((u32)(r_eax+0x4a4u), 0x0u);
    /* 005d5604: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005d5607: mov dword ptr [ecx + 0x4a8], 0 */ W32((u32)(r_ecx+0x4a8u), 0x0u);
    /* 005d5611: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d5613: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d5615: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5d561au); f_0064c8a0();
    /* 005d561a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d561d: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005d5620: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 005d5623: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005d5626: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d5629: mov dword ptr [edx + 0x4b4], eax */ W32((u32)(r_edx+0x4b4u), r_eax);
    /* 005d562f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5632: mov dword ptr [edx + 0x4b8], ecx */ W32((u32)(r_edx+0x4b8u), r_ecx);
    /* 005d5638: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d563a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d563c: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5d5641u); f_0064c8a0();
    /* 005d5641: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d5644: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005d5647: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005d564a: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005d564d: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d5650: mov dword ptr [edx + 0x4bc], eax */ W32((u32)(r_edx+0x4bcu), r_eax);
    /* 005d5656: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d5659: mov dword ptr [edx + 0x4c0], ecx */ W32((u32)(r_edx+0x4c0u), r_ecx);
    /* 005d565f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d5661: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d5663: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5d5668u); f_0064c8a0();
    /* 005d5668: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d566b: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005d566e: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005d5671: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005d5674: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d5677: mov dword ptr [edx + 0x4c4], eax */ W32((u32)(r_edx+0x4c4u), r_eax);
    /* 005d567d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d5680: mov dword ptr [edx + 0x4c8], ecx */ W32((u32)(r_edx+0x4c8u), r_ecx);
    /* 005d5686: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d5688: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d568a: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5d568fu); f_0064c8a0();
    /* 005d568f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d5692: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005d5695: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 005d5698: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005d569b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d569e: mov dword ptr [edx + 0x4cc], eax */ W32((u32)(r_edx+0x4ccu), r_eax);
    /* 005d56a4: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d56a7: mov dword ptr [edx + 0x4d0], ecx */ W32((u32)(r_edx+0x4d0u), r_ecx);
    /* 005d56ad: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d56af: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d56b1: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5d56b6u); f_0064c8a0();
    /* 005d56b6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d56b9: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005d56bc: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 005d56bf: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005d56c2: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d56c5: mov dword ptr [edx + 0x4d4], eax */ W32((u32)(r_edx+0x4d4u), r_eax);
    /* 005d56cb: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d56ce: mov dword ptr [edx + 0x4d8], ecx */ W32((u32)(r_edx+0x4d8u), r_ecx);
    /* 005d56d4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d56d6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d56d8: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5d56ddu); f_0064c8a0();
    /* 005d56dd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d56e0: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005d56e3: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 005d56e6: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005d56e9: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d56ec: mov dword ptr [edx + 0x4dc], eax */ W32((u32)(r_edx+0x4dcu), r_eax);
    /* 005d56f2: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d56f5: mov dword ptr [edx + 0x4e0], ecx */ W32((u32)(r_edx+0x4e0u), r_ecx);
    /* 005d56fb: mov esp, ebp */ r_esp = r_ebp;
    /* 005d56fd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d56fe: ret  */ FN_RET(0x005d55d0); r_esp += 4; return;
}

void f_005d5780(void) /* sub_5D5780 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d5780);
    /* 005d5780: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d5781: mov ebp, esp */ r_ebp = r_esp;
    /* 005d5783: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d5786: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 005d5789: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 005d5790: mov dword ptr [ebp - 0x34], 2 */ W32((u32)(r_ebp+0xffffffccu), 0x2u);
    /* 005d5797: mov dword ptr [ebp - 0x30], 4 */ W32((u32)(r_ebp+0xffffffd0u), 0x4u);
    /* 005d579e: mov dword ptr [ebp - 0x2c], 6 */ W32((u32)(r_ebp+0xffffffd4u), 0x6u);
    /* 005d57a5: mov dword ptr [ebp - 0x28], 8 */ W32((u32)(r_ebp+0xffffffd8u), 0x8u);
    /* 005d57ac: mov dword ptr [ebp - 0x24], 0xa */ W32((u32)(r_ebp+0xffffffdcu), 0xau);
    /* 005d57b3: mov dword ptr [ebp - 0x20], 0xc */ W32((u32)(r_ebp+0xffffffe0u), 0xcu);
    /* 005d57ba: mov dword ptr [ebp - 0x1c], 0xe */ W32((u32)(r_ebp+0xffffffe4u), 0xeu);
    /* 005d57c1: mov dword ptr [ebp - 0x18], 0x10 */ W32((u32)(r_ebp+0xffffffe8u), 0x10u);
    /* 005d57c8: mov dword ptr [ebp - 0x14], 0x12 */ W32((u32)(r_ebp+0xffffffecu), 0x12u);
    /* 005d57cf: mov dword ptr [ebp - 0x10], 0x14 */ W32((u32)(r_ebp+0xfffffff0u), 0x14u);
    /* 005d57d6: mov dword ptr [ebp - 0xc], 0x16 */ W32((u32)(r_ebp+0xfffffff4u), 0x16u);
    /* 005d57dd: mov dword ptr [ebp - 8], 0xc */ W32((u32)(r_ebp+0xfffffff8u), 0xcu);
    /* 005d57e4: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005d57e7: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5d57ecu); f_0063aac0();
    /* 005d57ec: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005d57ee: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 005d57f1: cmp dword ptr [ebp - 0x3c], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d57f5: jne 0x5d57fb */ if (!fZ) goto L_005d57fb;
L_005d57f7:; BB(0x005d57f7);
    /* 005d57f7: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005d57f9: jmp 0x5d582e */ goto L_005d582e;
L_005d57fb:; BB(0x005d57fb);
    /* 005d57fb: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d5802: jmp 0x5d580d */ goto L_005d580d;
L_005d5804:; BB(0x005d5804);
    /* 005d5804: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5807: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d580a: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005d580d:; BB(0x005d580d);
    /* 005d580d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5810: cmp edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d5813: jge 0x5d582c */ if ((fS==fO)) goto L_005d582c;
L_005d5815:; BB(0x005d5815);
    /* 005d5815: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005d5818: call 0x4842b0 */ r_esp -= 4; W32(r_esp, 0x5d581du); f_004842b0();
    /* 005d581d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5820: cmp eax, dword ptr [ebp + ecx*4 - 0x38] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+r_ecx*4+0xffffffc8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5824: jne 0x5d582a */ if (!fZ) goto L_005d582a;
L_005d5826:; BB(0x005d5826);
    /* 005d5826: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005d5828: jmp 0x5d582e */ goto L_005d582e;
L_005d582a:; BB(0x005d582a);
    /* 005d582a: jmp 0x5d5804 */ goto L_005d5804;
L_005d582c:; BB(0x005d582c);
    /* 005d582c: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_005d582e:; BB(0x005d582e);
    /* 005d582e: mov esp, ebp */ r_esp = r_ebp;
    /* 005d5830: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d5831: ret  */ FN_RET(0x005d5780); r_esp += 4; return;
}

void f_005d5840(void) /* sub_5D5840 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d5840);
    /* 005d5840: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d5841: mov ebp, esp */ r_ebp = r_esp;
    /* 005d5843: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d5844: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005d5845: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d5848: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d584b: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x5d5850u); f_005d5a50();
    /* 005d5850: mov esi, eax */ r_esi = r_eax;
    /* 005d5852: mov eax, dword ptr [0x7947e4] */ r_eax = R32((u32)(0x7947e4u));
    /* 005d5857: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d5859: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005d585f: mov eax, dword ptr [edx + 0x2b0] */ r_eax = R32((u32)(r_edx+0x2b0u));
    /* 005d5865: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d5867u); call_ind(t); }
    /* 005d5867: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005d5869: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d586b: setge cl */ r_ecx = (r_ecx & 0xffffff00u) | ((((fS==fO)) ? 1 : 0) & 0xffu);
    /* 005d586e: mov al, cl */ r_eax = (r_eax & 0xffffff00u) | (((u8)r_ecx) & 0xffu);
    /* 005d5870: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d5871: mov esp, ebp */ r_esp = r_ebp;
    /* 005d5873: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d5874: ret  */ FN_RET(0x005d5840); r_esp += 4; return;
}

void f_005d58d0(void) /* sub_5D58D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d58d0);
    /* 005d58d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d58d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005d58d3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d58d6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d58d9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d58dc: cmp dword ptr [eax + 0x4cc], 0 */ {  u32 a = R32((u32)(r_eax+0x4ccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d58e3: jl 0x5d5906 */ if ((fS!=fO)) goto L_005d5906;
L_005d58e5:; BB(0x005d58e5);
    /* 005d58e5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d58e8: cmp dword ptr [ecx + 0x4cc], 0 */ {  u32 a = R32((u32)(r_ecx+0x4ccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d58ef: jne 0x5d58fd */ if (!fZ) goto L_005d58fd;
L_005d58f1:; BB(0x005d58f1);
    /* 005d58f1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d58f4: cmp dword ptr [edx + 0x4d0], 0 */ {  u32 a = R32((u32)(r_edx+0x4d0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d58fb: jl 0x5d5906 */ if ((fS!=fO)) goto L_005d5906;
L_005d58fd:; BB(0x005d58fd);
    /* 005d58fd: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005d5904: jmp 0x5d590d */ goto L_005d590d;
L_005d5906:; BB(0x005d5906);
    /* 005d5906: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
L_005d590d:; BB(0x005d590d);
    /* 005d590d: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 005d5910: mov esp, ebp */ r_esp = r_ebp;
    /* 005d5912: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d5913: ret  */ FN_RET(0x005d58d0); r_esp += 4; return;
}

void f_005d5920(void) /* sub_5D5920 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d5920);
    /* 005d5920: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d5921: mov ebp, esp */ r_ebp = r_esp;
    /* 005d5923: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d5926: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d5929: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d592c: cmp dword ptr [eax + 0x4cc], 0 */ {  u32 a = R32((u32)(r_eax+0x4ccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d5933: jg 0x5d5956 */ if ((!fZ&&fS==fO)) goto L_005d5956;
L_005d5935:; BB(0x005d5935);
    /* 005d5935: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5938: cmp dword ptr [ecx + 0x4cc], 0 */ {  u32 a = R32((u32)(r_ecx+0x4ccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d593f: jne 0x5d594d */ if (!fZ) goto L_005d594d;
L_005d5941:; BB(0x005d5941);
    /* 005d5941: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5944: cmp dword ptr [edx + 0x4d0], 0 */ {  u32 a = R32((u32)(r_edx+0x4d0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d594b: jg 0x5d5956 */ if ((!fZ&&fS==fO)) goto L_005d5956;
L_005d594d:; BB(0x005d594d);
    /* 005d594d: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005d5954: jmp 0x5d595d */ goto L_005d595d;
L_005d5956:; BB(0x005d5956);
    /* 005d5956: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
L_005d595d:; BB(0x005d595d);
    /* 005d595d: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 005d5960: mov esp, ebp */ r_esp = r_ebp;
    /* 005d5962: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d5963: ret  */ FN_RET(0x005d5920); r_esp += 4; return;
}

void f_005d5970(void) /* sub_5D5970 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d5970);
    /* 005d5970: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d5971: mov ebp, esp */ r_ebp = r_esp;
    /* 005d5973: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d5974: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d5977: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d597a: call 0x5d52e0 */ r_esp -= 4; W32(r_esp, 0x5d597fu); f_005d52e0();
    /* 005d597f: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005d5982: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 005d5985: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d5988: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 005d598a: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 005d598d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d5990: mov esp, ebp */ r_esp = r_ebp;
    /* 005d5992: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d5993: ret 4 */ FN_RET(0x005d5970); r_esp += 8; return;
}

void f_005d59e0(void) /* sub_5D59E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d59e0);
    /* 005d59e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d59e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005d59e3: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d59e6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005d59e9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d59ec: call 0x5d52e0 */ r_esp -= 4; W32(r_esp, 0x5d59f1u); f_005d52e0();
    /* 005d59f1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d59f4: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 005d59f7: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005d59fa: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
    /* 005d59fd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d5a00: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5d5a05u); f_0063aac0();
    /* 005d5a05: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005d5a07: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005d5a0a: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5a0e: je 0x5d5a2c */ if (fZ) goto L_005d5a2c;
L_005d5a10:; BB(0x005d5a10);
    /* 005d5a10: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d5a13: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5d5a18u); f_0063aac0();
    /* 005d5a18: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005d5a1a: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005d5a1d: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5a21: je 0x5d5a2c */ if (fZ) goto L_005d5a2c;
L_005d5a23:; BB(0x005d5a23);
    /* 005d5a23: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005d5a2a: jmp 0x5d5a33 */ goto L_005d5a33;
L_005d5a2c:; BB(0x005d5a2c);
    /* 005d5a2c: mov dword ptr [ebp - 0x10], 1 */ W32((u32)(r_ebp+0xfffffff0u), 0x1u);
L_005d5a33:; BB(0x005d5a33);
    /* 005d5a33: movzx edx, byte ptr [ebp - 0x10] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffff0u));
    /* 005d5a37: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5a39: je 0x5d5a43 */ if (fZ) goto L_005d5a43;
L_005d5a3b:; BB(0x005d5a3b);
    /* 005d5a3b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d5a3e: call 0x63b0a0 */ r_esp -= 4; W32(r_esp, 0x5d5a43u); f_0063b0a0();
L_005d5a43:; BB(0x005d5a43);
    /* 005d5a43: mov esp, ebp */ r_esp = r_ebp;
    /* 005d5a45: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d5a46: ret 8 */ FN_RET(0x005d59e0); r_esp += 12; return;
}

void f_005d5a50(void) /* sub_5D5A50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d5a50);
    /* 005d5a50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d5a51: mov ebp, esp */ r_ebp = r_esp;
    /* 005d5a53: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d5a56: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005d5a59: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 005d5a5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d5a5d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d5a60: call 0x5d5a90 */ r_esp -= 4; W32(r_esp, 0x5d5a65u); f_005d5a90();
    /* 005d5a65: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005d5a67: mov esp, ebp */ r_esp = r_ebp;
    /* 005d5a69: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d5a6a: ret  */ FN_RET(0x005d5a50); r_esp += 4; return;
}

void f_005d5a70(void) /* sub_5D5A70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d5a70);
    /* 005d5a70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d5a71: mov ebp, esp */ r_ebp = r_esp;
    /* 005d5a73: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d5a76: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005d5a79: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 005d5a7c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d5a7d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d5a80: call 0x5d5a90 */ r_esp -= 4; W32(r_esp, 0x5d5a85u); f_005d5a90();
    /* 005d5a85: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 005d5a88: mov esp, ebp */ r_esp = r_ebp;
    /* 005d5a8a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d5a8b: ret  */ FN_RET(0x005d5a70); r_esp += 4; return;
}

void f_005d5a90(void) /* sub_5D5A90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d5a90);
    /* 005d5a90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d5a91: mov ebp, esp */ r_ebp = r_esp;
    /* 005d5a93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d5a94: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d5a97: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5a9a: call 0x5d52e0 */ r_esp -= 4; W32(r_esp, 0x5d5a9fu); f_005d52e0();
    /* 005d5a9f: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005d5aa1: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005d5aa4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d5aa7: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 005d5aa9: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 005d5aac: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d5aaf: mov esp, ebp */ r_esp = r_ebp;
    /* 005d5ab1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d5ab2: ret 4 */ FN_RET(0x005d5a90); r_esp += 8; return;
}

void f_005d5ac0(void) /* sub_5D5AC0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d5ac0);
    /* 005d5ac0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d5ac1: mov ebp, esp */ r_ebp = r_esp;
    /* 005d5ac3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d5ac6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005d5ac9: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 005d5acc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d5acd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d5ad0: call 0x5d5a90 */ r_esp -= 4; W32(r_esp, 0x5d5ad5u); f_005d5a90();
    /* 005d5ad5: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005d5ad7: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005d5ada: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d5add: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 005d5adf: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 005d5ae2: mov esp, ebp */ r_esp = r_ebp;
    /* 005d5ae4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d5ae5: ret 4 */ FN_RET(0x005d5ac0); r_esp += 8; return;
}

void f_005d5af0(void) /* sub_5D5AF0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d5af0);
    /* 005d5af0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d5af1: mov ebp, esp */ r_ebp = r_esp;
    /* 005d5af3: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d5af6: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 005d5af9: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005d5afc: call 0x5d52e0 */ r_esp -= 4; W32(r_esp, 0x5d5b01u); f_005d52e0();
    /* 005d5b01: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d5b04: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 005d5b06: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005d5b09: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 005d5b0c: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005d5b0f: cmp dword ptr [eax + 4], -1 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5b13: je 0x5d5b27 */ if (fZ) goto L_005d5b27;
L_005d5b15:; BB(0x005d5b15);
    /* 005d5b15: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005d5b18: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005d5b1b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d5b1c: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005d5b22: call 0x5de200 */ r_esp -= 4; W32(r_esp, 0x5d5b27u); f_005de200();
L_005d5b27:; BB(0x005d5b27);
    /* 005d5b27: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005d5b2a: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5d5b2fu); f_0063aac0();
    /* 005d5b2f: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005d5b31: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005d5b34: cmp dword ptr [ebp - 0x1c], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5b38: je 0x5d5b56 */ if (fZ) goto L_005d5b56;
L_005d5b3a:; BB(0x005d5b3a);
    /* 005d5b3a: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005d5b3d: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5d5b42u); f_0063aac0();
    /* 005d5b42: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005d5b44: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005d5b47: cmp dword ptr [ebp - 0x20], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5b4b: je 0x5d5b56 */ if (fZ) goto L_005d5b56;
L_005d5b4d:; BB(0x005d5b4d);
    /* 005d5b4d: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 005d5b54: jmp 0x5d5b5d */ goto L_005d5b5d;
L_005d5b56:; BB(0x005d5b56);
    /* 005d5b56: mov dword ptr [ebp - 0x3c], 1 */ W32((u32)(r_ebp+0xffffffc4u), 0x1u);
L_005d5b5d:; BB(0x005d5b5d);
    /* 005d5b5d: movzx edx, byte ptr [ebp - 0x3c] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffc4u));
    /* 005d5b61: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5b63: je 0x5d5bec */ if (fZ) goto L_005d5bec;
L_005d5b69:; BB(0x005d5b69);
    /* 005d5b69: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005d5b6f: call 0x5da830 */ r_esp -= 4; W32(r_esp, 0x5d5b74u); f_005da830();
    /* 005d5b74: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005d5b77: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5b79: jne 0x5d5bec */ if (!fZ) goto L_005d5bec;
L_005d5b7b:; BB(0x005d5b7b);
    /* 005d5b7b: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005d5b7e: call 0x5d6c60 */ r_esp -= 4; W32(r_esp, 0x5d5b83u); f_005d6c60();
    /* 005d5b83: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005d5b86: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5b88: je 0x5d5bec */ if (fZ) goto L_005d5bec;
L_005d5b8a:; BB(0x005d5b8a);
    /* 005d5b8a: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005d5b8d: movzx eax, byte ptr [edx + 0x4b1] */ r_eax = (u32)R8((u32)(r_edx+0x4b1u));
    /* 005d5b94: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5b96: jne 0x5d5bce */ if (!fZ) goto L_005d5bce;
L_005d5b98:; BB(0x005d5b98);
    /* 005d5b98: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005d5b9b: call 0x5d6e70 */ r_esp -= 4; W32(r_esp, 0x5d5ba0u); f_005d6e70();
    /* 005d5ba0: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005d5ba3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5ba5: je 0x5d5bce */ if (fZ) goto L_005d5bce;
L_005d5ba7:; BB(0x005d5ba7);
    /* 005d5ba7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d5ba9: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005d5bac: call 0x5d6ee0 */ r_esp -= 4; W32(r_esp, 0x5d5bb1u); f_005d6ee0();
    /* 005d5bb1: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005d5bb4: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5d5bb9u); f_0063aac0();
    /* 005d5bb9: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d5bbc: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005d5bbf: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d5bc2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d5bc3: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005d5bc9: call 0x5dc520 */ r_esp -= 4; W32(r_esp, 0x5d5bceu); f_005dc520();
L_005d5bce:; BB(0x005d5bce);
    /* 005d5bce: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005d5bd1: call 0x5d6f90 */ r_esp -= 4; W32(r_esp, 0x5d5bd6u); f_005d6f90();
    /* 005d5bd6: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005d5bd9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5bdb: je 0x5d5bec */ if (fZ) goto L_005d5bec;
L_005d5bdd:; BB(0x005d5bdd);
    /* 005d5bdd: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005d5be0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d5be1: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005d5be7: call 0x5dc3e0 */ r_esp -= 4; W32(r_esp, 0x5d5becu); f_005dc3e0();
L_005d5bec:; BB(0x005d5bec);
    /* 005d5bec: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005d5bf2: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x5d5bf7u); f_005da7b0();
    /* 005d5bf7: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005d5bfa: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5bfc: je 0x5d5c9f */ if (fZ) goto L_005d5c9f;
L_005d5c02:; BB(0x005d5c02);
    /* 005d5c02: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005d5c05: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5d5c0au); f_0063aac0();
    /* 005d5c0a: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005d5c0c: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005d5c0f: cmp dword ptr [ebp - 0x28], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5c13: je 0x5d5c31 */ if (fZ) goto L_005d5c31;
L_005d5c15:; BB(0x005d5c15);
    /* 005d5c15: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005d5c18: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5d5c1du); f_0063aac0();
    /* 005d5c1d: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005d5c1f: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 005d5c22: cmp dword ptr [ebp - 0x2c], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5c26: je 0x5d5c31 */ if (fZ) goto L_005d5c31;
L_005d5c28:; BB(0x005d5c28);
    /* 005d5c28: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 005d5c2f: jmp 0x5d5c38 */ goto L_005d5c38;
L_005d5c31:; BB(0x005d5c31);
    /* 005d5c31: mov dword ptr [ebp - 0x40], 1 */ W32((u32)(r_ebp+0xffffffc0u), 0x1u);
L_005d5c38:; BB(0x005d5c38);
    /* 005d5c38: movzx edx, byte ptr [ebp - 0x40] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffc0u));
    /* 005d5c3c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5c3e: je 0x5d5c9f */ if (fZ) goto L_005d5c9f;
L_005d5c40:; BB(0x005d5c40);
    /* 005d5c40: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 005d5c45: movzx ecx, byte ptr [eax + 0x4f05] */ r_ecx = (u32)R8((u32)(r_eax+0x4f05u));
    /* 005d5c4c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5c4e: jne 0x5d5c9f */ if (!fZ) goto L_005d5c9f;
L_005d5c50:; BB(0x005d5c50);
    /* 005d5c50: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d5c52: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005d5c58: call 0x5da880 */ r_esp -= 4; W32(r_esp, 0x5d5c5du); f_005da880();
    /* 005d5c5d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d5c5e: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5d5c63u); f_0064c8a0();
    /* 005d5c63: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d5c66: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005d5c69: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005d5c6c: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d5c6f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d5c70: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d5c73: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d5c74: lea ecx, [ebp - 0x18] */ r_ecx = (u32)(r_ebp+0xffffffe8u);
    /* 005d5c77: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d5c78: lea edx, [ebp - 8] */ r_edx = (u32)(r_ebp+0xfffffff8u);
    /* 005d5c7b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d5c7c: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005d5c7f: call 0x5d5a90 */ r_esp -= 4; W32(r_esp, 0x5d5c84u); f_005d5a90();
    /* 005d5c84: mov ecx, eax */ r_ecx = r_eax;
    /* 005d5c86: call 0x64c630 */ r_esp -= 4; W32(r_esp, 0x5d5c8bu); f_0064c630();
    /* 005d5c8b: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005d5c8d: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005d5c90: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005d5c93: mov dword ptr [eax + 0x4d4], ecx */ W32((u32)(r_eax+0x4d4u), r_ecx);
    /* 005d5c99: mov dword ptr [eax + 0x4d8], edx */ W32((u32)(r_eax+0x4d8u), r_edx);
L_005d5c9f:; BB(0x005d5c9f);
    /* 005d5c9f: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005d5ca2: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5d5ca7u); f_0063aac0();
    /* 005d5ca7: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005d5ca9: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 005d5cac: cmp dword ptr [ebp - 0x30], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5cb0: je 0x5d5cce */ if (fZ) goto L_005d5cce;
L_005d5cb2:; BB(0x005d5cb2);
    /* 005d5cb2: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005d5cb5: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5d5cbau); f_0063aac0();
    /* 005d5cba: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d5cbc: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 005d5cbf: cmp dword ptr [ebp - 0x34], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5cc3: je 0x5d5cce */ if (fZ) goto L_005d5cce;
L_005d5cc5:; BB(0x005d5cc5);
    /* 005d5cc5: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 005d5ccc: jmp 0x5d5cd5 */ goto L_005d5cd5;
L_005d5cce:; BB(0x005d5cce);
    /* 005d5cce: mov dword ptr [ebp - 0x44], 1 */ W32((u32)(r_ebp+0xffffffbcu), 0x1u);
L_005d5cd5:; BB(0x005d5cd5);
    /* 005d5cd5: movzx eax, byte ptr [ebp - 0x44] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffbcu));
    /* 005d5cd9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d5cdb: je 0x5d5ce5 */ if (fZ) goto L_005d5ce5;
L_005d5cdd:; BB(0x005d5cdd);
    /* 005d5cdd: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005d5ce0: call 0x63b0a0 */ r_esp -= 4; W32(r_esp, 0x5d5ce5u); f_0063b0a0();
L_005d5ce5:; BB(0x005d5ce5);
    /* 005d5ce5: mov esp, ebp */ r_esp = r_ebp;
    /* 005d5ce7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d5ce8: ret 8 */ FN_RET(0x005d5af0); r_esp += 12; return;
}

void f_005d5cf0(void) /* sub_5D5CF0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d5cf0);
    /* 005d5cf0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d5cf1: mov ebp, esp */ r_ebp = r_esp;
    /* 005d5cf3: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d5cf6: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005d5cf9: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d5cfc: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x5d5d01u); f_005d5a50();
    /* 005d5d01: cmp eax, 0x3b9aca00 */ {  u32 a = r_eax; u32 b = 0x3b9aca00u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d5d06: jl 0x5d5d0d */ if ((fS!=fO)) goto L_005d5d0d;
L_005d5d08:; BB(0x005d5d08);
    /* 005d5d08: jmp 0x5d5dcd */ goto L_005d5dcd;
L_005d5d0d:; BB(0x005d5d0d);
    /* 005d5d0d: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005d5d10: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d5d11: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d5d14: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d5d15: lea edx, [ebp - 0x10] */ r_edx = (u32)(r_ebp+0xfffffff0u);
    /* 005d5d18: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d5d19: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 005d5d1c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d5d1d: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d5d20: call 0x5d5a90 */ r_esp -= 4; W32(r_esp, 0x5d5d25u); f_005d5a90();
    /* 005d5d25: mov ecx, eax */ r_ecx = r_eax;
    /* 005d5d27: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x5d5d2cu); f_0064c5c0();
    /* 005d5d2c: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005d5d2f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d5d30: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d5d32: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d5d33: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d5d36: call 0x5d5af0 */ r_esp -= 4; W32(r_esp, 0x5d5d3bu); f_005d5af0();
    /* 005d5d3b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005d5d3e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d5d3f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d5d42: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d5d43: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d5d46: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005d5d49: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d5d4a: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d5d4d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d5d4e: mov edx, dword ptr [0x7947e4] */ r_edx = R32((u32)(0x7947e4u));
    /* 005d5d54: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d5d56: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005d5d5c: mov edx, dword ptr [eax + 0x2a0] */ r_edx = R32((u32)(r_eax+0x2a0u));
    /* 005d5d62: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5d5d64u); call_ind(t); }
    /* 005d5d64: lea eax, [ebp - 0x18] */ r_eax = (u32)(r_ebp+0xffffffe8u);
    /* 005d5d67: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d5d68: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d5d6b: call 0x5d5a90 */ r_esp -= 4; W32(r_esp, 0x5d5d70u); f_005d5a90();
    /* 005d5d70: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005d5d73: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d5d74: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d5d76: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d5d77: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d5d79: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d5d7c: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005d5d7f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d5d80: mov ecx, dword ptr [0x79506c] */ r_ecx = R32((u32)(0x79506cu));
    /* 005d5d86: call 0x5e7e40 */ r_esp -= 4; W32(r_esp, 0x5d5d8bu); f_005e7e40();
    /* 005d5d8b: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d5d8e: mov eax, dword ptr [edx + 0x4e8] */ r_eax = R32((u32)(r_edx+0x4e8u));
    /* 005d5d94: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d5d95: mov ecx, dword ptr [edx + 0x4e4] */ r_ecx = R32((u32)(r_edx+0x4e4u));
    /* 005d5d9b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d5d9c: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d5d9f: add edx, 0x4ec */ {  u32 a = r_edx; u32 b = 0x4ecu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005d5da5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d5da6: lea eax, [ebp - 0x20] */ r_eax = (u32)(r_ebp+0xffffffe0u);
    /* 005d5da9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d5daa: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d5dad: call 0x5d5a90 */ r_esp -= 4; W32(r_esp, 0x5d5db2u); f_005d5a90();
    /* 005d5db2: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005d5db5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d5db6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d5db8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d5db9: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005d5dbb: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d5dbe: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005d5dc1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d5dc2: mov ecx, dword ptr [0x79506c] */ r_ecx = R32((u32)(0x79506cu));
    /* 005d5dc8: call 0x5e7e90 */ r_esp -= 4; W32(r_esp, 0x5d5dcdu); f_005e7e90();
L_005d5dcd:; BB(0x005d5dcd);
    /* 005d5dcd: mov esp, ebp */ r_esp = r_ebp;
    /* 005d5dcf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d5dd0: ret 8 */ FN_RET(0x005d5cf0); r_esp += 12; return;
}

void f_005d5de0(void) /* sub_5D5DE0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d5de0);
    /* 005d5de0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d5de1: mov ebp, esp */ r_ebp = r_esp;
    /* 005d5de3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d5de4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d5de7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5dea: mov ecx, dword ptr [eax + 0x4bc] */ r_ecx = R32((u32)(r_eax+0x4bcu));
    /* 005d5df0: mov edx, dword ptr [eax + 0x4c0] */ r_edx = R32((u32)(r_eax+0x4c0u));
    /* 005d5df6: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d5df9: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 005d5dfb: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 005d5dfe: mov esp, ebp */ r_esp = r_ebp;
    /* 005d5e00: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d5e01: ret 4 */ FN_RET(0x005d5de0); r_esp += 8; return;
}

void f_005d5f30(void) /* sub_5D5F30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d5f30);
    /* 005d5f30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d5f31: mov ebp, esp */ r_ebp = r_esp;
    /* 005d5f33: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d5f34: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d5f37: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5f3a: mov eax, dword ptr [eax + 0x4bc] */ r_eax = R32((u32)(r_eax+0x4bcu));
    /* 005d5f40: mov esp, ebp */ r_esp = r_ebp;
    /* 005d5f42: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d5f43: ret  */ FN_RET(0x005d5f30); r_esp += 4; return;
}

void f_005d5f80(void) /* sub_5D5F80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d5f80);
    /* 005d5f80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d5f81: mov ebp, esp */ r_ebp = r_esp;
    /* 005d5f83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d5f84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d5f87: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d5f8a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d5f8d: mov dword ptr [eax + 0x4c4], ecx */ W32((u32)(r_eax+0x4c4u), r_ecx);
    /* 005d5f93: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005d5f96: mov dword ptr [eax + 0x4c8], edx */ W32((u32)(r_eax+0x4c8u), r_edx);
    /* 005d5f9c: mov esp, ebp */ r_esp = r_ebp;
    /* 005d5f9e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d5f9f: ret 8 */ FN_RET(0x005d5f80); r_esp += 12; return;
}

void f_005d5fb0(void) /* sub_5D5FB0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d5fb0);
    /* 005d5fb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d5fb1: mov ebp, esp */ r_ebp = r_esp;
    /* 005d5fb3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d5fb6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005d5fb9: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005d5fbc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d5fbd: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d5fc0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d5fc1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d5fc4: call 0x5d6080 */ r_esp -= 4; W32(r_esp, 0x5d5fc9u); f_005d6080();
    /* 005d5fc9: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005d5fcc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d5fcd: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d5fd0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d5fd1: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 005d5fd4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d5fd5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d5fd8: add ecx, 0x4c4 */ {  u32 a = r_ecx; u32 b = 0x4c4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d5fde: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x5d5fe3u); f_0064c5c0();
    /* 005d5fe3: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005d5fe6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d5fe7: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005d5fe9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d5fea: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d5fed: call 0x5d5f80 */ r_esp -= 4; W32(r_esp, 0x5d5ff2u); f_005d5f80();
    /* 005d5ff2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d5ff5: mov edx, dword ptr [ecx + 0x4c8] */ r_edx = R32((u32)(r_ecx+0x4c8u));
    /* 005d5ffb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d5ffc: mov eax, dword ptr [ecx + 0x4c4] */ r_eax = R32((u32)(r_ecx+0x4c4u));
    /* 005d6002: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d6003: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d6005: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d6008: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005d600b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d600c: mov ecx, dword ptr [0x79506c] */ r_ecx = R32((u32)(0x79506cu));
    /* 005d6012: call 0x5e7e40 */ r_esp -= 4; W32(r_esp, 0x5d6017u); f_005e7e40();
    /* 005d6017: mov esp, ebp */ r_esp = r_ebp;
    /* 005d6019: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d601a: ret 8 */ FN_RET(0x005d5fb0); r_esp += 12; return;
}

