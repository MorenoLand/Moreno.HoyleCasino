#include "protos.h"

void f_00449300(void) /* sub_449300 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00449300);
    /* 00449300: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00449301: mov ebp, esp */ r_ebp = r_esp;
    /* 00449303: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00449304: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00449307: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00449309: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044930c: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x449311u); f_005fb2b0();
    /* 00449311: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00449313: jne 0x449358 */ if (!fZ) goto L_00449358;
L_00449315:; BB(0x00449315);
    /* 00449315: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00449317: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0044931c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044931e: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00449320: movzx eax, byte ptr [ebp + 8] */ r_eax = (u32)R8((u32)(r_ebp+0x8u));
    /* 00449324: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 00449326: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 00449328: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044932b: imul eax, eax, 0x23 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x23u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0044932e: add eax, 0x28 */ {  u32 a = r_eax; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00449331: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00449332: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 00449334: push 0x1399 */ { u32 v = 0x1399u; r_esp -= 4; W32(r_esp, v); }
    /* 00449339: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044933b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044933d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00449340: call 0x5f9ce0 */ r_esp -= 4; W32(r_esp, 0x449345u); f_005f9ce0();
    /* 00449345: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 00449347: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00449349: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044934c: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x449351u); f_005fb2b0();
    /* 00449351: mov ecx, eax */ r_ecx = r_eax;
    /* 00449353: call 0x5eb5d0 */ r_esp -= 4; W32(r_esp, 0x449358u); f_005eb5d0();
L_00449358:; BB(0x00449358);
    /* 00449358: mov esp, ebp */ r_esp = r_ebp;
    /* 0044935a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044935b: ret 4 */ FN_RET(0x00449300); r_esp += 8; return;
}

void f_00449710(void) /* sub_449710 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00449710);
    /* 00449710: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00449711: mov ebp, esp */ r_ebp = r_esp;
    /* 00449713: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00449714: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00449717: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044971a: mov byte ptr [eax + 4], 0 */ W8((u32)(r_eax+0x4u), 0x0u);
    /* 0044971e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00449721: mov byte ptr [ecx + 5], 0 */ W8((u32)(r_ecx+0x5u), 0x0u);
    /* 00449725: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00449728: mov byte ptr [edx + 6], 0 */ W8((u32)(r_edx+0x6u), 0x0u);
    /* 0044972c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044972f: mov byte ptr [eax + 7], 0 */ W8((u32)(r_eax+0x7u), 0x0u);
    /* 00449733: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00449736: mov byte ptr [ecx + 9], 0 */ W8((u32)(r_ecx+0x9u), 0x0u);
    /* 0044973a: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044973e: jne 0x44976d */ if (!fZ) goto L_0044976d;
L_00449740:; BB(0x00449740);
    /* 00449740: mov ecx, dword ptr [0x790710] */ r_ecx = R32((u32)(0x790710u));
    /* 00449746: call 0x44ca20 */ r_esp -= 4; W32(r_esp, 0x44974bu); f_0044ca20();
    /* 0044974b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0044974e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044974f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00449751: mov eax, dword ptr [0x79070c] */ r_eax = R32((u32)(0x79070cu));
    /* 00449756: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00449759: mov edx, dword ptr [0x79070c] */ r_edx = R32((u32)(0x79070cu));
    /* 0044975f: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00449762: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00449764: mov ecx, eax */ r_ecx = r_eax;
    /* 00449766: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00449769: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x44976bu); call_ind(t); }
    /* 0044976b: jmp 0x44978f */ goto L_0044978f;
L_0044976d:; BB(0x0044976d);
    /* 0044976d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00449770: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00449771: push 0x1f4 */ { u32 v = 0x1f4u; r_esp -= 4; W32(r_esp, v); }
    /* 00449776: mov edx, dword ptr [0x79070c] */ r_edx = R32((u32)(0x79070cu));
    /* 0044977c: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0044977f: mov ecx, dword ptr [0x79070c] */ r_ecx = R32((u32)(0x79070cu));
    /* 00449785: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00449788: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0044978a: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0044978d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x44978fu); call_ind(t); }
L_0044978f:; BB(0x0044978f);
    /* 0044978f: mov esp, ebp */ r_esp = r_ebp;
    /* 00449791: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00449792: ret 4 */ FN_RET(0x00449710); r_esp += 8; return;
}

void f_004497a0(void) /* sub_4497A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004497a0);
    /* 004497a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004497a1: mov ebp, esp */ r_ebp = r_esp;
    /* 004497a3: sub esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004497a6: mov dword ptr [ebp - 0x54], ecx */ W32((u32)(r_ebp+0xffffffacu), r_ecx);
    /* 004497a9: mov ecx, dword ptr [0x790718] */ r_ecx = R32((u32)(0x790718u));
    /* 004497af: call 0x4474b0 */ r_esp -= 4; W32(r_esp, 0x4497b4u); f_004474b0();
    /* 004497b4: mov eax, dword ptr [0x790710] */ r_eax = R32((u32)(0x790710u));
    /* 004497b9: mov ecx, dword ptr [eax + 0xf4] */ r_ecx = R32((u32)(r_eax+0xf4u));
    /* 004497bf: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004497c2: cmp dword ptr [ebp - 8], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004497c6: je 0x4497d5 */ if (fZ) goto L_004497d5;
L_004497c8:; BB(0x004497c8);
    /* 004497c8: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 004497cb: call 0x44a170 */ r_esp -= 4; W32(r_esp, 0x4497d0u); f_0044a170();
    /* 004497d0: jmp 0x449c23 */ goto L_00449c23;
L_004497d5:; BB(0x004497d5);
    /* 004497d5: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 004497d8: movzx eax, byte ptr [edx + 4] */ r_eax = (u32)R8((u32)(r_edx+0x4u));
    /* 004497dc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004497de: jne 0x44982c */ if (!fZ) goto L_0044982c;
