#include "protos.h"

void f_005abfa0(void) /* RoyalMatchPlayerDisplay::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005abfa0);
    /* 005abfa0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005abfa1: mov ebp, esp */ r_ebp = r_esp;
    /* 005abfa3: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005abfa6: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005abfa9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005abfac: call 0x5e9e20 */ r_esp -= 4; W32(r_esp, 0x5abfb1u); f_005e9e20();
    /* 005abfb1: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005abfb4: mov dword ptr [eax], 0x6cfe54 */ W32((u32)(r_eax), 0x6cfe54u);
    /* 005abfba: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005abfc1: jmp 0x5abfcc */ goto L_005abfcc;
L_005abfc3:; BB(0x005abfc3);
    /* 005abfc3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005abfc6: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005abfc9: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005abfcc:; BB(0x005abfcc);
    /* 005abfcc: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005abfd0: jge 0x5ac005 */ if ((fS==fO)) goto L_005ac005;
L_005abfd2:; BB(0x005abfd2);
    /* 005abfd2: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005abfd9: jmp 0x5abfe4 */ goto L_005abfe4;
L_005abfdb:; BB(0x005abfdb);
    /* 005abfdb: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005abfde: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005abfe1: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_005abfe4:; BB(0x005abfe4);
    /* 005abfe4: cmp dword ptr [ebp - 8], 0x16 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005abfe8: jge 0x5ac003 */ if ((fS==fO)) goto L_005ac003;
L_005abfea:; BB(0x005abfea);
    /* 005abfea: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005abfed: imul eax, eax, 0x58 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x58u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005abff0: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005abff3: lea edx, [ecx + eax + 0x28] */ r_edx = (u32)(r_ecx+r_eax+0x28u);
    /* 005abff7: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005abffa: mov dword ptr [edx + eax*4], 0 */ W32((u32)(r_edx+r_eax*4), 0x0u);
    /* 005ac001: jmp 0x5abfdb */ goto L_005abfdb;
L_005ac003:; BB(0x005ac003);
    /* 005ac003: jmp 0x5abfc3 */ goto L_005abfc3;
L_005ac005:; BB(0x005ac005);
    /* 005ac005: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005ac00c: jmp 0x5ac017 */ goto L_005ac017;
L_005ac00e:; BB(0x005ac00e);
    /* 005ac00e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ac011: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ac014: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_005ac017:; BB(0x005ac017);
    /* 005ac017: cmp dword ptr [ebp - 0xc], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ac01b: jge 0x5ac03b */ if ((fS==fO)) goto L_005ac03b;
L_005ac01d:; BB(0x005ac01d);
    /* 005ac01d: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ac020: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ac023: mov dword ptr [eax + edx*4 + 8], 0 */ W32((u32)(r_eax+r_edx*4+0x8u), 0x0u);
    /* 005ac02b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ac02e: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ac031: mov dword ptr [edx + ecx*4 + 0x18], 0 */ W32((u32)(r_edx+r_ecx*4+0x18u), 0x0u);
    /* 005ac039: jmp 0x5ac00e */ goto L_005ac00e;
L_005ac03b:; BB(0x005ac03b);
    /* 005ac03b: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ac03e: mov esp, ebp */ r_esp = r_ebp;
    /* 005ac040: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ac041: ret  */ FN_RET(0x005abfa0); r_esp += 4; return;
}

void f_005ac050(void) /* RoyalMatchPlayerDisplay::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ac050);
    /* 005ac050: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ac051: mov ebp, esp */ r_ebp = r_esp;
    /* 005ac053: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ac055: push 0x6a7c25 */ { u32 v = 0x6a7c25u; r_esp -= 4; W32(r_esp, v); }
    /* 005ac05a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005ac060: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ac061: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ac064: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005ac069: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005ac06b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ac06c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005ac06f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005ac075: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 005ac078: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005ac07b: mov dword ptr [eax], 0x6cfe54 */ W32((u32)(r_eax), 0x6cfe54u);
    /* 005ac081: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005ac088: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005ac08f: jmp 0x5ac09a */ goto L_005ac09a;
L_005ac091:; BB(0x005ac091);
    /* 005ac091: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ac094: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ac097: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_005ac09a:; BB(0x005ac09a);
    /* 005ac09a: cmp dword ptr [ebp - 0x10], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ac09e: jge 0x5ac0f8 */ if ((fS==fO)) goto L_005ac0f8;
