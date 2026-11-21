#include "protos.h"

void f_004530b0(void) /* sub_4530B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004530b0);
    /* 004530b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004530b1: mov ebp, esp */ r_ebp = r_esp;
    /* 004530b3: sub esp, 0x2cc */ {  u32 a = r_esp; u32 b = 0x2ccu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004530b9: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 004530be: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004530c0: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004530c3: mov dword ptr [ebp - 0x2cc], ecx */ W32((u32)(r_ebp+0xfffffd34u), r_ecx);
    /* 004530c9: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 004530d0: mov byte ptr [ebp - 0x1b], 0 */ W8((u32)(r_ebp+0xffffffe5u), 0x0u);
    /* 004530d4: mov byte ptr [ebp - 0x22], 0 */ W8((u32)(r_ebp+0xffffffdeu), 0x0u);
    /* 004530d8: mov byte ptr [ebp - 0x2c2], 0 */ W8((u32)(r_ebp+0xfffffd3eu), 0x0u);
    /* 004530df: mov byte ptr [ebp - 0x1a], 0 */ W8((u32)(r_ebp+0xffffffe6u), 0x0u);
    /* 004530e3: mov byte ptr [ebp - 0x21], 0 */ W8((u32)(r_ebp+0xffffffdfu), 0x0u);
    /* 004530e7: mov byte ptr [ebp - 0x2c1], 0 */ W8((u32)(r_ebp+0xfffffd3fu), 0x0u);
    /* 004530ee: mov byte ptr [ebp - 0x19], 0 */ W8((u32)(r_ebp+0xffffffe7u), 0x0u);
    /* 004530f2: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004530f5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004530f6: mov ecx, dword ptr [ebp - 0x2cc] */ r_ecx = R32((u32)(r_ebp+0xfffffd34u));
    /* 004530fc: call 0x44efd0 */ r_esp -= 4; W32(r_esp, 0x453101u); f_0044efd0();
    /* 00453101: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00453108: jmp 0x453113 */ goto L_00453113;
L_0045310a:; BB(0x0045310a);
    /* 0045310a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045310d: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00453110: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00453113:; BB(0x00453113);
    /* 00453113: cmp dword ptr [ebp - 4], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00453117: jge 0x453166 */ if ((fS==fO)) goto L_00453166;
L_00453119:; BB(0x00453119);
    /* 00453119: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045311c: mov eax, dword ptr [ebp - 0x2cc] */ r_eax = R32((u32)(r_ebp+0xfffffd34u));
    /* 00453122: movzx ecx, word ptr [eax + edx*2 + 4] */ r_ecx = (u32)R16((u32)(r_eax+r_edx*2+0x4u));
    /* 00453127: movzx edx, word ptr [ebp + 0xc] */ r_edx = (u32)R16((u32)(r_ebp+0xcu));
    /* 0045312b: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045312d: je 0x453164 */ if (fZ) goto L_00453164;
L_0045312f:; BB(0x0045312f);
    /* 0045312f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00453132: mov ecx, dword ptr [ebp - 0x2cc] */ r_ecx = R32((u32)(r_ebp+0xfffffd34u));
    /* 00453138: movzx edx, word ptr [ecx + eax*2 + 4] */ r_edx = (u32)R16((u32)(r_ecx+r_eax*2+0x4u));
    /* 0045313d: movzx eax, word ptr [ebp + 0x10] */ r_eax = (u32)R16((u32)(r_ebp+0x10u));
    /* 00453141: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00453143: je 0x453164 */ if (fZ) goto L_00453164;
L_00453145:; BB(0x00453145);
    /* 00453145: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00453148: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045314b: mov eax, dword ptr [ebp - 0x2cc] */ r_eax = R32((u32)(r_ebp+0xfffffd34u));
    /* 00453151: mov dx, word ptr [eax + edx*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 00453156: mov word ptr [ebp + ecx*2 - 0x14], dx */ W16((u32)(r_ebp+r_ecx*2+0xffffffecu), (u16)r_edx);
    /* 0045315b: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0045315e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00453161: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_00453164:; BB(0x00453164);
    /* 00453164: jmp 0x45310a */ goto L_0045310a;
L_00453166:; BB(0x00453166);
    /* 00453166: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0045316d: jmp 0x453178 */ goto L_00453178;
L_0045316f:; BB(0x0045316f);
    /* 0045316f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00453172: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00453175: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00453178:; BB(0x00453178);
    /* 00453178: cmp dword ptr [ebp - 4], 0xf */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045317c: jge 0x4531f3 */ if ((fS==fO)) goto L_004531f3;
L_0045317e:; BB(0x0045317e);
    /* 0045317e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00453181: imul edx, edx, 0x2c */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x2cu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00453184: mov dword ptr [ebp + edx - 0x2c0], 0 */ W32((u32)(r_ebp+r_edx+0xfffffd40u), 0x0u);
    /* 0045318f: mov dword ptr [ebp - 0x2c8], 0 */ W32((u32)(r_ebp+0xfffffd38u), 0x0u);
    /* 00453199: jmp 0x4531aa */ goto L_004531aa;
L_0045319b:; BB(0x0045319b);
    /* 0045319b: mov eax, dword ptr [ebp - 0x2c8] */ r_eax = R32((u32)(r_ebp+0xfffffd38u));
    /* 004531a1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004531a4: mov dword ptr [ebp - 0x2c8], eax */ W32((u32)(r_ebp+0xfffffd38u), r_eax);
L_004531aa:; BB(0x004531aa);
    /* 004531aa: cmp dword ptr [ebp - 0x2c8], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffd38u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004531b1: jge 0x4531ee */ if ((fS==fO)) goto L_004531ee;
L_004531b3:; BB(0x004531b3);
    /* 004531b3: mov ecx, dword ptr [ebp - 0x2c8] */ r_ecx = R32((u32)(r_ebp+0xfffffd38u));
    /* 004531b9: mov dx, word ptr [ebp + ecx*2 - 0x14] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+r_ecx*2+0xffffffecu))) & 0xffffu);
    /* 004531be: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004531bf: mov ecx, dword ptr [ebp - 0x2cc] */ r_ecx = R32((u32)(r_ebp+0xfffffd34u));
    /* 004531c5: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x4531cau); f_0044f680();
    /* 004531ca: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004531cd: jne 0x4531ec */ if (!fZ) goto L_004531ec;
L_004531cf:; BB(0x004531cf);
    /* 004531cf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004531d2: imul eax, eax, 0x2c */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x2cu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004531d5: mov ecx, dword ptr [ebp + eax - 0x2c0] */ r_ecx = R32((u32)(r_ebp+r_eax+0xfffffd40u));
    /* 004531dc: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004531df: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004531e2: imul edx, edx, 0x2c */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x2cu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004531e5: mov dword ptr [ebp + edx - 0x2c0], ecx */ W32((u32)(r_ebp+r_edx+0xfffffd40u), r_ecx);
L_004531ec:; BB(0x004531ec);
    /* 004531ec: jmp 0x45319b */ goto L_0045319b;
L_004531ee:; BB(0x004531ee);
    /* 004531ee: jmp 0x45316f */ goto L_0045316f;
L_004531f3:; BB(0x004531f3);
    /* 004531f3: lea eax, [ebp - 0x14] */ r_eax = (u32)(r_ebp+0xffffffecu);
    /* 004531f6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004531f7: mov ecx, dword ptr [ebp - 0x2cc] */ r_ecx = R32((u32)(r_ebp+0xfffffd34u));
    /* 004531fd: call 0x453830 */ r_esp -= 4; W32(r_esp, 0x453202u); f_00453830();
    /* 00453202: mov byte ptr [ebp - 0x22], al */ W8((u32)(r_ebp+0xffffffdeu), (u8)r_eax);
    /* 00453205: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 00453208: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00453209: mov ecx, dword ptr [ebp - 0x2cc] */ r_ecx = R32((u32)(r_ebp+0xfffffd34u));
    /* 0045320f: call 0x4538b0 */ r_esp -= 4; W32(r_esp, 0x453214u); f_004538b0();
    /* 00453214: mov byte ptr [ebp - 0x2c2], al */ W8((u32)(r_ebp+0xfffffd3eu), (u8)r_eax);
    /* 0045321a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045321c: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0045321e: lea edx, [ebp - 0x2c0] */ r_edx = (u32)(r_ebp+0xfffffd40u);
    /* 00453224: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00453225: mov ecx, dword ptr [ebp - 0x2cc] */ r_ecx = R32((u32)(r_ebp+0xfffffd34u));
    /* 0045322b: call 0x450bc0 */ r_esp -= 4; W32(r_esp, 0x453230u); f_00450bc0();
    /* 00453230: mov byte ptr [ebp - 0x1a], al */ W8((u32)(r_ebp+0xffffffe6u), (u8)r_eax);
    /* 00453233: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00453235: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00453237: lea eax, [ebp - 0x2c0] */ r_eax = (u32)(r_ebp+0xfffffd40u);
    /* 0045323d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045323e: mov ecx, dword ptr [ebp - 0x2cc] */ r_ecx = R32((u32)(r_ebp+0xfffffd34u));
    /* 00453244: call 0x450bc0 */ r_esp -= 4; W32(r_esp, 0x453249u); f_00450bc0();
    /* 00453249: mov byte ptr [ebp - 0x21], al */ W8((u32)(r_ebp+0xffffffdfu), (u8)r_eax);
    /* 0045324c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045324e: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00453250: lea ecx, [ebp - 0x2c0] */ r_ecx = (u32)(r_ebp+0xfffffd40u);
    /* 00453256: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00453257: mov ecx, dword ptr [ebp - 0x2cc] */ r_ecx = R32((u32)(r_ebp+0xfffffd34u));
    /* 0045325d: call 0x450bc0 */ r_esp -= 4; W32(r_esp, 0x453262u); f_00450bc0();
    /* 00453262: mov byte ptr [ebp - 0x2c1], al */ W8((u32)(r_ebp+0xfffffd3fu), (u8)r_eax);
    /* 00453268: movsx edx, byte ptr [ebp - 0x2c1] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0xfffffd3fu));
    /* 0045326f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00453271: je 0x4532b3 */ if (fZ) goto L_004532b3;
L_00453273:; BB(0x00453273);
    /* 00453273: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0045327a: jmp 0x453285 */ goto L_00453285;
L_0045327c:; BB(0x0045327c);
    /* 0045327c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045327f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00453282: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00453285:; BB(0x00453285);
    /* 00453285: cmp dword ptr [ebp - 4], 0xf */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00453289: jge 0x4532b3 */ if ((fS==fO)) goto L_004532b3;
L_0045328b:; BB(0x0045328b);
    /* 0045328b: movsx ecx, byte ptr [ebp - 0x2c1] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebp+0xfffffd3fu));
    /* 00453292: cmp ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00453295: jne 0x453299 */ if (!fZ) goto L_00453299;
L_00453297:; BB(0x00453297);
    /* 00453297: jmp 0x45327c */ goto L_0045327c;
L_00453299:; BB(0x00453299);
    /* 00453299: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045329c: imul edx, edx, 0x2c */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x2cu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0045329f: cmp dword ptr [ebp + edx - 0x2c0], 2 */ {  u32 a = R32((u32)(r_ebp+r_edx+0xfffffd40u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004532a7: jne 0x4532b1 */ if (!fZ) goto L_004532b1;
L_004532a9:; BB(0x004532a9);
    /* 004532a9: mov al, byte ptr [ebp - 4] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffffcu))) & 0xffu);
    /* 004532ac: mov byte ptr [ebp - 0x19], al */ W8((u32)(r_ebp+0xffffffe7u), (u8)r_eax);
    /* 004532af: jmp 0x4532b3 */ goto L_004532b3;
L_004532b1:; BB(0x004532b1);
    /* 004532b1: jmp 0x45327c */ goto L_0045327c;
L_004532b3:; BB(0x004532b3);
    /* 004532b3: movsx ecx, byte ptr [ebp - 0x19] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffe7u));
    /* 004532b7: movsx edx, byte ptr [ebp - 0x2c1] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0xfffffd3fu));
    /* 004532be: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004532c0: jle 0x4532db */ if ((fZ||fS!=fO)) goto L_004532db;
L_004532c2:; BB(0x004532c2);
    /* 004532c2: movsx eax, byte ptr [ebp - 0x2c1] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0xfffffd3fu));
    /* 004532c9: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004532cc: mov cl, byte ptr [ebp - 0x19] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffe7u))) & 0xffu);
    /* 004532cf: mov byte ptr [ebp - 0x2c1], cl */ W8((u32)(r_ebp+0xfffffd3fu), (u8)r_ecx);
    /* 004532d5: mov dl, byte ptr [ebp - 0x20] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffe0u))) & 0xffu);
    /* 004532d8: mov byte ptr [ebp - 0x19], dl */ W8((u32)(r_ebp+0xffffffe7u), (u8)r_edx);
L_004532db:; BB(0x004532db);
    /* 004532db: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 004532e2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004532e9: jmp 0x4532f4 */ goto L_004532f4;
L_004532eb:; BB(0x004532eb);
    /* 004532eb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004532ee: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004532f1: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_004532f4:; BB(0x004532f4);
    /* 004532f4: cmp dword ptr [ebp - 4], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004532f8: jge 0x453364 */ if ((fS==fO)) goto L_00453364;
L_004532fa:; BB(0x004532fa);
    /* 004532fa: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004532fd: mov edx, dword ptr [ebp - 0x2cc] */ r_edx = R32((u32)(r_ebp+0xfffffd34u));
    /* 00453303: movzx eax, word ptr [edx + ecx*2 + 4] */ r_eax = (u32)R16((u32)(r_edx+r_ecx*2+0x4u));
    /* 00453308: movzx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)R16((u32)(r_ebp+0xcu));
    /* 0045330c: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045330e: je 0x453352 */ if (fZ) goto L_00453352;
L_00453310:; BB(0x00453310);
    /* 00453310: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00453313: mov eax, dword ptr [ebp - 0x2cc] */ r_eax = R32((u32)(r_ebp+0xfffffd34u));
    /* 00453319: movzx ecx, word ptr [eax + edx*2 + 4] */ r_ecx = (u32)R16((u32)(r_eax+r_edx*2+0x4u));
    /* 0045331e: movzx edx, word ptr [ebp + 0x10] */ r_edx = (u32)R16((u32)(r_ebp+0x10u));
    /* 00453322: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00453324: je 0x453352 */ if (fZ) goto L_00453352;
L_00453326:; BB(0x00453326);
    /* 00453326: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00453329: mov ecx, dword ptr [ebp - 0x2cc] */ r_ecx = R32((u32)(r_ebp+0xfffffd34u));
    /* 0045332f: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 00453334: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00453335: mov ecx, dword ptr [ebp - 0x2cc] */ r_ecx = R32((u32)(r_ebp+0xfffffd34u));
    /* 0045333b: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x453340u); f_0044f680();
    /* 00453340: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 00453343: add ecx, dword ptr [ebp - 0x18] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00453346: mov byte ptr [ecx + 3], al */ W8((u32)(r_ecx+0x3u), (u8)r_eax);
    /* 00453349: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0045334c: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045334f: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
L_00453352:; BB(0x00453352);
    /* 00453352: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00453356: jge 0x453362 */ if ((fS==fO)) goto L_00453362;
L_00453358:; BB(0x00453358);
    /* 00453358: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0045335b: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045335e: mov byte ptr [eax + 1], 0xff */ W8((u32)(r_eax+0x1u), 0xffu);
L_00453362:; BB(0x00453362);
    /* 00453362: jmp 0x4532eb */ goto L_004532eb;
L_00453364:; BB(0x00453364);
    /* 00453364: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00453366: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00453368: lea ecx, [ebp - 0x2c0] */ r_ecx = (u32)(r_ebp+0xfffffd40u);
    /* 0045336e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045336f: mov ecx, dword ptr [ebp - 0x2cc] */ r_ecx = R32((u32)(r_ebp+0xfffffd34u));
    /* 00453375: call 0x450bc0 */ r_esp -= 4; W32(r_esp, 0x45337au); f_00450bc0();
    /* 0045337a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045337c: je 0x453389 */ if (fZ) goto L_00453389;
L_0045337e:; BB(0x0045337e);
    /* 0045337e: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 00453381: mov byte ptr [edx], 0xa */ W8((u32)(r_edx), 0xau);
    /* 00453384: jmp 0x453496 */ goto L_00453496;
L_00453389:; BB(0x00453389);
    /* 00453389: movzx eax, byte ptr [ebp - 0x22] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffdeu));
    /* 0045338d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045338f: je 0x4533b3 */ if (fZ) goto L_004533b3;
L_00453391:; BB(0x00453391);
    /* 00453391: movsx ecx, byte ptr [ebp - 0x2c2] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebp+0xfffffd3eu));
    /* 00453398: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045339a: je 0x4533b3 */ if (fZ) goto L_004533b3;
L_0045339c:; BB(0x0045339c);
    /* 0045339c: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 0045339f: mov byte ptr [edx], 9 */ W8((u32)(r_edx), 0x9u);
    /* 004533a2: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 004533a5: mov cl, byte ptr [ebp - 0x2c2] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffd3eu))) & 0xffu);
    /* 004533ab: mov byte ptr [eax + 1], cl */ W8((u32)(r_eax+0x1u), (u8)r_ecx);
    /* 004533ae: jmp 0x453496 */ goto L_00453496;
L_004533b3:; BB(0x004533b3);
    /* 004533b3: movsx edx, byte ptr [ebp - 0x1a] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffe6u));
    /* 004533b7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004533b9: je 0x4533cf */ if (fZ) goto L_004533cf;
L_004533bb:; BB(0x004533bb);
    /* 004533bb: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 004533be: mov byte ptr [eax], 8 */ W8((u32)(r_eax), 0x8u);
    /* 004533c1: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 004533c4: mov dl, byte ptr [ebp - 0x1a] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffe6u))) & 0xffu);
    /* 004533c7: mov byte ptr [ecx + 1], dl */ W8((u32)(r_ecx+0x1u), (u8)r_edx);
    /* 004533ca: jmp 0x453496 */ goto L_00453496;
L_004533cf:; BB(0x004533cf);
    /* 004533cf: movsx eax, byte ptr [ebp - 0x21] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffdfu));
    /* 004533d3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004533d5: je 0x4533f6 */ if (fZ) goto L_004533f6;
L_004533d7:; BB(0x004533d7);
    /* 004533d7: movsx ecx, byte ptr [ebp - 0x2c1] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebp+0xfffffd3fu));
    /* 004533de: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004533e0: je 0x4533f6 */ if (fZ) goto L_004533f6;
L_004533e2:; BB(0x004533e2);
    /* 004533e2: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 004533e5: mov byte ptr [edx], 7 */ W8((u32)(r_edx), 0x7u);
    /* 004533e8: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 004533eb: mov cl, byte ptr [ebp - 0x21] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffdfu))) & 0xffu);
    /* 004533ee: mov byte ptr [eax + 1], cl */ W8((u32)(r_eax+0x1u), (u8)r_ecx);
    /* 004533f1: jmp 0x453496 */ goto L_00453496;
L_004533f6:; BB(0x004533f6);
    /* 004533f6: movzx edx, byte ptr [ebp - 0x22] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffdeu));
    /* 004533fa: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004533fc: je 0x453409 */ if (fZ) goto L_00453409;
L_004533fe:; BB(0x004533fe);
    /* 004533fe: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00453401: mov byte ptr [eax], 6 */ W8((u32)(r_eax), 0x6u);
    /* 00453404: jmp 0x453496 */ goto L_00453496;
L_00453409:; BB(0x00453409);
    /* 00453409: movsx ecx, byte ptr [ebp - 0x2c2] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebp+0xfffffd3eu));
    /* 00453410: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00453412: je 0x453428 */ if (fZ) goto L_00453428;
L_00453414:; BB(0x00453414);
    /* 00453414: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 00453417: mov byte ptr [edx], 5 */ W8((u32)(r_edx), 0x5u);
    /* 0045341a: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0045341d: mov cl, byte ptr [ebp - 0x2c2] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffd3eu))) & 0xffu);
    /* 00453423: mov byte ptr [eax + 1], cl */ W8((u32)(r_eax+0x1u), (u8)r_ecx);
    /* 00453426: jmp 0x453496 */ goto L_00453496;
L_00453428:; BB(0x00453428);
    /* 00453428: movsx edx, byte ptr [ebp - 0x21] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffdfu));
    /* 0045342c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045342e: je 0x453441 */ if (fZ) goto L_00453441;
L_00453430:; BB(0x00453430);
    /* 00453430: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00453433: mov byte ptr [eax], 4 */ W8((u32)(r_eax), 0x4u);
    /* 00453436: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 00453439: mov dl, byte ptr [ebp - 0x21] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffdfu))) & 0xffu);
    /* 0045343c: mov byte ptr [ecx + 1], dl */ W8((u32)(r_ecx+0x1u), (u8)r_edx);
    /* 0045343f: jmp 0x453496 */ goto L_00453496;
L_00453441:; BB(0x00453441);
    /* 00453441: movsx eax, byte ptr [ebp - 0x2c1] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0xfffffd3fu));
    /* 00453448: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045344a: je 0x453471 */ if (fZ) goto L_00453471;
L_0045344c:; BB(0x0045344c);
    /* 0045344c: movsx ecx, byte ptr [ebp - 0x19] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffe7u));
    /* 00453450: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00453452: je 0x453471 */ if (fZ) goto L_00453471;
L_00453454:; BB(0x00453454);
    /* 00453454: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 00453457: mov byte ptr [edx], 3 */ W8((u32)(r_edx), 0x3u);
    /* 0045345a: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0045345d: mov cl, byte ptr [ebp - 0x2c1] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffd3fu))) & 0xffu);
    /* 00453463: mov byte ptr [eax + 1], cl */ W8((u32)(r_eax+0x1u), (u8)r_ecx);
    /* 00453466: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 00453469: mov al, byte ptr [ebp - 0x19] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffe7u))) & 0xffu);
    /* 0045346c: mov byte ptr [edx + 2], al */ W8((u32)(r_edx+0x2u), (u8)r_eax);
    /* 0045346f: jmp 0x453496 */ goto L_00453496;
L_00453471:; BB(0x00453471);
    /* 00453471: movsx ecx, byte ptr [ebp - 0x2c1] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebp+0xfffffd3fu));
    /* 00453478: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045347a: je 0x453490 */ if (fZ) goto L_00453490;
L_0045347c:; BB(0x0045347c);
    /* 0045347c: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 0045347f: mov byte ptr [edx], 2 */ W8((u32)(r_edx), 0x2u);
    /* 00453482: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00453485: mov cl, byte ptr [ebp - 0x2c1] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffd3fu))) & 0xffu);
    /* 0045348b: mov byte ptr [eax + 1], cl */ W8((u32)(r_eax+0x1u), (u8)r_ecx);
    /* 0045348e: jmp 0x453496 */ goto L_00453496;
L_00453490:; BB(0x00453490);
    /* 00453490: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 00453493: mov byte ptr [edx], 1 */ W8((u32)(r_edx), 0x1u);
L_00453496:; BB(0x00453496);
    /* 00453496: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00453499: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0045349b: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x4534a0u); f_00686d72();
    /* 004534a0: mov esp, ebp */ r_esp = r_ebp;
    /* 004534a2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004534a3: ret 0x10 */ FN_RET(0x004530b0); r_esp += 20; return;
}

void f_004534b0(void) /* sub_4534B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004534b0);
    /* 004534b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004534b1: mov ebp, esp */ r_ebp = r_esp;
    /* 004534b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004534b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004534b7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004534ba: movsx ecx, byte ptr [eax] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 004534bd: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 004534c0: movsx eax, byte ptr [edx] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx));
    /* 004534c3: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004534c5: jle 0x4534cb */ if ((fZ||fS!=fO)) goto L_004534cb;
L_004534c7:; BB(0x004534c7);
    /* 004534c7: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 004534c9: jmp 0x453542 */ goto L_00453542;
L_004534cb:; BB(0x004534cb);
    /* 004534cb: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004534ce: movsx edx, byte ptr [ecx] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx));
    /* 004534d1: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004534d4: movsx ecx, byte ptr [eax] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 004534d7: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004534d9: jne 0x453540 */ if (!fZ) goto L_00453540;
L_004534db:; BB(0x004534db);
    /* 004534db: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004534de: movsx eax, byte ptr [edx] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx));
    /* 004534e1: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004534e4: jne 0x453502 */ if (!fZ) goto L_00453502;
L_004534e6:; BB(0x004534e6);
    /* 004534e6: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004534e9: movsx edx, byte ptr [ecx + 3] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x3u));
    /* 004534ed: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004534f0: movsx ecx, byte ptr [eax + 3] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x3u));
    /* 004534f4: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004534f6: jl 0x4534fc */ if ((fS!=fO)) goto L_004534fc;
L_004534f8:; BB(0x004534f8);
    /* 004534f8: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 004534fa: jmp 0x453542 */ goto L_00453542;
L_004534fc:; BB(0x004534fc);
    /* 004534fc: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004534fe: jmp 0x453542 */ goto L_00453542;
L_00453502:; BB(0x00453502);
    /* 00453502: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00453505: movsx eax, byte ptr [edx + 3] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x3u));
    /* 00453509: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0045350c: movsx edx, byte ptr [ecx + 3] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x3u));
    /* 00453510: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00453512: jle 0x453518 */ if ((fZ||fS!=fO)) goto L_00453518;
L_00453514:; BB(0x00453514);
    /* 00453514: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00453516: jmp 0x453542 */ goto L_00453542;
L_00453518:; BB(0x00453518);
    /* 00453518: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045351b: movsx ecx, byte ptr [eax + 3] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x3u));
    /* 0045351f: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00453522: movsx eax, byte ptr [edx + 3] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x3u));
    /* 00453526: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00453528: jne 0x453540 */ if (!fZ) goto L_00453540;
L_0045352a:; BB(0x0045352a);
    /* 0045352a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045352d: movsx edx, byte ptr [ecx + 4] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x4u));
    /* 00453531: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00453534: movsx ecx, byte ptr [eax + 4] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x4u));
    /* 00453538: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045353a: jl 0x453540 */ if ((fS!=fO)) goto L_00453540;
L_0045353c:; BB(0x0045353c);
    /* 0045353c: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0045353e: jmp 0x453542 */ goto L_00453542;
L_00453540:; BB(0x00453540);
    /* 00453540: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_00453542:; BB(0x00453542);
    /* 00453542: mov esp, ebp */ r_esp = r_ebp;
    /* 00453544: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00453545: ret 8 */ FN_RET(0x004534b0); r_esp += 12; return;
}

void f_004536f0(void) /* sub_4536F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004536f0);
    /* 004536f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004536f1: mov ebp, esp */ r_ebp = r_esp;
    /* 004536f3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004536f6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004536f9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00453700: jmp 0x45370b */ goto L_0045370b;
L_00453702:; BB(0x00453702);
    /* 00453702: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00453705: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00453708: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0045370b:; BB(0x0045370b);
    /* 0045370b: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045370f: jge 0x45374f */ if ((fS==fO)) goto L_0045374f;
L_00453711:; BB(0x00453711);
    /* 00453711: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00453714: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00453717: movsx edx, byte ptr [ecx + 3] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x3u));
    /* 0045371b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0045371e: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00453721: movsx ecx, byte ptr [eax + 3] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x3u));
    /* 00453725: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00453727: jne 0x45372b */ if (!fZ) goto L_0045372b;
L_00453729:; BB(0x00453729);
    /* 00453729: jmp 0x453702 */ goto L_00453702;
L_0045372b:; BB(0x0045372b);
    /* 0045372b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0045372e: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00453731: movsx eax, byte ptr [edx + 3] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x3u));
    /* 00453735: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00453738: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045373b: movsx edx, byte ptr [ecx + 3] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x3u));
    /* 0045373f: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00453741: jle 0x453749 */ if ((fZ||fS!=fO)) goto L_00453749;
L_00453743:; BB(0x00453743);
    /* 00453743: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00453745: jmp 0x453751 */ goto L_00453751;
L_00453749:; BB(0x00453749);
    /* 00453749: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0045374b: jmp 0x453751 */ goto L_00453751;
L_0045374f:; BB(0x0045374f);
    /* 0045374f: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_00453751:; BB(0x00453751);
    /* 00453751: mov esp, ebp */ r_esp = r_ebp;
    /* 00453753: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00453754: ret 8 */ FN_RET(0x004536f0); r_esp += 12; return;
}

void f_00453760(void) /* sub_453760 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00453760);
    /* 00453760: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00453761: mov ebp, esp */ r_ebp = r_esp;
    /* 00453763: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00453764: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00453767: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045376a: movsx ecx, byte ptr [eax + 1] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x1u));
    /* 0045376e: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00453771: movsx eax, byte ptr [edx + 1] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x1u));
    /* 00453775: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00453777: jle 0x45377d */ if ((fZ||fS!=fO)) goto L_0045377d;
L_00453779:; BB(0x00453779);
    /* 00453779: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0045377b: jmp 0x4537a3 */ goto L_004537a3;
L_0045377d:; BB(0x0045377d);
    /* 0045377d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00453780: movsx edx, byte ptr [ecx + 1] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x1u));
    /* 00453784: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00453787: movsx ecx, byte ptr [eax + 1] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x1u));
    /* 0045378b: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045378d: jge 0x453793 */ if ((fS==fO)) goto L_00453793;
L_0045378f:; BB(0x0045378f);
    /* 0045378f: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00453791: jmp 0x4537a3 */ goto L_004537a3;
L_00453793:; BB(0x00453793);
    /* 00453793: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00453796: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00453797: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045379a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045379b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045379e: call 0x4536f0 */ r_esp -= 4; W32(r_esp, 0x4537a3u); f_004536f0();
L_004537a3:; BB(0x004537a3);
    /* 004537a3: mov esp, ebp */ r_esp = r_ebp;
    /* 004537a5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004537a6: ret 8 */ FN_RET(0x00453760); r_esp += 12; return;
}

