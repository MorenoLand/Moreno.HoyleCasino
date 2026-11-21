#include "protos.h"

void f_00585f20(void) /* KenoTicketDialog::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00585f20);
    /* 00585f20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00585f21: mov ebp, esp */ r_ebp = r_esp;
    /* 00585f23: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00585f25: push 0x6a6ce8 */ { u32 v = 0x6a6ce8u; r_esp -= 4; W32(r_esp, v); }
    /* 00585f2a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00585f30: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00585f31: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00585f34: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00585f39: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00585f3b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00585f3c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00585f3f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00585f45: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00585f48: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00585f4a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00585f4c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00585f4f: call 0x5f71f0 */ r_esp -= 4; W32(r_esp, 0x585f54u); f_005f71f0();
    /* 00585f54: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00585f5b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00585f5e: mov dword ptr [eax], 0x6cccc4 */ W32((u32)(r_eax), 0x6cccc4u);
    /* 00585f64: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00585f66: push 0x30dfb8 */ { u32 v = 0x30dfb8u; r_esp -= 4; W32(r_esp, v); }
    /* 00585f6b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00585f6e: call 0x5f83d0 */ r_esp -= 4; W32(r_esp, 0x585f73u); f_005f83d0();
    /* 00585f73: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00585f75: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00585f7b: call 0x635cb0 */ r_esp -= 4; W32(r_esp, 0x585f80u); f_00635cb0();
    /* 00585f80: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00585f83: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00585f85: je 0x585f92 */ if (fZ) goto L_00585f92;
L_00585f87:; BB(0x00585f87);
    /* 00585f87: mov ecx, dword ptr [0x79357c] */ r_ecx = R32((u32)(0x79357cu));
    /* 00585f8d: call 0x583940 */ r_esp -= 4; W32(r_esp, 0x585f92u); f_00583940();
L_00585f92:; BB(0x00585f92);
    /* 00585f92: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00585f95: mov dword ptr [edx + 0x3b6c], 0 */ W32((u32)(r_edx+0x3b6cu), 0x0u);
    /* 00585f9f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00585fa2: mov dword ptr [eax + 0x310], 0 */ W32((u32)(r_eax+0x310u), 0x0u);
    /* 00585fac: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00585faf: mov dword ptr [ecx + 0x314], 0 */ W32((u32)(r_ecx+0x314u), 0x0u);
    /* 00585fb9: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00585fbc: mov dword ptr [edx + 0x3b74], 0 */ W32((u32)(r_edx+0x3b74u), 0x0u);
    /* 00585fc6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00585fc9: mov dword ptr [eax + 0x3b84], 0 */ W32((u32)(r_eax+0x3b84u), 0x0u);
    /* 00585fd3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00585fd6: mov dword ptr [ecx + 0x3b88], 0 */ W32((u32)(r_ecx+0x3b88u), 0x0u);
    /* 00585fe0: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00585fe3: mov dword ptr [edx + 0x3b8c], 0 */ W32((u32)(r_edx+0x3b8cu), 0x0u);
    /* 00585fed: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00585ff0: mov dword ptr [eax + 0x3b90], 0 */ W32((u32)(r_eax+0x3b90u), 0x0u);
    /* 00585ffa: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00585ffd: mov dword ptr [ecx + 0x3b68], 0 */ W32((u32)(r_ecx+0x3b68u), 0x0u);
    /* 00586007: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0058600a: mov dword ptr [edx + 0x320], 0 */ W32((u32)(r_edx+0x320u), 0x0u);
    /* 00586014: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00586017: mov dword ptr [eax + 0x3b94], 0 */ W32((u32)(r_eax+0x3b94u), 0x0u);
    /* 00586021: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00586024: mov dword ptr [ecx + 0x3b70], 0 */ W32((u32)(r_ecx+0x3b70u), 0x0u);
    /* 0058602e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00586031: mov dword ptr [edx + 0x3b98], 0 */ W32((u32)(r_edx+0x3b98u), 0x0u);
    /* 0058603b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0058603e: mov dword ptr [eax + 0x3b9c], 0 */ W32((u32)(r_eax+0x3b9cu), 0x0u);
    /* 00586048: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0058604b: mov dword ptr [ecx + 0x3ba0], 0 */ W32((u32)(r_ecx+0x3ba0u), 0x0u);
    /* 00586055: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0058605c: jmp 0x586067 */ goto L_00586067;
L_0058605e:; BB(0x0058605e);
    /* 0058605e: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00586061: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00586064: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_00586067:; BB(0x00586067);
    /* 00586067: cmp dword ptr [ebp - 0x10], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058606b: jge 0x586080 */ if ((fS==fO)) goto L_00586080;
L_0058606d:; BB(0x0058606d);
    /* 0058606d: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00586070: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00586073: mov dword ptr [ecx + eax*4 + 0x318], 0 */ W32((u32)(r_ecx+r_eax*4+0x318u), 0x0u);
    /* 0058607e: jmp 0x58605e */ goto L_0058605e;
L_00586080:; BB(0x00586080);
    /* 00586080: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00586087: jmp 0x586092 */ goto L_00586092;
L_00586089:; BB(0x00586089);
    /* 00586089: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0058608c: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0058608f: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_00586092:; BB(0x00586092);
    /* 00586092: cmp dword ptr [ebp - 0x10], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00586096: jge 0x5860ab */ if ((fS==fO)) goto L_005860ab;
L_00586098:; BB(0x00586098);
    /* 00586098: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0058609b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0058609e: mov dword ptr [ecx + eax*4 + 0x2fc], 0 */ W32((u32)(r_ecx+r_eax*4+0x2fcu), 0x0u);
    /* 005860a9: jmp 0x586089 */ goto L_00586089;
L_005860ab:; BB(0x005860ab);
    /* 005860ab: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005860b2: jmp 0x5860bd */ goto L_005860bd;
L_005860b4:; BB(0x005860b4);
    /* 005860b4: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005860b7: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005860ba: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_005860bd:; BB(0x005860bd);
    /* 005860bd: cmp dword ptr [ebp - 0x10], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005860c1: jge 0x5860c5 */ if ((fS==fO)) goto L_005860c5;
L_005860c3:; BB(0x005860c3);
    /* 005860c3: jmp 0x5860b4 */ goto L_005860b4;
L_005860c5:; BB(0x005860c5);
    /* 005860c5: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005860cc: jmp 0x5860d7 */ goto L_005860d7;
L_005860ce:; BB(0x005860ce);
    /* 005860ce: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005860d1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005860d4: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_005860d7:; BB(0x005860d7);
    /* 005860d7: cmp dword ptr [ebp - 0x10], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005860db: jge 0x5860f0 */ if ((fS==fO)) goto L_005860f0;
L_005860dd:; BB(0x005860dd);
    /* 005860dd: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005860e0: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005860e3: mov dword ptr [edx + ecx*4 + 0x3b78], 0 */ W32((u32)(r_edx+r_ecx*4+0x3b78u), 0x0u);
    /* 005860ee: jmp 0x5860ce */ goto L_005860ce;
L_005860f0:; BB(0x005860f0);
    /* 005860f0: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005860f7: jmp 0x586102 */ goto L_00586102;
L_005860f9:; BB(0x005860f9);
    /* 005860f9: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005860fc: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005860ff: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_00586102:; BB(0x00586102);
    /* 00586102: cmp dword ptr [ebp - 0x10], 0x50 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00586106: jge 0x58611b */ if ((fS==fO)) goto L_0058611b;
L_00586108:; BB(0x00586108);
    /* 00586108: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0058610b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0058610e: mov dword ptr [edx + ecx*4 + 0x1bc], 0 */ W32((u32)(r_edx+r_ecx*4+0x1bcu), 0x0u);
    /* 00586119: jmp 0x5860f9 */ goto L_005860f9;
L_0058611b:; BB(0x0058611b);
    /* 0058611b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0058611e: mov dword ptr [eax + 0x324], 0 */ W32((u32)(r_eax+0x324u), 0x0u);
    /* 00586128: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0058612b: mov dword ptr [ecx + 0x3c0c], 0 */ W32((u32)(r_ecx+0x3c0cu), 0x0u);
    /* 00586135: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0058613c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0058613f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00586142: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00586149: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0058614a: mov esp, ebp */ r_esp = r_ebp;
    /* 0058614c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058614d: ret  */ FN_RET(0x00585f20); r_esp += 4; return;
}

