#include "protos.h"

void f_00444a50(void) /* HorseRacingState::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00444a50);
    /* 00444a50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00444a51: mov ebp, esp */ r_ebp = r_esp;
    /* 00444a53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00444a54: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00444a57: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00444a5a: call 0x5e9e20 */ r_esp -= 4; W32(r_esp, 0x444a5fu); f_005e9e20();
    /* 00444a5f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00444a62: mov dword ptr [eax], 0x6b88e8 */ W32((u32)(r_eax), 0x6b88e8u);
    /* 00444a68: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00444a6b: mov byte ptr [ecx + 0x25e], 1 */ W8((u32)(r_ecx+0x25eu), 0x1u);
    /* 00444a72: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00444a75: mov esp, ebp */ r_esp = r_ebp;
    /* 00444a77: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00444a78: ret  */ FN_RET(0x00444a50); r_esp += 4; return;
}

void f_00444f40(void) /* horseracingstate::func_00444f40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00444f40);
    /* 00444f40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00444f41: mov ebp, esp */ r_ebp = r_esp;
    /* 00444f43: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00444f46: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00444f47: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 00444f4a: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 00444f51: mov dword ptr [ebp - 0x38], 0xffffffff */ W32((u32)(r_ebp+0xffffffc8u), 0xffffffffu);
    /* 00444f58: mov dword ptr [ebp - 0x34], 3 */ W32((u32)(r_ebp+0xffffffccu), 0x3u);
    /* 00444f5f: mov dword ptr [ebp - 0x30], 3 */ W32((u32)(r_ebp+0xffffffd0u), 0x3u);
    /* 00444f66: mov dword ptr [ebp - 0x2c], 4 */ W32((u32)(r_ebp+0xffffffd4u), 0x4u);
    /* 00444f6d: mov dword ptr [ebp - 0x28], 7 */ W32((u32)(r_ebp+0xffffffd8u), 0x7u);
    /* 00444f74: mov dword ptr [ebp - 0x24], 7 */ W32((u32)(r_ebp+0xffffffdcu), 0x7u);
    /* 00444f7b: mov dword ptr [ebp - 0x14], 1 */ W32((u32)(r_ebp+0xffffffecu), 0x1u);
    /* 00444f82: mov dword ptr [ebp - 0x10], 4 */ W32((u32)(r_ebp+0xfffffff0u), 0x4u);
    /* 00444f89: mov dword ptr [ebp - 0xc], 5 */ W32((u32)(r_ebp+0xfffffff4u), 0x5u);
    /* 00444f90: mov dword ptr [ebp - 8], 5 */ W32((u32)(r_ebp+0xfffffff8u), 0x5u);
    /* 00444f97: mov dword ptr [ebp - 4], 0xd */ W32((u32)(r_ebp+0xfffffffcu), 0xdu);
L_00444f9e:; BB(0x00444f9e);
    /* 00444f9e: cmp dword ptr [ebp - 0x18], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00444fa2: jge 0x44551c */ if ((fS==fO)) goto L_0044551c;
L_00444fa8:; BB(0x00444fa8);
    /* 00444fa8: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00444faa: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x444fafu); f_0062fbf0();
    /* 00444faf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00444fb2: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00444fb5: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00444fb8: imul eax, eax, 0x78 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x78u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00444fbb: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00444fbe: cmp dword ptr [ecx + eax + 0x50], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax+0x50u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00444fc3: jne 0x445517 */ if (!fZ) goto L_00445517;
