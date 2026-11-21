#include "protos.h"

void f_00448810(void) /* LetItRideDealScript::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00448810);
    /* 00448810: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00448811: mov ebp, esp */ r_ebp = r_esp;
    /* 00448813: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00448815: push 0x69ed1d */ { u32 v = 0x69ed1du; r_esp -= 4; W32(r_esp, v); }
    /* 0044881a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00448820: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00448821: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00448822: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00448827: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00448829: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044882a: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0044882d: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00448833: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00448836: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00448838: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0044883b: call 0x5fc0d0 */ r_esp -= 4; W32(r_esp, 0x448840u); f_005fc0d0();
    /* 00448840: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00448847: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0044884a: mov dword ptr [eax], 0x6b8c4c */ W32((u32)(r_eax), 0x6b8c4cu);
    /* 00448850: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00448852: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00448858: call 0x637810 */ r_esp -= 4; W32(r_esp, 0x44885du); f_00637810();
    /* 0044885d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0044885f: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00448862: setl cl */ r_ecx = (r_ecx & 0xffffff00u) | ((((fS!=fO)) ? 1 : 0) & 0xffu);
    /* 00448865: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00448868: mov byte ptr [edx + 0x24], cl */ W8((u32)(r_edx+0x24u), (u8)r_ecx);
    /* 0044886b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00448872: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00448875: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00448878: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0044887f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00448880: mov esp, ebp */ r_esp = r_ebp;
    /* 00448882: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00448883: ret  */ FN_RET(0x00448810); r_esp += 4; return;
}

void f_00448910(void) /* LetItRideDealScript::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00448910);
    /* 00448910: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00448911: mov ebp, esp */ r_ebp = r_esp;
    /* 00448913: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00448915: push 0x69ed4e */ { u32 v = 0x69ed4eu; r_esp -= 4; W32(r_esp, v); }
    /* 0044891a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00448920: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00448921: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00448924: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00448929: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0044892b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044892c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0044892f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00448935: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00448938: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0044893b: call 0x5fc360 */ r_esp -= 4; W32(r_esp, 0x448940u); f_005fc360();
    /* 00448940: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00448943: cmp dword ptr [ebp - 0x28], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00448947: ja 0x448c7d */ if ((!fC&&!fZ)) goto L_00448c7d;
L_0044894d:; BB(0x0044894d);
    /* 0044894d: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00448950: jmp dword ptr [eax*4 + 0x448c8c] */ { u32 t = R32((u32)(r_eax*4+0x448c8cu)); switch (t) { case 0x448957u: goto L_00448957; case 0x4489dbu: goto L_004489db; case 0x448ab5u: goto L_00448ab5; case 0x448bb9u: goto L_00448bb9; case 0x448bdfu: goto L_00448bdf; default: UNSUP(0x00448950, "jump table entry is not a known target"); } }
