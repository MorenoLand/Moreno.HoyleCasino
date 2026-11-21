#include "protos.h"

void f_005e5840(void) /* CasinoDemoNavFMScript::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e5840);
    /* 005e5840: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e5841: mov ebp, esp */ r_ebp = r_esp;
    /* 005e5843: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e5844: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e5847: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5849: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e584c: call 0x5fc0d0 */ r_esp -= 4; W32(r_esp, 0x5e5851u); f_005fc0d0();
    /* 005e5851: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e5854: mov dword ptr [eax], 0x6d5630 */ W32((u32)(r_eax), 0x6d5630u);
    /* 005e585a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e585d: mov esp, ebp */ r_esp = r_ebp;
    /* 005e585f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e5860: ret  */ FN_RET(0x005e5840); r_esp += 4; return;
}

void f_005e5890(void) /* CasinoDemoNavFMScript::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e5890);
    /* 005e5890: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e5891: mov ebp, esp */ r_ebp = r_esp;
    /* 005e5893: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e5896: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005e5899: push 0x311a58 */ { u32 v = 0x311a58u; r_esp -= 4; W32(r_esp, v); }
    /* 005e589e: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 005e58a3: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005e58a6: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x5e58abu); f_005fb2b0();
    /* 005e58ab: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005e58ae: push 0x311a59 */ { u32 v = 0x311a59u; r_esp -= 4; W32(r_esp, v); }
    /* 005e58b3: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005e58b9: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 005e58bc: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x5e58c1u); f_005fb2b0();
    /* 005e58c1: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005e58c4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e58c7: call 0x5fc360 */ r_esp -= 4; W32(r_esp, 0x5e58ccu); f_005fc360();
    /* 005e58cc: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005e58cf: cmp dword ptr [ebp - 0x14], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005e58d3: ja 0x5e5a4f */ if ((!fC&&!fZ)) goto L_005e5a4f;
L_005e58d9:; BB(0x005e58d9);
    /* 005e58d9: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e58dc: jmp dword ptr [edx*4 + 0x5e5a54] */ { u32 t = R32((u32)(r_edx*4+0x5e5a54u)); switch (t) { case 0x5e58e3u: goto L_005e58e3; case 0x5e58fcu: goto L_005e58fc; case 0x5e598du: goto L_005e598d; case 0x5e59fbu: goto L_005e59fb; default: UNSUP(0x005e58dc, "jump table entry is not a known target"); } }
L_005e58e3:; BB(0x005e58e3);
    /* 005e58e3: push 0xf0 */ { u32 v = 0xf0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e58e8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e58ea: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e58ed: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e58ef: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e58f2: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005e58f5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5e58f7u); call_ind(t); }
    /* 005e58f7: jmp 0x5e5a4f */ goto L_005e5a4f;
L_005e58fc:; BB(0x005e58fc);
    /* 005e58fc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e58ff: call 0x5eb220 */ r_esp -= 4; W32(r_esp, 0x5e5904u); f_005eb220();
    /* 005e5904: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005e5907: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e590a: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e590d: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005e5910: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e5913: call 0x5eb240 */ r_esp -= 4; W32(r_esp, 0x5e5918u); f_005eb240();
    /* 005e5918: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e591b: jle 0x5e5924 */ if ((fZ||fS!=fO)) goto L_005e5924;
