#include "protos.h"

void f_00564f10(void) /* VPMultiCardDisplay::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00564f10);
    /* 00564f10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00564f11: mov ebp, esp */ r_ebp = r_esp;
    /* 00564f13: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00564f14: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00564f17: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00564f19: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00564f1b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00564f1e: call 0x643ce0 */ r_esp -= 4; W32(r_esp, 0x564f23u); f_00643ce0();
    /* 00564f23: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00564f26: mov dword ptr [eax], 0x6c99dc */ W32((u32)(r_eax), 0x6c99dcu);
    /* 00564f2c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00564f2f: mov byte ptr [ecx + 0xa], 0 */ W8((u32)(r_ecx+0xau), 0x0u);
    /* 00564f33: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00564f36: mov esp, ebp */ r_esp = r_ebp;
    /* 00564f38: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00564f39: ret  */ FN_RET(0x00564f10); r_esp += 4; return;
}

void f_00564f60(void) /* VPMultiCardDisplay::vfunc2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00564f60);
    /* 00564f60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00564f61: mov ebp, esp */ r_ebp = r_esp;
    /* 00564f63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00564f64: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00564f67: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00564f69: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00564f6a: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 00564f70: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00564f73: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00564f74: fld1  */ FPUSH(1.0);
    /* 00564f76: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00564f79: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00564f7b: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00564f7d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00564f7f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00564f81: push 0x31225e */ { u32 v = 0x31225eu; r_esp -= 4; W32(r_esp, v); }
    /* 00564f86: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 00564f8b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00564f8d: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00564f93: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 00564f99: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x564f9bu); call_ind(t); }
    /* 00564f9b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00564f9e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00564f9f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00564fa2: call 0x644660 */ r_esp -= 4; W32(r_esp, 0x564fa7u); f_00644660();
    /* 00564fa7: mov esp, ebp */ r_esp = r_ebp;
    /* 00564fa9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00564faa: ret 4 */ FN_RET(0x00564f60); r_esp += 8; return;
}

void f_00564fb0(void) /* VPMultiCardDisplay::vfunc4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00564fb0);
    /* 00564fb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00564fb1: mov ebp, esp */ r_ebp = r_esp;
    /* 00564fb3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00564fb4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00564fb7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00564fba: mov cx, word ptr [eax + 0x190] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+0x190u))) & 0xffffu);
    /* 00564fc1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00564fc2: mov ecx, dword ptr [0x79343c] */ r_ecx = R32((u32)(0x79343cu));
    /* 00564fc8: call 0x5694f0 */ r_esp -= 4; W32(r_esp, 0x564fcdu); f_005694f0();
    /* 00564fcd: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00564fd0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00564fd1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00564fd4: call 0x6447e0 */ r_esp -= 4; W32(r_esp, 0x564fd9u); f_006447e0();
    /* 00564fd9: mov esp, ebp */ r_esp = r_ebp;
    /* 00564fdb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00564fdc: ret 4 */ FN_RET(0x00564fb0); r_esp += 8; return;
}

void f_00564fe0(void) /* VPMultiCardDisplay::vfunc48 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00564fe0);
    /* 00564fe0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00564fe1: mov ebp, esp */ r_ebp = r_esp;
    /* 00564fe3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00564fe6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00564fe9: mov eax, dword ptr [0x79343c] */ r_eax = R32((u32)(0x79343cu));
    /* 00564fee: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 00564ff1: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00564ff4: cmp dword ptr [ebp - 4], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00564ff8: jne 0x56500d */ if (!fZ) goto L_0056500d;
L_00564ffa:; BB(0x00564ffa);
    /* 00564ffa: mov edx, dword ptr [0x793438] */ r_edx = R32((u32)(0x793438u));
    /* 00565000: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00565003: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00565007: jne 0x56500d */ if (!fZ) goto L_0056500d;
L_00565009:; BB(0x00565009);
    /* 00565009: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0056500b: jmp 0x56500f */ goto L_0056500f;
