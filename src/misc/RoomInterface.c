#include "protos.h"

void f_00407160(void) /* RoomInterface::vfunc18 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00407160);
    /* 00407160: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00407161: mov ebp, esp */ r_ebp = r_esp;
    /* 00407163: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00407164: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00407167: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040716a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040716c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040716f: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00407172: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x407174u); call_ind(t); }
    /* 00407174: mov esp, ebp */ r_esp = r_ebp;
    /* 00407176: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00407177: ret  */ FN_RET(0x00407160); r_esp += 4; return;
}

void f_004071d0(void) /* RoomInterface::vfunc53 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004071d0);
    /* 004071d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004071d1: mov ebp, esp */ r_ebp = r_esp;
    /* 004071d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004071d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004071d7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004071da: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004071dc: cmp eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004071df: setge cl */ r_ecx = (r_ecx & 0xffffff00u) | ((((fS==fO)) ? 1 : 0) & 0xffu);
    /* 004071e2: mov al, cl */ r_eax = (r_eax & 0xffffff00u) | (((u8)r_ecx) & 0xffu);
    /* 004071e4: mov esp, ebp */ r_esp = r_ebp;
    /* 004071e6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004071e7: ret 8 */ FN_RET(0x004071d0); r_esp += 12; return;
}

void f_004071f0(void) /* RoomInterface::vfunc54 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004071f0);
    /* 004071f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004071f1: mov ebp, esp */ r_ebp = r_esp;
    /* 004071f3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004071f6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004071f9: cmp dword ptr [ebp + 8], 0x3e8 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x3e8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00407200: jge 0x40721d */ if ((fS==fO)) goto L_0040721d;
L_00407202:; BB(0x00407202);
    /* 00407202: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00407205: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00407206: push 0x6b2828 */ { u32 v = 0x6b2828u; r_esp -= 4; W32(r_esp, v); }
    /* 0040720b: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0040720e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040720f: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x407215u); call_ind(t); }
    /* 00407215: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00407218: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0040721b: jmp 0x40724a */ goto L_0040724a;
L_0040721d:; BB(0x0040721d);
    /* 0040721d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00407220: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00407221: mov ecx, 0x3e8 */ r_ecx = 0x3e8u;
    /* 00407226: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00407226, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00407226, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00407228: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00407229: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040722c: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0040722d: mov ecx, 0x3e8 */ r_ecx = 0x3e8u;
    /* 00407232: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00407232, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00407232, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00407234: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00407235: push 0x6b34cc */ { u32 v = 0x6b34ccu; r_esp -= 4; W32(r_esp, v); }
    /* 0040723a: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0040723d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040723e: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x407244u); call_ind(t); }
    /* 00407244: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00407247: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0040724a:; BB(0x0040724a);
    /* 0040724a: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0040724c: mov esp, ebp */ r_esp = r_ebp;
    /* 0040724e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040724f: ret 8 */ FN_RET(0x004071f0); r_esp += 12; return;
}

void f_00407260(void) /* RoomInterface::vfunc57 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00407260);
    /* 00407260: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00407261: mov ebp, esp */ r_ebp = r_esp;
    /* 00407263: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00407264: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00407267: mov eax, 0x246 */ r_eax = 0x246u;
    /* 0040726c: mov esp, ebp */ r_esp = r_ebp;
    /* 0040726e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040726f: ret  */ FN_RET(0x00407260); r_esp += 4; return;
}

void f_00407270(void) /* RoomInterface::vfunc58 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00407270);
    /* 00407270: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00407271: mov ebp, esp */ r_ebp = r_esp;
    /* 00407273: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00407274: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00407277: mov eax, 0x8f */ r_eax = 0x8fu;
    /* 0040727c: mov esp, ebp */ r_esp = r_ebp;
    /* 0040727e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040727f: ret  */ FN_RET(0x00407270); r_esp += 4; return;
}

