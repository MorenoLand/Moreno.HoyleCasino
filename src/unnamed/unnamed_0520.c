#include "protos.h"

void f_00520010(void) /* sub_520010 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00520010);
    /* 00520010: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00520011: mov ebp, esp */ r_ebp = r_esp;
    /* 00520013: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00520015: push 0x6a3e7e */ { u32 v = 0x6a3e7eu; r_esp -= 4; W32(r_esp, v); }
    /* 0052001a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00520020: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00520021: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00520024: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00520029: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0052002b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052002c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0052002f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00520035: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00520038: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052003b: cmp dword ptr [eax + 0x8c], 0 */ {  u32 a = R32((u32)(r_eax+0x8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00520042: jne 0x5200d5 */ if (!fZ) goto L_005200d5;
L_00520048:; BB(0x00520048);
    /* 00520048: push 0x1c4 */ { u32 v = 0x1c4u; r_esp -= 4; W32(r_esp, v); }
    /* 0052004d: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x520052u); f_00686d82();
    /* 00520052: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00520055: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00520058: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0052005f: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00520063: je 0x520072 */ if (fZ) goto L_00520072;
L_00520065:; BB(0x00520065);
    /* 00520065: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00520068: call 0x51afc0 */ r_esp -= 4; W32(r_esp, 0x52006du); f_0051afc0();
    /* 0052006d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00520070: jmp 0x520079 */ goto L_00520079;
L_00520072:; BB(0x00520072);
    /* 00520072: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_00520079:; BB(0x00520079);
    /* 00520079: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0052007c: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0052007f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00520086: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00520089: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052008c: mov dword ptr [edx + 0x8c], eax */ W32((u32)(r_edx+0x8cu), r_eax);
    /* 00520092: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00520095: mov edx, dword ptr [ecx + 0x8c] */ r_edx = R32((u32)(r_ecx+0x8cu));
    /* 0052009b: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0052009e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005200a1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005200a4: mov dword ptr [eax + 0x1bc], ecx */ W32((u32)(r_eax+0x1bcu), r_ecx);
    /* 005200aa: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005200ad: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 005200b3: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005200b6: mov ecx, dword ptr [ecx + 0x8c] */ r_ecx = R32((u32)(r_ecx+0x8cu));
    /* 005200bc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005200be: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 005200c1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5200c3u); call_ind(t); }
    /* 005200c3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005200c5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005200c7: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005200ca: mov ecx, dword ptr [ecx + 0x8c] */ r_ecx = R32((u32)(r_ecx+0x8cu));
    /* 005200d0: call 0x5f7340 */ r_esp -= 4; W32(r_esp, 0x5200d5u); f_005f7340();
L_005200d5:; BB(0x005200d5);
    /* 005200d5: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005200d8: mov ecx, dword ptr [edx + 0x8c] */ r_ecx = R32((u32)(r_edx+0x8cu));
    /* 005200de: call 0x5f85d0 */ r_esp -= 4; W32(r_esp, 0x5200e3u); f_005f85d0();
    /* 005200e3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005200e6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005200ed: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005200ee: mov esp, ebp */ r_esp = r_ebp;
    /* 005200f0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005200f1: ret 4 */ FN_RET(0x00520010); r_esp += 8; return;
}

void f_00520100(void) /* sub_520100 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00520100);
    /* 00520100: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00520101: mov ebp, esp */ r_ebp = r_esp;
    /* 00520103: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00520104: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00520107: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0052010a: cmp dword ptr [eax + 0x8c], 0 */ {  u32 a = R32((u32)(r_eax+0x8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00520111: je 0x52012e */ if (fZ) goto L_0052012e;
L_00520113:; BB(0x00520113);
    /* 00520113: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00520116: mov ecx, dword ptr [ecx + 0x8c] */ r_ecx = R32((u32)(r_ecx+0x8cu));
    /* 0052011c: call 0x5f8990 */ r_esp -= 4; W32(r_esp, 0x520121u); f_005f8990();
    /* 00520121: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00520124: mov dword ptr [edx + 0x8c], 0 */ W32((u32)(r_edx+0x8cu), 0x0u);
L_0052012e:; BB(0x0052012e);
    /* 0052012e: mov esp, ebp */ r_esp = r_ebp;
    /* 00520130: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00520131: ret  */ FN_RET(0x00520100); r_esp += 4; return;
}

void f_00520140(void) /* sub_520140 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00520140);
    /* 00520140: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00520141: mov ebp, esp */ r_ebp = r_esp;
    /* 00520143: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00520145: push 0x6a3ea4 */ { u32 v = 0x6a3ea4u; r_esp -= 4; W32(r_esp, v); }
    /* 0052014a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00520150: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00520151: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00520154: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00520159: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0052015b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052015c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0052015f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00520165: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00520168: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0052016b: cmp dword ptr [eax + 0x90], 0 */ {  u32 a = R32((u32)(r_eax+0x90u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00520172: jne 0x52021b */ if (!fZ) goto L_0052021b;
L_00520178:; BB(0x00520178);
    /* 00520178: push 0x1d4 */ { u32 v = 0x1d4u; r_esp -= 4; W32(r_esp, v); }
    /* 0052017d: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x520182u); f_00686d82();
    /* 00520182: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00520185: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00520188: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0052018f: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00520193: je 0x5201a2 */ if (fZ) goto L_005201a2;
L_00520195:; BB(0x00520195);
    /* 00520195: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00520198: call 0x51cc80 */ r_esp -= 4; W32(r_esp, 0x52019du); f_0051cc80();
    /* 0052019d: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005201a0: jmp 0x5201a9 */ goto L_005201a9;
L_005201a2:; BB(0x005201a2);
    /* 005201a2: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005201a9:; BB(0x005201a9);
    /* 005201a9: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005201ac: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005201af: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005201b6: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005201b9: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005201bc: mov dword ptr [edx + 0x90], eax */ W32((u32)(r_edx+0x90u), r_eax);
    /* 005201c2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005201c5: mov edx, dword ptr [ecx + 0x90] */ r_edx = R32((u32)(r_ecx+0x90u));
    /* 005201cb: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 005201ce: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005201d1: mov byte ptr [eax + 0x1c0], 0 */ W8((u32)(r_eax+0x1c0u), 0x0u);
    /* 005201d8: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005201db: mov edx, dword ptr [ecx + 0x90] */ r_edx = R32((u32)(r_ecx+0x90u));
    /* 005201e1: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 005201e4: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005201e7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005201ea: mov dword ptr [eax + 0x1bc], ecx */ W32((u32)(r_eax+0x1bcu), r_ecx);
    /* 005201f0: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005201f3: mov eax, dword ptr [edx + 0x90] */ r_eax = R32((u32)(r_edx+0x90u));
    /* 005201f9: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005201fc: mov ecx, dword ptr [ecx + 0x90] */ r_ecx = R32((u32)(r_ecx+0x90u));
    /* 00520202: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00520204: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 00520207: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x520209u); call_ind(t); }
    /* 00520209: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052020b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052020d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00520210: mov ecx, dword ptr [ecx + 0x90] */ r_ecx = R32((u32)(r_ecx+0x90u));
    /* 00520216: call 0x5f7340 */ r_esp -= 4; W32(r_esp, 0x52021bu); f_005f7340();
L_0052021b:; BB(0x0052021b);
    /* 0052021b: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0052021e: mov ecx, dword ptr [edx + 0x90] */ r_ecx = R32((u32)(r_edx+0x90u));
    /* 00520224: call 0x5f85d0 */ r_esp -= 4; W32(r_esp, 0x520229u); f_005f85d0();
    /* 00520229: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052022c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00520233: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00520234: mov esp, ebp */ r_esp = r_ebp;
    /* 00520236: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00520237: ret 4 */ FN_RET(0x00520140); r_esp += 8; return;
}

void f_00520240(void) /* sub_520240 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00520240);
    /* 00520240: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00520241: mov ebp, esp */ r_ebp = r_esp;
    /* 00520243: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00520244: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00520247: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0052024a: cmp dword ptr [eax + 0x90], 0 */ {  u32 a = R32((u32)(r_eax+0x90u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00520251: je 0x52026e */ if (fZ) goto L_0052026e;
L_00520253:; BB(0x00520253);
    /* 00520253: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00520256: mov ecx, dword ptr [ecx + 0x90] */ r_ecx = R32((u32)(r_ecx+0x90u));
    /* 0052025c: call 0x5f8990 */ r_esp -= 4; W32(r_esp, 0x520261u); f_005f8990();
    /* 00520261: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00520264: mov dword ptr [edx + 0x90], 0 */ W32((u32)(r_edx+0x90u), 0x0u);
L_0052026e:; BB(0x0052026e);
    /* 0052026e: mov esp, ebp */ r_esp = r_ebp;
    /* 00520270: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00520271: ret  */ FN_RET(0x00520240); r_esp += 4; return;
}

void f_005204f0(void) /* sub_5204F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005204f0);
    /* 005204f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005204f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005204f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005204f4: call 0x520d60 */ r_esp -= 4; W32(r_esp, 0x5204f9u); f_00520d60();
    /* 005204f9: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005204fc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005204ff: mov al, byte ptr [eax] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 00520501: mov esp, ebp */ r_esp = r_ebp;
    /* 00520503: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00520504: ret  */ FN_RET(0x005204f0); r_esp += 4; return;
}

void f_00520510(void) /* sub_520510 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00520510);
    /* 00520510: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00520511: mov ebp, esp */ r_ebp = r_esp;
    /* 00520513: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00520514: call 0x520d60 */ r_esp -= 4; W32(r_esp, 0x520519u); f_00520d60();
    /* 00520519: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0052051c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0052051f: mov cl, byte ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 00520522: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
    /* 00520524: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00520527: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00520528: call 0x5209d0 */ r_esp -= 4; W32(r_esp, 0x52052du); f_005209d0();
    /* 0052052d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00520530: mov esp, ebp */ r_esp = r_ebp;
    /* 00520532: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00520533: ret  */ FN_RET(0x00520510); r_esp += 4; return;
}

void f_00520690(void) /* sub_520690 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00520690);
    /* 00520690: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00520691: mov ebp, esp */ r_ebp = r_esp;
    /* 00520693: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00520694: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00520697: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00520698: call 0x520540 */ r_esp -= 4; W32(r_esp, 0x52069du); f_00520540();
    /* 0052069d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005206a0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005206a3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005206a6: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 005206a9: mov esp, ebp */ r_esp = r_ebp;
    /* 005206ab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005206ac: ret  */ FN_RET(0x00520690); r_esp += 4; return;
}

void f_005206b0(void) /* sub_5206B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005206b0);
    /* 005206b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005206b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005206b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005206b4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005206b7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005206b8: call 0x520540 */ r_esp -= 4; W32(r_esp, 0x5206bdu); f_00520540();
    /* 005206bd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005206c0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005206c3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005206c6: mov eax, dword ptr [ecx + 0x24] */ r_eax = R32((u32)(r_ecx+0x24u));
    /* 005206c9: mov esp, ebp */ r_esp = r_ebp;
    /* 005206cb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005206cc: ret  */ FN_RET(0x005206b0); r_esp += 4; return;
}

void f_005206d0(void) /* sub_5206D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005206d0);
    /* 005206d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005206d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005206d3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005206d6: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005206d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005206da: call 0x520540 */ r_esp -= 4; W32(r_esp, 0x5206dfu); f_00520540();
    /* 005206df: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005206e2: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005206e5: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005206e8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005206e9: call 0x5206b0 */ r_esp -= 4; W32(r_esp, 0x5206eeu); f_005206b0();
    /* 005206ee: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005206f1: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005206f4: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005206f7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005206fa: mov eax, dword ptr [eax + edx*4 + 0x28] */ r_eax = R32((u32)(r_eax+r_edx*4+0x28u));
    /* 005206fe: mov esp, ebp */ r_esp = r_ebp;
    /* 00520700: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00520701: ret  */ FN_RET(0x005206d0); r_esp += 4; return;
}

void f_00520710(void) /* sub_520710 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00520710);
    /* 00520710: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00520711: mov ebp, esp */ r_ebp = r_esp;
    /* 00520713: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00520714: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00520717: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00520718: call 0x520540 */ r_esp -= 4; W32(r_esp, 0x52071du); f_00520540();
    /* 0052071d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00520720: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00520723: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00520726: mov eax, dword ptr [ecx + 0x20] */ r_eax = R32((u32)(r_ecx+0x20u));
    /* 00520729: mov esp, ebp */ r_esp = r_ebp;
    /* 0052072b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052072c: ret  */ FN_RET(0x00520710); r_esp += 4; return;
}

void f_00520730(void) /* sub_520730 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00520730);
    /* 00520730: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00520731: mov ebp, esp */ r_ebp = r_esp;
    /* 00520733: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00520736: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00520739: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052073a: call 0x520540 */ r_esp -= 4; W32(r_esp, 0x52073fu); f_00520540();
    /* 0052073f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00520742: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00520745: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00520748: add ecx, dword ptr [ebp + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0052074b: mov byte ptr [ecx + 0xc], 1 */ W8((u32)(r_ecx+0xcu), 0x1u);
    /* 0052074f: call 0x520d60 */ r_esp -= 4; W32(r_esp, 0x520754u); f_00520d60();
    /* 00520754: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00520757: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0052075a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052075b: call 0x5209d0 */ r_esp -= 4; W32(r_esp, 0x520760u); f_005209d0();
    /* 00520760: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00520763: mov esp, ebp */ r_esp = r_ebp;
    /* 00520765: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00520766: ret  */ FN_RET(0x00520730); r_esp += 4; return;
}

void f_00520770(void) /* sub_520770 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00520770);
    /* 00520770: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00520771: mov ebp, esp */ r_ebp = r_esp;
    /* 00520773: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00520774: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00520777: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00520778: call 0x520540 */ r_esp -= 4; W32(r_esp, 0x52077du); f_00520540();
    /* 0052077d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00520780: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00520783: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00520786: add ecx, dword ptr [ebp + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00520789: mov al, byte ptr [ecx + 0xc] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ecx+0xcu))) & 0xffu);
    /* 0052078c: mov esp, ebp */ r_esp = r_ebp;
    /* 0052078e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052078f: ret  */ FN_RET(0x00520770); r_esp += 4; return;
}