void f_004537b0(void) /* sub_4537B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004537b0);
    /* 004537b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004537b1: mov ebp, esp */ r_ebp = r_esp;
    /* 004537b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004537b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004537b7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004537ba: movsx ecx, byte ptr [eax + 1] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x1u));
    /* 004537be: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 004537c1: movsx eax, byte ptr [edx + 1] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x1u));
    /* 004537c5: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004537c7: jle 0x4537cd */ if ((fZ||fS!=fO)) goto L_004537cd;
L_004537c9:; BB(0x004537c9);
    /* 004537c9: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 004537cb: jmp 0x45381f */ goto L_0045381f;
L_004537cd:; BB(0x004537cd);
    /* 004537cd: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004537d0: movsx edx, byte ptr [ecx + 1] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x1u));
    /* 004537d4: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004537d7: movsx ecx, byte ptr [eax + 1] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x1u));
    /* 004537db: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004537dd: jge 0x4537e3 */ if ((fS==fO)) goto L_004537e3;
L_004537df:; BB(0x004537df);
    /* 004537df: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004537e1: jmp 0x45381f */ goto L_0045381f;
L_004537e3:; BB(0x004537e3);
    /* 004537e3: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004537e6: movsx eax, byte ptr [edx + 2] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x2u));
    /* 004537ea: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 004537ed: movsx edx, byte ptr [ecx + 2] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x2u));
    /* 004537f1: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004537f3: jle 0x4537f9 */ if ((fZ||fS!=fO)) goto L_004537f9;
