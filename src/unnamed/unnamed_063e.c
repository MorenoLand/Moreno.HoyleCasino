#include "protos.h"

void f_0063e000(void) /* sub_63E000 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0063e000);
    /* 0063e000: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063e001: mov ebp, esp */ r_ebp = r_esp;
    /* 0063e003: sub esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063e009: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0063e00e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0063e010: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0063e013: mov dword ptr [ebp - 0x80], ecx */ W32((u32)(r_ebp+0xffffff80u), r_ecx);
    /* 0063e016: mov eax, dword ptr [ebp - 0x80] */ r_eax = R32((u32)(r_ebp+0xffffff80u));
    /* 0063e019: mov ecx, dword ptr [eax + 0x1c4] */ r_ecx = R32((u32)(r_eax+0x1c4u));
    /* 0063e01f: mov edx, dword ptr [ebp - 0x80] */ r_edx = R32((u32)(r_ebp+0xffffff80u));
    /* 0063e022: mov eax, dword ptr [edx + 0x1bc] */ r_eax = R32((u32)(r_edx+0x1bcu));
    /* 0063e028: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 0063e02b: mov dword ptr [ebp - 0x78], ecx */ W32((u32)(r_ebp+0xffffff88u), r_ecx);
    /* 0063e02e: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 0063e031: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x63e036u); f_0063aac0();
    /* 0063e036: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0063e038: mov dword ptr [ebp - 0x74], edx */ W32((u32)(r_ebp+0xffffff8cu), r_edx);
    /* 0063e03b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0063e03d: cmp dword ptr [ebp - 0x74], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffff8cu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063e041: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0063e044: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0063e047: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063e049: je 0x63e075 */ if (fZ) goto L_0063e075;
L_0063e04b:; BB(0x0063e04b);
    /* 0063e04b: mov edx, dword ptr [ebp - 0x80] */ r_edx = R32((u32)(r_ebp+0xffffff80u));
    /* 0063e04e: mov eax, dword ptr [edx + 0x1c4] */ r_eax = R32((u32)(r_edx+0x1c4u));
    /* 0063e054: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 0063e057: mov edx, dword ptr [ecx + 0x1bc] */ r_edx = R32((u32)(r_ecx+0x1bcu));
    /* 0063e05d: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 0063e060: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0063e063: mov dword ptr [ebp - 0x7c], ecx */ W32((u32)(r_ebp+0xffffff84u), r_ecx);
    /* 0063e066: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 0063e069: cmp edx, dword ptr [ebp + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063e06c: jne 0x63e075 */ if (!fZ) goto L_0063e075;
L_0063e06e:; BB(0x0063e06e);
    /* 0063e06e: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0063e070: jmp 0x63e0fc */ goto L_0063e0fc;
L_0063e075:; BB(0x0063e075);
    /* 0063e075: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0063e07a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0063e07c: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063e082: mov eax, dword ptr [edx + 0x160] */ r_eax = R32((u32)(r_edx+0x160u));
    /* 0063e088: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63e08au); call_ind(t); }
    /* 0063e08a: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0063e08d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063e08f: jne 0x63e0fa */ if (!fZ) goto L_0063e0fa;
L_0063e091:; BB(0x0063e091);
    /* 0063e091: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0063e094: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063e095: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 0063e098: call 0x63df70 */ r_esp -= 4; W32(r_esp, 0x63e09du); f_0063df70();
    /* 0063e09d: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0063e0a0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063e0a2: je 0x63e0fa */ if (fZ) goto L_0063e0fa;
L_0063e0a4:; BB(0x0063e0a4);
    /* 0063e0a4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0063e0a7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063e0a8: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0063e0ae: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0063e0b0: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063e0b6: mov edx, dword ptr [eax + 0x3b8] */ r_edx = R32((u32)(r_eax+0x3b8u));
    /* 0063e0bc: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x63e0beu); call_ind(t); }
    /* 0063e0be: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063e0bf: push 0x6dbb68 */ { u32 v = 0x6dbb68u; r_esp -= 4; W32(r_esp, v); }
    /* 0063e0c4: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x63e0c9u); f_00630f40();
    /* 0063e0c9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063e0cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063e0cd: lea eax, [ebp - 0x70] */ r_eax = (u32)(r_ebp+0xffffff90u);
    /* 0063e0d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063e0d1: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x63e0d7u); call_ind(t); }
    /* 0063e0d7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063e0da: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063e0dc: push 0x6dbb48 */ { u32 v = 0x6dbb48u; r_esp -= 4; W32(r_esp, v); }
    /* 0063e0e1: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x63e0e6u); f_00630f40();
    /* 0063e0e6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063e0e9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063e0ea: lea ecx, [ebp - 0x70] */ r_ecx = (u32)(r_ebp+0xffffff90u);
    /* 0063e0ed: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063e0ee: call 0x62ff10 */ r_esp -= 4; W32(r_esp, 0x63e0f3u); f_0062ff10();
    /* 0063e0f3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063e0f6: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0063e0f8: jmp 0x63e0fc */ goto L_0063e0fc;
