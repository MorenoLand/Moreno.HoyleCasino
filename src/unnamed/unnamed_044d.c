#include "protos.h"

void f_0044d010(void) /* sub_44D010 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044d010);
    /* 0044d010: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044d011: mov ebp, esp */ r_ebp = r_esp;
    /* 0044d013: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044d016: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0044d019: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0044d01c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044d01d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0044d020: call 0x44cfc0 */ r_esp -= 4; W32(r_esp, 0x44d025u); f_0044cfc0();
    /* 0044d025: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0044d028: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044d02a: jne 0x44d031 */ if (!fZ) goto L_0044d031;
L_0044d02c:; BB(0x0044d02c);
    /* 0044d02c: jmp 0x44d10f */ goto L_0044d10f;
L_0044d031:; BB(0x0044d031);
    /* 0044d031: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0044d034: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044d035: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x44d03au); f_005dcb00();
    /* 0044d03a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044d03d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044d03f: jne 0x44d046 */ if (!fZ) goto L_0044d046;
L_0044d041:; BB(0x0044d041);
    /* 0044d041: jmp 0x44d10f */ goto L_0044d10f;
L_0044d046:; BB(0x0044d046);
    /* 0044d046: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0044d049: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044d04a: mov ecx, dword ptr [0x79070c] */ r_ecx = R32((u32)(0x79070cu));
    /* 0044d050: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0044d052: mov ecx, dword ptr [0x79070c] */ r_ecx = R32((u32)(0x79070cu));
    /* 0044d058: mov eax, dword ptr [edx + 0x290] */ r_eax = R32((u32)(r_edx+0x290u));
    /* 0044d05e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x44d060u); call_ind(t); }
    /* 0044d060: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0044d067: jmp 0x44d072 */ goto L_0044d072;
L_0044d069:; BB(0x0044d069);
    /* 0044d069: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044d06c: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0044d06f: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0044d072:; BB(0x0044d072);
    /* 0044d072: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044d076: jge 0x44d0ce */ if ((fS==fO)) goto L_0044d0ce;
L_0044d078:; BB(0x0044d078);
    /* 0044d078: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0044d07b: imul edx, edx, 3 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x3u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0044d07e: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0044d081: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0044d084: mov ecx, dword ptr [eax + edx*8 + 0x38] */ r_ecx = R32((u32)(r_eax+r_edx*8+0x38u));
    /* 0044d088: mov edx, dword ptr [eax + edx*8 + 0x3c] */ r_edx = R32((u32)(r_eax+r_edx*8+0x3cu));
    /* 0044d08c: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0044d08f: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0044d092: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044d096: jle 0x44d0cc */ if ((fZ||fS!=fO)) goto L_0044d0cc;
L_0044d098:; BB(0x0044d098);
    /* 0044d098: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0044d09a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044d09c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0044d09f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044d0a0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0044d0a3: imul ecx, ecx, 3 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x3u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0044d0a6: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0044d0a9: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0044d0ac: mov eax, dword ptr [edx + ecx*4 + 8] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 0044d0b0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0044d0b3: imul ecx, ecx, 3 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x3u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0044d0b6: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0044d0b9: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0044d0bc: mov ecx, dword ptr [edx + ecx*4 + 8] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 0044d0c0: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0044d0c2: mov edx, dword ptr [eax + 0xc4] */ r_edx = R32((u32)(r_eax+0xc4u));
    /* 0044d0c8: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x44d0cau); call_ind(t); }
    /* 0044d0ca: jmp 0x44d10f */ goto L_0044d10f;
L_0044d0cc:; BB(0x0044d0cc);
    /* 0044d0cc: jmp 0x44d069 */ goto L_0044d069;
L_0044d0ce:; BB(0x0044d0ce);
    /* 0044d0ce: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0044d0d1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044d0d2: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x44d0d7u); f_005dcb00();
    /* 0044d0d7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044d0da: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0044d0dd: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0044d0e0: mov byte ptr [ecx + 0x4a0], 1 */ W8((u32)(r_ecx+0x4a0u), 0x1u);
    /* 0044d0e7: mov ecx, dword ptr [0x790718] */ r_ecx = R32((u32)(0x790718u));
    /* 0044d0ed: call 0x4474b0 */ r_esp -= 4; W32(r_esp, 0x44d0f2u); f_004474b0();
    /* 0044d0f2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044d0f4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0044d0f6: mov edx, dword ptr [0x79070c] */ r_edx = R32((u32)(0x79070cu));
    /* 0044d0fc: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0044d0ff: mov ecx, dword ptr [0x79070c] */ r_ecx = R32((u32)(0x79070cu));
    /* 0044d105: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0044d108: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0044d10a: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0044d10d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x44d10fu); call_ind(t); }
L_0044d10f:; BB(0x0044d10f);
    /* 0044d10f: mov esp, ebp */ r_esp = r_ebp;
    /* 0044d111: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044d112: ret 4 */ FN_RET(0x0044d010); r_esp += 8; return;
}

void f_0044d120(void) /* sub_44D120 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044d120);
    /* 0044d120: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044d121: mov ebp, esp */ r_ebp = r_esp;
    /* 0044d123: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044d126: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0044d127: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0044d12a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0044d131: jmp 0x44d13c */ goto L_0044d13c;
L_0044d133:; BB(0x0044d133);
    /* 0044d133: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044d136: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044d139: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0044d13c:; BB(0x0044d13c);
    /* 0044d13c: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044d140: jge 0x44d1fc */ if ((fS==fO)) goto L_0044d1fc;
L_0044d146:; BB(0x0044d146);
    /* 0044d146: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0044d14d: jmp 0x44d158 */ goto L_0044d158;
L_0044d14f:; BB(0x0044d14f);
    /* 0044d14f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044d152: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0044d155: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_0044d158:; BB(0x0044d158);
    /* 0044d158: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044d15c: jge 0x44d1f7 */ if ((fS==fO)) goto L_0044d1f7;
L_0044d162:; BB(0x0044d162);
    /* 0044d162: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044d165: imul edx, edx, 3 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x3u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0044d168: add edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0044d16b: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0044d16e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044d170: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044d173: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044d174: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044d177: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0044d17a: mov ecx, dword ptr [edx + ecx*4 + 8] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 0044d17e: call 0x5cb7d0 */ r_esp -= 4; W32(r_esp, 0x44d183u); f_005cb7d0();
    /* 0044d183: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0044d186: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044d188: je 0x44d1cc */ if (fZ) goto L_0044d1cc;
