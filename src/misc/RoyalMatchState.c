#include "protos.h"

void f_005b2ff0(void) /* RoyalMatchState::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b2ff0);
    /* 005b2ff0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b2ff1: mov ebp, esp */ r_ebp = r_esp;
    /* 005b2ff3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b2ff5: push 0x6a7e28 */ { u32 v = 0x6a7e28u; r_esp -= 4; W32(r_esp, v); }
    /* 005b2ffa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005b3000: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b3001: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b3004: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005b3009: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b300b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b300c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005b300f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005b3015: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005b3018: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b301b: call 0x5e9e20 */ r_esp -= 4; W32(r_esp, 0x5b3020u); f_005e9e20();
    /* 005b3020: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005b3027: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005b302a: mov dword ptr [eax], 0x6d0b58 */ W32((u32)(r_eax), 0x6d0b58u);
    /* 005b3030: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b3033: mov dword ptr [ecx + 0x57c], 0 */ W32((u32)(r_ecx+0x57cu), 0x0u);
    /* 005b303d: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005b3044: jmp 0x5b304f */ goto L_005b304f;
L_005b3046:; BB(0x005b3046);
    /* 005b3046: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b3049: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b304c: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_005b304f:; BB(0x005b304f);
    /* 005b304f: cmp dword ptr [ebp - 0x10], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b3053: jge 0x5b3079 */ if ((fS==fO)) goto L_005b3079;
L_005b3055:; BB(0x005b3055);
    /* 005b3055: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b3058: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b305b: mov dword ptr [ecx + eax*4 + 0x580], 0 */ W32((u32)(r_ecx+r_eax*4+0x580u), 0x0u);
    /* 005b3066: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b3069: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005b306c: mov dword ptr [eax + edx*4 + 0x634], 0 */ W32((u32)(r_eax+r_edx*4+0x634u), 0x0u);
    /* 005b3077: jmp 0x5b3046 */ goto L_005b3046;
L_005b3079:; BB(0x005b3079);
    /* 005b3079: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b307b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b307d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b3080: call 0x5b7310 */ r_esp -= 4; W32(r_esp, 0x5b3085u); f_005b7310();
    /* 005b3085: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005b308c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005b308f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b3092: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005b3099: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005b309a: mov esp, ebp */ r_esp = r_ebp;
    /* 005b309c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b309d: ret  */ FN_RET(0x005b2ff0); r_esp += 4; return;
}

void f_005b30a0(void) /* RoyalMatchState::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b30a0);
    /* 005b30a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b30a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005b30a3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b30a5: push 0x6a7e4b */ { u32 v = 0x6a7e4bu; r_esp -= 4; W32(r_esp, v); }
    /* 005b30aa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005b30b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b30b1: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b30b4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005b30b9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b30bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b30bc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005b30bf: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005b30c5: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 005b30c8: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005b30cb: mov dword ptr [eax], 0x6d0b58 */ W32((u32)(r_eax), 0x6d0b58u);
    /* 005b30d1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005b30d8: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005b30db: mov edx, dword ptr [ecx + 0x57c] */ r_edx = R32((u32)(r_ecx+0x57cu));
    /* 005b30e1: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 005b30e4: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005b30e7: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005b30ea: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b30ee: je 0x5b3103 */ if (fZ) goto L_005b3103;
L_005b30f0:; BB(0x005b30f0);
    /* 005b30f0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b30f2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b30f5: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005b30f7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b30fa: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005b30fc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5b30feu); call_ind(t); }
    /* 005b30fe: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005b3101: jmp 0x5b310a */ goto L_005b310a;
L_005b3103:; BB(0x005b3103);
    /* 005b3103: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_005b310a:; BB(0x005b310a);
    /* 005b310a: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005b3111: jmp 0x5b311c */ goto L_005b311c;
L_005b3113:; BB(0x005b3113);
    /* 005b3113: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b3116: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b3119: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_005b311c:; BB(0x005b311c);
    /* 005b311c: cmp dword ptr [ebp - 0x10], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b3120: jge 0x5b3190 */ if ((fS==fO)) goto L_005b3190;
L_005b3122:; BB(0x005b3122);
    /* 005b3122: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b3125: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005b3128: mov ecx, dword ptr [eax + edx*4 + 0x580] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x580u));
    /* 005b312f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005b3132: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005b3135: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 005b3138: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b313c: je 0x5b3151 */ if (fZ) goto L_005b3151;
L_005b313e:; BB(0x005b313e);
    /* 005b313e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b3140: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005b3143: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005b3145: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005b3148: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005b314a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5b314cu); call_ind(t); }
    /* 005b314c: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 005b314f: jmp 0x5b3158 */ goto L_005b3158;
L_005b3151:; BB(0x005b3151);
    /* 005b3151: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_005b3158:; BB(0x005b3158);
    /* 005b3158: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b315b: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005b315e: mov eax, dword ptr [edx + ecx*4 + 0x634] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x634u));
    /* 005b3165: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005b3168: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005b316b: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005b316e: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b3172: je 0x5b3187 */ if (fZ) goto L_005b3187;
L_005b3174:; BB(0x005b3174);
    /* 005b3174: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b3176: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005b3179: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005b317b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005b317e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005b3180: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5b3182u); call_ind(t); }
    /* 005b3182: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 005b3185: jmp 0x5b318e */ goto L_005b318e;
L_005b3187:; BB(0x005b3187);
    /* 005b3187: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_005b318e:; BB(0x005b318e);
    /* 005b318e: jmp 0x5b3113 */ goto L_005b3113;
L_005b3190:; BB(0x005b3190);
    /* 005b3190: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005b3197: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005b319a: call 0x5e9e40 */ r_esp -= 4; W32(r_esp, 0x5b319fu); f_005e9e40();
    /* 005b319f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b31a2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005b31a9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005b31aa: mov esp, ebp */ r_esp = r_ebp;
    /* 005b31ac: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b31ad: ret  */ FN_RET(0x005b30a0); r_esp += 4; return;
}

void f_005b3870(void) /* royalmatchstate::func_005b3870 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b3870);
    /* 005b3870: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b3871: mov ebp, esp */ r_ebp = r_esp;
    /* 005b3873: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b3876: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b3877: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 005b387a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b387d: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005b3880: cmp dword ptr [ecx + eax*4 + 0x664], 1 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x664u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b3888: jne 0x5b38f6 */ if (!fZ) goto L_005b38f6;
L_005b388a:; BB(0x005b388a);
    /* 005b388a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b388c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b388e: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005b3890: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005b3893: call 0x5b5c60 */ r_esp -= 4; W32(r_esp, 0x5b3898u); f_005b5c60();
    /* 005b3898: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b3899: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x5b389eu); f_00641290();
    /* 005b389e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b38a1: mov esi, eax */ r_esi = r_eax;
    /* 005b38a3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b38a5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b38a7: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005b38a9: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005b38ac: call 0x5b5c60 */ r_esp -= 4; W32(r_esp, 0x5b38b1u); f_005b5c60();
    /* 005b38b1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b38b2: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x5b38b7u); f_00641290();
    /* 005b38b7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b38ba: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b38bc: jne 0x5b38f6 */ if (!fZ) goto L_005b38f6;
L_005b38be:; BB(0x005b38be);
    /* 005b38be: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b38c0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b38c2: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005b38c4: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005b38c7: call 0x5b5c60 */ r_esp -= 4; W32(r_esp, 0x5b38ccu); f_005b5c60();
    /* 005b38cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b38cd: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x5b38d2u); f_00641280();
    /* 005b38d2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b38d5: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b38d8: jne 0x5b38f6 */ if (!fZ) goto L_005b38f6;
