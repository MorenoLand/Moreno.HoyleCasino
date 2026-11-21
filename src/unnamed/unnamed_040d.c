#include "protos.h"

void f_0040d040(void) /* sub_40D040 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040d040);
    /* 0040d040: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040d041: mov ebp, esp */ r_ebp = r_esp;
    /* 0040d043: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040d046: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0040d049: mov dword ptr [ebp - 0x14], 0x138a */ W32((u32)(r_ebp+0xffffffecu), 0x138au);
    /* 0040d050: mov dword ptr [ebp - 0x10], 0x138b */ W32((u32)(r_ebp+0xfffffff0u), 0x138bu);
    /* 0040d057: mov dword ptr [ebp - 0xc], 0x1389 */ W32((u32)(r_ebp+0xfffffff4u), 0x1389u);
    /* 0040d05e: mov dword ptr [ebp - 8], 0x138c */ W32((u32)(r_ebp+0xfffffff8u), 0x138cu);
    /* 0040d065: mov dword ptr [ebp - 4], 0x138f */ W32((u32)(r_ebp+0xfffffffcu), 0x138fu);
    /* 0040d06c: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040d070: jge 0x40d0a3 */ if ((fS==fO)) goto L_0040d0a3;
L_0040d072:; BB(0x0040d072);
    /* 0040d072: cmp dword ptr [ebp + 0x10], 2 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040d076: jne 0x40d0a3 */ if (!fZ) goto L_0040d0a3;