L_004537f5:; BB(0x004537f5);
    /* 004537f5: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 004537f7: jmp 0x45381f */ goto L_0045381f;
L_004537f9:; BB(0x004537f9);
    /* 004537f9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004537fc: movsx ecx, byte ptr [eax + 2] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x2u));
    /* 00453800: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00453803: movsx eax, byte ptr [edx + 2] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x2u));
    /* 00453807: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00453809: jge 0x45380f */ if ((fS==fO)) goto L_0045380f;
L_0045380b:; BB(0x0045380b);
    /* 0045380b: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0045380d: jmp 0x45381f */ goto L_0045381f;
L_0045380f:; BB(0x0045380f);
    /* 0045380f: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00453812: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00453813: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00453816: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00453817: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045381a: call 0x4536f0 */ r_esp -= 4; W32(r_esp, 0x45381fu); f_004536f0();
L_0045381f:; BB(0x0045381f);
    /* 0045381f: mov esp, ebp */ r_esp = r_ebp;
    /* 00453821: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00453822: ret 8 */ FN_RET(0x004537b0); r_esp += 12; return;
}

void f_00453830(void) /* sub_453830 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00453830);
    /* 00453830: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00453831: mov ebp, esp */ r_ebp = r_esp;
    /* 00453833: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00453836: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00453839: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045383c: movzx ecx, byte ptr [eax + 0x2c2] */ r_ecx = (u32)R8((u32)(r_eax+0x2c2u));
    /* 00453843: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00453845: jne 0x45384b */ if (!fZ) goto L_0045384b;
