#include "protos.h"

void f_00625f10(void) /* sciGroupBox::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00625f10);
    /* 00625f10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00625f11: mov ebp, esp */ r_ebp = r_esp;
    /* 00625f13: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00625f14: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00625f17: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00625f1a: call 0x5f49d0 */ r_esp -= 4; W32(r_esp, 0x625f1fu); f_005f49d0();
    /* 00625f1f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00625f22: mov dword ptr [eax], 0x6d9064 */ W32((u32)(r_eax), 0x6d9064u);
    /* 00625f28: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00625f2b: mov dword ptr [ecx + 0x54], 0 */ W32((u32)(r_ecx+0x54u), 0x0u);
    /* 00625f32: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00625f35: mov dword ptr [edx + 0x58], 0 */ W32((u32)(r_edx+0x58u), 0x0u);
    /* 00625f3c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00625f3f: mov dword ptr [eax + 0x5c], 0 */ W32((u32)(r_eax+0x5cu), 0x0u);
    /* 00625f46: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00625f49: mov dword ptr [ecx + 0x60], 0 */ W32((u32)(r_ecx+0x60u), 0x0u);
    /* 00625f50: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00625f53: mov dword ptr [edx + 0x64], 0xffffffff */ W32((u32)(r_edx+0x64u), 0xffffffffu);
    /* 00625f5a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00625f5d: mov byte ptr [eax + 0x68], 1 */ W8((u32)(r_eax+0x68u), 0x1u);
    /* 00625f61: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00625f64: mov dl, byte ptr [0x75f494] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(0x75f494u))) & 0xffu);
    /* 00625f6a: mov byte ptr [ecx + 0x48], dl */ W8((u32)(r_ecx+0x48u), (u8)r_edx);
    /* 00625f6d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00625f70: mov cl, byte ptr [0x75f495] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(0x75f495u))) & 0xffu);
    /* 00625f76: mov byte ptr [eax + 0x49], cl */ W8((u32)(r_eax+0x49u), (u8)r_ecx);
    /* 00625f79: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00625f7c: mov al, byte ptr [0x75f496] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0x75f496u))) & 0xffu);
    /* 00625f81: mov byte ptr [edx + 0x4a], al */ W8((u32)(r_edx+0x4au), (u8)r_eax);
    /* 00625f84: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00625f87: mov dl, byte ptr [0x75f498] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(0x75f498u))) & 0xffu);
    /* 00625f8d: mov byte ptr [ecx + 0x4b], dl */ W8((u32)(r_ecx+0x4bu), (u8)r_edx);
    /* 00625f90: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00625f93: mov cl, byte ptr [0x75f499] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(0x75f499u))) & 0xffu);
    /* 00625f99: mov byte ptr [eax + 0x4c], cl */ W8((u32)(r_eax+0x4cu), (u8)r_ecx);
    /* 00625f9c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00625f9f: mov al, byte ptr [0x75f49a] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0x75f49au))) & 0xffu);
    /* 00625fa4: mov byte ptr [edx + 0x4d], al */ W8((u32)(r_edx+0x4du), (u8)r_eax);
    /* 00625fa7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00625faa: mov dl, byte ptr [0x75f49c] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(0x75f49cu))) & 0xffu);
    /* 00625fb0: mov byte ptr [ecx + 0x4e], dl */ W8((u32)(r_ecx+0x4eu), (u8)r_edx);
    /* 00625fb3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00625fb6: mov cl, byte ptr [0x75f49d] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(0x75f49du))) & 0xffu);
    /* 00625fbc: mov byte ptr [eax + 0x4f], cl */ W8((u32)(r_eax+0x4fu), (u8)r_ecx);
    /* 00625fbf: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00625fc2: mov al, byte ptr [0x75f49e] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0x75f49eu))) & 0xffu);
    /* 00625fc7: mov byte ptr [edx + 0x50], al */ W8((u32)(r_edx+0x50u), (u8)r_eax);
    /* 00625fca: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00625fcd: mov esp, ebp */ r_esp = r_ebp;
    /* 00625fcf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00625fd0: ret  */ FN_RET(0x00625f10); r_esp += 4; return;
}