L_004497e0:; BB(0x004497e0);
    /* 004497e0: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 004497e3: mov byte ptr [ecx + 4], 1 */ W8((u32)(r_ecx+0x4u), 0x1u);
    /* 004497e7: mov edx, dword ptr [0x790710] */ r_edx = R32((u32)(0x790710u));
    /* 004497ed: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 004497f0: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004497f3: mov dword ptr [eax + 0xf4], 5 */ W32((u32)(r_eax+0xf4u), 0x5u);
    /* 004497fd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00449800: mov dword ptr [ecx + 0xf8], 4 */ W32((u32)(r_ecx+0xf8u), 0x4u);
    /* 0044980a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044980c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0044980e: mov edx, dword ptr [0x79070c] */ r_edx = R32((u32)(0x79070cu));
    /* 00449814: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00449817: mov ecx, dword ptr [0x79070c] */ r_ecx = R32((u32)(0x79070cu));
    /* 0044981d: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00449820: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00449822: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00449825: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x449827u); call_ind(t); }
    /* 00449827: jmp 0x449c23 */ goto L_00449c23;
L_0044982c:; BB(0x0044982c);
    /* 0044982c: mov ecx, dword ptr [0x790710] */ r_ecx = R32((u32)(0x790710u));
    /* 00449832: call 0x44cee0 */ r_esp -= 4; W32(r_esp, 0x449837u); f_0044cee0();
    /* 00449837: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0044983a: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00449840: mov dl, byte ptr [ecx + 0x25] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x25u))) & 0xffu);
    /* 00449843: mov byte ptr [ebp - 0xd], dl */ W8((u32)(r_ebp+0xfffffff3u), (u8)r_edx);
    /* 00449846: movzx eax, byte ptr [ebp - 0xd] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffff3u));
    /* 0044984a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044984c: je 0x4498c8 */ if (fZ) goto L_004498c8;
L_0044984e:; BB(0x0044984e);
    /* 0044984e: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00449852: je 0x4498c8 */ if (fZ) goto L_004498c8;
L_00449854:; BB(0x00449854);
    /* 00449854: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00449857: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00449858: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x44985du); f_005dcb00();
    /* 0044985d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00449860: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00449863: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00449866: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x44986bu); f_0063aac0();
    /* 0044986b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0044986d: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00449870: cmp dword ptr [ebp - 0x14], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00449874: je 0x449892 */ if (fZ) goto L_00449892;
L_00449876:; BB(0x00449876);
    /* 00449876: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00449879: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x44987eu); f_0063aac0();
    /* 0044987e: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00449880: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00449883: cmp dword ptr [ebp - 0x18], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00449887: je 0x449892 */ if (fZ) goto L_00449892;
L_00449889:; BB(0x00449889);
    /* 00449889: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
    /* 00449890: jmp 0x449899 */ goto L_00449899;
L_00449892:; BB(0x00449892);
    /* 00449892: mov dword ptr [ebp - 0x58], 1 */ W32((u32)(r_ebp+0xffffffa8u), 0x1u);
L_00449899:; BB(0x00449899);
    /* 00449899: movzx ecx, byte ptr [ebp - 0x58] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffa8u));
    /* 0044989d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044989f: je 0x4498c8 */ if (fZ) goto L_004498c8;
L_004498a1:; BB(0x004498a1);
    /* 004498a1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004498a4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004498a5: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4498aau); f_005dcb00();
    /* 004498aa: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004498ad: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004498b0: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004498b3: mov byte ptr [eax + 0x4a1], 1 */ W8((u32)(r_eax+0x4a1u), 0x1u);
    /* 004498ba: mov ecx, dword ptr [0x790710] */ r_ecx = R32((u32)(0x790710u));
    /* 004498c0: call 0x44cee0 */ r_esp -= 4; W32(r_esp, 0x4498c5u); f_0044cee0();
    /* 004498c5: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_004498c8:; BB(0x004498c8);
    /* 004498c8: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004498cc: je 0x449937 */ if (fZ) goto L_00449937;
L_004498ce:; BB(0x004498ce);
    /* 004498ce: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004498d1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004498d2: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4498d7u); f_005dcb00();
    /* 004498d7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004498da: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 004498dd: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004498e0: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x4498e5u); f_0063aac0();
    /* 004498e5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004498e7: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 004498ea: cmp dword ptr [ebp - 0x24], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004498ee: je 0x44990c */ if (fZ) goto L_0044990c;
L_004498f0:; BB(0x004498f0);
    /* 004498f0: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004498f3: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x4498f8u); f_0063aac0();
    /* 004498f8: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 004498fa: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 004498fd: cmp dword ptr [ebp - 0x28], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00449901: je 0x44990c */ if (fZ) goto L_0044990c;
L_00449903:; BB(0x00449903);
    /* 00449903: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
    /* 0044990a: jmp 0x449913 */ goto L_00449913;
L_0044990c:; BB(0x0044990c);
    /* 0044990c: mov dword ptr [ebp - 0x5c], 1 */ W32((u32)(r_ebp+0xffffffa4u), 0x1u);
L_00449913:; BB(0x00449913);
    /* 00449913: mov cl, byte ptr [ebp - 0x5c] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffa4u))) & 0xffu);
    /* 00449916: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00449917: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044991a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044991b: mov ecx, dword ptr [0x790710] */ r_ecx = R32((u32)(0x790710u));
    /* 00449921: call 0x44ccf0 */ r_esp -= 4; W32(r_esp, 0x449926u); f_0044ccf0();
    /* 00449926: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00449929: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044992a: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0044992d: call 0x449c30 */ r_esp -= 4; W32(r_esp, 0x449932u); f_00449c30();
    /* 00449932: jmp 0x449c23 */ goto L_00449c23;
L_00449937:; BB(0x00449937);
    /* 00449937: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0044993a: movzx edx, byte ptr [ecx + 9] */ r_edx = (u32)R8((u32)(r_ecx+0x9u));
    /* 0044993e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00449940: jne 0x449954 */ if (!fZ) goto L_00449954;