void f_00586150(void) /* KenoTicketDialog::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00586150);
    /* 00586150: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00586151: mov ebp, esp */ r_ebp = r_esp;
    /* 00586153: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00586155: push 0x6a6d0e */ { u32 v = 0x6a6d0eu; r_esp -= 4; W32(r_esp, v); }
    /* 0058615a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00586160: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00586161: sub esp, 0xf8 */ {  u32 a = r_esp; u32 b = 0xf8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00586167: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0058616c: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0058616e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058616f: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00586172: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00586178: mov dword ptr [ebp - 0xb4], ecx */ W32((u32)(r_ebp+0xffffff4cu), r_ecx);
    /* 0058617e: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 00586184: mov dword ptr [eax], 0x6cccc4 */ W32((u32)(r_eax), 0x6cccc4u);
    /* 0058618a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00586191: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00586197: cmp dword ptr [ecx + 0x3b6c], 0 */ {  u32 a = R32((u32)(r_ecx+0x3b6cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058619e: je 0x5861eb */ if (fZ) goto L_005861eb;
L_005861a0:; BB(0x005861a0);
    /* 005861a0: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 005861a6: mov eax, dword ptr [edx + 0x3b6c] */ r_eax = R32((u32)(r_edx+0x3b6cu));
    /* 005861ac: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005861af: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005861b2: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005861b5: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005861b9: je 0x5861d1 */ if (fZ) goto L_005861d1;
L_005861bb:; BB(0x005861bb);
    /* 005861bb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005861bd: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005861c0: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005861c2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005861c5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005861c7: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5861c9u); call_ind(t); }
    /* 005861c9: mov dword ptr [ebp - 0xb8], eax */ W32((u32)(r_ebp+0xffffff48u), r_eax);
    /* 005861cf: jmp 0x5861db */ goto L_005861db;
L_005861d1:; BB(0x005861d1);
    /* 005861d1: mov dword ptr [ebp - 0xb8], 0 */ W32((u32)(r_ebp+0xffffff48u), 0x0u);
L_005861db:; BB(0x005861db);
    /* 005861db: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 005861e1: mov dword ptr [eax + 0x3b6c], 0 */ W32((u32)(r_eax+0x3b6cu), 0x0u);
L_005861eb:; BB(0x005861eb);
    /* 005861eb: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 005861f1: cmp dword ptr [ecx + 0x310], 0 */ {  u32 a = R32((u32)(r_ecx+0x310u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005861f8: je 0x586245 */ if (fZ) goto L_00586245;
L_005861fa:; BB(0x005861fa);
    /* 005861fa: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00586200: mov eax, dword ptr [edx + 0x310] */ r_eax = R32((u32)(r_edx+0x310u));
    /* 00586206: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00586209: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0058620c: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0058620f: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00586213: je 0x58622b */ if (fZ) goto L_0058622b;
L_00586215:; BB(0x00586215);
    /* 00586215: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00586217: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0058621a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0058621c: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0058621f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00586221: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x586223u); call_ind(t); }
    /* 00586223: mov dword ptr [ebp - 0xbc], eax */ W32((u32)(r_ebp+0xffffff44u), r_eax);
    /* 00586229: jmp 0x586235 */ goto L_00586235;
L_0058622b:; BB(0x0058622b);
    /* 0058622b: mov dword ptr [ebp - 0xbc], 0 */ W32((u32)(r_ebp+0xffffff44u), 0x0u);
L_00586235:; BB(0x00586235);
    /* 00586235: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 0058623b: mov dword ptr [eax + 0x310], 0 */ W32((u32)(r_eax+0x310u), 0x0u);
L_00586245:; BB(0x00586245);
    /* 00586245: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0058624b: cmp dword ptr [ecx + 0x314], 0 */ {  u32 a = R32((u32)(r_ecx+0x314u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00586252: je 0x58629f */ if (fZ) goto L_0058629f;
L_00586254:; BB(0x00586254);
    /* 00586254: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0058625a: mov eax, dword ptr [edx + 0x314] */ r_eax = R32((u32)(r_edx+0x314u));
    /* 00586260: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00586263: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00586266: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00586269: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058626d: je 0x586285 */ if (fZ) goto L_00586285;
L_0058626f:; BB(0x0058626f);
    /* 0058626f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00586271: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00586274: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00586276: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00586279: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0058627b: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x58627du); call_ind(t); }
    /* 0058627d: mov dword ptr [ebp - 0xc0], eax */ W32((u32)(r_ebp+0xffffff40u), r_eax);
    /* 00586283: jmp 0x58628f */ goto L_0058628f;
L_00586285:; BB(0x00586285);
    /* 00586285: mov dword ptr [ebp - 0xc0], 0 */ W32((u32)(r_ebp+0xffffff40u), 0x0u);
L_0058628f:; BB(0x0058628f);
    /* 0058628f: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 00586295: mov dword ptr [eax + 0x314], 0 */ W32((u32)(r_eax+0x314u), 0x0u);
L_0058629f:; BB(0x0058629f);
    /* 0058629f: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 005862a5: cmp dword ptr [ecx + 0x3b74], 0 */ {  u32 a = R32((u32)(r_ecx+0x3b74u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005862ac: je 0x5862f9 */ if (fZ) goto L_005862f9;
L_005862ae:; BB(0x005862ae);
    /* 005862ae: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 005862b4: mov eax, dword ptr [edx + 0x3b74] */ r_eax = R32((u32)(r_edx+0x3b74u));
    /* 005862ba: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005862bd: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005862c0: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 005862c3: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005862c7: je 0x5862df */ if (fZ) goto L_005862df;
L_005862c9:; BB(0x005862c9);
    /* 005862c9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005862cb: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005862ce: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005862d0: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005862d3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005862d5: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5862d7u); call_ind(t); }
    /* 005862d7: mov dword ptr [ebp - 0xc4], eax */ W32((u32)(r_ebp+0xffffff3cu), r_eax);
    /* 005862dd: jmp 0x5862e9 */ goto L_005862e9;
L_005862df:; BB(0x005862df);
    /* 005862df: mov dword ptr [ebp - 0xc4], 0 */ W32((u32)(r_ebp+0xffffff3cu), 0x0u);
L_005862e9:; BB(0x005862e9);
    /* 005862e9: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 005862ef: mov dword ptr [eax + 0x3b74], 0 */ W32((u32)(r_eax+0x3b74u), 0x0u);
L_005862f9:; BB(0x005862f9);
    /* 005862f9: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 005862ff: cmp dword ptr [ecx + 0x3b84], 0 */ {  u32 a = R32((u32)(r_ecx+0x3b84u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00586306: je 0x586353 */ if (fZ) goto L_00586353;
L_00586308:; BB(0x00586308);
    /* 00586308: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0058630e: mov eax, dword ptr [edx + 0x3b84] */ r_eax = R32((u32)(r_edx+0x3b84u));
    /* 00586314: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00586317: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0058631a: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 0058631d: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00586321: je 0x586339 */ if (fZ) goto L_00586339;
L_00586323:; BB(0x00586323);
    /* 00586323: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00586325: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00586328: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0058632a: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0058632d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0058632f: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x586331u); call_ind(t); }
    /* 00586331: mov dword ptr [ebp - 0xc8], eax */ W32((u32)(r_ebp+0xffffff38u), r_eax);
    /* 00586337: jmp 0x586343 */ goto L_00586343;
L_00586339:; BB(0x00586339);
    /* 00586339: mov dword ptr [ebp - 0xc8], 0 */ W32((u32)(r_ebp+0xffffff38u), 0x0u);
L_00586343:; BB(0x00586343);
    /* 00586343: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 00586349: mov dword ptr [eax + 0x3b84], 0 */ W32((u32)(r_eax+0x3b84u), 0x0u);
L_00586353:; BB(0x00586353);
    /* 00586353: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00586359: cmp dword ptr [ecx + 0x3b88], 0 */ {  u32 a = R32((u32)(r_ecx+0x3b88u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00586360: je 0x5863ad */ if (fZ) goto L_005863ad;
L_00586362:; BB(0x00586362);
    /* 00586362: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00586368: mov eax, dword ptr [edx + 0x3b88] */ r_eax = R32((u32)(r_edx+0x3b88u));
    /* 0058636e: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00586371: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00586374: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 00586377: cmp dword ptr [ebp - 0x3c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058637b: je 0x586393 */ if (fZ) goto L_00586393;
L_0058637d:; BB(0x0058637d);
    /* 0058637d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0058637f: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00586382: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00586384: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00586387: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00586389: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x58638bu); call_ind(t); }
    /* 0058638b: mov dword ptr [ebp - 0xcc], eax */ W32((u32)(r_ebp+0xffffff34u), r_eax);
    /* 00586391: jmp 0x58639d */ goto L_0058639d;
L_00586393:; BB(0x00586393);
    /* 00586393: mov dword ptr [ebp - 0xcc], 0 */ W32((u32)(r_ebp+0xffffff34u), 0x0u);
L_0058639d:; BB(0x0058639d);
    /* 0058639d: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 005863a3: mov dword ptr [eax + 0x3b88], 0 */ W32((u32)(r_eax+0x3b88u), 0x0u);
L_005863ad:; BB(0x005863ad);
    /* 005863ad: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 005863b3: cmp dword ptr [ecx + 0x3b8c], 0 */ {  u32 a = R32((u32)(r_ecx+0x3b8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005863ba: je 0x586407 */ if (fZ) goto L_00586407;
L_005863bc:; BB(0x005863bc);
    /* 005863bc: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 005863c2: mov eax, dword ptr [edx + 0x3b8c] */ r_eax = R32((u32)(r_edx+0x3b8cu));
    /* 005863c8: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 005863cb: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005863ce: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 005863d1: cmp dword ptr [ebp - 0x44], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffbcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005863d5: je 0x5863ed */ if (fZ) goto L_005863ed;
L_005863d7:; BB(0x005863d7);
    /* 005863d7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005863d9: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005863dc: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005863de: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005863e1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005863e3: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5863e5u); call_ind(t); }
    /* 005863e5: mov dword ptr [ebp - 0xd0], eax */ W32((u32)(r_ebp+0xffffff30u), r_eax);
    /* 005863eb: jmp 0x5863f7 */ goto L_005863f7;
L_005863ed:; BB(0x005863ed);
    /* 005863ed: mov dword ptr [ebp - 0xd0], 0 */ W32((u32)(r_ebp+0xffffff30u), 0x0u);
L_005863f7:; BB(0x005863f7);
    /* 005863f7: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 005863fd: mov dword ptr [eax + 0x3b8c], 0 */ W32((u32)(r_eax+0x3b8cu), 0x0u);
L_00586407:; BB(0x00586407);
    /* 00586407: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0058640d: cmp dword ptr [ecx + 0x3b90], 0 */ {  u32 a = R32((u32)(r_ecx+0x3b90u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00586414: je 0x586461 */ if (fZ) goto L_00586461;
L_00586416:; BB(0x00586416);
    /* 00586416: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0058641c: mov eax, dword ptr [edx + 0x3b90] */ r_eax = R32((u32)(r_edx+0x3b90u));
    /* 00586422: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 00586425: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00586428: mov dword ptr [ebp - 0x4c], ecx */ W32((u32)(r_ebp+0xffffffb4u), r_ecx);
    /* 0058642b: cmp dword ptr [ebp - 0x4c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058642f: je 0x586447 */ if (fZ) goto L_00586447;
L_00586431:; BB(0x00586431);
    /* 00586431: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00586433: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00586436: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00586438: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0058643b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0058643d: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x58643fu); call_ind(t); }
    /* 0058643f: mov dword ptr [ebp - 0xd4], eax */ W32((u32)(r_ebp+0xffffff2cu), r_eax);
    /* 00586445: jmp 0x586451 */ goto L_00586451;
L_00586447:; BB(0x00586447);
    /* 00586447: mov dword ptr [ebp - 0xd4], 0 */ W32((u32)(r_ebp+0xffffff2cu), 0x0u);
L_00586451:; BB(0x00586451);
    /* 00586451: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 00586457: mov dword ptr [eax + 0x3b90], 0 */ W32((u32)(r_eax+0x3b90u), 0x0u);
L_00586461:; BB(0x00586461);
    /* 00586461: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00586467: cmp dword ptr [ecx + 0x3b68], 0 */ {  u32 a = R32((u32)(r_ecx+0x3b68u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058646e: je 0x5864bb */ if (fZ) goto L_005864bb;
L_00586470:; BB(0x00586470);
    /* 00586470: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00586476: mov eax, dword ptr [edx + 0x3b68] */ r_eax = R32((u32)(r_edx+0x3b68u));
    /* 0058647c: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 0058647f: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00586482: mov dword ptr [ebp - 0x54], ecx */ W32((u32)(r_ebp+0xffffffacu), r_ecx);
    /* 00586485: cmp dword ptr [ebp - 0x54], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffacu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00586489: je 0x5864a1 */ if (fZ) goto L_005864a1;
L_0058648b:; BB(0x0058648b);
    /* 0058648b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0058648d: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 00586490: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00586492: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 00586495: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00586497: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x586499u); call_ind(t); }
    /* 00586499: mov dword ptr [ebp - 0xd8], eax */ W32((u32)(r_ebp+0xffffff28u), r_eax);
    /* 0058649f: jmp 0x5864ab */ goto L_005864ab;
L_005864a1:; BB(0x005864a1);
    /* 005864a1: mov dword ptr [ebp - 0xd8], 0 */ W32((u32)(r_ebp+0xffffff28u), 0x0u);
L_005864ab:; BB(0x005864ab);
    /* 005864ab: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 005864b1: mov dword ptr [eax + 0x3b68], 0 */ W32((u32)(r_eax+0x3b68u), 0x0u);
L_005864bb:; BB(0x005864bb);
    /* 005864bb: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 005864c1: cmp dword ptr [ecx + 0x3b94], 0 */ {  u32 a = R32((u32)(r_ecx+0x3b94u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005864c8: je 0x586515 */ if (fZ) goto L_00586515;
L_005864ca:; BB(0x005864ca);
    /* 005864ca: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 005864d0: mov eax, dword ptr [edx + 0x3b94] */ r_eax = R32((u32)(r_edx+0x3b94u));
    /* 005864d6: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 005864d9: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 005864dc: mov dword ptr [ebp - 0x5c], ecx */ W32((u32)(r_ebp+0xffffffa4u), r_ecx);
    /* 005864df: cmp dword ptr [ebp - 0x5c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005864e3: je 0x5864fb */ if (fZ) goto L_005864fb;
L_005864e5:; BB(0x005864e5);
    /* 005864e5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005864e7: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 005864ea: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005864ec: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 005864ef: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005864f1: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5864f3u); call_ind(t); }
    /* 005864f3: mov dword ptr [ebp - 0xdc], eax */ W32((u32)(r_ebp+0xffffff24u), r_eax);
    /* 005864f9: jmp 0x586505 */ goto L_00586505;
L_005864fb:; BB(0x005864fb);
    /* 005864fb: mov dword ptr [ebp - 0xdc], 0 */ W32((u32)(r_ebp+0xffffff24u), 0x0u);
L_00586505:; BB(0x00586505);
    /* 00586505: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 0058650b: mov dword ptr [eax + 0x3b94], 0 */ W32((u32)(r_eax+0x3b94u), 0x0u);
L_00586515:; BB(0x00586515);
    /* 00586515: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0058651b: cmp dword ptr [ecx + 0x3b70], 0 */ {  u32 a = R32((u32)(r_ecx+0x3b70u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00586522: je 0x58656f */ if (fZ) goto L_0058656f;
L_00586524:; BB(0x00586524);
    /* 00586524: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0058652a: mov eax, dword ptr [edx + 0x3b70] */ r_eax = R32((u32)(r_edx+0x3b70u));
    /* 00586530: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 00586533: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 00586536: mov dword ptr [ebp - 0x64], ecx */ W32((u32)(r_ebp+0xffffff9cu), r_ecx);
    /* 00586539: cmp dword ptr [ebp - 0x64], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff9cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058653d: je 0x586555 */ if (fZ) goto L_00586555;
L_0058653f:; BB(0x0058653f);
    /* 0058653f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00586541: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 00586544: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00586546: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 00586549: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0058654b: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x58654du); call_ind(t); }
    /* 0058654d: mov dword ptr [ebp - 0xe0], eax */ W32((u32)(r_ebp+0xffffff20u), r_eax);
    /* 00586553: jmp 0x58655f */ goto L_0058655f;
L_00586555:; BB(0x00586555);
    /* 00586555: mov dword ptr [ebp - 0xe0], 0 */ W32((u32)(r_ebp+0xffffff20u), 0x0u);
L_0058655f:; BB(0x0058655f);
    /* 0058655f: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 00586565: mov dword ptr [eax + 0x3b70], 0 */ W32((u32)(r_eax+0x3b70u), 0x0u);
L_0058656f:; BB(0x0058656f);
    /* 0058656f: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00586575: cmp dword ptr [ecx + 0x3b98], 0 */ {  u32 a = R32((u32)(r_ecx+0x3b98u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058657c: je 0x5865c9 */ if (fZ) goto L_005865c9;
L_0058657e:; BB(0x0058657e);
    /* 0058657e: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00586584: mov eax, dword ptr [edx + 0x3b98] */ r_eax = R32((u32)(r_edx+0x3b98u));
    /* 0058658a: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 0058658d: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 00586590: mov dword ptr [ebp - 0x6c], ecx */ W32((u32)(r_ebp+0xffffff94u), r_ecx);
    /* 00586593: cmp dword ptr [ebp - 0x6c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff94u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00586597: je 0x5865af */ if (fZ) goto L_005865af;
L_00586599:; BB(0x00586599);
    /* 00586599: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0058659b: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 0058659e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005865a0: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 005865a3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005865a5: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5865a7u); call_ind(t); }
    /* 005865a7: mov dword ptr [ebp - 0xe4], eax */ W32((u32)(r_ebp+0xffffff1cu), r_eax);
    /* 005865ad: jmp 0x5865b9 */ goto L_005865b9;
L_005865af:; BB(0x005865af);
    /* 005865af: mov dword ptr [ebp - 0xe4], 0 */ W32((u32)(r_ebp+0xffffff1cu), 0x0u);
L_005865b9:; BB(0x005865b9);
    /* 005865b9: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 005865bf: mov dword ptr [eax + 0x3b98], 0 */ W32((u32)(r_eax+0x3b98u), 0x0u);
L_005865c9:; BB(0x005865c9);
    /* 005865c9: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 005865cf: cmp dword ptr [ecx + 0x3b9c], 0 */ {  u32 a = R32((u32)(r_ecx+0x3b9cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005865d6: je 0x586623 */ if (fZ) goto L_00586623;
L_005865d8:; BB(0x005865d8);
    /* 005865d8: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 005865de: mov eax, dword ptr [edx + 0x3b9c] */ r_eax = R32((u32)(r_edx+0x3b9cu));
    /* 005865e4: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 005865e7: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 005865ea: mov dword ptr [ebp - 0x74], ecx */ W32((u32)(r_ebp+0xffffff8cu), r_ecx);
    /* 005865ed: cmp dword ptr [ebp - 0x74], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005865f1: je 0x586609 */ if (fZ) goto L_00586609;
L_005865f3:; BB(0x005865f3);
    /* 005865f3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005865f5: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 005865f8: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005865fa: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 005865fd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005865ff: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x586601u); call_ind(t); }
    /* 00586601: mov dword ptr [ebp - 0xe8], eax */ W32((u32)(r_ebp+0xffffff18u), r_eax);
    /* 00586607: jmp 0x586613 */ goto L_00586613;
L_00586609:; BB(0x00586609);
    /* 00586609: mov dword ptr [ebp - 0xe8], 0 */ W32((u32)(r_ebp+0xffffff18u), 0x0u);
L_00586613:; BB(0x00586613);
    /* 00586613: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 00586619: mov dword ptr [eax + 0x3b9c], 0 */ W32((u32)(r_eax+0x3b9cu), 0x0u);
L_00586623:; BB(0x00586623);
    /* 00586623: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00586629: cmp dword ptr [ecx + 0x3ba0], 0 */ {  u32 a = R32((u32)(r_ecx+0x3ba0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00586630: je 0x58667d */ if (fZ) goto L_0058667d;
L_00586632:; BB(0x00586632);
    /* 00586632: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00586638: mov eax, dword ptr [edx + 0x3ba0] */ r_eax = R32((u32)(r_edx+0x3ba0u));
    /* 0058663e: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 00586641: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 00586644: mov dword ptr [ebp - 0x7c], ecx */ W32((u32)(r_ebp+0xffffff84u), r_ecx);
    /* 00586647: cmp dword ptr [ebp - 0x7c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff84u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058664b: je 0x586663 */ if (fZ) goto L_00586663;
L_0058664d:; BB(0x0058664d);
    /* 0058664d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0058664f: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 00586652: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00586654: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 00586657: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00586659: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x58665bu); call_ind(t); }
    /* 0058665b: mov dword ptr [ebp - 0xec], eax */ W32((u32)(r_ebp+0xffffff14u), r_eax);
    /* 00586661: jmp 0x58666d */ goto L_0058666d;
L_00586663:; BB(0x00586663);
    /* 00586663: mov dword ptr [ebp - 0xec], 0 */ W32((u32)(r_ebp+0xffffff14u), 0x0u);
L_0058666d:; BB(0x0058666d);
    /* 0058666d: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 00586673: mov dword ptr [eax + 0x3ba0], 0 */ W32((u32)(r_eax+0x3ba0u), 0x0u);
L_0058667d:; BB(0x0058667d);
    /* 0058667d: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00586683: cmp dword ptr [ecx + 0x3c0c], 0 */ {  u32 a = R32((u32)(r_ecx+0x3c0cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058668a: je 0x5866e9 */ if (fZ) goto L_005866e9;
L_0058668c:; BB(0x0058668c);
    /* 0058668c: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00586692: mov eax, dword ptr [edx + 0x3c0c] */ r_eax = R32((u32)(r_edx+0x3c0cu));
    /* 00586698: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 0058669e: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 005866a4: mov dword ptr [ebp - 0x84], ecx */ W32((u32)(r_ebp+0xffffff7cu), r_ecx);
    /* 005866aa: cmp dword ptr [ebp - 0x84], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff7cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005866b1: je 0x5866cf */ if (fZ) goto L_005866cf;
L_005866b3:; BB(0x005866b3);
    /* 005866b3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005866b5: mov edx, dword ptr [ebp - 0x84] */ r_edx = R32((u32)(r_ebp+0xffffff7cu));
    /* 005866bb: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005866bd: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 005866c3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005866c5: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5866c7u); call_ind(t); }
    /* 005866c7: mov dword ptr [ebp - 0xf0], eax */ W32((u32)(r_ebp+0xffffff10u), r_eax);
    /* 005866cd: jmp 0x5866d9 */ goto L_005866d9;
L_005866cf:; BB(0x005866cf);
    /* 005866cf: mov dword ptr [ebp - 0xf0], 0 */ W32((u32)(r_ebp+0xffffff10u), 0x0u);
L_005866d9:; BB(0x005866d9);
    /* 005866d9: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 005866df: mov dword ptr [eax + 0x3c0c], 0 */ W32((u32)(r_eax+0x3c0cu), 0x0u);
L_005866e9:; BB(0x005866e9);
    /* 005866e9: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005866f0: jmp 0x5866fb */ goto L_005866fb;
L_005866f2:; BB(0x005866f2);
    /* 005866f2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005866f5: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005866f8: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_005866fb:; BB(0x005866fb);
    /* 005866fb: cmp dword ptr [ebp - 0x10], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005866ff: jge 0x58677e */ if ((fS==fO)) goto L_0058677e;
L_00586701:; BB(0x00586701);
    /* 00586701: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00586704: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 0058670a: cmp dword ptr [eax + edx*4 + 0x318], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x318u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00586712: je 0x586779 */ if (fZ) goto L_00586779;
L_00586714:; BB(0x00586714);
    /* 00586714: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00586717: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0058671d: mov eax, dword ptr [edx + ecx*4 + 0x318] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x318u));
    /* 00586724: mov dword ptr [ebp - 0x90], eax */ W32((u32)(r_ebp+0xffffff70u), r_eax);
    /* 0058672a: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 00586730: mov dword ptr [ebp - 0x8c], ecx */ W32((u32)(r_ebp+0xffffff74u), r_ecx);
    /* 00586736: cmp dword ptr [ebp - 0x8c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff74u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058673d: je 0x58675b */ if (fZ) goto L_0058675b;
L_0058673f:; BB(0x0058673f);
    /* 0058673f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00586741: mov edx, dword ptr [ebp - 0x8c] */ r_edx = R32((u32)(r_ebp+0xffffff74u));
    /* 00586747: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00586749: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 0058674f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00586751: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x586753u); call_ind(t); }
    /* 00586753: mov dword ptr [ebp - 0xf4], eax */ W32((u32)(r_ebp+0xffffff0cu), r_eax);
    /* 00586759: jmp 0x586765 */ goto L_00586765;
L_0058675b:; BB(0x0058675b);
    /* 0058675b: mov dword ptr [ebp - 0xf4], 0 */ W32((u32)(r_ebp+0xffffff0cu), 0x0u);
L_00586765:; BB(0x00586765);
    /* 00586765: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00586768: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0058676e: mov dword ptr [ecx + eax*4 + 0x318], 0 */ W32((u32)(r_ecx+r_eax*4+0x318u), 0x0u);
L_00586779:; BB(0x00586779);
    /* 00586779: jmp 0x5866f2 */ goto L_005866f2;
L_0058677e:; BB(0x0058677e);
    /* 0058677e: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00586785: jmp 0x586790 */ goto L_00586790;
L_00586787:; BB(0x00586787);
    /* 00586787: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0058678a: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0058678d: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_00586790:; BB(0x00586790);
    /* 00586790: cmp dword ptr [ebp - 0x10], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00586794: jge 0x586813 */ if ((fS==fO)) goto L_00586813;
L_00586796:; BB(0x00586796);
    /* 00586796: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00586799: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0058679f: cmp dword ptr [ecx + eax*4 + 0x2fc], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x2fcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005867a7: je 0x58680e */ if (fZ) goto L_0058680e;
L_005867a9:; BB(0x005867a9);
    /* 005867a9: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005867ac: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 005867b2: mov ecx, dword ptr [eax + edx*4 + 0x2fc] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x2fcu));
    /* 005867b9: mov dword ptr [ebp - 0x98], ecx */ W32((u32)(r_ebp+0xffffff68u), r_ecx);
    /* 005867bf: mov edx, dword ptr [ebp - 0x98] */ r_edx = R32((u32)(r_ebp+0xffffff68u));
    /* 005867c5: mov dword ptr [ebp - 0x94], edx */ W32((u32)(r_ebp+0xffffff6cu), r_edx);
    /* 005867cb: cmp dword ptr [ebp - 0x94], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff6cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005867d2: je 0x5867f0 */ if (fZ) goto L_005867f0;
L_005867d4:; BB(0x005867d4);
    /* 005867d4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005867d6: mov eax, dword ptr [ebp - 0x94] */ r_eax = R32((u32)(r_ebp+0xffffff6cu));
    /* 005867dc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005867de: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005867e4: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005867e6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5867e8u); call_ind(t); }
    /* 005867e8: mov dword ptr [ebp - 0xf8], eax */ W32((u32)(r_ebp+0xffffff08u), r_eax);
    /* 005867ee: jmp 0x5867fa */ goto L_005867fa;
L_005867f0:; BB(0x005867f0);
    /* 005867f0: mov dword ptr [ebp - 0xf8], 0 */ W32((u32)(r_ebp+0xffffff08u), 0x0u);
L_005867fa:; BB(0x005867fa);
    /* 005867fa: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005867fd: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00586803: mov dword ptr [edx + ecx*4 + 0x2fc], 0 */ W32((u32)(r_edx+r_ecx*4+0x2fcu), 0x0u);
L_0058680e:; BB(0x0058680e);
    /* 0058680e: jmp 0x586787 */ goto L_00586787;
L_00586813:; BB(0x00586813);
    /* 00586813: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0058681a: jmp 0x586825 */ goto L_00586825;
L_0058681c:; BB(0x0058681c);
    /* 0058681c: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0058681f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00586822: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_00586825:; BB(0x00586825);
    /* 00586825: cmp dword ptr [ebp - 0x10], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00586829: jge 0x58682d */ if ((fS==fO)) goto L_0058682d;
L_0058682b:; BB(0x0058682b);
    /* 0058682b: jmp 0x58681c */ goto L_0058681c;
L_0058682d:; BB(0x0058682d);
    /* 0058682d: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00586834: jmp 0x58683f */ goto L_0058683f;
L_00586836:; BB(0x00586836);
    /* 00586836: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00586839: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0058683c: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_0058683f:; BB(0x0058683f);
    /* 0058683f: cmp dword ptr [ebp - 0x10], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00586843: jge 0x5868c2 */ if ((fS==fO)) goto L_005868c2;
L_00586845:; BB(0x00586845);
    /* 00586845: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00586848: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 0058684e: cmp dword ptr [eax + edx*4 + 0x3b78], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x3b78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00586856: je 0x5868bd */ if (fZ) goto L_005868bd;
L_00586858:; BB(0x00586858);
    /* 00586858: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0058685b: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00586861: mov eax, dword ptr [edx + ecx*4 + 0x3b78] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x3b78u));
    /* 00586868: mov dword ptr [ebp - 0xa0], eax */ W32((u32)(r_ebp+0xffffff60u), r_eax);
    /* 0058686e: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 00586874: mov dword ptr [ebp - 0x9c], ecx */ W32((u32)(r_ebp+0xffffff64u), r_ecx);
    /* 0058687a: cmp dword ptr [ebp - 0x9c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff64u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00586881: je 0x58689f */ if (fZ) goto L_0058689f;
L_00586883:; BB(0x00586883);
    /* 00586883: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00586885: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 0058688b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0058688d: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00586893: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00586895: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x586897u); call_ind(t); }
    /* 00586897: mov dword ptr [ebp - 0xfc], eax */ W32((u32)(r_ebp+0xffffff04u), r_eax);
    /* 0058689d: jmp 0x5868a9 */ goto L_005868a9;
L_0058689f:; BB(0x0058689f);
    /* 0058689f: mov dword ptr [ebp - 0xfc], 0 */ W32((u32)(r_ebp+0xffffff04u), 0x0u);
L_005868a9:; BB(0x005868a9);
    /* 005868a9: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005868ac: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 005868b2: mov dword ptr [ecx + eax*4 + 0x3b78], 0 */ W32((u32)(r_ecx+r_eax*4+0x3b78u), 0x0u);
L_005868bd:; BB(0x005868bd);
    /* 005868bd: jmp 0x586836 */ goto L_00586836;
L_005868c2:; BB(0x005868c2);
    /* 005868c2: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005868c9: jmp 0x5868d4 */ goto L_005868d4;
L_005868cb:; BB(0x005868cb);
    /* 005868cb: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005868ce: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005868d1: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_005868d4:; BB(0x005868d4);
    /* 005868d4: cmp dword ptr [ebp - 0x10], 0x50 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005868d8: jge 0x586957 */ if ((fS==fO)) goto L_00586957;
L_005868da:; BB(0x005868da);
    /* 005868da: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005868dd: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 005868e3: cmp dword ptr [ecx + eax*4 + 0x1bc], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x1bcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005868eb: je 0x586952 */ if (fZ) goto L_00586952;
L_005868ed:; BB(0x005868ed);
    /* 005868ed: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005868f0: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 005868f6: mov ecx, dword ptr [eax + edx*4 + 0x1bc] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x1bcu));
    /* 005868fd: mov dword ptr [ebp - 0xa8], ecx */ W32((u32)(r_ebp+0xffffff58u), r_ecx);
    /* 00586903: mov edx, dword ptr [ebp - 0xa8] */ r_edx = R32((u32)(r_ebp+0xffffff58u));
    /* 00586909: mov dword ptr [ebp - 0xa4], edx */ W32((u32)(r_ebp+0xffffff5cu), r_edx);
    /* 0058690f: cmp dword ptr [ebp - 0xa4], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff5cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00586916: je 0x586934 */ if (fZ) goto L_00586934;
L_00586918:; BB(0x00586918);
    /* 00586918: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0058691a: mov eax, dword ptr [ebp - 0xa4] */ r_eax = R32((u32)(r_ebp+0xffffff5cu));
    /* 00586920: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00586922: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 00586928: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0058692a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58692cu); call_ind(t); }
    /* 0058692c: mov dword ptr [ebp - 0x100], eax */ W32((u32)(r_ebp+0xffffff00u), r_eax);
    /* 00586932: jmp 0x58693e */ goto L_0058693e;
L_00586934:; BB(0x00586934);
    /* 00586934: mov dword ptr [ebp - 0x100], 0 */ W32((u32)(r_ebp+0xffffff00u), 0x0u);
L_0058693e:; BB(0x0058693e);
    /* 0058693e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00586941: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00586947: mov dword ptr [edx + ecx*4 + 0x1bc], 0 */ W32((u32)(r_edx+r_ecx*4+0x1bcu), 0x0u);
L_00586952:; BB(0x00586952);
    /* 00586952: jmp 0x5868cb */ goto L_005868cb;
L_00586957:; BB(0x00586957);
    /* 00586957: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 0058695d: cmp dword ptr [eax + 0x324], 0 */ {  u32 a = R32((u32)(r_eax+0x324u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00586964: je 0x5869c3 */ if (fZ) goto L_005869c3;
L_00586966:; BB(0x00586966);
    /* 00586966: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0058696c: mov edx, dword ptr [ecx + 0x324] */ r_edx = R32((u32)(r_ecx+0x324u));
    /* 00586972: mov dword ptr [ebp - 0xb0], edx */ W32((u32)(r_ebp+0xffffff50u), r_edx);
    /* 00586978: mov eax, dword ptr [ebp - 0xb0] */ r_eax = R32((u32)(r_ebp+0xffffff50u));
    /* 0058697e: mov dword ptr [ebp - 0xac], eax */ W32((u32)(r_ebp+0xffffff54u), r_eax);
    /* 00586984: cmp dword ptr [ebp - 0xac], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff54u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058698b: je 0x5869a9 */ if (fZ) goto L_005869a9;
L_0058698d:; BB(0x0058698d);
    /* 0058698d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0058698f: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 00586995: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00586997: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 0058699d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0058699f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5869a1u); call_ind(t); }
    /* 005869a1: mov dword ptr [ebp - 0x104], eax */ W32((u32)(r_ebp+0xfffffefcu), r_eax);
    /* 005869a7: jmp 0x5869b3 */ goto L_005869b3;
L_005869a9:; BB(0x005869a9);
    /* 005869a9: mov dword ptr [ebp - 0x104], 0 */ W32((u32)(r_ebp+0xfffffefcu), 0x0u);
L_005869b3:; BB(0x005869b3);
    /* 005869b3: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 005869b9: mov dword ptr [ecx + 0x324], 0 */ W32((u32)(r_ecx+0x324u), 0x0u);
L_005869c3:; BB(0x005869c3);
    /* 005869c3: mov dword ptr [0x793584], 0 */ W32((u32)(0x793584u), 0x0u);
    /* 005869cd: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005869d4: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 005869da: call 0x5f7260 */ r_esp -= 4; W32(r_esp, 0x5869dfu); f_005f7260();
    /* 005869df: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005869e2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005869e9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005869ea: mov esp, ebp */ r_esp = r_ebp;
    /* 005869ec: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005869ed: ret  */ FN_RET(0x00586150); r_esp += 4; return;
}

void f_005869f0(void) /* KenoTicketDialog::vfunc15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005869f0);
    /* 005869f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005869f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005869f3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005869f5: push 0x6a6e1a */ { u32 v = 0x6a6e1au; r_esp -= 4; W32(r_esp, v); }
    /* 005869fa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00586a00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00586a01: sub esp, 0x170 */ {  u32 a = r_esp; u32 b = 0x170u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00586a07: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00586a0c: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00586a0e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00586a0f: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00586a12: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00586a18: mov dword ptr [ebp - 0x128], ecx */ W32((u32)(r_ebp+0xfffffed8u), r_ecx);
    /* 00586a1e: mov dword ptr [ebp - 0x20], 0x6cceb8 */ W32((u32)(r_ebp+0xffffffe0u), 0x6cceb8u);
    /* 00586a25: mov dword ptr [ebp - 0x1c], 0x6cce9c */ W32((u32)(r_ebp+0xffffffe4u), 0x6cce9cu);
    /* 00586a2c: mov dword ptr [ebp - 0x18], 0x6cce84 */ W32((u32)(r_ebp+0xffffffe8u), 0x6cce84u);
    /* 00586a33: mov dword ptr [ebp - 0x14], 0x6cce6c */ W32((u32)(r_ebp+0xffffffecu), 0x6cce6cu);
    /* 00586a3a: mov dword ptr [ebp - 0x10], 0x6cce54 */ W32((u32)(r_ebp+0xfffffff0u), 0x6cce54u);
    /* 00586a41: mov dword ptr [ebp - 0x58], 0x150 */ W32((u32)(r_ebp+0xffffffa8u), 0x150u);
    /* 00586a48: mov dword ptr [ebp - 0x54], 0x64 */ W32((u32)(r_ebp+0xffffffacu), 0x64u);
    /* 00586a4f: mov dword ptr [ebp - 0x50], 0x16a */ W32((u32)(r_ebp+0xffffffb0u), 0x16au);
    /* 00586a56: mov dword ptr [ebp - 0x4c], 0x8a */ W32((u32)(r_ebp+0xffffffb4u), 0x8au);
    /* 00586a5d: mov dword ptr [ebp - 0x48], 0x1b4 */ W32((u32)(r_ebp+0xffffffb8u), 0x1b4u);
    /* 00586a64: mov dword ptr [ebp - 0x44], 0x64 */ W32((u32)(r_ebp+0xffffffbcu), 0x64u);
    /* 00586a6b: mov dword ptr [ebp - 0x40], 0x1ce */ W32((u32)(r_ebp+0xffffffc0u), 0x1ceu);
    /* 00586a72: mov dword ptr [ebp - 0x3c], 0x173 */ W32((u32)(r_ebp+0xffffffc4u), 0x173u);
    /* 00586a79: mov dword ptr [ebp - 0x38], 0x16a */ W32((u32)(r_ebp+0xffffffc8u), 0x16au);
    /* 00586a80: mov dword ptr [ebp - 0x34], 0x173 */ W32((u32)(r_ebp+0xffffffccu), 0x173u);
    /* 00586a87: mov dword ptr [ebp - 0x7c], 0x6cce34 */ W32((u32)(r_ebp+0xffffff84u), 0x6cce34u);
    /* 00586a8e: mov dword ptr [ebp - 0x78], 0x6cce20 */ W32((u32)(r_ebp+0xffffff88u), 0x6cce20u);
    /* 00586a95: mov dword ptr [ebp - 0x68], 0x16a */ W32((u32)(r_ebp+0xffffff98u), 0x16au);
    /* 00586a9c: mov dword ptr [ebp - 0x64], 0xbb */ W32((u32)(r_ebp+0xffffff9cu), 0xbbu);
    /* 00586aa3: mov dword ptr [ebp - 0x60], 0x16a */ W32((u32)(r_ebp+0xffffffa0u), 0x16au);
    /* 00586aaa: mov dword ptr [ebp - 0x5c], 0xeb */ W32((u32)(r_ebp+0xffffffa4u), 0xebu);
    /* 00586ab1: mov dword ptr [ebp - 0x74], 0x32 */ W32((u32)(r_ebp+0xffffff8cu), 0x32u);
    /* 00586ab8: mov dword ptr [ebp - 0x70], 0xa2 */ W32((u32)(r_ebp+0xffffff90u), 0xa2u);
    /* 00586abf: mov dword ptr [ebp - 0x6c], 0x181 */ W32((u32)(r_ebp+0xffffff94u), 0x181u);
    /* 00586ac6: mov dword ptr [ebp - 0x30], 0x6cc2f4 */ W32((u32)(r_ebp+0xffffffd0u), 0x6cc2f4u);
    /* 00586acd: mov dword ptr [ebp - 0x2c], 0x6cce00 */ W32((u32)(r_ebp+0xffffffd4u), 0x6cce00u);
    /* 00586ad4: mov dword ptr [ebp - 0x28], 0x6ccdec */ W32((u32)(r_ebp+0xffffffd8u), 0x6ccdecu);
    /* 00586adb: mov dword ptr [ebp - 0x94], 0x41 */ W32((u32)(r_ebp+0xffffff6cu), 0x41u);
    /* 00586ae5: mov dword ptr [ebp - 0x90], 0x19 */ W32((u32)(r_ebp+0xffffff70u), 0x19u);
    /* 00586aef: mov dword ptr [ebp - 0x8c], 0xeb */ W32((u32)(r_ebp+0xffffff74u), 0xebu);
    /* 00586af9: mov dword ptr [ebp - 0x88], 0x19 */ W32((u32)(r_ebp+0xffffff78u), 0x19u);
    /* 00586b03: mov dword ptr [ebp - 0x84], 0xaa */ W32((u32)(r_ebp+0xffffff7cu), 0xaau);
    /* 00586b0d: mov dword ptr [ebp - 0x80], 0x19 */ W32((u32)(r_ebp+0xffffff80u), 0x19u);
    /* 00586b14: mov eax, dword ptr [ebp - 0x128] */ r_eax = R32((u32)(r_ebp+0xfffffed8u));
    /* 00586b1a: cmp dword ptr [eax + 0x3b68], 0 */ {  u32 a = R32((u32)(r_eax+0x3b68u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00586b21: jne 0x586b85 */ if (!fZ) goto L_00586b85;
L_00586b23:; BB(0x00586b23);
    /* 00586b23: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00586b25: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x586b2au); f_00686d82();
    /* 00586b2a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00586b2d: mov dword ptr [ebp - 0x9c], eax */ W32((u32)(r_ebp+0xffffff64u), r_eax);
    /* 00586b33: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00586b3a: cmp dword ptr [ebp - 0x9c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff64u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00586b41: je 0x586b56 */ if (fZ) goto L_00586b56;
L_00586b43:; BB(0x00586b43);
    /* 00586b43: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00586b49: call 0x5856a0 */ r_esp -= 4; W32(r_esp, 0x586b4eu); f_005856a0();
    /* 00586b4e: mov dword ptr [ebp - 0x12c], eax */ W32((u32)(r_ebp+0xfffffed4u), r_eax);
    /* 00586b54: jmp 0x586b60 */ goto L_00586b60;
L_00586b56:; BB(0x00586b56);
    /* 00586b56: mov dword ptr [ebp - 0x12c], 0 */ W32((u32)(r_ebp+0xfffffed4u), 0x0u);
L_00586b60:; BB(0x00586b60);
    /* 00586b60: mov ecx, dword ptr [ebp - 0x12c] */ r_ecx = R32((u32)(r_ebp+0xfffffed4u));
    /* 00586b66: mov dword ptr [ebp - 0x98], ecx */ W32((u32)(r_ebp+0xffffff68u), r_ecx);
    /* 00586b6c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00586b73: mov edx, dword ptr [ebp - 0x128] */ r_edx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00586b79: mov eax, dword ptr [ebp - 0x98] */ r_eax = R32((u32)(r_ebp+0xffffff68u));
    /* 00586b7f: mov dword ptr [edx + 0x3b68], eax */ W32((u32)(r_edx+0x3b68u), r_eax);
L_00586b85:; BB(0x00586b85);
    /* 00586b85: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00586b8b: call 0x5887c0 */ r_esp -= 4; W32(r_esp, 0x586b90u); f_005887c0();
    /* 00586b90: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00586b96: call 0x588c30 */ r_esp -= 4; W32(r_esp, 0x586b9bu); f_00588c30();
    /* 00586b9b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00586b9d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00586b9f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00586ba1: push 0xa1 */ { u32 v = 0xa1u; r_esp -= 4; W32(r_esp, v); }
    /* 00586ba6: push 0x7c */ { u32 v = 0x7cu; r_esp -= 4; W32(r_esp, v); }
    /* 00586ba8: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 00586baa: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00586bac: push 0x168 */ { u32 v = 0x168u; r_esp -= 4; W32(r_esp, v); }
    /* 00586bb1: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 00586bb3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00586bb5: push 0x206 */ { u32 v = 0x206u; r_esp -= 4; W32(r_esp, v); }
    /* 00586bba: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00586bbc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00586bbe: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00586bc4: call 0x5fa880 */ r_esp -= 4; W32(r_esp, 0x586bc9u); f_005fa880();
    /* 00586bc9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00586bcb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00586bcd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00586bcf: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 00586bd4: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 00586bd9: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 00586bde: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00586be0: push 0x169 */ { u32 v = 0x169u; r_esp -= 4; W32(r_esp, v); }
    /* 00586be5: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 00586be7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00586be9: push 0x206 */ { u32 v = 0x206u; r_esp -= 4; W32(r_esp, v); }
    /* 00586bee: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00586bf0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00586bf2: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00586bf8: call 0x5fa880 */ r_esp -= 4; W32(r_esp, 0x586bfdu); f_005fa880();
    /* 00586bfd: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00586c04: jmp 0x586c0f */ goto L_00586c0f;
L_00586c06:; BB(0x00586c06);
    /* 00586c06: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00586c09: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00586c0c: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
L_00586c0f:; BB(0x00586c0f);
    /* 00586c0f: cmp dword ptr [ebp - 0x24], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00586c13: jge 0x586de1 */ if ((fS==fO)) goto L_00586de1;
L_00586c19:; BB(0x00586c19);
    /* 00586c19: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00586c1c: mov eax, dword ptr [ebp - 0x128] */ r_eax = R32((u32)(r_ebp+0xfffffed8u));
    /* 00586c22: cmp dword ptr [eax + edx*4 + 0x3b78], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x3b78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00586c2a: jne 0x586c95 */ if (!fZ) goto L_00586c95;
L_00586c2c:; BB(0x00586c2c);
    /* 00586c2c: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 00586c31: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x586c36u); f_00686d82();
    /* 00586c36: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00586c39: mov dword ptr [ebp - 0xa4], eax */ W32((u32)(r_ebp+0xffffff5cu), r_eax);
    /* 00586c3f: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00586c46: cmp dword ptr [ebp - 0xa4], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff5cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00586c4d: je 0x586c62 */ if (fZ) goto L_00586c62;
L_00586c4f:; BB(0x00586c4f);
    /* 00586c4f: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 00586c55: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x586c5au); f_005ec5a0();
    /* 00586c5a: mov dword ptr [ebp - 0x130], eax */ W32((u32)(r_ebp+0xfffffed0u), r_eax);
    /* 00586c60: jmp 0x586c6c */ goto L_00586c6c;
L_00586c62:; BB(0x00586c62);
    /* 00586c62: mov dword ptr [ebp - 0x130], 0 */ W32((u32)(r_ebp+0xfffffed0u), 0x0u);
L_00586c6c:; BB(0x00586c6c);
    /* 00586c6c: mov ecx, dword ptr [ebp - 0x130] */ r_ecx = R32((u32)(r_ebp+0xfffffed0u));
    /* 00586c72: mov dword ptr [ebp - 0xa0], ecx */ W32((u32)(r_ebp+0xffffff60u), r_ecx);
    /* 00586c78: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00586c7f: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00586c82: mov eax, dword ptr [ebp - 0x128] */ r_eax = R32((u32)(r_ebp+0xfffffed8u));
    /* 00586c88: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 00586c8e: mov dword ptr [eax + edx*4 + 0x3b78], ecx */ W32((u32)(r_eax+r_edx*4+0x3b78u), r_ecx);
L_00586c95:; BB(0x00586c95);
    /* 00586c95: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00586c98: mov eax, dword ptr [ebp - 0x128] */ r_eax = R32((u32)(r_ebp+0xfffffed8u));
    /* 00586c9e: mov ecx, dword ptr [eax + edx*4 + 0x3b78] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x3b78u));
    /* 00586ca5: mov edx, dword ptr [ebp - 0x128] */ r_edx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00586cab: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 00586cae: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00586cb1: mov ecx, dword ptr [ebp + eax*4 - 0x30] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffffd0u));
    /* 00586cb5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00586cb6: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x586cbbu); f_00630f40();
    /* 00586cbb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00586cbe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00586cbf: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00586cc2: mov eax, dword ptr [ebp - 0x128] */ r_eax = R32((u32)(r_ebp+0xfffffed8u));
    /* 00586cc8: mov ecx, dword ptr [eax + edx*4 + 0x3b78] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x3b78u));
    /* 00586ccf: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00586cd2: mov eax, dword ptr [ebp - 0x128] */ r_eax = R32((u32)(r_ebp+0xfffffed8u));
    /* 00586cd8: mov edx, dword ptr [eax + edx*4 + 0x3b78] */ r_edx = R32((u32)(r_eax+r_edx*4+0x3b78u));
    /* 00586cdf: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00586ce1: mov ecx, edx */ r_ecx = r_edx;
    /* 00586ce3: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 00586ce9: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x586cebu); call_ind(t); }
    /* 00586ceb: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00586cee: mov ecx, dword ptr [ebp + eax*8 - 0x94] */ r_ecx = R32((u32)(r_ebp+r_eax*8+0xffffff6cu));
    /* 00586cf5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00586cf6: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00586cf9: mov eax, dword ptr [ebp - 0x128] */ r_eax = R32((u32)(r_ebp+0xfffffed8u));
    /* 00586cff: mov ecx, dword ptr [eax + edx*4 + 0x3b78] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x3b78u));
    /* 00586d06: call 0x5ecc60 */ r_esp -= 4; W32(r_esp, 0x586d0bu); f_005ecc60();
    /* 00586d0b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00586d0e: mov edx, dword ptr [ebp + ecx*8 - 0x90] */ r_edx = R32((u32)(r_ebp+r_ecx*8+0xffffff70u));
    /* 00586d15: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00586d16: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00586d19: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00586d1f: mov ecx, dword ptr [ecx + eax*4 + 0x3b78] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x3b78u));
    /* 00586d26: call 0x5eccb0 */ r_esp -= 4; W32(r_esp, 0x586d2bu); f_005eccb0();
    /* 00586d2b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00586d2c: mov edx, esp */ r_edx = r_esp;
    /* 00586d2e: mov ax, word ptr [0x75ee1c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x75ee1cu))) & 0xffffu);
    /* 00586d34: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 00586d37: mov cl, byte ptr [0x75ee1e] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(0x75ee1eu))) & 0xffu);
    /* 00586d3d: mov byte ptr [edx + 2], cl */ W8((u32)(r_edx+0x2u), (u8)r_ecx);
    /* 00586d40: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00586d42: push 0x49 */ { u32 v = 0x49u; r_esp -= 4; W32(r_esp, v); }
    /* 00586d44: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00586d47: mov eax, dword ptr [ebp - 0x128] */ r_eax = R32((u32)(r_ebp+0xfffffed8u));
    /* 00586d4d: mov ecx, dword ptr [eax + edx*4 + 0x3b78] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x3b78u));
    /* 00586d54: call 0x5ecd00 */ r_esp -= 4; W32(r_esp, 0x586d59u); f_005ecd00();
    /* 00586d59: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00586d5c: mov edx, dword ptr [ebp - 0x128] */ r_edx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00586d62: mov eax, dword ptr [edx + ecx*4 + 0x3b78] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x3b78u));
    /* 00586d69: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00586d6c: mov edx, dword ptr [ebp - 0x128] */ r_edx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00586d72: mov ecx, dword ptr [edx + ecx*4 + 0x3b78] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x3b78u));
    /* 00586d79: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00586d7b: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 00586d7e: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x586d80u); call_ind(t); }
    /* 00586d80: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00586d82: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00586d85: mov ecx, dword ptr [ebp + eax*4 - 0x74] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffff8cu));
    /* 00586d89: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00586d8a: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00586d8d: mov eax, dword ptr [ebp - 0x128] */ r_eax = R32((u32)(r_ebp+0xfffffed8u));
    /* 00586d93: mov ecx, dword ptr [eax + edx*4 + 0x3b78] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x3b78u));
    /* 00586d9a: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00586d9d: mov eax, dword ptr [ebp - 0x128] */ r_eax = R32((u32)(r_ebp+0xfffffed8u));
    /* 00586da3: mov edx, dword ptr [eax + edx*4 + 0x3b78] */ r_edx = R32((u32)(r_eax+r_edx*4+0x3b78u));
    /* 00586daa: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00586dac: mov ecx, edx */ r_ecx = r_edx;
    /* 00586dae: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 00586db1: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x586db3u); call_ind(t); }
    /* 00586db3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00586db5: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00586db8: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00586dbe: mov edx, dword ptr [ecx + eax*4 + 0x3b78] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x3b78u));
    /* 00586dc5: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00586dc8: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00586dce: mov ecx, dword ptr [ecx + eax*4 + 0x3b78] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x3b78u));
    /* 00586dd5: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00586dd7: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00586dda: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x586ddcu); call_ind(t); }
    /* 00586ddc: jmp 0x586c06 */ goto L_00586c06;
L_00586de1:; BB(0x00586de1);
    /* 00586de1: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00586de7: cmp dword ptr [ecx + 0x3b8c], 0 */ {  u32 a = R32((u32)(r_ecx+0x3b8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00586dee: jne 0x586e55 */ if (!fZ) goto L_00586e55;
L_00586df0:; BB(0x00586df0);
    /* 00586df0: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 00586df5: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x586dfau); f_00686d82();
    /* 00586dfa: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00586dfd: mov dword ptr [ebp - 0xac], eax */ W32((u32)(r_ebp+0xffffff54u), r_eax);
    /* 00586e03: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00586e0a: cmp dword ptr [ebp - 0xac], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff54u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00586e11: je 0x586e26 */ if (fZ) goto L_00586e26;
L_00586e13:; BB(0x00586e13);
    /* 00586e13: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 00586e19: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x586e1eu); f_005ec5a0();
    /* 00586e1e: mov dword ptr [ebp - 0x134], eax */ W32((u32)(r_ebp+0xfffffeccu), r_eax);
    /* 00586e24: jmp 0x586e30 */ goto L_00586e30;
L_00586e26:; BB(0x00586e26);
    /* 00586e26: mov dword ptr [ebp - 0x134], 0 */ W32((u32)(r_ebp+0xfffffeccu), 0x0u);
L_00586e30:; BB(0x00586e30);
    /* 00586e30: mov edx, dword ptr [ebp - 0x134] */ r_edx = R32((u32)(r_ebp+0xfffffeccu));
    /* 00586e36: mov dword ptr [ebp - 0xa8], edx */ W32((u32)(r_ebp+0xffffff58u), r_edx);
    /* 00586e3c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00586e43: mov eax, dword ptr [ebp - 0x128] */ r_eax = R32((u32)(r_ebp+0xfffffed8u));
    /* 00586e49: mov ecx, dword ptr [ebp - 0xa8] */ r_ecx = R32((u32)(r_ebp+0xffffff58u));
    /* 00586e4f: mov dword ptr [eax + 0x3b8c], ecx */ W32((u32)(r_eax+0x3b8cu), r_ecx);
L_00586e55:; BB(0x00586e55);
    /* 00586e55: mov edx, dword ptr [ebp - 0x128] */ r_edx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00586e5b: mov eax, dword ptr [edx + 0x3b8c] */ r_eax = R32((u32)(r_edx+0x3b8cu));
    /* 00586e61: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00586e67: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 00586e6a: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00586e6f: mov edx, dword ptr [ebp - 0x128] */ r_edx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00586e75: mov eax, dword ptr [edx + 0x3b8c] */ r_eax = R32((u32)(r_edx+0x3b8cu));
    /* 00586e7b: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00586e81: mov ecx, dword ptr [ecx + 0x3b8c] */ r_ecx = R32((u32)(r_ecx+0x3b8cu));
    /* 00586e87: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00586e89: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00586e8f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x586e91u); call_ind(t); }
    /* 00586e91: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00586e92: mov ecx, esp */ r_ecx = r_esp;
    /* 00586e94: mov dx, word ptr [0x75ee1c] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(0x75ee1cu))) & 0xffffu);
    /* 00586e9b: mov word ptr [ecx], dx */ W16((u32)(r_ecx), (u16)r_edx);
    /* 00586e9e: mov al, byte ptr [0x75ee1e] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0x75ee1eu))) & 0xffu);
    /* 00586ea3: mov byte ptr [ecx + 2], al */ W8((u32)(r_ecx+0x2u), (u8)r_eax);
    /* 00586ea6: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00586ea8: push 0x2b */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 00586eaa: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00586eb0: mov ecx, dword ptr [ecx + 0x3b8c] */ r_ecx = R32((u32)(r_ecx+0x3b8cu));
    /* 00586eb6: call 0x5ecd00 */ r_esp -= 4; W32(r_esp, 0x586ebbu); f_005ecd00();
    /* 00586ebb: push 0x25 */ { u32 v = 0x25u; r_esp -= 4; W32(r_esp, v); }
    /* 00586ebd: mov edx, dword ptr [ebp - 0x128] */ r_edx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00586ec3: mov ecx, dword ptr [edx + 0x3b8c] */ r_ecx = R32((u32)(r_edx+0x3b8cu));
    /* 00586ec9: call 0x5ecc60 */ r_esp -= 4; W32(r_esp, 0x586eceu); f_005ecc60();
    /* 00586ece: push 0x2f */ { u32 v = 0x2fu; r_esp -= 4; W32(r_esp, v); }
    /* 00586ed0: mov eax, dword ptr [ebp - 0x128] */ r_eax = R32((u32)(r_ebp+0xfffffed8u));
    /* 00586ed6: mov ecx, dword ptr [eax + 0x3b8c] */ r_ecx = R32((u32)(r_eax+0x3b8cu));
    /* 00586edc: call 0x5eccb0 */ r_esp -= 4; W32(r_esp, 0x586ee1u); f_005eccb0();
    /* 00586ee1: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00586ee7: mov edx, dword ptr [ecx + 0x3b8c] */ r_edx = R32((u32)(r_ecx+0x3b8cu));
    /* 00586eed: mov eax, dword ptr [ebp - 0x128] */ r_eax = R32((u32)(r_ebp+0xfffffed8u));
    /* 00586ef3: mov ecx, dword ptr [eax + 0x3b8c] */ r_ecx = R32((u32)(r_eax+0x3b8cu));
    /* 00586ef9: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00586efb: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 00586efe: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x586f00u); call_ind(t); }
    /* 00586f00: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00586f02: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00586f08: mov edx, dword ptr [ecx + 0x3b8c] */ r_edx = R32((u32)(r_ecx+0x3b8cu));
    /* 00586f0e: mov eax, dword ptr [ebp - 0x128] */ r_eax = R32((u32)(r_ebp+0xfffffed8u));
    /* 00586f14: mov ecx, dword ptr [eax + 0x3b8c] */ r_ecx = R32((u32)(r_eax+0x3b8cu));
    /* 00586f1a: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00586f1c: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00586f1f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x586f21u); call_ind(t); }
    /* 00586f21: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 00586f23: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00586f25: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00586f2b: mov edx, dword ptr [ecx + 0x3b8c] */ r_edx = R32((u32)(r_ecx+0x3b8cu));
    /* 00586f31: mov eax, dword ptr [ebp - 0x128] */ r_eax = R32((u32)(r_ebp+0xfffffed8u));
    /* 00586f37: mov ecx, dword ptr [eax + 0x3b8c] */ r_ecx = R32((u32)(r_eax+0x3b8cu));
    /* 00586f3d: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00586f3f: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00586f42: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x586f44u); call_ind(t); }
    /* 00586f44: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00586f4a: cmp dword ptr [ecx + 0x3b84], 0 */ {  u32 a = R32((u32)(r_ecx+0x3b84u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00586f51: jne 0x586fb8 */ if (!fZ) goto L_00586fb8;
L_00586f53:; BB(0x00586f53);
    /* 00586f53: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 00586f58: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x586f5du); f_00686d82();
    /* 00586f5d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00586f60: mov dword ptr [ebp - 0xb4], eax */ W32((u32)(r_ebp+0xffffff4cu), r_eax);
    /* 00586f66: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 00586f6d: cmp dword ptr [ebp - 0xb4], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff4cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00586f74: je 0x586f89 */ if (fZ) goto L_00586f89;
L_00586f76:; BB(0x00586f76);
    /* 00586f76: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00586f7c: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x586f81u); f_005ec5a0();
    /* 00586f81: mov dword ptr [ebp - 0x138], eax */ W32((u32)(r_ebp+0xfffffec8u), r_eax);
    /* 00586f87: jmp 0x586f93 */ goto L_00586f93;
L_00586f89:; BB(0x00586f89);
    /* 00586f89: mov dword ptr [ebp - 0x138], 0 */ W32((u32)(r_ebp+0xfffffec8u), 0x0u);
L_00586f93:; BB(0x00586f93);
    /* 00586f93: mov edx, dword ptr [ebp - 0x138] */ r_edx = R32((u32)(r_ebp+0xfffffec8u));
    /* 00586f99: mov dword ptr [ebp - 0xb0], edx */ W32((u32)(r_ebp+0xffffff50u), r_edx);
    /* 00586f9f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00586fa6: mov eax, dword ptr [ebp - 0x128] */ r_eax = R32((u32)(r_ebp+0xfffffed8u));
    /* 00586fac: mov ecx, dword ptr [ebp - 0xb0] */ r_ecx = R32((u32)(r_ebp+0xffffff50u));
    /* 00586fb2: mov dword ptr [eax + 0x3b84], ecx */ W32((u32)(r_eax+0x3b84u), r_ecx);
L_00586fb8:; BB(0x00586fb8);
    /* 00586fb8: mov edx, dword ptr [ebp - 0x128] */ r_edx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00586fbe: mov eax, dword ptr [edx + 0x3b84] */ r_eax = R32((u32)(r_edx+0x3b84u));
    /* 00586fc4: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00586fca: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 00586fcd: push 0x6ccde8 */ { u32 v = 0x6ccde8u; r_esp -= 4; W32(r_esp, v); }
    /* 00586fd2: mov edx, dword ptr [ebp - 0x128] */ r_edx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00586fd8: mov eax, dword ptr [edx + 0x3b84] */ r_eax = R32((u32)(r_edx+0x3b84u));
    /* 00586fde: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00586fe4: mov ecx, dword ptr [ecx + 0x3b84] */ r_ecx = R32((u32)(r_ecx+0x3b84u));
    /* 00586fea: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00586fec: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00586ff2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x586ff4u); call_ind(t); }
    /* 00586ff4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00586ff5: mov ecx, esp */ r_ecx = r_esp;
    /* 00586ff7: mov dx, word ptr [0x75ee1c] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(0x75ee1cu))) & 0xffffu);
    /* 00586ffe: mov word ptr [ecx], dx */ W16((u32)(r_ecx), (u16)r_edx);
    /* 00587001: mov al, byte ptr [0x75ee1e] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0x75ee1eu))) & 0xffu);
    /* 00587006: mov byte ptr [ecx + 2], al */ W8((u32)(r_ecx+0x2u), (u8)r_eax);
    /* 00587009: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0058700b: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0058700d: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00587013: mov ecx, dword ptr [ecx + 0x3b84] */ r_ecx = R32((u32)(r_ecx+0x3b84u));
    /* 00587019: call 0x5ecd00 */ r_esp -= 4; W32(r_esp, 0x58701eu); f_005ecd00();
    /* 0058701e: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 00587020: mov edx, dword ptr [ebp - 0x128] */ r_edx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00587026: mov ecx, dword ptr [edx + 0x3b84] */ r_ecx = R32((u32)(r_edx+0x3b84u));
    /* 0058702c: call 0x5ecc60 */ r_esp -= 4; W32(r_esp, 0x587031u); f_005ecc60();
    /* 00587031: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 00587033: mov eax, dword ptr [ebp - 0x128] */ r_eax = R32((u32)(r_ebp+0xfffffed8u));
    /* 00587039: mov ecx, dword ptr [eax + 0x3b84] */ r_ecx = R32((u32)(r_eax+0x3b84u));
    /* 0058703f: call 0x5eccb0 */ r_esp -= 4; W32(r_esp, 0x587044u); f_005eccb0();
    /* 00587044: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 0058704a: mov edx, dword ptr [ecx + 0x3b84] */ r_edx = R32((u32)(r_ecx+0x3b84u));
    /* 00587050: mov eax, dword ptr [ebp - 0x128] */ r_eax = R32((u32)(r_ebp+0xfffffed8u));
    /* 00587056: mov ecx, dword ptr [eax + 0x3b84] */ r_ecx = R32((u32)(r_eax+0x3b84u));
    /* 0058705c: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0058705e: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 00587061: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x587063u); call_ind(t); }
    /* 00587063: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 00587065: push 0x151 */ { u32 v = 0x151u; r_esp -= 4; W32(r_esp, v); }
    /* 0058706a: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00587070: mov edx, dword ptr [ecx + 0x3b84] */ r_edx = R32((u32)(r_ecx+0x3b84u));
    /* 00587076: mov eax, dword ptr [ebp - 0x128] */ r_eax = R32((u32)(r_ebp+0xfffffed8u));
    /* 0058707c: mov ecx, dword ptr [eax + 0x3b84] */ r_ecx = R32((u32)(r_eax+0x3b84u));
    /* 00587082: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00587084: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00587087: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x587089u); call_ind(t); }
    /* 00587089: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0058708b: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00587091: mov edx, dword ptr [ecx + 0x3b84] */ r_edx = R32((u32)(r_ecx+0x3b84u));
    /* 00587097: mov eax, dword ptr [ebp - 0x128] */ r_eax = R32((u32)(r_ebp+0xfffffed8u));
    /* 0058709d: mov ecx, dword ptr [eax + 0x3b84] */ r_ecx = R32((u32)(r_eax+0x3b84u));
    /* 005870a3: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005870a5: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 005870a8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5870aau); call_ind(t); }
    /* 005870aa: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 005870b0: cmp dword ptr [ecx + 0x3b88], 0 */ {  u32 a = R32((u32)(r_ecx+0x3b88u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005870b7: jne 0x58711e */ if (!fZ) goto L_0058711e;
L_005870b9:; BB(0x005870b9);
    /* 005870b9: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 005870be: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5870c3u); f_00686d82();
    /* 005870c3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005870c6: mov dword ptr [ebp - 0xbc], eax */ W32((u32)(r_ebp+0xffffff44u), r_eax);
    /* 005870cc: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 005870d3: cmp dword ptr [ebp - 0xbc], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff44u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005870da: je 0x5870ef */ if (fZ) goto L_005870ef;
L_005870dc:; BB(0x005870dc);
    /* 005870dc: mov ecx, dword ptr [ebp - 0xbc] */ r_ecx = R32((u32)(r_ebp+0xffffff44u));
    /* 005870e2: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x5870e7u); f_005ec5a0();
    /* 005870e7: mov dword ptr [ebp - 0x13c], eax */ W32((u32)(r_ebp+0xfffffec4u), r_eax);
    /* 005870ed: jmp 0x5870f9 */ goto L_005870f9;
L_005870ef:; BB(0x005870ef);
    /* 005870ef: mov dword ptr [ebp - 0x13c], 0 */ W32((u32)(r_ebp+0xfffffec4u), 0x0u);
L_005870f9:; BB(0x005870f9);
    /* 005870f9: mov edx, dword ptr [ebp - 0x13c] */ r_edx = R32((u32)(r_ebp+0xfffffec4u));
    /* 005870ff: mov dword ptr [ebp - 0xb8], edx */ W32((u32)(r_ebp+0xffffff48u), r_edx);
    /* 00587105: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0058710c: mov eax, dword ptr [ebp - 0x128] */ r_eax = R32((u32)(r_ebp+0xfffffed8u));
    /* 00587112: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 00587118: mov dword ptr [eax + 0x3b88], ecx */ W32((u32)(r_eax+0x3b88u), r_ecx);
L_0058711e:; BB(0x0058711e);
    /* 0058711e: mov edx, dword ptr [ebp - 0x128] */ r_edx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00587124: mov eax, dword ptr [edx + 0x3b88] */ r_eax = R32((u32)(r_edx+0x3b88u));
    /* 0058712a: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00587130: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 00587133: push 0x6ccdd4 */ { u32 v = 0x6ccdd4u; r_esp -= 4; W32(r_esp, v); }
    /* 00587138: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x58713du); f_00630f40();
    /* 0058713d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00587140: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00587141: mov edx, dword ptr [ebp - 0x128] */ r_edx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00587147: mov eax, dword ptr [edx + 0x3b88] */ r_eax = R32((u32)(r_edx+0x3b88u));
    /* 0058714d: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00587153: mov ecx, dword ptr [ecx + 0x3b88] */ r_ecx = R32((u32)(r_ecx+0x3b88u));
    /* 00587159: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0058715b: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00587161: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x587163u); call_ind(t); }
    /* 00587163: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00587164: mov ecx, esp */ r_ecx = r_esp;
    /* 00587166: mov dx, word ptr [0x75ee1c] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(0x75ee1cu))) & 0xffffu);
    /* 0058716d: mov word ptr [ecx], dx */ W16((u32)(r_ecx), (u16)r_edx);
    /* 00587170: mov al, byte ptr [0x75ee1e] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0x75ee1eu))) & 0xffu);
    /* 00587175: mov byte ptr [ecx + 2], al */ W8((u32)(r_ecx+0x2u), (u8)r_eax);
    /* 00587178: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0058717a: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0058717c: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00587182: mov ecx, dword ptr [ecx + 0x3b88] */ r_ecx = R32((u32)(r_ecx+0x3b88u));
    /* 00587188: call 0x5ecd00 */ r_esp -= 4; W32(r_esp, 0x58718du); f_005ecd00();
    /* 0058718d: push 0xb9 */ { u32 v = 0xb9u; r_esp -= 4; W32(r_esp, v); }
    /* 00587192: mov edx, dword ptr [ebp - 0x128] */ r_edx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00587198: mov ecx, dword ptr [edx + 0x3b88] */ r_ecx = R32((u32)(r_edx+0x3b88u));
    /* 0058719e: call 0x5ecc60 */ r_esp -= 4; W32(r_esp, 0x5871a3u); f_005ecc60();
    /* 005871a3: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 005871a5: mov eax, dword ptr [ebp - 0x128] */ r_eax = R32((u32)(r_ebp+0xfffffed8u));
    /* 005871ab: mov ecx, dword ptr [eax + 0x3b88] */ r_ecx = R32((u32)(r_eax+0x3b88u));
    /* 005871b1: call 0x5eccb0 */ r_esp -= 4; W32(r_esp, 0x5871b6u); f_005eccb0();
    /* 005871b6: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 005871bc: mov edx, dword ptr [ecx + 0x3b88] */ r_edx = R32((u32)(r_ecx+0x3b88u));
    /* 005871c2: mov eax, dword ptr [ebp - 0x128] */ r_eax = R32((u32)(r_ebp+0xfffffed8u));
    /* 005871c8: mov ecx, dword ptr [eax + 0x3b88] */ r_ecx = R32((u32)(r_eax+0x3b88u));
    /* 005871ce: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005871d0: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 005871d3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5871d5u); call_ind(t); }
    /* 005871d5: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 005871d7: push 0x151 */ { u32 v = 0x151u; r_esp -= 4; W32(r_esp, v); }
    /* 005871dc: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 005871e2: mov edx, dword ptr [ecx + 0x3b88] */ r_edx = R32((u32)(r_ecx+0x3b88u));
    /* 005871e8: mov eax, dword ptr [ebp - 0x128] */ r_eax = R32((u32)(r_ebp+0xfffffed8u));
    /* 005871ee: mov ecx, dword ptr [eax + 0x3b88] */ r_ecx = R32((u32)(r_eax+0x3b88u));
    /* 005871f4: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005871f6: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 005871f9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5871fbu); call_ind(t); }
    /* 005871fb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005871fd: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00587203: mov edx, dword ptr [ecx + 0x3b88] */ r_edx = R32((u32)(r_ecx+0x3b88u));
    /* 00587209: mov eax, dword ptr [ebp - 0x128] */ r_eax = R32((u32)(r_ebp+0xfffffed8u));
    /* 0058720f: mov ecx, dword ptr [eax + 0x3b88] */ r_ecx = R32((u32)(r_eax+0x3b88u));
    /* 00587215: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00587217: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0058721a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58721cu); call_ind(t); }
    /* 0058721c: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00587222: cmp dword ptr [ecx + 0x3b90], 0 */ {  u32 a = R32((u32)(r_ecx+0x3b90u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00587229: jne 0x587290 */ if (!fZ) goto L_00587290;
L_0058722b:; BB(0x0058722b);
    /* 0058722b: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 00587230: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x587235u); f_00686d82();
    /* 00587235: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00587238: mov dword ptr [ebp - 0xc4], eax */ W32((u32)(r_ebp+0xffffff3cu), r_eax);
    /* 0058723e: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 00587245: cmp dword ptr [ebp - 0xc4], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff3cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058724c: je 0x587261 */ if (fZ) goto L_00587261;
L_0058724e:; BB(0x0058724e);
    /* 0058724e: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 00587254: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x587259u); f_005ec5a0();
    /* 00587259: mov dword ptr [ebp - 0x140], eax */ W32((u32)(r_ebp+0xfffffec0u), r_eax);
    /* 0058725f: jmp 0x58726b */ goto L_0058726b;
L_00587261:; BB(0x00587261);
    /* 00587261: mov dword ptr [ebp - 0x140], 0 */ W32((u32)(r_ebp+0xfffffec0u), 0x0u);
L_0058726b:; BB(0x0058726b);
    /* 0058726b: mov edx, dword ptr [ebp - 0x140] */ r_edx = R32((u32)(r_ebp+0xfffffec0u));
    /* 00587271: mov dword ptr [ebp - 0xc0], edx */ W32((u32)(r_ebp+0xffffff40u), r_edx);
    /* 00587277: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0058727e: mov eax, dword ptr [ebp - 0x128] */ r_eax = R32((u32)(r_ebp+0xfffffed8u));
    /* 00587284: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 0058728a: mov dword ptr [eax + 0x3b90], ecx */ W32((u32)(r_eax+0x3b90u), r_ecx);
L_00587290:; BB(0x00587290);
    /* 00587290: mov edx, dword ptr [ebp - 0x128] */ r_edx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00587296: mov eax, dword ptr [edx + 0x3b90] */ r_eax = R32((u32)(r_edx+0x3b90u));
    /* 0058729c: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 005872a2: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 005872a5: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 005872aa: mov edx, dword ptr [ebp - 0x128] */ r_edx = R32((u32)(r_ebp+0xfffffed8u));
    /* 005872b0: mov eax, dword ptr [edx + 0x3b90] */ r_eax = R32((u32)(r_edx+0x3b90u));
    /* 005872b6: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 005872bc: mov ecx, dword ptr [ecx + 0x3b90] */ r_ecx = R32((u32)(r_ecx+0x3b90u));
    /* 005872c2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005872c4: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 005872ca: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5872ccu); call_ind(t); }
    /* 005872cc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005872cd: mov ecx, esp */ r_ecx = r_esp;
    /* 005872cf: mov dx, word ptr [0x75ee1c] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(0x75ee1cu))) & 0xffffu);
    /* 005872d6: mov word ptr [ecx], dx */ W16((u32)(r_ecx), (u16)r_edx);
    /* 005872d9: mov al, byte ptr [0x75ee1e] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0x75ee1eu))) & 0xffu);
    /* 005872de: mov byte ptr [ecx + 2], al */ W8((u32)(r_ecx+0x2u), (u8)r_eax);
    /* 005872e1: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005872e3: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 005872e5: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 005872eb: mov ecx, dword ptr [ecx + 0x3b90] */ r_ecx = R32((u32)(r_ecx+0x3b90u));
    /* 005872f1: call 0x5ecd00 */ r_esp -= 4; W32(r_esp, 0x5872f6u); f_005ecd00();
    /* 005872f6: push 0x6b */ { u32 v = 0x6bu; r_esp -= 4; W32(r_esp, v); }
    /* 005872f8: mov edx, dword ptr [ebp - 0x128] */ r_edx = R32((u32)(r_ebp+0xfffffed8u));
    /* 005872fe: mov ecx, dword ptr [edx + 0x3b90] */ r_ecx = R32((u32)(r_edx+0x3b90u));
    /* 00587304: call 0x5ecc60 */ r_esp -= 4; W32(r_esp, 0x587309u); f_005ecc60();
    /* 00587309: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 0058730b: mov eax, dword ptr [ebp - 0x128] */ r_eax = R32((u32)(r_ebp+0xfffffed8u));
    /* 00587311: mov ecx, dword ptr [eax + 0x3b90] */ r_ecx = R32((u32)(r_eax+0x3b90u));
    /* 00587317: call 0x5eccb0 */ r_esp -= 4; W32(r_esp, 0x58731cu); f_005eccb0();
    /* 0058731c: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00587322: mov edx, dword ptr [ecx + 0x3b90] */ r_edx = R32((u32)(r_ecx+0x3b90u));
    /* 00587328: mov eax, dword ptr [ebp - 0x128] */ r_eax = R32((u32)(r_ebp+0xfffffed8u));
    /* 0058732e: mov ecx, dword ptr [eax + 0x3b90] */ r_ecx = R32((u32)(r_eax+0x3b90u));
    /* 00587334: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00587336: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 00587339: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58733bu); call_ind(t); }
    /* 0058733b: push 0xcc */ { u32 v = 0xccu; r_esp -= 4; W32(r_esp, v); }
    /* 00587340: push 0x56 */ { u32 v = 0x56u; r_esp -= 4; W32(r_esp, v); }
    /* 00587342: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00587348: mov edx, dword ptr [ecx + 0x3b90] */ r_edx = R32((u32)(r_ecx+0x3b90u));
    /* 0058734e: mov eax, dword ptr [ebp - 0x128] */ r_eax = R32((u32)(r_ebp+0xfffffed8u));
    /* 00587354: mov ecx, dword ptr [eax + 0x3b90] */ r_ecx = R32((u32)(r_eax+0x3b90u));
    /* 0058735a: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0058735c: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0058735f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x587361u); call_ind(t); }
    /* 00587361: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00587363: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00587369: mov edx, dword ptr [ecx + 0x3b90] */ r_edx = R32((u32)(r_ecx+0x3b90u));
    /* 0058736f: mov eax, dword ptr [ebp - 0x128] */ r_eax = R32((u32)(r_ebp+0xfffffed8u));
    /* 00587375: mov ecx, dword ptr [eax + 0x3b90] */ r_ecx = R32((u32)(r_eax+0x3b90u));
    /* 0058737b: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0058737d: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00587380: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x587382u); call_ind(t); }
    /* 00587382: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00587388: cmp dword ptr [ecx + 0x3b94], 0 */ {  u32 a = R32((u32)(r_ecx+0x3b94u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058738f: jne 0x5873f6 */ if (!fZ) goto L_005873f6;
L_00587391:; BB(0x00587391);
    /* 00587391: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 00587396: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x58739bu); f_00686d82();
    /* 0058739b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058739e: mov dword ptr [ebp - 0xcc], eax */ W32((u32)(r_ebp+0xffffff34u), r_eax);
    /* 005873a4: mov dword ptr [ebp - 4], 6 */ W32((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 005873ab: cmp dword ptr [ebp - 0xcc], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff34u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005873b2: je 0x5873c7 */ if (fZ) goto L_005873c7;
L_005873b4:; BB(0x005873b4);
    /* 005873b4: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 005873ba: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x5873bfu); f_005ec5a0();
    /* 005873bf: mov dword ptr [ebp - 0x144], eax */ W32((u32)(r_ebp+0xfffffebcu), r_eax);
    /* 005873c5: jmp 0x5873d1 */ goto L_005873d1;
L_005873c7:; BB(0x005873c7);
    /* 005873c7: mov dword ptr [ebp - 0x144], 0 */ W32((u32)(r_ebp+0xfffffebcu), 0x0u);
L_005873d1:; BB(0x005873d1);
    /* 005873d1: mov edx, dword ptr [ebp - 0x144] */ r_edx = R32((u32)(r_ebp+0xfffffebcu));
    /* 005873d7: mov dword ptr [ebp - 0xc8], edx */ W32((u32)(r_ebp+0xffffff38u), r_edx);
    /* 005873dd: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005873e4: mov eax, dword ptr [ebp - 0x128] */ r_eax = R32((u32)(r_ebp+0xfffffed8u));
    /* 005873ea: mov ecx, dword ptr [ebp - 0xc8] */ r_ecx = R32((u32)(r_ebp+0xffffff38u));
    /* 005873f0: mov dword ptr [eax + 0x3b94], ecx */ W32((u32)(r_eax+0x3b94u), r_ecx);
L_005873f6:; BB(0x005873f6);
    /* 005873f6: mov edx, dword ptr [ebp - 0x128] */ r_edx = R32((u32)(r_ebp+0xfffffed8u));
    /* 005873fc: mov eax, dword ptr [edx + 0x3b94] */ r_eax = R32((u32)(r_edx+0x3b94u));
    /* 00587402: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00587408: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 0058740b: push 0x6ccdd0 */ { u32 v = 0x6ccdd0u; r_esp -= 4; W32(r_esp, v); }
    /* 00587410: mov edx, dword ptr [ebp - 0x128] */ r_edx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00587416: mov eax, dword ptr [edx + 0x3b94] */ r_eax = R32((u32)(r_edx+0x3b94u));
    /* 0058741c: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00587422: mov ecx, dword ptr [ecx + 0x3b94] */ r_ecx = R32((u32)(r_ecx+0x3b94u));
    /* 00587428: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0058742a: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00587430: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x587432u); call_ind(t); }
    /* 00587432: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00587433: mov ecx, esp */ r_ecx = r_esp;
    /* 00587435: mov dx, word ptr [0x75ee1c] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(0x75ee1cu))) & 0xffffu);
    /* 0058743c: mov word ptr [ecx], dx */ W16((u32)(r_ecx), (u16)r_edx);
    /* 0058743f: mov al, byte ptr [0x75ee1e] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0x75ee1eu))) & 0xffu);
    /* 00587444: mov byte ptr [ecx + 2], al */ W8((u32)(r_ecx+0x2u), (u8)r_eax);
    /* 00587447: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00587449: push 0x2b */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 0058744b: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00587451: mov ecx, dword ptr [ecx + 0x3b94] */ r_ecx = R32((u32)(r_ecx+0x3b94u));
    /* 00587457: call 0x5ecd00 */ r_esp -= 4; W32(r_esp, 0x58745cu); f_005ecd00();
    /* 0058745c: push 0x58 */ { u32 v = 0x58u; r_esp -= 4; W32(r_esp, v); }
    /* 0058745e: mov edx, dword ptr [ebp - 0x128] */ r_edx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00587464: mov ecx, dword ptr [edx + 0x3b94] */ r_ecx = R32((u32)(r_edx+0x3b94u));
    /* 0058746a: call 0x5ecc60 */ r_esp -= 4; W32(r_esp, 0x58746fu); f_005ecc60();
    /* 0058746f: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 00587471: mov eax, dword ptr [ebp - 0x128] */ r_eax = R32((u32)(r_ebp+0xfffffed8u));
    /* 00587477: mov ecx, dword ptr [eax + 0x3b94] */ r_ecx = R32((u32)(r_eax+0x3b94u));
    /* 0058747d: call 0x5eccb0 */ r_esp -= 4; W32(r_esp, 0x587482u); f_005eccb0();
    /* 00587482: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00587488: mov edx, dword ptr [ecx + 0x3b94] */ r_edx = R32((u32)(r_ecx+0x3b94u));
    /* 0058748e: mov eax, dword ptr [ebp - 0x128] */ r_eax = R32((u32)(r_ebp+0xfffffed8u));
    /* 00587494: mov ecx, dword ptr [eax + 0x3b94] */ r_ecx = R32((u32)(r_eax+0x3b94u));
    /* 0058749a: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0058749c: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0058749f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5874a1u); call_ind(t); }
    /* 005874a1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005874a3: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 005874a9: mov edx, dword ptr [ecx + 0x3b94] */ r_edx = R32((u32)(r_ecx+0x3b94u));
    /* 005874af: mov eax, dword ptr [ebp - 0x128] */ r_eax = R32((u32)(r_ebp+0xfffffed8u));
    /* 005874b5: mov ecx, dword ptr [eax + 0x3b94] */ r_ecx = R32((u32)(r_eax+0x3b94u));
    /* 005874bb: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005874bd: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 005874c0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5874c2u); call_ind(t); }
    /* 005874c2: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 005874c4: push 0xaa */ { u32 v = 0xaau; r_esp -= 4; W32(r_esp, v); }
    /* 005874c9: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 005874cf: mov edx, dword ptr [ecx + 0x3b94] */ r_edx = R32((u32)(r_ecx+0x3b94u));
    /* 005874d5: mov eax, dword ptr [ebp - 0x128] */ r_eax = R32((u32)(r_ebp+0xfffffed8u));
    /* 005874db: mov ecx, dword ptr [eax + 0x3b94] */ r_ecx = R32((u32)(r_eax+0x3b94u));
    /* 005874e1: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005874e3: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 005874e6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5874e8u); call_ind(t); }
    /* 005874e8: push 0x1fc */ { u32 v = 0x1fcu; r_esp -= 4; W32(r_esp, v); }
    /* 005874ed: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5874f2u); f_00686d82();
    /* 005874f2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005874f5: mov dword ptr [ebp - 0xd4], eax */ W32((u32)(r_ebp+0xffffff2cu), r_eax);
    /* 005874fb: mov dword ptr [ebp - 4], 7 */ W32((u32)(r_ebp+0xfffffffcu), 0x7u);
    /* 00587502: cmp dword ptr [ebp - 0xd4], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff2cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00587509: je 0x58751e */ if (fZ) goto L_0058751e;
L_0058750b:; BB(0x0058750b);
    /* 0058750b: mov ecx, dword ptr [ebp - 0xd4] */ r_ecx = R32((u32)(r_ebp+0xffffff2cu));
    /* 00587511: call 0x58d160 */ r_esp -= 4; W32(r_esp, 0x587516u); f_0058d160();
    /* 00587516: mov dword ptr [ebp - 0x148], eax */ W32((u32)(r_ebp+0xfffffeb8u), r_eax);
    /* 0058751c: jmp 0x587528 */ goto L_00587528;
L_0058751e:; BB(0x0058751e);
    /* 0058751e: mov dword ptr [ebp - 0x148], 0 */ W32((u32)(r_ebp+0xfffffeb8u), 0x0u);
L_00587528:; BB(0x00587528);
    /* 00587528: mov ecx, dword ptr [ebp - 0x148] */ r_ecx = R32((u32)(r_ebp+0xfffffeb8u));
    /* 0058752e: mov dword ptr [ebp - 0xd0], ecx */ W32((u32)(r_ebp+0xffffff30u), r_ecx);
    /* 00587534: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0058753b: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0058753d: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0058753f: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00587541: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00587543: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00587545: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 00587547: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 00587549: push 0x2b */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 0058754b: push 0x6b83fc */ { u32 v = 0x6b83fcu; r_esp -= 4; W32(r_esp, v); }
    /* 00587550: push 0x4c */ { u32 v = 0x4cu; r_esp -= 4; W32(r_esp, v); }
    /* 00587552: push 0x44 */ { u32 v = 0x44u; r_esp -= 4; W32(r_esp, v); }
    /* 00587554: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00587556: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00587558: mov edx, dword ptr [ebp - 0xd0] */ r_edx = R32((u32)(r_ebp+0xffffff30u));
    /* 0058755e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058755f: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00587565: call 0x5fa6a0 */ r_esp -= 4; W32(r_esp, 0x58756au); f_005fa6a0();
    /* 0058756a: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00587570: mov dword ptr [ecx + 0x320], eax */ W32((u32)(r_ecx+0x320u), r_eax);
    /* 00587576: mov edx, dword ptr [ebp - 0x128] */ r_edx = R32((u32)(r_ebp+0xfffffed8u));
    /* 0058757c: mov ecx, dword ptr [edx + 0x320] */ r_ecx = R32((u32)(r_edx+0x320u));
    /* 00587582: call 0x60c330 */ r_esp -= 4; W32(r_esp, 0x587587u); f_0060c330();
    /* 00587587: mov eax, dword ptr [ebp - 0x128] */ r_eax = R32((u32)(r_ebp+0xfffffed8u));
    /* 0058758d: mov ecx, dword ptr [eax + 0x320] */ r_ecx = R32((u32)(r_eax+0x320u));
    /* 00587593: mov dword ptr [ebp - 0x120], ecx */ W32((u32)(r_ebp+0xfffffee0u), r_ecx);
    /* 00587599: mov edx, dword ptr [ebp - 0x120] */ r_edx = R32((u32)(r_ebp+0xfffffee0u));
    /* 0058759f: mov byte ptr [edx + 0x9d], 1 */ W8((u32)(r_edx+0x9du), 0x1u);
    /* 005875a6: mov eax, dword ptr [ebp - 0x128] */ r_eax = R32((u32)(r_ebp+0xfffffed8u));
    /* 005875ac: mov ecx, dword ptr [eax + 0x320] */ r_ecx = R32((u32)(r_eax+0x320u));
    /* 005875b2: call 0x60c560 */ r_esp -= 4; W32(r_esp, 0x5875b7u); f_0060c560();
    /* 005875b7: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 005875bd: mov edx, dword ptr [ecx + 0x320] */ r_edx = R32((u32)(r_ecx+0x320u));
    /* 005875c3: mov dword ptr [ebp - 0x124], edx */ W32((u32)(r_ebp+0xfffffedcu), r_edx);
    /* 005875c9: mov eax, dword ptr [ebp - 0x124] */ r_eax = R32((u32)(r_ebp+0xfffffedcu));
    /* 005875cf: mov dword ptr [eax + 0xa0], 1 */ W32((u32)(r_eax+0xa0u), 0x1u);
    /* 005875d9: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 005875df: cmp dword ptr [ecx + 0x3b70], 0 */ {  u32 a = R32((u32)(r_ecx+0x3b70u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005875e6: jne 0x58764d */ if (!fZ) goto L_0058764d;
L_005875e8:; BB(0x005875e8);
    /* 005875e8: push 0x228 */ { u32 v = 0x228u; r_esp -= 4; W32(r_esp, v); }
    /* 005875ed: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5875f2u); f_00686d82();
    /* 005875f2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005875f5: mov dword ptr [ebp - 0xdc], eax */ W32((u32)(r_ebp+0xffffff24u), r_eax);
    /* 005875fb: mov dword ptr [ebp - 4], 8 */ W32((u32)(r_ebp+0xfffffffcu), 0x8u);
    /* 00587602: cmp dword ptr [ebp - 0xdc], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff24u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00587609: je 0x58761e */ if (fZ) goto L_0058761e;
L_0058760b:; BB(0x0058760b);
    /* 0058760b: mov ecx, dword ptr [ebp - 0xdc] */ r_ecx = R32((u32)(r_ebp+0xffffff24u));
    /* 00587611: call 0x58b140 */ r_esp -= 4; W32(r_esp, 0x587616u); f_0058b140();
    /* 00587616: mov dword ptr [ebp - 0x14c], eax */ W32((u32)(r_ebp+0xfffffeb4u), r_eax);
    /* 0058761c: jmp 0x587628 */ goto L_00587628;
L_0058761e:; BB(0x0058761e);
    /* 0058761e: mov dword ptr [ebp - 0x14c], 0 */ W32((u32)(r_ebp+0xfffffeb4u), 0x0u);
L_00587628:; BB(0x00587628);
    /* 00587628: mov edx, dword ptr [ebp - 0x14c] */ r_edx = R32((u32)(r_ebp+0xfffffeb4u));
    /* 0058762e: mov dword ptr [ebp - 0xd8], edx */ W32((u32)(r_ebp+0xffffff28u), r_edx);
    /* 00587634: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0058763b: mov eax, dword ptr [ebp - 0x128] */ r_eax = R32((u32)(r_ebp+0xfffffed8u));
    /* 00587641: mov ecx, dword ptr [ebp - 0xd8] */ r_ecx = R32((u32)(r_ebp+0xffffff28u));
    /* 00587647: mov dword ptr [eax + 0x3b70], ecx */ W32((u32)(r_eax+0x3b70u), r_ecx);
L_0058764d:; BB(0x0058764d);
    /* 0058764d: mov edx, dword ptr [ebp - 0x128] */ r_edx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00587653: mov eax, dword ptr [edx + 0x3b70] */ r_eax = R32((u32)(r_edx+0x3b70u));
    /* 00587659: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 0058765f: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 00587662: mov edx, dword ptr [ebp - 0x128] */ r_edx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00587668: mov eax, dword ptr [edx + 0x3b70] */ r_eax = R32((u32)(r_edx+0x3b70u));
    /* 0058766e: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00587674: mov ecx, dword ptr [ecx + 0x3b70] */ r_ecx = R32((u32)(r_ecx+0x3b70u));
    /* 0058767a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0058767c: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0058767f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x587681u); call_ind(t); }
    /* 00587681: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 00587683: push 0x113 */ { u32 v = 0x113u; r_esp -= 4; W32(r_esp, v); }
    /* 00587688: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 0058768e: mov edx, dword ptr [ecx + 0x3b70] */ r_edx = R32((u32)(r_ecx+0x3b70u));
    /* 00587694: mov eax, dword ptr [ebp - 0x128] */ r_eax = R32((u32)(r_ebp+0xfffffed8u));
    /* 0058769a: mov ecx, dword ptr [eax + 0x3b70] */ r_ecx = R32((u32)(r_eax+0x3b70u));
    /* 005876a0: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005876a2: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 005876a5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5876a7u); call_ind(t); }
    /* 005876a7: push 0x30dfba */ { u32 v = 0x30dfbau; r_esp -= 4; W32(r_esp, v); }
    /* 005876ac: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 005876b2: mov ecx, dword ptr [ecx + 0x3b70] */ r_ecx = R32((u32)(r_ecx+0x3b70u));
    /* 005876b8: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x5876bdu); f_005eaf00();
    /* 005876bd: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 005876bf: mov edx, dword ptr [ebp - 0x128] */ r_edx = R32((u32)(r_ebp+0xfffffed8u));
    /* 005876c5: mov eax, dword ptr [edx + 0x3b70] */ r_eax = R32((u32)(r_edx+0x3b70u));
    /* 005876cb: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 005876d1: mov ecx, dword ptr [ecx + 0x3b70] */ r_ecx = R32((u32)(r_ecx+0x3b70u));
    /* 005876d7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005876d9: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 005876dc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5876deu); call_ind(t); }
    /* 005876de: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 005876e4: cmp dword ptr [ecx + 0x3b98], 0 */ {  u32 a = R32((u32)(r_ecx+0x3b98u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005876eb: jne 0x587752 */ if (!fZ) goto L_00587752;
L_005876ed:; BB(0x005876ed);
    /* 005876ed: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 005876f2: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5876f7u); f_00686d82();
    /* 005876f7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005876fa: mov dword ptr [ebp - 0xe4], eax */ W32((u32)(r_ebp+0xffffff1cu), r_eax);
    /* 00587700: mov dword ptr [ebp - 4], 9 */ W32((u32)(r_ebp+0xfffffffcu), 0x9u);
    /* 00587707: cmp dword ptr [ebp - 0xe4], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff1cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058770e: je 0x587723 */ if (fZ) goto L_00587723;
L_00587710:; BB(0x00587710);
    /* 00587710: mov ecx, dword ptr [ebp - 0xe4] */ r_ecx = R32((u32)(r_ebp+0xffffff1cu));
    /* 00587716: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x58771bu); f_005ec5a0();
    /* 0058771b: mov dword ptr [ebp - 0x150], eax */ W32((u32)(r_ebp+0xfffffeb0u), r_eax);
    /* 00587721: jmp 0x58772d */ goto L_0058772d;
L_00587723:; BB(0x00587723);
    /* 00587723: mov dword ptr [ebp - 0x150], 0 */ W32((u32)(r_ebp+0xfffffeb0u), 0x0u);
L_0058772d:; BB(0x0058772d);
    /* 0058772d: mov edx, dword ptr [ebp - 0x150] */ r_edx = R32((u32)(r_ebp+0xfffffeb0u));
    /* 00587733: mov dword ptr [ebp - 0xe0], edx */ W32((u32)(r_ebp+0xffffff20u), r_edx);
    /* 00587739: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00587740: mov eax, dword ptr [ebp - 0x128] */ r_eax = R32((u32)(r_ebp+0xfffffed8u));
    /* 00587746: mov ecx, dword ptr [ebp - 0xe0] */ r_ecx = R32((u32)(r_ebp+0xffffff20u));
    /* 0058774c: mov dword ptr [eax + 0x3b98], ecx */ W32((u32)(r_eax+0x3b98u), r_ecx);
L_00587752:; BB(0x00587752);
    /* 00587752: mov edx, dword ptr [ebp - 0x128] */ r_edx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00587758: mov eax, dword ptr [edx + 0x3b98] */ r_eax = R32((u32)(r_edx+0x3b98u));
    /* 0058775e: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00587764: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 00587767: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0058776c: mov edx, dword ptr [ebp - 0x128] */ r_edx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00587772: mov eax, dword ptr [edx + 0x3b98] */ r_eax = R32((u32)(r_edx+0x3b98u));
    /* 00587778: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 0058777e: mov ecx, dword ptr [ecx + 0x3b98] */ r_ecx = R32((u32)(r_ecx+0x3b98u));
    /* 00587784: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00587786: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0058778c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58778eu); call_ind(t); }
    /* 0058778e: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00587794: mov edx, dword ptr [ecx + 0x3b98] */ r_edx = R32((u32)(r_ecx+0x3b98u));
    /* 0058779a: mov eax, dword ptr [ebp - 0x128] */ r_eax = R32((u32)(r_ebp+0xfffffed8u));
    /* 005877a0: mov ecx, dword ptr [eax + 0x3b98] */ r_ecx = R32((u32)(r_eax+0x3b98u));
    /* 005877a6: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005877a8: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 005877ab: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5877adu); call_ind(t); }
    /* 005877ad: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005877ae: mov ecx, esp */ r_ecx = r_esp;
    /* 005877b0: mov dx, word ptr [0x75ee1c] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(0x75ee1cu))) & 0xffffu);
    /* 005877b7: mov word ptr [ecx], dx */ W16((u32)(r_ecx), (u16)r_edx);
    /* 005877ba: mov al, byte ptr [0x75ee1e] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0x75ee1eu))) & 0xffu);
    /* 005877bf: mov byte ptr [ecx + 2], al */ W8((u32)(r_ecx+0x2u), (u8)r_eax);
    /* 005877c2: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005877c4: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 005877c6: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 005877cc: mov ecx, dword ptr [ecx + 0x3b98] */ r_ecx = R32((u32)(r_ecx+0x3b98u));
    /* 005877d2: call 0x5ecd00 */ r_esp -= 4; W32(r_esp, 0x5877d7u); f_005ecd00();
    /* 005877d7: push 0xb9 */ { u32 v = 0xb9u; r_esp -= 4; W32(r_esp, v); }
    /* 005877dc: mov edx, dword ptr [ebp - 0x128] */ r_edx = R32((u32)(r_ebp+0xfffffed8u));
    /* 005877e2: mov ecx, dword ptr [edx + 0x3b98] */ r_ecx = R32((u32)(r_edx+0x3b98u));
    /* 005877e8: call 0x5ecc60 */ r_esp -= 4; W32(r_esp, 0x5877edu); f_005ecc60();
    /* 005877ed: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 005877ef: mov eax, dword ptr [ebp - 0x128] */ r_eax = R32((u32)(r_ebp+0xfffffed8u));
    /* 005877f5: mov ecx, dword ptr [eax + 0x3b98] */ r_ecx = R32((u32)(r_eax+0x3b98u));
    /* 005877fb: call 0x5eccb0 */ r_esp -= 4; W32(r_esp, 0x587800u); f_005eccb0();
    /* 00587800: push 0x46 */ { u32 v = 0x46u; r_esp -= 4; W32(r_esp, v); }
    /* 00587802: push 0x151 */ { u32 v = 0x151u; r_esp -= 4; W32(r_esp, v); }
    /* 00587807: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 0058780d: mov edx, dword ptr [ecx + 0x3b98] */ r_edx = R32((u32)(r_ecx+0x3b98u));
    /* 00587813: mov eax, dword ptr [ebp - 0x128] */ r_eax = R32((u32)(r_ebp+0xfffffed8u));
    /* 00587819: mov ecx, dword ptr [eax + 0x3b98] */ r_ecx = R32((u32)(r_eax+0x3b98u));
    /* 0058781f: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00587821: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00587824: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x587826u); call_ind(t); }
    /* 00587826: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00587828: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 0058782e: mov edx, dword ptr [ecx + 0x3b98] */ r_edx = R32((u32)(r_ecx+0x3b98u));
    /* 00587834: mov eax, dword ptr [ebp - 0x128] */ r_eax = R32((u32)(r_ebp+0xfffffed8u));
    /* 0058783a: mov ecx, dword ptr [eax + 0x3b98] */ r_ecx = R32((u32)(r_eax+0x3b98u));
    /* 00587840: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00587842: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00587845: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x587847u); call_ind(t); }
    /* 00587847: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 0058784d: cmp dword ptr [ecx + 0x3b9c], 0 */ {  u32 a = R32((u32)(r_ecx+0x3b9cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00587854: jne 0x5878bb */ if (!fZ) goto L_005878bb;
L_00587856:; BB(0x00587856);
    /* 00587856: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 0058785b: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x587860u); f_00686d82();
    /* 00587860: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00587863: mov dword ptr [ebp - 0xec], eax */ W32((u32)(r_ebp+0xffffff14u), r_eax);
    /* 00587869: mov dword ptr [ebp - 4], 0xa */ W32((u32)(r_ebp+0xfffffffcu), 0xau);
    /* 00587870: cmp dword ptr [ebp - 0xec], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00587877: je 0x58788c */ if (fZ) goto L_0058788c;
L_00587879:; BB(0x00587879);
    /* 00587879: mov ecx, dword ptr [ebp - 0xec] */ r_ecx = R32((u32)(r_ebp+0xffffff14u));
    /* 0058787f: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x587884u); f_005eaaf0();
    /* 00587884: mov dword ptr [ebp - 0x154], eax */ W32((u32)(r_ebp+0xfffffeacu), r_eax);
    /* 0058788a: jmp 0x587896 */ goto L_00587896;
L_0058788c:; BB(0x0058788c);
    /* 0058788c: mov dword ptr [ebp - 0x154], 0 */ W32((u32)(r_ebp+0xfffffeacu), 0x0u);
L_00587896:; BB(0x00587896);
    /* 00587896: mov edx, dword ptr [ebp - 0x154] */ r_edx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0058789c: mov dword ptr [ebp - 0xe8], edx */ W32((u32)(r_ebp+0xffffff18u), r_edx);
    /* 005878a2: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005878a9: mov eax, dword ptr [ebp - 0x128] */ r_eax = R32((u32)(r_ebp+0xfffffed8u));
    /* 005878af: mov ecx, dword ptr [ebp - 0xe8] */ r_ecx = R32((u32)(r_ebp+0xffffff18u));
    /* 005878b5: mov dword ptr [eax + 0x3b9c], ecx */ W32((u32)(r_eax+0x3b9cu), r_ecx);
L_005878bb:; BB(0x005878bb);
    /* 005878bb: mov edx, dword ptr [ebp - 0x128] */ r_edx = R32((u32)(r_ebp+0xfffffed8u));
    /* 005878c1: mov eax, dword ptr [edx + 0x3b9c] */ r_eax = R32((u32)(r_edx+0x3b9cu));
    /* 005878c7: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 005878cd: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 005878d0: mov edx, dword ptr [ebp - 0x128] */ r_edx = R32((u32)(r_ebp+0xfffffed8u));
    /* 005878d6: mov eax, dword ptr [edx + 0x3b9c] */ r_eax = R32((u32)(r_edx+0x3b9cu));
    /* 005878dc: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 005878e2: mov ecx, dword ptr [ecx + 0x3b9c] */ r_ecx = R32((u32)(r_ecx+0x3b9cu));
    /* 005878e8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005878ea: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 005878ed: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5878efu); call_ind(t); }
    /* 005878ef: push 0x30dfbf */ { u32 v = 0x30dfbfu; r_esp -= 4; W32(r_esp, v); }
    /* 005878f4: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 005878fa: mov ecx, dword ptr [ecx + 0x3b9c] */ r_ecx = R32((u32)(r_ecx+0x3b9cu));
    /* 00587900: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x587905u); f_005eaf00();
    /* 00587905: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00587907: mov edx, dword ptr [ebp - 0x128] */ r_edx = R32((u32)(r_ebp+0xfffffed8u));
    /* 0058790d: mov eax, dword ptr [edx + 0x3b9c] */ r_eax = R32((u32)(r_edx+0x3b9cu));
    /* 00587913: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00587919: mov ecx, dword ptr [ecx + 0x3b9c] */ r_ecx = R32((u32)(r_ecx+0x3b9cu));
    /* 0058791f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00587921: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00587924: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x587926u); call_ind(t); }
    /* 00587926: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 0058792c: cmp dword ptr [ecx + 0x3ba0], 0 */ {  u32 a = R32((u32)(r_ecx+0x3ba0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00587933: jne 0x58799a */ if (!fZ) goto L_0058799a;
L_00587935:; BB(0x00587935);
    /* 00587935: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 0058793a: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x58793fu); f_00686d82();
    /* 0058793f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00587942: mov dword ptr [ebp - 0xf4], eax */ W32((u32)(r_ebp+0xffffff0cu), r_eax);
    /* 00587948: mov dword ptr [ebp - 4], 0xb */ W32((u32)(r_ebp+0xfffffffcu), 0xbu);
    /* 0058794f: cmp dword ptr [ebp - 0xf4], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff0cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00587956: je 0x58796b */ if (fZ) goto L_0058796b;
L_00587958:; BB(0x00587958);
    /* 00587958: mov ecx, dword ptr [ebp - 0xf4] */ r_ecx = R32((u32)(r_ebp+0xffffff0cu));
    /* 0058795e: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x587963u); f_005eaaf0();
    /* 00587963: mov dword ptr [ebp - 0x158], eax */ W32((u32)(r_ebp+0xfffffea8u), r_eax);
    /* 00587969: jmp 0x587975 */ goto L_00587975;
L_0058796b:; BB(0x0058796b);
    /* 0058796b: mov dword ptr [ebp - 0x158], 0 */ W32((u32)(r_ebp+0xfffffea8u), 0x0u);
L_00587975:; BB(0x00587975);
    /* 00587975: mov edx, dword ptr [ebp - 0x158] */ r_edx = R32((u32)(r_ebp+0xfffffea8u));
    /* 0058797b: mov dword ptr [ebp - 0xf0], edx */ W32((u32)(r_ebp+0xffffff10u), r_edx);
    /* 00587981: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00587988: mov eax, dword ptr [ebp - 0x128] */ r_eax = R32((u32)(r_ebp+0xfffffed8u));
    /* 0058798e: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 00587994: mov dword ptr [eax + 0x3ba0], ecx */ W32((u32)(r_eax+0x3ba0u), r_ecx);
L_0058799a:; BB(0x0058799a);
    /* 0058799a: mov edx, dword ptr [ebp - 0x128] */ r_edx = R32((u32)(r_ebp+0xfffffed8u));
    /* 005879a0: mov eax, dword ptr [edx + 0x3ba0] */ r_eax = R32((u32)(r_edx+0x3ba0u));
    /* 005879a6: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 005879ac: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 005879af: mov edx, dword ptr [ebp - 0x128] */ r_edx = R32((u32)(r_ebp+0xfffffed8u));
    /* 005879b5: mov eax, dword ptr [edx + 0x3ba0] */ r_eax = R32((u32)(r_edx+0x3ba0u));
    /* 005879bb: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 005879c1: mov ecx, dword ptr [ecx + 0x3ba0] */ r_ecx = R32((u32)(r_ecx+0x3ba0u));
    /* 005879c7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005879c9: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 005879cc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5879ceu); call_ind(t); }
    /* 005879ce: push 0x30dfc1 */ { u32 v = 0x30dfc1u; r_esp -= 4; W32(r_esp, v); }
    /* 005879d3: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 005879d9: mov ecx, dword ptr [ecx + 0x3ba0] */ r_ecx = R32((u32)(r_ecx+0x3ba0u));
    /* 005879df: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x5879e4u); f_005eaf00();
    /* 005879e4: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005879e6: mov edx, dword ptr [ebp - 0x128] */ r_edx = R32((u32)(r_ebp+0xfffffed8u));
    /* 005879ec: mov eax, dword ptr [edx + 0x3ba0] */ r_eax = R32((u32)(r_edx+0x3ba0u));
    /* 005879f2: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 005879f8: mov ecx, dword ptr [ecx + 0x3ba0] */ r_ecx = R32((u32)(r_ecx+0x3ba0u));
    /* 005879fe: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00587a00: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00587a03: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x587a05u); call_ind(t); }
    /* 00587a05: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00587a0c: jmp 0x587a17 */ goto L_00587a17;
L_00587a0e:; BB(0x00587a0e);
    /* 00587a0e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00587a11: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00587a14: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
L_00587a17:; BB(0x00587a17);
    /* 00587a17: cmp dword ptr [ebp - 0x24], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00587a1b: jge 0x587b8f */ if ((fS==fO)) goto L_00587b8f;
L_00587a21:; BB(0x00587a21);
    /* 00587a21: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00587a24: mov eax, dword ptr [ebp - 0x128] */ r_eax = R32((u32)(r_ebp+0xfffffed8u));
    /* 00587a2a: cmp dword ptr [eax + edx*4 + 0x2fc], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x2fcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00587a32: jne 0x587a9d */ if (!fZ) goto L_00587a9d;
L_00587a34:; BB(0x00587a34);
    /* 00587a34: push 0x1dc */ { u32 v = 0x1dcu; r_esp -= 4; W32(r_esp, v); }
    /* 00587a39: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x587a3eu); f_00686d82();
    /* 00587a3e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00587a41: mov dword ptr [ebp - 0xfc], eax */ W32((u32)(r_ebp+0xffffff04u), r_eax);
    /* 00587a47: mov dword ptr [ebp - 4], 0xc */ W32((u32)(r_ebp+0xfffffffcu), 0xcu);
    /* 00587a4e: cmp dword ptr [ebp - 0xfc], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff04u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00587a55: je 0x587a6a */ if (fZ) goto L_00587a6a;
L_00587a57:; BB(0x00587a57);
    /* 00587a57: mov ecx, dword ptr [ebp - 0xfc] */ r_ecx = R32((u32)(r_ebp+0xffffff04u));
    /* 00587a5d: call 0x58af70 */ r_esp -= 4; W32(r_esp, 0x587a62u); f_0058af70();
    /* 00587a62: mov dword ptr [ebp - 0x15c], eax */ W32((u32)(r_ebp+0xfffffea4u), r_eax);
    /* 00587a68: jmp 0x587a74 */ goto L_00587a74;
L_00587a6a:; BB(0x00587a6a);
    /* 00587a6a: mov dword ptr [ebp - 0x15c], 0 */ W32((u32)(r_ebp+0xfffffea4u), 0x0u);
L_00587a74:; BB(0x00587a74);
    /* 00587a74: mov ecx, dword ptr [ebp - 0x15c] */ r_ecx = R32((u32)(r_ebp+0xfffffea4u));
    /* 00587a7a: mov dword ptr [ebp - 0xf8], ecx */ W32((u32)(r_ebp+0xffffff08u), r_ecx);
    /* 00587a80: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00587a87: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00587a8a: mov eax, dword ptr [ebp - 0x128] */ r_eax = R32((u32)(r_ebp+0xfffffed8u));
    /* 00587a90: mov ecx, dword ptr [ebp - 0xf8] */ r_ecx = R32((u32)(r_ebp+0xffffff08u));
    /* 00587a96: mov dword ptr [eax + edx*4 + 0x2fc], ecx */ W32((u32)(r_eax+r_edx*4+0x2fcu), r_ecx);
L_00587a9d:; BB(0x00587a9d);
    /* 00587a9d: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00587aa0: mov eax, dword ptr [ebp - 0x128] */ r_eax = R32((u32)(r_ebp+0xfffffed8u));
    /* 00587aa6: mov ecx, dword ptr [eax + edx*4 + 0x2fc] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x2fcu));
    /* 00587aad: mov edx, dword ptr [ebp - 0x128] */ r_edx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00587ab3: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 00587ab6: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00587ab8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00587aba: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00587abd: mov ecx, dword ptr [ebp + eax*8 - 0x54] */ r_ecx = R32((u32)(r_ebp+r_eax*8+0xffffffacu));
    /* 00587ac1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00587ac2: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00587ac5: mov eax, dword ptr [ebp + edx*8 - 0x58] */ r_eax = R32((u32)(r_ebp+r_edx*8+0xffffffa8u));
    /* 00587ac9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00587aca: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00587acd: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00587ad0: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 00587ad2: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 00587ad4: add ecx, 0x30d4df */ {  u32 a = r_ecx; u32 b = 0x30d4dfu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00587ada: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00587adb: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00587ade: mov eax, dword ptr [ebp - 0x128] */ r_eax = R32((u32)(r_ebp+0xfffffed8u));
    /* 00587ae4: mov ecx, dword ptr [eax + edx*4 + 0x2fc] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x2fcu));
    /* 00587aeb: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x587af0u); f_005eae80();
    /* 00587af0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00587af2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00587af4: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00587af6: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 00587af8: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 00587afa: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 00587afc: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00587aff: mov edx, dword ptr [ebp + ecx*4 - 0x20] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffe0u));
    /* 00587b03: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00587b04: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x587b09u); f_00630f40();
    /* 00587b09: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00587b0c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00587b0d: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00587b10: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00587b16: mov edx, dword ptr [ecx + eax*4 + 0x2fc] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x2fcu));
    /* 00587b1d: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00587b20: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00587b26: mov ecx, dword ptr [ecx + eax*4 + 0x2fc] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x2fcu));
    /* 00587b2d: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00587b2f: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 00587b35: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x587b37u); call_ind(t); }
    /* 00587b37: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00587b3a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00587b3b: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00587b3e: mov eax, dword ptr [ebp - 0x128] */ r_eax = R32((u32)(r_ebp+0xfffffed8u));
    /* 00587b44: mov ecx, dword ptr [eax + edx*4 + 0x2fc] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x2fcu));
    /* 00587b4b: call 0x5f53e0 */ r_esp -= 4; W32(r_esp, 0x587b50u); f_005f53e0();
    /* 00587b50: cmp dword ptr [ebp - 0x24], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00587b54: jne 0x587b8a */ if (!fZ) goto L_00587b8a;
L_00587b56:; BB(0x00587b56);
    /* 00587b56: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 00587b58: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00587b5b: mov edx, dword ptr [ebp - 0x128] */ r_edx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00587b61: mov ecx, dword ptr [edx + ecx*4 + 0x2fc] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x2fcu));
    /* 00587b68: call 0x6026f0 */ r_esp -= 4; W32(r_esp, 0x587b6du); f_006026f0();
    /* 00587b6d: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00587b6f: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00587b71: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00587b73: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00587b75: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00587b78: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00587b7e: mov ecx, dword ptr [ecx + eax*4 + 0x2fc] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x2fcu));
    /* 00587b85: call 0x6023d0 */ r_esp -= 4; W32(r_esp, 0x587b8au); f_006023d0();
L_00587b8a:; BB(0x00587b8a);
    /* 00587b8a: jmp 0x587a0e */ goto L_00587a0e;
L_00587b8f:; BB(0x00587b8f);
    /* 00587b8f: mov edx, dword ptr [ebp - 0x128] */ r_edx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00587b95: cmp dword ptr [edx + 0x3b6c], 0 */ {  u32 a = R32((u32)(r_edx+0x3b6cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00587b9c: jne 0x587cab */ if (!fZ) goto L_00587cab;
L_00587ba2:; BB(0x00587ba2);
    /* 00587ba2: push 0x1dc */ { u32 v = 0x1dcu; r_esp -= 4; W32(r_esp, v); }
    /* 00587ba7: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x587bacu); f_00686d82();
    /* 00587bac: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00587baf: mov dword ptr [ebp - 0x104], eax */ W32((u32)(r_ebp+0xfffffefcu), r_eax);
    /* 00587bb5: mov dword ptr [ebp - 4], 0xd */ W32((u32)(r_ebp+0xfffffffcu), 0xdu);
    /* 00587bbc: cmp dword ptr [ebp - 0x104], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffefcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00587bc3: je 0x587bd8 */ if (fZ) goto L_00587bd8;
L_00587bc5:; BB(0x00587bc5);
    /* 00587bc5: mov ecx, dword ptr [ebp - 0x104] */ r_ecx = R32((u32)(r_ebp+0xfffffefcu));
    /* 00587bcb: call 0x58b080 */ r_esp -= 4; W32(r_esp, 0x587bd0u); f_0058b080();
    /* 00587bd0: mov dword ptr [ebp - 0x160], eax */ W32((u32)(r_ebp+0xfffffea0u), r_eax);
    /* 00587bd6: jmp 0x587be2 */ goto L_00587be2;
L_00587bd8:; BB(0x00587bd8);
    /* 00587bd8: mov dword ptr [ebp - 0x160], 0 */ W32((u32)(r_ebp+0xfffffea0u), 0x0u);
L_00587be2:; BB(0x00587be2);
    /* 00587be2: mov eax, dword ptr [ebp - 0x160] */ r_eax = R32((u32)(r_ebp+0xfffffea0u));
    /* 00587be8: mov dword ptr [ebp - 0x100], eax */ W32((u32)(r_ebp+0xffffff00u), r_eax);
    /* 00587bee: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00587bf5: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00587bfb: mov edx, dword ptr [ebp - 0x100] */ r_edx = R32((u32)(r_ebp+0xffffff00u));
    /* 00587c01: mov dword ptr [ecx + 0x3b6c], edx */ W32((u32)(r_ecx+0x3b6cu), r_edx);
    /* 00587c07: mov eax, dword ptr [ebp - 0x128] */ r_eax = R32((u32)(r_ebp+0xfffffed8u));
    /* 00587c0d: mov ecx, dword ptr [eax + 0x3b6c] */ r_ecx = R32((u32)(r_eax+0x3b6cu));
    /* 00587c13: mov edx, dword ptr [ebp - 0x128] */ r_edx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00587c19: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 00587c1c: push 0x30dff0 */ { u32 v = 0x30dff0u; r_esp -= 4; W32(r_esp, v); }
    /* 00587c21: mov eax, dword ptr [ebp - 0x128] */ r_eax = R32((u32)(r_ebp+0xfffffed8u));
    /* 00587c27: mov ecx, dword ptr [eax + 0x3b6c] */ r_ecx = R32((u32)(r_eax+0x3b6cu));
    /* 00587c2d: mov edx, dword ptr [ebp - 0x128] */ r_edx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00587c33: mov eax, dword ptr [edx + 0x3b6c] */ r_eax = R32((u32)(r_edx+0x3b6cu));
    /* 00587c39: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00587c3b: mov ecx, eax */ r_ecx = r_eax;
    /* 00587c3d: mov eax, dword ptr [edx + 0xc8] */ r_eax = R32((u32)(r_edx+0xc8u));
    /* 00587c43: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x587c45u); call_ind(t); }
    /* 00587c45: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00587c4b: mov edx, dword ptr [ecx + 0x3b6c] */ r_edx = R32((u32)(r_ecx+0x3b6cu));
    /* 00587c51: mov eax, dword ptr [ebp - 0x128] */ r_eax = R32((u32)(r_ebp+0xfffffed8u));
    /* 00587c57: mov ecx, dword ptr [eax + 0x3b6c] */ r_ecx = R32((u32)(r_eax+0x3b6cu));
    /* 00587c5d: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00587c5f: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 00587c62: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x587c64u); call_ind(t); }
    /* 00587c64: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00587c66: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00587c6c: mov edx, dword ptr [ecx + 0x3b6c] */ r_edx = R32((u32)(r_ecx+0x3b6cu));
    /* 00587c72: mov eax, dword ptr [ebp - 0x128] */ r_eax = R32((u32)(r_ebp+0xfffffed8u));
    /* 00587c78: mov ecx, dword ptr [eax + 0x3b6c] */ r_ecx = R32((u32)(r_eax+0x3b6cu));
    /* 00587c7e: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00587c80: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00587c83: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x587c85u); call_ind(t); }
    /* 00587c85: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 00587c87: push 0x208 */ { u32 v = 0x208u; r_esp -= 4; W32(r_esp, v); }
    /* 00587c8c: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00587c92: mov edx, dword ptr [ecx + 0x3b6c] */ r_edx = R32((u32)(r_ecx+0x3b6cu));
    /* 00587c98: mov eax, dword ptr [ebp - 0x128] */ r_eax = R32((u32)(r_ebp+0xfffffed8u));
    /* 00587c9e: mov ecx, dword ptr [eax + 0x3b6c] */ r_ecx = R32((u32)(r_eax+0x3b6cu));
    /* 00587ca4: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00587ca6: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00587ca9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x587cabu); call_ind(t); }
L_00587cab:; BB(0x00587cab);
    /* 00587cab: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00587cb1: cmp dword ptr [ecx + 0x310], 0 */ {  u32 a = R32((u32)(r_ecx+0x310u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00587cb8: jne 0x587d8b */ if (!fZ) goto L_00587d8b;
L_00587cbe:; BB(0x00587cbe);
    /* 00587cbe: push 0x208 */ { u32 v = 0x208u; r_esp -= 4; W32(r_esp, v); }
    /* 00587cc3: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x587cc8u); f_00686d82();
    /* 00587cc8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00587ccb: mov dword ptr [ebp - 0x10c], eax */ W32((u32)(r_ebp+0xfffffef4u), r_eax);
    /* 00587cd1: mov dword ptr [ebp - 4], 0xe */ W32((u32)(r_ebp+0xfffffffcu), 0xeu);
    /* 00587cd8: cmp dword ptr [ebp - 0x10c], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffef4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00587cdf: je 0x587cf4 */ if (fZ) goto L_00587cf4;
L_00587ce1:; BB(0x00587ce1);
    /* 00587ce1: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 00587ce7: call 0x58d6a0 */ r_esp -= 4; W32(r_esp, 0x587cecu); f_0058d6a0();
    /* 00587cec: mov dword ptr [ebp - 0x164], eax */ W32((u32)(r_ebp+0xfffffe9cu), r_eax);
    /* 00587cf2: jmp 0x587cfe */ goto L_00587cfe;
L_00587cf4:; BB(0x00587cf4);
    /* 00587cf4: mov dword ptr [ebp - 0x164], 0 */ W32((u32)(r_ebp+0xfffffe9cu), 0x0u);
L_00587cfe:; BB(0x00587cfe);
    /* 00587cfe: mov edx, dword ptr [ebp - 0x164] */ r_edx = R32((u32)(r_ebp+0xfffffe9cu));
    /* 00587d04: mov dword ptr [ebp - 0x108], edx */ W32((u32)(r_ebp+0xfffffef8u), r_edx);
    /* 00587d0a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00587d11: mov eax, dword ptr [ebp - 0x128] */ r_eax = R32((u32)(r_ebp+0xfffffed8u));
    /* 00587d17: mov ecx, dword ptr [ebp - 0x108] */ r_ecx = R32((u32)(r_ebp+0xfffffef8u));
    /* 00587d1d: mov dword ptr [eax + 0x310], ecx */ W32((u32)(r_eax+0x310u), r_ecx);
    /* 00587d23: mov edx, dword ptr [ebp - 0x128] */ r_edx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00587d29: mov eax, dword ptr [edx + 0x310] */ r_eax = R32((u32)(r_edx+0x310u));
    /* 00587d2f: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00587d35: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 00587d38: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00587d3a: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00587d3c: push 0x58 */ { u32 v = 0x58u; r_esp -= 4; W32(r_esp, v); }
    /* 00587d3e: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00587d40: push 0x30dfc3 */ { u32 v = 0x30dfc3u; r_esp -= 4; W32(r_esp, v); }
    /* 00587d45: mov edx, dword ptr [ebp - 0x128] */ r_edx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00587d4b: mov ecx, dword ptr [edx + 0x310] */ r_ecx = R32((u32)(r_edx+0x310u));
    /* 00587d51: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x587d56u); f_005eae80();
    /* 00587d56: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00587d58: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00587d5a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00587d5c: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 00587d5e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00587d60: push 0x67 */ { u32 v = 0x67u; r_esp -= 4; W32(r_esp, v); }
    /* 00587d62: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00587d67: mov eax, dword ptr [ebp - 0x128] */ r_eax = R32((u32)(r_ebp+0xfffffed8u));
    /* 00587d6d: mov ecx, dword ptr [eax + 0x310] */ r_ecx = R32((u32)(r_eax+0x310u));
    /* 00587d73: mov edx, dword ptr [ebp - 0x128] */ r_edx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00587d79: mov eax, dword ptr [edx + 0x310] */ r_eax = R32((u32)(r_edx+0x310u));
    /* 00587d7f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00587d81: mov ecx, eax */ r_ecx = r_eax;
    /* 00587d83: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 00587d89: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x587d8bu); call_ind(t); }
L_00587d8b:; BB(0x00587d8b);
    /* 00587d8b: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00587d92: jmp 0x587d9d */ goto L_00587d9d;
L_00587d94:; BB(0x00587d94);
    /* 00587d94: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00587d97: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00587d9a: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
L_00587d9d:; BB(0x00587d9d);
    /* 00587d9d: cmp dword ptr [ebp - 0x24], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00587da1: jge 0x587e35 */ if ((fS==fO)) goto L_00587e35;
L_00587da7:; BB(0x00587da7);
    /* 00587da7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00587da9: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00587dab: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00587dad: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00587db0: mov eax, dword ptr [ebp + edx*8 - 0x64] */ r_eax = R32((u32)(r_ebp+r_edx*8+0xffffff9cu));
    /* 00587db4: sub eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00587db7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00587db8: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00587dbb: mov edx, dword ptr [ebp + ecx*8 - 0x68] */ r_edx = R32((u32)(r_ebp+r_ecx*8+0xffffff98u));
    /* 00587dbf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00587dc0: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00587dc2: push 0x96 */ { u32 v = 0x96u; r_esp -= 4; W32(r_esp, v); }
    /* 00587dc7: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00587dc9: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00587dcc: mov ecx, dword ptr [ebp + eax*4 - 0x7c] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffff84u));
    /* 00587dd0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00587dd1: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x587dd6u); f_00630f40();
    /* 00587dd6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00587dd9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00587dda: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00587ddc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00587dde: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00587de4: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x587de9u); f_005fa5b0();
    /* 00587de9: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00587deb: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 00587ded: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 00587def: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00587df1: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00587df6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00587df8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00587dfa: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00587dfe: setne dl */ r_edx = (r_edx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 00587e01: add edx, 0x30dfbb */ {  u32 a = r_edx; u32 b = 0x30dfbbu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00587e07: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00587e08: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00587e0a: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00587e0d: mov ecx, dword ptr [ebp + eax*8 - 0x64] */ r_ecx = R32((u32)(r_ebp+r_eax*8+0xffffff9cu));
    /* 00587e11: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00587e12: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00587e15: mov eax, dword ptr [ebp + edx*8 - 0x68] */ r_eax = R32((u32)(r_ebp+r_edx*8+0xffffff98u));
    /* 00587e19: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00587e1a: push 0x30d4d1 */ { u32 v = 0x30d4d1u; r_esp -= 4; W32(r_esp, v); }
    /* 00587e1f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00587e22: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00587e23: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00587e25: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00587e2b: call 0x5faee0 */ r_esp -= 4; W32(r_esp, 0x587e30u); f_005faee0();
    /* 00587e30: jmp 0x587d94 */ goto L_00587d94;
L_00587e35:; BB(0x00587e35);
    /* 00587e35: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00587e3c: jmp 0x587e47 */ goto L_00587e47;
L_00587e3e:; BB(0x00587e3e);
    /* 00587e3e: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00587e41: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00587e44: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
L_00587e47:; BB(0x00587e47);
    /* 00587e47: cmp dword ptr [ebp - 0x24], 0x50 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00587e4b: jge 0x587fea */ if ((fS==fO)) goto L_00587fea;
L_00587e51:; BB(0x00587e51);
    /* 00587e51: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00587e54: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00587e5a: cmp dword ptr [ecx + eax*4 + 0x1bc], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x1bcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00587e62: jne 0x587fe5 */ if (!fZ) goto L_00587fe5;
L_00587e68:; BB(0x00587e68);
    /* 00587e68: push 0x20c */ { u32 v = 0x20cu; r_esp -= 4; W32(r_esp, v); }
    /* 00587e6d: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x587e72u); f_00686d82();
    /* 00587e72: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00587e75: mov dword ptr [ebp - 0x114], eax */ W32((u32)(r_ebp+0xfffffeecu), r_eax);
    /* 00587e7b: mov dword ptr [ebp - 4], 0xf */ W32((u32)(r_ebp+0xfffffffcu), 0xfu);
    /* 00587e82: cmp dword ptr [ebp - 0x114], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffeecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00587e89: je 0x587e9e */ if (fZ) goto L_00587e9e;
L_00587e8b:; BB(0x00587e8b);
    /* 00587e8b: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 00587e91: call 0x58d320 */ r_esp -= 4; W32(r_esp, 0x587e96u); f_0058d320();
    /* 00587e96: mov dword ptr [ebp - 0x168], eax */ W32((u32)(r_ebp+0xfffffe98u), r_eax);
    /* 00587e9c: jmp 0x587ea8 */ goto L_00587ea8;
L_00587e9e:; BB(0x00587e9e);
    /* 00587e9e: mov dword ptr [ebp - 0x168], 0 */ W32((u32)(r_ebp+0xfffffe98u), 0x0u);
L_00587ea8:; BB(0x00587ea8);
    /* 00587ea8: mov edx, dword ptr [ebp - 0x168] */ r_edx = R32((u32)(r_ebp+0xfffffe98u));
    /* 00587eae: mov dword ptr [ebp - 0x110], edx */ W32((u32)(r_ebp+0xfffffef0u), r_edx);
    /* 00587eb4: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00587ebb: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00587ebe: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00587ec4: mov edx, dword ptr [ebp - 0x110] */ r_edx = R32((u32)(r_ebp+0xfffffef0u));
    /* 00587eca: mov dword ptr [ecx + eax*4 + 0x1bc], edx */ W32((u32)(r_ecx+r_eax*4+0x1bcu), r_edx);
    /* 00587ed1: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00587ed4: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00587eda: mov edx, dword ptr [ecx + eax*4 + 0x1bc] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x1bcu));
    /* 00587ee1: mov eax, dword ptr [ebp - 0x128] */ r_eax = R32((u32)(r_ebp+0xfffffed8u));
    /* 00587ee7: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00587eea: push 0x30dfb9 */ { u32 v = 0x30dfb9u; r_esp -= 4; W32(r_esp, v); }
    /* 00587eef: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00587ef2: mov edx, dword ptr [ebp - 0x128] */ r_edx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00587ef8: mov eax, dword ptr [edx + ecx*4 + 0x1bc] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x1bcu));
    /* 00587eff: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00587f02: mov edx, dword ptr [ebp - 0x128] */ r_edx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00587f08: mov ecx, dword ptr [edx + ecx*4 + 0x1bc] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x1bcu));
    /* 00587f0f: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00587f11: mov edx, dword ptr [eax + 0xc8] */ r_edx = R32((u32)(r_eax+0xc8u));
    /* 00587f17: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x587f19u); call_ind(t); }
    /* 00587f19: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00587f1c: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00587f22: mov edx, dword ptr [ecx + eax*4 + 0x1bc] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x1bcu));
    /* 00587f29: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00587f2c: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00587f32: mov ecx, dword ptr [ecx + eax*4 + 0x1bc] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x1bcu));
    /* 00587f39: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00587f3b: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 00587f3e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x587f40u); call_ind(t); }
    /* 00587f40: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00587f43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00587f44: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00587f47: mov eax, dword ptr [ebp - 0x128] */ r_eax = R32((u32)(r_ebp+0xfffffed8u));
    /* 00587f4d: mov ecx, dword ptr [eax + edx*4 + 0x1bc] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x1bcu));
    /* 00587f54: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00587f57: mov eax, dword ptr [ebp - 0x128] */ r_eax = R32((u32)(r_ebp+0xfffffed8u));
    /* 00587f5d: mov edx, dword ptr [eax + edx*4 + 0x1bc] */ r_edx = R32((u32)(r_eax+r_edx*4+0x1bcu));
    /* 00587f64: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00587f66: mov ecx, edx */ r_ecx = r_edx;
    /* 00587f68: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 00587f6e: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x587f70u); call_ind(t); }
    /* 00587f70: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00587f72: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00587f75: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00587f7b: mov edx, dword ptr [ecx + eax*4 + 0x1bc] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x1bcu));
    /* 00587f82: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00587f85: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00587f8b: mov ecx, dword ptr [ecx + eax*4 + 0x1bc] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x1bcu));
    /* 00587f92: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00587f94: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00587f97: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x587f99u); call_ind(t); }
    /* 00587f99: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00587f9c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00587f9d: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00587fa0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00587fa1: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00587fa4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00587fa5: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00587fa8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00587fa9: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00587fac: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00587fad: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00587fb0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00587fb1: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00587fb4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00587fb5: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00587fb8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00587fb9: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00587fbc: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00587fc2: mov ecx, dword ptr [ecx + eax*4 + 0x1bc] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x1bcu));
    /* 00587fc9: call 0x5fff90 */ r_esp -= 4; W32(r_esp, 0x587fceu); f_005fff90();
    /* 00587fce: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00587fd0: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00587fd3: mov eax, dword ptr [ebp - 0x128] */ r_eax = R32((u32)(r_ebp+0xfffffed8u));
    /* 00587fd9: mov ecx, dword ptr [eax + edx*4 + 0x1bc] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x1bcu));
    /* 00587fe0: call 0x602790 */ r_esp -= 4; W32(r_esp, 0x587fe5u); f_00602790();
L_00587fe5:; BB(0x00587fe5);
    /* 00587fe5: jmp 0x587e3e */ goto L_00587e3e;
L_00587fea:; BB(0x00587fea);
    /* 00587fea: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00587fec: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 00587ff1: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 00587ff6: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 00587ffb: push 0xa1 */ { u32 v = 0xa1u; r_esp -= 4; W32(r_esp, v); }
    /* 00588000: push 0x7c */ { u32 v = 0x7cu; r_esp -= 4; W32(r_esp, v); }
    /* 00588002: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 00588004: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00588006: push 0x118 */ { u32 v = 0x118u; r_esp -= 4; W32(r_esp, v); }
    /* 0058800b: push 0x142 */ { u32 v = 0x142u; r_esp -= 4; W32(r_esp, v); }
    /* 00588010: push 0x46 */ { u32 v = 0x46u; r_esp -= 4; W32(r_esp, v); }
    /* 00588012: push 0xd2 */ { u32 v = 0xd2u; r_esp -= 4; W32(r_esp, v); }
    /* 00588017: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 00588019: push 0x6b30a8 */ { u32 v = 0x6b30a8u; r_esp -= 4; W32(r_esp, v); }
    /* 0058801e: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x588023u); f_00630f40();
    /* 00588023: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00588026: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00588027: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00588029: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0058802b: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00588031: call 0x5fa790 */ r_esp -= 4; W32(r_esp, 0x588036u); f_005fa790();
    /* 00588036: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 0058803c: cmp dword ptr [ecx + 0x3b74], 0 */ {  u32 a = R32((u32)(r_ecx+0x3b74u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00588043: jne 0x5880bc */ if (!fZ) goto L_005880bc;
L_00588045:; BB(0x00588045);
    /* 00588045: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 0058804a: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x58804fu); f_00686d82();
    /* 0058804f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00588052: mov dword ptr [ebp - 0x11c], eax */ W32((u32)(r_ebp+0xfffffee4u), r_eax);
    /* 00588058: mov dword ptr [ebp - 4], 0x10 */ W32((u32)(r_ebp+0xfffffffcu), 0x10u);
    /* 0058805f: cmp dword ptr [ebp - 0x11c], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffee4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00588066: je 0x58808d */ if (fZ) goto L_0058808d;
L_00588068:; BB(0x00588068);
    /* 00588068: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0058806e: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x588073u); f_005ec5a0();
    /* 00588073: mov edx, dword ptr [ebp - 0x11c] */ r_edx = R32((u32)(r_ebp+0xfffffee4u));
    /* 00588079: mov dword ptr [edx], 0x6ccd0c */ W32((u32)(r_edx), 0x6ccd0cu);
    /* 0058807f: mov eax, dword ptr [ebp - 0x11c] */ r_eax = R32((u32)(r_ebp+0xfffffee4u));
    /* 00588085: mov dword ptr [ebp - 0x16c], eax */ W32((u32)(r_ebp+0xfffffe94u), r_eax);
    /* 0058808b: jmp 0x588097 */ goto L_00588097;
L_0058808d:; BB(0x0058808d);
    /* 0058808d: mov dword ptr [ebp - 0x16c], 0 */ W32((u32)(r_ebp+0xfffffe94u), 0x0u);
L_00588097:; BB(0x00588097);
    /* 00588097: mov ecx, dword ptr [ebp - 0x16c] */ r_ecx = R32((u32)(r_ebp+0xfffffe94u));
    /* 0058809d: mov dword ptr [ebp - 0x118], ecx */ W32((u32)(r_ebp+0xfffffee8u), r_ecx);
    /* 005880a3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005880aa: mov edx, dword ptr [ebp - 0x128] */ r_edx = R32((u32)(r_ebp+0xfffffed8u));
    /* 005880b0: mov eax, dword ptr [ebp - 0x118] */ r_eax = R32((u32)(r_ebp+0xfffffee8u));
    /* 005880b6: mov dword ptr [edx + 0x3b74], eax */ W32((u32)(r_edx+0x3b74u), r_eax);
L_005880bc:; BB(0x005880bc);
    /* 005880bc: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 005880c2: mov edx, dword ptr [ecx + 0x3b74] */ r_edx = R32((u32)(r_ecx+0x3b74u));
    /* 005880c8: mov eax, dword ptr [ebp - 0x128] */ r_eax = R32((u32)(r_ebp+0xfffffed8u));
    /* 005880ce: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 005880d1: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 005880d6: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 005880dc: mov edx, dword ptr [ecx + 0x3b74] */ r_edx = R32((u32)(r_ecx+0x3b74u));
    /* 005880e2: mov eax, dword ptr [ebp - 0x128] */ r_eax = R32((u32)(r_ebp+0xfffffed8u));
    /* 005880e8: mov ecx, dword ptr [eax + 0x3b74] */ r_ecx = R32((u32)(r_eax+0x3b74u));
    /* 005880ee: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005880f0: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 005880f6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5880f8u); call_ind(t); }
    /* 005880f8: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 005880fe: mov edx, dword ptr [ecx + 0x3b74] */ r_edx = R32((u32)(r_ecx+0x3b74u));
    /* 00588104: mov eax, dword ptr [ebp - 0x128] */ r_eax = R32((u32)(r_ebp+0xfffffed8u));
    /* 0058810a: mov ecx, dword ptr [eax + 0x3b74] */ r_ecx = R32((u32)(r_eax+0x3b74u));
    /* 00588110: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00588112: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 00588115: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x588117u); call_ind(t); }
    /* 00588117: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 00588119: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 0058811f: mov ecx, dword ptr [ecx + 0x3b74] */ r_ecx = R32((u32)(r_ecx+0x3b74u));
    /* 00588125: call 0x5ef3b0 */ r_esp -= 4; W32(r_esp, 0x58812au); f_005ef3b0();
    /* 0058812a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0058812b: mov edx, esp */ r_edx = r_esp;
    /* 0058812d: mov ax, word ptr [0x75ee1c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x75ee1cu))) & 0xffffu);
    /* 00588133: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 00588136: mov cl, byte ptr [0x75ee1e] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(0x75ee1eu))) & 0xffu);
    /* 0058813c: mov byte ptr [edx + 2], cl */ W8((u32)(r_edx+0x2u), (u8)r_ecx);
    /* 0058813f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00588141: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 00588143: mov edx, dword ptr [ebp - 0x128] */ r_edx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00588149: mov ecx, dword ptr [edx + 0x3b74] */ r_ecx = R32((u32)(r_edx+0x3b74u));
    /* 0058814f: call 0x5ecd00 */ r_esp -= 4; W32(r_esp, 0x588154u); f_005ecd00();
    /* 00588154: push 0x122 */ { u32 v = 0x122u; r_esp -= 4; W32(r_esp, v); }
    /* 00588159: push 0x14a */ { u32 v = 0x14au; r_esp -= 4; W32(r_esp, v); }
    /* 0058815e: mov eax, dword ptr [ebp - 0x128] */ r_eax = R32((u32)(r_ebp+0xfffffed8u));
    /* 00588164: mov ecx, dword ptr [eax + 0x3b74] */ r_ecx = R32((u32)(r_eax+0x3b74u));
    /* 0058816a: mov edx, dword ptr [ebp - 0x128] */ r_edx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00588170: mov eax, dword ptr [edx + 0x3b74] */ r_eax = R32((u32)(r_edx+0x3b74u));
    /* 00588176: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00588178: mov ecx, eax */ r_ecx = r_eax;
    /* 0058817a: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0058817d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58817fu); call_ind(t); }
    /* 0058817f: push 0xc3 */ { u32 v = 0xc3u; r_esp -= 4; W32(r_esp, v); }
    /* 00588184: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 0058818a: mov ecx, dword ptr [ecx + 0x3b74] */ r_ecx = R32((u32)(r_ecx+0x3b74u));
    /* 00588190: call 0x5ecc60 */ r_esp -= 4; W32(r_esp, 0x588195u); f_005ecc60();
    /* 00588195: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 00588197: mov edx, dword ptr [ebp - 0x128] */ r_edx = R32((u32)(r_ebp+0xfffffed8u));
    /* 0058819d: mov ecx, dword ptr [edx + 0x3b74] */ r_ecx = R32((u32)(r_edx+0x3b74u));
    /* 005881a3: call 0x5eccb0 */ r_esp -= 4; W32(r_esp, 0x5881a8u); f_005eccb0();
    /* 005881a8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005881aa: mov eax, dword ptr [ebp - 0x128] */ r_eax = R32((u32)(r_ebp+0xfffffed8u));
    /* 005881b0: mov ecx, dword ptr [eax + 0x3b74] */ r_ecx = R32((u32)(r_eax+0x3b74u));
    /* 005881b6: mov edx, dword ptr [ebp - 0x128] */ r_edx = R32((u32)(r_ebp+0xfffffed8u));
    /* 005881bc: mov eax, dword ptr [edx + 0x3b74] */ r_eax = R32((u32)(r_edx+0x3b74u));
    /* 005881c2: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005881c4: mov ecx, eax */ r_ecx = r_eax;
    /* 005881c6: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 005881c9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5881cbu); call_ind(t); }
    /* 005881cb: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005881d1: call 0x5e2f60 */ r_esp -= 4; W32(r_esp, 0x5881d6u); f_005e2f60();
    /* 005881d6: mov byte ptr [ebp - 0x170], al */ W8((u32)(r_ebp+0xfffffe90u), (u8)r_eax);
    /* 005881dc: cmp byte ptr [ebp - 0x170], 2 */ {  u32 a = R8((u32)(r_ebp+0xfffffe90u)); u32 b = 0x2u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 005881e3: je 0x5881fc */ if (fZ) goto L_005881fc;
L_005881e5:; BB(0x005881e5);
    /* 005881e5: cmp byte ptr [ebp - 0x170], 5 */ {  u32 a = R8((u32)(r_ebp+0xfffffe90u)); u32 b = 0x5u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 005881ec: je 0x58822e */ if (fZ) goto L_0058822e;
L_005881ee:; BB(0x005881ee);
    /* 005881ee: cmp byte ptr [ebp - 0x170], 0xa */ {  u32 a = R8((u32)(r_ebp+0xfffffe90u)); u32 b = 0xau; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 005881f5: je 0x588260 */ if (fZ) goto L_00588260;
L_005881f7:; BB(0x005881f7);
    /* 005881f7: jmp 0x588290 */ goto L_00588290;
L_005881fc:; BB(0x005881fc);
    /* 005881fc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005881fe: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00588204: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x588209u); f_005fb5e0();
    /* 00588209: mov dword ptr [ebp - 0x174], eax */ W32((u32)(r_ebp+0xfffffe8cu), r_eax);
    /* 0058820f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00588211: push 0x30dfbd */ { u32 v = 0x30dfbdu; r_esp -= 4; W32(r_esp, v); }
    /* 00588216: mov ecx, dword ptr [ebp - 0x174] */ r_ecx = R32((u32)(r_ebp+0xfffffe8cu));
    /* 0058821c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0058821e: mov ecx, dword ptr [ebp - 0x174] */ r_ecx = R32((u32)(r_ebp+0xfffffe8cu));
    /* 00588224: mov eax, dword ptr [edx + 0xf0] */ r_eax = R32((u32)(r_edx+0xf0u));
    /* 0058822a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58822cu); call_ind(t); }
    /* 0058822c: jmp 0x588290 */ goto L_00588290;
L_0058822e:; BB(0x0058822e);
    /* 0058822e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00588230: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00588236: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x58823bu); f_005fb5e0();
    /* 0058823b: mov dword ptr [ebp - 0x178], eax */ W32((u32)(r_ebp+0xfffffe88u), r_eax);
    /* 00588241: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00588243: push 0x30dfbe */ { u32 v = 0x30dfbeu; r_esp -= 4; W32(r_esp, v); }
    /* 00588248: mov ecx, dword ptr [ebp - 0x178] */ r_ecx = R32((u32)(r_ebp+0xfffffe88u));
    /* 0058824e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00588250: mov ecx, dword ptr [ebp - 0x178] */ r_ecx = R32((u32)(r_ebp+0xfffffe88u));
    /* 00588256: mov eax, dword ptr [edx + 0xf0] */ r_eax = R32((u32)(r_edx+0xf0u));
    /* 0058825c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58825eu); call_ind(t); }
    /* 0058825e: jmp 0x588290 */ goto L_00588290;
L_00588260:; BB(0x00588260);
    /* 00588260: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00588262: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00588268: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x58826du); f_005fb5e0();
    /* 0058826d: mov dword ptr [ebp - 0x17c], eax */ W32((u32)(r_ebp+0xfffffe84u), r_eax);
    /* 00588273: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00588275: push 0x30dfbf */ { u32 v = 0x30dfbfu; r_esp -= 4; W32(r_esp, v); }
    /* 0058827a: mov ecx, dword ptr [ebp - 0x17c] */ r_ecx = R32((u32)(r_ebp+0xfffffe84u));
    /* 00588280: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00588282: mov ecx, dword ptr [ebp - 0x17c] */ r_ecx = R32((u32)(r_ebp+0xfffffe84u));
    /* 00588288: mov eax, dword ptr [edx + 0xf0] */ r_eax = R32((u32)(r_edx+0xf0u));
    /* 0058828e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x588290u); call_ind(t); }
L_00588290:; BB(0x00588290);
    /* 00588290: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00588296: call 0x588a80 */ r_esp -= 4; W32(r_esp, 0x58829bu); f_00588a80();
    /* 0058829b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058829d: jne 0x5882af */ if (!fZ) goto L_005882af;
L_0058829f:; BB(0x0058829f);
    /* 0058829f: push 0x30dfc0 */ { u32 v = 0x30dfc0u; r_esp -= 4; W32(r_esp, v); }
    /* 005882a4: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 005882aa: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x5882afu); f_005f2ba0();
L_005882af:; BB(0x005882af);
    /* 005882af: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005882b1: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 005882b7: call 0x589050 */ r_esp -= 4; W32(r_esp, 0x5882bcu); f_00589050();
    /* 005882bc: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 005882c2: mov edx, dword ptr [ecx + 0x3c08] */ r_edx = R32((u32)(r_ecx+0x3c08u));
    /* 005882c8: mov eax, dword ptr [ebp - 0x128] */ r_eax = R32((u32)(r_ebp+0xfffffed8u));
    /* 005882ce: mov ecx, dword ptr [eax + edx*4 + 0x3be4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x3be4u));
    /* 005882d5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005882d6: mov edx, dword ptr [ebp - 0x128] */ r_edx = R32((u32)(r_ebp+0xfffffed8u));
    /* 005882dc: mov ecx, dword ptr [edx + 0x314] */ r_ecx = R32((u32)(r_edx+0x314u));
    /* 005882e2: call 0x58dfb0 */ r_esp -= 4; W32(r_esp, 0x5882e7u); f_0058dfb0();
    /* 005882e7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005882ea: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005882f1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005882f2: mov esp, ebp */ r_esp = r_ebp;
    /* 005882f4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005882f5: ret  */ FN_RET(0x005869f0); r_esp += 4; return;
}

void f_00588500(void) /* KenoTicketDialog::vfunc2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00588500);
    /* 00588500: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00588501: mov ebp, esp */ r_ebp = r_esp;
    /* 00588503: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00588504: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00588507: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058850a: cmp dword ptr [eax + 0x3c0c], 0 */ {  u32 a = R32((u32)(r_eax+0x3c0cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00588511: je 0x58852e */ if (fZ) goto L_0058852e;
L_00588513:; BB(0x00588513);
    /* 00588513: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00588516: mov edx, dword ptr [ecx + 0x3c0c] */ r_edx = R32((u32)(r_ecx+0x3c0cu));
    /* 0058851c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058851f: mov ecx, dword ptr [eax + 0x3c0c] */ r_ecx = R32((u32)(r_eax+0x3c0cu));
    /* 00588525: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00588527: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0058852a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58852cu); call_ind(t); }
    /* 0058852c: jmp 0x588536 */ goto L_00588536;
L_0058852e:; BB(0x0058852e);
    /* 0058852e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00588531: call 0x5f8340 */ r_esp -= 4; W32(r_esp, 0x588536u); f_005f8340();
L_00588536:; BB(0x00588536);
    /* 00588536: mov esp, ebp */ r_esp = r_ebp;
    /* 00588538: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00588539: ret  */ FN_RET(0x00588500); r_esp += 4; return;
}

void f_00588540(void) /* KenoTicketDialog::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00588540);
    /* 00588540: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00588541: mov ebp, esp */ r_ebp = r_esp;
    /* 00588543: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00588544: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00588547: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058854a: cmp dword ptr [eax + 0x3c0c], 0 */ {  u32 a = R32((u32)(r_eax+0x3c0cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00588551: je 0x588557 */ if (fZ) goto L_00588557;
L_00588553:; BB(0x00588553);
    /* 00588553: jmp 0x588563 */ goto L_00588563;
L_00588557:; BB(0x00588557);
    /* 00588557: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0058855a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0058855b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058855e: call 0x5f72f0 */ r_esp -= 4; W32(r_esp, 0x588563u); f_005f72f0();
L_00588563:; BB(0x00588563);
    /* 00588563: mov esp, ebp */ r_esp = r_ebp;
    /* 00588565: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00588566: ret 4 */ FN_RET(0x00588540); r_esp += 8; return;
}

void f_00588570(void) /* KenoTicketDialog::vfunc14 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00588570);
    /* 00588570: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00588571: mov ebp, esp */ r_ebp = r_esp;
    /* 00588573: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00588575: push 0x6a6e4e */ { u32 v = 0x6a6e4eu; r_esp -= 4; W32(r_esp, v); }
    /* 0058857a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00588580: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00588581: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00588584: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00588589: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0058858b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058858c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0058858f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00588595: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00588598: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0058859b: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0058859e: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005885a1: sub ecx, 0x30dfbd */ {  u32 a = r_ecx; u32 b = 0x30dfbdu; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005885a7: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 005885aa: cmp dword ptr [ebp - 0x2c], 0xa */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005885ae: ja 0x588780 */ if ((!fC&&!fZ)) goto L_00588780;
L_005885b4:; BB(0x005885b4);
    /* 005885b4: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005885b7: jmp dword ptr [edx*4 + 0x588794] */ { u32 t = R32((u32)(r_edx*4+0x588794u)); switch (t) { case 0x588651u: goto L_00588651; case 0x588669u: goto L_00588669; case 0x5885beu: goto L_005885be; case 0x5885d3u: goto L_005885d3; case 0x5885e8u: goto L_005885e8; case 0x5885fdu: goto L_005885fd; case 0x588612u: goto L_00588612; case 0x588627u: goto L_00588627; case 0x58863cu: goto L_0058863c; default: UNSUP(0x005885b7, "jump table entry is not a known target"); } }
L_005885be:; BB(0x005885be);
    /* 005885be: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005885c0: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005885c3: mov ecx, dword ptr [eax + 0x3b68] */ r_ecx = R32((u32)(r_eax+0x3b68u));
    /* 005885c9: call 0x585b00 */ r_esp -= 4; W32(r_esp, 0x5885ceu); f_00585b00();
    /* 005885ce: jmp 0x588780 */ goto L_00588780;
L_005885d3:; BB(0x005885d3);
    /* 005885d3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005885d5: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005885d8: mov ecx, dword ptr [ecx + 0x3b68] */ r_ecx = R32((u32)(r_ecx+0x3b68u));
    /* 005885de: call 0x585b00 */ r_esp -= 4; W32(r_esp, 0x5885e3u); f_00585b00();
    /* 005885e3: jmp 0x588780 */ goto L_00588780;
L_005885e8:; BB(0x005885e8);
    /* 005885e8: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005885ea: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005885ed: mov ecx, dword ptr [edx + 0x3b68] */ r_ecx = R32((u32)(r_edx+0x3b68u));
    /* 005885f3: call 0x585b00 */ r_esp -= 4; W32(r_esp, 0x5885f8u); f_00585b00();
    /* 005885f8: jmp 0x588780 */ goto L_00588780;
L_005885fd:; BB(0x005885fd);
    /* 005885fd: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005885ff: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00588602: mov ecx, dword ptr [eax + 0x3b68] */ r_ecx = R32((u32)(r_eax+0x3b68u));
    /* 00588608: call 0x585b00 */ r_esp -= 4; W32(r_esp, 0x58860du); f_00585b00();
    /* 0058860d: jmp 0x588780 */ goto L_00588780;
L_00588612:; BB(0x00588612);
    /* 00588612: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00588614: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00588617: mov ecx, dword ptr [ecx + 0x3b68] */ r_ecx = R32((u32)(r_ecx+0x3b68u));
    /* 0058861d: call 0x585b00 */ r_esp -= 4; W32(r_esp, 0x588622u); f_00585b00();
    /* 00588622: jmp 0x588780 */ goto L_00588780;
L_00588627:; BB(0x00588627);
    /* 00588627: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00588629: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0058862c: mov ecx, dword ptr [edx + 0x3b68] */ r_ecx = R32((u32)(r_edx+0x3b68u));
    /* 00588632: call 0x585b00 */ r_esp -= 4; W32(r_esp, 0x588637u); f_00585b00();
    /* 00588637: jmp 0x588780 */ goto L_00588780;
L_0058863c:; BB(0x0058863c);
    /* 0058863c: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0058863e: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00588641: mov ecx, dword ptr [eax + 0x3b68] */ r_ecx = R32((u32)(r_eax+0x3b68u));
    /* 00588647: call 0x585b00 */ r_esp -= 4; W32(r_esp, 0x58864cu); f_00585b00();
    /* 0058864c: jmp 0x588780 */ goto L_00588780;
L_00588651:; BB(0x00588651);
    /* 00588651: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00588654: call 0x58a690 */ r_esp -= 4; W32(r_esp, 0x588659u); f_0058a690();
    /* 00588659: mov ecx, dword ptr [0x79357c] */ r_ecx = R32((u32)(0x79357cu));
    /* 0058865f: call 0x583900 */ r_esp -= 4; W32(r_esp, 0x588664u); f_00583900();
    /* 00588664: jmp 0x588780 */ goto L_00588780;
L_00588669:; BB(0x00588669);
    /* 00588669: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0058866c: mov ecx, dword ptr [ecx + 0x3b68] */ r_ecx = R32((u32)(r_ecx+0x3b68u));
    /* 00588672: call 0x585eb0 */ r_esp -= 4; W32(r_esp, 0x588677u); f_00585eb0();
    /* 00588677: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0058867a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058867c: je 0x5886b2 */ if (fZ) goto L_005886b2;
L_0058867e:; BB(0x0058867e);
    /* 0058867e: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00588681: mov ecx, dword ptr [eax + 0x3c08] */ r_ecx = R32((u32)(r_eax+0x3c08u));
    /* 00588687: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0058868a: mov eax, dword ptr [edx + ecx*4 + 0x3be4] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x3be4u));
    /* 00588691: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fS = ((r >> 31) & 1); }
    /* 00588694: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00588697: jns 0x5886a0 */ if (!fS) goto L_005886a0;
L_00588699:; BB(0x00588699);
    /* 00588699: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_005886a0:; BB(0x005886a0);
    /* 005886a0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005886a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005886a4: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005886a7: mov ecx, dword ptr [edx + 0x314] */ r_ecx = R32((u32)(r_edx+0x314u));
    /* 005886ad: call 0x58dfb0 */ r_esp -= 4; W32(r_esp, 0x5886b2u); f_0058dfb0();
L_005886b2:; BB(0x005886b2);
    /* 005886b2: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005886b5: call 0x588a80 */ r_esp -= 4; W32(r_esp, 0x5886bau); f_00588a80();
    /* 005886ba: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005886bd: cmp dword ptr [ebp - 0x10], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005886c1: jl 0x588719 */ if ((fS!=fO)) goto L_00588719;
L_005886c3:; BB(0x005886c3);
    /* 005886c3: cmp dword ptr [ebp - 0x10], 0x64 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005886c7: jg 0x588719 */ if ((!fZ&&fS==fO)) goto L_00588719;
L_005886c9:; BB(0x005886c9);
    /* 005886c9: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 005886ce: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5886d3u); f_00686d82();
    /* 005886d3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005886d6: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005886d9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005886e0: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005886e4: je 0x5886f7 */ if (fZ) goto L_005886f7;
L_005886e6:; BB(0x005886e6);
    /* 005886e6: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005886e9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005886ea: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005886ed: call 0x582780 */ r_esp -= 4; W32(r_esp, 0x5886f2u); f_00582780();
    /* 005886f2: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005886f5: jmp 0x5886fe */ goto L_005886fe;
L_005886f7:; BB(0x005886f7);
    /* 005886f7: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_005886fe:; BB(0x005886fe);
    /* 005886fe: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00588701: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00588704: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0058870b: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0058870e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00588711: mov dword ptr [edx + 0x3c0c], eax */ W32((u32)(r_edx+0x3c0cu), r_eax);
    /* 00588717: jmp 0x588780 */ goto L_00588780;
L_00588719:; BB(0x00588719);
    /* 00588719: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0058871b: jne 0x588734 */ if (!fZ) goto L_00588734;
L_0058871d:; BB(0x0058871d);
    /* 0058871d: push 0x2da */ { u32 v = 0x2dau; r_esp -= 4; W32(r_esp, v); }
    /* 00588722: push 0x6ccecc */ { u32 v = 0x6cceccu; r_esp -= 4; W32(r_esp, v); }
    /* 00588727: push 0x6b2b64 */ { u32 v = 0x6b2b64u; r_esp -= 4; W32(r_esp, v); }
    /* 0058872c: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x588731u); f_005e9f20();
    /* 00588731: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00588734:; BB(0x00588734);
    /* 00588734: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 00588739: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x58873eu); f_00686d82();
    /* 0058873e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00588741: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00588744: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0058874b: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058874f: je 0x588760 */ if (fZ) goto L_00588760;
L_00588751:; BB(0x00588751);
    /* 00588751: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00588753: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00588756: call 0x582780 */ r_esp -= 4; W32(r_esp, 0x58875bu); f_00582780();
    /* 0058875b: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0058875e: jmp 0x588767 */ goto L_00588767;
L_00588760:; BB(0x00588760);
    /* 00588760: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_00588767:; BB(0x00588767);
    /* 00588767: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0058876a: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0058876d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00588774: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00588777: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0058877a: mov dword ptr [ecx + 0x3c0c], edx */ W32((u32)(r_ecx+0x3c0cu), r_edx);
L_00588780:; BB(0x00588780);
    /* 00588780: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00588783: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0058878a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0058878b: mov esp, ebp */ r_esp = r_ebp;
    /* 0058878d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058878e: ret 8 */ FN_RET(0x00588570); r_esp += 12; return;
}

void f_00588a80(void) /* kenoticketdialog::func_00588a80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00588a80);
    /* 00588a80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00588a81: mov ebp, esp */ r_ebp = r_esp;
    /* 00588a83: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00588a86: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 00588a89: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 00588a8e: mov ecx, dword ptr [eax + 0x98] */ r_ecx = R32((u32)(r_eax+0x98u));
    /* 00588a94: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00588a97: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00588a9e: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 00588aa5: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00588aac: jmp 0x588ab7 */ goto L_00588ab7;
L_00588aae:; BB(0x00588aae);
    /* 00588aae: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00588ab1: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00588ab4: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_00588ab7:; BB(0x00588ab7);
    /* 00588ab7: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00588aba: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00588abd: cmp ecx, dword ptr [eax + 0x3c04] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x3c04u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00588ac3: jge 0x588bba */ if ((fS==fO)) goto L_00588bba;
L_00588ac9:; BB(0x00588ac9);
    /* 00588ac9: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 00588ad0: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 00588ad7: jmp 0x588ae2 */ goto L_00588ae2;
L_00588ad9:; BB(0x00588ad9);
    /* 00588ad9: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00588adc: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00588adf: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
L_00588ae2:; BB(0x00588ae2);
    /* 00588ae2: cmp dword ptr [ebp - 0x14], 0x64 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00588ae6: jge 0x588b99 */ if ((fS==fO)) goto L_00588b99;
L_00588aec:; BB(0x00588aec);
    /* 00588aec: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00588aef: imul eax, eax, 0xe10 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xe10u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00588af5: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00588af8: lea edx, [ecx + eax + 0x328] */ r_edx = (u32)(r_ecx+r_eax+0x328u);
    /* 00588aff: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00588b02: imul eax, eax, 0x24 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x24u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00588b05: mov ecx, dword ptr [edx + eax + 0x1c] */ r_ecx = R32((u32)(r_edx+r_eax+0x1cu));
    /* 00588b09: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00588b0c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00588b0f: imul edx, edx, 0xe10 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xe10u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00588b15: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00588b18: lea ecx, [eax + edx + 0x328] */ r_ecx = (u32)(r_eax+r_edx+0x328u);
    /* 00588b1f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00588b22: imul edx, edx, 0x24 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x24u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00588b25: movsx eax, byte ptr [ecx + edx + 2] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ecx+r_edx+0x2u));
    /* 00588b2a: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00588b2d: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00588b30: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00588b33: lea eax, [edx + ecx - 1] */ r_eax = (u32)(r_edx+r_ecx+0xffffffffu);
    /* 00588b37: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00588b3a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00588b3d: imul ecx, ecx, 0xe10 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xe10u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00588b43: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00588b46: lea eax, [edx + ecx + 0x328] */ r_eax = (u32)(r_edx+r_ecx+0x328u);
    /* 00588b4d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00588b50: imul ecx, ecx, 0x24 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x24u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00588b53: mov dl, byte ptr [eax + ecx + 4] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+r_ecx+0x4u))) & 0xffu);
    /* 00588b57: mov byte ptr [ebp - 0x15], dl */ W8((u32)(r_ebp+0xffffffebu), (u8)r_edx);
    /* 00588b5a: movsx eax, byte ptr [ebp - 0x15] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffebu));
    /* 00588b5e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00588b60: jne 0x588b94 */ if (!fZ) goto L_00588b94;
L_00588b62:; BB(0x00588b62);
    /* 00588b62: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00588b66: je 0x588b94 */ if (fZ) goto L_00588b94;
L_00588b68:; BB(0x00588b68);
    /* 00588b68: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00588b6b: cmp ecx, dword ptr [ebp - 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00588b6e: jg 0x588b94 */ if ((!fZ&&fS==fO)) goto L_00588b94;
L_00588b70:; BB(0x00588b70);
    /* 00588b70: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00588b73: cmp edx, dword ptr [ebp - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00588b76: jl 0x588b94 */ if ((fS!=fO)) goto L_00588b94;
L_00588b78:; BB(0x00588b78);
    /* 00588b78: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00588b7b: cmp eax, dword ptr [ebp - 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00588b7e: jle 0x588b88 */ if ((fZ||fS!=fO)) goto L_00588b88;
L_00588b80:; BB(0x00588b80);
    /* 00588b80: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00588b83: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 00588b86: jmp 0x588b8e */ goto L_00588b8e;
L_00588b88:; BB(0x00588b88);
    /* 00588b88: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00588b8b: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
L_00588b8e:; BB(0x00588b8e);
    /* 00588b8e: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00588b91: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_00588b94:; BB(0x00588b94);
    /* 00588b94: jmp 0x588ad9 */ goto L_00588ad9;
L_00588b99:; BB(0x00588b99);
    /* 00588b99: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00588b9c: cmp ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00588b9f: jle 0x588ba9 */ if ((fZ||fS!=fO)) goto L_00588ba9;
L_00588ba1:; BB(0x00588ba1);
    /* 00588ba1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00588ba4: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 00588ba7: jmp 0x588baf */ goto L_00588baf;
L_00588ba9:; BB(0x00588ba9);
    /* 00588ba9: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00588bac: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
L_00588baf:; BB(0x00588baf);
    /* 00588baf: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00588bb2: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00588bb5: jmp 0x588aae */ goto L_00588aae;
L_00588bba:; BB(0x00588bba);
    /* 00588bba: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00588bbe: je 0x588c1c */ if (fZ) goto L_00588c1c;
L_00588bc0:; BB(0x00588bc0);
    /* 00588bc0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00588bc3: sub edx, dword ptr [ebp - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00588bc6: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00588bc9: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 00588bcc: cmp dword ptr [ebp - 0x28], 0x64 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00588bd0: jle 0x588be9 */ if ((fZ||fS!=fO)) goto L_00588be9;
L_00588bd2:; BB(0x00588bd2);
    /* 00588bd2: push 0x32f */ { u32 v = 0x32fu; r_esp -= 4; W32(r_esp, v); }
    /* 00588bd7: push 0x6ccecc */ { u32 v = 0x6cceccu; r_esp -= 4; W32(r_esp, v); }
    /* 00588bdc: push 0x6ccf4c */ { u32 v = 0x6ccf4cu; r_esp -= 4; W32(r_esp, v); }
    /* 00588be1: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x588be6u); f_005e9f20();
    /* 00588be6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00588be9:; BB(0x00588be9);
    /* 00588be9: cmp dword ptr [ebp - 0x28], 0x64 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00588bed: jge 0x588bf7 */ if ((fS==fO)) goto L_00588bf7;
L_00588bef:; BB(0x00588bef);
    /* 00588bef: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00588bf2: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 00588bf5: jmp 0x588bfe */ goto L_00588bfe;
L_00588bf7:; BB(0x00588bf7);
    /* 00588bf7: mov dword ptr [ebp - 0x38], 0x64 */ W32((u32)(r_ebp+0xffffffc8u), 0x64u);
L_00588bfe:; BB(0x00588bfe);
    /* 00588bfe: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00588c01: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 00588c04: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00588c07: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00588c08: push 0x6ccf1c */ { u32 v = 0x6ccf1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00588c0d: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x588c12u); f_0062fde0();
    /* 00588c12: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00588c15: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00588c18: jmp 0x588c2b */ goto L_00588c2b;
L_00588c1c:; BB(0x00588c1c);
    /* 00588c1c: push 0x6cceec */ { u32 v = 0x6cceecu; r_esp -= 4; W32(r_esp, v); }
    /* 00588c21: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x588c26u); f_0062fde0();
    /* 00588c26: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00588c29: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00588c2b:; BB(0x00588c2b);
    /* 00588c2b: mov esp, ebp */ r_esp = r_ebp;
    /* 00588c2d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00588c2e: ret  */ FN_RET(0x00588a80); r_esp += 4; return;
}

void f_00589290(void) /* kenoticketdialog::func_00589290 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00589290);
    /* 00589290: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00589291: mov ebp, esp */ r_ebp = r_esp;
    /* 00589293: sub esp, 0x29c */ {  u32 a = r_esp; u32 b = 0x29cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00589299: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0058929e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005892a0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005892a3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005892a4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005892a5: mov dword ptr [ebp - 0x268], ecx */ W32((u32)(r_ebp+0xfffffd98u), r_ecx);
    /* 005892ab: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005892ad: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005892af: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5892b4u); f_0064c8a0();
    /* 005892b4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005892b7: mov dword ptr [ebp - 0x24c], eax */ W32((u32)(r_ebp+0xfffffdb4u), r_eax);
    /* 005892bd: mov dword ptr [ebp - 0x248], edx */ W32((u32)(r_ebp+0xfffffdb8u), r_edx);
    /* 005892c3: mov eax, dword ptr [ebp - 0x24c] */ r_eax = R32((u32)(r_ebp+0xfffffdb4u));
    /* 005892c9: mov dword ptr [ebp - 0x114], eax */ W32((u32)(r_ebp+0xfffffeecu), r_eax);
    /* 005892cf: mov ecx, dword ptr [ebp - 0x248] */ r_ecx = R32((u32)(r_ebp+0xfffffdb8u));
    /* 005892d5: mov dword ptr [ebp - 0x110], ecx */ W32((u32)(r_ebp+0xfffffef0u), r_ecx);
    /* 005892db: mov edx, dword ptr [ebp - 0x268] */ r_edx = R32((u32)(r_ebp+0xfffffd98u));
    /* 005892e1: mov eax, dword ptr [edx + 0x3b68] */ r_eax = R32((u32)(r_edx+0x3b68u));
    /* 005892e7: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
    /* 005892ea: mov ecx, 9 */ r_ecx = 0x9u;
    /* 005892ef: lea edi, [ebp - 0x23c] */ r_edi = (u32)(r_ebp+0xfffffdc4u);
    /* 005892f5: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 005892f7: movsx ecx, byte ptr [ebp - 0x23c] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebp+0xfffffdc4u));
    /* 005892fe: mov dword ptr [ebp - 0x26c], ecx */ W32((u32)(r_ebp+0xfffffd94u), r_ecx);
    /* 00589304: cmp dword ptr [ebp - 0x26c], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffd94u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0058930b: ja 0x589486 */ if ((!fC&&!fZ)) goto L_00589486;
L_00589311:; BB(0x00589311);
    /* 00589311: mov edx, dword ptr [ebp - 0x26c] */ r_edx = R32((u32)(r_ebp+0xfffffd94u));
    /* 00589317: jmp dword ptr [edx*4 + 0x58a308] */ { u32 t = R32((u32)(r_edx*4+0x58a308u)); switch (t) { case 0x58931eu: goto L_0058931e; case 0x589353u: goto L_00589353; case 0x589388u: goto L_00589388; case 0x5893bdu: goto L_005893bd; case 0x5893f2u: goto L_005893f2; case 0x589424u: goto L_00589424; case 0x589456u: goto L_00589456; case 0x589cacu: goto L_00589cac; case 0x589cc1u: goto L_00589cc1; case 0x589cd6u: goto L_00589cd6; case 0x589cebu: goto L_00589ceb; case 0x589cfeu: goto L_00589cfe; default: UNSUP(0x00589317, "jump table entry is not a known target"); } }
L_0058931e:; BB(0x0058931e);
    /* 0058931e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00589320: mov ecx, dword ptr [ebp - 0x268] */ r_ecx = R32((u32)(r_ebp+0xfffffd98u));
    /* 00589326: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x58932bu); f_005fb5e0();
    /* 0058932b: mov dword ptr [ebp - 0x270], eax */ W32((u32)(r_ebp+0xfffffd90u), r_eax);
    /* 00589331: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00589333: push 0x30dfc1 */ { u32 v = 0x30dfc1u; r_esp -= 4; W32(r_esp, v); }
    /* 00589338: mov eax, dword ptr [ebp - 0x270] */ r_eax = R32((u32)(r_ebp+0xfffffd90u));
    /* 0058933e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00589340: mov ecx, dword ptr [ebp - 0x270] */ r_ecx = R32((u32)(r_ebp+0xfffffd90u));
    /* 00589346: mov eax, dword ptr [edx + 0xf0] */ r_eax = R32((u32)(r_edx+0xf0u));
    /* 0058934c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58934eu); call_ind(t); }
    /* 0058934e: jmp 0x589486 */ goto L_00589486;
L_00589353:; BB(0x00589353);
    /* 00589353: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00589355: mov ecx, dword ptr [ebp - 0x268] */ r_ecx = R32((u32)(r_ebp+0xfffffd98u));
    /* 0058935b: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x589360u); f_005fb5e0();
    /* 00589360: mov dword ptr [ebp - 0x274], eax */ W32((u32)(r_ebp+0xfffffd8cu), r_eax);
    /* 00589366: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00589368: push 0x30dfc2 */ { u32 v = 0x30dfc2u; r_esp -= 4; W32(r_esp, v); }
    /* 0058936d: mov ecx, dword ptr [ebp - 0x274] */ r_ecx = R32((u32)(r_ebp+0xfffffd8cu));
    /* 00589373: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00589375: mov ecx, dword ptr [ebp - 0x274] */ r_ecx = R32((u32)(r_ebp+0xfffffd8cu));
    /* 0058937b: mov eax, dword ptr [edx + 0xf0] */ r_eax = R32((u32)(r_edx+0xf0u));
    /* 00589381: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x589383u); call_ind(t); }
    /* 00589383: jmp 0x589486 */ goto L_00589486;
L_00589388:; BB(0x00589388);
    /* 00589388: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0058938a: mov ecx, dword ptr [ebp - 0x268] */ r_ecx = R32((u32)(r_ebp+0xfffffd98u));
    /* 00589390: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x589395u); f_005fb5e0();
    /* 00589395: mov dword ptr [ebp - 0x278], eax */ W32((u32)(r_ebp+0xfffffd88u), r_eax);
    /* 0058939b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0058939d: push 0x30dfc3 */ { u32 v = 0x30dfc3u; r_esp -= 4; W32(r_esp, v); }
    /* 005893a2: mov ecx, dword ptr [ebp - 0x278] */ r_ecx = R32((u32)(r_ebp+0xfffffd88u));
    /* 005893a8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005893aa: mov ecx, dword ptr [ebp - 0x278] */ r_ecx = R32((u32)(r_ebp+0xfffffd88u));
    /* 005893b0: mov eax, dword ptr [edx + 0xf0] */ r_eax = R32((u32)(r_edx+0xf0u));
    /* 005893b6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5893b8u); call_ind(t); }
    /* 005893b8: jmp 0x589486 */ goto L_00589486;
L_005893bd:; BB(0x005893bd);
    /* 005893bd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005893bf: mov ecx, dword ptr [ebp - 0x268] */ r_ecx = R32((u32)(r_ebp+0xfffffd98u));
    /* 005893c5: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x5893cau); f_005fb5e0();
    /* 005893ca: mov dword ptr [ebp - 0x27c], eax */ W32((u32)(r_ebp+0xfffffd84u), r_eax);
    /* 005893d0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005893d2: push 0x30dfc4 */ { u32 v = 0x30dfc4u; r_esp -= 4; W32(r_esp, v); }
    /* 005893d7: mov ecx, dword ptr [ebp - 0x27c] */ r_ecx = R32((u32)(r_ebp+0xfffffd84u));
    /* 005893dd: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005893df: mov ecx, dword ptr [ebp - 0x27c] */ r_ecx = R32((u32)(r_ebp+0xfffffd84u));
    /* 005893e5: mov eax, dword ptr [edx + 0xf0] */ r_eax = R32((u32)(r_edx+0xf0u));
    /* 005893eb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5893edu); call_ind(t); }
    /* 005893ed: jmp 0x589486 */ goto L_00589486;
L_005893f2:; BB(0x005893f2);
    /* 005893f2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005893f4: mov ecx, dword ptr [ebp - 0x268] */ r_ecx = R32((u32)(r_ebp+0xfffffd98u));
    /* 005893fa: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x5893ffu); f_005fb5e0();
    /* 005893ff: mov dword ptr [ebp - 0x280], eax */ W32((u32)(r_ebp+0xfffffd80u), r_eax);
    /* 00589405: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00589407: push 0x30dfc5 */ { u32 v = 0x30dfc5u; r_esp -= 4; W32(r_esp, v); }
    /* 0058940c: mov ecx, dword ptr [ebp - 0x280] */ r_ecx = R32((u32)(r_ebp+0xfffffd80u));
    /* 00589412: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00589414: mov ecx, dword ptr [ebp - 0x280] */ r_ecx = R32((u32)(r_ebp+0xfffffd80u));
    /* 0058941a: mov eax, dword ptr [edx + 0xf0] */ r_eax = R32((u32)(r_edx+0xf0u));
    /* 00589420: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x589422u); call_ind(t); }
    /* 00589422: jmp 0x589486 */ goto L_00589486;
L_00589424:; BB(0x00589424);
    /* 00589424: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00589426: mov ecx, dword ptr [ebp - 0x268] */ r_ecx = R32((u32)(r_ebp+0xfffffd98u));
    /* 0058942c: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x589431u); f_005fb5e0();
    /* 00589431: mov dword ptr [ebp - 0x284], eax */ W32((u32)(r_ebp+0xfffffd7cu), r_eax);
    /* 00589437: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00589439: push 0x30dfc6 */ { u32 v = 0x30dfc6u; r_esp -= 4; W32(r_esp, v); }
    /* 0058943e: mov ecx, dword ptr [ebp - 0x284] */ r_ecx = R32((u32)(r_ebp+0xfffffd7cu));
    /* 00589444: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00589446: mov ecx, dword ptr [ebp - 0x284] */ r_ecx = R32((u32)(r_ebp+0xfffffd7cu));
    /* 0058944c: mov eax, dword ptr [edx + 0xf0] */ r_eax = R32((u32)(r_edx+0xf0u));
    /* 00589452: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x589454u); call_ind(t); }
    /* 00589454: jmp 0x589486 */ goto L_00589486;
L_00589456:; BB(0x00589456);
    /* 00589456: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00589458: mov ecx, dword ptr [ebp - 0x268] */ r_ecx = R32((u32)(r_ebp+0xfffffd98u));
    /* 0058945e: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x589463u); f_005fb5e0();
    /* 00589463: mov dword ptr [ebp - 0x288], eax */ W32((u32)(r_ebp+0xfffffd78u), r_eax);
    /* 00589469: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0058946b: push 0x30dfc7 */ { u32 v = 0x30dfc7u; r_esp -= 4; W32(r_esp, v); }
    /* 00589470: mov ecx, dword ptr [ebp - 0x288] */ r_ecx = R32((u32)(r_ebp+0xfffffd78u));
    /* 00589476: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00589478: mov ecx, dword ptr [ebp - 0x288] */ r_ecx = R32((u32)(r_ebp+0xfffffd78u));
    /* 0058947e: mov eax, dword ptr [edx + 0xf0] */ r_eax = R32((u32)(r_edx+0xf0u));
    /* 00589484: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x589486u); call_ind(t); }
L_00589486:; BB(0x00589486);
    /* 00589486: mov dword ptr [ebp - 0x10c], 0 */ W32((u32)(r_ebp+0xfffffef4u), 0x0u);
    /* 00589490: jmp 0x5894a1 */ goto L_005894a1;
L_00589492:; BB(0x00589492);
    /* 00589492: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 00589498: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0058949b: mov dword ptr [ebp - 0x10c], ecx */ W32((u32)(r_ebp+0xfffffef4u), r_ecx);
L_005894a1:; BB(0x005894a1);
    /* 005894a1: cmp dword ptr [ebp - 0x10c], 0x50 */ {  u32 a = R32((u32)(r_ebp+0xfffffef4u)); u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005894a8: jge 0x5894de */ if ((fS==fO)) goto L_005894de;
L_005894aa:; BB(0x005894aa);
    /* 005894aa: mov edx, dword ptr [ebp - 0x10c] */ r_edx = R32((u32)(r_ebp+0xfffffef4u));
    /* 005894b0: mov eax, dword ptr [ebp - 0x268] */ r_eax = R32((u32)(r_ebp+0xfffffd98u));
    /* 005894b6: mov ecx, dword ptr [eax + edx*4 + 0x1bc] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x1bcu));
    /* 005894bd: mov edx, dword ptr [ebp - 0x10c] */ r_edx = R32((u32)(r_ebp+0xfffffef4u));
    /* 005894c3: mov eax, dword ptr [ebp - 0x268] */ r_eax = R32((u32)(r_ebp+0xfffffd98u));
    /* 005894c9: mov edx, dword ptr [eax + edx*4 + 0x1bc] */ r_edx = R32((u32)(r_eax+r_edx*4+0x1bcu));
    /* 005894d0: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005894d2: mov ecx, edx */ r_ecx = r_edx;
    /* 005894d4: mov edx, dword ptr [eax + 0xf8] */ r_edx = R32((u32)(r_eax+0xf8u));
    /* 005894da: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5894dcu); call_ind(t); }
    /* 005894dc: jmp 0x589492 */ goto L_00589492;
L_005894de:; BB(0x005894de);
    /* 005894de: mov eax, dword ptr [ebp - 0x268] */ r_eax = R32((u32)(r_ebp+0xfffffd98u));
    /* 005894e4: mov ecx, dword ptr [eax + 0x3c08] */ r_ecx = R32((u32)(r_eax+0x3c08u));
    /* 005894ea: mov edx, dword ptr [ebp - 0x268] */ r_edx = R32((u32)(r_ebp+0xfffffd98u));
    /* 005894f0: cmp dword ptr [edx + ecx*4 + 0x3bf4], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x3bf4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005894f8: jne 0x589530 */ if (!fZ) goto L_00589530;
L_005894fa:; BB(0x005894fa);
    /* 005894fa: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005894fc: mov eax, dword ptr [ebp - 0x268] */ r_eax = R32((u32)(r_ebp+0xfffffd98u));
    /* 00589502: mov ecx, dword ptr [eax + 0x3c08] */ r_ecx = R32((u32)(r_eax+0x3c08u));
    /* 00589508: mov edx, dword ptr [ebp - 0x268] */ r_edx = R32((u32)(r_ebp+0xfffffd98u));
    /* 0058950e: mov eax, dword ptr [edx + ecx*4 + 0x3be4] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x3be4u));
    /* 00589515: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00589518: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00589519: push 0x6b38f0 */ { u32 v = 0x6b38f0u; r_esp -= 4; W32(r_esp, v); }
    /* 0058951e: lea ecx, [ebp - 0x218] */ r_ecx = (u32)(r_ebp+0xfffffde8u);
    /* 00589524: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00589525: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x58952bu); call_ind(t); }
    /* 0058952b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058952e: jmp 0x58957c */ goto L_0058957c;
L_00589530:; BB(0x00589530);
    /* 00589530: mov edx, dword ptr [ebp - 0x268] */ r_edx = R32((u32)(r_ebp+0xfffffd98u));
    /* 00589536: mov eax, dword ptr [edx + 0x3c08] */ r_eax = R32((u32)(r_edx+0x3c08u));
    /* 0058953c: mov ecx, dword ptr [ebp - 0x268] */ r_ecx = R32((u32)(r_ebp+0xfffffd98u));
    /* 00589542: mov edx, dword ptr [ecx + eax*4 + 0x3bf4] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x3bf4u));
    /* 00589549: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058954a: mov eax, dword ptr [ebp - 0x268] */ r_eax = R32((u32)(r_ebp+0xfffffd98u));
    /* 00589550: mov ecx, dword ptr [eax + 0x3c08] */ r_ecx = R32((u32)(r_eax+0x3c08u));
    /* 00589556: mov edx, dword ptr [ebp - 0x268] */ r_edx = R32((u32)(r_ebp+0xfffffd98u));
    /* 0058955c: mov eax, dword ptr [edx + ecx*4 + 0x3be4] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x3be4u));
    /* 00589563: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00589566: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00589567: push 0x6b38f0 */ { u32 v = 0x6b38f0u; r_esp -= 4; W32(r_esp, v); }
    /* 0058956c: lea ecx, [ebp - 0x218] */ r_ecx = (u32)(r_ebp+0xfffffde8u);
    /* 00589572: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00589573: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x589579u); call_ind(t); }
    /* 00589579: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0058957c:; BB(0x0058957c);
    /* 0058957c: lea edx, [ebp - 0x218] */ r_edx = (u32)(r_ebp+0xfffffde8u);
    /* 00589582: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00589583: mov eax, dword ptr [ebp - 0x268] */ r_eax = R32((u32)(r_ebp+0xfffffd98u));
    /* 00589589: mov ecx, dword ptr [eax + 0x3b84] */ r_ecx = R32((u32)(r_eax+0x3b84u));
    /* 0058958f: mov edx, dword ptr [ebp - 0x268] */ r_edx = R32((u32)(r_ebp+0xfffffd98u));
    /* 00589595: mov eax, dword ptr [edx + 0x3b84] */ r_eax = R32((u32)(r_edx+0x3b84u));
    /* 0058959b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0058959d: mov ecx, eax */ r_ecx = r_eax;
    /* 0058959f: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 005895a5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5895a7u); call_ind(t); }
    /* 005895a7: cmp dword ptr [ebp - 0x220], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffde0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005895ae: je 0x58966e */ if (fZ) goto L_0058966e;
L_005895b4:; BB(0x005895b4);
    /* 005895b4: mov ecx, dword ptr [ebp - 0x220] */ r_ecx = R32((u32)(r_ebp+0xfffffde0u));
    /* 005895ba: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005895bb: push 0x6cc13c */ { u32 v = 0x6cc13cu; r_esp -= 4; W32(r_esp, v); }
    /* 005895c0: lea edx, [ebp - 0x218] */ r_edx = (u32)(r_ebp+0xfffffde8u);
    /* 005895c6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005895c7: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x5895cdu); call_ind(t); }
    /* 005895cd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005895d0: movsx eax, byte ptr [ebp - 0x23a] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0xfffffdc6u));
    /* 005895d7: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005895da: jle 0x589643 */ if ((fZ||fS!=fO)) goto L_00589643;
L_005895dc:; BB(0x005895dc);
    /* 005895dc: movsx ecx, byte ptr [ebp - 0x23a] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebp+0xfffffdc6u));
    /* 005895e3: mov edx, dword ptr [ebp - 0x220] */ r_edx = R32((u32)(r_ebp+0xfffffde0u));
    /* 005895e9: lea eax, [edx + ecx - 1] */ r_eax = (u32)(r_edx+r_ecx+0xffffffffu);
    /* 005895ed: mov dword ptr [ebp - 0x244], eax */ W32((u32)(r_ebp+0xfffffdbcu), r_eax);
    /* 005895f3: cmp dword ptr [ebp - 0x244], 0x3e8 */ {  u32 a = R32((u32)(r_ebp+0xfffffdbcu)); u32 b = 0x3e8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005895fd: jle 0x589611 */ if ((fZ||fS!=fO)) goto L_00589611;
L_005895ff:; BB(0x005895ff);
    /* 005895ff: mov ecx, dword ptr [ebp - 0x244] */ r_ecx = R32((u32)(r_ebp+0xfffffdbcu));
    /* 00589605: sub ecx, 0x3e8 */ {  u32 a = r_ecx; u32 b = 0x3e8u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0058960b: mov dword ptr [ebp - 0x244], ecx */ W32((u32)(r_ebp+0xfffffdbcu), r_ecx);
L_00589611:; BB(0x00589611);
    /* 00589611: mov edx, dword ptr [ebp - 0x244] */ r_edx = R32((u32)(r_ebp+0xfffffdbcu));
    /* 00589617: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00589618: push 0x6ccfe8 */ { u32 v = 0x6ccfe8u; r_esp -= 4; W32(r_esp, v); }
    /* 0058961d: lea eax, [ebp - 0x108] */ r_eax = (u32)(r_ebp+0xfffffef8u);
    /* 00589623: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00589624: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x58962au); call_ind(t); }
    /* 0058962a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058962d: lea ecx, [ebp - 0x108] */ r_ecx = (u32)(r_ebp+0xfffffef8u);
    /* 00589633: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00589634: lea edx, [ebp - 0x218] */ r_edx = (u32)(r_ebp+0xfffffde8u);
    /* 0058963a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058963b: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x589640u); f_00686ec6();
    /* 00589640: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00589643:; BB(0x00589643);
    /* 00589643: lea eax, [ebp - 0x218] */ r_eax = (u32)(r_ebp+0xfffffde8u);
    /* 00589649: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058964a: mov ecx, dword ptr [ebp - 0x268] */ r_ecx = R32((u32)(r_ebp+0xfffffd98u));
    /* 00589650: mov edx, dword ptr [ecx + 0x3b90] */ r_edx = R32((u32)(r_ecx+0x3b90u));
    /* 00589656: mov eax, dword ptr [ebp - 0x268] */ r_eax = R32((u32)(r_ebp+0xfffffd98u));
    /* 0058965c: mov ecx, dword ptr [eax + 0x3b90] */ r_ecx = R32((u32)(r_eax+0x3b90u));
    /* 00589662: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00589664: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0058966a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58966cu); call_ind(t); }
    /* 0058966c: jmp 0x589695 */ goto L_00589695;
L_0058966e:; BB(0x0058966e);
    /* 0058966e: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00589673: mov ecx, dword ptr [ebp - 0x268] */ r_ecx = R32((u32)(r_ebp+0xfffffd98u));
    /* 00589679: mov edx, dword ptr [ecx + 0x3b90] */ r_edx = R32((u32)(r_ecx+0x3b90u));
    /* 0058967f: mov eax, dword ptr [ebp - 0x268] */ r_eax = R32((u32)(r_ebp+0xfffffd98u));
    /* 00589685: mov ecx, dword ptr [eax + 0x3b90] */ r_ecx = R32((u32)(r_eax+0x3b90u));
    /* 0058968b: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0058968d: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00589693: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x589695u); call_ind(t); }
L_00589695:; BB(0x00589695);
    /* 00589695: movsx ecx, byte ptr [ebp - 0x238] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebp+0xfffffdc8u));
    /* 0058969c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058969e: je 0x589755 */ if (fZ) goto L_00589755;
L_005896a4:; BB(0x005896a4);
    /* 005896a4: movsx edx, byte ptr [ebp - 0x23b] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0xfffffdc5u));
    /* 005896ab: imul edx, edx, -1 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xffffffffu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005896ae: movsx eax, byte ptr [ebp - 0x23a] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0xfffffdc6u));
    /* 005896b5: imul edx, eax */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_eax; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005896b8: cmp dword ptr [ebp - 0x21c], edx */ {  u32 a = R32((u32)(r_ebp+0xfffffde4u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005896be: jle 0x5896fb */ if ((fZ||fS!=fO)) goto L_005896fb;
L_005896c0:; BB(0x005896c0);
    /* 005896c0: push 0x30dfc2 */ { u32 v = 0x30dfc2u; r_esp -= 4; W32(r_esp, v); }
    /* 005896c5: mov ecx, dword ptr [ebp - 0x268] */ r_ecx = R32((u32)(r_ebp+0xfffffd98u));
    /* 005896cb: mov ecx, dword ptr [ecx + 0x3ba0] */ r_ecx = R32((u32)(r_ecx+0x3ba0u));
    /* 005896d1: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x5896d6u); f_005eaf00();
    /* 005896d6: push 0x69 */ { u32 v = 0x69u; r_esp -= 4; W32(r_esp, v); }
    /* 005896d8: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 005896da: mov edx, dword ptr [ebp - 0x268] */ r_edx = R32((u32)(r_ebp+0xfffffd98u));
    /* 005896e0: mov eax, dword ptr [edx + 0x3ba0] */ r_eax = R32((u32)(r_edx+0x3ba0u));
    /* 005896e6: mov ecx, dword ptr [ebp - 0x268] */ r_ecx = R32((u32)(r_ebp+0xfffffd98u));
    /* 005896ec: mov ecx, dword ptr [ecx + 0x3ba0] */ r_ecx = R32((u32)(r_ecx+0x3ba0u));
    /* 005896f2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005896f4: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 005896f7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5896f9u); call_ind(t); }
    /* 005896f9: jmp 0x589734 */ goto L_00589734;
L_005896fb:; BB(0x005896fb);
    /* 005896fb: push 0x30dfc1 */ { u32 v = 0x30dfc1u; r_esp -= 4; W32(r_esp, v); }
    /* 00589700: mov ecx, dword ptr [ebp - 0x268] */ r_ecx = R32((u32)(r_ebp+0xfffffd98u));
    /* 00589706: mov ecx, dword ptr [ecx + 0x3ba0] */ r_ecx = R32((u32)(r_ecx+0x3ba0u));
    /* 0058970c: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x589711u); f_005eaf00();
    /* 00589711: push 0x69 */ { u32 v = 0x69u; r_esp -= 4; W32(r_esp, v); }
    /* 00589713: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00589715: mov edx, dword ptr [ebp - 0x268] */ r_edx = R32((u32)(r_ebp+0xfffffd98u));
    /* 0058971b: mov eax, dword ptr [edx + 0x3ba0] */ r_eax = R32((u32)(r_edx+0x3ba0u));
    /* 00589721: mov ecx, dword ptr [ebp - 0x268] */ r_ecx = R32((u32)(r_ebp+0xfffffd98u));
    /* 00589727: mov ecx, dword ptr [ecx + 0x3ba0] */ r_ecx = R32((u32)(r_ecx+0x3ba0u));
    /* 0058972d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0058972f: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00589732: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x589734u); call_ind(t); }
L_00589734:; BB(0x00589734);
    /* 00589734: mov ecx, dword ptr [ebp - 0x268] */ r_ecx = R32((u32)(r_ebp+0xfffffd98u));
    /* 0058973a: mov edx, dword ptr [ecx + 0x3ba0] */ r_edx = R32((u32)(r_ecx+0x3ba0u));
    /* 00589740: mov eax, dword ptr [ebp - 0x268] */ r_eax = R32((u32)(r_ebp+0xfffffd98u));
    /* 00589746: mov ecx, dword ptr [eax + 0x3ba0] */ r_ecx = R32((u32)(r_eax+0x3ba0u));
    /* 0058974c: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0058974e: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00589751: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x589753u); call_ind(t); }
    /* 00589753: jmp 0x589774 */ goto L_00589774;
L_00589755:; BB(0x00589755);
    /* 00589755: mov ecx, dword ptr [ebp - 0x268] */ r_ecx = R32((u32)(r_ebp+0xfffffd98u));
    /* 0058975b: mov edx, dword ptr [ecx + 0x3ba0] */ r_edx = R32((u32)(r_ecx+0x3ba0u));
    /* 00589761: mov eax, dword ptr [ebp - 0x268] */ r_eax = R32((u32)(r_ebp+0xfffffd98u));
    /* 00589767: mov ecx, dword ptr [eax + 0x3ba0] */ r_ecx = R32((u32)(r_eax+0x3ba0u));
    /* 0058976d: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0058976f: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00589772: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x589774u); call_ind(t); }
L_00589774:; BB(0x00589774);
    /* 00589774: movsx ecx, byte ptr [ebp - 0x23c] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebp+0xfffffdc4u));
    /* 0058977b: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058977e: jg 0x58994c */ if ((!fZ&&fS==fO)) goto L_0058994c;
L_00589784:; BB(0x00589784);
    /* 00589784: mov dword ptr [ebp - 0x10c], 0 */ W32((u32)(r_ebp+0xfffffef4u), 0x0u);
    /* 0058978e: jmp 0x58979f */ goto L_0058979f;
L_00589790:; BB(0x00589790);
    /* 00589790: mov edx, dword ptr [ebp - 0x10c] */ r_edx = R32((u32)(r_ebp+0xfffffef4u));
    /* 00589796: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00589799: mov dword ptr [ebp - 0x10c], edx */ W32((u32)(r_ebp+0xfffffef4u), r_edx);
L_0058979f:; BB(0x0058979f);
    /* 0058979f: cmp dword ptr [ebp - 0x10c], 0x14 */ {  u32 a = R32((u32)(r_ebp+0xfffffef4u)); u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005897a6: jge 0x589848 */ if ((fS==fO)) goto L_00589848;
L_005897ac:; BB(0x005897ac);
    /* 005897ac: mov eax, dword ptr [ebp - 0x10c] */ r_eax = R32((u32)(r_ebp+0xfffffef4u));
    /* 005897b2: movsx ecx, byte ptr [ebp + eax - 0x237] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebp+r_eax+0xfffffdc9u));
    /* 005897ba: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005897bd: jl 0x589816 */ if ((fS!=fO)) goto L_00589816;
L_005897bf:; BB(0x005897bf);
    /* 005897bf: mov edx, dword ptr [ebp - 0x10c] */ r_edx = R32((u32)(r_ebp+0xfffffef4u));
    /* 005897c5: movsx eax, byte ptr [ebp + edx - 0x237] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+r_edx+0xfffffdc9u));
    /* 005897cd: cmp eax, 0x50 */ {  u32 a = r_eax; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005897d0: jg 0x589816 */ if ((!fZ&&fS==fO)) goto L_00589816;
L_005897d2:; BB(0x005897d2);
    /* 005897d2: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 005897d8: movsx edx, byte ptr [ebp + ecx - 0x237] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+r_ecx+0xfffffdc9u));
    /* 005897e0: mov eax, dword ptr [ebp - 0x268] */ r_eax = R32((u32)(r_ebp+0xfffffd98u));
    /* 005897e6: mov ecx, dword ptr [eax + edx*4 + 0x1b8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x1b8u));
    /* 005897ed: mov edx, dword ptr [ebp - 0x10c] */ r_edx = R32((u32)(r_ebp+0xfffffef4u));
    /* 005897f3: movsx eax, byte ptr [ebp + edx - 0x237] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+r_edx+0xfffffdc9u));
    /* 005897fb: mov edx, dword ptr [ebp - 0x268] */ r_edx = R32((u32)(r_ebp+0xfffffd98u));
    /* 00589801: mov eax, dword ptr [edx + eax*4 + 0x1b8] */ r_eax = R32((u32)(r_edx+r_eax*4+0x1b8u));
    /* 00589808: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0058980a: mov ecx, eax */ r_ecx = r_eax;
    /* 0058980c: mov eax, dword ptr [edx + 0xf4] */ r_eax = R32((u32)(r_edx+0xf4u));
    /* 00589812: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x589814u); call_ind(t); }
    /* 00589814: jmp 0x589843 */ goto L_00589843;
L_00589816:; BB(0x00589816);
    /* 00589816: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0058981c: movsx edx, byte ptr [ebp + ecx - 0x237] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+r_ecx+0xfffffdc9u));
    /* 00589824: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00589826: je 0x589843 */ if (fZ) goto L_00589843;
L_00589828:; BB(0x00589828);
    /* 00589828: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0058982a: jne 0x589843 */ if (!fZ) goto L_00589843;
L_0058982c:; BB(0x0058982c);
    /* 0058982c: push 0x3ed */ { u32 v = 0x3edu; r_esp -= 4; W32(r_esp, v); }
    /* 00589831: push 0x6ccecc */ { u32 v = 0x6cceccu; r_esp -= 4; W32(r_esp, v); }
    /* 00589836: push 0x6b2b64 */ { u32 v = 0x6b2b64u; r_esp -= 4; W32(r_esp, v); }
    /* 0058983b: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x589840u); f_005e9f20();
    /* 00589840: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00589843:; BB(0x00589843);
    /* 00589843: jmp 0x589790 */ goto L_00589790;
L_00589848:; BB(0x00589848);
    /* 00589848: mov ecx, dword ptr [ebp - 0x268] */ r_ecx = R32((u32)(r_ebp+0xfffffd98u));
    /* 0058984e: call 0x58a470 */ r_esp -= 4; W32(r_esp, 0x589853u); f_0058a470();
    /* 00589853: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00589855: je 0x589901 */ if (fZ) goto L_00589901;
L_0058985b:; BB(0x0058985b);
    /* 0058985b: mov ecx, dword ptr [ebp - 0x268] */ r_ecx = R32((u32)(r_ebp+0xfffffd98u));
    /* 00589861: call 0x58a470 */ r_esp -= 4; W32(r_esp, 0x589866u); f_0058a470();
    /* 00589866: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00589869: jge 0x589890 */ if ((fS==fO)) goto L_00589890;
L_0058986b:; BB(0x0058986b);
    /* 0058986b: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 0058986d: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 0058986f: mov edx, dword ptr [ebp - 0x268] */ r_edx = R32((u32)(r_ebp+0xfffffd98u));
    /* 00589875: mov eax, dword ptr [edx + 0x3b8c] */ r_eax = R32((u32)(r_edx+0x3b8cu));
    /* 0058987b: mov ecx, dword ptr [ebp - 0x268] */ r_ecx = R32((u32)(r_ebp+0xfffffd98u));
    /* 00589881: mov ecx, dword ptr [ecx + 0x3b8c] */ r_ecx = R32((u32)(r_ecx+0x3b8cu));
    /* 00589887: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00589889: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0058988c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58988eu); call_ind(t); }
    /* 0058988e: jmp 0x5898b3 */ goto L_005898b3;
L_00589890:; BB(0x00589890);
    /* 00589890: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 00589892: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00589894: mov ecx, dword ptr [ebp - 0x268] */ r_ecx = R32((u32)(r_ebp+0xfffffd98u));
    /* 0058989a: mov edx, dword ptr [ecx + 0x3b8c] */ r_edx = R32((u32)(r_ecx+0x3b8cu));
    /* 005898a0: mov eax, dword ptr [ebp - 0x268] */ r_eax = R32((u32)(r_ebp+0xfffffd98u));
    /* 005898a6: mov ecx, dword ptr [eax + 0x3b8c] */ r_ecx = R32((u32)(r_eax+0x3b8cu));
    /* 005898ac: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005898ae: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 005898b1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5898b3u); call_ind(t); }
L_005898b3:; BB(0x005898b3);
    /* 005898b3: mov ecx, dword ptr [ebp - 0x268] */ r_ecx = R32((u32)(r_ebp+0xfffffd98u));
    /* 005898b9: call 0x58a470 */ r_esp -= 4; W32(r_esp, 0x5898beu); f_0058a470();
    /* 005898be: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005898bf: push 0x6b2828 */ { u32 v = 0x6b2828u; r_esp -= 4; W32(r_esp, v); }
    /* 005898c4: lea ecx, [ebp - 0x218] */ r_ecx = (u32)(r_ebp+0xfffffde8u);
    /* 005898ca: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005898cb: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x5898d1u); call_ind(t); }
    /* 005898d1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005898d4: lea edx, [ebp - 0x218] */ r_edx = (u32)(r_ebp+0xfffffde8u);
    /* 005898da: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005898db: mov eax, dword ptr [ebp - 0x268] */ r_eax = R32((u32)(r_ebp+0xfffffd98u));
    /* 005898e1: mov ecx, dword ptr [eax + 0x3b8c] */ r_ecx = R32((u32)(r_eax+0x3b8cu));
    /* 005898e7: mov edx, dword ptr [ebp - 0x268] */ r_edx = R32((u32)(r_ebp+0xfffffd98u));
    /* 005898ed: mov eax, dword ptr [edx + 0x3b8c] */ r_eax = R32((u32)(r_edx+0x3b8cu));
    /* 005898f3: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005898f5: mov ecx, eax */ r_ecx = r_eax;
    /* 005898f7: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 005898fd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5898ffu); call_ind(t); }
    /* 005898ff: jmp 0x589928 */ goto L_00589928;
L_00589901:; BB(0x00589901);
    /* 00589901: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00589906: mov ecx, dword ptr [ebp - 0x268] */ r_ecx = R32((u32)(r_ebp+0xfffffd98u));
    /* 0058990c: mov edx, dword ptr [ecx + 0x3b8c] */ r_edx = R32((u32)(r_ecx+0x3b8cu));
    /* 00589912: mov eax, dword ptr [ebp - 0x268] */ r_eax = R32((u32)(r_ebp+0xfffffd98u));
    /* 00589918: mov ecx, dword ptr [eax + 0x3b8c] */ r_ecx = R32((u32)(r_eax+0x3b8cu));
    /* 0058991e: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00589920: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00589926: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x589928u); call_ind(t); }
L_00589928:; BB(0x00589928);
    /* 00589928: mov ecx, dword ptr [ebp - 0x268] */ r_ecx = R32((u32)(r_ebp+0xfffffd98u));
    /* 0058992e: mov edx, dword ptr [ecx + 0x3b9c] */ r_edx = R32((u32)(r_ecx+0x3b9cu));
    /* 00589934: mov eax, dword ptr [ebp - 0x268] */ r_eax = R32((u32)(r_ebp+0xfffffd98u));
    /* 0058993a: mov ecx, dword ptr [eax + 0x3b9c] */ r_ecx = R32((u32)(r_eax+0x3b9cu));
    /* 00589940: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00589942: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00589945: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x589947u); call_ind(t); }
    /* 00589947: jmp 0x589b95 */ goto L_00589b95;
L_0058994c:; BB(0x0058994c);
    /* 0058994c: mov cl, byte ptr [ebp - 0x23c] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffdc4u))) & 0xffu);
    /* 00589952: mov byte ptr [ebp - 0x28c], cl */ W8((u32)(r_ebp+0xfffffd74u), (u8)r_ecx);
    /* 00589958: cmp byte ptr [ebp - 0x28c], 4 */ {  u32 a = R8((u32)(r_ebp+0xfffffd74u)); u32 b = 0x4u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0058995f: je 0x589975 */ if (fZ) goto L_00589975;
L_00589961:; BB(0x00589961);
    /* 00589961: cmp byte ptr [ebp - 0x28c], 5 */ {  u32 a = R8((u32)(r_ebp+0xfffffd74u)); u32 b = 0x5u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00589968: je 0x58999b */ if (fZ) goto L_0058999b;
L_0058996a:; BB(0x0058996a);
    /* 0058996a: cmp byte ptr [ebp - 0x28c], 6 */ {  u32 a = R8((u32)(r_ebp+0xfffffd74u)); u32 b = 0x6u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00589971: je 0x5899c1 */ if (fZ) goto L_005899c1;
L_00589973:; BB(0x00589973);
    /* 00589973: jmp 0x5899e5 */ goto L_005899e5;
L_00589975:; BB(0x00589975);
    /* 00589975: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00589977: mov edx, dword ptr [ebp - 0x268] */ r_edx = R32((u32)(r_ebp+0xfffffd98u));
    /* 0058997d: mov eax, dword ptr [edx + 0x3b9c] */ r_eax = R32((u32)(r_edx+0x3b9cu));
    /* 00589983: mov ecx, dword ptr [ebp - 0x268] */ r_ecx = R32((u32)(r_ebp+0xfffffd98u));
    /* 00589989: mov ecx, dword ptr [ecx + 0x3b9c] */ r_ecx = R32((u32)(r_ecx+0x3b9cu));
    /* 0058998f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00589991: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00589997: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x589999u); call_ind(t); }
    /* 00589999: jmp 0x5899e5 */ goto L_005899e5;
L_0058999b:; BB(0x0058999b);
    /* 0058999b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0058999d: mov ecx, dword ptr [ebp - 0x268] */ r_ecx = R32((u32)(r_ebp+0xfffffd98u));
    /* 005899a3: mov edx, dword ptr [ecx + 0x3b9c] */ r_edx = R32((u32)(r_ecx+0x3b9cu));
    /* 005899a9: mov eax, dword ptr [ebp - 0x268] */ r_eax = R32((u32)(r_ebp+0xfffffd98u));
    /* 005899af: mov ecx, dword ptr [eax + 0x3b9c] */ r_ecx = R32((u32)(r_eax+0x3b9cu));
    /* 005899b5: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005899b7: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005899bd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5899bfu); call_ind(t); }
    /* 005899bf: jmp 0x5899e5 */ goto L_005899e5;
L_005899c1:; BB(0x005899c1);
    /* 005899c1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005899c3: mov ecx, dword ptr [ebp - 0x268] */ r_ecx = R32((u32)(r_ebp+0xfffffd98u));
    /* 005899c9: mov edx, dword ptr [ecx + 0x3b9c] */ r_edx = R32((u32)(r_ecx+0x3b9cu));
    /* 005899cf: mov eax, dword ptr [ebp - 0x268] */ r_eax = R32((u32)(r_ebp+0xfffffd98u));
    /* 005899d5: mov ecx, dword ptr [eax + 0x3b9c] */ r_ecx = R32((u32)(r_eax+0x3b9cu));
    /* 005899db: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005899dd: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005899e3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5899e5u); call_ind(t); }
L_005899e5:; BB(0x005899e5);
    /* 005899e5: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 005899ea: mov ecx, dword ptr [ebp - 0x268] */ r_ecx = R32((u32)(r_ebp+0xfffffd98u));
    /* 005899f0: mov edx, dword ptr [ecx + 0x3b8c] */ r_edx = R32((u32)(r_ecx+0x3b8cu));
    /* 005899f6: mov eax, dword ptr [ebp - 0x268] */ r_eax = R32((u32)(r_ebp+0xfffffd98u));
    /* 005899fc: mov ecx, dword ptr [eax + 0x3b8c] */ r_ecx = R32((u32)(r_eax+0x3b8cu));
    /* 00589a02: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00589a04: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00589a0a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x589a0cu); call_ind(t); }
    /* 00589a0c: mov ecx, dword ptr [ebp - 0x268] */ r_ecx = R32((u32)(r_ebp+0xfffffd98u));
    /* 00589a12: mov edx, dword ptr [ecx + 0x3b9c] */ r_edx = R32((u32)(r_ecx+0x3b9cu));
    /* 00589a18: mov eax, dword ptr [ebp - 0x268] */ r_eax = R32((u32)(r_ebp+0xfffffd98u));
    /* 00589a1e: mov ecx, dword ptr [eax + 0x3b9c] */ r_ecx = R32((u32)(r_eax+0x3b9cu));
    /* 00589a24: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00589a26: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00589a29: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x589a2bu); call_ind(t); }
    /* 00589a2b: movsx ecx, byte ptr [ebp - 0x23c] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebp+0xfffffdc4u));
    /* 00589a32: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00589a35: jne 0x589b95 */ if (!fZ) goto L_00589b95;
L_00589a3b:; BB(0x00589a3b);
    /* 00589a3b: mov dword ptr [ebp - 0x10c], 1 */ W32((u32)(r_ebp+0xfffffef4u), 0x1u);
    /* 00589a45: jmp 0x589a56 */ goto L_00589a56;
L_00589a47:; BB(0x00589a47);
    /* 00589a47: mov edx, dword ptr [ebp - 0x10c] */ r_edx = R32((u32)(r_ebp+0xfffffef4u));
    /* 00589a4d: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00589a50: mov dword ptr [ebp - 0x10c], edx */ W32((u32)(r_ebp+0xfffffef4u), r_edx);
L_00589a56:; BB(0x00589a56);
    /* 00589a56: cmp dword ptr [ebp - 0x10c], 0xb */ {  u32 a = R32((u32)(r_ebp+0xfffffef4u)); u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00589a5d: jge 0x589a91 */ if ((fS==fO)) goto L_00589a91;
L_00589a5f:; BB(0x00589a5f);
    /* 00589a5f: mov eax, dword ptr [ebp - 0x10c] */ r_eax = R32((u32)(r_ebp+0xfffffef4u));
    /* 00589a65: mov ecx, dword ptr [ebp - 0x268] */ r_ecx = R32((u32)(r_ebp+0xfffffd98u));
    /* 00589a6b: mov edx, dword ptr [ecx + eax*4 + 0x1b8] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x1b8u));
    /* 00589a72: mov eax, dword ptr [ebp - 0x10c] */ r_eax = R32((u32)(r_ebp+0xfffffef4u));
    /* 00589a78: mov ecx, dword ptr [ebp - 0x268] */ r_ecx = R32((u32)(r_ebp+0xfffffd98u));
    /* 00589a7e: mov ecx, dword ptr [ecx + eax*4 + 0x1b8] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x1b8u));
    /* 00589a85: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00589a87: mov eax, dword ptr [edx + 0xf4] */ r_eax = R32((u32)(r_edx+0xf4u));
    /* 00589a8d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x589a8fu); call_ind(t); }
    /* 00589a8f: jmp 0x589a47 */ goto L_00589a47;
L_00589a91:; BB(0x00589a91);
    /* 00589a91: mov dword ptr [ebp - 0x10c], 0x47 */ W32((u32)(r_ebp+0xfffffef4u), 0x47u);
    /* 00589a9b: jmp 0x589aac */ goto L_00589aac;
L_00589a9d:; BB(0x00589a9d);
    /* 00589a9d: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 00589aa3: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00589aa6: mov dword ptr [ebp - 0x10c], ecx */ W32((u32)(r_ebp+0xfffffef4u), r_ecx);
L_00589aac:; BB(0x00589aac);
    /* 00589aac: cmp dword ptr [ebp - 0x10c], 0x51 */ {  u32 a = R32((u32)(r_ebp+0xfffffef4u)); u32 b = 0x51u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00589ab3: jge 0x589ae9 */ if ((fS==fO)) goto L_00589ae9;
L_00589ab5:; BB(0x00589ab5);
    /* 00589ab5: mov edx, dword ptr [ebp - 0x10c] */ r_edx = R32((u32)(r_ebp+0xfffffef4u));
    /* 00589abb: mov eax, dword ptr [ebp - 0x268] */ r_eax = R32((u32)(r_ebp+0xfffffd98u));
    /* 00589ac1: mov ecx, dword ptr [eax + edx*4 + 0x1b8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x1b8u));
    /* 00589ac8: mov edx, dword ptr [ebp - 0x10c] */ r_edx = R32((u32)(r_ebp+0xfffffef4u));
    /* 00589ace: mov eax, dword ptr [ebp - 0x268] */ r_eax = R32((u32)(r_ebp+0xfffffd98u));
    /* 00589ad4: mov edx, dword ptr [eax + edx*4 + 0x1b8] */ r_edx = R32((u32)(r_eax+r_edx*4+0x1b8u));
    /* 00589adb: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00589add: mov ecx, edx */ r_ecx = r_edx;
    /* 00589adf: mov edx, dword ptr [eax + 0xf4] */ r_edx = R32((u32)(r_eax+0xf4u));
    /* 00589ae5: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x589ae7u); call_ind(t); }
    /* 00589ae7: jmp 0x589a9d */ goto L_00589a9d;
L_00589ae9:; BB(0x00589ae9);
    /* 00589ae9: mov dword ptr [ebp - 0x10c], 0xb */ W32((u32)(r_ebp+0xfffffef4u), 0xbu);
    /* 00589af3: jmp 0x589b04 */ goto L_00589b04;
L_00589af5:; BB(0x00589af5);
    /* 00589af5: mov eax, dword ptr [ebp - 0x10c] */ r_eax = R32((u32)(r_ebp+0xfffffef4u));
    /* 00589afb: add eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00589afe: mov dword ptr [ebp - 0x10c], eax */ W32((u32)(r_ebp+0xfffffef4u), r_eax);
L_00589b04:; BB(0x00589b04);
    /* 00589b04: cmp dword ptr [ebp - 0x10c], 0x3e */ {  u32 a = R32((u32)(r_ebp+0xfffffef4u)); u32 b = 0x3eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00589b0b: jge 0x589b3f */ if ((fS==fO)) goto L_00589b3f;
L_00589b0d:; BB(0x00589b0d);
    /* 00589b0d: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 00589b13: mov edx, dword ptr [ebp - 0x268] */ r_edx = R32((u32)(r_ebp+0xfffffd98u));
    /* 00589b19: mov eax, dword ptr [edx + ecx*4 + 0x1b8] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x1b8u));
    /* 00589b20: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 00589b26: mov edx, dword ptr [ebp - 0x268] */ r_edx = R32((u32)(r_ebp+0xfffffd98u));
    /* 00589b2c: mov ecx, dword ptr [edx + ecx*4 + 0x1b8] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x1b8u));
    /* 00589b33: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00589b35: mov edx, dword ptr [eax + 0xf4] */ r_edx = R32((u32)(r_eax+0xf4u));
    /* 00589b3b: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x589b3du); call_ind(t); }
    /* 00589b3d: jmp 0x589af5 */ goto L_00589af5;
L_00589b3f:; BB(0x00589b3f);
    /* 00589b3f: mov dword ptr [ebp - 0x10c], 0x14 */ W32((u32)(r_ebp+0xfffffef4u), 0x14u);
    /* 00589b49: jmp 0x589b5a */ goto L_00589b5a;
L_00589b4b:; BB(0x00589b4b);
    /* 00589b4b: mov eax, dword ptr [ebp - 0x10c] */ r_eax = R32((u32)(r_ebp+0xfffffef4u));
    /* 00589b51: add eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00589b54: mov dword ptr [ebp - 0x10c], eax */ W32((u32)(r_ebp+0xfffffef4u), r_eax);
L_00589b5a:; BB(0x00589b5a);
    /* 00589b5a: cmp dword ptr [ebp - 0x10c], 0x47 */ {  u32 a = R32((u32)(r_ebp+0xfffffef4u)); u32 b = 0x47u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00589b61: jge 0x589b95 */ if ((fS==fO)) goto L_00589b95;
L_00589b63:; BB(0x00589b63);
    /* 00589b63: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 00589b69: mov edx, dword ptr [ebp - 0x268] */ r_edx = R32((u32)(r_ebp+0xfffffd98u));
    /* 00589b6f: mov eax, dword ptr [edx + ecx*4 + 0x1b8] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x1b8u));
    /* 00589b76: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 00589b7c: mov edx, dword ptr [ebp - 0x268] */ r_edx = R32((u32)(r_ebp+0xfffffd98u));
    /* 00589b82: mov ecx, dword ptr [edx + ecx*4 + 0x1b8] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x1b8u));
    /* 00589b89: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00589b8b: mov edx, dword ptr [eax + 0xf4] */ r_edx = R32((u32)(r_eax+0xf4u));
    /* 00589b91: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x589b93u); call_ind(t); }
    /* 00589b93: jmp 0x589b4b */ goto L_00589b4b;
L_00589b95:; BB(0x00589b95);
    /* 00589b95: mov ecx, dword ptr [ebp - 0x268] */ r_ecx = R32((u32)(r_ebp+0xfffffd98u));
    /* 00589b9b: call 0x58a470 */ r_esp -= 4; W32(r_esp, 0x589ba0u); f_0058a470();
    /* 00589ba0: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00589ba3: jl 0x589c08 */ if ((fS!=fO)) goto L_00589c08;
L_00589ba5:; BB(0x00589ba5);
    /* 00589ba5: mov ecx, dword ptr [ebp - 0x268] */ r_ecx = R32((u32)(r_ebp+0xfffffd98u));
    /* 00589bab: call 0x58a470 */ r_esp -= 4; W32(r_esp, 0x589bb0u); f_0058a470();
    /* 00589bb0: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00589bb3: jg 0x589c08 */ if ((!fZ&&fS==fO)) goto L_00589c08;
L_00589bb5:; BB(0x00589bb5);
    /* 00589bb5: movsx eax, byte ptr [ebp - 0x239] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0xfffffdc7u));
    /* 00589bbc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00589bbe: je 0x589be4 */ if (fZ) goto L_00589be4;
L_00589bc0:; BB(0x00589bc0);
    /* 00589bc0: mov ecx, dword ptr [ebp - 0x268] */ r_ecx = R32((u32)(r_ebp+0xfffffd98u));
    /* 00589bc6: mov edx, dword ptr [ecx + 0x310] */ r_edx = R32((u32)(r_ecx+0x310u));
    /* 00589bcc: mov eax, dword ptr [ebp - 0x268] */ r_eax = R32((u32)(r_ebp+0xfffffd98u));
    /* 00589bd2: mov ecx, dword ptr [eax + 0x310] */ r_ecx = R32((u32)(r_eax+0x310u));
    /* 00589bd8: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00589bda: mov eax, dword ptr [edx + 0xf4] */ r_eax = R32((u32)(r_edx+0xf4u));
    /* 00589be0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x589be2u); call_ind(t); }
    /* 00589be2: jmp 0x589c06 */ goto L_00589c06;
L_00589be4:; BB(0x00589be4);
    /* 00589be4: mov ecx, dword ptr [ebp - 0x268] */ r_ecx = R32((u32)(r_ebp+0xfffffd98u));
    /* 00589bea: mov edx, dword ptr [ecx + 0x310] */ r_edx = R32((u32)(r_ecx+0x310u));
    /* 00589bf0: mov eax, dword ptr [ebp - 0x268] */ r_eax = R32((u32)(r_ebp+0xfffffd98u));
    /* 00589bf6: mov ecx, dword ptr [eax + 0x310] */ r_ecx = R32((u32)(r_eax+0x310u));
    /* 00589bfc: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00589bfe: mov eax, dword ptr [edx + 0xf8] */ r_eax = R32((u32)(r_edx+0xf8u));
    /* 00589c04: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x589c06u); call_ind(t); }
L_00589c06:; BB(0x00589c06);
    /* 00589c06: jmp 0x589c2a */ goto L_00589c2a;
L_00589c08:; BB(0x00589c08);
    /* 00589c08: mov ecx, dword ptr [ebp - 0x268] */ r_ecx = R32((u32)(r_ebp+0xfffffd98u));
    /* 00589c0e: mov edx, dword ptr [ecx + 0x310] */ r_edx = R32((u32)(r_ecx+0x310u));
    /* 00589c14: mov eax, dword ptr [ebp - 0x268] */ r_eax = R32((u32)(r_ebp+0xfffffd98u));
    /* 00589c1a: mov ecx, dword ptr [eax + 0x310] */ r_ecx = R32((u32)(r_eax+0x310u));
    /* 00589c20: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00589c22: mov eax, dword ptr [edx + 0xf8] */ r_eax = R32((u32)(r_edx+0xf8u));
    /* 00589c28: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x589c2au); call_ind(t); }
L_00589c2a:; BB(0x00589c2a);
    /* 00589c2a: mov ecx, dword ptr [ebp - 0x268] */ r_ecx = R32((u32)(r_ebp+0xfffffd98u));
    /* 00589c30: call 0x58a470 */ r_esp -= 4; W32(r_esp, 0x589c35u); f_0058a470();
    /* 00589c35: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00589c38: jne 0x589c73 */ if (!fZ) goto L_00589c73;
L_00589c3a:; BB(0x00589c3a);
    /* 00589c3a: movsx ecx, byte ptr [ebp - 0x23b] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebp+0xfffffdc5u));
    /* 00589c41: cmp ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00589c44: jne 0x589c5b */ if (!fZ) goto L_00589c5b;
L_00589c46:; BB(0x00589c46);
    /* 00589c46: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00589c48: mov edx, dword ptr [ebp - 0x268] */ r_edx = R32((u32)(r_ebp+0xfffffd98u));
    /* 00589c4e: mov ecx, dword ptr [edx + 0x31c] */ r_ecx = R32((u32)(r_edx+0x31cu));
    /* 00589c54: call 0x58dc30 */ r_esp -= 4; W32(r_esp, 0x589c59u); f_0058dc30();
    /* 00589c59: jmp 0x589c6e */ goto L_00589c6e;
L_00589c5b:; BB(0x00589c5b);
    /* 00589c5b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00589c5d: mov eax, dword ptr [ebp - 0x268] */ r_eax = R32((u32)(r_ebp+0xfffffd98u));
    /* 00589c63: mov ecx, dword ptr [eax + 0x31c] */ r_ecx = R32((u32)(r_eax+0x31cu));
    /* 00589c69: call 0x58dc30 */ r_esp -= 4; W32(r_esp, 0x589c6eu); f_0058dc30();
L_00589c6e:; BB(0x00589c6e);
    /* 00589c6e: jmp 0x589cfe */ goto L_00589cfe;
L_00589c73:; BB(0x00589c73);
    /* 00589c73: movsx ecx, byte ptr [ebp - 0x23b] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebp+0xfffffdc5u));
    /* 00589c7a: mov dword ptr [ebp - 0x290], ecx */ W32((u32)(r_ebp+0xfffffd70u), r_ecx);
    /* 00589c80: mov edx, dword ptr [ebp - 0x290] */ r_edx = R32((u32)(r_ebp+0xfffffd70u));
    /* 00589c86: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00589c89: mov dword ptr [ebp - 0x290], edx */ W32((u32)(r_ebp+0xfffffd70u), r_edx);
    /* 00589c8f: cmp dword ptr [ebp - 0x290], 0x45 */ {  u32 a = R32((u32)(r_ebp+0xfffffd70u)); u32 b = 0x45u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00589c96: ja 0x589cfe */ if ((!fC&&!fZ)) goto L_00589cfe;
L_00589c98:; BB(0x00589c98);
    /* 00589c98: mov eax, dword ptr [ebp - 0x290] */ r_eax = R32((u32)(r_ebp+0xfffffd70u));
    /* 00589c9e: movzx ecx, byte ptr [eax + 0x58a338] */ r_ecx = (u32)R8((u32)(r_eax+0x58a338u));
    /* 00589ca5: jmp dword ptr [ecx*4 + 0x58a324] */ { u32 t = R32((u32)(r_ecx*4+0x58a324u)); switch (t) { case 0x589456u: goto L_00589456; case 0x589424u: goto L_00589424; case 0x5893f2u: goto L_005893f2; case 0x5893bdu: goto L_005893bd; case 0x589388u: goto L_00589388; case 0x589353u: goto L_00589353; case 0x58931eu: goto L_0058931e; case 0x589cacu: goto L_00589cac; case 0x589cc1u: goto L_00589cc1; case 0x589cd6u: goto L_00589cd6; case 0x589cebu: goto L_00589ceb; case 0x589cfeu: goto L_00589cfe; default: UNSUP(0x00589ca5, "jump table entry is not a known target"); } }
L_00589cac:; BB(0x00589cac);
    /* 00589cac: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00589cae: mov edx, dword ptr [ebp - 0x268] */ r_edx = R32((u32)(r_ebp+0xfffffd98u));
    /* 00589cb4: mov ecx, dword ptr [edx + 0x31c] */ r_ecx = R32((u32)(r_edx+0x31cu));
    /* 00589cba: call 0x58dc30 */ r_esp -= 4; W32(r_esp, 0x589cbfu); f_0058dc30();
    /* 00589cbf: jmp 0x589cfe */ goto L_00589cfe;
L_00589cc1:; BB(0x00589cc1);
    /* 00589cc1: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00589cc3: mov eax, dword ptr [ebp - 0x268] */ r_eax = R32((u32)(r_ebp+0xfffffd98u));
    /* 00589cc9: mov ecx, dword ptr [eax + 0x31c] */ r_ecx = R32((u32)(r_eax+0x31cu));
    /* 00589ccf: call 0x58dc30 */ r_esp -= 4; W32(r_esp, 0x589cd4u); f_0058dc30();
    /* 00589cd4: jmp 0x589cfe */ goto L_00589cfe;
L_00589cd6:; BB(0x00589cd6);
    /* 00589cd6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00589cd8: mov ecx, dword ptr [ebp - 0x268] */ r_ecx = R32((u32)(r_ebp+0xfffffd98u));
    /* 00589cde: mov ecx, dword ptr [ecx + 0x31c] */ r_ecx = R32((u32)(r_ecx+0x31cu));
    /* 00589ce4: call 0x58dc30 */ r_esp -= 4; W32(r_esp, 0x589ce9u); f_0058dc30();
    /* 00589ce9: jmp 0x589cfe */ goto L_00589cfe;
L_00589ceb:; BB(0x00589ceb);
    /* 00589ceb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00589ced: mov edx, dword ptr [ebp - 0x268] */ r_edx = R32((u32)(r_ebp+0xfffffd98u));
    /* 00589cf3: mov ecx, dword ptr [edx + 0x31c] */ r_ecx = R32((u32)(r_edx+0x31cu));
    /* 00589cf9: call 0x58dc30 */ r_esp -= 4; W32(r_esp, 0x589cfeu); f_0058dc30();
L_00589cfe:; BB(0x00589cfe);
    /* 00589cfe: movsx eax, byte ptr [ebp - 0x23b] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0xfffffdc5u));
    /* 00589d05: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00589d06: push 0x6bb590 */ { u32 v = 0x6bb590u; r_esp -= 4; W32(r_esp, v); }
    /* 00589d0b: lea ecx, [ebp - 0x218] */ r_ecx = (u32)(r_ebp+0xfffffde8u);
    /* 00589d11: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00589d12: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x589d18u); call_ind(t); }
    /* 00589d18: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00589d1b: lea edx, [ebp - 0x218] */ r_edx = (u32)(r_ebp+0xfffffde8u);
    /* 00589d21: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00589d22: mov eax, dword ptr [ebp - 0x268] */ r_eax = R32((u32)(r_ebp+0xfffffd98u));
    /* 00589d28: mov ecx, dword ptr [eax + 0x31c] */ r_ecx = R32((u32)(r_eax+0x31cu));
    /* 00589d2e: call 0x58d840 */ r_esp -= 4; W32(r_esp, 0x589d33u); f_0058d840();
    /* 00589d33: movsx ecx, byte ptr [ebp - 0x23a] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebp+0xfffffdc6u));
    /* 00589d3a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00589d3c: je 0x589d86 */ if (fZ) goto L_00589d86;
L_00589d3e:; BB(0x00589d3e);
    /* 00589d3e: movsx edx, byte ptr [ebp - 0x23a] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0xfffffdc6u));
    /* 00589d45: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00589d46: push 0x6b2828 */ { u32 v = 0x6b2828u; r_esp -= 4; W32(r_esp, v); }
    /* 00589d4b: lea eax, [ebp - 0x218] */ r_eax = (u32)(r_ebp+0xfffffde8u);
    /* 00589d51: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00589d52: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x589d58u); call_ind(t); }
    /* 00589d58: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00589d5b: lea ecx, [ebp - 0x218] */ r_ecx = (u32)(r_ebp+0xfffffde8u);
    /* 00589d61: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00589d62: mov edx, dword ptr [ebp - 0x268] */ r_edx = R32((u32)(r_ebp+0xfffffd98u));
    /* 00589d68: mov eax, dword ptr [edx + 0x320] */ r_eax = R32((u32)(r_edx+0x320u));
    /* 00589d6e: mov ecx, dword ptr [ebp - 0x268] */ r_ecx = R32((u32)(r_ebp+0xfffffd98u));
    /* 00589d74: mov ecx, dword ptr [ecx + 0x320] */ r_ecx = R32((u32)(r_ecx+0x320u));
    /* 00589d7a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00589d7c: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00589d82: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x589d84u); call_ind(t); }
    /* 00589d84: jmp 0x589dad */ goto L_00589dad;
L_00589d86:; BB(0x00589d86);
    /* 00589d86: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00589d8b: mov ecx, dword ptr [ebp - 0x268] */ r_ecx = R32((u32)(r_ebp+0xfffffd98u));
    /* 00589d91: mov edx, dword ptr [ecx + 0x320] */ r_edx = R32((u32)(r_ecx+0x320u));
    /* 00589d97: mov eax, dword ptr [ebp - 0x268] */ r_eax = R32((u32)(r_ebp+0xfffffd98u));
    /* 00589d9d: mov ecx, dword ptr [eax + 0x320] */ r_ecx = R32((u32)(r_eax+0x320u));
    /* 00589da3: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00589da5: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00589dab: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x589dadu); call_ind(t); }
L_00589dad:; BB(0x00589dad);
    /* 00589dad: cmp dword ptr [ebp - 0x220], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffde0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00589db4: je 0x589e3f */ if (fZ) goto L_00589e3f;
L_00589dba:; BB(0x00589dba);
    /* 00589dba: cmp dword ptr [ebp - 0x21c], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffde4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00589dc1: jl 0x589dea */ if ((fS!=fO)) goto L_00589dea;
L_00589dc3:; BB(0x00589dc3);
    /* 00589dc3: mov ecx, dword ptr [ebp - 0x21c] */ r_ecx = R32((u32)(r_ebp+0xfffffde4u));
    /* 00589dc9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00589dca: push 0x6ccfcc */ { u32 v = 0x6ccfccu; r_esp -= 4; W32(r_esp, v); }
    /* 00589dcf: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x589dd4u); f_00630f40();
    /* 00589dd4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00589dd7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00589dd8: lea edx, [ebp - 0x218] */ r_edx = (u32)(r_ebp+0xfffffde8u);
    /* 00589dde: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00589ddf: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x589de5u); call_ind(t); }
    /* 00589de5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00589de8: jmp 0x589e12 */ goto L_00589e12;
L_00589dea:; BB(0x00589dea);
    /* 00589dea: mov eax, dword ptr [ebp - 0x21c] */ r_eax = R32((u32)(r_ebp+0xfffffde4u));
    /* 00589df0: imul eax, eax, -1 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xffffffffu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00589df3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00589df4: push 0x6ccfb0 */ { u32 v = 0x6ccfb0u; r_esp -= 4; W32(r_esp, v); }
    /* 00589df9: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x589dfeu); f_00630f40();
    /* 00589dfe: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00589e01: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00589e02: lea ecx, [ebp - 0x218] */ r_ecx = (u32)(r_ebp+0xfffffde8u);
    /* 00589e08: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00589e09: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x589e0fu); call_ind(t); }
    /* 00589e0f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00589e12:; BB(0x00589e12);
    /* 00589e12: lea edx, [ebp - 0x218] */ r_edx = (u32)(r_ebp+0xfffffde8u);
    /* 00589e18: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00589e19: mov eax, dword ptr [ebp - 0x268] */ r_eax = R32((u32)(r_ebp+0xfffffd98u));
    /* 00589e1f: mov ecx, dword ptr [eax + 0x3b88] */ r_ecx = R32((u32)(r_eax+0x3b88u));
    /* 00589e25: mov edx, dword ptr [ebp - 0x268] */ r_edx = R32((u32)(r_ebp+0xfffffd98u));
    /* 00589e2b: mov eax, dword ptr [edx + 0x3b88] */ r_eax = R32((u32)(r_edx+0x3b88u));
    /* 00589e31: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00589e33: mov ecx, eax */ r_ecx = r_eax;
    /* 00589e35: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00589e3b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x589e3du); call_ind(t); }
    /* 00589e3d: jmp 0x589e6f */ goto L_00589e6f;
L_00589e3f:; BB(0x00589e3f);
    /* 00589e3f: push 0x6ccdd4 */ { u32 v = 0x6ccdd4u; r_esp -= 4; W32(r_esp, v); }
    /* 00589e44: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x589e49u); f_00630f40();
    /* 00589e49: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00589e4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00589e4d: mov ecx, dword ptr [ebp - 0x268] */ r_ecx = R32((u32)(r_ebp+0xfffffd98u));
    /* 00589e53: mov edx, dword ptr [ecx + 0x3b88] */ r_edx = R32((u32)(r_ecx+0x3b88u));
    /* 00589e59: mov eax, dword ptr [ebp - 0x268] */ r_eax = R32((u32)(r_ebp+0xfffffd98u));
    /* 00589e5f: mov ecx, dword ptr [eax + 0x3b88] */ r_ecx = R32((u32)(r_eax+0x3b88u));
    /* 00589e65: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00589e67: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00589e6d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x589e6fu); call_ind(t); }
L_00589e6f:; BB(0x00589e6f);
    /* 00589e6f: movsx ecx, byte ptr [ebp - 0x23b] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebp+0xfffffdc5u));
    /* 00589e76: movsx edx, byte ptr [ebp - 0x23a] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0xfffffdc6u));
    /* 00589e7d: imul ecx, edx */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_edx; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00589e80: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00589e81: push 0x6bb590 */ { u32 v = 0x6bb590u; r_esp -= 4; W32(r_esp, v); }
    /* 00589e86: lea eax, [ebp - 0x218] */ r_eax = (u32)(r_ebp+0xfffffde8u);
    /* 00589e8c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00589e8d: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x589e93u); call_ind(t); }
    /* 00589e93: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00589e96: lea ecx, [ebp - 0x218] */ r_ecx = (u32)(r_ebp+0xfffffde8u);
    /* 00589e9c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00589e9d: mov edx, dword ptr [ebp - 0x268] */ r_edx = R32((u32)(r_ebp+0xfffffd98u));
    /* 00589ea3: mov eax, dword ptr [edx + 0x3b94] */ r_eax = R32((u32)(r_edx+0x3b94u));
    /* 00589ea9: mov ecx, dword ptr [ebp - 0x268] */ r_ecx = R32((u32)(r_ebp+0xfffffd98u));
    /* 00589eaf: mov ecx, dword ptr [ecx + 0x3b94] */ r_ecx = R32((u32)(r_ecx+0x3b94u));
    /* 00589eb5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00589eb7: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00589ebd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x589ebfu); call_ind(t); }
    /* 00589ebf: mov ecx, dword ptr [ebp - 0x268] */ r_ecx = R32((u32)(r_ebp+0xfffffd98u));
    /* 00589ec5: mov ecx, dword ptr [ecx + 0x3b68] */ r_ecx = R32((u32)(r_ecx+0x3b68u));
    /* 00589ecb: call 0x585eb0 */ r_esp -= 4; W32(r_esp, 0x589ed0u); f_00585eb0();
    /* 00589ed0: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00589ed3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00589ed5: je 0x58a006 */ if (fZ) goto L_0058a006;
L_00589edb:; BB(0x00589edb);
    /* 00589edb: mov dword ptr [ebp - 0x10c], 0 */ W32((u32)(r_ebp+0xfffffef4u), 0x0u);
    /* 00589ee5: jmp 0x589ef6 */ goto L_00589ef6;
L_00589ee7:; BB(0x00589ee7);
    /* 00589ee7: mov eax, dword ptr [ebp - 0x10c] */ r_eax = R32((u32)(r_ebp+0xfffffef4u));
    /* 00589eed: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00589ef0: mov dword ptr [ebp - 0x10c], eax */ W32((u32)(r_ebp+0xfffffef4u), r_eax);
L_00589ef6:; BB(0x00589ef6);
    /* 00589ef6: cmp dword ptr [ebp - 0x10c], 0x50 */ {  u32 a = R32((u32)(r_ebp+0xfffffef4u)); u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00589efd: jge 0x589f31 */ if ((fS==fO)) goto L_00589f31;
L_00589eff:; BB(0x00589eff);
    /* 00589eff: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 00589f05: mov edx, dword ptr [ebp - 0x268] */ r_edx = R32((u32)(r_ebp+0xfffffd98u));
    /* 00589f0b: mov eax, dword ptr [edx + ecx*4 + 0x1bc] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x1bcu));
    /* 00589f12: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 00589f18: mov edx, dword ptr [ebp - 0x268] */ r_edx = R32((u32)(r_ebp+0xfffffd98u));
    /* 00589f1e: mov ecx, dword ptr [edx + ecx*4 + 0x1bc] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x1bcu));
    /* 00589f25: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00589f27: mov edx, dword ptr [eax + 0xcc] */ r_edx = R32((u32)(r_eax+0xccu));
    /* 00589f2d: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x589f2fu); call_ind(t); }
    /* 00589f2f: jmp 0x589ee7 */ goto L_00589ee7;
L_00589f31:; BB(0x00589f31);
    /* 00589f31: mov eax, dword ptr [ebp - 0x268] */ r_eax = R32((u32)(r_ebp+0xfffffd98u));
    /* 00589f37: mov ecx, dword ptr [eax + 0x320] */ r_ecx = R32((u32)(r_eax+0x320u));
    /* 00589f3d: call 0x60c300 */ r_esp -= 4; W32(r_esp, 0x589f42u); f_0060c300();
    /* 00589f42: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00589f44: mov ecx, dword ptr [ebp - 0x268] */ r_ecx = R32((u32)(r_ebp+0xfffffd98u));
    /* 00589f4a: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x589f4fu); f_005fb5e0();
    /* 00589f4f: mov dword ptr [ebp - 0x294], eax */ W32((u32)(r_ebp+0xfffffd6cu), r_eax);
    /* 00589f55: mov ecx, dword ptr [ebp - 0x294] */ r_ecx = R32((u32)(r_ebp+0xfffffd6cu));
    /* 00589f5b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00589f5d: mov ecx, dword ptr [ebp - 0x294] */ r_ecx = R32((u32)(r_ebp+0xfffffd6cu));
    /* 00589f63: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 00589f69: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x589f6bu); call_ind(t); }
    /* 00589f6b: mov ecx, dword ptr [ebp - 0x268] */ r_ecx = R32((u32)(r_ebp+0xfffffd98u));
    /* 00589f71: call 0x58a470 */ r_esp -= 4; W32(r_esp, 0x589f76u); f_0058a470();
    /* 00589f76: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00589f79: jl 0x589faf */ if ((fS!=fO)) goto L_00589faf;
L_00589f7b:; BB(0x00589f7b);
    /* 00589f7b: mov ecx, dword ptr [ebp - 0x268] */ r_ecx = R32((u32)(r_ebp+0xfffffd98u));
    /* 00589f81: call 0x58a470 */ r_esp -= 4; W32(r_esp, 0x589f86u); f_0058a470();
    /* 00589f86: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00589f89: jg 0x589faf */ if ((!fZ&&fS==fO)) goto L_00589faf;
L_00589f8b:; BB(0x00589f8b);
    /* 00589f8b: mov ecx, dword ptr [ebp - 0x268] */ r_ecx = R32((u32)(r_ebp+0xfffffd98u));
    /* 00589f91: mov edx, dword ptr [ecx + 0x310] */ r_edx = R32((u32)(r_ecx+0x310u));
    /* 00589f97: mov eax, dword ptr [ebp - 0x268] */ r_eax = R32((u32)(r_ebp+0xfffffd98u));
    /* 00589f9d: mov ecx, dword ptr [eax + 0x310] */ r_ecx = R32((u32)(r_eax+0x310u));
    /* 00589fa3: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00589fa5: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 00589fab: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x589fadu); call_ind(t); }
    /* 00589fad: jmp 0x589fd1 */ goto L_00589fd1;
L_00589faf:; BB(0x00589faf);
    /* 00589faf: mov ecx, dword ptr [ebp - 0x268] */ r_ecx = R32((u32)(r_ebp+0xfffffd98u));
    /* 00589fb5: mov edx, dword ptr [ecx + 0x310] */ r_edx = R32((u32)(r_ecx+0x310u));
    /* 00589fbb: mov eax, dword ptr [ebp - 0x268] */ r_eax = R32((u32)(r_ebp+0xfffffd98u));
    /* 00589fc1: mov ecx, dword ptr [eax + 0x310] */ r_ecx = R32((u32)(r_eax+0x310u));
    /* 00589fc7: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00589fc9: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 00589fcf: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x589fd1u); call_ind(t); }
L_00589fd1:; BB(0x00589fd1);
    /* 00589fd1: movsx ecx, byte ptr [ebp - 0x23c] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebp+0xfffffdc4u));
    /* 00589fd8: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00589fdb: jg 0x589ff0 */ if ((!fZ&&fS==fO)) goto L_00589ff0;
L_00589fdd:; BB(0x00589fdd);
    /* 00589fdd: mov edx, dword ptr [ebp - 0x268] */ r_edx = R32((u32)(r_ebp+0xfffffd98u));
    /* 00589fe3: mov ecx, dword ptr [edx + 0x31c] */ r_ecx = R32((u32)(r_edx+0x31cu));
    /* 00589fe9: call 0x58dce0 */ r_esp -= 4; W32(r_esp, 0x589feeu); f_0058dce0();
    /* 00589fee: jmp 0x58a001 */ goto L_0058a001;
L_00589ff0:; BB(0x00589ff0);
    /* 00589ff0: mov eax, dword ptr [ebp - 0x268] */ r_eax = R32((u32)(r_ebp+0xfffffd98u));
    /* 00589ff6: mov ecx, dword ptr [eax + 0x31c] */ r_ecx = R32((u32)(r_eax+0x31cu));
    /* 00589ffc: call 0x58def0 */ r_esp -= 4; W32(r_esp, 0x58a001u); f_0058def0();
L_0058a001:; BB(0x0058a001);
    /* 0058a001: jmp 0x58a0cb */ goto L_0058a0cb;
L_0058a006:; BB(0x0058a006);
    /* 0058a006: mov dword ptr [ebp - 0x10c], 0 */ W32((u32)(r_ebp+0xfffffef4u), 0x0u);
    /* 0058a010: jmp 0x58a021 */ goto L_0058a021;
L_0058a012:; BB(0x0058a012);
    /* 0058a012: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0058a018: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0058a01b: mov dword ptr [ebp - 0x10c], ecx */ W32((u32)(r_ebp+0xfffffef4u), r_ecx);
L_0058a021:; BB(0x0058a021);
    /* 0058a021: cmp dword ptr [ebp - 0x10c], 0x50 */ {  u32 a = R32((u32)(r_ebp+0xfffffef4u)); u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058a028: jge 0x58a05e */ if ((fS==fO)) goto L_0058a05e;
L_0058a02a:; BB(0x0058a02a);
    /* 0058a02a: mov edx, dword ptr [ebp - 0x10c] */ r_edx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0058a030: mov eax, dword ptr [ebp - 0x268] */ r_eax = R32((u32)(r_ebp+0xfffffd98u));
    /* 0058a036: mov ecx, dword ptr [eax + edx*4 + 0x1bc] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x1bcu));
    /* 0058a03d: mov edx, dword ptr [ebp - 0x10c] */ r_edx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0058a043: mov eax, dword ptr [ebp - 0x268] */ r_eax = R32((u32)(r_ebp+0xfffffd98u));
    /* 0058a049: mov edx, dword ptr [eax + edx*4 + 0x1bc] */ r_edx = R32((u32)(r_eax+r_edx*4+0x1bcu));
    /* 0058a050: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0058a052: mov ecx, edx */ r_ecx = r_edx;
    /* 0058a054: mov edx, dword ptr [eax + 0xd0] */ r_edx = R32((u32)(r_eax+0xd0u));
    /* 0058a05a: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x58a05cu); call_ind(t); }
    /* 0058a05c: jmp 0x58a012 */ goto L_0058a012;
L_0058a05e:; BB(0x0058a05e);
    /* 0058a05e: mov eax, dword ptr [ebp - 0x268] */ r_eax = R32((u32)(r_ebp+0xfffffd98u));
    /* 0058a064: mov ecx, dword ptr [eax + 0x320] */ r_ecx = R32((u32)(r_eax+0x320u));
    /* 0058a06a: call 0x60c330 */ r_esp -= 4; W32(r_esp, 0x58a06fu); f_0060c330();
    /* 0058a06f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0058a071: mov ecx, dword ptr [ebp - 0x268] */ r_ecx = R32((u32)(r_ebp+0xfffffd98u));
    /* 0058a077: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x58a07cu); f_005fb5e0();
    /* 0058a07c: mov dword ptr [ebp - 0x298], eax */ W32((u32)(r_ebp+0xfffffd68u), r_eax);
    /* 0058a082: mov ecx, dword ptr [ebp - 0x298] */ r_ecx = R32((u32)(r_ebp+0xfffffd68u));
    /* 0058a088: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0058a08a: mov ecx, dword ptr [ebp - 0x298] */ r_ecx = R32((u32)(r_ebp+0xfffffd68u));
    /* 0058a090: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 0058a096: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58a098u); call_ind(t); }
    /* 0058a098: mov ecx, dword ptr [ebp - 0x268] */ r_ecx = R32((u32)(r_ebp+0xfffffd98u));
    /* 0058a09e: mov edx, dword ptr [ecx + 0x310] */ r_edx = R32((u32)(r_ecx+0x310u));
    /* 0058a0a4: mov eax, dword ptr [ebp - 0x268] */ r_eax = R32((u32)(r_ebp+0xfffffd98u));
    /* 0058a0aa: mov ecx, dword ptr [eax + 0x310] */ r_ecx = R32((u32)(r_eax+0x310u));
    /* 0058a0b0: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0058a0b2: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 0058a0b8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58a0bau); call_ind(t); }
    /* 0058a0ba: mov ecx, dword ptr [ebp - 0x268] */ r_ecx = R32((u32)(r_ebp+0xfffffd98u));
    /* 0058a0c0: mov ecx, dword ptr [ecx + 0x31c] */ r_ecx = R32((u32)(r_ecx+0x31cu));
    /* 0058a0c6: call 0x58def0 */ r_esp -= 4; W32(r_esp, 0x58a0cbu); f_0058def0();
L_0058a0cb:; BB(0x0058a0cb);
    /* 0058a0cb: push 0x6ccf9c */ { u32 v = 0x6ccf9cu; r_esp -= 4; W32(r_esp, v); }
    /* 0058a0d0: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x58a0d5u); f_00630f40();
    /* 0058a0d5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058a0d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058a0d9: lea edx, [ebp - 0x108] */ r_edx = (u32)(r_ebp+0xfffffef8u);
    /* 0058a0df: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058a0e0: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x58a0e5u); f_00686d8e();
    /* 0058a0e5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058a0e8: lea eax, [ebp - 0x114] */ r_eax = (u32)(r_ebp+0xfffffeecu);
    /* 0058a0ee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058a0ef: mov ecx, dword ptr [ebp - 0x268] */ r_ecx = R32((u32)(r_ebp+0xfffffd98u));
    /* 0058a0f5: mov edx, dword ptr [ecx + 0x3c08] */ r_edx = R32((u32)(r_ecx+0x3c08u));
    /* 0058a0fb: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0058a0fe: mov eax, dword ptr [ebp - 0x268] */ r_eax = R32((u32)(r_ebp+0xfffffd98u));
    /* 0058a104: lea ecx, [eax + edx + 0x3ba4] */ r_ecx = (u32)(r_eax+r_edx+0x3ba4u);
    /* 0058a10b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0058a10c: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0058a112: call 0x5de230 */ r_esp -= 4; W32(r_esp, 0x58a117u); f_005de230();
    /* 0058a117: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0058a119: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0058a11b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0058a11d: lea edx, [ebp - 0x218] */ r_edx = (u32)(r_ebp+0xfffffde8u);
    /* 0058a123: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058a124: mov eax, dword ptr [ebp - 0x110] */ r_eax = R32((u32)(r_ebp+0xfffffef0u));
    /* 0058a12a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058a12b: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0058a131: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0058a132: call 0x64c8d0 */ r_esp -= 4; W32(r_esp, 0x58a137u); f_0064c8d0();
    /* 0058a137: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058a13a: lea edx, [ebp - 0x218] */ r_edx = (u32)(r_ebp+0xfffffde8u);
    /* 0058a140: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058a141: lea eax, [ebp - 0x108] */ r_eax = (u32)(r_ebp+0xfffffef8u);
    /* 0058a147: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058a148: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x58a14du); f_00686ec6();
    /* 0058a14d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058a150: lea ecx, [ebp - 0x108] */ r_ecx = (u32)(r_ebp+0xfffffef8u);
    /* 0058a156: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0058a157: mov edx, dword ptr [ebp - 0x268] */ r_edx = R32((u32)(r_ebp+0xfffffd98u));
    /* 0058a15d: mov eax, dword ptr [edx + 0x3b98] */ r_eax = R32((u32)(r_edx+0x3b98u));
    /* 0058a163: mov ecx, dword ptr [ebp - 0x268] */ r_ecx = R32((u32)(r_ebp+0xfffffd98u));
    /* 0058a169: mov ecx, dword ptr [ecx + 0x3b98] */ r_ecx = R32((u32)(r_ecx+0x3b98u));
    /* 0058a16f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0058a171: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0058a177: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58a179u); call_ind(t); }
    /* 0058a179: mov ecx, dword ptr [ebp - 0x268] */ r_ecx = R32((u32)(r_ebp+0xfffffd98u));
    /* 0058a17f: mov edx, dword ptr [ecx + 0x3b98] */ r_edx = R32((u32)(r_ecx+0x3b98u));
    /* 0058a185: mov eax, dword ptr [ebp - 0x268] */ r_eax = R32((u32)(r_ebp+0xfffffd98u));
    /* 0058a18b: mov ecx, dword ptr [eax + 0x3b98] */ r_ecx = R32((u32)(r_eax+0x3b98u));
    /* 0058a191: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0058a193: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0058a196: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58a198u); call_ind(t); }
    /* 0058a198: mov ecx, dword ptr [ebp - 0x268] */ r_ecx = R32((u32)(r_ebp+0xfffffd98u));
    /* 0058a19e: call 0x58a380 */ r_esp -= 4; W32(r_esp, 0x58a1a3u); f_0058a380();
    /* 0058a1a3: mov ecx, dword ptr [ebp - 0x268] */ r_ecx = R32((u32)(r_ebp+0xfffffd98u));
    /* 0058a1a9: mov edx, dword ptr [ecx + 0x3b68] */ r_edx = R32((u32)(r_ecx+0x3b68u));
    /* 0058a1af: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0058a1b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058a1b3: mov ecx, dword ptr [ebp - 0x268] */ r_ecx = R32((u32)(r_ebp+0xfffffd98u));
    /* 0058a1b9: mov ecx, dword ptr [ecx + 0x324] */ r_ecx = R32((u32)(r_ecx+0x324u));
    /* 0058a1bf: call 0x58f530 */ r_esp -= 4; W32(r_esp, 0x58a1c4u); f_0058f530();
    /* 0058a1c4: mov ecx, dword ptr [ebp - 0x268] */ r_ecx = R32((u32)(r_ebp+0xfffffd98u));
    /* 0058a1ca: call 0x588a80 */ r_esp -= 4; W32(r_esp, 0x58a1cfu); f_00588a80();
    /* 0058a1cf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058a1d1: jne 0x58a1e5 */ if (!fZ) goto L_0058a1e5;
L_0058a1d3:; BB(0x0058a1d3);
    /* 0058a1d3: push 0x30dfc0 */ { u32 v = 0x30dfc0u; r_esp -= 4; W32(r_esp, v); }
    /* 0058a1d8: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0058a1de: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x58a1e3u); f_005f2ba0();
    /* 0058a1e3: jmp 0x58a1f7 */ goto L_0058a1f7;
L_0058a1e5:; BB(0x0058a1e5);
    /* 0058a1e5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0058a1e7: push 0x30dfc0 */ { u32 v = 0x30dfc0u; r_esp -= 4; W32(r_esp, v); }
    /* 0058a1ec: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0058a1f2: call 0x5f2b20 */ r_esp -= 4; W32(r_esp, 0x58a1f7u); f_005f2b20();
L_0058a1f7:; BB(0x0058a1f7);
    /* 0058a1f7: mov ecx, dword ptr [ebp - 0x268] */ r_ecx = R32((u32)(r_ebp+0xfffffd98u));
    /* 0058a1fd: call 0x58a470 */ r_esp -= 4; W32(r_esp, 0x58a202u); f_0058a470();
    /* 0058a202: mov dword ptr [ebp - 0x240], eax */ W32((u32)(r_ebp+0xfffffdc0u), r_eax);
    /* 0058a208: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0058a20a: mov ecx, dword ptr [ebp - 0x268] */ r_ecx = R32((u32)(r_ebp+0xfffffd98u));
    /* 0058a210: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x58a215u); f_005fb5e0();
    /* 0058a215: mov dword ptr [ebp - 0x250], eax */ W32((u32)(r_ebp+0xfffffdb0u), r_eax);
    /* 0058a21b: mov edx, dword ptr [ebp - 0x250] */ r_edx = R32((u32)(r_ebp+0xfffffdb0u));
    /* 0058a221: mov eax, dword ptr [edx + 0x1f0] */ r_eax = R32((u32)(r_edx+0x1f0u));
    /* 0058a227: mov dword ptr [ebp - 0x254], eax */ W32((u32)(r_ebp+0xfffffdacu), r_eax);
    /* 0058a22d: cmp dword ptr [ebp - 0x254], 0x30dfc4 */ {  u32 a = R32((u32)(r_ebp+0xfffffdacu)); u32 b = 0x30dfc4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058a237: jne 0x58a242 */ if (!fZ) goto L_0058a242;
L_0058a239:; BB(0x0058a239);
    /* 0058a239: cmp dword ptr [ebp - 0x240], 0x14 */ {  u32 a = R32((u32)(r_ebp+0xfffffdc0u)); u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058a240: jne 0x58a2b6 */ if (!fZ) goto L_0058a2b6;
L_0058a242:; BB(0x0058a242);
    /* 0058a242: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0058a244: mov ecx, dword ptr [ebp - 0x268] */ r_ecx = R32((u32)(r_ebp+0xfffffd98u));
    /* 0058a24a: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x58a24fu); f_005fb5e0();
    /* 0058a24f: mov dword ptr [ebp - 0x258], eax */ W32((u32)(r_ebp+0xfffffda8u), r_eax);
    /* 0058a255: mov ecx, dword ptr [ebp - 0x258] */ r_ecx = R32((u32)(r_ebp+0xfffffda8u));
    /* 0058a25b: mov edx, dword ptr [ecx + 0x1f0] */ r_edx = R32((u32)(r_ecx+0x1f0u));
    /* 0058a261: mov dword ptr [ebp - 0x25c], edx */ W32((u32)(r_ebp+0xfffffda4u), r_edx);
    /* 0058a267: cmp dword ptr [ebp - 0x25c], 0x30dfc3 */ {  u32 a = R32((u32)(r_ebp+0xfffffda4u)); u32 b = 0x30dfc3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058a271: jne 0x58a27c */ if (!fZ) goto L_0058a27c;
L_0058a273:; BB(0x0058a273);
    /* 0058a273: cmp dword ptr [ebp - 0x240], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffdc0u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058a27a: jne 0x58a2b6 */ if (!fZ) goto L_0058a2b6;
L_0058a27c:; BB(0x0058a27c);
    /* 0058a27c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0058a27e: mov ecx, dword ptr [ebp - 0x268] */ r_ecx = R32((u32)(r_ebp+0xfffffd98u));
    /* 0058a284: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x58a289u); f_005fb5e0();
    /* 0058a289: mov dword ptr [ebp - 0x260], eax */ W32((u32)(r_ebp+0xfffffda0u), r_eax);
    /* 0058a28f: mov eax, dword ptr [ebp - 0x260] */ r_eax = R32((u32)(r_ebp+0xfffffda0u));
    /* 0058a295: mov ecx, dword ptr [eax + 0x1f0] */ r_ecx = R32((u32)(r_eax+0x1f0u));
    /* 0058a29b: mov dword ptr [ebp - 0x264], ecx */ W32((u32)(r_ebp+0xfffffd9cu), r_ecx);
    /* 0058a2a1: cmp dword ptr [ebp - 0x264], 0x30dfc2 */ {  u32 a = R32((u32)(r_ebp+0xfffffd9cu)); u32 b = 0x30dfc2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058a2ab: jne 0x58a2f8 */ if (!fZ) goto L_0058a2f8;
L_0058a2ad:; BB(0x0058a2ad);
    /* 0058a2ad: cmp dword ptr [ebp - 0x240], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffdc0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058a2b4: je 0x58a2f8 */ if (fZ) goto L_0058a2f8;
L_0058a2b6:; BB(0x0058a2b6);
    /* 0058a2b6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0058a2b8: mov ecx, dword ptr [ebp - 0x268] */ r_ecx = R32((u32)(r_ebp+0xfffffd98u));
    /* 0058a2be: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x58a2c3u); f_005fb5e0();
    /* 0058a2c3: mov dword ptr [ebp - 0x29c], eax */ W32((u32)(r_ebp+0xfffffd64u), r_eax);
    /* 0058a2c9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0058a2cb: push 0x30dfc1 */ { u32 v = 0x30dfc1u; r_esp -= 4; W32(r_esp, v); }
    /* 0058a2d0: mov edx, dword ptr [ebp - 0x29c] */ r_edx = R32((u32)(r_ebp+0xfffffd64u));
    /* 0058a2d6: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0058a2d8: mov ecx, dword ptr [ebp - 0x29c] */ r_ecx = R32((u32)(r_ebp+0xfffffd64u));
    /* 0058a2de: mov edx, dword ptr [eax + 0xf0] */ r_edx = R32((u32)(r_eax+0xf0u));
    /* 0058a2e4: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x58a2e6u); call_ind(t); }
    /* 0058a2e6: mov eax, dword ptr [ebp - 0x268] */ r_eax = R32((u32)(r_ebp+0xfffffd98u));
    /* 0058a2ec: mov ecx, dword ptr [eax + 0x3b68] */ r_ecx = R32((u32)(r_eax+0x3b68u));
    /* 0058a2f2: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0058a2f5: mov byte ptr [edx], 0 */ W8((u32)(r_edx), 0x0u);
L_0058a2f8:; BB(0x0058a2f8);
    /* 0058a2f8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0058a2f9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0058a2fa: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058a2fd: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0058a2ff: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x58a304u); f_00686d72();
    /* 0058a304: mov esp, ebp */ r_esp = r_ebp;
    /* 0058a306: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058a307: ret  */ FN_RET(0x00589290); r_esp += 4; return;
}

void f_0058f530(void) /* kenoticketdialog::func_0058f530 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0058f530);
    /* 0058f530: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058f531: mov ebp, esp */ r_ebp = r_esp;
    /* 0058f533: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0058f536: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0058f539: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0058f53f: call 0x5e10d0 */ r_esp -= 4; W32(r_esp, 0x58f544u); f_005e10d0();
    /* 0058f544: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0058f547: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0058f54a: mov ecx, dword ptr [eax + 0x174] */ r_ecx = R32((u32)(r_eax+0x174u));
    /* 0058f550: mov edx, dword ptr [ecx + 0x3c08] */ r_edx = R32((u32)(r_ecx+0x3c08u));
    /* 0058f556: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0058f559: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0058f55c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0058f55f: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 0058f562: mov dword ptr [eax + 0x14c], edx */ W32((u32)(r_eax+0x14cu), r_edx);
    /* 0058f568: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0058f56b: movsx ecx, byte ptr [eax + 2] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x2u));
    /* 0058f56f: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0058f572: mov eax, dword ptr [edx + 0x14c] */ r_eax = R32((u32)(r_edx+0x14cu));
    /* 0058f578: lea ecx, [ecx + eax - 1] */ r_ecx = (u32)(r_ecx+r_eax+0xffffffffu);
    /* 0058f57c: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0058f57f: mov dword ptr [edx + 0x150], ecx */ W32((u32)(r_edx+0x150u), r_ecx);
    /* 0058f585: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058f589: jl 0x58f594 */ if ((fS!=fO)) goto L_0058f594;
L_0058f58b:; BB(0x0058f58b);
    /* 0058f58b: cmp dword ptr [ebp - 8], 0x3e8 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3e8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058f592: jle 0x58f5ab */ if ((fZ||fS!=fO)) goto L_0058f5ab;
L_0058f594:; BB(0x0058f594);
    /* 0058f594: push 0xa42 */ { u32 v = 0xa42u; r_esp -= 4; W32(r_esp, v); }
    /* 0058f599: push 0x6ccecc */ { u32 v = 0x6cceccu; r_esp -= 4; W32(r_esp, v); }
    /* 0058f59e: push 0x6cde28 */ { u32 v = 0x6cde28u; r_esp -= 4; W32(r_esp, v); }
    /* 0058f5a3: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x58f5a8u); f_005e9f20();
    /* 0058f5a8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0058f5ab:; BB(0x0058f5ab);
    /* 0058f5ab: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0058f5ae: mov edx, dword ptr [ecx + 0x178] */ r_edx = R32((u32)(r_ecx+0x178u));
    /* 0058f5b4: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0058f5b7: mov ecx, dword ptr [eax + 0x178] */ r_ecx = R32((u32)(r_eax+0x178u));
    /* 0058f5bd: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0058f5bf: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0058f5c2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58f5c4u); call_ind(t); }
    /* 0058f5c4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0058f5c7: call 0x58f450 */ r_esp -= 4; W32(r_esp, 0x58f5ccu); f_0058f450();
    /* 0058f5cc: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0058f5cf: mov ecx, dword ptr [ecx + 0x144] */ r_ecx = R32((u32)(r_ecx+0x144u));
    /* 0058f5d5: call 0x58fb90 */ r_esp -= 4; W32(r_esp, 0x58f5dau); f_0058fb90();
    /* 0058f5da: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0058f5dd: mov ecx, dword ptr [edx + 0x148] */ r_ecx = R32((u32)(r_edx+0x148u));
    /* 0058f5e3: call 0x58fb90 */ r_esp -= 4; W32(r_esp, 0x58f5e8u); f_0058fb90();
    /* 0058f5e8: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0058f5eb: mov ecx, dword ptr [eax + 0x174] */ r_ecx = R32((u32)(r_eax+0x174u));
    /* 0058f5f1: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0058f5f4: mov eax, dword ptr [ecx + edx*4 + 0x3be4] */ r_eax = R32((u32)(r_ecx+r_edx*4+0x3be4u));
    /* 0058f5fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058f5fc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0058f5ff: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0058f602: mov eax, dword ptr [edx + ecx*4 + 0x154] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x154u));
    /* 0058f609: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058f60a: push 0x6cde08 */ { u32 v = 0x6cde08u; r_esp -= 4; W32(r_esp, v); }
    /* 0058f60f: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x58f614u); f_0062fde0();
    /* 0058f614: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058f617: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0058f61a: cmp dword ptr [ecx + 0x1c], 1 */ {  u32 a = R32((u32)(r_ecx+0x1cu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058f61e: jl 0x58f62c */ if ((fS!=fO)) goto L_0058f62c;
L_0058f620:; BB(0x0058f620);
    /* 0058f620: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0058f623: cmp dword ptr [edx + 0x1c], 0x3e8 */ {  u32 a = R32((u32)(r_edx+0x1cu)); u32 b = 0x3e8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058f62a: jle 0x58f631 */ if ((fZ||fS!=fO)) goto L_0058f631;
L_0058f62c:; BB(0x0058f62c);
    /* 0058f62c: jmp 0x58f729 */ goto L_0058f729;
L_0058f631:; BB(0x0058f631);
    /* 0058f631: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0058f638: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0058f63b: movsx ecx, byte ptr [eax + 4] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x4u));
    /* 0058f63f: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058f642: jne 0x58f66a */ if (!fZ) goto L_0058f66a;
L_0058f644:; BB(0x0058f644);
    /* 0058f644: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0058f647: mov eax, dword ptr [edx + 0x150] */ r_eax = R32((u32)(r_edx+0x150u));
    /* 0058f64d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0058f650: cmp dword ptr [ebp - 4], 0x3e8 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3e8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058f657: jle 0x58f665 */ if ((fZ||fS!=fO)) goto L_0058f665;
L_0058f659:; BB(0x0058f659);
    /* 0058f659: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058f65c: sub ecx, 0x3e8 */ {  u32 a = r_ecx; u32 b = 0x3e8u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0058f662: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0058f665:; BB(0x0058f665);
    /* 0058f665: jmp 0x58f70b */ goto L_0058f70b;
L_0058f66a:; BB(0x0058f66a);
    /* 0058f66a: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 0058f670: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0058f673: mov ecx, dword ptr [edx + 0x98] */ r_ecx = R32((u32)(r_edx+0x98u));
    /* 0058f679: cmp ecx, dword ptr [eax + 0x14c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x14cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058f67f: je 0x58f70b */ if (fZ) goto L_0058f70b;
L_0058f685:; BB(0x0058f685);
    /* 0058f685: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0058f688: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058f68b: cmp eax, dword ptr [edx + 0x14c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x14cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058f691: jl 0x58f6a1 */ if ((fS!=fO)) goto L_0058f6a1;
L_0058f693:; BB(0x0058f693);
    /* 0058f693: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0058f696: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058f699: cmp edx, dword ptr [ecx + 0x150] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x150u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058f69f: jle 0x58f6c8 */ if ((fZ||fS!=fO)) goto L_0058f6c8;
L_0058f6a1:; BB(0x0058f6a1);
    /* 0058f6a1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058f6a4: add eax, 0x3e8 */ {  u32 a = r_eax; u32 b = 0x3e8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0058f6a9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0058f6ac: cmp eax, dword ptr [ecx + 0x14c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x14cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058f6b2: jl 0x58f6d0 */ if ((fS!=fO)) goto L_0058f6d0;
L_0058f6b4:; BB(0x0058f6b4);
    /* 0058f6b4: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058f6b7: add edx, 0x3e8 */ {  u32 a = r_edx; u32 b = 0x3e8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0058f6bd: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0058f6c0: cmp edx, dword ptr [eax + 0x150] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x150u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058f6c6: jg 0x58f6d0 */ if ((!fZ&&fS==fO)) goto L_0058f6d0;
L_0058f6c8:; BB(0x0058f6c8);
    /* 0058f6c8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058f6cb: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0058f6ce: jmp 0x58f70b */ goto L_0058f70b;
L_0058f6d0:; BB(0x0058f6d0);
    /* 0058f6d0: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0058f6d2: jne 0x58f6eb */ if (!fZ) goto L_0058f6eb;
L_0058f6d4:; BB(0x0058f6d4);
    /* 0058f6d4: push 0xa69 */ { u32 v = 0xa69u; r_esp -= 4; W32(r_esp, v); }
    /* 0058f6d9: push 0x6ccecc */ { u32 v = 0x6cceccu; r_esp -= 4; W32(r_esp, v); }
    /* 0058f6de: push 0x6b2b64 */ { u32 v = 0x6b2b64u; r_esp -= 4; W32(r_esp, v); }
    /* 0058f6e3: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x58f6e8u); f_005e9f20();
    /* 0058f6e8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0058f6eb:; BB(0x0058f6eb);
    /* 0058f6eb: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0058f6ee: mov edx, dword ptr [ecx + 0x150] */ r_edx = R32((u32)(r_ecx+0x150u));
    /* 0058f6f4: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0058f6f7: cmp dword ptr [ebp - 4], 0x3e8 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3e8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058f6fe: jle 0x58f70b */ if ((fZ||fS!=fO)) goto L_0058f70b;
L_0058f700:; BB(0x0058f700);
    /* 0058f700: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058f703: sub eax, 0x3e8 */ {  u32 a = r_eax; u32 b = 0x3e8u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0058f708: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0058f70b:; BB(0x0058f70b);
    /* 0058f70b: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058f70f: je 0x58f729 */ if (fZ) goto L_0058f729;
L_0058f711:; BB(0x0058f711);
    /* 0058f711: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0058f714: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0058f717: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058f71a: mov dword ptr [edx + ecx*4 + 0x154], eax */ W32((u32)(r_edx+r_ecx*4+0x154u), r_eax);
    /* 0058f721: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0058f724: call 0x58f730 */ r_esp -= 4; W32(r_esp, 0x58f729u); f_0058f730();
L_0058f729:; BB(0x0058f729);
    /* 0058f729: mov esp, ebp */ r_esp = r_ebp;
    /* 0058f72b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058f72c: ret 4 */ FN_RET(0x0058f530); r_esp += 8; return;
}

