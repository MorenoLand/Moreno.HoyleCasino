#include "protos.h"

void f_00550410(void) /* sub_550410 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00550410);
    /* 00550410: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00550411: mov ebp, esp */ r_ebp = r_esp;
    /* 00550413: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00550416: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00550419: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00550420: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550423: call 0x551960 */ r_esp -= 4; W32(r_esp, 0x550428u); f_00551960();
    /* 00550428: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0055042a: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0055042c: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0055042e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550431: call 0x551330 */ r_esp -= 4; W32(r_esp, 0x550436u); f_00551330();
    /* 00550436: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00550439: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055043b: je 0x55044c */ if (fZ) goto L_0055044c;
L_0055043d:; BB(0x0055043d);
    /* 0055043d: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0055043f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550442: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x550447u); f_005519a0();
    /* 00550447: jmp 0x5507c2 */ goto L_005507c2;
L_0055044c:; BB(0x0055044c);
    /* 0055044c: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0055044e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00550450: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00550452: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550455: call 0x551330 */ r_esp -= 4; W32(r_esp, 0x55045au); f_00551330();
    /* 0055045a: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0055045d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055045f: je 0x550470 */ if (fZ) goto L_00550470;
L_00550461:; BB(0x00550461);
    /* 00550461: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00550463: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550466: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x55046bu); f_005519a0();
    /* 0055046b: jmp 0x5507c2 */ goto L_005507c2;