L_0063e0fa:; BB(0x0063e0fa);
    /* 0063e0fa: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_0063e0fc:; BB(0x0063e0fc);
    /* 0063e0fc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063e0ff: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0063e101: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x63e106u); f_00686d72();
    /* 0063e106: mov esp, ebp */ r_esp = r_ebp;
    /* 0063e108: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063e109: ret 4 */ FN_RET(0x0063e000); r_esp += 8; return;
}

void f_0063e110(void) /* sub_63E110 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0063e110);
    /* 0063e110: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063e111: mov ebp, esp */ r_ebp = r_esp;
    /* 0063e113: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063e116: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0063e119: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 0063e11b: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0063e11e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063e11f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063e121: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0063e123: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0063e126: call 0x5fb480 */ r_esp -= 4; W32(r_esp, 0x63e12bu); f_005fb480();
    /* 0063e12b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063e12c: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0063e132: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0063e134: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0063e13a: mov eax, dword ptr [edx + 0x108] */ r_eax = R32((u32)(r_edx+0x108u));
    /* 0063e140: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63e142u); call_ind(t); }
    /* 0063e142: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0063e149: jmp 0x63e154 */ goto L_0063e154;
L_0063e14b:; BB(0x0063e14b);
    /* 0063e14b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063e14e: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0063e151: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0063e154:; BB(0x0063e154);
    /* 0063e154: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0063e15a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0063e15c: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063e162: mov edx, dword ptr [eax + 0x10c] */ r_edx = R32((u32)(r_eax+0x10cu));
    /* 0063e168: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x63e16au); call_ind(t); }
    /* 0063e16a: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063e16d: jge 0x63e198 */ if ((fS==fO)) goto L_0063e198;
L_0063e16f:; BB(0x0063e16f);
    /* 0063e16f: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0063e172: mov ecx, dword ptr [eax + 0x1bc] */ r_ecx = R32((u32)(r_eax+0x1bcu));
    /* 0063e178: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063e17b: mov ecx, dword ptr [ecx + edx*4] */ r_ecx = R32((u32)(r_ecx+r_edx*4));
    /* 0063e17e: call 0x63b2d0 */ r_esp -= 4; W32(r_esp, 0x63e183u); f_0063b2d0();
    /* 0063e183: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0063e188: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 0063e18b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063e18e: mov ecx, dword ptr [ecx + edx*4] */ r_ecx = R32((u32)(r_ecx+r_edx*4));
    /* 0063e191: call 0x63b2d0 */ r_esp -= 4; W32(r_esp, 0x63e196u); f_0063b2d0();
    /* 0063e196: jmp 0x63e14b */ goto L_0063e14b;
L_0063e198:; BB(0x0063e198);
    /* 0063e198: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0063e19f: jmp 0x63e1aa */ goto L_0063e1aa;
L_0063e1a1:; BB(0x0063e1a1);
    /* 0063e1a1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063e1a4: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0063e1a7: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0063e1aa:; BB(0x0063e1aa);
    /* 0063e1aa: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063e1b0: call 0x5f3bf0 */ r_esp -= 4; W32(r_esp, 0x63e1b5u); f_005f3bf0();
    /* 0063e1b5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063e1b6: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063e1bc: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0063e1be: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063e1c4: mov eax, dword ptr [edx + 0x104] */ r_eax = R32((u32)(r_edx+0x104u));
    /* 0063e1ca: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63e1ccu); call_ind(t); }
    /* 0063e1cc: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063e1cf: jge 0x63e268 */ if ((fS==fO)) goto L_0063e268;
L_0063e1d5:; BB(0x0063e1d5);
    /* 0063e1d5: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0063e1d8: mov edx, dword ptr [ecx + 0x1bc] */ r_edx = R32((u32)(r_ecx+0x1bcu));
    /* 0063e1de: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063e1e1: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 0063e1e4: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0063e1e7: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063e1ea: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x63e1efu); f_0063aac0();
    /* 0063e1ef: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0063e1f1: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0063e1f4: cmp dword ptr [ebp - 8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063e1f8: je 0x63e216 */ if (fZ) goto L_0063e216;
