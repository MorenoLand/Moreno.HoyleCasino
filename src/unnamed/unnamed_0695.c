#include "protos.h"

void f_006951e0(void) /* sub_6951E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006951e0);
    /* 006951e0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006951e1: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 006951e5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006951e6: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 006951ea: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 006951ed: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 006951f0: mov eax, dword ptr [esi + 0x14] */ r_eax = R32((u32)(r_esi+0x14u));
    /* 006951f3: mov edx, dword ptr [ecx + edi*4] */ r_edx = R32((u32)(r_ecx+r_edi*4));
    /* 006951f6: mov ecx, dword ptr [eax + edi*4] */ r_ecx = R32((u32)(r_eax+r_edi*4));
    /* 006951f9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006951fa: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 006951fe: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006951ff: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00695200: call 0x69d210 */ r_esp -= 4; W32(r_esp, 0x695205u); f_0069d210();
    /* 00695205: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 00695208: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069520b: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0069520e: mov eax, dword ptr [ecx + edi*4] */ r_eax = R32((u32)(r_ecx+r_edi*4));
    /* 00695211: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00695212: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00695213: ret  */ FN_RET(0x006951e0); r_esp += 4; return;
}

void f_00695220(void) /* sub_695220 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00695220);
    /* 00695220: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00695221: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00695222: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00695223: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00695224: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 00695228: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00695229: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 0069522d: mov eax, dword ptr [edi + 0x24] */ r_eax = R32((u32)(r_edi+0x24u));
    /* 00695230: mov ebp, dword ptr [edi + 0x28] */ r_ebp = R32((u32)(r_edi+0x28u));
    /* 00695233: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00695234: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00695235: mov dword ptr [esp + 0x18], ebp */ W32((u32)(r_esp+0x18u), r_ebp);
    /* 00695239: call 0x69d390 */ r_esp -= 4; W32(r_esp, 0x69523eu); f_0069d390();
    /* 0069523e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00695241: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00695243: jl 0x695290 */ if ((fS!=fO)) goto L_00695290;
L_00695245:; BB(0x00695245);
    /* 00695245: mov ecx, dword ptr [edi + 0x20] */ r_ecx = R32((u32)(r_edi+0x20u));
    /* 00695248: mov ebx, dword ptr [ecx + eax*4] */ r_ebx = R32((u32)(r_ecx+r_eax*4));
    /* 0069524b: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); }
    /* 0069524d: jns 0x695267 */ if (!fS) goto L_00695267;
