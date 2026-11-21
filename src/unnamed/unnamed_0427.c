#include "protos.h"

void f_004271f0(void) /* sub_4271F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004271f0);
    /* 004271f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004271f1: mov ebp, esp */ r_ebp = r_esp;
    /* 004271f3: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004271f6: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 004271f9: mov dword ptr [ebp - 0x14], 3 */ W32((u32)(r_ebp+0xffffffecu), 0x3u);
    /* 00427200: mov dword ptr [ebp - 0x10], 1 */ W32((u32)(r_ebp+0xfffffff0u), 0x1u);
    /* 00427207: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0042720e: mov dword ptr [ebp - 8], 2 */ W32((u32)(r_ebp+0xfffffff8u), 0x2u);
    /* 00427215: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0042721c: jmp 0x427227 */ goto L_00427227;
L_0042721e:; BB(0x0042721e);
    /* 0042721e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00427221: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00427224: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00427227:; BB(0x00427227);
    /* 00427227: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042722b: jge 0x4272d4 */ if ((fS==fO)) goto L_004272d4;
L_00427231:; BB(0x00427231);
    /* 00427231: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00427234: mov edx, dword ptr [ebp + ecx*4 - 0x14] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffecu));
    /* 00427238: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00427239: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x42723eu); f_005dcb00();
    /* 0042723e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00427241: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00427244: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00427247: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x42724cu); f_0063aac0();
    /* 0042724c: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0042724e: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00427251: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00427253: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00427257: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0042725a: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 0042725d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042725f: jne 0x4272cf */ if (!fZ) goto L_004272cf;
L_00427261:; BB(0x00427261);
    /* 00427261: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00427264: mov ecx, dword ptr [ebp + eax*4 - 0x14] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffffecu));
    /* 00427268: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00427269: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x42726eu); f_005dcb00();
    /* 0042726e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00427271: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00427274: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00427277: mov al, byte ptr [edx + 0x4a1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x4a1u))) & 0xffu);
    /* 0042727d: mov byte ptr [ebp - 0x21], al */ W8((u32)(r_ebp+0xffffffdfu), (u8)r_eax);
    /* 00427280: movzx ecx, byte ptr [ebp - 0x21] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffdfu));
    /* 00427284: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00427286: jne 0x4272cf */ if (!fZ) goto L_004272cf;
L_00427288:; BB(0x00427288);
    /* 00427288: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042728b: mov eax, dword ptr [ebp + edx*4 - 0x14] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xffffffecu));
    /* 0042728f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00427290: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x427295u); f_005dcb00();
    /* 00427295: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00427298: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0042729b: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0042729e: mov dl, byte ptr [ecx + 0x4a2] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x4a2u))) & 0xffu);
    /* 004272a4: mov byte ptr [ebp - 0x29], dl */ W8((u32)(r_ebp+0xffffffd7u), (u8)r_edx);
    /* 004272a7: movzx eax, byte ptr [ebp - 0x29] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffd7u));
    /* 004272ab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004272ad: je 0x4272cf */ if (fZ) goto L_004272cf;
L_004272af:; BB(0x004272af);
    /* 004272af: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004272b2: mov edx, dword ptr [ebp + ecx*4 - 0x14] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffecu));
    /* 004272b6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004272b7: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004272ba: call 0x4272e0 */ r_esp -= 4; W32(r_esp, 0x4272bfu); f_004272e0();
    /* 004272bf: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004272c2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004272c4: je 0x4272cf */ if (fZ) goto L_004272cf;
L_004272c6:; BB(0x004272c6);
    /* 004272c6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004272c9: mov eax, dword ptr [ebp + ecx*4 - 0x14] */ r_eax = R32((u32)(r_ebp+r_ecx*4+0xffffffecu));
    /* 004272cd: jmp 0x4272d7 */ goto L_004272d7;
L_004272cf:; BB(0x004272cf);
    /* 004272cf: jmp 0x42721e */ goto L_0042721e;
L_004272d4:; BB(0x004272d4);
    /* 004272d4: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_004272d7:; BB(0x004272d7);
    /* 004272d7: mov esp, ebp */ r_esp = r_ebp;
    /* 004272d9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004272da: ret  */ FN_RET(0x004271f0); r_esp += 4; return;
}

void f_004272e0(void) /* sub_4272E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004272e0);
    /* 004272e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004272e1: mov ebp, esp */ r_ebp = r_esp;
    /* 004272e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004272e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004272e7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004272ea: add eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004272ed: mov al, byte ptr [eax + 0xd4] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0xd4u))) & 0xffu);
    /* 004272f3: mov esp, ebp */ r_esp = r_ebp;
    /* 004272f5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004272f6: ret 4 */ FN_RET(0x004272e0); r_esp += 8; return;
}