L_0063e1fa:; BB(0x0063e1fa);
    /* 0063e1fa: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063e1fd: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x63e202u); f_0063aac0();
    /* 0063e202: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0063e204: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0063e207: cmp dword ptr [ebp - 0xc], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063e20b: je 0x63e216 */ if (fZ) goto L_0063e216;
L_0063e20d:; BB(0x0063e20d);
    /* 0063e20d: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0063e214: jmp 0x63e21d */ goto L_0063e21d;
L_0063e216:; BB(0x0063e216);
    /* 0063e216: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
L_0063e21d:; BB(0x0063e21d);
    /* 0063e21d: movzx ecx, byte ptr [ebp - 0x28] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffd8u));
    /* 0063e221: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063e223: je 0x63e239 */ if (fZ) goto L_0063e239;
L_0063e225:; BB(0x0063e225);
    /* 0063e225: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0063e228: mov eax, dword ptr [edx + 0x1bc] */ r_eax = R32((u32)(r_edx+0x1bcu));
    /* 0063e22e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063e231: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 0063e234: call 0x63b0a0 */ r_esp -= 4; W32(r_esp, 0x63e239u); f_0063b0a0();
L_0063e239:; BB(0x0063e239);
    /* 0063e239: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0063e23c: mov eax, dword ptr [edx + 0x1bc] */ r_eax = R32((u32)(r_edx+0x1bcu));
    /* 0063e242: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063e245: mov edx, dword ptr [eax + ecx*4] */ r_edx = R32((u32)(r_eax+r_ecx*4));
    /* 0063e248: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063e249: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063e24c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063e24d: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0063e253: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0063e255: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0063e25b: mov eax, dword ptr [edx + 0x150] */ r_eax = R32((u32)(r_edx+0x150u));
    /* 0063e261: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63e263u); call_ind(t); }
    /* 0063e263: jmp 0x63e1a1 */ goto L_0063e1a1;
L_0063e268:; BB(0x0063e268);
    /* 0063e268: jmp 0x63e273 */ goto L_0063e273;
L_0063e26a:; BB(0x0063e26a);
    /* 0063e26a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063e26d: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0063e270: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0063e273:; BB(0x0063e273);
    /* 0063e273: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0063e279: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0063e27b: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063e281: mov edx, dword ptr [eax + 0x10c] */ r_edx = R32((u32)(r_eax+0x10cu));
    /* 0063e287: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x63e289u); call_ind(t); }
    /* 0063e289: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063e28c: jge 0x63e2ca */ if ((fS==fO)) goto L_0063e2ca;
L_0063e28e:; BB(0x0063e28e);
    /* 0063e28e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063e290: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063e293: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063e294: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063e29a: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 0063e29d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063e2a0: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 0063e2a3: call 0x63a3e0 */ r_esp -= 4; W32(r_esp, 0x63e2a8u); f_0063a3e0();
    /* 0063e2a8: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063e2ae: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 0063e2b1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063e2b4: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 0063e2b7: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0063e2ba: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063e2bd: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x63e2c2u); f_0063aac0();
    /* 0063e2c2: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 0063e2c8: jmp 0x63e26a */ goto L_0063e26a;
L_0063e2ca:; BB(0x0063e2ca);
    /* 0063e2ca: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063e2d0: call 0x636610 */ r_esp -= 4; W32(r_esp, 0x63e2d5u); f_00636610();
    /* 0063e2d5: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0063e2d8: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063e2de: call 0x5f3bf0 */ r_esp -= 4; W32(r_esp, 0x63e2e3u); f_005f3bf0();
    /* 0063e2e3: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0063e2e6: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063e2ec: call 0x6375b0 */ r_esp -= 4; W32(r_esp, 0x63e2f1u); f_006375b0();
    /* 0063e2f1: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0063e2f4: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0063e2f7: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x63e2fcu); f_0063aac0();
    /* 0063e2fc: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0063e2ff: mov cl, byte ptr [ebp - 0x20] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffe0u))) & 0xffu);
    /* 0063e302: mov byte ptr [eax + edx + 0x5d], cl */ W8((u32)(r_eax+r_edx+0x5du), (u8)r_ecx);
    /* 0063e306: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 0063e308: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0063e30b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063e30c: mov eax, dword ptr [0x162ee80] */ r_eax = R32((u32)(0x162ee80u));
    /* 0063e311: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0063e313: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0063e319: mov eax, dword ptr [edx + 0xe0] */ r_eax = R32((u32)(r_edx+0xe0u));
    /* 0063e31f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63e321u); call_ind(t); }
    /* 0063e321: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063e323: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0063e329: call 0x64fba0 */ r_esp -= 4; W32(r_esp, 0x63e32eu); f_0064fba0();
    /* 0063e32e: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063e334: call 0x637610 */ r_esp -= 4; W32(r_esp, 0x63e339u); f_00637610();
    /* 0063e339: mov esp, ebp */ r_esp = r_ebp;
    /* 0063e33b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063e33c: ret  */ FN_RET(0x0063e110); r_esp += 4; return;
}