void f_00625fe0(void) /* sciGroupBox::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00625fe0);
    /* 00625fe0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00625fe1: mov ebp, esp */ r_ebp = r_esp;
    /* 00625fe3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00625fe5: push 0x6ab458 */ { u32 v = 0x6ab458u; r_esp -= 4; W32(r_esp, v); }
    /* 00625fea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00625ff0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00625ff1: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00625ff4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00625ff9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00625ffb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00625ffc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00625fff: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00626005: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 00626008: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0062600b: mov dword ptr [eax], 0x6d9064 */ W32((u32)(r_eax), 0x6d9064u);
    /* 00626011: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00626018: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0062601b: mov edx, dword ptr [ecx + 0x60] */ r_edx = R32((u32)(r_ecx+0x60u));
    /* 0062601e: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00626021: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00626024: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00626025: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x62602au); f_00686cae();
    /* 0062602a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062602d: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00626030: mov edx, dword ptr [ecx + 0x5c] */ r_edx = R32((u32)(r_ecx+0x5cu));
    /* 00626033: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00626036: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00626039: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0062603c: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00626040: je 0x626055 */ if (fZ) goto L_00626055;
L_00626042:; BB(0x00626042);
    /* 00626042: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00626044: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00626047: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00626049: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0062604c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0062604e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x626050u); call_ind(t); }
    /* 00626050: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00626053: jmp 0x62605c */ goto L_0062605c;
L_00626055:; BB(0x00626055);
    /* 00626055: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_0062605c:; BB(0x0062605c);
    /* 0062605c: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0062605f: mov edx, dword ptr [ecx + 0x54] */ r_edx = R32((u32)(r_ecx+0x54u));
    /* 00626062: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 00626065: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00626068: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0062606b: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062606f: je 0x626084 */ if (fZ) goto L_00626084;
L_00626071:; BB(0x00626071);
    /* 00626071: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00626073: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00626076: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00626078: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0062607b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0062607d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x62607fu); call_ind(t); }
    /* 0062607f: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00626082: jmp 0x62608b */ goto L_0062608b;
L_00626084:; BB(0x00626084);
    /* 00626084: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_0062608b:; BB(0x0062608b);
    /* 0062608b: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0062608e: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 00626091: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 00626094: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00626097: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0062609a: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062609e: je 0x6260b3 */ if (fZ) goto L_006260b3;
L_006260a0:; BB(0x006260a0);
    /* 006260a0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006260a2: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006260a5: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006260a7: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006260aa: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006260ac: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6260aeu); call_ind(t); }
    /* 006260ae: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 006260b1: jmp 0x6260ba */ goto L_006260ba;
L_006260b3:; BB(0x006260b3);
    /* 006260b3: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_006260ba:; BB(0x006260ba);
    /* 006260ba: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006260c1: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 006260c4: call 0x5f4ad0 */ r_esp -= 4; W32(r_esp, 0x6260c9u); f_005f4ad0();
    /* 006260c9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006260cc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006260d3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006260d4: mov esp, ebp */ r_esp = r_ebp;
    /* 006260d6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006260d7: ret  */ FN_RET(0x00625fe0); r_esp += 4; return;
}

