#include "protos.h"

void f_0042b030(void) /* sub_42B030 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0042b030);
    /* 0042b030: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042b031: mov ebp, esp */ r_ebp = r_esp;
    /* 0042b033: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0042b035: push 0x69e51f */ { u32 v = 0x69e51fu; r_esp -= 4; W32(r_esp, v); }
    /* 0042b03a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0042b040: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042b041: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0042b044: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0042b049: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042b04b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042b04c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0042b04f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0042b055: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 0042b058: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0042b05a: mov eax, dword ptr [0x162ee80] */ r_eax = R32((u32)(0x162ee80u));
    /* 0042b05f: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0042b062: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 0042b068: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0042b06b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0042b06d: mov ecx, eax */ r_ecx = r_eax;
    /* 0042b06f: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0042b072: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42b074u); call_ind(t); }
    /* 0042b074: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 0042b07b: jmp 0x42b086 */ goto L_0042b086;
L_0042b07d:; BB(0x0042b07d);
    /* 0042b07d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0042b080: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0042b083: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
L_0042b086:; BB(0x0042b086);
    /* 0042b086: cmp dword ptr [ebp - 0x14], 0x4c */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042b08a: jge 0x42b31d */ if ((fS==fO)) goto L_0042b31d;
L_0042b090:; BB(0x0042b090);
    /* 0042b090: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0042b093: mov eax, dword ptr [0x7906d4] */ r_eax = R32((u32)(0x7906d4u));
    /* 0042b098: mov ecx, dword ptr [eax + edx*4 + 4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 0042b09c: cmp dword ptr [ecx + 0x110], -1 */ {  u32 a = R32((u32)(r_ecx+0x110u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042b0a3: jne 0x42b11f */ if (!fZ) goto L_0042b11f;
L_0042b0a5:; BB(0x0042b0a5);
    /* 0042b0a5: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0042b0a8: mov eax, dword ptr [0x7906d4] */ r_eax = R32((u32)(0x7906d4u));
    /* 0042b0ad: mov ecx, dword ptr [eax + edx*4 + 4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 0042b0b1: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x42b0b6u); f_005f5400();
    /* 0042b0b6: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042b0b9: je 0x42b0d2 */ if (fZ) goto L_0042b0d2;
L_0042b0bb:; BB(0x0042b0bb);
    /* 0042b0bb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0042b0be: mov edx, dword ptr [0x7906d4] */ r_edx = R32((u32)(0x7906d4u));
    /* 0042b0c4: mov ecx, dword ptr [edx + ecx*4 + 4] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 0042b0c8: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x42b0cdu); f_005f5400();
    /* 0042b0cd: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042b0d0: jne 0x42b11f */ if (!fZ) goto L_0042b11f;
L_0042b0d2:; BB(0x0042b0d2);
    /* 0042b0d2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0042b0d5: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0042b0db: mov ecx, dword ptr [ecx + eax*4 + 4] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 0042b0df: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x42b0e4u); f_005f5400();
    /* 0042b0e4: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042b0e7: jne 0x42b124 */ if (!fZ) goto L_0042b124;
L_0042b0e9:; BB(0x0042b0e9);
    /* 0042b0e9: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0042b0eb: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0042b0ee: mov eax, dword ptr [0x7906d4] */ r_eax = R32((u32)(0x7906d4u));
    /* 0042b0f3: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 0042b0fa: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 0042b0fd: mov edx, 1 */ r_edx = 0x1u;
    /* 0042b102: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0042b105: mov eax, dword ptr [0x7906d4] */ r_eax = R32((u32)(0x7906d4u));
    /* 0042b10a: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 0042b111: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 0042b114: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0042b117: add edx, dword ptr [ebp - 0x34] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffccu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0042b11a: cmp edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042b11d: jne 0x42b124 */ if (!fZ) goto L_0042b124;
L_0042b11f:; BB(0x0042b11f);
    /* 0042b11f: jmp 0x42b07d */ goto L_0042b07d;
L_0042b124:; BB(0x0042b124);
    /* 0042b124: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 0042b12b: jmp 0x42b136 */ goto L_0042b136;
L_0042b12d:; BB(0x0042b12d);
    /* 0042b12d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042b130: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042b133: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
L_0042b136:; BB(0x0042b136);
    /* 0042b136: cmp dword ptr [ebp - 0x20], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042b13a: jge 0x42b318 */ if ((fS==fO)) goto L_0042b318;
L_0042b140:; BB(0x0042b140);
    /* 0042b140: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0042b143: mov edx, dword ptr [0x7906d4] */ r_edx = R32((u32)(0x7906d4u));
    /* 0042b149: mov ecx, dword ptr [edx + ecx*4 + 4] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 0042b14d: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x42b152u); f_005f5400();
    /* 0042b152: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042b153: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042b156: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042b157: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0042b15d: call 0x4369a0 */ r_esp -= 4; W32(r_esp, 0x42b162u); f_004369a0();
    /* 0042b162: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0042b165: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042b167: jne 0x42b16b */ if (!fZ) goto L_0042b16b;
L_0042b169:; BB(0x0042b169);
    /* 0042b169: jmp 0x42b12d */ goto L_0042b12d;
L_0042b16b:; BB(0x0042b16b);
    /* 0042b16b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0042b16e: mov eax, dword ptr [0x7906d4] */ r_eax = R32((u32)(0x7906d4u));
    /* 0042b173: mov ecx, dword ptr [eax + edx*4 + 4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 0042b177: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x42b17cu); f_005f5400();
    /* 0042b17c: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042b17f: jne 0x42b1c7 */ if (!fZ) goto L_0042b1c7;
L_0042b181:; BB(0x0042b181);
    /* 0042b181: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0042b183: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0042b186: mov edx, dword ptr [0x7906d4] */ r_edx = R32((u32)(0x7906d4u));
    /* 0042b18c: mov eax, dword ptr [edx + ecx + 0xacc] */ r_eax = R32((u32)(r_edx+r_ecx+0xaccu));
    /* 0042b193: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0042b196: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0042b19b: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0042b19e: mov edx, dword ptr [0x7906d4] */ r_edx = R32((u32)(0x7906d4u));
    /* 0042b1a4: mov eax, dword ptr [edx + ecx + 0xacc] */ r_eax = R32((u32)(r_edx+r_ecx+0xaccu));
    /* 0042b1ab: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0042b1ae: lea ecx, [ebp - 0x1c] */ r_ecx = (u32)(r_ebp+0xffffffe4u);
    /* 0042b1b1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042b1b2: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042b1b5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0042b1b6: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0042b1b9: add eax, dword ptr [ebp - 0x3c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffc4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042b1bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042b1bd: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0042b1c0: call 0x42b350 */ r_esp -= 4; W32(r_esp, 0x42b1c5u); f_0042b350();
    /* 0042b1c5: jmp 0x42b20b */ goto L_0042b20b;
L_0042b1c7:; BB(0x0042b1c7);
    /* 0042b1c7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0042b1c9: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0042b1cc: mov edx, dword ptr [0x7906d4] */ r_edx = R32((u32)(0x7906d4u));
    /* 0042b1d2: mov eax, dword ptr [edx + ecx + 0xacc] */ r_eax = R32((u32)(r_edx+r_ecx+0xaccu));
    /* 0042b1d9: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0042b1dc: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0042b1e1: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0042b1e4: mov edx, dword ptr [0x7906d4] */ r_edx = R32((u32)(0x7906d4u));
    /* 0042b1ea: mov eax, dword ptr [edx + ecx + 0xacc] */ r_eax = R32((u32)(r_edx+r_ecx+0xaccu));
    /* 0042b1f1: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0042b1f4: lea ecx, [ebp - 0x1c] */ r_ecx = (u32)(r_ebp+0xffffffe4u);
    /* 0042b1f7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042b1f8: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042b1fb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0042b1fc: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0042b1ff: add eax, dword ptr [ebp - 0x44] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffbcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042b202: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042b203: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0042b206: call 0x42b620 */ r_esp -= 4; W32(r_esp, 0x42b20bu); f_0042b620();
L_0042b20b:; BB(0x0042b20b);
    /* 0042b20b: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0042b212: jmp 0x42b21d */ goto L_0042b21d;
L_0042b214:; BB(0x0042b214);
    /* 0042b214: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0042b217: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0042b21a: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
L_0042b21d:; BB(0x0042b21d);
    /* 0042b21d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042b21f: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042b222: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0042b223: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0042b226: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0042b229: mov ecx, dword ptr [ecx + eax*4 + 0x14] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x14u));
    /* 0042b22d: call 0x5ccdf0 */ r_esp -= 4; W32(r_esp, 0x42b232u); f_005ccdf0();
    /* 0042b232: cmp dword ptr [ebp - 0x24], eax */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042b235: jg 0x42b313 */ if ((!fZ&&fS==fO)) goto L_0042b313;
L_0042b23b:; BB(0x0042b23b);
    /* 0042b23b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0042b23e: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0042b241: mov ecx, dword ptr [eax + edx*4 + 0x14] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x14u));
    /* 0042b245: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042b248: imul edx, edx, 0x1e0 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x1e0u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0042b24e: lea eax, [ecx + edx + 0x17c] */ r_eax = (u32)(r_ecx+r_edx+0x17cu);
    /* 0042b255: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0042b258: mov edx, dword ptr [eax + ecx*4] */ r_edx = R32((u32)(r_eax+r_ecx*4));
    /* 0042b25b: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0042b25e: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042b262: jne 0x42b269 */ if (!fZ) goto L_0042b269;
L_0042b264:; BB(0x0042b264);
    /* 0042b264: jmp 0x42b313 */ goto L_0042b313;
L_0042b269:; BB(0x0042b269);
    /* 0042b269: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0042b26b: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0042b271: call 0x637810 */ r_esp -= 4; W32(r_esp, 0x42b276u); f_00637810();
    /* 0042b276: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0042b279: mov dword ptr [ecx + 0x184], eax */ W32((u32)(r_ecx+0x184u), r_eax);
    /* 0042b27f: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0042b282: cmp dword ptr [edx + 0x184], 0 */ {  u32 a = R32((u32)(r_edx+0x184u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042b289: je 0x42b2f9 */ if (fZ) goto L_0042b2f9;
L_0042b28b:; BB(0x0042b28b);
    /* 0042b28b: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0042b291: call 0x637630 */ r_esp -= 4; W32(r_esp, 0x42b296u); f_00637630();
    /* 0042b296: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0042b299: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042b29b: je 0x42b2f9 */ if (fZ) goto L_0042b2f9;
L_0042b29d:; BB(0x0042b29d);
    /* 0042b29d: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0042b29f: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x42b2a4u); f_00686d82();
    /* 0042b2a4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042b2a7: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0042b2aa: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0042b2b1: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042b2b5: je 0x42b2d7 */ if (fZ) goto L_0042b2d7;
L_0042b2b7:; BB(0x0042b2b7);
    /* 0042b2b7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042b2b9: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0042b2bc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042b2bd: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0042b2c0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0042b2c1: mov eax, dword ptr [0x162ee80] */ r_eax = R32((u32)(0x162ee80u));
    /* 0042b2c6: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0042b2c9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042b2ca: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0042b2cd: call 0x606e60 */ r_esp -= 4; W32(r_esp, 0x42b2d2u); f_00606e60();
    /* 0042b2d2: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0042b2d5: jmp 0x42b2de */ goto L_0042b2de;
L_0042b2d7:; BB(0x0042b2d7);
    /* 0042b2d7: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_0042b2de:; BB(0x0042b2de);
    /* 0042b2de: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0042b2e1: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 0042b2e4: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0042b2eb: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0042b2ee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042b2ef: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0042b2f2: call 0x5f6050 */ r_esp -= 4; W32(r_esp, 0x42b2f7u); f_005f6050();
    /* 0042b2f7: jmp 0x42b30e */ goto L_0042b30e;
L_0042b2f9:; BB(0x0042b2f9);
    /* 0042b2f9: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0042b2fc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042b2fd: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0042b300: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0042b301: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0042b304: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0042b306: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0042b309: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0042b30c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42b30eu); call_ind(t); }
L_0042b30e:; BB(0x0042b30e);
    /* 0042b30e: jmp 0x42b214 */ goto L_0042b214;
L_0042b313:; BB(0x0042b313);
    /* 0042b313: jmp 0x42b12d */ goto L_0042b12d;
L_0042b318:; BB(0x0042b318);
    /* 0042b318: jmp 0x42b07d */ goto L_0042b07d;
L_0042b31d:; BB(0x0042b31d);
    /* 0042b31d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042b31f: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0042b325: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0042b328: mov eax, dword ptr [0x162ee80] */ r_eax = R32((u32)(0x162ee80u));
    /* 0042b32d: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0042b330: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0042b332: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0042b335: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42b337u); call_ind(t); }
    /* 0042b337: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042b33a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0042b341: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0042b342: mov esp, ebp */ r_esp = r_ebp;
    /* 0042b344: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042b345: ret  */ FN_RET(0x0042b030); r_esp += 4; return;
}

void f_0042b350(void) /* sub_42B350 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0042b350);
    /* 0042b350: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042b351: mov ebp, esp */ r_ebp = r_esp;
    /* 0042b353: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0042b356: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0042b359: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0042b35c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0042b35f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042b362: sub ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0042b365: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0042b368: cmp dword ptr [ebp - 8], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0042b36c: ja 0x42b5f0 */ if ((!fC&&!fZ)) goto L_0042b5f0;
L_0042b372:; BB(0x0042b372);
    /* 0042b372: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042b375: jmp dword ptr [edx*4 + 0x42b5f8] */ { u32 t = R32((u32)(r_edx*4+0x42b5f8u)); switch (t) { case 0x42b37cu: goto L_0042b37c; case 0x42b3e6u: goto L_0042b3e6; case 0x42b450u: goto L_0042b450; case 0x42b5f0u: goto L_0042b5f0; case 0x42b4bau: goto L_0042b4ba; case 0x42b524u: goto L_0042b524; case 0x42b58bu: goto L_0042b58b; default: UNSUP(0x0042b375, "jump table entry is not a known target"); } }
L_0042b37c:; BB(0x0042b37c);
    /* 0042b37c: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 0042b37e: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0042b384: call 0x434880 */ r_esp -= 4; W32(r_esp, 0x42b389u); f_00434880();
    /* 0042b389: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042b38c: mov edx, dword ptr [ecx + eax*4 + 0x14] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x14u));
    /* 0042b390: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0042b393: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042b395: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0042b398: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042b399: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042b39c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0042b39e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042b3a1: mov eax, dword ptr [edx + 0xd4] */ r_eax = R32((u32)(r_edx+0xd4u));
    /* 0042b3a7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42b3a9u); call_ind(t); }
    /* 0042b3a9: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0042b3ac: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 0042b3ae: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 0042b3b0: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0042b3b6: call 0x434880 */ r_esp -= 4; W32(r_esp, 0x42b3bbu); f_00434880();
    /* 0042b3bb: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042b3be: mov eax, dword ptr [edx + eax*4 + 0x14] */ r_eax = R32((u32)(r_edx+r_eax*4+0x14u));
    /* 0042b3c2: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0042b3c5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042b3c7: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0042b3ca: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042b3cb: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0042b3ce: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0042b3d0: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0042b3d3: mov edx, dword ptr [eax + 0xd8] */ r_edx = R32((u32)(r_eax+0xd8u));
    /* 0042b3d9: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x42b3dbu); call_ind(t); }
    /* 0042b3db: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0042b3de: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0042b3e1: jmp 0x42b5f0 */ goto L_0042b5f0;
L_0042b3e6:; BB(0x0042b3e6);
    /* 0042b3e6: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0042b3e8: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0042b3ee: call 0x434880 */ r_esp -= 4; W32(r_esp, 0x42b3f3u); f_00434880();
    /* 0042b3f3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042b3f6: mov eax, dword ptr [edx + eax*4 + 0x14] */ r_eax = R32((u32)(r_edx+r_eax*4+0x14u));
    /* 0042b3fa: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0042b3fd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042b3ff: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0042b402: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042b403: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0042b406: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0042b408: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0042b40b: mov edx, dword ptr [eax + 0xd4] */ r_edx = R32((u32)(r_eax+0xd4u));
    /* 0042b411: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x42b413u); call_ind(t); }
    /* 0042b413: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0042b416: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 0042b418: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0042b41a: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0042b420: call 0x434880 */ r_esp -= 4; W32(r_esp, 0x42b425u); f_00434880();
    /* 0042b425: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042b428: mov eax, dword ptr [edx + eax*4 + 0x14] */ r_eax = R32((u32)(r_edx+r_eax*4+0x14u));
    /* 0042b42c: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0042b42f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042b431: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0042b434: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042b435: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0042b438: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0042b43a: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0042b43d: mov edx, dword ptr [eax + 0xd8] */ r_edx = R32((u32)(r_eax+0xd8u));
    /* 0042b443: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x42b445u); call_ind(t); }
    /* 0042b445: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0042b448: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0042b44b: jmp 0x42b5f0 */ goto L_0042b5f0;
L_0042b450:; BB(0x0042b450);
    /* 0042b450: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 0042b452: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0042b458: call 0x434880 */ r_esp -= 4; W32(r_esp, 0x42b45du); f_00434880();
    /* 0042b45d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042b460: mov eax, dword ptr [edx + eax*4 + 0x14] */ r_eax = R32((u32)(r_edx+r_eax*4+0x14u));
    /* 0042b464: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0042b467: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042b469: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0042b46c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042b46d: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0042b470: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0042b472: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0042b475: mov edx, dword ptr [eax + 0xd4] */ r_edx = R32((u32)(r_eax+0xd4u));
    /* 0042b47b: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x42b47du); call_ind(t); }
    /* 0042b47d: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0042b480: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 0042b482: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 0042b484: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0042b48a: call 0x434880 */ r_esp -= 4; W32(r_esp, 0x42b48fu); f_00434880();
    /* 0042b48f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042b492: mov eax, dword ptr [edx + eax*4 + 0x14] */ r_eax = R32((u32)(r_edx+r_eax*4+0x14u));
    /* 0042b496: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0042b499: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042b49b: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0042b49e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042b49f: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042b4a2: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0042b4a4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042b4a7: mov edx, dword ptr [eax + 0xd8] */ r_edx = R32((u32)(r_eax+0xd8u));
    /* 0042b4ad: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x42b4afu); call_ind(t); }
    /* 0042b4af: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0042b4b2: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0042b4b5: jmp 0x42b5f0 */ goto L_0042b5f0;
L_0042b4ba:; BB(0x0042b4ba);
    /* 0042b4ba: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 0042b4bc: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0042b4c2: call 0x434880 */ r_esp -= 4; W32(r_esp, 0x42b4c7u); f_00434880();
    /* 0042b4c7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042b4ca: mov eax, dword ptr [edx + eax*4 + 0x14] */ r_eax = R32((u32)(r_edx+r_eax*4+0x14u));
    /* 0042b4ce: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0042b4d1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042b4d3: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0042b4d6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042b4d7: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0042b4da: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0042b4dc: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0042b4df: mov edx, dword ptr [eax + 0xd4] */ r_edx = R32((u32)(r_eax+0xd4u));
    /* 0042b4e5: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x42b4e7u); call_ind(t); }
    /* 0042b4e7: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0042b4ea: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 0042b4ec: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 0042b4ee: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0042b4f4: call 0x434880 */ r_esp -= 4; W32(r_esp, 0x42b4f9u); f_00434880();
    /* 0042b4f9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042b4fc: mov eax, dword ptr [edx + eax*4 + 0x14] */ r_eax = R32((u32)(r_edx+r_eax*4+0x14u));
    /* 0042b500: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0042b503: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042b505: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0042b508: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042b509: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0042b50c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0042b50e: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0042b511: mov edx, dword ptr [eax + 0xd8] */ r_edx = R32((u32)(r_eax+0xd8u));
    /* 0042b517: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x42b519u); call_ind(t); }
    /* 0042b519: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0042b51c: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0042b51f: jmp 0x42b5f0 */ goto L_0042b5f0;
L_0042b524:; BB(0x0042b524);
    /* 0042b524: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 0042b526: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0042b52c: call 0x434880 */ r_esp -= 4; W32(r_esp, 0x42b531u); f_00434880();
    /* 0042b531: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042b534: mov eax, dword ptr [edx + eax*4 + 0x14] */ r_eax = R32((u32)(r_edx+r_eax*4+0x14u));
    /* 0042b538: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0042b53b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042b53d: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0042b540: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042b541: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0042b544: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0042b546: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0042b549: mov edx, dword ptr [eax + 0xd4] */ r_edx = R32((u32)(r_eax+0xd4u));
    /* 0042b54f: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x42b551u); call_ind(t); }
    /* 0042b551: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0042b554: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 0042b556: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 0042b558: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0042b55e: call 0x434880 */ r_esp -= 4; W32(r_esp, 0x42b563u); f_00434880();
    /* 0042b563: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042b566: mov eax, dword ptr [edx + eax*4 + 0x14] */ r_eax = R32((u32)(r_edx+r_eax*4+0x14u));
    /* 0042b56a: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0042b56d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042b56f: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0042b572: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042b573: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0042b576: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0042b578: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0042b57b: mov edx, dword ptr [eax + 0xd8] */ r_edx = R32((u32)(r_eax+0xd8u));
    /* 0042b581: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x42b583u); call_ind(t); }
    /* 0042b583: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0042b586: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0042b589: jmp 0x42b5f0 */ goto L_0042b5f0;
L_0042b58b:; BB(0x0042b58b);
    /* 0042b58b: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0042b58d: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0042b593: call 0x434880 */ r_esp -= 4; W32(r_esp, 0x42b598u); f_00434880();
    /* 0042b598: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042b59b: mov eax, dword ptr [edx + eax*4 + 0x14] */ r_eax = R32((u32)(r_edx+r_eax*4+0x14u));
    /* 0042b59f: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0042b5a2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042b5a4: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0042b5a7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042b5a8: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0042b5ab: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0042b5ad: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0042b5b0: mov edx, dword ptr [eax + 0xd4] */ r_edx = R32((u32)(r_eax+0xd4u));
    /* 0042b5b6: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x42b5b8u); call_ind(t); }
    /* 0042b5b8: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0042b5bb: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 0042b5bd: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0042b5bf: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0042b5c5: call 0x434880 */ r_esp -= 4; W32(r_esp, 0x42b5cau); f_00434880();
    /* 0042b5ca: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042b5cd: mov eax, dword ptr [edx + eax*4 + 0x14] */ r_eax = R32((u32)(r_edx+r_eax*4+0x14u));
    /* 0042b5d1: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0042b5d4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042b5d6: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0042b5d9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042b5da: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0042b5dd: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0042b5df: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0042b5e2: mov edx, dword ptr [eax + 0xd8] */ r_edx = R32((u32)(r_eax+0xd8u));
    /* 0042b5e8: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x42b5eau); call_ind(t); }
    /* 0042b5ea: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0042b5ed: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
L_0042b5f0:; BB(0x0042b5f0);
    /* 0042b5f0: mov esp, ebp */ r_esp = r_ebp;
    /* 0042b5f2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042b5f3: ret 0xc */ FN_RET(0x0042b350); r_esp += 16; return;
}

void f_0042b620(void) /* sub_42B620 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0042b620);
    /* 0042b620: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042b621: mov ebp, esp */ r_ebp = r_esp;
    /* 0042b623: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0042b626: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0042b629: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0042b62c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0042b62f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042b632: sub ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0042b635: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0042b638: cmp dword ptr [ebp - 8], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0042b63c: ja 0x42b8c0 */ if ((!fC&&!fZ)) goto L_0042b8c0;
L_0042b642:; BB(0x0042b642);
    /* 0042b642: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042b645: jmp dword ptr [edx*4 + 0x42b8c8] */ { u32 t = R32((u32)(r_edx*4+0x42b8c8u)); switch (t) { case 0x42b64cu: goto L_0042b64c; case 0x42b6b6u: goto L_0042b6b6; case 0x42b720u: goto L_0042b720; case 0x42b8c0u: goto L_0042b8c0; case 0x42b78au: goto L_0042b78a; case 0x42b7f4u: goto L_0042b7f4; case 0x42b85bu: goto L_0042b85b; default: UNSUP(0x0042b645, "jump table entry is not a known target"); } }
L_0042b64c:; BB(0x0042b64c);
    /* 0042b64c: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0042b64e: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0042b654: call 0x434880 */ r_esp -= 4; W32(r_esp, 0x42b659u); f_00434880();
    /* 0042b659: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042b65c: mov edx, dword ptr [ecx + eax*4 + 0x14] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x14u));
    /* 0042b660: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0042b663: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042b665: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0042b668: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042b669: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042b66c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0042b66e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042b671: mov eax, dword ptr [edx + 0xd4] */ r_eax = R32((u32)(r_edx+0xd4u));
    /* 0042b677: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42b679u); call_ind(t); }
    /* 0042b679: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0042b67c: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 0042b67e: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0042b680: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0042b686: call 0x434880 */ r_esp -= 4; W32(r_esp, 0x42b68bu); f_00434880();
    /* 0042b68b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042b68e: mov eax, dword ptr [edx + eax*4 + 0x14] */ r_eax = R32((u32)(r_edx+r_eax*4+0x14u));
    /* 0042b692: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0042b695: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042b697: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0042b69a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042b69b: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0042b69e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0042b6a0: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0042b6a3: mov edx, dword ptr [eax + 0xd8] */ r_edx = R32((u32)(r_eax+0xd8u));
    /* 0042b6a9: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x42b6abu); call_ind(t); }
    /* 0042b6ab: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0042b6ae: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0042b6b1: jmp 0x42b8c0 */ goto L_0042b8c0;
L_0042b6b6:; BB(0x0042b6b6);
    /* 0042b6b6: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0042b6b8: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0042b6be: call 0x434880 */ r_esp -= 4; W32(r_esp, 0x42b6c3u); f_00434880();
    /* 0042b6c3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042b6c6: mov eax, dword ptr [edx + eax*4 + 0x14] */ r_eax = R32((u32)(r_edx+r_eax*4+0x14u));
    /* 0042b6ca: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0042b6cd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042b6cf: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0042b6d2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042b6d3: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0042b6d6: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0042b6d8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0042b6db: mov edx, dword ptr [eax + 0xd4] */ r_edx = R32((u32)(r_eax+0xd4u));
    /* 0042b6e1: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x42b6e3u); call_ind(t); }
    /* 0042b6e3: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0042b6e6: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 0042b6e8: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0042b6ea: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0042b6f0: call 0x434880 */ r_esp -= 4; W32(r_esp, 0x42b6f5u); f_00434880();
    /* 0042b6f5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042b6f8: mov eax, dword ptr [edx + eax*4 + 0x14] */ r_eax = R32((u32)(r_edx+r_eax*4+0x14u));
    /* 0042b6fc: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0042b6ff: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042b701: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0042b704: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042b705: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0042b708: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0042b70a: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0042b70d: mov edx, dword ptr [eax + 0xd8] */ r_edx = R32((u32)(r_eax+0xd8u));
    /* 0042b713: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x42b715u); call_ind(t); }
    /* 0042b715: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0042b718: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0042b71b: jmp 0x42b8c0 */ goto L_0042b8c0;
L_0042b720:; BB(0x0042b720);
    /* 0042b720: push 0x21 */ { u32 v = 0x21u; r_esp -= 4; W32(r_esp, v); }
    /* 0042b722: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0042b728: call 0x434880 */ r_esp -= 4; W32(r_esp, 0x42b72du); f_00434880();
    /* 0042b72d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042b730: mov eax, dword ptr [edx + eax*4 + 0x14] */ r_eax = R32((u32)(r_edx+r_eax*4+0x14u));
    /* 0042b734: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0042b737: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042b739: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0042b73c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042b73d: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0042b740: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0042b742: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0042b745: mov edx, dword ptr [eax + 0xd4] */ r_edx = R32((u32)(r_eax+0xd4u));
    /* 0042b74b: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x42b74du); call_ind(t); }
    /* 0042b74d: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0042b750: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 0042b752: push 0x21 */ { u32 v = 0x21u; r_esp -= 4; W32(r_esp, v); }
    /* 0042b754: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0042b75a: call 0x434880 */ r_esp -= 4; W32(r_esp, 0x42b75fu); f_00434880();
    /* 0042b75f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042b762: mov eax, dword ptr [edx + eax*4 + 0x14] */ r_eax = R32((u32)(r_edx+r_eax*4+0x14u));
    /* 0042b766: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0042b769: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042b76b: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0042b76e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042b76f: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042b772: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0042b774: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042b777: mov edx, dword ptr [eax + 0xd8] */ r_edx = R32((u32)(r_eax+0xd8u));
    /* 0042b77d: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x42b77fu); call_ind(t); }
    /* 0042b77f: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0042b782: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0042b785: jmp 0x42b8c0 */ goto L_0042b8c0;
L_0042b78a:; BB(0x0042b78a);
    /* 0042b78a: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 0042b78c: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0042b792: call 0x434880 */ r_esp -= 4; W32(r_esp, 0x42b797u); f_00434880();
    /* 0042b797: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042b79a: mov eax, dword ptr [edx + eax*4 + 0x14] */ r_eax = R32((u32)(r_edx+r_eax*4+0x14u));
    /* 0042b79e: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0042b7a1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042b7a3: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0042b7a6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042b7a7: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0042b7aa: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0042b7ac: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0042b7af: mov edx, dword ptr [eax + 0xd4] */ r_edx = R32((u32)(r_eax+0xd4u));
    /* 0042b7b5: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x42b7b7u); call_ind(t); }
    /* 0042b7b7: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0042b7ba: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 0042b7bc: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 0042b7be: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0042b7c4: call 0x434880 */ r_esp -= 4; W32(r_esp, 0x42b7c9u); f_00434880();
    /* 0042b7c9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042b7cc: mov eax, dword ptr [edx + eax*4 + 0x14] */ r_eax = R32((u32)(r_edx+r_eax*4+0x14u));
    /* 0042b7d0: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0042b7d3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042b7d5: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0042b7d8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042b7d9: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0042b7dc: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0042b7de: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0042b7e1: mov edx, dword ptr [eax + 0xd8] */ r_edx = R32((u32)(r_eax+0xd8u));
    /* 0042b7e7: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x42b7e9u); call_ind(t); }
    /* 0042b7e9: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0042b7ec: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0042b7ef: jmp 0x42b8c0 */ goto L_0042b8c0;
L_0042b7f4:; BB(0x0042b7f4);
    /* 0042b7f4: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 0042b7f6: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0042b7fc: call 0x434880 */ r_esp -= 4; W32(r_esp, 0x42b801u); f_00434880();
    /* 0042b801: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042b804: mov eax, dword ptr [edx + eax*4 + 0x14] */ r_eax = R32((u32)(r_edx+r_eax*4+0x14u));
    /* 0042b808: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0042b80b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042b80d: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0042b810: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042b811: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0042b814: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0042b816: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0042b819: mov edx, dword ptr [eax + 0xd4] */ r_edx = R32((u32)(r_eax+0xd4u));
    /* 0042b81f: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x42b821u); call_ind(t); }
    /* 0042b821: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0042b824: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 0042b826: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 0042b828: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0042b82e: call 0x434880 */ r_esp -= 4; W32(r_esp, 0x42b833u); f_00434880();
    /* 0042b833: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042b836: mov eax, dword ptr [edx + eax*4 + 0x14] */ r_eax = R32((u32)(r_edx+r_eax*4+0x14u));
    /* 0042b83a: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0042b83d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042b83f: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0042b842: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042b843: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0042b846: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0042b848: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0042b84b: mov edx, dword ptr [eax + 0xd8] */ r_edx = R32((u32)(r_eax+0xd8u));
    /* 0042b851: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x42b853u); call_ind(t); }
    /* 0042b853: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0042b856: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0042b859: jmp 0x42b8c0 */ goto L_0042b8c0;
L_0042b85b:; BB(0x0042b85b);
    /* 0042b85b: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 0042b85d: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0042b863: call 0x434880 */ r_esp -= 4; W32(r_esp, 0x42b868u); f_00434880();
    /* 0042b868: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042b86b: mov eax, dword ptr [edx + eax*4 + 0x14] */ r_eax = R32((u32)(r_edx+r_eax*4+0x14u));
    /* 0042b86f: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0042b872: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042b874: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0042b877: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042b878: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0042b87b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0042b87d: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0042b880: mov edx, dword ptr [eax + 0xd4] */ r_edx = R32((u32)(r_eax+0xd4u));
    /* 0042b886: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x42b888u); call_ind(t); }
    /* 0042b888: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0042b88b: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 0042b88d: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 0042b88f: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0042b895: call 0x434880 */ r_esp -= 4; W32(r_esp, 0x42b89au); f_00434880();
    /* 0042b89a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042b89d: mov eax, dword ptr [edx + eax*4 + 0x14] */ r_eax = R32((u32)(r_edx+r_eax*4+0x14u));
    /* 0042b8a1: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0042b8a4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042b8a6: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0042b8a9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042b8aa: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0042b8ad: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0042b8af: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0042b8b2: mov edx, dword ptr [eax + 0xd8] */ r_edx = R32((u32)(r_eax+0xd8u));
    /* 0042b8b8: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x42b8bau); call_ind(t); }
    /* 0042b8ba: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0042b8bd: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
L_0042b8c0:; BB(0x0042b8c0);
    /* 0042b8c0: mov esp, ebp */ r_esp = r_ebp;
    /* 0042b8c2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042b8c3: ret 0xc */ FN_RET(0x0042b620); r_esp += 16; return;
}

void f_0042b8f0(void) /* sub_42B8F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0042b8f0);
    /* 0042b8f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042b8f1: mov ebp, esp */ r_ebp = r_esp;
    /* 0042b8f3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0042b8f6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0042b8f9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0042b8fc: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0042b8ff: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042b902: sub ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0042b905: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0042b908: cmp dword ptr [ebp - 8], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0042b90c: ja 0x42b972 */ if ((!fC&&!fZ)) goto L_0042b972;
L_0042b90e:; BB(0x0042b90e);
    /* 0042b90e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042b911: jmp dword ptr [edx*4 + 0x42b97c] */ { u32 t = R32((u32)(r_edx*4+0x42b97cu)); switch (t) { case 0x42b918u: goto L_0042b918; case 0x42b927u: goto L_0042b927; case 0x42b936u: goto L_0042b936; case 0x42b972u: goto L_0042b972; case 0x42b945u: goto L_0042b945; case 0x42b954u: goto L_0042b954; case 0x42b963u: goto L_0042b963; default: UNSUP(0x0042b911, "jump table entry is not a known target"); } }
L_0042b918:; BB(0x0042b918);
    /* 0042b918: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 0042b91a: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0042b920: call 0x434880 */ r_esp -= 4; W32(r_esp, 0x42b925u); f_00434880();
    /* 0042b925: jmp 0x42b975 */ goto L_0042b975;
L_0042b927:; BB(0x0042b927);
    /* 0042b927: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0042b929: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0042b92f: call 0x434880 */ r_esp -= 4; W32(r_esp, 0x42b934u); f_00434880();
    /* 0042b934: jmp 0x42b975 */ goto L_0042b975;
L_0042b936:; BB(0x0042b936);
    /* 0042b936: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 0042b938: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0042b93e: call 0x434880 */ r_esp -= 4; W32(r_esp, 0x42b943u); f_00434880();
    /* 0042b943: jmp 0x42b975 */ goto L_0042b975;
L_0042b945:; BB(0x0042b945);
    /* 0042b945: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 0042b947: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0042b94d: call 0x434880 */ r_esp -= 4; W32(r_esp, 0x42b952u); f_00434880();
    /* 0042b952: jmp 0x42b975 */ goto L_0042b975;
L_0042b954:; BB(0x0042b954);
    /* 0042b954: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 0042b956: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0042b95c: call 0x434880 */ r_esp -= 4; W32(r_esp, 0x42b961u); f_00434880();
    /* 0042b961: jmp 0x42b975 */ goto L_0042b975;
L_0042b963:; BB(0x0042b963);
    /* 0042b963: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0042b965: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0042b96b: call 0x434880 */ r_esp -= 4; W32(r_esp, 0x42b970u); f_00434880();
    /* 0042b970: jmp 0x42b975 */ goto L_0042b975;
L_0042b972:; BB(0x0042b972);
    /* 0042b972: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_0042b975:; BB(0x0042b975);
    /* 0042b975: mov esp, ebp */ r_esp = r_ebp;
    /* 0042b977: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042b978: ret 4 */ FN_RET(0x0042b8f0); r_esp += 8; return;
}

void f_0042b9a0(void) /* sub_42B9A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0042b9a0);
    /* 0042b9a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042b9a1: mov ebp, esp */ r_ebp = r_esp;
    /* 0042b9a3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0042b9a6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0042b9a9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0042b9ac: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0042b9af: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042b9b2: sub ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0042b9b5: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0042b9b8: cmp dword ptr [ebp - 8], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0042b9bc: ja 0x42ba22 */ if ((!fC&&!fZ)) goto L_0042ba22;
L_0042b9be:; BB(0x0042b9be);
    /* 0042b9be: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042b9c1: jmp dword ptr [edx*4 + 0x42ba2c] */ { u32 t = R32((u32)(r_edx*4+0x42ba2cu)); switch (t) { case 0x42b9c8u: goto L_0042b9c8; case 0x42b9d7u: goto L_0042b9d7; case 0x42b9e6u: goto L_0042b9e6; case 0x42ba22u: goto L_0042ba22; case 0x42b9f5u: goto L_0042b9f5; case 0x42ba04u: goto L_0042ba04; case 0x42ba13u: goto L_0042ba13; default: UNSUP(0x0042b9c1, "jump table entry is not a known target"); } }
L_0042b9c8:; BB(0x0042b9c8);
    /* 0042b9c8: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0042b9ca: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0042b9d0: call 0x434880 */ r_esp -= 4; W32(r_esp, 0x42b9d5u); f_00434880();
    /* 0042b9d5: jmp 0x42ba25 */ goto L_0042ba25;
L_0042b9d7:; BB(0x0042b9d7);
    /* 0042b9d7: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0042b9d9: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0042b9df: call 0x434880 */ r_esp -= 4; W32(r_esp, 0x42b9e4u); f_00434880();
    /* 0042b9e4: jmp 0x42ba25 */ goto L_0042ba25;
L_0042b9e6:; BB(0x0042b9e6);
    /* 0042b9e6: push 0x21 */ { u32 v = 0x21u; r_esp -= 4; W32(r_esp, v); }
    /* 0042b9e8: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0042b9ee: call 0x434880 */ r_esp -= 4; W32(r_esp, 0x42b9f3u); f_00434880();
    /* 0042b9f3: jmp 0x42ba25 */ goto L_0042ba25;
L_0042b9f5:; BB(0x0042b9f5);
    /* 0042b9f5: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 0042b9f7: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0042b9fd: call 0x434880 */ r_esp -= 4; W32(r_esp, 0x42ba02u); f_00434880();
    /* 0042ba02: jmp 0x42ba25 */ goto L_0042ba25;
L_0042ba04:; BB(0x0042ba04);
    /* 0042ba04: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 0042ba06: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0042ba0c: call 0x434880 */ r_esp -= 4; W32(r_esp, 0x42ba11u); f_00434880();
    /* 0042ba11: jmp 0x42ba25 */ goto L_0042ba25;
L_0042ba13:; BB(0x0042ba13);
    /* 0042ba13: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 0042ba15: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0042ba1b: call 0x434880 */ r_esp -= 4; W32(r_esp, 0x42ba20u); f_00434880();
    /* 0042ba20: jmp 0x42ba25 */ goto L_0042ba25;
L_0042ba22:; BB(0x0042ba22);
    /* 0042ba22: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_0042ba25:; BB(0x0042ba25);
    /* 0042ba25: mov esp, ebp */ r_esp = r_ebp;
    /* 0042ba27: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042ba28: ret 4 */ FN_RET(0x0042b9a0); r_esp += 8; return;
}

void f_0042ba50(void) /* sub_42BA50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0042ba50);
    /* 0042ba50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042ba51: mov ebp, esp */ r_ebp = r_esp;
    /* 0042ba53: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0042ba56: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 0042ba59: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0042ba5b: mov eax, dword ptr [0x162ee80] */ r_eax = R32((u32)(0x162ee80u));
    /* 0042ba60: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0042ba63: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 0042ba69: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0042ba6c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0042ba6e: mov ecx, eax */ r_ecx = r_eax;
    /* 0042ba70: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0042ba73: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42ba75u); call_ind(t); }
    /* 0042ba75: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0042ba7c: jmp 0x42ba87 */ goto L_0042ba87;
L_0042ba7e:; BB(0x0042ba7e);
    /* 0042ba7e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042ba81: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0042ba84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0042ba87:; BB(0x0042ba87);
    /* 0042ba87: cmp dword ptr [ebp - 4], 0x4c */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042ba8b: jge 0x42bc97 */ if ((fS==fO)) goto L_0042bc97;
L_0042ba91:; BB(0x0042ba91);
    /* 0042ba91: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042ba94: mov eax, dword ptr [0x7906d4] */ r_eax = R32((u32)(0x7906d4u));
    /* 0042ba99: mov ecx, dword ptr [eax + edx*4 + 4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 0042ba9d: cmp dword ptr [ecx + 0x110], -1 */ {  u32 a = R32((u32)(r_ecx+0x110u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042baa4: jne 0x42bb20 */ if (!fZ) goto L_0042bb20;
L_0042baa6:; BB(0x0042baa6);
    /* 0042baa6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042baa9: mov eax, dword ptr [0x7906d4] */ r_eax = R32((u32)(0x7906d4u));
    /* 0042baae: mov ecx, dword ptr [eax + edx*4 + 4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 0042bab2: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x42bab7u); f_005f5400();
    /* 0042bab7: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042baba: je 0x42bad3 */ if (fZ) goto L_0042bad3;
L_0042babc:; BB(0x0042babc);
    /* 0042babc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042babf: mov edx, dword ptr [0x7906d4] */ r_edx = R32((u32)(0x7906d4u));
    /* 0042bac5: mov ecx, dword ptr [edx + ecx*4 + 4] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 0042bac9: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x42baceu); f_005f5400();
    /* 0042bace: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042bad1: jne 0x42bb20 */ if (!fZ) goto L_0042bb20;
L_0042bad3:; BB(0x0042bad3);
    /* 0042bad3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042bad6: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0042badc: mov ecx, dword ptr [ecx + eax*4 + 4] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 0042bae0: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x42bae5u); f_005f5400();
    /* 0042bae5: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042bae8: jne 0x42bb25 */ if (!fZ) goto L_0042bb25;
L_0042baea:; BB(0x0042baea);
    /* 0042baea: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0042baec: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0042baef: mov eax, dword ptr [0x7906d4] */ r_eax = R32((u32)(0x7906d4u));
    /* 0042baf4: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 0042bafb: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0042bafe: mov edx, 1 */ r_edx = 0x1u;
    /* 0042bb03: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0042bb06: mov eax, dword ptr [0x7906d4] */ r_eax = R32((u32)(0x7906d4u));
    /* 0042bb0b: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 0042bb12: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0042bb15: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0042bb18: add edx, dword ptr [ebp - 0x1c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0042bb1b: cmp edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042bb1e: jne 0x42bb25 */ if (!fZ) goto L_0042bb25;
L_0042bb20:; BB(0x0042bb20);
    /* 0042bb20: jmp 0x42ba7e */ goto L_0042ba7e;
L_0042bb25:; BB(0x0042bb25);
    /* 0042bb25: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042bb28: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0042bb2e: mov ecx, dword ptr [ecx + eax*4 + 4] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 0042bb32: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x42bb37u); f_005f5400();
    /* 0042bb37: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042bb3a: jne 0x42bb7b */ if (!fZ) goto L_0042bb7b;
L_0042bb3c:; BB(0x0042bb3c);
    /* 0042bb3c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0042bb3e: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0042bb41: mov eax, dword ptr [0x7906d4] */ r_eax = R32((u32)(0x7906d4u));
    /* 0042bb46: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 0042bb4d: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0042bb50: mov edx, 1 */ r_edx = 0x1u;
    /* 0042bb55: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0042bb58: mov eax, dword ptr [0x7906d4] */ r_eax = R32((u32)(0x7906d4u));
    /* 0042bb5d: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 0042bb64: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0042bb67: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042bb6a: add edx, dword ptr [ebp - 0x24] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0042bb6d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0042bb6e: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0042bb71: call 0x42b8f0 */ r_esp -= 4; W32(r_esp, 0x42bb76u); f_0042b8f0();
    /* 0042bb76: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0042bb79: jmp 0x42bbba */ goto L_0042bbba;
L_0042bb7b:; BB(0x0042bb7b);
    /* 0042bb7b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042bb7d: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0042bb80: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0042bb86: mov edx, dword ptr [ecx + eax + 0xacc] */ r_edx = R32((u32)(r_ecx+r_eax+0xaccu));
    /* 0042bb8d: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 0042bb90: mov eax, 1 */ r_eax = 0x1u;
    /* 0042bb95: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0042bb98: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0042bb9e: mov edx, dword ptr [ecx + eax + 0xacc] */ r_edx = R32((u32)(r_ecx+r_eax+0xaccu));
    /* 0042bba5: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 0042bba8: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0042bbab: add eax, dword ptr [ebp - 0x2c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffd4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042bbae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042bbaf: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0042bbb2: call 0x42b9a0 */ r_esp -= 4; W32(r_esp, 0x42bbb7u); f_0042b9a0();
    /* 0042bbb7: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_0042bbba:; BB(0x0042bbba);
    /* 0042bbba: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0042bbc1: jmp 0x42bbcc */ goto L_0042bbcc;
L_0042bbc3:; BB(0x0042bbc3);
    /* 0042bbc3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042bbc6: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0042bbc9: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_0042bbcc:; BB(0x0042bbcc);
    /* 0042bbcc: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042bbd0: jge 0x42bc92 */ if ((fS==fO)) goto L_0042bc92;
L_0042bbd6:; BB(0x0042bbd6);
    /* 0042bbd6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042bbd9: mov eax, dword ptr [0x7906d4] */ r_eax = R32((u32)(0x7906d4u));
    /* 0042bbde: mov ecx, dword ptr [eax + edx*4 + 4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 0042bbe2: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x42bbe7u); f_005f5400();
    /* 0042bbe7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042bbe8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042bbeb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042bbec: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0042bbf2: call 0x4369a0 */ r_esp -= 4; W32(r_esp, 0x42bbf7u); f_004369a0();
    /* 0042bbf7: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0042bbfa: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042bbfc: je 0x42bc8d */ if (fZ) goto L_0042bc8d;
L_0042bc02:; BB(0x0042bc02);
    /* 0042bc02: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042bc05: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0042bc0b: mov edx, dword ptr [ecx + eax*4 + 4] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 0042bc0f: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 0042bc12: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042bc15: shl eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0042bc18: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0042bc1b: lea edx, [ecx + eax + 0x48] */ r_edx = (u32)(r_ecx+r_eax+0x48u);
    /* 0042bc1f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042bc21: shl eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0042bc24: mov ecx, dword ptr [edx + eax] */ r_ecx = R32((u32)(r_edx+r_eax));
    /* 0042bc27: mov edx, dword ptr [edx + eax + 4] */ r_edx = R32((u32)(r_edx+r_eax+0x4u));
    /* 0042bc2b: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0042bc2e: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0042bc31: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042bc33: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042bc36: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042bc37: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042bc3a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042bc3b: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0042bc3e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0042bc3f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0042bc42: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0042bc48: mov edx, dword ptr [ecx + eax*4 + 4] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 0042bc4c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0042bc4f: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0042bc55: mov ecx, dword ptr [ecx + eax*4 + 4] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 0042bc59: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0042bc5b: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 0042bc61: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42bc63u); call_ind(t); }
    /* 0042bc63: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042bc65: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042bc68: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042bc69: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042bc6c: mov eax, dword ptr [0x7906d4] */ r_eax = R32((u32)(0x7906d4u));
    /* 0042bc71: mov ecx, dword ptr [eax + edx*4 + 4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 0042bc75: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042bc78: mov eax, dword ptr [0x7906d4] */ r_eax = R32((u32)(0x7906d4u));
    /* 0042bc7d: mov edx, dword ptr [eax + edx*4 + 4] */ r_edx = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 0042bc81: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0042bc83: mov ecx, edx */ r_ecx = r_edx;
    /* 0042bc85: mov edx, dword ptr [eax + 0xbc] */ r_edx = R32((u32)(r_eax+0xbcu));
    /* 0042bc8b: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x42bc8du); call_ind(t); }
L_0042bc8d:; BB(0x0042bc8d);
    /* 0042bc8d: jmp 0x42bbc3 */ goto L_0042bbc3;
L_0042bc92:; BB(0x0042bc92);
    /* 0042bc92: jmp 0x42ba7e */ goto L_0042ba7e;
L_0042bc97:; BB(0x0042bc97);
    /* 0042bc97: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0042bc99: mov eax, dword ptr [0x162ee80] */ r_eax = R32((u32)(0x162ee80u));
    /* 0042bc9e: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0042bca1: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 0042bca7: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0042bcaa: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0042bcac: mov ecx, eax */ r_ecx = r_eax;
    /* 0042bcae: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0042bcb1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42bcb3u); call_ind(t); }
    /* 0042bcb3: mov esp, ebp */ r_esp = r_ebp;
    /* 0042bcb5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042bcb6: ret  */ FN_RET(0x0042ba50); r_esp += 4; return;
}

void f_0042bcc0(void) /* sub_42BCC0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0042bcc0);
    /* 0042bcc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042bcc1: mov ebp, esp */ r_ebp = r_esp;
    /* 0042bcc3: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0042bcc6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0042bcc9: mov byte ptr [ebp - 5], 0 */ W8((u32)(r_ebp+0xfffffffbu), 0x0u);
    /* 0042bccd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0042bccf: mov eax, dword ptr [0x162ee80] */ r_eax = R32((u32)(0x162ee80u));
    /* 0042bcd4: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0042bcd7: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 0042bcdd: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0042bce0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0042bce2: mov ecx, eax */ r_ecx = r_eax;
    /* 0042bce4: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0042bce7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42bce9u); call_ind(t); }
    /* 0042bce9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0042bcf0: jmp 0x42bcfb */ goto L_0042bcfb;
L_0042bcf2:; BB(0x0042bcf2);
    /* 0042bcf2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042bcf5: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0042bcf8: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0042bcfb:; BB(0x0042bcfb);
    /* 0042bcfb: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042bcff: jge 0x42bd6d */ if ((fS==fO)) goto L_0042bd6d;
L_0042bd01:; BB(0x0042bd01);
    /* 0042bd01: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042bd04: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0042bd05: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x42bd0au); f_005dcb00();
    /* 0042bd0a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042bd0d: cmp dword ptr [eax + 0x49c], 0 */ {  u32 a = R32((u32)(r_eax+0x49cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042bd14: je 0x42bd6b */ if (fZ) goto L_0042bd6b;
L_0042bd16:; BB(0x0042bd16);
    /* 0042bd16: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042bd19: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042bd1a: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x42bd1fu); f_005dcb00();
    /* 0042bd1f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042bd22: mov ecx, dword ptr [eax + 0x49c] */ r_ecx = R32((u32)(r_eax+0x49cu));
    /* 0042bd28: call 0x5f54a0 */ r_esp -= 4; W32(r_esp, 0x42bd2du); f_005f54a0();
    /* 0042bd2d: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0042bd30: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042bd32: je 0x42bd6b */ if (fZ) goto L_0042bd6b;
L_0042bd34:; BB(0x0042bd34);
    /* 0042bd34: movzx edx, byte ptr [ebp - 5] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffffbu));
    /* 0042bd38: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042bd3a: je 0x42bd45 */ if (fZ) goto L_0042bd45;
L_0042bd3c:; BB(0x0042bd3c);
    /* 0042bd3c: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0042bd43: jmp 0x42bd50 */ goto L_0042bd50;
L_0042bd45:; BB(0x0042bd45);
    /* 0042bd45: mov eax, dword ptr [0x162ee80] */ r_eax = R32((u32)(0x162ee80u));
    /* 0042bd4a: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0042bd4d: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_0042bd50:; BB(0x0042bd50);
    /* 0042bd50: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0042bd53: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0042bd54: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042bd57: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042bd58: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x42bd5du); f_005dcb00();
    /* 0042bd5d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042bd60: mov ecx, eax */ r_ecx = r_eax;
    /* 0042bd62: call 0x5d6980 */ r_esp -= 4; W32(r_esp, 0x42bd67u); f_005d6980();
    /* 0042bd67: mov byte ptr [ebp - 5], 1 */ W8((u32)(r_ebp+0xfffffffbu), 0x1u);
L_0042bd6b:; BB(0x0042bd6b);
    /* 0042bd6b: jmp 0x42bcf2 */ goto L_0042bcf2;
L_0042bd6d:; BB(0x0042bd6d);
    /* 0042bd6d: movzx ecx, byte ptr [ebp - 5] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffffbu));
    /* 0042bd71: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042bd73: jne 0x42bd90 */ if (!fZ) goto L_0042bd90;
L_0042bd75:; BB(0x0042bd75);
    /* 0042bd75: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042bd77: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 0042bd7d: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0042bd80: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0042bd86: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0042bd89: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0042bd8b: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0042bd8e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42bd90u); call_ind(t); }
L_0042bd90:; BB(0x0042bd90);
    /* 0042bd90: mov esp, ebp */ r_esp = r_ebp;
    /* 0042bd92: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042bd93: ret  */ FN_RET(0x0042bcc0); r_esp += 4; return;
}

void f_0042bda0(void) /* sub_42BDA0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0042bda0);
    /* 0042bda0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042bda1: mov ebp, esp */ r_ebp = r_esp;
    /* 0042bda3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0042bda6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0042bda9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0042bdb0: jmp 0x42bdbb */ goto L_0042bdbb;
L_0042bdb2:; BB(0x0042bdb2);
    /* 0042bdb2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042bdb5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042bdb8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0042bdbb:; BB(0x0042bdbb);
    /* 0042bdbb: cmp dword ptr [ebp - 4], 0x4c */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042bdbf: jge 0x42bdd2 */ if ((fS==fO)) goto L_0042bdd2;
L_0042bdc1:; BB(0x0042bdc1);
    /* 0042bdc1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042bdc4: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042bdc7: mov ecx, dword ptr [edx + ecx*4 + 0x14] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x14u));
    /* 0042bdcb: call 0x42d070 */ r_esp -= 4; W32(r_esp, 0x42bdd0u); f_0042d070();
    /* 0042bdd0: jmp 0x42bdb2 */ goto L_0042bdb2;
L_0042bdd2:; BB(0x0042bdd2);
    /* 0042bdd2: mov esp, ebp */ r_esp = r_ebp;
    /* 0042bdd4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042bdd5: ret  */ FN_RET(0x0042bda0); r_esp += 4; return;
}

void f_0042bde0(void) /* sub_42BDE0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0042bde0);
    /* 0042bde0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042bde1: mov ebp, esp */ r_ebp = r_esp;
    /* 0042bde3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042bde4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0042bde7: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0042bded: call 0x434280 */ r_esp -= 4; W32(r_esp, 0x42bdf2u); f_00434280();
    /* 0042bdf2: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0042bdf5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042bdf7: jne 0x42be1f */ if (!fZ) goto L_0042be1f;
L_0042bdf9:; BB(0x0042bdf9);
    /* 0042bdf9: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0042bdff: call 0x5df650 */ r_esp -= 4; W32(r_esp, 0x42be04u); f_005df650();
    /* 0042be04: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042be05: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0042be0b: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0042be0e: mov eax, dword ptr [0x162ee80] */ r_eax = R32((u32)(0x162ee80u));
    /* 0042be13: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0042be16: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0042be18: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0042be1b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42be1du); call_ind(t); }
    /* 0042be1d: jmp 0x42be34 */ goto L_0042be34;
L_0042be1f:; BB(0x0042be1f);
    /* 0042be1f: push 0xaa */ { u32 v = 0xaau; r_esp -= 4; W32(r_esp, v); }
    /* 0042be24: push 0xffffff4c */ { u32 v = 0xffffff4cu; r_esp -= 4; W32(r_esp, v); }
    /* 0042be29: mov ecx, dword ptr [0x7906d0] */ r_ecx = R32((u32)(0x7906d0u));
    /* 0042be2f: call 0x5db8c0 */ r_esp -= 4; W32(r_esp, 0x42be34u); f_005db8c0();
L_0042be34:; BB(0x0042be34);
    /* 0042be34: mov esp, ebp */ r_esp = r_ebp;
    /* 0042be36: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042be37: ret  */ FN_RET(0x0042bde0); r_esp += 4; return;
}

void f_0042be80(void) /* sub_42BE80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0042be80);
    /* 0042be80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042be81: mov ebp, esp */ r_ebp = r_esp;
    /* 0042be83: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0042be86: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0042be89: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042be8c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042be8f: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 0042be92: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042be95: cmp dword ptr [edx + 4], 4 */ {  u32 a = R32((u32)(r_edx+0x4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042be99: je 0x42befd */ if (fZ) goto L_0042befd;
L_0042be9b:; BB(0x0042be9b);
    /* 0042be9b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042be9e: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0042bea1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042bea2: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0042bea8: call 0x639110 */ r_esp -= 4; W32(r_esp, 0x42beadu); f_00639110();
    /* 0042bead: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0042beb0: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0042beb2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042beb5: call 0x646380 */ r_esp -= 4; W32(r_esp, 0x42bebau); f_00646380();
    /* 0042beba: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042bebd: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0042bec0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042bec1: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0042bec7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0042bec9: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0042becf: mov eax, dword ptr [edx + 0x1c8] */ r_eax = R32((u32)(r_edx+0x1c8u));
    /* 0042bed5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42bed7u); call_ind(t); }
    /* 0042bed7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042bed8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042bedb: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0042bede: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0042bedf: mov eax, dword ptr [0x162ee80] */ r_eax = R32((u32)(0x162ee80u));
    /* 0042bee4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0042bee6: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0042beec: mov eax, dword ptr [edx + 0x1c4] */ r_eax = R32((u32)(r_edx+0x1c4u));
    /* 0042bef2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42bef4u); call_ind(t); }
    /* 0042bef4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042bef5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042bef8: call 0x646150 */ r_esp -= 4; W32(r_esp, 0x42befdu); f_00646150();
L_0042befd:; BB(0x0042befd);
    /* 0042befd: mov esp, ebp */ r_esp = r_ebp;
    /* 0042beff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042bf00: ret 4 */ FN_RET(0x0042be80); r_esp += 8; return;
}

void f_0042bf10(void) /* sub_42BF10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0042bf10);
    /* 0042bf10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042bf11: mov ebp, esp */ r_ebp = r_esp;
    /* 0042bf13: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042bf14: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0042bf17: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042bf19: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042bf1b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042bf1e: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0042bf21: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042bf22: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0042bf28: call 0x639110 */ r_esp -= 4; W32(r_esp, 0x42bf2du); f_00639110();
    /* 0042bf2d: mov ecx, eax */ r_ecx = r_eax;
    /* 0042bf2f: call 0x6464d0 */ r_esp -= 4; W32(r_esp, 0x42bf34u); f_006464d0();
    /* 0042bf34: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042bf36: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042bf39: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0042bf3c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042bf3d: mov ecx, dword ptr [0x7906d0] */ r_ecx = R32((u32)(0x7906d0u));
    /* 0042bf43: call 0x5d9180 */ r_esp -= 4; W32(r_esp, 0x42bf48u); f_005d9180();
    /* 0042bf48: mov esp, ebp */ r_esp = r_ebp;
    /* 0042bf4a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042bf4b: ret  */ FN_RET(0x0042bf10); r_esp += 4; return;
}