L_00453847:; BB(0x00453847);
    /* 00453847: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00453849: jmp 0x4538a1 */ goto L_004538a1;
L_0045384b:; BB(0x0045384b);
    /* 0045384b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00453852: jmp 0x45385d */ goto L_0045385d;
L_00453854:; BB(0x00453854);
    /* 00453854: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00453857: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045385a: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0045385d:; BB(0x0045385d);
    /* 0045385d: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00453861: jge 0x45389f */ if ((fS==fO)) goto L_0045389f;
L_00453863:; BB(0x00453863);
    /* 00453863: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00453866: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00453869: mov dx, word ptr [ecx + eax*2] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2))) & 0xffffu);
    /* 0045386d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045386e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00453871: call 0x44f6c0 */ r_esp -= 4; W32(r_esp, 0x453876u); f_0044f6c0();
    /* 00453876: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00453879: cmp eax, dword ptr [ecx + 0x2d0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x2d0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045387f: je 0x45389d */ if (fZ) goto L_0045389d;
L_00453881:; BB(0x00453881);
    /* 00453881: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00453884: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00453887: mov cx, word ptr [eax + edx*2] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2))) & 0xffffu);
    /* 0045388b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045388c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045388f: call 0x44f6c0 */ r_esp -= 4; W32(r_esp, 0x453894u); f_0044f6c0();
    /* 00453894: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00453897: je 0x45389d */ if (fZ) goto L_0045389d;
