#include "protos.h"

void f_00624e80(void) /* VApplication::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00624e80);
    /* 00624e80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00624e81: mov ebp, esp */ r_ebp = r_esp;
    /* 00624e83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00624e84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00624e87: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00624e8a: call 0x62aea0 */ r_esp -= 4; W32(r_esp, 0x624e8fu); f_0062aea0();
    /* 00624e8f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00624e92: mov dword ptr [eax], 0x6d8e60 */ W32((u32)(r_eax), 0x6d8e60u);
    /* 00624e98: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00624e9b: mov dword ptr [ecx + 0x24], 0 */ W32((u32)(r_ecx+0x24u), 0x0u);
    /* 00624ea2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00624ea5: mov dword ptr [edx + 0x18], 0 */ W32((u32)(r_edx+0x18u), 0x0u);
    /* 00624eac: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00624eaf: mov dword ptr [eax + 0x20], 0 */ W32((u32)(r_eax+0x20u), 0x0u);
    /* 00624eb6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00624eb9: mov dword ptr [ecx + 0x10], 0 */ W32((u32)(r_ecx+0x10u), 0x0u);
    /* 00624ec0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00624ec3: mov dword ptr [edx + 8], 0 */ W32((u32)(r_edx+0x8u), 0x0u);
    /* 00624eca: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00624ecd: mov dword ptr [eax + 0xc], 0 */ W32((u32)(r_eax+0xcu), 0x0u);
    /* 00624ed4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00624ed7: mov dword ptr [ecx + 0x14], 0 */ W32((u32)(r_ecx+0x14u), 0x0u);
    /* 00624ede: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00624ee1: mov esp, ebp */ r_esp = r_ebp;
    /* 00624ee3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00624ee4: ret  */ FN_RET(0x00624e80); r_esp += 4; return;
}

void f_00624f10(void) /* VApplication::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00624f10);
    /* 00624f10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00624f11: mov ebp, esp */ r_ebp = r_esp;
    /* 00624f13: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00624f15: push 0x6ab431 */ { u32 v = 0x6ab431u; r_esp -= 4; W32(r_esp, v); }
    /* 00624f1a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00624f20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00624f21: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00624f24: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00624f29: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00624f2b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00624f2c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00624f2f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00624f35: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 00624f38: mov byte ptr [0x795fb5], 0 */ W8((u32)(0x795fb5u), 0x0u);
    /* 00624f3f: push 0x3fc */ { u32 v = 0x3fcu; r_esp -= 4; W32(r_esp, v); }
    /* 00624f44: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x624f49u); f_00686d82();
    /* 00624f49: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00624f4c: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00624f4f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00624f56: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00624f5a: je 0x624f7e */ if (fZ) goto L_00624f7e;
L_00624f5c:; BB(0x00624f5c);
    /* 00624f5c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00624f5e: call dword ptr [0x6b229c] */ { u32 t = R32((u32)(0x6b229cu)); r_esp -= 4; W32(r_esp, 0x624f64u); call_ind(t); }
    /* 00624f64: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00624f67: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00624f6a: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 00624f6d: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00624f70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00624f71: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00624f74: call 0x6145e0 */ r_esp -= 4; W32(r_esp, 0x624f79u); f_006145e0();
    /* 00624f79: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00624f7c: jmp 0x624f85 */ goto L_00624f85;
L_00624f7e:; BB(0x00624f7e);
    /* 00624f7e: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_00624f85:; BB(0x00624f85);
    /* 00624f85: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00624f88: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00624f8b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00624f92: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00624f95: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00624f98: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 00624f9b: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 00624fa2: jmp 0x624fad */ goto L_00624fad;
L_00624fa4:; BB(0x00624fa4);
    /* 00624fa4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00624fa7: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00624faa: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
L_00624fad:; BB(0x00624fad);
    /* 00624fad: cmp dword ptr [ebp - 0x14], 0x14 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00624fb1: jge 0x624fd4 */ if ((fS==fO)) goto L_00624fd4;
L_00624fb3:; BB(0x00624fb3);
    /* 00624fb3: push 0x3b9aca00 */ { u32 v = 0x3b9aca00u; r_esp -= 4; W32(r_esp, v); }
    /* 00624fb8: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x624fbdu); f_0062fbf0();
    /* 00624fbd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00624fc0: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00624fc3: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00624fc6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00624fc7: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00624fca: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 00624fcd: call 0x614670 */ r_esp -= 4; W32(r_esp, 0x624fd2u); f_00614670();
    /* 00624fd2: jmp 0x624fa4 */ goto L_00624fa4;
L_00624fd4:; BB(0x00624fd4);
    /* 00624fd4: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00624fd6: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x624fdbu); f_00686d82();
    /* 00624fdb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00624fde: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00624fe1: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00624fe8: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00624fec: je 0x624ffb */ if (fZ) goto L_00624ffb;
