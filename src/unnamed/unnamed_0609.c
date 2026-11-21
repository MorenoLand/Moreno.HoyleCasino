#include "protos.h"

void f_00609100(void) /* sub_609100 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00609100);
    /* 00609100: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00609101: mov ebp, esp */ r_ebp = r_esp;
    /* 00609103: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00609106: lea eax, [ebp - 5] */ r_eax = (u32)(r_ebp+0xfffffffbu);
    /* 00609109: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060910a: lea ecx, [ebp - 4] */ r_ecx = (u32)(r_ebp+0xfffffffcu);
    /* 0060910d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060910e: lea edx, [ebp - 0x10] */ r_edx = (u32)(r_ebp+0xfffffff0u);
    /* 00609111: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00609112: lea eax, [ebp - 0x18] */ r_eax = (u32)(r_ebp+0xffffffe8u);
    /* 00609115: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00609116: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 00609119: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060911a: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0060911d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060911e: call 0x683fb0 */ r_esp -= 4; W32(r_esp, 0x609123u); f_00683fb0();
    /* 00609123: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00609126: call 0x68419c */ r_esp -= 4; W32(r_esp, 0x60912bu); f_0068419c();
    /* 0060912b: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0060912e: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00609132: je 0x609138 */ if (fZ) goto L_00609138;
L_00609134:; BB(0x00609134);
    /* 00609134: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00609136: jmp 0x609192 */ goto L_00609192;
L_00609138:; BB(0x00609138);
    /* 00609138: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060913b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060913c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0060913f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00609140: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00609143: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00609144: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00609147: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00609148: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0060914b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060914c: call 0x6841ea */ r_esp -= 4; W32(r_esp, 0x609151u); f_006841ea();
    /* 00609151: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00609154: call 0x68419c */ r_esp -= 4; W32(r_esp, 0x609159u); f_0068419c();
    /* 00609159: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0060915c: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00609160: je 0x609166 */ if (fZ) goto L_00609166;
L_00609162:; BB(0x00609162);
    /* 00609162: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00609164: jmp 0x609192 */ goto L_00609192;
L_00609166:; BB(0x00609166);
    /* 00609166: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00609169: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060916a: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0060916d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060916e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00609171: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00609172: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00609175: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00609176: call 0x684180 */ r_esp -= 4; W32(r_esp, 0x60917bu); f_00684180();
    /* 0060917b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060917e: call 0x68419c */ r_esp -= 4; W32(r_esp, 0x609183u); f_0068419c();
    /* 00609183: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00609186: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060918a: je 0x609190 */ if (fZ) goto L_00609190;
L_0060918c:; BB(0x0060918c);
    /* 0060918c: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0060918e: jmp 0x609192 */ goto L_00609192;
L_00609190:; BB(0x00609190);
    /* 00609190: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_00609192:; BB(0x00609192);
    /* 00609192: mov esp, ebp */ r_esp = r_ebp;
    /* 00609194: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00609195: ret  */ FN_RET(0x00609100); r_esp += 4; return;
}

void f_006094b0(void) /* sub_6094B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006094b0);
    /* 006094b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006094b1: mov ebp, esp */ r_ebp = r_esp;
    /* 006094b3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006094b6: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 006094b9: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 006094bc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006094bf: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006094c2: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 006094c5: sub eax, dword ptr [edx + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x8u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006094c8: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 006094cb: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 006094ce: imul ecx, dword ptr [ebp + 0xc] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0xcu)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006094d2: cmp ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006094d5: jae 0x6094e3 */ if (!fC) goto L_006094e3;
L_006094d7:; BB(0x006094d7);
    /* 006094d7: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 006094da: imul edx, dword ptr [ebp + 0xc] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_ebp+0xcu)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006094de: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 006094e1: jmp 0x6094e9 */ goto L_006094e9;
L_006094e3:; BB(0x006094e3);
    /* 006094e3: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 006094e6: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_006094e9:; BB(0x006094e9);
    /* 006094e9: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006094ed: je 0x60951a */ if (fZ) goto L_0060951a;
