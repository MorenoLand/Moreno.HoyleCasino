#include "protos.h"

void f_0054f5a0(void) /* sub_54F5A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0054f5a0);
    /* 0054f5a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054f5a1: mov ebp, esp */ r_ebp = r_esp;
    /* 0054f5a3: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0054f5a6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0054f5a9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0054f5b0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054f5b3: call 0x551960 */ r_esp -= 4; W32(r_esp, 0x54f5b8u); f_00551960();
    /* 0054f5b8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054f5bb: call 0x54cec0 */ r_esp -= 4; W32(r_esp, 0x54f5c0u); f_0054cec0();
    /* 0054f5c0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054f5c2: jne 0x54f838 */ if (!fZ) goto L_0054f838;
L_0054f5c8:; BB(0x0054f5c8);
    /* 0054f5c8: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0054f5ca: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0054f5cc: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0054f5ce: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054f5d1: call 0x551330 */ r_esp -= 4; W32(r_esp, 0x54f5d6u); f_00551330();
    /* 0054f5d6: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0054f5d9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054f5db: je 0x54f5ec */ if (fZ) goto L_0054f5ec;
L_0054f5dd:; BB(0x0054f5dd);
    /* 0054f5dd: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0054f5df: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054f5e2: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x54f5e7u); f_005519a0();
    /* 0054f5e7: jmp 0x54ff96 */ goto L_0054ff96;