L_0044d18a:; BB(0x0044d18a);
    /* 0044d18a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044d18d: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0044d190: mov eax, dword ptr [edx + ecx*4 + 8] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 0044d194: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0044d197: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044d19a: shl ecx, 5 */ { u32 c = (5u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0044d19d: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0044d1a0: lea eax, [edx + ecx + 0x48] */ r_eax = (u32)(r_edx+r_ecx+0x48u);
    /* 0044d1a4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0044d1a6: shl ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0044d1a9: mov edx, dword ptr [eax + ecx] */ r_edx = R32((u32)(r_eax+r_ecx));
    /* 0044d1ac: mov eax, dword ptr [eax + ecx + 4] */ r_eax = R32((u32)(r_eax+r_ecx+0x4u));
    /* 0044d1b0: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0044d1b3: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0044d1b6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0044d1b9: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0044d1bc: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044d1bf: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0044d1c2: mov dword ptr [esi + eax*8 + 0x38], ecx */ W32((u32)(r_esi+r_eax*8+0x38u), r_ecx);
    /* 0044d1c6: mov dword ptr [esi + eax*8 + 0x3c], edx */ W32((u32)(r_esi+r_eax*8+0x3cu), r_edx);
    /* 0044d1ca: jmp 0x44d1f2 */ goto L_0044d1f2;
L_0044d1cc:; BB(0x0044d1cc);
    /* 0044d1cc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044d1ce: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044d1d0: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x44d1d5u); f_0064c8a0();
    /* 0044d1d5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044d1d8: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0044d1db: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0044d1de: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044d1e1: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0044d1e4: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0044d1e7: mov dword ptr [edx + ecx*8 + 0x38], eax */ W32((u32)(r_edx+r_ecx*8+0x38u), r_eax);
    /* 0044d1eb: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0044d1ee: mov dword ptr [edx + ecx*8 + 0x3c], eax */ W32((u32)(r_edx+r_ecx*8+0x3cu), r_eax);
L_0044d1f2:; BB(0x0044d1f2);
    /* 0044d1f2: jmp 0x44d14f */ goto L_0044d14f;
L_0044d1f7:; BB(0x0044d1f7);
    /* 0044d1f7: jmp 0x44d133 */ goto L_0044d133;
L_0044d1fc:; BB(0x0044d1fc);
    /* 0044d1fc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0044d1fd: mov esp, ebp */ r_esp = r_ebp;
    /* 0044d1ff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044d200: ret  */ FN_RET(0x0044d120); r_esp += 4; return;
}

void f_0044d210(void) /* sub_44D210 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044d210);
    /* 0044d210: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044d211: mov ebp, esp */ r_ebp = r_esp;
    /* 0044d213: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044d216: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0044d219: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0044d220: jmp 0x44d22b */ goto L_0044d22b;
L_0044d222:; BB(0x0044d222);
    /* 0044d222: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044d225: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044d228: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0044d22b:; BB(0x0044d22b);
    /* 0044d22b: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044d22f: jge 0x44d2ac */ if ((fS==fO)) goto L_0044d2ac;
L_0044d231:; BB(0x0044d231);
    /* 0044d231: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044d234: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044d235: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x44d23au); f_005dcb00();
    /* 0044d23a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044d23d: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0044d240: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044d243: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x44d248u); f_0063aac0();
    /* 0044d248: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0044d24a: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0044d24d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0044d24f: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044d253: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0044d256: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0044d259: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044d25b: jne 0x44d2a7 */ if (!fZ) goto L_0044d2a7;
L_0044d25d:; BB(0x0044d25d);
    /* 0044d25d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044d260: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044d261: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x44d266u); f_005dcb00();
    /* 0044d266: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044d269: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0044d26c: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0044d26f: mov cl, byte ptr [eax + 0x4a1] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x4a1u))) & 0xffu);
    /* 0044d275: mov byte ptr [ebp - 0x11], cl */ W8((u32)(r_ebp+0xffffffefu), (u8)r_ecx);
    /* 0044d278: movzx edx, byte ptr [ebp - 0x11] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffefu));
    /* 0044d27c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044d27e: jne 0x44d2a7 */ if (!fZ) goto L_0044d2a7;
L_0044d280:; BB(0x0044d280);
    /* 0044d280: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044d283: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044d284: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x44d289u); f_005dcb00();
    /* 0044d289: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044d28c: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0044d28f: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0044d292: mov dl, byte ptr [ecx + 0x4a0] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x4a0u))) & 0xffu);
    /* 0044d298: mov byte ptr [ebp - 0x19], dl */ W8((u32)(r_ebp+0xffffffe7u), (u8)r_edx);
    /* 0044d29b: movzx eax, byte ptr [ebp - 0x19] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffe7u));
    /* 0044d29f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044d2a1: je 0x44d2a7 */ if (fZ) goto L_0044d2a7;
L_0044d2a3:; BB(0x0044d2a3);
    /* 0044d2a3: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0044d2a5: jmp 0x44d2ae */ goto L_0044d2ae;
L_0044d2a7:; BB(0x0044d2a7);
    /* 0044d2a7: jmp 0x44d222 */ goto L_0044d222;
L_0044d2ac:; BB(0x0044d2ac);
    /* 0044d2ac: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0044d2ae:; BB(0x0044d2ae);
    /* 0044d2ae: mov esp, ebp */ r_esp = r_ebp;
    /* 0044d2b0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044d2b1: ret  */ FN_RET(0x0044d210); r_esp += 4; return;
}

void f_0044d2c0(void) /* sub_44D2C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044d2c0);
    /* 0044d2c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044d2c1: mov ebp, esp */ r_ebp = r_esp;
    /* 0044d2c3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044d2c6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0044d2c9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0044d2d0: jmp 0x44d2db */ goto L_0044d2db;
L_0044d2d2:; BB(0x0044d2d2);
    /* 0044d2d2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044d2d5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044d2d8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0044d2db:; BB(0x0044d2db);
    /* 0044d2db: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044d2df: jge 0x44d2f7 */ if ((fS==fO)) goto L_0044d2f7;
L_0044d2e1:; BB(0x0044d2e1);
    /* 0044d2e1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044d2e4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044d2e5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044d2e8: call 0x44ce00 */ r_esp -= 4; W32(r_esp, 0x44d2edu); f_0044ce00();
    /* 0044d2ed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044d2ef: je 0x44d2f5 */ if (fZ) goto L_0044d2f5;
L_0044d2f1:; BB(0x0044d2f1);
    /* 0044d2f1: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0044d2f3: jmp 0x44d2f9 */ goto L_0044d2f9;
L_0044d2f5:; BB(0x0044d2f5);
    /* 0044d2f5: jmp 0x44d2d2 */ goto L_0044d2d2;
L_0044d2f7:; BB(0x0044d2f7);
    /* 0044d2f7: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_0044d2f9:; BB(0x0044d2f9);
    /* 0044d2f9: mov esp, ebp */ r_esp = r_ebp;
    /* 0044d2fb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044d2fc: ret  */ FN_RET(0x0044d2c0); r_esp += 4; return;
}

void f_0044d300(void) /* sub_44D300 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044d300);
    /* 0044d300: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044d301: mov ebp, esp */ r_ebp = r_esp;
    /* 0044d303: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044d306: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0044d309: mov dword ptr [ebp - 8], 5 */ W32((u32)(r_ebp+0xfffffff8u), 0x5u);
    /* 0044d310: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0044d317: jmp 0x44d322 */ goto L_0044d322;
L_0044d319:; BB(0x0044d319);
    /* 0044d319: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044d31c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044d31f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0044d322:; BB(0x0044d322);
    /* 0044d322: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044d326: jge 0x44d36d */ if ((fS==fO)) goto L_0044d36d;
L_0044d328:; BB(0x0044d328);
    /* 0044d328: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044d32b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044d32c: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x44d331u); f_005dcb00();
    /* 0044d331: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044d334: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0044d337: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044d33a: mov al, byte ptr [edx + 0x4a0] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x4a0u))) & 0xffu);
    /* 0044d340: mov byte ptr [ebp - 0xd], al */ W8((u32)(r_ebp+0xfffffff3u), (u8)r_eax);
    /* 0044d343: movzx ecx, byte ptr [ebp - 0xd] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffff3u));
    /* 0044d347: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044d349: je 0x44d36b */ if (fZ) goto L_0044d36b;
L_0044d34b:; BB(0x0044d34b);
    /* 0044d34b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044d34e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044d34f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0044d352: call 0x44ce00 */ r_esp -= 4; W32(r_esp, 0x44d357u); f_0044ce00();
    /* 0044d357: cmp eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044d35a: jge 0x44d36b */ if ((fS==fO)) goto L_0044d36b;
L_0044d35c:; BB(0x0044d35c);
    /* 0044d35c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044d35f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044d360: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0044d363: call 0x44ce00 */ r_esp -= 4; W32(r_esp, 0x44d368u); f_0044ce00();
    /* 0044d368: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0044d36b:; BB(0x0044d36b);
    /* 0044d36b: jmp 0x44d319 */ goto L_0044d319;
L_0044d36d:; BB(0x0044d36d);
    /* 0044d36d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044d370: mov esp, ebp */ r_esp = r_ebp;
    /* 0044d372: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044d373: ret  */ FN_RET(0x0044d300); r_esp += 4; return;
}

void f_0044d380(void) /* sub_44D380 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044d380);
    /* 0044d380: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044d381: mov ebp, esp */ r_ebp = r_esp;
    /* 0044d383: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044d386: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0044d387: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0044d38a: mov dword ptr [ebp - 0x14], 2 */ W32((u32)(r_ebp+0xffffffecu), 0x2u);
    /* 0044d391: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0044d398: mov dword ptr [ebp - 0xc], 1 */ W32((u32)(r_ebp+0xfffffff4u), 0x1u);
    /* 0044d39f: mov dword ptr [ebp - 8], 3 */ W32((u32)(r_ebp+0xfffffff8u), 0x3u);
    /* 0044d3a6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0044d3ad: jmp 0x44d3b8 */ goto L_0044d3b8;
L_0044d3af:; BB(0x0044d3af);
    /* 0044d3af: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044d3b2: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044d3b5: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0044d3b8:; BB(0x0044d3b8);
    /* 0044d3b8: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044d3bc: jge 0x44d423 */ if ((fS==fO)) goto L_0044d423;
L_0044d3be:; BB(0x0044d3be);
    /* 0044d3be: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044d3c1: mov edx, dword ptr [ebp + ecx*4 - 0x14] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffecu));
    /* 0044d3c5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044d3c6: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x44d3cbu); f_005dcb00();
    /* 0044d3cb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044d3ce: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0044d3d1: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0044d3d4: mov cl, byte ptr [eax + 0x4a0] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x4a0u))) & 0xffu);
    /* 0044d3da: mov byte ptr [ebp - 0x19], cl */ W8((u32)(r_ebp+0xffffffe7u), (u8)r_ecx);
    /* 0044d3dd: movzx edx, byte ptr [ebp - 0x19] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffe7u));
    /* 0044d3e1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044d3e3: je 0x44d421 */ if (fZ) goto L_0044d421;
L_0044d3e5:; BB(0x0044d3e5);
    /* 0044d3e5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044d3e8: mov ecx, dword ptr [ebp + eax*4 - 0x14] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffffecu));
    /* 0044d3ec: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044d3ed: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0044d3f0: call 0x44ce00 */ r_esp -= 4; W32(r_esp, 0x44d3f5u); f_0044ce00();
    /* 0044d3f5: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044d3f8: jge 0x44d421 */ if ((fS==fO)) goto L_0044d421;