L_006094ef:; BB(0x006094ef);
    /* 006094ef: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006094f2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006094f3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006094f6: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006094f8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006094fb: add eax, dword ptr [ecx + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006094fe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006094ff: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00609502: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00609503: call 0x686fde */ r_esp -= 4; W32(r_esp, 0x609508u); f_00686fde();
    /* 00609508: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060950b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060950e: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00609511: add ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00609514: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00609517: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
L_0060951a:; BB(0x0060951a);
    /* 0060951a: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060951d: mov esp, ebp */ r_esp = r_ebp;
    /* 0060951f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00609520: ret  */ FN_RET(0x006094b0); r_esp += 4; return;
}

void f_00609530(void) /* sub_609530 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00609530);
    /* 00609530: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00609531: mov ebp, esp */ r_ebp = r_esp;
    /* 00609533: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00609536: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00609539: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0060953c: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0060953f: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00609542: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00609546: je 0x60955d */ if (fZ) goto L_0060955d;
L_00609548:; BB(0x00609548);
    /* 00609548: cmp dword ptr [ebp - 0x14], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060954c: je 0x6095a2 */ if (fZ) goto L_006095a2;
L_0060954e:; BB(0x0060954e);
    /* 0060954e: cmp dword ptr [ebp - 0x14], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00609552: je 0x6095fc */ if (fZ) goto L_006095fc;
L_00609558:; BB(0x00609558);
    /* 00609558: jmp 0x60960b */ goto L_0060960b;
L_0060955d:; BB(0x0060955d);
    /* 0060955d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00609560: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00609563: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00609564: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00609567: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0060956a: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0060956d: cmp eax, dword ptr [ebp + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00609570: jl 0x60958a */ if ((fS!=fO)) goto L_0060958a;
L_00609572:; BB(0x00609572);
    /* 00609572: jg 0x60957c */ if ((!fZ&&fS==fO)) goto L_0060957c;
L_00609574:; BB(0x00609574);
    /* 00609574: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00609577: cmp ecx, dword ptr [ebp + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0060957a: jb 0x60958a */ if (fC) goto L_0060958a;
L_0060957c:; BB(0x0060957c);
    /* 0060957c: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0060957f: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00609582: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00609585: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00609588: jmp 0x609597 */ goto L_00609597;
L_0060958a:; BB(0x0060958a);
    /* 0060958a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060958d: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 00609590: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00609591: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00609594: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_00609597:; BB(0x00609597);
    /* 00609597: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0060959a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060959d: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 006095a0: jmp 0x60960b */ goto L_0060960b;
L_006095a2:; BB(0x006095a2);
    /* 006095a2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006095a5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006095a8: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 006095ab: sub eax, dword ptr [edx + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x8u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006095ae: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 006095b1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006095b4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006095b6: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 006095b9: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 006095bc: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 006095bf: cmp eax, dword ptr [ebp - 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006095c2: jg 0x6095dc */ if ((!fZ&&fS==fO)) goto L_006095dc;
L_006095c4:; BB(0x006095c4);
    /* 006095c4: jl 0x6095ce */ if ((fS!=fO)) goto L_006095ce;
L_006095c6:; BB(0x006095c6);
    /* 006095c6: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 006095c9: cmp ecx, dword ptr [ebp - 0x24] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006095cc: jae 0x6095dc */ if (!fC) goto L_006095dc;
L_006095ce:; BB(0x006095ce);
    /* 006095ce: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 006095d1: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 006095d4: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 006095d7: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 006095da: jmp 0x6095e7 */ goto L_006095e7;
L_006095dc:; BB(0x006095dc);
    /* 006095dc: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006095df: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006095e1: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 006095e4: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_006095e7:; BB(0x006095e7);
    /* 006095e7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006095ea: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 006095ed: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 006095ee: add eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r; fC = (r < a); }
    /* 006095f1: adc edx, dword ptr [ebp - 0xc] */ { u32 c = fC; u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b + c) & 0xffffffffu; r_edx = r;  }
    /* 006095f4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006095f7: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 006095fa: jmp 0x60960b */ goto L_0060960b;