L_00449942:; BB(0x00449942);
    /* 00449942: mov ecx, dword ptr [0x790710] */ r_ecx = R32((u32)(0x790710u));
    /* 00449948: call 0x44d120 */ r_esp -= 4; W32(r_esp, 0x44994du); f_0044d120();
    /* 0044994d: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 00449950: mov byte ptr [eax + 9], 1 */ W8((u32)(r_eax+0x9u), 0x1u);
L_00449954:; BB(0x00449954);
    /* 00449954: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 00449957: movzx edx, byte ptr [ecx + 5] */ r_edx = (u32)R8((u32)(r_ecx+0x5u));
    /* 0044995b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044995d: jne 0x4499cc */ if (!fZ) goto L_004499cc;
L_0044995f:; BB(0x0044995f);
    /* 0044995f: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 00449962: mov byte ptr [eax + 5], 1 */ W8((u32)(r_eax+0x5u), 0x1u);
    /* 00449966: mov ecx, dword ptr [0x790710] */ r_ecx = R32((u32)(0x790710u));
    /* 0044996c: call 0x44d210 */ r_esp -= 4; W32(r_esp, 0x449971u); f_0044d210();
    /* 00449971: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00449974: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00449976: jne 0x449987 */ if (!fZ) goto L_00449987;
L_00449978:; BB(0x00449978);
    /* 00449978: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044997a: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0044997d: call 0x449710 */ r_esp -= 4; W32(r_esp, 0x449982u); f_00449710();
    /* 00449982: jmp 0x449c23 */ goto L_00449c23;
L_00449987:; BB(0x00449987);
    /* 00449987: mov edx, dword ptr [0x790710] */ r_edx = R32((u32)(0x790710u));
    /* 0044998d: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 00449990: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00449993: mov dword ptr [eax + 0xf4], 6 */ W32((u32)(r_eax+0xf4u), 0x6u);
    /* 0044999d: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004499a0: mov dword ptr [ecx + 0xf8], 4 */ W32((u32)(r_ecx+0xf8u), 0x4u);
    /* 004499aa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004499ac: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004499ae: mov edx, dword ptr [0x79070c] */ r_edx = R32((u32)(0x79070cu));
    /* 004499b4: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004499b7: mov ecx, dword ptr [0x79070c] */ r_ecx = R32((u32)(0x79070cu));
    /* 004499bd: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 004499c0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004499c2: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 004499c5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4499c7u); call_ind(t); }
    /* 004499c7: jmp 0x449c23 */ goto L_00449c23;
L_004499cc:; BB(0x004499cc);
    /* 004499cc: mov ecx, dword ptr [0x790710] */ r_ecx = R32((u32)(0x790710u));
    /* 004499d2: call 0x44d2c0 */ r_esp -= 4; W32(r_esp, 0x4499d7u); f_0044d2c0();
    /* 004499d7: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004499da: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004499dc: je 0x449a05 */ if (fZ) goto L_00449a05;
L_004499de:; BB(0x004499de);
    /* 004499de: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 004499e4: call 0x5f2870 */ r_esp -= 4; W32(r_esp, 0x4499e9u); f_005f2870();
    /* 004499e9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004499eb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004499ed: mov ecx, dword ptr [0x790710] */ r_ecx = R32((u32)(0x790710u));
    /* 004499f3: call 0x44ccf0 */ r_esp -= 4; W32(r_esp, 0x4499f8u); f_0044ccf0();
    /* 004499f8: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 004499fb: call 0x449e80 */ r_esp -= 4; W32(r_esp, 0x449a00u); f_00449e80();
    /* 00449a00: jmp 0x449c23 */ goto L_00449c23;
L_00449a05:; BB(0x00449a05);
    /* 00449a05: mov ecx, dword ptr [0x790710] */ r_ecx = R32((u32)(0x790710u));
    /* 00449a0b: call 0x44d430 */ r_esp -= 4; W32(r_esp, 0x449a10u); f_0044d430();
    /* 00449a10: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00449a13: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00449a17: je 0x449a48 */ if (fZ) goto L_00449a48;
L_00449a19:; BB(0x00449a19);
    /* 00449a19: mov edx, dword ptr [0x790710] */ r_edx = R32((u32)(0x790710u));
    /* 00449a1f: mov byte ptr [edx + 0xd1], 0 */ W8((u32)(r_edx+0xd1u), 0x0u);
    /* 00449a26: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00449a28: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00449a2b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00449a2c: mov ecx, dword ptr [0x790710] */ r_ecx = R32((u32)(0x790710u));
    /* 00449a32: call 0x44ccf0 */ r_esp -= 4; W32(r_esp, 0x449a37u); f_0044ccf0();
    /* 00449a37: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00449a3a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00449a3b: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 00449a3e: call 0x449f10 */ r_esp -= 4; W32(r_esp, 0x449a43u); f_00449f10();
    /* 00449a43: jmp 0x449c23 */ goto L_00449c23;
L_00449a48:; BB(0x00449a48);
    /* 00449a48: mov ecx, dword ptr [0x790710] */ r_ecx = R32((u32)(0x790710u));
    /* 00449a4e: call 0x44d700 */ r_esp -= 4; W32(r_esp, 0x449a53u); f_0044d700();
    /* 00449a53: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00449a56: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00449a58: je 0x449aaa */ if (fZ) goto L_00449aaa;