L_0044d3fa:; BB(0x0044d3fa);
    /* 0044d3fa: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044d3fd: mov eax, dword ptr [ebp + edx*4 - 0x14] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xffffffecu));
    /* 0044d401: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044d402: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0044d405: call 0x44ce00 */ r_esp -= 4; W32(r_esp, 0x44d40au); f_0044ce00();
    /* 0044d40a: mov esi, eax */ r_esi = r_eax;
    /* 0044d40c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0044d40f: call 0x44d300 */ r_esp -= 4; W32(r_esp, 0x44d414u); f_0044d300();
    /* 0044d414: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044d416: jne 0x44d421 */ if (!fZ) goto L_0044d421;
L_0044d418:; BB(0x0044d418);
    /* 0044d418: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044d41b: mov eax, dword ptr [ebp + ecx*4 - 0x14] */ r_eax = R32((u32)(r_ebp+r_ecx*4+0xffffffecu));
    /* 0044d41f: jmp 0x44d426 */ goto L_0044d426;
L_0044d421:; BB(0x0044d421);
    /* 0044d421: jmp 0x44d3af */ goto L_0044d3af;
L_0044d423:; BB(0x0044d423);
    /* 0044d423: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_0044d426:; BB(0x0044d426);
    /* 0044d426: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0044d427: mov esp, ebp */ r_esp = r_ebp;
    /* 0044d429: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044d42a: ret  */ FN_RET(0x0044d380); r_esp += 4; return;
}

void f_0044d430(void) /* sub_44D430 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044d430);
    /* 0044d430: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044d431: mov ebp, esp */ r_ebp = r_esp;
    /* 0044d433: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044d436: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0044d439: mov dword ptr [ebp - 0x14], 2 */ W32((u32)(r_ebp+0xffffffecu), 0x2u);
    /* 0044d440: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0044d447: mov dword ptr [ebp - 0xc], 1 */ W32((u32)(r_ebp+0xfffffff4u), 0x1u);
    /* 0044d44e: mov dword ptr [ebp - 8], 3 */ W32((u32)(r_ebp+0xfffffff8u), 0x3u);
    /* 0044d455: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0044d458: cmp dword ptr [eax + 0xd4], 2 */ {  u32 a = R32((u32)(r_eax+0xd4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044d45f: jne 0x44d469 */ if (!fZ) goto L_0044d469;
L_0044d461:; BB(0x0044d461);
    /* 0044d461: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0044d464: jmp 0x44d509 */ goto L_0044d509;
L_0044d469:; BB(0x0044d469);
    /* 0044d469: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0044d470: jmp 0x44d47b */ goto L_0044d47b;
L_0044d472:; BB(0x0044d472);
    /* 0044d472: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044d475: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0044d478: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0044d47b:; BB(0x0044d47b);
    /* 0044d47b: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044d47f: jge 0x44d506 */ if ((fS==fO)) goto L_0044d506;
L_0044d485:; BB(0x0044d485);
    /* 0044d485: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044d488: mov eax, dword ptr [ebp + edx*4 - 0x14] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xffffffecu));
    /* 0044d48c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044d48d: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x44d492u); f_005dcb00();
    /* 0044d492: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044d495: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0044d498: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0044d49b: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x44d4a0u); f_0063aac0();
    /* 0044d4a0: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0044d4a2: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0044d4a5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0044d4a7: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044d4ab: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0044d4ae: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 0044d4b1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044d4b3: jne 0x44d501 */ if (!fZ) goto L_0044d501;
L_0044d4b5:; BB(0x0044d4b5);
    /* 0044d4b5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044d4b8: mov edx, dword ptr [ebp + ecx*4 - 0x14] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffecu));
    /* 0044d4bc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044d4bd: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x44d4c2u); f_005dcb00();
    /* 0044d4c2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044d4c5: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0044d4c8: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0044d4cb: mov cl, byte ptr [eax + 0x4a1] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x4a1u))) & 0xffu);
    /* 0044d4d1: mov byte ptr [ebp - 0x21], cl */ W8((u32)(r_ebp+0xffffffdfu), (u8)r_ecx);
    /* 0044d4d4: movzx edx, byte ptr [ebp - 0x21] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffdfu));
    /* 0044d4d8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044d4da: jne 0x44d501 */ if (!fZ) goto L_0044d501;
L_0044d4dc:; BB(0x0044d4dc);
    /* 0044d4dc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044d4df: mov ecx, dword ptr [ebp + eax*4 - 0x14] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffffecu));
    /* 0044d4e3: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0044d4e6: mov al, byte ptr [edx + ecx + 0xcd] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+r_ecx+0xcdu))) & 0xffu);
    /* 0044d4ed: mov byte ptr [ebp - 0x22], al */ W8((u32)(r_ebp+0xffffffdeu), (u8)r_eax);
    /* 0044d4f0: movzx ecx, byte ptr [ebp - 0x22] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffdeu));
    /* 0044d4f4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044d4f6: jne 0x44d501 */ if (!fZ) goto L_0044d501;
L_0044d4f8:; BB(0x0044d4f8);
    /* 0044d4f8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044d4fb: mov eax, dword ptr [ebp + edx*4 - 0x14] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xffffffecu));
    /* 0044d4ff: jmp 0x44d509 */ goto L_0044d509;
L_0044d501:; BB(0x0044d501);
    /* 0044d501: jmp 0x44d472 */ goto L_0044d472;
L_0044d506:; BB(0x0044d506);
    /* 0044d506: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_0044d509:; BB(0x0044d509);
    /* 0044d509: mov esp, ebp */ r_esp = r_ebp;
    /* 0044d50b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044d50c: ret  */ FN_RET(0x0044d430); r_esp += 4; return;
}

void f_0044d510(void) /* sub_44D510 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044d510);
    /* 0044d510: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044d511: mov ebp, esp */ r_ebp = r_esp;
    /* 0044d513: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044d516: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0044d519: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0044d51c: imul eax, eax, 3 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0044d51f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0044d522: movzx ecx, byte ptr [ebp + 0xc] */ r_ecx = (u32)R8((u32)(r_ebp+0xcu));
    /* 0044d526: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044d528: jne 0x44d592 */ if (!fZ) goto L_0044d592;
L_0044d52a:; BB(0x0044d52a);
    /* 0044d52a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0044d52d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044d530: add eax, dword ptr [edx + 0xd4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0xd4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044d536: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0044d539: mov edx, dword ptr [ecx + eax*4 + 8] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x8u));
    /* 0044d53d: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0044d540: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0044d543: shl eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0044d546: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0044d549: lea edx, [ecx + eax + 0x48] */ r_edx = (u32)(r_ecx+r_eax+0x48u);
    /* 0044d54d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0044d54f: shl eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0044d552: mov ecx, dword ptr [edx + eax] */ r_ecx = R32((u32)(r_edx+r_eax));
    /* 0044d555: mov edx, dword ptr [edx + eax + 4] */ r_edx = R32((u32)(r_edx+r_eax+0x4u));
    /* 0044d559: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0044d55c: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0044d55f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044d562: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044d563: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044d566: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044d567: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0044d56a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044d56b: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x44d570u); f_005dcb00();
    /* 0044d570: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044d573: mov ecx, eax */ r_ecx = r_eax;
    /* 0044d575: call 0x5d5cf0 */ r_esp -= 4; W32(r_esp, 0x44d57au); f_005d5cf0();
    /* 0044d57a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0044d57d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044d580: add ecx, dword ptr [eax + 0xd4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0xd4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0044d586: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0044d589: mov ecx, dword ptr [edx + ecx*4 + 8] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 0044d58d: call 0x5cb9b0 */ r_esp -= 4; W32(r_esp, 0x44d592u); f_005cb9b0();
L_0044d592:; BB(0x0044d592);
    /* 0044d592: mov esp, ebp */ r_esp = r_ebp;
    /* 0044d594: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044d595: ret 8 */ FN_RET(0x0044d510); r_esp += 12; return;
}

void f_0044d5a0(void) /* sub_44D5A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044d5a0);
    /* 0044d5a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044d5a1: mov ebp, esp */ r_ebp = r_esp;
    /* 0044d5a3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044d5a6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0044d5a9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0044d5b0: jmp 0x44d5bb */ goto L_0044d5bb;
L_0044d5b2:; BB(0x0044d5b2);
    /* 0044d5b2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044d5b5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044d5b8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0044d5bb:; BB(0x0044d5bb);
    /* 0044d5bb: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044d5bf: jge 0x44d5d0 */ if ((fS==fO)) goto L_0044d5d0;
L_0044d5c1:; BB(0x0044d5c1);
    /* 0044d5c1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044d5c4: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0044d5c7: mov byte ptr [ecx + 0xcd], 0 */ W8((u32)(r_ecx+0xcdu), 0x0u);
    /* 0044d5ce: jmp 0x44d5b2 */ goto L_0044d5b2;
L_0044d5d0:; BB(0x0044d5d0);
    /* 0044d5d0: mov esp, ebp */ r_esp = r_ebp;
    /* 0044d5d2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044d5d3: ret  */ FN_RET(0x0044d5a0); r_esp += 4; return;
}