L_006095fc:; BB(0x006095fc);
    /* 006095fc: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006095ff: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00609602: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00609605: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00609608: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
L_0060960b:; BB(0x0060960b);
    /* 0060960b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0060960d: mov esp, ebp */ r_esp = r_ebp;
    /* 0060960f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00609610: ret  */ FN_RET(0x00609530); r_esp += 4; return;
}

void f_00609630(void) /* sub_609630 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00609630);
    /* 00609630: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00609631: mov ebp, esp */ r_ebp = r_esp;
    /* 00609633: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00609634: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00609637: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0060963a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060963d: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 00609640: mov esp, ebp */ r_esp = r_ebp;
    /* 00609642: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00609643: ret  */ FN_RET(0x00609630); r_esp += 4; return;
}

void f_00609870(void) /* sub_609870 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00609870);
    /* 00609870: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00609871: mov ebp, esp */ r_ebp = r_esp;
    /* 00609873: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00609876: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00609879: movzx eax, byte ptr [0x7960cb] */ r_eax = (u32)R8((u32)(0x7960cbu));
    /* 00609880: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00609882: jne 0x6098be */ if (!fZ) goto L_006098be;
L_00609884:; BB(0x00609884);
    /* 00609884: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00609887: movzx edx, byte ptr [ecx + 0xa] */ r_edx = (u32)R8((u32)(r_ecx+0xau));
    /* 0060988b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060988d: je 0x609891 */ if (fZ) goto L_00609891;
L_0060988f:; BB(0x0060988f);
    /* 0060988f: jmp 0x6098be */ goto L_006098be;
L_00609891:; BB(0x00609891);
    /* 00609891: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00609894: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00609895: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00609898: call 0x608410 */ r_esp -= 4; W32(r_esp, 0x60989du); f_00608410();
    /* 0060989d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 006098a0: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006098a4: jl 0x6098ac */ if ((fS!=fO)) goto L_006098ac;
L_006098a6:; BB(0x006098a6);
    /* 006098a6: cmp dword ptr [ebp - 4], 0xc */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006098aa: jl 0x6098ae */ if ((fS!=fO)) goto L_006098ae;
L_006098ac:; BB(0x006098ac);
    /* 006098ac: jmp 0x6098be */ goto L_006098be;
L_006098ae:; BB(0x006098ae);
    /* 006098ae: mov cl, byte ptr [ebp + 0xc] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xcu))) & 0xffu);
    /* 006098b1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006098b2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006098b5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006098b6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006098b9: call 0x609720 */ r_esp -= 4; W32(r_esp, 0x6098beu); f_00609720();
L_006098be:; BB(0x006098be);
    /* 006098be: mov esp, ebp */ r_esp = r_ebp;
    /* 006098c0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006098c1: ret 8 */ FN_RET(0x00609870); r_esp += 12; return;
}

void f_006098d0(void) /* sub_6098D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006098d0);
    /* 006098d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006098d1: mov ebp, esp */ r_ebp = r_esp;
    /* 006098d3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006098d6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 006098d9: movzx eax, byte ptr [0x7960cb] */ r_eax = (u32)R8((u32)(0x7960cbu));
    /* 006098e0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006098e2: jne 0x60990c */ if (!fZ) goto L_0060990c;
L_006098e4:; BB(0x006098e4);
    /* 006098e4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006098eb: jmp 0x6098f6 */ goto L_006098f6;
L_006098ed:; BB(0x006098ed);
    /* 006098ed: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006098f0: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006098f3: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_006098f6:; BB(0x006098f6);
    /* 006098f6: cmp dword ptr [ebp - 4], 0xc */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006098fa: jge 0x60990c */ if ((fS==fO)) goto L_0060990c;
L_006098fc:; BB(0x006098fc);
    /* 006098fc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006098fe: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00609901: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00609902: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00609905: call 0x609720 */ r_esp -= 4; W32(r_esp, 0x60990au); f_00609720();
    /* 0060990a: jmp 0x6098ed */ goto L_006098ed;
