#include "protos.h"

void f_00555020(void) /* sub_555020 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00555020);
    /* 00555020: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00555021: mov ebp, esp */ r_ebp = r_esp;
    /* 00555023: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00555026: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00555029: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00555030: jmp 0x55503b */ goto L_0055503b;
L_00555032:; BB(0x00555032);
    /* 00555032: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00555035: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00555038: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0055503b:; BB(0x0055503b);
    /* 0055503b: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055503f: jge 0x555061 */ if ((fS==fO)) goto L_00555061;
L_00555041:; BB(0x00555041);
    /* 00555041: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00555044: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00555047: mov eax, dword ptr [edx + ecx*4 + 4] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 0055504b: movzx ecx, word ptr [eax + 0x190] */ r_ecx = (u32)R16((u32)(r_eax+0x190u));
    /* 00555052: movzx edx, word ptr [ebp + 8] */ r_edx = (u32)R16((u32)(r_ebp+0x8u));
    /* 00555056: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00555058: jne 0x55505f */ if (!fZ) goto L_0055505f;
L_0055505a:; BB(0x0055505a);
    /* 0055505a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055505d: jmp 0x555064 */ goto L_00555064;
L_0055505f:; BB(0x0055505f);
    /* 0055505f: jmp 0x555032 */ goto L_00555032;
L_00555061:; BB(0x00555061);
    /* 00555061: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_00555064:; BB(0x00555064);
    /* 00555064: mov esp, ebp */ r_esp = r_ebp;
    /* 00555066: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00555067: ret 4 */ FN_RET(0x00555020); r_esp += 8; return;
}

void f_00555070(void) /* sub_555070 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00555070);
    /* 00555070: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00555071: mov ebp, esp */ r_ebp = r_esp;
    /* 00555073: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00555075: push 0x6a560a */ { u32 v = 0x6a560au; r_esp -= 4; W32(r_esp, v); }
    /* 0055507a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00555080: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00555081: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00555084: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00555089: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0055508b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055508c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0055508f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00555095: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00555098: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0055509d: mov cl, byte ptr [eax + 0x25] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x25u))) & 0xffu);
    /* 005550a0: mov byte ptr [ebp - 0x15], cl */ W8((u32)(r_ebp+0xffffffebu), (u8)r_ecx);
    /* 005550a3: movzx edx, byte ptr [ebp - 0x15] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffebu));
    /* 005550a7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005550a9: jne 0x5550c7 */ if (!fZ) goto L_005550c7;
L_005550ab:; BB(0x005550ab);
    /* 005550ab: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005550ad: mov eax, dword ptr [0x79341c] */ r_eax = R32((u32)(0x79341cu));
    /* 005550b2: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005550b5: mov edx, dword ptr [0x79341c] */ r_edx = R32((u32)(0x79341cu));
    /* 005550bb: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005550be: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005550c0: mov ecx, eax */ r_ecx = r_eax;
    /* 005550c2: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005550c5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5550c7u); call_ind(t); }
L_005550c7:; BB(0x005550c7);
    /* 005550c7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005550c9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005550ca: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 005550d0: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005550d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005550d4: fld1  */ FPUSH(1.0);
    /* 005550d6: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005550d9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005550db: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005550dd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005550df: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005550e1: push 0x18a96 */ { u32 v = 0x18a96u; r_esp -= 4; W32(r_esp, v); }
    /* 005550e6: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005550ec: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005550ee: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005550f4: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 005550fa: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5550fcu); call_ind(t); }
    /* 005550fc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005550fe: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00555101: mov edx, dword ptr [ecx + 0x68] */ r_edx = R32((u32)(r_ecx+0x68u));
    /* 00555104: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00555107: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 0055510a: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0055510c: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00555112: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x555114u); call_ind(t); }
    /* 00555114: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00555117: mov edx, dword ptr [ecx + 0x68] */ r_edx = R32((u32)(r_ecx+0x68u));
    /* 0055511a: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0055511d: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 00555120: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00555122: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00555125: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x555127u); call_ind(t); }
    /* 00555127: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00555129: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x55512eu); f_00686d82();
    /* 0055512e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00555131: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00555134: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0055513b: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055513f: je 0x555158 */ if (fZ) goto L_00555158;