L_00449a5a:; BB(0x00449a5a);
    /* 00449a5a: mov ecx, dword ptr [0x790710] */ r_ecx = R32((u32)(0x790710u));
    /* 00449a60: call 0x44d7e0 */ r_esp -= 4; W32(r_esp, 0x449a65u); f_0044d7e0();
    /* 00449a65: mov eax, dword ptr [0x790710] */ r_eax = R32((u32)(0x790710u));
    /* 00449a6a: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00449a6d: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00449a70: mov dword ptr [ecx + 0xf4], 3 */ W32((u32)(r_ecx+0xf4u), 0x3u);
    /* 00449a7a: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00449a7d: mov dword ptr [edx + 0xf8], 0xffffffff */ W32((u32)(r_edx+0xf8u), 0xffffffffu);
    /* 00449a87: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00449a89: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00449a8b: mov eax, dword ptr [0x79070c] */ r_eax = R32((u32)(0x79070cu));
    /* 00449a90: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00449a93: mov edx, dword ptr [0x79070c] */ r_edx = R32((u32)(0x79070cu));
    /* 00449a99: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00449a9c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00449a9e: mov ecx, eax */ r_ecx = r_eax;
    /* 00449aa0: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00449aa3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x449aa5u); call_ind(t); }
    /* 00449aa5: jmp 0x449c23 */ goto L_00449c23;
L_00449aaa:; BB(0x00449aaa);
    /* 00449aaa: mov ecx, dword ptr [0x790710] */ r_ecx = R32((u32)(0x790710u));
    /* 00449ab0: call 0x44dce0 */ r_esp -= 4; W32(r_esp, 0x449ab5u); f_0044dce0();
    /* 00449ab5: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00449ab8: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00449abc: je 0x449b80 */ if (fZ) goto L_00449b80;
L_00449ac2:; BB(0x00449ac2);
    /* 00449ac2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00449ac4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00449ac7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00449ac8: mov ecx, dword ptr [0x790710] */ r_ecx = R32((u32)(0x790710u));
    /* 00449ace: call 0x44ccf0 */ r_esp -= 4; W32(r_esp, 0x449ad3u); f_0044ccf0();
    /* 00449ad3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00449ad6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00449ad7: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 00449ada: call 0x44a110 */ r_esp -= 4; W32(r_esp, 0x449adfu); f_0044a110();
    /* 00449adf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00449ae2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00449ae3: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x449ae8u); f_005dcb00();
    /* 00449ae8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00449aeb: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00449aee: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00449af1: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x449af6u); f_0063aac0();
    /* 00449af6: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00449af8: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 00449afb: cmp dword ptr [ebp - 0x38], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00449aff: je 0x449b1d */ if (fZ) goto L_00449b1d;
L_00449b01:; BB(0x00449b01);
    /* 00449b01: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00449b04: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x449b09u); f_0063aac0();
    /* 00449b09: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00449b0b: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 00449b0e: cmp dword ptr [ebp - 0x3c], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00449b12: je 0x449b1d */ if (fZ) goto L_00449b1d;
L_00449b14:; BB(0x00449b14);
    /* 00449b14: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
    /* 00449b1b: jmp 0x449b24 */ goto L_00449b24;
L_00449b1d:; BB(0x00449b1d);
    /* 00449b1d: mov dword ptr [ebp - 0x60], 1 */ W32((u32)(r_ebp+0xffffffa0u), 0x1u);
L_00449b24:; BB(0x00449b24);
    /* 00449b24: movzx eax, byte ptr [ebp - 0x60] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffa0u));
    /* 00449b28: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00449b2a: je 0x449b35 */ if (fZ) goto L_00449b35;
L_00449b2c:; BB(0x00449b2c);
    /* 00449b2c: mov dword ptr [ebp - 0x48], 0xffffffff */ W32((u32)(r_ebp+0xffffffb8u), 0xffffffffu);
    /* 00449b33: jmp 0x449b3b */ goto L_00449b3b;
L_00449b35:; BB(0x00449b35);
    /* 00449b35: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00449b38: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
L_00449b3b:; BB(0x00449b3b);
    /* 00449b3b: mov edx, dword ptr [0x790710] */ r_edx = R32((u32)(0x790710u));
    /* 00449b41: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 00449b44: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00449b47: mov dword ptr [eax + 0xf4], 2 */ W32((u32)(r_eax+0xf4u), 0x2u);
    /* 00449b51: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00449b54: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00449b57: mov dword ptr [ecx + 0xf8], edx */ W32((u32)(r_ecx+0xf8u), r_edx);
    /* 00449b5d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00449b5f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00449b61: mov eax, dword ptr [0x79070c] */ r_eax = R32((u32)(0x79070cu));
    /* 00449b66: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00449b69: mov edx, dword ptr [0x79070c] */ r_edx = R32((u32)(0x79070cu));
    /* 00449b6f: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00449b72: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00449b74: mov ecx, eax */ r_ecx = r_eax;
    /* 00449b76: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00449b79: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x449b7bu); call_ind(t); }
    /* 00449b7b: jmp 0x449c23 */ goto L_00449c23;
L_00449b80:; BB(0x00449b80);
    /* 00449b80: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00449b82: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00449b84: mov ecx, dword ptr [0x790710] */ r_ecx = R32((u32)(0x790710u));
    /* 00449b8a: call 0x44ccf0 */ r_esp -= 4; W32(r_esp, 0x449b8fu); f_0044ccf0();
    /* 00449b8f: mov ecx, dword ptr [0x79070c] */ r_ecx = R32((u32)(0x79070cu));
    /* 00449b95: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x449b9au); f_005da7b0();
    /* 00449b9a: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00449b9d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00449b9f: je 0x449bf5 */ if (fZ) goto L_00449bf5;
L_00449ba1:; BB(0x00449ba1);
    /* 00449ba1: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 00449ba4: movzx eax, byte ptr [edx + 8] */ r_eax = (u32)R8((u32)(r_edx+0x8u));
    /* 00449ba8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00449baa: jne 0x449bf5 */ if (!fZ) goto L_00449bf5;