L_0060990c:; BB(0x0060990c);
    /* 0060990c: mov esp, ebp */ r_esp = r_ebp;
    /* 0060990e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060990f: ret  */ FN_RET(0x006098d0); r_esp += 4; return;
}

void f_00609ca0(void) /* sub_609CA0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00609ca0);
    /* 00609ca0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00609ca1: mov ebp, esp */ r_ebp = r_esp;
    /* 00609ca3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00609ca6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00609ca9: movzx eax, byte ptr [0x7960cb] */ r_eax = (u32)R8((u32)(0x7960cbu));
    /* 00609cb0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00609cb2: jne 0x609d0d */ if (!fZ) goto L_00609d0d;
L_00609cb4:; BB(0x00609cb4);
    /* 00609cb4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00609cb7: movzx edx, byte ptr [ecx + 0xa] */ r_edx = (u32)R8((u32)(r_ecx+0xau));
    /* 00609cbb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00609cbd: je 0x609cc3 */ if (fZ) goto L_00609cc3;
L_00609cbf:; BB(0x00609cbf);
    /* 00609cbf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00609cc1: jmp 0x609d0f */ goto L_00609d0f;
L_00609cc3:; BB(0x00609cc3);
    /* 00609cc3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00609cca: jmp 0x609cd5 */ goto L_00609cd5;
L_00609ccc:; BB(0x00609ccc);
    /* 00609ccc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00609ccf: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00609cd2: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00609cd5:; BB(0x00609cd5);
    /* 00609cd5: cmp dword ptr [ebp - 4], 0xc */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00609cd9: jge 0x609d0d */ if ((fS==fO)) goto L_00609d0d;
L_00609cdb:; BB(0x00609cdb);
    /* 00609cdb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00609cde: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00609cdf: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00609ce2: call 0x609b80 */ r_esp -= 4; W32(r_esp, 0x609ce7u); f_00609b80();
    /* 00609ce7: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00609cea: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00609cec: je 0x609d0b */ if (fZ) goto L_00609d0b;
