#include "protos.h"

void f_0057f0f0(void) /* sub_57F0F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0057f0f0);
    /* 0057f0f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057f0f1: mov ebp, esp */ r_ebp = r_esp;
    /* 0057f0f3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0057f0f5: push 0x6a69ac */ { u32 v = 0x6a69acu; r_esp -= 4; W32(r_esp, v); }
    /* 0057f0fa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0057f100: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057f101: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0057f104: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0057f109: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0057f10b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057f10c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0057f10f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0057f115: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 0057f118: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 0057f11d: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x57f122u); f_00686d82();
    /* 0057f122: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057f125: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0057f128: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0057f12f: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057f133: je 0x57f142 */ if (fZ) goto L_0057f142;
L_0057f135:; BB(0x0057f135);
    /* 0057f135: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0057f138: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x57f13du); f_005eaaf0();
    /* 0057f13d: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0057f140: jmp 0x57f149 */ goto L_0057f149;
L_0057f142:; BB(0x0057f142);
    /* 0057f142: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_0057f149:; BB(0x0057f149);
    /* 0057f149: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0057f14c: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0057f14f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0057f156: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0057f159: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057f15c: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 0057f15e: push 0x30dfe1 */ { u32 v = 0x30dfe1u; r_esp -= 4; W32(r_esp, v); }
    /* 0057f163: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0057f166: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0057f168: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x57f16du); f_005eaf00();
    /* 0057f16d: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0057f16f: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0057f172: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0057f174: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0057f177: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0057f179: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0057f17b: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0057f17e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57f180u); call_ind(t); }
    /* 0057f180: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0057f183: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0057f185: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0057f188: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0057f18a: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0057f18c: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0057f18f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57f191u); call_ind(t); }
    /* 0057f191: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0057f194: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0057f196: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0057f199: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0057f19b: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0057f19d: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0057f1a0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57f1a2u); call_ind(t); }
    /* 0057f1a2: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 0057f1a7: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x57f1acu); f_00686d82();
    /* 0057f1ac: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057f1af: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0057f1b2: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0057f1b9: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057f1bd: je 0x57f1cc */ if (fZ) goto L_0057f1cc;
L_0057f1bf:; BB(0x0057f1bf);
    /* 0057f1bf: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0057f1c2: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x57f1c7u); f_005eaaf0();
    /* 0057f1c7: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0057f1ca: jmp 0x57f1d3 */ goto L_0057f1d3;
L_0057f1cc:; BB(0x0057f1cc);
    /* 0057f1cc: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_0057f1d3:; BB(0x0057f1d3);
    /* 0057f1d3: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0057f1d6: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0057f1d9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0057f1e0: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0057f1e3: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057f1e6: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0057f1e9: push 0x30dfc7 */ { u32 v = 0x30dfc7u; r_esp -= 4; W32(r_esp, v); }
    /* 0057f1ee: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0057f1f1: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0057f1f4: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x57f1f9u); f_005eaf00();
    /* 0057f1f9: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0057f1fb: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0057f1fe: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0057f201: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0057f204: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0057f207: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0057f209: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0057f20f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57f211u); call_ind(t); }
    /* 0057f211: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0057f213: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0057f216: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0057f219: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0057f21c: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0057f21f: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0057f221: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0057f224: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57f226u); call_ind(t); }
    /* 0057f226: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0057f229: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0057f22c: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0057f22f: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0057f232: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0057f234: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0057f237: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57f239u); call_ind(t); }
    /* 0057f239: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0057f23c: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0057f23f: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0057f242: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0057f245: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0057f247: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0057f24a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57f24cu); call_ind(t); }
    /* 0057f24c: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 0057f251: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x57f256u); f_00686d82();
    /* 0057f256: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057f259: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0057f25c: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0057f263: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057f267: je 0x57f276 */ if (fZ) goto L_0057f276;
L_0057f269:; BB(0x0057f269);
    /* 0057f269: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0057f26c: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x57f271u); f_005eaaf0();
    /* 0057f271: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0057f274: jmp 0x57f27d */ goto L_0057f27d;