L_00453899:; BB(0x00453899);
    /* 00453899: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0045389b: jmp 0x4538a1 */ goto L_004538a1;
L_0045389d:; BB(0x0045389d);
    /* 0045389d: jmp 0x453854 */ goto L_00453854;
L_0045389f:; BB(0x0045389f);
    /* 0045389f: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_004538a1:; BB(0x004538a1);
    /* 004538a1: mov esp, ebp */ r_esp = r_ebp;
    /* 004538a3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004538a4: ret 4 */ FN_RET(0x00453830); r_esp += 8; return;
}

void f_004538b0(void) /* sub_4538B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004538b0);
    /* 004538b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004538b1: mov ebp, esp */ r_ebp = r_esp;
    /* 004538b3: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004538b6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004538b7: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 004538ba: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 004538c1: mov byte ptr [ebp - 0xa], 0 */ W8((u32)(r_ebp+0xfffffff6u), 0x0u);
    /* 004538c5: mov byte ptr [ebp - 0xb], 0 */ W8((u32)(r_ebp+0xfffffff5u), 0x0u);
    /* 004538c9: mov byte ptr [ebp - 9], 0 */ W8((u32)(r_ebp+0xfffffff7u), 0x0u);
    /* 004538cd: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004538d0: movzx ecx, byte ptr [eax + 0x2c5] */ r_ecx = (u32)R8((u32)(r_eax+0x2c5u));
    /* 004538d7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004538d9: jne 0x4538e2 */ if (!fZ) goto L_004538e2;
L_004538db:; BB(0x004538db);
    /* 004538db: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004538dd: jmp 0x453d1c */ goto L_00453d1c;
L_004538e2:; BB(0x004538e2);
    /* 004538e2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004538e9: jmp 0x4538f4 */ goto L_004538f4;
L_004538eb:; BB(0x004538eb);
    /* 004538eb: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004538ee: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004538f1: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_004538f4:; BB(0x004538f4);
    /* 004538f4: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004538f8: jge 0x453936 */ if ((fS==fO)) goto L_00453936;
L_004538fa:; BB(0x004538fa);
    /* 004538fa: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004538fd: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00453900: mov dx, word ptr [ecx + eax*2] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2))) & 0xffffu);
    /* 00453904: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00453905: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00453908: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x45390du); f_0044f680();
    /* 0045390d: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00453910: jne 0x453934 */ if (!fZ) goto L_00453934;
L_00453912:; BB(0x00453912);
    /* 00453912: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00453915: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00453918: mov dx, word ptr [ecx + eax*2] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2))) & 0xffffu);
    /* 0045391c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045391d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00453920: call 0x44f6c0 */ r_esp -= 4; W32(r_esp, 0x453925u); f_0044f6c0();
    /* 00453925: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00453928: jne 0x453930 */ if (!fZ) goto L_00453930;
L_0045392a:; BB(0x0045392a);
    /* 0045392a: mov byte ptr [ebp - 0xb], 1 */ W8((u32)(r_ebp+0xfffffff5u), 0x1u);
    /* 0045392e: jmp 0x453934 */ goto L_00453934;
L_00453930:; BB(0x00453930);
    /* 00453930: mov byte ptr [ebp - 0xa], 1 */ W8((u32)(r_ebp+0xfffffff6u), 0x1u);