void f_0044d5e0(void) /* sub_44D5E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044d5e0);
    /* 0044d5e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044d5e1: mov ebp, esp */ r_ebp = r_esp;
    /* 0044d5e3: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044d5e6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0044d5e7: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0044d5ea: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0044d5ec: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0044d5f2: call 0x5df7b0 */ r_esp -= 4; W32(r_esp, 0x44d5f7u); f_005df7b0();
    /* 0044d5f7: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0044d5fa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044d5fc: je 0x44d694 */ if (fZ) goto L_0044d694;
L_0044d602:; BB(0x0044d602);
    /* 0044d602: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0044d605: movzx edx, byte ptr [ecx + 0xc8] */ r_edx = (u32)R8((u32)(r_ecx+0xc8u));
    /* 0044d60c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044d60e: jne 0x44d694 */ if (!fZ) goto L_0044d694;
L_0044d614:; BB(0x0044d614);
    /* 0044d614: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0044d617: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044d618: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x44d61du); f_005dcb00();
    /* 0044d61d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044d620: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0044d623: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044d626: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x44d62bu); f_0063aac0();
    /* 0044d62b: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0044d62d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0044d630: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044d634: je 0x44d652 */ if (fZ) goto L_0044d652;
L_0044d636:; BB(0x0044d636);
    /* 0044d636: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044d639: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x44d63eu); f_0063aac0();
    /* 0044d63e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0044d640: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0044d643: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044d647: je 0x44d652 */ if (fZ) goto L_0044d652;
L_0044d649:; BB(0x0044d649);
    /* 0044d649: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 0044d650: jmp 0x44d659 */ goto L_0044d659;
L_0044d652:; BB(0x0044d652);
    /* 0044d652: mov dword ptr [ebp - 0x14], 1 */ W32((u32)(r_ebp+0xffffffecu), 0x1u);
L_0044d659:; BB(0x0044d659);
    /* 0044d659: movzx eax, byte ptr [ebp - 0x14] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffecu));
    /* 0044d65d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044d65f: je 0x44d694 */ if (fZ) goto L_0044d694;
L_0044d661:; BB(0x0044d661);
    /* 0044d661: movzx esi, byte ptr [ebp + 0xc] */ r_esi = (u32)R8((u32)(r_ebp+0xcu));
    /* 0044d665: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0044d668: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044d669: mov ecx, dword ptr [0x79071c] */ r_ecx = R32((u32)(0x79071cu));
    /* 0044d66f: call 0x4466b0 */ r_esp -= 4; W32(r_esp, 0x44d674u); f_004466b0();
    /* 0044d674: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0044d677: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044d679: je 0x44d694 */ if (fZ) goto L_0044d694;
L_0044d67b:; BB(0x0044d67b);
    /* 0044d67b: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0044d67e: mov byte ptr [eax + 0xc8], 1 */ W8((u32)(r_eax+0xc8u), 0x1u);
    /* 0044d685: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 0044d68b: call 0x57c140 */ r_esp -= 4; W32(r_esp, 0x44d690u); f_0057c140();
    /* 0044d690: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0044d692: jmp 0x44d696 */ goto L_0044d696;
L_0044d694:; BB(0x0044d694);
    /* 0044d694: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0044d696:; BB(0x0044d696);
    /* 0044d696: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0044d697: mov esp, ebp */ r_esp = r_ebp;
    /* 0044d699: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044d69a: ret 8 */ FN_RET(0x0044d5e0); r_esp += 12; return;
}

void f_0044d6a0(void) /* sub_44D6A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044d6a0);
    /* 0044d6a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044d6a1: mov ebp, esp */ r_ebp = r_esp;
    /* 0044d6a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044d6a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0044d6a7: mov al, byte ptr [ebp + 0xc] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xcu))) & 0xffu);
    /* 0044d6aa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044d6ab: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0044d6ae: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044d6af: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044d6b2: call 0x44d5e0 */ r_esp -= 4; W32(r_esp, 0x44d6b7u); f_0044d5e0();
    /* 0044d6b7: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0044d6ba: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044d6bc: je 0x44d6c2 */ if (fZ) goto L_0044d6c2;
L_0044d6be:; BB(0x0044d6be);
    /* 0044d6be: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0044d6c0: jmp 0x44d6f8 */ goto L_0044d6f8;
L_0044d6c2:; BB(0x0044d6c2);
    /* 0044d6c2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044d6c5: mov byte ptr [eax + 0xc8], 0 */ W8((u32)(r_eax+0xc8u), 0x0u);
    /* 0044d6cc: mov cl, byte ptr [ebp + 0xc] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xcu))) & 0xffu);
    /* 0044d6cf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044d6d0: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0044d6d3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044d6d4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044d6d7: call 0x44d510 */ r_esp -= 4; W32(r_esp, 0x44d6dcu); f_0044d510();
    /* 0044d6dc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044d6df: add eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044d6e2: mov byte ptr [eax + 0xc9], 0 */ W8((u32)(r_eax+0xc9u), 0x0u);
    /* 0044d6e9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044d6ec: add ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0044d6ef: mov byte ptr [ecx + 0xcd], 1 */ W8((u32)(r_ecx+0xcdu), 0x1u);
    /* 0044d6f6: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_0044d6f8:; BB(0x0044d6f8);
    /* 0044d6f8: mov esp, ebp */ r_esp = r_ebp;
    /* 0044d6fa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044d6fb: ret 8 */ FN_RET(0x0044d6a0); r_esp += 12; return;
}

void f_0044d700(void) /* sub_44D700 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044d700);
    /* 0044d700: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044d701: mov ebp, esp */ r_ebp = r_esp;
    /* 0044d703: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044d704: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0044d707: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044d70a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0044d70c: cmp dword ptr [eax + 0xd4], 2 */ {  u32 a = R32((u32)(r_eax+0xd4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044d713: setl cl */ r_ecx = (r_ecx & 0xffffff00u) | ((((fS!=fO)) ? 1 : 0) & 0xffu);
    /* 0044d716: mov al, cl */ r_eax = (r_eax & 0xffffff00u) | (((u8)r_ecx) & 0xffu);
    /* 0044d718: mov esp, ebp */ r_esp = r_ebp;
    /* 0044d71a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044d71b: ret  */ FN_RET(0x0044d700); r_esp += 4; return;
}

void f_0044d720(void) /* sub_44D720 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044d720);
    /* 0044d720: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044d721: mov ebp, esp */ r_ebp = r_esp;
    /* 0044d723: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044d726: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0044d729: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044d72c: movzx ecx, byte ptr [eax + 0xd8] */ r_ecx = (u32)R8((u32)(r_eax+0xd8u));
    /* 0044d733: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044d735: je 0x44d74e */ if (fZ) goto L_0044d74e;
L_0044d737:; BB(0x0044d737);
    /* 0044d737: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044d73a: movzx eax, byte ptr [edx + 0xd9] */ r_eax = (u32)R8((u32)(r_edx+0xd9u));
    /* 0044d741: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044d743: je 0x44d74e */ if (fZ) goto L_0044d74e;
L_0044d745:; BB(0x0044d745);
    /* 0044d745: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0044d74c: jmp 0x44d755 */ goto L_0044d755;
L_0044d74e:; BB(0x0044d74e);
    /* 0044d74e: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
L_0044d755:; BB(0x0044d755);
    /* 0044d755: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0044d758: mov esp, ebp */ r_esp = r_ebp;
    /* 0044d75a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044d75b: ret  */ FN_RET(0x0044d720); r_esp += 4; return;
}

void f_0044d760(void) /* sub_44D760 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044d760);
    /* 0044d760: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044d761: mov ebp, esp */ r_ebp = r_esp;
    /* 0044d763: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044d766: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0044d769: mov dword ptr [ebp - 8], 0xffffffff */ W32((u32)(r_ebp+0xfffffff8u), 0xffffffffu);
    /* 0044d770: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044d773: movzx ecx, byte ptr [eax + 0xd8] */ r_ecx = (u32)R8((u32)(r_eax+0xd8u));
    /* 0044d77a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044d77c: jne 0x44d791 */ if (!fZ) goto L_0044d791;
L_0044d77e:; BB(0x0044d77e);
    /* 0044d77e: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0044d785: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044d788: mov byte ptr [edx + 0xd8], 1 */ W8((u32)(r_edx+0xd8u), 0x1u);
    /* 0044d78f: jmp 0x44d7a2 */ goto L_0044d7a2;
L_0044d791:; BB(0x0044d791);
    /* 0044d791: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 0044d798: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044d79b: mov byte ptr [eax + 0xd9], 1 */ W8((u32)(r_eax+0xd9u), 0x1u);
L_0044d7a2:; BB(0x0044d7a2);
    /* 0044d7a2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0044d7a9: jmp 0x44d7b4 */ goto L_0044d7b4;
L_0044d7ab:; BB(0x0044d7ab);
    /* 0044d7ab: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044d7ae: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0044d7b1: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0044d7b4:; BB(0x0044d7b4);
    /* 0044d7b4: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044d7b8: jge 0x44d7d7 */ if ((fS==fO)) goto L_0044d7d7;
L_0044d7ba:; BB(0x0044d7ba);
    /* 0044d7ba: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044d7bd: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044d7c0: mov cx, word ptr [eax + edx*2 + 0xc0] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0xc0u))) & 0xffffu);
    /* 0044d7c8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044d7c9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044d7cc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044d7cd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044d7d0: call 0x44cda0 */ r_esp -= 4; W32(r_esp, 0x44d7d5u); f_0044cda0();
    /* 0044d7d5: jmp 0x44d7ab */ goto L_0044d7ab;
L_0044d7d7:; BB(0x0044d7d7);
    /* 0044d7d7: mov esp, ebp */ r_esp = r_ebp;
    /* 0044d7d9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044d7da: ret  */ FN_RET(0x0044d760); r_esp += 4; return;
}