L_00550470:; BB(0x00550470);
    /* 00550470: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550473: cmp dword ptr [edx + 0x10], -1 */ {  u32 a = R32((u32)(r_edx+0x10u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00550477: jle 0x55052c */ if ((fZ||fS!=fO)) goto L_0055052c;
L_0055047d:; BB(0x0055047d);
    /* 0055047d: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550480: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 00550483: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00550486: cmp dword ptr [ebp - 0x10], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0055048a: ja 0x55052c */ if ((!fC&&!fZ)) goto L_0055052c;
L_00550490:; BB(0x00550490);
    /* 00550490: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00550493: jmp dword ptr [edx*4 + 0x5507c8] */ { u32 t = R32((u32)(r_edx*4+0x5507c8u)); switch (t) { case 0x55049au: goto L_0055049a; case 0x5504b1u: goto L_005504b1; case 0x5504bbu: goto L_005504bb; case 0x5504c5u: goto L_005504c5; default: UNSUP(0x00550493, "jump table entry is not a known target"); } }
L_0055049a:; BB(0x0055049a);
    /* 0055049a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055049c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055049f: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x5504a4u); f_005519a0();
    /* 005504a4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005504a7: call 0x551920 */ r_esp -= 4; W32(r_esp, 0x5504acu); f_00551920();
    /* 005504ac: jmp 0x5507c2 */ goto L_005507c2;
L_005504b1:; BB(0x005504b1);
    /* 005504b1: push 0x27 */ { u32 v = 0x27u; r_esp -= 4; W32(r_esp, v); }
    /* 005504b3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005504b6: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x5504bbu); f_005519a0();
L_005504bb:; BB(0x005504bb);
    /* 005504bb: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 005504bd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005504c0: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x5504c5u); f_005519a0();
L_005504c5:; BB(0x005504c5);
    /* 005504c5: push 0x2b */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 005504c7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005504ca: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x5504cfu); f_005519a0();
    /* 005504cf: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005504d6: jmp 0x5504e1 */ goto L_005504e1;
L_005504d8:; BB(0x005504d8);
    /* 005504d8: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005504db: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005504de: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_005504e1:; BB(0x005504e1);
    /* 005504e1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005504e4: call 0x54c540 */ r_esp -= 4; W32(r_esp, 0x5504e9u); f_0054c540();
    /* 005504e9: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005504ec: jge 0x550527 */ if ((fS==fO)) goto L_00550527;
L_005504ee:; BB(0x005504ee);
    /* 005504ee: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005504f1: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005504f4: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 005504f9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005504fa: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x5504ffu); f_00641280();
    /* 005504ff: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00550502: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00550503: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550506: call 0x54cf20 */ r_esp -= 4; W32(r_esp, 0x55050bu); f_0054cf20();
    /* 0055050b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055050e: jle 0x550525 */ if ((fZ||fS!=fO)) goto L_00550525;
L_00550510:; BB(0x00550510);
    /* 00550510: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550513: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00550516: mov dl, byte ptr [ebp - 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 00550519: mov byte ptr [ecx + 0x14], dl */ W8((u32)(r_ecx+0x14u), (u8)r_edx);
    /* 0055051c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055051f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00550522: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00550525:; BB(0x00550525);
    /* 00550525: jmp 0x5504d8 */ goto L_005504d8;
L_00550527:; BB(0x00550527);
    /* 00550527: jmp 0x5507c2 */ goto L_005507c2;
L_0055052c:; BB(0x0055052c);
    /* 0055052c: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0055052e: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00550530: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00550532: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550535: call 0x551330 */ r_esp -= 4; W32(r_esp, 0x55053au); f_00551330();
    /* 0055053a: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0055053d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055053f: je 0x550577 */ if (fZ) goto L_00550577;
L_00550541:; BB(0x00550541);
    /* 00550541: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550544: movsx eax, byte ptr [edx + 0x16] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x16u));
    /* 00550548: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00550549: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055054c: movsx edx, byte ptr [ecx + 0x14] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x14u));
    /* 00550550: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00550551: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550554: call 0x551b50 */ r_esp -= 4; W32(r_esp, 0x550559u); f_00551b50();
    /* 00550559: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0055055c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055055e: jne 0x55056f */ if (!fZ) goto L_0055056f;
L_00550560:; BB(0x00550560);
    /* 00550560: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00550562: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550565: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x55056au); f_005519a0();
    /* 0055056a: jmp 0x5507c2 */ goto L_005507c2;
L_0055056f:; BB(0x0055056f);
    /* 0055056f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550572: call 0x551960 */ r_esp -= 4; W32(r_esp, 0x550577u); f_00551960();
L_00550577:; BB(0x00550577);
    /* 00550577: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055057a: call 0x5515d0 */ r_esp -= 4; W32(r_esp, 0x55057fu); f_005515d0();
    /* 0055057f: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00550582: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00550584: je 0x550595 */ if (fZ) goto L_00550595;
L_00550586:; BB(0x00550586);
    /* 00550586: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 00550588: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055058b: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x550590u); f_005519a0();
    /* 00550590: jmp 0x5507c2 */ goto L_005507c2;
L_00550595:; BB(0x00550595);
    /* 00550595: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 00550597: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00550599: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0055059b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055059e: call 0x551670 */ r_esp -= 4; W32(r_esp, 0x5505a3u); f_00551670();
    /* 005505a3: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005505a6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005505a8: je 0x5505ed */ if (fZ) goto L_005505ed;
L_005505aa:; BB(0x005505aa);
    /* 005505aa: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005505ad: call 0x5519e0 */ r_esp -= 4; W32(r_esp, 0x5505b2u); f_005519e0();
    /* 005505b2: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005505b5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005505b7: je 0x5505e5 */ if (fZ) goto L_005505e5;
L_005505b9:; BB(0x005505b9);
    /* 005505b9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005505bc: movsx edx, byte ptr [ecx + 0x15] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x15u));
    /* 005505c0: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005505c3: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 005505c8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005505c9: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x5505ceu); f_00641280();
    /* 005505ce: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005505d1: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005505d4: jle 0x5505e5 */ if ((fZ||fS!=fO)) goto L_005505e5;
L_005505d6:; BB(0x005505d6);
    /* 005505d6: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 005505d8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005505db: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x5505e0u); f_005519a0();
    /* 005505e0: jmp 0x5507c2 */ goto L_005507c2;
L_005505e5:; BB(0x005505e5);
    /* 005505e5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005505e8: call 0x551960 */ r_esp -= 4; W32(r_esp, 0x5505edu); f_00551960();
L_005505ed:; BB(0x005505ed);
    /* 005505ed: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005505f0: call 0x551890 */ r_esp -= 4; W32(r_esp, 0x5505f5u); f_00551890();
    /* 005505f5: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005505f8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005505fa: je 0x55060b */ if (fZ) goto L_0055060b;
L_005505fc:; BB(0x005505fc);
    /* 005505fc: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 005505fe: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550601: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x550606u); f_005519a0();
    /* 00550606: jmp 0x5507c2 */ goto L_005507c2;
L_0055060b:; BB(0x0055060b);
    /* 0055060b: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0055060d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055060f: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00550611: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550614: call 0x551670 */ r_esp -= 4; W32(r_esp, 0x550619u); f_00551670();
    /* 00550619: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0055061c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055061e: je 0x550663 */ if (fZ) goto L_00550663;
L_00550620:; BB(0x00550620);
    /* 00550620: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550623: call 0x5519e0 */ r_esp -= 4; W32(r_esp, 0x550628u); f_005519e0();
    /* 00550628: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0055062b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055062d: je 0x55065b */ if (fZ) goto L_0055065b;
L_0055062f:; BB(0x0055062f);
    /* 0055062f: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550632: movsx eax, byte ptr [edx + 0x15] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x15u));
    /* 00550636: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550639: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 0055063e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055063f: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x550644u); f_00641280();
    /* 00550644: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00550647: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055064a: jge 0x55065b */ if ((fS==fO)) goto L_0055065b;
L_0055064c:; BB(0x0055064c);
    /* 0055064c: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0055064e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550651: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x550656u); f_005519a0();
    /* 00550656: jmp 0x5507c2 */ goto L_005507c2;
L_0055065b:; BB(0x0055065b);
    /* 0055065b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055065e: call 0x551960 */ r_esp -= 4; W32(r_esp, 0x550663u); f_00551960();
L_00550663:; BB(0x00550663);
    /* 00550663: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 00550665: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00550667: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00550669: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055066c: call 0x551330 */ r_esp -= 4; W32(r_esp, 0x550671u); f_00551330();
    /* 00550671: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00550674: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00550676: je 0x55069e */ if (fZ) goto L_0055069e;
L_00550678:; BB(0x00550678);
    /* 00550678: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055067b: call 0x5519e0 */ r_esp -= 4; W32(r_esp, 0x550680u); f_005519e0();
    /* 00550680: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00550683: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00550685: je 0x550696 */ if (fZ) goto L_00550696;
L_00550687:; BB(0x00550687);
    /* 00550687: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 00550689: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055068c: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x550691u); f_005519a0();
    /* 00550691: jmp 0x5507c2 */ goto L_005507c2;
L_00550696:; BB(0x00550696);
    /* 00550696: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550699: call 0x551960 */ r_esp -= 4; W32(r_esp, 0x55069eu); f_00551960();
L_0055069e:; BB(0x0055069e);
    /* 0055069e: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 005506a0: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005506a2: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005506a4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005506a7: call 0x551330 */ r_esp -= 4; W32(r_esp, 0x5506acu); f_00551330();
    /* 005506ac: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005506af: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005506b1: je 0x5506c2 */ if (fZ) goto L_005506c2;
L_005506b3:; BB(0x005506b3);
    /* 005506b3: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 005506b5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005506b8: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x5506bdu); f_005519a0();
    /* 005506bd: jmp 0x5507c2 */ goto L_005507c2;
L_005506c2:; BB(0x005506c2);
    /* 005506c2: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 005506c4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005506c6: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005506c8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005506cb: call 0x551330 */ r_esp -= 4; W32(r_esp, 0x5506d0u); f_00551330();
    /* 005506d0: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005506d3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005506d5: je 0x55070d */ if (fZ) goto L_0055070d;
L_005506d7:; BB(0x005506d7);
    /* 005506d7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005506da: movsx edx, byte ptr [ecx + 0x16] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x16u));
    /* 005506de: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005506df: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005506e2: movsx ecx, byte ptr [eax + 0x14] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x14u));
    /* 005506e6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005506e7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005506ea: call 0x551b50 */ r_esp -= 4; W32(r_esp, 0x5506efu); f_00551b50();
    /* 005506ef: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005506f2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005506f4: jne 0x550705 */ if (!fZ) goto L_00550705;
L_005506f6:; BB(0x005506f6);
    /* 005506f6: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 005506f8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005506fb: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x550700u); f_005519a0();
    /* 00550700: jmp 0x5507c2 */ goto L_005507c2;
L_00550705:; BB(0x00550705);
    /* 00550705: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550708: call 0x551960 */ r_esp -= 4; W32(r_esp, 0x55070du); f_00551960();
L_0055070d:; BB(0x0055070d);
    /* 0055070d: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0055070f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00550711: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00550713: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550716: call 0x551670 */ r_esp -= 4; W32(r_esp, 0x55071bu); f_00551670();
    /* 0055071b: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0055071e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00550720: je 0x550753 */ if (fZ) goto L_00550753;
L_00550722:; BB(0x00550722);
    /* 00550722: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550725: movsx edx, byte ptr [ecx + 0x15] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x15u));
    /* 00550729: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055072c: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 00550731: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00550732: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x550737u); f_00641280();
    /* 00550737: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055073a: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055073d: jle 0x55074b */ if ((fZ||fS!=fO)) goto L_0055074b;
L_0055073f:; BB(0x0055073f);
    /* 0055073f: push 0x21 */ { u32 v = 0x21u; r_esp -= 4; W32(r_esp, v); }
    /* 00550741: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550744: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x550749u); f_005519a0();
    /* 00550749: jmp 0x5507c2 */ goto L_005507c2;
L_0055074b:; BB(0x0055074b);
    /* 0055074b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055074e: call 0x551960 */ r_esp -= 4; W32(r_esp, 0x550753u); f_00551960();
L_00550753:; BB(0x00550753);
    /* 00550753: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0055075a: jmp 0x550765 */ goto L_00550765;
L_0055075c:; BB(0x0055075c);
    /* 0055075c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055075f: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00550762: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_00550765:; BB(0x00550765);
    /* 00550765: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550768: call 0x54c540 */ r_esp -= 4; W32(r_esp, 0x55076du); f_0054c540();
    /* 0055076d: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00550770: jge 0x5507a2 */ if ((fS==fO)) goto L_005507a2;
L_00550772:; BB(0x00550772);
    /* 00550772: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00550775: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550778: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 0055077d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055077e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550781: call 0x54c590 */ r_esp -= 4; W32(r_esp, 0x550786u); f_0054c590();
    /* 00550786: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00550789: jle 0x5507a0 */ if ((fZ||fS!=fO)) goto L_005507a0;
L_0055078b:; BB(0x0055078b);
    /* 0055078b: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055078e: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00550791: mov cl, byte ptr [ebp - 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 00550794: mov byte ptr [eax + 0x14], cl */ W8((u32)(r_eax+0x14u), (u8)r_ecx);
    /* 00550797: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055079a: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055079d: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_005507a0:; BB(0x005507a0);
    /* 005507a0: jmp 0x55075c */ goto L_0055075c;
L_005507a2:; BB(0x005507a2);
    /* 005507a2: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005507a6: je 0x5507ba */ if (fZ) goto L_005507ba;
L_005507a8:; BB(0x005507a8);
    /* 005507a8: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005507ac: jge 0x5507ba */ if ((fS==fO)) goto L_005507ba;
L_005507ae:; BB(0x005507ae);
    /* 005507ae: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 005507b0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005507b3: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x5507b8u); f_005519a0();
    /* 005507b8: jmp 0x5507c2 */ goto L_005507c2;
L_005507ba:; BB(0x005507ba);
    /* 005507ba: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005507bd: call 0x551960 */ r_esp -= 4; W32(r_esp, 0x5507c2u); f_00551960();
L_005507c2:; BB(0x005507c2);
    /* 005507c2: mov esp, ebp */ r_esp = r_ebp;
    /* 005507c4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005507c5: ret  */ FN_RET(0x00550410); r_esp += 4; return;
}

void f_005507f0(void) /* sub_5507F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005507f0);
    /* 005507f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005507f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005507f3: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005507f6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005507f9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00550800: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550803: call 0x551960 */ r_esp -= 4; W32(r_esp, 0x550808u); f_00551960();
    /* 00550808: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0055080a: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0055080c: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0055080e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550811: call 0x551330 */ r_esp -= 4; W32(r_esp, 0x550816u); f_00551330();
    /* 00550816: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00550819: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055081b: je 0x55082c */ if (fZ) goto L_0055082c;
L_0055081d:; BB(0x0055081d);
    /* 0055081d: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0055081f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550822: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x550827u); f_005519a0();
    /* 00550827: jmp 0x550b9c */ goto L_00550b9c;
L_0055082c:; BB(0x0055082c);
    /* 0055082c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055082f: cmp dword ptr [ecx + 0x10], -1 */ {  u32 a = R32((u32)(r_ecx+0x10u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00550833: jle 0x5508e8 */ if ((fZ||fS!=fO)) goto L_005508e8;
L_00550839:; BB(0x00550839);
    /* 00550839: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055083c: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 0055083f: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00550842: cmp dword ptr [ebp - 0x10], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00550846: ja 0x5508e8 */ if ((!fC&&!fZ)) goto L_005508e8;
L_0055084c:; BB(0x0055084c);
    /* 0055084c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055084f: jmp dword ptr [ecx*4 + 0x550ba0] */ { u32 t = R32((u32)(r_ecx*4+0x550ba0u)); switch (t) { case 0x550856u: goto L_00550856; case 0x55086du: goto L_0055086d; case 0x550877u: goto L_00550877; case 0x550881u: goto L_00550881; default: UNSUP(0x0055084f, "jump table entry is not a known target"); } }
L_00550856:; BB(0x00550856);
    /* 00550856: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00550858: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055085b: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x550860u); f_005519a0();
    /* 00550860: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550863: call 0x551920 */ r_esp -= 4; W32(r_esp, 0x550868u); f_00551920();
    /* 00550868: jmp 0x550b9c */ goto L_00550b9c;
L_0055086d:; BB(0x0055086d);
    /* 0055086d: push 0x27 */ { u32 v = 0x27u; r_esp -= 4; W32(r_esp, v); }
    /* 0055086f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550872: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x550877u); f_005519a0();
L_00550877:; BB(0x00550877);
    /* 00550877: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 00550879: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055087c: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x550881u); f_005519a0();
L_00550881:; BB(0x00550881);
    /* 00550881: push 0x2b */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 00550883: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550886: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x55088bu); f_005519a0();
    /* 0055088b: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00550892: jmp 0x55089d */ goto L_0055089d;
L_00550894:; BB(0x00550894);
    /* 00550894: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00550897: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055089a: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0055089d:; BB(0x0055089d);
    /* 0055089d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005508a0: call 0x54c540 */ r_esp -= 4; W32(r_esp, 0x5508a5u); f_0054c540();
    /* 005508a5: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005508a8: jge 0x5508e3 */ if ((fS==fO)) goto L_005508e3;
L_005508aa:; BB(0x005508aa);
    /* 005508aa: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005508ad: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005508b0: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 005508b5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005508b6: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x5508bbu); f_00641280();
    /* 005508bb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005508be: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005508bf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005508c2: call 0x54cf20 */ r_esp -= 4; W32(r_esp, 0x5508c7u); f_0054cf20();
    /* 005508c7: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005508ca: jle 0x5508e1 */ if ((fZ||fS!=fO)) goto L_005508e1;
L_005508cc:; BB(0x005508cc);
    /* 005508cc: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005508cf: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005508d2: mov cl, byte ptr [ebp - 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 005508d5: mov byte ptr [eax + 0x14], cl */ W8((u32)(r_eax+0x14u), (u8)r_ecx);
    /* 005508d8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005508db: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005508de: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_005508e1:; BB(0x005508e1);
    /* 005508e1: jmp 0x550894 */ goto L_00550894;
L_005508e3:; BB(0x005508e3);
    /* 005508e3: jmp 0x550b9c */ goto L_00550b9c;
L_005508e8:; BB(0x005508e8);
    /* 005508e8: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 005508ea: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005508ec: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005508ee: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005508f1: call 0x551330 */ r_esp -= 4; W32(r_esp, 0x5508f6u); f_00551330();
    /* 005508f6: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005508f9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005508fb: je 0x55090c */ if (fZ) goto L_0055090c;
L_005508fd:; BB(0x005508fd);
    /* 005508fd: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 005508ff: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550902: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x550907u); f_005519a0();
    /* 00550907: jmp 0x550b9c */ goto L_00550b9c;
L_0055090c:; BB(0x0055090c);
    /* 0055090c: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0055090e: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00550910: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00550912: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550915: call 0x551330 */ r_esp -= 4; W32(r_esp, 0x55091au); f_00551330();
    /* 0055091a: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0055091d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055091f: je 0x550930 */ if (fZ) goto L_00550930;
L_00550921:; BB(0x00550921);
    /* 00550921: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00550923: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550926: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x55092bu); f_005519a0();
    /* 0055092b: jmp 0x550b9c */ goto L_00550b9c;
L_00550930:; BB(0x00550930);
    /* 00550930: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550933: call 0x5515d0 */ r_esp -= 4; W32(r_esp, 0x550938u); f_005515d0();
    /* 00550938: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0055093b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055093d: je 0x55094e */ if (fZ) goto L_0055094e;
L_0055093f:; BB(0x0055093f);
    /* 0055093f: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 00550941: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550944: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x550949u); f_005519a0();
    /* 00550949: jmp 0x550b9c */ goto L_00550b9c;
L_0055094e:; BB(0x0055094e);
    /* 0055094e: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 00550950: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00550952: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00550954: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550957: call 0x551670 */ r_esp -= 4; W32(r_esp, 0x55095cu); f_00551670();
    /* 0055095c: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0055095f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00550961: je 0x5509c3 */ if (fZ) goto L_005509c3;
L_00550963:; BB(0x00550963);
    /* 00550963: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550966: call 0x5519e0 */ r_esp -= 4; W32(r_esp, 0x55096bu); f_005519e0();
    /* 0055096b: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0055096e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00550970: je 0x5509bb */ if (fZ) goto L_005509bb;
L_00550972:; BB(0x00550972);
    /* 00550972: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550975: movsx eax, byte ptr [edx + 0x15] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x15u));
    /* 00550979: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055097c: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 00550981: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00550982: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x550987u); f_00641280();
    /* 00550987: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055098a: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055098d: jg 0x5509ac */ if ((!fZ&&fS==fO)) goto L_005509ac;
L_0055098f:; BB(0x0055098f);
    /* 0055098f: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550992: movsx ecx, byte ptr [eax + 0x16] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x16u));
    /* 00550996: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550999: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0055099e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055099f: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x5509a4u); f_00641280();
    /* 005509a4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005509a7: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005509aa: jle 0x5509bb */ if ((fZ||fS!=fO)) goto L_005509bb;
L_005509ac:; BB(0x005509ac);
    /* 005509ac: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 005509ae: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005509b1: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x5509b6u); f_005519a0();
    /* 005509b6: jmp 0x550b9c */ goto L_00550b9c;
L_005509bb:; BB(0x005509bb);
    /* 005509bb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005509be: call 0x551960 */ r_esp -= 4; W32(r_esp, 0x5509c3u); f_00551960();
L_005509c3:; BB(0x005509c3);
    /* 005509c3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005509c6: call 0x551890 */ r_esp -= 4; W32(r_esp, 0x5509cbu); f_00551890();
    /* 005509cb: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005509ce: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005509d0: je 0x5509e1 */ if (fZ) goto L_005509e1;
L_005509d2:; BB(0x005509d2);
    /* 005509d2: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 005509d4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005509d7: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x5509dcu); f_005519a0();
    /* 005509dc: jmp 0x550b9c */ goto L_00550b9c;
L_005509e1:; BB(0x005509e1);
    /* 005509e1: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 005509e3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005509e5: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005509e7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005509ea: call 0x551670 */ r_esp -= 4; W32(r_esp, 0x5509efu); f_00551670();
    /* 005509ef: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005509f2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005509f4: je 0x550a39 */ if (fZ) goto L_00550a39;
L_005509f6:; BB(0x005509f6);
    /* 005509f6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005509f9: call 0x5519e0 */ r_esp -= 4; W32(r_esp, 0x5509feu); f_005519e0();
    /* 005509fe: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00550a01: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00550a03: je 0x550a31 */ if (fZ) goto L_00550a31;
L_00550a05:; BB(0x00550a05);
    /* 00550a05: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550a08: movsx edx, byte ptr [ecx + 0x16] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x16u));
    /* 00550a0c: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550a0f: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 00550a14: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00550a15: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x550a1au); f_00641280();
    /* 00550a1a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00550a1d: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00550a20: jge 0x550a31 */ if ((fS==fO)) goto L_00550a31;
L_00550a22:; BB(0x00550a22);
    /* 00550a22: push 0x1d */ { u32 v = 0x1du; r_esp -= 4; W32(r_esp, v); }
    /* 00550a24: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550a27: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x550a2cu); f_005519a0();
    /* 00550a2c: jmp 0x550b9c */ goto L_00550b9c;
L_00550a31:; BB(0x00550a31);
    /* 00550a31: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550a34: call 0x551960 */ r_esp -= 4; W32(r_esp, 0x550a39u); f_00551960();
L_00550a39:; BB(0x00550a39);
    /* 00550a39: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 00550a3b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00550a3d: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00550a3f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550a42: call 0x551330 */ r_esp -= 4; W32(r_esp, 0x550a47u); f_00551330();
    /* 00550a47: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00550a4a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00550a4c: je 0x550a84 */ if (fZ) goto L_00550a84;
L_00550a4e:; BB(0x00550a4e);
    /* 00550a4e: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550a51: movsx ecx, byte ptr [eax + 0x16] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x16u));
    /* 00550a55: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00550a56: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550a59: movsx eax, byte ptr [edx + 0x14] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x14u));
    /* 00550a5d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00550a5e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550a61: call 0x551b50 */ r_esp -= 4; W32(r_esp, 0x550a66u); f_00551b50();
    /* 00550a66: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00550a69: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00550a6b: jne 0x550a7c */ if (!fZ) goto L_00550a7c;
L_00550a6d:; BB(0x00550a6d);
    /* 00550a6d: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 00550a6f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550a72: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x550a77u); f_005519a0();
    /* 00550a77: jmp 0x550b9c */ goto L_00550b9c;
L_00550a7c:; BB(0x00550a7c);
    /* 00550a7c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550a7f: call 0x551960 */ r_esp -= 4; W32(r_esp, 0x550a84u); f_00551960();
L_00550a84:; BB(0x00550a84);
    /* 00550a84: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 00550a86: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00550a88: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00550a8a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550a8d: call 0x551670 */ r_esp -= 4; W32(r_esp, 0x550a92u); f_00551670();
    /* 00550a92: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00550a95: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00550a97: je 0x550acd */ if (fZ) goto L_00550acd;
L_00550a99:; BB(0x00550a99);
    /* 00550a99: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550a9c: movsx ecx, byte ptr [eax + 0x17] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x17u));
    /* 00550aa0: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550aa3: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 00550aa8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00550aa9: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x550aaeu); f_00641280();
    /* 00550aae: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00550ab1: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00550ab4: jne 0x550ac5 */ if (!fZ) goto L_00550ac5;
L_00550ab6:; BB(0x00550ab6);
    /* 00550ab6: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 00550ab8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550abb: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x550ac0u); f_005519a0();
    /* 00550ac0: jmp 0x550b9c */ goto L_00550b9c;
L_00550ac5:; BB(0x00550ac5);
    /* 00550ac5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550ac8: call 0x551960 */ r_esp -= 4; W32(r_esp, 0x550acdu); f_00551960();
L_00550acd:; BB(0x00550acd);
    /* 00550acd: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 00550acf: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00550ad1: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00550ad3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550ad6: call 0x551330 */ r_esp -= 4; W32(r_esp, 0x550adbu); f_00551330();
    /* 00550adb: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00550ade: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00550ae0: je 0x550af1 */ if (fZ) goto L_00550af1;
L_00550ae2:; BB(0x00550ae2);
    /* 00550ae2: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00550ae4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550ae7: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x550aecu); f_005519a0();
    /* 00550aec: jmp 0x550b9c */ goto L_00550b9c;
L_00550af1:; BB(0x00550af1);
    /* 00550af1: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 00550af3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00550af5: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00550af7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550afa: call 0x551670 */ r_esp -= 4; W32(r_esp, 0x550affu); f_00551670();
    /* 00550aff: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00550b02: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00550b04: je 0x550b37 */ if (fZ) goto L_00550b37;
L_00550b06:; BB(0x00550b06);
    /* 00550b06: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550b09: movsx ecx, byte ptr [eax + 0x15] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x15u));
    /* 00550b0d: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550b10: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 00550b15: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00550b16: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x550b1bu); f_00641280();
    /* 00550b1b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00550b1e: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00550b21: jle 0x550b2f */ if ((fZ||fS!=fO)) goto L_00550b2f;
L_00550b23:; BB(0x00550b23);
    /* 00550b23: push 0x21 */ { u32 v = 0x21u; r_esp -= 4; W32(r_esp, v); }
    /* 00550b25: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550b28: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x550b2du); f_005519a0();
    /* 00550b2d: jmp 0x550b9c */ goto L_00550b9c;
L_00550b2f:; BB(0x00550b2f);
    /* 00550b2f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550b32: call 0x551960 */ r_esp -= 4; W32(r_esp, 0x550b37u); f_00551960();
L_00550b37:; BB(0x00550b37);
    /* 00550b37: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00550b3e: jmp 0x550b49 */ goto L_00550b49;
L_00550b40:; BB(0x00550b40);
    /* 00550b40: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00550b43: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00550b46: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_00550b49:; BB(0x00550b49);
    /* 00550b49: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550b4c: call 0x54c540 */ r_esp -= 4; W32(r_esp, 0x550b51u); f_0054c540();
    /* 00550b51: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00550b54: jge 0x550b86 */ if ((fS==fO)) goto L_00550b86;
L_00550b56:; BB(0x00550b56);
    /* 00550b56: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00550b59: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550b5c: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 00550b61: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00550b62: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550b65: call 0x54c590 */ r_esp -= 4; W32(r_esp, 0x550b6au); f_0054c590();
    /* 00550b6a: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00550b6d: jle 0x550b84 */ if ((fZ||fS!=fO)) goto L_00550b84;
L_00550b6f:; BB(0x00550b6f);
    /* 00550b6f: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550b72: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00550b75: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 00550b78: mov byte ptr [edx + 0x14], al */ W8((u32)(r_edx+0x14u), (u8)r_eax);
    /* 00550b7b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00550b7e: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00550b81: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00550b84:; BB(0x00550b84);
    /* 00550b84: jmp 0x550b40 */ goto L_00550b40;
L_00550b86:; BB(0x00550b86);
    /* 00550b86: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00550b8a: je 0x550b9c */ if (fZ) goto L_00550b9c;
L_00550b8c:; BB(0x00550b8c);
    /* 00550b8c: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00550b90: jge 0x550b9c */ if ((fS==fO)) goto L_00550b9c;
L_00550b92:; BB(0x00550b92);
    /* 00550b92: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 00550b94: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550b97: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x550b9cu); f_005519a0();
L_00550b9c:; BB(0x00550b9c);
    /* 00550b9c: mov esp, ebp */ r_esp = r_ebp;
    /* 00550b9e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00550b9f: ret  */ FN_RET(0x005507f0); r_esp += 4; return;
}

void f_00550bd0(void) /* sub_550BD0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00550bd0);
    /* 00550bd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00550bd1: mov ebp, esp */ r_ebp = r_esp;
    /* 00550bd3: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00550bd6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00550bd9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00550be0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550be3: call 0x551960 */ r_esp -= 4; W32(r_esp, 0x550be8u); f_00551960();
    /* 00550be8: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 00550bea: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00550bec: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00550bee: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550bf1: call 0x551330 */ r_esp -= 4; W32(r_esp, 0x550bf6u); f_00551330();
    /* 00550bf6: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00550bf9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00550bfb: je 0x550c0c */ if (fZ) goto L_00550c0c;
L_00550bfd:; BB(0x00550bfd);
    /* 00550bfd: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00550bff: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550c02: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x550c07u); f_005519a0();
    /* 00550c07: jmp 0x550fa9 */ goto L_00550fa9;
L_00550c0c:; BB(0x00550c0c);
    /* 00550c0c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550c0f: cmp dword ptr [ecx + 0x10], -1 */ {  u32 a = R32((u32)(r_ecx+0x10u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00550c13: jle 0x550ccf */ if ((fZ||fS!=fO)) goto L_00550ccf;
L_00550c19:; BB(0x00550c19);
    /* 00550c19: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550c1c: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 00550c1f: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00550c22: cmp dword ptr [ebp - 0x10], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00550c26: ja 0x550ccf */ if ((!fC&&!fZ)) goto L_00550ccf;
L_00550c2c:; BB(0x00550c2c);
    /* 00550c2c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00550c2f: movzx edx, byte ptr [ecx + 0x550fc0] */ r_edx = (u32)R8((u32)(r_ecx+0x550fc0u));
    /* 00550c36: jmp dword ptr [edx*4 + 0x550fb0] */ { u32 t = R32((u32)(r_edx*4+0x550fb0u)); switch (t) { case 0x550c3du: goto L_00550c3d; case 0x550c54u: goto L_00550c54; case 0x550c5eu: goto L_00550c5e; case 0x550c68u: goto L_00550c68; default: UNSUP(0x00550c36, "jump table entry is not a known target"); } }
L_00550c3d:; BB(0x00550c3d);
    /* 00550c3d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00550c3f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550c42: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x550c47u); f_005519a0();
    /* 00550c47: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550c4a: call 0x551920 */ r_esp -= 4; W32(r_esp, 0x550c4fu); f_00551920();
    /* 00550c4f: jmp 0x550fa9 */ goto L_00550fa9;
L_00550c54:; BB(0x00550c54);
    /* 00550c54: push 0x27 */ { u32 v = 0x27u; r_esp -= 4; W32(r_esp, v); }
    /* 00550c56: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550c59: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x550c5eu); f_005519a0();
L_00550c5e:; BB(0x00550c5e);
    /* 00550c5e: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 00550c60: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550c63: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x550c68u); f_005519a0();
L_00550c68:; BB(0x00550c68);
    /* 00550c68: push 0x2b */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 00550c6a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550c6d: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x550c72u); f_005519a0();
    /* 00550c72: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00550c79: jmp 0x550c84 */ goto L_00550c84;
L_00550c7b:; BB(0x00550c7b);
    /* 00550c7b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00550c7e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00550c81: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_00550c84:; BB(0x00550c84);
    /* 00550c84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550c87: call 0x54c540 */ r_esp -= 4; W32(r_esp, 0x550c8cu); f_0054c540();
    /* 00550c8c: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00550c8f: jge 0x550cca */ if ((fS==fO)) goto L_00550cca;
L_00550c91:; BB(0x00550c91);
    /* 00550c91: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00550c94: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550c97: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 00550c9c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00550c9d: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x550ca2u); f_00641280();
    /* 00550ca2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00550ca5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00550ca6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550ca9: call 0x54cf20 */ r_esp -= 4; W32(r_esp, 0x550caeu); f_0054cf20();
    /* 00550cae: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00550cb1: jle 0x550cc8 */ if ((fZ||fS!=fO)) goto L_00550cc8;
L_00550cb3:; BB(0x00550cb3);
    /* 00550cb3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550cb6: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00550cb9: mov dl, byte ptr [ebp - 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 00550cbc: mov byte ptr [ecx + 0x14], dl */ W8((u32)(r_ecx+0x14u), (u8)r_edx);
    /* 00550cbf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00550cc2: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00550cc5: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00550cc8:; BB(0x00550cc8);
    /* 00550cc8: jmp 0x550c7b */ goto L_00550c7b;
L_00550cca:; BB(0x00550cca);
    /* 00550cca: jmp 0x550fa9 */ goto L_00550fa9;
L_00550ccf:; BB(0x00550ccf);
    /* 00550ccf: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 00550cd1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00550cd3: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00550cd5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550cd8: call 0x551330 */ r_esp -= 4; W32(r_esp, 0x550cddu); f_00551330();
    /* 00550cdd: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00550ce0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00550ce2: je 0x550cf3 */ if (fZ) goto L_00550cf3;
L_00550ce4:; BB(0x00550ce4);
    /* 00550ce4: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00550ce6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550ce9: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x550ceeu); f_005519a0();
    /* 00550cee: jmp 0x550fa9 */ goto L_00550fa9;
L_00550cf3:; BB(0x00550cf3);
    /* 00550cf3: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 00550cf5: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00550cf7: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00550cf9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550cfc: call 0x551330 */ r_esp -= 4; W32(r_esp, 0x550d01u); f_00551330();
    /* 00550d01: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00550d04: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00550d06: je 0x550d17 */ if (fZ) goto L_00550d17;
L_00550d08:; BB(0x00550d08);
    /* 00550d08: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00550d0a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550d0d: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x550d12u); f_005519a0();
    /* 00550d12: jmp 0x550fa9 */ goto L_00550fa9;
L_00550d17:; BB(0x00550d17);
    /* 00550d17: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550d1a: call 0x5515d0 */ r_esp -= 4; W32(r_esp, 0x550d1fu); f_005515d0();
    /* 00550d1f: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00550d22: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00550d24: je 0x550d35 */ if (fZ) goto L_00550d35;
L_00550d26:; BB(0x00550d26);
    /* 00550d26: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 00550d28: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550d2b: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x550d30u); f_005519a0();
    /* 00550d30: jmp 0x550fa9 */ goto L_00550fa9;
L_00550d35:; BB(0x00550d35);
    /* 00550d35: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 00550d37: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00550d39: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00550d3b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550d3e: call 0x551670 */ r_esp -= 4; W32(r_esp, 0x550d43u); f_00551670();
    /* 00550d43: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00550d46: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00550d48: je 0x550daa */ if (fZ) goto L_00550daa;
L_00550d4a:; BB(0x00550d4a);
    /* 00550d4a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550d4d: call 0x5519e0 */ r_esp -= 4; W32(r_esp, 0x550d52u); f_005519e0();
    /* 00550d52: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00550d55: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00550d57: je 0x550da2 */ if (fZ) goto L_00550da2;
L_00550d59:; BB(0x00550d59);
    /* 00550d59: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550d5c: movsx ecx, byte ptr [eax + 0x15] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x15u));
    /* 00550d60: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550d63: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 00550d68: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00550d69: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x550d6eu); f_00641280();
    /* 00550d6e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00550d71: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00550d74: jg 0x550d93 */ if ((!fZ&&fS==fO)) goto L_00550d93;
L_00550d76:; BB(0x00550d76);
    /* 00550d76: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550d79: movsx edx, byte ptr [ecx + 0x16] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x16u));
    /* 00550d7d: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550d80: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 00550d85: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00550d86: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x550d8bu); f_00641280();
    /* 00550d8b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00550d8e: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00550d91: jle 0x550da2 */ if ((fZ||fS!=fO)) goto L_00550da2;
L_00550d93:; BB(0x00550d93);
    /* 00550d93: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00550d95: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550d98: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x550d9du); f_005519a0();
    /* 00550d9d: jmp 0x550fa9 */ goto L_00550fa9;
L_00550da2:; BB(0x00550da2);
    /* 00550da2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550da5: call 0x551960 */ r_esp -= 4; W32(r_esp, 0x550daau); f_00551960();
L_00550daa:; BB(0x00550daa);
    /* 00550daa: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550dad: call 0x551890 */ r_esp -= 4; W32(r_esp, 0x550db2u); f_00551890();
    /* 00550db2: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00550db5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00550db7: je 0x550dc8 */ if (fZ) goto L_00550dc8;
L_00550db9:; BB(0x00550db9);
    /* 00550db9: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 00550dbb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550dbe: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x550dc3u); f_005519a0();
    /* 00550dc3: jmp 0x550fa9 */ goto L_00550fa9;
L_00550dc8:; BB(0x00550dc8);
    /* 00550dc8: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 00550dca: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00550dcc: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00550dce: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550dd1: call 0x551670 */ r_esp -= 4; W32(r_esp, 0x550dd6u); f_00551670();
    /* 00550dd6: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00550dd9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00550ddb: je 0x550e20 */ if (fZ) goto L_00550e20;
L_00550ddd:; BB(0x00550ddd);
    /* 00550ddd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550de0: call 0x5519e0 */ r_esp -= 4; W32(r_esp, 0x550de5u); f_005519e0();
    /* 00550de5: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00550de8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00550dea: je 0x550e18 */ if (fZ) goto L_00550e18;
L_00550dec:; BB(0x00550dec);
    /* 00550dec: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550def: movsx eax, byte ptr [edx + 0x16] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x16u));
    /* 00550df3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550df6: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 00550dfb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00550dfc: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x550e01u); f_00641280();
    /* 00550e01: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00550e04: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00550e07: jge 0x550e18 */ if ((fS==fO)) goto L_00550e18;
L_00550e09:; BB(0x00550e09);
    /* 00550e09: push 0x1d */ { u32 v = 0x1du; r_esp -= 4; W32(r_esp, v); }
    /* 00550e0b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550e0e: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x550e13u); f_005519a0();
    /* 00550e13: jmp 0x550fa9 */ goto L_00550fa9;
L_00550e18:; BB(0x00550e18);
    /* 00550e18: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550e1b: call 0x551960 */ r_esp -= 4; W32(r_esp, 0x550e20u); f_00551960();
L_00550e20:; BB(0x00550e20);
    /* 00550e20: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 00550e22: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00550e24: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00550e26: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550e29: call 0x551330 */ r_esp -= 4; W32(r_esp, 0x550e2eu); f_00551330();
    /* 00550e2e: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00550e31: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00550e33: je 0x550e63 */ if (fZ) goto L_00550e63;
L_00550e35:; BB(0x00550e35);
    /* 00550e35: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550e38: movsx edx, byte ptr [ecx + 0x16] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x16u));
    /* 00550e3c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00550e3d: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550e40: movsx ecx, byte ptr [eax + 0x14] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x14u));
    /* 00550e44: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00550e45: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550e48: call 0x551b50 */ r_esp -= 4; W32(r_esp, 0x550e4du); f_00551b50();
    /* 00550e4d: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00550e50: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00550e52: jne 0x550e63 */ if (!fZ) goto L_00550e63;
L_00550e54:; BB(0x00550e54);
    /* 00550e54: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 00550e56: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550e59: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x550e5eu); f_005519a0();
    /* 00550e5e: jmp 0x550fa9 */ goto L_00550fa9;
L_00550e63:; BB(0x00550e63);
    /* 00550e63: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 00550e65: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00550e67: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00550e69: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550e6c: call 0x551670 */ r_esp -= 4; W32(r_esp, 0x550e71u); f_00551670();
    /* 00550e71: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00550e74: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00550e76: je 0x550eac */ if (fZ) goto L_00550eac;
L_00550e78:; BB(0x00550e78);
    /* 00550e78: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550e7b: movsx edx, byte ptr [ecx + 0x17] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x17u));
    /* 00550e7f: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550e82: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 00550e87: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00550e88: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x550e8du); f_00641280();
    /* 00550e8d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00550e90: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00550e93: jne 0x550ea4 */ if (!fZ) goto L_00550ea4;
L_00550e95:; BB(0x00550e95);
    /* 00550e95: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 00550e97: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550e9a: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x550e9fu); f_005519a0();
    /* 00550e9f: jmp 0x550fa9 */ goto L_00550fa9;
L_00550ea4:; BB(0x00550ea4);
    /* 00550ea4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550ea7: call 0x551960 */ r_esp -= 4; W32(r_esp, 0x550eacu); f_00551960();
L_00550eac:; BB(0x00550eac);
    /* 00550eac: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 00550eae: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00550eb0: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00550eb2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550eb5: call 0x551330 */ r_esp -= 4; W32(r_esp, 0x550ebau); f_00551330();
    /* 00550eba: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00550ebd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00550ebf: je 0x550ed0 */ if (fZ) goto L_00550ed0;
L_00550ec1:; BB(0x00550ec1);
    /* 00550ec1: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00550ec3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550ec6: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x550ecbu); f_005519a0();
    /* 00550ecb: jmp 0x550fa9 */ goto L_00550fa9;
L_00550ed0:; BB(0x00550ed0);
    /* 00550ed0: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 00550ed2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00550ed4: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00550ed6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550ed9: call 0x551670 */ r_esp -= 4; W32(r_esp, 0x550edeu); f_00551670();
    /* 00550ede: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00550ee1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00550ee3: je 0x550f19 */ if (fZ) goto L_00550f19;
L_00550ee5:; BB(0x00550ee5);
    /* 00550ee5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550ee8: movsx edx, byte ptr [ecx + 0x15] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x15u));
    /* 00550eec: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550eef: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 00550ef4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00550ef5: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x550efau); f_00641280();
    /* 00550efa: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00550efd: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00550f00: jle 0x550f11 */ if ((fZ||fS!=fO)) goto L_00550f11;
L_00550f02:; BB(0x00550f02);
    /* 00550f02: push 0x21 */ { u32 v = 0x21u; r_esp -= 4; W32(r_esp, v); }
    /* 00550f04: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550f07: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x550f0cu); f_005519a0();
    /* 00550f0c: jmp 0x550fa9 */ goto L_00550fa9;
L_00550f11:; BB(0x00550f11);
    /* 00550f11: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550f14: call 0x551960 */ r_esp -= 4; W32(r_esp, 0x550f19u); f_00551960();
L_00550f19:; BB(0x00550f19);
    /* 00550f19: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 00550f1b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00550f1d: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00550f1f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550f22: call 0x551330 */ r_esp -= 4; W32(r_esp, 0x550f27u); f_00551330();
    /* 00550f27: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00550f2a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00550f2c: je 0x550f3a */ if (fZ) goto L_00550f3a;
L_00550f2e:; BB(0x00550f2e);
    /* 00550f2e: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00550f30: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550f33: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x550f38u); f_005519a0();
    /* 00550f38: jmp 0x550fa9 */ goto L_00550fa9;
L_00550f3a:; BB(0x00550f3a);
    /* 00550f3a: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00550f41: jmp 0x550f4c */ goto L_00550f4c;
L_00550f43:; BB(0x00550f43);
    /* 00550f43: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00550f46: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00550f49: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_00550f4c:; BB(0x00550f4c);
    /* 00550f4c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550f4f: call 0x54c540 */ r_esp -= 4; W32(r_esp, 0x550f54u); f_0054c540();
    /* 00550f54: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00550f57: jge 0x550f89 */ if ((fS==fO)) goto L_00550f89;
L_00550f59:; BB(0x00550f59);
    /* 00550f59: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00550f5c: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550f5f: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 00550f64: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00550f65: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550f68: call 0x54c590 */ r_esp -= 4; W32(r_esp, 0x550f6du); f_0054c590();
    /* 00550f6d: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00550f70: jle 0x550f87 */ if ((fZ||fS!=fO)) goto L_00550f87;
L_00550f72:; BB(0x00550f72);
    /* 00550f72: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550f75: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00550f78: mov dl, byte ptr [ebp - 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 00550f7b: mov byte ptr [ecx + 0x14], dl */ W8((u32)(r_ecx+0x14u), (u8)r_edx);
    /* 00550f7e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00550f81: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00550f84: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00550f87:; BB(0x00550f87);
    /* 00550f87: jmp 0x550f43 */ goto L_00550f43;
L_00550f89:; BB(0x00550f89);
    /* 00550f89: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00550f8d: je 0x550fa1 */ if (fZ) goto L_00550fa1;
L_00550f8f:; BB(0x00550f8f);
    /* 00550f8f: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00550f93: jge 0x550fa1 */ if ((fS==fO)) goto L_00550fa1;
L_00550f95:; BB(0x00550f95);
    /* 00550f95: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 00550f97: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550f9a: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x550f9fu); f_005519a0();
    /* 00550f9f: jmp 0x550fa9 */ goto L_00550fa9;
L_00550fa1:; BB(0x00550fa1);
    /* 00550fa1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550fa4: call 0x551960 */ r_esp -= 4; W32(r_esp, 0x550fa9u); f_00551960();
L_00550fa9:; BB(0x00550fa9);
    /* 00550fa9: mov esp, ebp */ r_esp = r_ebp;
    /* 00550fab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00550fac: ret  */ FN_RET(0x00550bd0); r_esp += 4; return;
}

void f_00550fd0(void) /* sub_550FD0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00550fd0);
    /* 00550fd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00550fd1: mov ebp, esp */ r_ebp = r_esp;
    /* 00550fd3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00550fd6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00550fd9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00550fe0: jmp 0x550feb */ goto L_00550feb;
L_00550fe2:; BB(0x00550fe2);
    /* 00550fe2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00550fe5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00550fe8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00550feb:; BB(0x00550feb);
    /* 00550feb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00550fee: call 0x54c540 */ r_esp -= 4; W32(r_esp, 0x550ff3u); f_0054c540();
    /* 00550ff3: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00550ff6: jge 0x551036 */ if ((fS==fO)) goto L_00551036;
L_00550ff8:; BB(0x00550ff8);
    /* 00550ff8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00550ffb: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00550ffe: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 00551003: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00551004: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00551007: call 0x54c590 */ r_esp -= 4; W32(r_esp, 0x55100cu); f_0054c590();
    /* 0055100c: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055100f: je 0x551030 */ if (fZ) goto L_00551030;
L_00551011:; BB(0x00551011);
    /* 00551011: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00551014: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00551017: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0055101c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055101d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00551020: call 0x54c590 */ r_esp -= 4; W32(r_esp, 0x551025u); f_0054c590();
    /* 00551025: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00551028: jne 0x551034 */ if (!fZ) goto L_00551034;
L_0055102a:; BB(0x0055102a);
    /* 0055102a: cmp dword ptr [ebp + 8], 1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055102e: jne 0x551034 */ if (!fZ) goto L_00551034;
L_00551030:; BB(0x00551030);
    /* 00551030: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00551032: jmp 0x551038 */ goto L_00551038;
L_00551034:; BB(0x00551034);
    /* 00551034: jmp 0x550fe2 */ goto L_00550fe2;
L_00551036:; BB(0x00551036);
    /* 00551036: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_00551038:; BB(0x00551038);
    /* 00551038: mov esp, ebp */ r_esp = r_ebp;
    /* 0055103a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055103b: ret 4 */ FN_RET(0x00550fd0); r_esp += 8; return;
}