L_0057f276:; BB(0x0057f276);
    /* 0057f276: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_0057f27d:; BB(0x0057f27d);
    /* 0057f27d: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0057f280: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0057f283: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0057f28a: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0057f28d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0057f290: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 0057f293: push 0x30dfc8 */ { u32 v = 0x30dfc8u; r_esp -= 4; W32(r_esp, v); }
    /* 0057f298: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0057f29b: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 0057f29e: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x57f2a3u); f_005eaf00();
    /* 0057f2a3: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0057f2a5: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0057f2a8: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0057f2ab: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0057f2ae: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 0057f2b1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0057f2b3: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0057f2b9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57f2bbu); call_ind(t); }
    /* 0057f2bb: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0057f2bd: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0057f2c0: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0057f2c3: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0057f2c6: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0057f2c9: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0057f2cb: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0057f2ce: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57f2d0u); call_ind(t); }
    /* 0057f2d0: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0057f2d3: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0057f2d6: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0057f2d9: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0057f2dc: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0057f2de: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0057f2e1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57f2e3u); call_ind(t); }
    /* 0057f2e3: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0057f2e6: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0057f2e9: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0057f2ec: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0057f2ef: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0057f2f1: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0057f2f4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57f2f6u); call_ind(t); }
    /* 0057f2f6: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 0057f2fb: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x57f300u); f_00686d82();
    /* 0057f300: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057f303: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0057f306: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0057f30d: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057f311: je 0x57f320 */ if (fZ) goto L_0057f320;
L_0057f313:; BB(0x0057f313);
    /* 0057f313: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0057f316: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x57f31bu); f_005eaaf0();
    /* 0057f31b: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0057f31e: jmp 0x57f327 */ goto L_0057f327;
L_0057f320:; BB(0x0057f320);
    /* 0057f320: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
L_0057f327:; BB(0x0057f327);
    /* 0057f327: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0057f32a: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0057f32d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0057f334: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0057f337: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057f33a: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 0057f33d: push 0x30dfc9 */ { u32 v = 0x30dfc9u; r_esp -= 4; W32(r_esp, v); }
    /* 0057f342: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0057f345: mov ecx, dword ptr [ecx + 0xc] */ r_ecx = R32((u32)(r_ecx+0xcu));
    /* 0057f348: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x57f34du); f_005eaf00();
    /* 0057f34d: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0057f34f: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0057f352: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 0057f355: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0057f358: mov ecx, dword ptr [ecx + 0xc] */ r_ecx = R32((u32)(r_ecx+0xcu));
    /* 0057f35b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0057f35d: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0057f363: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57f365u); call_ind(t); }
    /* 0057f365: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0057f367: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0057f36a: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 0057f36d: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0057f370: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0057f373: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0057f375: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0057f378: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57f37au); call_ind(t); }
    /* 0057f37a: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0057f37d: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 0057f380: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0057f383: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0057f386: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0057f388: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0057f38b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57f38du); call_ind(t); }
    /* 0057f38d: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0057f390: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 0057f393: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0057f396: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0057f399: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0057f39b: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0057f39e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57f3a0u); call_ind(t); }
    /* 0057f3a0: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 0057f3a5: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x57f3aau); f_00686d82();
    /* 0057f3aa: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057f3ad: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0057f3b0: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 0057f3b7: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057f3bb: je 0x57f3ca */ if (fZ) goto L_0057f3ca;
L_0057f3bd:; BB(0x0057f3bd);
    /* 0057f3bd: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0057f3c0: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x57f3c5u); f_005eaaf0();
    /* 0057f3c5: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0057f3c8: jmp 0x57f3d1 */ goto L_0057f3d1;
L_0057f3ca:; BB(0x0057f3ca);
    /* 0057f3ca: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_0057f3d1:; BB(0x0057f3d1);
    /* 0057f3d1: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0057f3d4: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 0057f3d7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0057f3de: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0057f3e1: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0057f3e4: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 0057f3e7: push 0x30dfca */ { u32 v = 0x30dfcau; r_esp -= 4; W32(r_esp, v); }
    /* 0057f3ec: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0057f3ef: mov ecx, dword ptr [ecx + 0x10] */ r_ecx = R32((u32)(r_ecx+0x10u));
    /* 0057f3f2: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x57f3f7u); f_005eaf00();
    /* 0057f3f7: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0057f3f9: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0057f3fc: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 0057f3ff: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0057f402: mov ecx, dword ptr [ecx + 0x10] */ r_ecx = R32((u32)(r_ecx+0x10u));
    /* 0057f405: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0057f407: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0057f40d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57f40fu); call_ind(t); }
    /* 0057f40f: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0057f411: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0057f414: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 0057f417: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0057f41a: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 0057f41d: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0057f41f: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0057f422: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57f424u); call_ind(t); }
    /* 0057f424: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0057f427: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 0057f42a: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0057f42d: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 0057f430: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0057f432: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0057f435: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57f437u); call_ind(t); }
    /* 0057f437: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0057f43a: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 0057f43d: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0057f440: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 0057f443: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0057f445: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0057f448: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57f44au); call_ind(t); }
    /* 0057f44a: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0057f44d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0057f450: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0057f457: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0057f458: mov esp, ebp */ r_esp = r_ebp;
    /* 0057f45a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057f45b: ret  */ FN_RET(0x0057f0f0); r_esp += 4; return;
}