void f_00520790(void) /* sub_520790 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00520790);
    /* 00520790: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00520791: mov ebp, esp */ r_ebp = r_esp;
    /* 00520793: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00520796: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00520799: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052079a: call 0x520540 */ r_esp -= 4; W32(r_esp, 0x52079fu); f_00520540();
    /* 0052079f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005207a2: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005207a5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005207a8: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005207ab: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 005207ad: call 0x520d60 */ r_esp -= 4; W32(r_esp, 0x5207b2u); f_00520d60();
    /* 005207b2: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005207b5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005207b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005207b9: call 0x5209d0 */ r_esp -= 4; W32(r_esp, 0x5207beu); f_005209d0();
    /* 005207be: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005207c1: mov esp, ebp */ r_esp = r_ebp;
    /* 005207c3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005207c4: ret  */ FN_RET(0x00520790); r_esp += 4; return;
}

void f_00520800(void) /* sub_520800 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00520800);
    /* 00520800: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00520801: mov ebp, esp */ r_ebp = r_esp;
    /* 00520803: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00520806: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00520809: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052080a: call 0x520540 */ r_esp -= 4; W32(r_esp, 0x52080fu); f_00520540();
    /* 0052080f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00520812: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00520815: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0052081c: jmp 0x520827 */ goto L_00520827;
L_0052081e:; BB(0x0052081e);
    /* 0052081e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00520821: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00520824: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00520827:; BB(0x00520827);
    /* 00520827: cmp dword ptr [ebp - 4], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052082b: jge 0x520841 */ if ((fS==fO)) goto L_00520841;
L_0052082d:; BB(0x0052082d);
    /* 0052082d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00520830: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00520833: cmp dword ptr [eax + edx*4 + 0x5c], -1 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x5cu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00520838: jne 0x52083f */ if (!fZ) goto L_0052083f;
L_0052083a:; BB(0x0052083a);
    /* 0052083a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0052083d: jmp 0x520843 */ goto L_00520843;
L_0052083f:; BB(0x0052083f);
    /* 0052083f: jmp 0x52081e */ goto L_0052081e;
L_00520841:; BB(0x00520841);
    /* 00520841: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00520843:; BB(0x00520843);
    /* 00520843: mov esp, ebp */ r_esp = r_ebp;
    /* 00520845: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00520846: ret  */ FN_RET(0x00520800); r_esp += 4; return;
}

void f_00520850(void) /* sub_520850 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00520850);
    /* 00520850: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00520851: mov ebp, esp */ r_ebp = r_esp;
    /* 00520853: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00520854: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00520857: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00520858: call 0x520800 */ r_esp -= 4; W32(r_esp, 0x52085du); f_00520800();
    /* 0052085d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00520860: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00520863: mov eax, 7 */ r_eax = 0x7u;
    /* 00520868: sub eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0052086b: mov esp, ebp */ r_esp = r_ebp;
    /* 0052086d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052086e: ret  */ FN_RET(0x00520850); r_esp += 4; return;
}