L_00448957:; BB(0x00448957);
    /* 00448957: mov ecx, dword ptr [0x790710] */ r_ecx = R32((u32)(0x790710u));
    /* 0044895d: call 0x44d380 */ r_esp -= 4; W32(r_esp, 0x448962u); f_0044d380();
    /* 00448962: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00448965: mov dword ptr [ecx + 0x20], eax */ W32((u32)(r_ecx+0x20u), r_eax);
    /* 00448968: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0044896b: cmp dword ptr [edx + 0x20], -1 */ {  u32 a = R32((u32)(r_edx+0x20u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044896f: jne 0x448987 */ if (!fZ) goto L_00448987;
L_00448971:; BB(0x00448971);
    /* 00448971: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00448973: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00448975: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00448978: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0044897a: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0044897d: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00448980: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x448982u); call_ind(t); }
    /* 00448982: jmp 0x448c7d */ goto L_00448c7d;
L_00448987:; BB(0x00448987);
    /* 00448987: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00448989: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0044898c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0044898e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00448991: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00448994: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x448996u); call_ind(t); }
    /* 00448996: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00448999: call 0x4488b0 */ r_esp -= 4; W32(r_esp, 0x44899eu); f_004488b0();
    /* 0044899e: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004489a1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004489a3: je 0x4489c7 */ if (fZ) goto L_004489c7;
L_004489a5:; BB(0x004489a5);
    /* 004489a5: mov ecx, dword ptr [0x790710] */ r_ecx = R32((u32)(0x790710u));
    /* 004489ab: call 0x44ce90 */ r_esp -= 4; W32(r_esp, 0x4489b0u); f_0044ce90();
    /* 004489b0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004489b2: jne 0x4489c7 */ if (!fZ) goto L_004489c7;
L_004489b4:; BB(0x004489b4);
    /* 004489b4: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004489b7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004489b8: mov eax, dword ptr [0x790718] */ r_eax = R32((u32)(0x790718u));
    /* 004489bd: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 004489c0: call 0x4482f0 */ r_esp -= 4; W32(r_esp, 0x4489c5u); f_004482f0();
    /* 004489c5: jmp 0x4489d6 */ goto L_004489d6;
L_004489c7:; BB(0x004489c7);
    /* 004489c7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004489c9: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004489cc: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004489ce: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004489d1: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 004489d4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4489d6u); call_ind(t); }
L_004489d6:; BB(0x004489d6);
    /* 004489d6: jmp 0x448c7d */ goto L_00448c7d;
L_004489db:; BB(0x004489db);
    /* 004489db: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004489dd: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004489e0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004489e2: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004489e5: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004489e8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4489eau); call_ind(t); }
    /* 004489ea: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 004489f0: call 0x637630 */ r_esp -= 4; W32(r_esp, 0x4489f5u); f_00637630();
    /* 004489f5: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004489f8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004489fa: je 0x448aa1 */ if (fZ) goto L_00448aa1;
L_00448a00:; BB(0x00448a00);
    /* 00448a00: mov edx, dword ptr [0x790718] */ r_edx = R32((u32)(0x790718u));
    /* 00448a06: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00448a09: mov ecx, dword ptr [0x790718] */ r_ecx = R32((u32)(0x790718u));
    /* 00448a0f: mov ecx, dword ptr [ecx + 0x6c] */ r_ecx = R32((u32)(r_ecx+0x6cu));
    /* 00448a12: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00448a14: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00448a17: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x448a19u); call_ind(t); }
    /* 00448a19: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00448a1b: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x448a20u); f_00686d82();
    /* 00448a20: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00448a23: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00448a26: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00448a2d: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00448a31: je 0x448a44 */ if (fZ) goto L_00448a44;
L_00448a33:; BB(0x00448a33);
    /* 00448a33: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00448a36: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00448a37: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00448a3a: call 0x6010a0 */ r_esp -= 4; W32(r_esp, 0x448a3fu); f_006010a0();
    /* 00448a3f: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00448a42: jmp 0x448a4b */ goto L_00448a4b;
L_00448a44:; BB(0x00448a44);
    /* 00448a44: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_00448a4b:; BB(0x00448a4b);
    /* 00448a4b: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00448a4e: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00448a51: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00448a58: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00448a5b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00448a5c: mov ecx, dword ptr [0x790718] */ r_ecx = R32((u32)(0x790718u));
    /* 00448a62: mov ecx, dword ptr [ecx + 0x6c] */ r_ecx = R32((u32)(r_ecx+0x6cu));
    /* 00448a65: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x448a6au); f_005f5d50();
    /* 00448a6a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00448a6c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00448a6d: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 00448a73: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00448a76: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00448a77: fld1  */ FPUSH(1.0);
    /* 00448a79: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00448a7c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00448a7e: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00448a80: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00448a82: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00448a84: push 0x186a6 */ { u32 v = 0x186a6u; r_esp -= 4; W32(r_esp, v); }
    /* 00448a89: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 00448a8f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00448a91: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00448a97: mov edx, dword ptr [eax + 0x80] */ r_edx = R32((u32)(r_eax+0x80u));
    /* 00448a9d: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x448a9fu); call_ind(t); }
    /* 00448a9f: jmp 0x448ab0 */ goto L_00448ab0;
L_00448aa1:; BB(0x00448aa1);
    /* 00448aa1: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00448aa3: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00448aa6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00448aa8: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00448aab: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00448aae: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x448ab0u); call_ind(t); }
L_00448ab0:; BB(0x00448ab0);
    /* 00448ab0: jmp 0x448c7d */ goto L_00448c7d;
L_00448ab5:; BB(0x00448ab5);
    /* 00448ab5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00448ab7: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00448aba: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00448abc: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00448abf: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00448ac2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x448ac4u); call_ind(t); }
    /* 00448ac4: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00448ac7: call 0x4488b0 */ r_esp -= 4; W32(r_esp, 0x448accu); f_004488b0();
    /* 00448acc: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00448acf: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00448ad1: je 0x448b2a */ if (fZ) goto L_00448b2a;
L_00448ad3:; BB(0x00448ad3);
    /* 00448ad3: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00448ad5: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x448adau); f_00686d82();
    /* 00448ada: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00448add: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00448ae0: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00448ae7: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00448aeb: je 0x448b05 */ if (fZ) goto L_00448b05;
L_00448aed:; BB(0x00448aed);
    /* 00448aed: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00448af0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00448af1: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00448af4: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00448af7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00448af8: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00448afb: call 0x448ca0 */ r_esp -= 4; W32(r_esp, 0x448b00u); f_00448ca0();
    /* 00448b00: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00448b03: jmp 0x448b0c */ goto L_00448b0c;
L_00448b05:; BB(0x00448b05);
    /* 00448b05: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_00448b0c:; BB(0x00448b0c);
    /* 00448b0c: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00448b0f: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 00448b12: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00448b19: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00448b1c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00448b1d: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00448b20: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x448b25u); f_005fc420();
    /* 00448b25: jmp 0x448bb4 */ goto L_00448bb4;
L_00448b2a:; BB(0x00448b2a);
    /* 00448b2a: mov ecx, dword ptr [0x790718] */ r_ecx = R32((u32)(0x790718u));
    /* 00448b30: mov edx, dword ptr [ecx + 0x6c] */ r_edx = R32((u32)(r_ecx+0x6cu));
    /* 00448b33: mov eax, dword ptr [0x790718] */ r_eax = R32((u32)(0x790718u));
    /* 00448b38: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 00448b3b: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00448b3d: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00448b40: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x448b42u); call_ind(t); }
    /* 00448b42: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00448b44: mov ecx, dword ptr [0x790718] */ r_ecx = R32((u32)(0x790718u));
    /* 00448b4a: mov edx, dword ptr [ecx + 0x6c] */ r_edx = R32((u32)(r_ecx+0x6cu));
    /* 00448b4d: mov eax, dword ptr [0x790718] */ r_eax = R32((u32)(0x790718u));
    /* 00448b52: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 00448b55: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00448b57: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00448b5d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x448b5fu); call_ind(t); }
    /* 00448b5f: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00448b66: jmp 0x448b71 */ goto L_00448b71;
L_00448b68:; BB(0x00448b68);
    /* 00448b68: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00448b6b: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00448b6e: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_00448b71:; BB(0x00448b71);
    /* 00448b71: cmp dword ptr [ebp - 0x10], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00448b75: jge 0x448b9a */ if ((fS==fO)) goto L_00448b9a;
L_00448b77:; BB(0x00448b77);
    /* 00448b77: mov edx, dword ptr [0x790710] */ r_edx = R32((u32)(0x790710u));
    /* 00448b7d: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 00448b80: call 0x6436c0 */ r_esp -= 4; W32(r_esp, 0x448b85u); f_006436c0();
    /* 00448b85: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00448b86: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00448b89: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00448b8c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00448b8d: mov ecx, dword ptr [0x790710] */ r_ecx = R32((u32)(0x790710u));
    /* 00448b93: call 0x44cda0 */ r_esp -= 4; W32(r_esp, 0x448b98u); f_0044cda0();
    /* 00448b98: jmp 0x448b68 */ goto L_00448b68;
L_00448b9a:; BB(0x00448b9a);
    /* 00448b9a: mov ecx, dword ptr [0x790718] */ r_ecx = R32((u32)(0x790718u));
    /* 00448ba0: call 0x4474b0 */ r_esp -= 4; W32(r_esp, 0x448ba5u); f_004474b0();
    /* 00448ba5: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00448ba7: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00448baa: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00448bac: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00448baf: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 00448bb2: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x448bb4u); call_ind(t); }
L_00448bb4:; BB(0x00448bb4);
    /* 00448bb4: jmp 0x448c7d */ goto L_00448c7d;
L_00448bb9:; BB(0x00448bb9);
    /* 00448bb9: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00448bbb: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00448bbe: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00448bc0: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00448bc3: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00448bc6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x448bc8u); call_ind(t); }
    /* 00448bc8: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00448bcb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00448bcc: mov edx, dword ptr [0x790718] */ r_edx = R32((u32)(0x790718u));
    /* 00448bd2: mov ecx, dword ptr [edx + 0x4c] */ r_ecx = R32((u32)(r_edx+0x4cu));
    /* 00448bd5: call 0x448480 */ r_esp -= 4; W32(r_esp, 0x448bdau); f_00448480();
    /* 00448bda: jmp 0x448c7d */ goto L_00448c7d;
L_00448bdf:; BB(0x00448bdf);
    /* 00448bdf: mov eax, dword ptr [0x790710] */ r_eax = R32((u32)(0x790710u));
    /* 00448be4: mov byte ptr [eax + 0xd1], 0 */ W8((u32)(r_eax+0xd1u), 0x0u);
    /* 00448beb: mov ecx, dword ptr [0x790718] */ r_ecx = R32((u32)(0x790718u));
    /* 00448bf1: mov edx, dword ptr [ecx + 0x64] */ r_edx = R32((u32)(r_ecx+0x64u));
    /* 00448bf4: mov eax, dword ptr [0x790718] */ r_eax = R32((u32)(0x790718u));
    /* 00448bf9: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 00448bfc: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00448bfe: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00448c01: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x448c03u); call_ind(t); }
    /* 00448c03: mov ecx, dword ptr [0x790718] */ r_ecx = R32((u32)(0x790718u));
    /* 00448c09: mov edx, dword ptr [ecx + 0x68] */ r_edx = R32((u32)(r_ecx+0x68u));
    /* 00448c0c: mov eax, dword ptr [0x790718] */ r_eax = R32((u32)(0x790718u));
    /* 00448c11: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 00448c14: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00448c16: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00448c19: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x448c1bu); call_ind(t); }
    /* 00448c1b: mov ecx, dword ptr [0x790710] */ r_ecx = R32((u32)(0x790710u));
    /* 00448c21: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00448c24: call 0x6436c0 */ r_esp -= 4; W32(r_esp, 0x448c29u); f_006436c0();
    /* 00448c29: mov edx, dword ptr [0x790710] */ r_edx = R32((u32)(0x790710u));
    /* 00448c2f: mov word ptr [edx + 0xc0], ax */ W16((u32)(r_edx+0xc0u), (u16)r_eax);
    /* 00448c36: mov eax, dword ptr [0x790710] */ r_eax = R32((u32)(0x790710u));
    /* 00448c3b: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00448c3e: call 0x6436c0 */ r_esp -= 4; W32(r_esp, 0x448c43u); f_006436c0();
    /* 00448c43: mov ecx, dword ptr [0x790710] */ r_ecx = R32((u32)(0x790710u));
    /* 00448c49: mov word ptr [ecx + 0xc2], ax */ W16((u32)(r_ecx+0xc2u), (u16)r_eax);
    /* 00448c50: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00448c52: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00448c54: mov edx, dword ptr [0x79070c] */ r_edx = R32((u32)(0x79070cu));
    /* 00448c5a: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00448c5d: mov ecx, dword ptr [0x79070c] */ r_ecx = R32((u32)(0x79070cu));
    /* 00448c63: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00448c66: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00448c68: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00448c6b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x448c6du); call_ind(t); }
    /* 00448c6d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00448c6f: mov ecx, dword ptr [0x79070c] */ r_ecx = R32((u32)(0x79070cu));
    /* 00448c75: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00448c78: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x448c7du); f_005fc420();
L_00448c7d:; BB(0x00448c7d);
    /* 00448c7d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00448c80: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00448c87: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00448c88: mov esp, ebp */ r_esp = r_ebp;
    /* 00448c8a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00448c8b: ret  */ FN_RET(0x00448910); r_esp += 4; return;
}