L_005e591d:; BB(0x005e591d);
    /* 005e591d: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_005e5924:; BB(0x005e5924);
    /* 005e5924: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e5927: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e5928: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e592b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e592d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e5930: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005e5936: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5e5938u); call_ind(t); }
    /* 005e5938: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e593b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e593d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e5940: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005e5943: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5e5945u); call_ind(t); }
    /* 005e5945: mov dword ptr [0x794920], 0xff */ W32((u32)(0x794920u), 0xffu);
    /* 005e594f: mov dword ptr [0x79491c], 0 */ W32((u32)(0x79491cu), 0x0u);
    /* 005e5959: mov cl, byte ptr [0x794920] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(0x794920u))) & 0xffu);
    /* 005e595f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e5960: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e5963: call 0x5eb5d0 */ r_esp -= 4; W32(r_esp, 0x5e5968u); f_005eb5d0();
    /* 005e5968: mov dl, byte ptr [0x79491c] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(0x79491cu))) & 0xffu);
    /* 005e596e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e596f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e5972: call 0x5eb5d0 */ r_esp -= 4; W32(r_esp, 0x5e5977u); f_005eb5d0();
    /* 005e5977: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5979: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005e597b: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e597e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e5980: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e5983: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005e5986: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5e5988u); call_ind(t); }
    /* 005e5988: jmp 0x5e5a4f */ goto L_005e5a4f;
L_005e598d:; BB(0x005e598d);
    /* 005e598d: mov ecx, dword ptr [0x794920] */ r_ecx = R32((u32)(0x794920u));
    /* 005e5993: sub ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005e5996: mov dword ptr [0x794920], ecx */ W32((u32)(0x794920u), r_ecx);
    /* 005e599c: mov edx, dword ptr [0x79491c] */ r_edx = R32((u32)(0x79491cu));
    /* 005e59a2: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e59a5: mov dword ptr [0x79491c], edx */ W32((u32)(0x79491cu), r_edx);
    /* 005e59ab: cmp dword ptr [0x794920], 0 */ {  u32 a = R32((u32)(0x794920u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e59b2: jge 0x5e59ca */ if ((fS==fO)) goto L_005e59ca;
L_005e59b4:; BB(0x005e59b4);
    /* 005e59b4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e59b6: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005e59b8: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e59bb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e59bd: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e59c0: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005e59c3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5e59c5u); call_ind(t); }
    /* 005e59c5: jmp 0x5e5a4f */ goto L_005e5a4f;
L_005e59ca:; BB(0x005e59ca);
    /* 005e59ca: mov cl, byte ptr [0x794920] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(0x794920u))) & 0xffu);
    /* 005e59d0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e59d1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e59d4: call 0x5eb5d0 */ r_esp -= 4; W32(r_esp, 0x5e59d9u); f_005eb5d0();
    /* 005e59d9: mov dl, byte ptr [0x79491c] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(0x79491cu))) & 0xffu);
    /* 005e59df: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e59e0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e59e3: call 0x5eb5d0 */ r_esp -= 4; W32(r_esp, 0x5e59e8u); f_005eb5d0();
    /* 005e59e8: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005e59ea: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005e59ec: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e59ef: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e59f1: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e59f4: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005e59f7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5e59f9u); call_ind(t); }
    /* 005e59f9: jmp 0x5e5a4f */ goto L_005e5a4f;
L_005e59fb:; BB(0x005e59fb);
    /* 005e59fb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e59fe: call 0x5eb220 */ r_esp -= 4; W32(r_esp, 0x5e5a03u); f_005eb220();
    /* 005e5a03: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e5a04: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e5a07: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e5a09: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e5a0c: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005e5a12: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5e5a14u); call_ind(t); }
    /* 005e5a14: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e5a19: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e5a1c: call 0x5eb5d0 */ r_esp -= 4; W32(r_esp, 0x5e5a21u); f_005eb5d0();
    /* 005e5a21: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e5a24: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e5a26: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e5a29: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005e5a2c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5e5a2eu); call_ind(t); }
    /* 005e5a2e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e5a31: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e5a33: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e5a36: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 005e5a39: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5e5a3bu); call_ind(t); }
    /* 005e5a3b: push 0xf0 */ { u32 v = 0xf0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5a40: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5a42: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e5a45: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e5a47: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e5a4a: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005e5a4d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5e5a4fu); call_ind(t); }
L_005e5a4f:; BB(0x005e5a4f);
    /* 005e5a4f: mov esp, ebp */ r_esp = r_ebp;
    /* 005e5a51: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e5a52: ret  */ FN_RET(0x005e5890); r_esp += 4; return;
}