void f_00427300(void) /* sub_427300 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00427300);
    /* 00427300: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00427301: mov ebp, esp */ r_ebp = r_esp;
    /* 00427303: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00427306: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 00427309: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042730b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0042730e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042730f: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00427312: call 0x426370 */ r_esp -= 4; W32(r_esp, 0x427317u); f_00426370();
    /* 00427317: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00427318: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042731b: imul ecx, ecx, 0xa */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xau; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0042731e: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00427321: lea eax, [edx + ecx + 0x6c] */ r_eax = (u32)(r_edx+r_ecx+0x6cu);
    /* 00427325: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00427326: call 0x462ba0 */ r_esp -= 4; W32(r_esp, 0x42732bu); f_00462ba0();
    /* 0042732b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042732e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00427331: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00427338: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0042733f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00427342: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00427343: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x427348u); f_005dcb00();
    /* 00427348: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042734b: mov ecx, eax */ r_ecx = r_eax;
    /* 0042734d: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x427352u); f_005d5a50();
    /* 00427352: cmp eax, 0x3b9aca00 */ {  u32 a = r_eax; u32 b = 0x3b9aca00u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00427357: jl 0x42735e */ if ((fS!=fO)) goto L_0042735e;
L_00427359:; BB(0x00427359);
    /* 00427359: jmp 0x427530 */ goto L_00427530;
L_0042735e:; BB(0x0042735e);
    /* 0042735e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00427361: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00427362: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00427365: call 0x4272e0 */ r_esp -= 4; W32(r_esp, 0x42736au); f_004272e0();
    /* 0042736a: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0042736d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042736f: je 0x427478 */ if (fZ) goto L_00427478;
L_00427375:; BB(0x00427375);
    /* 00427375: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00427378: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0042737b: cmp dword ptr [edx + ecx*4 + 0xb0], 4 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0xb0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00427383: je 0x427478 */ if (fZ) goto L_00427478;
L_00427389:; BB(0x00427389);
    /* 00427389: cmp dword ptr [ebp - 4], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042738d: jl 0x4273e3 */ if ((fS!=fO)) goto L_004273e3;
L_0042738f:; BB(0x0042738f);
    /* 0042738f: cmp dword ptr [ebp - 4], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00427393: jne 0x42739c */ if (!fZ) goto L_0042739c;
L_00427395:; BB(0x00427395);
    /* 00427395: mov dword ptr [ebp - 0xc], 0x32 */ W32((u32)(r_ebp+0xfffffff4u), 0x32u);
L_0042739c:; BB(0x0042739c);
    /* 0042739c: cmp dword ptr [ebp - 4], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004273a0: jne 0x4273a9 */ if (!fZ) goto L_004273a9;
L_004273a2:; BB(0x004273a2);
    /* 004273a2: mov dword ptr [ebp - 0xc], 0x64 */ W32((u32)(r_ebp+0xfffffff4u), 0x64u);
L_004273a9:; BB(0x004273a9);
    /* 004273a9: cmp dword ptr [ebp - 4], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004273ad: jne 0x4273b6 */ if (!fZ) goto L_004273b6;
L_004273af:; BB(0x004273af);
    /* 004273af: mov dword ptr [ebp - 0xc], 0x1f4 */ W32((u32)(r_ebp+0xfffffff4u), 0x1f4u);
L_004273b6:; BB(0x004273b6);
    /* 004273b6: cmp dword ptr [ebp - 4], 9 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004273ba: jne 0x4273c3 */ if (!fZ) goto L_004273c3;
L_004273bc:; BB(0x004273bc);
    /* 004273bc: mov dword ptr [ebp - 0xc], 0x4e20 */ W32((u32)(r_ebp+0xfffffff4u), 0x4e20u);
L_004273c3:; BB(0x004273c3);
    /* 004273c3: cmp dword ptr [ebp - 4], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004273c7: jne 0x4273d0 */ if (!fZ) goto L_004273d0;
L_004273c9:; BB(0x004273c9);
    /* 004273c9: mov dword ptr [ebp - 0xc], 0x30d40 */ W32((u32)(r_ebp+0xfffffff4u), 0x30d40u);
L_004273d0:; BB(0x004273d0);
    /* 004273d0: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004273d4: je 0x4273e3 */ if (fZ) goto L_004273e3;
L_004273d6:; BB(0x004273d6);
    /* 004273d6: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 004273d9: add eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004273dc: mov byte ptr [eax + 0xdc], 1 */ W8((u32)(r_eax+0xdcu), 0x1u);
L_004273e3:; BB(0x004273e3);
    /* 004273e3: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004273e7: je 0x427449 */ if (fZ) goto L_00427449;
L_004273e9:; BB(0x004273e9);
    /* 004273e9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004273eb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004273ee: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004273ef: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x4273f4u); f_0064c8a0();
    /* 004273f4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004273f7: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004273fa: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 004273fd: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00427400: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00427401: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00427404: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00427405: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00427408: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00427409: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x42740eu); f_005dcb00();
    /* 0042740e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00427411: mov ecx, eax */ r_ecx = r_eax;
    /* 00427413: call 0x5d5fb0 */ r_esp -= 4; W32(r_esp, 0x427418u); f_005d5fb0();
    /* 00427418: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042741a: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042741d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0042741e: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x427423u); f_0064c8a0();
    /* 00427423: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00427426: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00427429: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 0042742c: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0042742f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00427430: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00427433: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00427434: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00427437: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00427438: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x42743du); f_005dcb00();
    /* 0042743d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00427440: mov ecx, eax */ r_ecx = r_eax;
    /* 00427442: call 0x5d5cf0 */ r_esp -= 4; W32(r_esp, 0x427447u); f_005d5cf0();
    /* 00427447: jmp 0x427476 */ goto L_00427476;
L_00427449:; BB(0x00427449);
    /* 00427449: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042744b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0042744d: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x427452u); f_0064c8a0();
    /* 00427452: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00427455: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00427458: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 0042745b: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0042745e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042745f: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00427462: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00427463: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00427466: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00427467: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x42746cu); f_005dcb00();
    /* 0042746c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042746f: mov ecx, eax */ r_ecx = r_eax;
    /* 00427471: call 0x5d5fb0 */ r_esp -= 4; W32(r_esp, 0x427476u); f_005d5fb0();
L_00427476:; BB(0x00427476);
    /* 00427476: jmp 0x4274c8 */ goto L_004274c8;
L_00427478:; BB(0x00427478);
    /* 00427478: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0042747b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042747c: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0042747f: call 0x4272e0 */ r_esp -= 4; W32(r_esp, 0x427484u); f_004272e0();
    /* 00427484: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00427487: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00427489: je 0x4274c8 */ if (fZ) goto L_004274c8;
L_0042748b:; BB(0x0042748b);
    /* 0042748b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0042748e: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 00427491: cmp dword ptr [eax + edx*4 + 0xb0], 4 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0xb0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00427499: jne 0x4274c8 */ if (!fZ) goto L_004274c8;
L_0042749b:; BB(0x0042749b);
    /* 0042749b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042749d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0042749f: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x4274a4u); f_0064c8a0();
    /* 004274a4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004274a7: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 004274aa: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 004274ad: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004274b0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004274b1: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004274b4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004274b5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004274b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004274b9: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4274beu); f_005dcb00();
    /* 004274be: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004274c1: mov ecx, eax */ r_ecx = r_eax;
    /* 004274c3: call 0x5d5fb0 */ r_esp -= 4; W32(r_esp, 0x4274c8u); f_005d5fb0();
L_004274c8:; BB(0x004274c8);
    /* 004274c8: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 004274cb: add ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004274ce: mov byte ptr [ecx + 0xd4], 0 */ W8((u32)(r_ecx+0xd4u), 0x0u);
    /* 004274d5: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004274d9: je 0x427530 */ if (fZ) goto L_00427530;
L_004274db:; BB(0x004274db);
    /* 004274db: mov dword ptr [ebp - 0x18], 0x3106ca */ W32((u32)(r_ebp+0xffffffe8u), 0x3106cau);
    /* 004274e2: mov dword ptr [ebp - 0x14], 0x3106cb */ W32((u32)(r_ebp+0xffffffecu), 0x3106cbu);
    /* 004274e9: mov dword ptr [ebp - 0x10], 0x3106cc */ W32((u32)(r_ebp+0xfffffff0u), 0x3106ccu);
    /* 004274f0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004274f2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004274f3: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 004274f9: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004274fc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004274fd: fld1  */ FPUSH(1.0);
    /* 004274ff: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00427502: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00427504: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00427506: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00427508: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042750a: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0042750c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042750e: call 0x62fc30 */ r_esp -= 4; W32(r_esp, 0x427513u); f_0062fc30();
    /* 00427513: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00427516: mov edx, dword ptr [ebp + eax*4 - 0x18] */ r_edx = R32((u32)(r_ebp+r_eax*4+0xffffffe8u));
    /* 0042751a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0042751b: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 00427520: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00427522: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00427528: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 0042752e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x427530u); call_ind(t); }
L_00427530:; BB(0x00427530);
    /* 00427530: mov esp, ebp */ r_esp = r_ebp;
    /* 00427532: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00427533: ret 4 */ FN_RET(0x00427300); r_esp += 8; return;
}