L_00449bac:; BB(0x00449bac);
    /* 00449bac: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 00449baf: mov byte ptr [ecx + 8], 1 */ W8((u32)(r_ecx+0x8u), 0x1u);
    /* 00449bb3: mov edx, dword ptr [0x790710] */ r_edx = R32((u32)(0x790710u));
    /* 00449bb9: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 00449bbc: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00449bbf: mov dword ptr [eax + 0xf4], 4 */ W32((u32)(r_eax+0xf4u), 0x4u);
    /* 00449bc9: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00449bcc: mov dword ptr [ecx + 0xf8], 0xffffffff */ W32((u32)(r_ecx+0xf8u), 0xffffffffu);
    /* 00449bd6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00449bd8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00449bda: mov edx, dword ptr [0x79070c] */ r_edx = R32((u32)(0x79070cu));
    /* 00449be0: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00449be3: mov ecx, dword ptr [0x79070c] */ r_ecx = R32((u32)(0x79070cu));
    /* 00449be9: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00449bec: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00449bee: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00449bf1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x449bf3u); call_ind(t); }
    /* 00449bf3: jmp 0x449c23 */ goto L_00449c23;
L_00449bf5:; BB(0x00449bf5);
    /* 00449bf5: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00449bfb: mov dl, byte ptr [ecx + 0x25] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x25u))) & 0xffu);
    /* 00449bfe: mov byte ptr [ebp - 0x4d], dl */ W8((u32)(r_ebp+0xffffffb3u), (u8)r_edx);
    /* 00449c01: movzx eax, byte ptr [ebp - 0x4d] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffb3u));
    /* 00449c05: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00449c07: je 0x449c18 */ if (fZ) goto L_00449c18;
L_00449c09:; BB(0x00449c09);
    /* 00449c09: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 00449c0e: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 00449c11: call 0x449710 */ r_esp -= 4; W32(r_esp, 0x449c16u); f_00449710();
    /* 00449c16: jmp 0x449c23 */ goto L_00449c23;
L_00449c18:; BB(0x00449c18);
    /* 00449c18: mov ecx, dword ptr [0x790718] */ r_ecx = R32((u32)(0x790718u));
    /* 00449c1e: call 0x447db0 */ r_esp -= 4; W32(r_esp, 0x449c23u); f_00447db0();
L_00449c23:; BB(0x00449c23);
    /* 00449c23: mov esp, ebp */ r_esp = r_ebp;
    /* 00449c25: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00449c26: ret  */ FN_RET(0x004497a0); r_esp += 4; return;
}

void f_00449c30(void) /* sub_449C30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00449c30);
    /* 00449c30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00449c31: mov ebp, esp */ r_ebp = r_esp;
    /* 00449c33: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00449c36: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00449c37: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 00449c3a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00449c3d: imul eax, eax, 3 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00449c40: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00449c43: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00449c46: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00449c47: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x449c4cu); f_005dcb00();
    /* 00449c4c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00449c4f: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00449c52: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00449c55: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x449c5au); f_0063aac0();
    /* 00449c5a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00449c5c: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00449c5f: cmp dword ptr [ebp - 0x18], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00449c63: je 0x449c81 */ if (fZ) goto L_00449c81;
L_00449c65:; BB(0x00449c65);
    /* 00449c65: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00449c68: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x449c6du); f_0063aac0();
    /* 00449c6d: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00449c6f: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00449c72: cmp dword ptr [ebp - 0x1c], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00449c76: je 0x449c81 */ if (fZ) goto L_00449c81;
L_00449c78:; BB(0x00449c78);
    /* 00449c78: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 00449c7f: jmp 0x449c88 */ goto L_00449c88;
L_00449c81:; BB(0x00449c81);
    /* 00449c81: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
L_00449c88:; BB(0x00449c88);
    /* 00449c88: movzx ecx, byte ptr [ebp - 0x30] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffd0u));
    /* 00449c8c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00449c8e: je 0x449d4e */ if (fZ) goto L_00449d4e;
L_00449c94:; BB(0x00449c94);
    /* 00449c94: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00449c96: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00449c9c: call 0x5df700 */ r_esp -= 4; W32(r_esp, 0x449ca1u); f_005df700();
    /* 00449ca1: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00449ca4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00449ca6: je 0x449cbc */ if (fZ) goto L_00449cbc;
L_00449ca8:; BB(0x00449ca8);
    /* 00449ca8: push 0x713cc8 */ { u32 v = 0x713cc8u; r_esp -= 4; W32(r_esp, v); }
    /* 00449cad: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 00449caf: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 00449cb5: call 0x57ab80 */ r_esp -= 4; W32(r_esp, 0x449cbau); f_0057ab80();
    /* 00449cba: jmp 0x449cc7 */ goto L_00449cc7;
L_00449cbc:; BB(0x00449cbc);
    /* 00449cbc: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 00449cc2: call 0x57ae30 */ r_esp -= 4; W32(r_esp, 0x449cc7u); f_0057ae30();
L_00449cc7:; BB(0x00449cc7);
    /* 00449cc7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00449cca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00449ccb: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x449cd0u); f_005dcb00();
    /* 00449cd0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00449cd3: mov ecx, eax */ r_ecx = r_eax;
    /* 00449cd5: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x449cdau); f_005d5a50();
    /* 00449cda: mov esi, eax */ r_esi = r_eax;
    /* 00449cdc: mov ecx, dword ptr [0x79070c] */ r_ecx = R32((u32)(0x79070cu));
    /* 00449ce2: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00449ce4: mov ecx, dword ptr [0x79070c] */ r_ecx = R32((u32)(0x79070cu));
    /* 00449cea: mov eax, dword ptr [edx + 0x2b0] */ r_eax = R32((u32)(r_edx+0x2b0u));
    /* 00449cf0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x449cf2u); call_ind(t); }
    /* 00449cf2: imul eax, eax, 3 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00449cf5: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00449cf7: jge 0x449d49 */ if ((fS==fO)) goto L_00449d49;