L_0040d078:; BB(0x0040d078);
    /* 0040d078: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040d07b: imul eax, eax, 0x118 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x118u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040d081: add eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0040d084: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 0040d08a: cmp byte ptr [ecx + eax + 0x10c], 0 */ {  u32 a = R8((u32)(r_ecx+r_eax+0x10cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0040d092: setne dl */ r_edx = (r_edx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0040d095: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 0040d098: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040d09a: je 0x40d0a3 */ if (fZ) goto L_0040d0a3;
L_0040d09c:; BB(0x0040d09c);
    /* 0040d09c: mov eax, 0x1390 */ r_eax = 0x1390u;
    /* 0040d0a1: jmp 0x40d0aa */ goto L_0040d0aa;
L_0040d0a3:; BB(0x0040d0a3);
    /* 0040d0a3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0040d0a6: mov eax, dword ptr [ebp + ecx*4 - 0x14] */ r_eax = R32((u32)(r_ebp+r_ecx*4+0xffffffecu));
L_0040d0aa:; BB(0x0040d0aa);
    /* 0040d0aa: mov esp, ebp */ r_esp = r_ebp;
    /* 0040d0ac: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040d0ad: ret 0xc */ FN_RET(0x0040d040); r_esp += 16; return;
}

void f_0040d0b0(void) /* sub_40D0B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040d0b0);
    /* 0040d0b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040d0b1: mov ebp, esp */ r_ebp = r_esp;
    /* 0040d0b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040d0b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0040d0b7: cmp dword ptr [ebp + 8], 1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040d0bb: jne 0x40d0c1 */ if (!fZ) goto L_0040d0c1;
L_0040d0bd:; BB(0x0040d0bd);
    /* 0040d0bd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0040d0bf: jmp 0x40d0ea */ goto L_0040d0ea;
L_0040d0c1:; BB(0x0040d0c1);
    /* 0040d0c1: cmp dword ptr [ebp + 8], 2 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040d0c5: je 0x40d0cd */ if (fZ) goto L_0040d0cd;
L_0040d0c7:; BB(0x0040d0c7);
    /* 0040d0c7: cmp dword ptr [ebp + 8], 3 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040d0cb: jne 0x40d0d4 */ if (!fZ) goto L_0040d0d4;
L_0040d0cd:; BB(0x0040d0cd);
    /* 0040d0cd: mov eax, 1 */ r_eax = 0x1u;
    /* 0040d0d2: jmp 0x40d0ea */ goto L_0040d0ea;
L_0040d0d4:; BB(0x0040d0d4);
    /* 0040d0d4: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040d0d8: jne 0x40d0e8 */ if (!fZ) goto L_0040d0e8;
L_0040d0da:; BB(0x0040d0da);
    /* 0040d0da: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0040d0dc: cmp dword ptr [ebp + 0xc], 2 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040d0e0: setge al */ r_eax = (r_eax & 0xffffff00u) | ((((fS==fO)) ? 1 : 0) & 0xffu);
    /* 0040d0e3: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0040d0e6: jmp 0x40d0ea */ goto L_0040d0ea;
L_0040d0e8:; BB(0x0040d0e8);
    /* 0040d0e8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0040d0ea:; BB(0x0040d0ea);
    /* 0040d0ea: mov esp, ebp */ r_esp = r_ebp;
    /* 0040d0ec: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040d0ed: ret 8 */ FN_RET(0x0040d0b0); r_esp += 12; return;
}

void f_0040d0f0(void) /* sub_40D0F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040d0f0);
    /* 0040d0f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040d0f1: mov ebp, esp */ r_ebp = r_esp;
    /* 0040d0f3: sub esp, 0xcc */ {  u32 a = r_esp; u32 b = 0xccu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040d0f9: mov dword ptr [ebp - 0xcc], ecx */ W32((u32)(r_ebp+0xffffff34u), r_ecx);
    /* 0040d0ff: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0040d106: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0040d10d: mov dword ptr [ebp - 0xc8], 0x180 */ W32((u32)(r_ebp+0xffffff38u), 0x180u);
    /* 0040d117: mov dword ptr [ebp - 0xc4], 0xec */ W32((u32)(r_ebp+0xffffff3cu), 0xecu);
    /* 0040d121: mov dword ptr [ebp - 0xc0], 0x143 */ W32((u32)(r_ebp+0xffffff40u), 0x143u);
    /* 0040d12b: mov dword ptr [ebp - 0xbc], 0xec */ W32((u32)(r_ebp+0xffffff44u), 0xecu);
    /* 0040d135: mov dword ptr [ebp - 0xb8], 0x192 */ W32((u32)(r_ebp+0xffffff48u), 0x192u);
    /* 0040d13f: mov dword ptr [ebp - 0xb4], 0xec */ W32((u32)(r_ebp+0xffffff4cu), 0xecu);
    /* 0040d149: mov dword ptr [ebp - 0xb0], 0x176 */ W32((u32)(r_ebp+0xffffff50u), 0x176u);
    /* 0040d153: mov dword ptr [ebp - 0xac], 0x93 */ W32((u32)(r_ebp+0xffffff54u), 0x93u);
    /* 0040d15d: mov dword ptr [ebp - 0xa8], 0x143 */ W32((u32)(r_ebp+0xffffff58u), 0x143u);
    /* 0040d167: mov dword ptr [ebp - 0xa4], 0x93 */ W32((u32)(r_ebp+0xffffff5cu), 0x93u);
    /* 0040d171: mov dword ptr [ebp - 0xa0], 0x192 */ W32((u32)(r_ebp+0xffffff60u), 0x192u);
    /* 0040d17b: mov dword ptr [ebp - 0x9c], 0x93 */ W32((u32)(r_ebp+0xffffff64u), 0x93u);
    /* 0040d185: mov dword ptr [ebp - 0x98], 0xc0 */ W32((u32)(r_ebp+0xffffff68u), 0xc0u);
    /* 0040d18f: mov dword ptr [ebp - 0x94], 0xec */ W32((u32)(r_ebp+0xffffff6cu), 0xecu);
    /* 0040d199: mov dword ptr [ebp - 0x90], 0x91 */ W32((u32)(r_ebp+0xffffff70u), 0x91u);
    /* 0040d1a3: mov dword ptr [ebp - 0x8c], 0xec */ W32((u32)(r_ebp+0xffffff74u), 0xecu);
    /* 0040d1ad: mov dword ptr [ebp - 0x88], 0xe0 */ W32((u32)(r_ebp+0xffffff78u), 0xe0u);
    /* 0040d1b7: mov dword ptr [ebp - 0x84], 0xec */ W32((u32)(r_ebp+0xffffff7cu), 0xecu);
    /* 0040d1c1: mov dword ptr [ebp - 0x80], 0xca */ W32((u32)(r_ebp+0xffffff80u), 0xcau);
    /* 0040d1c8: mov dword ptr [ebp - 0x7c], 0x93 */ W32((u32)(r_ebp+0xffffff84u), 0x93u);
    /* 0040d1cf: mov dword ptr [ebp - 0x78], 0x9b */ W32((u32)(r_ebp+0xffffff88u), 0x9bu);
    /* 0040d1d6: mov dword ptr [ebp - 0x74], 0x93 */ W32((u32)(r_ebp+0xffffff8cu), 0x93u);
    /* 0040d1dd: mov dword ptr [ebp - 0x70], 0xea */ W32((u32)(r_ebp+0xffffff90u), 0xeau);
    /* 0040d1e4: mov dword ptr [ebp - 0x6c], 0x93 */ W32((u32)(r_ebp+0xffffff94u), 0x93u);
    /* 0040d1eb: mov dword ptr [ebp - 0x68], 0x203 */ W32((u32)(r_ebp+0xffffff98u), 0x203u);
    /* 0040d1f2: mov dword ptr [ebp - 0x64], 0xae */ W32((u32)(r_ebp+0xffffff9cu), 0xaeu);
    /* 0040d1f9: mov dword ptr [ebp - 0x60], 0x1d5 */ W32((u32)(r_ebp+0xffffffa0u), 0x1d5u);
    /* 0040d200: mov dword ptr [ebp - 0x5c], 0xae */ W32((u32)(r_ebp+0xffffffa4u), 0xaeu);
    /* 0040d207: mov dword ptr [ebp - 0x58], 0x224 */ W32((u32)(r_ebp+0xffffffa8u), 0x224u);
    /* 0040d20e: mov dword ptr [ebp - 0x54], 0xae */ W32((u32)(r_ebp+0xffffffacu), 0xaeu);
    /* 0040d215: mov dword ptr [ebp - 0x50], 0x203 */ W32((u32)(r_ebp+0xffffffb0u), 0x203u);
    /* 0040d21c: mov dword ptr [ebp - 0x4c], 0x59 */ W32((u32)(r_ebp+0xffffffb4u), 0x59u);
    /* 0040d223: mov dword ptr [ebp - 0x48], 0x1d5 */ W32((u32)(r_ebp+0xffffffb8u), 0x1d5u);
    /* 0040d22a: mov dword ptr [ebp - 0x44], 0x59 */ W32((u32)(r_ebp+0xffffffbcu), 0x59u);
    /* 0040d231: mov dword ptr [ebp - 0x40], 0x224 */ W32((u32)(r_ebp+0xffffffc0u), 0x224u);
    /* 0040d238: mov dword ptr [ebp - 0x3c], 0x59 */ W32((u32)(r_ebp+0xffffffc4u), 0x59u);
    /* 0040d23f: mov dword ptr [ebp - 0x38], 0x39 */ W32((u32)(r_ebp+0xffffffc8u), 0x39u);
    /* 0040d246: mov dword ptr [ebp - 0x34], 0xae */ W32((u32)(r_ebp+0xffffffccu), 0xaeu);
    /* 0040d24d: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 0040d254: mov dword ptr [ebp - 0x2c], 0xae */ W32((u32)(r_ebp+0xffffffd4u), 0xaeu);
    /* 0040d25b: mov dword ptr [ebp - 0x28], 0x50 */ W32((u32)(r_ebp+0xffffffd8u), 0x50u);
    /* 0040d262: mov dword ptr [ebp - 0x24], 0xae */ W32((u32)(r_ebp+0xffffffdcu), 0xaeu);
    /* 0040d269: mov dword ptr [ebp - 0x20], 0x39 */ W32((u32)(r_ebp+0xffffffe0u), 0x39u);
    /* 0040d270: mov dword ptr [ebp - 0x1c], 0x59 */ W32((u32)(r_ebp+0xffffffe4u), 0x59u);
    /* 0040d277: mov dword ptr [ebp - 0x18], 1 */ W32((u32)(r_ebp+0xffffffe8u), 0x1u);
    /* 0040d27e: mov dword ptr [ebp - 0x14], 0x59 */ W32((u32)(r_ebp+0xffffffecu), 0x59u);
    /* 0040d285: mov dword ptr [ebp - 0x10], 0x50 */ W32((u32)(r_ebp+0xfffffff0u), 0x50u);
    /* 0040d28c: mov dword ptr [ebp - 0xc], 0x59 */ W32((u32)(r_ebp+0xfffffff4u), 0x59u);
    /* 0040d293: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040d297: jne 0x40d2a6 */ if (!fZ) goto L_0040d2a6;
L_0040d299:; BB(0x0040d299);
    /* 0040d299: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0040d29c: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040d29f: add eax, 0x109 */ {  u32 a = r_eax; u32 b = 0x109u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0040d2a4: jmp 0x40d31d */ goto L_0040d31d;
L_0040d2a6:; BB(0x0040d2a6);
    /* 0040d2a6: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0040d2a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040d2aa: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0040d2ad: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040d2ae: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 0040d2b4: call 0x4194c0 */ r_esp -= 4; W32(r_esp, 0x40d2b9u); f_004194c0();
    /* 0040d2b9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040d2ba: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 0040d2c0: call 0x40d0b0 */ r_esp -= 4; W32(r_esp, 0x40d2c5u); f_0040d0b0();
    /* 0040d2c5: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0040d2c8: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0040d2cb: imul edx, edx, 0x30 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x30u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040d2ce: lea eax, [ebp + edx - 0xc8] */ r_eax = (u32)(r_ebp+r_edx+0xffffff38u);
    /* 0040d2d5: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0040d2d8: add ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0040d2db: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0040d2de: imul edx, edx, 0xc */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xcu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040d2e1: add edx, dword ptr [eax + ecx*8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+r_ecx*8)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040d2e4: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0040d2e7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040d2ea: imul eax, eax, 0x118 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x118u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040d2f0: add eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0040d2f3: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 0040d2f9: cmp byte ptr [ecx + eax + 0x10c], 0 */ {  u32 a = R8((u32)(r_ecx+r_eax+0x10cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0040d301: setne dl */ r_edx = (r_edx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0040d304: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 0040d307: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040d309: je 0x40d31a */ if (fZ) goto L_0040d31a;
L_0040d30b:; BB(0x0040d30b);
    /* 0040d30b: cmp dword ptr [ebp + 0x10], 2 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040d30f: jne 0x40d31a */ if (!fZ) goto L_0040d31a;
L_0040d311:; BB(0x0040d311);
    /* 0040d311: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040d314: sub ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0040d317: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0040d31a:; BB(0x0040d31a);
    /* 0040d31a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
L_0040d31d:; BB(0x0040d31d);
    /* 0040d31d: mov esp, ebp */ r_esp = r_ebp;
    /* 0040d31f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040d320: ret 0xc */ FN_RET(0x0040d0f0); r_esp += 16; return;
}

void f_0040d330(void) /* sub_40D330 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040d330);
    /* 0040d330: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040d331: mov ebp, esp */ r_ebp = r_esp;
    /* 0040d333: sub esp, 0xcc */ {  u32 a = r_esp; u32 b = 0xccu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040d339: mov dword ptr [ebp - 0xcc], ecx */ W32((u32)(r_ebp+0xffffff34u), r_ecx);
    /* 0040d33f: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0040d346: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0040d34d: mov dword ptr [ebp - 0xc8], 0x180 */ W32((u32)(r_ebp+0xffffff38u), 0x180u);
    /* 0040d357: mov dword ptr [ebp - 0xc4], 0xec */ W32((u32)(r_ebp+0xffffff3cu), 0xecu);
    /* 0040d361: mov dword ptr [ebp - 0xc0], 0x143 */ W32((u32)(r_ebp+0xffffff40u), 0x143u);
    /* 0040d36b: mov dword ptr [ebp - 0xbc], 0xec */ W32((u32)(r_ebp+0xffffff44u), 0xecu);
    /* 0040d375: mov dword ptr [ebp - 0xb8], 0x192 */ W32((u32)(r_ebp+0xffffff48u), 0x192u);
    /* 0040d37f: mov dword ptr [ebp - 0xb4], 0xec */ W32((u32)(r_ebp+0xffffff4cu), 0xecu);
    /* 0040d389: mov dword ptr [ebp - 0xb0], 0x176 */ W32((u32)(r_ebp+0xffffff50u), 0x176u);
    /* 0040d393: mov dword ptr [ebp - 0xac], 0x93 */ W32((u32)(r_ebp+0xffffff54u), 0x93u);
    /* 0040d39d: mov dword ptr [ebp - 0xa8], 0x143 */ W32((u32)(r_ebp+0xffffff58u), 0x143u);
    /* 0040d3a7: mov dword ptr [ebp - 0xa4], 0x93 */ W32((u32)(r_ebp+0xffffff5cu), 0x93u);
    /* 0040d3b1: mov dword ptr [ebp - 0xa0], 0x192 */ W32((u32)(r_ebp+0xffffff60u), 0x192u);
    /* 0040d3bb: mov dword ptr [ebp - 0x9c], 0x93 */ W32((u32)(r_ebp+0xffffff64u), 0x93u);
    /* 0040d3c5: mov dword ptr [ebp - 0x98], 0xc0 */ W32((u32)(r_ebp+0xffffff68u), 0xc0u);
    /* 0040d3cf: mov dword ptr [ebp - 0x94], 0xec */ W32((u32)(r_ebp+0xffffff6cu), 0xecu);
    /* 0040d3d9: mov dword ptr [ebp - 0x90], 0x91 */ W32((u32)(r_ebp+0xffffff70u), 0x91u);
    /* 0040d3e3: mov dword ptr [ebp - 0x8c], 0xec */ W32((u32)(r_ebp+0xffffff74u), 0xecu);
    /* 0040d3ed: mov dword ptr [ebp - 0x88], 0xe0 */ W32((u32)(r_ebp+0xffffff78u), 0xe0u);
    /* 0040d3f7: mov dword ptr [ebp - 0x84], 0xec */ W32((u32)(r_ebp+0xffffff7cu), 0xecu);
    /* 0040d401: mov dword ptr [ebp - 0x80], 0xca */ W32((u32)(r_ebp+0xffffff80u), 0xcau);
    /* 0040d408: mov dword ptr [ebp - 0x7c], 0x93 */ W32((u32)(r_ebp+0xffffff84u), 0x93u);
    /* 0040d40f: mov dword ptr [ebp - 0x78], 0x9b */ W32((u32)(r_ebp+0xffffff88u), 0x9bu);
    /* 0040d416: mov dword ptr [ebp - 0x74], 0x93 */ W32((u32)(r_ebp+0xffffff8cu), 0x93u);
    /* 0040d41d: mov dword ptr [ebp - 0x70], 0xea */ W32((u32)(r_ebp+0xffffff90u), 0xeau);
    /* 0040d424: mov dword ptr [ebp - 0x6c], 0x93 */ W32((u32)(r_ebp+0xffffff94u), 0x93u);
    /* 0040d42b: mov dword ptr [ebp - 0x68], 0x203 */ W32((u32)(r_ebp+0xffffff98u), 0x203u);
    /* 0040d432: mov dword ptr [ebp - 0x64], 0xae */ W32((u32)(r_ebp+0xffffff9cu), 0xaeu);
    /* 0040d439: mov dword ptr [ebp - 0x60], 0x1d5 */ W32((u32)(r_ebp+0xffffffa0u), 0x1d5u);
    /* 0040d440: mov dword ptr [ebp - 0x5c], 0xae */ W32((u32)(r_ebp+0xffffffa4u), 0xaeu);
    /* 0040d447: mov dword ptr [ebp - 0x58], 0x224 */ W32((u32)(r_ebp+0xffffffa8u), 0x224u);
    /* 0040d44e: mov dword ptr [ebp - 0x54], 0xae */ W32((u32)(r_ebp+0xffffffacu), 0xaeu);
    /* 0040d455: mov dword ptr [ebp - 0x50], 0x203 */ W32((u32)(r_ebp+0xffffffb0u), 0x203u);
    /* 0040d45c: mov dword ptr [ebp - 0x4c], 0x59 */ W32((u32)(r_ebp+0xffffffb4u), 0x59u);
    /* 0040d463: mov dword ptr [ebp - 0x48], 0x1d5 */ W32((u32)(r_ebp+0xffffffb8u), 0x1d5u);
    /* 0040d46a: mov dword ptr [ebp - 0x44], 0x59 */ W32((u32)(r_ebp+0xffffffbcu), 0x59u);
    /* 0040d471: mov dword ptr [ebp - 0x40], 0x224 */ W32((u32)(r_ebp+0xffffffc0u), 0x224u);
    /* 0040d478: mov dword ptr [ebp - 0x3c], 0x59 */ W32((u32)(r_ebp+0xffffffc4u), 0x59u);
    /* 0040d47f: mov dword ptr [ebp - 0x38], 0x39 */ W32((u32)(r_ebp+0xffffffc8u), 0x39u);
    /* 0040d486: mov dword ptr [ebp - 0x34], 0xae */ W32((u32)(r_ebp+0xffffffccu), 0xaeu);
    /* 0040d48d: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 0040d494: mov dword ptr [ebp - 0x2c], 0xae */ W32((u32)(r_ebp+0xffffffd4u), 0xaeu);
    /* 0040d49b: mov dword ptr [ebp - 0x28], 0x50 */ W32((u32)(r_ebp+0xffffffd8u), 0x50u);
    /* 0040d4a2: mov dword ptr [ebp - 0x24], 0xae */ W32((u32)(r_ebp+0xffffffdcu), 0xaeu);
    /* 0040d4a9: mov dword ptr [ebp - 0x20], 0x39 */ W32((u32)(r_ebp+0xffffffe0u), 0x39u);
    /* 0040d4b0: mov dword ptr [ebp - 0x1c], 0x59 */ W32((u32)(r_ebp+0xffffffe4u), 0x59u);
    /* 0040d4b7: mov dword ptr [ebp - 0x18], 1 */ W32((u32)(r_ebp+0xffffffe8u), 0x1u);
    /* 0040d4be: mov dword ptr [ebp - 0x14], 0x59 */ W32((u32)(r_ebp+0xffffffecu), 0x59u);
    /* 0040d4c5: mov dword ptr [ebp - 0x10], 0x50 */ W32((u32)(r_ebp+0xfffffff0u), 0x50u);
    /* 0040d4cc: mov dword ptr [ebp - 0xc], 0x59 */ W32((u32)(r_ebp+0xfffffff4u), 0x59u);
    /* 0040d4d3: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040d4d7: jne 0x40d4e0 */ if (!fZ) goto L_0040d4e0;
L_0040d4d9:; BB(0x0040d4d9);
    /* 0040d4d9: mov eax, 0x46 */ r_eax = 0x46u;
    /* 0040d4de: jmp 0x40d527 */ goto L_0040d527;
L_0040d4e0:; BB(0x0040d4e0);
    /* 0040d4e0: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0040d4e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040d4e4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0040d4e7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040d4e8: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 0040d4ee: call 0x4194c0 */ r_esp -= 4; W32(r_esp, 0x40d4f3u); f_004194c0();
    /* 0040d4f3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040d4f4: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 0040d4fa: call 0x40d0b0 */ r_esp -= 4; W32(r_esp, 0x40d4ffu); f_0040d0b0();
    /* 0040d4ff: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0040d502: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0040d505: imul edx, edx, 0x30 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x30u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040d508: lea eax, [ebp + edx - 0xc8] */ r_eax = (u32)(r_ebp+r_edx+0xffffff38u);
    /* 0040d50f: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0040d512: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0040d515: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0040d518: imul edx, edx, 6 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x6u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040d51b: mov eax, dword ptr [eax + ecx*8 + 4] */ r_eax = R32((u32)(r_eax+r_ecx*8+0x4u));
    /* 0040d51f: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0040d521: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0040d524: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
L_0040d527:; BB(0x0040d527);
    /* 0040d527: mov esp, ebp */ r_esp = r_ebp;
    /* 0040d529: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040d52a: ret 0xc */ FN_RET(0x0040d330); r_esp += 16; return;
}

void f_0040d530(void) /* sub_40D530 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040d530);
    /* 0040d530: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040d531: mov ebp, esp */ r_ebp = r_esp;
    /* 0040d533: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040d536: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0040d539: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040d53d: jne 0x40d57a */ if (!fZ) goto L_0040d57a;
L_0040d53f:; BB(0x0040d53f);
    /* 0040d53f: cmp dword ptr [ebp + 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040d543: jne 0x40d56b */ if (!fZ) goto L_0040d56b;
L_0040d545:; BB(0x0040d545);
    /* 0040d545: mov eax, dword ptr [0x790328] */ r_eax = R32((u32)(0x790328u));
    /* 0040d54a: movzx ecx, byte ptr [eax + 9] */ r_ecx = (u32)R8((u32)(r_eax+0x9u));
    /* 0040d54e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040d550: jne 0x40d56b */ if (!fZ) goto L_0040d56b;
L_0040d552:; BB(0x0040d552);
    /* 0040d552: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 0040d558: call 0x41a890 */ r_esp -= 4; W32(r_esp, 0x40d55du); f_0041a890();
    /* 0040d55d: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040d560: je 0x40d56b */ if (fZ) goto L_0040d56b;
L_0040d562:; BB(0x0040d562);
    /* 0040d562: mov dword ptr [ebp - 0x10], 1 */ W32((u32)(r_ebp+0xfffffff0u), 0x1u);
    /* 0040d569: jmp 0x40d572 */ goto L_0040d572;
L_0040d56b:; BB(0x0040d56b);
    /* 0040d56b: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_0040d572:; BB(0x0040d572);
    /* 0040d572: mov al, byte ptr [ebp - 0x10] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff0u))) & 0xffu);
    /* 0040d575: jmp 0x40d6a0 */ goto L_0040d6a0;
L_0040d57a:; BB(0x0040d57a);
    /* 0040d57a: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 0040d580: call 0x418700 */ r_esp -= 4; W32(r_esp, 0x40d585u); f_00418700();
    /* 0040d585: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040d588: jne 0x40d69e */ if (!fZ) goto L_0040d69e;
L_0040d58e:; BB(0x0040d58e);
    /* 0040d58e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0040d591: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040d592: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x40d597u); f_005dcb00();
    /* 0040d597: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040d59a: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0040d59d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040d5a0: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x40d5a5u); f_0063aac0();
    /* 0040d5a5: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0040d5a7: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0040d5aa: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0040d5ac: cmp dword ptr [ebp - 4], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040d5b0: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0040d5b3: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 0040d5b6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040d5b8: je 0x40d69e */ if (fZ) goto L_0040d69e;
L_0040d5be:; BB(0x0040d5be);
    /* 0040d5be: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040d5c1: imul eax, eax, 0x118 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x118u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040d5c7: add eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0040d5ca: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 0040d5d0: cmp byte ptr [ecx + eax + 0x10c], 0 */ {  u32 a = R8((u32)(r_ecx+r_eax+0x10cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0040d5d8: setne dl */ r_edx = (r_edx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0040d5db: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 0040d5de: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040d5e0: jne 0x40d69e */ if (!fZ) goto L_0040d69e;
L_0040d5e6:; BB(0x0040d5e6);
    /* 0040d5e6: cmp dword ptr [ebp + 0x10], 2 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040d5ea: jl 0x40d60e */ if ((fS!=fO)) goto L_0040d60e;
L_0040d5ec:; BB(0x0040d5ec);
    /* 0040d5ec: cmp dword ptr [ebp + 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040d5f0: jne 0x40d69e */ if (!fZ) goto L_0040d69e;
L_0040d5f6:; BB(0x0040d5f6);
    /* 0040d5f6: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0040d5f9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040d5fa: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 0040d600: call 0x4194c0 */ r_esp -= 4; W32(r_esp, 0x40d605u); f_004194c0();
    /* 0040d605: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040d608: jle 0x40d69e */ if ((fZ||fS!=fO)) goto L_0040d69e;
L_0040d60e:; BB(0x0040d60e);
    /* 0040d60e: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0040d611: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040d612: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040d615: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040d616: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 0040d61c: call 0x41b990 */ r_esp -= 4; W32(r_esp, 0x40d621u); f_0041b990();
    /* 0040d621: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0040d624: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040d626: je 0x40d62c */ if (fZ) goto L_0040d62c;
L_0040d628:; BB(0x0040d628);
    /* 0040d628: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0040d62a: jmp 0x40d6a0 */ goto L_0040d6a0;
L_0040d62c:; BB(0x0040d62c);
    /* 0040d62c: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0040d62f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040d630: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 0040d636: call 0x41a830 */ r_esp -= 4; W32(r_esp, 0x40d63bu); f_0041a830();
    /* 0040d63b: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0040d63e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040d640: je 0x40d646 */ if (fZ) goto L_0040d646;
L_0040d642:; BB(0x0040d642);
    /* 0040d642: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0040d644: jmp 0x40d6a0 */ goto L_0040d6a0;
L_0040d646:; BB(0x0040d646);
    /* 0040d646: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0040d649: imul ecx, ecx, 0x118 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x118u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040d64f: add ecx, dword ptr [ebp + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0040d652: mov edx, dword ptr [0x790324] */ r_edx = R32((u32)(0x790324u));
    /* 0040d658: movsx eax, byte ptr [edx + ecx + 0x110] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+r_ecx+0x110u));
    /* 0040d660: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040d663: jne 0x40d669 */ if (!fZ) goto L_0040d669;
L_0040d665:; BB(0x0040d665);
    /* 0040d665: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0040d667: jmp 0x40d6a0 */ goto L_0040d6a0;
L_0040d669:; BB(0x0040d669);
    /* 0040d669: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0040d66c: imul ecx, ecx, 0x118 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x118u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040d672: add ecx, dword ptr [ebp + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0040d675: mov edx, dword ptr [0x790324] */ r_edx = R32((u32)(0x790324u));
    /* 0040d67b: movsx eax, byte ptr [edx + ecx + 0x110] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+r_ecx+0x110u));
    /* 0040d683: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040d686: jne 0x40d69e */ if (!fZ) goto L_0040d69e;
L_0040d688:; BB(0x0040d688);
    /* 0040d688: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 0040d68e: call 0x41b830 */ r_esp -= 4; W32(r_esp, 0x40d693u); f_0041b830();
    /* 0040d693: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0040d696: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040d698: jne 0x40d69e */ if (!fZ) goto L_0040d69e;
L_0040d69a:; BB(0x0040d69a);
    /* 0040d69a: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0040d69c: jmp 0x40d6a0 */ goto L_0040d6a0;
L_0040d69e:; BB(0x0040d69e);
    /* 0040d69e: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0040d6a0:; BB(0x0040d6a0);
    /* 0040d6a0: mov esp, ebp */ r_esp = r_ebp;
    /* 0040d6a2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040d6a3: ret 0xc */ FN_RET(0x0040d530); r_esp += 16; return;
}

void f_0040d6b0(void) /* sub_40D6B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040d6b0);
    /* 0040d6b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040d6b1: mov ebp, esp */ r_ebp = r_esp;
    /* 0040d6b3: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040d6b6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0040d6b9: mov eax, dword ptr [0x790324] */ r_eax = R32((u32)(0x790324u));
    /* 0040d6be: mov ecx, dword ptr [eax + 0x4d0] */ r_ecx = R32((u32)(r_eax+0x4d0u));
    /* 0040d6c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0040d6c7: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040d6cb: jne 0x40d6d6 */ if (!fZ) goto L_0040d6d6;
L_0040d6cd:; BB(0x0040d6cd);
    /* 0040d6cd: mov dword ptr [ebp - 8], 0xffffffff */ W32((u32)(r_ebp+0xfffffff8u), 0xffffffffu);
    /* 0040d6d4: jmp 0x40d704 */ goto L_0040d704;
L_0040d6d6:; BB(0x0040d6d6);
    /* 0040d6d6: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040d6da: jne 0x40d6e5 */ if (!fZ) goto L_0040d6e5;
L_0040d6dc:; BB(0x0040d6dc);
    /* 0040d6dc: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0040d6e3: jmp 0x40d6fe */ goto L_0040d6fe;
L_0040d6e5:; BB(0x0040d6e5);
    /* 0040d6e5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040d6e8: imul edx, edx, 0x118 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x118u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040d6ee: mov eax, dword ptr [0x790324] */ r_eax = R32((u32)(0x790324u));
    /* 0040d6f3: movsx ecx, byte ptr [eax + edx + 0x119] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+r_edx+0x119u));
    /* 0040d6fb: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_0040d6fe:; BB(0x0040d6fe);
    /* 0040d6fe: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040d701: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0040d704:; BB(0x0040d704);
    /* 0040d704: movzx eax, byte ptr [ebp + 8] */ r_eax = (u32)R8((u32)(r_ebp+0x8u));
    /* 0040d708: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040d70a: je 0x40d7e2 */ if (fZ) goto L_0040d7e2;
L_0040d710:; BB(0x0040d710);
    /* 0040d710: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040d712: push 0x30d7ea */ { u32 v = 0x30d7eau; r_esp -= 4; W32(r_esp, v); }
    /* 0040d717: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0040d71d: call 0x5f2b20 */ r_esp -= 4; W32(r_esp, 0x40d722u); f_005f2b20();
    /* 0040d722: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040d724: push 0x30d7eb */ { u32 v = 0x30d7ebu; r_esp -= 4; W32(r_esp, v); }
    /* 0040d729: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0040d72f: call 0x5f2b20 */ r_esp -= 4; W32(r_esp, 0x40d734u); f_005f2b20();
    /* 0040d734: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040d736: push 0x30d7ec */ { u32 v = 0x30d7ecu; r_esp -= 4; W32(r_esp, v); }
    /* 0040d73b: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0040d741: call 0x5f2b20 */ r_esp -= 4; W32(r_esp, 0x40d746u); f_005f2b20();
    /* 0040d746: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040d748: push 0x30d7ed */ { u32 v = 0x30d7edu; r_esp -= 4; W32(r_esp, v); }
    /* 0040d74d: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0040d753: call 0x5f2b20 */ r_esp -= 4; W32(r_esp, 0x40d758u); f_005f2b20();
    /* 0040d758: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040d75a: push 0x30d7ee */ { u32 v = 0x30d7eeu; r_esp -= 4; W32(r_esp, v); }
    /* 0040d75f: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0040d765: call 0x5f2b20 */ r_esp -= 4; W32(r_esp, 0x40d76au); f_005f2b20();
    /* 0040d76a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040d76d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040d76e: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 0040d774: call 0x41a960 */ r_esp -= 4; W32(r_esp, 0x40d779u); f_0041a960();
    /* 0040d779: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0040d77c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040d77e: jne 0x40d790 */ if (!fZ) goto L_0040d790;
L_0040d780:; BB(0x0040d780);
    /* 0040d780: push 0x30d7ec */ { u32 v = 0x30d7ecu; r_esp -= 4; W32(r_esp, v); }
    /* 0040d785: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0040d78b: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x40d790u); f_005f2ba0();
L_0040d790:; BB(0x0040d790);
    /* 0040d790: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040d793: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040d794: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040d797: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040d798: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 0040d79e: call 0x41ade0 */ r_esp -= 4; W32(r_esp, 0x40d7a3u); f_0041ade0();
    /* 0040d7a3: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0040d7a6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040d7a8: jne 0x40d7ba */ if (!fZ) goto L_0040d7ba;
L_0040d7aa:; BB(0x0040d7aa);
    /* 0040d7aa: push 0x30d7ed */ { u32 v = 0x30d7edu; r_esp -= 4; W32(r_esp, v); }
    /* 0040d7af: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0040d7b5: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x40d7bau); f_005f2ba0();
L_0040d7ba:; BB(0x0040d7ba);
    /* 0040d7ba: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040d7bd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040d7be: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 0040d7c4: call 0x41aec0 */ r_esp -= 4; W32(r_esp, 0x40d7c9u); f_0041aec0();
    /* 0040d7c9: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0040d7cc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040d7ce: jne 0x40d7e0 */ if (!fZ) goto L_0040d7e0;
L_0040d7d0:; BB(0x0040d7d0);
    /* 0040d7d0: push 0x30d7ee */ { u32 v = 0x30d7eeu; r_esp -= 4; W32(r_esp, v); }
    /* 0040d7d5: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0040d7db: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x40d7e0u); f_005f2ba0();
L_0040d7e0:; BB(0x0040d7e0);
    /* 0040d7e0: jmp 0x40d832 */ goto L_0040d832;
L_0040d7e2:; BB(0x0040d7e2);
    /* 0040d7e2: push 0x30d7ea */ { u32 v = 0x30d7eau; r_esp -= 4; W32(r_esp, v); }
    /* 0040d7e7: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0040d7ed: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x40d7f2u); f_005f2ba0();
    /* 0040d7f2: push 0x30d7eb */ { u32 v = 0x30d7ebu; r_esp -= 4; W32(r_esp, v); }
    /* 0040d7f7: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0040d7fd: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x40d802u); f_005f2ba0();
    /* 0040d802: push 0x30d7ec */ { u32 v = 0x30d7ecu; r_esp -= 4; W32(r_esp, v); }
    /* 0040d807: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0040d80d: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x40d812u); f_005f2ba0();
    /* 0040d812: push 0x30d7ed */ { u32 v = 0x30d7edu; r_esp -= 4; W32(r_esp, v); }
    /* 0040d817: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0040d81d: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x40d822u); f_005f2ba0();
    /* 0040d822: push 0x30d7ee */ { u32 v = 0x30d7eeu; r_esp -= 4; W32(r_esp, v); }
    /* 0040d827: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0040d82d: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x40d832u); f_005f2ba0();
L_0040d832:; BB(0x0040d832);
    /* 0040d832: mov esp, ebp */ r_esp = r_ebp;
    /* 0040d834: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040d835: ret 4 */ FN_RET(0x0040d6b0); r_esp += 8; return;
}

void f_0040d840(void) /* sub_40D840 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040d840);
    /* 0040d840: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040d841: mov ebp, esp */ r_ebp = r_esp;
    /* 0040d843: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040d845: push 0x69d9fe */ { u32 v = 0x69d9feu; r_esp -= 4; W32(r_esp, v); }
    /* 0040d84a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0040d850: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040d851: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040d854: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0040d859: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0040d85b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040d85c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0040d85f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0040d865: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0040d868: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040d86b: cmp dword ptr [eax + 0x30], 0 */ {  u32 a = R32((u32)(r_eax+0x30u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040d86f: jne 0x40d8da */ if (!fZ) goto L_0040d8da;
L_0040d871:; BB(0x0040d871);
    /* 0040d871: push 0x1c4 */ { u32 v = 0x1c4u; r_esp -= 4; W32(r_esp, v); }
    /* 0040d876: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x40d87bu); f_00686d82();
    /* 0040d87b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040d87e: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0040d881: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0040d888: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040d88c: je 0x40d89b */ if (fZ) goto L_0040d89b;
L_0040d88e:; BB(0x0040d88e);
    /* 0040d88e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040d891: call 0x411530 */ r_esp -= 4; W32(r_esp, 0x40d896u); f_00411530();
    /* 0040d896: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0040d899: jmp 0x40d8a2 */ goto L_0040d8a2;
L_0040d89b:; BB(0x0040d89b);
    /* 0040d89b: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_0040d8a2:; BB(0x0040d8a2);
    /* 0040d8a2: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0040d8a5: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0040d8a8: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0040d8af: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040d8b2: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040d8b5: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 0040d8b8: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040d8bb: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 0040d8be: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040d8c1: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0040d8c4: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0040d8c6: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 0040d8c9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x40d8cbu); call_ind(t); }
    /* 0040d8cb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040d8cd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040d8cf: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040d8d2: mov ecx, dword ptr [ecx + 0x30] */ r_ecx = R32((u32)(r_ecx+0x30u));
    /* 0040d8d5: call 0x5f7340 */ r_esp -= 4; W32(r_esp, 0x40d8dau); f_005f7340();
L_0040d8da:; BB(0x0040d8da);
    /* 0040d8da: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040d8dd: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 0040d8e0: call 0x5f85d0 */ r_esp -= 4; W32(r_esp, 0x40d8e5u); f_005f85d0();
    /* 0040d8e5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040d8e8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0040d8ef: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040d8f0: mov esp, ebp */ r_esp = r_ebp;
    /* 0040d8f2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040d8f3: ret  */ FN_RET(0x0040d840); r_esp += 4; return;
}

void f_0040d900(void) /* sub_40D900 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040d900);
    /* 0040d900: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040d901: mov ebp, esp */ r_ebp = r_esp;
    /* 0040d903: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040d904: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0040d907: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040d90a: cmp dword ptr [eax + 0x30], 0 */ {  u32 a = R32((u32)(r_eax+0x30u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040d90e: je 0x40d925 */ if (fZ) goto L_0040d925;
L_0040d910:; BB(0x0040d910);
    /* 0040d910: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040d913: mov ecx, dword ptr [ecx + 0x30] */ r_ecx = R32((u32)(r_ecx+0x30u));
    /* 0040d916: call 0x5f8990 */ r_esp -= 4; W32(r_esp, 0x40d91bu); f_005f8990();
    /* 0040d91b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040d91e: mov dword ptr [edx + 0x30], 0 */ W32((u32)(r_edx+0x30u), 0x0u);
L_0040d925:; BB(0x0040d925);
    /* 0040d925: mov esp, ebp */ r_esp = r_ebp;
    /* 0040d927: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040d928: ret  */ FN_RET(0x0040d900); r_esp += 4; return;
}

void f_0040d930(void) /* sub_40D930 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040d930);
    /* 0040d930: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040d931: mov ebp, esp */ r_ebp = r_esp;
    /* 0040d933: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040d935: push 0x69da2f */ { u32 v = 0x69da2fu; r_esp -= 4; W32(r_esp, v); }
    /* 0040d93a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0040d940: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040d941: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040d944: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0040d949: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0040d94b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040d94c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0040d94f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0040d955: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0040d958: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040d95b: cmp dword ptr [eax + 0x34], 0 */ {  u32 a = R32((u32)(r_eax+0x34u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040d95f: jne 0x40d9cd */ if (!fZ) goto L_0040d9cd;
L_0040d961:; BB(0x0040d961);
    /* 0040d961: push 0x1bc */ { u32 v = 0x1bcu; r_esp -= 4; W32(r_esp, v); }
    /* 0040d966: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x40d96bu); f_00686d82();
    /* 0040d96b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040d96e: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0040d971: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0040d978: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040d97c: je 0x40d98b */ if (fZ) goto L_0040d98b;
L_0040d97e:; BB(0x0040d97e);
    /* 0040d97e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040d981: call 0x411760 */ r_esp -= 4; W32(r_esp, 0x40d986u); f_00411760();
    /* 0040d986: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0040d989: jmp 0x40d992 */ goto L_0040d992;
L_0040d98b:; BB(0x0040d98b);
    /* 0040d98b: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0040d992:; BB(0x0040d992);
    /* 0040d992: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040d995: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0040d998: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0040d99f: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040d9a2: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040d9a5: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 0040d9a8: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040d9ab: mov edx, dword ptr [ecx + 0x34] */ r_edx = R32((u32)(r_ecx+0x34u));
    /* 0040d9ae: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040d9b1: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 0040d9b4: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0040d9b6: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 0040d9b9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x40d9bbu); call_ind(t); }
    /* 0040d9bb: push 0x82 */ { u32 v = 0x82u; r_esp -= 4; W32(r_esp, v); }
    /* 0040d9c0: push -0xa */ { u32 v = 0xfffffff6u; r_esp -= 4; W32(r_esp, v); }
    /* 0040d9c2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040d9c5: mov ecx, dword ptr [ecx + 0x34] */ r_ecx = R32((u32)(r_ecx+0x34u));
    /* 0040d9c8: call 0x5f7340 */ r_esp -= 4; W32(r_esp, 0x40d9cdu); f_005f7340();
L_0040d9cd:; BB(0x0040d9cd);
    /* 0040d9cd: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040d9d0: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 0040d9d3: call 0x5f85d0 */ r_esp -= 4; W32(r_esp, 0x40d9d8u); f_005f85d0();
    /* 0040d9d8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040d9da: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040d9dd: call 0x40d6b0 */ r_esp -= 4; W32(r_esp, 0x40d9e2u); f_0040d6b0();
    /* 0040d9e2: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040d9e5: cmp dword ptr [eax + 0x28], 0 */ {  u32 a = R32((u32)(r_eax+0x28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040d9e9: jne 0x40da2f */ if (!fZ) goto L_0040da2f;
L_0040d9eb:; BB(0x0040d9eb);
    /* 0040d9eb: push 0x5c */ { u32 v = 0x5cu; r_esp -= 4; W32(r_esp, v); }
    /* 0040d9ed: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x40d9f2u); f_00686d82();
    /* 0040d9f2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040d9f5: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0040d9f8: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0040d9ff: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040da03: je 0x40da12 */ if (fZ) goto L_0040da12;
L_0040da05:; BB(0x0040da05);
    /* 0040da05: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0040da08: call 0x40fb80 */ r_esp -= 4; W32(r_esp, 0x40da0du); f_0040fb80();
    /* 0040da0d: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0040da10: jmp 0x40da19 */ goto L_0040da19;
L_0040da12:; BB(0x0040da12);
    /* 0040da12: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0040da19:; BB(0x0040da19);
    /* 0040da19: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0040da1c: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0040da1f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0040da26: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040da29: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040da2c: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
L_0040da2f:; BB(0x0040da2f);
    /* 0040da2f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040da31: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040da34: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0040da37: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040da3a: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0040da3d: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0040da3f: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0040da42: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x40da44u); call_ind(t); }
    /* 0040da44: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040da47: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0040da4a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040da4d: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0040da50: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0040da52: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0040da55: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x40da57u); call_ind(t); }
    /* 0040da57: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040da5a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0040da61: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040da62: mov esp, ebp */ r_esp = r_ebp;
    /* 0040da64: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040da65: ret  */ FN_RET(0x0040d930); r_esp += 4; return;
}

void f_0040da70(void) /* sub_40DA70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040da70);
    /* 0040da70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040da71: mov ebp, esp */ r_ebp = r_esp;
    /* 0040da73: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040da76: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0040da79: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040da7c: cmp dword ptr [eax + 0x34], 0 */ {  u32 a = R32((u32)(r_eax+0x34u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040da80: je 0x40da97 */ if (fZ) goto L_0040da97;
L_0040da82:; BB(0x0040da82);
    /* 0040da82: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040da85: mov ecx, dword ptr [ecx + 0x34] */ r_ecx = R32((u32)(r_ecx+0x34u));
    /* 0040da88: call 0x5f8990 */ r_esp -= 4; W32(r_esp, 0x40da8du); f_005f8990();
    /* 0040da8d: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040da90: mov dword ptr [edx + 0x34], 0 */ W32((u32)(r_edx+0x34u), 0x0u);
L_0040da97:; BB(0x0040da97);
    /* 0040da97: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040da99: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040da9c: call 0x40d6b0 */ r_esp -= 4; W32(r_esp, 0x40daa1u); f_0040d6b0();
    /* 0040daa1: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040daa4: cmp dword ptr [eax + 0x28], 0 */ {  u32 a = R32((u32)(r_eax+0x28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040daa8: je 0x40dae3 */ if (fZ) goto L_0040dae3;
L_0040daaa:; BB(0x0040daaa);
    /* 0040daaa: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040daad: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0040dab0: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0040dab3: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040dab6: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0040dab9: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040dabd: je 0x40dad2 */ if (fZ) goto L_0040dad2;
L_0040dabf:; BB(0x0040dabf);
    /* 0040dabf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040dac1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040dac4: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0040dac6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040dac9: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0040dacb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x40dacdu); call_ind(t); }
    /* 0040dacd: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0040dad0: jmp 0x40dad9 */ goto L_0040dad9;
L_0040dad2:; BB(0x0040dad2);
    /* 0040dad2: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_0040dad9:; BB(0x0040dad9);
    /* 0040dad9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040dadc: mov dword ptr [ecx + 0x28], 0 */ W32((u32)(r_ecx+0x28u), 0x0u);
L_0040dae3:; BB(0x0040dae3);
    /* 0040dae3: mov esp, ebp */ r_esp = r_ebp;
    /* 0040dae5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040dae6: ret  */ FN_RET(0x0040da70); r_esp += 4; return;
}

void f_0040daf0(void) /* sub_40DAF0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040daf0);
    /* 0040daf0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040daf1: mov ebp, esp */ r_ebp = r_esp;
    /* 0040daf3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040daf4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0040daf7: mov ecx, dword ptr [0x790320] */ r_ecx = R32((u32)(0x790320u));
    /* 0040dafd: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x40db02u); f_005da7b0();
    /* 0040db02: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0040db05: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040db07: je 0x40db28 */ if (fZ) goto L_0040db28;
L_0040db09:; BB(0x0040db09);
    /* 0040db09: mov ecx, dword ptr [0x790320] */ r_ecx = R32((u32)(0x790320u));
    /* 0040db0f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0040db11: mov ecx, dword ptr [0x790320] */ r_ecx = R32((u32)(0x790320u));
    /* 0040db17: mov eax, dword ptr [edx + 0x2d4] */ r_eax = R32((u32)(r_edx+0x2d4u));
    /* 0040db1d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x40db1fu); call_ind(t); }
    /* 0040db1f: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0040db22: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040db24: jne 0x40db28 */ if (!fZ) goto L_0040db28;
L_0040db26:; BB(0x0040db26);
    /* 0040db26: jmp 0x40db65 */ goto L_0040db65;
L_0040db28:; BB(0x0040db28);
    /* 0040db28: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 0040db2e: call 0x4184a0 */ r_esp -= 4; W32(r_esp, 0x40db33u); f_004184a0();
    /* 0040db33: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0040db36: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040db38: jne 0x40db53 */ if (!fZ) goto L_0040db53;
L_0040db3a:; BB(0x0040db3a);
    /* 0040db3a: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0040db40: call 0x5df650 */ r_esp -= 4; W32(r_esp, 0x40db45u); f_005df650();
    /* 0040db45: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040db46: mov ecx, dword ptr [0x790328] */ r_ecx = R32((u32)(0x790328u));
    /* 0040db4c: call 0x4122e0 */ r_esp -= 4; W32(r_esp, 0x40db51u); f_004122e0();
    /* 0040db51: jmp 0x40db65 */ goto L_0040db65;
L_0040db53:; BB(0x0040db53);
    /* 0040db53: push 0xaa */ { u32 v = 0xaau; r_esp -= 4; W32(r_esp, v); }
    /* 0040db58: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040db5a: mov ecx, dword ptr [0x790320] */ r_ecx = R32((u32)(0x790320u));
    /* 0040db60: call 0x5db8c0 */ r_esp -= 4; W32(r_esp, 0x40db65u); f_005db8c0();
L_0040db65:; BB(0x0040db65);
    /* 0040db65: mov esp, ebp */ r_esp = r_ebp;
    /* 0040db67: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040db68: ret  */ FN_RET(0x0040daf0); r_esp += 4; return;
}

void f_0040db70(void) /* sub_40DB70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040db70);
    /* 0040db70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040db71: mov ebp, esp */ r_ebp = r_esp;
    /* 0040db73: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040db75: push 0x69da55 */ { u32 v = 0x69da55u; r_esp -= 4; W32(r_esp, v); }
    /* 0040db7a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0040db80: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040db81: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040db84: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0040db89: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0040db8b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040db8c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0040db8f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0040db95: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0040db98: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040db9b: cmp dword ptr [eax + 0x38], 0 */ {  u32 a = R32((u32)(r_eax+0x38u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040db9f: jne 0x40dc0d */ if (!fZ) goto L_0040dc0d;
L_0040dba1:; BB(0x0040dba1);
    /* 0040dba1: push 0x1bc */ { u32 v = 0x1bcu; r_esp -= 4; W32(r_esp, v); }
    /* 0040dba6: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x40dbabu); f_00686d82();
    /* 0040dbab: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040dbae: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0040dbb1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0040dbb8: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040dbbc: je 0x40dbcb */ if (fZ) goto L_0040dbcb;
L_0040dbbe:; BB(0x0040dbbe);
    /* 0040dbbe: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040dbc1: call 0x411d70 */ r_esp -= 4; W32(r_esp, 0x40dbc6u); f_00411d70();
    /* 0040dbc6: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0040dbc9: jmp 0x40dbd2 */ goto L_0040dbd2;
L_0040dbcb:; BB(0x0040dbcb);
    /* 0040dbcb: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_0040dbd2:; BB(0x0040dbd2);
    /* 0040dbd2: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0040dbd5: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0040dbd8: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0040dbdf: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040dbe2: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040dbe5: mov dword ptr [edx + 0x38], eax */ W32((u32)(r_edx+0x38u), r_eax);
    /* 0040dbe8: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040dbeb: mov edx, dword ptr [ecx + 0x38] */ r_edx = R32((u32)(r_ecx+0x38u));
    /* 0040dbee: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040dbf1: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0040dbf4: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0040dbf6: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 0040dbf9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x40dbfbu); call_ind(t); }
    /* 0040dbfb: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0040dbfd: push 0x17c */ { u32 v = 0x17cu; r_esp -= 4; W32(r_esp, v); }
    /* 0040dc02: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040dc05: mov ecx, dword ptr [ecx + 0x38] */ r_ecx = R32((u32)(r_ecx+0x38u));
    /* 0040dc08: call 0x5f7320 */ r_esp -= 4; W32(r_esp, 0x40dc0du); f_005f7320();
L_0040dc0d:; BB(0x0040dc0d);
    /* 0040dc0d: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040dc10: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 0040dc13: call 0x411e70 */ r_esp -= 4; W32(r_esp, 0x40dc18u); f_00411e70();
    /* 0040dc18: mov eax, dword ptr [0x790328] */ r_eax = R32((u32)(0x790328u));
    /* 0040dc1d: movzx ecx, byte ptr [eax + 7] */ r_ecx = (u32)R8((u32)(r_eax+0x7u));
    /* 0040dc21: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040dc23: je 0x40dc30 */ if (fZ) goto L_0040dc30;
L_0040dc25:; BB(0x0040dc25);
    /* 0040dc25: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040dc28: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 0040dc2b: call 0x5f85d0 */ r_esp -= 4; W32(r_esp, 0x40dc30u); f_005f85d0();
L_0040dc30:; BB(0x0040dc30);
    /* 0040dc30: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040dc33: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0040dc3a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040dc3b: mov esp, ebp */ r_esp = r_ebp;
    /* 0040dc3d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040dc3e: ret  */ FN_RET(0x0040db70); r_esp += 4; return;
}

void f_0040dc40(void) /* sub_40DC40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040dc40);
    /* 0040dc40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040dc41: mov ebp, esp */ r_ebp = r_esp;
    /* 0040dc43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040dc44: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0040dc47: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040dc4a: cmp dword ptr [eax + 0x38], 0 */ {  u32 a = R32((u32)(r_eax+0x38u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040dc4e: je 0x40dc65 */ if (fZ) goto L_0040dc65;
L_0040dc50:; BB(0x0040dc50);
    /* 0040dc50: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040dc53: mov ecx, dword ptr [ecx + 0x38] */ r_ecx = R32((u32)(r_ecx+0x38u));
    /* 0040dc56: call 0x5f8990 */ r_esp -= 4; W32(r_esp, 0x40dc5bu); f_005f8990();
    /* 0040dc5b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040dc5e: mov dword ptr [edx + 0x38], 0 */ W32((u32)(r_edx+0x38u), 0x0u);
L_0040dc65:; BB(0x0040dc65);
    /* 0040dc65: mov esp, ebp */ r_esp = r_ebp;
    /* 0040dc67: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040dc68: ret  */ FN_RET(0x0040dc40); r_esp += 4; return;
}

void f_0040de70(void) /* sub_40DE70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040de70);
    /* 0040de70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040de71: mov ebp, esp */ r_ebp = r_esp;
    /* 0040de73: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040de75: push 0x69dab4 */ { u32 v = 0x69dab4u; r_esp -= 4; W32(r_esp, v); }
    /* 0040de7a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0040de80: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040de81: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040de84: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0040de89: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0040de8b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040de8c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0040de8f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0040de95: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 0040de98: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0040de9b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0040de9e: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 0040dea1: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0040dea8: jmp 0x40deb3 */ goto L_0040deb3;
L_0040deaa:; BB(0x0040deaa);
    /* 0040deaa: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040dead: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040deb0: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_0040deb3:; BB(0x0040deb3);
    /* 0040deb3: cmp dword ptr [ebp - 0x10], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040deb7: jge 0x40df64 */ if ((fS==fO)) goto L_0040df64;
L_0040debd:; BB(0x0040debd);
    /* 0040debd: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 0040dec4: jmp 0x40decf */ goto L_0040decf;
L_0040dec6:; BB(0x0040dec6);
    /* 0040dec6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0040dec9: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0040decc: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_0040decf:; BB(0x0040decf);
    /* 0040decf: cmp dword ptr [ebp - 0x14], 0x16 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040ded3: jge 0x40df5f */ if ((fS==fO)) goto L_0040df5f;
L_0040ded9:; BB(0x0040ded9);
    /* 0040ded9: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 0040dede: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x40dee3u); f_00686d82();
    /* 0040dee3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040dee6: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0040dee9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0040def0: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040def4: je 0x40df03 */ if (fZ) goto L_0040df03;
L_0040def6:; BB(0x0040def6);
    /* 0040def6: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0040def9: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x40defeu); f_005eaaf0();
    /* 0040defe: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0040df01: jmp 0x40df0a */ goto L_0040df0a;
L_0040df03:; BB(0x0040df03);
    /* 0040df03: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_0040df0a:; BB(0x0040df0a);
    /* 0040df0a: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0040df0d: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0040df10: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0040df17: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040df1a: imul edx, edx, 0x58 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x58u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040df1d: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0040df20: lea ecx, [eax + edx + 0x28] */ r_ecx = (u32)(r_eax+r_edx+0x28u);
    /* 0040df24: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040df27: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040df2a: mov dword ptr [ecx + edx*4], eax */ W32((u32)(r_ecx+r_edx*4), r_eax);
    /* 0040df2d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040df30: imul ecx, ecx, 0x58 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x58u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040df33: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0040df36: lea eax, [edx + ecx + 0x28] */ r_eax = (u32)(r_edx+r_ecx+0x28u);
    /* 0040df3a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040df3d: mov edx, dword ptr [eax + ecx*4] */ r_edx = R32((u32)(r_eax+r_ecx*4));
    /* 0040df40: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040df43: imul eax, eax, 0x58 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x58u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040df46: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0040df49: lea eax, [ecx + eax + 0x28] */ r_eax = (u32)(r_ecx+r_eax+0x28u);
    /* 0040df4d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040df50: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 0040df53: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0040df55: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0040df58: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x40df5au); call_ind(t); }
    /* 0040df5a: jmp 0x40dec6 */ goto L_0040dec6;
L_0040df5f:; BB(0x0040df5f);
    /* 0040df5f: jmp 0x40deaa */ goto L_0040deaa;
L_0040df64:; BB(0x0040df64);
    /* 0040df64: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0040df6b: jmp 0x40df76 */ goto L_0040df76;
L_0040df6d:; BB(0x0040df6d);
    /* 0040df6d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040df70: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0040df73: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_0040df76:; BB(0x0040df76);
    /* 0040df76: cmp dword ptr [ebp - 0x10], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040df7a: jge 0x40e079 */ if ((fS==fO)) goto L_0040e079;
L_0040df80:; BB(0x0040df80);
    /* 0040df80: push 0x1d4 */ { u32 v = 0x1d4u; r_esp -= 4; W32(r_esp, v); }
    /* 0040df85: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x40df8au); f_00686d82();
    /* 0040df8a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040df8d: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0040df90: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0040df97: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040df9b: je 0x40dfaa */ if (fZ) goto L_0040dfaa;
L_0040df9d:; BB(0x0040df9d);
    /* 0040df9d: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040dfa0: call 0x5cd360 */ r_esp -= 4; W32(r_esp, 0x40dfa5u); f_005cd360();
    /* 0040dfa5: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0040dfa8: jmp 0x40dfb1 */ goto L_0040dfb1;
L_0040dfaa:; BB(0x0040dfaa);
    /* 0040dfaa: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_0040dfb1:; BB(0x0040dfb1);
    /* 0040dfb1: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0040dfb4: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0040dfb7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0040dfbe: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040dfc1: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0040dfc4: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040dfc7: mov dword ptr [ecx + eax*4 + 8], edx */ W32((u32)(r_ecx+r_eax*4+0x8u), r_edx);
    /* 0040dfcb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040dfcd: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 0040dfcf: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 0040dfd1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040dfd3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040dfd5: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0040dfd7: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 0040dfd9: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0040dfdb: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0040dfe0: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040dfe3: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0040dfe6: mov ecx, dword ptr [ecx + eax*4 + 8] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x8u));
    /* 0040dfea: call 0x5ec8f0 */ r_esp -= 4; W32(r_esp, 0x40dfefu); f_005ec8f0();
    /* 0040dfef: push 0xcc */ { u32 v = 0xccu; r_esp -= 4; W32(r_esp, v); }
    /* 0040dff4: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040dff9: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040dffe: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040e001: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0040e004: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 0040e008: call 0x5ee8c0 */ r_esp -= 4; W32(r_esp, 0x40e00du); f_005ee8c0();
    /* 0040e00d: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 0040e012: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x40e017u); f_00686d82();
    /* 0040e017: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040e01a: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0040e01d: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0040e024: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040e028: je 0x40e037 */ if (fZ) goto L_0040e037;
L_0040e02a:; BB(0x0040e02a);
    /* 0040e02a: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0040e02d: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x40e032u); f_005eaaf0();
    /* 0040e032: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0040e035: jmp 0x40e03e */ goto L_0040e03e;
L_0040e037:; BB(0x0040e037);
    /* 0040e037: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_0040e03e:; BB(0x0040e03e);
    /* 0040e03e: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0040e041: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0040e044: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0040e04b: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040e04e: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0040e051: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0040e054: mov dword ptr [eax + edx*4 + 0x18], ecx */ W32((u32)(r_eax+r_edx*4+0x18u), r_ecx);
    /* 0040e058: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040e05a: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 0040e05c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040e05e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040e060: push 0x13b2 */ { u32 v = 0x13b2u; r_esp -= 4; W32(r_esp, v); }
    /* 0040e065: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040e068: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0040e06b: mov ecx, dword ptr [eax + edx*4 + 0x18] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x18u));
    /* 0040e06f: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x40e074u); f_005eae80();
    /* 0040e074: jmp 0x40df6d */ goto L_0040df6d;
L_0040e079:; BB(0x0040e079);
    /* 0040e079: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040e07c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0040e083: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040e084: mov esp, ebp */ r_esp = r_ebp;
    /* 0040e086: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040e087: ret 4 */ FN_RET(0x0040de70); r_esp += 8; return;
}