L_005ac0a0:; BB(0x005ac0a0);
    /* 005ac0a0: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 005ac0a7: jmp 0x5ac0b2 */ goto L_005ac0b2;
L_005ac0a9:; BB(0x005ac0a9);
    /* 005ac0a9: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ac0ac: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005ac0af: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
L_005ac0b2:; BB(0x005ac0b2);
    /* 005ac0b2: cmp dword ptr [ebp - 0x14], 0x16 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ac0b6: jge 0x5ac0f6 */ if ((fS==fO)) goto L_005ac0f6;
L_005ac0b8:; BB(0x005ac0b8);
    /* 005ac0b8: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ac0bb: imul eax, eax, 0x58 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x58u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005ac0be: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005ac0c1: lea edx, [ecx + eax + 0x28] */ r_edx = (u32)(r_ecx+r_eax+0x28u);
    /* 005ac0c5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005ac0c8: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 005ac0cb: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005ac0ce: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ac0d1: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 005ac0d4: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ac0d8: je 0x5ac0ed */ if (fZ) goto L_005ac0ed;
L_005ac0da:; BB(0x005ac0da);
    /* 005ac0da: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ac0dc: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005ac0df: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ac0e1: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005ac0e4: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005ac0e6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ac0e8u); call_ind(t); }
    /* 005ac0e8: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 005ac0eb: jmp 0x5ac0f4 */ goto L_005ac0f4;
L_005ac0ed:; BB(0x005ac0ed);
    /* 005ac0ed: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_005ac0f4:; BB(0x005ac0f4);
    /* 005ac0f4: jmp 0x5ac0a9 */ goto L_005ac0a9;
L_005ac0f6:; BB(0x005ac0f6);
    /* 005ac0f6: jmp 0x5ac091 */ goto L_005ac091;
L_005ac0f8:; BB(0x005ac0f8);
    /* 005ac0f8: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 005ac0ff: jmp 0x5ac10a */ goto L_005ac10a;
L_005ac101:; BB(0x005ac101);
    /* 005ac101: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ac104: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ac107: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
L_005ac10a:; BB(0x005ac10a);
    /* 005ac10a: cmp dword ptr [ebp - 0x18], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ac10e: jge 0x5ac178 */ if ((fS==fO)) goto L_005ac178;
L_005ac110:; BB(0x005ac110);
    /* 005ac110: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ac113: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005ac116: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 005ac11a: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 005ac11d: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005ac120: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 005ac123: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ac127: je 0x5ac13c */ if (fZ) goto L_005ac13c;
L_005ac129:; BB(0x005ac129);
    /* 005ac129: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ac12b: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005ac12e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ac130: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005ac133: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005ac135: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ac137u); call_ind(t); }
    /* 005ac137: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 005ac13a: jmp 0x5ac143 */ goto L_005ac143;
L_005ac13c:; BB(0x005ac13c);
    /* 005ac13c: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_005ac143:; BB(0x005ac143);
    /* 005ac143: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ac146: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005ac149: mov eax, dword ptr [edx + ecx*4 + 0x18] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x18u));
    /* 005ac14d: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005ac150: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005ac153: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 005ac156: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ac15a: je 0x5ac16f */ if (fZ) goto L_005ac16f;
L_005ac15c:; BB(0x005ac15c);
    /* 005ac15c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ac15e: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005ac161: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005ac163: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005ac166: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ac168: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5ac16au); call_ind(t); }
    /* 005ac16a: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 005ac16d: jmp 0x5ac176 */ goto L_005ac176;
L_005ac16f:; BB(0x005ac16f);
    /* 005ac16f: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_005ac176:; BB(0x005ac176);
    /* 005ac176: jmp 0x5ac101 */ goto L_005ac101;
L_005ac178:; BB(0x005ac178);
    /* 005ac178: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005ac17f: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005ac182: call 0x5e9e40 */ r_esp -= 4; W32(r_esp, 0x5ac187u); f_005e9e40();
    /* 005ac187: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ac18a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ac191: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ac192: mov esp, ebp */ r_esp = r_ebp;
    /* 005ac194: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ac195: ret  */ FN_RET(0x005ac050); r_esp += 4; return;
}

