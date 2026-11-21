#include "protos.h"

void f_005cb5b0(void) /* sub_5CB5B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cb5b0);
    /* 005cb5b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cb5b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005cb5b3: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cb5b6: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005cb5b9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cb5bb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cb5bd: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5cb5c2u); f_0064c8a0();
    /* 005cb5c2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cb5c5: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005cb5c8: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005cb5cb: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cb5ce: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005cb5d1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cb5d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005cb5d7: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cb5da: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005cb5dc: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cb5df: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 005cb5e5: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5cb5e7u); call_ind(t); }
    /* 005cb5e7: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005cb5ea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cb5ec: je 0x5cb60a */ if (fZ) goto L_005cb60a;
L_005cb5ee:; BB(0x005cb5ee);
    /* 005cb5ee: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005cb5f0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cb5f2: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 005cb5f5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cb5f6: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cb5f9: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005cb5fb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cb5fe: mov edx, dword ptr [eax + 0xc4] */ r_edx = R32((u32)(r_eax+0xc4u));
    /* 005cb604: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5cb606u); call_ind(t); }
    /* 005cb606: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005cb608: jmp 0x5cb60c */ goto L_005cb60c;
L_005cb60a:; BB(0x005cb60a);
    /* 005cb60a: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_005cb60c:; BB(0x005cb60c);
    /* 005cb60c: mov esp, ebp */ r_esp = r_ebp;
    /* 005cb60e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cb60f: ret  */ FN_RET(0x005cb5b0); r_esp += 4; return;
}

void f_005cb610(void) /* sub_5CB610 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cb610);
    /* 005cb610: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cb611: mov ebp, esp */ r_ebp = r_esp;
    /* 005cb613: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cb616: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005cb619: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cb61b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cb61d: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5cb622u); f_0064c8a0();
    /* 005cb622: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cb625: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005cb628: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005cb62b: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cb62e: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005cb631: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cb634: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005cb637: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cb63a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005cb63c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cb63f: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 005cb645: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5cb647u); call_ind(t); }
    /* 005cb647: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005cb64a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cb64c: je 0x5cb6bb */ if (fZ) goto L_005cb6bb;
L_005cb64e:; BB(0x005cb64e);
    /* 005cb64e: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 005cb651: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cb652: mov edx, dword ptr [0x7947e4] */ r_edx = R32((u32)(0x7947e4u));
    /* 005cb658: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005cb65a: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005cb660: mov edx, dword ptr [eax + 0x25c] */ r_edx = R32((u32)(r_eax+0x25cu));
    /* 005cb666: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5cb668u); call_ind(t); }
    /* 005cb668: mov ecx, eax */ r_ecx = r_eax;
    /* 005cb66a: call 0x5d5de0 */ r_esp -= 4; W32(r_esp, 0x5cb66fu); f_005d5de0();
    /* 005cb66f: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cb673: jne 0x5cb68d */ if (!fZ) goto L_005cb68d;
L_005cb675:; BB(0x005cb675);
    /* 005cb675: mov eax, dword ptr [0x7947e4] */ r_eax = R32((u32)(0x7947e4u));
    /* 005cb67a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cb67c: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005cb682: mov eax, dword ptr [edx + 0x2b0] */ r_eax = R32((u32)(r_edx+0x2b0u));
    /* 005cb688: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5cb68au); call_ind(t); }
    /* 005cb68a: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_005cb68d:; BB(0x005cb68d);
    /* 005cb68d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cb690: imul ecx, ecx, -1 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xffffffffu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005cb693: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005cb696: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cb699: imul edx, edx, -1 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xffffffffu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005cb69c: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 005cb69f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005cb6a1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cb6a3: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 005cb6a6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cb6a7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cb6aa: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005cb6ac: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cb6af: mov eax, dword ptr [edx + 0xc4] */ r_eax = R32((u32)(r_edx+0xc4u));
    /* 005cb6b5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5cb6b7u); call_ind(t); }
    /* 005cb6b7: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005cb6b9: jmp 0x5cb6bd */ goto L_005cb6bd;
L_005cb6bb:; BB(0x005cb6bb);
    /* 005cb6bb: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_005cb6bd:; BB(0x005cb6bd);
    /* 005cb6bd: mov esp, ebp */ r_esp = r_ebp;
    /* 005cb6bf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cb6c0: ret  */ FN_RET(0x005cb610); r_esp += 4; return;
}

void f_005cb7d0(void) /* sub_5CB7D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cb7d0);
    /* 005cb7d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cb7d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005cb7d3: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cb7d6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005cb7d9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005cb7dc: shl eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005cb7df: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cb7e2: lea edx, [ecx + eax + 0x48] */ r_edx = (u32)(r_ecx+r_eax+0x48u);
    /* 005cb7e6: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005cb7e9: mov ecx, dword ptr [edx + eax*8] */ r_ecx = R32((u32)(r_edx+r_eax*8));
    /* 005cb7ec: mov edx, dword ptr [edx + eax*8 + 4] */ r_edx = R32((u32)(r_edx+r_eax*8+0x4u));
    /* 005cb7f0: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005cb7f3: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 005cb7f6: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cb7fa: jne 0x5cb80b */ if (!fZ) goto L_005cb80b;