L_00453934:; BB(0x00453934);
    /* 00453934: jmp 0x4538eb */ goto L_004538eb;
L_00453936:; BB(0x00453936);
    /* 00453936: movzx eax, byte ptr [ebp - 0xa] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffff6u));
    /* 0045393a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045393c: jne 0x4539a9 */ if (!fZ) goto L_004539a9;
L_0045393e:; BB(0x0045393e);
    /* 0045393e: movzx ecx, byte ptr [ebp - 0xb] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffff5u));
    /* 00453942: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00453944: jne 0x4539a9 */ if (!fZ) goto L_004539a9;
L_00453946:; BB(0x00453946);
    /* 00453946: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0045394d: jmp 0x453958 */ goto L_00453958;
L_0045394f:; BB(0x0045394f);
    /* 0045394f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00453952: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00453955: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_00453958:; BB(0x00453958);
    /* 00453958: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045395c: jge 0x453997 */ if ((fS==fO)) goto L_00453997;
L_0045395e:; BB(0x0045395e);
    /* 0045395e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00453961: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00453964: mov dx, word ptr [ecx + eax*2] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2))) & 0xffffu);
    /* 00453968: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00453969: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045396c: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x453971u); f_0044f680();
    /* 00453971: mov esi, eax */ r_esi = r_eax;
    /* 00453973: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00453976: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00453979: mov dx, word ptr [ecx + eax*2 + 2] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x2u))) & 0xffffu);
    /* 0045397e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045397f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00453982: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x453987u); f_0044f680();
    /* 00453987: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045398a: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045398c: je 0x453995 */ if (fZ) goto L_00453995;
L_0045398e:; BB(0x0045398e);
    /* 0045398e: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00453990: jmp 0x453d1c */ goto L_00453d1c;
L_00453995:; BB(0x00453995);
    /* 00453995: jmp 0x45394f */ goto L_0045394f;
L_00453997:; BB(0x00453997);
    /* 00453997: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045399a: mov cx, word ptr [eax] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax))) & 0xffffu);
    /* 0045399d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045399e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004539a1: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x4539a6u); f_0044f680();
    /* 004539a6: mov byte ptr [ebp - 9], al */ W8((u32)(r_ebp+0xfffffff7u), (u8)r_eax);
L_004539a9:; BB(0x004539a9);
    /* 004539a9: movzx edx, byte ptr [ebp - 0xb] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffff5u));
    /* 004539ad: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004539af: jne 0x453a62 */ if (!fZ) goto L_00453a62;
L_004539b5:; BB(0x004539b5);
    /* 004539b5: movzx eax, byte ptr [ebp - 0xa] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffff6u));
    /* 004539b9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004539bb: je 0x453a62 */ if (fZ) goto L_00453a62;
L_004539c1:; BB(0x004539c1);
    /* 004539c1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004539c4: mov dx, word ptr [ecx + 8] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+0x8u))) & 0xffffu);
    /* 004539c8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004539c9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004539cc: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x4539d1u); f_0044f680();
    /* 004539d1: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004539d4: je 0x4539f2 */ if (fZ) goto L_004539f2;
L_004539d6:; BB(0x004539d6);
    /* 004539d6: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004539d9: mov cx, word ptr [eax + 8] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+0x8u))) & 0xffffu);
    /* 004539dd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004539de: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004539e1: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x4539e6u); f_0044f680();
    /* 004539e6: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004539e9: je 0x4539f2 */ if (fZ) goto L_004539f2;
L_004539eb:; BB(0x004539eb);
    /* 004539eb: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004539ed: jmp 0x453d1c */ goto L_00453d1c;
L_004539f2:; BB(0x004539f2);
    /* 004539f2: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 004539f9: jmp 0x453a04 */ goto L_00453a04;
L_004539fb:; BB(0x004539fb);
    /* 004539fb: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004539fe: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00453a01: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_00453a04:; BB(0x00453a04);
    /* 00453a04: cmp dword ptr [ebp - 4], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00453a08: jle 0x453a43 */ if ((fZ||fS!=fO)) goto L_00453a43;
L_00453a0a:; BB(0x00453a0a);
    /* 00453a0a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00453a0d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00453a10: mov dx, word ptr [ecx + eax*2] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2))) & 0xffffu);
    /* 00453a14: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00453a15: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00453a18: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x453a1du); f_0044f680();
    /* 00453a1d: mov esi, eax */ r_esi = r_eax;
    /* 00453a1f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00453a22: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00453a25: mov dx, word ptr [ecx + eax*2 - 2] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0xfffffffeu))) & 0xffffu);
    /* 00453a2a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00453a2b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00453a2e: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x453a33u); f_0044f680();
    /* 00453a33: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00453a36: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00453a38: je 0x453a41 */ if (fZ) goto L_00453a41;
L_00453a3a:; BB(0x00453a3a);
    /* 00453a3a: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00453a3c: jmp 0x453d1c */ goto L_00453d1c;
L_00453a41:; BB(0x00453a41);
    /* 00453a41: jmp 0x4539fb */ goto L_004539fb;
L_00453a43:; BB(0x00453a43);
    /* 00453a43: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00453a46: mov cx, word ptr [eax + 8] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+0x8u))) & 0xffffu);
    /* 00453a4a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00453a4b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00453a4e: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x453a53u); f_0044f680();
    /* 00453a53: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00453a56: jne 0x453a5e */ if (!fZ) goto L_00453a5e;
L_00453a58:; BB(0x00453a58);
    /* 00453a58: mov byte ptr [ebp - 9], 5 */ W8((u32)(r_ebp+0xfffffff7u), 0x5u);
    /* 00453a5c: jmp 0x453a62 */ goto L_00453a62;
L_00453a5e:; BB(0x00453a5e);
    /* 00453a5e: mov byte ptr [ebp - 9], 0xe */ W8((u32)(r_ebp+0xfffffff7u), 0xeu);
L_00453a62:; BB(0x00453a62);
    /* 00453a62: movzx edx, byte ptr [ebp - 0xa] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffff6u));
    /* 00453a66: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00453a68: jne 0x453b57 */ if (!fZ) goto L_00453b57;
L_00453a6e:; BB(0x00453a6e);
    /* 00453a6e: movzx eax, byte ptr [ebp - 0xb] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffff5u));
    /* 00453a72: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00453a74: je 0x453b57 */ if (fZ) goto L_00453b57;
L_00453a7a:; BB(0x00453a7a);
    /* 00453a7a: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 00453a81: jmp 0x453a8c */ goto L_00453a8c;
L_00453a83:; BB(0x00453a83);
    /* 00453a83: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00453a86: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00453a89: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00453a8c:; BB(0x00453a8c);
    /* 00453a8c: cmp dword ptr [ebp - 4], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00453a90: jle 0x453b07 */ if ((fZ||fS!=fO)) goto L_00453b07;
L_00453a92:; BB(0x00453a92);
    /* 00453a92: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00453a95: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00453a98: mov cx, word ptr [eax + edx*2 - 2] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0xfffffffeu))) & 0xffffu);
    /* 00453a9d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00453a9e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00453aa1: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x453aa6u); f_0044f680();
    /* 00453aa6: mov esi, eax */ r_esi = r_eax;
    /* 00453aa8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00453aab: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00453aae: mov cx, word ptr [eax + edx*2] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2))) & 0xffffu);
    /* 00453ab2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00453ab3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00453ab6: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x453abbu); f_0044f680();
    /* 00453abb: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00453abd: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00453ac0: jle 0x453ac9 */ if ((fZ||fS!=fO)) goto L_00453ac9;
