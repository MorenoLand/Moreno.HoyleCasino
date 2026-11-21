#include "protos.h"

void f_00462220(void) /* PaiGowBet::vfunc44 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00462220);
    /* 00462220: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00462221: mov ebp, esp */ r_ebp = r_esp;
    /* 00462223: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00462226: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 00462229: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0046222f: call 0x4603f0 */ r_esp -= 4; W32(r_esp, 0x462234u); f_004603f0();
    /* 00462234: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00462236: jne 0x46223f */ if (!fZ) goto L_0046223f;
L_00462238:; BB(0x00462238);
    /* 00462238: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0046223a: jmp 0x462338 */ goto L_00462338;
L_0046223f:; BB(0x0046223f);
    /* 0046223f: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 00462245: call 0x4603f0 */ r_esp -= 4; W32(r_esp, 0x46224au); f_004603f0();
    /* 0046224a: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0046224d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00462250: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x462255u); f_0063aac0();
    /* 00462255: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00462257: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0046225a: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046225e: je 0x46227c */ if (fZ) goto L_0046227c;
L_00462260:; BB(0x00462260);
    /* 00462260: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00462263: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x462268u); f_0063aac0();
    /* 00462268: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0046226a: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0046226d: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00462271: je 0x46227c */ if (fZ) goto L_0046227c;
L_00462273:; BB(0x00462273);
    /* 00462273: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0046227a: jmp 0x462283 */ goto L_00462283;
L_0046227c:; BB(0x0046227c);
    /* 0046227c: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
L_00462283:; BB(0x00462283);
    /* 00462283: movzx edx, byte ptr [ebp - 0x30] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffd0u));
    /* 00462287: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00462289: je 0x4622b7 */ if (fZ) goto L_004622b7;
L_0046228b:; BB(0x0046228b);
    /* 0046228b: mov eax, dword ptr [0x790738] */ r_eax = R32((u32)(0x790738u));
    /* 00462290: mov ecx, dword ptr [eax + 0x10c] */ r_ecx = R32((u32)(r_eax+0x10cu));
    /* 00462296: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00462299: mov edx, dword ptr [0x790738] */ r_edx = R32((u32)(0x790738u));
    /* 0046229f: mov eax, dword ptr [edx + 0x104] */ r_eax = R32((u32)(r_edx+0x104u));
    /* 004622a5: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004622a8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004622ab: cmp ecx, dword ptr [ebp - 0x14] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004622ae: jne 0x4622b7 */ if (!fZ) goto L_004622b7;
L_004622b0:; BB(0x004622b0);
    /* 004622b0: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004622b2: jmp 0x462338 */ goto L_00462338;
L_004622b7:; BB(0x004622b7);
    /* 004622b7: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 004622bd: call 0x4603f0 */ r_esp -= 4; W32(r_esp, 0x4622c2u); f_004603f0();
    /* 004622c2: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004622c5: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004622c8: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x4622cdu); f_0063aac0();
    /* 004622cd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004622cf: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 004622d2: cmp dword ptr [ebp - 0x18], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004622d6: je 0x4622f4 */ if (fZ) goto L_004622f4;
L_004622d8:; BB(0x004622d8);
    /* 004622d8: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004622db: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x4622e0u); f_0063aac0();
    /* 004622e0: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 004622e2: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004622e5: cmp dword ptr [ebp - 0x1c], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004622e9: je 0x4622f4 */ if (fZ) goto L_004622f4;
L_004622eb:; BB(0x004622eb);
    /* 004622eb: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 004622f2: jmp 0x4622fb */ goto L_004622fb;
L_004622f4:; BB(0x004622f4);
    /* 004622f4: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
L_004622fb:; BB(0x004622fb);
    /* 004622fb: movzx ecx, byte ptr [ebp - 0x34] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffccu));
    /* 004622ff: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00462301: je 0x46232e */ if (fZ) goto L_0046232e;
L_00462303:; BB(0x00462303);
    /* 00462303: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 00462309: call 0x4603f0 */ r_esp -= 4; W32(r_esp, 0x46230eu); f_004603f0();
    /* 0046230e: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00462311: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00462314: mov al, byte ptr [edx + 0x4a0] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x4a0u))) & 0xffu);
    /* 0046231a: mov byte ptr [ebp - 0x25], al */ W8((u32)(r_ebp+0xffffffdbu), (u8)r_eax);
    /* 0046231d: movzx ecx, byte ptr [ebp - 0x25] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffdbu));
    /* 00462321: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00462323: jne 0x46232e */ if (!fZ) goto L_0046232e;
L_00462325:; BB(0x00462325);
    /* 00462325: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 0046232c: jmp 0x462335 */ goto L_00462335;
L_0046232e:; BB(0x0046232e);
    /* 0046232e: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_00462335:; BB(0x00462335);
    /* 00462335: mov al, byte ptr [ebp - 0x38] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffc8u))) & 0xffu);
L_00462338:; BB(0x00462338);
    /* 00462338: mov esp, ebp */ r_esp = r_ebp;
    /* 0046233a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046233b: ret  */ FN_RET(0x00462220); r_esp += 4; return;
}

void f_00462340(void) /* PaiGowBet::vfunc48 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00462340);
    /* 00462340: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00462341: mov ebp, esp */ r_ebp = r_esp;
    /* 00462343: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00462344: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00462347: cmp dword ptr [0x790740], 0 */ {  u32 a = R32((u32)(0x790740u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046234e: je 0x462363 */ if (fZ) goto L_00462363;
L_00462350:; BB(0x00462350);
    /* 00462350: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00462353: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00462354: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00462357: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00462358: mov ecx, dword ptr [0x790740] */ r_ecx = R32((u32)(0x790740u));
    /* 0046235e: call 0x458b50 */ r_esp -= 4; W32(r_esp, 0x462363u); f_00458b50();
L_00462363:; BB(0x00462363);
    /* 00462363: mov esp, ebp */ r_esp = r_ebp;
    /* 00462365: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00462366: ret 8 */ FN_RET(0x00462340); r_esp += 12; return;
}