void f_0057f460(void) /* sub_57F460 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0057f460);
    /* 0057f460: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057f461: mov ebp, esp */ r_ebp = r_esp;
    /* 0057f463: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0057f466: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 0057f469: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0057f46c: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0057f46e: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0057f471: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0057f473: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0057f475: mov ecx, eax */ r_ecx = r_eax;
    /* 0057f477: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0057f47a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57f47cu); call_ind(t); }
    /* 0057f47c: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0057f47f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0057f481: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0057f484: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057f487: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0057f48a: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057f48e: je 0x57f4a3 */ if (fZ) goto L_0057f4a3;
L_0057f490:; BB(0x0057f490);
    /* 0057f490: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0057f492: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057f495: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0057f497: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057f49a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0057f49c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57f49eu); call_ind(t); }
    /* 0057f49e: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0057f4a1: jmp 0x57f4aa */ goto L_0057f4aa;
L_0057f4a3:; BB(0x0057f4a3);
    /* 0057f4a3: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_0057f4aa:; BB(0x0057f4aa);
    /* 0057f4aa: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0057f4ad: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
    /* 0057f4b3: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0057f4b6: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0057f4b9: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0057f4bc: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0057f4bf: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0057f4c1: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0057f4c4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57f4c6u); call_ind(t); }
    /* 0057f4c6: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0057f4c9: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0057f4cc: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0057f4cf: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057f4d2: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0057f4d5: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057f4d9: je 0x57f4ee */ if (fZ) goto L_0057f4ee;
L_0057f4db:; BB(0x0057f4db);
    /* 0057f4db: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0057f4dd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0057f4e0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0057f4e2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0057f4e5: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0057f4e7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57f4e9u); call_ind(t); }
    /* 0057f4e9: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0057f4ec: jmp 0x57f4f5 */ goto L_0057f4f5;
L_0057f4ee:; BB(0x0057f4ee);
    /* 0057f4ee: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_0057f4f5:; BB(0x0057f4f5);
    /* 0057f4f5: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0057f4f8: mov dword ptr [ecx + 4], 0 */ W32((u32)(r_ecx+0x4u), 0x0u);
    /* 0057f4ff: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0057f502: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0057f505: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0057f508: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 0057f50b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0057f50d: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0057f510: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57f512u); call_ind(t); }
    /* 0057f512: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0057f515: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0057f518: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0057f51b: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057f51e: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0057f521: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057f525: je 0x57f53a */ if (fZ) goto L_0057f53a;
L_0057f527:; BB(0x0057f527);
    /* 0057f527: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0057f529: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0057f52c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0057f52e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0057f531: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0057f533: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57f535u); call_ind(t); }
    /* 0057f535: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0057f538: jmp 0x57f541 */ goto L_0057f541;
L_0057f53a:; BB(0x0057f53a);
    /* 0057f53a: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_0057f541:; BB(0x0057f541);
    /* 0057f541: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0057f544: mov dword ptr [ecx + 8], 0 */ W32((u32)(r_ecx+0x8u), 0x0u);
    /* 0057f54b: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0057f54e: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 0057f551: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0057f554: mov ecx, dword ptr [ecx + 0xc] */ r_ecx = R32((u32)(r_ecx+0xcu));
    /* 0057f557: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0057f559: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0057f55c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57f55eu); call_ind(t); }
    /* 0057f55e: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0057f561: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 0057f564: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0057f567: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0057f56a: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0057f56d: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057f571: je 0x57f586 */ if (fZ) goto L_0057f586;