L_00453ac2:; BB(0x00453ac2);
    /* 00453ac2: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00453ac4: jmp 0x453d1c */ goto L_00453d1c;
L_00453ac9:; BB(0x00453ac9);
    /* 00453ac9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00453acc: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00453acf: mov cx, word ptr [eax + edx*2] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2))) & 0xffffu);
    /* 00453ad3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00453ad4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00453ad7: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x453adcu); f_0044f680();
    /* 00453adc: mov esi, eax */ r_esi = r_eax;
    /* 00453ade: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00453ae1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00453ae4: mov cx, word ptr [eax + edx*2 - 2] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0xfffffffeu))) & 0xffffu);
    /* 00453ae9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00453aea: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00453aed: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x453af2u); f_0044f680();
    /* 00453af2: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00453af5: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00453af7: je 0x453b02 */ if (fZ) goto L_00453b02;
L_00453af9:; BB(0x00453af9);
    /* 00453af9: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00453afc: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00453aff: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_00453b02:; BB(0x00453b02);
    /* 00453b02: jmp 0x453a83 */ goto L_00453a83;
L_00453b07:; BB(0x00453b07);
    /* 00453b07: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00453b0b: jle 0x453b14 */ if ((fZ||fS!=fO)) goto L_00453b14;
L_00453b0d:; BB(0x00453b0d);
    /* 00453b0d: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00453b0f: jmp 0x453d1c */ goto L_00453d1c;
L_00453b14:; BB(0x00453b14);
    /* 00453b14: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 00453b1a: call 0x45f940 */ r_esp -= 4; W32(r_esp, 0x453b1fu); f_0045f940();
    /* 00453b1f: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00453b22: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00453b24: je 0x453b41 */ if (fZ) goto L_00453b41;
L_00453b26:; BB(0x00453b26);
    /* 00453b26: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00453b29: mov dx, word ptr [ecx + 8] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+0x8u))) & 0xffffu);
    /* 00453b2d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00453b2e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00453b31: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x453b36u); f_0044f680();
    /* 00453b36: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00453b39: jne 0x453b41 */ if (!fZ) goto L_00453b41;
L_00453b3b:; BB(0x00453b3b);
    /* 00453b3b: mov byte ptr [ebp - 9], 5 */ W8((u32)(r_ebp+0xfffffff7u), 0x5u);
    /* 00453b3f: jmp 0x453b57 */ goto L_00453b57;
L_00453b41:; BB(0x00453b41);
    /* 00453b41: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00453b44: mov cx, word ptr [eax + 8] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+0x8u))) & 0xffffu);
    /* 00453b48: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00453b49: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00453b4c: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x453b51u); f_0044f680();
    /* 00453b51: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00453b54: mov byte ptr [ebp - 9], al */ W8((u32)(r_ebp+0xfffffff7u), (u8)r_eax);
L_00453b57:; BB(0x00453b57);
    /* 00453b57: movzx edx, byte ptr [ebp - 0xb] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffff5u));
    /* 00453b5b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00453b5d: je 0x453d19 */ if (fZ) goto L_00453d19;
L_00453b63:; BB(0x00453b63);
    /* 00453b63: movzx eax, byte ptr [ebp - 0xa] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffff6u));
    /* 00453b67: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00453b69: je 0x453d19 */ if (fZ) goto L_00453d19;
L_00453b6f:; BB(0x00453b6f);
    /* 00453b6f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00453b72: mov dx, word ptr [ecx + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+0x4u))) & 0xffffu);
    /* 00453b76: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00453b77: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00453b7a: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x453b7fu); f_0044f680();
    /* 00453b7f: mov esi, eax */ r_esi = r_eax;
    /* 00453b81: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00453b84: mov cx, word ptr [eax + 6] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+0x6u))) & 0xffffu);
    /* 00453b88: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00453b89: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00453b8c: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x453b91u); f_0044f680();
    /* 00453b91: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00453b93: je 0x453d15 */ if (fZ) goto L_00453d15;
L_00453b99:; BB(0x00453b99);
    /* 00453b99: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00453b9c: mov ax, word ptr [edx + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+0x4u))) & 0xffffu);
    /* 00453ba0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00453ba1: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00453ba4: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x453ba9u); f_0044f680();
    /* 00453ba9: mov esi, eax */ r_esi = r_eax;
    /* 00453bab: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00453bae: mov dx, word ptr [ecx + 8] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+0x8u))) & 0xffffu);
    /* 00453bb2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00453bb3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00453bb6: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x453bbbu); f_0044f680();
    /* 00453bbb: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00453bbd: je 0x453d15 */ if (fZ) goto L_00453d15;
L_00453bc3:; BB(0x00453bc3);
    /* 00453bc3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00453bc6: mov cx, word ptr [eax + 6] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+0x6u))) & 0xffffu);
    /* 00453bca: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00453bcb: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00453bce: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x453bd3u); f_0044f680();
    /* 00453bd3: mov esi, eax */ r_esi = r_eax;
    /* 00453bd5: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00453bd8: mov ax, word ptr [edx + 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+0x8u))) & 0xffffu);
    /* 00453bdc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00453bdd: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00453be0: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x453be5u); f_0044f680();
    /* 00453be5: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00453be7: je 0x453d15 */ if (fZ) goto L_00453d15;
L_00453bed:; BB(0x00453bed);
    /* 00453bed: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00453bf0: mov dx, word ptr [ecx + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+0x4u))) & 0xffffu);
    /* 00453bf4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00453bf5: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00453bf8: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x453bfdu); f_0044f680();
    /* 00453bfd: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00453c00: jl 0x453c6f */ if ((fS!=fO)) goto L_00453c6f;
L_00453c02:; BB(0x00453c02);
    /* 00453c02: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00453c05: mov cx, word ptr [eax + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+0x4u))) & 0xffffu);
    /* 00453c09: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00453c0a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00453c0d: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x453c12u); f_0044f680();
    /* 00453c12: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00453c15: jg 0x453c6f */ if ((!fZ&&fS==fO)) goto L_00453c6f;
L_00453c17:; BB(0x00453c17);
    /* 00453c17: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00453c1a: mov ax, word ptr [edx + 6] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+0x6u))) & 0xffffu);
    /* 00453c1e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00453c1f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00453c22: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x453c27u); f_0044f680();
    /* 00453c27: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00453c2a: jl 0x453c6f */ if ((fS!=fO)) goto L_00453c6f;
L_00453c2c:; BB(0x00453c2c);
    /* 00453c2c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00453c2f: mov dx, word ptr [ecx + 6] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+0x6u))) & 0xffffu);
    /* 00453c33: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00453c34: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00453c37: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x453c3cu); f_0044f680();
    /* 00453c3c: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00453c3f: jg 0x453c6f */ if ((!fZ&&fS==fO)) goto L_00453c6f;
L_00453c41:; BB(0x00453c41);
    /* 00453c41: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00453c44: mov cx, word ptr [eax + 8] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+0x8u))) & 0xffffu);
    /* 00453c48: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00453c49: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00453c4c: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x453c51u); f_0044f680();
    /* 00453c51: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00453c54: jl 0x453c6f */ if ((fS!=fO)) goto L_00453c6f;
L_00453c56:; BB(0x00453c56);
    /* 00453c56: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00453c59: mov ax, word ptr [edx + 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+0x8u))) & 0xffffu);
    /* 00453c5d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00453c5e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00453c61: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x453c66u); f_0044f680();
    /* 00453c66: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00453c69: jle 0x453cf1 */ if ((fZ||fS!=fO)) goto L_00453cf1;