L_005b38da:; BB(0x005b38da);
    /* 005b38da: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b38dc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b38de: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005b38e0: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005b38e3: call 0x5b5c60 */ r_esp -= 4; W32(r_esp, 0x5b38e8u); f_005b5c60();
    /* 005b38e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b38e9: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x5b38eeu); f_00641280();
    /* 005b38ee: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b38f1: cmp eax, 0xd */ {  u32 a = r_eax; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b38f4: je 0x5b3936 */ if (fZ) goto L_005b3936;
L_005b38f6:; BB(0x005b38f6);
    /* 005b38f6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b38f8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b38fa: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005b38fc: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005b38ff: call 0x5b5c60 */ r_esp -= 4; W32(r_esp, 0x5b3904u); f_005b5c60();
    /* 005b3904: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b3905: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x5b390au); f_00641280();
    /* 005b390a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b390d: cmp eax, 0xd */ {  u32 a = r_eax; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b3910: jne 0x5b39ca */ if (!fZ) goto L_005b39ca;
L_005b3916:; BB(0x005b3916);
    /* 005b3916: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b3918: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b391a: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005b391c: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005b391f: call 0x5b5c60 */ r_esp -= 4; W32(r_esp, 0x5b3924u); f_005b5c60();
    /* 005b3924: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b3925: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x5b392au); f_00641280();
    /* 005b392a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b392d: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b3930: jne 0x5b39ca */ if (!fZ) goto L_005b39ca;
L_005b3936:; BB(0x005b3936);
    /* 005b3936: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b3938: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b393b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b393c: lea eax, [ebp - 0x18] */ r_eax = (u32)(r_ebp+0xffffffe8u);
    /* 005b393f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b3940: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b3943: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005b3946: mov ecx, dword ptr [edx + ecx*4 + 0x634] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x634u));
    /* 005b394d: call 0x5cb880 */ r_esp -= 4; W32(r_esp, 0x5b3952u); f_005cb880();
    /* 005b3952: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005b3954: add eax, 0x3e8 */ {  u32 a = r_eax; u32 b = 0x3e8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b3959: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b395a: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5b395fu); f_0064c8a0();
    /* 005b395f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b3962: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005b3965: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005b3968: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b396a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b396d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b396e: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b3971: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b3972: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b3975: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b3976: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b3979: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005b397c: mov eax, dword ptr [edx + ecx*4 + 0x634] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x634u));
    /* 005b3983: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b3986: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005b3989: mov ecx, dword ptr [edx + ecx*4 + 0x634] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x634u));
    /* 005b3990: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005b3992: mov edx, dword ptr [eax + 0xb8] */ r_edx = R32((u32)(r_eax+0xb8u));
    /* 005b3998: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5b399au); call_ind(t); }
    /* 005b399a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b399c: push 0x3e8 */ { u32 v = 0x3e8u; r_esp -= 4; W32(r_esp, v); }
    /* 005b39a1: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5b39a6u); f_0064c8a0();
    /* 005b39a6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b39a9: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005b39ac: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 005b39af: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005b39b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b39b3: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005b39b6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b39b7: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b39ba: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b39bb: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5b39c0u); f_005dcb00();
    /* 005b39c0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b39c3: mov ecx, eax */ r_ecx = r_eax;
    /* 005b39c5: call 0x5d5cf0 */ r_esp -= 4; W32(r_esp, 0x5b39cau); f_005d5cf0();
L_005b39ca:; BB(0x005b39ca);
    /* 005b39ca: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b39cc: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005b39ce: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005b39d1: call 0x5b4f50 */ r_esp -= 4; W32(r_esp, 0x5b39d6u); f_005b4f50();
    /* 005b39d6: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005b39d9: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005b39e0: jmp 0x5b39eb */ goto L_005b39eb;
L_005b39e2:; BB(0x005b39e2);
    /* 005b39e2: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b39e5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b39e8: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_005b39eb:; BB(0x005b39eb);
    /* 005b39eb: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b39ee: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b39ef: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005b39f2: call 0x5b58f0 */ r_esp -= 4; W32(r_esp, 0x5b39f7u); f_005b58f0();
    /* 005b39f7: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b39fa: jge 0x5b3b3b */ if ((fS==fO)) goto L_005b3b3b;
L_005b3a00:; BB(0x005b3a00);
    /* 005b3a00: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b3a03: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b3a04: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b3a07: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b3a08: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005b3a0b: call 0x5b5830 */ r_esp -= 4; W32(r_esp, 0x5b3a10u); f_005b5830();
    /* 005b3a10: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b3a13: jg 0x5b3a2c */ if ((!fZ&&fS==fO)) goto L_005b3a2c;
L_005b3a15:; BB(0x005b3a15);
    /* 005b3a15: push 0xba */ { u32 v = 0xbau; r_esp -= 4; W32(r_esp, v); }
    /* 005b3a1a: push 0x6d0b5c */ { u32 v = 0x6d0b5cu; r_esp -= 4; W32(r_esp, v); }
    /* 005b3a1f: push 0x6b4b50 */ { u32 v = 0x6b4b50u; r_esp -= 4; W32(r_esp, v); }
    /* 005b3a24: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5b3a29u); f_005e9f20();
    /* 005b3a29: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005b3a2c:; BB(0x005b3a2c);
    /* 005b3a2c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b3a2f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b3a30: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b3a33: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b3a34: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005b3a37: call 0x5b5010 */ r_esp -= 4; W32(r_esp, 0x5b3a3cu); f_005b5010();
    /* 005b3a3c: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b3a3f: jne 0x5b3b36 */ if (!fZ) goto L_005b3b36;
L_005b3a45:; BB(0x005b3a45);
    /* 005b3a45: cmp dword ptr [ebp - 4], 0x15 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b3a49: jg 0x5b3a60 */ if ((!fZ&&fS==fO)) goto L_005b3a60;
L_005b3a4b:; BB(0x005b3a4b);
    /* 005b3a4b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b3a4e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b3a4f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b3a52: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b3a53: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005b3a56: call 0x5b4f50 */ r_esp -= 4; W32(r_esp, 0x5b3a5bu); f_005b4f50();
    /* 005b3a5b: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b3a5e: jge 0x5b3aa5 */ if ((fS==fO)) goto L_005b3aa5;
L_005b3a60:; BB(0x005b3a60);
    /* 005b3a60: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b3a62: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b3a64: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b3a66: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b3a69: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b3a6a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b3a6d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b3a6e: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005b3a71: call 0x5b67d0 */ r_esp -= 4; W32(r_esp, 0x5b3a76u); f_005b67d0();
    /* 005b3a76: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b3a78: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b3a7b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b3a7c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b3a7f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b3a80: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005b3a83: call 0x5b71a0 */ r_esp -= 4; W32(r_esp, 0x5b3a88u); f_005b71a0();
    /* 005b3a88: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b3a8b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b3a8c: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5b3a91u); f_005dcb00();
    /* 005b3a91: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b3a94: mov byte ptr [eax + 0x4b0], 0 */ W8((u32)(r_eax+0x4b0u), 0x0u);
    /* 005b3a9b: jmp 0x5b3b54 */ goto L_005b3b54;
L_005b3aa5:; BB(0x005b3aa5);
    /* 005b3aa5: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b3aa8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b3aa9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b3aac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b3aad: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005b3ab0: call 0x5b4f50 */ r_esp -= 4; W32(r_esp, 0x5b3ab5u); f_005b4f50();
    /* 005b3ab5: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b3ab8: jne 0x5b3af9 */ if (!fZ) goto L_005b3af9;
L_005b3aba:; BB(0x005b3aba);
    /* 005b3aba: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b3abc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b3abe: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005b3ac0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b3ac3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b3ac4: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b3ac7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b3ac8: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005b3acb: call 0x5b67d0 */ r_esp -= 4; W32(r_esp, 0x5b3ad0u); f_005b67d0();
    /* 005b3ad0: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005b3ad2: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b3ad5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b3ad6: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b3ad9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b3ada: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005b3add: call 0x5b71a0 */ r_esp -= 4; W32(r_esp, 0x5b3ae2u); f_005b71a0();
    /* 005b3ae2: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b3ae5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b3ae6: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5b3aebu); f_005dcb00();
    /* 005b3aeb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b3aee: mov byte ptr [eax + 0x4b0], 0 */ W8((u32)(r_eax+0x4b0u), 0x0u);
    /* 005b3af5: jmp 0x5b3b54 */ goto L_005b3b54;
L_005b3af9:; BB(0x005b3af9);
    /* 005b3af9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b3afb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b3afd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b3aff: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b3b02: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b3b03: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b3b06: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b3b07: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005b3b0a: call 0x5b67d0 */ r_esp -= 4; W32(r_esp, 0x5b3b0fu); f_005b67d0();
    /* 005b3b0f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b3b11: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b3b14: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b3b15: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b3b18: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b3b19: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005b3b1c: call 0x5b71a0 */ r_esp -= 4; W32(r_esp, 0x5b3b21u); f_005b71a0();
    /* 005b3b21: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b3b24: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b3b25: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5b3b2au); f_005dcb00();
    /* 005b3b2a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b3b2d: mov byte ptr [eax + 0x4b0], 1 */ W8((u32)(r_eax+0x4b0u), 0x1u);
    /* 005b3b34: jmp 0x5b3b54 */ goto L_005b3b54;
L_005b3b36:; BB(0x005b3b36);
    /* 005b3b36: jmp 0x5b39e2 */ goto L_005b39e2;
L_005b3b3b:; BB(0x005b3b3b);
    /* 005b3b3b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b3b3e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b3b3f: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5b3b44u); f_005dcb00();
    /* 005b3b44: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b3b47: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005b3b4a: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005b3b4d: mov byte ptr [eax + 0x4a2], 1 */ W8((u32)(r_eax+0x4a2u), 0x1u);
L_005b3b54:; BB(0x005b3b54);
    /* 005b3b54: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b3b55: mov esp, ebp */ r_esp = r_ebp;
    /* 005b3b57: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b3b58: ret 4 */ FN_RET(0x005b3870); r_esp += 8; return;
}

void f_005b40a0(void) /* royalmatchstate::func_005b40a0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b40a0);
    /* 005b40a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b40a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005b40a3: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b40a6: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005b40a9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b40ac: call 0x5b4f00 */ r_esp -= 4; W32(r_esp, 0x5b40b1u); f_005b4f00();
    /* 005b40b1: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005b40b4: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b40b7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b40b8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b40bb: call 0x5b4e50 */ r_esp -= 4; W32(r_esp, 0x5b40c0u); f_005b4e50();
    /* 005b40c0: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005b40c3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b40c6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b40c7: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b40ca: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b40cb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b40ce: call 0x5b3710 */ r_esp -= 4; W32(r_esp, 0x5b40d3u); f_005b3710();
    /* 005b40d3: mov byte ptr [ebp - 0xa], al */ W8((u32)(r_ebp+0xfffffff6u), (u8)r_eax);
    /* 005b40d6: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b40d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b40da: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b40dd: call 0x5b3430 */ r_esp -= 4; W32(r_esp, 0x5b40e2u); f_005b3430();
    /* 005b40e2: mov byte ptr [ebp - 1], al */ W8((u32)(r_ebp+0xffffffffu), (u8)r_eax);
    /* 005b40e5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b40e8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b40e9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b40ec: call 0x5b37f0 */ r_esp -= 4; W32(r_esp, 0x5b40f1u); f_005b37f0();
    /* 005b40f1: mov byte ptr [ebp - 9], al */ W8((u32)(r_ebp+0xfffffff7u), (u8)r_eax);
    /* 005b40f4: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005b40f7: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 005b40fa: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005b40fd: sub eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005b4100: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005b4103: cmp dword ptr [ebp - 0x18], 0x11 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005b4107: ja 0x5b4de5 */ if ((!fC&&!fZ)) goto L_005b4de5;
L_005b410d:; BB(0x005b410d);
    /* 005b410d: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005b4110: jmp dword ptr [ecx*4 + 0x5b4e08] */ { u32 t = R32((u32)(r_ecx*4+0x5b4e08u)); switch (t) { case 0x5b4117u: goto L_005b4117; case 0x5b417cu: goto L_005b417c; case 0x5b419bu: goto L_005b419b; case 0x5b4200u: goto L_005b4200; case 0x5b421fu: goto L_005b421f; case 0x5b42a6u: goto L_005b42a6; case 0x5b42f5u: goto L_005b42f5; case 0x5b43a0u: goto L_005b43a0; case 0x5b4405u: goto L_005b4405; case 0x5b4558u: goto L_005b4558; case 0x5b464cu: goto L_005b464c; case 0x5b4786u: goto L_005b4786; case 0x5b48ddu: goto L_005b48dd; case 0x5b4a88u: goto L_005b4a88; case 0x5b4b37u: goto L_005b4b37; case 0x5b4d22u: goto L_005b4d22; case 0x5b4d65u: goto L_005b4d65; case 0x5b4dc9u: goto L_005b4dc9; default: UNSUP(0x005b4110, "jump table entry is not a known target"); } }
L_005b4117:; BB(0x005b4117);
    /* 005b4117: movzx edx, byte ptr [ebp - 0xa] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffff6u));
    /* 005b411b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b411d: je 0x5b415d */ if (fZ) goto L_005b415d;
L_005b411f:; BB(0x005b411f);
    /* 005b411f: cmp dword ptr [ebp + 0x10], 8 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b4123: jge 0x5b4141 */ if ((fS==fO)) goto L_005b4141;
L_005b4125:; BB(0x005b4125);
    /* 005b4125: push 0x6d16b8 */ { u32 v = 0x6d16b8u; r_esp -= 4; W32(r_esp, v); }
    /* 005b412a: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b412fu); f_00630f40();
    /* 005b412f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b4132: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b4133: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b4136: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b4137: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5b413cu); f_00686d8e();
    /* 005b413c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b413f: jmp 0x5b415b */ goto L_005b415b;
L_005b4141:; BB(0x005b4141);
    /* 005b4141: push 0x6d1694 */ { u32 v = 0x6d1694u; r_esp -= 4; W32(r_esp, v); }
    /* 005b4146: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b414bu); f_00630f40();
    /* 005b414b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b414e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b414f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b4152: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b4153: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5b4158u); f_00686d8e();
    /* 005b4158: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005b415b:; BB(0x005b415b);
    /* 005b415b: jmp 0x5b4177 */ goto L_005b4177;
L_005b415d:; BB(0x005b415d);
    /* 005b415d: push 0x6d1674 */ { u32 v = 0x6d1674u; r_esp -= 4; W32(r_esp, v); }
    /* 005b4162: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b4167u); f_00630f40();
    /* 005b4167: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b416a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b416b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b416e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b416f: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5b4174u); f_00686d8e();
    /* 005b4174: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005b4177:; BB(0x005b4177);
    /* 005b4177: jmp 0x5b4e00 */ goto L_005b4e00;
L_005b417c:; BB(0x005b417c);
    /* 005b417c: push 0x6d1674 */ { u32 v = 0x6d1674u; r_esp -= 4; W32(r_esp, v); }
    /* 005b4181: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b4186u); f_00630f40();
    /* 005b4186: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b4189: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b418a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b418d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b418e: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5b4193u); f_00686d8e();
    /* 005b4193: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b4196: jmp 0x5b4e00 */ goto L_005b4e00;
L_005b419b:; BB(0x005b419b);
    /* 005b419b: movzx ecx, byte ptr [ebp - 0xa] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffff6u));
    /* 005b419f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b41a1: je 0x5b41e1 */ if (fZ) goto L_005b41e1;
L_005b41a3:; BB(0x005b41a3);
    /* 005b41a3: cmp dword ptr [ebp + 0x10], 8 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b41a7: jge 0x5b41c5 */ if ((fS==fO)) goto L_005b41c5;
L_005b41a9:; BB(0x005b41a9);
    /* 005b41a9: push 0x6d1650 */ { u32 v = 0x6d1650u; r_esp -= 4; W32(r_esp, v); }
    /* 005b41ae: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b41b3u); f_00630f40();
    /* 005b41b3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b41b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b41b7: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b41ba: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b41bb: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5b41c0u); f_00686d8e();
    /* 005b41c0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b41c3: jmp 0x5b41df */ goto L_005b41df;
L_005b41c5:; BB(0x005b41c5);
    /* 005b41c5: push 0x6d162c */ { u32 v = 0x6d162cu; r_esp -= 4; W32(r_esp, v); }
    /* 005b41ca: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b41cfu); f_00630f40();
    /* 005b41cf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b41d2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b41d3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b41d6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b41d7: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5b41dcu); f_00686d8e();
    /* 005b41dc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005b41df:; BB(0x005b41df);
    /* 005b41df: jmp 0x5b41fb */ goto L_005b41fb;
L_005b41e1:; BB(0x005b41e1);
    /* 005b41e1: push 0x6d1674 */ { u32 v = 0x6d1674u; r_esp -= 4; W32(r_esp, v); }
    /* 005b41e6: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b41ebu); f_00630f40();
    /* 005b41eb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b41ee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b41ef: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b41f2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b41f3: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5b41f8u); f_00686d8e();
    /* 005b41f8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005b41fb:; BB(0x005b41fb);
    /* 005b41fb: jmp 0x5b4e00 */ goto L_005b4e00;
L_005b4200:; BB(0x005b4200);
    /* 005b4200: push 0x6d1674 */ { u32 v = 0x6d1674u; r_esp -= 4; W32(r_esp, v); }
    /* 005b4205: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b420au); f_00630f40();
    /* 005b420a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b420d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b420e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b4211: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b4212: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5b4217u); f_00686d8e();
    /* 005b4217: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b421a: jmp 0x5b4e00 */ goto L_005b4e00;
L_005b421f:; BB(0x005b421f);
    /* 005b421f: movzx eax, byte ptr [ebp - 0xa] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffff6u));
    /* 005b4223: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b4225: je 0x5b4287 */ if (fZ) goto L_005b4287;
L_005b4227:; BB(0x005b4227);
    /* 005b4227: cmp dword ptr [ebp + 0x10], 4 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b422b: jg 0x5b4249 */ if ((!fZ&&fS==fO)) goto L_005b4249;
L_005b422d:; BB(0x005b422d);
    /* 005b422d: push 0x6d1608 */ { u32 v = 0x6d1608u; r_esp -= 4; W32(r_esp, v); }
    /* 005b4232: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b4237u); f_00630f40();
    /* 005b4237: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b423a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b423b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b423e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b423f: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5b4244u); f_00686d8e();
    /* 005b4244: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b4247: jmp 0x5b4285 */ goto L_005b4285;
L_005b4249:; BB(0x005b4249);
    /* 005b4249: cmp dword ptr [ebp + 0x10], 6 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b424d: jg 0x5b426b */ if ((!fZ&&fS==fO)) goto L_005b426b;
L_005b424f:; BB(0x005b424f);
    /* 005b424f: push 0x6d15e0 */ { u32 v = 0x6d15e0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b4254: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b4259u); f_00630f40();
    /* 005b4259: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b425c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b425d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b4260: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b4261: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5b4266u); f_00686d8e();
    /* 005b4266: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b4269: jmp 0x5b4285 */ goto L_005b4285;
L_005b426b:; BB(0x005b426b);
    /* 005b426b: push 0x6d15bc */ { u32 v = 0x6d15bcu; r_esp -= 4; W32(r_esp, v); }
    /* 005b4270: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b4275u); f_00630f40();
    /* 005b4275: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b4278: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b4279: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b427c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b427d: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5b4282u); f_00686d8e();
    /* 005b4282: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005b4285:; BB(0x005b4285);
    /* 005b4285: jmp 0x5b42a1 */ goto L_005b42a1;
L_005b4287:; BB(0x005b4287);
    /* 005b4287: push 0x6d1674 */ { u32 v = 0x6d1674u; r_esp -= 4; W32(r_esp, v); }
    /* 005b428c: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b4291u); f_00630f40();
    /* 005b4291: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b4294: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b4295: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b4298: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b4299: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5b429eu); f_00686d8e();
    /* 005b429e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005b42a1:; BB(0x005b42a1);
    /* 005b42a1: jmp 0x5b4e00 */ goto L_005b4e00;
L_005b42a6:; BB(0x005b42a6);
    /* 005b42a6: movzx edx, byte ptr [ebp - 1] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 005b42aa: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b42ac: je 0x5b42d6 */ if (fZ) goto L_005b42d6;
L_005b42ae:; BB(0x005b42ae);
    /* 005b42ae: cmp dword ptr [ebp + 0x10], 3 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b42b2: jl 0x5b42d6 */ if ((fS!=fO)) goto L_005b42d6;
L_005b42b4:; BB(0x005b42b4);
    /* 005b42b4: cmp dword ptr [ebp + 0x10], 6 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b42b8: jg 0x5b42d6 */ if ((!fZ&&fS==fO)) goto L_005b42d6;
L_005b42ba:; BB(0x005b42ba);
    /* 005b42ba: push 0x6d1598 */ { u32 v = 0x6d1598u; r_esp -= 4; W32(r_esp, v); }
    /* 005b42bf: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b42c4u); f_00630f40();
    /* 005b42c4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b42c7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b42c8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b42cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b42cc: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5b42d1u); f_00686d8e();
    /* 005b42d1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b42d4: jmp 0x5b42f0 */ goto L_005b42f0;
L_005b42d6:; BB(0x005b42d6);
    /* 005b42d6: push 0x6d1674 */ { u32 v = 0x6d1674u; r_esp -= 4; W32(r_esp, v); }
    /* 005b42db: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b42e0u); f_00630f40();
    /* 005b42e0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b42e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b42e4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b42e7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b42e8: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5b42edu); f_00686d8e();
    /* 005b42ed: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005b42f0:; BB(0x005b42f0);
    /* 005b42f0: jmp 0x5b4e00 */ goto L_005b4e00;
L_005b42f5:; BB(0x005b42f5);
    /* 005b42f5: movzx edx, byte ptr [ebp - 0xa] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffff6u));
    /* 005b42f9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b42fb: je 0x5b433b */ if (fZ) goto L_005b433b;
L_005b42fd:; BB(0x005b42fd);
    /* 005b42fd: cmp dword ptr [ebp + 0x10], 9 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b4301: jg 0x5b431f */ if ((!fZ&&fS==fO)) goto L_005b431f;
L_005b4303:; BB(0x005b4303);
    /* 005b4303: push 0x6d1578 */ { u32 v = 0x6d1578u; r_esp -= 4; W32(r_esp, v); }
    /* 005b4308: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b430du); f_00630f40();
    /* 005b430d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b4310: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b4311: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b4314: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b4315: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5b431au); f_00686d8e();
    /* 005b431a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b431d: jmp 0x5b4339 */ goto L_005b4339;
L_005b431f:; BB(0x005b431f);
    /* 005b431f: push 0x6d1550 */ { u32 v = 0x6d1550u; r_esp -= 4; W32(r_esp, v); }
    /* 005b4324: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b4329u); f_00630f40();
    /* 005b4329: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b432c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b432d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b4330: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b4331: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5b4336u); f_00686d8e();
    /* 005b4336: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005b4339:; BB(0x005b4339);
    /* 005b4339: jmp 0x5b439b */ goto L_005b439b;
L_005b433b:; BB(0x005b433b);
    /* 005b433b: movzx edx, byte ptr [ebp - 1] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 005b433f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b4341: je 0x5b4381 */ if (fZ) goto L_005b4381;
L_005b4343:; BB(0x005b4343);
    /* 005b4343: cmp dword ptr [ebp + 0x10], 9 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b4347: jg 0x5b4365 */ if ((!fZ&&fS==fO)) goto L_005b4365;
L_005b4349:; BB(0x005b4349);
    /* 005b4349: push 0x6d152c */ { u32 v = 0x6d152cu; r_esp -= 4; W32(r_esp, v); }
    /* 005b434e: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b4353u); f_00630f40();
    /* 005b4353: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b4356: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b4357: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b435a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b435b: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5b4360u); f_00686d8e();
    /* 005b4360: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b4363: jmp 0x5b437f */ goto L_005b437f;
L_005b4365:; BB(0x005b4365);
    /* 005b4365: push 0x6d1500 */ { u32 v = 0x6d1500u; r_esp -= 4; W32(r_esp, v); }
    /* 005b436a: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b436fu); f_00630f40();
    /* 005b436f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b4372: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b4373: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b4376: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b4377: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5b437cu); f_00686d8e();
    /* 005b437c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005b437f:; BB(0x005b437f);
    /* 005b437f: jmp 0x5b439b */ goto L_005b439b;
L_005b4381:; BB(0x005b4381);
    /* 005b4381: push 0x6d1674 */ { u32 v = 0x6d1674u; r_esp -= 4; W32(r_esp, v); }
    /* 005b4386: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b438bu); f_00630f40();
    /* 005b438b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b438e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b438f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b4392: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b4393: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5b4398u); f_00686d8e();
    /* 005b4398: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005b439b:; BB(0x005b439b);
    /* 005b439b: jmp 0x5b4e00 */ goto L_005b4e00;
L_005b43a0:; BB(0x005b43a0);
    /* 005b43a0: movzx eax, byte ptr [ebp - 1] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 005b43a4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b43a6: je 0x5b43e6 */ if (fZ) goto L_005b43e6;
L_005b43a8:; BB(0x005b43a8);
    /* 005b43a8: cmp dword ptr [ebp + 0x10], 0xa */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b43ac: jg 0x5b43ca */ if ((!fZ&&fS==fO)) goto L_005b43ca;
L_005b43ae:; BB(0x005b43ae);
    /* 005b43ae: push 0x6d14dc */ { u32 v = 0x6d14dcu; r_esp -= 4; W32(r_esp, v); }
    /* 005b43b3: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b43b8u); f_00630f40();
    /* 005b43b8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b43bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b43bc: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b43bf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b43c0: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5b43c5u); f_00686d8e();
    /* 005b43c5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b43c8: jmp 0x5b43e4 */ goto L_005b43e4;
L_005b43ca:; BB(0x005b43ca);
    /* 005b43ca: push 0x6d14b4 */ { u32 v = 0x6d14b4u; r_esp -= 4; W32(r_esp, v); }
    /* 005b43cf: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b43d4u); f_00630f40();
    /* 005b43d4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b43d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b43d8: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b43db: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b43dc: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5b43e1u); f_00686d8e();
    /* 005b43e1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005b43e4:; BB(0x005b43e4);
    /* 005b43e4: jmp 0x5b4400 */ goto L_005b4400;
L_005b43e6:; BB(0x005b43e6);
    /* 005b43e6: push 0x6d1674 */ { u32 v = 0x6d1674u; r_esp -= 4; W32(r_esp, v); }
    /* 005b43eb: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b43f0u); f_00630f40();
    /* 005b43f0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b43f3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b43f4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b43f7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b43f8: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5b43fdu); f_00686d8e();
    /* 005b43fd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005b4400:; BB(0x005b4400);
    /* 005b4400: jmp 0x5b4e00 */ goto L_005b4e00;
L_005b4405:; BB(0x005b4405);
    /* 005b4405: movzx ecx, byte ptr [ebp + 0x14] */ r_ecx = (u32)R8((u32)(r_ebp+0x14u));
    /* 005b4409: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b440b: je 0x5b4450 */ if (fZ) goto L_005b4450;
L_005b440d:; BB(0x005b440d);
    /* 005b440d: movzx edx, byte ptr [ebp - 0xa] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffff6u));
    /* 005b4411: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b4413: je 0x5b4431 */ if (fZ) goto L_005b4431;
L_005b4415:; BB(0x005b4415);
    /* 005b4415: push 0x6d1490 */ { u32 v = 0x6d1490u; r_esp -= 4; W32(r_esp, v); }
    /* 005b441a: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b441fu); f_00630f40();
    /* 005b441f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b4422: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b4423: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b4426: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b4427: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5b442cu); f_00686d8e();
    /* 005b442c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b442f: jmp 0x5b444b */ goto L_005b444b;
L_005b4431:; BB(0x005b4431);
    /* 005b4431: push 0x6d1674 */ { u32 v = 0x6d1674u; r_esp -= 4; W32(r_esp, v); }
    /* 005b4436: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b443bu); f_00630f40();
    /* 005b443b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b443e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b443f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b4442: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b4443: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5b4448u); f_00686d8e();
    /* 005b4448: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005b444b:; BB(0x005b444b);
    /* 005b444b: jmp 0x5b4553 */ goto L_005b4553;
L_005b4450:; BB(0x005b4450);
    /* 005b4450: movzx edx, byte ptr [ebp - 0xa] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffff6u));
    /* 005b4454: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b4456: je 0x5b44c3 */ if (fZ) goto L_005b44c3;
L_005b4458:; BB(0x005b4458);
    /* 005b4458: cmp dword ptr [ebp + 0x10], 6 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b445c: jg 0x5b447a */ if ((!fZ&&fS==fO)) goto L_005b447a;
L_005b445e:; BB(0x005b445e);
    /* 005b445e: push 0x6d146c */ { u32 v = 0x6d146cu; r_esp -= 4; W32(r_esp, v); }
    /* 005b4463: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b4468u); f_00630f40();
    /* 005b4468: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b446b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b446c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b446f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b4470: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5b4475u); f_00686d8e();
    /* 005b4475: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b4478: jmp 0x5b44be */ goto L_005b44be;
L_005b447a:; BB(0x005b447a);
    /* 005b447a: cmp dword ptr [ebp + 0x10], 0xa */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b447e: jg 0x5b44a4 */ if ((!fZ&&fS==fO)) goto L_005b44a4;
L_005b4480:; BB(0x005b4480);
    /* 005b4480: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005b4483: add ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b4486: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b4487: push 0x6d1434 */ { u32 v = 0x6d1434u; r_esp -= 4; W32(r_esp, v); }
    /* 005b448c: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b4491u); f_00630f40();
    /* 005b4491: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b4494: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b4495: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b4498: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b4499: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x5b449fu); call_ind(t); }
    /* 005b449f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b44a2: jmp 0x5b44be */ goto L_005b44be;
L_005b44a4:; BB(0x005b44a4);
    /* 005b44a4: push 0x6d1400 */ { u32 v = 0x6d1400u; r_esp -= 4; W32(r_esp, v); }
    /* 005b44a9: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b44aeu); f_00630f40();
    /* 005b44ae: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b44b1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b44b2: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b44b5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b44b6: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5b44bbu); f_00686d8e();
    /* 005b44bb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005b44be:; BB(0x005b44be);
    /* 005b44be: jmp 0x5b4553 */ goto L_005b4553;
L_005b44c3:; BB(0x005b44c3);
    /* 005b44c3: cmp dword ptr [ebp + 0x10], 3 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b44c7: jg 0x5b44e5 */ if ((!fZ&&fS==fO)) goto L_005b44e5;
L_005b44c9:; BB(0x005b44c9);
    /* 005b44c9: push 0x6d13c4 */ { u32 v = 0x6d13c4u; r_esp -= 4; W32(r_esp, v); }
    /* 005b44ce: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b44d3u); f_00630f40();
    /* 005b44d3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b44d6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b44d7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b44da: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b44db: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5b44e0u); f_00686d8e();
    /* 005b44e0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b44e3: jmp 0x5b4553 */ goto L_005b4553;
L_005b44e5:; BB(0x005b44e5);
    /* 005b44e5: cmp dword ptr [ebp + 0x10], 6 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b44e9: jg 0x5b450f */ if ((!fZ&&fS==fO)) goto L_005b450f;
L_005b44eb:; BB(0x005b44eb);
    /* 005b44eb: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005b44ee: add edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b44f1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b44f2: push 0x6d1398 */ { u32 v = 0x6d1398u; r_esp -= 4; W32(r_esp, v); }
    /* 005b44f7: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b44fcu); f_00630f40();
    /* 005b44fc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b44ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b4500: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b4503: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b4504: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x5b450au); call_ind(t); }
    /* 005b450a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b450d: jmp 0x5b4553 */ goto L_005b4553;
L_005b450f:; BB(0x005b450f);
    /* 005b450f: cmp dword ptr [ebp + 0x10], 0xa */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b4513: jg 0x5b4539 */ if ((!fZ&&fS==fO)) goto L_005b4539;
L_005b4515:; BB(0x005b4515);
    /* 005b4515: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005b4518: add ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b451b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b451c: push 0x6d136c */ { u32 v = 0x6d136cu; r_esp -= 4; W32(r_esp, v); }
    /* 005b4521: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b4526u); f_00630f40();
    /* 005b4526: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b4529: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b452a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b452d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b452e: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x5b4534u); call_ind(t); }
    /* 005b4534: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b4537: jmp 0x5b4553 */ goto L_005b4553;
L_005b4539:; BB(0x005b4539);
    /* 005b4539: push 0x6d1340 */ { u32 v = 0x6d1340u; r_esp -= 4; W32(r_esp, v); }
    /* 005b453e: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b4543u); f_00630f40();
    /* 005b4543: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b4546: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b4547: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b454a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b454b: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5b4550u); f_00686d8e();
    /* 005b4550: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005b4553:; BB(0x005b4553);
    /* 005b4553: jmp 0x5b4e00 */ goto L_005b4e00;
L_005b4558:; BB(0x005b4558);
    /* 005b4558: movzx ecx, byte ptr [ebp + 0x14] */ r_ecx = (u32)R8((u32)(r_ebp+0x14u));
    /* 005b455c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b455e: je 0x5b45af */ if (fZ) goto L_005b45af;
L_005b4560:; BB(0x005b4560);
    /* 005b4560: movzx edx, byte ptr [ebp - 1] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 005b4564: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b4566: je 0x5b456e */ if (fZ) goto L_005b456e;
L_005b4568:; BB(0x005b4568);
    /* 005b4568: cmp dword ptr [ebp + 0x10], 5 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b456c: je 0x5b4574 */ if (fZ) goto L_005b4574;
L_005b456e:; BB(0x005b456e);
    /* 005b456e: cmp dword ptr [ebp + 0x10], 6 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b4572: jne 0x5b4590 */ if (!fZ) goto L_005b4590;
L_005b4574:; BB(0x005b4574);
    /* 005b4574: push 0x6d1310 */ { u32 v = 0x6d1310u; r_esp -= 4; W32(r_esp, v); }
    /* 005b4579: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b457eu); f_00630f40();
    /* 005b457e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b4581: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b4582: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b4585: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b4586: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5b458bu); f_00686d8e();
    /* 005b458b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b458e: jmp 0x5b45aa */ goto L_005b45aa;
L_005b4590:; BB(0x005b4590);
    /* 005b4590: push 0x6d1674 */ { u32 v = 0x6d1674u; r_esp -= 4; W32(r_esp, v); }
    /* 005b4595: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b459au); f_00630f40();
    /* 005b459a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b459d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b459e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b45a1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b45a2: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5b45a7u); f_00686d8e();
    /* 005b45a7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005b45aa:; BB(0x005b45aa);
    /* 005b45aa: jmp 0x5b4647 */ goto L_005b4647;
L_005b45af:; BB(0x005b45af);
    /* 005b45af: cmp dword ptr [ebp + 0x10], 3 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b45b3: jg 0x5b45d9 */ if ((!fZ&&fS==fO)) goto L_005b45d9;
L_005b45b5:; BB(0x005b45b5);
    /* 005b45b5: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005b45b8: add edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b45bb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b45bc: push 0x6d12d8 */ { u32 v = 0x6d12d8u; r_esp -= 4; W32(r_esp, v); }
    /* 005b45c1: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b45c6u); f_00630f40();
    /* 005b45c6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b45c9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b45ca: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b45cd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b45ce: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x5b45d4u); call_ind(t); }
    /* 005b45d4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b45d7: jmp 0x5b4647 */ goto L_005b4647;
L_005b45d9:; BB(0x005b45d9);
    /* 005b45d9: cmp dword ptr [ebp + 0x10], 6 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b45dd: jg 0x5b4603 */ if ((!fZ&&fS==fO)) goto L_005b4603;
L_005b45df:; BB(0x005b45df);
    /* 005b45df: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005b45e2: add ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b45e5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b45e6: push 0x6d12ac */ { u32 v = 0x6d12acu; r_esp -= 4; W32(r_esp, v); }
    /* 005b45eb: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b45f0u); f_00630f40();
    /* 005b45f0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b45f3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b45f4: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b45f7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b45f8: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x5b45feu); call_ind(t); }
    /* 005b45fe: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b4601: jmp 0x5b4647 */ goto L_005b4647;
L_005b4603:; BB(0x005b4603);
    /* 005b4603: cmp dword ptr [ebp + 0x10], 0xa */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b4607: jg 0x5b462d */ if ((!fZ&&fS==fO)) goto L_005b462d;
L_005b4609:; BB(0x005b4609);
    /* 005b4609: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005b460c: add eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b460f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b4610: push 0x6d1288 */ { u32 v = 0x6d1288u; r_esp -= 4; W32(r_esp, v); }
    /* 005b4615: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b461au); f_00630f40();
    /* 005b461a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b461d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b461e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b4621: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b4622: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x5b4628u); call_ind(t); }
    /* 005b4628: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b462b: jmp 0x5b4647 */ goto L_005b4647;
L_005b462d:; BB(0x005b462d);
    /* 005b462d: push 0x6d1268 */ { u32 v = 0x6d1268u; r_esp -= 4; W32(r_esp, v); }
    /* 005b4632: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b4637u); f_00630f40();
    /* 005b4637: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b463a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b463b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b463e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b463f: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5b4644u); f_00686d8e();
    /* 005b4644: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005b4647:; BB(0x005b4647);
    /* 005b4647: jmp 0x5b4e00 */ goto L_005b4e00;
L_005b464c:; BB(0x005b464c);
    /* 005b464c: movzx eax, byte ptr [ebp + 0x14] */ r_eax = (u32)R8((u32)(r_ebp+0x14u));
    /* 005b4650: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b4652: je 0x5b46a3 */ if (fZ) goto L_005b46a3;
L_005b4654:; BB(0x005b4654);
    /* 005b4654: movzx ecx, byte ptr [ebp - 1] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 005b4658: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b465a: je 0x5b4662 */ if (fZ) goto L_005b4662;
L_005b465c:; BB(0x005b465c);
    /* 005b465c: cmp dword ptr [ebp + 0x10], 5 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b4660: je 0x5b4668 */ if (fZ) goto L_005b4668;
L_005b4662:; BB(0x005b4662);
    /* 005b4662: cmp dword ptr [ebp + 0x10], 6 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b4666: jne 0x5b4684 */ if (!fZ) goto L_005b4684;
L_005b4668:; BB(0x005b4668);
    /* 005b4668: push 0x6d1238 */ { u32 v = 0x6d1238u; r_esp -= 4; W32(r_esp, v); }
    /* 005b466d: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b4672u); f_00630f40();
    /* 005b4672: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b4675: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b4676: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b4679: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b467a: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5b467fu); f_00686d8e();
    /* 005b467f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b4682: jmp 0x5b469e */ goto L_005b469e;
L_005b4684:; BB(0x005b4684);
    /* 005b4684: push 0x6d1674 */ { u32 v = 0x6d1674u; r_esp -= 4; W32(r_esp, v); }
    /* 005b4689: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b468eu); f_00630f40();
    /* 005b468e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b4691: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b4692: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b4695: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b4696: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5b469bu); f_00686d8e();
    /* 005b469b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005b469e:; BB(0x005b469e);
    /* 005b469e: jmp 0x5b4781 */ goto L_005b4781;
L_005b46a3:; BB(0x005b46a3);
    /* 005b46a3: movzx ecx, byte ptr [ebp - 0xa] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffff6u));
    /* 005b46a7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b46a9: je 0x5b4713 */ if (fZ) goto L_005b4713;
L_005b46ab:; BB(0x005b46ab);
    /* 005b46ab: cmp dword ptr [ebp + 0x10], 7 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b46af: jg 0x5b46cd */ if ((!fZ&&fS==fO)) goto L_005b46cd;
L_005b46b1:; BB(0x005b46b1);
    /* 005b46b1: push 0x6d120c */ { u32 v = 0x6d120cu; r_esp -= 4; W32(r_esp, v); }
    /* 005b46b6: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b46bbu); f_00630f40();
    /* 005b46bb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b46be: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b46bf: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b46c2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b46c3: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5b46c8u); f_00686d8e();
    /* 005b46c8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b46cb: jmp 0x5b4711 */ goto L_005b4711;
L_005b46cd:; BB(0x005b46cd);
    /* 005b46cd: cmp dword ptr [ebp + 0x10], 0xa */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b46d1: jg 0x5b46f7 */ if ((!fZ&&fS==fO)) goto L_005b46f7;
L_005b46d3:; BB(0x005b46d3);
    /* 005b46d3: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005b46d6: add eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b46d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b46da: push 0x6d11d4 */ { u32 v = 0x6d11d4u; r_esp -= 4; W32(r_esp, v); }
    /* 005b46df: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b46e4u); f_00630f40();
    /* 005b46e4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b46e7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b46e8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b46eb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b46ec: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x5b46f2u); call_ind(t); }
    /* 005b46f2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b46f5: jmp 0x5b4711 */ goto L_005b4711;
L_005b46f7:; BB(0x005b46f7);
    /* 005b46f7: push 0x6d11a0 */ { u32 v = 0x6d11a0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b46fc: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b4701u); f_00630f40();
    /* 005b4701: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b4704: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b4705: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b4708: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b4709: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5b470eu); f_00686d8e();
    /* 005b470e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005b4711:; BB(0x005b4711);
    /* 005b4711: jmp 0x5b4781 */ goto L_005b4781;
L_005b4713:; BB(0x005b4713);
    /* 005b4713: cmp dword ptr [ebp + 0x10], 6 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b4717: jg 0x5b473d */ if ((!fZ&&fS==fO)) goto L_005b473d;
L_005b4719:; BB(0x005b4719);
    /* 005b4719: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005b471c: add eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b471f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b4720: push 0x6d116c */ { u32 v = 0x6d116cu; r_esp -= 4; W32(r_esp, v); }
    /* 005b4725: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b472au); f_00630f40();
    /* 005b472a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b472d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b472e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b4731: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b4732: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x5b4738u); call_ind(t); }
    /* 005b4738: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b473b: jmp 0x5b4781 */ goto L_005b4781;
L_005b473d:; BB(0x005b473d);
    /* 005b473d: cmp dword ptr [ebp + 0x10], 0xa */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b4741: jg 0x5b4767 */ if ((!fZ&&fS==fO)) goto L_005b4767;
L_005b4743:; BB(0x005b4743);
    /* 005b4743: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005b4746: add edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b4749: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b474a: push 0x6d113c */ { u32 v = 0x6d113cu; r_esp -= 4; W32(r_esp, v); }
    /* 005b474f: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b4754u); f_00630f40();
    /* 005b4754: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b4757: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b4758: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b475b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b475c: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x5b4762u); call_ind(t); }
    /* 005b4762: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b4765: jmp 0x5b4781 */ goto L_005b4781;
L_005b4767:; BB(0x005b4767);
    /* 005b4767: push 0x6d110c */ { u32 v = 0x6d110cu; r_esp -= 4; W32(r_esp, v); }
    /* 005b476c: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b4771u); f_00630f40();
    /* 005b4771: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b4774: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b4775: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b4778: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b4779: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5b477eu); f_00686d8e();
    /* 005b477e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005b4781:; BB(0x005b4781);
    /* 005b4781: jmp 0x5b4e00 */ goto L_005b4e00;
L_005b4786:; BB(0x005b4786);
    /* 005b4786: movzx edx, byte ptr [ebp + 0x14] */ r_edx = (u32)R8((u32)(r_ebp+0x14u));
    /* 005b478a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b478c: je 0x5b4840 */ if (fZ) goto L_005b4840;
L_005b4792:; BB(0x005b4792);
    /* 005b4792: cmp dword ptr [ebp + 0x10], 3 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b4796: jg 0x5b47b7 */ if ((!fZ&&fS==fO)) goto L_005b47b7;
L_005b4798:; BB(0x005b4798);
    /* 005b4798: push 0x6d1674 */ { u32 v = 0x6d1674u; r_esp -= 4; W32(r_esp, v); }
    /* 005b479d: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b47a2u); f_00630f40();
    /* 005b47a2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b47a5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b47a6: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b47a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b47aa: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5b47afu); f_00686d8e();
    /* 005b47af: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b47b2: jmp 0x5b483b */ goto L_005b483b;
L_005b47b7:; BB(0x005b47b7);
    /* 005b47b7: cmp dword ptr [ebp + 0x10], 6 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b47bb: jg 0x5b47fd */ if ((!fZ&&fS==fO)) goto L_005b47fd;
L_005b47bd:; BB(0x005b47bd);
    /* 005b47bd: movzx ecx, byte ptr [ebp - 1] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 005b47c1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b47c3: je 0x5b47e1 */ if (fZ) goto L_005b47e1;
L_005b47c5:; BB(0x005b47c5);
    /* 005b47c5: push 0x6d10d8 */ { u32 v = 0x6d10d8u; r_esp -= 4; W32(r_esp, v); }
    /* 005b47ca: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b47cfu); f_00630f40();
    /* 005b47cf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b47d2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b47d3: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b47d6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b47d7: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5b47dcu); f_00686d8e();
    /* 005b47dc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b47df: jmp 0x5b47fb */ goto L_005b47fb;
L_005b47e1:; BB(0x005b47e1);
    /* 005b47e1: push 0x6d1674 */ { u32 v = 0x6d1674u; r_esp -= 4; W32(r_esp, v); }
    /* 005b47e6: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b47ebu); f_00630f40();
    /* 005b47eb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b47ee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b47ef: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b47f2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b47f3: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5b47f8u); f_00686d8e();
    /* 005b47f8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005b47fb:; BB(0x005b47fb);
    /* 005b47fb: jmp 0x5b483b */ goto L_005b483b;
L_005b47fd:; BB(0x005b47fd);
    /* 005b47fd: movzx ecx, byte ptr [ebp - 1] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 005b4801: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b4803: je 0x5b4821 */ if (fZ) goto L_005b4821;
L_005b4805:; BB(0x005b4805);
    /* 005b4805: push 0x6d10ac */ { u32 v = 0x6d10acu; r_esp -= 4; W32(r_esp, v); }
    /* 005b480a: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b480fu); f_00630f40();
    /* 005b480f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b4812: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b4813: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b4816: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b4817: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5b481cu); f_00686d8e();
    /* 005b481c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b481f: jmp 0x5b483b */ goto L_005b483b;
L_005b4821:; BB(0x005b4821);
    /* 005b4821: push 0x6d1674 */ { u32 v = 0x6d1674u; r_esp -= 4; W32(r_esp, v); }
    /* 005b4826: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b482bu); f_00630f40();
    /* 005b482b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b482e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b482f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b4832: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b4833: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5b4838u); f_00686d8e();
    /* 005b4838: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005b483b:; BB(0x005b483b);
    /* 005b483b: jmp 0x5b48d8 */ goto L_005b48d8;
L_005b4840:; BB(0x005b4840);
    /* 005b4840: cmp dword ptr [ebp + 0x10], 6 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b4844: jg 0x5b486a */ if ((!fZ&&fS==fO)) goto L_005b486a;
L_005b4846:; BB(0x005b4846);
    /* 005b4846: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005b4849: add ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b484c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b484d: push 0x6d1078 */ { u32 v = 0x6d1078u; r_esp -= 4; W32(r_esp, v); }
    /* 005b4852: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b4857u); f_00630f40();
    /* 005b4857: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b485a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b485b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b485e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b485f: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x5b4865u); call_ind(t); }
    /* 005b4865: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b4868: jmp 0x5b48d8 */ goto L_005b48d8;
L_005b486a:; BB(0x005b486a);
    /* 005b486a: cmp dword ptr [ebp + 0x10], 0xa */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b486e: jne 0x5b4894 */ if (!fZ) goto L_005b4894;
L_005b4870:; BB(0x005b4870);
    /* 005b4870: movzx eax, byte ptr [ebp - 9] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffff7u));
    /* 005b4874: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b4876: je 0x5b4894 */ if (fZ) goto L_005b4894;
L_005b4878:; BB(0x005b4878);
    /* 005b4878: push 0x6d1044 */ { u32 v = 0x6d1044u; r_esp -= 4; W32(r_esp, v); }
    /* 005b487d: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b4882u); f_00630f40();
    /* 005b4882: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b4885: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b4886: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b4889: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b488a: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5b488fu); f_00686d8e();
    /* 005b488f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b4892: jmp 0x5b48d8 */ goto L_005b48d8;
L_005b4894:; BB(0x005b4894);
    /* 005b4894: cmp dword ptr [ebp + 0x10], 0xa */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b4898: jg 0x5b48be */ if ((!fZ&&fS==fO)) goto L_005b48be;
L_005b489a:; BB(0x005b489a);
    /* 005b489a: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005b489d: add edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b48a0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b48a1: push 0x6d1014 */ { u32 v = 0x6d1014u; r_esp -= 4; W32(r_esp, v); }
    /* 005b48a6: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b48abu); f_00630f40();
    /* 005b48ab: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b48ae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b48af: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b48b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b48b3: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x5b48b9u); call_ind(t); }
    /* 005b48b9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b48bc: jmp 0x5b48d8 */ goto L_005b48d8;
L_005b48be:; BB(0x005b48be);
    /* 005b48be: push 0x6d0fe4 */ { u32 v = 0x6d0fe4u; r_esp -= 4; W32(r_esp, v); }
    /* 005b48c3: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b48c8u); f_00630f40();
    /* 005b48c8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b48cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b48cc: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b48cf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b48d0: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5b48d5u); f_00686d8e();
    /* 005b48d5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005b48d8:; BB(0x005b48d8);
    /* 005b48d8: jmp 0x5b4e00 */ goto L_005b4e00;
L_005b48dd:; BB(0x005b48dd);
    /* 005b48dd: movzx edx, byte ptr [ebp + 0x14] */ r_edx = (u32)R8((u32)(r_ebp+0x14u));
    /* 005b48e1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b48e3: je 0x5b4997 */ if (fZ) goto L_005b4997;
L_005b48e9:; BB(0x005b48e9);
    /* 005b48e9: cmp dword ptr [ebp + 0x10], 3 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b48ed: jg 0x5b490e */ if ((!fZ&&fS==fO)) goto L_005b490e;
L_005b48ef:; BB(0x005b48ef);
    /* 005b48ef: push 0x6d1674 */ { u32 v = 0x6d1674u; r_esp -= 4; W32(r_esp, v); }
    /* 005b48f4: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b48f9u); f_00630f40();
    /* 005b48f9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b48fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b48fd: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b4900: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b4901: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5b4906u); f_00686d8e();
    /* 005b4906: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b4909: jmp 0x5b4992 */ goto L_005b4992;
L_005b490e:; BB(0x005b490e);
    /* 005b490e: cmp dword ptr [ebp + 0x10], 6 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b4912: jg 0x5b4954 */ if ((!fZ&&fS==fO)) goto L_005b4954;
L_005b4914:; BB(0x005b4914);
    /* 005b4914: movzx ecx, byte ptr [ebp - 1] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 005b4918: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b491a: je 0x5b4938 */ if (fZ) goto L_005b4938;
L_005b491c:; BB(0x005b491c);
    /* 005b491c: push 0x6d0fb0 */ { u32 v = 0x6d0fb0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b4921: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b4926u); f_00630f40();
    /* 005b4926: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b4929: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b492a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b492d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b492e: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5b4933u); f_00686d8e();
    /* 005b4933: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b4936: jmp 0x5b4952 */ goto L_005b4952;
L_005b4938:; BB(0x005b4938);
    /* 005b4938: push 0x6d1674 */ { u32 v = 0x6d1674u; r_esp -= 4; W32(r_esp, v); }
    /* 005b493d: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b4942u); f_00630f40();
    /* 005b4942: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b4945: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b4946: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b4949: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b494a: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5b494fu); f_00686d8e();
    /* 005b494f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005b4952:; BB(0x005b4952);
    /* 005b4952: jmp 0x5b4992 */ goto L_005b4992;
L_005b4954:; BB(0x005b4954);
    /* 005b4954: movzx ecx, byte ptr [ebp - 1] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 005b4958: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b495a: je 0x5b4978 */ if (fZ) goto L_005b4978;
L_005b495c:; BB(0x005b495c);
    /* 005b495c: push 0x6d10ac */ { u32 v = 0x6d10acu; r_esp -= 4; W32(r_esp, v); }
    /* 005b4961: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b4966u); f_00630f40();
    /* 005b4966: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b4969: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b496a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b496d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b496e: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5b4973u); f_00686d8e();
    /* 005b4973: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b4976: jmp 0x5b4992 */ goto L_005b4992;
L_005b4978:; BB(0x005b4978);
    /* 005b4978: push 0x6d1674 */ { u32 v = 0x6d1674u; r_esp -= 4; W32(r_esp, v); }
    /* 005b497d: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b4982u); f_00630f40();
    /* 005b4982: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b4985: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b4986: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b4989: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b498a: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5b498fu); f_00686d8e();
    /* 005b498f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005b4992:; BB(0x005b4992);
    /* 005b4992: jmp 0x5b4a83 */ goto L_005b4a83;
L_005b4997:; BB(0x005b4997);
    /* 005b4997: movzx ecx, byte ptr [ebp - 0xa] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffff6u));
    /* 005b499b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b499d: je 0x5b49be */ if (fZ) goto L_005b49be;
L_005b499f:; BB(0x005b499f);
    /* 005b499f: push 0x6d0f8c */ { u32 v = 0x6d0f8cu; r_esp -= 4; W32(r_esp, v); }
    /* 005b49a4: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b49a9u); f_00630f40();
    /* 005b49a9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b49ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b49ad: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b49b0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b49b1: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5b49b6u); f_00686d8e();
    /* 005b49b6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b49b9: jmp 0x5b4a83 */ goto L_005b4a83;
L_005b49be:; BB(0x005b49be);
    /* 005b49be: cmp dword ptr [ebp + 0x10], 6 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b49c2: jg 0x5b49eb */ if ((!fZ&&fS==fO)) goto L_005b49eb;
L_005b49c4:; BB(0x005b49c4);
    /* 005b49c4: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005b49c7: add eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b49ca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b49cb: push 0x6d0f58 */ { u32 v = 0x6d0f58u; r_esp -= 4; W32(r_esp, v); }
    /* 005b49d0: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b49d5u); f_00630f40();
    /* 005b49d5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b49d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b49d9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b49dc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b49dd: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x5b49e3u); call_ind(t); }
    /* 005b49e3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b49e6: jmp 0x5b4a83 */ goto L_005b4a83;
L_005b49eb:; BB(0x005b49eb);
    /* 005b49eb: cmp dword ptr [ebp + 0x10], 9 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b49ef: jl 0x5b4a15 */ if ((fS!=fO)) goto L_005b4a15;
L_005b49f1:; BB(0x005b49f1);
    /* 005b49f1: movzx edx, byte ptr [ebp - 9] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffff7u));
    /* 005b49f5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b49f7: je 0x5b4a15 */ if (fZ) goto L_005b4a15;
L_005b49f9:; BB(0x005b49f9);
    /* 005b49f9: push 0x6d0f24 */ { u32 v = 0x6d0f24u; r_esp -= 4; W32(r_esp, v); }
    /* 005b49fe: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b4a03u); f_00630f40();
    /* 005b4a03: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b4a06: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b4a07: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b4a0a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b4a0b: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5b4a10u); f_00686d8e();
    /* 005b4a10: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b4a13: jmp 0x5b4a83 */ goto L_005b4a83;
L_005b4a15:; BB(0x005b4a15);
    /* 005b4a15: cmp dword ptr [ebp + 0x10], 0xa */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b4a19: jge 0x5b4a3f */ if ((fS==fO)) goto L_005b4a3f;
L_005b4a1b:; BB(0x005b4a1b);
    /* 005b4a1b: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005b4a1e: add ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b4a21: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b4a22: push 0x6d0ef4 */ { u32 v = 0x6d0ef4u; r_esp -= 4; W32(r_esp, v); }
    /* 005b4a27: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b4a2cu); f_00630f40();
    /* 005b4a2c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b4a2f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b4a30: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b4a33: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b4a34: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x5b4a3au); call_ind(t); }
    /* 005b4a3a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b4a3d: jmp 0x5b4a83 */ goto L_005b4a83;
L_005b4a3f:; BB(0x005b4a3f);
    /* 005b4a3f: cmp dword ptr [ebp + 0x10], 0xa */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b4a43: jne 0x5b4a69 */ if (!fZ) goto L_005b4a69;
L_005b4a45:; BB(0x005b4a45);
    /* 005b4a45: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005b4a48: add eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b4a4b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b4a4c: push 0x6d0ec4 */ { u32 v = 0x6d0ec4u; r_esp -= 4; W32(r_esp, v); }
    /* 005b4a51: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b4a56u); f_00630f40();
    /* 005b4a56: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b4a59: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b4a5a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b4a5d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b4a5e: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x5b4a64u); call_ind(t); }
    /* 005b4a64: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b4a67: jmp 0x5b4a83 */ goto L_005b4a83;
L_005b4a69:; BB(0x005b4a69);
    /* 005b4a69: push 0x6d0e94 */ { u32 v = 0x6d0e94u; r_esp -= 4; W32(r_esp, v); }
    /* 005b4a6e: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b4a73u); f_00630f40();
    /* 005b4a73: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b4a76: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b4a77: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b4a7a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b4a7b: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5b4a80u); f_00686d8e();
    /* 005b4a80: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005b4a83:; BB(0x005b4a83);
    /* 005b4a83: jmp 0x5b4e00 */ goto L_005b4e00;
L_005b4a88:; BB(0x005b4a88);
    /* 005b4a88: movzx eax, byte ptr [ebp + 0x14] */ r_eax = (u32)R8((u32)(r_ebp+0x14u));
    /* 005b4a8c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b4a8e: je 0x5b4b18 */ if (fZ) goto L_005b4b18;
L_005b4a94:; BB(0x005b4a94);
    /* 005b4a94: cmp dword ptr [ebp + 0x10], 2 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b4a98: jne 0x5b4ab6 */ if (!fZ) goto L_005b4ab6;
L_005b4a9a:; BB(0x005b4a9a);
    /* 005b4a9a: push 0x6d0e78 */ { u32 v = 0x6d0e78u; r_esp -= 4; W32(r_esp, v); }
    /* 005b4a9f: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b4aa4u); f_00630f40();
    /* 005b4aa4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b4aa7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b4aa8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b4aab: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b4aac: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5b4ab1u); f_00686d8e();
    /* 005b4ab1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b4ab4: jmp 0x5b4b16 */ goto L_005b4b16;
L_005b4ab6:; BB(0x005b4ab6);
    /* 005b4ab6: cmp dword ptr [ebp + 0x10], 6 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b4aba: jg 0x5b4afc */ if ((!fZ&&fS==fO)) goto L_005b4afc;
L_005b4abc:; BB(0x005b4abc);
    /* 005b4abc: movzx edx, byte ptr [ebp - 1] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 005b4ac0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b4ac2: je 0x5b4ae0 */ if (fZ) goto L_005b4ae0;
L_005b4ac4:; BB(0x005b4ac4);
    /* 005b4ac4: push 0x6d0e48 */ { u32 v = 0x6d0e48u; r_esp -= 4; W32(r_esp, v); }
    /* 005b4ac9: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b4aceu); f_00630f40();
    /* 005b4ace: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b4ad1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b4ad2: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b4ad5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b4ad6: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5b4adbu); f_00686d8e();
    /* 005b4adb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b4ade: jmp 0x5b4afa */ goto L_005b4afa;
L_005b4ae0:; BB(0x005b4ae0);
    /* 005b4ae0: push 0x6d0e78 */ { u32 v = 0x6d0e78u; r_esp -= 4; W32(r_esp, v); }
    /* 005b4ae5: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b4aeau); f_00630f40();
    /* 005b4aea: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b4aed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b4aee: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b4af1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b4af2: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5b4af7u); f_00686d8e();
    /* 005b4af7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005b4afa:; BB(0x005b4afa);
    /* 005b4afa: jmp 0x5b4b16 */ goto L_005b4b16;
L_005b4afc:; BB(0x005b4afc);
    /* 005b4afc: push 0x6d0e20 */ { u32 v = 0x6d0e20u; r_esp -= 4; W32(r_esp, v); }
    /* 005b4b01: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b4b06u); f_00630f40();
    /* 005b4b06: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b4b09: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b4b0a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b4b0d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b4b0e: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5b4b13u); f_00686d8e();
    /* 005b4b13: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005b4b16:; BB(0x005b4b16);
    /* 005b4b16: jmp 0x5b4b32 */ goto L_005b4b32;
L_005b4b18:; BB(0x005b4b18);
    /* 005b4b18: push 0x6d0e00 */ { u32 v = 0x6d0e00u; r_esp -= 4; W32(r_esp, v); }
    /* 005b4b1d: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b4b22u); f_00630f40();
    /* 005b4b22: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b4b25: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b4b26: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b4b29: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b4b2a: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5b4b2fu); f_00686d8e();
    /* 005b4b2f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005b4b32:; BB(0x005b4b32);
    /* 005b4b32: jmp 0x5b4e00 */ goto L_005b4e00;
L_005b4b37:; BB(0x005b4b37);
    /* 005b4b37: movzx ecx, byte ptr [ebp + 0x14] */ r_ecx = (u32)R8((u32)(r_ebp+0x14u));
    /* 005b4b3b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b4b3d: je 0x5b4c50 */ if (fZ) goto L_005b4c50;
L_005b4b43:; BB(0x005b4b43);
    /* 005b4b43: cmp dword ptr [ebp + 0x10], 2 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b4b47: jne 0x5b4b68 */ if (!fZ) goto L_005b4b68;
L_005b4b49:; BB(0x005b4b49);
    /* 005b4b49: push 0x6d0de0 */ { u32 v = 0x6d0de0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b4b4e: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b4b53u); f_00630f40();
    /* 005b4b53: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b4b56: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b4b57: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b4b5a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b4b5b: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5b4b60u); f_00686d8e();
    /* 005b4b60: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b4b63: jmp 0x5b4c4b */ goto L_005b4c4b;
L_005b4b68:; BB(0x005b4b68);
    /* 005b4b68: cmp dword ptr [ebp + 0x10], 6 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b4b6c: jg 0x5b4bb1 */ if ((!fZ&&fS==fO)) goto L_005b4bb1;
L_005b4b6e:; BB(0x005b4b6e);
    /* 005b4b6e: movzx eax, byte ptr [ebp - 1] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 005b4b72: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b4b74: je 0x5b4b92 */ if (fZ) goto L_005b4b92;
L_005b4b76:; BB(0x005b4b76);
    /* 005b4b76: push 0x6d0dac */ { u32 v = 0x6d0dacu; r_esp -= 4; W32(r_esp, v); }
    /* 005b4b7b: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b4b80u); f_00630f40();
    /* 005b4b80: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b4b83: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b4b84: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b4b87: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b4b88: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5b4b8du); f_00686d8e();
    /* 005b4b8d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b4b90: jmp 0x5b4bac */ goto L_005b4bac;
L_005b4b92:; BB(0x005b4b92);
    /* 005b4b92: push 0x6d0d80 */ { u32 v = 0x6d0d80u; r_esp -= 4; W32(r_esp, v); }
    /* 005b4b97: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b4b9cu); f_00630f40();
    /* 005b4b9c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b4b9f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b4ba0: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b4ba3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b4ba4: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5b4ba9u); f_00686d8e();
    /* 005b4ba9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005b4bac:; BB(0x005b4bac);
    /* 005b4bac: jmp 0x5b4c4b */ goto L_005b4c4b;
L_005b4bb1:; BB(0x005b4bb1);
    /* 005b4bb1: cmp dword ptr [ebp + 0x10], 8 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b4bb5: jg 0x5b4c07 */ if ((!fZ&&fS==fO)) goto L_005b4c07;
L_005b4bb7:; BB(0x005b4bb7);
    /* 005b4bb7: movzx eax, byte ptr [ebp - 1] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 005b4bbb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b4bbd: je 0x5b4be3 */ if (fZ) goto L_005b4be3;
L_005b4bbf:; BB(0x005b4bbf);
    /* 005b4bbf: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005b4bc2: add ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b4bc5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b4bc6: push 0x6d0d50 */ { u32 v = 0x6d0d50u; r_esp -= 4; W32(r_esp, v); }
    /* 005b4bcb: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b4bd0u); f_00630f40();
    /* 005b4bd0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b4bd3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b4bd4: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b4bd7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b4bd8: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x5b4bdeu); call_ind(t); }
    /* 005b4bde: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b4be1: jmp 0x5b4c05 */ goto L_005b4c05;
L_005b4be3:; BB(0x005b4be3);
    /* 005b4be3: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005b4be6: add eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b4be9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b4bea: push 0x6d0d2c */ { u32 v = 0x6d0d2cu; r_esp -= 4; W32(r_esp, v); }
    /* 005b4bef: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b4bf4u); f_00630f40();
    /* 005b4bf4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b4bf7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b4bf8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b4bfb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b4bfc: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x5b4c02u); call_ind(t); }
    /* 005b4c02: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005b4c05:; BB(0x005b4c05);
    /* 005b4c05: jmp 0x5b4c4b */ goto L_005b4c4b;
L_005b4c07:; BB(0x005b4c07);
    /* 005b4c07: cmp dword ptr [ebp + 0x10], 0xa */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b4c0b: jg 0x5b4c31 */ if ((!fZ&&fS==fO)) goto L_005b4c31;
L_005b4c0d:; BB(0x005b4c0d);
    /* 005b4c0d: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005b4c10: add edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b4c13: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b4c14: push 0x6d0d04 */ { u32 v = 0x6d0d04u; r_esp -= 4; W32(r_esp, v); }
    /* 005b4c19: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b4c1eu); f_00630f40();
    /* 005b4c1e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b4c21: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b4c22: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b4c25: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b4c26: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x5b4c2cu); call_ind(t); }
    /* 005b4c2c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b4c2f: jmp 0x5b4c4b */ goto L_005b4c4b;
L_005b4c31:; BB(0x005b4c31);
    /* 005b4c31: push 0x6d0ce4 */ { u32 v = 0x6d0ce4u; r_esp -= 4; W32(r_esp, v); }
    /* 005b4c36: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b4c3bu); f_00630f40();
    /* 005b4c3b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b4c3e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b4c3f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b4c42: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b4c43: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5b4c48u); f_00686d8e();
    /* 005b4c48: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005b4c4b:; BB(0x005b4c4b);
    /* 005b4c4b: jmp 0x5b4d1d */ goto L_005b4d1d;
L_005b4c50:; BB(0x005b4c50);
    /* 005b4c50: movzx edx, byte ptr [ebp - 0xa] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffff6u));
    /* 005b4c54: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b4c56: je 0x5b4d03 */ if (fZ) goto L_005b4d03;
L_005b4c5c:; BB(0x005b4c5c);
    /* 005b4c5c: cmp dword ptr [ebp + 0x10], 6 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b4c60: jg 0x5b4c81 */ if ((!fZ&&fS==fO)) goto L_005b4c81;
L_005b4c62:; BB(0x005b4c62);
    /* 005b4c62: push 0x6d0cb8 */ { u32 v = 0x6d0cb8u; r_esp -= 4; W32(r_esp, v); }
    /* 005b4c67: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b4c6cu); f_00630f40();
    /* 005b4c6c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b4c6f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b4c70: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b4c73: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b4c74: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5b4c79u); f_00686d8e();
    /* 005b4c79: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b4c7c: jmp 0x5b4d01 */ goto L_005b4d01;
L_005b4c81:; BB(0x005b4c81);
    /* 005b4c81: cmp dword ptr [ebp + 0x10], 7 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b4c85: jne 0x5b4ca3 */ if (!fZ) goto L_005b4ca3;
L_005b4c87:; BB(0x005b4c87);
    /* 005b4c87: push 0x6d0c88 */ { u32 v = 0x6d0c88u; r_esp -= 4; W32(r_esp, v); }
    /* 005b4c8c: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b4c91u); f_00630f40();
    /* 005b4c91: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b4c94: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b4c95: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b4c98: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b4c99: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5b4c9eu); f_00686d8e();
    /* 005b4c9e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b4ca1: jmp 0x5b4d01 */ goto L_005b4d01;
L_005b4ca3:; BB(0x005b4ca3);
    /* 005b4ca3: cmp dword ptr [ebp + 0x10], 8 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b4ca7: jne 0x5b4cc5 */ if (!fZ) goto L_005b4cc5;
L_005b4ca9:; BB(0x005b4ca9);
    /* 005b4ca9: push 0x6d0c58 */ { u32 v = 0x6d0c58u; r_esp -= 4; W32(r_esp, v); }
    /* 005b4cae: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b4cb3u); f_00630f40();
    /* 005b4cb3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b4cb6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b4cb7: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b4cba: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b4cbb: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5b4cc0u); f_00686d8e();
    /* 005b4cc0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b4cc3: jmp 0x5b4d01 */ goto L_005b4d01;
L_005b4cc5:; BB(0x005b4cc5);
    /* 005b4cc5: cmp dword ptr [ebp + 0x10], 9 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b4cc9: jne 0x5b4ce7 */ if (!fZ) goto L_005b4ce7;
L_005b4ccb:; BB(0x005b4ccb);
    /* 005b4ccb: push 0x6d0c28 */ { u32 v = 0x6d0c28u; r_esp -= 4; W32(r_esp, v); }
    /* 005b4cd0: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b4cd5u); f_00630f40();
    /* 005b4cd5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b4cd8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b4cd9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b4cdc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b4cdd: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5b4ce2u); f_00686d8e();
    /* 005b4ce2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b4ce5: jmp 0x5b4d01 */ goto L_005b4d01;
L_005b4ce7:; BB(0x005b4ce7);
    /* 005b4ce7: push 0x6d0bf8 */ { u32 v = 0x6d0bf8u; r_esp -= 4; W32(r_esp, v); }
    /* 005b4cec: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b4cf1u); f_00630f40();
    /* 005b4cf1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b4cf4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b4cf5: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b4cf8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b4cf9: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5b4cfeu); f_00686d8e();
    /* 005b4cfe: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005b4d01:; BB(0x005b4d01);
    /* 005b4d01: jmp 0x5b4d1d */ goto L_005b4d1d;
L_005b4d03:; BB(0x005b4d03);
    /* 005b4d03: push 0x6d0e00 */ { u32 v = 0x6d0e00u; r_esp -= 4; W32(r_esp, v); }
    /* 005b4d08: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b4d0du); f_00630f40();
    /* 005b4d0d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b4d10: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b4d11: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b4d14: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b4d15: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5b4d1au); f_00686d8e();
    /* 005b4d1a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005b4d1d:; BB(0x005b4d1d);
    /* 005b4d1d: jmp 0x5b4e00 */ goto L_005b4e00;
L_005b4d22:; BB(0x005b4d22);
    /* 005b4d22: movzx eax, byte ptr [ebp + 0x14] */ r_eax = (u32)R8((u32)(r_ebp+0x14u));
    /* 005b4d26: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b4d28: je 0x5b4d46 */ if (fZ) goto L_005b4d46;
L_005b4d2a:; BB(0x005b4d2a);
    /* 005b4d2a: push 0x6d0bd8 */ { u32 v = 0x6d0bd8u; r_esp -= 4; W32(r_esp, v); }
    /* 005b4d2f: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b4d34u); f_00630f40();
    /* 005b4d34: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b4d37: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b4d38: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b4d3b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b4d3c: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5b4d41u); f_00686d8e();
    /* 005b4d41: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b4d44: jmp 0x5b4d60 */ goto L_005b4d60;
L_005b4d46:; BB(0x005b4d46);
    /* 005b4d46: push 0x6d0e00 */ { u32 v = 0x6d0e00u; r_esp -= 4; W32(r_esp, v); }
    /* 005b4d4b: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b4d50u); f_00630f40();
    /* 005b4d50: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b4d53: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b4d54: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b4d57: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b4d58: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5b4d5du); f_00686d8e();
    /* 005b4d5d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005b4d60:; BB(0x005b4d60);
    /* 005b4d60: jmp 0x5b4e00 */ goto L_005b4e00;
L_005b4d65:; BB(0x005b4d65);
    /* 005b4d65: movzx eax, byte ptr [ebp + 0x14] */ r_eax = (u32)R8((u32)(r_ebp+0x14u));
    /* 005b4d69: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b4d6b: je 0x5b4d89 */ if (fZ) goto L_005b4d89;
L_005b4d6d:; BB(0x005b4d6d);
    /* 005b4d6d: push 0x6d0bb8 */ { u32 v = 0x6d0bb8u; r_esp -= 4; W32(r_esp, v); }
    /* 005b4d72: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b4d77u); f_00630f40();
    /* 005b4d77: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b4d7a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b4d7b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b4d7e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b4d7f: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5b4d84u); f_00686d8e();
    /* 005b4d84: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b4d87: jmp 0x5b4dc7 */ goto L_005b4dc7;
L_005b4d89:; BB(0x005b4d89);
    /* 005b4d89: movzx edx, byte ptr [ebp - 0xa] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffff6u));
    /* 005b4d8d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b4d8f: je 0x5b4dad */ if (fZ) goto L_005b4dad;
L_005b4d91:; BB(0x005b4d91);
    /* 005b4d91: push 0x6d0b94 */ { u32 v = 0x6d0b94u; r_esp -= 4; W32(r_esp, v); }
    /* 005b4d96: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b4d9bu); f_00630f40();
    /* 005b4d9b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b4d9e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b4d9f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b4da2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b4da3: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5b4da8u); f_00686d8e();
    /* 005b4da8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b4dab: jmp 0x5b4dc7 */ goto L_005b4dc7;
L_005b4dad:; BB(0x005b4dad);
    /* 005b4dad: push 0x6d0e00 */ { u32 v = 0x6d0e00u; r_esp -= 4; W32(r_esp, v); }
    /* 005b4db2: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b4db7u); f_00630f40();
    /* 005b4db7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b4dba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b4dbb: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b4dbe: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b4dbf: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5b4dc4u); f_00686d8e();
    /* 005b4dc4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005b4dc7:; BB(0x005b4dc7);
    /* 005b4dc7: jmp 0x5b4e00 */ goto L_005b4e00;
L_005b4dc9:; BB(0x005b4dc9);
    /* 005b4dc9: push 0x6d0b7c */ { u32 v = 0x6d0b7cu; r_esp -= 4; W32(r_esp, v); }
    /* 005b4dce: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b4dd3u); f_00630f40();
    /* 005b4dd3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b4dd6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b4dd7: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b4dda: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b4ddb: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5b4de0u); f_00686d8e();
    /* 005b4de0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b4de3: jmp 0x5b4e00 */ goto L_005b4e00;
L_005b4de5:; BB(0x005b4de5);
    /* 005b4de5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005b4de7: jne 0x5b4e00 */ if (!fZ) goto L_005b4e00;
L_005b4de9:; BB(0x005b4de9);
    /* 005b4de9: push 0x342 */ { u32 v = 0x342u; r_esp -= 4; W32(r_esp, v); }
    /* 005b4dee: push 0x6d0b5c */ { u32 v = 0x6d0b5cu; r_esp -= 4; W32(r_esp, v); }
    /* 005b4df3: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 005b4df8: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5b4dfdu); f_005e9f20();
    /* 005b4dfd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005b4e00:; BB(0x005b4e00);
    /* 005b4e00: mov esp, ebp */ r_esp = r_ebp;
    /* 005b4e02: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b4e03: ret 0x10 */ FN_RET(0x005b40a0); r_esp += 20; return;
}