L_00624fee:; BB(0x00624fee);
    /* 00624fee: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00624ff1: call 0x62a870 */ r_esp -= 4; W32(r_esp, 0x624ff6u); f_0062a870();
    /* 00624ff6: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00624ff9: jmp 0x625002 */ goto L_00625002;
L_00624ffb:; BB(0x00624ffb);
    /* 00624ffb: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_00625002:; BB(0x00625002);
    /* 00625002: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00625005: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00625008: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0062500f: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00625012: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00625015: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 00625018: push 0x4c */ { u32 v = 0x4cu; r_esp -= 4; W32(r_esp, v); }
    /* 0062501a: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x62501fu); f_00686d82();
    /* 0062501f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00625022: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00625025: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0062502c: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00625030: je 0x625041 */ if (fZ) goto L_00625041;
L_00625032:; BB(0x00625032);
    /* 00625032: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00625034: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00625037: call 0x6033f0 */ r_esp -= 4; W32(r_esp, 0x62503cu); f_006033f0();
    /* 0062503c: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0062503f: jmp 0x625048 */ goto L_00625048;
L_00625041:; BB(0x00625041);
    /* 00625041: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_00625048:; BB(0x00625048);
    /* 00625048: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0062504b: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0062504e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00625055: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00625058: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0062505b: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 0062505e: call 0x62da70 */ r_esp -= 4; W32(r_esp, 0x625063u); f_0062da70();
    /* 00625063: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00625066: mov dword ptr [ecx + 0x1c], eax */ W32((u32)(r_ecx+0x1cu), r_eax);
    /* 00625069: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062506c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00625073: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00625074: mov esp, ebp */ r_esp = r_ebp;
    /* 00625076: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00625077: ret  */ FN_RET(0x00624f10); r_esp += 4; return;
}

void f_00625080(void) /* VApplication::vfunc2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00625080);
    /* 00625080: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00625081: mov ebp, esp */ r_ebp = r_esp;
    /* 00625083: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00625084: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00625087: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00625089: push 0x6d8ecc */ { u32 v = 0x6d8eccu; r_esp -= 4; W32(r_esp, v); }
    /* 0062508e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00625091: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 00625094: call 0x607900 */ r_esp -= 4; W32(r_esp, 0x625099u); f_00607900();
    /* 00625099: mov byte ptr [0x795fb3], al */ W8((u32)(0x795fb3u), (u8)r_eax);
    /* 0062509e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006250a0: push 0x6d8ebc */ { u32 v = 0x6d8ebcu; r_esp -= 4; W32(r_esp, v); }
    /* 006250a5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006250a8: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 006250ab: call 0x607900 */ r_esp -= 4; W32(r_esp, 0x6250b0u); f_00607900();
    /* 006250b0: mov byte ptr [0x795fb4], al */ W8((u32)(0x795fb4u), (u8)r_eax);
    /* 006250b5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006250b7: push 0x6d8eac */ { u32 v = 0x6d8eacu; r_esp -= 4; W32(r_esp, v); }
    /* 006250bc: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006250bf: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 006250c2: call 0x607900 */ r_esp -= 4; W32(r_esp, 0x6250c7u); f_00607900();
    /* 006250c7: mov byte ptr [0x795fb2], al */ W8((u32)(0x795fb2u), (u8)r_eax);
    /* 006250cc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006250ce: push 0x6d8e9c */ { u32 v = 0x6d8e9cu; r_esp -= 4; W32(r_esp, v); }
    /* 006250d3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006250d6: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 006250d9: call 0x607900 */ r_esp -= 4; W32(r_esp, 0x6250deu); f_00607900();
    /* 006250de: mov byte ptr [0x795fb6], al */ W8((u32)(0x795fb6u), (u8)r_eax);
    /* 006250e3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006250e5: push 0x6d8e88 */ { u32 v = 0x6d8e88u; r_esp -= 4; W32(r_esp, v); }
    /* 006250ea: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006250ed: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 006250f0: call 0x607900 */ r_esp -= 4; W32(r_esp, 0x6250f5u); f_00607900();
    /* 006250f5: mov byte ptr [0x795fb7], al */ W8((u32)(0x795fb7u), (u8)r_eax);
    /* 006250fa: mov esp, ebp */ r_esp = r_ebp;
    /* 006250fc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006250fd: ret  */ FN_RET(0x00625080); r_esp += 4; return;
}

void f_00625100(void) /* VApplication::vfunc3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00625100);
    /* 00625100: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00625101: mov ebp, esp */ r_ebp = r_esp;
    /* 00625103: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00625106: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00625109: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0062510c: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 0062510f: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00625112: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00625115: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 00625118: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062511c: je 0x625131 */ if (fZ) goto L_00625131;
