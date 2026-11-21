#include "protos.h"

void f_0060d010(void) /* Window::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0060d010);
    /* 0060d010: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060d011: mov ebp, esp */ r_ebp = r_esp;
    /* 0060d013: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060d015: push 0x6aadfb */ { u32 v = 0x6aadfbu; r_esp -= 4; W32(r_esp, v); }
    /* 0060d01a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060d020: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060d021: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060d024: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0060d029: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0060d02b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060d02c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0060d02f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0060d035: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0060d038: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0060d03b: mov dword ptr [eax], 0x6d82a4 */ W32((u32)(r_eax), 0x6d82a4u);
    /* 0060d041: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060d048: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0060d04b: movzx edx, byte ptr [ecx + 0x94] */ r_edx = (u32)R8((u32)(r_ecx+0x94u));
    /* 0060d052: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060d054: je 0x60d08f */ if (fZ) goto L_0060d08f;
L_0060d056:; BB(0x0060d056);
    /* 0060d056: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060d058: call dword ptr [0x6b2480] */ { u32 t = R32((u32)(0x6b2480u)); r_esp -= 4; W32(r_esp, 0x60d05eu); call_ind(t); }
    /* 0060d05e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0060d060: call dword ptr [0x6b2480] */ { u32 t = R32((u32)(0x6b2480u)); r_esp -= 4; W32(r_esp, 0x60d066u); call_ind(t); }
    /* 0060d066: mov eax, dword ptr [0x15e55d8] */ r_eax = R32((u32)(0x15e55d8u));
    /* 0060d06b: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0060d06e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0060d071: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060d072: call 0x68731e */ r_esp -= 4; W32(r_esp, 0x60d077u); f_0068731e();
    /* 0060d077: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060d07a: mov edx, dword ptr [0x15e55dc] */ r_edx = R32((u32)(0x15e55dcu));
    /* 0060d080: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0060d083: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0060d086: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060d087: call 0x68731e */ r_esp -= 4; W32(r_esp, 0x60d08cu); f_0068731e();
    /* 0060d08c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0060d08f:; BB(0x0060d08f);
    /* 0060d08f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060d091: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060d093: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0060d096: mov edx, dword ptr [ecx + 0x8c] */ r_edx = R32((u32)(r_ecx+0x8cu));
    /* 0060d09c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060d09d: call dword ptr [0x6b240c] */ { u32 t = R32((u32)(0x6b240cu)); r_esp -= 4; W32(r_esp, 0x60d0a3u); call_ind(t); }
    /* 0060d0a3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060d0a5: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0060d0a7: push 0x7952c4 */ { u32 v = 0x7952c4u; r_esp -= 4; W32(r_esp, v); }
    /* 0060d0ac: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0060d0af: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 0060d0b5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060d0b6: call dword ptr [0x6b2410] */ { u32 t = R32((u32)(0x6b2410u)); r_esp -= 4; W32(r_esp, 0x60d0bcu); call_ind(t); }
    /* 0060d0bc: mov byte ptr [0x15e55d2], 1 */ W8((u32)(0x15e55d2u), 0x1u);
    /* 0060d0c3: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0060d0c6: call 0x60e300 */ r_esp -= 4; W32(r_esp, 0x60d0cbu); f_0060e300();
    /* 0060d0cb: mov byte ptr [0x15e55d2], 0 */ W8((u32)(0x15e55d2u), 0x0u);
    /* 0060d0d2: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0060d0d5: cmp dword ptr [edx + 0xc0], 0 */ {  u32 a = R32((u32)(r_edx+0xc0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060d0dc: je 0x60d0ee */ if (fZ) goto L_0060d0ee;
L_0060d0de:; BB(0x0060d0de);
    /* 0060d0de: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0060d0e1: mov ecx, dword ptr [eax + 0xc0] */ r_ecx = R32((u32)(r_eax+0xc0u));
    /* 0060d0e7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060d0e8: call dword ptr [0x6b2414] */ { u32 t = R32((u32)(0x6b2414u)); r_esp -= 4; W32(r_esp, 0x60d0eeu); call_ind(t); }
L_0060d0ee:; BB(0x0060d0ee);
    /* 0060d0ee: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0060d0f1: mov eax, dword ptr [edx + 0xbc] */ r_eax = R32((u32)(r_edx+0xbcu));
    /* 0060d0f7: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0060d0fa: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0060d0fd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060d0fe: call 0x68731e */ r_esp -= 4; W32(r_esp, 0x60d103u); f_0068731e();
    /* 0060d103: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060d106: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0060d10d: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0060d110: call 0x6132a0 */ r_esp -= 4; W32(r_esp, 0x60d115u); f_006132a0();
    /* 0060d115: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060d118: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060d11f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060d120: mov esp, ebp */ r_esp = r_ebp;
    /* 0060d122: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060d123: ret  */ FN_RET(0x0060d010); r_esp += 4; return;
}

void f_0060d130(void) /* Window::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0060d130);
    /* 0060d130: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060d131: mov ebp, esp */ r_ebp = r_esp;
    /* 0060d133: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060d136: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0060d137: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0060d13a: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0060d13d: call 0x6135c0 */ r_esp -= 4; W32(r_esp, 0x60d142u); f_006135c0();
    /* 0060d142: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 0060d145: cmp dword ptr [ebp + 8], eax */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060d148: jne 0x60d163 */ if (!fZ) goto L_0060d163;
L_0060d14a:; BB(0x0060d14a);
    /* 0060d14a: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0060d14d: call 0x6135e0 */ r_esp -= 4; W32(r_esp, 0x60d152u); f_006135e0();
    /* 0060d152: movzx ecx, ax */ r_ecx = (u32)(u16)r_eax;
    /* 0060d155: cmp dword ptr [ebp + 0xc], ecx */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060d158: jne 0x60d163 */ if (!fZ) goto L_0060d163;
L_0060d15a:; BB(0x0060d15a);
    /* 0060d15a: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0060d161: jmp 0x60d16a */ goto L_0060d16a;
L_0060d163:; BB(0x0060d163);
    /* 0060d163: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
L_0060d16a:; BB(0x0060d16a);
    /* 0060d16a: mov dl, byte ptr [ebp - 0x2c] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffd4u))) & 0xffu);
    /* 0060d16d: mov byte ptr [ebp - 1], dl */ W8((u32)(r_ebp+0xffffffffu), (u8)r_edx);
    /* 0060d170: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0060d173: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060d174: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0060d177: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060d178: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0060d17b: call 0x613360 */ r_esp -= 4; W32(r_esp, 0x60d180u); f_00613360();
    /* 0060d180: movzx edx, byte ptr [ebp - 1] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 0060d184: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060d186: jne 0x60d18d */ if (!fZ) goto L_0060d18d;
L_0060d188:; BB(0x0060d188);
    /* 0060d188: jmp 0x60d4fd */ goto L_0060d4fd;
L_0060d18d:; BB(0x0060d18d);
    /* 0060d18d: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0060d190: mov cl, byte ptr [eax + 0x95] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x95u))) & 0xffu);
    /* 0060d196: mov byte ptr [ebp - 0x11], cl */ W8((u32)(r_ebp+0xffffffefu), (u8)r_ecx);
    /* 0060d199: mov byte ptr [0x15e55d2], 1 */ W8((u32)(0x15e55d2u), 0x1u);
    /* 0060d1a0: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0060d1a3: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0060d1a5: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0060d1a8: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 0060d1ab: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x60d1adu); call_ind(t); }
    /* 0060d1ad: mov al, byte ptr [0x795f97] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0x795f97u))) & 0xffu);
    /* 0060d1b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060d1b3: push 0x6d82f0 */ { u32 v = 0x6d82f0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060d1b8: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 0060d1be: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 0060d1c1: call 0x607900 */ r_esp -= 4; W32(r_esp, 0x60d1c6u); f_00607900();
    /* 0060d1c6: mov byte ptr [0x795f97], al */ W8((u32)(0x795f97u), (u8)r_eax);
    /* 0060d1cb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060d1cd: call dword ptr [0x6b23fc] */ { u32 t = R32((u32)(0x6b23fcu)); r_esp -= 4; W32(r_esp, 0x60d1d3u); call_ind(t); }
    /* 0060d1d3: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0060d1d6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0060d1d8: call dword ptr [0x6b23fc] */ { u32 t = R32((u32)(0x6b23fcu)); r_esp -= 4; W32(r_esp, 0x60d1deu); call_ind(t); }
    /* 0060d1de: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0060d1e1: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060d1e4: cmp edx, dword ptr [ebp + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060d1e7: jg 0x60d1fa */ if ((!fZ&&fS==fO)) goto L_0060d1fa;
L_0060d1e9:; BB(0x0060d1e9);
    /* 0060d1e9: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0060d1ec: mov byte ptr [eax + 0x96], 1 */ W8((u32)(r_eax+0x96u), 0x1u);
    /* 0060d1f3: mov byte ptr [0x795f97], 1 */ W8((u32)(0x795f97u), 0x1u);
L_0060d1fa:; BB(0x0060d1fa);
    /* 0060d1fa: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0060d1fd: mov dword ptr [ecx + 0x98], 0x20 */ W32((u32)(r_ecx+0x98u), 0x20u);
    /* 0060d207: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0060d20a: mov dword ptr [edx + 0x9c], 0x60e5e0 */ W32((u32)(r_edx+0x9cu), 0x60e5e0u);
    /* 0060d214: push 0x795738 */ { u32 v = 0x795738u; r_esp -= 4; W32(r_esp, v); }
    /* 0060d219: call 0x686ecc */ r_esp -= 4; W32(r_esp, 0x60d21eu); f_00686ecc();
    /* 0060d21e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060d221: mov esi, eax */ r_esi = r_eax;
    /* 0060d223: push 0x6d82e8 */ { u32 v = 0x6d82e8u; r_esp -= 4; W32(r_esp, v); }
    /* 0060d228: call 0x686ecc */ r_esp -= 4; W32(r_esp, 0x60d22du); f_00686ecc();
    /* 0060d22d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060d230: lea eax, [esi + eax + 1] */ r_eax = (u32)(r_esi+r_eax+0x1u);
    /* 0060d234: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060d235: call 0x686c60 */ r_esp -= 4; W32(r_esp, 0x60d23au); f_00686c60();
    /* 0060d23a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060d23d: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0060d240: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0060d243: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0060d246: push 0x795738 */ { u32 v = 0x795738u; r_esp -= 4; W32(r_esp, v); }
    /* 0060d24b: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0060d24e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060d24f: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x60d254u); f_00686d8e();
    /* 0060d254: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060d257: push 0x6d82e8 */ { u32 v = 0x6d82e8u; r_esp -= 4; W32(r_esp, v); }
    /* 0060d25c: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0060d25f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060d260: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x60d265u); f_00686ec6();
    /* 0060d265: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060d268: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0060d26b: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0060d26e: mov dword ptr [ecx + 0xbc], edx */ W32((u32)(r_ecx+0xbcu), r_edx);
    /* 0060d274: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0060d27b: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0060d27e: mov dword ptr [eax + 0xa0], 0 */ W32((u32)(r_eax+0xa0u), 0x0u);
    /* 0060d288: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0060d28b: mov dword ptr [ecx + 0xa4], 4 */ W32((u32)(r_ecx+0xa4u), 0x4u);
    /* 0060d295: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0060d298: mov eax, dword ptr [0x16306b4] */ r_eax = R32((u32)(0x16306b4u));
    /* 0060d29d: mov dword ptr [edx + 0xa8], eax */ W32((u32)(r_edx+0xa8u), r_eax);
    /* 0060d2a3: push 0x63 */ { u32 v = 0x63u; r_esp -= 4; W32(r_esp, v); }
    /* 0060d2a5: mov ecx, dword ptr [0x16306b4] */ r_ecx = R32((u32)(0x16306b4u));
    /* 0060d2ab: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060d2ac: call dword ptr [0x6b2400] */ { u32 t = R32((u32)(0x6b2400u)); r_esp -= 4; W32(r_esp, 0x60d2b2u); call_ind(t); }
    /* 0060d2b2: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0060d2b5: mov dword ptr [edx + 0xac], eax */ W32((u32)(r_edx+0xacu), r_eax);
    /* 0060d2bb: push 0x7f00 */ { u32 v = 0x7f00u; r_esp -= 4; W32(r_esp, v); }
    /* 0060d2c0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060d2c2: call dword ptr [0x6b2404] */ { u32 t = R32((u32)(0x6b2404u)); r_esp -= 4; W32(r_esp, 0x60d2c8u); call_ind(t); }
    /* 0060d2c8: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0060d2cb: mov dword ptr [ecx + 0xb0], eax */ W32((u32)(r_ecx+0xb0u), r_eax);
    /* 0060d2d1: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0060d2d3: call dword ptr [0x6b2000] */ { u32 t = R32((u32)(0x6b2000u)); r_esp -= 4; W32(r_esp, 0x60d2d9u); call_ind(t); }
    /* 0060d2d9: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0060d2dc: mov dword ptr [edx + 0xb4], eax */ W32((u32)(r_edx+0xb4u), r_eax);
    /* 0060d2e2: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0060d2e5: mov dword ptr [eax + 0xb8], 0 */ W32((u32)(r_eax+0xb8u), 0x0u);
    /* 0060d2ef: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0060d2f2: add ecx, 0x98 */ {  u32 a = r_ecx; u32 b = 0x98u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0060d2f8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060d2f9: call dword ptr [0x6b2408] */ { u32 t = R32((u32)(0x6b2408u)); r_esp -= 4; W32(r_esp, 0x60d2ffu); call_ind(t); }
    /* 0060d2ff: mov byte ptr [0x15e55d2], 1 */ W8((u32)(0x15e55d2u), 0x1u);
    /* 0060d306: movzx edx, byte ptr [0x795f97] */ r_edx = (u32)R8((u32)(0x795f97u));
    /* 0060d30d: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060d310: je 0x60d31a */ if (fZ) goto L_0060d31a;
L_0060d312:; BB(0x0060d312);
    /* 0060d312: movzx eax, byte ptr [ebp - 0x11] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffefu));
    /* 0060d316: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060d318: je 0x60d32f */ if (fZ) goto L_0060d32f;
L_0060d31a:; BB(0x0060d31a);
    /* 0060d31a: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0060d31d: movzx edx, byte ptr [ecx + 0x5c] */ r_edx = (u32)R8((u32)(r_ecx+0x5cu));
    /* 0060d321: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060d323: jne 0x60d32f */ if (!fZ) goto L_0060d32f;
L_0060d325:; BB(0x0060d325);
    /* 0060d325: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0060d328: call 0x60e050 */ r_esp -= 4; W32(r_esp, 0x60d32du); f_0060e050();
    /* 0060d32d: jmp 0x60d339 */ goto L_0060d339;
L_0060d32f:; BB(0x0060d32f);
    /* 0060d32f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0060d331: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0060d334: call 0x60dd10 */ r_esp -= 4; W32(r_esp, 0x60d339u); f_0060dd10();
L_0060d339:; BB(0x0060d339);
    /* 0060d339: mov byte ptr [0x15e55d2], 0 */ W8((u32)(0x15e55d2u), 0x0u);
    /* 0060d340: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0060d343: add eax, 0x28 */ {  u32 a = r_eax; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0060d346: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060d347: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0060d34a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0060d34c: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0060d34f: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 0060d352: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x60d354u); call_ind(t); }
    /* 0060d354: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0060d357: call 0x60d6a0 */ r_esp -= 4; W32(r_esp, 0x60d35cu); f_0060d6a0();
    /* 0060d35c: cmp dword ptr [0x15e51c0], 0xb13 */ {  u32 a = R32((u32)(0x15e51c0u)); u32 b = 0xb13u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060d366: je 0x60d3fa */ if (fZ) goto L_0060d3fa;
L_0060d36c:; BB(0x0060d36c);
    /* 0060d36c: push 0x400 */ { u32 v = 0x400u; r_esp -= 4; W32(r_esp, v); }
    /* 0060d371: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060d373: push 0x15e51d0 */ { u32 v = 0x15e51d0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060d378: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x60d37du); f_00686fa2();
    /* 0060d37d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060d380: mov dword ptr [0x15e51a8], 0x28 */ W32((u32)(0x15e51a8u), 0x28u);
    /* 0060d38a: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0060d38d: call 0x613580 */ r_esp -= 4; W32(r_esp, 0x60d392u); f_00613580();
    /* 0060d392: movzx ecx, ax */ r_ecx = (u32)(u16)r_eax;
    /* 0060d395: mov dword ptr [0x15e51ac], ecx */ W32((u32)(0x15e51acu), r_ecx);
    /* 0060d39b: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0060d39e: call 0x6135a0 */ r_esp -= 4; W32(r_esp, 0x60d3a3u); f_006135a0();
    /* 0060d3a3: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 0060d3a6: mov dword ptr [0x15e51b0], edx */ W32((u32)(0x15e51b0u), r_edx);
    /* 0060d3ac: mov word ptr [0x15e51b4], 1 */ W16((u32)(0x15e51b4u), 0x1u);
    /* 0060d3b5: mov word ptr [0x15e51b6], 0x10 */ W16((u32)(0x15e51b6u), 0x10u);
    /* 0060d3be: mov dword ptr [0x15e51b8], 0 */ W32((u32)(0x15e51b8u), 0x0u);
    /* 0060d3c8: mov dword ptr [0x15e51bc], 0 */ W32((u32)(0x15e51bcu), 0x0u);
    /* 0060d3d2: mov dword ptr [0x15e51c0], 0xb13 */ W32((u32)(0x15e51c0u), 0xb13u);
    /* 0060d3dc: mov dword ptr [0x15e51c4], 0xb13 */ W32((u32)(0x15e51c4u), 0xb13u);
    /* 0060d3e6: mov dword ptr [0x15e51c8], 0 */ W32((u32)(0x15e51c8u), 0x0u);
    /* 0060d3f0: mov dword ptr [0x15e51cc], 0 */ W32((u32)(0x15e51ccu), 0x0u);
L_0060d3fa:; BB(0x0060d3fa);
    /* 0060d3fa: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0060d3fc: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0060d3fe: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060d400: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0060d403: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 0060d409: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060d40a: call dword ptr [0x6b2478] */ { u32 t = R32((u32)(0x6b2478u)); r_esp -= 4; W32(r_esp, 0x60d410u); call_ind(t); }
    /* 0060d410: push 0x200 */ { u32 v = 0x200u; r_esp -= 4; W32(r_esp, v); }
    /* 0060d415: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060d417: call dword ptr [0x6b247c] */ { u32 t = R32((u32)(0x6b247cu)); r_esp -= 4; W32(r_esp, 0x60d41du); call_ind(t); }
    /* 0060d41d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0060d41f: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0060d421: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0060d423: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0060d426: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 0060d42c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060d42d: call dword ptr [0x6b2478] */ { u32 t = R32((u32)(0x6b2478u)); r_esp -= 4; W32(r_esp, 0x60d433u); call_ind(t); }
    /* 0060d433: push 0x200 */ { u32 v = 0x200u; r_esp -= 4; W32(r_esp, v); }
    /* 0060d438: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0060d43a: call dword ptr [0x6b247c] */ { u32 t = R32((u32)(0x6b247cu)); r_esp -= 4; W32(r_esp, 0x60d440u); call_ind(t); }
    /* 0060d440: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0060d442: call 0x686c60 */ r_esp -= 4; W32(r_esp, 0x60d447u); f_00686c60();
    /* 0060d447: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060d44a: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0060d44d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060d450: mov dword ptr [0x15e55d8], ecx */ W32((u32)(0x15e55d8u), r_ecx);
    /* 0060d456: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0060d458: call 0x686c60 */ r_esp -= 4; W32(r_esp, 0x60d45du); f_00686c60();
    /* 0060d45d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060d460: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0060d463: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060d466: mov dword ptr [0x15e55dc], edx */ W32((u32)(0x15e55dcu), r_edx);
    /* 0060d46c: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0060d473: jmp 0x60d47e */ goto L_0060d47e;
L_0060d475:; BB(0x0060d475);
    /* 0060d475: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060d478: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0060d47b: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_0060d47e:; BB(0x0060d47e);
    /* 0060d47e: cmp dword ptr [ebp - 0xc], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060d482: jge 0x60d4fd */ if ((fS==fO)) goto L_0060d4fd;
L_0060d484:; BB(0x0060d484);
    /* 0060d484: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060d487: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0060d48a: mov edx, dword ptr [0x15e55dc] */ r_edx = R32((u32)(0x15e55dcu));
    /* 0060d490: mov dword ptr [edx + ecx], 0x8000 */ W32((u32)(r_edx+r_ecx), 0x8000u);
    /* 0060d497: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060d49a: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0060d49d: mov ecx, dword ptr [0x15e55dc] */ r_ecx = R32((u32)(0x15e55dcu));
    /* 0060d4a3: mov dword ptr [ecx + eax + 4], 0x8000 */ W32((u32)(r_ecx+r_eax+0x4u), 0x8000u);
    /* 0060d4ab: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060d4ae: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0060d4b1: mov eax, dword ptr [0x15e55dc] */ r_eax = R32((u32)(0x15e55dcu));
    /* 0060d4b6: mov dword ptr [eax + edx + 0xc], 0 */ W32((u32)(r_eax+r_edx+0xcu), 0x0u);
    /* 0060d4be: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060d4c1: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0060d4c4: mov edx, dword ptr [0x15e55d8] */ r_edx = R32((u32)(0x15e55d8u));
    /* 0060d4ca: mov dword ptr [edx + ecx], 0x8000 */ W32((u32)(r_edx+r_ecx), 0x8000u);
    /* 0060d4d1: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060d4d4: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0060d4d7: mov ecx, dword ptr [0x15e55d8] */ r_ecx = R32((u32)(0x15e55d8u));
    /* 0060d4dd: mov dword ptr [ecx + eax + 4], 0x8000 */ W32((u32)(r_ecx+r_eax+0x4u), 0x8000u);
    /* 0060d4e5: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060d4e8: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0060d4eb: mov eax, dword ptr [0x15e55d8] */ r_eax = R32((u32)(0x15e55d8u));
    /* 0060d4f0: mov dword ptr [eax + edx + 0xc], 0 */ W32((u32)(r_eax+r_edx+0xcu), 0x0u);
    /* 0060d4f8: jmp 0x60d475 */ goto L_0060d475;
L_0060d4fd:; BB(0x0060d4fd);
    /* 0060d4fd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0060d4fe: mov esp, ebp */ r_esp = r_ebp;
    /* 0060d500: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060d501: ret 8 */ FN_RET(0x0060d130); r_esp += 12; return;
}

void f_0060d510(void) /* Window::vfunc2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0060d510);
    /* 0060d510: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060d511: mov ebp, esp */ r_ebp = r_esp;
    /* 0060d513: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060d516: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0060d517: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 0060d51a: mov dword ptr [ebp - 0x30], 0x2c */ W32((u32)(r_ebp+0xffffffd0u), 0x2cu);
    /* 0060d521: mov dword ptr [ebp - 0x28], 2 */ W32((u32)(r_ebp+0xffffffd8u), 0x2u);
    /* 0060d528: lea eax, [ebp - 0x30] */ r_eax = (u32)(r_ebp+0xffffffd0u);
    /* 0060d52b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060d52c: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0060d52f: mov edx, dword ptr [ecx + 0x8c] */ r_edx = R32((u32)(r_ecx+0x8cu));
    /* 0060d535: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060d536: call dword ptr [0x6b23d8] */ { u32 t = R32((u32)(0x6b23d8u)); r_esp -= 4; W32(r_esp, 0x60d53cu); call_ind(t); }
    /* 0060d53c: cmp dword ptr [ebp - 0x28], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060d540: jne 0x60d554 */ if (!fZ) goto L_0060d554;
L_0060d542:; BB(0x0060d542);
    /* 0060d542: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0060d544: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0060d547: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 0060d54d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060d54e: call dword ptr [0x6b23dc] */ { u32 t = R32((u32)(0x6b23dcu)); r_esp -= 4; W32(r_esp, 0x60d554u); call_ind(t); }
L_0060d554:; BB(0x0060d554);
    /* 0060d554: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0060d557: movzx eax, byte ptr [edx + 0x94] */ r_eax = (u32)R8((u32)(r_edx+0x94u));
    /* 0060d55e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060d560: je 0x60d57c */ if (fZ) goto L_0060d57c;
L_0060d562:; BB(0x0060d562);
    /* 0060d562: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060d564: push 0x6d82fc */ { u32 v = 0x6d82fcu; r_esp -= 4; W32(r_esp, v); }
    /* 0060d569: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 0060d56f: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 0060d572: call 0x607900 */ r_esp -= 4; W32(r_esp, 0x60d577u); f_00607900();
    /* 0060d577: mov byte ptr [ebp - 1], al */ W8((u32)(r_ebp+0xffffffffu), (u8)r_eax);
    /* 0060d57a: jmp 0x60d580 */ goto L_0060d580;
L_0060d57c:; BB(0x0060d57c);
    /* 0060d57c: mov byte ptr [ebp - 1], 0 */ W8((u32)(r_ebp+0xffffffffu), 0x0u);
L_0060d580:; BB(0x0060d580);
    /* 0060d580: movzx edx, byte ptr [0x795fb9] */ r_edx = (u32)R8((u32)(0x795fb9u));
    /* 0060d587: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060d589: je 0x60d5e0 */ if (fZ) goto L_0060d5e0;
L_0060d58b:; BB(0x0060d58b);
    /* 0060d58b: movzx eax, byte ptr [ebp - 1] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 0060d58f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060d591: jne 0x60d5ba */ if (!fZ) goto L_0060d5ba;
L_0060d593:; BB(0x0060d593);
    /* 0060d593: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0060d596: movzx edx, byte ptr [ecx + 0x94] */ r_edx = (u32)R8((u32)(r_ecx+0x94u));
    /* 0060d59d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060d59f: je 0x60d5ce */ if (fZ) goto L_0060d5ce;
L_0060d5a1:; BB(0x0060d5a1);
    /* 0060d5a1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0060d5a3: call dword ptr [0x6b23fc] */ { u32 t = R32((u32)(0x6b23fcu)); r_esp -= 4; W32(r_esp, 0x60d5a9u); call_ind(t); }
    /* 0060d5a9: mov esi, eax */ r_esi = r_eax;
    /* 0060d5ab: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0060d5ae: call 0x613620 */ r_esp -= 4; W32(r_esp, 0x60d5b3u); f_00613620();
    /* 0060d5b3: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 0060d5b6: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060d5b8: jg 0x60d5ce */ if ((!fZ&&fS==fO)) goto L_0060d5ce;
L_0060d5ba:; BB(0x0060d5ba);
    /* 0060d5ba: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0060d5bc: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0060d5bf: mov edx, dword ptr [ecx + 0x8c] */ r_edx = R32((u32)(r_ecx+0x8cu));
    /* 0060d5c5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060d5c6: call dword ptr [0x6b23dc] */ { u32 t = R32((u32)(0x6b23dcu)); r_esp -= 4; W32(r_esp, 0x60d5ccu); call_ind(t); }
    /* 0060d5cc: jmp 0x60d5e0 */ goto L_0060d5e0;
L_0060d5ce:; BB(0x0060d5ce);
    /* 0060d5ce: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0060d5d0: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0060d5d3: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 0060d5d9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060d5da: call dword ptr [0x6b23dc] */ { u32 t = R32((u32)(0x6b23dcu)); r_esp -= 4; W32(r_esp, 0x60d5e0u); call_ind(t); }
L_0060d5e0:; BB(0x0060d5e0);
    /* 0060d5e0: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0060d5e3: call 0x6134a0 */ r_esp -= 4; W32(r_esp, 0x60d5e8u); f_006134a0();
    /* 0060d5e8: movzx edx, byte ptr [0x795fb9] */ r_edx = (u32)R8((u32)(0x795fb9u));
    /* 0060d5ef: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060d5f1: je 0x60d603 */ if (fZ) goto L_0060d603;
L_0060d5f3:; BB(0x0060d5f3);
    /* 0060d5f3: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0060d5f6: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 0060d5fc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060d5fd: call dword ptr [0x6b23f8] */ { u32 t = R32((u32)(0x6b23f8u)); r_esp -= 4; W32(r_esp, 0x60d603u); call_ind(t); }
L_0060d603:; BB(0x0060d603);
    /* 0060d603: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0060d604: mov esp, ebp */ r_esp = r_ebp;
    /* 0060d606: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060d607: ret  */ FN_RET(0x0060d510); r_esp += 4; return;
}

void f_0060d610(void) /* Window::vfunc3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0060d610);
    /* 0060d610: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060d611: mov ebp, esp */ r_ebp = r_esp;
    /* 0060d613: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060d614: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0060d617: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060d619: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060d61c: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 0060d622: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060d623: call dword ptr [0x6b23dc] */ { u32 t = R32((u32)(0x6b23dcu)); r_esp -= 4; W32(r_esp, 0x60d629u); call_ind(t); }
    /* 0060d629: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060d62c: call 0x6134c0 */ r_esp -= 4; W32(r_esp, 0x60d631u); f_006134c0();
    /* 0060d631: mov esp, ebp */ r_esp = r_ebp;
    /* 0060d633: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060d634: ret  */ FN_RET(0x0060d610); r_esp += 4; return;
}

void f_0060d640(void) /* Window::vfunc4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0060d640);
    /* 0060d640: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060d641: mov ebp, esp */ r_ebp = r_esp;
    /* 0060d643: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060d644: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0060d647: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060d64a: cmp dword ptr [eax + 0x90], 0 */ {  u32 a = R32((u32)(r_eax+0x90u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060d651: je 0x60d661 */ if (fZ) goto L_0060d661;
L_0060d653:; BB(0x0060d653);
    /* 0060d653: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060d656: movzx edx, byte ptr [ecx + 0x88] */ r_edx = (u32)R8((u32)(r_ecx+0x88u));
    /* 0060d65d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060d65f: jne 0x60d663 */ if (!fZ) goto L_0060d663;
L_0060d661:; BB(0x0060d661);
    /* 0060d661: jmp 0x60d690 */ goto L_0060d690;
L_0060d663:; BB(0x0060d663);
    /* 0060d663: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 0060d665: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0060d668: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0060d66b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060d66c: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0060d66f: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0060d672: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060d673: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0060d676: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0060d679: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060d67a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0060d67d: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0060d67f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060d680: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060d683: mov eax, dword ptr [edx + 0x90] */ r_eax = R32((u32)(r_edx+0x90u));
    /* 0060d689: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060d68a: call dword ptr [0x6b2004] */ { u32 t = R32((u32)(0x6b2004u)); r_esp -= 4; W32(r_esp, 0x60d690u); call_ind(t); }
L_0060d690:; BB(0x0060d690);
    /* 0060d690: mov esp, ebp */ r_esp = r_ebp;
    /* 0060d692: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060d693: ret 4 */ FN_RET(0x0060d640); r_esp += 8; return;
}

void f_0060d7a0(void) /* Window::vfunc7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0060d7a0);
    /* 0060d7a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060d7a1: mov ebp, esp */ r_ebp = r_esp;
    /* 0060d7a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060d7a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0060d7a7: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060d7ab: je 0x60d7ed */ if (fZ) goto L_0060d7ed;
L_0060d7ad:; BB(0x0060d7ad);
    /* 0060d7ad: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060d7b0: mov ecx, dword ptr [eax + 0x84] */ r_ecx = R32((u32)(r_eax+0x84u));
    /* 0060d7b6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060d7b7: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0060d7ba: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060d7bb: call 0x686ec0 */ r_esp -= 4; W32(r_esp, 0x60d7c0u); f_00686ec0();
    /* 0060d7c0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060d7c3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060d7c5: je 0x60d7ed */ if (fZ) goto L_0060d7ed;
L_0060d7c7:; BB(0x0060d7c7);
    /* 0060d7c7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0060d7ca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060d7cb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060d7ce: call 0x614030 */ r_esp -= 4; W32(r_esp, 0x60d7d3u); f_00614030();
    /* 0060d7d3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060d7d6: mov edx, dword ptr [ecx + 0x84] */ r_edx = R32((u32)(r_ecx+0x84u));
    /* 0060d7dc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060d7dd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060d7e0: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 0060d7e6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060d7e7: call dword ptr [0x6b23d4] */ { u32 t = R32((u32)(0x6b23d4u)); r_esp -= 4; W32(r_esp, 0x60d7edu); call_ind(t); }
L_0060d7ed:; BB(0x0060d7ed);
    /* 0060d7ed: mov esp, ebp */ r_esp = r_ebp;
    /* 0060d7ef: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060d7f0: ret 4 */ FN_RET(0x0060d7a0); r_esp += 8; return;
}

void f_0060d850(void) /* Window::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0060d850);
    /* 0060d850: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060d851: mov ebp, esp */ r_ebp = r_esp;
    /* 0060d853: sub esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060d856: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0060d857: mov dword ptr [ebp - 0x58], ecx */ W32((u32)(r_ebp+0xffffffa8u), r_ecx);
    /* 0060d85a: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0060d85d: cmp dword ptr [eax + 0x90], 0 */ {  u32 a = R32((u32)(r_eax+0x90u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060d864: jne 0x60d86b */ if (!fZ) goto L_0060d86b;
L_0060d866:; BB(0x0060d866);
    /* 0060d866: jmp 0x60da72 */ goto L_0060da72;
L_0060d86b:; BB(0x0060d86b);
    /* 0060d86b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0060d86e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0060d870: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 0060d873: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 0060d876: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0060d879: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0060d87c: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0060d87f: mov eax, dword ptr [ecx + 0xc] */ r_eax = R32((u32)(r_ecx+0xcu));
    /* 0060d882: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0060d885: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0060d888: mov ecx, dword ptr [ecx + 0x50] */ r_ecx = R32((u32)(r_ecx+0x50u));
    /* 0060d88b: call 0x623910 */ r_esp -= 4; W32(r_esp, 0x60d890u); f_00623910();
    /* 0060d890: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0060d893: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0060d896: mov ecx, dword ptr [edx + 0x50] */ r_ecx = R32((u32)(r_edx+0x50u));
    /* 0060d899: call 0x6238f0 */ r_esp -= 4; W32(r_esp, 0x60d89eu); f_006238f0();
    /* 0060d89e: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0060d8a1: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 0060d8a8: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 0060d8af: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0060d8b2: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0060d8b5: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0060d8b8: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 0060d8bb: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0060d8be: call 0x613620 */ r_esp -= 4; W32(r_esp, 0x60d8c3u); f_00613620();
    /* 0060d8c3: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 0060d8c6: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 0060d8c9: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0060d8cc: call 0x613600 */ r_esp -= 4; W32(r_esp, 0x60d8d1u); f_00613600();
    /* 0060d8d1: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 0060d8d4: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0060d8d7: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 0060d8de: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 0060d8e5: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0060d8e8: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0060d8eb: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0060d8ee: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0060d8f1: lea eax, [ebp - 0x38] */ r_eax = (u32)(r_ebp+0xffffffc8u);
    /* 0060d8f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060d8f5: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0060d8f8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060d8f9: lea edx, [ebp - 0x18] */ r_edx = (u32)(r_ebp+0xffffffe8u);
    /* 0060d8fc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060d8fd: lea eax, [ebp - 0x28] */ r_eax = (u32)(r_ebp+0xffffffd8u);
    /* 0060d900: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060d901: call 0x624a70 */ r_esp -= 4; W32(r_esp, 0x60d906u); f_00624a70();
    /* 0060d906: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060d909: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0060d90c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060d90e: jne 0x60d915 */ if (!fZ) goto L_0060d915;
L_0060d910:; BB(0x0060d910);
    /* 0060d910: jmp 0x60da72 */ goto L_0060da72;
L_0060d915:; BB(0x0060d915);
    /* 0060d915: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0060d918: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 0060d91b: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 0060d91e: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0060d921: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0060d924: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 0060d927: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0060d92a: add eax, dword ptr [ebp - 0x50] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffb0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0060d92d: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0060d930: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060d933: add ecx, dword ptr [ebp - 0x54] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffacu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0060d936: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0060d939: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060d93c: add edx, dword ptr [ebp - 0x50] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffb0u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0060d93f: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0060d942: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0060d945: add eax, dword ptr [ebp - 0x54] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffacu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0060d948: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0060d94b: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0060d94e: mov ecx, dword ptr [ecx + 0x50] */ r_ecx = R32((u32)(r_ecx+0x50u));
    /* 0060d951: call 0x6238b0 */ r_esp -= 4; W32(r_esp, 0x60d956u); f_006238b0();
    /* 0060d956: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0060d958: jge 0x60d9a2 */ if ((fS==fO)) goto L_0060d9a2;
L_0060d95a:; BB(0x0060d95a);
    /* 0060d95a: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0060d95d: mov ecx, dword ptr [edx + 0x50] */ r_ecx = R32((u32)(r_edx+0x50u));
    /* 0060d960: call 0x623910 */ r_esp -= 4; W32(r_esp, 0x60d965u); f_00623910();
    /* 0060d965: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0060d968: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060d969: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0060d96c: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 0060d96f: call 0x6238d0 */ r_esp -= 4; W32(r_esp, 0x60d974u); f_006238d0();
    /* 0060d974: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0060d977: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0060d97a: mov ecx, dword ptr [ecx + 0x50] */ r_ecx = R32((u32)(r_ecx+0x50u));
    /* 0060d97d: call 0x623910 */ r_esp -= 4; W32(r_esp, 0x60d982u); f_00623910();
    /* 0060d982: mov esi, eax */ r_esi = r_eax;
    /* 0060d984: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0060d987: sub esi, dword ptr [edx + 0xc] */ {  u32 a = r_esi; u32 b = R32((u32)(r_edx+0xcu)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0060d98a: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0060d98d: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 0060d990: call 0x6238b0 */ r_esp -= 4; W32(r_esp, 0x60d995u); f_006238b0();
    /* 0060d995: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0060d997: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0060d99a: add esi, dword ptr [ebp - 4] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0060d99d: mov dword ptr [ebp - 4], esi */ W32((u32)(r_ebp+0xfffffffcu), r_esi);
    /* 0060d9a0: jmp 0x60d9b2 */ goto L_0060d9b2;
L_0060d9a2:; BB(0x0060d9a2);
    /* 0060d9a2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060d9a4: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0060d9a7: mov ecx, dword ptr [ecx + 0x50] */ r_ecx = R32((u32)(r_ecx+0x50u));
    /* 0060d9aa: call 0x6238d0 */ r_esp -= 4; W32(r_esp, 0x60d9afu); f_006238d0();
    /* 0060d9af: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0060d9b2:; BB(0x0060d9b2);
    /* 0060d9b2: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0060d9b5: mov ecx, dword ptr [edx + 0x50] */ r_ecx = R32((u32)(r_edx+0x50u));
    /* 0060d9b8: call 0x623910 */ r_esp -= 4; W32(r_esp, 0x60d9bdu); f_00623910();
    /* 0060d9bd: mov dword ptr [0x15e51b0], eax */ W32((u32)(0x15e51b0u), r_eax);
    /* 0060d9c2: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0060d9c5: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 0060d9c8: call 0x6238f0 */ r_esp -= 4; W32(r_esp, 0x60d9cdu); f_006238f0();
    /* 0060d9cd: mov dword ptr [0x15e51ac], eax */ W32((u32)(0x15e51acu), r_eax);
    /* 0060d9d2: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0060d9d5: mov ecx, dword ptr [ecx + 0x50] */ r_ecx = R32((u32)(r_ecx+0x50u));
    /* 0060d9d8: call 0x623930 */ r_esp -= 4; W32(r_esp, 0x60d9ddu); f_00623930();
    /* 0060d9dd: shl eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0060d9e0: mov word ptr [0x15e51b6], ax */ W16((u32)(0x15e51b6u), (u16)r_eax);
    /* 0060d9e6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060d9e8: push 0x15e51a8 */ { u32 v = 0x15e51a8u; r_esp -= 4; W32(r_esp, v); }
    /* 0060d9ed: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060d9f0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060d9f1: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0060d9f4: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 0060d9f7: call 0x623910 */ r_esp -= 4; W32(r_esp, 0x60d9fcu); f_00623910();
    /* 0060d9fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060d9fd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060d9ff: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060da01: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0060da04: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0060da06: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060da07: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0060da0a: sub eax, dword ptr [ebp - 0x24] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0060da0d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060da0e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060da11: sub ecx, dword ptr [ebp - 0x28] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffd8u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0060da14: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060da15: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060da18: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060da19: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0060da1c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060da1d: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0060da20: mov edx, dword ptr [ecx + 0x90] */ r_edx = R32((u32)(r_ecx+0x90u));
    /* 0060da26: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060da27: call dword ptr [0x6b2008] */ { u32 t = R32((u32)(0x6b2008u)); r_esp -= 4; W32(r_esp, 0x60da2du); call_ind(t); }
    /* 0060da2d: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0060da30: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060da34: jne 0x60da72 */ if (!fZ) goto L_0060da72;
L_0060da36:; BB(0x0060da36);
    /* 0060da36: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060da38: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060da3a: lea eax, [ebp - 0x3c] */ r_eax = (u32)(r_ebp+0xffffffc4u);
    /* 0060da3d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060da3e: push 0x400 */ { u32 v = 0x400u; r_esp -= 4; W32(r_esp, v); }
    /* 0060da43: call dword ptr [0x6b20d4] */ { u32 t = R32((u32)(0x6b20d4u)); r_esp -= 4; W32(r_esp, 0x60da49u); call_ind(t); }
    /* 0060da49: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060da4a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060da4c: push 0x1100 */ { u32 v = 0x1100u; r_esp -= 4; W32(r_esp, v); }
    /* 0060da51: call dword ptr [0x6b20d8] */ { u32 t = R32((u32)(0x6b20d8u)); r_esp -= 4; W32(r_esp, 0x60da57u); call_ind(t); }
    /* 0060da57: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0060da5a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060da5b: push 0x6d830c */ { u32 v = 0x6d830cu; r_esp -= 4; W32(r_esp, v); }
    /* 0060da60: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x60da65u); f_0062fde0();
    /* 0060da65: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060da68: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0060da6b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060da6c: call dword ptr [0x6b20dc] */ { u32 t = R32((u32)(0x6b20dcu)); r_esp -= 4; W32(r_esp, 0x60da72u); call_ind(t); }
L_0060da72:; BB(0x0060da72);
    /* 0060da72: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0060da73: mov esp, ebp */ r_esp = r_ebp;
    /* 0060da75: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060da76: ret 4 */ FN_RET(0x0060d850); r_esp += 8; return;
}

void f_0060da80(void) /* Window::vfunc8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0060da80);
    /* 0060da80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060da81: mov ebp, esp */ r_ebp = r_esp;
    /* 0060da83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060da84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0060da87: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060da8a: movzx ecx, byte ptr [eax + 0x5c] */ r_ecx = (u32)R8((u32)(r_eax+0x5cu));
    /* 0060da8e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060da90: je 0x60da94 */ if (fZ) goto L_0060da94;
L_0060da92:; BB(0x0060da92);
    /* 0060da92: jmp 0x60dad9 */ goto L_0060dad9;
L_0060da94:; BB(0x0060da94);
    /* 0060da94: mov edx, dword ptr [0x7960d8] */ r_edx = R32((u32)(0x7960d8u));
    /* 0060da9a: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 0060da9d: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 0060daa3: mov ecx, dword ptr [ecx + 0x10] */ r_ecx = R32((u32)(r_ecx+0x10u));
    /* 0060daa6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0060daa8: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 0060daab: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x60daadu); call_ind(t); }
    /* 0060daad: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0060dab0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060dab2: je 0x60dab6 */ if (fZ) goto L_0060dab6;
L_0060dab4:; BB(0x0060dab4);
    /* 0060dab4: jmp 0x60dad9 */ goto L_0060dad9;
L_0060dab6:; BB(0x0060dab6);
    /* 0060dab6: mov byte ptr [0x15e55d2], 1 */ W8((u32)(0x15e55d2u), 0x1u);
    /* 0060dabd: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060dac0: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0060dac2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060dac5: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 0060dac8: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x60dacau); call_ind(t); }
    /* 0060daca: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060dacd: call 0x60e050 */ r_esp -= 4; W32(r_esp, 0x60dad2u); f_0060e050();
    /* 0060dad2: mov byte ptr [0x15e55d2], 0 */ W8((u32)(0x15e55d2u), 0x0u);
L_0060dad9:; BB(0x0060dad9);
    /* 0060dad9: mov esp, ebp */ r_esp = r_ebp;
    /* 0060dadb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060dadc: ret  */ FN_RET(0x0060da80); r_esp += 4; return;
}

void f_0060dae0(void) /* Window::vfunc9 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0060dae0);
    /* 0060dae0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060dae1: mov ebp, esp */ r_ebp = r_esp;
    /* 0060dae3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060dae4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0060dae7: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 0060daec: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 0060daef: mov edx, dword ptr [0x7960d8] */ r_edx = R32((u32)(0x7960d8u));
    /* 0060daf5: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 0060daf8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0060dafa: mov ecx, eax */ r_ecx = r_eax;
    /* 0060dafc: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 0060daff: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x60db01u); call_ind(t); }
    /* 0060db01: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0060db04: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060db06: jne 0x60db0a */ if (!fZ) goto L_0060db0a;
L_0060db08:; BB(0x0060db08);
    /* 0060db08: jmp 0x60db31 */ goto L_0060db31;
L_0060db0a:; BB(0x0060db0a);
    /* 0060db0a: mov byte ptr [0x15e55d2], 1 */ W8((u32)(0x15e55d2u), 0x1u);
    /* 0060db11: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060db14: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0060db16: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060db19: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 0060db1c: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x60db1eu); call_ind(t); }
    /* 0060db1e: mov al, byte ptr [ebp + 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 0060db21: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060db22: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060db25: call 0x60dd10 */ r_esp -= 4; W32(r_esp, 0x60db2au); f_0060dd10();
    /* 0060db2a: mov byte ptr [0x15e55d2], 0 */ W8((u32)(0x15e55d2u), 0x0u);
L_0060db31:; BB(0x0060db31);
    /* 0060db31: mov esp, ebp */ r_esp = r_ebp;
    /* 0060db33: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060db34: ret 4 */ FN_RET(0x0060dae0); r_esp += 8; return;
}

void f_0060db40(void) /* Window::vfunc10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0060db40);
    /* 0060db40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060db41: mov ebp, esp */ r_ebp = r_esp;
    /* 0060db43: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060db46: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0060db49: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060db4c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0060db4e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060db51: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 0060db54: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x60db56u); call_ind(t); }
    /* 0060db56: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0060db59: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060db5b: jne 0x60db74 */ if (!fZ) goto L_0060db74;
L_0060db5d:; BB(0x0060db5d);
    /* 0060db5d: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0060db5f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060db62: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 0060db68: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060db69: call dword ptr [0x6b23dc] */ { u32 t = R32((u32)(0x6b23dcu)); r_esp -= 4; W32(r_esp, 0x60db6fu); call_ind(t); }
    /* 0060db6f: jmp 0x60dbf8 */ goto L_0060dbf8;
L_0060db74:; BB(0x0060db74);
    /* 0060db74: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060db76: push 0x75ee04 */ { u32 v = 0x75ee04u; r_esp -= 4; W32(r_esp, v); }
    /* 0060db7b: push 0x75edec */ { u32 v = 0x75edecu; r_esp -= 4; W32(r_esp, v); }
    /* 0060db80: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060db82: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 0060db88: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 0060db8b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060db8c: call 0x686ede */ r_esp -= 4; W32(r_esp, 0x60db91u); f_00686ede();
    /* 0060db91: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060db94: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0060db97: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060db9a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0060db9c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060db9f: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 0060dba2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x60dba4u); call_ind(t); }
    /* 0060dba4: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0060dba7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060dba9: je 0x60dbbc */ if (fZ) goto L_0060dbbc;
L_0060dbab:; BB(0x0060dbab);
    /* 0060dbab: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0060dbad: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060dbb0: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0060dbb2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060dbb5: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 0060dbb8: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x60dbbau); call_ind(t); }
    /* 0060dbba: jmp 0x60dbf8 */ goto L_0060dbf8;
L_0060dbbc:; BB(0x0060dbbc);
    /* 0060dbbc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060dbbf: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 0060dbc5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060dbc6: call 0x60dc00 */ r_esp -= 4; W32(r_esp, 0x60dbcbu); f_0060dc00();
    /* 0060dbcb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060dbce: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0060dbd1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060dbd3: je 0x60dbe9 */ if (fZ) goto L_0060dbe9;
L_0060dbd5:; BB(0x0060dbd5);
    /* 0060dbd5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060dbd8: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 0060dbde: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060dbdf: call 0x60dc50 */ r_esp -= 4; W32(r_esp, 0x60dbe4u); f_0060dc50();
    /* 0060dbe4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060dbe7: jmp 0x60dbeb */ goto L_0060dbeb;
L_0060dbe9:; BB(0x0060dbe9);
    /* 0060dbe9: jmp 0x60dbf8 */ goto L_0060dbf8;
L_0060dbeb:; BB(0x0060dbeb);
    /* 0060dbeb: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060dbee: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0060dbf0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060dbf3: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 0060dbf6: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x60dbf8u); call_ind(t); }
L_0060dbf8:; BB(0x0060dbf8);
    /* 0060dbf8: mov esp, ebp */ r_esp = r_ebp;
    /* 0060dbfa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060dbfb: ret  */ FN_RET(0x0060db40); r_esp += 4; return;
}

void f_0060dcb0(void) /* Window::vfunc11 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0060dcb0);
    /* 0060dcb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060dcb1: mov ebp, esp */ r_ebp = r_esp;
    /* 0060dcb3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060dcb6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0060dcb9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060dcbc: movzx ecx, byte ptr [eax + 0x96] */ r_ecx = (u32)R8((u32)(r_eax+0x96u));
    /* 0060dcc3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060dcc5: jne 0x60dcdb */ if (!fZ) goto L_0060dcdb;
L_0060dcc7:; BB(0x0060dcc7);
    /* 0060dcc7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060dcca: movzx eax, byte ptr [edx + 0x5c] */ r_eax = (u32)R8((u32)(r_edx+0x5cu));
    /* 0060dcce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060dcd0: jne 0x60dcdb */ if (!fZ) goto L_0060dcdb;
L_0060dcd2:; BB(0x0060dcd2);
    /* 0060dcd2: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 0060dcd9: jmp 0x60dce2 */ goto L_0060dce2;
L_0060dcdb:; BB(0x0060dcdb);
    /* 0060dcdb: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_0060dce2:; BB(0x0060dce2);
    /* 0060dce2: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0060dce5: mov esp, ebp */ r_esp = r_ebp;
    /* 0060dce7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060dce8: ret  */ FN_RET(0x0060dcb0); r_esp += 4; return;
}

void f_0060dcf0(void) /* Window::vfunc12 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0060dcf0);
    /* 0060dcf0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060dcf1: mov ebp, esp */ r_ebp = r_esp;
    /* 0060dcf3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060dcf4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0060dcf7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060dcfa: mov al, byte ptr [eax + 0x95] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0x95u))) & 0xffu);
    /* 0060dd00: mov esp, ebp */ r_esp = r_ebp;
    /* 0060dd02: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060dd03: ret  */ FN_RET(0x0060dcf0); r_esp += 4; return;
}

void f_0060e300(void) /* Window::vfunc13 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0060e300);
    /* 0060e300: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060e301: mov ebp, esp */ r_ebp = r_esp;
    /* 0060e303: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060e306: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0060e309: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060e30c: cmp dword ptr [eax + 0x8c], 0 */ {  u32 a = R32((u32)(r_eax+0x8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060e313: jne 0x60e31a */ if (!fZ) goto L_0060e31a;
L_0060e315:; BB(0x0060e315);
    /* 0060e315: jmp 0x60e3b5 */ goto L_0060e3b5;
L_0060e31a:; BB(0x0060e31a);
    /* 0060e31a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060e31d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0060e31f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060e322: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 0060e325: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x60e327u); call_ind(t); }
    /* 0060e327: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0060e32a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060e32c: je 0x60e34a */ if (fZ) goto L_0060e34a;
L_0060e32e:; BB(0x0060e32e);
    /* 0060e32e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060e331: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 0060e337: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060e338: call 0x60dc50 */ r_esp -= 4; W32(r_esp, 0x60e33du); f_0060dc50();
    /* 0060e33d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060e340: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060e343: mov byte ptr [ecx + 0x95], 0 */ W8((u32)(r_ecx+0x95u), 0x0u);
L_0060e34a:; BB(0x0060e34a);
    /* 0060e34a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060e34d: cmp dword ptr [edx + 0x90], 0 */ {  u32 a = R32((u32)(r_edx+0x90u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060e354: je 0x60e3a5 */ if (fZ) goto L_0060e3a5;
L_0060e356:; BB(0x0060e356);
    /* 0060e356: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060e358: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0060e35a: call dword ptr [0x6b2000] */ { u32 t = R32((u32)(0x6b2000u)); r_esp -= 4; W32(r_esp, 0x60e360u); call_ind(t); }
    /* 0060e360: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060e361: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060e364: mov ecx, dword ptr [eax + 0x90] */ r_ecx = R32((u32)(r_eax+0x90u));
    /* 0060e36a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060e36b: call dword ptr [0x6b2010] */ { u32 t = R32((u32)(0x6b2010u)); r_esp -= 4; W32(r_esp, 0x60e371u); call_ind(t); }
    /* 0060e371: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0060e374: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060e377: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060e378: call dword ptr [0x6b200c] */ { u32 t = R32((u32)(0x6b200cu)); r_esp -= 4; W32(r_esp, 0x60e37eu); call_ind(t); }
    /* 0060e37e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060e381: mov ecx, dword ptr [eax + 0x90] */ r_ecx = R32((u32)(r_eax+0x90u));
    /* 0060e387: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060e388: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060e38b: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 0060e391: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060e392: call dword ptr [0x6b23b4] */ { u32 t = R32((u32)(0x6b23b4u)); r_esp -= 4; W32(r_esp, 0x60e398u); call_ind(t); }
    /* 0060e398: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060e39b: mov dword ptr [ecx + 0x90], 0 */ W32((u32)(r_ecx+0x90u), 0x0u);
L_0060e3a5:; BB(0x0060e3a5);
    /* 0060e3a5: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060e3a8: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 0060e3ae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060e3af: call dword ptr [0x6b23b8] */ { u32 t = R32((u32)(0x6b23b8u)); r_esp -= 4; W32(r_esp, 0x60e3b5u); call_ind(t); }
L_0060e3b5:; BB(0x0060e3b5);
    /* 0060e3b5: mov esp, ebp */ r_esp = r_ebp;
    /* 0060e3b7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060e3b8: ret  */ FN_RET(0x0060e300); r_esp += 4; return;
}

void f_0060e3c0(void) /* Window::vfunc14 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0060e3c0);
    /* 0060e3c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060e3c1: mov ebp, esp */ r_ebp = r_esp;
    /* 0060e3c3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060e3c6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0060e3c9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060e3cc: movzx ecx, byte ptr [eax + 0x95] */ r_ecx = (u32)R8((u32)(r_eax+0x95u));
    /* 0060e3d3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060e3d5: jne 0x60e3e6 */ if (!fZ) goto L_0060e3e6;
L_0060e3d7:; BB(0x0060e3d7);
    /* 0060e3d7: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0060e3d9: call dword ptr [0x6b23fc] */ { u32 t = R32((u32)(0x6b23fcu)); r_esp -= 4; W32(r_esp, 0x60e3dfu); call_ind(t); }
    /* 0060e3df: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0060e3e1: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0060e3e4: jmp 0x60e3ed */ goto L_0060e3ed;
L_0060e3e6:; BB(0x0060e3e6);
    /* 0060e3e6: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_0060e3ed:; BB(0x0060e3ed);
    /* 0060e3ed: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060e3f0: call 0x613600 */ r_esp -= 4; W32(r_esp, 0x60e3f5u); f_00613600();
    /* 0060e3f5: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 0060e3f8: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0060e3fb: mov esp, ebp */ r_esp = r_ebp;
    /* 0060e3fd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060e3fe: ret  */ FN_RET(0x0060e3c0); r_esp += 4; return;
}

void f_0060e400(void) /* Window::vfunc15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0060e400);
    /* 0060e400: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060e401: mov ebp, esp */ r_ebp = r_esp;
    /* 0060e403: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060e406: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0060e407: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0060e40a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060e40d: movzx ecx, byte ptr [eax + 0x95] */ r_ecx = (u32)R8((u32)(r_eax+0x95u));
    /* 0060e414: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060e416: jne 0x60e432 */ if (!fZ) goto L_0060e432;
L_0060e418:; BB(0x0060e418);
    /* 0060e418: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0060e41a: call dword ptr [0x6b23fc] */ { u32 t = R32((u32)(0x6b23fcu)); r_esp -= 4; W32(r_esp, 0x60e420u); call_ind(t); }
    /* 0060e420: mov esi, eax */ r_esi = r_eax;
    /* 0060e422: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0060e424: call dword ptr [0x6b23fc] */ { u32 t = R32((u32)(0x6b23fcu)); r_esp -= 4; W32(r_esp, 0x60e42au); call_ind(t); }
    /* 0060e42a: lea edx, [esi + eax*2] */ r_edx = (u32)(r_esi+r_eax*2);
    /* 0060e42d: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0060e430: jmp 0x60e439 */ goto L_0060e439;
L_0060e432:; BB(0x0060e432);
    /* 0060e432: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_0060e439:; BB(0x0060e439);
    /* 0060e439: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060e43c: call 0x613620 */ r_esp -= 4; W32(r_esp, 0x60e441u); f_00613620();
    /* 0060e441: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 0060e444: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0060e447: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0060e448: mov esp, ebp */ r_esp = r_ebp;
    /* 0060e44a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060e44b: ret  */ FN_RET(0x0060e400); r_esp += 4; return;
}

void f_0060e450(void) /* Window::vfunc16 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0060e450);
    /* 0060e450: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060e451: mov ebp, esp */ r_ebp = r_esp;
    /* 0060e453: sub esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060e456: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0060e457: mov dword ptr [ebp - 0x60], ecx */ W32((u32)(r_ebp+0xffffffa0u), r_ecx);
    /* 0060e45a: lea eax, [ebp - 0x18] */ r_eax = (u32)(r_ebp+0xffffffe8u);
    /* 0060e45d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060e45e: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0060e461: mov edx, dword ptr [ecx + 0x8c] */ r_edx = R32((u32)(r_ecx+0x8cu));
    /* 0060e467: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060e468: call dword ptr [0x6b23cc] */ { u32 t = R32((u32)(0x6b23ccu)); r_esp -= 4; W32(r_esp, 0x60e46eu); call_ind(t); }
    /* 0060e46e: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060e471: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0060e474: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0060e477: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 0060e47a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060e47d: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 0060e480: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0060e483: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0060e486: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0060e489: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0060e48c: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 0060e48f: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0060e492: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0060e495: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0060e497: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0060e49a: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0060e49d: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 0060e4a0: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0060e4a3: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0060e4a6: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 0060e4a9: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0060e4ac: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0060e4af: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 0060e4b2: lea ecx, [ebp - 0x28] */ r_ecx = (u32)(r_ebp+0xffffffd8u);
    /* 0060e4b5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060e4b6: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0060e4b9: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 0060e4bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060e4c0: call dword ptr [0x6b23c8] */ { u32 t = R32((u32)(0x6b23c8u)); r_esp -= 4; W32(r_esp, 0x60e4c6u); call_ind(t); }
    /* 0060e4c6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0060e4c8: lea ecx, [ebp - 0x28] */ r_ecx = (u32)(r_ebp+0xffffffd8u);
    /* 0060e4cb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060e4cc: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0060e4cf: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 0060e4d5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060e4d6: call dword ptr [0x6b23e4] */ { u32 t = R32((u32)(0x6b23e4u)); r_esp -= 4; W32(r_esp, 0x60e4dcu); call_ind(t); }
    /* 0060e4dc: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0060e4df: mov dword ptr [ebp - 0x50], ecx */ W32((u32)(r_ebp+0xffffffb0u), r_ecx);
    /* 0060e4e2: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060e4e5: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 0060e4e8: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060e4eb: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0060e4ee: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0060e4f1: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 0060e4f4: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0060e4f7: add edx, 0x18 */ {  u32 a = r_edx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0060e4fa: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 0060e4fd: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0060e500: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0060e503: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 0060e505: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0060e508: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0060e50b: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0060e50e: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0060e511: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0060e514: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 0060e517: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0060e51a: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0060e51d: mov dword ptr [eax + 0xc], ecx */ W32((u32)(r_eax+0xcu), r_ecx);
    /* 0060e520: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0060e523: call 0x6135c0 */ r_esp -= 4; W32(r_esp, 0x60e528u); f_006135c0();
    /* 0060e528: movzx esi, ax */ r_esi = (u32)(u16)r_eax;
    /* 0060e52b: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0060e52e: call 0x613600 */ r_esp -= 4; W32(r_esp, 0x60e533u); f_00613600();
    /* 0060e533: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 0060e536: sub esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0060e538: mov eax, esi */ r_eax = r_esi;
    /* 0060e53a: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0060e53b: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0060e53d: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0060e53f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0060e542: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0060e545: call 0x6135e0 */ r_esp -= 4; W32(r_esp, 0x60e54au); f_006135e0();
    /* 0060e54a: movzx esi, ax */ r_esi = (u32)(u16)r_eax;
    /* 0060e54d: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0060e550: call 0x613620 */ r_esp -= 4; W32(r_esp, 0x60e555u); f_00613620();
    /* 0060e555: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 0060e558: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0060e55a: mov eax, esi */ r_eax = r_esi;
    /* 0060e55c: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0060e55d: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0060e55f: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0060e561: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0060e564: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060e568: jge 0x60e571 */ if ((fS==fO)) goto L_0060e571;
L_0060e56a:; BB(0x0060e56a);
    /* 0060e56a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
L_0060e571:; BB(0x0060e571);
    /* 0060e571: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060e575: jge 0x60e57e */ if ((fS==fO)) goto L_0060e57e;
L_0060e577:; BB(0x0060e577);
    /* 0060e577: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_0060e57e:; BB(0x0060e57e);
    /* 0060e57e: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0060e581: call 0x613620 */ r_esp -= 4; W32(r_esp, 0x60e586u); f_00613620();
    /* 0060e586: movzx ecx, ax */ r_ecx = (u32)(u16)r_eax;
    /* 0060e589: add ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0060e58c: mov dword ptr [ebp - 0x5c], ecx */ W32((u32)(r_ebp+0xffffffa4u), r_ecx);
    /* 0060e58f: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0060e592: call 0x613600 */ r_esp -= 4; W32(r_esp, 0x60e597u); f_00613600();
    /* 0060e597: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 0060e59a: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0060e59d: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 0060e5a0: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 0060e5a3: add eax, 0x28 */ {  u32 a = r_eax; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0060e5a6: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 0060e5a9: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0060e5ac: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060e5af: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 0060e5b1: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 0060e5b4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060e5b7: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 0060e5ba: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 0060e5bd: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0060e5c0: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 0060e5c3: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0060e5c6: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0060e5c9: mov dword ptr [ecx + 0xc], edx */ W32((u32)(r_ecx+0xcu), r_edx);
    /* 0060e5cc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0060e5cd: mov esp, ebp */ r_esp = r_ebp;
    /* 0060e5cf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060e5d0: ret  */ FN_RET(0x0060e450); r_esp += 4; return;
}