L_0057f573:; BB(0x0057f573);
    /* 0057f573: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0057f575: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0057f578: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0057f57a: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0057f57d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0057f57f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57f581u); call_ind(t); }
    /* 0057f581: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0057f584: jmp 0x57f58d */ goto L_0057f58d;
L_0057f586:; BB(0x0057f586);
    /* 0057f586: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_0057f58d:; BB(0x0057f58d);
    /* 0057f58d: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0057f590: mov dword ptr [ecx + 0xc], 0 */ W32((u32)(r_ecx+0xcu), 0x0u);
    /* 0057f597: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0057f59a: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 0057f59d: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0057f5a0: mov ecx, dword ptr [ecx + 0x10] */ r_ecx = R32((u32)(r_ecx+0x10u));
    /* 0057f5a3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0057f5a5: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0057f5a8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57f5aau); call_ind(t); }
    /* 0057f5aa: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0057f5ad: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 0057f5b0: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 0057f5b3: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057f5b6: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0057f5b9: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057f5bd: je 0x57f5d2 */ if (fZ) goto L_0057f5d2;
L_0057f5bf:; BB(0x0057f5bf);
    /* 0057f5bf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0057f5c1: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0057f5c4: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0057f5c6: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0057f5c9: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0057f5cb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57f5cdu); call_ind(t); }
    /* 0057f5cd: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0057f5d0: jmp 0x57f5d9 */ goto L_0057f5d9;
L_0057f5d2:; BB(0x0057f5d2);
    /* 0057f5d2: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_0057f5d9:; BB(0x0057f5d9);
    /* 0057f5d9: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0057f5dc: mov dword ptr [ecx + 0x10], 0 */ W32((u32)(r_ecx+0x10u), 0x0u);
    /* 0057f5e3: mov esp, ebp */ r_esp = r_ebp;
    /* 0057f5e5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057f5e6: ret  */ FN_RET(0x0057f460); r_esp += 4; return;
}

void f_0057f5f0(void) /* sub_57F5F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0057f5f0);
    /* 0057f5f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057f5f1: mov ebp, esp */ r_ebp = r_esp;
    /* 0057f5f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057f5f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0057f5f7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057f5fa: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0057f5fc: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057f5ff: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0057f601: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0057f603: mov ecx, eax */ r_ecx = r_eax;
    /* 0057f605: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0057f608: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57f60au); call_ind(t); }
    /* 0057f60a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057f60d: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0057f610: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057f613: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0057f616: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0057f618: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0057f61b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57f61du); call_ind(t); }
    /* 0057f61d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057f620: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0057f623: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057f626: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0057f629: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0057f62b: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0057f62e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57f630u); call_ind(t); }
    /* 0057f630: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057f633: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 0057f636: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057f639: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0057f63c: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0057f63e: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0057f641: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57f643u); call_ind(t); }
    /* 0057f643: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057f646: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 0057f649: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057f64c: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 0057f64f: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0057f651: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0057f654: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57f656u); call_ind(t); }
    /* 0057f656: mov esp, ebp */ r_esp = r_ebp;
    /* 0057f658: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057f659: ret  */ FN_RET(0x0057f5f0); r_esp += 4; return;
}

void f_0057f660(void) /* sub_57F660 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0057f660);
    /* 0057f660: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057f661: mov ebp, esp */ r_ebp = r_esp;
    /* 0057f663: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057f664: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0057f667: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057f66a: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0057f66c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057f66f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0057f671: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0057f673: mov ecx, eax */ r_ecx = r_eax;
    /* 0057f675: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0057f678: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57f67au); call_ind(t); }
    /* 0057f67a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057f67d: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0057f680: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057f683: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0057f686: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0057f688: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0057f68b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57f68du); call_ind(t); }
    /* 0057f68d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057f690: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0057f693: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057f696: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0057f699: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0057f69b: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0057f69e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57f6a0u); call_ind(t); }
    /* 0057f6a0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057f6a3: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 0057f6a6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057f6a9: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0057f6ac: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0057f6ae: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0057f6b1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57f6b3u); call_ind(t); }
    /* 0057f6b3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057f6b6: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 0057f6b9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057f6bc: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 0057f6bf: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0057f6c1: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0057f6c4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57f6c6u); call_ind(t); }
    /* 0057f6c6: mov esp, ebp */ r_esp = r_ebp;
    /* 0057f6c8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057f6c9: ret  */ FN_RET(0x0057f660); r_esp += 4; return;
}

