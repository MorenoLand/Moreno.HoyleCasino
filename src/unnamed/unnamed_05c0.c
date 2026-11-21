#include "protos.h"

void f_005c0790(void) /* sub_5C0790 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c0790);
    /* 005c0790: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c0791: mov ebp, esp */ r_ebp = r_esp;
    /* 005c0793: sub esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c0796: mov dword ptr [ebp - 0x64], ecx */ W32((u32)(r_ebp+0xffffff9cu), r_ecx);
    /* 005c0799: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 005c079c: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005c079f: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005c07a2: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005c07a9: cmp dword ptr [ebp - 0x64], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff9cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c07ad: je 0x5c07c5 */ if (fZ) goto L_005c07c5;
L_005c07af:; BB(0x005c07af);
    /* 005c07af: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 005c07b2: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005c07b5: cmp eax, dword ptr [ebp - 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005c07b8: ja 0x5c07c5 */ if ((!fC&&!fZ)) goto L_005c07c5;
L_005c07ba:; BB(0x005c07ba);
    /* 005c07ba: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 005c07bd: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c07c0: cmp edx, dword ptr [ecx + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005c07c3: jbe 0x5c07cb */ if ((fC||fZ)) goto L_005c07cb;
L_005c07c5:; BB(0x005c07c5);
    /* 005c07c5: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x5c07cbu); call_ind(t); }
L_005c07cb:; BB(0x005c07cb);
    /* 005c07cb: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 005c07ce: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005c07d1: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c07d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c07d7: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c07da: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c07dd: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 005c07e0: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005c07e3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005c07e6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c07e7: lea ecx, [ebp - 0x24] */ r_ecx = (u32)(r_ebp+0xffffffdcu);
    /* 005c07ea: call 0x5beeb0 */ r_esp -= 4; W32(r_esp, 0x5c07efu); f_005beeb0();
    /* 005c07ef: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c07f2: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c07f5: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 005c07f8: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005c07fb: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c07fe: mov dword ptr [ebp - 0x60], ecx */ W32((u32)(r_ebp+0xffffffa0u), r_ecx);
    /* 005c0801: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c0804: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
    /* 005c0807: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 005c080a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c080b: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 005c080e: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005c0811: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c0812: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 005c0815: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c0818: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c0819: call 0x5c0980 */ r_esp -= 4; W32(r_esp, 0x5c081eu); f_005c0980();
    /* 005c081e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c0821: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 005c0824: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005c0827: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 005c082a: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 005c082d: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005c0830: sub ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005c0833: mov dword ptr [ebp - 0x54], ecx */ W32((u32)(r_ebp+0xffffffacu), r_ecx);
    /* 005c0836: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005c0839: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 005c083c: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005c083f: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 005c0842: mov cl, byte ptr [ebp - 0x48] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffb8u))) & 0xffu);
    /* 005c0845: mov byte ptr [ebp - 0x47], cl */ W8((u32)(r_ebp+0xffffffb9u), (u8)r_ecx);
    /* 005c0848: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 005c084b: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005c084e: sub eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005c0851: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 005c0854: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 005c0857: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 005c085a: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 005c085d: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 005c0860: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005c0863: mov esp, ebp */ r_esp = r_ebp;
    /* 005c0865: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c0866: ret 4 */ FN_RET(0x005c0790); r_esp += 8; return;
}

void f_005c0870(void) /* sub_5C0870 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c0870);
    /* 005c0870: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c0871: mov ebp, esp */ r_ebp = r_esp;
    /* 005c0873: sub esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c0876: mov dword ptr [ebp - 0x5c], ecx */ W32((u32)(r_ebp+0xffffffa4u), r_ecx);
    /* 005c0879: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 005c087c: mov dword ptr [eax + 4], 0 */ W32((u32)(r_eax+0x4u), 0x0u);
    /* 005c0883: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 005c0886: mov dword ptr [ecx + 8], 0 */ W32((u32)(r_ecx+0x8u), 0x0u);
    /* 005c088d: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 005c0890: mov dword ptr [edx + 0xc], 0 */ W32((u32)(r_edx+0xcu), 0x0u);
    /* 005c0897: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c089b: jne 0x5c08a3 */ if (!fZ) goto L_005c08a3;
L_005c089d:; BB(0x005c089d);
    /* 005c089d: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005c089f: jmp 0x5c0902 */ goto L_005c0902;