void f_00427540(void) /* sub_427540 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00427540);
    /* 00427540: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00427541: mov ebp, esp */ r_ebp = r_esp;
    /* 00427543: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00427544: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00427547: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 0042754c: mov dword ptr [eax + 0x4ee4], 0x30d40 */ W32((u32)(r_eax+0x4ee4u), 0x30d40u);
    /* 00427556: mov esp, ebp */ r_esp = r_ebp;
    /* 00427558: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00427559: ret 4 */ FN_RET(0x00427540); r_esp += 8; return;
}

void f_00427560(void) /* sub_427560 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00427560);
    /* 00427560: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00427561: mov ebp, esp */ r_ebp = r_esp;
    /* 00427563: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00427564: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00427567: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 0042756c: mov eax, dword ptr [eax + 0x4ee4] */ r_eax = R32((u32)(r_eax+0x4ee4u));
    /* 00427572: mov esp, ebp */ r_esp = r_ebp;
    /* 00427574: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00427575: ret  */ FN_RET(0x00427560); r_esp += 4; return;
}

void f_004275a0(void) /* sub_4275A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004275a0);
    /* 004275a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004275a1: mov ebp, esp */ r_ebp = r_esp;
    /* 004275a3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004275a6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004275a9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004275ab: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004275ae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004275af: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004275b2: call 0x426370 */ r_esp -= 4; W32(r_esp, 0x4275b7u); f_00426370();
    /* 004275b7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004275b8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004275bb: imul ecx, ecx, 0xa */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xau; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004275be: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004275c1: lea eax, [edx + ecx + 0x6c] */ r_eax = (u32)(r_edx+r_ecx+0x6cu);
    /* 004275c5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004275c6: call 0x462ba0 */ r_esp -= 4; W32(r_esp, 0x4275cbu); f_00462ba0();
    /* 004275cb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004275ce: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004275d1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004275d4: add ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004275d7: movzx edx, byte ptr [ecx + 0xd8] */ r_edx = (u32)R8((u32)(r_ecx+0xd8u));
    /* 004275de: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004275e0: je 0x4275f2 */ if (fZ) goto L_004275f2;