L_00555141:; BB(0x00555141);
    /* 00555141: mov ecx, dword ptr [0x79341c] */ r_ecx = R32((u32)(0x79341cu));
    /* 00555147: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0055514a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055514b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0055514e: call 0x6010a0 */ r_esp -= 4; W32(r_esp, 0x555153u); f_006010a0();
    /* 00555153: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00555156: jmp 0x55515f */ goto L_0055515f;
L_00555158:; BB(0x00555158);
    /* 00555158: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_0055515f:; BB(0x0055515f);
    /* 0055515f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00555162: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00555165: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0055516c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055516f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00555170: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00555173: mov ecx, dword ptr [edx + 0x68] */ r_ecx = R32((u32)(r_edx+0x68u));
    /* 00555176: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x55517bu); f_005f5d50();
    /* 0055517b: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0055517e: call 0x5542c0 */ r_esp -= 4; W32(r_esp, 0x555183u); f_005542c0();
    /* 00555183: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00555186: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0055518d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0055518e: mov esp, ebp */ r_esp = r_ebp;
    /* 00555190: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00555191: ret  */ FN_RET(0x00555070); r_esp += 4; return;
}

void f_005551a0(void) /* sub_5551A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005551a0);
    /* 005551a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005551a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005551a3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005551a6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005551a9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005551ac: call 0x552f70 */ r_esp -= 4; W32(r_esp, 0x5551b1u); f_00552f70();
    /* 005551b1: mov eax, dword ptr [0x793420] */ r_eax = R32((u32)(0x793420u));
    /* 005551b6: cmp dword ptr [eax + 0x14], 0 */ {  u32 a = R32((u32)(r_eax+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005551ba: jne 0x555221 */ if (!fZ) goto L_00555221;
L_005551bc:; BB(0x005551bc);
    /* 005551bc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005551be: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005551c1: mov edx, dword ptr [ecx + 0x94] */ r_edx = R32((u32)(r_ecx+0x94u));
    /* 005551c7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005551c8: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005551ce: call 0x5f4510 */ r_esp -= 4; W32(r_esp, 0x5551d3u); f_005f4510();
    /* 005551d3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005551d5: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005551d8: mov ecx, dword ptr [eax + 0x98] */ r_ecx = R32((u32)(r_eax+0x98u));
    /* 005551de: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005551df: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005551e5: call 0x5f4510 */ r_esp -= 4; W32(r_esp, 0x5551eau); f_005f4510();
    /* 005551ea: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005551f1: jmp 0x5551fc */ goto L_005551fc;
L_005551f3:; BB(0x005551f3);
    /* 005551f3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005551f6: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005551f9: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_005551fc:; BB(0x005551fc);
    /* 005551fc: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00555200: jge 0x55521f */ if ((fS==fO)) goto L_0055521f;
L_00555202:; BB(0x00555202);
    /* 00555202: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00555205: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00555208: mov edx, dword ptr [ecx + eax*4 + 4] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 0055520c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055520f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00555212: mov ecx, dword ptr [ecx + eax*4 + 4] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 00555216: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00555218: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0055521b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x55521du); call_ind(t); }
    /* 0055521d: jmp 0x5551f3 */ goto L_005551f3;
L_0055521f:; BB(0x0055521f);
    /* 0055521f: jmp 0x555261 */ goto L_00555261;
L_00555221:; BB(0x00555221);
    /* 00555221: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00555224: mov edx, dword ptr [ecx + 0x74] */ r_edx = R32((u32)(r_ecx+0x74u));
    /* 00555227: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055522a: mov ecx, dword ptr [eax + 0x74] */ r_ecx = R32((u32)(r_eax+0x74u));
    /* 0055522d: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0055522f: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00555232: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x555234u); call_ind(t); }
    /* 00555234: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00555236: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00555239: mov ecx, dword ptr [ecx + 0x74] */ r_ecx = R32((u32)(r_ecx+0x74u));
    /* 0055523c: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x555241u); f_005f5d50();
    /* 00555241: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00555244: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00555247: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055524a: mov ecx, dword ptr [ecx + 0x70] */ r_ecx = R32((u32)(r_ecx+0x70u));
    /* 0055524d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0055524f: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00555252: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x555254u); call_ind(t); }
    /* 00555254: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00555256: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00555259: mov ecx, dword ptr [ecx + 0x70] */ r_ecx = R32((u32)(r_ecx+0x70u));
    /* 0055525c: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x555261u); f_005f5d50();
L_00555261:; BB(0x00555261);
    /* 00555261: mov esp, ebp */ r_esp = r_ebp;
    /* 00555263: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00555264: ret  */ FN_RET(0x005551a0); r_esp += 4; return;
}

void f_00555270(void) /* sub_555270 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00555270);
    /* 00555270: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00555271: mov ebp, esp */ r_ebp = r_esp;
    /* 00555273: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00555274: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00555277: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0055527a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055527d: mov edx, dword ptr [ecx + eax*4 + 4] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 00555281: mov ax, word ptr [ebp + 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 00555285: mov word ptr [edx + 0x190], ax */ W16((u32)(r_edx+0x190u), (u16)r_eax);
    /* 0055528c: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0055528f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00555292: mov eax, dword ptr [edx + ecx*4 + 4] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 00555296: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00555299: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055529c: mov ecx, dword ptr [edx + ecx*4 + 4] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 005552a0: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005552a2: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 005552a5: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5552a7u); call_ind(t); }
    /* 005552a7: mov esp, ebp */ r_esp = r_ebp;
    /* 005552a9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005552aa: ret 8 */ FN_RET(0x00555270); r_esp += 12; return;
}

void f_005552b0(void) /* sub_5552B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005552b0);
    /* 005552b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005552b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005552b3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005552b5: push 0x6a5630 */ { u32 v = 0x6a5630u; r_esp -= 4; W32(r_esp, v); }
    /* 005552ba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005552c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005552c1: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005552c4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005552c9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005552cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005552cc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005552cf: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005552d5: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005552d8: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005552db: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005552dd: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005552e0: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 005552e3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5552e5u); call_ind(t); }
    /* 005552e5: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005552ec: jmp 0x5552f7 */ goto L_005552f7;
L_005552ee:; BB(0x005552ee);
    /* 005552ee: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005552f1: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005552f4: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_005552f7:; BB(0x005552f7);
    /* 005552f7: cmp dword ptr [ebp - 0x10], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005552fb: jge 0x55544c */ if ((fS==fO)) goto L_0055544c;
L_00555301:; BB(0x00555301);
    /* 00555301: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00555304: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00555307: mov ecx, dword ptr [eax + edx*4 + 4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 0055530b: call 0x5f54c0 */ r_esp -= 4; W32(r_esp, 0x555310u); f_005f54c0();
    /* 00555310: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00555313: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00555315: je 0x555447 */ if (fZ) goto L_00555447;
L_0055531b:; BB(0x0055531b);
    /* 0055531b: cmp dword ptr [0x793418], 0 */ {  u32 a = R32((u32)(0x793418u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00555322: jne 0x555362 */ if (!fZ) goto L_00555362;
L_00555324:; BB(0x00555324);
    /* 00555324: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00555327: add edx, 0x94 */ {  u32 a = r_edx; u32 b = 0x94u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055532d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055532e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055532f: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 00555335: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00555338: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00555339: fld1  */ FPUSH(1.0);
    /* 0055533b: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0055533e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00555340: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00555342: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00555344: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00555346: push 0x186a3 */ { u32 v = 0x186a3u; r_esp -= 4; W32(r_esp, v); }
    /* 0055534b: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 00555350: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00555352: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00555358: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 0055535e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x555360u); call_ind(t); }
    /* 00555360: jmp 0x55539f */ goto L_0055539f;
L_00555362:; BB(0x00555362);
    /* 00555362: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00555365: add ecx, 0x98 */ {  u32 a = r_ecx; u32 b = 0x98u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0055536b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055536c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055536d: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 00555373: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00555376: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00555377: fld1  */ FPUSH(1.0);
    /* 00555379: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0055537c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055537e: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00555380: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00555382: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00555384: push 0x186a3 */ { u32 v = 0x186a3u; r_esp -= 4; W32(r_esp, v); }
    /* 00555389: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0055538f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00555391: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00555397: mov edx, dword ptr [eax + 0x80] */ r_edx = R32((u32)(r_eax+0x80u));
    /* 0055539d: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x55539fu); call_ind(t); }
L_0055539f:; BB(0x0055539f);
    /* 0055539f: mov eax, 1 */ r_eax = 0x1u;
    /* 005553a4: sub eax, dword ptr [0x793418] */ {  u32 a = r_eax; u32 b = R32((u32)(0x793418u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005553aa: mov dword ptr [0x793418], eax */ W32((u32)(0x793418u), r_eax);
    /* 005553af: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005553b2: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005553b5: mov dword ptr [ecx + 0x2c], edx */ W32((u32)(r_ecx+0x2cu), r_edx);
    /* 005553b8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005553ba: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005553bd: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005553c0: mov edx, dword ptr [ecx + eax*4 + 0x18] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x18u));
    /* 005553c4: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005553c7: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005553ca: mov ecx, dword ptr [ecx + eax*4 + 0x18] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x18u));
    /* 005553ce: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005553d0: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005553d6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5553d8u); call_ind(t); }
    /* 005553d8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005553db: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005553de: mov eax, dword ptr [edx + ecx*4 + 0x18] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x18u));
    /* 005553e2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005553e5: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005553e8: mov ecx, dword ptr [edx + ecx*4 + 0x18] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x18u));
    /* 005553ec: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005553ee: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 005553f1: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5553f3u); call_ind(t); }
    /* 005553f3: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 005553f5: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5553fau); f_00686d82();
    /* 005553fa: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005553fd: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00555400: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00555407: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055540b: je 0x55541e */ if (fZ) goto L_0055541e;
L_0055540d:; BB(0x0055540d);
    /* 0055540d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00555410: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00555411: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00555414: call 0x5558c0 */ r_esp -= 4; W32(r_esp, 0x555419u); f_005558c0();
    /* 00555419: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0055541c: jmp 0x555425 */ goto L_00555425;
L_0055541e:; BB(0x0055541e);
    /* 0055541e: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_00555425:; BB(0x00555425);
    /* 00555425: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00555428: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0055542b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00555432: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00555435: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00555436: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00555439: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0055543c: mov ecx, dword ptr [ecx + eax*4 + 0x18] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x18u));
    /* 00555440: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x555445u); f_005f5d50();
    /* 00555445: jmp 0x55545d */ goto L_0055545d;
L_00555447:; BB(0x00555447);
    /* 00555447: jmp 0x5552ee */ goto L_005552ee;
L_0055544c:; BB(0x0055544c);
    /* 0055544c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0055544e: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00555450: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00555453: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00555455: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00555458: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0055545b: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x55545du); call_ind(t); }
L_0055545d:; BB(0x0055545d);
    /* 0055545d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00555460: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00555467: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00555468: mov esp, ebp */ r_esp = r_ebp;
    /* 0055546a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055546b: ret 4 */ FN_RET(0x005552b0); r_esp += 8; return;
}

