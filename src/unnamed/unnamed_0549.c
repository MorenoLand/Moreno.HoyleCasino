#include "protos.h"

void f_00549080(void) /* sub_549080 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00549080);
    /* 00549080: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00549081: mov ebp, esp */ r_ebp = r_esp;
    /* 00549083: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00549086: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00549089: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0054908c: imul eax, eax, 0xc */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xcu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0054908f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00549092: lea edx, [ecx + eax + 0x28] */ r_edx = (u32)(r_ecx+r_eax+0x28u);
    /* 00549096: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00549099: mov cx, word ptr [edx + eax*2] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_edx+r_eax*2))) & 0xffffu);
    /* 0054909d: mov word ptr [ebp - 4], cx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_ecx);
    /* 005490a1: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005490a4: imul edx, edx, 0xc */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xcu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005490a7: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005490aa: lea ecx, [eax + edx + 0x28] */ r_ecx = (u32)(r_eax+r_edx+0x28u);
    /* 005490ae: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005490b1: mov word ptr [ecx + edx*2], 0 */ W16((u32)(r_ecx+r_edx*2), 0x0u);
    /* 005490b7: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005490ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005490bb: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005490be: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005490bf: mov ecx, dword ptr [0x793408] */ r_ecx = R32((u32)(0x793408u));
    /* 005490c5: call 0x544240 */ r_esp -= 4; W32(r_esp, 0x5490cau); f_00544240();
    /* 005490ca: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 005490ce: mov esp, ebp */ r_esp = r_ebp;
    /* 005490d0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005490d1: ret 8 */ FN_RET(0x00549080); r_esp += 12; return;
}

void f_005490e0(void) /* sub_5490E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005490e0);
    /* 005490e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005490e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005490e3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005490e6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005490e9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005490f0: mov byte ptr [ebp - 5], 0 */ W8((u32)(r_ebp+0xfffffffbu), 0x0u);
    /* 005490f4: mov byte ptr [ebp - 6], 0 */ W8((u32)(r_ebp+0xfffffffau), 0x0u);
    /* 005490f8: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005490fb: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 005490ff: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00549101: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00549103: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00549106: call 0x5492c0 */ r_esp -= 4; W32(r_esp, 0x54910bu); f_005492c0();
    /* 0054910b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054910d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054910f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00549112: call 0x5492c0 */ r_esp -= 4; W32(r_esp, 0x549117u); f_005492c0();
    /* 00549117: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00549119: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054911b: mov ecx, dword ptr [0x793404] */ r_ecx = R32((u32)(0x793404u));
    /* 00549121: call 0x549e80 */ r_esp -= 4; W32(r_esp, 0x549126u); f_00549e80();
    /* 00549126: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00549129: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0054912b: cmp dword ptr [ebp - 4], 0x15 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054912f: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00549132: mov byte ptr [ebp - 6], cl */ W8((u32)(r_ebp+0xfffffffau), (u8)r_ecx);
L_00549135:; BB(0x00549135);
    /* 00549135: cmp dword ptr [ebp - 4], 0x10 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00549139: jg 0x549161 */ if ((!fZ&&fS==fO)) goto L_00549161;
L_0054913b:; BB(0x0054913b);
    /* 0054913b: cmp dword ptr [ebp - 4], 0x15 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054913f: jge 0x549161 */ if ((fS==fO)) goto L_00549161;
L_00549141:; BB(0x00549141);
    /* 00549141: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00549143: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00549145: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00549148: call 0x5492c0 */ r_esp -= 4; W32(r_esp, 0x54914du); f_005492c0();
    /* 0054914d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054914f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00549151: mov ecx, dword ptr [0x793404] */ r_ecx = R32((u32)(0x793404u));
    /* 00549157: call 0x549e80 */ r_esp -= 4; W32(r_esp, 0x54915cu); f_00549e80();
    /* 0054915c: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0054915f: jmp 0x549135 */ goto L_00549135;
L_00549161:; BB(0x00549161);
    /* 00549161: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00549163: cmp dword ptr [ebp - 4], 0x15 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00549167: setg dl */ r_edx = (r_edx & 0xffffff00u) | ((((!fZ&&fS==fO)) ? 1 : 0) & 0xffu);
    /* 0054916a: mov byte ptr [ebp - 5], dl */ W8((u32)(r_ebp+0xfffffffbu), (u8)r_edx);
    /* 0054916d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054916f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00549171: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00549174: call 0x5492c0 */ r_esp -= 4; W32(r_esp, 0x549179u); f_005492c0();
    /* 00549179: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054917b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054917d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00549180: call 0x5492c0 */ r_esp -= 4; W32(r_esp, 0x549185u); f_005492c0();
    /* 00549185: mov ecx, dword ptr [0x793408] */ r_ecx = R32((u32)(0x793408u));
    /* 0054918b: call 0x5442b0 */ r_esp -= 4; W32(r_esp, 0x549190u); f_005442b0();
    /* 00549190: movzx eax, byte ptr [ebp - 5] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffffbu));
    /* 00549194: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00549196: jne 0x5491c0 */ if (!fZ) goto L_005491c0;
L_00549198:; BB(0x00549198);
    /* 00549198: movzx ecx, byte ptr [ebp - 6] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffffau));
    /* 0054919c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054919e: jne 0x5491c0 */ if (!fZ) goto L_005491c0;
L_005491a0:; BB(0x005491a0);
    /* 005491a0: mov ecx, dword ptr [0x79340c] */ r_ecx = R32((u32)(0x79340cu));
    /* 005491a6: call 0x542980 */ r_esp -= 4; W32(r_esp, 0x5491abu); f_00542980();
    /* 005491ab: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005491ae: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005491b0: jne 0x5491c0 */ if (!fZ) goto L_005491c0;
L_005491b2:; BB(0x005491b2);
    /* 005491b2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005491b4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005491b6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005491b9: call 0x5492c0 */ r_esp -= 4; W32(r_esp, 0x5491beu); f_005492c0();
    /* 005491be: jmp 0x5491a0 */ goto L_005491a0;
L_005491c0:; BB(0x005491c0);
    /* 005491c0: mov ecx, dword ptr [0x793408] */ r_ecx = R32((u32)(0x793408u));
    /* 005491c6: call 0x544780 */ r_esp -= 4; W32(r_esp, 0x5491cbu); f_00544780();
    /* 005491cb: mov ecx, dword ptr [0x793408] */ r_ecx = R32((u32)(0x793408u));
    /* 005491d1: call 0x5451d0 */ r_esp -= 4; W32(r_esp, 0x5491d6u); f_005451d0();
    /* 005491d6: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005491d9: mov byte ptr [eax + 0x1c], 0 */ W8((u32)(r_eax+0x1cu), 0x0u);
    /* 005491dd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005491e0: call 0x548960 */ r_esp -= 4; W32(r_esp, 0x5491e5u); f_00548960();
    /* 005491e5: mov esp, ebp */ r_esp = r_ebp;
    /* 005491e7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005491e8: ret  */ FN_RET(0x005490e0); r_esp += 4; return;
}