void f_0063e340(void) /* sub_63E340 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0063e340);
    /* 0063e340: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063e341: mov ebp, esp */ r_ebp = r_esp;
    /* 0063e343: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063e346: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0063e349: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0063e350: jmp 0x63e35b */ goto L_0063e35b;
L_0063e352:; BB(0x0063e352);
    /* 0063e352: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063e355: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0063e358: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0063e35b:; BB(0x0063e35b);
    /* 0063e35b: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063e361: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0063e363: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063e369: mov eax, dword ptr [edx + 0x10c] */ r_eax = R32((u32)(r_edx+0x10cu));
    /* 0063e36f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63e371u); call_ind(t); }
    /* 0063e371: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063e374: jge 0x63e39e */ if ((fS==fO)) goto L_0063e39e;
L_0063e376:; BB(0x0063e376);
    /* 0063e376: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0063e379: mov edx, dword ptr [ecx + 0x1bc] */ r_edx = R32((u32)(r_ecx+0x1bcu));
    /* 0063e37f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063e382: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 0063e385: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063e386: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 0063e38c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0063e38e: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0063e394: mov edx, dword ptr [eax + 0x15c] */ r_edx = R32((u32)(r_eax+0x15cu));
    /* 0063e39a: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x63e39cu); call_ind(t); }
    /* 0063e39c: jmp 0x63e352 */ goto L_0063e352;
L_0063e39e:; BB(0x0063e39e);
    /* 0063e39e: mov esp, ebp */ r_esp = r_ebp;
    /* 0063e3a0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063e3a1: ret  */ FN_RET(0x0063e340); r_esp += 4; return;
}