L_0054f5ec:; BB(0x0054f5ec);
    /* 0054f5ec: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054f5ef: cmp dword ptr [ecx + 0x10], -1 */ {  u32 a = R32((u32)(r_ecx+0x10u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054f5f3: jle 0x54f6a5 */ if ((fZ||fS!=fO)) goto L_0054f6a5;
L_0054f5f9:; BB(0x0054f5f9);
    /* 0054f5f9: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054f5fc: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 0054f5ff: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0054f602: cmp dword ptr [ebp - 0x10], 9 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0054f606: ja 0x54f6a5 */ if ((!fC&&!fZ)) goto L_0054f6a5;
L_0054f60c:; BB(0x0054f60c);
    /* 0054f60c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054f60f: movzx edx, byte ptr [ecx + 0x54ffac] */ r_edx = (u32)R8((u32)(r_ecx+0x54ffacu));
    /* 0054f616: jmp dword ptr [edx*4 + 0x54ff9c] */ { u32 t = R32((u32)(r_edx*4+0x54ff9cu)); switch (t) { case 0x54f61du: goto L_0054f61d; case 0x54f634u: goto L_0054f634; case 0x54f63eu: goto L_0054f63e; case 0x54f6a5u: goto L_0054f6a5; default: UNSUP(0x0054f616, "jump table entry is not a known target"); } }
L_0054f61d:; BB(0x0054f61d);
    /* 0054f61d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054f61f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054f622: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x54f627u); f_005519a0();
    /* 0054f627: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054f62a: call 0x551920 */ r_esp -= 4; W32(r_esp, 0x54f62fu); f_00551920();
    /* 0054f62f: jmp 0x54ff96 */ goto L_0054ff96;
L_0054f634:; BB(0x0054f634);
    /* 0054f634: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 0054f636: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054f639: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x54f63eu); f_005519a0();
L_0054f63e:; BB(0x0054f63e);
    /* 0054f63e: push 0x27 */ { u32 v = 0x27u; r_esp -= 4; W32(r_esp, v); }
    /* 0054f640: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054f643: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x54f648u); f_005519a0();
    /* 0054f648: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0054f64f: jmp 0x54f65a */ goto L_0054f65a;
L_0054f651:; BB(0x0054f651);
    /* 0054f651: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054f654: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054f657: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0054f65a:; BB(0x0054f65a);
    /* 0054f65a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054f65d: call 0x54c540 */ r_esp -= 4; W32(r_esp, 0x54f662u); f_0054c540();
    /* 0054f662: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054f665: jge 0x54f6a0 */ if ((fS==fO)) goto L_0054f6a0;
L_0054f667:; BB(0x0054f667);
    /* 0054f667: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054f66a: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054f66d: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0054f672: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054f673: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x54f678u); f_00641280();
    /* 0054f678: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054f67b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054f67c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054f67f: call 0x54cf20 */ r_esp -= 4; W32(r_esp, 0x54f684u); f_0054cf20();
    /* 0054f684: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054f687: jle 0x54f69e */ if ((fZ||fS!=fO)) goto L_0054f69e;
L_0054f689:; BB(0x0054f689);
    /* 0054f689: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054f68c: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0054f68f: mov dl, byte ptr [ebp - 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0054f692: mov byte ptr [ecx + 0x14], dl */ W8((u32)(r_ecx+0x14u), (u8)r_edx);
    /* 0054f695: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054f698: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054f69b: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0054f69e:; BB(0x0054f69e);
    /* 0054f69e: jmp 0x54f651 */ goto L_0054f651;
L_0054f6a0:; BB(0x0054f6a0);
    /* 0054f6a0: jmp 0x54ff96 */ goto L_0054ff96;
L_0054f6a5:; BB(0x0054f6a5);
    /* 0054f6a5: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0054f6a7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054f6a9: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0054f6ab: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054f6ae: call 0x551330 */ r_esp -= 4; W32(r_esp, 0x54f6b3u); f_00551330();
    /* 0054f6b3: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0054f6b6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054f6b8: je 0x54f6c9 */ if (fZ) goto L_0054f6c9;
L_0054f6ba:; BB(0x0054f6ba);
    /* 0054f6ba: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0054f6bc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054f6bf: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x54f6c4u); f_005519a0();
    /* 0054f6c4: jmp 0x54ff96 */ goto L_0054ff96;
L_0054f6c9:; BB(0x0054f6c9);
    /* 0054f6c9: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0054f6cb: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0054f6cd: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0054f6cf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054f6d2: call 0x551330 */ r_esp -= 4; W32(r_esp, 0x54f6d7u); f_00551330();
    /* 0054f6d7: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0054f6da: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054f6dc: je 0x54f6ed */ if (fZ) goto L_0054f6ed;
L_0054f6de:; BB(0x0054f6de);
    /* 0054f6de: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0054f6e0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054f6e3: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x54f6e8u); f_005519a0();
    /* 0054f6e8: jmp 0x54ff96 */ goto L_0054ff96;
L_0054f6ed:; BB(0x0054f6ed);
    /* 0054f6ed: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0054f6ef: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054f6f1: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0054f6f3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054f6f6: call 0x551330 */ r_esp -= 4; W32(r_esp, 0x54f6fbu); f_00551330();
    /* 0054f6fb: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0054f6fe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054f700: je 0x54f728 */ if (fZ) goto L_0054f728;
L_0054f702:; BB(0x0054f702);
    /* 0054f702: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054f705: call 0x5519e0 */ r_esp -= 4; W32(r_esp, 0x54f70au); f_005519e0();
    /* 0054f70a: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0054f70d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054f70f: je 0x54f720 */ if (fZ) goto L_0054f720;
L_0054f711:; BB(0x0054f711);
    /* 0054f711: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0054f713: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054f716: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x54f71bu); f_005519a0();
    /* 0054f71b: jmp 0x54ff96 */ goto L_0054ff96;
L_0054f720:; BB(0x0054f720);
    /* 0054f720: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054f723: call 0x551960 */ r_esp -= 4; W32(r_esp, 0x54f728u); f_00551960();
L_0054f728:; BB(0x0054f728);
    /* 0054f728: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054f72b: call 0x5515d0 */ r_esp -= 4; W32(r_esp, 0x54f730u); f_005515d0();
    /* 0054f730: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0054f733: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054f735: je 0x54f746 */ if (fZ) goto L_0054f746;
L_0054f737:; BB(0x0054f737);
    /* 0054f737: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 0054f739: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054f73c: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x54f741u); f_005519a0();
    /* 0054f741: jmp 0x54ff96 */ goto L_0054ff96;
L_0054f746:; BB(0x0054f746);
    /* 0054f746: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054f749: call 0x551890 */ r_esp -= 4; W32(r_esp, 0x54f74eu); f_00551890();
    /* 0054f74e: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0054f751: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054f753: je 0x54f764 */ if (fZ) goto L_0054f764;
L_0054f755:; BB(0x0054f755);
    /* 0054f755: push 0x2e */ { u32 v = 0x2eu; r_esp -= 4; W32(r_esp, v); }
    /* 0054f757: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054f75a: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x54f75fu); f_005519a0();
    /* 0054f75f: jmp 0x54ff96 */ goto L_0054ff96;
L_0054f764:; BB(0x0054f764);
    /* 0054f764: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0054f766: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054f768: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0054f76a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054f76d: call 0x551670 */ r_esp -= 4; W32(r_esp, 0x54f772u); f_00551670();
    /* 0054f772: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0054f775: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054f777: je 0x54f79f */ if (fZ) goto L_0054f79f;
L_0054f779:; BB(0x0054f779);
    /* 0054f779: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054f77c: call 0x5519e0 */ r_esp -= 4; W32(r_esp, 0x54f781u); f_005519e0();
    /* 0054f781: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0054f784: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054f786: je 0x54f797 */ if (fZ) goto L_0054f797;
L_0054f788:; BB(0x0054f788);
    /* 0054f788: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0054f78a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054f78d: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x54f792u); f_005519a0();
    /* 0054f792: jmp 0x54ff96 */ goto L_0054ff96;
L_0054f797:; BB(0x0054f797);
    /* 0054f797: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054f79a: call 0x551960 */ r_esp -= 4; W32(r_esp, 0x54f79fu); f_00551960();
L_0054f79f:; BB(0x0054f79f);
    /* 0054f79f: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0054f7a1: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0054f7a3: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0054f7a5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054f7a8: call 0x551330 */ r_esp -= 4; W32(r_esp, 0x54f7adu); f_00551330();
    /* 0054f7ad: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0054f7b0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054f7b2: je 0x54f7e8 */ if (fZ) goto L_0054f7e8;
L_0054f7b4:; BB(0x0054f7b4);
    /* 0054f7b4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054f7b7: movsx edx, byte ptr [ecx + 0x15] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x15u));
    /* 0054f7bb: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054f7be: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 0054f7c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054f7c4: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x54f7c9u); f_00641280();
    /* 0054f7c9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054f7cc: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054f7cf: je 0x54f7e0 */ if (fZ) goto L_0054f7e0;
L_0054f7d1:; BB(0x0054f7d1);
    /* 0054f7d1: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0054f7d3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054f7d6: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x54f7dbu); f_005519a0();
    /* 0054f7db: jmp 0x54ff96 */ goto L_0054ff96;
L_0054f7e0:; BB(0x0054f7e0);
    /* 0054f7e0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054f7e3: call 0x551960 */ r_esp -= 4; W32(r_esp, 0x54f7e8u); f_00551960();
L_0054f7e8:; BB(0x0054f7e8);
    /* 0054f7e8: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0054f7ea: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054f7ec: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0054f7ee: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054f7f1: call 0x551330 */ r_esp -= 4; W32(r_esp, 0x54f7f6u); f_00551330();
    /* 0054f7f6: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0054f7f9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054f7fb: je 0x54f833 */ if (fZ) goto L_0054f833;
L_0054f7fd:; BB(0x0054f7fd);
    /* 0054f7fd: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054f800: movsx ecx, byte ptr [eax + 0x16] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x16u));
    /* 0054f804: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054f805: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054f808: movsx eax, byte ptr [edx + 0x14] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x14u));
    /* 0054f80c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054f80d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054f810: call 0x551b50 */ r_esp -= 4; W32(r_esp, 0x54f815u); f_00551b50();
    /* 0054f815: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0054f818: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054f81a: jne 0x54f82b */ if (!fZ) goto L_0054f82b;
L_0054f81c:; BB(0x0054f81c);
    /* 0054f81c: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0054f81e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054f821: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x54f826u); f_005519a0();
    /* 0054f826: jmp 0x54ff96 */ goto L_0054ff96;
L_0054f82b:; BB(0x0054f82b);
    /* 0054f82b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054f82e: call 0x551960 */ r_esp -= 4; W32(r_esp, 0x54f833u); f_00551960();
L_0054f833:; BB(0x0054f833);
    /* 0054f833: jmp 0x54ff96 */ goto L_0054ff96;
L_0054f838:; BB(0x0054f838);
    /* 0054f838: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054f83b: cmp dword ptr [edx + 0x10], -1 */ {  u32 a = R32((u32)(r_edx+0x10u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054f83f: jle 0x54fb74 */ if ((fZ||fS!=fO)) goto L_0054fb74;
L_0054f845:; BB(0x0054f845);
    /* 0054f845: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054f848: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 0054f84b: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0054f84e: cmp dword ptr [ebp - 0x14], 9 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0054f852: ja 0x54fb74 */ if ((!fC&&!fZ)) goto L_0054fb74;
L_0054f858:; BB(0x0054f858);
    /* 0054f858: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0054f85b: movzx eax, byte ptr [edx + 0x54ffc4] */ r_eax = (u32)R8((u32)(r_edx+0x54ffc4u));
    /* 0054f862: jmp dword ptr [eax*4 + 0x54ffb8] */ { u32 t = R32((u32)(r_eax*4+0x54ffb8u)); switch (t) { case 0x54f869u: goto L_0054f869; case 0x54f880u: goto L_0054f880; case 0x54f8a3u: goto L_0054f8a3; default: UNSUP(0x0054f862, "jump table entry is not a known target"); } }
L_0054f869:; BB(0x0054f869);
    /* 0054f869: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054f86b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054f86e: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x54f873u); f_005519a0();
    /* 0054f873: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054f876: call 0x551920 */ r_esp -= 4; W32(r_esp, 0x54f87bu); f_00551920();
    /* 0054f87b: jmp 0x54ff96 */ goto L_0054ff96;
L_0054f880:; BB(0x0054f880);
    /* 0054f880: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054f883: call 0x54cec0 */ r_esp -= 4; W32(r_esp, 0x54f888u); f_0054cec0();
    /* 0054f888: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054f88b: jne 0x54f899 */ if (!fZ) goto L_0054f899;
L_0054f88d:; BB(0x0054f88d);
    /* 0054f88d: push 0x29 */ { u32 v = 0x29u; r_esp -= 4; W32(r_esp, v); }
    /* 0054f88f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054f892: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x54f897u); f_005519a0();
    /* 0054f897: jmp 0x54f8a3 */ goto L_0054f8a3;
L_0054f899:; BB(0x0054f899);
    /* 0054f899: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 0054f89b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054f89e: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x54f8a3u); f_005519a0();
L_0054f8a3:; BB(0x0054f8a3);
    /* 0054f8a3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054f8a6: call 0x54cec0 */ r_esp -= 4; W32(r_esp, 0x54f8abu); f_0054cec0();
    /* 0054f8ab: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054f8ae: jne 0x54f8c5 */ if (!fZ) goto L_0054f8c5;
L_0054f8b0:; BB(0x0054f8b0);
    /* 0054f8b0: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0054f8b2: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0054f8b4: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0054f8b6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054f8b9: call 0x551330 */ r_esp -= 4; W32(r_esp, 0x54f8beu); f_00551330();
    /* 0054f8be: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0054f8c1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054f8c3: jne 0x54f8ef */ if (!fZ) goto L_0054f8ef;
L_0054f8c5:; BB(0x0054f8c5);
    /* 0054f8c5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054f8c8: call 0x54cec0 */ r_esp -= 4; W32(r_esp, 0x54f8cdu); f_0054cec0();
    /* 0054f8cd: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054f8d0: jne 0x54f97e */ if (!fZ) goto L_0054f97e;
L_0054f8d6:; BB(0x0054f8d6);
    /* 0054f8d6: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0054f8d8: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0054f8da: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0054f8dc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054f8df: call 0x551330 */ r_esp -= 4; W32(r_esp, 0x54f8e4u); f_00551330();
    /* 0054f8e4: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0054f8e7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054f8e9: je 0x54f97e */ if (fZ) goto L_0054f97e;
L_0054f8ef:; BB(0x0054f8ef);
    /* 0054f8ef: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0054f8f1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054f8f4: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x54f8f9u); f_005519a0();
    /* 0054f8f9: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0054f900: jmp 0x54f90b */ goto L_0054f90b;
L_0054f902:; BB(0x0054f902);
    /* 0054f902: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054f905: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054f908: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0054f90b:; BB(0x0054f90b);
    /* 0054f90b: cmp dword ptr [ebp - 8], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054f90f: jge 0x54f92a */ if ((fS==fO)) goto L_0054f92a;
L_0054f911:; BB(0x0054f911);
    /* 0054f911: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054f914: add ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0054f917: movsx edx, byte ptr [ecx + 0x14] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x14u));
    /* 0054f91b: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054f91e: jne 0x54f928 */ if (!fZ) goto L_0054f928;
L_0054f920:; BB(0x0054f920);
    /* 0054f920: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054f923: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0054f926: jmp 0x54f92a */ goto L_0054f92a;
L_0054f928:; BB(0x0054f928);
    /* 0054f928: jmp 0x54f902 */ goto L_0054f902;
L_0054f92a:; BB(0x0054f92a);
    /* 0054f92a: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0054f931: jmp 0x54f93c */ goto L_0054f93c;
L_0054f933:; BB(0x0054f933);
    /* 0054f933: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054f936: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0054f939: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_0054f93c:; BB(0x0054f93c);
    /* 0054f93c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054f93f: call 0x54c540 */ r_esp -= 4; W32(r_esp, 0x54f944u); f_0054c540();
    /* 0054f944: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054f947: jge 0x54f979 */ if ((fS==fO)) goto L_0054f979;
L_0054f949:; BB(0x0054f949);
    /* 0054f949: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054f94c: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054f94f: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 0054f954: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054f955: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x54f95au); f_00641280();
    /* 0054f95a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054f95d: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054f960: jne 0x54f977 */ if (!fZ) goto L_0054f977;
L_0054f962:; BB(0x0054f962);
    /* 0054f962: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054f965: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0054f968: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0054f96b: mov byte ptr [edx + 0x14], al */ W8((u32)(r_edx+0x14u), (u8)r_eax);
    /* 0054f96e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054f971: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0054f974: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0054f977:; BB(0x0054f977);
    /* 0054f977: jmp 0x54f933 */ goto L_0054f933;
L_0054f979:; BB(0x0054f979);
    /* 0054f979: jmp 0x54ff96 */ goto L_0054ff96;
L_0054f97e:; BB(0x0054f97e);
    /* 0054f97e: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0054f985: jmp 0x54f990 */ goto L_0054f990;
L_0054f987:; BB(0x0054f987);
    /* 0054f987: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054f98a: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0054f98d: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0054f990:; BB(0x0054f990);
    /* 0054f990: cmp dword ptr [ebp - 8], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054f994: jge 0x54f9a2 */ if ((fS==fO)) goto L_0054f9a2;
L_0054f996:; BB(0x0054f996);
    /* 0054f996: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054f999: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054f99c: mov byte ptr [eax + 0x14], 0xff */ W8((u32)(r_eax+0x14u), 0xffu);
    /* 0054f9a0: jmp 0x54f987 */ goto L_0054f987;
L_0054f9a2:; BB(0x0054f9a2);
    /* 0054f9a2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054f9a5: call 0x54cec0 */ r_esp -= 4; W32(r_esp, 0x54f9aau); f_0054cec0();
    /* 0054f9aa: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054f9ad: jne 0x54f9c4 */ if (!fZ) goto L_0054f9c4;
L_0054f9af:; BB(0x0054f9af);
    /* 0054f9af: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0054f9b1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054f9b3: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0054f9b5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054f9b8: call 0x551330 */ r_esp -= 4; W32(r_esp, 0x54f9bdu); f_00551330();
    /* 0054f9bd: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0054f9c0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054f9c2: jne 0x54f9ee */ if (!fZ) goto L_0054f9ee;
L_0054f9c4:; BB(0x0054f9c4);
    /* 0054f9c4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054f9c7: call 0x54cec0 */ r_esp -= 4; W32(r_esp, 0x54f9ccu); f_0054cec0();
    /* 0054f9cc: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054f9cf: jne 0x54fa8e */ if (!fZ) goto L_0054fa8e;
L_0054f9d5:; BB(0x0054f9d5);
    /* 0054f9d5: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0054f9d7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054f9d9: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0054f9db: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054f9de: call 0x551330 */ r_esp -= 4; W32(r_esp, 0x54f9e3u); f_00551330();
    /* 0054f9e3: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0054f9e6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054f9e8: je 0x54fa8e */ if (fZ) goto L_0054fa8e;
L_0054f9ee:; BB(0x0054f9ee);
    /* 0054f9ee: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054f9f1: movsx ecx, byte ptr [eax + 0x19] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x19u));
    /* 0054f9f5: cmp ecx, 0x15 */ {  u32 a = r_ecx; u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054f9f8: jne 0x54f9ff */ if (!fZ) goto L_0054f9ff;
L_0054f9fa:; BB(0x0054f9fa);
    /* 0054f9fa: jmp 0x54fb74 */ goto L_0054fb74;
L_0054f9ff:; BB(0x0054f9ff);
    /* 0054f9ff: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0054fa01: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054fa04: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x54fa09u); f_005519a0();
    /* 0054fa09: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0054fa10: jmp 0x54fa1b */ goto L_0054fa1b;
L_0054fa12:; BB(0x0054fa12);
    /* 0054fa12: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054fa15: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0054fa18: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0054fa1b:; BB(0x0054fa1b);
    /* 0054fa1b: cmp dword ptr [ebp - 8], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054fa1f: jge 0x54fa3a */ if ((fS==fO)) goto L_0054fa3a;
L_0054fa21:; BB(0x0054fa21);
    /* 0054fa21: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054fa24: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054fa27: movsx ecx, byte ptr [eax + 0x14] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x14u));
    /* 0054fa2b: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054fa2e: jne 0x54fa38 */ if (!fZ) goto L_0054fa38;
L_0054fa30:; BB(0x0054fa30);
    /* 0054fa30: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054fa33: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0054fa36: jmp 0x54fa3a */ goto L_0054fa3a;
L_0054fa38:; BB(0x0054fa38);
    /* 0054fa38: jmp 0x54fa12 */ goto L_0054fa12;
L_0054fa3a:; BB(0x0054fa3a);
    /* 0054fa3a: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0054fa41: jmp 0x54fa4c */ goto L_0054fa4c;
L_0054fa43:; BB(0x0054fa43);
    /* 0054fa43: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054fa46: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054fa49: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0054fa4c:; BB(0x0054fa4c);
    /* 0054fa4c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054fa4f: call 0x54c540 */ r_esp -= 4; W32(r_esp, 0x54fa54u); f_0054c540();
    /* 0054fa54: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054fa57: jge 0x54fa89 */ if ((fS==fO)) goto L_0054fa89;
L_0054fa59:; BB(0x0054fa59);
    /* 0054fa59: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054fa5c: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054fa5f: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0054fa64: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054fa65: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x54fa6au); f_00641280();
    /* 0054fa6a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054fa6d: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054fa70: jne 0x54fa87 */ if (!fZ) goto L_0054fa87;
L_0054fa72:; BB(0x0054fa72);
    /* 0054fa72: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054fa75: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0054fa78: mov dl, byte ptr [ebp - 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0054fa7b: mov byte ptr [ecx + 0x14], dl */ W8((u32)(r_ecx+0x14u), (u8)r_edx);
    /* 0054fa7e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054fa81: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054fa84: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0054fa87:; BB(0x0054fa87);
    /* 0054fa87: jmp 0x54fa43 */ goto L_0054fa43;
L_0054fa89:; BB(0x0054fa89);
    /* 0054fa89: jmp 0x54ff96 */ goto L_0054ff96;
L_0054fa8e:; BB(0x0054fa8e);
    /* 0054fa8e: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0054fa95: jmp 0x54faa0 */ goto L_0054faa0;
L_0054fa97:; BB(0x0054fa97);
    /* 0054fa97: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054fa9a: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0054fa9d: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_0054faa0:; BB(0x0054faa0);
    /* 0054faa0: cmp dword ptr [ebp - 8], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054faa4: jge 0x54fab2 */ if ((fS==fO)) goto L_0054fab2;
L_0054faa6:; BB(0x0054faa6);
    /* 0054faa6: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054faa9: add edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0054faac: mov byte ptr [edx + 0x14], 0xff */ W8((u32)(r_edx+0x14u), 0xffu);
    /* 0054fab0: jmp 0x54fa97 */ goto L_0054fa97;
L_0054fab2:; BB(0x0054fab2);
    /* 0054fab2: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054fab5: movsx ecx, byte ptr [eax + 0x19] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x19u));
    /* 0054fab9: cmp ecx, 0x29 */ {  u32 a = r_ecx; u32 b = 0x29u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054fabc: je 0x54faca */ if (fZ) goto L_0054faca;
L_0054fabe:; BB(0x0054fabe);
    /* 0054fabe: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054fac1: movsx eax, byte ptr [edx + 0x19] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x19u));
    /* 0054fac5: cmp eax, 0x15 */ {  u32 a = r_eax; u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054fac8: jne 0x54facf */ if (!fZ) goto L_0054facf;
L_0054faca:; BB(0x0054faca);
    /* 0054faca: jmp 0x54fb74 */ goto L_0054fb74;
L_0054facf:; BB(0x0054facf);
    /* 0054facf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054fad2: cmp dword ptr [ecx + 0x10], 9 */ {  u32 a = R32((u32)(r_ecx+0x10u)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054fad6: jne 0x54faf4 */ if (!fZ) goto L_0054faf4;
L_0054fad8:; BB(0x0054fad8);
    /* 0054fad8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054fadb: call 0x54cec0 */ r_esp -= 4; W32(r_esp, 0x54fae0u); f_0054cec0();
    /* 0054fae0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054fae3: jle 0x54faf4 */ if ((fZ||fS!=fO)) goto L_0054faf4;
L_0054fae5:; BB(0x0054fae5);
    /* 0054fae5: push 0x2f */ { u32 v = 0x2fu; r_esp -= 4; W32(r_esp, v); }
    /* 0054fae7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054faea: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x54faefu); f_005519a0();
    /* 0054faef: jmp 0x54fb74 */ goto L_0054fb74;
L_0054faf4:; BB(0x0054faf4);
    /* 0054faf4: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 0054faf6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054faf9: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x54fafeu); f_005519a0();
    /* 0054fafe: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0054fb05: jmp 0x54fb10 */ goto L_0054fb10;
L_0054fb07:; BB(0x0054fb07);
    /* 0054fb07: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054fb0a: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0054fb0d: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0054fb10:; BB(0x0054fb10);
    /* 0054fb10: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054fb13: call 0x54c540 */ r_esp -= 4; W32(r_esp, 0x54fb18u); f_0054c540();
    /* 0054fb18: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054fb1b: jge 0x54fb6f */ if ((fS==fO)) goto L_0054fb6f;
L_0054fb1d:; BB(0x0054fb1d);
    /* 0054fb1d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054fb20: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054fb23: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 0054fb28: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054fb29: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x54fb2eu); f_00641280();
    /* 0054fb2e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054fb31: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054fb32: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054fb35: call 0x54cf20 */ r_esp -= 4; W32(r_esp, 0x54fb3au); f_0054cf20();
    /* 0054fb3a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054fb3d: jg 0x54fb58 */ if ((!fZ&&fS==fO)) goto L_0054fb58;
L_0054fb3f:; BB(0x0054fb3f);
    /* 0054fb3f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054fb42: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054fb45: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 0054fb4a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054fb4b: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x54fb50u); f_00641280();
    /* 0054fb50: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054fb53: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054fb56: jne 0x54fb6d */ if (!fZ) goto L_0054fb6d;
L_0054fb58:; BB(0x0054fb58);
    /* 0054fb58: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054fb5b: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054fb5e: mov cl, byte ptr [ebp - 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0054fb61: mov byte ptr [eax + 0x14], cl */ W8((u32)(r_eax+0x14u), (u8)r_ecx);
    /* 0054fb64: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054fb67: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0054fb6a: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0054fb6d:; BB(0x0054fb6d);
    /* 0054fb6d: jmp 0x54fb07 */ goto L_0054fb07;
L_0054fb6f:; BB(0x0054fb6f);
    /* 0054fb6f: jmp 0x54ff96 */ goto L_0054ff96;
L_0054fb74:; BB(0x0054fb74);
    /* 0054fb74: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054fb77: call 0x54cae0 */ r_esp -= 4; W32(r_esp, 0x54fb7cu); f_0054cae0();
    /* 0054fb7c: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0054fb7f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054fb81: je 0x54fbe4 */ if (fZ) goto L_0054fbe4;
L_0054fb83:; BB(0x0054fb83);
    /* 0054fb83: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054fb86: call 0x54cec0 */ r_esp -= 4; W32(r_esp, 0x54fb8bu); f_0054cec0();
    /* 0054fb8b: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054fb8e: jne 0x54fbe4 */ if (!fZ) goto L_0054fbe4;
L_0054fb90:; BB(0x0054fb90);
    /* 0054fb90: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0054fb97: jmp 0x54fba2 */ goto L_0054fba2;
L_0054fb99:; BB(0x0054fb99);
    /* 0054fb99: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054fb9c: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0054fb9f: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_0054fba2:; BB(0x0054fba2);
    /* 0054fba2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054fba5: call 0x54c540 */ r_esp -= 4; W32(r_esp, 0x54fbaau); f_0054c540();
    /* 0054fbaa: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054fbad: jge 0x54fbdf */ if ((fS==fO)) goto L_0054fbdf;
L_0054fbaf:; BB(0x0054fbaf);
    /* 0054fbaf: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054fbb2: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054fbb5: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 0054fbba: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054fbbb: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x54fbc0u); f_00641280();
    /* 0054fbc0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054fbc3: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054fbc6: jne 0x54fbdd */ if (!fZ) goto L_0054fbdd;
L_0054fbc8:; BB(0x0054fbc8);
    /* 0054fbc8: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054fbcb: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0054fbce: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0054fbd1: mov byte ptr [edx + 0x14], al */ W8((u32)(r_edx+0x14u), (u8)r_eax);
    /* 0054fbd4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054fbd7: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0054fbda: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0054fbdd:; BB(0x0054fbdd);
    /* 0054fbdd: jmp 0x54fb99 */ goto L_0054fb99;
L_0054fbdf:; BB(0x0054fbdf);
    /* 0054fbdf: jmp 0x54ff96 */ goto L_0054ff96;
L_0054fbe4:; BB(0x0054fbe4);
    /* 0054fbe4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054fbe7: call 0x54cae0 */ r_esp -= 4; W32(r_esp, 0x54fbecu); f_0054cae0();
    /* 0054fbec: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0054fbef: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054fbf1: je 0x54fc7a */ if (fZ) goto L_0054fc7a;
L_0054fbf7:; BB(0x0054fbf7);
    /* 0054fbf7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054fbfa: call 0x54cec0 */ r_esp -= 4; W32(r_esp, 0x54fbffu); f_0054cec0();
    /* 0054fbff: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054fc02: jl 0x54fc7a */ if ((fS!=fO)) goto L_0054fc7a;
L_0054fc04:; BB(0x0054fc04);
    /* 0054fc04: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0054fc0b: jmp 0x54fc16 */ goto L_0054fc16;
L_0054fc0d:; BB(0x0054fc0d);
    /* 0054fc0d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054fc10: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054fc13: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0054fc16:; BB(0x0054fc16);
    /* 0054fc16: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054fc19: call 0x54c540 */ r_esp -= 4; W32(r_esp, 0x54fc1eu); f_0054c540();
    /* 0054fc1e: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054fc21: jge 0x54fc75 */ if ((fS==fO)) goto L_0054fc75;
L_0054fc23:; BB(0x0054fc23);
    /* 0054fc23: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054fc26: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054fc29: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0054fc2e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054fc2f: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x54fc34u); f_00641280();
    /* 0054fc34: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054fc37: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054fc38: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054fc3b: call 0x54cf20 */ r_esp -= 4; W32(r_esp, 0x54fc40u); f_0054cf20();
    /* 0054fc40: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054fc43: jg 0x54fc5e */ if ((!fZ&&fS==fO)) goto L_0054fc5e;
L_0054fc45:; BB(0x0054fc45);
    /* 0054fc45: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054fc48: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054fc4b: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0054fc50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054fc51: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x54fc56u); f_00641280();
    /* 0054fc56: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054fc59: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054fc5c: jne 0x54fc73 */ if (!fZ) goto L_0054fc73;
L_0054fc5e:; BB(0x0054fc5e);
    /* 0054fc5e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054fc61: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0054fc64: mov dl, byte ptr [ebp - 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0054fc67: mov byte ptr [ecx + 0x14], dl */ W8((u32)(r_ecx+0x14u), (u8)r_edx);
    /* 0054fc6a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054fc6d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054fc70: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0054fc73:; BB(0x0054fc73);
    /* 0054fc73: jmp 0x54fc0d */ goto L_0054fc0d;
L_0054fc75:; BB(0x0054fc75);
    /* 0054fc75: jmp 0x54ff96 */ goto L_0054ff96;
L_0054fc7a:; BB(0x0054fc7a);
    /* 0054fc7a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054fc7d: call 0x54cec0 */ r_esp -= 4; W32(r_esp, 0x54fc82u); f_0054cec0();
    /* 0054fc82: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054fc85: jne 0x54fc9c */ if (!fZ) goto L_0054fc9c;
L_0054fc87:; BB(0x0054fc87);
    /* 0054fc87: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0054fc89: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0054fc8b: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0054fc8d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054fc90: call 0x551330 */ r_esp -= 4; W32(r_esp, 0x54fc95u); f_00551330();
    /* 0054fc95: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0054fc98: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054fc9a: jne 0x54fcc6 */ if (!fZ) goto L_0054fcc6;
L_0054fc9c:; BB(0x0054fc9c);
    /* 0054fc9c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054fc9f: call 0x54cec0 */ r_esp -= 4; W32(r_esp, 0x54fca4u); f_0054cec0();
    /* 0054fca4: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054fca7: jne 0x54fd55 */ if (!fZ) goto L_0054fd55;
L_0054fcad:; BB(0x0054fcad);
    /* 0054fcad: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0054fcaf: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0054fcb1: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0054fcb3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054fcb6: call 0x551330 */ r_esp -= 4; W32(r_esp, 0x54fcbbu); f_00551330();
    /* 0054fcbb: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0054fcbe: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054fcc0: je 0x54fd55 */ if (fZ) goto L_0054fd55;
L_0054fcc6:; BB(0x0054fcc6);
    /* 0054fcc6: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0054fccd: jmp 0x54fcd8 */ goto L_0054fcd8;
L_0054fccf:; BB(0x0054fccf);
    /* 0054fccf: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054fcd2: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054fcd5: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0054fcd8:; BB(0x0054fcd8);
    /* 0054fcd8: cmp dword ptr [ebp - 8], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054fcdc: jge 0x54fcf7 */ if ((fS==fO)) goto L_0054fcf7;
L_0054fcde:; BB(0x0054fcde);
    /* 0054fcde: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054fce1: add ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0054fce4: movsx edx, byte ptr [ecx + 0x14] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x14u));
    /* 0054fce8: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054fceb: jne 0x54fcf5 */ if (!fZ) goto L_0054fcf5;
L_0054fced:; BB(0x0054fced);
    /* 0054fced: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054fcf0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0054fcf3: jmp 0x54fcf7 */ goto L_0054fcf7;
L_0054fcf5:; BB(0x0054fcf5);
    /* 0054fcf5: jmp 0x54fccf */ goto L_0054fccf;
L_0054fcf7:; BB(0x0054fcf7);
    /* 0054fcf7: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0054fcfe: jmp 0x54fd09 */ goto L_0054fd09;
L_0054fd00:; BB(0x0054fd00);
    /* 0054fd00: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054fd03: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0054fd06: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_0054fd09:; BB(0x0054fd09);
    /* 0054fd09: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054fd0c: call 0x54c540 */ r_esp -= 4; W32(r_esp, 0x54fd11u); f_0054c540();
    /* 0054fd11: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054fd14: jge 0x54fd46 */ if ((fS==fO)) goto L_0054fd46;
L_0054fd16:; BB(0x0054fd16);
    /* 0054fd16: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054fd19: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054fd1c: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 0054fd21: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054fd22: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x54fd27u); f_00641280();
    /* 0054fd27: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054fd2a: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054fd2d: jne 0x54fd44 */ if (!fZ) goto L_0054fd44;
L_0054fd2f:; BB(0x0054fd2f);
    /* 0054fd2f: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054fd32: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0054fd35: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0054fd38: mov byte ptr [edx + 0x14], al */ W8((u32)(r_edx+0x14u), (u8)r_eax);
    /* 0054fd3b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054fd3e: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0054fd41: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0054fd44:; BB(0x0054fd44);
    /* 0054fd44: jmp 0x54fd00 */ goto L_0054fd00;
L_0054fd46:; BB(0x0054fd46);
    /* 0054fd46: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0054fd48: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054fd4b: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x54fd50u); f_005519a0();
    /* 0054fd50: jmp 0x54ff96 */ goto L_0054ff96;
L_0054fd55:; BB(0x0054fd55);
    /* 0054fd55: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054fd58: call 0x551960 */ r_esp -= 4; W32(r_esp, 0x54fd5du); f_00551960();
    /* 0054fd5d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054fd60: call 0x54cec0 */ r_esp -= 4; W32(r_esp, 0x54fd65u); f_0054cec0();
    /* 0054fd65: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054fd68: jne 0x54fd7f */ if (!fZ) goto L_0054fd7f;
L_0054fd6a:; BB(0x0054fd6a);
    /* 0054fd6a: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0054fd6c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054fd6e: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0054fd70: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054fd73: call 0x551330 */ r_esp -= 4; W32(r_esp, 0x54fd78u); f_00551330();
    /* 0054fd78: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0054fd7b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054fd7d: jne 0x54fda9 */ if (!fZ) goto L_0054fda9;
L_0054fd7f:; BB(0x0054fd7f);
    /* 0054fd7f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054fd82: call 0x54cec0 */ r_esp -= 4; W32(r_esp, 0x54fd87u); f_0054cec0();
    /* 0054fd87: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054fd8a: jne 0x54fe38 */ if (!fZ) goto L_0054fe38;
L_0054fd90:; BB(0x0054fd90);
    /* 0054fd90: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0054fd92: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054fd94: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0054fd96: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054fd99: call 0x551330 */ r_esp -= 4; W32(r_esp, 0x54fd9eu); f_00551330();
    /* 0054fd9e: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0054fda1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054fda3: je 0x54fe38 */ if (fZ) goto L_0054fe38;
L_0054fda9:; BB(0x0054fda9);
    /* 0054fda9: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0054fdab: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054fdae: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x54fdb3u); f_005519a0();
    /* 0054fdb3: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0054fdba: jmp 0x54fdc5 */ goto L_0054fdc5;
L_0054fdbc:; BB(0x0054fdbc);
    /* 0054fdbc: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054fdbf: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0054fdc2: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_0054fdc5:; BB(0x0054fdc5);
    /* 0054fdc5: cmp dword ptr [ebp - 8], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054fdc9: jge 0x54fde4 */ if ((fS==fO)) goto L_0054fde4;
L_0054fdcb:; BB(0x0054fdcb);
    /* 0054fdcb: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054fdce: add edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0054fdd1: movsx eax, byte ptr [edx + 0x14] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x14u));
    /* 0054fdd5: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054fdd8: jne 0x54fde2 */ if (!fZ) goto L_0054fde2;
L_0054fdda:; BB(0x0054fdda);
    /* 0054fdda: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054fddd: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0054fde0: jmp 0x54fde4 */ goto L_0054fde4;
L_0054fde2:; BB(0x0054fde2);
    /* 0054fde2: jmp 0x54fdbc */ goto L_0054fdbc;
L_0054fde4:; BB(0x0054fde4);
    /* 0054fde4: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0054fdeb: jmp 0x54fdf6 */ goto L_0054fdf6;
L_0054fded:; BB(0x0054fded);
    /* 0054fded: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054fdf0: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0054fdf3: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0054fdf6:; BB(0x0054fdf6);
    /* 0054fdf6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054fdf9: call 0x54c540 */ r_esp -= 4; W32(r_esp, 0x54fdfeu); f_0054c540();
    /* 0054fdfe: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054fe01: jge 0x54fe33 */ if ((fS==fO)) goto L_0054fe33;
L_0054fe03:; BB(0x0054fe03);
    /* 0054fe03: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054fe06: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054fe09: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 0054fe0e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054fe0f: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x54fe14u); f_00641280();
    /* 0054fe14: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054fe17: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054fe1a: jne 0x54fe31 */ if (!fZ) goto L_0054fe31;
L_0054fe1c:; BB(0x0054fe1c);
    /* 0054fe1c: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054fe1f: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054fe22: mov cl, byte ptr [ebp - 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0054fe25: mov byte ptr [eax + 0x14], cl */ W8((u32)(r_eax+0x14u), (u8)r_ecx);
    /* 0054fe28: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054fe2b: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0054fe2e: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0054fe31:; BB(0x0054fe31);
    /* 0054fe31: jmp 0x54fded */ goto L_0054fded;
L_0054fe33:; BB(0x0054fe33);
    /* 0054fe33: jmp 0x54ff96 */ goto L_0054ff96;
L_0054fe38:; BB(0x0054fe38);
    /* 0054fe38: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054fe3b: call 0x551960 */ r_esp -= 4; W32(r_esp, 0x54fe40u); f_00551960();
    /* 0054fe40: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054fe43: call 0x54cdc0 */ r_esp -= 4; W32(r_esp, 0x54fe48u); f_0054cdc0();
    /* 0054fe48: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0054fe4b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054fe4d: je 0x54feba */ if (fZ) goto L_0054feba;
L_0054fe4f:; BB(0x0054fe4f);
    /* 0054fe4f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054fe52: call 0x54cec0 */ r_esp -= 4; W32(r_esp, 0x54fe57u); f_0054cec0();
    /* 0054fe57: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054fe5a: jne 0x54feba */ if (!fZ) goto L_0054feba;
L_0054fe5c:; BB(0x0054fe5c);
    /* 0054fe5c: push 0x2f */ { u32 v = 0x2fu; r_esp -= 4; W32(r_esp, v); }
    /* 0054fe5e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054fe61: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x54fe66u); f_005519a0();
    /* 0054fe66: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0054fe6d: jmp 0x54fe78 */ goto L_0054fe78;
L_0054fe6f:; BB(0x0054fe6f);
    /* 0054fe6f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054fe72: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0054fe75: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_0054fe78:; BB(0x0054fe78);
    /* 0054fe78: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054fe7b: call 0x54c540 */ r_esp -= 4; W32(r_esp, 0x54fe80u); f_0054c540();
    /* 0054fe80: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054fe83: jge 0x54feb5 */ if ((fS==fO)) goto L_0054feb5;
L_0054fe85:; BB(0x0054fe85);
    /* 0054fe85: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054fe88: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054fe8b: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 0054fe90: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054fe91: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x54fe96u); f_00641280();
    /* 0054fe96: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054fe99: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054fe9c: jne 0x54feb3 */ if (!fZ) goto L_0054feb3;
L_0054fe9e:; BB(0x0054fe9e);
    /* 0054fe9e: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054fea1: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0054fea4: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0054fea7: mov byte ptr [edx + 0x14], al */ W8((u32)(r_edx+0x14u), (u8)r_eax);
    /* 0054feaa: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054fead: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0054feb0: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0054feb3:; BB(0x0054feb3);
    /* 0054feb3: jmp 0x54fe6f */ goto L_0054fe6f;
L_0054feb5:; BB(0x0054feb5);
    /* 0054feb5: jmp 0x54ff96 */ goto L_0054ff96;
L_0054feba:; BB(0x0054feba);
    /* 0054feba: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054febd: call 0x54cec0 */ r_esp -= 4; W32(r_esp, 0x54fec2u); f_0054cec0();
    /* 0054fec2: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054fec5: jne 0x54ff2d */ if (!fZ) goto L_0054ff2d;
L_0054fec7:; BB(0x0054fec7);
    /* 0054fec7: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0054fec9: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0054fecb: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0054fecd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054fed0: call 0x551330 */ r_esp -= 4; W32(r_esp, 0x54fed5u); f_00551330();
    /* 0054fed5: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0054fed8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054feda: je 0x54ff2d */ if (fZ) goto L_0054ff2d;
L_0054fedc:; BB(0x0054fedc);
    /* 0054fedc: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0054fee3: jmp 0x54feee */ goto L_0054feee;
L_0054fee5:; BB(0x0054fee5);
    /* 0054fee5: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054fee8: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054feeb: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0054feee:; BB(0x0054feee);
    /* 0054feee: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054fef1: call 0x54c540 */ r_esp -= 4; W32(r_esp, 0x54fef6u); f_0054c540();
    /* 0054fef6: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054fef9: jge 0x54ff21 */ if ((fS==fO)) goto L_0054ff21;
L_0054fefb:; BB(0x0054fefb);
    /* 0054fefb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054fefe: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054ff01: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0054ff06: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054ff07: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x54ff0cu); f_00641280();
    /* 0054ff0c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054ff0f: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054ff12: jne 0x54ff1f */ if (!fZ) goto L_0054ff1f;
L_0054ff14:; BB(0x0054ff14);
    /* 0054ff14: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054ff17: mov dl, byte ptr [ebp - 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0054ff1a: mov byte ptr [ecx + 0x16], dl */ W8((u32)(r_ecx+0x16u), (u8)r_edx);
    /* 0054ff1d: jmp 0x54ff21 */ goto L_0054ff21;
L_0054ff1f:; BB(0x0054ff1f);
    /* 0054ff1f: jmp 0x54fee5 */ goto L_0054fee5;
L_0054ff21:; BB(0x0054ff21);
    /* 0054ff21: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0054ff23: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054ff26: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x54ff2bu); f_005519a0();
    /* 0054ff2b: jmp 0x54ff96 */ goto L_0054ff96;
L_0054ff2d:; BB(0x0054ff2d);
    /* 0054ff2d: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0054ff34: jmp 0x54ff3f */ goto L_0054ff3f;
L_0054ff36:; BB(0x0054ff36);
    /* 0054ff36: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054ff39: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054ff3c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0054ff3f:; BB(0x0054ff3f);
    /* 0054ff3f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054ff42: call 0x54c540 */ r_esp -= 4; W32(r_esp, 0x54ff47u); f_0054c540();
    /* 0054ff47: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054ff4a: jge 0x54ff7c */ if ((fS==fO)) goto L_0054ff7c;
L_0054ff4c:; BB(0x0054ff4c);
    /* 0054ff4c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054ff4f: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054ff52: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0054ff57: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054ff58: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x54ff5du); f_00641280();
    /* 0054ff5d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054ff60: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054ff63: jne 0x54ff7a */ if (!fZ) goto L_0054ff7a;
L_0054ff65:; BB(0x0054ff65);
    /* 0054ff65: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054ff68: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0054ff6b: mov dl, byte ptr [ebp - 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0054ff6e: mov byte ptr [ecx + 0x14], dl */ W8((u32)(r_ecx+0x14u), (u8)r_edx);
    /* 0054ff71: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054ff74: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054ff77: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0054ff7a:; BB(0x0054ff7a);
    /* 0054ff7a: jmp 0x54ff36 */ goto L_0054ff36;
L_0054ff7c:; BB(0x0054ff7c);
    /* 0054ff7c: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054ff80: jle 0x54ff8e */ if ((fZ||fS!=fO)) goto L_0054ff8e;
L_0054ff82:; BB(0x0054ff82);
    /* 0054ff82: push 0x31 */ { u32 v = 0x31u; r_esp -= 4; W32(r_esp, v); }
    /* 0054ff84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054ff87: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x54ff8cu); f_005519a0();
    /* 0054ff8c: jmp 0x54ff96 */ goto L_0054ff96;
L_0054ff8e:; BB(0x0054ff8e);
    /* 0054ff8e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054ff91: call 0x551960 */ r_esp -= 4; W32(r_esp, 0x54ff96u); f_00551960();
L_0054ff96:; BB(0x0054ff96);
    /* 0054ff96: mov esp, ebp */ r_esp = r_ebp;
    /* 0054ff98: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054ff99: ret  */ FN_RET(0x0054f5a0); r_esp += 4; return;
}

void f_0054ffd0(void) /* sub_54FFD0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0054ffd0);
    /* 0054ffd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054ffd1: mov ebp, esp */ r_ebp = r_esp;
    /* 0054ffd3: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0054ffd6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0054ffd9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0054ffe0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054ffe3: call 0x551960 */ r_esp -= 4; W32(r_esp, 0x54ffe8u); f_00551960();
    /* 0054ffe8: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0054ffea: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0054ffec: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0054ffee: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054fff1: call 0x551330 */ r_esp -= 4; W32(r_esp, 0x54fff6u); f_00551330();
    /* 0054fff6: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0054fff9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054fffb: je 0x55000c */ if (fZ) goto L_0055000c;
L_0054fffd:; BB(0x0054fffd);
    /* 0054fffd: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0054ffff: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550002: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x550007u); f_005519a0();
    /* 00550007: jmp 0x5503e7 */ goto L_005503e7;
L_0055000c:; BB(0x0055000c);
    /* 0055000c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055000f: cmp dword ptr [ecx + 0x10], -1 */ {  u32 a = R32((u32)(r_ecx+0x10u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00550013: jle 0x5500c8 */ if ((fZ||fS!=fO)) goto L_005500c8;
L_00550019:; BB(0x00550019);
    /* 00550019: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055001c: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 0055001f: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00550022: cmp dword ptr [ebp - 0x10], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00550026: ja 0x5500c8 */ if ((!fC&&!fZ)) goto L_005500c8;
L_0055002c:; BB(0x0055002c);
    /* 0055002c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055002f: jmp dword ptr [ecx*4 + 0x5503ec] */ { u32 t = R32((u32)(r_ecx*4+0x5503ecu)); switch (t) { case 0x550036u: goto L_00550036; case 0x55004du: goto L_0055004d; case 0x550057u: goto L_00550057; case 0x550061u: goto L_00550061; default: UNSUP(0x0055002f, "jump table entry is not a known target"); } }
L_00550036:; BB(0x00550036);
    /* 00550036: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00550038: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055003b: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x550040u); f_005519a0();
    /* 00550040: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550043: call 0x551920 */ r_esp -= 4; W32(r_esp, 0x550048u); f_00551920();
    /* 00550048: jmp 0x5503e7 */ goto L_005503e7;
L_0055004d:; BB(0x0055004d);
    /* 0055004d: push 0x27 */ { u32 v = 0x27u; r_esp -= 4; W32(r_esp, v); }
    /* 0055004f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550052: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x550057u); f_005519a0();
L_00550057:; BB(0x00550057);
    /* 00550057: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 00550059: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055005c: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x550061u); f_005519a0();
L_00550061:; BB(0x00550061);
    /* 00550061: push 0x2b */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 00550063: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550066: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x55006bu); f_005519a0();
    /* 0055006b: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00550072: jmp 0x55007d */ goto L_0055007d;
L_00550074:; BB(0x00550074);
    /* 00550074: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00550077: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055007a: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0055007d:; BB(0x0055007d);
    /* 0055007d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550080: call 0x54c540 */ r_esp -= 4; W32(r_esp, 0x550085u); f_0054c540();
    /* 00550085: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00550088: jge 0x5500c3 */ if ((fS==fO)) goto L_005500c3;
L_0055008a:; BB(0x0055008a);
    /* 0055008a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055008d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550090: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 00550095: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00550096: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x55009bu); f_00641280();
    /* 0055009b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055009e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055009f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005500a2: call 0x54cf20 */ r_esp -= 4; W32(r_esp, 0x5500a7u); f_0054cf20();
    /* 005500a7: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005500aa: jle 0x5500c1 */ if ((fZ||fS!=fO)) goto L_005500c1;
L_005500ac:; BB(0x005500ac);
    /* 005500ac: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005500af: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005500b2: mov cl, byte ptr [ebp - 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 005500b5: mov byte ptr [eax + 0x14], cl */ W8((u32)(r_eax+0x14u), (u8)r_ecx);
    /* 005500b8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005500bb: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005500be: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_005500c1:; BB(0x005500c1);
    /* 005500c1: jmp 0x550074 */ goto L_00550074;
L_005500c3:; BB(0x005500c3);
    /* 005500c3: jmp 0x5503e7 */ goto L_005503e7;
L_005500c8:; BB(0x005500c8);
    /* 005500c8: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 005500ca: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005500cc: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005500ce: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005500d1: call 0x551330 */ r_esp -= 4; W32(r_esp, 0x5500d6u); f_00551330();
    /* 005500d6: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005500d9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005500db: je 0x5500ec */ if (fZ) goto L_005500ec;
L_005500dd:; BB(0x005500dd);
    /* 005500dd: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 005500df: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005500e2: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x5500e7u); f_005519a0();
    /* 005500e7: jmp 0x5503e7 */ goto L_005503e7;
L_005500ec:; BB(0x005500ec);
    /* 005500ec: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 005500ee: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005500f0: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005500f2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005500f5: call 0x551330 */ r_esp -= 4; W32(r_esp, 0x5500fau); f_00551330();
    /* 005500fa: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005500fd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005500ff: je 0x550110 */ if (fZ) goto L_00550110;
L_00550101:; BB(0x00550101);
    /* 00550101: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00550103: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550106: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x55010bu); f_005519a0();
    /* 0055010b: jmp 0x5503e7 */ goto L_005503e7;
L_00550110:; BB(0x00550110);
    /* 00550110: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550113: call 0x5515d0 */ r_esp -= 4; W32(r_esp, 0x550118u); f_005515d0();
    /* 00550118: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0055011b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055011d: je 0x55012e */ if (fZ) goto L_0055012e;
L_0055011f:; BB(0x0055011f);
    /* 0055011f: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 00550121: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550124: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x550129u); f_005519a0();
    /* 00550129: jmp 0x5503e7 */ goto L_005503e7;
L_0055012e:; BB(0x0055012e);
    /* 0055012e: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 00550130: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00550132: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00550134: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550137: call 0x551670 */ r_esp -= 4; W32(r_esp, 0x55013cu); f_00551670();
    /* 0055013c: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0055013f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00550141: je 0x5501a3 */ if (fZ) goto L_005501a3;
L_00550143:; BB(0x00550143);
    /* 00550143: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550146: call 0x5519e0 */ r_esp -= 4; W32(r_esp, 0x55014bu); f_005519e0();
    /* 0055014b: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0055014e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00550150: je 0x55019b */ if (fZ) goto L_0055019b;
L_00550152:; BB(0x00550152);
    /* 00550152: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550155: movsx eax, byte ptr [edx + 0x17] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x17u));
    /* 00550159: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055015c: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 00550161: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00550162: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550165: call 0x54c590 */ r_esp -= 4; W32(r_esp, 0x55016au); f_0054c590();
    /* 0055016a: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055016d: jl 0x55019b */ if ((fS!=fO)) goto L_0055019b;
L_0055016f:; BB(0x0055016f);
    /* 0055016f: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550172: movsx ecx, byte ptr [eax + 0x17] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x17u));
    /* 00550176: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550179: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0055017e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055017f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550182: call 0x54c590 */ r_esp -= 4; W32(r_esp, 0x550187u); f_0054c590();
    /* 00550187: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055018a: jge 0x55019b */ if ((fS==fO)) goto L_0055019b;
L_0055018c:; BB(0x0055018c);
    /* 0055018c: push 0x1a */ { u32 v = 0x1au; r_esp -= 4; W32(r_esp, v); }
    /* 0055018e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550191: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x550196u); f_005519a0();
    /* 00550196: jmp 0x5503e7 */ goto L_005503e7;
L_0055019b:; BB(0x0055019b);
    /* 0055019b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055019e: call 0x551960 */ r_esp -= 4; W32(r_esp, 0x5501a3u); f_00551960();
L_005501a3:; BB(0x005501a3);
    /* 005501a3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005501a6: call 0x551890 */ r_esp -= 4; W32(r_esp, 0x5501abu); f_00551890();
    /* 005501ab: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005501ae: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005501b0: je 0x5501c1 */ if (fZ) goto L_005501c1;
L_005501b2:; BB(0x005501b2);
    /* 005501b2: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 005501b4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005501b7: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x5501bcu); f_005519a0();
    /* 005501bc: jmp 0x5503e7 */ goto L_005503e7;
L_005501c1:; BB(0x005501c1);
    /* 005501c1: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 005501c3: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005501c5: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005501c7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005501ca: call 0x551330 */ r_esp -= 4; W32(r_esp, 0x5501cfu); f_00551330();
    /* 005501cf: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005501d2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005501d4: je 0x550246 */ if (fZ) goto L_00550246;
L_005501d6:; BB(0x005501d6);
    /* 005501d6: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005501d9: movsx ecx, byte ptr [eax + 0x16] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x16u));
    /* 005501dd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005501de: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005501e1: movsx eax, byte ptr [edx + 0x14] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x14u));
    /* 005501e5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005501e6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005501e9: call 0x551b50 */ r_esp -= 4; W32(r_esp, 0x5501eeu); f_00551b50();
    /* 005501ee: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005501f1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005501f3: jne 0x55023e */ if (!fZ) goto L_0055023e;
L_005501f5:; BB(0x005501f5);
    /* 005501f5: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005501f8: movsx eax, byte ptr [edx + 0x16] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x16u));
    /* 005501fc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005501ff: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 00550204: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00550205: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x55020au); f_00641280();
    /* 0055020a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055020d: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00550210: je 0x55022f */ if (fZ) goto L_0055022f;
L_00550212:; BB(0x00550212);
    /* 00550212: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550215: movsx ecx, byte ptr [eax + 0x16] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x16u));
    /* 00550219: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055021c: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 00550221: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00550222: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x550227u); f_00641280();
    /* 00550227: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055022a: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055022d: jne 0x55023e */ if (!fZ) goto L_0055023e;
L_0055022f:; BB(0x0055022f);
    /* 0055022f: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00550231: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550234: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x550239u); f_005519a0();
    /* 00550239: jmp 0x5503e7 */ goto L_005503e7;
L_0055023e:; BB(0x0055023e);
    /* 0055023e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550241: call 0x551960 */ r_esp -= 4; W32(r_esp, 0x550246u); f_00551960();
L_00550246:; BB(0x00550246);
    /* 00550246: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 00550248: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055024a: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0055024c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055024f: call 0x551670 */ r_esp -= 4; W32(r_esp, 0x550254u); f_00551670();
    /* 00550254: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00550257: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00550259: je 0x550281 */ if (fZ) goto L_00550281;
L_0055025b:; BB(0x0055025b);
    /* 0055025b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055025e: call 0x5519e0 */ r_esp -= 4; W32(r_esp, 0x550263u); f_005519e0();
    /* 00550263: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00550266: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00550268: je 0x550279 */ if (fZ) goto L_00550279;
L_0055026a:; BB(0x0055026a);
    /* 0055026a: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0055026c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055026f: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x550274u); f_005519a0();
    /* 00550274: jmp 0x5503e7 */ goto L_005503e7;
L_00550279:; BB(0x00550279);
    /* 00550279: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055027c: call 0x551960 */ r_esp -= 4; W32(r_esp, 0x550281u); f_00551960();
L_00550281:; BB(0x00550281);
    /* 00550281: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 00550283: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00550285: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00550287: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055028a: call 0x551330 */ r_esp -= 4; W32(r_esp, 0x55028fu); f_00551330();
    /* 0055028f: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00550292: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00550294: je 0x5502e7 */ if (fZ) goto L_005502e7;
L_00550296:; BB(0x00550296);
    /* 00550296: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550299: movsx edx, byte ptr [ecx + 0x15] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x15u));
    /* 0055029d: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005502a0: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 005502a5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005502a6: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x5502abu); f_00641280();
    /* 005502ab: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005502ae: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005502b1: jl 0x5502df */ if ((fS!=fO)) goto L_005502df;
L_005502b3:; BB(0x005502b3);
    /* 005502b3: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005502b6: movsx eax, byte ptr [edx + 0x15] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x15u));
    /* 005502ba: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005502bd: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 005502c2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005502c3: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x5502c8u); f_00641280();
    /* 005502c8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005502cb: cmp eax, 0xd */ {  u32 a = r_eax; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005502ce: jg 0x5502df */ if ((!fZ&&fS==fO)) goto L_005502df;
L_005502d0:; BB(0x005502d0);
    /* 005502d0: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 005502d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005502d5: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x5502dau); f_005519a0();
    /* 005502da: jmp 0x5503e7 */ goto L_005503e7;
L_005502df:; BB(0x005502df);
    /* 005502df: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005502e2: call 0x551960 */ r_esp -= 4; W32(r_esp, 0x5502e7u); f_00551960();
L_005502e7:; BB(0x005502e7);
    /* 005502e7: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 005502e9: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005502eb: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005502ed: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005502f0: call 0x551670 */ r_esp -= 4; W32(r_esp, 0x5502f5u); f_00551670();
    /* 005502f5: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005502f8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005502fa: je 0x550330 */ if (fZ) goto L_00550330;
L_005502fc:; BB(0x005502fc);
    /* 005502fc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005502ff: movsx edx, byte ptr [ecx + 0x17] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x17u));
    /* 00550303: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550306: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 0055030b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055030c: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x550311u); f_00641280();
    /* 00550311: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00550314: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00550317: jne 0x550328 */ if (!fZ) goto L_00550328;
L_00550319:; BB(0x00550319);
    /* 00550319: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 0055031b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055031e: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x550323u); f_005519a0();
    /* 00550323: jmp 0x5503e7 */ goto L_005503e7;
L_00550328:; BB(0x00550328);
    /* 00550328: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055032b: call 0x551960 */ r_esp -= 4; W32(r_esp, 0x550330u); f_00551960();
L_00550330:; BB(0x00550330);
    /* 00550330: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 00550332: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00550334: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00550336: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550339: call 0x551330 */ r_esp -= 4; W32(r_esp, 0x55033eu); f_00551330();
    /* 0055033e: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00550341: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00550343: je 0x550378 */ if (fZ) goto L_00550378;
L_00550345:; BB(0x00550345);
    /* 00550345: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550348: movsx ecx, byte ptr [eax + 0x16] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x16u));
    /* 0055034c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055034d: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550350: movsx eax, byte ptr [edx + 0x14] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x14u));
    /* 00550354: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00550355: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550358: call 0x551b50 */ r_esp -= 4; W32(r_esp, 0x55035du); f_00551b50();
    /* 0055035d: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00550360: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00550362: jne 0x550370 */ if (!fZ) goto L_00550370;
L_00550364:; BB(0x00550364);
    /* 00550364: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 00550366: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550369: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x55036eu); f_005519a0();
    /* 0055036e: jmp 0x5503e7 */ goto L_005503e7;
L_00550370:; BB(0x00550370);
    /* 00550370: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550373: call 0x551960 */ r_esp -= 4; W32(r_esp, 0x550378u); f_00551960();
L_00550378:; BB(0x00550378);
    /* 00550378: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0055037f: jmp 0x55038a */ goto L_0055038a;
L_00550381:; BB(0x00550381);
    /* 00550381: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00550384: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00550387: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0055038a:; BB(0x0055038a);
    /* 0055038a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055038d: call 0x54c540 */ r_esp -= 4; W32(r_esp, 0x550392u); f_0054c540();
    /* 00550392: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00550395: jge 0x5503c7 */ if ((fS==fO)) goto L_005503c7;
L_00550397:; BB(0x00550397);
    /* 00550397: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055039a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055039d: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 005503a2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005503a3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005503a6: call 0x54c590 */ r_esp -= 4; W32(r_esp, 0x5503abu); f_0054c590();
    /* 005503ab: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005503ae: jl 0x5503c5 */ if ((fS!=fO)) goto L_005503c5;
L_005503b0:; BB(0x005503b0);
    /* 005503b0: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005503b3: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005503b6: mov cl, byte ptr [ebp - 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 005503b9: mov byte ptr [eax + 0x14], cl */ W8((u32)(r_eax+0x14u), (u8)r_ecx);
    /* 005503bc: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005503bf: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005503c2: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_005503c5:; BB(0x005503c5);
    /* 005503c5: jmp 0x550381 */ goto L_00550381;
L_005503c7:; BB(0x005503c7);
    /* 005503c7: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005503cb: je 0x5503df */ if (fZ) goto L_005503df;
L_005503cd:; BB(0x005503cd);
    /* 005503cd: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005503d1: jge 0x5503df */ if ((fS==fO)) goto L_005503df;
L_005503d3:; BB(0x005503d3);
    /* 005503d3: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 005503d5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005503d8: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x5503ddu); f_005519a0();
    /* 005503dd: jmp 0x5503e7 */ goto L_005503e7;
L_005503df:; BB(0x005503df);
    /* 005503df: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005503e2: call 0x551960 */ r_esp -= 4; W32(r_esp, 0x5503e7u); f_00551960();
L_005503e7:; BB(0x005503e7);
    /* 005503e7: mov esp, ebp */ r_esp = r_ebp;
    /* 005503e9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005503ea: ret  */ FN_RET(0x0054ffd0); r_esp += 4; return;
}