void f_005491f0(void) /* sub_5491F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005491f0);
    /* 005491f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005491f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005491f3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005491f5: push 0x6a52e4 */ { u32 v = 0x6a52e4u; r_esp -= 4; W32(r_esp, v); }
    /* 005491fa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00549200: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00549201: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00549204: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00549209: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0054920b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054920c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0054920f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00549215: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00549218: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0054921b: call 0x548b20 */ r_esp -= 4; W32(r_esp, 0x549220u); f_00548b20();
    /* 00549220: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00549223: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00549226: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00549229: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0054922c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0054922f: mov dword ptr [edx + 0x54], eax */ W32((u32)(r_edx+0x54u), r_eax);
    /* 00549232: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00549235: mov byte ptr [ecx + 0x4d], 1 */ W8((u32)(r_ecx+0x4du), 0x1u);
    /* 00549239: mov ecx, dword ptr [0x793408] */ r_ecx = R32((u32)(0x793408u));
    /* 0054923f: call 0x545010 */ r_esp -= 4; W32(r_esp, 0x549244u); f_00545010();
    /* 00549244: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00549247: cmp dword ptr [edx + 0x14], 0x1e */ {  u32 a = R32((u32)(r_edx+0x14u)); u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054924b: jl 0x549255 */ if ((fS!=fO)) goto L_00549255;
L_0054924d:; BB(0x0054924d);
    /* 0054924d: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00549250: call 0x548960 */ r_esp -= 4; W32(r_esp, 0x549255u); f_00548960();
L_00549255:; BB(0x00549255);
    /* 00549255: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00549258: call 0x548ab0 */ r_esp -= 4; W32(r_esp, 0x54925du); f_00548ab0();
    /* 0054925d: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 0054925f: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x549264u); f_00686d82();
    /* 00549264: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00549267: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0054926a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00549271: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00549275: je 0x549284 */ if (fZ) goto L_00549284;
L_00549277:; BB(0x00549277);
    /* 00549277: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0054927a: call 0x546a40 */ r_esp -= 4; W32(r_esp, 0x54927fu); f_00546a40();
    /* 0054927f: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00549282: jmp 0x54928b */ goto L_0054928b;
L_00549284:; BB(0x00549284);
    /* 00549284: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_0054928b:; BB(0x0054928b);
    /* 0054928b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0054928e: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00549291: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00549298: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054929b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054929c: mov edx, dword ptr [0x793400] */ r_edx = R32((u32)(0x793400u));
    /* 005492a2: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 005492a5: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x5492aau); f_005fc420();
    /* 005492aa: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005492ad: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005492b4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005492b5: mov esp, ebp */ r_esp = r_ebp;
    /* 005492b7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005492b8: ret  */ FN_RET(0x005491f0); r_esp += 4; return;
}

void f_005492c0(void) /* sub_5492C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005492c0);
    /* 005492c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005492c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005492c3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005492c6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005492c9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005492cc: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005492cf: call 0x6436c0 */ r_esp -= 4; W32(r_esp, 0x5492d4u); f_006436c0();
    /* 005492d4: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 005492d8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005492da: mov cl, byte ptr [ebp + 0xc] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xcu))) & 0xffu);
    /* 005492dd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005492de: mov dx, word ptr [ebp - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 005492e2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005492e3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005492e6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005492e7: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005492ea: call 0x548fe0 */ r_esp -= 4; W32(r_esp, 0x5492efu); f_00548fe0();
    /* 005492ef: mov esp, ebp */ r_esp = r_ebp;
    /* 005492f1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005492f2: ret 8 */ FN_RET(0x005492c0); r_esp += 12; return;
}

void f_00549300(void) /* sub_549300 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00549300);
    /* 00549300: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00549301: mov ebp, esp */ r_ebp = r_esp;
    /* 00549303: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00549306: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00549309: mov ecx, dword ptr [0x793408] */ r_ecx = R32((u32)(0x793408u));
    /* 0054930f: call 0x5450a0 */ r_esp -= 4; W32(r_esp, 0x549314u); f_005450a0();
    /* 00549314: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00549317: mov cx, word ptr [eax + 0x2a] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+0x2au))) & 0xffffu);
    /* 0054931b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054931c: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x549321u); f_00641280();
    /* 00549321: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00549324: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00549326: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00549329: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0054932c: mov byte ptr [ebp - 1], dl */ W8((u32)(r_ebp+0xffffffffu), (u8)r_edx);
    /* 0054932f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00549331: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00549334: call 0x54a6c0 */ r_esp -= 4; W32(r_esp, 0x549339u); f_0054a6c0();
    /* 00549339: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0054933c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054933e: je 0x54935d */ if (fZ) goto L_0054935d;
L_00549340:; BB(0x00549340);
    /* 00549340: movzx ecx, byte ptr [ebp - 1] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 00549344: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00549346: jne 0x54935d */ if (!fZ) goto L_0054935d;
L_00549348:; BB(0x00549348);
    /* 00549348: mov ecx, dword ptr [0x793408] */ r_ecx = R32((u32)(0x793408u));
    /* 0054934e: call 0x5442b0 */ r_esp -= 4; W32(r_esp, 0x549353u); f_005442b0();
    /* 00549353: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00549356: call 0x5493a0 */ r_esp -= 4; W32(r_esp, 0x54935bu); f_005493a0();
    /* 0054935b: jmp 0x54938e */ goto L_0054938e;
L_0054935d:; BB(0x0054935d);
    /* 0054935d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054935f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00549362: call 0x54a6c0 */ r_esp -= 4; W32(r_esp, 0x549367u); f_0054a6c0();
    /* 00549367: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0054936a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054936c: je 0x54938e */ if (fZ) goto L_0054938e;
L_0054936e:; BB(0x0054936e);
    /* 0054936e: mov ecx, dword ptr [0x793408] */ r_ecx = R32((u32)(0x793408u));
    /* 00549374: call 0x5442b0 */ r_esp -= 4; W32(r_esp, 0x549379u); f_005442b0();
    /* 00549379: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0054937b: mov ecx, dword ptr [0x793408] */ r_ecx = R32((u32)(0x793408u));
    /* 00549381: call 0x545600 */ r_esp -= 4; W32(r_esp, 0x549386u); f_00545600();
    /* 00549386: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00549389: call 0x5493a0 */ r_esp -= 4; W32(r_esp, 0x54938eu); f_005493a0();
L_0054938e:; BB(0x0054938e);
    /* 0054938e: mov esp, ebp */ r_esp = r_ebp;
    /* 00549390: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00549391: ret  */ FN_RET(0x00549300); r_esp += 4; return;
}

void f_005493a0(void) /* sub_5493A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005493a0);
    /* 005493a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005493a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005493a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005493a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005493a7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005493aa: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 005493ad: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005493b0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005493b3: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
    /* 005493b6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005493b9: call 0x54a3c0 */ r_esp -= 4; W32(r_esp, 0x5493beu); f_0054a3c0();
    /* 005493be: mov esp, ebp */ r_esp = r_ebp;
    /* 005493c0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005493c1: ret  */ FN_RET(0x005493a0); r_esp += 4; return;
}