L_005cb7fc:; BB(0x005cb7fc);
    /* 005cb7fc: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cb800: jne 0x5cb80b */ if (!fZ) goto L_005cb80b;
L_005cb802:; BB(0x005cb802);
    /* 005cb802: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005cb809: jmp 0x5cb812 */ goto L_005cb812;
L_005cb80b:; BB(0x005cb80b);
    /* 005cb80b: mov dword ptr [ebp - 0x10], 1 */ W32((u32)(r_ebp+0xfffffff0u), 0x1u);
L_005cb812:; BB(0x005cb812);
    /* 005cb812: mov al, byte ptr [ebp - 0x10] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff0u))) & 0xffu);
    /* 005cb815: mov esp, ebp */ r_esp = r_ebp;
    /* 005cb817: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cb818: ret 8 */ FN_RET(0x005cb7d0); r_esp += 12; return;
}

void f_005cb820(void) /* sub_5CB820 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cb820);
    /* 005cb820: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cb821: mov ebp, esp */ r_ebp = r_esp;
    /* 005cb823: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cb826: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005cb829: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005cb830: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005cb837: jmp 0x5cb842 */ goto L_005cb842;
L_005cb839:; BB(0x005cb839);
    /* 005cb839: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cb83c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005cb83f: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_005cb842:; BB(0x005cb842);
    /* 005cb842: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cb846: jge 0x5cb86a */ if ((fS==fO)) goto L_005cb86a;
L_005cb848:; BB(0x005cb848);
    /* 005cb848: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cb84b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cb84c: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005cb84f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005cb850: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cb853: call 0x5cb7d0 */ r_esp -= 4; W32(r_esp, 0x5cb858u); f_005cb7d0();
    /* 005cb858: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005cb85b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cb85d: je 0x5cb868 */ if (fZ) goto L_005cb868;
L_005cb85f:; BB(0x005cb85f);
    /* 005cb85f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cb862: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005cb865: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005cb868:; BB(0x005cb868);
    /* 005cb868: jmp 0x5cb839 */ goto L_005cb839;
L_005cb86a:; BB(0x005cb86a);
    /* 005cb86a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cb86d: mov esp, ebp */ r_esp = r_ebp;
    /* 005cb86f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cb870: ret 4 */ FN_RET(0x005cb820); r_esp += 8; return;
}

void f_005cb880(void) /* sub_5CB880 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cb880);
    /* 005cb880: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cb881: mov ebp, esp */ r_ebp = r_esp;
    /* 005cb883: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cb886: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 005cb889: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cb88b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cb88d: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5cb892u); f_0064c8a0();
    /* 005cb892: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cb895: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005cb898: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 005cb89b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005cb89e: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005cb8a1: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cb8a4: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005cb8a7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005cb8ae: jmp 0x5cb8b9 */ goto L_005cb8b9;
L_005cb8b0:; BB(0x005cb8b0);
    /* 005cb8b0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cb8b3: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005cb8b6: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_005cb8b9:; BB(0x005cb8b9);
    /* 005cb8b9: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cb8bd: jge 0x5cb8fd */ if ((fS==fO)) goto L_005cb8fd;
L_005cb8bf:; BB(0x005cb8bf);
    /* 005cb8bf: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005cb8c2: shl eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005cb8c5: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005cb8c8: lea edx, [ecx + eax + 0x48] */ r_edx = (u32)(r_ecx+r_eax+0x48u);
    /* 005cb8cc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cb8cf: mov ecx, dword ptr [edx + eax*8] */ r_ecx = R32((u32)(r_edx+r_eax*8));
    /* 005cb8d2: mov edx, dword ptr [edx + eax*8 + 4] */ r_edx = R32((u32)(r_edx+r_eax*8+0x4u));
    /* 005cb8d6: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005cb8d9: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 005cb8dc: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005cb8df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cb8e0: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005cb8e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cb8e4: lea edx, [ebp - 0x24] */ r_edx = (u32)(r_ebp+0xffffffdcu);
    /* 005cb8e7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005cb8e8: lea ecx, [ebp - 0xc] */ r_ecx = (u32)(r_ebp+0xfffffff4u);
    /* 005cb8eb: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x5cb8f0u); f_0064c5c0();
    /* 005cb8f0: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005cb8f2: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005cb8f5: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005cb8f8: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005cb8fb: jmp 0x5cb8b0 */ goto L_005cb8b0;