L_00609cee:; BB(0x00609cee);
    /* 00609cee: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00609cf1: imul eax, eax, 0x24 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x24u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00609cf4: cmp dword ptr [eax + 0x796b40], 0 */ {  u32 a = R32((u32)(r_eax+0x796b40u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00609cfb: je 0x609d0b */ if (fZ) goto L_00609d0b;
L_00609cfd:; BB(0x00609cfd);
    /* 00609cfd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00609d00: imul ecx, ecx, 0x24 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x24u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00609d03: mov eax, dword ptr [ecx + 0x796b40] */ r_eax = R32((u32)(r_ecx+0x796b40u));
    /* 00609d09: jmp 0x609d0f */ goto L_00609d0f;
L_00609d0b:; BB(0x00609d0b);
    /* 00609d0b: jmp 0x609ccc */ goto L_00609ccc;
L_00609d0d:; BB(0x00609d0d);
    /* 00609d0d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00609d0f:; BB(0x00609d0f);
    /* 00609d0f: mov esp, ebp */ r_esp = r_ebp;
    /* 00609d11: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00609d12: ret  */ FN_RET(0x00609ca0); r_esp += 4; return;
}

void f_00609d80(void) /* sub_609D80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00609d80);
    /* 00609d80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00609d81: mov ebp, esp */ r_ebp = r_esp;
    /* 00609d83: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00609d86: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00609d89: movzx eax, byte ptr [0x7960cb] */ r_eax = (u32)R8((u32)(0x7960cbu));
    /* 00609d90: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00609d92: jne 0x609dea */ if (!fZ) goto L_00609dea;
L_00609d94:; BB(0x00609d94);
    /* 00609d94: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00609d97: movzx edx, byte ptr [ecx + 0xa] */ r_edx = (u32)R8((u32)(r_ecx+0xau));
    /* 00609d9b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00609d9d: je 0x609da4 */ if (fZ) goto L_00609da4;
L_00609d9f:; BB(0x00609d9f);
    /* 00609d9f: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00609da2: jmp 0x609ded */ goto L_00609ded;
L_00609da4:; BB(0x00609da4);
    /* 00609da4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00609dab: jmp 0x609db6 */ goto L_00609db6;
L_00609dad:; BB(0x00609dad);
    /* 00609dad: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00609db0: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00609db3: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00609db6:; BB(0x00609db6);
    /* 00609db6: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00609dba: jge 0x609de3 */ if ((fS==fO)) goto L_00609de3;
L_00609dbc:; BB(0x00609dbc);
    /* 00609dbc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00609dbf: imul ecx, ecx, 0x74 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x74u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00609dc2: cmp dword ptr [ecx + 0x796d28], 0 */ {  u32 a = R32((u32)(r_ecx+0x796d28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00609dc9: je 0x609de1 */ if (fZ) goto L_00609de1;
L_00609dcb:; BB(0x00609dcb);
    /* 00609dcb: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00609dce: imul edx, edx, 0x74 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x74u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00609dd1: mov eax, dword ptr [edx + 0x796d38] */ r_eax = R32((u32)(r_edx+0x796d38u));
    /* 00609dd7: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00609dda: jne 0x609de1 */ if (!fZ) goto L_00609de1;
L_00609ddc:; BB(0x00609ddc);
    /* 00609ddc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00609ddf: jmp 0x609ded */ goto L_00609ded;
L_00609de1:; BB(0x00609de1);
    /* 00609de1: jmp 0x609dad */ goto L_00609dad;
L_00609de3:; BB(0x00609de3);
    /* 00609de3: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00609de6: jmp 0x609ded */ goto L_00609ded;
L_00609dea:; BB(0x00609dea);
    /* 00609dea: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_00609ded:; BB(0x00609ded);
    /* 00609ded: mov esp, ebp */ r_esp = r_ebp;
    /* 00609def: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00609df0: ret 4 */ FN_RET(0x00609d80); r_esp += 8; return;
}

void f_00609e00(void) /* sub_609E00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00609e00);
    /* 00609e00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00609e01: mov ebp, esp */ r_ebp = r_esp;
    /* 00609e03: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00609e06: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00609e09: movzx eax, byte ptr [0x7960cb] */ r_eax = (u32)R8((u32)(0x7960cbu));
    /* 00609e10: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00609e12: jne 0x609e56 */ if (!fZ) goto L_00609e56;
L_00609e14:; BB(0x00609e14);
    /* 00609e14: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00609e17: movzx edx, byte ptr [ecx + 0xa] */ r_edx = (u32)R8((u32)(r_ecx+0xau));
    /* 00609e1b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00609e1d: je 0x609e24 */ if (fZ) goto L_00609e24;
L_00609e1f:; BB(0x00609e1f);
    /* 00609e1f: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00609e22: jmp 0x609e59 */ goto L_00609e59;
L_00609e24:; BB(0x00609e24);
    /* 00609e24: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00609e2b: jmp 0x609e36 */ goto L_00609e36;
L_00609e2d:; BB(0x00609e2d);
    /* 00609e2d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00609e30: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00609e33: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00609e36:; BB(0x00609e36);
    /* 00609e36: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00609e3a: jge 0x609e56 */ if ((fS==fO)) goto L_00609e56;
L_00609e3c:; BB(0x00609e3c);
    /* 00609e3c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00609e3f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00609e40: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00609e43: call 0x60a2b0 */ r_esp -= 4; W32(r_esp, 0x609e48u); f_0060a2b0();
    /* 00609e48: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00609e4b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00609e4d: je 0x609e54 */ if (fZ) goto L_00609e54;
L_00609e4f:; BB(0x00609e4f);
    /* 00609e4f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00609e52: jmp 0x609e59 */ goto L_00609e59;
L_00609e54:; BB(0x00609e54);
    /* 00609e54: jmp 0x609e2d */ goto L_00609e2d;
L_00609e56:; BB(0x00609e56);
    /* 00609e56: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_00609e59:; BB(0x00609e59);
    /* 00609e59: mov esp, ebp */ r_esp = r_ebp;
    /* 00609e5b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00609e5c: ret  */ FN_RET(0x00609e00); r_esp += 4; return;
}