void f_00549470(void) /* sub_549470 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00549470);
    /* 00549470: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00549471: mov ebp, esp */ r_ebp = r_esp;
    /* 00549473: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00549476: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00549477: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0054947a: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054947d: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00549480: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00549483: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00549487: jne 0x5494cf */ if (!fZ) goto L_005494cf;
L_00549489:; BB(0x00549489);
    /* 00549489: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054948c: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0054948f: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00549492: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00549496: jne 0x5494cf */ if (!fZ) goto L_005494cf;
L_00549498:; BB(0x00549498);
    /* 00549498: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054949a: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x54949fu); f_005dcb00();
    /* 0054949f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005494a2: mov ecx, eax */ r_ecx = r_eax;
    /* 005494a4: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x5494a9u); f_005d5a50();
    /* 005494a9: mov esi, eax */ r_esi = r_eax;
    /* 005494ab: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005494ae: call 0x5d0aa0 */ r_esp -= 4; W32(r_esp, 0x5494b3u); f_005d0aa0();
    /* 005494b3: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005494b5: jge 0x5494cf */ if ((fS==fO)) goto L_005494cf;
L_005494b7:; BB(0x005494b7);
    /* 005494b7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005494b9: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5494beu); f_005dcb00();
    /* 005494be: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005494c1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005494c2: mov ecx, dword ptr [0x793400] */ r_ecx = R32((u32)(0x793400u));
    /* 005494c8: call 0x5dbb70 */ r_esp -= 4; W32(r_esp, 0x5494cdu); f_005dbb70();
    /* 005494cd: jmp 0x5494da */ goto L_005494da;
L_005494cf:; BB(0x005494cf);
    /* 005494cf: mov ecx, dword ptr [0x793400] */ r_ecx = R32((u32)(0x793400u));
    /* 005494d5: call 0x5dc2e0 */ r_esp -= 4; W32(r_esp, 0x5494dau); f_005dc2e0();
L_005494da:; BB(0x005494da);
    /* 005494da: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005494db: mov esp, ebp */ r_esp = r_ebp;
    /* 005494dd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005494de: ret  */ FN_RET(0x00549470); r_esp += 4; return;
}

void f_005494e0(void) /* sub_5494E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005494e0);
    /* 005494e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005494e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005494e3: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005494e6: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005494e9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005494ec: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005494ef: cmp dword ptr [ebp - 0x14], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005494f3: ja 0x54962a */ if ((!fC&&!fZ)) goto L_0054962a;
L_005494f9:; BB(0x005494f9);
    /* 005494f9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005494fc: jmp dword ptr [ecx*4 + 0x549630] */ { u32 t = R32((u32)(r_ecx*4+0x549630u)); switch (t) { case 0x549503u: goto L_00549503; case 0x549558u: goto L_00549558; case 0x5495a1u: goto L_005495a1; case 0x549613u: goto L_00549613; default: UNSUP(0x005494fc, "jump table entry is not a known target"); } }
L_00549503:; BB(0x00549503);
    /* 00549503: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00549506: call 0x5d0f00 */ r_esp -= 4; W32(r_esp, 0x54950bu); f_005d0f00();
    /* 0054950b: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0054950d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054950f: mov ecx, dword ptr [0x793408] */ r_ecx = R32((u32)(0x793408u));
    /* 00549515: call 0x545410 */ r_esp -= 4; W32(r_esp, 0x54951au); f_00545410();
    /* 0054951a: mov ecx, dword ptr [0x793408] */ r_ecx = R32((u32)(0x793408u));
    /* 00549520: call 0x544b90 */ r_esp -= 4; W32(r_esp, 0x549525u); f_00544b90();
    /* 00549525: mov ecx, dword ptr [0x793408] */ r_ecx = R32((u32)(0x793408u));
    /* 0054952b: call 0x545bb0 */ r_esp -= 4; W32(r_esp, 0x549530u); f_00545bb0();
    /* 00549530: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00549533: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00549536: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00549539: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054953c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0054953e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00549541: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00549544: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x549546u); call_ind(t); }
    /* 00549546: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00549549: jne 0x549553 */ if (!fZ) goto L_00549553;
L_0054954b:; BB(0x0054954b);
    /* 0054954b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054954e: call 0x5491f0 */ r_esp -= 4; W32(r_esp, 0x549553u); f_005491f0();
L_00549553:; BB(0x00549553);
    /* 00549553: jmp 0x54962a */ goto L_0054962a;
L_00549558:; BB(0x00549558);
    /* 00549558: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054955b: call 0x5d1210 */ r_esp -= 4; W32(r_esp, 0x549560u); f_005d1210();
    /* 00549560: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00549562: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00549564: mov ecx, dword ptr [0x793408] */ r_ecx = R32((u32)(0x793408u));
    /* 0054956a: call 0x545410 */ r_esp -= 4; W32(r_esp, 0x54956fu); f_00545410();
    /* 0054956f: mov ecx, dword ptr [0x793408] */ r_ecx = R32((u32)(0x793408u));
    /* 00549575: call 0x544b90 */ r_esp -= 4; W32(r_esp, 0x54957au); f_00544b90();
    /* 0054957a: mov ecx, dword ptr [0x793408] */ r_ecx = R32((u32)(0x793408u));
    /* 00549580: call 0x545bb0 */ r_esp -= 4; W32(r_esp, 0x549585u); f_00545bb0();
    /* 00549585: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00549588: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0054958b: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0054958e: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00549592: je 0x54959c */ if (fZ) goto L_0054959c;
L_00549594:; BB(0x00549594);
    /* 00549594: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00549597: call 0x5491f0 */ r_esp -= 4; W32(r_esp, 0x54959cu); f_005491f0();
L_0054959c:; BB(0x0054959c);
    /* 0054959c: jmp 0x54962a */ goto L_0054962a;
L_005495a1:; BB(0x005495a1);
    /* 005495a1: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005495a4: call 0x5d13e0 */ r_esp -= 4; W32(r_esp, 0x5495a9u); f_005d13e0();
    /* 005495a9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005495ab: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005495ac: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 005495b2: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005495b5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005495b6: fld1  */ FPUSH(1.0);
    /* 005495b8: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005495bb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005495bd: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005495bf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005495c1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005495c3: push 0x18a88 */ { u32 v = 0x18a88u; r_esp -= 4; W32(r_esp, v); }
    /* 005495c8: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 005495cd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005495cf: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005495d5: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 005495db: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5495ddu); call_ind(t); }
    /* 005495dd: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005495e0: mov dl, byte ptr [ecx + 0x4d] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x4du))) & 0xffu);
    /* 005495e3: mov byte ptr [ebp - 9], dl */ W8((u32)(r_ebp+0xfffffff7u), (u8)r_edx);
    /* 005495e6: movzx eax, byte ptr [ebp - 9] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffff7u));
    /* 005495ea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005495ec: je 0x5495fb */ if (fZ) goto L_005495fb;
L_005495ee:; BB(0x005495ee);
    /* 005495ee: mov ecx, dword ptr [0x793408] */ r_ecx = R32((u32)(0x793408u));
    /* 005495f4: call 0x5452a0 */ r_esp -= 4; W32(r_esp, 0x5495f9u); f_005452a0();
    /* 005495f9: jmp 0x549606 */ goto L_00549606;