L_005c08a3:; BB(0x005c08a3);
    /* 005c08a3: mov dword ptr [ebp - 4], 0x3fffffff */ W32((u32)(r_ebp+0xfffffffcu), 0x3fffffffu);
    /* 005c08aa: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005c08ae: jbe 0x5c08b8 */ if ((fC||fZ)) goto L_005c08b8;
L_005c08b0:; BB(0x005c08b0);
    /* 005c08b0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c08b3: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 005c08b6: jmp 0x5c08bf */ goto L_005c08bf;
L_005c08b8:; BB(0x005c08b8);
    /* 005c08b8: mov dword ptr [ebp - 0x60], 1 */ W32((u32)(r_ebp+0xffffffa0u), 0x1u);
L_005c08bf:; BB(0x005c08bf);
    /* 005c08bf: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 005c08c2: cmp ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005c08c5: jae 0x5c08ce */ if (!fC) goto L_005c08ce;
L_005c08c7:; BB(0x005c08c7);
    /* 005c08c7: call 0x5c06f0 */ r_esp -= 4; W32(r_esp, 0x5c08ccu); f_005c06f0();
    /* 005c08cc: jmp 0x5c0900 */ goto L_005c0900;
L_005c08ce:; BB(0x005c08ce);
    /* 005c08ce: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c08d0: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005c08d3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c08d4: call 0x5c6310 */ r_esp -= 4; W32(r_esp, 0x5c08d9u); f_005c6310();
    /* 005c08d9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c08dc: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 005c08df: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 005c08e2: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 005c08e5: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 005c08e8: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005c08eb: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 005c08ee: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 005c08f1: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005c08f4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005c08f7: lea edx, [eax + ecx*4] */ r_edx = (u32)(r_eax+r_ecx*4);
    /* 005c08fa: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 005c08fd: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
L_005c0900:; BB(0x005c0900);
    /* 005c0900: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_005c0902:; BB(0x005c0902);
    /* 005c0902: mov esp, ebp */ r_esp = r_ebp;
    /* 005c0904: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c0905: ret 4 */ FN_RET(0x005c0870); r_esp += 8; return;
}

void f_005c0910(void) /* sub_5C0910 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c0910);
    /* 005c0910: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c0911: mov ebp, esp */ r_ebp = r_esp;
    /* 005c0913: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c0916: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c0918: mov byte ptr [ebp - 1], al */ W8((u32)(r_ebp+0xffffffffu), (u8)r_eax);
    /* 005c091b: mov cl, byte ptr [ebp - 1] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffffu))) & 0xffu);
    /* 005c091e: mov byte ptr [ebp - 0x1e], cl */ W8((u32)(r_ebp+0xffffffe2u), (u8)r_ecx);
    /* 005c0921: mov dl, byte ptr [ebp - 2] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffffeu))) & 0xffu);
    /* 005c0924: mov byte ptr [ebp - 0x1d], dl */ W8((u32)(r_ebp+0xffffffe3u), (u8)r_edx);
    /* 005c0927: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c092a: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005c092d: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005c0930: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c0933: lea eax, [edx + ecx*4] */ r_eax = (u32)(r_edx+r_ecx*4);
    /* 005c0936: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005c0939: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005c093b: mov byte ptr [ebp - 9], cl */ W8((u32)(r_ebp+0xfffffff7u), (u8)r_ecx);
    /* 005c093e: mov dl, byte ptr [ebp - 9] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff7u))) & 0xffu);
    /* 005c0941: mov byte ptr [ebp - 0x15], dl */ W8((u32)(r_ebp+0xffffffebu), (u8)r_edx);
    /* 005c0944: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005c0947: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005c094a: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c094d: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005c0950: jmp 0x5c0964 */ goto L_005c0964;
L_005c0952:; BB(0x005c0952);
    /* 005c0952: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c0955: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005c0958: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005c095b: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c095e: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c0961: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_005c0964:; BB(0x005c0964);
    /* 005c0964: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005c0968: jbe 0x5c0976 */ if ((fC||fZ)) goto L_005c0976;
L_005c096a:; BB(0x005c096a);
    /* 005c096a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c096d: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005c0970: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c0972: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 005c0974: jmp 0x5c0952 */ goto L_005c0952;