void f_00407280(void) /* RoomInterface::vfunc61 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00407280);
    /* 00407280: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00407281: mov ebp, esp */ r_ebp = r_esp;
    /* 00407283: sub esp, 0x1e0 */ {  u32 a = r_esp; u32 b = 0x1e0u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00407289: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0040728e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00407290: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00407293: mov dword ptr [ebp - 0x1dc], ecx */ W32((u32)(r_ebp+0xfffffe24u), r_ecx);
    /* 00407299: lea eax, [ebp - 0x1d8] */ r_eax = (u32)(r_ebp+0xfffffe28u);
    /* 0040729f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004072a0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004072a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004072a4: mov edx, dword ptr [ebp - 0x1dc] */ r_edx = R32((u32)(r_ebp+0xfffffe24u));
    /* 004072aa: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004072ac: mov ecx, dword ptr [ebp - 0x1dc] */ r_ecx = R32((u32)(r_ebp+0xfffffe24u));
    /* 004072b2: mov edx, dword ptr [eax + 0x100] */ r_edx = R32((u32)(r_eax+0x100u));
    /* 004072b8: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4072bau); call_ind(t); }
    /* 004072ba: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004072bd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004072bf: jne 0x4072cd */ if (!fZ) goto L_004072cd;
L_004072c1:; BB(0x004072c1);
    /* 004072c1: mov dword ptr [ebp - 0x1e0], 0 */ W32((u32)(r_ebp+0xfffffe20u), 0x0u);
    /* 004072cb: jmp 0x4072e2 */ goto L_004072e2;
L_004072cd:; BB(0x004072cd);
    /* 004072cd: lea ecx, [ebp - 0x1d4] */ r_ecx = (u32)(r_ebp+0xfffffe2cu);
    /* 004072d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004072d4: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4072d9u); f_00630f40();
    /* 004072d9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004072dc: mov dword ptr [ebp - 0x1e0], eax */ W32((u32)(r_ebp+0xfffffe20u), r_eax);
L_004072e2:; BB(0x004072e2);
    /* 004072e2: mov eax, dword ptr [ebp - 0x1e0] */ r_eax = R32((u32)(r_ebp+0xfffffe20u));
    /* 004072e8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004072eb: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004072ed: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x4072f2u); f_00686d72();
    /* 004072f2: mov esp, ebp */ r_esp = r_ebp;
    /* 004072f4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004072f5: ret 4 */ FN_RET(0x00407280); r_esp += 8; return;
}

void f_00407300(void) /* RoomInterface::vfunc62 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00407300);
    /* 00407300: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00407301: mov ebp, esp */ r_ebp = r_esp;
    /* 00407303: sub esp, 0x1e0 */ {  u32 a = r_esp; u32 b = 0x1e0u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00407309: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0040730e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00407310: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00407313: mov dword ptr [ebp - 0x1dc], ecx */ W32((u32)(r_ebp+0xfffffe24u), r_ecx);
    /* 00407319: lea eax, [ebp - 0x1d8] */ r_eax = (u32)(r_ebp+0xfffffe28u);
    /* 0040731f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00407320: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00407323: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00407324: mov edx, dword ptr [ebp - 0x1dc] */ r_edx = R32((u32)(r_ebp+0xfffffe24u));
    /* 0040732a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0040732c: mov ecx, dword ptr [ebp - 0x1dc] */ r_ecx = R32((u32)(r_ebp+0xfffffe24u));
    /* 00407332: mov edx, dword ptr [eax + 0x100] */ r_edx = R32((u32)(r_eax+0x100u));
    /* 00407338: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x40733au); call_ind(t); }
    /* 0040733a: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0040733d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040733f: jne 0x40734d */ if (!fZ) goto L_0040734d;
L_00407341:; BB(0x00407341);
    /* 00407341: mov dword ptr [ebp - 0x1e0], 0 */ W32((u32)(r_ebp+0xfffffe20u), 0x0u);
    /* 0040734b: jmp 0x407362 */ goto L_00407362;
L_0040734d:; BB(0x0040734d);
    /* 0040734d: lea ecx, [ebp - 0x1a2] */ r_ecx = (u32)(r_ebp+0xfffffe5eu);
    /* 00407353: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00407354: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x407359u); f_00630f40();
    /* 00407359: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040735c: mov dword ptr [ebp - 0x1e0], eax */ W32((u32)(r_ebp+0xfffffe20u), r_eax);
L_00407362:; BB(0x00407362);
    /* 00407362: mov eax, dword ptr [ebp - 0x1e0] */ r_eax = R32((u32)(r_ebp+0xfffffe20u));
    /* 00407368: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040736b: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0040736d: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x407372u); f_00686d72();
    /* 00407372: mov esp, ebp */ r_esp = r_ebp;
    /* 00407374: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00407375: ret 4 */ FN_RET(0x00407300); r_esp += 8; return;
}

void f_0045b150(void) /* RoomInterface::vfunc56 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045b150);
    /* 0045b150: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045b151: mov ebp, esp */ r_ebp = r_esp;
    /* 0045b153: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045b154: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045b157: mov eax, 0x1f4 */ r_eax = 0x1f4u;
    /* 0045b15c: mov esp, ebp */ r_esp = r_ebp;
    /* 0045b15e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045b15f: ret  */ FN_RET(0x0045b150); r_esp += 4; return;
}