L_005495fb:; BB(0x005495fb);
    /* 005495fb: mov ecx, dword ptr [0x793408] */ r_ecx = R32((u32)(0x793408u));
    /* 00549601: call 0x544d20 */ r_esp -= 4; W32(r_esp, 0x549606u); f_00544d20();
L_00549606:; BB(0x00549606);
    /* 00549606: mov ecx, dword ptr [0x793408] */ r_ecx = R32((u32)(0x793408u));
    /* 0054960c: call 0x545aa0 */ r_esp -= 4; W32(r_esp, 0x549611u); f_00545aa0();
    /* 00549611: jmp 0x54962a */ goto L_0054962a;
L_00549613:; BB(0x00549613);
    /* 00549613: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00549615: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00549617: mov ecx, dword ptr [0x793408] */ r_ecx = R32((u32)(0x793408u));
    /* 0054961d: call 0x545410 */ r_esp -= 4; W32(r_esp, 0x549622u); f_00545410();
    /* 00549622: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00549625: call 0x549470 */ r_esp -= 4; W32(r_esp, 0x54962au); f_00549470();
L_0054962a:; BB(0x0054962a);
    /* 0054962a: mov esp, ebp */ r_esp = r_ebp;
    /* 0054962c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054962d: ret 4 */ FN_RET(0x005494e0); r_esp += 8; return;
}

void f_00549640(void) /* sub_549640 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00549640);
    /* 00549640: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00549641: mov ebp, esp */ r_ebp = r_esp;
    /* 00549643: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00549644: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00549647: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054964a: call 0x548b90 */ r_esp -= 4; W32(r_esp, 0x54964fu); f_00548b90();
    /* 0054964f: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00549652: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00549654: jne 0x54965a */ if (!fZ) goto L_0054965a;
L_00549656:; BB(0x00549656);
    /* 00549656: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00549658: jmp 0x54968e */ goto L_0054968e;
L_0054965a:; BB(0x0054965a);
    /* 0054965a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054965d: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00549660: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00549661: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00549664: call 0x54a740 */ r_esp -= 4; W32(r_esp, 0x549669u); f_0054a740();
    /* 00549669: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0054966c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054966e: je 0x549674 */ if (fZ) goto L_00549674;
L_00549670:; BB(0x00549670);
    /* 00549670: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00549672: jmp 0x54968e */ goto L_0054968e;
L_00549674:; BB(0x00549674);
    /* 00549674: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00549677: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 0054967a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054967b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054967e: call 0x548f80 */ r_esp -= 4; W32(r_esp, 0x549683u); f_00548f80();
    /* 00549683: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00549686: jge 0x54968c */ if ((fS==fO)) goto L_0054968c;
L_00549688:; BB(0x00549688);
    /* 00549688: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0054968a: jmp 0x54968e */ goto L_0054968e;
L_0054968c:; BB(0x0054968c);
    /* 0054968c: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0054968e:; BB(0x0054968e);
    /* 0054968e: mov esp, ebp */ r_esp = r_ebp;
    /* 00549690: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00549691: ret  */ FN_RET(0x00549640); r_esp += 4; return;
}

void f_005496a0(void) /* sub_5496A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005496a0);
    /* 005496a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005496a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005496a3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005496a6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005496a9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005496ac: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005496af: call 0x6436c0 */ r_esp -= 4; W32(r_esp, 0x5496b4u); f_006436c0();
    /* 005496b4: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 005496b8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005496ba: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005496bc: mov cx, word ptr [ebp - 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 005496c0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005496c1: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005496c4: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 005496c7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005496c8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005496cb: call 0x548fe0 */ r_esp -= 4; W32(r_esp, 0x5496d0u); f_00548fe0();
    /* 005496d0: mov ecx, dword ptr [0x793408] */ r_ecx = R32((u32)(0x793408u));
    /* 005496d6: call 0x5450a0 */ r_esp -= 4; W32(r_esp, 0x5496dbu); f_005450a0();
    /* 005496db: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005496de: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 005496e1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005496e2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005496e5: call 0x54a740 */ r_esp -= 4; W32(r_esp, 0x5496eau); f_0054a740();
    /* 005496ea: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005496ed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005496ef: je 0x5496fb */ if (fZ) goto L_005496fb;
L_005496f1:; BB(0x005496f1);
    /* 005496f1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005496f4: call 0x5493d0 */ r_esp -= 4; W32(r_esp, 0x5496f9u); f_005493d0();
    /* 005496f9: jmp 0x549719 */ goto L_00549719;
L_005496fb:; BB(0x005496fb);
    /* 005496fb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005496fe: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00549701: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00549702: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00549705: call 0x54a770 */ r_esp -= 4; W32(r_esp, 0x54970au); f_0054a770();
    /* 0054970a: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0054970d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054970f: je 0x549719 */ if (fZ) goto L_00549719;
L_00549711:; BB(0x00549711);
    /* 00549711: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00549714: call 0x549750 */ r_esp -= 4; W32(r_esp, 0x549719u); f_00549750();
L_00549719:; BB(0x00549719);
    /* 00549719: mov esp, ebp */ r_esp = r_ebp;
    /* 0054971b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054971c: ret  */ FN_RET(0x005496a0); r_esp += 4; return;
}

void f_00549720(void) /* sub_549720 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00549720);
    /* 00549720: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00549721: mov ebp, esp */ r_ebp = r_esp;
    /* 00549723: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00549724: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00549727: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054972a: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0054972d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054972e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00549731: call 0x54a740 */ r_esp -= 4; W32(r_esp, 0x549736u); f_0054a740();
    /* 00549736: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00549739: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054973b: je 0x549741 */ if (fZ) goto L_00549741;
L_0054973d:; BB(0x0054973d);
    /* 0054973d: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0054973f: jmp 0x549743 */ goto L_00549743;
L_00549741:; BB(0x00549741);
    /* 00549741: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_00549743:; BB(0x00549743);
    /* 00549743: mov esp, ebp */ r_esp = r_ebp;
    /* 00549745: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00549746: ret  */ FN_RET(0x00549720); r_esp += 4; return;
}

void f_00549750(void) /* sub_549750 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00549750);
    /* 00549750: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00549751: mov ebp, esp */ r_ebp = r_esp;
    /* 00549753: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00549754: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00549757: mov ecx, dword ptr [0x793408] */ r_ecx = R32((u32)(0x793408u));
    /* 0054975d: call 0x545250 */ r_esp -= 4; W32(r_esp, 0x549762u); f_00545250();
    /* 00549762: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00549765: call 0x548c10 */ r_esp -= 4; W32(r_esp, 0x54976au); f_00548c10();
    /* 0054976a: mov esp, ebp */ r_esp = r_ebp;
    /* 0054976c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054976d: ret  */ FN_RET(0x00549750); r_esp += 4; return;
}