L_005cb8fd:; BB(0x005cb8fd);
    /* 005cb8fd: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005cb900: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cb903: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 005cb905: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cb908: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 005cb90b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005cb90e: mov esp, ebp */ r_esp = r_ebp;
    /* 005cb910: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cb911: ret 8 */ FN_RET(0x005cb880); r_esp += 12; return;
}

void f_005cb920(void) /* sub_5CB920 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cb920);
    /* 005cb920: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cb921: mov ebp, esp */ r_ebp = r_esp;
    /* 005cb923: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cb926: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005cb929: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cb92b: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005cb92e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cb92f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cb932: call 0x5cb880 */ r_esp -= 4; W32(r_esp, 0x5cb937u); f_005cb880();
    /* 005cb937: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005cb93e: jmp 0x5cb949 */ goto L_005cb949;
L_005cb940:; BB(0x005cb940);
    /* 005cb940: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cb943: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005cb946: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005cb949:; BB(0x005cb949);
    /* 005cb949: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cb94d: jge 0x5cb982 */ if ((fS==fO)) goto L_005cb982;
L_005cb94f:; BB(0x005cb94f);
    /* 005cb94f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cb952: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005cb953: lea eax, [ebp - 0x14] */ r_eax = (u32)(r_ebp+0xffffffecu);
    /* 005cb956: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cb957: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cb95a: call 0x5cb880 */ r_esp -= 4; W32(r_esp, 0x5cb95fu); f_005cb880();
    /* 005cb95f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cb962: add ecx, dword ptr [eax] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005cb964: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005cb967: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cb96a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005cb96b: lea eax, [ebp - 0x1c] */ r_eax = (u32)(r_ebp+0xffffffe4u);
    /* 005cb96e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cb96f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cb972: call 0x5cb880 */ r_esp -= 4; W32(r_esp, 0x5cb977u); f_005cb880();
    /* 005cb977: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cb97a: add ecx, dword ptr [eax + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005cb97d: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005cb980: jmp 0x5cb940 */ goto L_005cb940;
L_005cb982:; BB(0x005cb982);
    /* 005cb982: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cb986: jg 0x5cb997 */ if ((!fZ&&fS==fO)) goto L_005cb997;
L_005cb988:; BB(0x005cb988);
    /* 005cb988: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cb98c: jg 0x5cb997 */ if ((!fZ&&fS==fO)) goto L_005cb997;
L_005cb98e:; BB(0x005cb98e);
    /* 005cb98e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005cb995: jmp 0x5cb99e */ goto L_005cb99e;
L_005cb997:; BB(0x005cb997);
    /* 005cb997: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
L_005cb99e:; BB(0x005cb99e);
    /* 005cb99e: mov al, byte ptr [ebp - 0x24] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffdcu))) & 0xffu);
    /* 005cb9a1: mov esp, ebp */ r_esp = r_ebp;
    /* 005cb9a3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cb9a4: ret  */ FN_RET(0x005cb920); r_esp += 4; return;
}

void f_005cb9b0(void) /* sub_5CB9B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cb9b0);
    /* 005cb9b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cb9b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005cb9b3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cb9b6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005cb9b9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005cb9c0: jmp 0x5cb9cb */ goto L_005cb9cb;
L_005cb9c2:; BB(0x005cb9c2);
    /* 005cb9c2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cb9c5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005cb9c8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005cb9cb:; BB(0x005cb9cb);
    /* 005cb9cb: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cb9cf: jge 0x5cba05 */ if ((fS==fO)) goto L_005cba05;
L_005cb9d1:; BB(0x005cb9d1);
    /* 005cb9d1: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005cb9d8: jmp 0x5cb9e3 */ goto L_005cb9e3;
L_005cb9da:; BB(0x005cb9da);
    /* 005cb9da: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cb9dd: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005cb9e0: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_005cb9e3:; BB(0x005cb9e3);
    /* 005cb9e3: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cb9e7: jge 0x5cba03 */ if ((fS==fO)) goto L_005cba03;
L_005cb9e9:; BB(0x005cb9e9);
    /* 005cb9e9: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cb9ec: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005cb9ed: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cb9f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cb9f1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cb9f4: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005cb9f6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cb9f9: mov eax, dword ptr [edx + 0xbc] */ r_eax = R32((u32)(r_edx+0xbcu));
    /* 005cb9ff: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5cba01u); call_ind(t); }
    /* 005cba01: jmp 0x5cb9da */ goto L_005cb9da;
L_005cba03:; BB(0x005cba03);
    /* 005cba03: jmp 0x5cb9c2 */ goto L_005cb9c2;
L_005cba05:; BB(0x005cba05);
    /* 005cba05: mov esp, ebp */ r_esp = r_ebp;
    /* 005cba07: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cba08: ret  */ FN_RET(0x005cb9b0); r_esp += 4; return;
}