void f_00626190(void) /* sciGroupBox::vfunc16 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00626190);
    /* 00626190: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00626191: mov ebp, esp */ r_ebp = r_esp;
    /* 00626193: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00626195: push 0x6ab494 */ { u32 v = 0x6ab494u; r_esp -= 4; W32(r_esp, v); }
    /* 0062619a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006261a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006261a1: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006261a4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006261a5: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 006261aa: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006261ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006261ad: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 006261b0: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 006261b6: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 006261b9: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006261bc: call 0x5f5010 */ r_esp -= 4; W32(r_esp, 0x6261c1u); f_005f5010();
    /* 006261c1: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 006261c4: cmp dword ptr [eax + 0x54], 0 */ {  u32 a = R32((u32)(r_eax+0x54u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006261c8: jne 0x626212 */ if (!fZ) goto L_00626212;
L_006261ca:; BB(0x006261ca);
    /* 006261ca: push 0x60 */ { u32 v = 0x60u; r_esp -= 4; W32(r_esp, v); }
    /* 006261cc: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x6261d1u); f_00686d82();
    /* 006261d1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006261d4: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 006261d7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006261de: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006261e2: je 0x6261f5 */ if (fZ) goto L_006261f5;
L_006261e4:; BB(0x006261e4);
    /* 006261e4: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006261e7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006261e8: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006261eb: call 0x626c30 */ r_esp -= 4; W32(r_esp, 0x6261f0u); f_00626c30();
    /* 006261f0: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 006261f3: jmp 0x6261fc */ goto L_006261fc;
L_006261f5:; BB(0x006261f5);
    /* 006261f5: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_006261fc:; BB(0x006261fc);
    /* 006261fc: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 006261ff: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00626202: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00626209: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0062620c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062620f: mov dword ptr [eax + 0x54], ecx */ W32((u32)(r_eax+0x54u), r_ecx);
L_00626212:; BB(0x00626212);
    /* 00626212: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00626215: cmp dword ptr [edx + 0x58], 0 */ {  u32 a = R32((u32)(r_edx+0x58u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00626219: jne 0x626263 */ if (!fZ) goto L_00626263;
L_0062621b:; BB(0x0062621b);
    /* 0062621b: push 0x60 */ { u32 v = 0x60u; r_esp -= 4; W32(r_esp, v); }
    /* 0062621d: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x626222u); f_00686d82();
    /* 00626222: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00626225: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00626228: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0062622f: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00626233: je 0x626246 */ if (fZ) goto L_00626246;
L_00626235:; BB(0x00626235);
    /* 00626235: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00626238: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00626239: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0062623c: call 0x626c30 */ r_esp -= 4; W32(r_esp, 0x626241u); f_00626c30();
    /* 00626241: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00626244: jmp 0x62624d */ goto L_0062624d;
L_00626246:; BB(0x00626246);
    /* 00626246: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_0062624d:; BB(0x0062624d);
    /* 0062624d: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00626250: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00626253: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0062625a: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0062625d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00626260: mov dword ptr [edx + 0x58], eax */ W32((u32)(r_edx+0x58u), r_eax);
L_00626263:; BB(0x00626263);
    /* 00626263: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00626266: cmp dword ptr [ecx + 0x5c], 0 */ {  u32 a = R32((u32)(r_ecx+0x5cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062626a: jne 0x6262b3 */ if (!fZ) goto L_006262b3;
L_0062626c:; BB(0x0062626c);
    /* 0062626c: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 00626271: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x626276u); f_00686d82();
    /* 00626276: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00626279: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0062627c: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00626283: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00626287: je 0x626296 */ if (fZ) goto L_00626296;
L_00626289:; BB(0x00626289);
    /* 00626289: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0062628c: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x626291u); f_005ec5a0();
    /* 00626291: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00626294: jmp 0x62629d */ goto L_0062629d;
L_00626296:; BB(0x00626296);
    /* 00626296: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_0062629d:; BB(0x0062629d);
    /* 0062629d: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 006262a0: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 006262a3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006262aa: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 006262ad: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006262b0: mov dword ptr [eax + 0x5c], ecx */ W32((u32)(r_eax+0x5cu), r_ecx);
L_006262b3:; BB(0x006262b3);
    /* 006262b3: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006262b6: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 006262b9: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006262bc: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 006262bf: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 006262c2: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 006262c5: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 006262c8: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006262cb: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 006262ce: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006262d1: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006262d4: mov edx, dword ptr [ecx + 0x5c] */ r_edx = R32((u32)(r_ecx+0x5cu));
    /* 006262d7: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 006262da: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 006262dd: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 006262e0: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006262e3: call 0x5f5590 */ r_esp -= 4; W32(r_esp, 0x6262e8u); f_005f5590();
    /* 006262e8: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006262eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006262ec: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006262ef: call 0x5f5550 */ r_esp -= 4; W32(r_esp, 0x6262f4u); f_005f5550();
    /* 006262f4: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006262f7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006262f8: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006262fb: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 006262fe: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00626301: mov ecx, dword ptr [ecx + 0x54] */ r_ecx = R32((u32)(r_ecx+0x54u));
    /* 00626304: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00626306: mov eax, dword ptr [edx + 0x78] */ r_eax = R32((u32)(r_edx+0x78u));
    /* 00626309: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x62630bu); call_ind(t); }
    /* 0062630b: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0062630e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00626310: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00626313: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 00626316: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x626318u); call_ind(t); }
    /* 00626318: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00626319: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0062631c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0062631e: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00626321: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 00626324: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x626326u); call_ind(t); }
    /* 00626326: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00626327: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0062632a: mov edx, dword ptr [ecx + 0x54] */ r_edx = R32((u32)(r_ecx+0x54u));
    /* 0062632d: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00626330: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 00626333: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00626335: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00626338: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x62633au); call_ind(t); }
    /* 0062633a: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0062633d: mov edx, dword ptr [ecx + 0x54] */ r_edx = R32((u32)(r_ecx+0x54u));
    /* 00626340: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00626343: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 00626346: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00626348: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0062634b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x62634du); call_ind(t); }
    /* 0062634d: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00626350: call 0x5f5590 */ r_esp -= 4; W32(r_esp, 0x626355u); f_005f5590();
    /* 00626355: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00626358: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00626359: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0062635c: call 0x5f5550 */ r_esp -= 4; W32(r_esp, 0x626361u); f_005f5550();
    /* 00626361: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00626364: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00626365: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00626368: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 0062636b: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0062636e: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 00626371: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00626373: mov eax, dword ptr [edx + 0x78] */ r_eax = R32((u32)(r_edx+0x78u));
    /* 00626376: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x626378u); call_ind(t); }
    /* 00626378: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0062637b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0062637d: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00626380: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 00626383: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x626385u); call_ind(t); }
    /* 00626385: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00626388: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00626389: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0062638c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0062638e: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00626391: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 00626394: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x626396u); call_ind(t); }
    /* 00626396: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00626399: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062639a: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0062639d: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 006263a0: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 006263a3: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 006263a6: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 006263a8: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 006263ab: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6263adu); call_ind(t); }
    /* 006263ad: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006263b0: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 006263b3: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 006263b6: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 006263b9: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 006263bb: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 006263be: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6263c0u); call_ind(t); }
    /* 006263c0: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006263c3: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006263c5: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006263c8: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 006263cb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6263cdu); call_ind(t); }
    /* 006263cd: sub eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006263d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006263d1: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006263d4: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006263d6: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006263d9: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 006263dc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6263deu); call_ind(t); }
    /* 006263de: add eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006263e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006263e2: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006263e5: mov edx, dword ptr [ecx + 0x5c] */ r_edx = R32((u32)(r_ecx+0x5cu));
    /* 006263e8: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 006263eb: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 006263ee: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 006263f0: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 006263f3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6263f5u); call_ind(t); }
    /* 006263f5: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006263f8: cmp dword ptr [ecx + 0x64], -1 */ {  u32 a = R32((u32)(r_ecx+0x64u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006263fc: je 0x626427 */ if (fZ) goto L_00626427;
L_006263fe:; BB(0x006263fe);
    /* 006263fe: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006263ff: mov edx, esp */ r_edx = r_esp;
    /* 00626401: mov ax, word ptr [0x75ee1c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x75ee1cu))) & 0xffffu);
    /* 00626407: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 0062640a: mov cl, byte ptr [0x75ee1e] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(0x75ee1eu))) & 0xffu);
    /* 00626410: mov byte ptr [edx + 2], cl */ W8((u32)(r_edx+0x2u), (u8)r_ecx);
    /* 00626413: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00626415: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00626418: mov eax, dword ptr [edx + 0x64] */ r_eax = R32((u32)(r_edx+0x64u));
    /* 0062641b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062641c: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0062641f: mov ecx, dword ptr [ecx + 0x5c] */ r_ecx = R32((u32)(r_ecx+0x5cu));
    /* 00626422: call 0x5ecd00 */ r_esp -= 4; W32(r_esp, 0x626427u); f_005ecd00();
L_00626427:; BB(0x00626427);
    /* 00626427: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0062642a: cmp dword ptr [edx + 0x60], 0 */ {  u32 a = R32((u32)(r_edx+0x60u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062642e: je 0x6264bc */ if (fZ) goto L_006264bc;
L_00626434:; BB(0x00626434);
    /* 00626434: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00626437: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 0062643a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062643b: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0062643e: mov eax, dword ptr [edx + 0x5c] */ r_eax = R32((u32)(r_edx+0x5cu));
    /* 00626441: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00626444: mov ecx, dword ptr [ecx + 0x5c] */ r_ecx = R32((u32)(r_ecx+0x5cu));
    /* 00626447: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00626449: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0062644f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x626451u); call_ind(t); }
    /* 00626451: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00626454: mov ecx, dword ptr [ecx + 0x5c] */ r_ecx = R32((u32)(r_ecx+0x5cu));
    /* 00626457: call 0x5ef050 */ r_esp -= 4; W32(r_esp, 0x62645cu); f_005ef050();
    /* 0062645c: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0062645f: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00626462: mov ecx, dword ptr [edx + 0x5c] */ r_ecx = R32((u32)(r_edx+0x5cu));
    /* 00626465: call 0x5ef130 */ r_esp -= 4; W32(r_esp, 0x62646au); f_005ef130();
    /* 0062646a: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0062646d: mov esi, dword ptr [ebp - 0x10] */ r_esi = R32((u32)(r_ebp+0xfffffff0u));
    /* 00626470: add esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00626473: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00626476: call 0x5f5550 */ r_esp -= 4; W32(r_esp, 0x62647bu); f_005f5550();
    /* 0062647b: sub eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0062647e: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00626480: jge 0x62648d */ if ((fS==fO)) goto L_0062648d;
L_00626482:; BB(0x00626482);
    /* 00626482: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00626485: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00626488: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0062648b: jmp 0x62649b */ goto L_0062649b;
L_0062648d:; BB(0x0062648d);
    /* 0062648d: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00626490: call 0x5f5550 */ r_esp -= 4; W32(r_esp, 0x626495u); f_005f5550();
    /* 00626495: sub eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00626498: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
L_0062649b:; BB(0x0062649b);
    /* 0062649b: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0062649e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062649f: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006264a2: mov ecx, dword ptr [edx + 0x5c] */ r_ecx = R32((u32)(r_edx+0x5cu));
    /* 006264a5: call 0x5ecc60 */ r_esp -= 4; W32(r_esp, 0x6264aau); f_005ecc60();
    /* 006264aa: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006264ad: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006264b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006264b1: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006264b4: mov ecx, dword ptr [ecx + 0x5c] */ r_ecx = R32((u32)(r_ecx+0x5cu));
    /* 006264b7: call 0x5eccb0 */ r_esp -= 4; W32(r_esp, 0x6264bcu); f_005eccb0();
L_006264bc:; BB(0x006264bc);
    /* 006264bc: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006264bf: mov eax, dword ptr [edx + 0x58] */ r_eax = R32((u32)(r_edx+0x58u));
    /* 006264c2: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006264c5: mov ecx, dword ptr [ecx + 0x58] */ r_ecx = R32((u32)(r_ecx+0x58u));
    /* 006264c8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006264ca: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 006264cd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6264cfu); call_ind(t); }
    /* 006264cf: mov esi, eax */ r_esi = r_eax;
    /* 006264d1: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006264d4: mov ecx, dword ptr [ecx + 0x5c] */ r_ecx = R32((u32)(r_ecx+0x5cu));
    /* 006264d7: call 0x5f5590 */ r_esp -= 4; W32(r_esp, 0x6264dcu); f_005f5590();
    /* 006264dc: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 006264dd: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006264df: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 006264e1: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 006264e3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006264e4: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006264e7: mov eax, dword ptr [edx + 0x5c] */ r_eax = R32((u32)(r_edx+0x5cu));
    /* 006264ea: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006264ed: mov ecx, dword ptr [ecx + 0x5c] */ r_ecx = R32((u32)(r_ecx+0x5cu));
    /* 006264f0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006264f2: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 006264f5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6264f7u); call_ind(t); }
    /* 006264f7: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006264fa: movzx edx, byte ptr [ecx + 0x68] */ r_edx = (u32)R8((u32)(r_ecx+0x68u));
    /* 006264fe: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00626500: je 0x626522 */ if (fZ) goto L_00626522;
L_00626502:; BB(0x00626502);
    /* 00626502: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00626505: add eax, 0x48 */ {  u32 a = r_eax; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00626508: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00626509: mov ecx, esp */ r_ecx = r_esp;
    /* 0062650b: mov dx, word ptr [eax] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_eax))) & 0xffffu);
    /* 0062650e: mov word ptr [ecx], dx */ W16((u32)(r_ecx), (u16)r_edx);
    /* 00626511: mov al, byte ptr [eax + 2] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0x2u))) & 0xffu);
    /* 00626514: mov byte ptr [ecx + 2], al */ W8((u32)(r_ecx+0x2u), (u8)r_eax);
    /* 00626517: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0062651a: mov ecx, dword ptr [ecx + 0x5c] */ r_ecx = R32((u32)(r_ecx+0x5cu));
    /* 0062651d: call 0x5ee920 */ r_esp -= 4; W32(r_esp, 0x626522u); f_005ee920();
L_00626522:; BB(0x00626522);
    /* 00626522: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00626524: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00626527: mov ecx, dword ptr [edx + 0x5c] */ r_ecx = R32((u32)(r_edx+0x5cu));
    /* 0062652a: call 0x5ef310 */ r_esp -= 4; W32(r_esp, 0x62652fu); f_005ef310();
    /* 0062652f: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00626532: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 00626535: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00626538: mov eax, dword ptr [edx + 0x5c] */ r_eax = R32((u32)(r_edx+0x5cu));
    /* 0062653b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0062653d: mov ecx, eax */ r_ecx = r_eax;
    /* 0062653f: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 00626542: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x626544u); call_ind(t); }
    /* 00626544: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00626547: movzx edx, byte ptr [ecx + 0x68] */ r_edx = (u32)R8((u32)(r_ecx+0x68u));
    /* 0062654b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062654d: je 0x62656c */ if (fZ) goto L_0062656c;
L_0062654f:; BB(0x0062654f);
    /* 0062654f: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00626552: add eax, 0x48 */ {  u32 a = r_eax; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00626555: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00626556: mov ecx, esp */ r_ecx = r_esp;
    /* 00626558: mov dx, word ptr [eax] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_eax))) & 0xffffu);
    /* 0062655b: mov word ptr [ecx], dx */ W16((u32)(r_ecx), (u16)r_edx);
    /* 0062655e: mov al, byte ptr [eax + 2] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0x2u))) & 0xffu);
    /* 00626561: mov byte ptr [ecx + 2], al */ W8((u32)(r_ecx+0x2u), (u8)r_eax);
    /* 00626564: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00626567: call 0x626920 */ r_esp -= 4; W32(r_esp, 0x62656cu); f_00626920();
L_0062656c:; BB(0x0062656c);
    /* 0062656c: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0062656f: add ecx, 0x4b */ {  u32 a = r_ecx; u32 b = 0x4bu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00626572: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00626573: mov edx, esp */ r_edx = r_esp;
    /* 00626575: mov ax, word ptr [ecx] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ecx))) & 0xffffu);
    /* 00626578: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 0062657b: mov cl, byte ptr [ecx + 2] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ecx+0x2u))) & 0xffu);
    /* 0062657e: mov byte ptr [edx + 2], cl */ W8((u32)(r_edx+0x2u), (u8)r_ecx);
    /* 00626581: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00626584: call 0x6267d0 */ r_esp -= 4; W32(r_esp, 0x626589u); f_006267d0();
    /* 00626589: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0062658c: add edx, 0x4e */ {  u32 a = r_edx; u32 b = 0x4eu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0062658f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00626590: mov eax, esp */ r_eax = r_esp;
    /* 00626592: mov cx, word ptr [edx] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_edx))) & 0xffffu);
    /* 00626595: mov word ptr [eax], cx */ W16((u32)(r_eax), (u16)r_ecx);
    /* 00626598: mov dl, byte ptr [edx + 2] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edx+0x2u))) & 0xffu);
    /* 0062659b: mov byte ptr [eax + 2], dl */ W8((u32)(r_eax+0x2u), (u8)r_edx);
    /* 0062659e: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006265a1: call 0x626870 */ r_esp -= 4; W32(r_esp, 0x6265a6u); f_00626870();
    /* 006265a6: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006265a9: call 0x5f53c0 */ r_esp -= 4; W32(r_esp, 0x6265aeu); f_005f53c0();
    /* 006265ae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006265af: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 006265b2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006265b4: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006265b7: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 006265ba: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6265bcu); call_ind(t); }
    /* 006265bc: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006265bf: movzx edx, byte ptr [ecx + 0x24] */ r_edx = (u32)R8((u32)(r_ecx+0x24u));
    /* 006265c3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006265c5: jne 0x6265d4 */ if (!fZ) goto L_006265d4;
L_006265c7:; BB(0x006265c7);
    /* 006265c7: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 006265ca: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006265cc: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006265cf: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 006265d2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6265d4u); call_ind(t); }
L_006265d4:; BB(0x006265d4);
    /* 006265d4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006265d7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006265de: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006265df: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006265e0: mov esp, ebp */ r_esp = r_ebp;
    /* 006265e2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006265e3: ret  */ FN_RET(0x00626190); r_esp += 4; return;
}

void f_006265f0(void) /* sciGroupBox::vfunc17 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006265f0);
    /* 006265f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006265f1: mov ebp, esp */ r_ebp = r_esp;
    /* 006265f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006265f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006265f7: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006265fa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006265fb: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006265fe: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006265ff: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00626602: call 0x5f5110 */ r_esp -= 4; W32(r_esp, 0x626607u); f_005f5110();
    /* 00626607: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062660a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0062660c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062660f: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 00626612: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x626614u); call_ind(t); }
    /* 00626614: mov esp, ebp */ r_esp = r_ebp;
    /* 00626616: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00626617: ret 8 */ FN_RET(0x006265f0); r_esp += 12; return;
}

void f_00626620(void) /* sciGroupBox::vfunc30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00626620);
    /* 00626620: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00626621: mov ebp, esp */ r_ebp = r_esp;
    /* 00626623: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00626624: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00626627: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0062662a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062662b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0062662e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062662f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00626632: call 0x5f5500 */ r_esp -= 4; W32(r_esp, 0x626637u); f_005f5500();
    /* 00626637: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062663a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0062663c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062663f: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 00626642: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x626644u); call_ind(t); }
    /* 00626644: mov esp, ebp */ r_esp = r_ebp;
    /* 00626646: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00626647: ret 8 */ FN_RET(0x00626620); r_esp += 12; return;
}

void f_00626650(void) /* sciGroupBox::vfunc27 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00626650);
    /* 00626650: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00626651: mov ebp, esp */ r_ebp = r_esp;
    /* 00626653: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00626654: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00626657: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0062665a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062665b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062665e: call 0x5f5300 */ r_esp -= 4; W32(r_esp, 0x626663u); f_005f5300();
    /* 00626663: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00626666: cmp dword ptr [ecx + 0x54], 0 */ {  u32 a = R32((u32)(r_ecx+0x54u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062666a: je 0x626688 */ if (fZ) goto L_00626688;
L_0062666c:; BB(0x0062666c);
    /* 0062666c: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0062666f: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00626672: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00626673: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00626676: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 00626679: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062667c: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 0062667f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00626681: mov ecx, eax */ r_ecx = r_eax;
    /* 00626683: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00626686: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x626688u); call_ind(t); }
L_00626688:; BB(0x00626688);
    /* 00626688: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062668b: cmp dword ptr [ecx + 0x58], 0 */ {  u32 a = R32((u32)(r_ecx+0x58u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062668f: je 0x6266aa */ if (fZ) goto L_006266aa;
L_00626691:; BB(0x00626691);
    /* 00626691: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00626694: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00626695: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00626698: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 0062669b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062669e: mov eax, dword ptr [edx + 0x58] */ r_eax = R32((u32)(r_edx+0x58u));
    /* 006266a1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006266a3: mov ecx, eax */ r_ecx = r_eax;
    /* 006266a5: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 006266a8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6266aau); call_ind(t); }
L_006266aa:; BB(0x006266aa);
    /* 006266aa: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006266ad: cmp dword ptr [ecx + 0x5c], 0 */ {  u32 a = R32((u32)(r_ecx+0x5cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006266b1: je 0x6266cf */ if (fZ) goto L_006266cf;
L_006266b3:; BB(0x006266b3);
    /* 006266b3: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006266b6: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006266b9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006266ba: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006266bd: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 006266c0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006266c3: mov eax, dword ptr [edx + 0x5c] */ r_eax = R32((u32)(r_edx+0x5cu));
    /* 006266c6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006266c8: mov ecx, eax */ r_ecx = r_eax;
    /* 006266ca: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 006266cd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6266cfu); call_ind(t); }
L_006266cf:; BB(0x006266cf);
    /* 006266cf: mov esp, ebp */ r_esp = r_ebp;
    /* 006266d1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006266d2: ret 4 */ FN_RET(0x00626650); r_esp += 8; return;
}

void f_006266e0(void) /* sciGroupBox::vfunc29 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006266e0);
    /* 006266e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006266e1: mov ebp, esp */ r_ebp = r_esp;
    /* 006266e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006266e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006266e7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006266ea: call 0x5f5440 */ r_esp -= 4; W32(r_esp, 0x6266efu); f_005f5440();
    /* 006266ef: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006266f2: cmp dword ptr [eax + 0x54], 0 */ {  u32 a = R32((u32)(r_eax+0x54u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006266f6: je 0x62670b */ if (fZ) goto L_0062670b;
L_006266f8:; BB(0x006266f8);
    /* 006266f8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006266fb: mov edx, dword ptr [ecx + 0x54] */ r_edx = R32((u32)(r_ecx+0x54u));
    /* 006266fe: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00626701: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 00626704: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00626706: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00626709: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x62670bu); call_ind(t); }
L_0062670b:; BB(0x0062670b);
    /* 0062670b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062670e: cmp dword ptr [ecx + 0x58], 0 */ {  u32 a = R32((u32)(r_ecx+0x58u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00626712: je 0x626727 */ if (fZ) goto L_00626727;
L_00626714:; BB(0x00626714);
    /* 00626714: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00626717: mov eax, dword ptr [edx + 0x58] */ r_eax = R32((u32)(r_edx+0x58u));
    /* 0062671a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062671d: mov ecx, dword ptr [ecx + 0x58] */ r_ecx = R32((u32)(r_ecx+0x58u));
    /* 00626720: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00626722: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00626725: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x626727u); call_ind(t); }
L_00626727:; BB(0x00626727);
    /* 00626727: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062672a: cmp dword ptr [ecx + 0x5c], 0 */ {  u32 a = R32((u32)(r_ecx+0x5cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062672e: je 0x62674e */ if (fZ) goto L_0062674e;
L_00626730:; BB(0x00626730);
    /* 00626730: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00626733: cmp dword ptr [edx + 0x60], 0 */ {  u32 a = R32((u32)(r_edx+0x60u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00626737: je 0x62674e */ if (fZ) goto L_0062674e;
L_00626739:; BB(0x00626739);
    /* 00626739: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062673c: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 0062673f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00626742: mov eax, dword ptr [edx + 0x5c] */ r_eax = R32((u32)(r_edx+0x5cu));
    /* 00626745: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00626747: mov ecx, eax */ r_ecx = r_eax;
    /* 00626749: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0062674c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x62674eu); call_ind(t); }
L_0062674e:; BB(0x0062674e);
    /* 0062674e: mov esp, ebp */ r_esp = r_ebp;
    /* 00626750: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00626751: ret  */ FN_RET(0x006266e0); r_esp += 4; return;
}

void f_00626760(void) /* sciGroupBox::vfunc28 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00626760);
    /* 00626760: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00626761: mov ebp, esp */ r_ebp = r_esp;
    /* 00626763: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00626764: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00626767: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062676a: call 0x5f5420 */ r_esp -= 4; W32(r_esp, 0x62676fu); f_005f5420();
    /* 0062676f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00626772: cmp dword ptr [eax + 0x54], 0 */ {  u32 a = R32((u32)(r_eax+0x54u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00626776: je 0x62678b */ if (fZ) goto L_0062678b;
L_00626778:; BB(0x00626778);
    /* 00626778: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062677b: mov edx, dword ptr [ecx + 0x54] */ r_edx = R32((u32)(r_ecx+0x54u));
    /* 0062677e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00626781: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 00626784: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00626786: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00626789: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x62678bu); call_ind(t); }
L_0062678b:; BB(0x0062678b);
    /* 0062678b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062678e: cmp dword ptr [ecx + 0x58], 0 */ {  u32 a = R32((u32)(r_ecx+0x58u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00626792: je 0x6267a7 */ if (fZ) goto L_006267a7;
L_00626794:; BB(0x00626794);
    /* 00626794: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00626797: mov eax, dword ptr [edx + 0x58] */ r_eax = R32((u32)(r_edx+0x58u));
    /* 0062679a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062679d: mov ecx, dword ptr [ecx + 0x58] */ r_ecx = R32((u32)(r_ecx+0x58u));
    /* 006267a0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006267a2: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 006267a5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6267a7u); call_ind(t); }
L_006267a7:; BB(0x006267a7);
    /* 006267a7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006267aa: cmp dword ptr [ecx + 0x5c], 0 */ {  u32 a = R32((u32)(r_ecx+0x5cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006267ae: je 0x6267c3 */ if (fZ) goto L_006267c3;
L_006267b0:; BB(0x006267b0);
    /* 006267b0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006267b3: mov eax, dword ptr [edx + 0x5c] */ r_eax = R32((u32)(r_edx+0x5cu));
    /* 006267b6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006267b9: mov ecx, dword ptr [ecx + 0x5c] */ r_ecx = R32((u32)(r_ecx+0x5cu));
    /* 006267bc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006267be: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 006267c1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6267c3u); call_ind(t); }
L_006267c3:; BB(0x006267c3);
    /* 006267c3: mov esp, ebp */ r_esp = r_ebp;
    /* 006267c5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006267c6: ret  */ FN_RET(0x00626760); r_esp += 4; return;
}