void f_00549770(void) /* sub_549770 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00549770);
    /* 00549770: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00549771: mov ebp, esp */ r_ebp = r_esp;
    /* 00549773: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00549774: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00549777: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054977a: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0054977d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054977e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00549781: call 0x548f80 */ r_esp -= 4; W32(r_esp, 0x549786u); f_00548f80();
    /* 00549786: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00549789: je 0x54978f */ if (fZ) goto L_0054978f;
L_0054978b:; BB(0x0054978b);
    /* 0054978b: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0054978d: jmp 0x549791 */ goto L_00549791;
L_0054978f:; BB(0x0054978f);
    /* 0054978f: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_00549791:; BB(0x00549791);
    /* 00549791: mov esp, ebp */ r_esp = r_ebp;
    /* 00549793: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00549794: ret  */ FN_RET(0x00549770); r_esp += 4; return;
}

void f_005497a0(void) /* sub_5497A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005497a0);
    /* 005497a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005497a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005497a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005497a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005497a7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005497aa: call 0x549770 */ r_esp -= 4; W32(r_esp, 0x5497afu); f_00549770();
    /* 005497af: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005497b2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005497b4: jne 0x5497ba */ if (!fZ) goto L_005497ba;
L_005497b6:; BB(0x005497b6);
    /* 005497b6: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005497b8: jmp 0x5497cf */ goto L_005497cf;
L_005497ba:; BB(0x005497ba);
    /* 005497ba: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005497bd: call 0x549910 */ r_esp -= 4; W32(r_esp, 0x5497c2u); f_00549910();
    /* 005497c2: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005497c5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005497c7: jne 0x5497cd */ if (!fZ) goto L_005497cd;
L_005497c9:; BB(0x005497c9);
    /* 005497c9: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005497cb: jmp 0x5497cf */ goto L_005497cf;
L_005497cd:; BB(0x005497cd);
    /* 005497cd: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_005497cf:; BB(0x005497cf);
    /* 005497cf: mov esp, ebp */ r_esp = r_ebp;
    /* 005497d1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005497d2: ret  */ FN_RET(0x005497a0); r_esp += 4; return;
}

void f_00549910(void) /* sub_549910 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00549910);
    /* 00549910: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00549911: mov ebp, esp */ r_ebp = r_esp;
    /* 00549913: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00549916: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 00549919: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0054991c: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0054991f: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 00549922: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00549925: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00549926: lea eax, [ebp - 0x20] */ r_eax = (u32)(r_ebp+0xffffffe0u);
    /* 00549929: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054992a: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0054992d: call 0x5d0c30 */ r_esp -= 4; W32(r_esp, 0x549932u); f_005d0c30();
    /* 00549932: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00549934: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00549937: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0054993a: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0054993d: lea eax, [ebp - 0x28] */ r_eax = (u32)(r_ebp+0xffffffd8u);
    /* 00549940: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00549941: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00549944: call 0x5d14b0 */ r_esp -= 4; W32(r_esp, 0x549949u); f_005d14b0();
    /* 00549949: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0054994b: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0054994e: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00549951: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 00549954: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 00549957: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0054995a: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 0054995d: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00549960: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00549961: lea eax, [ebp - 0x30] */ r_eax = (u32)(r_ebp+0xffffffd0u);
    /* 00549964: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00549965: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00549968: call 0x5d0c30 */ r_esp -= 4; W32(r_esp, 0x54996du); f_005d0c30();
    /* 0054996d: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0054996f: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00549972: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00549975: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00549978: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054997b: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054997e: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00549981: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00549984: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00549987: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0054998a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0054998d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054998e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00549991: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00549992: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 00549995: call 0x64c7a0 */ r_esp -= 4; W32(r_esp, 0x54999au); f_0064c7a0();
    /* 0054999a: mov esp, ebp */ r_esp = r_ebp;
    /* 0054999c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054999d: ret  */ FN_RET(0x00549910); r_esp += 4; return;
}

void f_005499a0(void) /* sub_5499A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005499a0);
    /* 005499a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005499a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005499a3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005499a6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005499a9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005499ac: call 0x5497e0 */ r_esp -= 4; W32(r_esp, 0x5499b1u); f_005497e0();
    /* 005499b1: mov ecx, dword ptr [0x793408] */ r_ecx = R32((u32)(0x793408u));
    /* 005499b7: call 0x545340 */ r_esp -= 4; W32(r_esp, 0x5499bcu); f_00545340();
    /* 005499bc: mov ecx, dword ptr [0x793408] */ r_ecx = R32((u32)(0x793408u));
    /* 005499c2: call 0x5452a0 */ r_esp -= 4; W32(r_esp, 0x5499c7u); f_005452a0();
    /* 005499c7: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005499ca: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 005499cd: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005499d0: mov eax, dword ptr [edx + ecx*4 + 0x50] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x50u));
    /* 005499d4: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005499d6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005499d9: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 005499dc: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005499df: mov dword ptr [ecx + edx*4 + 0x50], eax */ W32((u32)(r_ecx+r_edx*4+0x50u), r_eax);
    /* 005499e3: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005499e6: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 005499e9: call 0x6436c0 */ r_esp -= 4; W32(r_esp, 0x5499eeu); f_006436c0();
    /* 005499ee: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 005499f2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005499f4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005499f6: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 005499fa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005499fb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005499fe: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00549a01: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00549a02: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00549a05: call 0x548fe0 */ r_esp -= 4; W32(r_esp, 0x549a0au); f_00548fe0();
    /* 00549a0a: mov ecx, dword ptr [0x793408] */ r_ecx = R32((u32)(0x793408u));
    /* 00549a10: call 0x5450a0 */ r_esp -= 4; W32(r_esp, 0x549a15u); f_005450a0();
    /* 00549a15: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00549a18: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00549a1b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00549a1c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00549a1f: call 0x54a740 */ r_esp -= 4; W32(r_esp, 0x549a24u); f_0054a740();
    /* 00549a24: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00549a27: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00549a29: je 0x549a35 */ if (fZ) goto L_00549a35;
L_00549a2b:; BB(0x00549a2b);
    /* 00549a2b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00549a2e: call 0x5493d0 */ r_esp -= 4; W32(r_esp, 0x549a33u); f_005493d0();
    /* 00549a33: jmp 0x549a3d */ goto L_00549a3d;
L_00549a35:; BB(0x00549a35);
    /* 00549a35: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00549a38: call 0x548c10 */ r_esp -= 4; W32(r_esp, 0x549a3du); f_00548c10();
L_00549a3d:; BB(0x00549a3d);
    /* 00549a3d: mov esp, ebp */ r_esp = r_ebp;
    /* 00549a3f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00549a40: ret  */ FN_RET(0x005499a0); r_esp += 4; return;
}

void f_00549a50(void) /* sub_549A50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00549a50);
    /* 00549a50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00549a51: mov ebp, esp */ r_ebp = r_esp;
    /* 00549a53: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00549a56: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00549a57: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00549a5a: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 00549a5f: mov ecx, dword ptr [eax + 0x4f14] */ r_ecx = R32((u32)(r_eax+0x4f14u));
    /* 00549a65: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00549a68: cmp dword ptr [ebp - 4], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00549a6c: jne 0x549a72 */ if (!fZ) goto L_00549a72;