void f_005208b0(void) /* sub_5208B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005208b0);
    /* 005208b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005208b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005208b3: sub esp, 0x410 */ {  u32 a = r_esp; u32 b = 0x410u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005208b9: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005208be: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005208c0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005208c3: mov byte ptr [ebp - 0x408], 0 */ W8((u32)(r_ebp+0xfffffbf8u), 0x0u);
    /* 005208ca: push 0x3ff */ { u32 v = 0x3ffu; r_esp -= 4; W32(r_esp, v); }
    /* 005208cf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005208d1: lea eax, [ebp - 0x407] */ r_eax = (u32)(r_ebp+0xfffffbf9u);
    /* 005208d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005208d8: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x5208ddu); f_00686fa2();
    /* 005208dd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005208e0: call 0x520c40 */ r_esp -= 4; W32(r_esp, 0x5208e5u); f_00520c40();
    /* 005208e5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005208e6: lea ecx, [ebp - 0x408] */ r_ecx = (u32)(r_ebp+0xfffffbf8u);
    /* 005208ec: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005208ed: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x5208f2u); f_00686ec6();
    /* 005208f2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005208f5: push 0x6c2d28 */ { u32 v = 0x6c2d28u; r_esp -= 4; W32(r_esp, v); }
    /* 005208fa: lea edx, [ebp - 0x408] */ r_edx = (u32)(r_ebp+0xfffffbf8u);
    /* 00520900: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00520901: call 0x5ea9c0 */ r_esp -= 4; W32(r_esp, 0x520906u); f_005ea9c0();
    /* 00520906: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00520909: mov dword ptr [ebp - 0x410], eax */ W32((u32)(r_ebp+0xfffffbf0u), r_eax);
    /* 0052090f: cmp dword ptr [ebp - 0x410], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffbf0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00520916: je 0x520960 */ if (fZ) goto L_00520960;
L_00520918:; BB(0x00520918);
    /* 00520918: mov eax, dword ptr [ebp - 0x410] */ r_eax = R32((u32)(r_ebp+0xfffffbf0u));
    /* 0052091e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052091f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00520921: push 0x6884 */ { u32 v = 0x6884u; r_esp -= 4; W32(r_esp, v); }
    /* 00520926: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00520929: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052092a: call dword ptr [0x6b225c] */ { u32 t = R32((u32)(0x6b225cu)); r_esp -= 4; W32(r_esp, 0x520930u); call_ind(t); }
    /* 00520930: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00520933: mov edx, dword ptr [ebp - 0x410] */ r_edx = R32((u32)(r_ebp+0xfffffbf0u));
    /* 00520939: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052093a: call dword ptr [0x6b2258] */ { u32 t = R32((u32)(0x6b2258u)); r_esp -= 4; W32(r_esp, 0x520940u); call_ind(t); }
    /* 00520940: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00520943: call 0x5204f0 */ r_esp -= 4; W32(r_esp, 0x520948u); f_005204f0();
    /* 00520948: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0052094b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052094e: jne 0x52095e */ if (!fZ) goto L_0052095e;
L_00520950:; BB(0x00520950);
    /* 00520950: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00520953: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00520954: call 0x520a80 */ r_esp -= 4; W32(r_esp, 0x520959u); f_00520a80();
    /* 00520959: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052095c: jmp 0x5209c2 */ goto L_005209c2;
L_0052095e:; BB(0x0052095e);
    /* 0052095e: jmp 0x5209c2 */ goto L_005209c2;
L_00520960:; BB(0x00520960);
    /* 00520960: push 0x6884 */ { u32 v = 0x6884u; r_esp -= 4; W32(r_esp, v); }
    /* 00520965: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00520967: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0052096a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052096b: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x520970u); f_00686fa2();
    /* 00520970: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00520973: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00520976: mov byte ptr [eax], 0 */ W8((u32)(r_eax), 0x0u);
    /* 00520979: mov dword ptr [ebp - 0x40c], 0 */ W32((u32)(r_ebp+0xfffffbf4u), 0x0u);
    /* 00520983: jmp 0x520994 */ goto L_00520994;
L_00520985:; BB(0x00520985);
    /* 00520985: mov ecx, dword ptr [ebp - 0x40c] */ r_ecx = R32((u32)(r_ebp+0xfffffbf4u));
    /* 0052098b: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0052098e: mov dword ptr [ebp - 0x40c], ecx */ W32((u32)(r_ebp+0xfffffbf4u), r_ecx);
L_00520994:; BB(0x00520994);
    /* 00520994: cmp dword ptr [ebp - 0x40c], 0x10 */ {  u32 a = R32((u32)(r_ebp+0xfffffbf4u)); u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052099b: jge 0x5209b6 */ if ((fS==fO)) goto L_005209b6;
L_0052099d:; BB(0x0052099d);
    /* 0052099d: mov edx, dword ptr [ebp - 0x40c] */ r_edx = R32((u32)(r_ebp+0xfffffbf4u));
    /* 005209a3: imul edx, edx, 0x688 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x688u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005209a9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005209ac: mov dword ptr [eax + edx + 4], 0xffffffff */ W32((u32)(r_eax+r_edx+0x4u), 0xffffffffu);
    /* 005209b4: jmp 0x520985 */ goto L_00520985;
L_005209b6:; BB(0x005209b6);
    /* 005209b6: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005209b9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005209ba: call 0x5209d0 */ r_esp -= 4; W32(r_esp, 0x5209bfu); f_005209d0();
    /* 005209bf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005209c2:; BB(0x005209c2);
    /* 005209c2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005209c5: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005209c7: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x5209ccu); f_00686d72();
    /* 005209cc: mov esp, ebp */ r_esp = r_ebp;
    /* 005209ce: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005209cf: ret  */ FN_RET(0x005208b0); r_esp += 4; return;
}

void f_005209d0(void) /* sub_5209D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005209d0);
    /* 005209d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005209d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005209d3: sub esp, 0x40c */ {  u32 a = r_esp; u32 b = 0x40cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005209d9: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005209de: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005209e0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005209e3: mov byte ptr [ebp - 0x408], 0 */ W8((u32)(r_ebp+0xfffffbf8u), 0x0u);
    /* 005209ea: push 0x3ff */ { u32 v = 0x3ffu; r_esp -= 4; W32(r_esp, v); }
    /* 005209ef: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005209f1: lea eax, [ebp - 0x407] */ r_eax = (u32)(r_ebp+0xfffffbf9u);
    /* 005209f7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005209f8: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x5209fdu); f_00686fa2();
    /* 005209fd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00520a00: call 0x520c40 */ r_esp -= 4; W32(r_esp, 0x520a05u); f_00520c40();
    /* 00520a05: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00520a06: lea ecx, [ebp - 0x408] */ r_ecx = (u32)(r_ebp+0xfffffbf8u);
    /* 00520a0c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00520a0d: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x520a12u); f_00686ec6();
    /* 00520a12: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00520a15: push 0x6c2d2c */ { u32 v = 0x6c2d2cu; r_esp -= 4; W32(r_esp, v); }
    /* 00520a1a: lea edx, [ebp - 0x408] */ r_edx = (u32)(r_ebp+0xfffffbf8u);
    /* 00520a20: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00520a21: call 0x5ea9c0 */ r_esp -= 4; W32(r_esp, 0x520a26u); f_005ea9c0();
    /* 00520a26: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00520a29: mov dword ptr [ebp - 0x40c], eax */ W32((u32)(r_ebp+0xfffffbf4u), r_eax);
    /* 00520a2f: cmp dword ptr [ebp - 0x40c], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffbf4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00520a36: je 0x520a63 */ if (fZ) goto L_00520a63;
L_00520a38:; BB(0x00520a38);
    /* 00520a38: mov eax, dword ptr [ebp - 0x40c] */ r_eax = R32((u32)(r_ebp+0xfffffbf4u));
    /* 00520a3e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00520a3f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00520a41: push 0x6884 */ { u32 v = 0x6884u; r_esp -= 4; W32(r_esp, v); }
    /* 00520a46: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00520a49: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00520a4a: call dword ptr [0x6b2260] */ { u32 t = R32((u32)(0x6b2260u)); r_esp -= 4; W32(r_esp, 0x520a50u); call_ind(t); }
    /* 00520a50: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00520a53: mov edx, dword ptr [ebp - 0x40c] */ r_edx = R32((u32)(r_ebp+0xfffffbf4u));
    /* 00520a59: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00520a5a: call dword ptr [0x6b2258] */ { u32 t = R32((u32)(0x6b2258u)); r_esp -= 4; W32(r_esp, 0x520a60u); call_ind(t); }
    /* 00520a60: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00520a63:; BB(0x00520a63);
    /* 00520a63: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00520a66: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00520a67: call 0x520b90 */ r_esp -= 4; W32(r_esp, 0x520a6cu); f_00520b90();
    /* 00520a6c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00520a6f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00520a72: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00520a74: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x520a79u); f_00686d72();
    /* 00520a79: mov esp, ebp */ r_esp = r_ebp;
    /* 00520a7b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00520a7c: ret  */ FN_RET(0x005209d0); r_esp += 4; return;
}

void f_00520a80(void) /* sub_520A80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00520a80);
    /* 00520a80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00520a81: mov ebp, esp */ r_ebp = r_esp;
    /* 00520a83: sub esp, 0x410 */ {  u32 a = r_esp; u32 b = 0x410u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00520a89: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00520a8e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00520a90: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00520a93: mov byte ptr [ebp - 0x408], 0 */ W8((u32)(r_ebp+0xfffffbf8u), 0x0u);
    /* 00520a9a: push 0x3ff */ { u32 v = 0x3ffu; r_esp -= 4; W32(r_esp, v); }
    /* 00520a9f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00520aa1: lea eax, [ebp - 0x407] */ r_eax = (u32)(r_ebp+0xfffffbf9u);
    /* 00520aa7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00520aa8: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x520aadu); f_00686fa2();
    /* 00520aad: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00520ab0: call 0x520cd0 */ r_esp -= 4; W32(r_esp, 0x520ab5u); f_00520cd0();
    /* 00520ab5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00520ab6: lea ecx, [ebp - 0x408] */ r_ecx = (u32)(r_ebp+0xfffffbf8u);
    /* 00520abc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00520abd: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x520ac2u); f_00686ec6();
    /* 00520ac2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00520ac5: push 0x6c2d28 */ { u32 v = 0x6c2d28u; r_esp -= 4; W32(r_esp, v); }
    /* 00520aca: lea edx, [ebp - 0x408] */ r_edx = (u32)(r_ebp+0xfffffbf8u);
    /* 00520ad0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00520ad1: call 0x5ea9c0 */ r_esp -= 4; W32(r_esp, 0x520ad6u); f_005ea9c0();
    /* 00520ad6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00520ad9: mov dword ptr [ebp - 0x410], eax */ W32((u32)(r_ebp+0xfffffbf0u), r_eax);
    /* 00520adf: cmp dword ptr [ebp - 0x410], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffbf0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00520ae6: je 0x520b15 */ if (fZ) goto L_00520b15;
L_00520ae8:; BB(0x00520ae8);
    /* 00520ae8: mov eax, dword ptr [ebp - 0x410] */ r_eax = R32((u32)(r_ebp+0xfffffbf0u));
    /* 00520aee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00520aef: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00520af1: push 0x6884 */ { u32 v = 0x6884u; r_esp -= 4; W32(r_esp, v); }
    /* 00520af6: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00520af9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00520afa: call dword ptr [0x6b225c] */ { u32 t = R32((u32)(0x6b225cu)); r_esp -= 4; W32(r_esp, 0x520b00u); call_ind(t); }
    /* 00520b00: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00520b03: mov edx, dword ptr [ebp - 0x410] */ r_edx = R32((u32)(r_ebp+0xfffffbf0u));
    /* 00520b09: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00520b0a: call dword ptr [0x6b2258] */ { u32 t = R32((u32)(0x6b2258u)); r_esp -= 4; W32(r_esp, 0x520b10u); call_ind(t); }
    /* 00520b10: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00520b13: jmp 0x520b77 */ goto L_00520b77;
L_00520b15:; BB(0x00520b15);
    /* 00520b15: push 0x6884 */ { u32 v = 0x6884u; r_esp -= 4; W32(r_esp, v); }
    /* 00520b1a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00520b1c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00520b1f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00520b20: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x520b25u); f_00686fa2();
    /* 00520b25: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00520b28: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00520b2b: mov byte ptr [ecx], 0 */ W8((u32)(r_ecx), 0x0u);
    /* 00520b2e: mov dword ptr [ebp - 0x40c], 0 */ W32((u32)(r_ebp+0xfffffbf4u), 0x0u);
    /* 00520b38: jmp 0x520b49 */ goto L_00520b49;
L_00520b3a:; BB(0x00520b3a);
    /* 00520b3a: mov edx, dword ptr [ebp - 0x40c] */ r_edx = R32((u32)(r_ebp+0xfffffbf4u));
    /* 00520b40: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00520b43: mov dword ptr [ebp - 0x40c], edx */ W32((u32)(r_ebp+0xfffffbf4u), r_edx);
L_00520b49:; BB(0x00520b49);
    /* 00520b49: cmp dword ptr [ebp - 0x40c], 0x10 */ {  u32 a = R32((u32)(r_ebp+0xfffffbf4u)); u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00520b50: jge 0x520b6b */ if ((fS==fO)) goto L_00520b6b;
L_00520b52:; BB(0x00520b52);
    /* 00520b52: mov eax, dword ptr [ebp - 0x40c] */ r_eax = R32((u32)(r_ebp+0xfffffbf4u));
    /* 00520b58: imul eax, eax, 0x688 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x688u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00520b5e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00520b61: mov dword ptr [ecx + eax + 4], 0xffffffff */ W32((u32)(r_ecx+r_eax+0x4u), 0xffffffffu);
    /* 00520b69: jmp 0x520b3a */ goto L_00520b3a;
L_00520b6b:; BB(0x00520b6b);
    /* 00520b6b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00520b6e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00520b6f: call 0x5209d0 */ r_esp -= 4; W32(r_esp, 0x520b74u); f_005209d0();
    /* 00520b74: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00520b77:; BB(0x00520b77);
    /* 00520b77: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00520b7a: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00520b7c: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x520b81u); f_00686d72();
    /* 00520b81: mov esp, ebp */ r_esp = r_ebp;
    /* 00520b83: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00520b84: ret  */ FN_RET(0x00520a80); r_esp += 4; return;
}

void f_00520b90(void) /* sub_520B90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00520b90);
    /* 00520b90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00520b91: mov ebp, esp */ r_ebp = r_esp;
    /* 00520b93: sub esp, 0x40c */ {  u32 a = r_esp; u32 b = 0x40cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00520b99: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00520b9e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00520ba0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00520ba3: mov byte ptr [ebp - 0x408], 0 */ W8((u32)(r_ebp+0xfffffbf8u), 0x0u);
    /* 00520baa: push 0x3ff */ { u32 v = 0x3ffu; r_esp -= 4; W32(r_esp, v); }
    /* 00520baf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00520bb1: lea eax, [ebp - 0x407] */ r_eax = (u32)(r_ebp+0xfffffbf9u);
    /* 00520bb7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00520bb8: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x520bbdu); f_00686fa2();
    /* 00520bbd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00520bc0: call 0x520cd0 */ r_esp -= 4; W32(r_esp, 0x520bc5u); f_00520cd0();
    /* 00520bc5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00520bc6: lea ecx, [ebp - 0x408] */ r_ecx = (u32)(r_ebp+0xfffffbf8u);
    /* 00520bcc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00520bcd: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x520bd2u); f_00686ec6();
    /* 00520bd2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00520bd5: push 0x6c2d2c */ { u32 v = 0x6c2d2cu; r_esp -= 4; W32(r_esp, v); }
    /* 00520bda: lea edx, [ebp - 0x408] */ r_edx = (u32)(r_ebp+0xfffffbf8u);
    /* 00520be0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00520be1: call 0x5ea9c0 */ r_esp -= 4; W32(r_esp, 0x520be6u); f_005ea9c0();
    /* 00520be6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00520be9: mov dword ptr [ebp - 0x40c], eax */ W32((u32)(r_ebp+0xfffffbf4u), r_eax);
    /* 00520bef: cmp dword ptr [ebp - 0x40c], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffbf4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00520bf6: je 0x520c23 */ if (fZ) goto L_00520c23;
L_00520bf8:; BB(0x00520bf8);
    /* 00520bf8: mov eax, dword ptr [ebp - 0x40c] */ r_eax = R32((u32)(r_ebp+0xfffffbf4u));
    /* 00520bfe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00520bff: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00520c01: push 0x6884 */ { u32 v = 0x6884u; r_esp -= 4; W32(r_esp, v); }
    /* 00520c06: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00520c09: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00520c0a: call dword ptr [0x6b2260] */ { u32 t = R32((u32)(0x6b2260u)); r_esp -= 4; W32(r_esp, 0x520c10u); call_ind(t); }
    /* 00520c10: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00520c13: mov edx, dword ptr [ebp - 0x40c] */ r_edx = R32((u32)(r_ebp+0xfffffbf4u));
    /* 00520c19: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00520c1a: call dword ptr [0x6b2258] */ { u32 t = R32((u32)(0x6b2258u)); r_esp -= 4; W32(r_esp, 0x520c20u); call_ind(t); }
    /* 00520c20: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00520c23:; BB(0x00520c23);
    /* 00520c23: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00520c26: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00520c28: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x520c2du); f_00686d72();
    /* 00520c2d: mov esp, ebp */ r_esp = r_ebp;
    /* 00520c2f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00520c30: ret  */ FN_RET(0x00520b90); r_esp += 4; return;
}

void f_00520c40(void) /* sub_520C40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00520c40);
    /* 00520c40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00520c41: mov ebp, esp */ r_ebp = r_esp;
    /* 00520c43: sub esp, 0x74 */ {  u32 a = r_esp; u32 b = 0x74u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00520c46: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00520c4b: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00520c4d: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00520c50: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00520c56: call 0x6375b0 */ r_esp -= 4; W32(r_esp, 0x520c5bu); f_006375b0();
    /* 00520c5b: mov ecx, eax */ r_ecx = r_eax;
    /* 00520c5d: call 0x520e60 */ r_esp -= 4; W32(r_esp, 0x520c62u); f_00520e60();
    /* 00520c62: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00520c63: lea eax, [ebp - 0x70] */ r_eax = (u32)(r_ebp+0xffffff90u);
    /* 00520c66: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00520c67: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x520c6cu); f_00686d8e();
    /* 00520c6c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00520c6f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00520c76: jmp 0x520c81 */ goto L_00520c81;
L_00520c78:; BB(0x00520c78);
    /* 00520c78: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00520c7b: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00520c7e: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00520c81:; BB(0x00520c81);
    /* 00520c81: cmp dword ptr [ebp - 4], 0xd */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00520c85: jge 0x520ca0 */ if ((fS==fO)) goto L_00520ca0;
L_00520c87:; BB(0x00520c87);
    /* 00520c87: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00520c8a: movsx eax, byte ptr [ebp + edx - 0x70] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+r_edx+0xffffff90u));
    /* 00520c8f: cmp eax, 0x2e */ {  u32 a = r_eax; u32 b = 0x2eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00520c92: jne 0x520c9e */ if (!fZ) goto L_00520c9e;
L_00520c94:; BB(0x00520c94);
    /* 00520c94: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00520c97: mov byte ptr [ebp + ecx - 0x70], 0 */ W8((u32)(r_ebp+r_ecx+0xffffff90u), 0x0u);
    /* 00520c9c: jmp 0x520ca0 */ goto L_00520ca0;
L_00520c9e:; BB(0x00520c9e);
    /* 00520c9e: jmp 0x520c78 */ goto L_00520c78;
L_00520ca0:; BB(0x00520ca0);
    /* 00520ca0: push 0x6c2d38 */ { u32 v = 0x6c2d38u; r_esp -= 4; W32(r_esp, v); }
    /* 00520ca5: lea edx, [ebp - 0x70] */ r_edx = (u32)(r_ebp+0xffffff90u);
    /* 00520ca8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00520ca9: push 0x6c2d30 */ { u32 v = 0x6c2d30u; r_esp -= 4; W32(r_esp, v); }
    /* 00520cae: push 0x793168 */ { u32 v = 0x793168u; r_esp -= 4; W32(r_esp, v); }
    /* 00520cb3: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x520cb9u); call_ind(t); }
    /* 00520cb9: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00520cbc: mov eax, 0x793168 */ r_eax = 0x793168u;
    /* 00520cc1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00520cc4: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00520cc6: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x520ccbu); f_00686d72();
    /* 00520ccb: mov esp, ebp */ r_esp = r_ebp;
    /* 00520ccd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00520cce: ret  */ FN_RET(0x00520c40); r_esp += 4; return;
}

void f_00520cd0(void) /* sub_520CD0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00520cd0);
    /* 00520cd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00520cd1: mov ebp, esp */ r_ebp = r_esp;
    /* 00520cd3: sub esp, 0x74 */ {  u32 a = r_esp; u32 b = 0x74u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00520cd6: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00520cdb: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00520cdd: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00520ce0: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00520ce6: call 0x6375b0 */ r_esp -= 4; W32(r_esp, 0x520cebu); f_006375b0();
    /* 00520ceb: mov ecx, eax */ r_ecx = r_eax;
    /* 00520ced: call 0x520e60 */ r_esp -= 4; W32(r_esp, 0x520cf2u); f_00520e60();
    /* 00520cf2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00520cf3: lea eax, [ebp - 0x70] */ r_eax = (u32)(r_ebp+0xffffff90u);
    /* 00520cf6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00520cf7: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x520cfcu); f_00686d8e();
    /* 00520cfc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00520cff: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00520d06: jmp 0x520d11 */ goto L_00520d11;
L_00520d08:; BB(0x00520d08);
    /* 00520d08: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00520d0b: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00520d0e: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00520d11:; BB(0x00520d11);
    /* 00520d11: cmp dword ptr [ebp - 4], 0xd */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00520d15: jge 0x520d30 */ if ((fS==fO)) goto L_00520d30;
L_00520d17:; BB(0x00520d17);
    /* 00520d17: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00520d1a: movsx eax, byte ptr [ebp + edx - 0x70] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+r_edx+0xffffff90u));
    /* 00520d1f: cmp eax, 0x2e */ {  u32 a = r_eax; u32 b = 0x2eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00520d22: jne 0x520d2e */ if (!fZ) goto L_00520d2e;
L_00520d24:; BB(0x00520d24);
    /* 00520d24: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00520d27: mov byte ptr [ebp + ecx - 0x70], 0 */ W8((u32)(r_ebp+r_ecx+0xffffff90u), 0x0u);
    /* 00520d2c: jmp 0x520d30 */ goto L_00520d30;
L_00520d2e:; BB(0x00520d2e);
    /* 00520d2e: jmp 0x520d08 */ goto L_00520d08;
L_00520d30:; BB(0x00520d30);
    /* 00520d30: push 0x6c2d40 */ { u32 v = 0x6c2d40u; r_esp -= 4; W32(r_esp, v); }
    /* 00520d35: lea edx, [ebp - 0x70] */ r_edx = (u32)(r_ebp+0xffffff90u);
    /* 00520d38: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00520d39: push 0x6c2d30 */ { u32 v = 0x6c2d30u; r_esp -= 4; W32(r_esp, v); }
    /* 00520d3e: push 0x793268 */ { u32 v = 0x793268u; r_esp -= 4; W32(r_esp, v); }
    /* 00520d43: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x520d49u); call_ind(t); }
    /* 00520d49: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00520d4c: mov eax, 0x793268 */ r_eax = 0x793268u;
    /* 00520d51: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00520d54: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00520d56: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x520d5bu); f_00686d72();
    /* 00520d5b: mov esp, ebp */ r_esp = r_ebp;
    /* 00520d5d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00520d5e: ret  */ FN_RET(0x00520cd0); r_esp += 4; return;
}

void f_00520d60(void) /* sub_520D60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00520d60);
    /* 00520d60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00520d61: mov ebp, esp */ r_ebp = r_esp;
    /* 00520d63: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00520d66: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00520d6c: call 0x6375b0 */ r_esp -= 4; W32(r_esp, 0x520d71u); f_006375b0();
    /* 00520d71: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00520d74: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00520d77: call 0x5d52e0 */ r_esp -= 4; W32(r_esp, 0x520d7cu); f_005d52e0();
    /* 00520d7c: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00520d7f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00520d82: add eax, 0xe70 */ {  u32 a = r_eax; u32 b = 0xe70u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00520d87: mov esp, ebp */ r_esp = r_ebp;
    /* 00520d89: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00520d8a: ret  */ FN_RET(0x00520d60); r_esp += 4; return;
}

void f_00520e60(void) /* sub_520E60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00520e60);
    /* 00520e60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00520e61: mov ebp, esp */ r_ebp = r_esp;
    /* 00520e63: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00520e66: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00520e69: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00520e6c: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x520e71u); f_0063aac0();
    /* 00520e71: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00520e73: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00520e76: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00520e78: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00520e7c: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00520e7f: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 00520e82: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00520e84: je 0x520e9a */ if (fZ) goto L_00520e9a;
L_00520e86:; BB(0x00520e86);
    /* 00520e86: push 0x4d */ { u32 v = 0x4du; r_esp -= 4; W32(r_esp, v); }
    /* 00520e88: push 0x6bceec */ { u32 v = 0x6bceecu; r_esp -= 4; W32(r_esp, v); }
    /* 00520e8d: push 0x6bcee0 */ { u32 v = 0x6bcee0u; r_esp -= 4; W32(r_esp, v); }
    /* 00520e92: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x520e97u); f_005e9f20();
    /* 00520e97: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00520e9a:; BB(0x00520e9a);
    /* 00520e9a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00520e9d: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00520ea0: mov esp, ebp */ r_esp = r_ebp;
    /* 00520ea2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00520ea3: ret  */ FN_RET(0x00520e60); r_esp += 4; return;
}

void f_00520ef0(void) /* sub_520EF0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00520ef0);
    /* 00520ef0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00520ef1: mov ebp, esp */ r_ebp = r_esp;
    /* 00520ef3: sub esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00520ef6: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00520efb: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00520efd: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00520f00: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00520f01: mov dword ptr [ebp - 0x54], ecx */ W32((u32)(r_ebp+0xffffffacu), r_ecx);
    /* 00520f04: mov dword ptr [ebp - 0x48], 0xffffffff */ W32((u32)(r_ebp+0xffffffb8u), 0xffffffffu);
    /* 00520f0b: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00520f12: mov ecx, dword ptr [0x793374] */ r_ecx = R32((u32)(0x793374u));
    /* 00520f18: call 0x528000 */ r_esp -= 4; W32(r_esp, 0x520f1du); f_00528000();
    /* 00520f1d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00520f20: mov byte ptr [ebp - 0x20], 2 */ W8((u32)(r_ebp+0xffffffe0u), 0x2u);
    /* 00520f24: mov byte ptr [ebp - 0x1f], 0 */ W8((u32)(r_ebp+0xffffffe1u), 0x0u);
    /* 00520f28: mov byte ptr [ebp - 0x1e], 4 */ W8((u32)(r_ebp+0xffffffe2u), 0x4u);
    /* 00520f2c: mov byte ptr [ebp - 0x1d], 0 */ W8((u32)(r_ebp+0xffffffe3u), 0x0u);
    /* 00520f30: mov byte ptr [ebp - 0x1c], 0xc */ W8((u32)(r_ebp+0xffffffe4u), 0xcu);
    /* 00520f34: mov byte ptr [ebp - 0x1b], 0 */ W8((u32)(r_ebp+0xffffffe5u), 0x0u);
    /* 00520f38: mov byte ptr [ebp - 0x1a], 0xe */ W8((u32)(r_ebp+0xffffffe6u), 0xeu);
    /* 00520f3c: mov byte ptr [ebp - 0x19], 0 */ W8((u32)(r_ebp+0xffffffe7u), 0x0u);
    /* 00520f40: mov byte ptr [ebp - 0x18], 0x16 */ W8((u32)(r_ebp+0xffffffe8u), 0x16u);
    /* 00520f44: mov byte ptr [ebp - 0x17], 0 */ W8((u32)(r_ebp+0xffffffe9u), 0x0u);
    /* 00520f48: mov byte ptr [ebp - 0x16], 0x18 */ W8((u32)(r_ebp+0xffffffeau), 0x18u);
    /* 00520f4c: mov byte ptr [ebp - 0x15], 0 */ W8((u32)(r_ebp+0xffffffebu), 0x0u);
    /* 00520f50: mov byte ptr [ebp - 0x14], 0x20 */ W8((u32)(r_ebp+0xffffffecu), 0x20u);
    /* 00520f54: mov byte ptr [ebp - 0x13], 0 */ W8((u32)(r_ebp+0xffffffedu), 0x0u);
    /* 00520f58: mov byte ptr [ebp - 0x12], 0x24 */ W8((u32)(r_ebp+0xffffffeeu), 0x24u);
    /* 00520f5c: mov byte ptr [ebp - 0x11], 0 */ W8((u32)(r_ebp+0xffffffefu), 0x0u);
    /* 00520f60: mov word ptr [ebp - 0x2c], 0x98 */ W16((u32)(r_ebp+0xffffffd4u), 0x98u);
    /* 00520f66: mov word ptr [ebp - 0x2a], 0x99 */ W16((u32)(r_ebp+0xffffffd6u), 0x99u);
    /* 00520f6c: mov word ptr [ebp - 0x28], 0x9a */ W16((u32)(r_ebp+0xffffffd8u), 0x9au);
    /* 00520f72: mov word ptr [ebp - 0x26], 0x9b */ W16((u32)(r_ebp+0xffffffdau), 0x9bu);
    /* 00520f78: mov dword ptr [ebp - 0x40], 2 */ W32((u32)(r_ebp+0xffffffc0u), 0x2u);
    /* 00520f7f: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 00520f86: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 00520f8d: mov dword ptr [ebp - 0x34], 3 */ W32((u32)(r_ebp+0xffffffccu), 0x3u);
    /* 00520f94: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00520f96: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 00520f99: call 0x521660 */ r_esp -= 4; W32(r_esp, 0x520f9eu); f_00521660();
    /* 00520f9e: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00520fa1: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 00520fa8: jmp 0x520fb3 */ goto L_00520fb3;
L_00520faa:; BB(0x00520faa);
    /* 00520faa: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00520fad: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00520fb0: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_00520fb3:; BB(0x00520fb3);
    /* 00520fb3: cmp dword ptr [ebp - 0xc], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00520fb7: jge 0x520fd5 */ if ((fS==fO)) goto L_00520fd5;
L_00520fb9:; BB(0x00520fb9);
    /* 00520fb9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00520fbc: imul ecx, ecx, 0x28 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x28u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00520fbf: mov edx, dword ptr [0x793374] */ r_edx = R32((u32)(0x793374u));
    /* 00520fc5: lea eax, [edx + ecx + 0xc98] */ r_eax = (u32)(r_edx+r_ecx+0xc98u);
    /* 00520fcc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00520fcf: mov byte ptr [eax + ecx*8], 0 */ W8((u32)(r_eax+r_ecx*8), 0x0u);
    /* 00520fd3: jmp 0x520faa */ goto L_00520faa;
L_00520fd5:; BB(0x00520fd5);
    /* 00520fd5: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 00520fd7: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x520fdcu); f_0062fbf0();
    /* 00520fdc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00520fdf: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00520fe2: jge 0x521027 */ if ((fS==fO)) goto L_00521027;
L_00520fe4:; BB(0x00520fe4);
    /* 00520fe4: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00520fe6: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x520febu); f_0062fbf0();
    /* 00520feb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00520fee: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00520ff1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00520ff3: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00520ff6: movsx eax, word ptr [ebp + edx*2 - 0x2c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+r_edx*2+0xffffffd4u));
    /* 00520ffb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00520ffc: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 00520fff: call 0x521a30 */ r_esp -= 4; W32(r_esp, 0x521004u); f_00521a30();
    /* 00521004: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00521007: imul ecx, ecx, 0x28 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x28u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0052100a: mov edx, dword ptr [0x793374] */ r_edx = R32((u32)(0x793374u));
    /* 00521010: lea eax, [edx + ecx + 0xc98] */ r_eax = (u32)(r_edx+r_ecx+0xc98u);
    /* 00521017: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052101a: mov edx, dword ptr [ebp + ecx*4 - 0x40] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffc0u));
    /* 0052101e: mov byte ptr [eax + edx*8], 1 */ W8((u32)(r_eax+r_edx*8), 0x1u);
    /* 00521022: jmp 0x521620 */ goto L_00521620;
L_00521027:; BB(0x00521027);
    /* 00521027: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 0052102a: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 0052102d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00521030: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 00521033: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 00521036: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 00521039: sub eax, 0x13 */ {  u32 a = r_eax; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0052103c: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 0052103f: cmp dword ptr [ebp - 0x58], 9 */ {  u32 a = R32((u32)(r_ebp+0xffffffa8u)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00521043: ja 0x521607 */ if ((!fC&&!fZ)) goto L_00521607;
L_00521049:; BB(0x00521049);
    /* 00521049: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0052104c: jmp dword ptr [ecx*4 + 0x521634] */ { u32 t = R32((u32)(r_ecx*4+0x521634u)); switch (t) { case 0x521053u: goto L_00521053; case 0x52113bu: goto L_0052113b; case 0x5213bdu: goto L_005213bd; case 0x5210cdu: goto L_005210cd; case 0x5211e2u: goto L_005211e2; case 0x521286u: goto L_00521286; case 0x521505u: goto L_00521505; case 0x521318u: goto L_00521318; case 0x52158bu: goto L_0052158b; case 0x5214a5u: goto L_005214a5; default: UNSUP(0x0052104c, "jump table entry is not a known target"); } }
L_00521053:; BB(0x00521053);
    /* 00521053: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 00521055: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x52105au); f_0062fbf0();
    /* 0052105a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052105d: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00521060: cmp dword ptr [ebp - 0x24], 0x19 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00521064: jge 0x521089 */ if ((fS==fO)) goto L_00521089;
L_00521066:; BB(0x00521066);
    /* 00521066: mov dword ptr [ebp - 0x44], 0x98 */ W32((u32)(r_ebp+0xffffffbcu), 0x98u);
    /* 0052106d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00521070: imul edx, edx, 0x28 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x28u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00521073: mov eax, dword ptr [0x793374] */ r_eax = R32((u32)(0x793374u));
    /* 00521078: mov byte ptr [eax + edx + 0xca8], 1 */ W8((u32)(r_eax+r_edx+0xca8u), 0x1u);
    /* 00521080: mov dword ptr [ebp - 0x48], 2 */ W32((u32)(r_ebp+0xffffffb8u), 0x2u);
    /* 00521087: jmp 0x5210ba */ goto L_005210ba;
L_00521089:; BB(0x00521089);
    /* 00521089: cmp dword ptr [ebp - 0x24], 0x32 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052108d: jge 0x5210b3 */ if ((fS==fO)) goto L_005210b3;
L_0052108f:; BB(0x0052108f);
    /* 0052108f: mov dword ptr [ebp - 0x44], 0x99 */ W32((u32)(r_ebp+0xffffffbcu), 0x99u);
    /* 00521096: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00521099: imul ecx, ecx, 0x28 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x28u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0052109c: mov edx, dword ptr [0x793374] */ r_edx = R32((u32)(0x793374u));
    /* 005210a2: mov byte ptr [edx + ecx + 0xc98], 1 */ W8((u32)(r_edx+r_ecx+0xc98u), 0x1u);
    /* 005210aa: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 005210b1: jmp 0x5210ba */ goto L_005210ba;
L_005210b3:; BB(0x005210b3);
    /* 005210b3: mov dword ptr [ebp - 0x44], 0x94 */ W32((u32)(r_ebp+0xffffffbcu), 0x94u);
L_005210ba:; BB(0x005210ba);
    /* 005210ba: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005210bc: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 005210bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005210c0: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005210c3: call 0x521a30 */ r_esp -= 4; W32(r_esp, 0x5210c8u); f_00521a30();
    /* 005210c8: jmp 0x521620 */ goto L_00521620;
L_005210cd:; BB(0x005210cd);
    /* 005210cd: mov dword ptr [ebp - 0x48], 4 */ W32((u32)(r_ebp+0xffffffb8u), 0x4u);
    /* 005210d4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005210d7: imul ecx, ecx, 0x28 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x28u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005210da: mov edx, dword ptr [0x793374] */ r_edx = R32((u32)(0x793374u));
    /* 005210e0: mov byte ptr [edx + ecx + 0xcb8], 1 */ W8((u32)(r_edx+r_ecx+0xcb8u), 0x1u);
    /* 005210e8: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005210eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005210ec: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005210ee: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005210f1: call 0x521a30 */ r_esp -= 4; W32(r_esp, 0x5210f6u); f_00521a30();
    /* 005210f6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005210f9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005210fa: push 0x25 */ { u32 v = 0x25u; r_esp -= 4; W32(r_esp, v); }
    /* 005210fc: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005210ff: call 0x521a30 */ r_esp -= 4; W32(r_esp, 0x521104u); f_00521a30();
    /* 00521104: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0052110b: jmp 0x521116 */ goto L_00521116;
L_0052110d:; BB(0x0052110d);
    /* 0052110d: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00521110: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00521113: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_00521116:; BB(0x00521116);
    /* 00521116: cmp dword ptr [ebp - 0xc], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052111a: jge 0x521136 */ if ((fS==fO)) goto L_00521136;
L_0052111c:; BB(0x0052111c);
    /* 0052111c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052111e: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 00521120: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x521125u); f_0062fbf0();
    /* 00521125: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00521128: add eax, 0x63 */ {  u32 a = r_eax; u32 b = 0x63u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0052112b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052112c: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0052112f: call 0x521a30 */ r_esp -= 4; W32(r_esp, 0x521134u); f_00521a30();
    /* 00521134: jmp 0x52110d */ goto L_0052110d;
L_00521136:; BB(0x00521136);
    /* 00521136: jmp 0x521620 */ goto L_00521620;
L_0052113b:; BB(0x0052113b);
    /* 0052113b: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0052113d: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x521142u); f_0062fbf0();
    /* 00521142: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00521145: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00521147: je 0x521152 */ if (fZ) goto L_00521152;
L_00521149:; BB(0x00521149);
    /* 00521149: mov dword ptr [ebp - 0x48], 4 */ W32((u32)(r_ebp+0xffffffb8u), 0x4u);
    /* 00521150: jmp 0x521159 */ goto L_00521159;
L_00521152:; BB(0x00521152);
    /* 00521152: mov dword ptr [ebp - 0x48], 2 */ W32((u32)(r_ebp+0xffffffb8u), 0x2u);
L_00521159:; BB(0x00521159);
    /* 00521159: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0052115c: imul eax, eax, 0x28 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x28u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0052115f: mov ecx, dword ptr [0x793374] */ r_ecx = R32((u32)(0x793374u));
    /* 00521165: mov byte ptr [ecx + eax + 0xcb8], 1 */ W8((u32)(r_ecx+r_eax+0xcb8u), 0x1u);
    /* 0052116d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00521170: imul edx, edx, 0x28 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x28u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00521173: mov eax, dword ptr [0x793374] */ r_eax = R32((u32)(0x793374u));
    /* 00521178: mov byte ptr [eax + edx + 0xca8], 1 */ W8((u32)(r_eax+r_edx+0xca8u), 0x1u);
    /* 00521180: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00521182: push 0x98 */ { u32 v = 0x98u; r_esp -= 4; W32(r_esp, v); }
    /* 00521187: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0052118a: call 0x521a30 */ r_esp -= 4; W32(r_esp, 0x52118fu); f_00521a30();
    /* 0052118f: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_00521196:; BB(0x00521196);
    /* 00521196: cmp dword ptr [ebp - 0x30], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052119a: jge 0x5211dd */ if ((fS==fO)) goto L_005211dd;
L_0052119c:; BB(0x0052119c);
    /* 0052119c: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0052119e: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5211a3u); f_0062fbf0();
    /* 005211a3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005211a6: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005211a9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005211ac: movsx edx, byte ptr [ebp + ecx - 0x1f] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+r_ecx+0xffffffe1u));
    /* 005211b1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005211b3: jne 0x5211db */ if (!fZ) goto L_005211db;
L_005211b5:; BB(0x005211b5);
    /* 005211b5: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005211b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005211b9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005211bc: movsx edx, byte ptr [ebp + ecx - 0x20] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+r_ecx+0xffffffe0u));
    /* 005211c1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005211c2: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005211c5: call 0x521a30 */ r_esp -= 4; W32(r_esp, 0x5211cau); f_00521a30();
    /* 005211ca: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005211cd: mov byte ptr [ebp + eax - 0x1f], 1 */ W8((u32)(r_ebp+r_eax+0xffffffe1u), 0x1u);
    /* 005211d2: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005211d5: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005211d8: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
L_005211db:; BB(0x005211db);
    /* 005211db: jmp 0x521196 */ goto L_00521196;
L_005211dd:; BB(0x005211dd);
    /* 005211dd: jmp 0x521620 */ goto L_00521620;
L_005211e2:; BB(0x005211e2);
    /* 005211e2: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005211e4: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5211e9u); f_0062fbf0();
    /* 005211e9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005211ec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005211ee: je 0x5211f9 */ if (fZ) goto L_005211f9;
L_005211f0:; BB(0x005211f0);
    /* 005211f0: mov dword ptr [ebp - 0x48], 4 */ W32((u32)(r_ebp+0xffffffb8u), 0x4u);
    /* 005211f7: jmp 0x521200 */ goto L_00521200;
L_005211f9:; BB(0x005211f9);
    /* 005211f9: mov dword ptr [ebp - 0x48], 3 */ W32((u32)(r_ebp+0xffffffb8u), 0x3u);
L_00521200:; BB(0x00521200);
    /* 00521200: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00521203: imul edx, edx, 0x28 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x28u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00521206: mov eax, dword ptr [0x793374] */ r_eax = R32((u32)(0x793374u));
    /* 0052120b: mov byte ptr [eax + edx + 0xcb8], 1 */ W8((u32)(r_eax+r_edx+0xcb8u), 0x1u);
    /* 00521213: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00521216: imul ecx, ecx, 0x28 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x28u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00521219: mov edx, dword ptr [0x793374] */ r_edx = R32((u32)(0x793374u));
    /* 0052121f: mov byte ptr [edx + ecx + 0xcb0], 1 */ W8((u32)(r_edx+r_ecx+0xcb0u), 0x1u);
    /* 00521227: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00521229: push 0x9b */ { u32 v = 0x9bu; r_esp -= 4; W32(r_esp, v); }
    /* 0052122e: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 00521231: call 0x521a30 */ r_esp -= 4; W32(r_esp, 0x521236u); f_00521a30();
    /* 00521236: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_0052123d:; BB(0x0052123d);
    /* 0052123d: cmp dword ptr [ebp - 0x30], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00521241: jge 0x521281 */ if ((fS==fO)) goto L_00521281;
L_00521243:; BB(0x00521243);
    /* 00521243: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00521245: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x52124au); f_0062fbf0();
    /* 0052124a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052124d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00521250: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00521253: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00521256: and eax, 0x80000001 */ {  u32 a = r_eax; u32 b = 0x80000001u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fS = ((r >> 31) & 1); }
    /* 0052125b: jns 0x521262 */ if (!fS) goto L_00521262;
L_0052125d:; BB(0x0052125d);
    /* 0052125d: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0052125e: or eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00521261: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_00521262:; BB(0x00521262);
    /* 00521262: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00521264: je 0x52127f */ if (fZ) goto L_0052127f;
L_00521266:; BB(0x00521266);
    /* 00521266: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00521269: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052126a: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052126d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052126e: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 00521271: call 0x521a30 */ r_esp -= 4; W32(r_esp, 0x521276u); f_00521a30();
    /* 00521276: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00521279: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0052127c: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
L_0052127f:; BB(0x0052127f);
    /* 0052127f: jmp 0x52123d */ goto L_0052123d;
L_00521281:; BB(0x00521281);
    /* 00521281: jmp 0x521620 */ goto L_00521620;
L_00521286:; BB(0x00521286);
    /* 00521286: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00521288: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x52128du); f_0062fbf0();
    /* 0052128d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00521290: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00521292: je 0x52129d */ if (fZ) goto L_0052129d;
L_00521294:; BB(0x00521294);
    /* 00521294: mov dword ptr [ebp - 0x48], 4 */ W32((u32)(r_ebp+0xffffffb8u), 0x4u);
    /* 0052129b: jmp 0x5212a4 */ goto L_005212a4;
L_0052129d:; BB(0x0052129d);
    /* 0052129d: mov dword ptr [ebp - 0x48], 2 */ W32((u32)(r_ebp+0xffffffb8u), 0x2u);
L_005212a4:; BB(0x005212a4);
    /* 005212a4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005212a7: imul ecx, ecx, 0x28 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x28u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005212aa: mov edx, dword ptr [0x793374] */ r_edx = R32((u32)(0x793374u));
    /* 005212b0: mov byte ptr [edx + ecx + 0xcb8], 1 */ W8((u32)(r_edx+r_ecx+0xcb8u), 0x1u);
    /* 005212b8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005212bb: imul eax, eax, 0x28 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x28u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005212be: mov ecx, dword ptr [0x793374] */ r_ecx = R32((u32)(0x793374u));
    /* 005212c4: mov byte ptr [ecx + eax + 0xca8], 1 */ W8((u32)(r_ecx+r_eax+0xca8u), 0x1u);
    /* 005212cc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005212ce: push 0x98 */ { u32 v = 0x98u; r_esp -= 4; W32(r_esp, v); }
    /* 005212d3: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005212d6: call 0x521a30 */ r_esp -= 4; W32(r_esp, 0x5212dbu); f_00521a30();
    /* 005212db: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005212de: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005212df: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005212e1: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005212e4: call 0x521a30 */ r_esp -= 4; W32(r_esp, 0x5212e9u); f_00521a30();
    /* 005212e9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005212ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005212ed: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 005212ef: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005212f2: call 0x521a30 */ r_esp -= 4; W32(r_esp, 0x5212f7u); f_00521a30();
    /* 005212f7: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005212fa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005212fb: push 0x1a */ { u32 v = 0x1au; r_esp -= 4; W32(r_esp, v); }
    /* 005212fd: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 00521300: call 0x521a30 */ r_esp -= 4; W32(r_esp, 0x521305u); f_00521a30();
    /* 00521305: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00521308: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00521309: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 0052130b: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0052130e: call 0x521a30 */ r_esp -= 4; W32(r_esp, 0x521313u); f_00521a30();
    /* 00521313: jmp 0x521620 */ goto L_00521620;
L_00521318:; BB(0x00521318);
    /* 00521318: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0052131a: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x52131fu); f_0062fbf0();
    /* 0052131f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00521322: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00521324: je 0x52132f */ if (fZ) goto L_0052132f;
L_00521326:; BB(0x00521326);
    /* 00521326: mov dword ptr [ebp - 0x48], 4 */ W32((u32)(r_ebp+0xffffffb8u), 0x4u);
    /* 0052132d: jmp 0x521336 */ goto L_00521336;
L_0052132f:; BB(0x0052132f);
    /* 0052132f: mov dword ptr [ebp - 0x48], 2 */ W32((u32)(r_ebp+0xffffffb8u), 0x2u);
L_00521336:; BB(0x00521336);
    /* 00521336: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00521339: imul eax, eax, 0x28 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x28u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0052133c: mov ecx, dword ptr [0x793374] */ r_ecx = R32((u32)(0x793374u));
    /* 00521342: mov byte ptr [ecx + eax + 0xcb8], 1 */ W8((u32)(r_ecx+r_eax+0xcb8u), 0x1u);
    /* 0052134a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0052134d: imul edx, edx, 0x28 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x28u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00521350: mov eax, dword ptr [0x793374] */ r_eax = R32((u32)(0x793374u));
    /* 00521355: mov byte ptr [eax + edx + 0xca8], 1 */ W8((u32)(r_eax+r_edx+0xca8u), 0x1u);
    /* 0052135d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052135f: push 0x98 */ { u32 v = 0x98u; r_esp -= 4; W32(r_esp, v); }
    /* 00521364: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 00521367: call 0x521a30 */ r_esp -= 4; W32(r_esp, 0x52136cu); f_00521a30();
    /* 0052136c: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_00521373:; BB(0x00521373);
    /* 00521373: cmp dword ptr [ebp - 0x30], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00521377: jge 0x5213b8 */ if ((fS==fO)) goto L_005213b8;
L_00521379:; BB(0x00521379);
    /* 00521379: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 0052137b: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x521380u); f_0062fbf0();
    /* 00521380: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00521383: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00521386: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00521389: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052138c: and ecx, 0x80000001 */ {  u32 a = r_ecx; u32 b = 0x80000001u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fS = ((r >> 31) & 1); }
    /* 00521392: jns 0x521399 */ if (!fS) goto L_00521399;
L_00521394:; BB(0x00521394);
    /* 00521394: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00521395: or ecx, 0xfffffffe */ {  u32 a = r_ecx; u32 b = 0xfffffffeu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00521398: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_00521399:; BB(0x00521399);
    /* 00521399: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052139b: jne 0x5213b6 */ if (!fZ) goto L_005213b6;
L_0052139d:; BB(0x0052139d);
    /* 0052139d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005213a0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005213a1: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005213a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005213a5: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005213a8: call 0x521a30 */ r_esp -= 4; W32(r_esp, 0x5213adu); f_00521a30();
    /* 005213ad: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005213b0: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005213b3: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
L_005213b6:; BB(0x005213b6);
    /* 005213b6: jmp 0x521373 */ goto L_00521373;
L_005213b8:; BB(0x005213b8);
    /* 005213b8: jmp 0x521620 */ goto L_00521620;
L_005213bd:; BB(0x005213bd);
    /* 005213bd: mov dword ptr [ebp - 0x48], 4 */ W32((u32)(r_ebp+0xffffffb8u), 0x4u);
    /* 005213c4: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005213c7: imul edx, edx, 0x28 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x28u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005213ca: mov eax, dword ptr [0x793374] */ r_eax = R32((u32)(0x793374u));
    /* 005213cf: mov byte ptr [eax + edx + 0xcb8], 1 */ W8((u32)(r_eax+r_edx+0xcb8u), 0x1u);
    /* 005213d7: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 005213d9: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5213deu); f_0062fbf0();
    /* 005213de: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005213e1: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005213e4: jge 0x521402 */ if ((fS==fO)) goto L_00521402;
L_005213e6:; BB(0x005213e6);
    /* 005213e6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005213e9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005213ea: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005213ec: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005213ef: call 0x521a30 */ r_esp -= 4; W32(r_esp, 0x5213f4u); f_00521a30();
    /* 005213f4: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005213f7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005213f8: push 0x25 */ { u32 v = 0x25u; r_esp -= 4; W32(r_esp, v); }
    /* 005213fa: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005213fd: call 0x521a30 */ r_esp -= 4; W32(r_esp, 0x521402u); f_00521a30();
L_00521402:; BB(0x00521402);
    /* 00521402: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00521404: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x521409u); f_0062fbf0();
    /* 00521409: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052140c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052140e: je 0x521459 */ if (fZ) goto L_00521459;
L_00521410:; BB(0x00521410);
    /* 00521410: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00521412: push 0x97 */ { u32 v = 0x97u; r_esp -= 4; W32(r_esp, v); }
    /* 00521417: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0052141a: call 0x521a30 */ r_esp -= 4; W32(r_esp, 0x52141fu); f_00521a30();
    /* 0052141f: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_00521426:; BB(0x00521426);
    /* 00521426: cmp dword ptr [ebp - 0x30], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052142a: jge 0x521457 */ if ((fS==fO)) goto L_00521457;
L_0052142c:; BB(0x0052142c);
    /* 0052142c: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 0052142e: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x521433u); f_0062fbf0();
    /* 00521433: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00521436: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00521439: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0052143c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0052143f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00521440: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00521443: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00521444: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 00521447: call 0x521a30 */ r_esp -= 4; W32(r_esp, 0x52144cu); f_00521a30();
    /* 0052144c: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0052144f: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00521452: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 00521455: jmp 0x521426 */ goto L_00521426;
L_00521457:; BB(0x00521457);
    /* 00521457: jmp 0x5214a0 */ goto L_005214a0;
L_00521459:; BB(0x00521459);
    /* 00521459: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052145b: push 0x9c */ { u32 v = 0x9cu; r_esp -= 4; W32(r_esp, v); }
    /* 00521460: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 00521463: call 0x521a30 */ r_esp -= 4; W32(r_esp, 0x521468u); f_00521a30();
    /* 00521468: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_0052146f:; BB(0x0052146f);
    /* 0052146f: cmp dword ptr [ebp - 0x30], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00521473: jge 0x5214a0 */ if ((fS==fO)) goto L_005214a0;
L_00521475:; BB(0x00521475);
    /* 00521475: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 00521477: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x52147cu); f_0062fbf0();
    /* 0052147c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052147f: add eax, 0x13 */ {  u32 a = r_eax; u32 b = 0x13u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00521482: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00521485: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00521488: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00521489: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052148c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052148d: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 00521490: call 0x521a30 */ r_esp -= 4; W32(r_esp, 0x521495u); f_00521a30();
    /* 00521495: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00521498: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0052149b: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 0052149e: jmp 0x52146f */ goto L_0052146f;
L_005214a0:; BB(0x005214a0);
    /* 005214a0: jmp 0x521620 */ goto L_00521620;
L_005214a5:; BB(0x005214a5);
    /* 005214a5: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 005214ac: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005214af: imul eax, eax, 0x28 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x28u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005214b2: mov ecx, dword ptr [0x793374] */ r_ecx = R32((u32)(0x793374u));
    /* 005214b8: mov byte ptr [ecx + eax + 0xc98], 1 */ W8((u32)(r_ecx+r_eax+0xc98u), 0x1u);
    /* 005214c0: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005214c3: imul edx, edx, 0x28 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x28u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005214c6: mov eax, dword ptr [0x793374] */ r_eax = R32((u32)(0x793374u));
    /* 005214cb: mov byte ptr [eax + edx + 0xcb8], 1 */ W8((u32)(r_eax+r_edx+0xcb8u), 0x1u);
    /* 005214d3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005214d5: push 0x99 */ { u32 v = 0x99u; r_esp -= 4; W32(r_esp, v); }
    /* 005214da: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005214dd: call 0x521a30 */ r_esp -= 4; W32(r_esp, 0x5214e2u); f_00521a30();
    /* 005214e2: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 005214e4: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5214e9u); f_0062fbf0();
    /* 005214e9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005214ec: add eax, 0x6f */ {  u32 a = r_eax; u32 b = 0x6fu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005214ef: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005214f2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005214f4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005214f7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005214f8: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005214fb: call 0x521a30 */ r_esp -= 4; W32(r_esp, 0x521500u); f_00521a30();
    /* 00521500: jmp 0x521620 */ goto L_00521620;
L_00521505:; BB(0x00521505);
    /* 00521505: mov dword ptr [ebp - 0x48], 4 */ W32((u32)(r_ebp+0xffffffb8u), 0x4u);
    /* 0052150c: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0052150f: imul edx, edx, 0x28 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x28u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00521512: mov eax, dword ptr [0x793374] */ r_eax = R32((u32)(0x793374u));
    /* 00521517: mov byte ptr [eax + edx + 0xcb8], 1 */ W8((u32)(r_eax+r_edx+0xcb8u), 0x1u);
    /* 0052151f: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00521521: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x521526u); f_0062fbf0();
    /* 00521526: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00521529: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0052152c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052152e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00521531: add ecx, 0x94 */ {  u32 a = r_ecx; u32 b = 0x94u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00521537: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00521538: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0052153b: call 0x521a30 */ r_esp -= 4; W32(r_esp, 0x521540u); f_00521a30();
    /* 00521540: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_00521547:; BB(0x00521547);
    /* 00521547: cmp dword ptr [ebp - 0x30], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052154b: jge 0x521586 */ if ((fS==fO)) goto L_00521586;
L_0052154d:; BB(0x0052154d);
    /* 0052154d: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0052154f: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x521554u); f_0062fbf0();
    /* 00521554: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00521557: mov esi, eax */ r_esi = r_eax;
    /* 00521559: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0052155b: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x521560u); f_0062fbf0();
    /* 00521560: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00521563: imul eax, eax, 3 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00521566: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00521568: mov dword ptr [ebp - 0x4c], esi */ W32((u32)(r_ebp+0xffffffb4u), r_esi);
    /* 0052156b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0052156e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052156f: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00521572: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00521573: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 00521576: call 0x521a30 */ r_esp -= 4; W32(r_esp, 0x52157bu); f_00521a30();
    /* 0052157b: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0052157e: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00521581: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 00521584: jmp 0x521547 */ goto L_00521547;
L_00521586:; BB(0x00521586);
    /* 00521586: jmp 0x521620 */ goto L_00521620;
L_0052158b:; BB(0x0052158b);
    /* 0052158b: mov dword ptr [ebp - 0x48], 1 */ W32((u32)(r_ebp+0xffffffb8u), 0x1u);
    /* 00521592: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00521595: imul edx, edx, 0x28 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x28u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00521598: mov eax, dword ptr [0x793374] */ r_eax = R32((u32)(0x793374u));
    /* 0052159d: mov byte ptr [eax + edx + 0xca0], 1 */ W8((u32)(r_eax+r_edx+0xca0u), 0x1u);
    /* 005215a5: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005215a8: imul ecx, ecx, 0x28 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x28u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005215ab: mov edx, dword ptr [0x793374] */ r_edx = R32((u32)(0x793374u));
    /* 005215b1: mov byte ptr [edx + ecx + 0xcb8], 1 */ W8((u32)(r_edx+r_ecx+0xcb8u), 0x1u);
    /* 005215b9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005215bb: push 0x9a */ { u32 v = 0x9au; r_esp -= 4; W32(r_esp, v); }
    /* 005215c0: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005215c3: call 0x521a30 */ r_esp -= 4; W32(r_esp, 0x5215c8u); f_00521a30();
    /* 005215c8: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005215cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005215cc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005215ce: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005215d1: call 0x521a30 */ r_esp -= 4; W32(r_esp, 0x5215d6u); f_00521a30();
    /* 005215d6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005215d9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005215da: push 0x25 */ { u32 v = 0x25u; r_esp -= 4; W32(r_esp, v); }
    /* 005215dc: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005215df: call 0x521a30 */ r_esp -= 4; W32(r_esp, 0x5215e4u); f_00521a30();
    /* 005215e4: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005215e6: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5215ebu); f_0062fbf0();
    /* 005215eb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005215ee: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005215f1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005215f3: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005215f6: add edx, 0x94 */ {  u32 a = r_edx; u32 b = 0x94u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005215fc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005215fd: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 00521600: call 0x521a30 */ r_esp -= 4; W32(r_esp, 0x521605u); f_00521a30();
    /* 00521605: jmp 0x521620 */ goto L_00521620;
L_00521607:; BB(0x00521607);
    /* 00521607: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0052160a: call 0x521a10 */ r_esp -= 4; W32(r_esp, 0x52160fu); f_00521a10();
    /* 0052160f: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00521612: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00521614: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00521617: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00521618: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0052161b: call 0x521a30 */ r_esp -= 4; W32(r_esp, 0x521620u); f_00521a30();
L_00521620:; BB(0x00521620);
    /* 00521620: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00521621: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00521624: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00521626: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x52162bu); f_00686d72();
    /* 0052162b: mov esp, ebp */ r_esp = r_ebp;
    /* 0052162d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052162e: ret 4 */ FN_RET(0x00520ef0); r_esp += 8; return;
}