void f_0063e3b0(void) /* sub_63E3B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0063e3b0);
    /* 0063e3b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063e3b1: mov ebp, esp */ r_ebp = r_esp;
    /* 0063e3b3: sub esp, 0x68 */ {  u32 a = r_esp; u32 b = 0x68u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063e3b6: mov dword ptr [ebp - 0x60], ecx */ W32((u32)(r_ebp+0xffffffa0u), r_ecx);
    /* 0063e3b9: movsx eax, byte ptr [ebp + 8] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0x8u));
    /* 0063e3bd: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063e3c0: je 0x63e6bd */ if (fZ) goto L_0063e6bd;
L_0063e3c6:; BB(0x0063e3c6);
    /* 0063e3c6: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0063e3c9: mov edx, dword ptr [ecx + 0x1c4] */ r_edx = R32((u32)(r_ecx+0x1c4u));
    /* 0063e3cf: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 0063e3d2: mov ecx, dword ptr [eax + 0x1bc] */ r_ecx = R32((u32)(r_eax+0x1bcu));
    /* 0063e3d8: mov edx, dword ptr [ecx + edx*4] */ r_edx = R32((u32)(r_ecx+r_edx*4));
    /* 0063e3db: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0063e3de: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0063e3e1: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x63e3e6u); f_0063aac0();
    /* 0063e3e6: movsx ecx, byte ptr [ebp + 8] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebp+0x8u));
    /* 0063e3ea: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 0063e3ec: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0063e3ef: mov eax, dword ptr [edx + 0x1c4] */ r_eax = R32((u32)(r_edx+0x1c4u));
    /* 0063e3f5: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0063e3f8: mov edx, dword ptr [ecx + 0x1bc] */ r_edx = R32((u32)(r_ecx+0x1bcu));
    /* 0063e3fe: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 0063e401: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0063e404: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063e407: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x63e40cu); f_0063aac0();
    /* 0063e40c: movsx ecx, byte ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebp+0xcu));
    /* 0063e410: mov dword ptr [eax + 0x54], ecx */ W32((u32)(r_eax+0x54u), r_ecx);
    /* 0063e413: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0063e416: mov eax, dword ptr [edx + 0x1c4] */ r_eax = R32((u32)(r_edx+0x1c4u));
    /* 0063e41c: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0063e41f: mov edx, dword ptr [ecx + 0x1bc] */ r_edx = R32((u32)(r_ecx+0x1bcu));
    /* 0063e425: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 0063e428: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0063e42b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063e42e: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x63e433u); f_0063aac0();
    /* 0063e433: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0063e435: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0063e438: cmp dword ptr [ebp - 0x14], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063e43c: jne 0x63e471 */ if (!fZ) goto L_0063e471;
L_0063e43e:; BB(0x0063e43e);
    /* 0063e43e: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0063e441: mov eax, dword ptr [edx + 0x1c4] */ r_eax = R32((u32)(r_edx+0x1c4u));
    /* 0063e447: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0063e44a: mov edx, dword ptr [ecx + 0x1bc] */ r_edx = R32((u32)(r_ecx+0x1bcu));
    /* 0063e450: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 0063e453: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0063e456: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0063e45b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0063e45e: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x63e463u); f_0063aac0();
    /* 0063e463: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0063e466: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063e467: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x63e46cu); f_00686d8e();
    /* 0063e46c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063e46f: jmp 0x63e4a1 */ goto L_0063e4a1;
L_0063e471:; BB(0x0063e471);
    /* 0063e471: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0063e474: mov edx, dword ptr [ecx + 0x1c4] */ r_edx = R32((u32)(r_ecx+0x1c4u));
    /* 0063e47a: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 0063e47d: mov ecx, dword ptr [eax + 0x1bc] */ r_ecx = R32((u32)(r_eax+0x1bcu));
    /* 0063e483: mov edx, dword ptr [ecx + edx*4] */ r_edx = R32((u32)(r_ecx+r_edx*4));
    /* 0063e486: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0063e489: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0063e48c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063e48d: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0063e490: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x63e495u); f_0063aac0();
    /* 0063e495: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0063e498: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063e499: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x63e49eu); f_00686d8e();
    /* 0063e49e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0063e4a1:; BB(0x0063e4a1);
    /* 0063e4a1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0063e4a8: jmp 0x63e4b3 */ goto L_0063e4b3;
L_0063e4aa:; BB(0x0063e4aa);
    /* 0063e4aa: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063e4ad: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0063e4b0: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0063e4b3:; BB(0x0063e4b3);
    /* 0063e4b3: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0063e4b9: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0063e4bb: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063e4c1: mov edx, dword ptr [eax + 0x10c] */ r_edx = R32((u32)(r_eax+0x10cu));
    /* 0063e4c7: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x63e4c9u); call_ind(t); }
    /* 0063e4c9: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063e4cc: jge 0x63e6b0 */ if ((fS==fO)) goto L_0063e6b0;
L_0063e4d2:; BB(0x0063e4d2);
    /* 0063e4d2: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 0063e4d5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063e4d8: cmp ecx, dword ptr [eax + 0x1c4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x1c4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063e4de: jne 0x63e4e2 */ if (!fZ) goto L_0063e4e2;
L_0063e4e0:; BB(0x0063e4e0);
    /* 0063e4e0: jmp 0x63e4aa */ goto L_0063e4aa;
L_0063e4e2:; BB(0x0063e4e2);
    /* 0063e4e2: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0063e4e5: mov eax, dword ptr [edx + 0x1c4] */ r_eax = R32((u32)(r_edx+0x1c4u));
    /* 0063e4eb: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0063e4ee: mov edx, dword ptr [ecx + 0x1bc] */ r_edx = R32((u32)(r_ecx+0x1bcu));
    /* 0063e4f4: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 0063e4f7: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0063e4fa: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0063e4fd: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x63e502u); f_0063aac0();
    /* 0063e502: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0063e504: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0063e507: cmp dword ptr [ebp - 0x20], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063e50b: je 0x63e529 */ if (fZ) goto L_0063e529;
L_0063e50d:; BB(0x0063e50d);
    /* 0063e50d: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0063e510: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x63e515u); f_0063aac0();
    /* 0063e515: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0063e517: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 0063e51a: cmp dword ptr [ebp - 0x24], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063e51e: je 0x63e529 */ if (fZ) goto L_0063e529;
L_0063e520:; BB(0x0063e520);
    /* 0063e520: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
    /* 0063e527: jmp 0x63e530 */ goto L_0063e530;
L_0063e529:; BB(0x0063e529);
    /* 0063e529: mov dword ptr [ebp - 0x64], 1 */ W32((u32)(r_ebp+0xffffff9cu), 0x1u);
L_0063e530:; BB(0x0063e530);
    /* 0063e530: movzx eax, byte ptr [ebp - 0x64] */ r_eax = (u32)R8((u32)(r_ebp+0xffffff9cu));
    /* 0063e534: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063e536: je 0x63e6ab */ if (fZ) goto L_0063e6ab;
L_0063e53c:; BB(0x0063e53c);
    /* 0063e53c: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0063e53f: mov edx, dword ptr [ecx + 0x1bc] */ r_edx = R32((u32)(r_ecx+0x1bcu));
    /* 0063e545: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063e548: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 0063e54b: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 0063e54e: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0063e551: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x63e556u); f_0063aac0();
    /* 0063e556: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0063e558: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 0063e55b: cmp dword ptr [ebp - 0x2c], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063e55f: je 0x63e57d */ if (fZ) goto L_0063e57d;
L_0063e561:; BB(0x0063e561);
    /* 0063e561: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0063e564: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x63e569u); f_0063aac0();
    /* 0063e569: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0063e56b: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0063e56e: cmp dword ptr [ebp - 0x30], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063e572: je 0x63e57d */ if (fZ) goto L_0063e57d;
L_0063e574:; BB(0x0063e574);
    /* 0063e574: mov dword ptr [ebp - 0x68], 0 */ W32((u32)(r_ebp+0xffffff98u), 0x0u);
    /* 0063e57b: jmp 0x63e584 */ goto L_0063e584;
L_0063e57d:; BB(0x0063e57d);
    /* 0063e57d: mov dword ptr [ebp - 0x68], 1 */ W32((u32)(r_ebp+0xffffff98u), 0x1u);
L_0063e584:; BB(0x0063e584);
    /* 0063e584: movzx ecx, byte ptr [ebp - 0x68] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffff98u));
    /* 0063e588: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063e58a: je 0x63e6ab */ if (fZ) goto L_0063e6ab;
L_0063e590:; BB(0x0063e590);
    /* 0063e590: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0063e593: mov eax, dword ptr [edx + 0x1bc] */ r_eax = R32((u32)(r_edx+0x1bcu));
    /* 0063e599: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063e59c: mov edx, dword ptr [eax + ecx*4] */ r_edx = R32((u32)(r_eax+r_ecx*4));
    /* 0063e59f: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 0063e5a2: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0063e5a5: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x63e5aau); f_0063aac0();
    /* 0063e5aa: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0063e5ad: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0063e5b0: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 0063e5b3: mov ecx, dword ptr [eax + 0x1c4] */ r_ecx = R32((u32)(r_eax+0x1c4u));
    /* 0063e5b9: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0063e5bc: mov eax, dword ptr [edx + 0x1bc] */ r_eax = R32((u32)(r_edx+0x1bcu));
    /* 0063e5c2: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 0063e5c5: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 0063e5c8: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063e5cb: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x63e5d0u); f_0063aac0();
    /* 0063e5d0: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0063e5d3: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0063e5d6: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0063e5d9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063e5da: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 0063e5dd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063e5de: call 0x686ec0 */ r_esp -= 4; W32(r_esp, 0x63e5e3u); f_00686ec0();
    /* 0063e5e3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063e5e6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063e5e8: jne 0x63e6ab */ if (!fZ) goto L_0063e6ab;
L_0063e5ee:; BB(0x0063e5ee);
    /* 0063e5ee: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0063e5f1: mov edx, dword ptr [ecx + 0x1bc] */ r_edx = R32((u32)(r_ecx+0x1bcu));
    /* 0063e5f7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063e5fa: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 0063e5fd: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 0063e600: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0063e603: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x63e608u); f_0063aac0();
    /* 0063e608: movsx edx, byte ptr [ebp + 8] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0x8u));
    /* 0063e60c: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 0063e60e: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 0063e611: mov ecx, dword ptr [eax + 0x1bc] */ r_ecx = R32((u32)(r_eax+0x1bcu));
    /* 0063e617: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063e61a: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 0063e61d: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0063e620: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0063e623: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x63e628u); f_0063aac0();
    /* 0063e628: movsx ecx, byte ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebp+0xcu));
    /* 0063e62c: mov dword ptr [eax + 0x54], ecx */ W32((u32)(r_eax+0x54u), r_ecx);
    /* 0063e62f: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0063e632: mov eax, dword ptr [edx + 0x1bc] */ r_eax = R32((u32)(r_edx+0x1bcu));
    /* 0063e638: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063e63b: mov edx, dword ptr [eax + ecx*4] */ r_edx = R32((u32)(r_eax+r_ecx*4));
    /* 0063e63e: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 0063e641: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0063e644: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x63e649u); f_0063aac0();
    /* 0063e649: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0063e64b: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 0063e64e: cmp dword ptr [ebp - 0x54], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffacu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063e652: jne 0x63e681 */ if (!fZ) goto L_0063e681;
L_0063e654:; BB(0x0063e654);
    /* 0063e654: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0063e657: mov edx, dword ptr [ecx + 0x1bc] */ r_edx = R32((u32)(r_ecx+0x1bcu));
    /* 0063e65d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063e660: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 0063e663: mov dword ptr [ebp - 0x58], ecx */ W32((u32)(r_ebp+0xffffffa8u), r_ecx);
    /* 0063e666: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0063e66b: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0063e66e: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x63e673u); f_0063aac0();
    /* 0063e673: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0063e676: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063e677: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x63e67cu); f_00686d8e();
    /* 0063e67c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063e67f: jmp 0x63e6ab */ goto L_0063e6ab;
L_0063e681:; BB(0x0063e681);
    /* 0063e681: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0063e684: mov eax, dword ptr [edx + 0x1bc] */ r_eax = R32((u32)(r_edx+0x1bcu));
    /* 0063e68a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063e68d: mov edx, dword ptr [eax + ecx*4] */ r_edx = R32((u32)(r_eax+r_ecx*4));
    /* 0063e690: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
    /* 0063e693: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0063e696: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063e697: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0063e69a: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x63e69fu); f_0063aac0();
    /* 0063e69f: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0063e6a2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063e6a3: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x63e6a8u); f_00686d8e();
    /* 0063e6a8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0063e6ab:; BB(0x0063e6ab);
    /* 0063e6ab: jmp 0x63e4aa */ goto L_0063e4aa;
L_0063e6b0:; BB(0x0063e6b0);
    /* 0063e6b0: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0063e6b3: mov dword ptr [ecx + 0x1c4], 0xffffffff */ W32((u32)(r_ecx+0x1c4u), 0xffffffffu);
L_0063e6bd:; BB(0x0063e6bd);
    /* 0063e6bd: cmp dword ptr [0x1630690], 0 */ {  u32 a = R32((u32)(0x1630690u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063e6c4: je 0x63e6db */ if (fZ) goto L_0063e6db;
L_0063e6c6:; BB(0x0063e6c6);
    /* 0063e6c6: mov ecx, dword ptr [0x1630690] */ r_ecx = R32((u32)(0x1630690u));
    /* 0063e6cc: call 0x5f8990 */ r_esp -= 4; W32(r_esp, 0x63e6d1u); f_005f8990();
    /* 0063e6d1: mov dword ptr [0x1630690], 0 */ W32((u32)(0x1630690u), 0x0u);
L_0063e6db:; BB(0x0063e6db);
    /* 0063e6db: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0063e6de: call 0x63c620 */ r_esp -= 4; W32(r_esp, 0x63e6e3u); f_0063c620();
    /* 0063e6e3: mov esp, ebp */ r_esp = r_ebp;
    /* 0063e6e5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063e6e6: ret 0xc */ FN_RET(0x0063e3b0); r_esp += 16; return;
}

void f_0063e760(void) /* sub_63E760 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0063e760);
    /* 0063e760: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063e761: mov ebp, esp */ r_ebp = r_esp;
    /* 0063e763: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063e766: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0063e769: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063e76b: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0063e76d: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0063e770: call 0x5fb480 */ r_esp -= 4; W32(r_esp, 0x63e775u); f_005fb480();
    /* 0063e775: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0063e778: cmp dword ptr [ebp + 0x24], -1 */ {  u32 a = R32((u32)(r_ebp+0x24u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063e77c: jne 0x63e786 */ if (!fZ) goto L_0063e786;
L_0063e77e:; BB(0x0063e77e);
    /* 0063e77e: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 0063e781: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0063e784: jmp 0x63e794 */ goto L_0063e794;
L_0063e786:; BB(0x0063e786);
    /* 0063e786: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 0063e789: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0063e78c: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0063e78d: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0063e78f: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0063e791: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0063e794:; BB(0x0063e794);
    /* 0063e794: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063e796: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063e79b: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063e7a0: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063e7a5: push 0xa1 */ { u32 v = 0xa1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063e7aa: push 0x7c */ { u32 v = 0x7cu; r_esp -= 4; W32(r_esp, v); }
    /* 0063e7ac: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 0063e7ae: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0063e7b0: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0063e7b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063e7b4: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0063e7b7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063e7b8: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0063e7bb: imul eax, eax, 0x19 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x19u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0063e7be: add eax, 0x12 */ {  u32 a = r_eax; u32 b = 0x12u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0063e7c1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063e7c2: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 0063e7c5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063e7c6: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 0063e7c8: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0063e7cb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063e7cc: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0063e7cf: imul eax, eax, 0x64 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x64u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0063e7d2: add eax, 0x32 */ {  u32 a = r_eax; u32 b = 0x32u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0063e7d5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063e7d6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063e7d8: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0063e7db: call 0x5fa790 */ r_esp -= 4; W32(r_esp, 0x63e7e0u); f_005fa790();
    /* 0063e7e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063e7e1: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063e7e4: call 0x5ff5a0 */ r_esp -= 4; W32(r_esp, 0x63e7e9u); f_005ff5a0();
    /* 0063e7e9: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0063e7f0: jmp 0x63e7fb */ goto L_0063e7fb;
L_0063e7f2:; BB(0x0063e7f2);
    /* 0063e7f2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063e7f5: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0063e7f8: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_0063e7fb:; BB(0x0063e7fb);
    /* 0063e7fb: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063e7fe: cmp edx, dword ptr [ebp + 0x1c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x1cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063e801: jge 0x63e8b2 */ if ((fS==fO)) goto L_0063e8b2;
L_0063e807:; BB(0x0063e807);
    /* 0063e807: cmp dword ptr [ebp + 0x24], -1 */ {  u32 a = R32((u32)(r_ebp+0x24u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063e80b: jne 0x63e828 */ if (!fZ) goto L_0063e828;
L_0063e80d:; BB(0x0063e80d);
    /* 0063e80d: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0063e810: add eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0063e813: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0063e816: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063e819: imul ecx, ecx, 0x19 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x19u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0063e81c: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 0063e81f: lea eax, [edx + ecx + 0xf] */ r_eax = (u32)(r_edx+r_ecx+0xfu);
    /* 0063e823: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0063e826: jmp 0x63e85b */ goto L_0063e85b;
L_0063e828:; BB(0x0063e828);
    /* 0063e828: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063e82b: cmp ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063e82e: jge 0x63e83b */ if ((fS==fO)) goto L_0063e83b;
L_0063e830:; BB(0x0063e830);
    /* 0063e830: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0063e833: add edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0063e836: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0063e839: jmp 0x63e841 */ goto L_0063e841;
L_0063e83b:; BB(0x0063e83b);
    /* 0063e83b: mov eax, dword ptr [ebp + 0x24] */ r_eax = R32((u32)(r_ebp+0x24u));
    /* 0063e83e: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
L_0063e841:; BB(0x0063e841);
    /* 0063e841: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0063e844: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0063e847: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063e84a: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0063e84b: idiv dword ptr [ebp - 8] */ { i32 d = (i32)R32((u32)(r_ebp+0xfffffff8u)); if (!d) UNSUP(0x0063e84b, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0063e84b, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0063e84e: imul edx, edx, 0x19 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x19u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0063e851: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0063e854: lea ecx, [eax + edx + 0xf] */ r_ecx = (u32)(r_eax+r_edx+0xfu);
    /* 0063e858: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
L_0063e85b:; BB(0x0063e85b);
    /* 0063e85b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063e85d: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0063e85f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063e861: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 0063e863: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 0063e865: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0063e867: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063e86a: mov eax, dword ptr [ebp + 0x20] */ r_eax = R32((u32)(r_ebp+0x20u));
    /* 0063e86d: mov ecx, dword ptr [eax + edx*4] */ r_ecx = R32((u32)(r_eax+r_edx*4));
    /* 0063e870: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063e871: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063e873: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063e876: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063e877: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063e87a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063e87b: push 0x30d4ca */ { u32 v = 0x30d4cau; r_esp -= 4; W32(r_esp, v); }
    /* 0063e880: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0063e883: imul ecx, ecx, 0x64 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x64u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0063e886: add ecx, 0x33 */ {  u32 a = r_ecx; u32 b = 0x33u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0063e889: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063e88a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0063e88d: imul edx, edx, 0x64 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x64u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0063e890: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063e893: lea ecx, [edx + eax + 0x34] */ r_ecx = (u32)(r_edx+r_eax+0x34u);
    /* 0063e897: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063e898: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063e89a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063e89c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0063e89f: call 0x5f9ff0 */ r_esp -= 4; W32(r_esp, 0x63e8a4u); f_005f9ff0();
    /* 0063e8a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063e8a5: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063e8a8: call 0x5ff5a0 */ r_esp -= 4; W32(r_esp, 0x63e8adu); f_005ff5a0();
    /* 0063e8ad: jmp 0x63e7f2 */ goto L_0063e7f2;
L_0063e8b2:; BB(0x0063e8b2);
    /* 0063e8b2: mov esp, ebp */ r_esp = r_ebp;
    /* 0063e8b4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063e8b5: ret 0x20 */ FN_RET(0x0063e760); r_esp += 36; return;
}