L_00549a6e:; BB(0x00549a6e);
    /* 00549a6e: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00549a70: jmp 0x549ac0 */ goto L_00549ac0;
L_00549a72:; BB(0x00549a72);
    /* 00549a72: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00549a75: movzx eax, byte ptr [edx + 0x24] */ r_eax = (u32)R8((u32)(r_edx+0x24u));
    /* 00549a79: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00549a7b: je 0x549a81 */ if (fZ) goto L_00549a81;
L_00549a7d:; BB(0x00549a7d);
    /* 00549a7d: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00549a7f: jmp 0x549ac0 */ goto L_00549ac0;
L_00549a81:; BB(0x00549a81);
    /* 00549a81: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00549a83: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00549a86: call 0x548f80 */ r_esp -= 4; W32(r_esp, 0x549a8bu); f_00548f80();
    /* 00549a8b: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00549a8e: je 0x549a94 */ if (fZ) goto L_00549a94;
L_00549a90:; BB(0x00549a90);
    /* 00549a90: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00549a92: jmp 0x549ac0 */ goto L_00549ac0;
L_00549a94:; BB(0x00549a94);
    /* 00549a94: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00549a97: mov dx, word ptr [ecx + 0x34] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+0x34u))) & 0xffffu);
    /* 00549a9b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00549a9c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00549a9f: call 0x549e20 */ r_esp -= 4; W32(r_esp, 0x549aa4u); f_00549e20();
    /* 00549aa4: mov esi, eax */ r_esi = r_eax;
    /* 00549aa6: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00549aa9: mov cx, word ptr [eax + 0x36] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+0x36u))) & 0xffffu);
    /* 00549aad: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00549aae: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00549ab1: call 0x549e20 */ r_esp -= 4; W32(r_esp, 0x549ab6u); f_00549e20();
    /* 00549ab6: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00549ab8: je 0x549abe */ if (fZ) goto L_00549abe;
L_00549aba:; BB(0x00549aba);
    /* 00549aba: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00549abc: jmp 0x549ac0 */ goto L_00549ac0;
L_00549abe:; BB(0x00549abe);
    /* 00549abe: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_00549ac0:; BB(0x00549ac0);
    /* 00549ac0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00549ac1: mov esp, ebp */ r_esp = r_ebp;
    /* 00549ac3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00549ac4: ret  */ FN_RET(0x00549a50); r_esp += 4; return;
}

void f_00549ad0(void) /* sub_549AD0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00549ad0);
    /* 00549ad0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00549ad1: mov ebp, esp */ r_ebp = r_esp;
    /* 00549ad3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00549ad4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00549ad7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00549ada: call 0x549a50 */ r_esp -= 4; W32(r_esp, 0x549adfu); f_00549a50();
    /* 00549adf: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00549ae2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00549ae4: jne 0x549aea */ if (!fZ) goto L_00549aea;
L_00549ae6:; BB(0x00549ae6);
    /* 00549ae6: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00549ae8: jmp 0x549aff */ goto L_00549aff;
L_00549aea:; BB(0x00549aea);
    /* 00549aea: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00549aed: call 0x549910 */ r_esp -= 4; W32(r_esp, 0x549af2u); f_00549910();
    /* 00549af2: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00549af5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00549af7: jne 0x549afd */ if (!fZ) goto L_00549afd;
L_00549af9:; BB(0x00549af9);
    /* 00549af9: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00549afb: jmp 0x549aff */ goto L_00549aff;
L_00549afd:; BB(0x00549afd);
    /* 00549afd: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_00549aff:; BB(0x00549aff);
    /* 00549aff: mov esp, ebp */ r_esp = r_ebp;
    /* 00549b01: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00549b02: ret  */ FN_RET(0x00549ad0); r_esp += 4; return;
}

void f_00549c00(void) /* sub_549C00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00549c00);
    /* 00549c00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00549c01: mov ebp, esp */ r_ebp = r_esp;
    /* 00549c03: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00549c05: push 0x6a530a */ { u32 v = 0x6a530au; r_esp -= 4; W32(r_esp, v); }
    /* 00549c0a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00549c10: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00549c11: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00549c14: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00549c19: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00549c1b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00549c1c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00549c1f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00549c25: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00549c28: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00549c2b: call 0x549b10 */ r_esp -= 4; W32(r_esp, 0x549c30u); f_00549b10();
    /* 00549c30: mov ecx, dword ptr [0x793408] */ r_ecx = R32((u32)(0x793408u));
    /* 00549c36: call 0x545340 */ r_esp -= 4; W32(r_esp, 0x549c3bu); f_00545340();
    /* 00549c3b: mov ecx, dword ptr [0x793408] */ r_ecx = R32((u32)(0x793408u));
    /* 00549c41: call 0x5452a0 */ r_esp -= 4; W32(r_esp, 0x549c46u); f_005452a0();
    /* 00549c46: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00549c49: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00549c4c: mov edx, dword ptr [ecx + 0x54] */ r_edx = R32((u32)(r_ecx+0x54u));
    /* 00549c4f: mov dword ptr [eax + 0x58], edx */ W32((u32)(r_eax+0x58u), r_edx);
    /* 00549c52: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00549c55: mov byte ptr [eax + 0x24], 1 */ W8((u32)(r_eax+0x24u), 0x1u);
    /* 00549c59: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00549c5b: mov ecx, dword ptr [0x793408] */ r_ecx = R32((u32)(0x793408u));
    /* 00549c61: call 0x545b40 */ r_esp -= 4; W32(r_esp, 0x549c66u); f_00545b40();
    /* 00549c66: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 00549c68: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x549c6du); f_00686d82();
    /* 00549c6d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00549c70: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00549c73: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00549c7a: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00549c7e: je 0x549c8d */ if (fZ) goto L_00549c8d;
L_00549c80:; BB(0x00549c80);
    /* 00549c80: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00549c83: call 0x546eb0 */ r_esp -= 4; W32(r_esp, 0x549c88u); f_00546eb0();
    /* 00549c88: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00549c8b: jmp 0x549c94 */ goto L_00549c94;
L_00549c8d:; BB(0x00549c8d);
    /* 00549c8d: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_00549c94:; BB(0x00549c94);
    /* 00549c94: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00549c97: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00549c9a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00549ca1: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00549ca4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00549ca5: mov eax, dword ptr [0x793400] */ r_eax = R32((u32)(0x793400u));
    /* 00549caa: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00549cad: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x549cb2u); f_005fc420();
    /* 00549cb2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00549cb5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00549cbc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00549cbd: mov esp, ebp */ r_esp = r_ebp;
    /* 00549cbf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00549cc0: ret  */ FN_RET(0x00549c00); r_esp += 4; return;
}

void f_00549cd0(void) /* sub_549CD0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00549cd0);
    /* 00549cd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00549cd1: mov ebp, esp */ r_ebp = r_esp;
    /* 00549cd3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00549cd5: push 0x6a5330 */ { u32 v = 0x6a5330u; r_esp -= 4; W32(r_esp, v); }
    /* 00549cda: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00549ce0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00549ce1: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00549ce4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00549ce9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00549ceb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00549cec: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00549cef: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00549cf5: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00549cf8: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00549cfa: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x549cffu); f_00686d82();
    /* 00549cff: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00549d02: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00549d05: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00549d0c: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00549d10: je 0x549d1f */ if (fZ) goto L_00549d1f;