L_00449cf9:; BB(0x00449cf9);
    /* 00449cf9: mov ecx, dword ptr [0x79070c] */ r_ecx = R32((u32)(0x79070cu));
    /* 00449cff: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x449d04u); f_005da7b0();
    /* 00449d04: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00449d07: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00449d09: je 0x449d31 */ if (fZ) goto L_00449d31;
L_00449d0b:; BB(0x00449d0b);
    /* 00449d0b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00449d0e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00449d0f: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x449d14u); f_005dcb00();
    /* 00449d14: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00449d17: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00449d1a: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00449d1d: mov byte ptr [eax + 0x4a1], 1 */ W8((u32)(r_eax+0x4a1u), 0x1u);
    /* 00449d24: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00449d27: call 0x4497a0 */ r_esp -= 4; W32(r_esp, 0x449d2cu); f_004497a0();
    /* 00449d2c: jmp 0x449e74 */ goto L_00449e74;
L_00449d31:; BB(0x00449d31);
    /* 00449d31: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00449d34: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00449d35: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x449d3au); f_005dcb00();
    /* 00449d3a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00449d3d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00449d3e: mov ecx, dword ptr [0x79070c] */ r_ecx = R32((u32)(0x79070cu));
    /* 00449d44: call 0x5dbb70 */ r_esp -= 4; W32(r_esp, 0x449d49u); f_005dbb70();
L_00449d49:; BB(0x00449d49);
    /* 00449d49: jmp 0x449e74 */ goto L_00449e74;
L_00449d4e:; BB(0x00449d4e);
    /* 00449d4e: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 00449d54: call 0x57ae30 */ r_esp -= 4; W32(r_esp, 0x449d59u); f_0057ae30();
    /* 00449d59: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00449d5c: movzx eax, byte ptr [edx + 6] */ r_eax = (u32)R8((u32)(r_edx+0x6u));
    /* 00449d60: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00449d62: jne 0x449d89 */ if (!fZ) goto L_00449d89;
L_00449d64:; BB(0x00449d64);
    /* 00449d64: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00449d67: mov byte ptr [ecx + 6], 1 */ W8((u32)(r_ecx+0x6u), 0x1u);
    /* 00449d6b: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00449d6d: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00449d73: call 0x637810 */ r_esp -= 4; W32(r_esp, 0x449d78u); f_00637810();
    /* 00449d78: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00449d79: mov ecx, dword ptr [0x79070c] */ r_ecx = R32((u32)(0x79070cu));
    /* 00449d7f: call 0x5da360 */ r_esp -= 4; W32(r_esp, 0x449d84u); f_005da360();
    /* 00449d84: jmp 0x449e74 */ goto L_00449e74;
L_00449d89:; BB(0x00449d89);
    /* 00449d89: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00449d8c: mov byte ptr [edx + 6], 0 */ W8((u32)(r_edx+0x6u), 0x0u);
    /* 00449d90: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00449d93: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00449d94: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x449d99u); f_005dcb00();
    /* 00449d99: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00449d9c: mov ecx, eax */ r_ecx = r_eax;
    /* 00449d9e: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x449da3u); f_005d5a50();
    /* 00449da3: mov esi, eax */ r_esi = r_eax;
    /* 00449da5: mov ecx, dword ptr [0x79070c] */ r_ecx = R32((u32)(0x79070cu));
    /* 00449dab: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00449dad: mov ecx, dword ptr [0x79070c] */ r_ecx = R32((u32)(0x79070cu));
    /* 00449db3: mov eax, dword ptr [edx + 0x2b0] */ r_eax = R32((u32)(r_edx+0x2b0u));
    /* 00449db9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x449dbbu); call_ind(t); }
    /* 00449dbb: imul eax, eax, 3 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00449dbe: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00449dc0: jl 0x449e1c */ if ((fS!=fO)) goto L_00449e1c;
L_00449dc2:; BB(0x00449dc2);
    /* 00449dc2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00449dc4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00449dc7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00449dc8: mov ecx, dword ptr [0x79071c] */ r_ecx = R32((u32)(0x79071cu));
    /* 00449dce: call 0x446120 */ r_esp -= 4; W32(r_esp, 0x449dd3u); f_00446120();
    /* 00449dd3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00449dd4: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x449dd9u); f_0064c8a0();
    /* 00449dd9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00449ddc: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00449ddf: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00449de2: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00449de5: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00449de8: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00449deb: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00449dee: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00449df0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00449df2: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 00449df5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00449df6: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00449df9: mov eax, dword ptr [0x790710] */ r_eax = R32((u32)(0x790710u));
    /* 00449dfe: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 00449e02: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00449e05: mov eax, dword ptr [0x790710] */ r_eax = R32((u32)(0x790710u));
    /* 00449e0a: mov edx, dword ptr [eax + edx*4 + 8] */ r_edx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 00449e0e: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00449e10: mov ecx, edx */ r_ecx = r_edx;
    /* 00449e12: mov edx, dword ptr [eax + 0xc4] */ r_edx = R32((u32)(r_eax+0xc4u));
    /* 00449e18: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x449e1au); call_ind(t); }
    /* 00449e1a: jmp 0x449e74 */ goto L_00449e74;
L_00449e1c:; BB(0x00449e1c);
    /* 00449e1c: mov ecx, dword ptr [0x79070c] */ r_ecx = R32((u32)(0x79070cu));
    /* 00449e22: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x449e27u); f_005da7b0();
    /* 00449e27: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00449e2a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00449e2c: je 0x449e49 */ if (fZ) goto L_00449e49;
L_00449e2e:; BB(0x00449e2e);
    /* 00449e2e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00449e31: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00449e32: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x449e37u); f_005dcb00();
    /* 00449e37: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00449e3a: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00449e3d: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00449e40: mov byte ptr [edx + 0x4a1], 1 */ W8((u32)(r_edx+0x4a1u), 0x1u);
    /* 00449e47: jmp 0x449e58 */ goto L_00449e58;