L_004275e2:; BB(0x004275e2);
    /* 004275e2: cmp dword ptr [ebp - 4], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004275e6: jl 0x4275f2 */ if ((fS!=fO)) goto L_004275f2;
L_004275e8:; BB(0x004275e8);
    /* 004275e8: cmp dword ptr [ebp - 4], 9 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004275ec: jg 0x4275f2 */ if ((!fZ&&fS==fO)) goto L_004275f2;
L_004275ee:; BB(0x004275ee);
    /* 004275ee: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 004275f0: jmp 0x4275f4 */ goto L_004275f4;
L_004275f2:; BB(0x004275f2);
    /* 004275f2: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_004275f4:; BB(0x004275f4);
    /* 004275f4: mov esp, ebp */ r_esp = r_ebp;
    /* 004275f6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004275f7: ret 4 */ FN_RET(0x004275a0); r_esp += 8; return;
}

void f_00427600(void) /* sub_427600 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00427600);
    /* 00427600: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00427601: mov ebp, esp */ r_ebp = r_esp;
    /* 00427603: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00427606: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00427609: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042760b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0042760e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042760f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00427612: call 0x426370 */ r_esp -= 4; W32(r_esp, 0x427617u); f_00426370();
    /* 00427617: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00427618: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042761b: imul ecx, ecx, 0xa */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xau; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0042761e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00427621: lea eax, [edx + ecx + 0x6c] */ r_eax = (u32)(r_edx+r_ecx+0x6cu);
    /* 00427625: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00427626: call 0x462ba0 */ r_esp -= 4; W32(r_esp, 0x42762bu); f_00462ba0();
    /* 0042762b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042762e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00427631: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00427634: add ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00427637: movzx edx, byte ptr [ecx + 0xd8] */ r_edx = (u32)R8((u32)(r_ecx+0xd8u));
    /* 0042763e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00427640: je 0x427651 */ if (fZ) goto L_00427651;