L_00549d12:; BB(0x00549d12);
    /* 00549d12: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00549d15: call 0x546bd0 */ r_esp -= 4; W32(r_esp, 0x549d1au); f_00546bd0();
    /* 00549d1a: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00549d1d: jmp 0x549d26 */ goto L_00549d26;
L_00549d1f:; BB(0x00549d1f);
    /* 00549d1f: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_00549d26:; BB(0x00549d26);
    /* 00549d26: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00549d29: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00549d2c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00549d33: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00549d36: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00549d37: mov edx, dword ptr [0x793400] */ r_edx = R32((u32)(0x793400u));
    /* 00549d3d: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 00549d40: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x549d45u); f_005fc420();
    /* 00549d45: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00549d48: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00549d4f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00549d50: mov esp, ebp */ r_esp = r_ebp;
    /* 00549d52: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00549d53: ret  */ FN_RET(0x00549cd0); r_esp += 4; return;
}

void f_00549d60(void) /* sub_549D60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00549d60);
    /* 00549d60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00549d61: mov ebp, esp */ r_ebp = r_esp;
    /* 00549d63: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00549d65: push 0x6a5356 */ { u32 v = 0x6a5356u; r_esp -= 4; W32(r_esp, v); }
    /* 00549d6a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00549d70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00549d71: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00549d74: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00549d79: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00549d7b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00549d7c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00549d7f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00549d85: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00549d88: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00549d8b: mov dword ptr [eax + 0x20], 0 */ W32((u32)(r_eax+0x20u), 0x0u);
    /* 00549d92: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00549d94: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x549d99u); f_00686d82();
    /* 00549d99: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00549d9c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00549d9f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00549da6: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00549daa: je 0x549db9 */ if (fZ) goto L_00549db9;
L_00549dac:; BB(0x00549dac);
    /* 00549dac: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00549daf: call 0x546da0 */ r_esp -= 4; W32(r_esp, 0x549db4u); f_00546da0();
    /* 00549db4: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00549db7: jmp 0x549dc0 */ goto L_00549dc0;
L_00549db9:; BB(0x00549db9);
    /* 00549db9: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_00549dc0:; BB(0x00549dc0);
    /* 00549dc0: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00549dc3: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00549dc6: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00549dcd: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00549dd0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00549dd1: mov eax, dword ptr [0x793400] */ r_eax = R32((u32)(0x793400u));
    /* 00549dd6: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00549dd9: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x549ddeu); f_005fc420();
    /* 00549dde: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00549de1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00549de8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00549de9: mov esp, ebp */ r_esp = r_ebp;
    /* 00549deb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00549dec: ret  */ FN_RET(0x00549d60); r_esp += 4; return;
}

void f_00549df0(void) /* sub_549DF0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00549df0);
    /* 00549df0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00549df1: mov ebp, esp */ r_ebp = r_esp;
    /* 00549df3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00549df4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00549df7: mov ax, word ptr [ebp + 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 00549dfb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00549dfc: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x549e01u); f_00641280();
    /* 00549e01: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00549e04: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00549e06: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00549e09: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00549e0c: mov al, cl */ r_eax = (r_eax & 0xffffff00u) | (((u8)r_ecx) & 0xffu);
    /* 00549e0e: mov esp, ebp */ r_esp = r_ebp;
    /* 00549e10: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00549e11: ret 4 */ FN_RET(0x00549df0); r_esp += 8; return;
}

void f_00549e20(void) /* sub_549E20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00549e20);
    /* 00549e20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00549e21: mov ebp, esp */ r_ebp = r_esp;
    /* 00549e23: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00549e26: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00549e29: mov ax, word ptr [ebp + 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 00549e2d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00549e2e: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x549e33u); f_00641280();
    /* 00549e33: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00549e36: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00549e39: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00549e3c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00549e3f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00549e42: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00549e45: cmp dword ptr [ebp - 0x10], 0xb */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00549e49: jl 0x549e69 */ if ((fS!=fO)) goto L_00549e69;
L_00549e4b:; BB(0x00549e4b);
    /* 00549e4b: cmp dword ptr [ebp - 0x10], 0xd */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00549e4f: jle 0x549e59 */ if ((fZ||fS!=fO)) goto L_00549e59;
L_00549e51:; BB(0x00549e51);
    /* 00549e51: cmp dword ptr [ebp - 0x10], 0xe */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00549e55: je 0x549e62 */ if (fZ) goto L_00549e62;
L_00549e57:; BB(0x00549e57);
    /* 00549e57: jmp 0x549e69 */ goto L_00549e69;
L_00549e59:; BB(0x00549e59);
    /* 00549e59: mov dword ptr [ebp - 4], 0xa */ W32((u32)(r_ebp+0xfffffffcu), 0xau);
    /* 00549e60: jmp 0x549e69 */ goto L_00549e69;
L_00549e62:; BB(0x00549e62);
    /* 00549e62: mov dword ptr [ebp - 4], 0xb */ W32((u32)(r_ebp+0xfffffffcu), 0xbu);
L_00549e69:; BB(0x00549e69);
    /* 00549e69: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00549e6c: mov esp, ebp */ r_esp = r_ebp;
    /* 00549e6e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00549e6f: ret 4 */ FN_RET(0x00549e20); r_esp += 8; return;
}

void f_00549e80(void) /* sub_549E80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00549e80);
    /* 00549e80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00549e81: mov ebp, esp */ r_ebp = r_esp;
    /* 00549e83: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00549e86: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00549e89: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00549e90: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 00549e97: movzx eax, byte ptr [ebp + 0xc] */ r_eax = (u32)R8((u32)(r_ebp+0xcu));
    /* 00549e9b: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 00549e9d: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 00549e9f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00549ea2: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00549ea5: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 00549eac: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00549eaf: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00549eb2: jmp 0x549ebd */ goto L_00549ebd;
L_00549eb4:; BB(0x00549eb4);
    /* 00549eb4: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00549eb7: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00549eba: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_00549ebd:; BB(0x00549ebd);
    /* 00549ebd: cmp dword ptr [ebp - 8], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00549ec1: jge 0x549f3c */ if ((fS==fO)) goto L_00549f3c;
L_00549ec3:; BB(0x00549ec3);
    /* 00549ec3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00549ec6: imul eax, eax, 0xc */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xcu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00549ec9: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00549ecc: lea edx, [ecx + eax + 0x28] */ r_edx = (u32)(r_ecx+r_eax+0x28u);
    /* 00549ed0: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00549ed3: movzx ecx, word ptr [edx + eax*2] */ r_ecx = (u32)R16((u32)(r_edx+r_eax*2));
    /* 00549ed7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00549ed9: je 0x549f37 */ if (fZ) goto L_00549f37;