L_00444fc9:; BB(0x00444fc9);
    /* 00444fc9: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00444fcc: mov eax, dword ptr [ebp + edx*4 - 0x14] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xffffffecu));
    /* 00444fd0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00444fd1: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x444fd6u); f_0062fbf0();
    /* 00444fd6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00444fd9: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00444fdc: add eax, dword ptr [ebp + ecx*4 - 0x34] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+r_ecx*4+0xffffffccu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00444fe0: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00444fe3: imul edx, edx, 0x78 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x78u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00444fe6: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00444fe9: mov dword ptr [ecx + edx + 0x50], eax */ W32((u32)(r_ecx+r_edx+0x50u), r_eax);
    /* 00444fed: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00444ff0: imul edx, edx, 0x78 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x78u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00444ff3: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00444ff6: mov ecx, dword ptr [eax + edx + 0x50] */ r_ecx = R32((u32)(r_eax+r_edx+0x50u));
    /* 00444ffa: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 00444ffd: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00445000: sub edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00445003: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 00445006: cmp dword ptr [ebp - 0x44], 0x12 */ {  u32 a = R32((u32)(r_ebp+0xffffffbcu)); u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0044500a: ja 0x44523c */ if ((!fC&&!fZ)) goto L_0044523c;
L_00445010:; BB(0x00445010);
    /* 00445010: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00445013: movzx ecx, byte ptr [eax + 0x4455e4] */ r_ecx = (u32)R8((u32)(r_eax+0x4455e4u));
    /* 0044501a: jmp dword ptr [ecx*4 + 0x4455d0] */ { u32 t = R32((u32)(r_ecx*4+0x4455d0u)); switch (t) { case 0x445021u: goto L_00445021; case 0x445037u: goto L_00445037; case 0x445091u: goto L_00445091; case 0x445121u: goto L_00445121; case 0x4451b1u: goto L_004451b1; default: UNSUP(0x0044501a, "jump table entry is not a known target"); } }
L_00445021:; BB(0x00445021);
    /* 00445021: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00445024: imul edx, edx, 0x78 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x78u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00445027: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0044502a: mov dword ptr [eax + edx + 0x58], 2 */ W32((u32)(r_eax+r_edx+0x58u), 0x2u);
    /* 00445032: jmp 0x44523c */ goto L_0044523c;
L_00445037:; BB(0x00445037);
    /* 00445037: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00445039: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x44503eu); f_0062fbf0();
    /* 0044503e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00445041: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00445044: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00445047: imul ecx, ecx, 0x78 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x78u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0044504a: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0044504d: mov dword ptr [edx + ecx + 0x58], eax */ W32((u32)(r_edx+r_ecx+0x58u), r_eax);
    /* 00445051: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00445053: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x445058u); f_0062fbf0();
    /* 00445058: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044505b: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044505e: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00445061: imul ecx, ecx, 0x78 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x78u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00445064: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00445067: mov dword ptr [edx + ecx + 0x60], eax */ W32((u32)(r_edx+r_ecx+0x60u), r_eax);
    /* 0044506b: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0044506e: imul eax, eax, 0x78 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x78u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00445071: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00445074: cmp dword ptr [ecx + eax + 0x60], 3 */ {  u32 a = R32((u32)(r_ecx+r_eax+0x60u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00445079: jne 0x44508c */ if (!fZ) goto L_0044508c;
L_0044507b:; BB(0x0044507b);
    /* 0044507b: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0044507e: imul edx, edx, 0x78 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x78u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00445081: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00445084: mov dword ptr [eax + edx + 0x64], 2 */ W32((u32)(r_eax+r_edx+0x64u), 0x2u);
L_0044508c:; BB(0x0044508c);
    /* 0044508c: jmp 0x44523c */ goto L_0044523c;
L_00445091:; BB(0x00445091);
    /* 00445091: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00445094: imul ecx, ecx, 0x78 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x78u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00445097: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0044509a: mov esi, dword ptr [edx + ecx + 0x50] */ r_esi = R32((u32)(r_edx+r_ecx+0x50u));
    /* 0044509e: sub esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004450a1: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004450a3: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4450a8u); f_0062fbf0();
    /* 004450a8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004450ab: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004450ad: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 004450b0: imul eax, eax, 0x78 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x78u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004450b3: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 004450b6: mov dword ptr [ecx + eax + 0x58], esi */ W32((u32)(r_ecx+r_eax+0x58u), r_esi);
    /* 004450ba: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004450bd: imul edx, edx, 0x78 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x78u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004450c0: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 004450c3: cmp dword ptr [eax + edx + 0x58], 2 */ {  u32 a = R32((u32)(r_eax+r_edx+0x58u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004450c8: je 0x44511c */ if (fZ) goto L_0044511c;
L_004450ca:; BB(0x004450ca);
    /* 004450ca: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004450cd: imul ecx, ecx, 0x78 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x78u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004450d0: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 004450d3: mov eax, dword ptr [edx + ecx + 0x58] */ r_eax = R32((u32)(r_edx+r_ecx+0x58u));
    /* 004450d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004450d8: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4450ddu); f_0062fbf0();
    /* 004450dd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004450e0: mov esi, eax */ r_esi = r_eax;
    /* 004450e2: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004450e4: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4450e9u); f_0062fbf0();
    /* 004450e9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004450ec: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004450ee: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004450f1: imul ecx, ecx, 0x78 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x78u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004450f4: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 004450f7: mov dword ptr [edx + ecx + 0x60], esi */ W32((u32)(r_edx+r_ecx+0x60u), r_esi);
    /* 004450fb: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 004450fe: imul eax, eax, 0x78 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x78u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00445101: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00445104: cmp dword ptr [ecx + eax + 0x60], 2 */ {  u32 a = R32((u32)(r_ecx+r_eax+0x60u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00445109: jge 0x44511c */ if ((fS==fO)) goto L_0044511c;
L_0044510b:; BB(0x0044510b);
    /* 0044510b: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0044510e: imul edx, edx, 0x78 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x78u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00445111: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00445114: mov dword ptr [eax + edx + 0x60], 2 */ W32((u32)(r_eax+r_edx+0x60u), 0x2u);
L_0044511c:; BB(0x0044511c);
    /* 0044511c: jmp 0x44523c */ goto L_0044523c;
L_00445121:; BB(0x00445121);
    /* 00445121: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00445124: imul ecx, ecx, 0x78 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x78u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00445127: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0044512a: mov esi, dword ptr [edx + ecx + 0x50] */ r_esi = R32((u32)(r_edx+r_ecx+0x50u));
    /* 0044512e: sub esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00445131: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00445133: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x445138u); f_0062fbf0();
    /* 00445138: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044513b: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0044513d: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00445140: imul eax, eax, 0x78 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x78u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00445143: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00445146: mov dword ptr [ecx + eax + 0x58], esi */ W32((u32)(r_ecx+r_eax+0x58u), r_esi);
    /* 0044514a: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0044514d: imul edx, edx, 0x78 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x78u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00445150: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00445153: cmp dword ptr [eax + edx + 0x58], 2 */ {  u32 a = R32((u32)(r_eax+r_edx+0x58u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00445158: je 0x4451ac */ if (fZ) goto L_004451ac;
L_0044515a:; BB(0x0044515a);
    /* 0044515a: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0044515d: imul ecx, ecx, 0x78 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x78u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00445160: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00445163: mov eax, dword ptr [edx + ecx + 0x58] */ r_eax = R32((u32)(r_edx+r_ecx+0x58u));
    /* 00445167: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00445168: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x44516du); f_0062fbf0();
    /* 0044516d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00445170: mov esi, eax */ r_esi = r_eax;
    /* 00445172: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00445174: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x445179u); f_0062fbf0();
    /* 00445179: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044517c: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0044517e: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00445181: imul ecx, ecx, 0x78 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x78u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00445184: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00445187: mov dword ptr [edx + ecx + 0x60], esi */ W32((u32)(r_edx+r_ecx+0x60u), r_esi);
    /* 0044518b: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0044518e: imul eax, eax, 0x78 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x78u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00445191: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00445194: cmp dword ptr [ecx + eax + 0x60], 2 */ {  u32 a = R32((u32)(r_ecx+r_eax+0x60u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00445199: jge 0x4451ac */ if ((fS==fO)) goto L_004451ac;
L_0044519b:; BB(0x0044519b);
    /* 0044519b: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0044519e: imul edx, edx, 0x78 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x78u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004451a1: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 004451a4: mov dword ptr [eax + edx + 0x60], 2 */ W32((u32)(r_eax+r_edx+0x60u), 0x2u);
L_004451ac:; BB(0x004451ac);
    /* 004451ac: jmp 0x44523c */ goto L_0044523c;
L_004451b1:; BB(0x004451b1);
    /* 004451b1: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004451b4: imul ecx, ecx, 0x78 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x78u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004451b7: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 004451ba: mov esi, dword ptr [edx + ecx + 0x50] */ r_esi = R32((u32)(r_edx+r_ecx+0x50u));
    /* 004451be: sub esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004451c1: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 004451c3: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4451c8u); f_0062fbf0();
    /* 004451c8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004451cb: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004451cd: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 004451d0: imul eax, eax, 0x78 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x78u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004451d3: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 004451d6: mov dword ptr [ecx + eax + 0x58], esi */ W32((u32)(r_ecx+r_eax+0x58u), r_esi);
    /* 004451da: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004451dd: imul edx, edx, 0x78 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x78u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004451e0: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 004451e3: cmp dword ptr [eax + edx + 0x58], 2 */ {  u32 a = R32((u32)(r_eax+r_edx+0x58u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004451e8: je 0x44523c */ if (fZ) goto L_0044523c;
L_004451ea:; BB(0x004451ea);
    /* 004451ea: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004451ed: imul ecx, ecx, 0x78 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x78u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004451f0: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 004451f3: mov eax, dword ptr [edx + ecx + 0x58] */ r_eax = R32((u32)(r_edx+r_ecx+0x58u));
    /* 004451f7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004451f8: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4451fdu); f_0062fbf0();
    /* 004451fd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00445200: mov esi, eax */ r_esi = r_eax;
    /* 00445202: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00445204: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x445209u); f_0062fbf0();
    /* 00445209: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044520c: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0044520e: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00445211: imul ecx, ecx, 0x78 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x78u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00445214: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00445217: mov dword ptr [edx + ecx + 0x60], esi */ W32((u32)(r_edx+r_ecx+0x60u), r_esi);
    /* 0044521b: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0044521e: imul eax, eax, 0x78 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x78u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00445221: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00445224: cmp dword ptr [ecx + eax + 0x60], 2 */ {  u32 a = R32((u32)(r_ecx+r_eax+0x60u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00445229: jge 0x44523c */ if ((fS==fO)) goto L_0044523c;
L_0044522b:; BB(0x0044522b);
    /* 0044522b: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0044522e: imul edx, edx, 0x78 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x78u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00445231: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00445234: mov dword ptr [eax + edx + 0x60], 2 */ W32((u32)(r_eax+r_edx+0x60u), 0x2u);
L_0044523c:; BB(0x0044523c);
    /* 0044523c: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0044523f: imul ecx, ecx, 0x78 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x78u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00445242: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00445245: cmp dword ptr [edx + ecx + 0x58], 2 */ {  u32 a = R32((u32)(r_edx+r_ecx+0x58u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044524a: jne 0x44526e */ if (!fZ) goto L_0044526e;
L_0044524c:; BB(0x0044524c);
    /* 0044524c: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0044524f: imul eax, eax, 0x78 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x78u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00445252: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00445255: mov dword ptr [ecx + eax + 0x60], 3 */ W32((u32)(r_ecx+r_eax+0x60u), 0x3u);
    /* 0044525d: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00445260: imul edx, edx, 0x78 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x78u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00445263: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00445266: mov dword ptr [eax + edx + 0x64], 2 */ W32((u32)(r_eax+r_edx+0x64u), 0x2u);
L_0044526e:; BB(0x0044526e);
    /* 0044526e: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00445271: imul ecx, ecx, 0x78 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x78u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00445274: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00445277: cmp dword ptr [edx + ecx + 0x60], 2 */ {  u32 a = R32((u32)(r_edx+r_ecx+0x60u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044527c: jne 0x4452a9 */ if (!fZ) goto L_004452a9;
L_0044527e:; BB(0x0044527e);
    /* 0044527e: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00445281: imul eax, eax, 0x78 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x78u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00445284: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00445287: cmp dword ptr [ecx + eax + 0x64], 2 */ {  u32 a = R32((u32)(r_ecx+r_eax+0x64u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044528c: jne 0x4452a9 */ if (!fZ) goto L_004452a9;
L_0044528e:; BB(0x0044528e);
    /* 0044528e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00445290: jne 0x4452a9 */ if (!fZ) goto L_004452a9;
L_00445292:; BB(0x00445292);
    /* 00445292: push 0xda */ { u32 v = 0xdau; r_esp -= 4; W32(r_esp, v); }
    /* 00445297: push 0x6b88ec */ { u32 v = 0x6b88ecu; r_esp -= 4; W32(r_esp, v); }
    /* 0044529c: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 004452a1: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4452a6u); f_005e9f20();
    /* 004452a6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004452a9:; BB(0x004452a9);
    /* 004452a9: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 004452b0: jmp 0x4452bb */ goto L_004452bb;
L_004452b2:; BB(0x004452b2);
    /* 004452b2: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004452b5: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004452b8: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
L_004452bb:; BB(0x004452bb);
    /* 004452bb: cmp dword ptr [ebp - 0x1c], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004452bf: jge 0x44550e */ if ((fS==fO)) goto L_0044550e;
L_004452c5:; BB(0x004452c5);
    /* 004452c5: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004452c8: cmp edx, dword ptr [ebp - 0x38] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffc8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004452cb: jne 0x4452cf */ if (!fZ) goto L_004452cf;
L_004452cd:; BB(0x004452cd);
    /* 004452cd: jmp 0x4452b2 */ goto L_004452b2;
L_004452cf:; BB(0x004452cf);
    /* 004452cf: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 004452d6: jmp 0x4452e1 */ goto L_004452e1;
L_004452d8:; BB(0x004452d8);
    /* 004452d8: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 004452db: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004452de: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
L_004452e1:; BB(0x004452e1);
    /* 004452e1: cmp dword ptr [ebp - 0x3c], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004452e5: jge 0x445509 */ if ((fS==fO)) goto L_00445509;
L_004452eb:; BB(0x004452eb);
    /* 004452eb: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004452ee: imul ecx, ecx, 0x78 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x78u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004452f1: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 004452f4: lea eax, [edx + ecx + 4] */ r_eax = (u32)(r_edx+r_ecx+0x4u);
    /* 004452f8: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004452fb: imul ecx, ecx, 0x78 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x78u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004452fe: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00445301: lea ecx, [edx + ecx + 4] */ r_ecx = (u32)(r_edx+r_ecx+0x4u);
    /* 00445305: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00445308: mov esi, dword ptr [ebp - 0x3c] */ r_esi = R32((u32)(r_ebp+0xffffffc4u));
    /* 0044530b: mov eax, dword ptr [eax + edx*8 + 0x4c] */ r_eax = R32((u32)(r_eax+r_edx*8+0x4cu));
    /* 0044530f: cmp eax, dword ptr [ecx + esi*8 + 0x4c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+r_esi*8+0x4cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00445313: jle 0x445504 */ if ((fZ||fS!=fO)) goto L_00445504;
L_00445319:; BB(0x00445319);
    /* 00445319: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0044531c: imul ecx, ecx, 0x78 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x78u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0044531f: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00445322: lea eax, [edx + ecx + 4] */ r_eax = (u32)(r_edx+r_ecx+0x4u);
    /* 00445326: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00445329: cmp dword ptr [eax + ecx*8 + 0x50], 1 */ {  u32 a = R32((u32)(r_eax+r_ecx*8+0x50u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044532e: jne 0x445504 */ if (!fZ) goto L_00445504;
L_00445334:; BB(0x00445334);
    /* 00445334: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00445337: imul edx, edx, 0x78 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x78u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0044533a: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0044533d: lea ecx, [eax + edx + 4] */ r_ecx = (u32)(r_eax+r_edx+0x4u);
    /* 00445341: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00445344: cmp dword ptr [ecx + edx*8 + 0x50], 1 */ {  u32 a = R32((u32)(r_ecx+r_edx*8+0x50u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00445349: jne 0x445504 */ if (!fZ) goto L_00445504;
L_0044534f:; BB(0x0044534f);
    /* 0044534f: cmp dword ptr [ebp - 0x3c], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00445353: jne 0x44535a */ if (!fZ) goto L_0044535a;
L_00445355:; BB(0x00445355);
    /* 00445355: jmp 0x445504 */ goto L_00445504;
L_0044535a:; BB(0x0044535a);
    /* 0044535a: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0044535d: imul eax, eax, 0x78 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x78u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00445360: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00445363: lea edx, [ecx + eax + 4] */ r_edx = (u32)(r_ecx+r_eax+0x4u);
    /* 00445367: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0044536a: imul eax, eax, 0x78 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x78u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0044536d: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00445370: lea eax, [ecx + eax + 4] */ r_eax = (u32)(r_ecx+r_eax+0x4u);
    /* 00445374: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00445377: mov esi, dword ptr [ebp - 0x3c] */ r_esi = R32((u32)(r_ebp+0xffffffc4u));
    /* 0044537a: mov edx, dword ptr [edx + ecx*8 + 0x54] */ r_edx = R32((u32)(r_edx+r_ecx*8+0x54u));
    /* 0044537e: cmp edx, dword ptr [eax + esi*8 + 0x54] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+r_esi*8+0x54u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00445382: jge 0x445411 */ if ((fS==fO)) goto L_00445411;
L_00445388:; BB(0x00445388);
    /* 00445388: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0044538b: imul eax, eax, 0x78 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x78u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0044538e: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00445391: lea edx, [ecx + eax + 4] */ r_edx = (u32)(r_ecx+r_eax+0x4u);
    /* 00445395: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 00445398: cmp dword ptr [edx + eax*8 + 0x58], 1 */ {  u32 a = R32((u32)(r_edx+r_eax*8+0x58u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044539d: jne 0x445411 */ if (!fZ) goto L_00445411;
L_0044539f:; BB(0x0044539f);
    /* 0044539f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004453a2: imul ecx, ecx, 0x78 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x78u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004453a5: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 004453a8: lea eax, [edx + ecx + 4] */ r_eax = (u32)(r_edx+r_ecx+0x4u);
    /* 004453ac: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 004453af: cmp dword ptr [eax + ecx*8 + 0x58], 1 */ {  u32 a = R32((u32)(r_eax+r_ecx*8+0x58u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004453b4: jne 0x445411 */ if (!fZ) goto L_00445411;
L_004453b6:; BB(0x004453b6);
    /* 004453b6: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004453b9: imul edx, edx, 0x78 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x78u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004453bc: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 004453bf: lea ecx, [eax + edx + 4] */ r_ecx = (u32)(r_eax+r_edx+0x4u);
    /* 004453c3: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 004453c6: mov eax, dword ptr [ecx + edx*8 + 0x54] */ r_eax = R32((u32)(r_ecx+r_edx*8+0x54u));
    /* 004453ca: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004453cd: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004453d0: imul ecx, ecx, 0x78 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x78u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004453d3: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 004453d6: lea eax, [edx + ecx + 4] */ r_eax = (u32)(r_edx+r_ecx+0x4u);
    /* 004453da: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004453dd: imul ecx, ecx, 0x78 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x78u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004453e0: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 004453e3: lea ecx, [edx + ecx + 4] */ r_ecx = (u32)(r_edx+r_ecx+0x4u);
    /* 004453e7: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 004453ea: mov esi, dword ptr [ebp - 0x3c] */ r_esi = R32((u32)(r_ebp+0xffffffc4u));
    /* 004453ed: mov eax, dword ptr [eax + esi*8 + 0x54] */ r_eax = R32((u32)(r_eax+r_esi*8+0x54u));
    /* 004453f1: mov dword ptr [ecx + edx*8 + 0x54], eax */ W32((u32)(r_ecx+r_edx*8+0x54u), r_eax);
    /* 004453f5: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004453f8: imul ecx, ecx, 0x78 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x78u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004453fb: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 004453fe: lea eax, [edx + ecx + 4] */ r_eax = (u32)(r_edx+r_ecx+0x4u);
    /* 00445402: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00445405: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00445408: mov dword ptr [eax + ecx*8 + 0x54], edx */ W32((u32)(r_eax+r_ecx*8+0x54u), r_edx);
    /* 0044540c: jmp 0x445504 */ goto L_00445504;
L_00445411:; BB(0x00445411);
    /* 00445411: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00445414: imul eax, eax, 0x78 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x78u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00445417: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0044541a: lea edx, [ecx + eax + 4] */ r_edx = (u32)(r_ecx+r_eax+0x4u);
    /* 0044541e: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00445421: imul eax, eax, 0x78 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x78u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00445424: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00445427: lea eax, [ecx + eax + 4] */ r_eax = (u32)(r_ecx+r_eax+0x4u);
    /* 0044542b: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0044542e: mov esi, dword ptr [ebp - 0x3c] */ r_esi = R32((u32)(r_ebp+0xffffffc4u));
    /* 00445431: mov edx, dword ptr [edx + ecx*8 + 0x54] */ r_edx = R32((u32)(r_edx+r_ecx*8+0x54u));
    /* 00445435: cmp edx, dword ptr [eax + esi*8 + 0x54] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+r_esi*8+0x54u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00445439: jne 0x445504 */ if (!fZ) goto L_00445504;
L_0044543f:; BB(0x0044543f);
    /* 0044543f: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00445442: imul eax, eax, 0x78 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x78u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00445445: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00445448: lea edx, [ecx + eax + 4] */ r_edx = (u32)(r_ecx+r_eax+0x4u);
    /* 0044544c: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0044544f: cmp dword ptr [edx + eax*8 + 0x58], 1 */ {  u32 a = R32((u32)(r_edx+r_eax*8+0x58u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00445454: jne 0x445504 */ if (!fZ) goto L_00445504;
L_0044545a:; BB(0x0044545a);
    /* 0044545a: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0044545d: imul ecx, ecx, 0x78 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x78u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00445460: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00445463: lea eax, [edx + ecx + 4] */ r_eax = (u32)(r_edx+r_ecx+0x4u);
    /* 00445467: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0044546a: cmp dword ptr [eax + ecx*8 + 0x58], 1 */ {  u32 a = R32((u32)(r_eax+r_ecx*8+0x58u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044546f: jne 0x445504 */ if (!fZ) goto L_00445504;
L_00445475:; BB(0x00445475);
    /* 00445475: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00445478: imul edx, edx, 0x78 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x78u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0044547b: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0044547e: lea ecx, [eax + edx + 4] */ r_ecx = (u32)(r_eax+r_edx+0x4u);
    /* 00445482: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00445485: cmp dword ptr [ecx + edx*8 + 0x54], 2 */ {  u32 a = R32((u32)(r_ecx+r_edx*8+0x54u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044548a: jle 0x445504 */ if ((fZ||fS!=fO)) goto L_00445504;
L_0044548c:; BB(0x0044548c);
    /* 0044548c: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0044548f: imul eax, eax, 0x78 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x78u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00445492: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00445495: lea edx, [ecx + eax + 4] */ r_edx = (u32)(r_ecx+r_eax+0x4u);
    /* 00445499: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0044549c: cmp dword ptr [edx + eax*8 + 0x54], 3 */ {  u32 a = R32((u32)(r_edx+r_eax*8+0x54u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004454a1: jne 0x4454d0 */ if (!fZ) goto L_004454d0;
L_004454a3:; BB(0x004454a3);
    /* 004454a3: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004454a6: imul ecx, ecx, 0x78 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x78u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004454a9: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 004454ac: lea eax, [edx + ecx + 4] */ r_eax = (u32)(r_edx+r_ecx+0x4u);
    /* 004454b0: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 004454b3: mov edx, dword ptr [eax + ecx*8 + 0x54] */ r_edx = R32((u32)(r_eax+r_ecx*8+0x54u));
    /* 004454b7: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004454ba: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004454bd: imul eax, eax, 0x78 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x78u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004454c0: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 004454c3: lea eax, [ecx + eax + 4] */ r_eax = (u32)(r_ecx+r_eax+0x4u);
    /* 004454c7: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 004454ca: mov dword ptr [eax + ecx*8 + 0x54], edx */ W32((u32)(r_eax+r_ecx*8+0x54u), r_edx);
    /* 004454ce: jmp 0x445504 */ goto L_00445504;
L_004454d0:; BB(0x004454d0);
    /* 004454d0: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004454d3: imul edx, edx, 0x78 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x78u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004454d6: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 004454d9: lea esi, [eax + edx + 4] */ r_esi = (u32)(r_eax+r_edx+0x4u);
    /* 004454dd: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004454df: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4454e4u); f_0062fbf0();
    /* 004454e4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004454e7: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 004454ea: mov edx, dword ptr [esi + ecx*8 + 0x54] */ r_edx = R32((u32)(r_esi+r_ecx*8+0x54u));
    /* 004454ee: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004454f0: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004454f3: imul eax, eax, 0x78 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x78u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004454f6: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 004454f9: lea eax, [ecx + eax + 4] */ r_eax = (u32)(r_ecx+r_eax+0x4u);
    /* 004454fd: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00445500: mov dword ptr [eax + ecx*8 + 0x54], edx */ W32((u32)(r_eax+r_ecx*8+0x54u), r_edx);
L_00445504:; BB(0x00445504);
    /* 00445504: jmp 0x4452d8 */ goto L_004452d8;
L_00445509:; BB(0x00445509);
    /* 00445509: jmp 0x4452b2 */ goto L_004452b2;
L_0044550e:; BB(0x0044550e);
    /* 0044550e: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00445511: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00445514: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
L_00445517:; BB(0x00445517);
    /* 00445517: jmp 0x444f9e */ goto L_00444f9e;
L_0044551c:; BB(0x0044551c);
    /* 0044551c: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 00445523: jmp 0x44552e */ goto L_0044552e;
L_00445525:; BB(0x00445525);
    /* 00445525: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 00445528: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044552b: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
L_0044552e:; BB(0x0044552e);
    /* 0044552e: cmp dword ptr [ebp - 0x3c], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00445532: jge 0x4455cb */ if ((fS==fO)) goto L_004455cb;
L_00445538:; BB(0x00445538);
    /* 00445538: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 0044553f: jmp 0x44554a */ goto L_0044554a;
L_00445541:; BB(0x00445541);
    /* 00445541: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00445544: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00445547: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
L_0044554a:; BB(0x0044554a);
    /* 0044554a: cmp dword ptr [ebp - 0x1c], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044554e: jge 0x4455c6 */ if ((fS==fO)) goto L_004455c6;
L_00445550:; BB(0x00445550);
    /* 00445550: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00445553: imul edx, edx, 0x78 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x78u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00445556: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00445559: lea ecx, [eax + edx + 4] */ r_ecx = (u32)(r_eax+r_edx+0x4u);
    /* 0044555d: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00445560: imul edx, edx, 0x78 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x78u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00445563: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00445566: lea edx, [eax + edx + 4] */ r_edx = (u32)(r_eax+r_edx+0x4u);
    /* 0044556a: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0044556d: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00445570: mov ecx, dword ptr [ecx + eax*8 + 0x4c] */ r_ecx = R32((u32)(r_ecx+r_eax*8+0x4cu));
    /* 00445574: cmp ecx, dword ptr [edx + esi*8 + 0x50] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+r_esi*8+0x50u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00445578: jne 0x4455c1 */ if (!fZ) goto L_004455c1;
L_0044557a:; BB(0x0044557a);
    /* 0044557a: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0044557d: imul edx, edx, 0x78 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x78u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00445580: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00445583: lea ecx, [eax + edx + 4] */ r_ecx = (u32)(r_eax+r_edx+0x4u);
    /* 00445587: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0044558a: cmp dword ptr [ecx + edx*8 + 0x4c], 1 */ {  u32 a = R32((u32)(r_ecx+r_edx*8+0x4cu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044558f: je 0x4455c1 */ if (fZ) goto L_004455c1;
L_00445591:; BB(0x00445591);
    /* 00445591: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 00445594: imul eax, eax, 0x78 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x78u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00445597: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0044559a: lea edx, [ecx + eax + 4] */ r_edx = (u32)(r_ecx+r_eax+0x4u);
    /* 0044559e: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004455a1: mov dword ptr [edx + eax*8 + 0x4c], 1 */ W32((u32)(r_edx+r_eax*8+0x4cu), 0x1u);
    /* 004455a9: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 004455ac: imul ecx, ecx, 0x78 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x78u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004455af: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 004455b2: lea eax, [edx + ecx + 4] */ r_eax = (u32)(r_edx+r_ecx+0x4u);
    /* 004455b6: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004455b9: mov dword ptr [eax + ecx*8 + 0x50], 1 */ W32((u32)(r_eax+r_ecx*8+0x50u), 0x1u);
L_004455c1:; BB(0x004455c1);
    /* 004455c1: jmp 0x445541 */ goto L_00445541;
L_004455c6:; BB(0x004455c6);
    /* 004455c6: jmp 0x445525 */ goto L_00445525;
L_004455cb:; BB(0x004455cb);
    /* 004455cb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004455cc: mov esp, ebp */ r_esp = r_ebp;
    /* 004455ce: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004455cf: ret  */ FN_RET(0x00444f40); r_esp += 4; return;
}

