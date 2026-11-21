#include "protos.h"

void f_005cefb0(void) /* HallOfFameDialog::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cefb0);
    /* 005cefb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cefb1: mov ebp, esp */ r_ebp = r_esp;
    /* 005cefb3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cefb5: push 0x6a8c97 */ { u32 v = 0x6a8c97u; r_esp -= 4; W32(r_esp, v); }
    /* 005cefba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005cefc0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cefc1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cefc2: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005cefc7: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005cefc9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cefca: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005cefcd: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005cefd3: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005cefd6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cefd8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005cefda: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cefdd: call 0x5f71f0 */ r_esp -= 4; W32(r_esp, 0x5cefe2u); f_005f71f0();
    /* 005cefe2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005cefe9: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cefec: mov dword ptr [eax], 0x6d2f14 */ W32((u32)(r_eax), 0x6d2f14u);
    /* 005ceff2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ceff4: push 0x4e6 */ { u32 v = 0x4e6u; r_esp -= 4; W32(r_esp, v); }
    /* 005ceff9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ceffc: call 0x5f83d0 */ r_esp -= 4; W32(r_esp, 0x5cf001u); f_005f83d0();
    /* 005cf001: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cf004: mov byte ptr [ecx + 0x1bc], 0 */ W8((u32)(r_ecx+0x1bcu), 0x0u);
    /* 005cf00b: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cf00e: mov dword ptr [edx + 0x1c0], 0 */ W32((u32)(r_edx+0x1c0u), 0x0u);
    /* 005cf018: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005cf01f: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cf022: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cf025: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005cf02c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005cf02d: mov esp, ebp */ r_esp = r_ebp;
    /* 005cf02f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cf030: ret  */ FN_RET(0x005cefb0); r_esp += 4; return;
}

void f_005cf060(void) /* HallOfFameDialog::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cf060);
    /* 005cf060: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cf061: mov ebp, esp */ r_ebp = r_esp;
    /* 005cf063: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cf064: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005cf067: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cf06a: call 0x5f88f0 */ r_esp -= 4; W32(r_esp, 0x5cf06fu); f_005f88f0();
    /* 005cf06f: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005cf072: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cf074: jne 0x5cf081 */ if (!fZ) goto L_005cf081;
L_005cf076:; BB(0x005cf076);
    /* 005cf076: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005cf079: movzx edx, byte ptr [ecx + 4] */ r_edx = (u32)R8((u32)(r_ecx+0x4u));
    /* 005cf07d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cf07f: je 0x5cf083 */ if (fZ) goto L_005cf083;
L_005cf081:; BB(0x005cf081);
    /* 005cf081: jmp 0x5cf0ec */ goto L_005cf0ec;