void f_0044d7e0(void) /* sub_44D7E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044d7e0);
    /* 0044d7e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044d7e1: mov ebp, esp */ r_ebp = r_esp;
    /* 0044d7e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044d7e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0044d7e7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044d7ea: call 0x44d720 */ r_esp -= 4; W32(r_esp, 0x44d7efu); f_0044d720();
    /* 0044d7ef: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0044d7f2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044d7f4: je 0x44d7fe */ if (fZ) goto L_0044d7fe;
L_0044d7f6:; BB(0x0044d7f6);
    /* 0044d7f6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044d7f9: call 0x44d760 */ r_esp -= 4; W32(r_esp, 0x44d7feu); f_0044d760();
L_0044d7fe:; BB(0x0044d7fe);
    /* 0044d7fe: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044d801: call 0x44d5a0 */ r_esp -= 4; W32(r_esp, 0x44d806u); f_0044d5a0();
    /* 0044d806: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044d809: mov edx, dword ptr [ecx + 0xd4] */ r_edx = R32((u32)(r_ecx+0xd4u));
    /* 0044d80f: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0044d812: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044d815: mov dword ptr [eax + 0xd4], edx */ W32((u32)(r_eax+0xd4u), r_edx);
    /* 0044d81b: mov esp, ebp */ r_esp = r_ebp;
    /* 0044d81d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044d81e: ret  */ FN_RET(0x0044d7e0); r_esp += 4; return;
}

void f_0044d820(void) /* sub_44D820 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044d820);
    /* 0044d820: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044d821: mov ebp, esp */ r_ebp = r_esp;
    /* 0044d823: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044d826: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0044d829: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0044d830: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0044d832: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x44d837u); f_0062fbf0();
    /* 0044d837: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044d83a: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0044d83d:; BB(0x0044d83d);
    /* 0044d83d: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044d841: jge 0x44d8d4 */ if ((fS==fO)) goto L_0044d8d4;
L_0044d847:; BB(0x0044d847);
    /* 0044d847: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044d84a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044d84b: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x44d850u); f_005dcb00();
    /* 0044d850: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044d853: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0044d856: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0044d859: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x44d85eu); f_0063aac0();
    /* 0044d85e: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0044d860: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0044d863: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0044d865: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044d869: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0044d86c: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 0044d86f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044d871: jne 0x44d8ae */ if (!fZ) goto L_0044d8ae;
L_0044d873:; BB(0x0044d873);
    /* 0044d873: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044d876: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044d877: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x44d87cu); f_005dcb00();
    /* 0044d87c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044d87f: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0044d882: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0044d885: mov al, byte ptr [edx + 0x4a1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x4a1u))) & 0xffu);
    /* 0044d88b: mov byte ptr [ebp - 0x15], al */ W8((u32)(r_ebp+0xffffffebu), (u8)r_eax);
    /* 0044d88e: movzx ecx, byte ptr [ebp - 0x15] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffebu));
    /* 0044d892: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044d894: jne 0x44d8ae */ if (!fZ) goto L_0044d8ae;
L_0044d896:; BB(0x0044d896);
    /* 0044d896: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044d899: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044d89a: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0044d89d: call 0x44d8e0 */ r_esp -= 4; W32(r_esp, 0x44d8a2u); f_0044d8e0();
    /* 0044d8a2: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0044d8a5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044d8a7: je 0x44d8ae */ if (fZ) goto L_0044d8ae;
L_0044d8a9:; BB(0x0044d8a9);
    /* 0044d8a9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044d8ac: jmp 0x44d8d7 */ goto L_0044d8d7;
L_0044d8ae:; BB(0x0044d8ae);
    /* 0044d8ae: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044d8b1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044d8b4: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0044d8b7: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0044d8ba: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044d8bd: jl 0x44d8c6 */ if ((fS!=fO)) goto L_0044d8c6;
L_0044d8bf:; BB(0x0044d8bf);
    /* 0044d8bf: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
L_0044d8c6:; BB(0x0044d8c6);
    /* 0044d8c6: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044d8c9: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044d8cc: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0044d8cf: jmp 0x44d83d */ goto L_0044d83d;
L_0044d8d4:; BB(0x0044d8d4);
    /* 0044d8d4: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_0044d8d7:; BB(0x0044d8d7);
    /* 0044d8d7: mov esp, ebp */ r_esp = r_ebp;
    /* 0044d8d9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044d8da: ret  */ FN_RET(0x0044d820); r_esp += 4; return;
}

void f_0044d8e0(void) /* sub_44D8E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044d8e0);
    /* 0044d8e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044d8e1: mov ebp, esp */ r_ebp = r_esp;
    /* 0044d8e3: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044d8e6: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0044d8eb: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0044d8ed: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0044d8f0: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0044d8f3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044d8f5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0044d8f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044d8f9: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0044d8fc: call 0x44ce00 */ r_esp -= 4; W32(r_esp, 0x44d901u); f_0044ce00();
    /* 0044d901: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044d902: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0044d905: imul ecx, ecx, 0xa */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xau; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0044d908: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0044d90b: lea eax, [edx + ecx + 0x98] */ r_eax = (u32)(r_edx+r_ecx+0x98u);
    /* 0044d912: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044d913: call 0x462ba0 */ r_esp -= 4; W32(r_esp, 0x44d918u); f_00462ba0();
    /* 0044d918: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044d91b: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0044d91e: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044d922: jne 0x44d94b */ if (!fZ) goto L_0044d94b;
L_0044d924:; BB(0x0044d924);
    /* 0044d924: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0044d926: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0044d929: imul ecx, ecx, 0xa */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xau; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0044d92c: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0044d92f: lea eax, [edx + ecx + 0x98] */ r_eax = (u32)(r_edx+r_ecx+0x98u);
    /* 0044d936: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044d937: call 0x4639e0 */ r_esp -= 4; W32(r_esp, 0x44d93cu); f_004639e0();
    /* 0044d93c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044d93f: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044d942: jge 0x44d94b */ if ((fS==fO)) goto L_0044d94b;
L_0044d944:; BB(0x0044d944);
    /* 0044d944: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
L_0044d94b:; BB(0x0044d94b);
    /* 0044d94b: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0044d952: jmp 0x44d95d */ goto L_0044d95d;
L_0044d954:; BB(0x0044d954);
    /* 0044d954: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044d957: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0044d95a: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_0044d95d:; BB(0x0044d95d);
    /* 0044d95d: cmp dword ptr [ebp - 8], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044d961: jge 0x44d9f6 */ if ((fS==fO)) goto L_0044d9f6;
