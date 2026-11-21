#include "protos.h"

void f_005c8da0(void) /* MLVSlotState::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c8da0);
    /* 005c8da0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c8da1: mov ebp, esp */ r_ebp = r_esp;
    /* 005c8da3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c8da4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c8da7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c8daa: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005c8dad: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c8db0: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005c8db3: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 005c8db6: imul ecx, dword ptr [eax + 0xc] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_eax+0xcu)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c8dba: mov eax, ecx */ r_eax = r_ecx;
    /* 005c8dbc: mov esp, ebp */ r_esp = r_ebp;
    /* 005c8dbe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c8dbf: ret  */ FN_RET(0x005c8da0); r_esp += 4; return;
}

void f_005c9140(void) /* MLVSlotState::func_005c9140 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c9140);
    /* 005c9140: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c9141: mov ebp, esp */ r_ebp = r_esp;
    /* 005c9143: sub esp, 0x7c */ {  u32 a = r_esp; u32 b = 0x7cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c9146: mov dword ptr [ebp - 0x78], ecx */ W32((u32)(r_ebp+0xffffff88u), r_ecx);
    /* 005c9149: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 005c914c: movzx ecx, byte ptr [eax + 0x14] */ r_ecx = (u32)R8((u32)(r_eax+0x14u));
    /* 005c9150: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9152: jne 0x5c9159 */ if (!fZ) goto L_005c9159;
L_005c9154:; BB(0x005c9154);
    /* 005c9154: jmp 0x5c938a */ goto L_005c938a;
L_005c9159:; BB(0x005c9159);
    /* 005c9159: mov edx, dword ptr [ebp - 0x78] */ r_edx = R32((u32)(r_ebp+0xffffff88u));
    /* 005c915c: mov byte ptr [edx + 0x14], 0 */ W8((u32)(r_edx+0x14u), 0x0u);
    /* 005c9160: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005c9167: push 0x8c */ { u32 v = 0x8cu; r_esp -= 4; W32(r_esp, v); }
    /* 005c916c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c916e: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 005c9171: add eax, 0x54 */ {  u32 a = r_eax; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c9174: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c9175: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x5c917au); f_00686fa2();
    /* 005c917a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c917d: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 005c9180: mov byte ptr [ecx + 0xe4], 0 */ W8((u32)(r_ecx+0xe4u), 0x0u);
    /* 005c9187: mov edx, dword ptr [ebp - 0x78] */ r_edx = R32((u32)(r_ebp+0xffffff88u));
    /* 005c918a: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005c918d: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005c9190: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c9193: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005c919a: jmp 0x5c91a5 */ goto L_005c91a5;
L_005c919c:; BB(0x005c919c);
    /* 005c919c: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c919f: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c91a2: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_005c91a5:; BB(0x005c91a5);
    /* 005c91a5: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 005c91a8: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005c91ab: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c91ae: cmp edx, dword ptr [ecx + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c91b1: jge 0x5c9311 */ if ((fS==fO)) goto L_005c9311;
L_005c91b7:; BB(0x005c91b7);
    /* 005c91b7: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 005c91ba: add eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c91bd: mov byte ptr [eax + 0x34], 0 */ W8((u32)(r_eax+0x34u), 0x0u);
    /* 005c91c1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c91c4: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c91c7: mov edx, dword ptr [ebp - 0x78] */ r_edx = R32((u32)(r_ebp+0xffffff88u));
    /* 005c91ca: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c91cc: cmp ecx, dword ptr [edx + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c91cf: setle al */ r_eax = (r_eax & 0xffffff00u) | ((((fZ||fS!=fO)) ? 1 : 0) & 0xffu);
    /* 005c91d2: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005c91d5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c91d7: jne 0x5c91db */ if (!fZ) goto L_005c91db;
L_005c91d9:; BB(0x005c91d9);
    /* 005c91d9: jmp 0x5c919c */ goto L_005c919c;
L_005c91db:; BB(0x005c91db);
    /* 005c91db: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 005c91e2: jmp 0x5c91ed */ goto L_005c91ed;
L_005c91e4:; BB(0x005c91e4);
    /* 005c91e4: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005c91e7: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c91ea: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
L_005c91ed:; BB(0x005c91ed);
    /* 005c91ed: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 005c91f0: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005c91f3: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005c91f5: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
    /* 005c91f8: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005c91fb: cmp eax, dword ptr [ebp - 0x5c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffa4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c91fe: jge 0x5c9253 */ if ((fS==fO)) goto L_005c9253;
L_005c9200:; BB(0x005c9200);
    /* 005c9200: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005c9203: mov edx, dword ptr [ebp - 0x78] */ r_edx = R32((u32)(r_ebp+0xffffff88u));
    /* 005c9206: cmp dword ptr [edx + ecx*4 + 0x18], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x18u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c920b: jl 0x5c921c */ if ((fS!=fO)) goto L_005c921c;
L_005c920d:; BB(0x005c920d);
    /* 005c920d: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005c9210: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 005c9213: mov edx, dword ptr [ecx + eax*4 + 0x18] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x18u));
    /* 005c9217: mov dword ptr [ebp - 0x7c], edx */ W32((u32)(r_ebp+0xffffff84u), r_edx);
    /* 005c921a: jmp 0x5c922b */ goto L_005c922b;
L_005c921c:; BB(0x005c921c);
    /* 005c921c: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005c921f: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 005c9222: mov edx, dword ptr [ecx + eax*4 + 0x18] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x18u));
    /* 005c9226: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005c9228: mov dword ptr [ebp - 0x7c], edx */ W32((u32)(r_ebp+0xffffff84u), r_edx);
L_005c922b:; BB(0x005c922b);
    /* 005c922b: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c922e: imul eax, eax, 0x1c */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x1cu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c9231: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c9234: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005c9237: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 005c923a: add edx, dword ptr [eax + ecx*4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+r_ecx*4)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c923d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c923e: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005c9241: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c9242: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 005c9245: call 0x5be340 */ r_esp -= 4; W32(r_esp, 0x5c924au); f_005be340();
    /* 005c924a: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005c924d: mov dword ptr [ebp + ecx*4 - 0x28], eax */ W32((u32)(r_ebp+r_ecx*4+0xffffffd8u), r_eax);
    /* 005c9251: jmp 0x5c91e4 */ goto L_005c91e4;
L_005c9253:; BB(0x005c9253);
    /* 005c9253: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 005c9255: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c9257: lea edx, [ebp - 0x48] */ r_edx = (u32)(r_ebp+0xffffffb8u);
    /* 005c925a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c925b: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x5c9260u); f_00686fa2();
    /* 005c9260: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c9263: lea eax, [ebp - 0x48] */ r_eax = (u32)(r_ebp+0xffffffb8u);
    /* 005c9266: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c9267: lea ecx, [ebp - 0x28] */ r_ecx = (u32)(r_ebp+0xffffffd8u);
    /* 005c926a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c926b: mov edx, dword ptr [ebp - 0x78] */ r_edx = R32((u32)(r_ebp+0xffffff88u));
    /* 005c926e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c9270: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 005c9273: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 005c9276: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5c9278u); call_ind(t); }
    /* 005c9278: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005c927b: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c927f: jne 0x5c9286 */ if (!fZ) goto L_005c9286;
L_005c9281:; BB(0x005c9281);
    /* 005c9281: jmp 0x5c919c */ goto L_005c919c;
L_005c9286:; BB(0x005c9286);
    /* 005c9286: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 005c9289: add eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c928c: mov byte ptr [eax + 0x34], 1 */ W8((u32)(r_eax+0x34u), 0x1u);
    /* 005c9290: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
    /* 005c9297: jmp 0x5c92a2 */ goto L_005c92a2;
L_005c9299:; BB(0x005c9299);
    /* 005c9299: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005c929c: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c929f: mov dword ptr [ebp - 0x50], ecx */ W32((u32)(r_ebp+0xffffffb0u), r_ecx);
L_005c92a2:; BB(0x005c92a2);
    /* 005c92a2: mov edx, dword ptr [ebp - 0x78] */ r_edx = R32((u32)(r_ebp+0xffffff88u));
    /* 005c92a5: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005c92a8: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005c92aa: mov dword ptr [ebp - 0x6c], ecx */ W32((u32)(r_ebp+0xffffff94u), r_ecx);
    /* 005c92ad: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005c92b0: cmp edx, dword ptr [ebp - 0x6c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffff94u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c92b3: jge 0x5c9303 */ if ((fS==fO)) goto L_005c9303;
L_005c92b5:; BB(0x005c92b5);
    /* 005c92b5: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c92b8: imul eax, eax, 0x1c */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x1cu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c92bb: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c92be: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005c92c1: mov edx, dword ptr [eax + ecx*4] */ r_edx = R32((u32)(r_eax+r_ecx*4));
    /* 005c92c4: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c92c7: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 005c92ca: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 005c92cd: imul eax, eax, 0x14 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x14u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c92d0: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 005c92d3: lea edx, [ecx + eax + 0x54] */ r_edx = (u32)(r_ecx+r_eax+0x54u);
    /* 005c92d7: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 005c92da: lea ecx, [edx + eax*4] */ r_ecx = (u32)(r_edx+r_eax*4);
    /* 005c92dd: mov dword ptr [ebp - 0x54], ecx */ W32((u32)(r_ebp+0xffffffacu), r_ecx);
    /* 005c92e0: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005c92e3: cmp dword ptr [ebp + edx*4 - 0x48], 0 */ {  u32 a = R32((u32)(r_ebp+r_edx*4+0xffffffb8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c92e8: jne 0x5c92ec */ if (!fZ) goto L_005c92ec;
L_005c92ea:; BB(0x005c92ea);
    /* 005c92ea: jmp 0x5c9299 */ goto L_005c9299;
L_005c92ec:; BB(0x005c92ec);
    /* 005c92ec: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005c92ef: cmp dword ptr [eax], 0 */ {  u32 a = R32((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c92f2: je 0x5c92f6 */ if (fZ) goto L_005c92f6;
L_005c92f4:; BB(0x005c92f4);
    /* 005c92f4: jmp 0x5c9299 */ goto L_005c9299;
L_005c92f6:; BB(0x005c92f6);
    /* 005c92f6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c92f9: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c92fc: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005c92ff: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 005c9301: jmp 0x5c9299 */ goto L_005c9299;
L_005c9303:; BB(0x005c9303);
    /* 005c9303: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c9306: add eax, dword ptr [ebp - 0x2c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffd4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c9309: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005c930c: jmp 0x5c919c */ goto L_005c919c;
L_005c9311:; BB(0x005c9311);
    /* 005c9311: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 005c9314: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c9317: mov dword ptr [ecx + 0xe0], edx */ W32((u32)(r_ecx+0xe0u), r_edx);
    /* 005c931d: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 005c9320: cmp dword ptr [eax + 0xe0], 0 */ {  u32 a = R32((u32)(r_eax+0xe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c9327: jge 0x5c9336 */ if ((fS==fO)) goto L_005c9336;
L_005c9329:; BB(0x005c9329);
    /* 005c9329: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 005c932c: mov dword ptr [ecx + 0xe0], 0 */ W32((u32)(r_ecx+0xe0u), 0x0u);
L_005c9336:; BB(0x005c9336);
    /* 005c9336: mov edx, dword ptr [ebp - 0x78] */ r_edx = R32((u32)(r_ebp+0xffffff88u));
    /* 005c9339: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005c933c: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 005c933f: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 005c9342: add ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c9345: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c9346: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 005c9349: call 0x5d0a20 */ r_esp -= 4; W32(r_esp, 0x5c934eu); f_005d0a20();
    /* 005c934e: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 005c9351: call 0x5c9140 */ r_esp -= 4; W32(r_esp, 0x5c9356u); f_005c9140();
    /* 005c9356: mov edx, dword ptr [ebp - 0x78] */ r_edx = R32((u32)(r_ebp+0xffffff88u));
    /* 005c9359: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005c935c: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 005c935f: cmp dword ptr [ebp - 0x74], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c9363: jge 0x5c938a */ if ((fS==fO)) goto L_005c938a;
L_005c9365:; BB(0x005c9365);
    /* 005c9365: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 005c9367: jne 0x5c9380 */ if (!fZ) goto L_005c9380;
L_005c9369:; BB(0x005c9369);
    /* 005c9369: push 0x296 */ { u32 v = 0x296u; r_esp -= 4; W32(r_esp, v); }
    /* 005c936e: push 0x6d23d4 */ { u32 v = 0x6d23d4u; r_esp -= 4; W32(r_esp, v); }
    /* 005c9373: push 0x6d23b8 */ { u32 v = 0x6d23b8u; r_esp -= 4; W32(r_esp, v); }
    /* 005c9378: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5c937du); f_005e9f20();
    /* 005c937d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005c9380:; BB(0x005c9380);
    /* 005c9380: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c9382: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 005c9385: call 0x5d0a20 */ r_esp -= 4; W32(r_esp, 0x5c938au); f_005d0a20();
L_005c938a:; BB(0x005c938a);
    /* 005c938a: mov esp, ebp */ r_esp = r_ebp;
    /* 005c938c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c938d: ret  */ FN_RET(0x005c9140); r_esp += 4; return;
}

void f_005c9390(void) /* MLVSlotState::vfunc2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c9390);
    /* 005c9390: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c9391: mov ebp, esp */ r_ebp = r_esp;
    /* 005c9393: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c9396: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005c9399: mov dword ptr [ebp - 0xc], 0xffffffff */ W32((u32)(r_ebp+0xfffffff4u), 0xffffffffu);
    /* 005c93a0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c93a7: lea eax, [ebp - 4] */ r_eax = (u32)(r_ebp+0xfffffffcu);
    /* 005c93aa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c93ab: lea ecx, [ebp - 0xc] */ r_ecx = (u32)(r_ebp+0xfffffff4u);
    /* 005c93ae: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c93af: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005c93b2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c93b3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c93b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c93b7: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c93ba: call 0x5c9550 */ r_esp -= 4; W32(r_esp, 0x5c93bfu); f_005c9550();
    /* 005c93bf: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c93c2: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005c93c5: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 005c93c8: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c93cb: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 005c93ce: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005c93d1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c93d4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c93d5: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c93d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c93d9: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005c93dc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c93dd: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c93e0: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005c93e3: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 005c93e6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c93e7: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005c93ea: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c93eb: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c93ee: call 0x5c9640 */ r_esp -= 4; W32(r_esp, 0x5c93f3u); f_005c9640();
    /* 005c93f3: mov ecx, eax */ r_ecx = r_eax;
    /* 005c93f5: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c93f8: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005c93f9: idiv dword ptr [ebp - 0x14] */ { i32 d = (i32)R32((u32)(r_ebp+0xffffffecu)); if (!d) UNSUP(0x005c93f9, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005c93f9, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005c93fc: imul ecx, eax */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_eax; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c93ff: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005c9402: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c9405: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005c9408: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 005c940b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c940c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c940f: call 0x5c96c0 */ r_esp -= 4; W32(r_esp, 0x5c9414u); f_005c96c0();
    /* 005c9414: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c9417: jl 0x5c9423 */ if ((fS!=fO)) goto L_005c9423;
L_005c9419:; BB(0x005c9419);
    /* 005c9419: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c941c: mov byte ptr [edx + 0xe4], 1 */ W8((u32)(r_edx+0xe4u), 0x1u);
L_005c9423:; BB(0x005c9423);
    /* 005c9423: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c9426: mov esp, ebp */ r_esp = r_ebp;
    /* 005c9428: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c9429: ret 8 */ FN_RET(0x005c9390); r_esp += 12; return;
}