L_00549edb:; BB(0x00549edb);
    /* 00549edb: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00549ede: imul edx, edx, 0xc */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xcu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00549ee1: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00549ee4: lea ecx, [eax + edx + 0x28] */ r_ecx = (u32)(r_eax+r_edx+0x28u);
    /* 00549ee8: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00549eeb: mov ax, word ptr [ecx + edx*2] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ecx+r_edx*2))) & 0xffffu);
    /* 00549eef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00549ef0: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x549ef5u); f_00641280();
    /* 00549ef5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00549ef8: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00549efb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00549efe: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00549f01: cmp dword ptr [ebp - 0x1c], 0xb */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00549f05: jl 0x549f2e */ if ((fS!=fO)) goto L_00549f2e;
L_00549f07:; BB(0x00549f07);
    /* 00549f07: cmp dword ptr [ebp - 0x1c], 0xd */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00549f0b: jle 0x549f15 */ if ((fZ||fS!=fO)) goto L_00549f15;
L_00549f0d:; BB(0x00549f0d);
    /* 00549f0d: cmp dword ptr [ebp - 0x1c], 0xe */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00549f11: je 0x549f1e */ if (fZ) goto L_00549f1e;
L_00549f13:; BB(0x00549f13);
    /* 00549f13: jmp 0x549f2e */ goto L_00549f2e;
L_00549f15:; BB(0x00549f15);
    /* 00549f15: mov dword ptr [ebp - 0x14], 0xa */ W32((u32)(r_ebp+0xffffffecu), 0xau);
    /* 00549f1c: jmp 0x549f2e */ goto L_00549f2e;
L_00549f1e:; BB(0x00549f1e);
    /* 00549f1e: mov dword ptr [ebp - 0x14], 0xb */ W32((u32)(r_ebp+0xffffffecu), 0xbu);
    /* 00549f25: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00549f28: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00549f2b: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_00549f2e:; BB(0x00549f2e);
    /* 00549f2e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00549f31: add eax, dword ptr [ebp - 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00549f34: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00549f37:; BB(0x00549f37);
    /* 00549f37: jmp 0x549eb4 */ goto L_00549eb4;
L_00549f3c:; BB(0x00549f3c);
    /* 00549f3c: cmp dword ptr [ebp - 4], 0x15 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00549f40: jle 0x549f6f */ if ((fZ||fS!=fO)) goto L_00549f6f;
L_00549f42:; BB(0x00549f42);
    /* 00549f42: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00549f49: jmp 0x549f54 */ goto L_00549f54;
L_00549f4b:; BB(0x00549f4b);
    /* 00549f4b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00549f4e: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00549f51: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_00549f54:; BB(0x00549f54);
    /* 00549f54: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00549f57: cmp edx, dword ptr [ebp - 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00549f5a: jge 0x549f6f */ if ((fS==fO)) goto L_00549f6f;
L_00549f5c:; BB(0x00549f5c);
    /* 00549f5c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00549f5f: sub eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00549f62: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00549f65: cmp dword ptr [ebp - 4], 0x15 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00549f69: jg 0x549f6d */ if ((!fZ&&fS==fO)) goto L_00549f6d;
L_00549f6b:; BB(0x00549f6b);
    /* 00549f6b: jmp 0x549f6f */ goto L_00549f6f;
L_00549f6d:; BB(0x00549f6d);
    /* 00549f6d: jmp 0x549f4b */ goto L_00549f4b;
L_00549f6f:; BB(0x00549f6f);
    /* 00549f6f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00549f72: mov esp, ebp */ r_esp = r_ebp;
    /* 00549f74: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00549f75: ret 8 */ FN_RET(0x00549e80); r_esp += 12; return;
}

void f_00549fa0(void) /* sub_549FA0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00549fa0);
    /* 00549fa0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00549fa1: mov ebp, esp */ r_ebp = r_esp;
    /* 00549fa3: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00549fa6: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00549fa9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00549fb0: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00549fb7: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 00549fbe: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00549fc1: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00549fc4: jmp 0x549fcf */ goto L_00549fcf;
L_00549fc6:; BB(0x00549fc6);
    /* 00549fc6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00549fc9: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00549fcc: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_00549fcf:; BB(0x00549fcf);
    /* 00549fcf: cmp dword ptr [ebp - 8], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00549fd3: jge 0x54a042 */ if ((fS==fO)) goto L_0054a042;
L_00549fd5:; BB(0x00549fd5);
    /* 00549fd5: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00549fd8: imul edx, edx, 0xc */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xcu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00549fdb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00549fde: lea ecx, [eax + edx + 0x28] */ r_ecx = (u32)(r_eax+r_edx+0x28u);
    /* 00549fe2: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00549fe5: movzx eax, word ptr [ecx + edx*2] */ r_eax = (u32)R16((u32)(r_ecx+r_edx*2));
    /* 00549fe9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00549feb: je 0x54a040 */ if (fZ) goto L_0054a040;
L_00549fed:; BB(0x00549fed);
    /* 00549fed: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00549ff0: imul ecx, ecx, 0xc */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xcu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00549ff3: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00549ff6: lea eax, [edx + ecx + 0x28] */ r_eax = (u32)(r_edx+r_ecx+0x28u);
    /* 00549ffa: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00549ffd: mov dx, word ptr [eax + ecx*2] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_eax+r_ecx*2))) & 0xffffu);
    /* 0054a001: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054a002: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x54a007u); f_00641280();
    /* 0054a007: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054a00a: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0054a00d: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054a010: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0054a013: cmp dword ptr [ebp - 0x18], 0xb */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054a017: jl 0x54a037 */ if ((fS!=fO)) goto L_0054a037;
L_0054a019:; BB(0x0054a019);
    /* 0054a019: cmp dword ptr [ebp - 0x18], 0xd */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054a01d: jle 0x54a027 */ if ((fZ||fS!=fO)) goto L_0054a027;
L_0054a01f:; BB(0x0054a01f);
    /* 0054a01f: cmp dword ptr [ebp - 0x18], 0xe */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054a023: je 0x54a030 */ if (fZ) goto L_0054a030;
L_0054a025:; BB(0x0054a025);
    /* 0054a025: jmp 0x54a037 */ goto L_0054a037;
L_0054a027:; BB(0x0054a027);
    /* 0054a027: mov dword ptr [ebp - 0x10], 0xa */ W32((u32)(r_ebp+0xfffffff0u), 0xau);
    /* 0054a02e: jmp 0x54a037 */ goto L_0054a037;
L_0054a030:; BB(0x0054a030);
    /* 0054a030: mov dword ptr [ebp - 0x10], 1 */ W32((u32)(r_ebp+0xfffffff0u), 0x1u);
L_0054a037:; BB(0x0054a037);
    /* 0054a037: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054a03a: add ecx, dword ptr [ebp - 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0054a03d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0054a040:; BB(0x0054a040);
    /* 0054a040: jmp 0x549fc6 */ goto L_00549fc6;
L_0054a042:; BB(0x0054a042);
    /* 0054a042: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054a045: mov esp, ebp */ r_esp = r_ebp;
    /* 0054a047: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054a048: ret 4 */ FN_RET(0x00549fa0); r_esp += 8; return;
}