L_00449e49:; BB(0x00449e49);
    /* 00449e49: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00449e4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00449e4d: mov ecx, dword ptr [0x79070c] */ r_ecx = R32((u32)(0x79070cu));
    /* 00449e53: call 0x5d9570 */ r_esp -= 4; W32(r_esp, 0x449e58u); f_005d9570();
L_00449e58:; BB(0x00449e58);
    /* 00449e58: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00449e5a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00449e5c: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00449e62: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00449e65: mov eax, dword ptr [0x162ee80] */ r_eax = R32((u32)(0x162ee80u));
    /* 00449e6a: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00449e6d: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00449e6f: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00449e72: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x449e74u); call_ind(t); }
L_00449e74:; BB(0x00449e74);
    /* 00449e74: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00449e75: mov esp, ebp */ r_esp = r_ebp;
    /* 00449e77: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00449e78: ret 4 */ FN_RET(0x00449c30); r_esp += 8; return;
}

void f_00449e80(void) /* sub_449E80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00449e80);
    /* 00449e80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00449e81: mov ebp, esp */ r_ebp = r_esp;
    /* 00449e83: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00449e85: push 0x69edcb */ { u32 v = 0x69edcbu; r_esp -= 4; W32(r_esp, v); }
    /* 00449e8a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00449e90: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00449e91: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00449e94: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00449e99: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00449e9b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00449e9c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00449e9f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00449ea5: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00449ea8: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 00449eaa: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x449eafu); f_00686d82();
    /* 00449eaf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00449eb2: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00449eb5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00449ebc: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00449ec0: je 0x449ecf */ if (fZ) goto L_00449ecf;
L_00449ec2:; BB(0x00449ec2);
    /* 00449ec2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00449ec5: call 0x448810 */ r_esp -= 4; W32(r_esp, 0x449ecau); f_00448810();
    /* 00449eca: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00449ecd: jmp 0x449ed6 */ goto L_00449ed6;
L_00449ecf:; BB(0x00449ecf);
    /* 00449ecf: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_00449ed6:; BB(0x00449ed6);
    /* 00449ed6: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00449ed9: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00449edc: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00449ee3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00449ee6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00449ee7: mov edx, dword ptr [0x79070c] */ r_edx = R32((u32)(0x79070cu));
    /* 00449eed: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 00449ef0: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x449ef5u); f_005fc420();
    /* 00449ef5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00449ef8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00449eff: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00449f00: mov esp, ebp */ r_esp = r_ebp;
    /* 00449f02: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00449f03: ret  */ FN_RET(0x00449e80); r_esp += 4; return;
}

void f_00449f10(void) /* sub_449F10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00449f10);
    /* 00449f10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00449f11: mov ebp, esp */ r_ebp = r_esp;
    /* 00449f13: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00449f16: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00449f19: mov byte ptr [ebp - 1], 0 */ W8((u32)(r_ebp+0xffffffffu), 0x0u);
    /* 00449f1d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00449f20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00449f21: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x449f26u); f_005dcb00();
    /* 00449f26: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00449f29: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00449f2c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00449f2f: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x449f34u); f_0063aac0();
    /* 00449f34: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00449f36: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00449f39: cmp dword ptr [ebp - 8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00449f3d: je 0x449f5b */ if (fZ) goto L_00449f5b;
L_00449f3f:; BB(0x00449f3f);
    /* 00449f3f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00449f42: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x449f47u); f_0063aac0();
    /* 00449f47: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00449f49: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00449f4c: cmp dword ptr [ebp - 0xc], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00449f50: je 0x449f5b */ if (fZ) goto L_00449f5b;
L_00449f52:; BB(0x00449f52);
    /* 00449f52: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00449f59: jmp 0x449f62 */ goto L_00449f62;
L_00449f5b:; BB(0x00449f5b);
    /* 00449f5b: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
L_00449f62:; BB(0x00449f62);
    /* 00449f62: movzx eax, byte ptr [ebp - 0x28] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffd8u));
    /* 00449f66: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00449f68: je 0x449fd6 */ if (fZ) goto L_00449fd6;
L_00449f6a:; BB(0x00449f6a);
    /* 00449f6a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00449f6c: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00449f72: call 0x5df700 */ r_esp -= 4; W32(r_esp, 0x449f77u); f_005df700();
    /* 00449f77: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00449f7a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00449f7c: je 0x449fa1 */ if (fZ) goto L_00449fa1;
L_00449f7e:; BB(0x00449f7e);
    /* 00449f7e: push 0x7154d8 */ { u32 v = 0x7154d8u; r_esp -= 4; W32(r_esp, v); }
    /* 00449f83: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 00449f85: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 00449f8b: call 0x57ab80 */ r_esp -= 4; W32(r_esp, 0x449f90u); f_0057ab80();
    /* 00449f90: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00449f93: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00449f94: mov ecx, dword ptr [0x790710] */ r_ecx = R32((u32)(0x790710u));
    /* 00449f9a: call 0x44df90 */ r_esp -= 4; W32(r_esp, 0x449f9fu); f_0044df90();
    /* 00449f9f: jmp 0x449fac */ goto L_00449fac;
L_00449fa1:; BB(0x00449fa1);
    /* 00449fa1: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 00449fa7: call 0x57ae30 */ r_esp -= 4; W32(r_esp, 0x449facu); f_0057ae30();
L_00449fac:; BB(0x00449fac);
    /* 00449fac: mov eax, dword ptr [0x790710] */ r_eax = R32((u32)(0x790710u));
    /* 00449fb1: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00449fb4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00449fb7: add ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00449fba: mov byte ptr [ecx + 0xc9], 1 */ W8((u32)(r_ecx+0xc9u), 0x1u);
    /* 00449fc1: mov ecx, dword ptr [0x790718] */ r_ecx = R32((u32)(0x790718u));
    /* 00449fc7: call 0x447c70 */ r_esp -= 4; W32(r_esp, 0x449fccu); f_00447c70();
    /* 00449fcc: jmp 0x44a109 */ goto L_0044a109;