L_0056500d:; BB(0x0056500d);
    /* 0056500d: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0056500f:; BB(0x0056500f);
    /* 0056500f: mov esp, ebp */ r_esp = r_ebp;
    /* 00565011: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00565012: ret  */ FN_RET(0x00564fe0); r_esp += 4; return;
}

void f_00565020(void) /* VPMultiCardDisplay::vfunc29 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00565020);
    /* 00565020: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00565021: mov ebp, esp */ r_ebp = r_esp;
    /* 00565023: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00565026: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00565029: mov dword ptr [ebp - 0x14], 0xffffffff */ W32((u32)(r_ebp+0xffffffecu), 0xffffffffu);
    /* 00565030: mov dword ptr [ebp - 0x10], 1 */ W32((u32)(r_ebp+0xfffffff0u), 0x1u);
    /* 00565037: mov dword ptr [ebp - 0xc], 2 */ W32((u32)(r_ebp+0xfffffff4u), 0x2u);
    /* 0056503e: mov dword ptr [ebp - 8], 3 */ W32((u32)(r_ebp+0xfffffff8u), 0x3u);
    /* 00565045: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0056504c: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0056504f: mov cx, word ptr [eax + 0x190] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+0x190u))) & 0xffffu);
    /* 00565056: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00565057: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x56505cu); f_00641280();
    /* 0056505c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056505f: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00565062: jne 0x56506d */ if (!fZ) goto L_0056506d;
L_00565064:; BB(0x00565064);
    /* 00565064: mov dword ptr [ebp - 0x20], 1 */ W32((u32)(r_ebp+0xffffffe0u), 0x1u);
    /* 0056506b: jmp 0x565083 */ goto L_00565083;
L_0056506d:; BB(0x0056506d);
    /* 0056506d: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00565070: mov ax, word ptr [edx + 0x190] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+0x190u))) & 0xffffu);
    /* 00565077: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00565078: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x56507du); f_00641280();
    /* 0056507d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00565080: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
L_00565083:; BB(0x00565083);
    /* 00565083: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00565086: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00565089: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0056508c: mov ax, word ptr [edx + 0x190] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+0x190u))) & 0xffffu);
    /* 00565093: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00565094: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x565099u); f_00641290();
    /* 00565099: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056509c: mov ecx, dword ptr [ebp + eax*4 - 0x14] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffffecu));
    /* 005650a0: imul ecx, ecx, 0xd */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xdu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005650a3: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005650a6: lea eax, [ecx + edx - 1] */ r_eax = (u32)(r_ecx+r_edx+0xffffffffu);
    /* 005650aa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005650ab: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005650ae: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005650b0: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005650b3: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005650b9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5650bbu); call_ind(t); }
    /* 005650bb: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005650be: mov dx, word ptr [ecx + 0x190] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+0x190u))) & 0xffffu);
    /* 005650c5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005650c6: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x5650cbu); f_00641280();
    /* 005650cb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005650ce: cmp eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005650d1: jne 0x5650e5 */ if (!fZ) goto L_005650e5;
L_005650d3:; BB(0x005650d3);
    /* 005650d3: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 005650d5: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005650d8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005650da: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005650dd: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005650e3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5650e5u); call_ind(t); }
L_005650e5:; BB(0x005650e5);
    /* 005650e5: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005650e8: mov dx, word ptr [ecx + 0x190] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+0x190u))) & 0xffffu);
    /* 005650ef: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005650f0: mov ecx, dword ptr [0x793444] */ r_ecx = R32((u32)(0x793444u));
    /* 005650f6: call 0x5593d0 */ r_esp -= 4; W32(r_esp, 0x5650fbu); f_005593d0();
    /* 005650fb: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005650fe: jne 0x5651c5 */ if (!fZ) goto L_005651c5;