L_0062511e:; BB(0x0062511e);
    /* 0062511e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00625120: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00625123: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00625125: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00625128: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0062512a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x62512cu); call_ind(t); }
    /* 0062512c: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0062512f: jmp 0x625138 */ goto L_00625138;
L_00625131:; BB(0x00625131);
    /* 00625131: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_00625138:; BB(0x00625138);
    /* 00625138: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0062513b: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 0062513e: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00625141: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00625144: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00625147: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062514b: je 0x625160 */ if (fZ) goto L_00625160;
L_0062514d:; BB(0x0062514d);
    /* 0062514d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0062514f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00625152: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00625154: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00625157: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00625159: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x62515bu); call_ind(t); }
    /* 0062515b: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0062515e: jmp 0x625167 */ goto L_00625167;
L_00625160:; BB(0x00625160);
    /* 00625160: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00625167:; BB(0x00625167);
    /* 00625167: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0062516a: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 0062516d: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00625170: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00625173: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00625176: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062517a: je 0x62518f */ if (fZ) goto L_0062518f;
L_0062517c:; BB(0x0062517c);
    /* 0062517c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0062517e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00625181: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00625183: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00625186: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00625188: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x62518au); call_ind(t); }
    /* 0062518a: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0062518d: jmp 0x625196 */ goto L_00625196;
L_0062518f:; BB(0x0062518f);
    /* 0062518f: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00625196:; BB(0x00625196);
    /* 00625196: mov esp, ebp */ r_esp = r_ebp;
    /* 00625198: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00625199: ret  */ FN_RET(0x00625100); r_esp += 4; return;
}

void f_006251a0(void) /* VApplication::vfunc4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006251a0);
    /* 006251a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006251a1: mov ebp, esp */ r_ebp = r_esp;
    /* 006251a3: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006251a6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 006251a9: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 006251ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006251ad: call dword ptr [0x6b229c] */ { u32 t = R32((u32)(0x6b229cu)); r_esp -= 4; W32(r_esp, 0x6251b3u); call_ind(t); }
    /* 006251b3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006251b6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006251b9: sub ecx, dword ptr [0x15eee10] */ {  u32 a = r_ecx; u32 b = R32((u32)(0x15eee10u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); }
    /* 006251bf: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006251c2: sbb edx, dword ptr [0x15eee14] */ { u32 c = fC; u32 a = r_edx; u32 b = R32((u32)(0x15eee14u)); u32 r = (a - b - c) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006251c8: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 006251cb: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 006251ce: js 0x625203 */ if (fS) goto L_00625203;
L_006251d0:; BB(0x006251d0);
    /* 006251d0: jg 0x6251db */ if ((!fZ&&fS==fO)) goto L_006251db;
L_006251d2:; BB(0x006251d2);
    /* 006251d2: cmp dword ptr [ebp - 0x14], 0x384 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x384u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 006251d9: jbe 0x625203 */ if ((fC||fZ)) goto L_00625203;
L_006251db:; BB(0x006251db);
    /* 006251db: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 006251de: mov dword ptr [0x15eee10], eax */ W32((u32)(0x15eee10u), r_eax);
    /* 006251e3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006251e6: mov dword ptr [0x15eee14], ecx */ W32((u32)(0x15eee14u), r_ecx);
    /* 006251ec: push 0x6d8edc */ { u32 v = 0x6d8edcu; r_esp -= 4; W32(r_esp, v); }
    /* 006251f1: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x6251f6u); f_0062fde0();
    /* 006251f6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006251f9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006251fb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006251fe: call 0x625240 */ r_esp -= 4; W32(r_esp, 0x625203u); f_00625240();
L_00625203:; BB(0x00625203);
    /* 00625203: mov esp, ebp */ r_esp = r_ebp;
    /* 00625205: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00625206: ret  */ FN_RET(0x006251a0); r_esp += 4; return;
}

void f_00625210(void) /* VApplication::vfunc5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00625210);
    /* 00625210: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00625211: mov ebp, esp */ r_ebp = r_esp;
    /* 00625213: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00625214: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00625217: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062521a: cmp dword ptr [eax + 0x18], 0 */ {  u32 a = R32((u32)(r_eax+0x18u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062521e: je 0x625235 */ if (fZ) goto L_00625235;
L_00625220:; BB(0x00625220);
    /* 00625220: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00625223: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 00625226: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00625229: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0062522c: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0062522e: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00625231: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x625233u); call_ind(t); }
    /* 00625233: jmp 0x625237 */ goto L_00625237;
L_00625235:; BB(0x00625235);
    /* 00625235: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_00625237:; BB(0x00625237);
    /* 00625237: mov esp, ebp */ r_esp = r_ebp;
    /* 00625239: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062523a: ret  */ FN_RET(0x00625210); r_esp += 4; return;
}