void f_005b59a0(void) /* royalmatchstate::func_005b59a0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b59a0);
    /* 005b59a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b59a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005b59a3: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b59a6: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005b59a9: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005b59b0: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005b59b3: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005b59b6: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005b59b9: sub ecx, 0x13b3 */ {  u32 a = r_ecx; u32 b = 0x13b3u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005b59bf: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005b59c2: cmp dword ptr [ebp - 0x18], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005b59c6: ja 0x5b5bc5 */ if ((!fC&&!fZ)) goto L_005b5bc5;
L_005b59cc:; BB(0x005b59cc);
    /* 005b59cc: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005b59cf: jmp dword ptr [edx*4 + 0x5b5c14] */ { u32 t = R32((u32)(r_edx*4+0x5b5c14u)); switch (t) { case 0x5b5a32u: goto L_005b5a32; case 0x5b5b6cu: goto L_005b5b6c; case 0x5b5b22u: goto L_005b5b22; case 0x5b5af9u: goto L_005b5af9; case 0x5b59d6u: goto L_005b59d6; case 0x5b5a8eu: goto L_005b5a8e; default: UNSUP(0x005b59cf, "jump table entry is not a known target"); } }
L_005b59d6:; BB(0x005b59d6);
    /* 005b59d6: cmp dword ptr [ebp + 0x10], 0x11 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b59da: jl 0x5b59e5 */ if ((fS!=fO)) goto L_005b59e5;
L_005b59dc:; BB(0x005b59dc);
    /* 005b59dc: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005b59e3: jmp 0x5b5a2d */ goto L_005b5a2d;
L_005b59e5:; BB(0x005b59e5);
    /* 005b59e5: cmp dword ptr [ebp + 0x10], 0x10 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b59e9: jne 0x5b59f4 */ if (!fZ) goto L_005b59f4;
L_005b59eb:; BB(0x005b59eb);
    /* 005b59eb: mov dword ptr [ebp - 0xc], 1 */ W32((u32)(r_ebp+0xfffffff4u), 0x1u);
    /* 005b59f2: jmp 0x5b5a2d */ goto L_005b5a2d;
L_005b59f4:; BB(0x005b59f4);
    /* 005b59f4: cmp dword ptr [ebp + 0x10], 0xf */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b59f8: jne 0x5b5a03 */ if (!fZ) goto L_005b5a03;
L_005b59fa:; BB(0x005b59fa);
    /* 005b59fa: mov dword ptr [ebp - 0xc], 2 */ W32((u32)(r_ebp+0xfffffff4u), 0x2u);
    /* 005b5a01: jmp 0x5b5a2d */ goto L_005b5a2d;
L_005b5a03:; BB(0x005b5a03);
    /* 005b5a03: cmp dword ptr [ebp + 0x10], 0xe */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b5a07: jne 0x5b5a12 */ if (!fZ) goto L_005b5a12;
L_005b5a09:; BB(0x005b5a09);
    /* 005b5a09: mov dword ptr [ebp - 0xc], 3 */ W32((u32)(r_ebp+0xfffffff4u), 0x3u);
    /* 005b5a10: jmp 0x5b5a2d */ goto L_005b5a2d;
L_005b5a12:; BB(0x005b5a12);
    /* 005b5a12: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005b5a14: jne 0x5b5a2d */ if (!fZ) goto L_005b5a2d;
L_005b5a16:; BB(0x005b5a16);
    /* 005b5a16: push 0x4ba */ { u32 v = 0x4bau; r_esp -= 4; W32(r_esp, v); }
    /* 005b5a1b: push 0x6d0b5c */ { u32 v = 0x6d0b5cu; r_esp -= 4; W32(r_esp, v); }
    /* 005b5a20: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 005b5a25: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5b5a2au); f_005e9f20();
    /* 005b5a2a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005b5a2d:; BB(0x005b5a2d);
    /* 005b5a2d: jmp 0x5b5be0 */ goto L_005b5be0;
L_005b5a32:; BB(0x005b5a32);
    /* 005b5a32: cmp dword ptr [ebp + 0x10], 0x13 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b5a36: jl 0x5b5a41 */ if ((fS!=fO)) goto L_005b5a41;
L_005b5a38:; BB(0x005b5a38);
    /* 005b5a38: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005b5a3f: jmp 0x5b5a89 */ goto L_005b5a89;
L_005b5a41:; BB(0x005b5a41);
    /* 005b5a41: cmp dword ptr [ebp + 0x10], 0x11 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b5a45: jl 0x5b5a50 */ if ((fS!=fO)) goto L_005b5a50;
L_005b5a47:; BB(0x005b5a47);
    /* 005b5a47: mov dword ptr [ebp - 0xc], 1 */ W32((u32)(r_ebp+0xfffffff4u), 0x1u);
    /* 005b5a4e: jmp 0x5b5a89 */ goto L_005b5a89;
L_005b5a50:; BB(0x005b5a50);
    /* 005b5a50: cmp dword ptr [ebp + 0x10], 0xf */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b5a54: jl 0x5b5a5f */ if ((fS!=fO)) goto L_005b5a5f;
L_005b5a56:; BB(0x005b5a56);
    /* 005b5a56: mov dword ptr [ebp - 0xc], 2 */ W32((u32)(r_ebp+0xfffffff4u), 0x2u);
    /* 005b5a5d: jmp 0x5b5a89 */ goto L_005b5a89;
L_005b5a5f:; BB(0x005b5a5f);
    /* 005b5a5f: cmp dword ptr [ebp + 0x10], 0xd */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b5a63: jl 0x5b5a6e */ if ((fS!=fO)) goto L_005b5a6e;
L_005b5a65:; BB(0x005b5a65);
    /* 005b5a65: mov dword ptr [ebp - 0xc], 3 */ W32((u32)(r_ebp+0xfffffff4u), 0x3u);
    /* 005b5a6c: jmp 0x5b5a89 */ goto L_005b5a89;
L_005b5a6e:; BB(0x005b5a6e);
    /* 005b5a6e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 005b5a70: jne 0x5b5a89 */ if (!fZ) goto L_005b5a89;
L_005b5a72:; BB(0x005b5a72);
    /* 005b5a72: push 0x4d0 */ { u32 v = 0x4d0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b5a77: push 0x6d0b5c */ { u32 v = 0x6d0b5cu; r_esp -= 4; W32(r_esp, v); }
    /* 005b5a7c: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 005b5a81: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5b5a86u); f_005e9f20();
    /* 005b5a86: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005b5a89:; BB(0x005b5a89);
    /* 005b5a89: jmp 0x5b5be0 */ goto L_005b5be0;
L_005b5a8e:; BB(0x005b5a8e);
    /* 005b5a8e: cmp dword ptr [ebp + 0x10], 0xc */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b5a92: jne 0x5b5a9d */ if (!fZ) goto L_005b5a9d;
L_005b5a94:; BB(0x005b5a94);
    /* 005b5a94: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005b5a9b: jmp 0x5b5af4 */ goto L_005b5af4;
L_005b5a9d:; BB(0x005b5a9d);
    /* 005b5a9d: cmp dword ptr [ebp + 0x10], 0xb */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b5aa1: jne 0x5b5aac */ if (!fZ) goto L_005b5aac;
L_005b5aa3:; BB(0x005b5aa3);
    /* 005b5aa3: mov dword ptr [ebp - 0xc], 1 */ W32((u32)(r_ebp+0xfffffff4u), 0x1u);
    /* 005b5aaa: jmp 0x5b5af4 */ goto L_005b5af4;
L_005b5aac:; BB(0x005b5aac);
    /* 005b5aac: cmp dword ptr [ebp + 0x10], 0xa */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b5ab0: jne 0x5b5abb */ if (!fZ) goto L_005b5abb;
L_005b5ab2:; BB(0x005b5ab2);
    /* 005b5ab2: mov dword ptr [ebp - 0xc], 2 */ W32((u32)(r_ebp+0xfffffff4u), 0x2u);
    /* 005b5ab9: jmp 0x5b5af4 */ goto L_005b5af4;
L_005b5abb:; BB(0x005b5abb);
    /* 005b5abb: cmp dword ptr [ebp + 0x10], 9 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b5abf: jne 0x5b5aca */ if (!fZ) goto L_005b5aca;
L_005b5ac1:; BB(0x005b5ac1);
    /* 005b5ac1: mov dword ptr [ebp - 0xc], 3 */ W32((u32)(r_ebp+0xfffffff4u), 0x3u);
    /* 005b5ac8: jmp 0x5b5af4 */ goto L_005b5af4;
L_005b5aca:; BB(0x005b5aca);
    /* 005b5aca: cmp dword ptr [ebp + 0x10], 8 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b5ace: jne 0x5b5ad9 */ if (!fZ) goto L_005b5ad9;
L_005b5ad0:; BB(0x005b5ad0);
    /* 005b5ad0: mov dword ptr [ebp - 0xc], 4 */ W32((u32)(r_ebp+0xfffffff4u), 0x4u);
    /* 005b5ad7: jmp 0x5b5af4 */ goto L_005b5af4;
L_005b5ad9:; BB(0x005b5ad9);
    /* 005b5ad9: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 005b5adb: jne 0x5b5af4 */ if (!fZ) goto L_005b5af4;
L_005b5add:; BB(0x005b5add);
    /* 005b5add: push 0x4ea */ { u32 v = 0x4eau; r_esp -= 4; W32(r_esp, v); }
    /* 005b5ae2: push 0x6d0b5c */ { u32 v = 0x6d0b5cu; r_esp -= 4; W32(r_esp, v); }
    /* 005b5ae7: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 005b5aec: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5b5af1u); f_005e9f20();
    /* 005b5af1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005b5af4:; BB(0x005b5af4);
    /* 005b5af4: jmp 0x5b5be0 */ goto L_005b5be0;
L_005b5af9:; BB(0x005b5af9);
    /* 005b5af9: cmp dword ptr [ebp + 0x10], 0xc */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b5afd: jne 0x5b5b08 */ if (!fZ) goto L_005b5b08;
L_005b5aff:; BB(0x005b5aff);
    /* 005b5aff: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005b5b06: jmp 0x5b5b1d */ goto L_005b5b1d;
L_005b5b08:; BB(0x005b5b08);
    /* 005b5b08: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005b5b0b: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005b5b0c: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005b5b0e: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005b5b10: mov ecx, 0xa */ r_ecx = 0xau;
    /* 005b5b15: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005b5b17: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b5b1a: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_005b5b1d:; BB(0x005b5b1d);
    /* 005b5b1d: jmp 0x5b5be0 */ goto L_005b5be0;
L_005b5b22:; BB(0x005b5b22);
    /* 005b5b22: cmp dword ptr [ebp + 0x10], 0x13 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b5b26: jl 0x5b5b31 */ if ((fS!=fO)) goto L_005b5b31;
L_005b5b28:; BB(0x005b5b28);
    /* 005b5b28: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005b5b2f: jmp 0x5b5b6a */ goto L_005b5b6a;
L_005b5b31:; BB(0x005b5b31);
    /* 005b5b31: cmp dword ptr [ebp + 0x10], 0x12 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b5b35: jne 0x5b5b40 */ if (!fZ) goto L_005b5b40;
L_005b5b37:; BB(0x005b5b37);
    /* 005b5b37: mov dword ptr [ebp - 0xc], 1 */ W32((u32)(r_ebp+0xfffffff4u), 0x1u);
    /* 005b5b3e: jmp 0x5b5b6a */ goto L_005b5b6a;
L_005b5b40:; BB(0x005b5b40);
    /* 005b5b40: cmp dword ptr [ebp + 0x10], 0xc */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b5b44: jl 0x5b5b4f */ if ((fS!=fO)) goto L_005b5b4f;
L_005b5b46:; BB(0x005b5b46);
    /* 005b5b46: mov dword ptr [ebp - 0xc], 2 */ W32((u32)(r_ebp+0xfffffff4u), 0x2u);
    /* 005b5b4d: jmp 0x5b5b6a */ goto L_005b5b6a;
L_005b5b4f:; BB(0x005b5b4f);
    /* 005b5b4f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 005b5b51: jne 0x5b5b6a */ if (!fZ) goto L_005b5b6a;
L_005b5b53:; BB(0x005b5b53);
    /* 005b5b53: push 0x506 */ { u32 v = 0x506u; r_esp -= 4; W32(r_esp, v); }
    /* 005b5b58: push 0x6d0b5c */ { u32 v = 0x6d0b5cu; r_esp -= 4; W32(r_esp, v); }
    /* 005b5b5d: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 005b5b62: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5b5b67u); f_005e9f20();
    /* 005b5b67: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005b5b6a:; BB(0x005b5b6a);
    /* 005b5b6a: jmp 0x5b5be0 */ goto L_005b5be0;
L_005b5b6c:; BB(0x005b5b6c);
    /* 005b5b6c: cmp dword ptr [ebp + 0x10], 0x11 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b5b70: jl 0x5b5b7b */ if ((fS!=fO)) goto L_005b5b7b;
L_005b5b72:; BB(0x005b5b72);
    /* 005b5b72: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005b5b79: jmp 0x5b5bc3 */ goto L_005b5bc3;
L_005b5b7b:; BB(0x005b5b7b);
    /* 005b5b7b: cmp dword ptr [ebp + 0x10], 0xd */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b5b7f: jl 0x5b5b8a */ if ((fS!=fO)) goto L_005b5b8a;
L_005b5b81:; BB(0x005b5b81);
    /* 005b5b81: mov dword ptr [ebp - 0xc], 1 */ W32((u32)(r_ebp+0xfffffff4u), 0x1u);
    /* 005b5b88: jmp 0x5b5bc3 */ goto L_005b5bc3;
L_005b5b8a:; BB(0x005b5b8a);
    /* 005b5b8a: cmp dword ptr [ebp + 0x10], 0xc */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b5b8e: jne 0x5b5b99 */ if (!fZ) goto L_005b5b99;
L_005b5b90:; BB(0x005b5b90);
    /* 005b5b90: mov dword ptr [ebp - 0xc], 2 */ W32((u32)(r_ebp+0xfffffff4u), 0x2u);
    /* 005b5b97: jmp 0x5b5bc3 */ goto L_005b5bc3;
L_005b5b99:; BB(0x005b5b99);
    /* 005b5b99: cmp dword ptr [ebp + 0x10], 4 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b5b9d: jl 0x5b5ba8 */ if ((fS!=fO)) goto L_005b5ba8;
L_005b5b9f:; BB(0x005b5b9f);
    /* 005b5b9f: mov dword ptr [ebp - 0xc], 3 */ W32((u32)(r_ebp+0xfffffff4u), 0x3u);
    /* 005b5ba6: jmp 0x5b5bc3 */ goto L_005b5bc3;
L_005b5ba8:; BB(0x005b5ba8);
    /* 005b5ba8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 005b5baa: jne 0x5b5bc3 */ if (!fZ) goto L_005b5bc3;
L_005b5bac:; BB(0x005b5bac);
    /* 005b5bac: push 0x51c */ { u32 v = 0x51cu; r_esp -= 4; W32(r_esp, v); }
    /* 005b5bb1: push 0x6d0b5c */ { u32 v = 0x6d0b5cu; r_esp -= 4; W32(r_esp, v); }
    /* 005b5bb6: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 005b5bbb: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5b5bc0u); f_005e9f20();
    /* 005b5bc0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005b5bc3:; BB(0x005b5bc3);
    /* 005b5bc3: jmp 0x5b5be0 */ goto L_005b5be0;
L_005b5bc5:; BB(0x005b5bc5);
    /* 005b5bc5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005b5bc7: jne 0x5b5be0 */ if (!fZ) goto L_005b5be0;
L_005b5bc9:; BB(0x005b5bc9);
    /* 005b5bc9: push 0x520 */ { u32 v = 0x520u; r_esp -= 4; W32(r_esp, v); }
    /* 005b5bce: push 0x6d0b5c */ { u32 v = 0x6d0b5cu; r_esp -= 4; W32(r_esp, v); }
    /* 005b5bd3: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 005b5bd8: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5b5bddu); f_005e9f20();
    /* 005b5bdd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005b5be0:; BB(0x005b5be0);
    /* 005b5be0: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 005b5be3: sub edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005b5be6: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 005b5be9: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b5bec: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005b5bef: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005b5bf2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b5bf5: imul ecx, ecx, 0x12 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x12u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005b5bf8: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b5bfb: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b5bfe: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b5c01: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 005b5c03: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b5c06: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 005b5c09: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b5c0c: mov esp, ebp */ r_esp = r_ebp;
    /* 005b5c0e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b5c0f: ret 0x10 */ FN_RET(0x005b59a0); r_esp += 20; return;
}

void f_005b5db0(void) /* royalmatchstate::func_005b5db0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b5db0);
    /* 005b5db0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b5db1: mov ebp, esp */ r_ebp = r_esp;
    /* 005b5db3: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b5db6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b5db7: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005b5dba: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b5dbd: call 0x5b4f00 */ r_esp -= 4; W32(r_esp, 0x5b5dc2u); f_005b4f00();
    /* 005b5dc2: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005b5dc5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b5dc8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b5dc9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b5dcc: call 0x5b4e50 */ r_esp -= 4; W32(r_esp, 0x5b5dd1u); f_005b4e50();
    /* 005b5dd1: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005b5dd4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b5dd7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b5dd8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b5ddb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b5ddc: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b5ddf: call 0x5b5260 */ r_esp -= 4; W32(r_esp, 0x5b5de4u); f_005b5260();
    /* 005b5de4: mov esi, eax */ r_esi = r_eax;
    /* 005b5de6: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b5de9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b5dea: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b5ded: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b5dee: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b5df1: call 0x5b5040 */ r_esp -= 4; W32(r_esp, 0x5b5df6u); f_005b5040();
    /* 005b5df6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005b5df8: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b5dfa: setne dl */ r_edx = (r_edx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 005b5dfd: mov byte ptr [ebp - 5], dl */ W8((u32)(r_ebp+0xfffffffbu), (u8)r_edx);
    /* 005b5e00: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b5e03: call 0x5b4f00 */ r_esp -= 4; W32(r_esp, 0x5b5e08u); f_005b4f00();
    /* 005b5e08: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b5e09: mov ecx, dword ptr [0x7935f4] */ r_ecx = R32((u32)(0x7935f4u));
    /* 005b5e0f: call 0x5a4b20 */ r_esp -= 4; W32(r_esp, 0x5b5e14u); f_005a4b20();
    /* 005b5e14: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005b5e17: cmp dword ptr [ebp - 0x14], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005b5e1b: ja 0x5b5f23 */ if ((!fC&&!fZ)) goto L_005b5f23;
L_005b5e21:; BB(0x005b5e21);
    /* 005b5e21: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005b5e24: jmp dword ptr [eax*4 + 0x5b5f48] */ { u32 t = R32((u32)(r_eax*4+0x5b5f48u)); switch (t) { case 0x5b5e2bu: goto L_005b5e2b; case 0x5b5e66u: goto L_005b5e66; case 0x5b5ea1u: goto L_005b5ea1; case 0x5b5ed9u: goto L_005b5ed9; case 0x5b5efeu: goto L_005b5efe; default: UNSUP(0x005b5e24, "jump table entry is not a known target"); } }
L_005b5e2b:; BB(0x005b5e2b);
    /* 005b5e2b: push 0x6cfa14 */ { u32 v = 0x6cfa14u; r_esp -= 4; W32(r_esp, v); }
    /* 005b5e30: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b5e35u); f_00630f40();
    /* 005b5e35: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b5e38: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b5e39: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b5e3c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b5e3d: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5b5e42u); f_00686d8e();
    /* 005b5e42: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b5e45: movzx edx, byte ptr [ebp - 5] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffffbu));
    /* 005b5e49: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b5e4b: je 0x5b5e58 */ if (fZ) goto L_005b5e58;
L_005b5e4d:; BB(0x005b5e4d);
    /* 005b5e4d: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005b5e50: mov dword ptr [eax], 0x13b5 */ W32((u32)(r_eax), 0x13b5u);
    /* 005b5e56: jmp 0x5b5e61 */ goto L_005b5e61;
L_005b5e58:; BB(0x005b5e58);
    /* 005b5e58: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005b5e5b: mov dword ptr [ecx], 0x13b4 */ W32((u32)(r_ecx), 0x13b4u);
L_005b5e61:; BB(0x005b5e61);
    /* 005b5e61: jmp 0x5b5f3e */ goto L_005b5f3e;
L_005b5e66:; BB(0x005b5e66);
    /* 005b5e66: push 0x6cfa00 */ { u32 v = 0x6cfa00u; r_esp -= 4; W32(r_esp, v); }
    /* 005b5e6b: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b5e70u); f_00630f40();
    /* 005b5e70: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b5e73: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b5e74: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b5e77: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b5e78: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5b5e7du); f_00686d8e();
    /* 005b5e7d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b5e80: movzx eax, byte ptr [ebp - 5] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffffbu));
    /* 005b5e84: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b5e86: je 0x5b5e93 */ if (fZ) goto L_005b5e93;
L_005b5e88:; BB(0x005b5e88);
    /* 005b5e88: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005b5e8b: mov dword ptr [ecx], 0x13b5 */ W32((u32)(r_ecx), 0x13b5u);
    /* 005b5e91: jmp 0x5b5e9c */ goto L_005b5e9c;
L_005b5e93:; BB(0x005b5e93);
    /* 005b5e93: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005b5e96: mov dword ptr [edx], 0x13b4 */ W32((u32)(r_edx), 0x13b4u);
L_005b5e9c:; BB(0x005b5e9c);
    /* 005b5e9c: jmp 0x5b5f3e */ goto L_005b5f3e;
L_005b5ea1:; BB(0x005b5ea1);
    /* 005b5ea1: push 0x6d0924 */ { u32 v = 0x6d0924u; r_esp -= 4; W32(r_esp, v); }
    /* 005b5ea6: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b5eabu); f_00630f40();
    /* 005b5eab: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b5eae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b5eaf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b5eb2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b5eb3: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5b5eb8u); f_00686d8e();
    /* 005b5eb8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b5ebb: movzx ecx, byte ptr [ebp - 5] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffffbu));
    /* 005b5ebf: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b5ec1: je 0x5b5ece */ if (fZ) goto L_005b5ece;
L_005b5ec3:; BB(0x005b5ec3);
    /* 005b5ec3: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005b5ec6: mov dword ptr [edx], 0x13b3 */ W32((u32)(r_edx), 0x13b3u);
    /* 005b5ecc: jmp 0x5b5ed7 */ goto L_005b5ed7;
L_005b5ece:; BB(0x005b5ece);
    /* 005b5ece: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005b5ed1: mov dword ptr [eax], 0x13b8 */ W32((u32)(r_eax), 0x13b8u);
L_005b5ed7:; BB(0x005b5ed7);
    /* 005b5ed7: jmp 0x5b5f3e */ goto L_005b5f3e;
L_005b5ed9:; BB(0x005b5ed9);
    /* 005b5ed9: push 0x6cf9d0 */ { u32 v = 0x6cf9d0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b5ede: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b5ee3u); f_00630f40();
    /* 005b5ee3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b5ee6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b5ee7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b5eea: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b5eeb: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5b5ef0u); f_00686d8e();
    /* 005b5ef0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b5ef3: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005b5ef6: mov dword ptr [edx], 0x13b6 */ W32((u32)(r_edx), 0x13b6u);
    /* 005b5efc: jmp 0x5b5f3e */ goto L_005b5f3e;
L_005b5efe:; BB(0x005b5efe);
    /* 005b5efe: push 0x6cf9b4 */ { u32 v = 0x6cf9b4u; r_esp -= 4; W32(r_esp, v); }
    /* 005b5f03: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b5f08u); f_00630f40();
    /* 005b5f08: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b5f0b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b5f0c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b5f0f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b5f10: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5b5f15u); f_00686d8e();
    /* 005b5f15: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b5f18: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005b5f1b: mov dword ptr [ecx], 0x13b7 */ W32((u32)(r_ecx), 0x13b7u);
    /* 005b5f21: jmp 0x5b5f3e */ goto L_005b5f3e;
L_005b5f23:; BB(0x005b5f23);
    /* 005b5f23: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 005b5f25: jne 0x5b5f3e */ if (!fZ) goto L_005b5f3e;
L_005b5f27:; BB(0x005b5f27);
    /* 005b5f27: push 0x5ab */ { u32 v = 0x5abu; r_esp -= 4; W32(r_esp, v); }
    /* 005b5f2c: push 0x6d0b5c */ { u32 v = 0x6d0b5cu; r_esp -= 4; W32(r_esp, v); }
    /* 005b5f31: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 005b5f36: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5b5f3bu); f_005e9f20();
    /* 005b5f3b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005b5f3e:; BB(0x005b5f3e);
    /* 005b5f3e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b5f3f: mov esp, ebp */ r_esp = r_ebp;
    /* 005b5f41: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b5f42: ret 8 */ FN_RET(0x005b5db0); r_esp += 12; return;
}

void f_005b7600(void) /* royalmatchstate::func_005b7600 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b7600);
    /* 005b7600: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b7601: mov ebp, esp */ r_ebp = r_esp;
    /* 005b7603: sub esp, 0x670 */ {  u32 a = r_esp; u32 b = 0x670u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b7609: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005b760e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b7610: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005b7613: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b7614: mov dword ptr [ebp - 0x66c], ecx */ W32((u32)(r_ebp+0xfffff994u), r_ecx);
    /* 005b761a: mov ecx, dword ptr [ebp - 0x66c] */ r_ecx = R32((u32)(r_ebp+0xfffff994u));
    /* 005b7620: call 0x5b4f00 */ r_esp -= 4; W32(r_esp, 0x5b7625u); f_005b4f00();
    /* 005b7625: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005b7628: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b762b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b762c: mov ecx, dword ptr [ebp - 0x66c] */ r_ecx = R32((u32)(r_ebp+0xfffff994u));
    /* 005b7632: call 0x5b4e50 */ r_esp -= 4; W32(r_esp, 0x5b7637u); f_005b4e50();
    /* 005b7637: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 005b763a: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005b763d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b763e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b7641: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b7642: mov ecx, dword ptr [ebp - 0x66c] */ r_ecx = R32((u32)(r_ebp+0xfffff994u));
    /* 005b7648: call 0x5b4f50 */ r_esp -= 4; W32(r_esp, 0x5b764du); f_005b4f50();
    /* 005b764d: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 005b7651: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b7653: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b7655: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005b7657: mov ecx, dword ptr [ebp - 0x66c] */ r_ecx = R32((u32)(r_ebp+0xfffff994u));
    /* 005b765d: call 0x5b5f60 */ r_esp -= 4; W32(r_esp, 0x5b7662u); f_005b5f60();
    /* 005b7662: mov word ptr [ebp - 0x38], ax */ W16((u32)(r_ebp+0xffffffc8u), (u16)r_eax);
    /* 005b7666: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 005b7669: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b766a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b766d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b766e: mov ecx, dword ptr [ebp - 0x66c] */ r_ecx = R32((u32)(r_ebp+0xfffff994u));
    /* 005b7674: call 0x5b5260 */ r_esp -= 4; W32(r_esp, 0x5b7679u); f_005b5260();
    /* 005b7679: mov esi, eax */ r_esi = r_eax;
    /* 005b767b: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005b767e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b767f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b7682: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b7683: mov ecx, dword ptr [ebp - 0x66c] */ r_ecx = R32((u32)(r_ebp+0xfffff994u));
    /* 005b7689: call 0x5b5040 */ r_esp -= 4; W32(r_esp, 0x5b768eu); f_005b5040();
    /* 005b768e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005b7690: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b7692: setne cl */ r_ecx = (r_ecx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 005b7695: mov byte ptr [ebp - 0x31], cl */ W8((u32)(r_ebp+0xffffffcfu), (u8)r_ecx);
    /* 005b7698: movsx edx, word ptr [ebp - 0x38] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffc8u));
    /* 005b769c: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b769f: jne 0x5b76a7 */ if (!fZ) goto L_005b76a7;
L_005b76a1:; BB(0x005b76a1);
    /* 005b76a1: mov word ptr [ebp - 0x38], 0xb */ W16((u32)(r_ebp+0xffffffc8u), 0xbu);
L_005b76a7:; BB(0x005b76a7);
    /* 005b76a7: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005b76ab: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b76ae: jge 0x5b76c2 */ if ((fS==fO)) goto L_005b76c2;
L_005b76b0:; BB(0x005b76b0);
    /* 005b76b0: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005b76b4: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b76b7: je 0x5b76c2 */ if (fZ) goto L_005b76c2;
L_005b76b9:; BB(0x005b76b9);
    /* 005b76b9: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005b76bd: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b76c0: jne 0x5b76e4 */ if (!fZ) goto L_005b76e4;
L_005b76c2:; BB(0x005b76c2);
    /* 005b76c2: push 0x6d1884 */ { u32 v = 0x6d1884u; r_esp -= 4; W32(r_esp, v); }
    /* 005b76c7: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b76ccu); f_00630f40();
    /* 005b76cc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b76cf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b76d0: lea eax, [ebp - 0x660] */ r_eax = (u32)(r_ebp+0xfffff9a0u);
    /* 005b76d6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b76d7: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5b76dcu); f_00686d8e();
    /* 005b76dc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b76df: jmp 0x5b77e9 */ goto L_005b77e9;
L_005b76e4:; BB(0x005b76e4);
    /* 005b76e4: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005b76e8: cmp ecx, 0x12 */ {  u32 a = r_ecx; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b76eb: jge 0x5b7719 */ if ((fS==fO)) goto L_005b7719;
L_005b76ed:; BB(0x005b76ed);
    /* 005b76ed: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005b76f1: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b76f4: je 0x5b7719 */ if (fZ) goto L_005b7719;
L_005b76f6:; BB(0x005b76f6);
    /* 005b76f6: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005b76fa: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b76fd: je 0x5b7719 */ if (fZ) goto L_005b7719;
L_005b76ff:; BB(0x005b76ff);
    /* 005b76ff: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005b7703: cmp ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b7706: jl 0x5b773b */ if ((fS!=fO)) goto L_005b773b;
L_005b7708:; BB(0x005b7708);
    /* 005b7708: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005b770c: cmp edx, 0x13 */ {  u32 a = r_edx; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b770f: jg 0x5b773b */ if ((!fZ&&fS==fO)) goto L_005b773b;
L_005b7711:; BB(0x005b7711);
    /* 005b7711: movzx eax, byte ptr [ebp - 0x31] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffcfu));
    /* 005b7715: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b7717: je 0x5b773b */ if (fZ) goto L_005b773b;
L_005b7719:; BB(0x005b7719);
    /* 005b7719: push 0x6d186c */ { u32 v = 0x6d186cu; r_esp -= 4; W32(r_esp, v); }
    /* 005b771e: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b7723u); f_00630f40();
    /* 005b7723: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b7726: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b7727: lea ecx, [ebp - 0x660] */ r_ecx = (u32)(r_ebp+0xfffff9a0u);
    /* 005b772d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b772e: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5b7733u); f_00686d8e();
    /* 005b7733: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b7736: jmp 0x5b77e9 */ goto L_005b77e9;
L_005b773b:; BB(0x005b773b);
    /* 005b773b: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005b773f: cmp edx, 0x11 */ {  u32 a = r_edx; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b7742: je 0x5b7756 */ if (fZ) goto L_005b7756;
L_005b7744:; BB(0x005b7744);
    /* 005b7744: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005b7748: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b774b: je 0x5b7756 */ if (fZ) goto L_005b7756;
L_005b774d:; BB(0x005b774d);
    /* 005b774d: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005b7751: cmp ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b7754: jne 0x5b7775 */ if (!fZ) goto L_005b7775;
L_005b7756:; BB(0x005b7756);
    /* 005b7756: push 0x6d1854 */ { u32 v = 0x6d1854u; r_esp -= 4; W32(r_esp, v); }
    /* 005b775b: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b7760u); f_00630f40();
    /* 005b7760: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b7763: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b7764: lea edx, [ebp - 0x660] */ r_edx = (u32)(r_ebp+0xfffff9a0u);
    /* 005b776a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b776b: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5b7770u); f_00686d8e();
    /* 005b7770: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b7773: jmp 0x5b77e9 */ goto L_005b77e9;
L_005b7775:; BB(0x005b7775);
    /* 005b7775: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005b7779: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b777c: jg 0x5b779d */ if ((!fZ&&fS==fO)) goto L_005b779d;
L_005b777e:; BB(0x005b777e);
    /* 005b777e: push 0x6d1840 */ { u32 v = 0x6d1840u; r_esp -= 4; W32(r_esp, v); }
    /* 005b7783: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b7788u); f_00630f40();
    /* 005b7788: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b778b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b778c: lea ecx, [ebp - 0x660] */ r_ecx = (u32)(r_ebp+0xfffff9a0u);
    /* 005b7792: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b7793: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5b7798u); f_00686d8e();
    /* 005b7798: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b779b: jmp 0x5b77e9 */ goto L_005b77e9;
L_005b779d:; BB(0x005b779d);
    /* 005b779d: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005b77a1: cmp edx, 0xd */ {  u32 a = r_edx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b77a4: jl 0x5b77ce */ if ((fS!=fO)) goto L_005b77ce;
L_005b77a6:; BB(0x005b77a6);
    /* 005b77a6: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005b77aa: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b77ad: jg 0x5b77ce */ if ((!fZ&&fS==fO)) goto L_005b77ce;
L_005b77af:; BB(0x005b77af);
    /* 005b77af: push 0x6d1828 */ { u32 v = 0x6d1828u; r_esp -= 4; W32(r_esp, v); }
    /* 005b77b4: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b77b9u); f_00630f40();
    /* 005b77b9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b77bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b77bd: lea ecx, [ebp - 0x660] */ r_ecx = (u32)(r_ebp+0xfffff9a0u);
    /* 005b77c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b77c4: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5b77c9u); f_00686d8e();
    /* 005b77c9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b77cc: jmp 0x5b77e9 */ goto L_005b77e9;
L_005b77ce:; BB(0x005b77ce);
    /* 005b77ce: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 005b77d0: jne 0x5b77e9 */ if (!fZ) goto L_005b77e9;
L_005b77d2:; BB(0x005b77d2);
    /* 005b77d2: push 0x7f3 */ { u32 v = 0x7f3u; r_esp -= 4; W32(r_esp, v); }
    /* 005b77d7: push 0x6d0b5c */ { u32 v = 0x6d0b5cu; r_esp -= 4; W32(r_esp, v); }
    /* 005b77dc: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 005b77e1: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5b77e6u); f_005e9f20();
    /* 005b77e6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005b77e9:; BB(0x005b77e9);
    /* 005b77e9: movsx ecx, word ptr [ebp - 0x38] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffc8u));
    /* 005b77ed: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b77f0: jl 0x5b7811 */ if ((fS!=fO)) goto L_005b7811;
L_005b77f2:; BB(0x005b77f2);
    /* 005b77f2: push 0x6d1884 */ { u32 v = 0x6d1884u; r_esp -= 4; W32(r_esp, v); }
    /* 005b77f7: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b77fcu); f_00630f40();
    /* 005b77fc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b77ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b7800: lea edx, [ebp - 0x1c] */ r_edx = (u32)(r_ebp+0xffffffe4u);
    /* 005b7803: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b7804: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5b7809u); f_00686d8e();
    /* 005b7809: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b780c: jmp 0x5b78e7 */ goto L_005b78e7;
L_005b7811:; BB(0x005b7811);
    /* 005b7811: movsx eax, word ptr [ebp - 0x38] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffc8u));
    /* 005b7815: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b7818: je 0x5b7823 */ if (fZ) goto L_005b7823;
L_005b781a:; BB(0x005b781a);
    /* 005b781a: movsx ecx, word ptr [ebp - 0x38] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffc8u));
    /* 005b781e: cmp ecx, 9 */ {  u32 a = r_ecx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b7821: jne 0x5b7842 */ if (!fZ) goto L_005b7842;
L_005b7823:; BB(0x005b7823);
    /* 005b7823: push 0x6d186c */ { u32 v = 0x6d186cu; r_esp -= 4; W32(r_esp, v); }
    /* 005b7828: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b782du); f_00630f40();
    /* 005b782d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b7830: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b7831: lea edx, [ebp - 0x1c] */ r_edx = (u32)(r_ebp+0xffffffe4u);
    /* 005b7834: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b7835: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5b783au); f_00686d8e();
    /* 005b783a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b783d: jmp 0x5b78e7 */ goto L_005b78e7;
L_005b7842:; BB(0x005b7842);
    /* 005b7842: movsx eax, word ptr [ebp - 0x38] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffc8u));
    /* 005b7846: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b7849: je 0x5b7854 */ if (fZ) goto L_005b7854;
L_005b784b:; BB(0x005b784b);
    /* 005b784b: movsx ecx, word ptr [ebp - 0x38] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffc8u));
    /* 005b784f: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b7852: jne 0x5b7870 */ if (!fZ) goto L_005b7870;
L_005b7854:; BB(0x005b7854);
    /* 005b7854: push 0x6d1854 */ { u32 v = 0x6d1854u; r_esp -= 4; W32(r_esp, v); }
    /* 005b7859: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b785eu); f_00630f40();
    /* 005b785e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b7861: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b7862: lea edx, [ebp - 0x1c] */ r_edx = (u32)(r_ebp+0xffffffe4u);
    /* 005b7865: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b7866: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5b786bu); f_00686d8e();
    /* 005b786b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b786e: jmp 0x5b78e7 */ goto L_005b78e7;
L_005b7870:; BB(0x005b7870);
    /* 005b7870: movsx eax, word ptr [ebp - 0x38] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffc8u));
    /* 005b7874: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b7877: je 0x5b7882 */ if (fZ) goto L_005b7882;
L_005b7879:; BB(0x005b7879);
    /* 005b7879: movsx ecx, word ptr [ebp - 0x38] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffc8u));
    /* 005b787d: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b7880: jne 0x5b789e */ if (!fZ) goto L_005b789e;
L_005b7882:; BB(0x005b7882);
    /* 005b7882: push 0x6d1840 */ { u32 v = 0x6d1840u; r_esp -= 4; W32(r_esp, v); }
    /* 005b7887: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b788cu); f_00630f40();
    /* 005b788c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b788f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b7890: lea edx, [ebp - 0x1c] */ r_edx = (u32)(r_ebp+0xffffffe4u);
    /* 005b7893: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b7894: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5b7899u); f_00686d8e();
    /* 005b7899: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b789c: jmp 0x5b78e7 */ goto L_005b78e7;
L_005b789e:; BB(0x005b789e);
    /* 005b789e: movsx eax, word ptr [ebp - 0x38] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffc8u));
    /* 005b78a2: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b78a5: je 0x5b78b0 */ if (fZ) goto L_005b78b0;
L_005b78a7:; BB(0x005b78a7);
    /* 005b78a7: movsx ecx, word ptr [ebp - 0x38] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffc8u));
    /* 005b78ab: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b78ae: jne 0x5b78cc */ if (!fZ) goto L_005b78cc;
L_005b78b0:; BB(0x005b78b0);
    /* 005b78b0: push 0x6d1828 */ { u32 v = 0x6d1828u; r_esp -= 4; W32(r_esp, v); }
    /* 005b78b5: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b78bau); f_00630f40();
    /* 005b78ba: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b78bd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b78be: lea edx, [ebp - 0x1c] */ r_edx = (u32)(r_ebp+0xffffffe4u);
    /* 005b78c1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b78c2: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5b78c7u); f_00686d8e();
    /* 005b78c7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b78ca: jmp 0x5b78e7 */ goto L_005b78e7;
L_005b78cc:; BB(0x005b78cc);
    /* 005b78cc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005b78ce: jne 0x5b78e7 */ if (!fZ) goto L_005b78e7;
L_005b78d0:; BB(0x005b78d0);
    /* 005b78d0: push 0x80c */ { u32 v = 0x80cu; r_esp -= 4; W32(r_esp, v); }
    /* 005b78d5: push 0x6d0b5c */ { u32 v = 0x6d0b5cu; r_esp -= 4; W32(r_esp, v); }
    /* 005b78da: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 005b78df: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5b78e4u); f_005e9f20();
    /* 005b78e4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005b78e7:; BB(0x005b78e7);
    /* 005b78e7: lea edx, [ebp - 0x30] */ r_edx = (u32)(r_ebp+0xffffffd0u);
    /* 005b78ea: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b78eb: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 005b78ee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b78ef: mov ecx, dword ptr [ebp - 0x66c] */ r_ecx = R32((u32)(r_ebp+0xfffff994u));
    /* 005b78f5: call 0x5b5db0 */ r_esp -= 4; W32(r_esp, 0x5b78fau); f_005b5db0();
    /* 005b78fa: mov cl, byte ptr [ebp - 0x31] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffcfu))) & 0xffu);
    /* 005b78fd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b78fe: movsx edx, word ptr [ebp - 0x38] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffc8u));
    /* 005b7902: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b7903: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005b7907: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b7908: lea ecx, [ebp - 0x650] */ r_ecx = (u32)(r_ebp+0xfffff9b0u);
    /* 005b790e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b790f: mov ecx, dword ptr [ebp - 0x66c] */ r_ecx = R32((u32)(r_ebp+0xfffff994u));
    /* 005b7915: call 0x5b40a0 */ r_esp -= 4; W32(r_esp, 0x5b791au); f_005b40a0();
    /* 005b791a: movsx edx, word ptr [ebp - 0x38] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffc8u));
    /* 005b791e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b791f: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005b7923: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b7924: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005b7927: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b7928: lea edx, [ebp - 0x668] */ r_edx = (u32)(r_ebp+0xfffff998u);
    /* 005b792e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b792f: mov ecx, dword ptr [ebp - 0x66c] */ r_ecx = R32((u32)(r_ebp+0xfffff994u));
    /* 005b7935: call 0x5b59a0 */ r_esp -= 4; W32(r_esp, 0x5b793au); f_005b59a0();
    /* 005b793a: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005b793c: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005b793f: mov dword ptr [ebp - 0x450], ecx */ W32((u32)(r_ebp+0xfffffbb0u), r_ecx);
    /* 005b7945: mov dword ptr [ebp - 0x44c], edx */ W32((u32)(r_ebp+0xfffffbb4u), r_edx);
    /* 005b794b: mov eax, dword ptr [ebp - 0x450] */ r_eax = R32((u32)(r_ebp+0xfffffbb0u));
    /* 005b7951: add eax, 0x27 */ {  u32 a = r_eax; u32 b = 0x27u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b7954: mov dword ptr [ebp - 0x450], eax */ W32((u32)(r_ebp+0xfffffbb0u), r_eax);
    /* 005b795a: mov ecx, dword ptr [ebp - 0x44c] */ r_ecx = R32((u32)(r_ebp+0xfffffbb4u));
    /* 005b7960: add ecx, 0x3c */ {  u32 a = r_ecx; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b7963: mov dword ptr [ebp - 0x44c], ecx */ W32((u32)(r_ebp+0xfffffbb4u), r_ecx);
    /* 005b7969: movsx edx, word ptr [ebp - 0x38] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffc8u));
    /* 005b796d: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b7970: jne 0x5b798e */ if (!fZ) goto L_005b798e;
L_005b7972:; BB(0x005b7972);
    /* 005b7972: push 0x6d1814 */ { u32 v = 0x6d1814u; r_esp -= 4; W32(r_esp, v); }
    /* 005b7977: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b797cu); f_00630f40();
    /* 005b797c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b797f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b7980: lea eax, [ebp - 0x44] */ r_eax = (u32)(r_ebp+0xffffffbcu);
    /* 005b7983: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b7984: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5b7989u); f_00686d8e();
    /* 005b7989: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b798c: jmp 0x5b79a5 */ goto L_005b79a5;
L_005b798e:; BB(0x005b798e);
    /* 005b798e: movsx ecx, word ptr [ebp - 0x38] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffc8u));
    /* 005b7992: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b7993: push 0x6b4e68 */ { u32 v = 0x6b4e68u; r_esp -= 4; W32(r_esp, v); }
    /* 005b7998: lea edx, [ebp - 0x44] */ r_edx = (u32)(r_ebp+0xffffffbcu);
    /* 005b799b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b799c: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x5b79a2u); call_ind(t); }
    /* 005b79a2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005b79a5:; BB(0x005b79a5);
    /* 005b79a5: movzx eax, byte ptr [ebp - 0x31] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffcfu));
    /* 005b79a9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b79ab: je 0x5b79c2 */ if (fZ) goto L_005b79c2;
L_005b79ad:; BB(0x005b79ad);
    /* 005b79ad: push 0x6d1800 */ { u32 v = 0x6d1800u; r_esp -= 4; W32(r_esp, v); }
    /* 005b79b2: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b79b7u); f_00630f40();
    /* 005b79b7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b79ba: mov dword ptr [ebp - 0x670], eax */ W32((u32)(r_ebp+0xfffff990u), r_eax);
    /* 005b79c0: jmp 0x5b79d5 */ goto L_005b79d5;
L_005b79c2:; BB(0x005b79c2);
    /* 005b79c2: push 0x6d17ec */ { u32 v = 0x6d17ecu; r_esp -= 4; W32(r_esp, v); }
    /* 005b79c7: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b79ccu); f_00630f40();
    /* 005b79cc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b79cf: mov dword ptr [ebp - 0x670], eax */ W32((u32)(r_ebp+0xfffff990u), r_eax);
L_005b79d5:; BB(0x005b79d5);
    /* 005b79d5: lea ecx, [ebp - 0x650] */ r_ecx = (u32)(r_ebp+0xfffff9b0u);
    /* 005b79db: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b79dc: lea edx, [ebp - 0x2c] */ r_edx = (u32)(r_ebp+0xffffffd4u);
    /* 005b79df: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b79e0: lea eax, [ebp - 0x1c] */ r_eax = (u32)(r_ebp+0xffffffe4u);
    /* 005b79e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b79e4: lea ecx, [ebp - 0x44] */ r_ecx = (u32)(r_ebp+0xffffffbcu);
    /* 005b79e7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b79e8: lea edx, [ebp - 0x660] */ r_edx = (u32)(r_ebp+0xfffff9a0u);
    /* 005b79ee: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b79ef: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005b79f3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b79f4: mov ecx, dword ptr [ebp - 0x670] */ r_ecx = R32((u32)(r_ebp+0xfffff990u));
    /* 005b79fa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b79fb: push 0x6d17c8 */ { u32 v = 0x6d17c8u; r_esp -= 4; W32(r_esp, v); }
    /* 005b7a00: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b7a05u); f_00630f40();
    /* 005b7a05: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b7a08: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b7a09: lea edx, [ebp - 0x448] */ r_edx = (u32)(r_ebp+0xfffffbb8u);
    /* 005b7a0f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b7a10: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x5b7a16u); call_ind(t); }
    /* 005b7a16: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b7a19: lea eax, [ebp - 0x448] */ r_eax = (u32)(r_ebp+0xfffffbb8u);
    /* 005b7a1f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b7a20: push 0x6d17b0 */ { u32 v = 0x6d17b0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b7a25: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b7a2au); f_00630f40();
    /* 005b7a2a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b7a2d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b7a2e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b7a30: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 005b7a36: call 0x57be80 */ r_esp -= 4; W32(r_esp, 0x5b7a3bu); f_0057be80();
    /* 005b7a3b: mov ecx, dword ptr [ebp - 0x44c] */ r_ecx = R32((u32)(r_ebp+0xfffffbb4u));
    /* 005b7a41: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b7a42: mov edx, dword ptr [ebp - 0x450] */ r_edx = R32((u32)(r_ebp+0xfffffbb0u));
    /* 005b7a48: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b7a49: push 0x139b */ { u32 v = 0x139bu; r_esp -= 4; W32(r_esp, v); }
    /* 005b7a4e: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005b7a51: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b7a52: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b7a54: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 005b7a5a: call 0x57c0b0 */ r_esp -= 4; W32(r_esp, 0x5b7a5fu); f_0057c0b0();
    /* 005b7a5f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b7a60: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b7a63: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005b7a65: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x5b7a6au); f_00686d72();
    /* 005b7a6a: mov esp, ebp */ r_esp = r_ebp;
    /* 005b7a6c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b7a6d: ret  */ FN_RET(0x005b7600); r_esp += 4; return;
}

void f_005b8ab0(void) /* royalmatchstate::func_005b8ab0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b8ab0);
    /* 005b8ab0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b8ab1: mov ebp, esp */ r_ebp = r_esp;
    /* 005b8ab3: sub esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b8ab6: mov dword ptr [ebp - 0x64], ecx */ W32((u32)(r_ebp+0xffffff9cu), r_ecx);
    /* 005b8ab9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b8abc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b8abd: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5b8ac2u); f_005dcb00();
    /* 005b8ac2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b8ac5: mov ecx, eax */ r_ecx = r_eax;
    /* 005b8ac7: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x5b8accu); f_005d5a50();
    /* 005b8acc: cmp eax, 0x3b9aca00 */ {  u32 a = r_eax; u32 b = 0x3b9aca00u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b8ad1: jl 0x5b8ad8 */ if ((fS!=fO)) goto L_005b8ad8;
L_005b8ad3:; BB(0x005b8ad3);
    /* 005b8ad3: jmp 0x5b8fb2 */ goto L_005b8fb2;
L_005b8ad8:; BB(0x005b8ad8);
    /* 005b8ad8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b8ada: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b8adc: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5b8ae1u); f_0064c8a0();
    /* 005b8ae1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b8ae4: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005b8ae7: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 005b8aea: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005b8aed: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005b8af0: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005b8af3: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 005b8af6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b8af8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b8afa: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5b8affu); f_0064c8a0();
    /* 005b8aff: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b8b02: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005b8b05: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 005b8b08: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005b8b0b: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005b8b0e: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005b8b11: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005b8b14: fild dword ptr [ebp + 0x14] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x14u)));
    /* 005b8b17: fidiv dword ptr [ebp + 0x18] */ ST(0) = ST(0) / (long double)(i32)R32((u32)(r_ebp+0x18u));
    /* 005b8b1a: fstp qword ptr [ebp - 0x18] */ W_F64((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 005b8b1d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b8b20: mov eax, dword ptr [0x793604] */ r_eax = R32((u32)(0x793604u));
    /* 005b8b25: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 005b8b28: cmp ecx, dword ptr [eax + edx*4 + 0x580] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+r_edx*4+0x580u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b8b2f: jne 0x5b8db5 */ if (!fZ) goto L_005b8db5;
L_005b8b35:; BB(0x005b8b35);
    /* 005b8b35: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b8b38: shl edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 005b8b3b: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 005b8b3e: lea ecx, [eax + edx + 0x48] */ r_ecx = (u32)(r_eax+r_edx+0x48u);
    /* 005b8b42: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005b8b45: mov eax, dword ptr [ecx + edx*8] */ r_eax = R32((u32)(r_ecx+r_edx*8));
    /* 005b8b48: mov ecx, dword ptr [ecx + edx*8 + 4] */ r_ecx = R32((u32)(r_ecx+r_edx*8+0x4u));
    /* 005b8b4c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005b8b4f: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b8b52: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005b8b55: mov dword ptr [ebp - 0x68], edx */ W32((u32)(r_ebp+0xffffff98u), r_edx);
    /* 005b8b58: cmp dword ptr [ebp - 0x68], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff98u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b8b5c: je 0x5b8b77 */ if (fZ) goto L_005b8b77;
L_005b8b5e:; BB(0x005b8b5e);
    /* 005b8b5e: cmp dword ptr [ebp - 0x68], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffff98u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b8b62: je 0x5b8c71 */ if (fZ) goto L_005b8c71;
L_005b8b68:; BB(0x005b8b68);
    /* 005b8b68: cmp dword ptr [ebp - 0x68], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff98u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b8b6c: je 0x5b8c51 */ if (fZ) goto L_005b8c51;
L_005b8b72:; BB(0x005b8b72);
    /* 005b8b72: jmp 0x5b8d95 */ goto L_005b8d95;
L_005b8b77:; BB(0x005b8b77);
    /* 005b8b77: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005b8b7a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b8b7b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b8b7e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8b7f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b8b82: mov eax, dword ptr [0x7935f8] */ r_eax = R32((u32)(0x7935f8u));
    /* 005b8b87: mov ecx, dword ptr [eax + edx*4 + 0x18] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x18u));
    /* 005b8b8b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b8b8e: mov eax, dword ptr [0x7935f8] */ r_eax = R32((u32)(0x7935f8u));
    /* 005b8b93: mov edx, dword ptr [eax + edx*4 + 0x18] */ r_edx = R32((u32)(r_eax+r_edx*4+0x18u));
    /* 005b8b97: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005b8b99: mov ecx, edx */ r_ecx = r_edx;
    /* 005b8b9b: mov edx, dword ptr [eax + 0xc0] */ r_edx = R32((u32)(r_eax+0xc0u));
    /* 005b8ba1: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5b8ba3u); call_ind(t); }
    /* 005b8ba3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b8ba6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b8ba7: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5b8bacu); f_005dcb00();
    /* 005b8bac: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b8baf: cmp dword ptr [eax + 0x4a8], 0 */ {  u32 a = R32((u32)(r_eax+0x4a8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b8bb6: jle 0x5b8bce */ if ((fZ||fS!=fO)) goto L_005b8bce;
L_005b8bb8:; BB(0x005b8bb8);
    /* 005b8bb8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b8bbb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8bbc: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5b8bc1u); f_005dcb00();
    /* 005b8bc1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b8bc4: mov dword ptr [eax + 0x4a8], 0 */ W32((u32)(r_eax+0x4a8u), 0x0u);
L_005b8bce:; BB(0x005b8bce);
    /* 005b8bce: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b8bd1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8bd2: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5b8bd7u); f_005dcb00();
    /* 005b8bd7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b8bda: add eax, 0x4a8 */ {  u32 a = r_eax; u32 b = 0x4a8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b8bdf: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 005b8be2: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 005b8be5: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005b8be7: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005b8bea: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 005b8bed: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 005b8bef: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b8bf2: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005b8bf4: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005b8bf7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b8bfa: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005b8bfc: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005b8bff: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005b8c02: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8c03: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005b8c06: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b8c07: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b8c0a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8c0b: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5b8c10u); f_005dcb00();
    /* 005b8c10: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b8c13: mov ecx, eax */ r_ecx = r_eax;
    /* 005b8c15: call 0x5d5fb0 */ r_esp -= 4; W32(r_esp, 0x5b8c1au); f_005d5fb0();
    /* 005b8c1a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b8c1c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b8c1e: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5b8c23u); f_0064c8a0();
    /* 005b8c23: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b8c26: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 005b8c29: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 005b8c2c: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005b8c2f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8c30: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b8c33: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b8c34: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005b8c37: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8c38: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005b8c3b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8c3c: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 005b8c3f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005b8c41: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 005b8c44: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 005b8c4a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5b8c4cu); call_ind(t); }
    /* 005b8c4c: jmp 0x5b8db0 */ goto L_005b8db0;
L_005b8c51:; BB(0x005b8c51);
    /* 005b8c51: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b8c54: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8c55: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b8c58: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8c59: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b8c5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b8c5d: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5b8c62u); f_005dcb00();
    /* 005b8c62: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b8c65: mov ecx, eax */ r_ecx = r_eax;
    /* 005b8c67: call 0x5d5cf0 */ r_esp -= 4; W32(r_esp, 0x5b8c6cu); f_005d5cf0();
    /* 005b8c6c: jmp 0x5b8db0 */ goto L_005b8db0;
L_005b8c71:; BB(0x005b8c71);
    /* 005b8c71: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b8c74: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8c75: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5b8c7au); f_005dcb00();
    /* 005b8c7a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b8c7d: cmp dword ptr [eax + 0x4a8], 0 */ {  u32 a = R32((u32)(r_eax+0x4a8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b8c84: jge 0x5b8c9c */ if ((fS==fO)) goto L_005b8c9c;
L_005b8c86:; BB(0x005b8c86);
    /* 005b8c86: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b8c89: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8c8a: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5b8c8fu); f_005dcb00();
    /* 005b8c8f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b8c92: mov dword ptr [eax + 0x4a8], 0 */ W32((u32)(r_eax+0x4a8u), 0x0u);
L_005b8c9c:; BB(0x005b8c9c);
    /* 005b8c9c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b8c9f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b8ca0: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5b8ca5u); f_005dcb00();
    /* 005b8ca5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b8ca8: mov ecx, eax */ r_ecx = r_eax;
    /* 005b8caa: call 0x5d7540 */ r_esp -= 4; W32(r_esp, 0x5b8cafu); f_005d7540();
    /* 005b8caf: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b8cb2: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005b8cb5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b8cb8: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 005b8cbb: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b8cbe: fld qword ptr [ebp - 0x18] */ FPUSH(R_F64((u32)(r_ebp+0xffffffe8u)));
    /* 005b8cc1: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 005b8cc4: lea ecx, [ebp - 0x20] */ r_ecx = (u32)(r_ebp+0xffffffe0u);
    /* 005b8cc7: call 0x64c560 */ r_esp -= 4; W32(r_esp, 0x5b8cccu); f_0064c560();
    /* 005b8ccc: cmp dword ptr [ebp - 0x20], 0x3b9aca00 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x3b9aca00u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b8cd3: jle 0x5b8ce3 */ if ((fZ||fS!=fO)) goto L_005b8ce3;
L_005b8cd5:; BB(0x005b8cd5);
    /* 005b8cd5: mov dword ptr [ebp - 0x20], 0x3b9aca00 */ W32((u32)(r_ebp+0xffffffe0u), 0x3b9aca00u);
    /* 005b8cdc: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_005b8ce3:; BB(0x005b8ce3);
    /* 005b8ce3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b8ce6: shl eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005b8ce9: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 005b8cec: lea edx, [ecx + eax + 0x48] */ r_edx = (u32)(r_ecx+r_eax+0x48u);
    /* 005b8cf0: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005b8cf3: mov ecx, dword ptr [edx + eax*8 + 4] */ r_ecx = R32((u32)(r_edx+r_eax*8+0x4u));
    /* 005b8cf7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8cf8: mov edx, dword ptr [edx + eax*8] */ r_edx = R32((u32)(r_edx+r_eax*8));
    /* 005b8cfb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8cfc: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 005b8cff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b8d00: lea ecx, [ebp - 0x20] */ r_ecx = (u32)(r_ebp+0xffffffe0u);
    /* 005b8d03: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x5b8d08u); f_0064c5c0();
    /* 005b8d08: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005b8d0a: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005b8d0d: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005b8d10: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005b8d13: cmp dword ptr [ebp - 0x10], 0x3b9aca00 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3b9aca00u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b8d1a: jl 0x5b8d3d */ if ((fS!=fO)) goto L_005b8d3d;
L_005b8d1c:; BB(0x005b8d1c);
    /* 005b8d1c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b8d1e: push 0x3b9aca00 */ { u32 v = 0x3b9aca00u; r_esp -= 4; W32(r_esp, v); }
    /* 005b8d23: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5b8d28u); f_0064c8a0();
    /* 005b8d28: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b8d2b: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 005b8d2e: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 005b8d31: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 005b8d34: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005b8d37: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005b8d3a: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_005b8d3d:; BB(0x005b8d3d);
    /* 005b8d3d: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b8d40: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8d41: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b8d44: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b8d45: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b8d48: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8d49: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5b8d4eu); f_005dcb00();
    /* 005b8d4e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b8d51: mov ecx, eax */ r_ecx = r_eax;
    /* 005b8d53: call 0x5d5cf0 */ r_esp -= 4; W32(r_esp, 0x5b8d58u); f_005d5cf0();
    /* 005b8d58: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005b8d5b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8d5c: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005b8d5f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b8d60: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b8d63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8d64: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5b8d69u); f_005dcb00();
    /* 005b8d69: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b8d6c: mov ecx, eax */ r_ecx = r_eax;
    /* 005b8d6e: call 0x5d5fb0 */ r_esp -= 4; W32(r_esp, 0x5b8d73u); f_005d5fb0();
    /* 005b8d73: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005b8d76: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8d77: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b8d7a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b8d7b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b8d7e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8d7f: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b8d82: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8d83: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 005b8d86: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005b8d88: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 005b8d8b: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 005b8d91: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5b8d93u); call_ind(t); }
    /* 005b8d93: jmp 0x5b8db0 */ goto L_005b8db0;
L_005b8d95:; BB(0x005b8d95);
    /* 005b8d95: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 005b8d97: jne 0x5b8db0 */ if (!fZ) goto L_005b8db0;
L_005b8d99:; BB(0x005b8d99);
    /* 005b8d99: push 0x9ba */ { u32 v = 0x9bau; r_esp -= 4; W32(r_esp, v); }
    /* 005b8d9e: push 0x6d0b5c */ { u32 v = 0x6d0b5cu; r_esp -= 4; W32(r_esp, v); }
    /* 005b8da3: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 005b8da8: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5b8dadu); f_005e9f20();
    /* 005b8dad: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005b8db0:; BB(0x005b8db0);
    /* 005b8db0: jmp 0x5b8fb2 */ goto L_005b8fb2;
L_005b8db5:; BB(0x005b8db5);
    /* 005b8db5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b8db8: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005b8dbe: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 005b8dc1: cmp edx, dword ptr [ecx + eax*4 + 0x634] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+r_eax*4+0x634u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b8dc8: jne 0x5b8f97 */ if (!fZ) goto L_005b8f97;
L_005b8dce:; BB(0x005b8dce);
    /* 005b8dce: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b8dd1: shl eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005b8dd4: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 005b8dd7: lea edx, [ecx + eax + 0x48] */ r_edx = (u32)(r_ecx+r_eax+0x48u);
    /* 005b8ddb: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005b8dde: mov ecx, dword ptr [edx + eax*8] */ r_ecx = R32((u32)(r_edx+r_eax*8));
    /* 005b8de1: mov edx, dword ptr [edx + eax*8 + 4] */ r_edx = R32((u32)(r_edx+r_eax*8+0x4u));
    /* 005b8de5: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005b8de8: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 005b8deb: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005b8dee: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 005b8df1: cmp dword ptr [ebp - 0x70], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff90u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b8df5: je 0x5b8e06 */ if (fZ) goto L_005b8e06;
L_005b8df7:; BB(0x005b8df7);
    /* 005b8df7: cmp dword ptr [ebp - 0x70], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffff90u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b8dfb: je 0x5b8e94 */ if (fZ) goto L_005b8e94;
L_005b8e01:; BB(0x005b8e01);
    /* 005b8e01: jmp 0x5b8f7a */ goto L_005b8f7a;
L_005b8e06:; BB(0x005b8e06);
    /* 005b8e06: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005b8e09: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8e0a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b8e0d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8e0e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b8e11: mov ecx, dword ptr [0x7935f8] */ r_ecx = R32((u32)(0x7935f8u));
    /* 005b8e17: mov edx, dword ptr [ecx + eax*4 + 0x48] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x48u));
    /* 005b8e1b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b8e1e: mov ecx, dword ptr [0x7935f8] */ r_ecx = R32((u32)(0x7935f8u));
    /* 005b8e24: mov ecx, dword ptr [ecx + eax*4 + 0x48] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x48u));
    /* 005b8e28: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005b8e2a: mov eax, dword ptr [edx + 0xc0] */ r_eax = R32((u32)(r_edx+0xc0u));
    /* 005b8e30: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5b8e32u); call_ind(t); }
    /* 005b8e32: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b8e35: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005b8e37: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005b8e3a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b8e3d: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005b8e3f: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 005b8e42: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005b8e45: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b8e46: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005b8e49: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8e4a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b8e4d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8e4e: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5b8e53u); f_005dcb00();
    /* 005b8e53: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b8e56: mov ecx, eax */ r_ecx = r_eax;
    /* 005b8e58: call 0x5d5fb0 */ r_esp -= 4; W32(r_esp, 0x5b8e5du); f_005d5fb0();
    /* 005b8e5d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b8e5f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b8e61: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5b8e66u); f_0064c8a0();
    /* 005b8e66: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b8e69: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 005b8e6c: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 005b8e6f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005b8e72: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b8e73: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b8e76: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8e77: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005b8e7a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8e7b: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 005b8e7e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b8e7f: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 005b8e82: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005b8e84: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 005b8e87: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 005b8e8d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5b8e8fu); call_ind(t); }
    /* 005b8e8f: jmp 0x5b8f95 */ goto L_005b8f95;
L_005b8e94:; BB(0x005b8e94);
    /* 005b8e94: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b8e97: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005b8e9a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b8e9d: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 005b8ea0: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b8ea3: fld qword ptr [ebp - 0x18] */ FPUSH(R_F64((u32)(r_ebp+0xffffffe8u)));
    /* 005b8ea6: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 005b8ea9: lea ecx, [ebp - 0x20] */ r_ecx = (u32)(r_ebp+0xffffffe0u);
    /* 005b8eac: call 0x64c560 */ r_esp -= 4; W32(r_esp, 0x5b8eb1u); f_0064c560();
    /* 005b8eb1: cmp dword ptr [ebp - 0x20], 0x3b9aca00 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x3b9aca00u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b8eb8: jle 0x5b8ec8 */ if ((fZ||fS!=fO)) goto L_005b8ec8;
L_005b8eba:; BB(0x005b8eba);
    /* 005b8eba: mov dword ptr [ebp - 0x20], 0x3b9aca00 */ W32((u32)(r_ebp+0xffffffe0u), 0x3b9aca00u);
    /* 005b8ec1: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_005b8ec8:; BB(0x005b8ec8);
    /* 005b8ec8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b8ecb: shl eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005b8ece: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 005b8ed1: lea edx, [ecx + eax + 0x48] */ r_edx = (u32)(r_ecx+r_eax+0x48u);
    /* 005b8ed5: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005b8ed8: mov ecx, dword ptr [edx + eax*8 + 4] */ r_ecx = R32((u32)(r_edx+r_eax*8+0x4u));
    /* 005b8edc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8edd: mov edx, dword ptr [edx + eax*8] */ r_edx = R32((u32)(r_edx+r_eax*8));
    /* 005b8ee0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8ee1: lea eax, [ebp - 0x58] */ r_eax = (u32)(r_ebp+0xffffffa8u);
    /* 005b8ee4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b8ee5: lea ecx, [ebp - 0x20] */ r_ecx = (u32)(r_ebp+0xffffffe0u);
    /* 005b8ee8: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x5b8eedu); f_0064c5c0();
    /* 005b8eed: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005b8eef: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005b8ef2: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005b8ef5: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005b8ef8: cmp dword ptr [ebp - 0x10], 0x3b9aca00 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3b9aca00u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b8eff: jl 0x5b8f22 */ if ((fS!=fO)) goto L_005b8f22;
L_005b8f01:; BB(0x005b8f01);
    /* 005b8f01: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b8f03: push 0x3b9aca00 */ { u32 v = 0x3b9aca00u; r_esp -= 4; W32(r_esp, v); }
    /* 005b8f08: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5b8f0du); f_0064c8a0();
    /* 005b8f0d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b8f10: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 005b8f13: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
    /* 005b8f16: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 005b8f19: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005b8f1c: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 005b8f1f: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_005b8f22:; BB(0x005b8f22);
    /* 005b8f22: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b8f25: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8f26: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b8f29: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b8f2a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b8f2d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8f2e: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5b8f33u); f_005dcb00();
    /* 005b8f33: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b8f36: mov ecx, eax */ r_ecx = r_eax;
    /* 005b8f38: call 0x5d5cf0 */ r_esp -= 4; W32(r_esp, 0x5b8f3du); f_005d5cf0();
    /* 005b8f3d: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005b8f40: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8f41: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005b8f44: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b8f45: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b8f48: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8f49: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5b8f4eu); f_005dcb00();
    /* 005b8f4e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b8f51: mov ecx, eax */ r_ecx = r_eax;
    /* 005b8f53: call 0x5d5fb0 */ r_esp -= 4; W32(r_esp, 0x5b8f58u); f_005d5fb0();
    /* 005b8f58: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005b8f5b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8f5c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b8f5f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b8f60: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b8f63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8f64: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b8f67: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8f68: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 005b8f6b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005b8f6d: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 005b8f70: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 005b8f76: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5b8f78u); call_ind(t); }
    /* 005b8f78: jmp 0x5b8f95 */ goto L_005b8f95;
L_005b8f7a:; BB(0x005b8f7a);
    /* 005b8f7a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 005b8f7c: jne 0x5b8f95 */ if (!fZ) goto L_005b8f95;
L_005b8f7e:; BB(0x005b8f7e);
    /* 005b8f7e: push 0x9dc */ { u32 v = 0x9dcu; r_esp -= 4; W32(r_esp, v); }
    /* 005b8f83: push 0x6d0b5c */ { u32 v = 0x6d0b5cu; r_esp -= 4; W32(r_esp, v); }
    /* 005b8f88: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 005b8f8d: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5b8f92u); f_005e9f20();
    /* 005b8f92: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005b8f95:; BB(0x005b8f95);
    /* 005b8f95: jmp 0x5b8fb2 */ goto L_005b8fb2;
L_005b8f97:; BB(0x005b8f97);
    /* 005b8f97: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005b8f99: jne 0x5b8fb2 */ if (!fZ) goto L_005b8fb2;
L_005b8f9b:; BB(0x005b8f9b);
    /* 005b8f9b: push 0x9e2 */ { u32 v = 0x9e2u; r_esp -= 4; W32(r_esp, v); }
    /* 005b8fa0: push 0x6d0b5c */ { u32 v = 0x6d0b5cu; r_esp -= 4; W32(r_esp, v); }
    /* 005b8fa5: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 005b8faa: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5b8fafu); f_005e9f20();
    /* 005b8faf: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005b8fb2:; BB(0x005b8fb2);
    /* 005b8fb2: mov esp, ebp */ r_esp = r_ebp;
    /* 005b8fb4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b8fb5: ret 0x14 */ FN_RET(0x005b8ab0); r_esp += 24; return;
}