L_005c0976:; BB(0x005c0976);
    /* 005c0976: mov esp, ebp */ r_esp = r_ebp;
    /* 005c0978: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c0979: ret  */ FN_RET(0x005c0910); r_esp += 4; return;
}

void f_005c0980(void) /* sub_5C0980 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c0980);
    /* 005c0980: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c0981: mov ebp, esp */ r_ebp = r_esp;
    /* 005c0983: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c0986: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c0988: mov byte ptr [ebp - 1], al */ W8((u32)(r_ebp+0xffffffffu), (u8)r_eax);
    /* 005c098b: mov cl, byte ptr [ebp - 4] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffffcu))) & 0xffu);
    /* 005c098e: mov byte ptr [ebp - 2], cl */ W8((u32)(r_ebp+0xfffffffeu), (u8)r_ecx);
    /* 005c0991: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005c0994: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005c0997: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c099a: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005c099d: mov cl, byte ptr [ebp - 1] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffffu))) & 0xffu);
    /* 005c09a0: mov byte ptr [ebp - 0x22], cl */ W8((u32)(r_ebp+0xffffffdeu), (u8)r_ecx);
    /* 005c09a3: mov dl, byte ptr [ebp - 3] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffffdu))) & 0xffu);
    /* 005c09a6: mov byte ptr [ebp - 0x21], dl */ W8((u32)(r_ebp+0xffffffdfu), (u8)r_edx);
    /* 005c09a9: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005c09ac: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005c09af: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c09b2: sub ecx, dword ptr [ebp - 0x14] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005c09b5: sar ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 005c09b8: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005c09bb: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c09be: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c09c1: lea ecx, [eax + edx*4] */ r_ecx = (u32)(r_eax+r_edx*4);
    /* 005c09c4: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005c09c7: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c09cb: jle 0x5c09ec */ if ((fZ||fS!=fO)) goto L_005c09ec;
L_005c09cd:; BB(0x005c09cd);
    /* 005c09cd: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c09d0: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 005c09d3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c09d4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005c09d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c09d8: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c09db: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 005c09de: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c09df: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c09e2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c09e3: call dword ptr [0x6b2280] */ { u32 t = R32((u32)(0x6b2280u)); r_esp -= 4; W32(r_esp, 0x5c09e9u); call_ind(t); }
    /* 005c09e9: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005c09ec:; BB(0x005c09ec);
    /* 005c09ec: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c09ef: mov esp, ebp */ r_esp = r_ebp;
    /* 005c09f1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c09f2: ret  */ FN_RET(0x005c0980); r_esp += 4; return;
}

void f_005c0f20(void) /* sub_5C0F20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c0f20);
    /* 005c0f20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c0f21: mov ebp, esp */ r_ebp = r_esp;
    /* 005c0f23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c0f24: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c0f27: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005c0f2a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c0f2d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005c0f2f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c0f32: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 005c0f35: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5c0f37u); call_ind(t); }
    /* 005c0f37: mov esp, ebp */ r_esp = r_ebp;
    /* 005c0f39: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c0f3a: ret  */ FN_RET(0x005c0f20); r_esp += 4; return;
}