L_00453c6f:; BB(0x00453c6f);
    /* 00453c6f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00453c72: mov dx, word ptr [ecx + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+0x4u))) & 0xffffu);
    /* 00453c76: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00453c77: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00453c7a: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x453c7fu); f_0044f680();
    /* 00453c7f: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00453c82: jl 0x453d15 */ if ((fS!=fO)) goto L_00453d15;
L_00453c88:; BB(0x00453c88);
    /* 00453c88: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00453c8b: mov cx, word ptr [eax + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+0x4u))) & 0xffffu);
    /* 00453c8f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00453c90: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00453c93: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x453c98u); f_0044f680();
    /* 00453c98: cmp eax, 0xd */ {  u32 a = r_eax; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00453c9b: jg 0x453d15 */ if ((!fZ&&fS==fO)) goto L_00453d15;
L_00453c9d:; BB(0x00453c9d);
    /* 00453c9d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00453ca0: mov ax, word ptr [edx + 6] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+0x6u))) & 0xffffu);
    /* 00453ca4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00453ca5: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00453ca8: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x453cadu); f_0044f680();
    /* 00453cad: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00453cb0: jl 0x453d15 */ if ((fS!=fO)) goto L_00453d15;
L_00453cb2:; BB(0x00453cb2);
    /* 00453cb2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00453cb5: mov dx, word ptr [ecx + 6] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+0x6u))) & 0xffffu);
    /* 00453cb9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00453cba: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00453cbd: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x453cc2u); f_0044f680();
    /* 00453cc2: cmp eax, 0xd */ {  u32 a = r_eax; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00453cc5: jg 0x453d15 */ if ((!fZ&&fS==fO)) goto L_00453d15;
L_00453cc7:; BB(0x00453cc7);
    /* 00453cc7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00453cca: mov cx, word ptr [eax + 8] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+0x8u))) & 0xffffu);
    /* 00453cce: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00453ccf: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00453cd2: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x453cd7u); f_0044f680();
    /* 00453cd7: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00453cda: jl 0x453d15 */ if ((fS!=fO)) goto L_00453d15;
L_00453cdc:; BB(0x00453cdc);
    /* 00453cdc: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00453cdf: mov ax, word ptr [edx + 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+0x8u))) & 0xffffu);
    /* 00453ce3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00453ce4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00453ce7: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x453cecu); f_0044f680();
    /* 00453cec: cmp eax, 0xd */ {  u32 a = r_eax; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00453cef: jg 0x453d15 */ if ((!fZ&&fS==fO)) goto L_00453d15;
L_00453cf1:; BB(0x00453cf1);
    /* 00453cf1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00453cf4: mov dx, word ptr [ecx + 8] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+0x8u))) & 0xffffu);
    /* 00453cf8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00453cf9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00453cfc: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x453d01u); f_0044f680();
    /* 00453d01: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00453d04: jge 0x453d0c */ if ((fS==fO)) goto L_00453d0c;
L_00453d06:; BB(0x00453d06);
    /* 00453d06: mov byte ptr [ebp - 9], 5 */ W8((u32)(r_ebp+0xfffffff7u), 0x5u);
    /* 00453d0a: jmp 0x453d10 */ goto L_00453d10;
L_00453d0c:; BB(0x00453d0c);
    /* 00453d0c: mov byte ptr [ebp - 9], 0xe */ W8((u32)(r_ebp+0xfffffff7u), 0xeu);
L_00453d10:; BB(0x00453d10);
    /* 00453d10: mov al, byte ptr [ebp - 9] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff7u))) & 0xffu);
    /* 00453d13: jmp 0x453d1c */ goto L_00453d1c;
L_00453d15:; BB(0x00453d15);
    /* 00453d15: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00453d17: jmp 0x453d1c */ goto L_00453d1c;
L_00453d19:; BB(0x00453d19);
    /* 00453d19: mov al, byte ptr [ebp - 9] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff7u))) & 0xffu);
L_00453d1c:; BB(0x00453d1c);
    /* 00453d1c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00453d1d: mov esp, ebp */ r_esp = r_ebp;
    /* 00453d1f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00453d20: ret 4 */ FN_RET(0x004538b0); r_esp += 8; return;
}

void f_00453d30(void) /* sub_453D30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00453d30);
    /* 00453d30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00453d31: mov ebp, esp */ r_ebp = r_esp;
    /* 00453d33: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00453d36: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00453d39: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 00453d40: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00453d47: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00453d4a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00453d4b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00453d4e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00453d4f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00453d52: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00453d53: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00453d56: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00453d57: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00453d5a: call 0x44f840 */ r_esp -= 4; W32(r_esp, 0x453d5fu); f_0044f840();
    /* 00453d5f: xor ax, ax */ {  u32 a = (u16)r_eax; u32 b = (u16)r_eax; u32 r = (a ^ b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00453d62: mov esp, ebp */ r_esp = r_ebp;
    /* 00453d64: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00453d65: ret 8 */ FN_RET(0x00453d30); r_esp += 12; return;
}

void f_00453d70(void) /* sub_453D70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00453d70);
    /* 00453d70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00453d71: mov ebp, esp */ r_ebp = r_esp;
    /* 00453d73: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00453d76: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00453d79: mov dword ptr [ebp - 0xc], 0xffffffff */ W32((u32)(r_ebp+0xfffffff4u), 0xffffffffu);
    /* 00453d80: mov dword ptr [ebp - 8], 0xffffffff */ W32((u32)(r_ebp+0xfffffff8u), 0xffffffffu);
    /* 00453d87: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00453d8e: jmp 0x453d99 */ goto L_00453d99;
L_00453d90:; BB(0x00453d90);
    /* 00453d90: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00453d93: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00453d96: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00453d99:; BB(0x00453d99);
    /* 00453d99: cmp dword ptr [ebp - 4], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00453d9d: jge 0x453ddd */ if ((fS==fO)) goto L_00453ddd;
L_00453d9f:; BB(0x00453d9f);
    /* 00453d9f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00453da2: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00453da5: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 00453daa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00453dab: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00453dae: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x453db3u); f_0044f680();
    /* 00453db3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00453db4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00453db7: call 0x450c20 */ r_esp -= 4; W32(r_esp, 0x453dbcu); f_00450c20();
    /* 00453dbc: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00453dbf: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00453dc1: je 0x453dc5 */ if (fZ) goto L_00453dc5;
L_00453dc3:; BB(0x00453dc3);
    /* 00453dc3: jmp 0x453d90 */ goto L_00453d90;
L_00453dc5:; BB(0x00453dc5);
    /* 00453dc5: cmp dword ptr [ebp - 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00453dc9: jne 0x453dd3 */ if (!fZ) goto L_00453dd3;
L_00453dcb:; BB(0x00453dcb);
    /* 00453dcb: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00453dce: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00453dd1: jmp 0x453ddb */ goto L_00453ddb;
L_00453dd3:; BB(0x00453dd3);
    /* 00453dd3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00453dd6: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00453dd9: jmp 0x453ddd */ goto L_00453ddd;
L_00453ddb:; BB(0x00453ddb);
    /* 00453ddb: jmp 0x453d90 */ goto L_00453d90;
L_00453ddd:; BB(0x00453ddd);
    /* 00453ddd: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00453de0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00453de1: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00453de4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00453de5: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00453de8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00453de9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00453dec: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00453ded: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00453df0: call 0x44f840 */ r_esp -= 4; W32(r_esp, 0x453df5u); f_0044f840();
    /* 00453df5: xor ax, ax */ {  u32 a = (u16)r_eax; u32 b = (u16)r_eax; u32 r = (a ^ b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00453df8: mov esp, ebp */ r_esp = r_ebp;
    /* 00453dfa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00453dfb: ret 8 */ FN_RET(0x00453d70); r_esp += 12; return;
}