L_00427642:; BB(0x00427642);
    /* 00427642: cmp dword ptr [ebp - 4], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00427646: jne 0x427651 */ if (!fZ) goto L_00427651;
L_00427648:; BB(0x00427648);
    /* 00427648: mov dword ptr [ebp - 0xc], 1 */ W32((u32)(r_ebp+0xfffffff4u), 0x1u);
    /* 0042764f: jmp 0x427658 */ goto L_00427658;
L_00427651:; BB(0x00427651);
    /* 00427651: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
L_00427658:; BB(0x00427658);
    /* 00427658: mov al, byte ptr [ebp - 0xc] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff4u))) & 0xffu);
    /* 0042765b: mov esp, ebp */ r_esp = r_ebp;
    /* 0042765d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042765e: ret 4 */ FN_RET(0x00427600); r_esp += 8; return;
}

void f_00427670(void) /* sub_427670 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00427670);
    /* 00427670: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00427671: mov ebp, esp */ r_ebp = r_esp;
    /* 00427673: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00427676: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00427679: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042767b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0042767e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042767f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00427682: call 0x426370 */ r_esp -= 4; W32(r_esp, 0x427687u); f_00426370();
    /* 00427687: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00427688: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042768b: imul ecx, ecx, 0xa */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xau; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0042768e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00427691: lea eax, [edx + ecx + 0x6c] */ r_eax = (u32)(r_edx+r_ecx+0x6cu);
    /* 00427695: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00427696: call 0x462ba0 */ r_esp -= 4; W32(r_esp, 0x42769bu); f_00462ba0();
    /* 0042769b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042769e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004276a1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004276a4: add ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004276a7: movzx edx, byte ptr [ecx + 0xdc] */ r_edx = (u32)R8((u32)(r_ecx+0xdcu));
    /* 004276ae: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004276b0: jne 0x4276d4 */ if (!fZ) goto L_004276d4;
L_004276b2:; BB(0x004276b2);
    /* 004276b2: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004276b5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004276b6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004276b9: call 0x4272e0 */ r_esp -= 4; W32(r_esp, 0x4276beu); f_004272e0();
    /* 004276be: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004276c1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004276c3: je 0x4276cb */ if (fZ) goto L_004276cb;
L_004276c5:; BB(0x004276c5);
    /* 004276c5: cmp dword ptr [ebp - 4], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004276c9: je 0x4276d4 */ if (fZ) goto L_004276d4;
L_004276cb:; BB(0x004276cb);
    /* 004276cb: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 004276d2: jmp 0x4276db */ goto L_004276db;
L_004276d4:; BB(0x004276d4);
    /* 004276d4: mov dword ptr [ebp - 0xc], 1 */ W32((u32)(r_ebp+0xfffffff4u), 0x1u);
L_004276db:; BB(0x004276db);
    /* 004276db: mov al, byte ptr [ebp - 0xc] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff4u))) & 0xffu);
    /* 004276de: mov esp, ebp */ r_esp = r_ebp;
    /* 004276e0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004276e1: ret 4 */ FN_RET(0x00427670); r_esp += 8; return;
}