L_0069524f:; BB(0x0069524f);
    /* 0069524f: mov edi, dword ptr [edi + 8] */ r_edi = R32((u32)(r_edi+0x8u));
    /* 00695252: mov esi, ebx */ r_esi = r_ebx;
    /* 00695254: sar esi, 0xf */ { u32 c = (15u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 00695257: and ebx, 0x7fff */ {  u32 a = r_ebx; u32 b = 0x7fffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0069525d: and esi, 0x7fff */ {  u32 a = r_esi; u32 b = 0x7fffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00695263: sub edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00695265: jmp 0x695295 */ goto L_00695295;
L_00695267:; BB(0x00695267);
    /* 00695267: mov edx, dword ptr [edi + 0x1c] */ r_edx = R32((u32)(r_edi+0x1cu));
    /* 0069526a: movsx eax, byte ptr [edx + ebx - 1] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+r_ebx+0xffffffffu));
    /* 0069526f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00695270: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00695271: call 0x69d440 */ r_esp -= 4; W32(r_esp, 0x695276u); f_0069d440();
    /* 00695276: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00695279: lea esi, [ebx - 1] */ r_esi = (u32)(r_ebx+0xffffffffu);
L_0069527c:; BB(0x0069527c);
    /* 0069527c: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0069527e: jl 0x69533b */ if ((fS!=fO)) goto L_0069533b;
L_00695284:; BB(0x00695284);
    /* 00695284: mov ecx, dword ptr [edi + 0x18] */ r_ecx = R32((u32)(r_edi+0x18u));
    /* 00695287: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00695288: mov eax, dword ptr [ecx + esi*4] */ r_eax = R32((u32)(r_ecx+r_esi*4));
    /* 0069528b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069528c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069528d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069528e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069528f: ret  */ FN_RET(0x00695220); r_esp += 4; return;
L_00695290:; BB(0x00695290);
    /* 00695290: mov edi, dword ptr [edi + 8] */ r_edi = R32((u32)(r_edi+0x8u));
    /* 00695293: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_00695295:; BB(0x00695295);
    /* 00695295: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 00695299: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069529a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069529b: call 0x69d390 */ r_esp -= 4; W32(r_esp, 0x6952a0u); f_0069d390();
    /* 006952a0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006952a3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006952a5: jge 0x6952c9 */ if ((fS==fO)) goto L_006952c9;
L_006952a7:; BB(0x006952a7);
    /* 006952a7: cmp ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006952aa: jle 0x6952c1 */ if ((fZ||fS!=fO)) goto L_006952c1;
L_006952ac:; BB(0x006952ac);
    /* 006952ac: dec ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 006952ad: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006952ae: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006952af: call 0x69d390 */ r_esp -= 4; W32(r_esp, 0x6952b4u); f_0069d390();
    /* 006952b4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006952b7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006952b9: jl 0x6952a7 */ if ((fS!=fO)) goto L_006952a7;
L_006952bb:; BB(0x006952bb);
    /* 006952bb: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 006952bf: jmp 0x6952c9 */ goto L_006952c9;
L_006952c1:; BB(0x006952c1);
    /* 006952c1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006952c3: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 006952c7: jl 0x695338 */ if ((fS!=fO)) goto L_00695338;
L_006952c9:; BB(0x006952c9);
    /* 006952c9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006952ca: call 0x694f20 */ r_esp -= 4; W32(r_esp, 0x6952cfu); f_00694f20();
    /* 006952cf: mov edx, edi */ r_edx = r_edi;
    /* 006952d1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006952d4: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006952d6: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006952d9: jle 0x69530c */ if ((fZ||fS!=fO)) goto L_0069530c;
L_006952db:; BB(0x006952db);
    /* 006952db: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 006952df: mov ebx, dword ptr [ecx + 0x14] */ r_ebx = R32((u32)(r_ecx+0x14u));
L_006952e2:; BB(0x006952e2);
    /* 006952e2: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006952e4: lea ecx, [edx + esi] */ r_ecx = (u32)(r_edx+r_esi);
    /* 006952e7: cmp eax, dword ptr [ebx + ecx*4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+r_ecx*4)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006952ea: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 006952ec: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006952ee: lea ebp, [ecx - 1] */ r_ebp = (u32)(r_ecx+0xffffffffu);
    /* 006952f1: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006952f3: and ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 006952f5: and ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 006952f7: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 006952f9: add esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006952fb: mov edx, edi */ r_edx = r_edi;
    /* 006952fd: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006952ff: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00695302: jg 0x6952e2 */ if ((!fZ&&fS==fO)) goto L_006952e2;
L_00695304:; BB(0x00695304);
    /* 00695304: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 00695308: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
L_0069530c:; BB(0x0069530c);
    /* 0069530c: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 00695310: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00695313: movsx eax, byte ptr [eax + esi] */ r_eax = (u32)(i32)(i8)R8((u32)(r_eax+r_esi));
    /* 00695317: cmp eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00695319: jg 0x69532e */ if ((!fZ&&fS==fO)) goto L_0069532e;
L_0069531b:; BB(0x0069531b);
    /* 0069531b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069531c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069531d: call 0x69d440 */ r_esp -= 4; W32(r_esp, 0x695322u); f_0069d440();
    /* 00695322: mov edi, dword ptr [esp + 0x20] */ r_edi = R32((u32)(r_esp+0x20u));
    /* 00695326: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00695329: jmp 0x69527c */ goto L_0069527c;
L_0069532e:; BB(0x0069532e);
    /* 0069532e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069532f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00695330: call 0x69d440 */ r_esp -= 4; W32(r_esp, 0x695335u); f_0069d440();
    /* 00695335: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00695338:; BB(0x00695338);
    /* 00695338: or esi, 0xffffffff */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
L_0069533b:; BB(0x0069533b);
    /* 0069533b: mov eax, esi */ r_eax = r_esi;
    /* 0069533d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069533e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069533f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00695340: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00695341: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00695342: ret  */ FN_RET(0x00695220); r_esp += 4; return;
}

void f_00695350(void) /* sub_695350 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00695350);
    /* 00695350: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00695351: mov ebp, esp */ r_ebp = r_esp;
    /* 00695353: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00695356: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00695359: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069535a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069535b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069535c: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 0069535f: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00695360: idiv dword ptr [edi] */ { i32 d = (i32)R32((u32)(r_edi)); if (!d) UNSUP(0x00695360, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00695360, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00695362: mov esi, eax */ r_esi = r_eax;
    /* 00695364: mov dword ptr [ebp - 4], esi */ W32((u32)(r_ebp+0xfffffffcu), r_esi);
    /* 00695367: lea ebx, [esi*4] */ r_ebx = (u32)(r_esi*4);
    /* 0069536e: mov eax, ebx */ r_eax = r_ebx;
    /* 00695370: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00695373: and al, 0xfc */ {  u32 a = (u8)r_eax; u32 b = 0xfcu; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00695375: call 0x687340 */ r_esp -= 4; W32(r_esp, 0x69537au); f_00687340();
    /* 0069537a: mov eax, ebx */ r_eax = r_ebx;
    /* 0069537c: mov dword ptr [ebp + 0x14], esp */ W32((u32)(r_ebp+0x14u), r_esp);
    /* 0069537f: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00695382: and al, 0xfc */ {  u32 a = (u8)r_eax; u32 b = 0xfcu; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00695384: call 0x687340 */ r_esp -= 4; W32(r_esp, 0x695389u); f_00687340();
    /* 00695389: mov ecx, esp */ r_ecx = r_esp;
    /* 0069538b: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00695392: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00695394: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00695397: jle 0x6954e4 */ if ((fZ||fS!=fO)) goto L_006954e4;
L_0069539d:; BB(0x0069539d);
    /* 0069539d: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 006953a0: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 006953a3: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006953a5: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_006953a8:; BB(0x006953a8);
    /* 006953a8: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 006953ab: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 006953ae: mov eax, dword ptr [edi + 0x28] */ r_eax = R32((u32)(r_edi+0x28u));
    /* 006953b1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006953b2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006953b3: mov dword ptr [ebp + 0x14], eax */ W32((u32)(r_ebp+0x14u), r_eax);
    /* 006953b6: call 0x69d390 */ r_esp -= 4; W32(r_esp, 0x6953bbu); f_0069d390();
    /* 006953bb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006953be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006953c0: jl 0x6953ff */ if ((fS!=fO)) goto L_006953ff;
L_006953c2:; BB(0x006953c2);
    /* 006953c2: mov ecx, dword ptr [edi + 0x20] */ r_ecx = R32((u32)(r_edi+0x20u));
    /* 006953c5: mov ebx, dword ptr [ecx + eax*4] */ r_ebx = R32((u32)(r_ecx+r_eax*4));
    /* 006953c8: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); }
    /* 006953ca: jns 0x6953e4 */ if (!fS) goto L_006953e4;
L_006953cc:; BB(0x006953cc);
    /* 006953cc: mov edi, dword ptr [edi + 8] */ r_edi = R32((u32)(r_edi+0x8u));
    /* 006953cf: mov esi, ebx */ r_esi = r_ebx;
    /* 006953d1: sar esi, 0xf */ { u32 c = (15u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 006953d4: and ebx, 0x7fff */ {  u32 a = r_ebx; u32 b = 0x7fffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 006953da: and esi, 0x7fff */ {  u32 a = r_esi; u32 b = 0x7fffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 006953e0: sub edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 006953e2: jmp 0x695404 */ goto L_00695404;
L_006953e4:; BB(0x006953e4);
    /* 006953e4: mov edx, dword ptr [edi + 0x1c] */ r_edx = R32((u32)(r_edi+0x1cu));
    /* 006953e7: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 006953ea: movsx eax, byte ptr [edx + ebx - 1] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+r_ebx+0xffffffffu));
    /* 006953ef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006953f0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006953f1: call 0x69d440 */ r_esp -= 4; W32(r_esp, 0x6953f6u); f_0069d440();
    /* 006953f6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006953f9: dec ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 006953fa: jmp 0x6954b3 */ goto L_006954b3;
L_006953ff:; BB(0x006953ff);
    /* 006953ff: mov edi, dword ptr [edi + 8] */ r_edi = R32((u32)(r_edi+0x8u));
    /* 00695402: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_00695404:; BB(0x00695404);
    /* 00695404: mov ebx, dword ptr [ebp + 0x14] */ r_ebx = R32((u32)(r_ebp+0x14u));
    /* 00695407: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0069540a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069540b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069540c: call 0x69d390 */ r_esp -= 4; W32(r_esp, 0x695411u); f_0069d390();
    /* 00695411: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00695414: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00695416: jge 0x69543b */ if ((fS==fO)) goto L_0069543b;
L_00695418:; BB(0x00695418);
    /* 00695418: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069541b: jle 0x695434 */ if ((fZ||fS!=fO)) goto L_00695434;
L_0069541d:; BB(0x0069541d);
    /* 0069541d: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00695420: dec ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00695421: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00695422: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00695423: call 0x69d390 */ r_esp -= 4; W32(r_esp, 0x695428u); f_0069d390();
    /* 00695428: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069542b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0069542d: jl 0x695418 */ if ((fS!=fO)) goto L_00695418;
L_0069542f:; BB(0x0069542f);
    /* 0069542f: mov dword ptr [ebp + 0x14], ebx */ W32((u32)(r_ebp+0x14u), r_ebx);
    /* 00695432: jmp 0x69543b */ goto L_0069543b;
L_00695434:; BB(0x00695434);
    /* 00695434: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00695436: mov dword ptr [ebp + 0x14], ebx */ W32((u32)(r_ebp+0x14u), r_ebx);
    /* 00695439: jl 0x6954aa */ if ((fS!=fO)) goto L_006954aa;
L_0069543b:; BB(0x0069543b);
    /* 0069543b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069543c: call 0x694f20 */ r_esp -= 4; W32(r_esp, 0x695441u); f_00694f20();
    /* 00695441: mov edx, edi */ r_edx = r_edi;
    /* 00695443: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00695446: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00695448: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069544b: jle 0x69547e */ if ((fZ||fS!=fO)) goto L_0069547e;
L_0069544d:; BB(0x0069544d);
    /* 0069544d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00695450: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 00695453: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_00695456:; BB(0x00695456);
    /* 00695456: mov ebx, dword ptr [ebp - 0x10] */ r_ebx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00695459: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0069545b: lea ecx, [edx + esi] */ r_ecx = (u32)(r_edx+r_esi);
    /* 0069545e: cmp eax, dword ptr [ebx + ecx*4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+r_ecx*4)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00695461: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 00695463: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00695465: lea ebx, [ecx - 1] */ r_ebx = (u32)(r_ecx+0xffffffffu);
    /* 00695468: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0069546a: and ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0069546c: and ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0069546e: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00695470: add esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00695472: mov edx, edi */ r_edx = r_edi;
    /* 00695474: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00695476: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00695479: jg 0x695456 */ if ((!fZ&&fS==fO)) goto L_00695456;
L_0069547b:; BB(0x0069547b);
    /* 0069547b: mov ebx, dword ptr [ebp + 0x14] */ r_ebx = R32((u32)(r_ebp+0x14u));
L_0069547e:; BB(0x0069547e);
    /* 0069547e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00695481: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00695484: movsx eax, byte ptr [eax + esi] */ r_eax = (u32)(i32)(i8)R8((u32)(r_eax+r_esi));
    /* 00695488: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069548a: jg 0x69549d */ if ((!fZ&&fS==fO)) goto L_0069549d;
L_0069548c:; BB(0x0069548c);
    /* 0069548c: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0069548f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00695490: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00695491: call 0x69d440 */ r_esp -= 4; W32(r_esp, 0x695496u); f_0069d440();
    /* 00695496: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00695499: mov ebx, esi */ r_ebx = r_esi;
    /* 0069549b: jmp 0x6954ad */ goto L_006954ad;
L_0069549d:; BB(0x0069549d);
    /* 0069549d: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 006954a0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006954a1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006954a2: call 0x69d440 */ r_esp -= 4; W32(r_esp, 0x6954a7u); f_0069d440();
    /* 006954a7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006954aa:; BB(0x006954aa);
    /* 006954aa: or ebx, 0xffffffff */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
L_006954ad:; BB(0x006954ad);
    /* 006954ad: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 006954b0: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
L_006954b3:; BB(0x006954b3);
    /* 006954b3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006954b6: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 006954b9: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006954bc: mov dword ptr [ecx + eax], ebx */ W32((u32)(r_ecx+r_eax), r_ebx);
    /* 006954bf: je 0x695532 */ if (fZ) goto L_00695532;
L_006954c1:; BB(0x006954c1);
    /* 006954c1: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 006954c3: mov ecx, dword ptr [edi + 0x10] */ r_ecx = R32((u32)(r_edi+0x10u));
    /* 006954c6: imul edx, ebx */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_ebx; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006954c9: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006954cc: lea edx, [ecx + edx*4] */ r_edx = (u32)(r_ecx+r_edx*4);
    /* 006954cf: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006954d2: mov dword ptr [eax - 4], edx */ W32((u32)(r_eax+0xfffffffcu), r_edx);
    /* 006954d5: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006954d6: cmp ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006954d8: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 006954db: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 006954de: jl 0x6953a8 */ if ((fS!=fO)) goto L_006953a8;
L_006954e4:; BB(0x006954e4);
    /* 006954e4: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 006954e6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006954e8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006954ea: jle 0x695526 */ if ((fZ||fS!=fO)) goto L_00695526;
L_006954ec:; BB(0x006954ec);
    /* 006954ec: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 006954ef: mov dword ptr [ebp + 0x10], ecx */ W32((u32)(r_ebp+0x10u), r_ecx);
L_006954f2:; BB(0x006954f2);
    /* 006954f2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006954f4: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006954f6: jle 0x695510 */ if ((fZ||fS!=fO)) goto L_00695510;
L_006954f8:; BB(0x006954f8);
    /* 006954f8: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006954fb: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006954fc: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006954ff: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00695501: mov ebx, dword ptr [ebx + eax*4 - 4] */ r_ebx = R32((u32)(r_ebx+r_eax*4+0xfffffffcu));
    /* 00695505: fld dword ptr [ebx + edx*4] */ FPUSH(R_F32((u32)(r_ebx+r_edx*4)));
    /* 00695508: fadd dword ptr [ecx - 4] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0xfffffffcu));
    /* 0069550b: fstp dword ptr [ecx - 4] */ W_F32((u32)(r_ecx+0xfffffffcu), ST(0)); FPOP();
    /* 0069550e: jl 0x6954f8 */ if ((fS!=fO)) goto L_006954f8;
L_00695510:; BB(0x00695510);
    /* 00695510: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00695513: lea eax, [esi*4] */ r_eax = (u32)(r_esi*4);
    /* 0069551a: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0069551c: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0069551e: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069551f: mov dword ptr [ebp + 0x10], ecx */ W32((u32)(r_ebp+0x10u), r_ecx);
    /* 00695522: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00695524: jl 0x6954f2 */ if ((fS!=fO)) goto L_006954f2;
L_00695526:; BB(0x00695526);
    /* 00695526: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00695528: lea esp, [ebp - 0x24] */ r_esp = (u32)(r_ebp+0xffffffdcu);
    /* 0069552b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069552c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069552d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069552e: mov esp, ebp */ r_esp = r_ebp;
    /* 00695530: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00695531: ret  */ FN_RET(0x00695350); r_esp += 4; return;
L_00695532:; BB(0x00695532);
    /* 00695532: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00695535: lea esp, [ebp - 0x24] */ r_esp = (u32)(r_ebp+0xffffffdcu);
    /* 00695538: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00695539: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069553a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069553b: mov esp, ebp */ r_esp = r_ebp;
    /* 0069553d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069553e: ret  */ FN_RET(0x00695350); r_esp += 4; return;
}

void f_00695540(void) /* sub_695540 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00695540);
    /* 00695540: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00695543: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00695544: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00695545: mov ebp, dword ptr [esp + 0x14] */ r_ebp = R32((u32)(r_esp+0x14u));
    /* 00695549: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069554a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069554b: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0069554d: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00695550: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00695553: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 00695557: jle 0x6956be */ if ((fZ||fS!=fO)) goto L_006956be;
L_0069555d:; BB(0x0069555d);
    /* 0069555d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0069555f: mov dword ptr [esp + 0x10], edi */ W32((u32)(r_esp+0x10u), r_edi);
    /* 00695563: jle 0x69569b */ if ((fZ||fS!=fO)) goto L_0069569b;
L_00695569:; BB(0x00695569);
    /* 00695569: mov ecx, dword ptr [ebp + 0x24] */ r_ecx = R32((u32)(r_ebp+0x24u));
    /* 0069556c: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
    /* 00695570: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 00695573: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00695574: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00695575: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 00695579: call 0x69d390 */ r_esp -= 4; W32(r_esp, 0x69557eu); f_0069d390();
    /* 0069557e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00695581: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00695583: jl 0x6955be */ if ((fS!=fO)) goto L_006955be;
L_00695585:; BB(0x00695585);
    /* 00695585: mov edx, dword ptr [ebp + 0x20] */ r_edx = R32((u32)(r_ebp+0x20u));
    /* 00695588: mov ebx, dword ptr [edx + eax*4] */ r_ebx = R32((u32)(r_edx+r_eax*4));
    /* 0069558b: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); }
    /* 0069558d: jns 0x6955a7 */ if (!fS) goto L_006955a7;
L_0069558f:; BB(0x0069558f);
    /* 0069558f: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 00695592: mov esi, ebx */ r_esi = r_ebx;
    /* 00695594: sar esi, 0xf */ { u32 c = (15u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 00695597: and ebx, 0x7fff */ {  u32 a = r_ebx; u32 b = 0x7fffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0069559d: and esi, 0x7fff */ {  u32 a = r_esi; u32 b = 0x7fffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 006955a3: sub edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 006955a5: jmp 0x6955c3 */ goto L_006955c3;
L_006955a7:; BB(0x006955a7);
    /* 006955a7: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 006955aa: movsx ecx, byte ptr [eax + ebx - 1] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+r_ebx+0xffffffffu));
    /* 006955af: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006955b0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006955b1: call 0x69d440 */ r_esp -= 4; W32(r_esp, 0x6955b6u); f_0069d440();
    /* 006955b6: lea esi, [ebx - 1] */ r_esi = (u32)(r_ebx+0xffffffffu);
    /* 006955b9: jmp 0x695658 */ goto L_00695658;
L_006955be:; BB(0x006955be);
    /* 006955be: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 006955c1: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_006955c3:; BB(0x006955c3);
    /* 006955c3: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 006955c7: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 006955cb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006955cc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006955cd: call 0x69d390 */ r_esp -= 4; W32(r_esp, 0x6955d2u); f_0069d390();
    /* 006955d2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006955d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006955d7: jge 0x695603 */ if ((fS==fO)) goto L_00695603;
L_006955d9:; BB(0x006955d9);
    /* 006955d9: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006955dc: jle 0x6955f7 */ if ((fZ||fS!=fO)) goto L_006955f7;
L_006955de:; BB(0x006955de);
    /* 006955de: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 006955e2: dec ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 006955e3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006955e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006955e5: call 0x69d390 */ r_esp -= 4; W32(r_esp, 0x6955eau); f_0069d390();
    /* 006955ea: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006955ed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006955ef: jl 0x6955d9 */ if ((fS!=fO)) goto L_006955d9;
L_006955f1:; BB(0x006955f1);
    /* 006955f1: mov dword ptr [esp + 0x1c], ebx */ W32((u32)(r_esp+0x1cu), r_ebx);
    /* 006955f5: jmp 0x695603 */ goto L_00695603;
L_006955f7:; BB(0x006955f7);
    /* 006955f7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006955f9: mov dword ptr [esp + 0x1c], ebx */ W32((u32)(r_esp+0x1cu), r_ebx);
    /* 006955fd: jl 0x6959d3 */ if ((fS!=fO)) goto L_006959d3;
L_00695603:; BB(0x00695603);
    /* 00695603: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00695604: call 0x694f20 */ r_esp -= 4; W32(r_esp, 0x695609u); f_00694f20();
    /* 00695609: mov edx, edi */ r_edx = r_edi;
    /* 0069560b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069560e: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00695610: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00695613: jle 0x69563e */ if ((fZ||fS!=fO)) goto L_0069563e;
L_00695615:; BB(0x00695615);
    /* 00695615: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 00695618: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0069561a: lea ebx, [edx + esi] */ r_ebx = (u32)(r_edx+r_esi);
    /* 0069561d: cmp eax, dword ptr [ecx + ebx*4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+r_ebx*4)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00695620: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 00695622: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00695624: lea ebx, [ecx - 1] */ r_ebx = (u32)(r_ecx+0xffffffffu);
    /* 00695627: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00695629: and ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0069562b: and ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0069562d: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0069562f: add esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00695631: mov edx, edi */ r_edx = r_edi;
    /* 00695633: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00695635: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00695638: jg 0x695615 */ if ((!fZ&&fS==fO)) goto L_00695615;
L_0069563a:; BB(0x0069563a);
    /* 0069563a: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
L_0069563e:; BB(0x0069563e);
    /* 0069563e: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 00695641: movsx eax, byte ptr [ecx + esi] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ecx+r_esi));
    /* 00695645: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00695647: jg 0x6956a5 */ if ((!fZ&&fS==fO)) goto L_006956a5;
L_00695649:; BB(0x00695649);
    /* 00695649: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 0069564d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069564e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069564f: call 0x69d440 */ r_esp -= 4; W32(r_esp, 0x695654u); f_0069d440();
    /* 00695654: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
L_00695658:; BB(0x00695658);
    /* 00695658: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069565b: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069565e: je 0x6959d3 */ if (fZ) goto L_006959d3;
L_00695664:; BB(0x00695664);
    /* 00695664: mov ecx, dword ptr [ebp] */ r_ecx = R32((u32)(r_ebp));
    /* 00695667: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0069566a: mov eax, ecx */ r_eax = r_ecx;
    /* 0069566c: imul eax, esi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_esi; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0069566f: lea edx, [edx + eax*4] */ r_edx = (u32)(r_edx+r_eax*4);
    /* 00695672: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00695674: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00695676: jle 0x695691 */ if ((fZ||fS!=fO)) goto L_00695691;
L_00695678:; BB(0x00695678);
    /* 00695678: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 0069567c: fld dword ptr [edx + eax*4] */ FPUSH(R_F32((u32)(r_edx+r_eax*4)));
    /* 0069567f: fadd dword ptr [ecx + edi*4] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+r_edi*4));
    /* 00695682: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00695683: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00695684: fstp dword ptr [ecx + edi*4 - 4] */ W_F32((u32)(r_ecx+r_edi*4+0xfffffffcu), ST(0)); FPOP();
    /* 00695688: cmp eax, dword ptr [ebp] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069568b: jl 0x695678 */ if ((fS!=fO)) goto L_00695678;
L_0069568d:; BB(0x0069568d);
    /* 0069568d: mov dword ptr [esp + 0x10], edi */ W32((u32)(r_esp+0x10u), r_edi);
L_00695691:; BB(0x00695691);
    /* 00695691: cmp edi, dword ptr [esp + 0x28] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x28u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00695695: jl 0x695569 */ if ((fS!=fO)) goto L_00695569;
L_0069569b:; BB(0x0069569b);
    /* 0069569b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069569c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069569d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069569e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006956a0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006956a1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006956a4: ret  */ FN_RET(0x00695540); r_esp += 4; return;
L_006956a5:; BB(0x006956a5);
    /* 006956a5: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 006956a9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006956aa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006956ab: call 0x69d440 */ r_esp -= 4; W32(r_esp, 0x6956b0u); f_0069d440();
    /* 006956b0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006956b3: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006956b6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006956b7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006956b8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006956b9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006956ba: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006956bd: ret  */ FN_RET(0x00695540); r_esp += 4; return;
L_006956be:; BB(0x006956be);
    /* 006956be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006956c0: jle 0x69569b */ if ((fZ||fS!=fO)) goto L_0069569b;
L_006956c2:; BB(0x006956c2);
    /* 006956c2: mov edx, dword ptr [ebp + 0x24] */ r_edx = R32((u32)(r_ebp+0x24u));
    /* 006956c5: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
    /* 006956c9: mov ecx, dword ptr [ebp + 0x28] */ r_ecx = R32((u32)(r_ebp+0x28u));
    /* 006956cc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006956cd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006956ce: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 006956d2: call 0x69d390 */ r_esp -= 4; W32(r_esp, 0x6956d7u); f_0069d390();
    /* 006956d7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006956da: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006956dc: jl 0x69571e */ if ((fS!=fO)) goto L_0069571e;
L_006956de:; BB(0x006956de);
    /* 006956de: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 006956e1: mov eax, dword ptr [ecx + eax*4] */ r_eax = R32((u32)(r_ecx+r_eax*4));
    /* 006956e4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); }
    /* 006956e6: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 006956ea: jns 0x695703 */ if (!fS) goto L_00695703;
L_006956ec:; BB(0x006956ec);
    /* 006956ec: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 006956ef: mov esi, eax */ r_esi = r_eax;
    /* 006956f1: sar esi, 0xf */ { u32 c = (15u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 006956f4: and eax, 0x7fff */ {  u32 a = r_eax; u32 b = 0x7fffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006956f9: and esi, 0x7fff */ {  u32 a = r_esi; u32 b = 0x7fffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 006956ff: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00695701: jmp 0x695723 */ goto L_00695723;
L_00695703:; BB(0x00695703);
    /* 00695703: mov edx, dword ptr [ebp + 0x1c] */ r_edx = R32((u32)(r_ebp+0x1cu));
    /* 00695706: movsx eax, byte ptr [edx + eax - 1] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+r_eax+0xffffffffu));
    /* 0069570b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069570c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069570d: call 0x69d440 */ r_esp -= 4; W32(r_esp, 0x695712u); f_0069d440();
    /* 00695712: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 00695716: lea esi, [ecx - 1] */ r_esi = (u32)(r_ecx+0xffffffffu);
    /* 00695719: jmp 0x6957c5 */ goto L_006957c5;
L_0069571e:; BB(0x0069571e);
    /* 0069571e: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 00695721: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_00695723:; BB(0x00695723);
    /* 00695723: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00695727: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 0069572b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069572c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069572d: call 0x69d390 */ r_esp -= 4; W32(r_esp, 0x695732u); f_0069d390();
    /* 00695732: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00695735: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00695737: jge 0x695763 */ if ((fS==fO)) goto L_00695763;
L_00695739:; BB(0x00695739);
    /* 00695739: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 0069573d: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00695740: jle 0x69575b */ if ((fZ||fS!=fO)) goto L_0069575b;
L_00695742:; BB(0x00695742);
    /* 00695742: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00695743: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 00695747: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00695748: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 0069574c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0069574d: call 0x69d390 */ r_esp -= 4; W32(r_esp, 0x695752u); f_0069d390();
    /* 00695752: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00695755: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00695757: jl 0x695739 */ if ((fS!=fO)) goto L_00695739;
L_00695759:; BB(0x00695759);
    /* 00695759: jmp 0x695763 */ goto L_00695763;
L_0069575b:; BB(0x0069575b);
    /* 0069575b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0069575d: jl 0x6959d3 */ if ((fS!=fO)) goto L_006959d3;
L_00695763:; BB(0x00695763);
    /* 00695763: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00695764: call 0x694f20 */ r_esp -= 4; W32(r_esp, 0x695769u); f_00694f20();
    /* 00695769: mov edx, ebx */ r_edx = r_ebx;
    /* 0069576b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069576e: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00695770: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00695773: jle 0x6957a7 */ if ((fZ||fS!=fO)) goto L_006957a7;
L_00695775:; BB(0x00695775);
    /* 00695775: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 00695778: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
L_0069577c:; BB(0x0069577c);
    /* 0069577c: mov ebp, dword ptr [esp + 0x14] */ r_ebp = R32((u32)(r_esp+0x14u));
    /* 00695780: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00695782: lea ecx, [edx + esi] */ r_ecx = (u32)(r_edx+r_esi);
    /* 00695785: cmp eax, dword ptr [ebp + ecx*4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+r_ecx*4)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00695789: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 0069578b: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0069578d: lea ebp, [ecx - 1] */ r_ebp = (u32)(r_ecx+0xffffffffu);
    /* 00695790: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00695792: and ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00695794: and ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 00695796: sub ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00695798: add esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0069579a: mov edx, ebx */ r_edx = r_ebx;
    /* 0069579c: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0069579e: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006957a1: jg 0x69577c */ if ((!fZ&&fS==fO)) goto L_0069577c;
L_006957a3:; BB(0x006957a3);
    /* 006957a3: mov ebp, dword ptr [esp + 0x1c] */ r_ebp = R32((u32)(r_esp+0x1cu));
L_006957a7:; BB(0x006957a7);
    /* 006957a7: mov edx, dword ptr [ebp + 0x1c] */ r_edx = R32((u32)(r_ebp+0x1cu));
    /* 006957aa: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 006957ae: movsx eax, byte ptr [edx + esi] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+r_esi));
    /* 006957b2: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006957b4: jg 0x6959c5 */ if ((!fZ&&fS==fO)) goto L_006959c5;
L_006957ba:; BB(0x006957ba);
    /* 006957ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006957bb: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 006957bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006957c0: call 0x69d440 */ r_esp -= 4; W32(r_esp, 0x6957c5u); f_0069d440();
L_006957c5:; BB(0x006957c5);
    /* 006957c5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006957c8: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006957cb: je 0x6959d3 */ if (fZ) goto L_006959d3;
L_006957d1:; BB(0x006957d1);
    /* 006957d1: mov ecx, dword ptr [ebp] */ r_ecx = R32((u32)(r_ebp));
    /* 006957d4: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 006957d7: mov edx, ecx */ r_edx = r_ecx;
    /* 006957d9: imul edx, esi */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_esi; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006957dc: lea edx, [eax + edx*4] */ r_edx = (u32)(r_eax+r_edx*4);
    /* 006957df: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006957e1: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006957e2: cmp ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 006957e5: ja 0x6959b1 */ if ((!fC&&!fZ)) goto L_006959b1;
L_006957eb:; BB(0x006957eb);
    /* 006957eb: jmp dword ptr [ecx*4 + 0x6959e0] */ { u32 t = R32((u32)(r_ecx*4+0x6959e0u)); switch (t) { case 0x6959a2u: goto L_006959a2; case 0x695990u: goto L_00695990; case 0x695970u: goto L_00695970; case 0x695942u: goto L_00695942; case 0x695906u: goto L_00695906; case 0x6958b9u: goto L_006958b9; case 0x69585eu: goto L_0069585e; case 0x6957f2u: goto L_006957f2; default: UNSUP(0x006957eb, "jump table entry is not a known target"); } }
L_006957f2:; BB(0x006957f2);
    /* 006957f2: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 006957f6: mov eax, 1 */ r_eax = 0x1u;
    /* 006957fb: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 006957fd: fadd dword ptr [ecx + edi*4] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+r_edi*4));
    /* 00695800: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00695801: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00695802: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00695803: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00695804: fstp dword ptr [ecx + edi*4 - 8] */ W_F32((u32)(r_ecx+r_edi*4+0xfffffff8u), ST(0)); FPOP();
    /* 00695808: fld dword ptr [edx + eax*4 - 8] */ FPUSH(R_F32((u32)(r_edx+r_eax*4+0xfffffff8u)));
    /* 0069580c: fadd dword ptr [ecx + edi*4 - 4] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+r_edi*4+0xfffffffcu));
    /* 00695810: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00695811: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00695812: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00695813: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00695814: fstp dword ptr [ecx + edi*4 - 0xc] */ W_F32((u32)(r_ecx+r_edi*4+0xfffffff4u), ST(0)); FPOP();
    /* 00695818: fld dword ptr [edx + eax*4 - 0xc] */ FPUSH(R_F32((u32)(r_edx+r_eax*4+0xfffffff4u)));
    /* 0069581c: fadd dword ptr [ecx + edi*4 - 8] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+r_edi*4+0xfffffff8u));
    /* 00695820: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00695821: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00695822: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00695823: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00695824: fstp dword ptr [ecx + edi*4 - 0x10] */ W_F32((u32)(r_ecx+r_edi*4+0xfffffff0u), ST(0)); FPOP();
    /* 00695828: fld dword ptr [edx + eax*4 - 0x10] */ FPUSH(R_F32((u32)(r_edx+r_eax*4+0xfffffff0u)));
    /* 0069582c: fadd dword ptr [ecx + edi*4 - 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+r_edi*4+0xfffffff4u));
    /* 00695830: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00695831: fstp dword ptr [ecx + edi*4 - 0x10] */ W_F32((u32)(r_ecx+r_edi*4+0xfffffff0u), ST(0)); FPOP();
    /* 00695835: fld dword ptr [edx + eax*4 - 0xc] */ FPUSH(R_F32((u32)(r_edx+r_eax*4+0xfffffff4u)));
    /* 00695839: fadd dword ptr [ecx + edi*4 - 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+r_edi*4+0xfffffff4u));
    /* 0069583d: fstp dword ptr [ecx + edi*4 - 0xc] */ W_F32((u32)(r_ecx+r_edi*4+0xfffffff4u), ST(0)); FPOP();
    /* 00695841: fld dword ptr [edx + eax*4 - 8] */ FPUSH(R_F32((u32)(r_edx+r_eax*4+0xfffffff8u)));
    /* 00695845: fadd dword ptr [ecx + edi*4 - 8] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+r_edi*4+0xfffffff8u));
    /* 00695849: fstp dword ptr [ecx + edi*4 - 8] */ W_F32((u32)(r_ecx+r_edi*4+0xfffffff8u), ST(0)); FPOP();
    /* 0069584d: fld dword ptr [edx + eax*4 - 4] */ FPUSH(R_F32((u32)(r_edx+r_eax*4+0xfffffffcu)));
    /* 00695851: fadd dword ptr [ecx + edi*4 - 4] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+r_edi*4+0xfffffffcu));
    /* 00695855: fstp dword ptr [ecx + edi*4 - 4] */ W_F32((u32)(r_ecx+r_edi*4+0xfffffffcu), ST(0)); FPOP();
    /* 00695859: jmp 0x6959a6 */ goto L_006959a6;
L_0069585e:; BB(0x0069585e);
    /* 0069585e: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 00695862: fld dword ptr [edx + eax*4] */ FPUSH(R_F32((u32)(r_edx+r_eax*4)));
    /* 00695865: fadd dword ptr [ecx + edi*4] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+r_edi*4));
    /* 00695868: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00695869: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0069586a: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069586b: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0069586c: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069586d: fstp dword ptr [ecx + edi*4 - 8] */ W_F32((u32)(r_ecx+r_edi*4+0xfffffff8u), ST(0)); FPOP();
    /* 00695871: fld dword ptr [edx + eax*4 - 8] */ FPUSH(R_F32((u32)(r_edx+r_eax*4+0xfffffff8u)));
    /* 00695875: fadd dword ptr [ecx + edi*4 - 4] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+r_edi*4+0xfffffffcu));
    /* 00695879: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0069587a: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069587b: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0069587c: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069587d: fstp dword ptr [ecx + edi*4 - 0xc] */ W_F32((u32)(r_ecx+r_edi*4+0xfffffff4u), ST(0)); FPOP();
    /* 00695881: fld dword ptr [edx + eax*4 - 0xc] */ FPUSH(R_F32((u32)(r_edx+r_eax*4+0xfffffff4u)));
    /* 00695885: fadd dword ptr [ecx + edi*4 - 8] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+r_edi*4+0xfffffff8u));
    /* 00695889: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0069588a: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069588b: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0069588c: fstp dword ptr [ecx + edi*4 - 0x10] */ W_F32((u32)(r_ecx+r_edi*4+0xfffffff0u), ST(0)); FPOP();
    /* 00695890: fld dword ptr [edx + eax*4 - 0xc] */ FPUSH(R_F32((u32)(r_edx+r_eax*4+0xfffffff4u)));
    /* 00695894: fadd dword ptr [ecx + edi*4 - 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+r_edi*4+0xfffffff4u));
    /* 00695898: fstp dword ptr [ecx + edi*4 - 0xc] */ W_F32((u32)(r_ecx+r_edi*4+0xfffffff4u), ST(0)); FPOP();
    /* 0069589c: fld dword ptr [edx + eax*4 - 8] */ FPUSH(R_F32((u32)(r_edx+r_eax*4+0xfffffff8u)));
    /* 006958a0: fadd dword ptr [ecx + edi*4 - 8] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+r_edi*4+0xfffffff8u));
    /* 006958a4: fstp dword ptr [ecx + edi*4 - 8] */ W_F32((u32)(r_ecx+r_edi*4+0xfffffff8u), ST(0)); FPOP();
    /* 006958a8: fld dword ptr [edx + eax*4 - 4] */ FPUSH(R_F32((u32)(r_edx+r_eax*4+0xfffffffcu)));
    /* 006958ac: fadd dword ptr [ecx + edi*4 - 4] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+r_edi*4+0xfffffffcu));
    /* 006958b0: fstp dword ptr [ecx + edi*4 - 4] */ W_F32((u32)(r_ecx+r_edi*4+0xfffffffcu), ST(0)); FPOP();
    /* 006958b4: jmp 0x6959a6 */ goto L_006959a6;
L_006958b9:; BB(0x006958b9);
    /* 006958b9: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 006958bd: fld dword ptr [edx + eax*4] */ FPUSH(R_F32((u32)(r_edx+r_eax*4)));
    /* 006958c0: fadd dword ptr [ecx + edi*4] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+r_edi*4));
    /* 006958c3: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006958c4: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006958c5: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006958c6: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006958c7: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006958c8: fstp dword ptr [ecx + edi*4 - 8] */ W_F32((u32)(r_ecx+r_edi*4+0xfffffff8u), ST(0)); FPOP();
    /* 006958cc: fld dword ptr [edx + eax*4 - 8] */ FPUSH(R_F32((u32)(r_edx+r_eax*4+0xfffffff8u)));
    /* 006958d0: fadd dword ptr [ecx + edi*4 - 4] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+r_edi*4+0xfffffffcu));
    /* 006958d4: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006958d5: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006958d6: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006958d7: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006958d8: fstp dword ptr [ecx + edi*4 - 0xc] */ W_F32((u32)(r_ecx+r_edi*4+0xfffffff4u), ST(0)); FPOP();
    /* 006958dc: fld dword ptr [edx + eax*4 - 0xc] */ FPUSH(R_F32((u32)(r_edx+r_eax*4+0xfffffff4u)));
    /* 006958e0: fadd dword ptr [ecx + edi*4 - 8] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+r_edi*4+0xfffffff8u));
    /* 006958e4: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006958e5: fstp dword ptr [ecx + edi*4 - 0xc] */ W_F32((u32)(r_ecx+r_edi*4+0xfffffff4u), ST(0)); FPOP();
    /* 006958e9: fld dword ptr [edx + eax*4 - 8] */ FPUSH(R_F32((u32)(r_edx+r_eax*4+0xfffffff8u)));
    /* 006958ed: fadd dword ptr [ecx + edi*4 - 8] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+r_edi*4+0xfffffff8u));
    /* 006958f1: fstp dword ptr [ecx + edi*4 - 8] */ W_F32((u32)(r_ecx+r_edi*4+0xfffffff8u), ST(0)); FPOP();
    /* 006958f5: fld dword ptr [edx + eax*4 - 4] */ FPUSH(R_F32((u32)(r_edx+r_eax*4+0xfffffffcu)));
    /* 006958f9: fadd dword ptr [ecx + edi*4 - 4] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+r_edi*4+0xfffffffcu));
    /* 006958fd: fstp dword ptr [ecx + edi*4 - 4] */ W_F32((u32)(r_ecx+r_edi*4+0xfffffffcu), ST(0)); FPOP();
    /* 00695901: jmp 0x6959a6 */ goto L_006959a6;
L_00695906:; BB(0x00695906);
    /* 00695906: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 0069590a: fld dword ptr [edx + eax*4] */ FPUSH(R_F32((u32)(r_edx+r_eax*4)));
    /* 0069590d: fadd dword ptr [ecx + edi*4] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+r_edi*4));
    /* 00695910: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00695911: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00695912: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00695913: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00695914: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00695915: fstp dword ptr [ecx + edi*4 - 8] */ W_F32((u32)(r_ecx+r_edi*4+0xfffffff8u), ST(0)); FPOP();
    /* 00695919: fld dword ptr [edx + eax*4 - 8] */ FPUSH(R_F32((u32)(r_edx+r_eax*4+0xfffffff8u)));
    /* 0069591d: fadd dword ptr [ecx + edi*4 - 4] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+r_edi*4+0xfffffffcu));
    /* 00695921: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00695922: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00695923: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00695924: fstp dword ptr [ecx + edi*4 - 0xc] */ W_F32((u32)(r_ecx+r_edi*4+0xfffffff4u), ST(0)); FPOP();
    /* 00695928: fld dword ptr [edx + eax*4 - 8] */ FPUSH(R_F32((u32)(r_edx+r_eax*4+0xfffffff8u)));
    /* 0069592c: fadd dword ptr [ecx + edi*4 - 8] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+r_edi*4+0xfffffff8u));
    /* 00695930: fstp dword ptr [ecx + edi*4 - 8] */ W_F32((u32)(r_ecx+r_edi*4+0xfffffff8u), ST(0)); FPOP();
    /* 00695934: fld dword ptr [edx + eax*4 - 4] */ FPUSH(R_F32((u32)(r_edx+r_eax*4+0xfffffffcu)));
    /* 00695938: fadd dword ptr [ecx + edi*4 - 4] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+r_edi*4+0xfffffffcu));
    /* 0069593c: fstp dword ptr [ecx + edi*4 - 4] */ W_F32((u32)(r_ecx+r_edi*4+0xfffffffcu), ST(0)); FPOP();
    /* 00695940: jmp 0x6959a6 */ goto L_006959a6;
L_00695942:; BB(0x00695942);
    /* 00695942: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 00695946: fld dword ptr [edx + eax*4] */ FPUSH(R_F32((u32)(r_edx+r_eax*4)));
    /* 00695949: fadd dword ptr [ecx + edi*4] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+r_edi*4));
    /* 0069594c: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069594d: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0069594e: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069594f: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00695950: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00695951: fstp dword ptr [ecx + edi*4 - 8] */ W_F32((u32)(r_ecx+r_edi*4+0xfffffff8u), ST(0)); FPOP();
    /* 00695955: fld dword ptr [edx + eax*4 - 8] */ FPUSH(R_F32((u32)(r_edx+r_eax*4+0xfffffff8u)));
    /* 00695959: fadd dword ptr [ecx + edi*4 - 4] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+r_edi*4+0xfffffffcu));
    /* 0069595d: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0069595e: fstp dword ptr [ecx + edi*4 - 8] */ W_F32((u32)(r_ecx+r_edi*4+0xfffffff8u), ST(0)); FPOP();
    /* 00695962: fld dword ptr [edx + eax*4 - 4] */ FPUSH(R_F32((u32)(r_edx+r_eax*4+0xfffffffcu)));
    /* 00695966: fadd dword ptr [ecx + edi*4 - 4] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+r_edi*4+0xfffffffcu));
    /* 0069596a: fstp dword ptr [ecx + edi*4 - 4] */ W_F32((u32)(r_ecx+r_edi*4+0xfffffffcu), ST(0)); FPOP();
    /* 0069596e: jmp 0x6959a6 */ goto L_006959a6;
L_00695970:; BB(0x00695970);
    /* 00695970: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 00695974: fld dword ptr [edx + eax*4] */ FPUSH(R_F32((u32)(r_edx+r_eax*4)));
    /* 00695977: fadd dword ptr [ecx + edi*4] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+r_edi*4));
    /* 0069597a: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069597b: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0069597c: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069597d: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0069597e: fstp dword ptr [ecx + edi*4 - 8] */ W_F32((u32)(r_ecx+r_edi*4+0xfffffff8u), ST(0)); FPOP();
    /* 00695982: fld dword ptr [edx + eax*4 - 4] */ FPUSH(R_F32((u32)(r_edx+r_eax*4+0xfffffffcu)));
    /* 00695986: fadd dword ptr [ecx + edi*4 - 4] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+r_edi*4+0xfffffffcu));
    /* 0069598a: fstp dword ptr [ecx + edi*4 - 4] */ W_F32((u32)(r_ecx+r_edi*4+0xfffffffcu), ST(0)); FPOP();
    /* 0069598e: jmp 0x6959a6 */ goto L_006959a6;
L_00695990:; BB(0x00695990);
    /* 00695990: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 00695994: fld dword ptr [edx + eax*4] */ FPUSH(R_F32((u32)(r_edx+r_eax*4)));
    /* 00695997: fadd dword ptr [ecx + edi*4] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+r_edi*4));
    /* 0069599a: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069599b: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0069599c: fstp dword ptr [ecx + edi*4 - 4] */ W_F32((u32)(r_ecx+r_edi*4+0xfffffffcu), ST(0)); FPOP();
    /* 006959a0: jmp 0x6959a6 */ goto L_006959a6;
L_006959a2:; BB(0x006959a2);
    /* 006959a2: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
L_006959a6:; BB(0x006959a6);
    /* 006959a6: fld dword ptr [edx + eax*4] */ FPUSH(R_F32((u32)(r_edx+r_eax*4)));
    /* 006959a9: fadd dword ptr [ecx + edi*4] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+r_edi*4));
    /* 006959ac: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006959ad: fstp dword ptr [ecx + edi*4 - 4] */ W_F32((u32)(r_ecx+r_edi*4+0xfffffffcu), ST(0)); FPOP();
L_006959b1:; BB(0x006959b1);
    /* 006959b1: cmp edi, dword ptr [esp + 0x28] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x28u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006959b5: jl 0x6956c2 */ if ((fS!=fO)) goto L_006956c2;
L_006959bb:; BB(0x006959bb);
    /* 006959bb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006959bc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006959bd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006959be: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006959c0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006959c1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006959c4: ret  */ FN_RET(0x00695540); r_esp += 4; return;
L_006959c5:; BB(0x006959c5);
    /* 006959c5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006959c6: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 006959ca: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006959cb: call 0x69d440 */ r_esp -= 4; W32(r_esp, 0x6959d0u); f_0069d440();
    /* 006959d0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006959d3:; BB(0x006959d3);
    /* 006959d3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006959d4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006959d5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006959d6: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006959d9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006959da: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006959dd: ret  */ FN_RET(0x00695540); r_esp += 4; return;
}

void f_00695a00(void) /* sub_695A00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00695a00);
    /* 00695a00: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00695a01: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00695a05: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00695a06: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00695a07: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00695a08: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00695a09: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00695a0b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00695a0d: mov dword ptr [esp + 0x10], edi */ W32((u32)(r_esp+0x10u), r_edi);
    /* 00695a11: jle 0x695b47 */ if ((fZ||fS!=fO)) goto L_00695b47;
L_00695a17:; BB(0x00695a17);
    /* 00695a17: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
L_00695a1b:; BB(0x00695a1b);
    /* 00695a1b: mov ecx, dword ptr [ebp + 0x24] */ r_ecx = R32((u32)(r_ebp+0x24u));
    /* 00695a1e: mov esi, dword ptr [esp + 0x20] */ r_esi = R32((u32)(r_esp+0x20u));
    /* 00695a22: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 00695a25: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00695a26: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00695a27: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00695a2b: call 0x69d390 */ r_esp -= 4; W32(r_esp, 0x695a30u); f_0069d390();
    /* 00695a30: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00695a33: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00695a35: jl 0x695a70 */ if ((fS!=fO)) goto L_00695a70;
L_00695a37:; BB(0x00695a37);
    /* 00695a37: mov edx, dword ptr [ebp + 0x20] */ r_edx = R32((u32)(r_ebp+0x20u));
    /* 00695a3a: mov ebx, dword ptr [edx + eax*4] */ r_ebx = R32((u32)(r_edx+r_eax*4));
    /* 00695a3d: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); }
    /* 00695a3f: jns 0x695a59 */ if (!fS) goto L_00695a59;
L_00695a41:; BB(0x00695a41);
    /* 00695a41: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 00695a44: mov esi, ebx */ r_esi = r_ebx;
    /* 00695a46: sar esi, 0xf */ { u32 c = (15u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 00695a49: and ebx, 0x7fff */ {  u32 a = r_ebx; u32 b = 0x7fffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 00695a4f: and esi, 0x7fff */ {  u32 a = r_esi; u32 b = 0x7fffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00695a55: sub edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00695a57: jmp 0x695a75 */ goto L_00695a75;
L_00695a59:; BB(0x00695a59);
    /* 00695a59: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 00695a5c: movsx ecx, byte ptr [eax + ebx - 1] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+r_ebx+0xffffffffu));
    /* 00695a61: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00695a62: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00695a63: call 0x69d440 */ r_esp -= 4; W32(r_esp, 0x695a68u); f_0069d440();
    /* 00695a68: lea esi, [ebx - 1] */ r_esi = (u32)(r_ebx+0xffffffffu);
    /* 00695a6b: jmp 0x695b0a */ goto L_00695b0a;
L_00695a70:; BB(0x00695a70);
    /* 00695a70: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 00695a73: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_00695a75:; BB(0x00695a75);
    /* 00695a75: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 00695a79: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 00695a7d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00695a7e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00695a7f: call 0x69d390 */ r_esp -= 4; W32(r_esp, 0x695a84u); f_0069d390();
    /* 00695a84: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00695a87: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00695a89: jge 0x695ab5 */ if ((fS==fO)) goto L_00695ab5;
L_00695a8b:; BB(0x00695a8b);
    /* 00695a8b: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00695a8e: jle 0x695aa9 */ if ((fZ||fS!=fO)) goto L_00695aa9;
L_00695a90:; BB(0x00695a90);
    /* 00695a90: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 00695a94: dec ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00695a95: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00695a96: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00695a97: call 0x69d390 */ r_esp -= 4; W32(r_esp, 0x695a9cu); f_0069d390();
    /* 00695a9c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00695a9f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00695aa1: jl 0x695a8b */ if ((fS!=fO)) goto L_00695a8b;
L_00695aa3:; BB(0x00695aa3);
    /* 00695aa3: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 00695aa7: jmp 0x695ab5 */ goto L_00695ab5;
L_00695aa9:; BB(0x00695aa9);
    /* 00695aa9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00695aab: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 00695aaf: jl 0x695b59 */ if ((fS!=fO)) goto L_00695b59;
L_00695ab5:; BB(0x00695ab5);
    /* 00695ab5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00695ab6: call 0x694f20 */ r_esp -= 4; W32(r_esp, 0x695abbu); f_00694f20();
    /* 00695abb: mov edx, edi */ r_edx = r_edi;
    /* 00695abd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00695ac0: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00695ac2: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00695ac5: jle 0x695af0 */ if ((fZ||fS!=fO)) goto L_00695af0;
L_00695ac7:; BB(0x00695ac7);
    /* 00695ac7: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 00695aca: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00695acc: lea ebx, [edx + esi] */ r_ebx = (u32)(r_edx+r_esi);
    /* 00695acf: cmp eax, dword ptr [ecx + ebx*4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+r_ebx*4)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00695ad2: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 00695ad4: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00695ad6: lea ebx, [ecx - 1] */ r_ebx = (u32)(r_ecx+0xffffffffu);
    /* 00695ad9: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00695adb: and ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00695add: and ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 00695adf: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00695ae1: add esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00695ae3: mov edx, edi */ r_edx = r_edi;
    /* 00695ae5: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00695ae7: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00695aea: jg 0x695ac7 */ if ((!fZ&&fS==fO)) goto L_00695ac7;
L_00695aec:; BB(0x00695aec);
    /* 00695aec: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
L_00695af0:; BB(0x00695af0);
    /* 00695af0: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 00695af3: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 00695af7: movsx eax, byte ptr [ecx + esi] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ecx+r_esi));
    /* 00695afb: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00695afd: jg 0x695b4f */ if ((!fZ&&fS==fO)) goto L_00695b4f;
L_00695aff:; BB(0x00695aff);
    /* 00695aff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00695b00: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00695b01: call 0x69d440 */ r_esp -= 4; W32(r_esp, 0x695b06u); f_0069d440();
    /* 00695b06: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
L_00695b0a:; BB(0x00695b0a);
    /* 00695b0a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00695b0d: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00695b10: je 0x695b59 */ if (fZ) goto L_00695b59;
L_00695b12:; BB(0x00695b12);
    /* 00695b12: mov ecx, dword ptr [ebp] */ r_ecx = R32((u32)(r_ebp));
    /* 00695b15: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00695b18: mov eax, ecx */ r_eax = r_ecx;
    /* 00695b1a: imul eax, esi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_esi; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00695b1d: lea edx, [edx + eax*4] */ r_edx = (u32)(r_edx+r_eax*4);
    /* 00695b20: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00695b22: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00695b24: jle 0x695b3d */ if ((fZ||fS!=fO)) goto L_00695b3d;
L_00695b26:; BB(0x00695b26);
    /* 00695b26: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
    /* 00695b2a: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 00695b2d: mov dword ptr [esi + edi*4], ecx */ W32((u32)(r_esi+r_edi*4), r_ecx);
    /* 00695b30: mov ecx, dword ptr [ebp] */ r_ecx = R32((u32)(r_ebp));
    /* 00695b33: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00695b34: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00695b35: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00695b37: jl 0x695b26 */ if ((fS!=fO)) goto L_00695b26;
L_00695b39:; BB(0x00695b39);
    /* 00695b39: mov dword ptr [esp + 0x10], edi */ W32((u32)(r_esp+0x10u), r_edi);
L_00695b3d:; BB(0x00695b3d);
    /* 00695b3d: cmp edi, dword ptr [esp + 0x24] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x24u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00695b41: jl 0x695a1b */ if ((fS!=fO)) goto L_00695a1b;
L_00695b47:; BB(0x00695b47);
    /* 00695b47: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00695b48: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00695b49: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00695b4a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00695b4c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00695b4d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00695b4e: ret  */ FN_RET(0x00695a00); r_esp += 4; return;
L_00695b4f:; BB(0x00695b4f);
    /* 00695b4f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00695b50: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00695b51: call 0x69d440 */ r_esp -= 4; W32(r_esp, 0x695b56u); f_0069d440();
    /* 00695b56: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00695b59:; BB(0x00695b59);
    /* 00695b59: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00695b5a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00695b5b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00695b5c: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00695b5f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00695b60: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00695b61: ret  */ FN_RET(0x00695a00); r_esp += 4; return;
}

void f_00695b70(void) /* sub_695B70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00695b70);
    /* 00695b70: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00695b73: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 00695b77: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00695b78: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 00695b7c: mov eax, ecx */ r_eax = r_ecx;
    /* 00695b7e: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00695b7f: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x00695b7f, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00695b7f, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00695b81: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00695b82: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00695b83: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00695b84: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00695b86: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 00695b8a: mov edi, eax */ r_edi = r_eax;
    /* 00695b8c: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 00695b90: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00695b92: mov dword ptr [esp + 0x24], edi */ W32((u32)(r_esp+0x24u), r_edi);
    /* 00695b96: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00695b97: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x00695b97, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00695b97, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00695b99: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00695b9b: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00695b9f: jge 0x695d05 */ if ((fS==fO)) goto L_00695d05;
L_00695ba5:; BB(0x00695ba5);
    /* 00695ba5: mov edi, dword ptr [esp + 0x1c] */ r_edi = R32((u32)(r_esp+0x1cu));
    /* 00695ba9: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 00695bad: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 00695bb0: mov ebp, dword ptr [edi + 0x28] */ r_ebp = R32((u32)(r_edi+0x28u));
    /* 00695bb3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00695bb4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00695bb5: mov dword ptr [esp + 0x38], ebp */ W32((u32)(r_esp+0x38u), r_ebp);
    /* 00695bb9: call 0x69d390 */ r_esp -= 4; W32(r_esp, 0x695bbeu); f_0069d390();
    /* 00695bbe: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00695bc1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00695bc3: jl 0x695c03 */ if ((fS!=fO)) goto L_00695c03;
L_00695bc5:; BB(0x00695bc5);
    /* 00695bc5: mov ecx, dword ptr [edi + 0x20] */ r_ecx = R32((u32)(r_edi+0x20u));
    /* 00695bc8: mov ebx, dword ptr [ecx + eax*4] */ r_ebx = R32((u32)(r_ecx+r_eax*4));
    /* 00695bcb: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); }
    /* 00695bcd: jns 0x695be7 */ if (!fS) goto L_00695be7;
L_00695bcf:; BB(0x00695bcf);
    /* 00695bcf: mov edi, dword ptr [edi + 8] */ r_edi = R32((u32)(r_edi+0x8u));
    /* 00695bd2: mov esi, ebx */ r_esi = r_ebx;
    /* 00695bd4: sar esi, 0xf */ { u32 c = (15u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 00695bd7: and ebx, 0x7fff */ {  u32 a = r_ebx; u32 b = 0x7fffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 00695bdd: and esi, 0x7fff */ {  u32 a = r_esi; u32 b = 0x7fffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00695be3: sub edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00695be5: jmp 0x695c08 */ goto L_00695c08;
L_00695be7:; BB(0x00695be7);
    /* 00695be7: mov edx, dword ptr [edi + 0x1c] */ r_edx = R32((u32)(r_edi+0x1cu));
    /* 00695bea: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 00695bee: movsx eax, byte ptr [edx + ebx - 1] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+r_ebx+0xffffffffu));
    /* 00695bf3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00695bf4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00695bf5: call 0x69d440 */ r_esp -= 4; W32(r_esp, 0x695bfau); f_0069d440();
    /* 00695bfa: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00695bfd: dec ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00695bfe: jmp 0x695ca6 */ goto L_00695ca6;
L_00695c03:; BB(0x00695c03);
    /* 00695c03: mov edi, dword ptr [edi + 8] */ r_edi = R32((u32)(r_edi+0x8u));
    /* 00695c06: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_00695c08:; BB(0x00695c08);
    /* 00695c08: mov ebx, dword ptr [esp + 0x2c] */ r_ebx = R32((u32)(r_esp+0x2cu));
    /* 00695c0c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00695c0d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00695c0e: call 0x69d390 */ r_esp -= 4; W32(r_esp, 0x695c13u); f_0069d390();
    /* 00695c13: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00695c16: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00695c18: jge 0x695c40 */ if ((fS==fO)) goto L_00695c40;
L_00695c1a:; BB(0x00695c1a);
    /* 00695c1a: cmp ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00695c1d: jle 0x695c34 */ if ((fZ||fS!=fO)) goto L_00695c34;
L_00695c1f:; BB(0x00695c1f);
    /* 00695c1f: dec ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00695c20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00695c21: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00695c22: call 0x69d390 */ r_esp -= 4; W32(r_esp, 0x695c27u); f_0069d390();
    /* 00695c27: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00695c2a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00695c2c: jl 0x695c1a */ if ((fS!=fO)) goto L_00695c1a;
L_00695c2e:; BB(0x00695c2e);
    /* 00695c2e: mov dword ptr [esp + 0x30], ebp */ W32((u32)(r_esp+0x30u), r_ebp);
    /* 00695c32: jmp 0x695c40 */ goto L_00695c40;
L_00695c34:; BB(0x00695c34);
    /* 00695c34: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00695c36: mov dword ptr [esp + 0x30], ebp */ W32((u32)(r_esp+0x30u), r_ebp);
    /* 00695c3a: jl 0x695d19 */ if ((fS!=fO)) goto L_00695d19;
L_00695c40:; BB(0x00695c40);
    /* 00695c40: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00695c41: call 0x694f20 */ r_esp -= 4; W32(r_esp, 0x695c46u); f_00694f20();
    /* 00695c46: mov edx, edi */ r_edx = r_edi;
    /* 00695c48: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00695c4b: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00695c4d: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00695c50: jle 0x695c83 */ if ((fZ||fS!=fO)) goto L_00695c83;
L_00695c52:; BB(0x00695c52);
    /* 00695c52: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 00695c56: mov ebx, dword ptr [ecx + 0x14] */ r_ebx = R32((u32)(r_ecx+0x14u));
L_00695c59:; BB(0x00695c59);
    /* 00695c59: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00695c5b: lea ecx, [edx + esi] */ r_ecx = (u32)(r_edx+r_esi);
    /* 00695c5e: cmp eax, dword ptr [ebx + ecx*4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+r_ecx*4)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00695c61: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 00695c63: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00695c65: lea ebp, [ecx - 1] */ r_ebp = (u32)(r_ecx+0xffffffffu);
    /* 00695c68: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00695c6a: and ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00695c6c: and ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 00695c6e: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00695c70: add esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00695c72: mov edx, edi */ r_edx = r_edi;
    /* 00695c74: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00695c76: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00695c79: jg 0x695c59 */ if ((!fZ&&fS==fO)) goto L_00695c59;
L_00695c7b:; BB(0x00695c7b);
    /* 00695c7b: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 00695c7f: mov ebx, dword ptr [esp + 0x2c] */ r_ebx = R32((u32)(r_esp+0x2cu));
L_00695c83:; BB(0x00695c83);
    /* 00695c83: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 00695c87: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00695c8a: movsx eax, byte ptr [eax + esi] */ r_eax = (u32)(i32)(i8)R8((u32)(r_eax+r_esi));
    /* 00695c8e: cmp eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00695c90: jg 0x695d0f */ if ((!fZ&&fS==fO)) goto L_00695d0f;
L_00695c92:; BB(0x00695c92);
    /* 00695c92: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00695c93: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00695c94: call 0x69d440 */ r_esp -= 4; W32(r_esp, 0x695c99u); f_0069d440();
    /* 00695c99: mov edi, dword ptr [esp + 0x24] */ r_edi = R32((u32)(r_esp+0x24u));
    /* 00695c9d: mov ebx, esi */ r_ebx = r_esi;
    /* 00695c9f: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 00695ca3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00695ca6:; BB(0x00695ca6);
    /* 00695ca6: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00695ca9: je 0x695d19 */ if (fZ) goto L_00695d19;
L_00695cab:; BB(0x00695cab);
    /* 00695cab: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00695cad: mov edx, dword ptr [edi + 0x10] */ r_edx = R32((u32)(r_edi+0x10u));
    /* 00695cb0: mov ecx, eax */ r_ecx = r_eax;
    /* 00695cb2: imul ecx, ebx */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_ebx; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00695cb5: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00695cb7: lea edx, [edx + ecx*4] */ r_edx = (u32)(r_edx+r_ecx*4);
    /* 00695cba: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00695cbc: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00695cbe: jle 0x695cf5 */ if ((fZ||fS!=fO)) goto L_00695cf5;
L_00695cc0:; BB(0x00695cc0);
    /* 00695cc0: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 00695cc4: mov ebp, dword ptr [esp + 0x24] */ r_ebp = R32((u32)(r_esp+0x24u));
    /* 00695cc8: fld dword ptr [edx + ecx*4] */ FPUSH(R_F32((u32)(r_edx+r_ecx*4)));
    /* 00695ccb: mov eax, dword ptr [eax + esi*4] */ r_eax = R32((u32)(r_eax+r_esi*4));
    /* 00695cce: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00695ccf: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 00695cd3: fadd dword ptr [eax + ebp*4] */ ST(0) = ST(0) + R_F32((u32)(r_eax+r_ebp*4));
    /* 00695cd6: lea eax, [eax + ebp*4] */ r_eax = (u32)(r_eax+r_ebp*4);
    /* 00695cd9: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 00695cdb: cmp esi, dword ptr [esp + 0x28] */ {  u32 a = r_esi; u32 b = R32((u32)(r_esp+0x28u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00695cdf: jne 0x695cee */ if (!fZ) goto L_00695cee;
L_00695ce1:; BB(0x00695ce1);
    /* 00695ce1: mov eax, ebp */ r_eax = r_ebp;
    /* 00695ce3: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
    /* 00695ce7: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00695ce8: mov esi, ebx */ r_esi = r_ebx;
    /* 00695cea: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
L_00695cee:; BB(0x00695cee);
    /* 00695cee: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00695cf0: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00695cf1: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00695cf3: jl 0x695cc0 */ if ((fS!=fO)) goto L_00695cc0;
L_00695cf5:; BB(0x00695cf5);
    /* 00695cf5: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
    /* 00695cf9: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00695cfd: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00695cff: jl 0x695ba5 */ if ((fS!=fO)) goto L_00695ba5;
L_00695d05:; BB(0x00695d05);
    /* 00695d05: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00695d06: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00695d07: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00695d08: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00695d0a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00695d0b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00695d0e: ret  */ FN_RET(0x00695b70); r_esp += 4; return;
L_00695d0f:; BB(0x00695d0f);
    /* 00695d0f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00695d10: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00695d11: call 0x69d440 */ r_esp -= 4; W32(r_esp, 0x695d16u); f_0069d440();
    /* 00695d16: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00695d19:; BB(0x00695d19);
    /* 00695d19: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00695d1a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00695d1b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00695d1c: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00695d1f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00695d20: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00695d23: ret  */ FN_RET(0x00695b70); r_esp += 4; return;
}

void f_00695d30(void) /* sub_695D30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00695d30);
    /* 00695d30: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00695d31: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 00695d35: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00695d37: je 0x695dff */ if (fZ) goto L_00695dff;
L_00695d3d:; BB(0x00695d3d);
    /* 00695d3d: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00695d3f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00695d41: je 0x695d4c */ if (fZ) goto L_00695d4c;
L_00695d43:; BB(0x00695d43);
    /* 00695d43: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00695d44: call 0x687300 */ r_esp -= 4; W32(r_esp, 0x695d49u); f_00687300();
    /* 00695d49: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00695d4c:; BB(0x00695d4c);
    /* 00695d4c: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 00695d4f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00695d51: je 0x695d5c */ if (fZ) goto L_00695d5c;
L_00695d53:; BB(0x00695d53);
    /* 00695d53: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00695d54: call 0x687300 */ r_esp -= 4; W32(r_esp, 0x695d59u); f_00687300();
    /* 00695d59: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00695d5c:; BB(0x00695d5c);
    /* 00695d5c: mov eax, dword ptr [edi + 0x14] */ r_eax = R32((u32)(r_edi+0x14u));
    /* 00695d5f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00695d61: je 0x695d6c */ if (fZ) goto L_00695d6c;
L_00695d63:; BB(0x00695d63);
    /* 00695d63: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00695d64: call 0x687300 */ r_esp -= 4; W32(r_esp, 0x695d69u); f_00687300();
    /* 00695d69: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00695d6c:; BB(0x00695d6c);
    /* 00695d6c: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 00695d6f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00695d71: je 0x695d7c */ if (fZ) goto L_00695d7c;
L_00695d73:; BB(0x00695d73);
    /* 00695d73: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00695d74: call 0x687300 */ r_esp -= 4; W32(r_esp, 0x695d79u); f_00687300();
    /* 00695d79: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00695d7c:; BB(0x00695d7c);
    /* 00695d7c: mov eax, dword ptr [edi + 0x34] */ r_eax = R32((u32)(r_edi+0x34u));
    /* 00695d7f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00695d81: je 0x695d8c */ if (fZ) goto L_00695d8c;
L_00695d83:; BB(0x00695d83);
    /* 00695d83: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00695d84: call 0x687300 */ r_esp -= 4; W32(r_esp, 0x695d89u); f_00687300();
    /* 00695d89: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00695d8c:; BB(0x00695d8c);
    /* 00695d8c: mov eax, dword ptr [edi + 0x38] */ r_eax = R32((u32)(r_edi+0x38u));
    /* 00695d8f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00695d91: je 0x695d9c */ if (fZ) goto L_00695d9c;
L_00695d93:; BB(0x00695d93);
    /* 00695d93: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00695d94: call 0x687300 */ r_esp -= 4; W32(r_esp, 0x695d99u); f_00687300();
    /* 00695d99: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00695d9c:; BB(0x00695d9c);
    /* 00695d9c: mov ecx, dword ptr [edi + 0x60] */ r_ecx = R32((u32)(r_edi+0x60u));
    /* 00695d9f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00695da1: je 0x695de6 */ if (fZ) goto L_00695de6;
L_00695da3:; BB(0x00695da3);
    /* 00695da3: mov eax, dword ptr [edi + 8] */ r_eax = R32((u32)(r_edi+0x8u));
    /* 00695da6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00695da7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00695da9: jne 0x695db6 */ if (!fZ) goto L_00695db6;
L_00695dab:; BB(0x00695dab);
    /* 00695dab: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00695dac: call 0x69d330 */ r_esp -= 4; W32(r_esp, 0x695db1u); f_0069d330();
    /* 00695db1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00695db4: jmp 0x695dd9 */ goto L_00695dd9;
L_00695db6:; BB(0x00695db6);
    /* 00695db6: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00695db8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00695dba: jle 0x695dd9 */ if ((fZ||fS!=fO)) goto L_00695dd9;
L_00695dbc:; BB(0x00695dbc);
    /* 00695dbc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00695dbd: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00695dbf:; BB(0x00695dbf);
    /* 00695dbf: mov eax, dword ptr [edi + 0x60] */ r_eax = R32((u32)(r_edi+0x60u));
    /* 00695dc2: add eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00695dc4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00695dc5: call 0x69d330 */ r_esp -= 4; W32(r_esp, 0x695dcau); f_0069d330();
    /* 00695dca: mov eax, dword ptr [edi + 8] */ r_eax = R32((u32)(r_edi+0x8u));
    /* 00695dcd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00695dd0: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00695dd1: add ebx, 0x14 */ {  u32 a = r_ebx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00695dd4: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00695dd6: jl 0x695dbf */ if ((fS!=fO)) goto L_00695dbf;
L_00695dd8:; BB(0x00695dd8);
    /* 00695dd8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_00695dd9:; BB(0x00695dd9);
    /* 00695dd9: mov ecx, dword ptr [edi + 0x60] */ r_ecx = R32((u32)(r_edi+0x60u));
    /* 00695ddc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00695ddd: call 0x687300 */ r_esp -= 4; W32(r_esp, 0x695de2u); f_00687300();
    /* 00695de2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00695de5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
L_00695de6:; BB(0x00695de6);
    /* 00695de6: mov eax, dword ptr [edi + 0x64] */ r_eax = R32((u32)(r_edi+0x64u));
    /* 00695de9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00695deb: je 0x695df6 */ if (fZ) goto L_00695df6;
L_00695ded:; BB(0x00695ded);
    /* 00695ded: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00695dee: call 0x687300 */ r_esp -= 4; W32(r_esp, 0x695df3u); f_00687300();
    /* 00695df3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00695df6:; BB(0x00695df6);
    /* 00695df6: mov ecx, 0x1a */ r_ecx = 0x1au;
    /* 00695dfb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00695dfd: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
L_00695dff:; BB(0x00695dff);
    /* 00695dff: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00695e00: ret  */ FN_RET(0x00695d30); r_esp += 4; return;
}

void f_00695e10(void) /* sub_695E10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00695e10);
    /* 00695e10: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00695e14: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 00695e17: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00695e19: mov edx, dword ptr [ecx + 0x68] */ r_edx = R32((u32)(r_ecx+0x68u));
    /* 00695e1c: mov ecx, dword ptr [edx + 0x50] */ r_ecx = R32((u32)(r_edx+0x50u));
    /* 00695e1f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00695e21: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 00695e24: ret  */ FN_RET(0x00695e10); r_esp += 4; return;
}

void f_00695e30(void) /* sub_695E30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00695e30);
    /* 00695e30: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00695e31: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00695e32: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00695e33: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 00695e37: lea eax, [edi + 0x10] */ r_eax = (u32)(r_edi+0x10u);
    /* 00695e3a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00695e3b: call 0x697780 */ r_esp -= 4; W32(r_esp, 0x695e40u); f_00697780();
    /* 00695e40: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00695e43: lea esi, [edi + 0x30] */ r_esi = (u32)(r_edi+0x30u);
    /* 00695e46: mov ebx, 7 */ r_ebx = 0x7u;
L_00695e4b:; BB(0x00695e4b);
    /* 00695e4b: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00695e4d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00695e4e: call 0x687300 */ r_esp -= 4; W32(r_esp, 0x695e53u); f_00687300();
    /* 00695e53: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00695e56: add esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00695e59: dec ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); }
    /* 00695e5a: jne 0x695e4b */ if (!fZ) goto L_00695e4b;
L_00695e5c:; BB(0x00695e5c);
    /* 00695e5c: mov edx, dword ptr [edi + 0x24] */ r_edx = R32((u32)(r_edi+0x24u));
    /* 00695e5f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00695e60: call 0x687300 */ r_esp -= 4; W32(r_esp, 0x695e65u); f_00687300();
    /* 00695e65: mov eax, dword ptr [edi + 0x98] */ r_eax = R32((u32)(r_edi+0x98u));
    /* 00695e6b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00695e6c: call 0x687300 */ r_esp -= 4; W32(r_esp, 0x695e71u); f_00687300();
    /* 00695e71: mov ecx, dword ptr [edi + 0xa0] */ r_ecx = R32((u32)(r_edi+0xa0u));
    /* 00695e77: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00695e78: call 0x687300 */ r_esp -= 4; W32(r_esp, 0x695e7du); f_00687300();
    /* 00695e7d: mov ecx, 0x2d */ r_ecx = 0x2du;
    /* 00695e82: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00695e84: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00695e87: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00695e89: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00695e8a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00695e8b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00695e8c: ret  */ FN_RET(0x00695e30); r_esp += 4; return;
}

void f_00695e90(void) /* sub_695E90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00695e90);
    /* 00695e90: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00695e94: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00695e96: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00695e99: je 0x695eb5 */ if (fZ) goto L_00695eb5;
L_00695e9b:; BB(0x00695e9b);
    /* 00695e9b: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 00695e9e: mov edx, dword ptr [edx + 8] */ r_edx = R32((u32)(r_edx+0x8u));
    /* 00695ea1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00695ea2: lea edx, [ecx + eax*4] */ r_edx = (u32)(r_ecx+r_eax*4);
    /* 00695ea5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00695ea6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00695ea7: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 00695eab: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00695eac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00695ead: call 0x695ec0 */ r_esp -= 4; W32(r_esp, 0x695eb2u); f_00695ec0();
    /* 00695eb2: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00695eb5:; BB(0x00695eb5);
    /* 00695eb5: ret  */ FN_RET(0x00695e90); r_esp += 4; return;
}

void f_00695ec0(void) /* sub_695EC0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00695ec0);
    /* 00695ec0: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00695ec3: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 00695ec7: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 00695ecb: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00695ecc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00695ecd: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00695ed0: mov dword ptr [esp + 0x28], 1 */ W32((u32)(r_esp+0x28u), 0x1u);
    /* 00695ed8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00695eda: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 00695ede: jle 0x696058 */ if ((fZ||fS!=fO)) goto L_00696058;
L_00695ee4:; BB(0x00695ee4);
    /* 00695ee4: mov ebp, dword ptr [esp + 0x20] */ r_ebp = R32((u32)(r_esp+0x20u));
    /* 00695ee8: mov edi, dword ptr [esp + 0x1c] */ r_edi = R32((u32)(r_esp+0x1cu));
    /* 00695eec: lea edx, [edx + eax*4 + 4] */ r_edx = (u32)(r_edx+r_eax*4+0x4u);
    /* 00695ef0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00695ef1: mov ebx, dword ptr [esp + 0x28] */ r_ebx = R32((u32)(r_esp+0x28u));
    /* 00695ef5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00695ef6: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 00695efa: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
L_00695efe:; BB(0x00695efe);
    /* 00695efe: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00695f02: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00695f04: mov eax, ecx */ r_eax = r_ecx;
    /* 00695f06: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 00695f0a: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00695f0b: idiv dword ptr [esp + 0x2c] */ { i32 d = (i32)R32((u32)(r_esp+0x2cu)); if (!d) UNSUP(0x00695f0b, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00695f0b, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00695f0f: mov esi, eax */ r_esi = r_eax;
    /* 00695f11: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 00695f15: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00695f16: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00695f16, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00695f16, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00695f18: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00695f1c: mov ecx, eax */ r_ecx = r_eax;
    /* 00695f1e: imul ecx, esi */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_esi; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00695f21: mov dword ptr [esp + 0x2c], ecx */ W32((u32)(r_esp+0x2cu), r_ecx);
    /* 00695f25: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 00695f29: mov ecx, dword ptr [ecx] */ r_ecx = R32((u32)(r_ecx));
    /* 00695f2b: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00695f2c: imul ecx, eax */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_eax; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00695f2f: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00695f31: mov ecx, dword ptr [esp + 0x30] */ r_ecx = R32((u32)(r_esp+0x30u));
    /* 00695f35: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00695f39: mov edx, 1 */ r_edx = 0x1u;
    /* 00695f3e: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00695f40: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 00695f44: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 00695f48: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 00695f4a: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00695f4d: je 0x695fe7 */ if (fZ) goto L_00695fe7;
L_00695f53:; BB(0x00695f53);
    /* 00695f53: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00695f56: je 0x695fba */ if (fZ) goto L_00695fba;
L_00695f58:; BB(0x00695f58);
    /* 00695f58: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00695f5b: jne 0x695f6d */ if (!fZ) goto L_00695f6d;
L_00695f5d:; BB(0x00695f5d);
    /* 00695f5d: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 00695f61: mov ecx, eax */ r_ecx = r_eax;
    /* 00695f63: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00695f65: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 00695f69: mov dword ptr [esp + 0x30], ecx */ W32((u32)(r_esp+0x30u), r_ecx);
L_00695f6d:; BB(0x00695f6d);
    /* 00695f6d: mov ecx, dword ptr [esp + 0x30] */ r_ecx = R32((u32)(r_esp+0x30u));
    /* 00695f71: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00695f73: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00695f75: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 00695f79: lea ecx, [ebx + ecx*4 - 4] */ r_ecx = (u32)(r_ebx+r_ecx*4+0xfffffffcu);
    /* 00695f7d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00695f7e: mov ecx, dword ptr [esp + 0x30] */ r_ecx = R32((u32)(r_esp+0x30u));
    /* 00695f82: je 0x695f9f */ if (fZ) goto L_00695f9f;
L_00695f84:; BB(0x00695f84);
    /* 00695f84: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00695f85: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00695f86: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00695f87: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00695f88: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00695f89: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00695f8a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00695f8b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00695f8c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00695f8d: call 0x696660 */ r_esp -= 4; W32(r_esp, 0x695f92u); f_00696660();
    /* 00695f92: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00695f95: mov dword ptr [esp + 0x30], 0 */ W32((u32)(r_esp+0x30u), 0x0u);
    /* 00695f9d: jmp 0x69601c */ goto L_0069601c;
L_00695f9f:; BB(0x00695f9f);
    /* 00695f9f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00695fa0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00695fa1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00695fa2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00695fa3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00695fa4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00695fa5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00695fa6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00695fa7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00695fa8: call 0x696660 */ r_esp -= 4; W32(r_esp, 0x695fadu); f_00696660();
    /* 00695fad: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00695fb0: mov dword ptr [esp + 0x30], 1 */ W32((u32)(r_esp+0x30u), 0x1u);
    /* 00695fb8: jmp 0x69601c */ goto L_0069601c;
L_00695fba:; BB(0x00695fba);
    /* 00695fba: mov ecx, dword ptr [esp + 0x30] */ r_ecx = R32((u32)(r_esp+0x30u));
    /* 00695fbe: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00695fc2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00695fc4: lea ecx, [ebx + edx*4 - 4] */ r_ecx = (u32)(r_ebx+r_edx*4+0xfffffffcu);
    /* 00695fc8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00695fc9: je 0x695fd9 */ if (fZ) goto L_00695fd9;
L_00695fcb:; BB(0x00695fcb);
    /* 00695fcb: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00695fcc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00695fcd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00695fce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00695fcf: call 0x696060 */ r_esp -= 4; W32(r_esp, 0x695fd4u); f_00696060();
    /* 00695fd4: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00695fd7: jmp 0x69601c */ goto L_0069601c;
L_00695fd9:; BB(0x00695fd9);
    /* 00695fd9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00695fda: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00695fdb: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00695fdc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00695fdd: call 0x696060 */ r_esp -= 4; W32(r_esp, 0x695fe2u); f_00696060();
    /* 00695fe2: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00695fe5: jmp 0x69601c */ goto L_0069601c;
L_00695fe7:; BB(0x00695fe7);
    /* 00695fe7: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00695feb: lea ecx, [eax + edx] */ r_ecx = (u32)(r_eax+r_edx);
    /* 00695fee: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 00695ff2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00695ff4: lea edx, [ecx + eax] */ r_edx = (u32)(r_ecx+r_eax);
    /* 00695ff7: lea ecx, [ebx + ecx*4 - 4] */ r_ecx = (u32)(r_ebx+r_ecx*4+0xfffffffcu);
    /* 00695ffb: lea edx, [ebx + edx*4 - 4] */ r_edx = (u32)(r_ebx+r_edx*4+0xfffffffcu);
    /* 00695fff: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00696000: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 00696004: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00696005: lea ecx, [ebx + edx*4 - 4] */ r_ecx = (u32)(r_ebx+r_edx*4+0xfffffffcu);
    /* 00696009: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0069600a: je 0x696010 */ if (fZ) goto L_00696010;
L_0069600c:; BB(0x0069600c);
    /* 0069600c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069600d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069600e: jmp 0x696012 */ goto L_00696012;
L_00696010:; BB(0x00696010);
    /* 00696010: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00696011: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
L_00696012:; BB(0x00696012);
    /* 00696012: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00696013: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00696014: call 0x696230 */ r_esp -= 4; W32(r_esp, 0x696019u); f_00696230();
    /* 00696019: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0069601c:; BB(0x0069601c);
    /* 0069601c: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 00696020: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 00696024: sub edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00696027: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00696028: mov ecx, esi */ r_ecx = r_esi;
    /* 0069602a: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 0069602e: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00696032: jne 0x695efe */ if (!fZ) goto L_00695efe;
L_00696038:; BB(0x00696038);
    /* 00696038: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 0069603c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069603d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00696040: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00696041: je 0x696058 */ if (fZ) goto L_00696058;
L_00696043:; BB(0x00696043);
    /* 00696043: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 00696047: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00696049: jle 0x696058 */ if ((fZ||fS!=fO)) goto L_00696058;
L_0069604b:; BB(0x0069604b);
    /* 0069604b: sub ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
L_0069604d:; BB(0x0069604d);
    /* 0069604d: mov edx, dword ptr [edi + ebp] */ r_edx = R32((u32)(r_edi+r_ebp));
    /* 00696050: mov dword ptr [edi], edx */ W32((u32)(r_edi), r_edx);
    /* 00696052: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00696055: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00696056: jne 0x69604d */ if (!fZ) goto L_0069604d;
L_00696058:; BB(0x00696058);
    /* 00696058: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00696059: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069605a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069605d: ret  */ FN_RET(0x00695ec0); r_esp += 4; return;
}