L_00565104:; BB(0x00565104);
    /* 00565104: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00565107: mov cx, word ptr [eax + 0x190] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+0x190u))) & 0xffffu);
    /* 0056510e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056510f: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x565114u); f_00641280();
    /* 00565114: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00565117: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056511a: jne 0x56519b */ if (!fZ) goto L_0056519b;
L_0056511c:; BB(0x0056511c);
    /* 0056511c: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0056511f: mov ax, word ptr [edx + 0x190] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+0x190u))) & 0xffffu);
    /* 00565126: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00565127: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x56512cu); f_00641290();
    /* 0056512c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056512f: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00565132: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00565135: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00565138: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0056513b: cmp dword ptr [ebp - 0x24], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0056513f: ja 0x565199 */ if ((!fC&&!fZ)) goto L_00565199;
L_00565141:; BB(0x00565141);
    /* 00565141: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00565144: jmp dword ptr [edx*4 + 0x5651d4] */ { u32 t = R32((u32)(r_edx*4+0x5651d4u)); switch (t) { case 0x56515fu: goto L_0056515f; case 0x565173u: goto L_00565173; case 0x565187u: goto L_00565187; case 0x56514bu: goto L_0056514b; default: UNSUP(0x00565144, "jump table entry is not a known target"); } }
L_0056514b:; BB(0x0056514b);
    /* 0056514b: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 0056514d: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00565150: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00565152: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00565155: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0056515b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56515du); call_ind(t); }
    /* 0056515d: jmp 0x565199 */ goto L_00565199;
L_0056515f:; BB(0x0056515f);
    /* 0056515f: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 00565161: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00565164: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00565166: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00565169: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0056516f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x565171u); call_ind(t); }
    /* 00565171: jmp 0x565199 */ goto L_00565199;
L_00565173:; BB(0x00565173);
    /* 00565173: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 00565175: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00565178: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0056517a: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0056517d: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00565183: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x565185u); call_ind(t); }
    /* 00565185: jmp 0x565199 */ goto L_00565199;
L_00565187:; BB(0x00565187);
    /* 00565187: push 0x39 */ { u32 v = 0x39u; r_esp -= 4; W32(r_esp, v); }
    /* 00565189: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0056518c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0056518e: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00565191: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00565197: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x565199u); call_ind(t); }
L_00565199:; BB(0x00565199);
    /* 00565199: jmp 0x5651c5 */ goto L_005651c5;
L_0056519b:; BB(0x0056519b);
    /* 0056519b: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0056519e: mov dx, word ptr [ecx + 0x190] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+0x190u))) & 0xffffu);
    /* 005651a5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005651a6: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x5651abu); f_00641280();
    /* 005651ab: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005651ae: cmp eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005651b1: jne 0x5651c5 */ if (!fZ) goto L_005651c5;
L_005651b3:; BB(0x005651b3);
    /* 005651b3: push 0x3a */ { u32 v = 0x3au; r_esp -= 4; W32(r_esp, v); }
    /* 005651b5: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005651b8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005651ba: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005651bd: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005651c3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5651c5u); call_ind(t); }
L_005651c5:; BB(0x005651c5);
    /* 005651c5: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005651c8: call 0x5eb570 */ r_esp -= 4; W32(r_esp, 0x5651cdu); f_005eb570();
    /* 005651cd: mov esp, ebp */ r_esp = r_ebp;
    /* 005651cf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005651d0: ret  */ FN_RET(0x00565020); r_esp += 4; return;
}

void f_005651f0(void) /* VPMultiCardDisplay::vfunc28 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005651f0);
    /* 005651f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005651f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005651f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005651f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005651f7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005651fa: call 0x5eb5a0 */ r_esp -= 4; W32(r_esp, 0x5651ffu); f_005eb5a0();
    /* 005651ff: mov esp, ebp */ r_esp = r_ebp;
    /* 00565201: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00565202: ret  */ FN_RET(0x005651f0); r_esp += 4; return;
}