L_0044d967:; BB(0x0044d967);
    /* 0044d967: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0044d96a: cmp dword ptr [edx + 0xd4], 1 */ {  u32 a = R32((u32)(r_edx+0xd4u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044d971: jne 0x44d9a0 */ if (!fZ) goto L_0044d9a0;
L_0044d973:; BB(0x0044d973);
    /* 0044d973: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044d976: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044d977: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0044d97a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044d97b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0044d97e: call 0x44cd70 */ r_esp -= 4; W32(r_esp, 0x44d983u); f_0044cd70();
    /* 0044d983: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 0044d986: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0044d989: movzx ecx, word ptr [eax + 0xc0] */ r_ecx = (u32)R16((u32)(r_eax+0xc0u));
    /* 0044d990: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044d992: jne 0x44d9a0 */ if (!fZ) goto L_0044d9a0;
L_0044d994:; BB(0x0044d994);
    /* 0044d994: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044d997: mov word ptr [ebp + edx*2 - 0x1c], 0 */ W16((u32)(r_ebp+r_edx*2+0xffffffe4u), 0x0u);
    /* 0044d99e: jmp 0x44d9f1 */ goto L_0044d9f1;
L_0044d9a0:; BB(0x0044d9a0);
    /* 0044d9a0: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0044d9a3: cmp dword ptr [eax + 0xd4], 2 */ {  u32 a = R32((u32)(r_eax+0xd4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044d9aa: jne 0x44d9d9 */ if (!fZ) goto L_0044d9d9;
L_0044d9ac:; BB(0x0044d9ac);
    /* 0044d9ac: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044d9af: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044d9b0: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0044d9b3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044d9b4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0044d9b7: call 0x44cd70 */ r_esp -= 4; W32(r_esp, 0x44d9bcu); f_0044cd70();
    /* 0044d9bc: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 0044d9bf: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0044d9c2: movzx edx, word ptr [ecx + 0xc2] */ r_edx = (u32)R16((u32)(r_ecx+0xc2u));
    /* 0044d9c9: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044d9cb: jne 0x44d9d9 */ if (!fZ) goto L_0044d9d9;
L_0044d9cd:; BB(0x0044d9cd);
    /* 0044d9cd: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044d9d0: mov word ptr [ebp + eax*2 - 0x1c], 0 */ W16((u32)(r_ebp+r_eax*2+0xffffffe4u), 0x0u);
    /* 0044d9d7: jmp 0x44d9f1 */ goto L_0044d9f1;
L_0044d9d9:; BB(0x0044d9d9);
    /* 0044d9d9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044d9dc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044d9dd: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0044d9e0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044d9e1: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0044d9e4: call 0x44cd70 */ r_esp -= 4; W32(r_esp, 0x44d9e9u); f_0044cd70();
    /* 0044d9e9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044d9ec: mov word ptr [ebp + ecx*2 - 0x1c], ax */ W16((u32)(r_ebp+r_ecx*2+0xffffffe4u), (u16)r_eax);
L_0044d9f1:; BB(0x0044d9f1);
    /* 0044d9f1: jmp 0x44d954 */ goto L_0044d954;
L_0044d9f6:; BB(0x0044d9f6);
    /* 0044d9f6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044d9f8: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0044d9fb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044d9fc: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0044d9ff: call 0x44ce00 */ r_esp -= 4; W32(r_esp, 0x44da04u); f_0044ce00();
    /* 0044da04: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0044da07: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044da08: lea eax, [ebp - 0x1c] */ r_eax = (u32)(r_ebp+0xffffffe4u);
    /* 0044da0b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044da0c: call 0x462ba0 */ r_esp -= 4; W32(r_esp, 0x44da11u); f_00462ba0();
    /* 0044da11: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044da14: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0044da17: cmp dword ptr [ebp - 0xc], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044da1b: jne 0x44da44 */ if (!fZ) goto L_0044da44;
L_0044da1d:; BB(0x0044da1d);
    /* 0044da1d: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0044da1f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0044da22: imul ecx, ecx, 0xa */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xau; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0044da25: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0044da28: lea eax, [edx + ecx + 0x98] */ r_eax = (u32)(r_edx+r_ecx+0x98u);
    /* 0044da2f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044da30: call 0x4639e0 */ r_esp -= 4; W32(r_esp, 0x44da35u); f_004639e0();
    /* 0044da35: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044da38: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044da3b: jge 0x44da44 */ if ((fS==fO)) goto L_0044da44;
L_0044da3d:; BB(0x0044da3d);
    /* 0044da3d: mov dword ptr [ebp - 0xc], 1 */ W32((u32)(r_ebp+0xfffffff4u), 0x1u);
L_0044da44:; BB(0x0044da44);
    /* 0044da44: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044da47: cmp ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044da4a: jle 0x44da50 */ if ((fZ||fS!=fO)) goto L_0044da50;
L_0044da4c:; BB(0x0044da4c);
    /* 0044da4c: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0044da4e: jmp 0x44da72 */ goto L_0044da72;
L_0044da50:; BB(0x0044da50);
    /* 0044da50: cmp dword ptr [ebp - 0xc], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044da54: jl 0x44da60 */ if ((fS!=fO)) goto L_0044da60;
L_0044da56:; BB(0x0044da56);
    /* 0044da56: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044da5a: jne 0x44da60 */ if (!fZ) goto L_0044da60;
L_0044da5c:; BB(0x0044da5c);
    /* 0044da5c: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0044da5e: jmp 0x44da72 */ goto L_0044da72;
L_0044da60:; BB(0x0044da60);
    /* 0044da60: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044da64: jl 0x44da70 */ if ((fS!=fO)) goto L_0044da70;
L_0044da66:; BB(0x0044da66);
    /* 0044da66: cmp dword ptr [ebp - 4], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044da6a: je 0x44da70 */ if (fZ) goto L_0044da70;
L_0044da6c:; BB(0x0044da6c);
    /* 0044da6c: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0044da6e: jmp 0x44da72 */ goto L_0044da72;
L_0044da70:; BB(0x0044da70);
    /* 0044da70: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0044da72:; BB(0x0044da72);
    /* 0044da72: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0044da75: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0044da77: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x44da7cu); f_00686d72();
    /* 0044da7c: mov esp, ebp */ r_esp = r_ebp;
    /* 0044da7e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044da7f: ret 4 */ FN_RET(0x0044d8e0); r_esp += 8; return;
}

void f_0044da90(void) /* sub_44DA90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044da90);
    /* 0044da90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044da91: mov ebp, esp */ r_ebp = r_esp;
    /* 0044da93: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044da96: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0044da9b: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0044da9d: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0044daa0: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0044daa3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044daa5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0044daa8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044daa9: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0044daac: call 0x44ce00 */ r_esp -= 4; W32(r_esp, 0x44dab1u); f_0044ce00();
    /* 0044dab1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044dab2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0044dab5: imul ecx, ecx, 0xa */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xau; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0044dab8: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0044dabb: lea eax, [edx + ecx + 0x98] */ r_eax = (u32)(r_edx+r_ecx+0x98u);
    /* 0044dac2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044dac3: call 0x462ba0 */ r_esp -= 4; W32(r_esp, 0x44dac8u); f_00462ba0();
    /* 0044dac8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044dacb: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0044dace: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044dad2: jne 0x44dafb */ if (!fZ) goto L_0044dafb;
L_0044dad4:; BB(0x0044dad4);
    /* 0044dad4: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0044dad6: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0044dad9: imul ecx, ecx, 0xa */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xau; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0044dadc: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0044dadf: lea eax, [edx + ecx + 0x98] */ r_eax = (u32)(r_edx+r_ecx+0x98u);
    /* 0044dae6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044dae7: call 0x4639e0 */ r_esp -= 4; W32(r_esp, 0x44daecu); f_004639e0();
    /* 0044daec: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044daef: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044daf2: jge 0x44dafb */ if ((fS==fO)) goto L_0044dafb;
L_0044daf4:; BB(0x0044daf4);
    /* 0044daf4: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
L_0044dafb:; BB(0x0044dafb);
    /* 0044dafb: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0044db02: jmp 0x44db0d */ goto L_0044db0d;
L_0044db04:; BB(0x0044db04);
    /* 0044db04: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044db07: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0044db0a: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_0044db0d:; BB(0x0044db0d);
    /* 0044db0d: cmp dword ptr [ebp - 8], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044db11: jge 0x44dba6 */ if ((fS==fO)) goto L_0044dba6;
L_0044db17:; BB(0x0044db17);
    /* 0044db17: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0044db1a: cmp dword ptr [edx + 0xd4], 1 */ {  u32 a = R32((u32)(r_edx+0xd4u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044db21: jne 0x44db50 */ if (!fZ) goto L_0044db50;
L_0044db23:; BB(0x0044db23);
    /* 0044db23: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044db26: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044db27: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0044db2a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044db2b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0044db2e: call 0x44cd70 */ r_esp -= 4; W32(r_esp, 0x44db33u); f_0044cd70();
    /* 0044db33: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 0044db36: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0044db39: movzx ecx, word ptr [eax + 0xc0] */ r_ecx = (u32)R16((u32)(r_eax+0xc0u));
    /* 0044db40: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044db42: jne 0x44db50 */ if (!fZ) goto L_0044db50;
L_0044db44:; BB(0x0044db44);
    /* 0044db44: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044db47: mov word ptr [ebp + edx*2 - 0x1c], 0 */ W16((u32)(r_ebp+r_edx*2+0xffffffe4u), 0x0u);
    /* 0044db4e: jmp 0x44dba1 */ goto L_0044dba1;
L_0044db50:; BB(0x0044db50);
    /* 0044db50: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0044db53: cmp dword ptr [eax + 0xd4], 2 */ {  u32 a = R32((u32)(r_eax+0xd4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044db5a: jne 0x44db89 */ if (!fZ) goto L_0044db89;
L_0044db5c:; BB(0x0044db5c);
    /* 0044db5c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044db5f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044db60: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0044db63: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044db64: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0044db67: call 0x44cd70 */ r_esp -= 4; W32(r_esp, 0x44db6cu); f_0044cd70();
    /* 0044db6c: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 0044db6f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0044db72: movzx edx, word ptr [ecx + 0xc2] */ r_edx = (u32)R16((u32)(r_ecx+0xc2u));
    /* 0044db79: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044db7b: jne 0x44db89 */ if (!fZ) goto L_0044db89;
L_0044db7d:; BB(0x0044db7d);
    /* 0044db7d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044db80: mov word ptr [ebp + eax*2 - 0x1c], 0 */ W16((u32)(r_ebp+r_eax*2+0xffffffe4u), 0x0u);
    /* 0044db87: jmp 0x44dba1 */ goto L_0044dba1;
L_0044db89:; BB(0x0044db89);
    /* 0044db89: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044db8c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044db8d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0044db90: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044db91: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0044db94: call 0x44cd70 */ r_esp -= 4; W32(r_esp, 0x44db99u); f_0044cd70();
    /* 0044db99: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044db9c: mov word ptr [ebp + ecx*2 - 0x1c], ax */ W16((u32)(r_ebp+r_ecx*2+0xffffffe4u), (u16)r_eax);
L_0044dba1:; BB(0x0044dba1);
    /* 0044dba1: jmp 0x44db04 */ goto L_0044db04;
L_0044dba6:; BB(0x0044dba6);
    /* 0044dba6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044dba8: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0044dbab: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044dbac: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0044dbaf: call 0x44ce00 */ r_esp -= 4; W32(r_esp, 0x44dbb4u); f_0044ce00();
    /* 0044dbb4: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0044dbb7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044dbb8: lea eax, [ebp - 0x1c] */ r_eax = (u32)(r_ebp+0xffffffe4u);
    /* 0044dbbb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044dbbc: call 0x462ba0 */ r_esp -= 4; W32(r_esp, 0x44dbc1u); f_00462ba0();
    /* 0044dbc1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044dbc4: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0044dbc7: cmp dword ptr [ebp - 0xc], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044dbcb: jne 0x44dbf4 */ if (!fZ) goto L_0044dbf4;
L_0044dbcd:; BB(0x0044dbcd);
    /* 0044dbcd: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0044dbcf: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0044dbd2: imul ecx, ecx, 0xa */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xau; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0044dbd5: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0044dbd8: lea eax, [edx + ecx + 0x98] */ r_eax = (u32)(r_edx+r_ecx+0x98u);
    /* 0044dbdf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044dbe0: call 0x4639e0 */ r_esp -= 4; W32(r_esp, 0x44dbe5u); f_004639e0();
    /* 0044dbe5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044dbe8: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044dbeb: jge 0x44dbf4 */ if ((fS==fO)) goto L_0044dbf4;
L_0044dbed:; BB(0x0044dbed);
    /* 0044dbed: mov dword ptr [ebp - 0xc], 1 */ W32((u32)(r_ebp+0xfffffff4u), 0x1u);
L_0044dbf4:; BB(0x0044dbf4);
    /* 0044dbf4: cmp dword ptr [ebp - 0xc], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044dbf8: jl 0x44dc04 */ if ((fS!=fO)) goto L_0044dc04;
L_0044dbfa:; BB(0x0044dbfa);
    /* 0044dbfa: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044dbfe: jne 0x44dc04 */ if (!fZ) goto L_0044dc04;
L_0044dc00:; BB(0x0044dc00);
    /* 0044dc00: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0044dc02: jmp 0x44dc0f */ goto L_0044dc0f;
L_0044dc04:; BB(0x0044dc04);
    /* 0044dc04: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044dc07: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0044dc09: cmp ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044dc0c: setl al */ r_eax = (r_eax & 0xffffff00u) | ((((fS!=fO)) ? 1 : 0) & 0xffu);
L_0044dc0f:; BB(0x0044dc0f);
    /* 0044dc0f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0044dc12: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0044dc14: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x44dc19u); f_00686d72();
    /* 0044dc19: mov esp, ebp */ r_esp = r_ebp;
    /* 0044dc1b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044dc1c: ret 4 */ FN_RET(0x0044da90); r_esp += 8; return;
}

void f_0044dc20(void) /* sub_44DC20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044dc20);
    /* 0044dc20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044dc21: mov ebp, esp */ r_ebp = r_esp;
    /* 0044dc23: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044dc26: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0044dc29: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0044dc30: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0044dc32: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x44dc37u); f_0062fbf0();
    /* 0044dc37: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044dc3a: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0044dc3d:; BB(0x0044dc3d);
    /* 0044dc3d: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044dc41: jge 0x44dcd4 */ if ((fS==fO)) goto L_0044dcd4;
L_0044dc47:; BB(0x0044dc47);
    /* 0044dc47: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044dc4a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044dc4b: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x44dc50u); f_005dcb00();
    /* 0044dc50: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044dc53: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0044dc56: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0044dc59: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x44dc5eu); f_0063aac0();
    /* 0044dc5e: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0044dc60: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0044dc63: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0044dc65: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044dc69: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0044dc6c: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 0044dc6f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044dc71: jne 0x44dcae */ if (!fZ) goto L_0044dcae;
L_0044dc73:; BB(0x0044dc73);
    /* 0044dc73: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044dc76: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044dc77: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x44dc7cu); f_005dcb00();
    /* 0044dc7c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044dc7f: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0044dc82: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0044dc85: mov al, byte ptr [edx + 0x4a1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x4a1u))) & 0xffu);
    /* 0044dc8b: mov byte ptr [ebp - 0x15], al */ W8((u32)(r_ebp+0xffffffebu), (u8)r_eax);
    /* 0044dc8e: movzx ecx, byte ptr [ebp - 0x15] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffebu));
    /* 0044dc92: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044dc94: jne 0x44dcae */ if (!fZ) goto L_0044dcae;
L_0044dc96:; BB(0x0044dc96);
    /* 0044dc96: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044dc99: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044dc9a: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0044dc9d: call 0x44da90 */ r_esp -= 4; W32(r_esp, 0x44dca2u); f_0044da90();
    /* 0044dca2: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0044dca5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044dca7: je 0x44dcae */ if (fZ) goto L_0044dcae;
L_0044dca9:; BB(0x0044dca9);
    /* 0044dca9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044dcac: jmp 0x44dcd7 */ goto L_0044dcd7;
L_0044dcae:; BB(0x0044dcae);
    /* 0044dcae: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044dcb1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044dcb4: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0044dcb7: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0044dcba: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044dcbd: jl 0x44dcc6 */ if ((fS!=fO)) goto L_0044dcc6;
L_0044dcbf:; BB(0x0044dcbf);
    /* 0044dcbf: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
L_0044dcc6:; BB(0x0044dcc6);
    /* 0044dcc6: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044dcc9: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044dccc: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0044dccf: jmp 0x44dc3d */ goto L_0044dc3d;
L_0044dcd4:; BB(0x0044dcd4);
    /* 0044dcd4: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_0044dcd7:; BB(0x0044dcd7);
    /* 0044dcd7: mov esp, ebp */ r_esp = r_ebp;
    /* 0044dcd9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044dcda: ret  */ FN_RET(0x0044dc20); r_esp += 4; return;
}

void f_0044dce0(void) /* sub_44DCE0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044dce0);
    /* 0044dce0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044dce1: mov ebp, esp */ r_ebp = r_esp;
    /* 0044dce3: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044dce6: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 0044dce9: mov dword ptr [ebp - 0x14], 3 */ W32((u32)(r_ebp+0xffffffecu), 0x3u);
    /* 0044dcf0: mov dword ptr [ebp - 0x10], 1 */ W32((u32)(r_ebp+0xfffffff0u), 0x1u);
    /* 0044dcf7: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0044dcfe: mov dword ptr [ebp - 8], 2 */ W32((u32)(r_ebp+0xfffffff8u), 0x2u);
    /* 0044dd05: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0044dd0c: jmp 0x44dd17 */ goto L_0044dd17;
L_0044dd0e:; BB(0x0044dd0e);
    /* 0044dd0e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044dd11: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044dd14: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0044dd17:; BB(0x0044dd17);
    /* 0044dd17: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044dd1b: jge 0x44ddad */ if ((fS==fO)) goto L_0044ddad;
L_0044dd21:; BB(0x0044dd21);
    /* 0044dd21: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044dd24: mov edx, dword ptr [ebp + ecx*4 - 0x14] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffecu));
    /* 0044dd28: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044dd29: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x44dd2eu); f_005dcb00();
    /* 0044dd2e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044dd31: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0044dd34: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0044dd37: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x44dd3cu); f_0063aac0();
    /* 0044dd3c: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0044dd3e: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0044dd41: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0044dd43: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044dd47: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0044dd4a: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 0044dd4d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044dd4f: jne 0x44dda8 */ if (!fZ) goto L_0044dda8;
L_0044dd51:; BB(0x0044dd51);
    /* 0044dd51: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044dd54: mov ecx, dword ptr [ebp + eax*4 - 0x14] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffffecu));
    /* 0044dd58: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044dd59: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x44dd5eu); f_005dcb00();
    /* 0044dd5e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044dd61: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0044dd64: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0044dd67: mov al, byte ptr [edx + 0x4a1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x4a1u))) & 0xffu);
    /* 0044dd6d: mov byte ptr [ebp - 0x21], al */ W8((u32)(r_ebp+0xffffffdfu), (u8)r_eax);
    /* 0044dd70: movzx ecx, byte ptr [ebp - 0x21] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffdfu));
    /* 0044dd74: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044dd76: jne 0x44dda8 */ if (!fZ) goto L_0044dda8;
L_0044dd78:; BB(0x0044dd78);
    /* 0044dd78: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044dd7b: mov eax, dword ptr [ebp + edx*4 - 0x14] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xffffffecu));
    /* 0044dd7f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044dd80: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x44dd85u); f_005dcb00();
    /* 0044dd85: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044dd88: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0044dd8b: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0044dd8e: mov dl, byte ptr [ecx + 0x4a2] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x4a2u))) & 0xffu);
    /* 0044dd94: mov byte ptr [ebp - 0x29], dl */ W8((u32)(r_ebp+0xffffffd7u), (u8)r_edx);
    /* 0044dd97: movzx eax, byte ptr [ebp - 0x29] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffd7u));
    /* 0044dd9b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044dd9d: jne 0x44dda8 */ if (!fZ) goto L_0044dda8;
L_0044dd9f:; BB(0x0044dd9f);
    /* 0044dd9f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044dda2: mov eax, dword ptr [ebp + ecx*4 - 0x14] */ r_eax = R32((u32)(r_ebp+r_ecx*4+0xffffffecu));
    /* 0044dda6: jmp 0x44ddb0 */ goto L_0044ddb0;
L_0044dda8:; BB(0x0044dda8);
    /* 0044dda8: jmp 0x44dd0e */ goto L_0044dd0e;
L_0044ddad:; BB(0x0044ddad);
    /* 0044ddad: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_0044ddb0:; BB(0x0044ddb0);
    /* 0044ddb0: mov esp, ebp */ r_esp = r_ebp;
    /* 0044ddb2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044ddb3: ret  */ FN_RET(0x0044dce0); r_esp += 4; return;
}

void f_0044ddc0(void) /* sub_44DDC0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044ddc0);
    /* 0044ddc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044ddc1: mov ebp, esp */ r_ebp = r_esp;
    /* 0044ddc3: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044ddc6: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 0044ddc9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044ddcb: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0044ddcd: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0044ddd0: imul eax, eax, 0xa */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xau; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0044ddd3: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0044ddd6: lea edx, [ecx + eax + 0x98] */ r_edx = (u32)(r_ecx+r_eax+0x98u);
    /* 0044dddd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044ddde: call 0x462ba0 */ r_esp -= 4; W32(r_esp, 0x44dde3u); f_00462ba0();
    /* 0044dde3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044dde6: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0044dde9: cmp dword ptr [ebp - 0x10], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044dded: jne 0x44de16 */ if (!fZ) goto L_0044de16;
L_0044ddef:; BB(0x0044ddef);
    /* 0044ddef: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0044ddf1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0044ddf4: imul eax, eax, 0xa */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xau; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0044ddf7: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0044ddfa: lea edx, [ecx + eax + 0x98] */ r_edx = (u32)(r_ecx+r_eax+0x98u);
    /* 0044de01: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044de02: call 0x4639e0 */ r_esp -= 4; W32(r_esp, 0x44de07u); f_004639e0();
    /* 0044de07: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044de0a: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044de0d: jge 0x44de16 */ if ((fS==fO)) goto L_0044de16;
L_0044de0f:; BB(0x0044de0f);
    /* 0044de0f: mov dword ptr [ebp - 0x10], 1 */ W32((u32)(r_ebp+0xfffffff0u), 0x1u);
L_0044de16:; BB(0x0044de16);
    /* 0044de16: cmp dword ptr [ebp - 0x10], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044de1a: jne 0x44de2f */ if (!fZ) goto L_0044de2f;
L_0044de1c:; BB(0x0044de1c);
    /* 0044de1c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0044de1f: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0044de22: mov dword ptr [ecx + eax*4 + 0xdc], 0 */ W32((u32)(r_ecx+r_eax*4+0xdcu), 0x0u);
    /* 0044de2d: jmp 0x44de40 */ goto L_0044de40;
L_0044de2f:; BB(0x0044de2f);
    /* 0044de2f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0044de32: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0044de35: mov dword ptr [eax + edx*4 + 0xdc], 1 */ W32((u32)(r_eax+r_edx*4+0xdcu), 0x1u);
L_0044de40:; BB(0x0044de40);
    /* 0044de40: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044de42: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044de44: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x44de49u); f_0064c8a0();
    /* 0044de49: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044de4c: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0044de4f: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0044de52: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0044de55: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044de56: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0044de59: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044de5a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0044de5d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044de5e: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x44de63u); f_005dcb00();
    /* 0044de63: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044de66: mov ecx, eax */ r_ecx = r_eax;
    /* 0044de68: call 0x5d6050 */ r_esp -= 4; W32(r_esp, 0x44de6du); f_005d6050();
    /* 0044de6d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0044de70: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044de71: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x44de76u); f_005dcb00();
    /* 0044de76: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044de79: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0044de7c: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0044de7f: call 0x5d52e0 */ r_esp -= 4; W32(r_esp, 0x44de84u); f_005d52e0();
    /* 0044de84: mov dl, byte ptr [eax + 0x2a] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+0x2au))) & 0xffu);
    /* 0044de87: mov byte ptr [ebp - 0x25], dl */ W8((u32)(r_ebp+0xffffffdbu), (u8)r_edx);
    /* 0044de8a: movsx eax, byte ptr [ebp - 0x25] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffdbu));
    /* 0044de8e: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0044de91: mov dword ptr [ebp - 8], 0xffffffff */ W32((u32)(r_ebp+0xfffffff8u), 0xffffffffu);
    /* 0044de98: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0044de9f: jmp 0x44deaa */ goto L_0044deaa;
L_0044dea1:; BB(0x0044dea1);
    /* 0044dea1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044dea4: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0044dea7: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0044deaa:; BB(0x0044deaa);
    /* 0044deaa: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044deae: jge 0x44df7b */ if ((fS==fO)) goto L_0044df7b;
L_0044deb4:; BB(0x0044deb4);
    /* 0044deb4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044deb6: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0044deb9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044deba: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0044debd: imul eax, eax, 3 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0044dec0: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044dec3: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0044dec6: mov ecx, dword ptr [ecx + eax*4 + 8] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x8u));
    /* 0044deca: call 0x5cb7d0 */ r_esp -= 4; W32(r_esp, 0x44decfu); f_005cb7d0();
    /* 0044decf: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0044ded2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044ded4: je 0x44df76 */ if (fZ) goto L_0044df76;
L_0044deda:; BB(0x0044deda);
    /* 0044deda: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0044dedd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044dede: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0044dee1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044dee2: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0044dee5: imul edx, edx, 3 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x3u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0044dee8: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0044deeb: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0044deee: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 0044def2: call 0x44e340 */ r_esp -= 4; W32(r_esp, 0x44def7u); f_0044e340();
    /* 0044def7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0044defa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044defb: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x44df00u); f_005dcb00();
    /* 0044df00: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044df03: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0044df06: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0044df09: call 0x5d52e0 */ r_esp -= 4; W32(r_esp, 0x44df0eu); f_005d52e0();
    /* 0044df0e: mov dl, byte ptr [eax + 0x2a] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+0x2au))) & 0xffu);
    /* 0044df11: mov byte ptr [ebp - 0x2d], dl */ W8((u32)(r_ebp+0xffffffd3u), (u8)r_edx);
    /* 0044df14: movsx eax, byte ptr [ebp - 0x2d] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffd3u));
    /* 0044df18: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0044df1b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044df1e: cmp ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044df21: je 0x44df76 */ if (fZ) goto L_0044df76;
L_0044df23:; BB(0x0044df23);
    /* 0044df23: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044df27: jne 0x44df76 */ if (!fZ) goto L_0044df76;
L_0044df29:; BB(0x0044df29);
    /* 0044df29: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0044df2c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044df2d: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x44df32u); f_005dcb00();
    /* 0044df32: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044df35: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0044df38: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0044df3a: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0044df3d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0044df3f: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0044df42: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0044df45: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x44df47u); call_ind(t); }
    /* 0044df47: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044df49: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044df4b: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x44df50u); f_0064c8a0();
    /* 0044df50: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044df53: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0044df56: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0044df59: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0044df5c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044df5d: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0044df60: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044df61: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0044df64: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044df65: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x44df6au); f_005dcb00();
    /* 0044df6a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044df6d: mov ecx, eax */ r_ecx = r_eax;
    /* 0044df6f: call 0x5d6050 */ r_esp -= 4; W32(r_esp, 0x44df74u); f_005d6050();
    /* 0044df74: jmp 0x44df7b */ goto L_0044df7b;
L_0044df76:; BB(0x0044df76);
    /* 0044df76: jmp 0x44dea1 */ goto L_0044dea1;
L_0044df7b:; BB(0x0044df7b);
    /* 0044df7b: mov esp, ebp */ r_esp = r_ebp;
    /* 0044df7d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044df7e: ret 4 */ FN_RET(0x0044ddc0); r_esp += 8; return;
}