void f_005c0f40(void) /* sub_5C0F40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c0f40);
    /* 005c0f40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c0f41: mov ebp, esp */ r_ebp = r_esp;
    /* 005c0f43: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c0f45: push 0x6a8477 */ { u32 v = 0x6a8477u; r_esp -= 4; W32(r_esp, v); }
    /* 005c0f4a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005c0f50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c0f51: sub esp, 0x90 */ {  u32 a = r_esp; u32 b = 0x90u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c0f57: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005c0f5c: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c0f5e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c0f5f: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005c0f62: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005c0f68: mov dword ptr [ebp - 0x94], ecx */ W32((u32)(r_ebp+0xffffff6cu), r_ecx);
    /* 005c0f6e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c0f70: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005c0f73: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c0f74: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005c0f7a: add ecx, 0x28 */ {  u32 a = r_ecx; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c0f7d: call 0x5c49f0 */ r_esp -= 4; W32(r_esp, 0x5c0f82u); f_005c49f0();
    /* 005c0f82: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005c0f89: jmp 0x5c0f94 */ goto L_005c0f94;
L_005c0f8b:; BB(0x005c0f8b);
    /* 005c0f8b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c0f8e: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c0f91: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_005c0f94:; BB(0x005c0f94);
    /* 005c0f94: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c0f97: cmp edx, dword ptr [ebp + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c0f9a: jge 0x5c1092 */ if ((fS==fO)) goto L_005c1092;
L_005c0fa0:; BB(0x005c0fa0);
    /* 005c0fa0: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 005c0fa5: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5c0faau); f_00686d82();
    /* 005c0faa: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c0fad: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005c0fb0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c0fb7: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c0fbb: je 0x5c0fcd */ if (fZ) goto L_005c0fcd;
L_005c0fbd:; BB(0x005c0fbd);
    /* 005c0fbd: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c0fc0: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x5c0fc5u); f_005eaaf0();
    /* 005c0fc5: mov dword ptr [ebp - 0x98], eax */ W32((u32)(r_ebp+0xffffff68u), r_eax);
    /* 005c0fcb: jmp 0x5c0fd7 */ goto L_005c0fd7;
L_005c0fcd:; BB(0x005c0fcd);
    /* 005c0fcd: mov dword ptr [ebp - 0x98], 0 */ W32((u32)(r_ebp+0xffffff68u), 0x0u);
L_005c0fd7:; BB(0x005c0fd7);
    /* 005c0fd7: mov eax, dword ptr [ebp - 0x98] */ r_eax = R32((u32)(r_ebp+0xffffff68u));
    /* 005c0fdd: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005c0fe0: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005c0fe7: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c0fea: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005c0fed: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c0fef: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 005c0ff2: add edx, dword ptr [ebp - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c0ff5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c0ff6: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005c0ff9: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005c0ffc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c0ffd: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005c1000: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c1002: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c1003: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005c1006: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c1007: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c100a: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x5c100fu); f_005eae80();
    /* 005c100f: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c1012: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c1013: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c1016: call 0x5eb000 */ r_esp -= 4; W32(r_esp, 0x5c101bu); f_005eb000();
    /* 005c101b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005c101e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c1020: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c1023: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005c1026: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5c1028u); call_ind(t); }
    /* 005c1028: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005c102e: add ecx, 0x28 */ {  u32 a = r_ecx; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c1031: mov dword ptr [ebp - 0x90], ecx */ W32((u32)(r_ebp+0xffffff70u), r_ecx);
    /* 005c1037: mov edx, dword ptr [ebp - 0x90] */ r_edx = R32((u32)(r_ebp+0xffffff70u));
    /* 005c103d: cmp dword ptr [edx + 4], 0 */ {  u32 a = R32((u32)(r_edx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c1041: jne 0x5c104f */ if (!fZ) goto L_005c104f;
L_005c1043:; BB(0x005c1043);
    /* 005c1043: mov dword ptr [ebp - 0x9c], 0 */ W32((u32)(r_ebp+0xffffff64u), 0x0u);
    /* 005c104d: jmp 0x5c106a */ goto L_005c106a;
L_005c104f:; BB(0x005c104f);
    /* 005c104f: mov eax, dword ptr [ebp - 0x90] */ r_eax = R32((u32)(r_ebp+0xffffff70u));
    /* 005c1055: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 005c105b: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 005c105e: sub edx, dword ptr [ecx + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005c1061: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 005c1064: mov dword ptr [ebp - 0x9c], edx */ W32((u32)(r_ebp+0xffffff64u), r_edx);
L_005c106a:; BB(0x005c106a);
    /* 005c106a: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c106d: cmp eax, dword ptr [ebp - 0x9c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffff64u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005c1073: jb 0x5c107b */ if (fC) goto L_005c107b;
L_005c1075:; BB(0x005c1075);
    /* 005c1075: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x5c107bu); call_ind(t); }
L_005c107b:; BB(0x005c107b);
    /* 005c107b: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 005c1081: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005c1084: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c1087: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c108a: mov dword ptr [edx + eax*4], ecx */ W32((u32)(r_edx+r_eax*4), r_ecx);
    /* 005c108d: jmp 0x5c0f8b */ goto L_005c0f8b;
L_005c1092:; BB(0x005c1092);
    /* 005c1092: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c1095: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005c109c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c109d: mov esp, ebp */ r_esp = r_ebp;
    /* 005c109f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c10a0: ret 0x10 */ FN_RET(0x005c0f40); r_esp += 20; return;
}