L_005cf083:; BB(0x005cf083);
    /* 005cf083: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005cf086: cmp dword ptr [eax + 0x18], 4 */ {  u32 a = R32((u32)(r_eax+0x18u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cf08a: jne 0x5cf0a2 */ if (!fZ) goto L_005cf0a2;
L_005cf08c:; BB(0x005cf08c);
    /* 005cf08c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005cf08f: movsx edx, byte ptr [ecx + 0x14] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x14u));
    /* 005cf093: cmp edx, 0x1b */ {  u32 a = r_edx; u32 b = 0x1bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cf096: jne 0x5cf0a2 */ if (!fZ) goto L_005cf0a2;
L_005cf098:; BB(0x005cf098);
    /* 005cf098: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cf09b: mov byte ptr [eax + 0x1bc], 1 */ W8((u32)(r_eax+0x1bcu), 0x1u);
L_005cf0a2:; BB(0x005cf0a2);
    /* 005cf0a2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005cf0a5: cmp dword ptr [ecx + 0x18], 1 */ {  u32 a = R32((u32)(r_ecx+0x18u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cf0a9: jne 0x5cf0b5 */ if (!fZ) goto L_005cf0b5;
L_005cf0ab:; BB(0x005cf0ab);
    /* 005cf0ab: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cf0ae: mov byte ptr [edx + 0x1bc], 1 */ W8((u32)(r_edx+0x1bcu), 0x1u);
L_005cf0b5:; BB(0x005cf0b5);
    /* 005cf0b5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cf0b8: movzx ecx, byte ptr [eax + 0x1bc] */ r_ecx = (u32)R8((u32)(r_eax+0x1bcu));
    /* 005cf0bf: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cf0c1: je 0x5cf0ec */ if (fZ) goto L_005cf0ec;
L_005cf0c3:; BB(0x005cf0c3);
    /* 005cf0c3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005cf0c5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cf0c8: mov eax, dword ptr [edx + 0x1c0] */ r_eax = R32((u32)(r_edx+0x1c0u));
    /* 005cf0ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cf0cf: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005cf0d5: call 0x5f4510 */ r_esp -= 4; W32(r_esp, 0x5cf0dau); f_005f4510();
    /* 005cf0da: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005cf0dd: mov byte ptr [ecx + 4], 1 */ W8((u32)(r_ecx+0x4u), 0x1u);
    /* 005cf0e1: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005cf0e7: call 0x5dc190 */ r_esp -= 4; W32(r_esp, 0x5cf0ecu); f_005dc190();
L_005cf0ec:; BB(0x005cf0ec);
    /* 005cf0ec: mov esp, ebp */ r_esp = r_ebp;
    /* 005cf0ee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cf0ef: ret 4 */ FN_RET(0x005cf060); r_esp += 8; return;
}

void f_005cf100(void) /* HallOfFameDialog::vfunc15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cf100);
    /* 005cf100: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cf101: mov ebp, esp */ r_ebp = r_esp;
    /* 005cf103: sub esp, 0x948 */ {  u32 a = r_esp; u32 b = 0x948u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cf109: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005cf10e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005cf110: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005cf113: mov dword ptr [ebp - 0x948], ecx */ W32((u32)(r_ebp+0xfffff6b8u), r_ecx);
    /* 005cf119: mov dword ptr [ebp - 0x40c], 0x12 */ W32((u32)(r_ebp+0xfffffbf4u), 0x12u);
    /* 005cf123: mov dword ptr [ebp - 0x420], 0xf */ W32((u32)(r_ebp+0xfffffbe0u), 0xfu);
    /* 005cf12d: mov word ptr [ebp - 0x41c], 0x45 */ W16((u32)(r_ebp+0xfffffbe4u), 0x45u);
    /* 005cf136: mov word ptr [ebp - 0x41a], 0xc4 */ W16((u32)(r_ebp+0xfffffbe6u), 0xc4u);
    /* 005cf13f: mov word ptr [ebp - 0x418], 0x144 */ W16((u32)(r_ebp+0xfffffbe8u), 0x144u);
    /* 005cf148: mov word ptr [ebp - 0x554], 0x68 */ W16((u32)(r_ebp+0xfffffaacu), 0x68u);
    /* 005cf151: mov word ptr [ebp - 0x552], 0x92 */ W16((u32)(r_ebp+0xfffffaaeu), 0x92u);
    /* 005cf15a: mov word ptr [ebp - 0x550], 0xbd */ W16((u32)(r_ebp+0xfffffab0u), 0xbdu);
    /* 005cf163: mov word ptr [ebp - 0x54e], 0xe7 */ W16((u32)(r_ebp+0xfffffab2u), 0xe7u);
    /* 005cf16c: mov word ptr [ebp - 0x54c], 0x112 */ W16((u32)(r_ebp+0xfffffab4u), 0x112u);
    /* 005cf175: mov byte ptr [ebp - 0x408], 0 */ W8((u32)(r_ebp+0xfffffbf8u), 0x0u);
    /* 005cf17c: push 0x3ff */ { u32 v = 0x3ffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cf181: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cf183: lea eax, [ebp - 0x407] */ r_eax = (u32)(r_ebp+0xfffffbf9u);
    /* 005cf189: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cf18a: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x5cf18fu); f_00686fa2();
    /* 005cf18f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cf192: push 0x6d2f54 */ { u32 v = 0x6d2f54u; r_esp -= 4; W32(r_esp, v); }
    /* 005cf197: lea ecx, [ebp - 0x408] */ r_ecx = (u32)(r_ebp+0xfffffbf8u);
    /* 005cf19d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cf19e: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x5cf1a3u); f_00686ec6();
    /* 005cf1a3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cf1a6: mov word ptr [ebp - 0x410], 0 */ W16((u32)(r_ebp+0xfffffbf0u), 0x0u);
    /* 005cf1af: jmp 0x5cf1c3 */ goto L_005cf1c3;
L_005cf1b1:; BB(0x005cf1b1);
    /* 005cf1b1: mov dx, word ptr [ebp - 0x410] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffbf0u))) & 0xffffu);
    /* 005cf1b8: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005cf1bc: mov word ptr [ebp - 0x410], dx */ W16((u32)(r_ebp+0xfffffbf0u), (u16)r_edx);
L_005cf1c3:; BB(0x005cf1c3);
    /* 005cf1c3: movsx eax, word ptr [ebp - 0x410] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffbf0u));
    /* 005cf1ca: cmp eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cf1cd: jge 0x5cf1e3 */ if ((fS==fO)) goto L_005cf1e3;
L_005cf1cf:; BB(0x005cf1cf);
    /* 005cf1cf: movsx ecx, word ptr [ebp - 0x410] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffbf0u));
    /* 005cf1d6: imul ecx, ecx, 0x13 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x13u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005cf1d9: mov byte ptr [ebp + ecx - 0x548], 0 */ W8((u32)(r_ebp+r_ecx+0xfffffab8u), 0x0u);
    /* 005cf1e1: jmp 0x5cf1b1 */ goto L_005cf1b1;
L_005cf1e3:; BB(0x005cf1e3);
    /* 005cf1e3: push 0x6c2d28 */ { u32 v = 0x6c2d28u; r_esp -= 4; W32(r_esp, v); }
    /* 005cf1e8: lea edx, [ebp - 0x408] */ r_edx = (u32)(r_ebp+0xfffffbf8u);
    /* 005cf1ee: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005cf1ef: call 0x5ea9c0 */ r_esp -= 4; W32(r_esp, 0x5cf1f4u); f_005ea9c0();
    /* 005cf1f4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cf1f7: mov dword ptr [ebp - 0x414], eax */ W32((u32)(r_ebp+0xfffffbecu), r_eax);
    /* 005cf1fd: cmp dword ptr [ebp - 0x414], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffbecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cf204: je 0x5cf30e */ if (fZ) goto L_005cf30e;
L_005cf20a:; BB(0x005cf20a);
    /* 005cf20a: mov eax, dword ptr [ebp - 0x414] */ r_eax = R32((u32)(r_ebp+0xfffffbecu));
    /* 005cf210: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cf211: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005cf213: push 0x3e8 */ { u32 v = 0x3e8u; r_esp -= 4; W32(r_esp, v); }
    /* 005cf218: lea ecx, [ebp - 0x940] */ r_ecx = (u32)(r_ebp+0xfffff6c0u);
    /* 005cf21e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cf21f: call dword ptr [0x6b225c] */ { u32 t = R32((u32)(0x6b225cu)); r_esp -= 4; W32(r_esp, 0x5cf225u); call_ind(t); }
    /* 005cf225: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cf228: mov word ptr [ebp - 0x410], 0 */ W16((u32)(r_ebp+0xfffffbf0u), 0x0u);
    /* 005cf231: jmp 0x5cf245 */ goto L_005cf245;
L_005cf233:; BB(0x005cf233);
    /* 005cf233: mov dx, word ptr [ebp - 0x410] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffbf0u))) & 0xffffu);
    /* 005cf23a: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005cf23e: mov word ptr [ebp - 0x410], dx */ W16((u32)(r_ebp+0xfffffbf0u), (u16)r_edx);
L_005cf245:; BB(0x005cf245);
    /* 005cf245: movsx eax, word ptr [ebp - 0x410] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffbf0u));
    /* 005cf24c: cmp eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cf24f: jge 0x5cf2fe */ if ((fS==fO)) goto L_005cf2fe;
L_005cf255:; BB(0x005cf255);
    /* 005cf255: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 005cf257: movsx ecx, word ptr [ebp - 0x410] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffbf0u));
    /* 005cf25e: imul ecx, ecx, 0x12 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x12u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005cf261: lea edx, [ebp + ecx - 0x940] */ r_edx = (u32)(r_ebp+r_ecx+0xfffff6c0u);
    /* 005cf268: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005cf269: movsx eax, word ptr [ebp - 0x410] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffbf0u));
    /* 005cf270: imul eax, eax, 0x13 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x13u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005cf273: lea ecx, [ebp + eax - 0x548] */ r_ecx = (u32)(r_ebp+r_eax+0xfffffab8u);
    /* 005cf27a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cf27b: call 0x686fde */ r_esp -= 4; W32(r_esp, 0x5cf280u); f_00686fde();
    /* 005cf280: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cf283: movsx edx, word ptr [ebp - 0x410] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffbf0u));
    /* 005cf28a: imul edx, edx, 0x13 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x13u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005cf28d: mov byte ptr [ebp + edx - 0x536], 0 */ W8((u32)(r_ebp+r_edx+0xfffffacau), 0x0u);
    /* 005cf295: mov word ptr [ebp - 0x944], 0 */ W16((u32)(r_ebp+0xfffff6bcu), 0x0u);
    /* 005cf29e: jmp 0x5cf2b2 */ goto L_005cf2b2;
L_005cf2a0:; BB(0x005cf2a0);
    /* 005cf2a0: mov ax, word ptr [ebp - 0x944] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffff6bcu))) & 0xffffu);
    /* 005cf2a7: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005cf2ab: mov word ptr [ebp - 0x944], ax */ W16((u32)(r_ebp+0xfffff6bcu), (u16)r_eax);
L_005cf2b2:; BB(0x005cf2b2);
    /* 005cf2b2: movsx ecx, word ptr [ebp - 0x944] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffff6bcu));
    /* 005cf2b9: cmp ecx, 0x12 */ {  u32 a = r_ecx; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cf2bc: jge 0x5cf2f9 */ if ((fS==fO)) goto L_005cf2f9;
L_005cf2be:; BB(0x005cf2be);
    /* 005cf2be: movsx edx, word ptr [ebp - 0x944] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffff6bcu));
    /* 005cf2c5: movsx eax, word ptr [ebp - 0x410] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffbf0u));
    /* 005cf2cc: imul eax, eax, 0x13 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x13u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005cf2cf: lea ecx, [ebp + eax - 0x548] */ r_ecx = (u32)(r_ebp+r_eax+0xfffffab8u);
    /* 005cf2d6: mov dl, byte ptr [ecx + edx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+r_edx))) & 0xffu);
    /* 005cf2d9: add dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005cf2dc: movsx eax, word ptr [ebp - 0x944] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffff6bcu));
    /* 005cf2e3: movsx ecx, word ptr [ebp - 0x410] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffbf0u));
    /* 005cf2ea: imul ecx, ecx, 0x13 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x13u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005cf2ed: lea ecx, [ebp + ecx - 0x548] */ r_ecx = (u32)(r_ebp+r_ecx+0xfffffab8u);
    /* 005cf2f4: mov byte ptr [ecx + eax], dl */ W8((u32)(r_ecx+r_eax), (u8)r_edx);
    /* 005cf2f7: jmp 0x5cf2a0 */ goto L_005cf2a0;
L_005cf2f9:; BB(0x005cf2f9);
    /* 005cf2f9: jmp 0x5cf233 */ goto L_005cf233;
L_005cf2fe:; BB(0x005cf2fe);
    /* 005cf2fe: mov edx, dword ptr [ebp - 0x414] */ r_edx = R32((u32)(r_ebp+0xfffffbecu));
    /* 005cf304: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005cf305: call dword ptr [0x6b2258] */ { u32 t = R32((u32)(0x6b2258u)); r_esp -= 4; W32(r_esp, 0x5cf30bu); call_ind(t); }
    /* 005cf30b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005cf30e:; BB(0x005cf30e);
    /* 005cf30e: mov word ptr [ebp - 0x410], 0 */ W16((u32)(r_ebp+0xfffffbf0u), 0x0u);
    /* 005cf317: jmp 0x5cf32b */ goto L_005cf32b;
L_005cf319:; BB(0x005cf319);
    /* 005cf319: mov ax, word ptr [ebp - 0x410] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffbf0u))) & 0xffffu);
    /* 005cf320: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005cf324: mov word ptr [ebp - 0x410], ax */ W16((u32)(r_ebp+0xfffffbf0u), (u16)r_eax);
L_005cf32b:; BB(0x005cf32b);
    /* 005cf32b: movsx ecx, word ptr [ebp - 0x410] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffbf0u));
    /* 005cf332: cmp ecx, 0xf */ {  u32 a = r_ecx; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cf335: jge 0x5cf3c6 */ if ((fS==fO)) goto L_005cf3c6;
L_005cf33b:; BB(0x005cf33b);
    /* 005cf33b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cf33d: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 005cf33f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005cf341: movsx eax, word ptr [ebp - 0x410] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffbf0u));
    /* 005cf348: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005cf349: mov ecx, 5 */ r_ecx = 0x5u;
    /* 005cf34e: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005cf34e, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005cf34e, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005cf350: movsx edx, word ptr [ebp + edx*2 - 0x554] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+r_edx*2+0xfffffaacu));
    /* 005cf358: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005cf359: movsx eax, word ptr [ebp - 0x410] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffbf0u));
    /* 005cf360: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005cf361: mov ecx, 5 */ r_ecx = 0x5u;
    /* 005cf366: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005cf366, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005cf366, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005cf368: movsx edx, word ptr [ebp + eax*2 - 0x41c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+r_eax*2+0xfffffbe4u));
    /* 005cf370: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005cf371: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 005cf373: push 0x66 */ { u32 v = 0x66u; r_esp -= 4; W32(r_esp, v); }
    /* 005cf375: push 0x3b */ { u32 v = 0x3bu; r_esp -= 4; W32(r_esp, v); }
    /* 005cf377: movsx eax, word ptr [ebp - 0x410] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffbf0u));
    /* 005cf37e: imul eax, eax, 0x13 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x13u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005cf381: lea ecx, [ebp + eax - 0x548] */ r_ecx = (u32)(r_ebp+r_eax+0xfffffab8u);
    /* 005cf388: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cf389: movsx edx, word ptr [ebp - 0x410] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffbf0u));
    /* 005cf390: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005cf391: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cf393: mov ecx, dword ptr [ebp - 0x948] */ r_ecx = R32((u32)(r_ebp+0xfffff6b8u));
    /* 005cf399: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x5cf39eu); f_005fa5b0();
    /* 005cf39e: mov dword ptr [ebp - 0x424], eax */ W32((u32)(r_ebp+0xfffffbdcu), r_eax);
    /* 005cf3a4: movsx eax, word ptr [ebp - 0x410] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffbf0u));
    /* 005cf3ab: imul eax, eax, 0x13 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x13u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005cf3ae: lea ecx, [ebp + eax - 0x548] */ r_ecx = (u32)(r_ebp+r_eax+0xfffffab8u);
    /* 005cf3b5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cf3b6: mov ecx, dword ptr [ebp - 0x424] */ r_ecx = R32((u32)(r_ebp+0xfffffbdcu));
    /* 005cf3bc: call 0x5ee710 */ r_esp -= 4; W32(r_esp, 0x5cf3c1u); f_005ee710();
    /* 005cf3c1: jmp 0x5cf319 */ goto L_005cf319;
L_005cf3c6:; BB(0x005cf3c6);
    /* 005cf3c6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cf3c9: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005cf3cb: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x5cf3d0u); f_00686d72();
    /* 005cf3d0: mov esp, ebp */ r_esp = r_ebp;
    /* 005cf3d2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cf3d3: ret  */ FN_RET(0x005cf100); r_esp += 4; return;
}