void f_00427af0(void) /* sub_427AF0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00427af0);
    /* 00427af0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00427af1: mov ebp, esp */ r_ebp = r_esp;
    /* 00427af3: sub esp, 0x84 */ {  u32 a = r_esp; u32 b = 0x84u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00427af9: mov dword ptr [ebp - 0x7c], ecx */ W32((u32)(r_ebp+0xffffff84u), r_ecx);
    /* 00427afc: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 00427b03: mov dword ptr [ebp - 0x40], 1 */ W32((u32)(r_ebp+0xffffffc0u), 0x1u);
    /* 00427b0a: mov dword ptr [ebp - 0x3c], 1 */ W32((u32)(r_ebp+0xffffffc4u), 0x1u);
    /* 00427b11: mov dword ptr [ebp - 0x38], 2 */ W32((u32)(r_ebp+0xffffffc8u), 0x2u);
    /* 00427b18: mov dword ptr [ebp - 0x34], 3 */ W32((u32)(r_ebp+0xffffffccu), 0x3u);
    /* 00427b1f: mov dword ptr [ebp - 0x30], 4 */ W32((u32)(r_ebp+0xffffffd0u), 0x4u);
    /* 00427b26: mov dword ptr [ebp - 0x2c], 5 */ W32((u32)(r_ebp+0xffffffd4u), 0x5u);
    /* 00427b2d: mov dword ptr [ebp - 0x28], 7 */ W32((u32)(r_ebp+0xffffffd8u), 0x7u);
    /* 00427b34: mov dword ptr [ebp - 0x24], 0x14 */ W32((u32)(r_ebp+0xffffffdcu), 0x14u);
    /* 00427b3b: mov dword ptr [ebp - 0x20], 0x32 */ W32((u32)(r_ebp+0xffffffe0u), 0x32u);
    /* 00427b42: mov dword ptr [ebp - 0x1c], 0x64 */ W32((u32)(r_ebp+0xffffffe4u), 0x64u);
    /* 00427b49: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00427b4c: shl eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00427b4f: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 00427b52: mov edx, dword ptr [ecx + eax + 0x48] */ r_edx = R32((u32)(r_ecx+r_eax+0x48u));
    /* 00427b56: mov eax, dword ptr [ecx + eax + 0x4c] */ r_eax = R32((u32)(r_ecx+r_eax+0x4cu));
    /* 00427b5a: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00427b5d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00427b60: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00427b62: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00427b64: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x427b69u); f_0064c8a0();
    /* 00427b69: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00427b6c: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 00427b6f: mov dword ptr [ebp - 0x54], edx */ W32((u32)(r_ebp+0xffffffacu), r_edx);
    /* 00427b72: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00427b75: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00427b78: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 00427b7b: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00427b7e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00427b80: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00427b82: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x427b87u); f_0064c8a0();
    /* 00427b87: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00427b8a: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 00427b8d: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
    /* 00427b90: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 00427b93: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00427b96: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00427b99: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00427b9c: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00427b9f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00427ba0: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x427ba5u); f_005dcb00();
    /* 00427ba5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00427ba8: mov ecx, eax */ r_ecx = r_eax;
    /* 00427baa: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x427bafu); f_005d5a50();
    /* 00427baf: cmp eax, 0x3b9aca00 */ {  u32 a = r_eax; u32 b = 0x3b9aca00u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00427bb4: jl 0x427bbb */ if ((fS!=fO)) goto L_00427bbb;
L_00427bb6:; BB(0x00427bb6);
    /* 00427bb6: jmp 0x427e36 */ goto L_00427e36;
L_00427bbb:; BB(0x00427bbb);
    /* 00427bbb: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00427bbf: jne 0x427ca1 */ if (!fZ) goto L_00427ca1;
L_00427bc5:; BB(0x00427bc5);
    /* 00427bc5: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 00427bc8: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x427bcdu); f_005f5400();
    /* 00427bcd: mov ecx, dword ptr [0x790360] */ r_ecx = R32((u32)(0x790360u));
    /* 00427bd3: mov edx, dword ptr [ecx + eax*4 + 0x18] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x18u));
    /* 00427bd7: mov dword ptr [ebp - 0x80], edx */ W32((u32)(r_ebp+0xffffff80u), r_edx);
    /* 00427bda: mov eax, dword ptr [ebp - 0x80] */ r_eax = R32((u32)(r_ebp+0xffffff80u));
    /* 00427bdd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00427bdf: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 00427be2: mov eax, dword ptr [edx + 0xc4] */ r_eax = R32((u32)(r_edx+0xc4u));
    /* 00427be8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x427beau); call_ind(t); }
    /* 00427bea: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00427bed: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00427bee: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x427bf3u); f_005dcb00();
    /* 00427bf3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00427bf6: cmp dword ptr [eax + 0x4a8], 0 */ {  u32 a = R32((u32)(r_eax+0x4a8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00427bfd: jle 0x427c15 */ if ((fZ||fS!=fO)) goto L_00427c15;
L_00427bff:; BB(0x00427bff);
    /* 00427bff: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00427c02: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00427c03: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x427c08u); f_005dcb00();
    /* 00427c08: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00427c0b: mov dword ptr [eax + 0x4a8], 0 */ W32((u32)(r_eax+0x4a8u), 0x0u);
L_00427c15:; BB(0x00427c15);
    /* 00427c15: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00427c18: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00427c19: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x427c1eu); f_005dcb00();
    /* 00427c1e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00427c21: add eax, 0x4a8 */ {  u32 a = r_eax; u32 b = 0x4a8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00427c26: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 00427c2c: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 00427c32: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00427c34: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00427c37: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 00427c3d: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 00427c3f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00427c42: imul ecx, ecx, -1 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xffffffffu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00427c45: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00427c48: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00427c4b: imul edx, edx, -1 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xffffffffu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00427c4e: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00427c51: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00427c54: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00427c55: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00427c58: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00427c59: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00427c5c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00427c5d: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x427c62u); f_005dcb00();
    /* 00427c62: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00427c65: mov ecx, eax */ r_ecx = r_eax;
    /* 00427c67: call 0x5d5fb0 */ r_esp -= 4; W32(r_esp, 0x427c6cu); f_005d5fb0();
    /* 00427c6c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00427c6e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00427c70: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x427c75u); f_0064c8a0();
    /* 00427c75: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00427c78: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 00427c7b: mov dword ptr [ebp - 0x64], edx */ W32((u32)(r_ebp+0xffffff9cu), r_edx);
    /* 00427c7e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00427c80: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00427c83: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00427c84: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 00427c87: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00427c88: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 00427c8b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00427c8c: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 00427c8f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00427c91: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 00427c94: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 00427c9a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x427c9cu); call_ind(t); }
    /* 00427c9c: jmp 0x427e36 */ goto L_00427e36;
L_00427ca1:; BB(0x00427ca1);
    /* 00427ca1: cmp dword ptr [ebp + 0xc], 1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00427ca5: jne 0x427d09 */ if (!fZ) goto L_00427d09;
L_00427ca7:; BB(0x00427ca7);
    /* 00427ca7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00427caa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00427cab: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x427cb0u); f_005dcb00();
    /* 00427cb0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00427cb3: cmp dword ptr [eax + 0x4a8], 0 */ {  u32 a = R32((u32)(r_eax+0x4a8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00427cba: jge 0x427cf6 */ if ((fS==fO)) goto L_00427cf6;
L_00427cbc:; BB(0x00427cbc);
    /* 00427cbc: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00427cbf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00427cc0: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x427cc5u); f_005dcb00();
    /* 00427cc5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00427cc8: cmp dword ptr [eax + 0x4a8], -3 */ {  u32 a = R32((u32)(r_eax+0x4a8u)); u32 b = 0xfffffffdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00427ccf: jge 0x427ce0 */ if ((fS==fO)) goto L_00427ce0;
L_00427cd1:; BB(0x00427cd1);
    /* 00427cd1: mov eax, dword ptr [0x790358] */ r_eax = R32((u32)(0x790358u));
    /* 00427cd6: add eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00427cd9: mov byte ptr [eax + 0xd0], 1 */ W8((u32)(r_eax+0xd0u), 0x1u);
L_00427ce0:; BB(0x00427ce0);
    /* 00427ce0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00427ce3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00427ce4: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x427ce9u); f_005dcb00();
    /* 00427ce9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00427cec: mov dword ptr [eax + 0x4a8], 0 */ W32((u32)(r_eax+0x4a8u), 0x0u);
L_00427cf6:; BB(0x00427cf6);
    /* 00427cf6: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00427cf9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00427cfa: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x427cffu); f_005dcb00();
    /* 00427cff: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00427d02: mov ecx, eax */ r_ecx = r_eax;
    /* 00427d04: call 0x5d7540 */ r_esp -= 4; W32(r_esp, 0x427d09u); f_005d7540();
L_00427d09:; BB(0x00427d09);
    /* 00427d09: cmp dword ptr [ebp + 0xc], 1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00427d0d: jne 0x427d77 */ if (!fZ) goto L_00427d77;
L_00427d0f:; BB(0x00427d0f);
    /* 00427d0f: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 00427d12: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x427d17u); f_005f5400();
    /* 00427d17: and eax, 0x80000001 */ {  u32 a = r_eax; u32 b = 0x80000001u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fS = ((r >> 31) & 1); }
    /* 00427d1c: jns 0x427d23 */ if (!fS) goto L_00427d23;
L_00427d1e:; BB(0x00427d1e);
    /* 00427d1e: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00427d1f: or eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00427d22: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_00427d23:; BB(0x00427d23);
    /* 00427d23: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00427d26: jne 0x427d6b */ if (!fZ) goto L_00427d6b;
L_00427d28:; BB(0x00427d28);
    /* 00427d28: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00427d2a: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00427d2c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00427d2f: imul eax, eax, 0xa */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xau; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00427d32: mov ecx, dword ptr [0x790358] */ r_ecx = R32((u32)(0x790358u));
    /* 00427d38: lea edx, [ecx + eax + 0x6c] */ r_edx = (u32)(r_ecx+r_eax+0x6cu);
    /* 00427d3c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00427d3d: call 0x462ba0 */ r_esp -= 4; W32(r_esp, 0x427d42u); f_00462ba0();
    /* 00427d42: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00427d45: fild dword ptr [ebp + eax*4 - 0x44] */ FPUSH((long double)(i32)R32((u32)(r_ebp+r_eax*4+0xffffffbcu)));
    /* 00427d49: fstp qword ptr [ebp - 0x50] */ W_F64((u32)(r_ebp+0xffffffb0u), ST(0)); FPOP();
    /* 00427d4c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00427d4f: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00427d52: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00427d55: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00427d58: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00427d5b: fld qword ptr [ebp - 0x50] */ FPUSH(R_F64((u32)(r_ebp+0xffffffb0u)));
    /* 00427d5e: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 00427d61: lea ecx, [ebp - 0x18] */ r_ecx = (u32)(r_ebp+0xffffffe8u);
    /* 00427d64: call 0x64c560 */ r_esp -= 4; W32(r_esp, 0x427d69u); f_0064c560();
    /* 00427d69: jmp 0x427d77 */ goto L_00427d77;
L_00427d6b:; BB(0x00427d6b);
    /* 00427d6b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00427d6e: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00427d71: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00427d74: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_00427d77:; BB(0x00427d77);
    /* 00427d77: cmp dword ptr [ebp - 0x18], 0x3b9aca00 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x3b9aca00u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00427d7e: jle 0x427d8e */ if ((fZ||fS!=fO)) goto L_00427d8e;
L_00427d80:; BB(0x00427d80);
    /* 00427d80: mov dword ptr [ebp - 0x18], 0x3b9aca00 */ W32((u32)(r_ebp+0xffffffe8u), 0x3b9aca00u);
    /* 00427d87: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_00427d8e:; BB(0x00427d8e);
    /* 00427d8e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00427d91: shl ecx, 5 */ { u32 c = (5u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00427d94: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 00427d97: mov eax, dword ptr [edx + ecx + 0x4c] */ r_eax = R32((u32)(r_edx+r_ecx+0x4cu));
    /* 00427d9b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00427d9c: mov ecx, dword ptr [edx + ecx + 0x48] */ r_ecx = R32((u32)(r_edx+r_ecx+0x48u));
    /* 00427da0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00427da1: lea edx, [ebp - 0x70] */ r_edx = (u32)(r_ebp+0xffffff90u);
    /* 00427da4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00427da5: lea ecx, [ebp - 0x18] */ r_ecx = (u32)(r_ebp+0xffffffe8u);
    /* 00427da8: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x427dadu); f_0064c5c0();
    /* 00427dad: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00427daf: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00427db2: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00427db5: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00427db8: cmp dword ptr [ebp - 0x10], 0x3b9aca00 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3b9aca00u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00427dbf: jl 0x427de2 */ if ((fS!=fO)) goto L_00427de2;
L_00427dc1:; BB(0x00427dc1);
    /* 00427dc1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00427dc3: push 0x3b9aca00 */ { u32 v = 0x3b9aca00u; r_esp -= 4; W32(r_esp, v); }
    /* 00427dc8: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x427dcdu); f_0064c8a0();
    /* 00427dcd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00427dd0: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 00427dd3: mov dword ptr [ebp - 0x74], edx */ W32((u32)(r_ebp+0xffffff8cu), r_edx);
    /* 00427dd6: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 00427dd9: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00427ddc: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 00427ddf: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_00427de2:; BB(0x00427de2);
    /* 00427de2: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00427de5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00427de6: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00427de9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00427dea: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00427ded: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00427dee: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x427df3u); f_005dcb00();
    /* 00427df3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00427df6: mov ecx, eax */ r_ecx = r_eax;
    /* 00427df8: call 0x5d5cf0 */ r_esp -= 4; W32(r_esp, 0x427dfdu); f_005d5cf0();
    /* 00427dfd: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00427e00: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00427e01: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00427e04: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00427e05: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00427e08: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00427e09: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x427e0eu); f_005dcb00();
    /* 00427e0e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00427e11: mov ecx, eax */ r_ecx = r_eax;
    /* 00427e13: call 0x5d5fb0 */ r_esp -= 4; W32(r_esp, 0x427e18u); f_005d5fb0();
    /* 00427e18: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00427e1a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00427e1d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00427e1e: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00427e21: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00427e22: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00427e25: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00427e26: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 00427e29: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00427e2b: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 00427e2e: mov edx, dword ptr [eax + 0xb8] */ r_edx = R32((u32)(r_eax+0xb8u));
    /* 00427e34: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x427e36u); call_ind(t); }
L_00427e36:; BB(0x00427e36);
    /* 00427e36: mov esp, ebp */ r_esp = r_ebp;
    /* 00427e38: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00427e39: ret 8 */ FN_RET(0x00427af0); r_esp += 12; return;
}