L_00449fd6:; BB(0x00449fd6);
    /* 00449fd6: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 00449fdc: call 0x57ae30 */ r_esp -= 4; W32(r_esp, 0x449fe1u); f_0057ae30();
    /* 00449fe1: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00449fe4: movzx eax, byte ptr [edx + 7] */ r_eax = (u32)R8((u32)(r_edx+0x7u));
    /* 00449fe8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00449fea: jne 0x44a011 */ if (!fZ) goto L_0044a011;
L_00449fec:; BB(0x00449fec);
    /* 00449fec: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00449fef: mov byte ptr [ecx + 7], 1 */ W8((u32)(r_ecx+0x7u), 0x1u);
    /* 00449ff3: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00449ff5: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00449ffb: call 0x637810 */ r_esp -= 4; W32(r_esp, 0x44a000u); f_00637810();
    /* 0044a000: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044a001: mov ecx, dword ptr [0x79070c] */ r_ecx = R32((u32)(0x79070cu));
    /* 0044a007: call 0x5da360 */ r_esp -= 4; W32(r_esp, 0x44a00cu); f_005da360();
    /* 0044a00c: jmp 0x44a109 */ goto L_0044a109;
L_0044a011:; BB(0x0044a011);
    /* 0044a011: mov edx, dword ptr [0x790710] */ r_edx = R32((u32)(0x790710u));
    /* 0044a017: movzx eax, byte ptr [edx + 0xf0] */ r_eax = (u32)R8((u32)(r_edx+0xf0u));
    /* 0044a01e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044a020: jne 0x44a0a8 */ if (!fZ) goto L_0044a0a8;
L_0044a026:; BB(0x0044a026);
    /* 0044a026: mov ecx, dword ptr [0x790710] */ r_ecx = R32((u32)(0x790710u));
    /* 0044a02c: mov byte ptr [ecx + 0xf0], 1 */ W8((u32)(r_ecx+0xf0u), 0x1u);
    /* 0044a033: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0044a036: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044a037: mov ecx, dword ptr [0x79071c] */ r_ecx = R32((u32)(0x79071cu));
    /* 0044a03d: call 0x4466b0 */ r_esp -= 4; W32(r_esp, 0x44a042u); f_004466b0();
    /* 0044a042: mov ecx, dword ptr [0x790710] */ r_ecx = R32((u32)(0x790710u));
    /* 0044a048: mov byte ptr [ecx + 0xf1], al */ W8((u32)(r_ecx+0xf1u), (u8)r_eax);
    /* 0044a04e: mov edx, dword ptr [0x790710] */ r_edx = R32((u32)(0x790710u));
    /* 0044a054: movzx eax, byte ptr [edx + 0xf1] */ r_eax = (u32)R8((u32)(r_edx+0xf1u));
    /* 0044a05b: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 0044a05d: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 0044a05f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044a062: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0044a065: mov ecx, dword ptr [0x790710] */ r_ecx = R32((u32)(0x790710u));
    /* 0044a06b: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0044a06e: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0044a071: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0044a074: mov dword ptr [edx + 0xf4], eax */ W32((u32)(r_edx+0xf4u), r_eax);
    /* 0044a07a: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0044a07d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0044a080: mov dword ptr [ecx + 0xf8], edx */ W32((u32)(r_ecx+0xf8u), r_edx);
    /* 0044a086: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044a088: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0044a08a: mov eax, dword ptr [0x79070c] */ r_eax = R32((u32)(0x79070cu));
    /* 0044a08f: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0044a092: mov edx, dword ptr [0x79070c] */ r_edx = R32((u32)(0x79070cu));
    /* 0044a098: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0044a09b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0044a09d: mov ecx, eax */ r_ecx = r_eax;
    /* 0044a09f: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0044a0a2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x44a0a4u); call_ind(t); }
    /* 0044a0a4: jmp 0x44a109 */ goto L_0044a109;
L_0044a0a8:; BB(0x0044a0a8);
    /* 0044a0a8: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0044a0ab: mov byte ptr [ecx + 7], 0 */ W8((u32)(r_ecx+0x7u), 0x0u);
    /* 0044a0af: mov edx, dword ptr [0x790710] */ r_edx = R32((u32)(0x790710u));
    /* 0044a0b5: mov byte ptr [edx + 0xf0], 0 */ W8((u32)(r_edx+0xf0u), 0x0u);
    /* 0044a0bc: mov eax, dword ptr [0x790710] */ r_eax = R32((u32)(0x790710u));
    /* 0044a0c1: mov cl, byte ptr [eax + 0xf1] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0xf1u))) & 0xffu);
    /* 0044a0c7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044a0c8: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0044a0cb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044a0cc: mov ecx, dword ptr [0x790710] */ r_ecx = R32((u32)(0x790710u));
    /* 0044a0d2: call 0x44d510 */ r_esp -= 4; W32(r_esp, 0x44a0d7u); f_0044d510();
    /* 0044a0d7: mov eax, dword ptr [0x790710] */ r_eax = R32((u32)(0x790710u));
    /* 0044a0dc: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0044a0df: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0044a0e2: add ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0044a0e5: mov byte ptr [ecx + 0xcd], 1 */ W8((u32)(r_ecx+0xcdu), 0x1u);
    /* 0044a0ec: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044a0ee: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0044a0f0: mov edx, dword ptr [0x79070c] */ r_edx = R32((u32)(0x79070cu));
    /* 0044a0f6: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0044a0f9: mov ecx, dword ptr [0x79070c] */ r_ecx = R32((u32)(0x79070cu));
    /* 0044a0ff: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0044a102: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0044a104: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0044a107: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x44a109u); call_ind(t); }
L_0044a109:; BB(0x0044a109);
    /* 0044a109: mov esp, ebp */ r_esp = r_ebp;
    /* 0044a10b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044a10c: ret 4 */ FN_RET(0x00449f10); r_esp += 8; return;
}

