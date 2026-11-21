#include "protos.h"

void f_004ec060(void) /* PokerPlayer::func_004ec060 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004ec060);
    /* 004ec060: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ec061: mov ebp, esp */ r_ebp = r_esp;
    /* 004ec063: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004ec064: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004ec065: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004ec068: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ec06b: movsx ecx, word ptr [eax + 0x64] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x64u));
    /* 004ec06f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ec071: jne 0x4ec087 */ if (!fZ) goto L_004ec087;
L_004ec073:; BB(0x004ec073);
    /* 004ec073: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ec076: mov ax, word ptr [edx + 0x368] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+0x368u))) & 0xffffu);
    /* 004ec07d: jmp 0x4ec116 */ goto L_004ec116;
L_004ec087:; BB(0x004ec087);
    /* 004ec087: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ec08a: movsx ecx, word ptr [eax + 0x64] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x64u));
    /* 004ec08e: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ec091: jne 0x4ec0a6 */ if (!fZ) goto L_004ec0a6;
L_004ec093:; BB(0x004ec093);
    /* 004ec093: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ec096: movsx eax, word ptr [edx + 0x368] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x368u));
    /* 004ec09d: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004ec09e: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004ec0a0: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004ec0a2: jmp 0x4ec116 */ goto L_004ec116;
L_004ec0a6:; BB(0x004ec0a6);
    /* 004ec0a6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ec0a9: movsx ecx, word ptr [eax + 0x64] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x64u));
    /* 004ec0ad: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ec0b0: jne 0x4ec0cf */ if (!fZ) goto L_004ec0cf;
L_004ec0b2:; BB(0x004ec0b2);
    /* 004ec0b2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ec0b5: movsx esi, word ptr [edx + 0x368] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+0x368u));
    /* 004ec0bc: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004ec0be: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4ec0c3u); f_0062fbf0();
    /* 004ec0c3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ec0c6: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004ec0c8: mov ax, si */ r_eax = (r_eax & 0xffff0000u) | (((u16)r_esi) & 0xffffu);
    /* 004ec0cb: jmp 0x4ec116 */ goto L_004ec116;
L_004ec0cf:; BB(0x004ec0cf);
    /* 004ec0cf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ec0d2: movsx ecx, word ptr [eax + 0x64] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x64u));
    /* 004ec0d6: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ec0d9: jne 0x4ec0f8 */ if (!fZ) goto L_004ec0f8;
L_004ec0db:; BB(0x004ec0db);
    /* 004ec0db: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ec0de: movsx esi, word ptr [edx + 0x368] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+0x368u));
    /* 004ec0e5: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004ec0e7: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4ec0ecu); f_0062fbf0();
    /* 004ec0ec: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ec0ef: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004ec0f1: mov ax, si */ r_eax = (r_eax & 0xffff0000u) | (((u16)r_esi) & 0xffffu);
    /* 004ec0f4: jmp 0x4ec116 */ goto L_004ec116;
L_004ec0f8:; BB(0x004ec0f8);
    /* 004ec0f8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 004ec0fa: jne 0x4ec113 */ if (!fZ) goto L_004ec113;
L_004ec0fc:; BB(0x004ec0fc);
    /* 004ec0fc: push 0x2925 */ { u32 v = 0x2925u; r_esp -= 4; W32(r_esp, v); }
    /* 004ec101: push 0x6bf384 */ { u32 v = 0x6bf384u; r_esp -= 4; W32(r_esp, v); }
    /* 004ec106: push 0x6b2b64 */ { u32 v = 0x6b2b64u; r_esp -= 4; W32(r_esp, v); }
    /* 004ec10b: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4ec110u); f_005e9f20();
    /* 004ec110: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004ec113:; BB(0x004ec113);
    /* 004ec113: xor ax, ax */ {  u32 a = (u16)r_eax; u32 b = (u16)r_eax; u32 r = (a ^ b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
L_004ec116:; BB(0x004ec116);
    /* 004ec116: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004ec117: mov esp, ebp */ r_esp = r_ebp;
    /* 004ec119: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ec11a: ret  */ FN_RET(0x004ec060); r_esp += 4; return;
}

void f_004ec1a0(void) /* PokerPlayer::func_004ec1a0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004ec1a0);
    /* 004ec1a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ec1a1: mov ebp, esp */ r_ebp = r_esp;
    /* 004ec1a3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ec1a6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004ec1a7: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004ec1aa: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ec1ae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004ec1b0: jge 0x4ec1c9 */ if ((fS==fO)) goto L_004ec1c9;
L_004ec1b2:; BB(0x004ec1b2);
    /* 004ec1b2: push 0x293c */ { u32 v = 0x293cu; r_esp -= 4; W32(r_esp, v); }
    /* 004ec1b7: push 0x6bf384 */ { u32 v = 0x6bf384u; r_esp -= 4; W32(r_esp, v); }
    /* 004ec1bc: push 0x6bf888 */ { u32 v = 0x6bf888u; r_esp -= 4; W32(r_esp, v); }
    /* 004ec1c1: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4ec1c6u); f_005e9f20();
    /* 004ec1c6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004ec1c9:; BB(0x004ec1c9);
    /* 004ec1c9: movsx esi, word ptr [ebp + 8] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ec1cd: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004ec1d3: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x4ec1d8u); f_0047f950();
    /* 004ec1d8: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ec1da: jl 0x4ec1f3 */ if ((fS!=fO)) goto L_004ec1f3;
L_004ec1dc:; BB(0x004ec1dc);
    /* 004ec1dc: push 0x293d */ { u32 v = 0x293du; r_esp -= 4; W32(r_esp, v); }
    /* 004ec1e1: push 0x6bf384 */ { u32 v = 0x6bf384u; r_esp -= 4; W32(r_esp, v); }
    /* 004ec1e6: push 0x6bf858 */ { u32 v = 0x6bf858u; r_esp -= 4; W32(r_esp, v); }
    /* 004ec1eb: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4ec1f0u); f_005e9f20();
    /* 004ec1f0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004ec1f3:; BB(0x004ec1f3);
    /* 004ec1f3: mov word ptr [ebp - 4], 2 */ W16((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 004ec1f9: jmp 0x4ec207 */ goto L_004ec207;
L_004ec1fb:; BB(0x004ec1fb);
    /* 004ec1fb: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 004ec1ff: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004ec203: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_004ec207:; BB(0x004ec207);
    /* 004ec207: movsx esi, word ptr [ebp - 4] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004ec20b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004ec211: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x4ec216u); f_0047f950();
    /* 004ec216: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ec218: jg 0x4ec283 */ if ((!fZ&&fS==fO)) goto L_004ec283;
L_004ec21a:; BB(0x004ec21a);
    /* 004ec21a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004ec21d: mov edx, dword ptr [ecx + 0x428] */ r_edx = R32((u32)(r_ecx+0x428u));
    /* 004ec223: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ec227: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ec22a: lea ecx, [edx + eax + 0x700] */ r_ecx = (u32)(r_edx+r_eax+0x700u);
    /* 004ec231: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004ec235: mov word ptr [ecx + edx*2 - 4], 0 */ W16((u32)(r_ecx+r_edx*2+0xfffffffcu), 0x0u);
    /* 004ec23c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004ec23f: mov ecx, dword ptr [eax + 0x428] */ r_ecx = R32((u32)(r_eax+0x428u));
    /* 004ec245: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ec249: imul edx, edx, 0xe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xeu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ec24c: lea eax, [ecx + edx + 0x770] */ r_eax = (u32)(r_ecx+r_edx+0x770u);
    /* 004ec253: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004ec257: mov word ptr [eax + ecx*2 - 4], 0 */ W16((u32)(r_eax+r_ecx*2+0xfffffffcu), 0x0u);
    /* 004ec25e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004ec261: mov eax, dword ptr [edx + 0x428] */ r_eax = R32((u32)(r_edx+0x428u));
    /* 004ec267: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ec26b: imul ecx, ecx, 7 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x7u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ec26e: lea edx, [eax + ecx + 0x7e0] */ r_edx = (u32)(r_eax+r_ecx+0x7e0u);
    /* 004ec275: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004ec279: mov byte ptr [edx + eax - 2], 0 */ W8((u32)(r_edx+r_eax+0xfffffffeu), 0x0u);
    /* 004ec27e: jmp 0x4ec1fb */ goto L_004ec1fb;
L_004ec283:; BB(0x004ec283);
    /* 004ec283: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004ec284: mov esp, ebp */ r_esp = r_ebp;
    /* 004ec286: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ec287: ret 4 */ FN_RET(0x004ec1a0); r_esp += 8; return;
}

void f_004ec290(void) /* PokerPlayer::func_004ec290 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004ec290);
    /* 004ec290: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ec291: mov ebp, esp */ r_ebp = r_esp;
    /* 004ec293: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004ec294: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004ec295: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004ec298: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ec29c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004ec29e: jge 0x4ec2b7 */ if ((fS==fO)) goto L_004ec2b7;
L_004ec2a0:; BB(0x004ec2a0);
    /* 004ec2a0: push 0x294b */ { u32 v = 0x294bu; r_esp -= 4; W32(r_esp, v); }
    /* 004ec2a5: push 0x6bf384 */ { u32 v = 0x6bf384u; r_esp -= 4; W32(r_esp, v); }
    /* 004ec2aa: push 0x6bf888 */ { u32 v = 0x6bf888u; r_esp -= 4; W32(r_esp, v); }
    /* 004ec2af: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4ec2b4u); f_005e9f20();
    /* 004ec2b4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004ec2b7:; BB(0x004ec2b7);
    /* 004ec2b7: movsx esi, word ptr [ebp + 8] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ec2bb: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004ec2c1: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x4ec2c6u); f_0047f950();
    /* 004ec2c6: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ec2c8: jl 0x4ec2e1 */ if ((fS!=fO)) goto L_004ec2e1;
L_004ec2ca:; BB(0x004ec2ca);
    /* 004ec2ca: push 0x294c */ { u32 v = 0x294cu; r_esp -= 4; W32(r_esp, v); }
    /* 004ec2cf: push 0x6bf384 */ { u32 v = 0x6bf384u; r_esp -= 4; W32(r_esp, v); }
    /* 004ec2d4: push 0x6bf858 */ { u32 v = 0x6bf858u; r_esp -= 4; W32(r_esp, v); }
    /* 004ec2d9: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4ec2deu); f_005e9f20();
    /* 004ec2de: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004ec2e1:; BB(0x004ec2e1);
    /* 004ec2e1: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ec2e5: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ec2e8: jge 0x4ec301 */ if ((fS==fO)) goto L_004ec301;
L_004ec2ea:; BB(0x004ec2ea);
    /* 004ec2ea: push 0x294d */ { u32 v = 0x294du; r_esp -= 4; W32(r_esp, v); }
    /* 004ec2ef: push 0x6bf384 */ { u32 v = 0x6bf384u; r_esp -= 4; W32(r_esp, v); }
    /* 004ec2f4: push 0x6bf778 */ { u32 v = 0x6bf778u; r_esp -= 4; W32(r_esp, v); }
    /* 004ec2f9: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4ec2feu); f_005e9f20();
    /* 004ec2fe: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004ec301:; BB(0x004ec301);
    /* 004ec301: movsx esi, word ptr [ebp + 0xc] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ec305: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004ec30b: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x4ec310u); f_0047f950();
    /* 004ec310: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ec312: jle 0x4ec32b */ if ((fZ||fS!=fO)) goto L_004ec32b;
L_004ec314:; BB(0x004ec314);
    /* 004ec314: push 0x294e */ { u32 v = 0x294eu; r_esp -= 4; W32(r_esp, v); }
    /* 004ec319: push 0x6bf384 */ { u32 v = 0x6bf384u; r_esp -= 4; W32(r_esp, v); }
    /* 004ec31e: push 0x6bf740 */ { u32 v = 0x6bf740u; r_esp -= 4; W32(r_esp, v); }
    /* 004ec323: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4ec328u); f_005e9f20();
    /* 004ec328: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004ec32b:; BB(0x004ec32b);
    /* 004ec32b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ec32e: mov ecx, dword ptr [eax + 0x428] */ r_ecx = R32((u32)(r_eax+0x428u));
    /* 004ec334: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ec338: imul edx, edx, 0xe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xeu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ec33b: lea eax, [ecx + edx + 0x700] */ r_eax = (u32)(r_ecx+r_edx+0x700u);
    /* 004ec342: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ec346: mov dx, word ptr [eax + ecx*2 - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_eax+r_ecx*2+0xfffffffcu))) & 0xffffu);
    /* 004ec34b: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004ec34f: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ec353: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ec357: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ec35a: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ec35d: mov esi, dword ptr [esi + 0x428] */ r_esi = R32((u32)(r_esi+0x428u));
    /* 004ec363: lea ecx, [esi + ecx + 0x700] */ r_ecx = (u32)(r_esi+r_ecx+0x700u);
    /* 004ec36a: mov word ptr [ecx + eax*2 - 4], dx */ W16((u32)(r_ecx+r_eax*2+0xfffffffcu), (u16)r_edx);
    /* 004ec36f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ec372: mov eax, dword ptr [edx + 0x428] */ r_eax = R32((u32)(r_edx+0x428u));
    /* 004ec378: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ec37c: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ec37f: lea edx, [eax + ecx + 0x700] */ r_edx = (u32)(r_eax+r_ecx+0x700u);
    /* 004ec386: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ec38a: movzx ecx, word ptr [edx + eax*2 - 4] */ r_ecx = (u32)R16((u32)(r_edx+r_eax*2+0xfffffffcu));
    /* 004ec38f: cmp ecx, 0x3000 */ {  u32 a = r_ecx; u32 b = 0x3000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ec395: jne 0x4ec3db */ if (!fZ) goto L_004ec3db;
L_004ec397:; BB(0x004ec397);
    /* 004ec397: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ec39a: mov eax, dword ptr [edx + 0x428] */ r_eax = R32((u32)(r_edx+0x428u));
    /* 004ec3a0: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ec3a4: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ec3a7: lea edx, [eax + ecx + 0x700] */ r_edx = (u32)(r_eax+r_ecx+0x700u);
    /* 004ec3ae: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ec3b2: mov cx, word ptr [edx + eax*2 - 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_edx+r_eax*2+0xfffffffcu))) & 0xffffu);
    /* 004ec3b7: sub cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004ec3bb: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ec3bf: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ec3c3: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ec3c6: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ec3c9: mov esi, dword ptr [esi + 0x428] */ r_esi = R32((u32)(r_esi+0x428u));
    /* 004ec3cf: lea eax, [esi + eax + 0x700] */ r_eax = (u32)(r_esi+r_eax+0x700u);
    /* 004ec3d6: mov word ptr [eax + edx*2 - 4], cx */ W16((u32)(r_eax+r_edx*2+0xfffffffcu), (u16)r_ecx);
L_004ec3db:; BB(0x004ec3db);
    /* 004ec3db: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ec3df: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ec3e2: jle 0x4ec497 */ if ((fZ||fS!=fO)) goto L_004ec497;
L_004ec3e8:; BB(0x004ec3e8);
    /* 004ec3e8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ec3eb: mov eax, dword ptr [edx + 0x428] */ r_eax = R32((u32)(r_edx+0x428u));
    /* 004ec3f1: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ec3f5: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ec3f8: lea edx, [eax + ecx + 0x700] */ r_edx = (u32)(r_eax+r_ecx+0x700u);
    /* 004ec3ff: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ec403: mov cx, word ptr [edx + eax*2 - 6] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_edx+r_eax*2+0xfffffffau))) & 0xffffu);
    /* 004ec408: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004ec40c: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ec410: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ec414: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ec417: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ec41a: mov esi, dword ptr [esi + 0x428] */ r_esi = R32((u32)(r_esi+0x428u));
    /* 004ec420: lea eax, [esi + eax + 0x700] */ r_eax = (u32)(r_esi+r_eax+0x700u);
    /* 004ec427: mov word ptr [eax + edx*2 - 6], cx */ W16((u32)(r_eax+r_edx*2+0xfffffffau), (u16)r_ecx);
    /* 004ec42c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ec42f: mov edx, dword ptr [ecx + 0x428] */ r_edx = R32((u32)(r_ecx+0x428u));
    /* 004ec435: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ec439: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ec43c: lea ecx, [edx + eax + 0x700] */ r_ecx = (u32)(r_edx+r_eax+0x700u);
    /* 004ec443: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ec447: movzx eax, word ptr [ecx + edx*2 - 6] */ r_eax = (u32)R16((u32)(r_ecx+r_edx*2+0xfffffffau));
    /* 004ec44c: cmp eax, 0x3000 */ {  u32 a = r_eax; u32 b = 0x3000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ec451: jne 0x4ec497 */ if (!fZ) goto L_004ec497;
L_004ec453:; BB(0x004ec453);
    /* 004ec453: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ec456: mov edx, dword ptr [ecx + 0x428] */ r_edx = R32((u32)(r_ecx+0x428u));
    /* 004ec45c: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ec460: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ec463: lea ecx, [edx + eax + 0x700] */ r_ecx = (u32)(r_edx+r_eax+0x700u);
    /* 004ec46a: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ec46e: mov ax, word ptr [ecx + edx*2 - 6] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ecx+r_edx*2+0xfffffffau))) & 0xffffu);
    /* 004ec473: sub ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004ec477: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ec47b: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ec47f: imul edx, edx, 0xe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xeu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ec482: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ec485: mov esi, dword ptr [esi + 0x428] */ r_esi = R32((u32)(r_esi+0x428u));
    /* 004ec48b: lea edx, [esi + edx + 0x700] */ r_edx = (u32)(r_esi+r_edx+0x700u);
    /* 004ec492: mov word ptr [edx + ecx*2 - 6], ax */ W16((u32)(r_edx+r_ecx*2+0xfffffffau), (u16)r_eax);
L_004ec497:; BB(0x004ec497);
    /* 004ec497: movsx esi, word ptr [ebp + 0xc] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ec49b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004ec4a1: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x4ec4a6u); f_0047f950();
    /* 004ec4a6: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ec4a8: jge 0x4ec55e */ if ((fS==fO)) goto L_004ec55e;
L_004ec4ae:; BB(0x004ec4ae);
    /* 004ec4ae: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ec4b1: mov ecx, dword ptr [eax + 0x428] */ r_ecx = R32((u32)(r_eax+0x428u));
    /* 004ec4b7: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ec4bb: imul edx, edx, 0xe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xeu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ec4be: lea eax, [ecx + edx + 0x700] */ r_eax = (u32)(r_ecx+r_edx+0x700u);
    /* 004ec4c5: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ec4c9: mov dx, word ptr [eax + ecx*2 - 2] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_eax+r_ecx*2+0xfffffffeu))) & 0xffffu);
    /* 004ec4ce: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004ec4d2: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ec4d6: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ec4da: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ec4dd: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ec4e0: mov esi, dword ptr [esi + 0x428] */ r_esi = R32((u32)(r_esi+0x428u));
    /* 004ec4e6: lea ecx, [esi + ecx + 0x700] */ r_ecx = (u32)(r_esi+r_ecx+0x700u);
    /* 004ec4ed: mov word ptr [ecx + eax*2 - 2], dx */ W16((u32)(r_ecx+r_eax*2+0xfffffffeu), (u16)r_edx);
    /* 004ec4f2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ec4f5: mov eax, dword ptr [edx + 0x428] */ r_eax = R32((u32)(r_edx+0x428u));
    /* 004ec4fb: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ec4ff: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ec502: lea edx, [eax + ecx + 0x700] */ r_edx = (u32)(r_eax+r_ecx+0x700u);
    /* 004ec509: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ec50d: movzx ecx, word ptr [edx + eax*2 - 2] */ r_ecx = (u32)R16((u32)(r_edx+r_eax*2+0xfffffffeu));
    /* 004ec512: cmp ecx, 0x3000 */ {  u32 a = r_ecx; u32 b = 0x3000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ec518: jne 0x4ec55e */ if (!fZ) goto L_004ec55e;
L_004ec51a:; BB(0x004ec51a);
    /* 004ec51a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ec51d: mov eax, dword ptr [edx + 0x428] */ r_eax = R32((u32)(r_edx+0x428u));
    /* 004ec523: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ec527: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ec52a: lea edx, [eax + ecx + 0x700] */ r_edx = (u32)(r_eax+r_ecx+0x700u);
    /* 004ec531: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ec535: mov cx, word ptr [edx + eax*2 - 2] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_edx+r_eax*2+0xfffffffeu))) & 0xffffu);
    /* 004ec53a: sub cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004ec53e: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ec542: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ec546: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ec549: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ec54c: mov esi, dword ptr [esi + 0x428] */ r_esi = R32((u32)(r_esi+0x428u));
    /* 004ec552: lea eax, [esi + eax + 0x700] */ r_eax = (u32)(r_esi+r_eax+0x700u);
    /* 004ec559: mov word ptr [eax + edx*2 - 2], cx */ W16((u32)(r_eax+r_edx*2+0xfffffffeu), (u16)r_ecx);
L_004ec55e:; BB(0x004ec55e);
    /* 004ec55e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004ec55f: mov esp, ebp */ r_esp = r_ebp;
    /* 004ec561: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ec562: ret 8 */ FN_RET(0x004ec290); r_esp += 12; return;
}

void f_004ec570(void) /* PokerPlayer::func_004ec570 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004ec570);
    /* 004ec570: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ec571: mov ebp, esp */ r_ebp = r_esp;
    /* 004ec573: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004ec574: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004ec575: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004ec578: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ec57c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004ec57e: jge 0x4ec597 */ if ((fS==fO)) goto L_004ec597;
L_004ec580:; BB(0x004ec580);
    /* 004ec580: push 0x296a */ { u32 v = 0x296au; r_esp -= 4; W32(r_esp, v); }
    /* 004ec585: push 0x6bf384 */ { u32 v = 0x6bf384u; r_esp -= 4; W32(r_esp, v); }
    /* 004ec58a: push 0x6bf888 */ { u32 v = 0x6bf888u; r_esp -= 4; W32(r_esp, v); }
    /* 004ec58f: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4ec594u); f_005e9f20();
    /* 004ec594: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004ec597:; BB(0x004ec597);
    /* 004ec597: movsx esi, word ptr [ebp + 8] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ec59b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004ec5a1: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x4ec5a6u); f_0047f950();
    /* 004ec5a6: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ec5a8: jl 0x4ec5c1 */ if ((fS!=fO)) goto L_004ec5c1;
L_004ec5aa:; BB(0x004ec5aa);
    /* 004ec5aa: push 0x296b */ { u32 v = 0x296bu; r_esp -= 4; W32(r_esp, v); }
    /* 004ec5af: push 0x6bf384 */ { u32 v = 0x6bf384u; r_esp -= 4; W32(r_esp, v); }
    /* 004ec5b4: push 0x6bf858 */ { u32 v = 0x6bf858u; r_esp -= 4; W32(r_esp, v); }
    /* 004ec5b9: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4ec5beu); f_005e9f20();
    /* 004ec5be: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004ec5c1:; BB(0x004ec5c1);
    /* 004ec5c1: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ec5c5: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ec5c8: jge 0x4ec5e1 */ if ((fS==fO)) goto L_004ec5e1;
L_004ec5ca:; BB(0x004ec5ca);
    /* 004ec5ca: push 0x296c */ { u32 v = 0x296cu; r_esp -= 4; W32(r_esp, v); }
    /* 004ec5cf: push 0x6bf384 */ { u32 v = 0x6bf384u; r_esp -= 4; W32(r_esp, v); }
    /* 004ec5d4: push 0x6bf778 */ { u32 v = 0x6bf778u; r_esp -= 4; W32(r_esp, v); }
    /* 004ec5d9: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4ec5deu); f_005e9f20();
    /* 004ec5de: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004ec5e1:; BB(0x004ec5e1);
    /* 004ec5e1: movsx esi, word ptr [ebp + 0xc] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ec5e5: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004ec5eb: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x4ec5f0u); f_0047f950();
    /* 004ec5f0: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ec5f2: jle 0x4ec60b */ if ((fZ||fS!=fO)) goto L_004ec60b;
L_004ec5f4:; BB(0x004ec5f4);
    /* 004ec5f4: push 0x296d */ { u32 v = 0x296du; r_esp -= 4; W32(r_esp, v); }
    /* 004ec5f9: push 0x6bf384 */ { u32 v = 0x6bf384u; r_esp -= 4; W32(r_esp, v); }
    /* 004ec5fe: push 0x6bf740 */ { u32 v = 0x6bf740u; r_esp -= 4; W32(r_esp, v); }
    /* 004ec603: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4ec608u); f_005e9f20();
    /* 004ec608: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004ec60b:; BB(0x004ec60b);
    /* 004ec60b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ec60e: mov ecx, dword ptr [eax + 0x428] */ r_ecx = R32((u32)(r_eax+0x428u));
    /* 004ec614: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ec618: imul edx, edx, 0xe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xeu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ec61b: lea eax, [ecx + edx + 0x770] */ r_eax = (u32)(r_ecx+r_edx+0x770u);
    /* 004ec622: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ec626: mov dx, word ptr [eax + ecx*2 - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_eax+r_ecx*2+0xfffffffcu))) & 0xffffu);
    /* 004ec62b: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004ec62f: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ec633: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ec637: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ec63a: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ec63d: mov esi, dword ptr [esi + 0x428] */ r_esi = R32((u32)(r_esi+0x428u));
    /* 004ec643: lea ecx, [esi + ecx + 0x770] */ r_ecx = (u32)(r_esi+r_ecx+0x770u);
    /* 004ec64a: mov word ptr [ecx + eax*2 - 4], dx */ W16((u32)(r_ecx+r_eax*2+0xfffffffcu), (u16)r_edx);
    /* 004ec64f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ec652: mov eax, dword ptr [edx + 0x428] */ r_eax = R32((u32)(r_edx+0x428u));
    /* 004ec658: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ec65c: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ec65f: lea edx, [eax + ecx + 0x770] */ r_edx = (u32)(r_eax+r_ecx+0x770u);
    /* 004ec666: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ec66a: movzx ecx, word ptr [edx + eax*2 - 4] */ r_ecx = (u32)R16((u32)(r_edx+r_eax*2+0xfffffffcu));
    /* 004ec66f: cmp ecx, 0x3000 */ {  u32 a = r_ecx; u32 b = 0x3000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ec675: jne 0x4ec6bb */ if (!fZ) goto L_004ec6bb;
L_004ec677:; BB(0x004ec677);
    /* 004ec677: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ec67a: mov eax, dword ptr [edx + 0x428] */ r_eax = R32((u32)(r_edx+0x428u));
    /* 004ec680: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ec684: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ec687: lea edx, [eax + ecx + 0x770] */ r_edx = (u32)(r_eax+r_ecx+0x770u);
    /* 004ec68e: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ec692: mov cx, word ptr [edx + eax*2 - 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_edx+r_eax*2+0xfffffffcu))) & 0xffffu);
    /* 004ec697: sub cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004ec69b: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ec69f: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ec6a3: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ec6a6: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ec6a9: mov esi, dword ptr [esi + 0x428] */ r_esi = R32((u32)(r_esi+0x428u));
    /* 004ec6af: lea eax, [esi + eax + 0x770] */ r_eax = (u32)(r_esi+r_eax+0x770u);
    /* 004ec6b6: mov word ptr [eax + edx*2 - 4], cx */ W16((u32)(r_eax+r_edx*2+0xfffffffcu), (u16)r_ecx);
L_004ec6bb:; BB(0x004ec6bb);
    /* 004ec6bb: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ec6bf: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ec6c2: jle 0x4ec777 */ if ((fZ||fS!=fO)) goto L_004ec777;
L_004ec6c8:; BB(0x004ec6c8);
    /* 004ec6c8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ec6cb: mov eax, dword ptr [edx + 0x428] */ r_eax = R32((u32)(r_edx+0x428u));
    /* 004ec6d1: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ec6d5: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ec6d8: lea edx, [eax + ecx + 0x770] */ r_edx = (u32)(r_eax+r_ecx+0x770u);
    /* 004ec6df: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ec6e3: mov cx, word ptr [edx + eax*2 - 6] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_edx+r_eax*2+0xfffffffau))) & 0xffffu);
    /* 004ec6e8: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004ec6ec: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ec6f0: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ec6f4: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ec6f7: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ec6fa: mov esi, dword ptr [esi + 0x428] */ r_esi = R32((u32)(r_esi+0x428u));
    /* 004ec700: lea eax, [esi + eax + 0x770] */ r_eax = (u32)(r_esi+r_eax+0x770u);
    /* 004ec707: mov word ptr [eax + edx*2 - 6], cx */ W16((u32)(r_eax+r_edx*2+0xfffffffau), (u16)r_ecx);
    /* 004ec70c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ec70f: mov edx, dword ptr [ecx + 0x428] */ r_edx = R32((u32)(r_ecx+0x428u));
    /* 004ec715: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ec719: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ec71c: lea ecx, [edx + eax + 0x770] */ r_ecx = (u32)(r_edx+r_eax+0x770u);
    /* 004ec723: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ec727: movzx eax, word ptr [ecx + edx*2 - 6] */ r_eax = (u32)R16((u32)(r_ecx+r_edx*2+0xfffffffau));
    /* 004ec72c: cmp eax, 0x3000 */ {  u32 a = r_eax; u32 b = 0x3000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ec731: jne 0x4ec777 */ if (!fZ) goto L_004ec777;
L_004ec733:; BB(0x004ec733);
    /* 004ec733: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ec736: mov edx, dword ptr [ecx + 0x428] */ r_edx = R32((u32)(r_ecx+0x428u));
    /* 004ec73c: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ec740: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ec743: lea ecx, [edx + eax + 0x770] */ r_ecx = (u32)(r_edx+r_eax+0x770u);
    /* 004ec74a: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ec74e: mov ax, word ptr [ecx + edx*2 - 6] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ecx+r_edx*2+0xfffffffau))) & 0xffffu);
    /* 004ec753: sub ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004ec757: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ec75b: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ec75f: imul edx, edx, 0xe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xeu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ec762: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ec765: mov esi, dword ptr [esi + 0x428] */ r_esi = R32((u32)(r_esi+0x428u));
    /* 004ec76b: lea edx, [esi + edx + 0x770] */ r_edx = (u32)(r_esi+r_edx+0x770u);
    /* 004ec772: mov word ptr [edx + ecx*2 - 6], ax */ W16((u32)(r_edx+r_ecx*2+0xfffffffau), (u16)r_eax);
L_004ec777:; BB(0x004ec777);
    /* 004ec777: movsx esi, word ptr [ebp + 0xc] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ec77b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004ec781: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x4ec786u); f_0047f950();
    /* 004ec786: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ec788: jge 0x4ec83e */ if ((fS==fO)) goto L_004ec83e;
L_004ec78e:; BB(0x004ec78e);
    /* 004ec78e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ec791: mov ecx, dword ptr [eax + 0x428] */ r_ecx = R32((u32)(r_eax+0x428u));
    /* 004ec797: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ec79b: imul edx, edx, 0xe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xeu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ec79e: lea eax, [ecx + edx + 0x770] */ r_eax = (u32)(r_ecx+r_edx+0x770u);
    /* 004ec7a5: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ec7a9: mov dx, word ptr [eax + ecx*2 - 2] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_eax+r_ecx*2+0xfffffffeu))) & 0xffffu);
    /* 004ec7ae: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004ec7b2: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ec7b6: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ec7ba: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ec7bd: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ec7c0: mov esi, dword ptr [esi + 0x428] */ r_esi = R32((u32)(r_esi+0x428u));
    /* 004ec7c6: lea ecx, [esi + ecx + 0x770] */ r_ecx = (u32)(r_esi+r_ecx+0x770u);
    /* 004ec7cd: mov word ptr [ecx + eax*2 - 2], dx */ W16((u32)(r_ecx+r_eax*2+0xfffffffeu), (u16)r_edx);
    /* 004ec7d2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ec7d5: mov eax, dword ptr [edx + 0x428] */ r_eax = R32((u32)(r_edx+0x428u));
    /* 004ec7db: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ec7df: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ec7e2: lea edx, [eax + ecx + 0x770] */ r_edx = (u32)(r_eax+r_ecx+0x770u);
    /* 004ec7e9: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ec7ed: movzx ecx, word ptr [edx + eax*2 - 2] */ r_ecx = (u32)R16((u32)(r_edx+r_eax*2+0xfffffffeu));
    /* 004ec7f2: cmp ecx, 0x3000 */ {  u32 a = r_ecx; u32 b = 0x3000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ec7f8: jne 0x4ec83e */ if (!fZ) goto L_004ec83e;
L_004ec7fa:; BB(0x004ec7fa);
    /* 004ec7fa: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ec7fd: mov eax, dword ptr [edx + 0x428] */ r_eax = R32((u32)(r_edx+0x428u));
    /* 004ec803: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ec807: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ec80a: lea edx, [eax + ecx + 0x770] */ r_edx = (u32)(r_eax+r_ecx+0x770u);
    /* 004ec811: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ec815: mov cx, word ptr [edx + eax*2 - 2] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_edx+r_eax*2+0xfffffffeu))) & 0xffffu);
    /* 004ec81a: sub cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004ec81e: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ec822: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ec826: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ec829: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ec82c: mov esi, dword ptr [esi + 0x428] */ r_esi = R32((u32)(r_esi+0x428u));
    /* 004ec832: lea eax, [esi + eax + 0x770] */ r_eax = (u32)(r_esi+r_eax+0x770u);
    /* 004ec839: mov word ptr [eax + edx*2 - 2], cx */ W16((u32)(r_eax+r_edx*2+0xfffffffeu), (u16)r_ecx);
L_004ec83e:; BB(0x004ec83e);
    /* 004ec83e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004ec83f: mov esp, ebp */ r_esp = r_ebp;
    /* 004ec841: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ec842: ret 8 */ FN_RET(0x004ec570); r_esp += 12; return;
}

void f_004ec850(void) /* PokerPlayer::func_004ec850 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004ec850);
    /* 004ec850: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ec851: mov ebp, esp */ r_ebp = r_esp;
    /* 004ec853: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004ec854: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004ec855: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004ec858: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ec85c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004ec85e: jge 0x4ec877 */ if ((fS==fO)) goto L_004ec877;
L_004ec860:; BB(0x004ec860);
    /* 004ec860: push 0x2989 */ { u32 v = 0x2989u; r_esp -= 4; W32(r_esp, v); }
    /* 004ec865: push 0x6bf384 */ { u32 v = 0x6bf384u; r_esp -= 4; W32(r_esp, v); }
    /* 004ec86a: push 0x6bf888 */ { u32 v = 0x6bf888u; r_esp -= 4; W32(r_esp, v); }
    /* 004ec86f: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4ec874u); f_005e9f20();
    /* 004ec874: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004ec877:; BB(0x004ec877);
    /* 004ec877: movsx esi, word ptr [ebp + 8] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ec87b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004ec881: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x4ec886u); f_0047f950();
    /* 004ec886: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ec888: jl 0x4ec8a1 */ if ((fS!=fO)) goto L_004ec8a1;
L_004ec88a:; BB(0x004ec88a);
    /* 004ec88a: push 0x298a */ { u32 v = 0x298au; r_esp -= 4; W32(r_esp, v); }
    /* 004ec88f: push 0x6bf384 */ { u32 v = 0x6bf384u; r_esp -= 4; W32(r_esp, v); }
    /* 004ec894: push 0x6bf858 */ { u32 v = 0x6bf858u; r_esp -= 4; W32(r_esp, v); }
    /* 004ec899: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4ec89eu); f_005e9f20();
    /* 004ec89e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004ec8a1:; BB(0x004ec8a1);
    /* 004ec8a1: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ec8a5: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ec8a8: jge 0x4ec8c1 */ if ((fS==fO)) goto L_004ec8c1;
L_004ec8aa:; BB(0x004ec8aa);
    /* 004ec8aa: push 0x298b */ { u32 v = 0x298bu; r_esp -= 4; W32(r_esp, v); }
    /* 004ec8af: push 0x6bf384 */ { u32 v = 0x6bf384u; r_esp -= 4; W32(r_esp, v); }
    /* 004ec8b4: push 0x6bf778 */ { u32 v = 0x6bf778u; r_esp -= 4; W32(r_esp, v); }
    /* 004ec8b9: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4ec8beu); f_005e9f20();
    /* 004ec8be: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004ec8c1:; BB(0x004ec8c1);
    /* 004ec8c1: movsx esi, word ptr [ebp + 0xc] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ec8c5: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004ec8cb: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x4ec8d0u); f_0047f950();
    /* 004ec8d0: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ec8d2: jle 0x4ec8eb */ if ((fZ||fS!=fO)) goto L_004ec8eb;
L_004ec8d4:; BB(0x004ec8d4);
    /* 004ec8d4: push 0x298c */ { u32 v = 0x298cu; r_esp -= 4; W32(r_esp, v); }
    /* 004ec8d9: push 0x6bf384 */ { u32 v = 0x6bf384u; r_esp -= 4; W32(r_esp, v); }
    /* 004ec8de: push 0x6bf740 */ { u32 v = 0x6bf740u; r_esp -= 4; W32(r_esp, v); }
    /* 004ec8e3: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4ec8e8u); f_005e9f20();
    /* 004ec8e8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004ec8eb:; BB(0x004ec8eb);
    /* 004ec8eb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ec8ee: mov ecx, dword ptr [eax + 0x428] */ r_ecx = R32((u32)(r_eax+0x428u));
    /* 004ec8f4: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ec8f8: imul edx, edx, 7 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x7u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ec8fb: lea eax, [ecx + edx + 0x7e0] */ r_eax = (u32)(r_ecx+r_edx+0x7e0u);
    /* 004ec902: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ec906: mov dl, byte ptr [eax + ecx - 2] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+r_ecx+0xfffffffeu))) & 0xffu);
    /* 004ec90a: add dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004ec90d: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ec911: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ec915: imul ecx, ecx, 7 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x7u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ec918: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ec91b: mov esi, dword ptr [esi + 0x428] */ r_esi = R32((u32)(r_esi+0x428u));
    /* 004ec921: lea ecx, [esi + ecx + 0x7e0] */ r_ecx = (u32)(r_esi+r_ecx+0x7e0u);
    /* 004ec928: mov byte ptr [ecx + eax - 2], dl */ W8((u32)(r_ecx+r_eax+0xfffffffeu), (u8)r_edx);
    /* 004ec92c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ec92f: mov eax, dword ptr [edx + 0x428] */ r_eax = R32((u32)(r_edx+0x428u));
    /* 004ec935: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ec939: imul ecx, ecx, 7 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x7u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ec93c: lea edx, [eax + ecx + 0x7e0] */ r_edx = (u32)(r_eax+r_ecx+0x7e0u);
    /* 004ec943: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ec947: movzx ecx, byte ptr [edx + eax - 2] */ r_ecx = (u32)R8((u32)(r_edx+r_eax+0xfffffffeu));
    /* 004ec94c: cmp ecx, 0x50 */ {  u32 a = r_ecx; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ec94f: jne 0x4eca1a */ if (!fZ) goto L_004eca1a;
L_004ec955:; BB(0x004ec955);
    /* 004ec955: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ec958: mov eax, dword ptr [edx + 0x428] */ r_eax = R32((u32)(r_edx+0x428u));
    /* 004ec95e: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ec962: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ec965: lea edx, [eax + ecx + 0x700] */ r_edx = (u32)(r_eax+r_ecx+0x700u);
    /* 004ec96c: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ec970: movzx ecx, word ptr [edx + eax*2 - 4] */ r_ecx = (u32)R16((u32)(r_edx+r_eax*2+0xfffffffcu));
    /* 004ec975: shr ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 004ec977: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ec97b: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ec97f: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ec982: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ec985: mov esi, dword ptr [esi + 0x428] */ r_esi = R32((u32)(r_esi+0x428u));
    /* 004ec98b: lea eax, [esi + eax + 0x700] */ r_eax = (u32)(r_esi+r_eax+0x700u);
    /* 004ec992: mov word ptr [eax + edx*2 - 4], cx */ W16((u32)(r_eax+r_edx*2+0xfffffffcu), (u16)r_ecx);
    /* 004ec997: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ec99a: mov edx, dword ptr [ecx + 0x428] */ r_edx = R32((u32)(r_ecx+0x428u));
    /* 004ec9a0: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ec9a4: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ec9a7: lea ecx, [edx + eax + 0x770] */ r_ecx = (u32)(r_edx+r_eax+0x770u);
    /* 004ec9ae: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ec9b2: movzx eax, word ptr [ecx + edx*2 - 4] */ r_eax = (u32)R16((u32)(r_ecx+r_edx*2+0xfffffffcu));
    /* 004ec9b7: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 004ec9b9: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ec9bd: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ec9c1: imul edx, edx, 0xe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xeu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ec9c4: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ec9c7: mov esi, dword ptr [esi + 0x428] */ r_esi = R32((u32)(r_esi+0x428u));
    /* 004ec9cd: lea edx, [esi + edx + 0x770] */ r_edx = (u32)(r_esi+r_edx+0x770u);
    /* 004ec9d4: mov word ptr [edx + ecx*2 - 4], ax */ W16((u32)(r_edx+r_ecx*2+0xfffffffcu), (u16)r_eax);
    /* 004ec9d9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ec9dc: mov ecx, dword ptr [eax + 0x428] */ r_ecx = R32((u32)(r_eax+0x428u));
    /* 004ec9e2: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ec9e6: imul edx, edx, 7 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x7u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ec9e9: lea eax, [ecx + edx + 0x7e0] */ r_eax = (u32)(r_ecx+r_edx+0x7e0u);
    /* 004ec9f0: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ec9f4: movzx edx, byte ptr [eax + ecx - 2] */ r_edx = (u32)R8((u32)(r_eax+r_ecx+0xfffffffeu));
    /* 004ec9f9: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 004ec9fb: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ec9ff: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004eca03: imul ecx, ecx, 7 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x7u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004eca06: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004eca09: mov esi, dword ptr [esi + 0x428] */ r_esi = R32((u32)(r_esi+0x428u));
    /* 004eca0f: lea ecx, [esi + ecx + 0x7e0] */ r_ecx = (u32)(r_esi+r_ecx+0x7e0u);
    /* 004eca16: mov byte ptr [ecx + eax - 2], dl */ W8((u32)(r_ecx+r_eax+0xfffffffeu), (u8)r_edx);
L_004eca1a:; BB(0x004eca1a);
    /* 004eca1a: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004eca1e: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004eca21: jle 0x4ecb56 */ if ((fZ||fS!=fO)) goto L_004ecb56;
L_004eca27:; BB(0x004eca27);
    /* 004eca27: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004eca2a: mov ecx, dword ptr [eax + 0x428] */ r_ecx = R32((u32)(r_eax+0x428u));
    /* 004eca30: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004eca34: imul edx, edx, 7 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x7u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004eca37: lea eax, [ecx + edx + 0x7e0] */ r_eax = (u32)(r_ecx+r_edx+0x7e0u);
    /* 004eca3e: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004eca42: mov dl, byte ptr [eax + ecx - 3] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+r_ecx+0xfffffffdu))) & 0xffu);
    /* 004eca46: add dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004eca49: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004eca4d: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004eca51: imul ecx, ecx, 7 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x7u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004eca54: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004eca57: mov esi, dword ptr [esi + 0x428] */ r_esi = R32((u32)(r_esi+0x428u));
    /* 004eca5d: lea ecx, [esi + ecx + 0x7e0] */ r_ecx = (u32)(r_esi+r_ecx+0x7e0u);
    /* 004eca64: mov byte ptr [ecx + eax - 3], dl */ W8((u32)(r_ecx+r_eax+0xfffffffdu), (u8)r_edx);
    /* 004eca68: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004eca6b: mov eax, dword ptr [edx + 0x428] */ r_eax = R32((u32)(r_edx+0x428u));
    /* 004eca71: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004eca75: imul ecx, ecx, 7 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x7u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004eca78: lea edx, [eax + ecx + 0x7e0] */ r_edx = (u32)(r_eax+r_ecx+0x7e0u);
    /* 004eca7f: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004eca83: movzx ecx, byte ptr [edx + eax - 3] */ r_ecx = (u32)R8((u32)(r_edx+r_eax+0xfffffffdu));
    /* 004eca88: cmp ecx, 0x50 */ {  u32 a = r_ecx; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004eca8b: jne 0x4ecb56 */ if (!fZ) goto L_004ecb56;
L_004eca91:; BB(0x004eca91);
    /* 004eca91: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004eca94: mov eax, dword ptr [edx + 0x428] */ r_eax = R32((u32)(r_edx+0x428u));
    /* 004eca9a: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004eca9e: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ecaa1: lea edx, [eax + ecx + 0x700] */ r_edx = (u32)(r_eax+r_ecx+0x700u);
    /* 004ecaa8: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ecaac: movzx ecx, word ptr [edx + eax*2 - 6] */ r_ecx = (u32)R16((u32)(r_edx+r_eax*2+0xfffffffau));
    /* 004ecab1: shr ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 004ecab3: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ecab7: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ecabb: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ecabe: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ecac1: mov esi, dword ptr [esi + 0x428] */ r_esi = R32((u32)(r_esi+0x428u));
    /* 004ecac7: lea eax, [esi + eax + 0x700] */ r_eax = (u32)(r_esi+r_eax+0x700u);
    /* 004ecace: mov word ptr [eax + edx*2 - 6], cx */ W16((u32)(r_eax+r_edx*2+0xfffffffau), (u16)r_ecx);
    /* 004ecad3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ecad6: mov edx, dword ptr [ecx + 0x428] */ r_edx = R32((u32)(r_ecx+0x428u));
    /* 004ecadc: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ecae0: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ecae3: lea ecx, [edx + eax + 0x770] */ r_ecx = (u32)(r_edx+r_eax+0x770u);
    /* 004ecaea: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ecaee: movzx eax, word ptr [ecx + edx*2 - 6] */ r_eax = (u32)R16((u32)(r_ecx+r_edx*2+0xfffffffau));
    /* 004ecaf3: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 004ecaf5: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ecaf9: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ecafd: imul edx, edx, 0xe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xeu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ecb00: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ecb03: mov esi, dword ptr [esi + 0x428] */ r_esi = R32((u32)(r_esi+0x428u));
    /* 004ecb09: lea edx, [esi + edx + 0x770] */ r_edx = (u32)(r_esi+r_edx+0x770u);
    /* 004ecb10: mov word ptr [edx + ecx*2 - 6], ax */ W16((u32)(r_edx+r_ecx*2+0xfffffffau), (u16)r_eax);
    /* 004ecb15: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ecb18: mov ecx, dword ptr [eax + 0x428] */ r_ecx = R32((u32)(r_eax+0x428u));
    /* 004ecb1e: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ecb22: imul edx, edx, 7 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x7u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ecb25: lea eax, [ecx + edx + 0x7e0] */ r_eax = (u32)(r_ecx+r_edx+0x7e0u);
    /* 004ecb2c: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ecb30: movzx edx, byte ptr [eax + ecx - 3] */ r_edx = (u32)R8((u32)(r_eax+r_ecx+0xfffffffdu));
    /* 004ecb35: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 004ecb37: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ecb3b: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ecb3f: imul ecx, ecx, 7 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x7u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ecb42: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ecb45: mov esi, dword ptr [esi + 0x428] */ r_esi = R32((u32)(r_esi+0x428u));
    /* 004ecb4b: lea ecx, [esi + ecx + 0x7e0] */ r_ecx = (u32)(r_esi+r_ecx+0x7e0u);
    /* 004ecb52: mov byte ptr [ecx + eax - 3], dl */ W8((u32)(r_ecx+r_eax+0xfffffffdu), (u8)r_edx);
L_004ecb56:; BB(0x004ecb56);
    /* 004ecb56: movsx esi, word ptr [ebp + 0xc] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ecb5a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004ecb60: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x4ecb65u); f_0047f950();
    /* 004ecb65: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ecb67: jge 0x4ecc9c */ if ((fS==fO)) goto L_004ecc9c;
L_004ecb6d:; BB(0x004ecb6d);
    /* 004ecb6d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ecb70: mov eax, dword ptr [edx + 0x428] */ r_eax = R32((u32)(r_edx+0x428u));
    /* 004ecb76: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ecb7a: imul ecx, ecx, 7 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x7u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ecb7d: lea edx, [eax + ecx + 0x7e0] */ r_edx = (u32)(r_eax+r_ecx+0x7e0u);
    /* 004ecb84: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ecb88: mov cl, byte ptr [edx + eax - 1] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_edx+r_eax+0xffffffffu))) & 0xffu);
    /* 004ecb8c: add cl, 1 */ {  u32 a = (u8)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004ecb8f: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ecb93: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ecb97: imul eax, eax, 7 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x7u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ecb9a: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ecb9d: mov esi, dword ptr [esi + 0x428] */ r_esi = R32((u32)(r_esi+0x428u));
    /* 004ecba3: lea eax, [esi + eax + 0x7e0] */ r_eax = (u32)(r_esi+r_eax+0x7e0u);
    /* 004ecbaa: mov byte ptr [eax + edx - 1], cl */ W8((u32)(r_eax+r_edx+0xffffffffu), (u8)r_ecx);
    /* 004ecbae: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ecbb1: mov edx, dword ptr [ecx + 0x428] */ r_edx = R32((u32)(r_ecx+0x428u));
    /* 004ecbb7: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ecbbb: imul eax, eax, 7 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x7u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ecbbe: lea ecx, [edx + eax + 0x7e0] */ r_ecx = (u32)(r_edx+r_eax+0x7e0u);
    /* 004ecbc5: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ecbc9: movzx eax, byte ptr [ecx + edx - 1] */ r_eax = (u32)R8((u32)(r_ecx+r_edx+0xffffffffu));
    /* 004ecbce: cmp eax, 0x50 */ {  u32 a = r_eax; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ecbd1: jne 0x4ecc9c */ if (!fZ) goto L_004ecc9c;
L_004ecbd7:; BB(0x004ecbd7);
    /* 004ecbd7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ecbda: mov edx, dword ptr [ecx + 0x428] */ r_edx = R32((u32)(r_ecx+0x428u));
    /* 004ecbe0: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ecbe4: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ecbe7: lea ecx, [edx + eax + 0x700] */ r_ecx = (u32)(r_edx+r_eax+0x700u);
    /* 004ecbee: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ecbf2: movzx eax, word ptr [ecx + edx*2 - 2] */ r_eax = (u32)R16((u32)(r_ecx+r_edx*2+0xfffffffeu));
    /* 004ecbf7: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 004ecbf9: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ecbfd: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ecc01: imul edx, edx, 0xe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xeu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ecc04: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ecc07: mov esi, dword ptr [esi + 0x428] */ r_esi = R32((u32)(r_esi+0x428u));
    /* 004ecc0d: lea edx, [esi + edx + 0x700] */ r_edx = (u32)(r_esi+r_edx+0x700u);
    /* 004ecc14: mov word ptr [edx + ecx*2 - 2], ax */ W16((u32)(r_edx+r_ecx*2+0xfffffffeu), (u16)r_eax);
    /* 004ecc19: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ecc1c: mov ecx, dword ptr [eax + 0x428] */ r_ecx = R32((u32)(r_eax+0x428u));
    /* 004ecc22: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ecc26: imul edx, edx, 0xe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xeu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ecc29: lea eax, [ecx + edx + 0x770] */ r_eax = (u32)(r_ecx+r_edx+0x770u);
    /* 004ecc30: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ecc34: movzx edx, word ptr [eax + ecx*2 - 2] */ r_edx = (u32)R16((u32)(r_eax+r_ecx*2+0xfffffffeu));
    /* 004ecc39: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 004ecc3b: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ecc3f: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ecc43: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ecc46: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ecc49: mov esi, dword ptr [esi + 0x428] */ r_esi = R32((u32)(r_esi+0x428u));
    /* 004ecc4f: lea ecx, [esi + ecx + 0x770] */ r_ecx = (u32)(r_esi+r_ecx+0x770u);
    /* 004ecc56: mov word ptr [ecx + eax*2 - 2], dx */ W16((u32)(r_ecx+r_eax*2+0xfffffffeu), (u16)r_edx);
    /* 004ecc5b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ecc5e: mov eax, dword ptr [edx + 0x428] */ r_eax = R32((u32)(r_edx+0x428u));
    /* 004ecc64: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ecc68: imul ecx, ecx, 7 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x7u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ecc6b: lea edx, [eax + ecx + 0x7e0] */ r_edx = (u32)(r_eax+r_ecx+0x7e0u);
    /* 004ecc72: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ecc76: movzx ecx, byte ptr [edx + eax - 1] */ r_ecx = (u32)R8((u32)(r_edx+r_eax+0xffffffffu));
    /* 004ecc7b: shr ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 004ecc7d: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ecc81: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ecc85: imul eax, eax, 7 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x7u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ecc88: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ecc8b: mov esi, dword ptr [esi + 0x428] */ r_esi = R32((u32)(r_esi+0x428u));
    /* 004ecc91: lea eax, [esi + eax + 0x7e0] */ r_eax = (u32)(r_esi+r_eax+0x7e0u);
    /* 004ecc98: mov byte ptr [eax + edx - 1], cl */ W8((u32)(r_eax+r_edx+0xffffffffu), (u8)r_ecx);
L_004ecc9c:; BB(0x004ecc9c);
    /* 004ecc9c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004ecc9d: mov esp, ebp */ r_esp = r_ebp;
    /* 004ecc9f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ecca0: ret 8 */ FN_RET(0x004ec850); r_esp += 12; return;
}

void f_004eccb0(void) /* PokerPlayer::func_004eccb0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004eccb0);
    /* 004eccb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004eccb1: mov ebp, esp */ r_ebp = r_esp;
    /* 004eccb3: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004eccb6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004eccb7: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 004eccba: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004eccbe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004eccc0: jge 0x4eccd9 */ if ((fS==fO)) goto L_004eccd9;
L_004eccc2:; BB(0x004eccc2);
    /* 004eccc2: push 0x29ba */ { u32 v = 0x29bau; r_esp -= 4; W32(r_esp, v); }
    /* 004eccc7: push 0x6bf384 */ { u32 v = 0x6bf384u; r_esp -= 4; W32(r_esp, v); }
    /* 004ecccc: push 0x6bf888 */ { u32 v = 0x6bf888u; r_esp -= 4; W32(r_esp, v); }
    /* 004eccd1: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4eccd6u); f_005e9f20();
    /* 004eccd6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004eccd9:; BB(0x004eccd9);
    /* 004eccd9: movsx esi, word ptr [ebp + 8] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004eccdd: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004ecce3: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x4ecce8u); f_0047f950();
    /* 004ecce8: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004eccea: jl 0x4ecd03 */ if ((fS!=fO)) goto L_004ecd03;
L_004eccec:; BB(0x004eccec);
    /* 004eccec: push 0x29bb */ { u32 v = 0x29bbu; r_esp -= 4; W32(r_esp, v); }
    /* 004eccf1: push 0x6bf384 */ { u32 v = 0x6bf384u; r_esp -= 4; W32(r_esp, v); }
    /* 004eccf6: push 0x6bf858 */ { u32 v = 0x6bf858u; r_esp -= 4; W32(r_esp, v); }
    /* 004eccfb: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4ecd00u); f_005e9f20();
    /* 004ecd00: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004ecd03:; BB(0x004ecd03);
    /* 004ecd03: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ecd07: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ecd0a: jge 0x4ecd23 */ if ((fS==fO)) goto L_004ecd23;
L_004ecd0c:; BB(0x004ecd0c);
    /* 004ecd0c: push 0x29bc */ { u32 v = 0x29bcu; r_esp -= 4; W32(r_esp, v); }
    /* 004ecd11: push 0x6bf384 */ { u32 v = 0x6bf384u; r_esp -= 4; W32(r_esp, v); }
    /* 004ecd16: push 0x6bf778 */ { u32 v = 0x6bf778u; r_esp -= 4; W32(r_esp, v); }
    /* 004ecd1b: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4ecd20u); f_005e9f20();
    /* 004ecd20: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004ecd23:; BB(0x004ecd23);
    /* 004ecd23: movsx esi, word ptr [ebp + 0xc] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ecd27: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004ecd2d: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x4ecd32u); f_0047f950();
    /* 004ecd32: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ecd34: jle 0x4ecd4d */ if ((fZ||fS!=fO)) goto L_004ecd4d;
L_004ecd36:; BB(0x004ecd36);
    /* 004ecd36: push 0x29bd */ { u32 v = 0x29bdu; r_esp -= 4; W32(r_esp, v); }
    /* 004ecd3b: push 0x6bf384 */ { u32 v = 0x6bf384u; r_esp -= 4; W32(r_esp, v); }
    /* 004ecd40: push 0x6bf740 */ { u32 v = 0x6bf740u; r_esp -= 4; W32(r_esp, v); }
    /* 004ecd45: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4ecd4au); f_005e9f20();
    /* 004ecd4a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004ecd4d:; BB(0x004ecd4d);
    /* 004ecd4d: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004ecd50: movsx ecx, word ptr [eax + 0x344] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x344u));
    /* 004ecd57: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004ecd5a: fild dword ptr [ebp - 0x20] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffe0u)));
    /* 004ecd5d: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 004ecd63: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ecd67: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 004ecd6a: fild dword ptr [ebp - 0x24] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffdcu)));
    /* 004ecd6d: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 004ecd6f: fstp qword ptr [ebp - 0x18] */ W_F64((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 004ecd72: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004ecd75: mov ecx, dword ptr [eax + 0x428] */ r_ecx = R32((u32)(r_eax+0x428u));
    /* 004ecd7b: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ecd7f: imul edx, edx, 0xe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xeu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ecd82: lea eax, [ecx + edx + 0x700] */ r_eax = (u32)(r_ecx+r_edx+0x700u);
    /* 004ecd89: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ecd8d: movzx edx, word ptr [eax + ecx*2 - 4] */ r_edx = (u32)R16((u32)(r_eax+r_ecx*2+0xfffffffcu));
    /* 004ecd92: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ecd94: jne 0x4ecd9e */ if (!fZ) goto L_004ecd9e;
L_004ecd96:; BB(0x004ecd96);
    /* 004ecd96: fld qword ptr [ebp - 0x18] */ FPUSH(R_F64((u32)(r_ebp+0xffffffe8u)));
    /* 004ecd99: jmp 0x4ece6e */ goto L_004ece6e;
L_004ecd9e:; BB(0x004ecd9e);
    /* 004ecd9e: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004ecda1: mov ecx, dword ptr [eax + 0x428] */ r_ecx = R32((u32)(r_eax+0x428u));
    /* 004ecda7: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ecdab: imul edx, edx, 0xe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xeu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ecdae: lea eax, [ecx + edx + 0x700] */ r_eax = (u32)(r_ecx+r_edx+0x700u);
    /* 004ecdb5: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ecdb9: movzx edx, word ptr [eax + ecx*2 - 4] */ r_edx = (u32)R16((u32)(r_eax+r_ecx*2+0xfffffffcu));
    /* 004ecdbe: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 004ecdc1: fild dword ptr [ebp - 0x28] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd8u)));
    /* 004ecdc4: fstp qword ptr [ebp - 8] */ W_F64((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 004ecdc7: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004ecdca: mov ecx, dword ptr [eax + 0x428] */ r_ecx = R32((u32)(r_eax+0x428u));
    /* 004ecdd0: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ecdd4: imul edx, edx, 0xe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xeu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ecdd7: lea eax, [ecx + edx + 0x770] */ r_eax = (u32)(r_ecx+r_edx+0x770u);
    /* 004ecdde: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ecde2: movzx edx, word ptr [eax + ecx*2 - 4] */ r_edx = (u32)R16((u32)(r_eax+r_ecx*2+0xfffffffcu));
    /* 004ecde7: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 004ecdea: fild dword ptr [ebp - 0x2c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd4u)));
    /* 004ecded: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 004ecdf0: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 004ecdf6: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x4ecdfbu); f_005da7b0();
    /* 004ecdfb: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004ecdfe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ece00: jne 0x4ece35 */ if (!fZ) goto L_004ece35;
L_004ece02:; BB(0x004ece02);
    /* 004ece02: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004ece05: movsx edx, word ptr [ecx + 0x348] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x348u));
    /* 004ece0c: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 004ece0f: fild dword ptr [ebp - 0x30] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd0u)));
    /* 004ece12: fdivr qword ptr [ebp - 0x10] */ ST(0) = R_F64((u32)(r_ebp+0xfffffff0u)) / ST(0);
    /* 004ece15: fadd qword ptr [ebp - 0x18] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xffffffe8u));
    /* 004ece18: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004ece1b: movsx ecx, word ptr [eax + 0x348] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x348u));
    /* 004ece22: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 004ece25: fild dword ptr [ebp - 0x34] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffccu)));
    /* 004ece28: fdivr qword ptr [ebp - 8] */ ST(0) = R_F64((u32)(r_ebp+0xfffffff8u)) / ST(0);
    /* 004ece2b: fld1  */ FPUSH(1.0);
    /* 004ece2d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004ece2f: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 004ece31: jmp 0x4ece6e */ goto L_004ece6e;
L_004ece35:; BB(0x004ece35);
    /* 004ece35: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004ece38: movsx eax, word ptr [edx + 0x348] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x348u));
    /* 004ece3f: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004ece40: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004ece42: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004ece44: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 004ece47: fild dword ptr [ebp - 0x38] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffc8u)));
    /* 004ece4a: fdivr qword ptr [ebp - 0x10] */ ST(0) = R_F64((u32)(r_ebp+0xfffffff0u)) / ST(0);
    /* 004ece4d: fadd qword ptr [ebp - 0x18] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xffffffe8u));
    /* 004ece50: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004ece53: movsx eax, word ptr [eax + 0x348] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x348u));
    /* 004ece5a: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004ece5b: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004ece5d: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004ece5f: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 004ece62: fild dword ptr [ebp - 0x3c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffc4u)));
    /* 004ece65: fdivr qword ptr [ebp - 8] */ ST(0) = R_F64((u32)(r_ebp+0xfffffff8u)) / ST(0);
    /* 004ece68: fld1  */ FPUSH(1.0);
    /* 004ece6a: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004ece6c: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
L_004ece6e:; BB(0x004ece6e);
    /* 004ece6e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004ece6f: mov esp, ebp */ r_esp = r_ebp;
    /* 004ece71: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ece72: ret 8 */ FN_RET(0x004eccb0); r_esp += 12; return;
}

void f_004ecea0(void) /* PokerPlayer::func_004ecea0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004ecea0);
    /* 004ecea0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ecea1: mov ebp, esp */ r_ebp = r_esp;
    /* 004ecea3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ecea6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004ecea7: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 004eceaa: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004eceae: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004eceb1: jge 0x4ececa */ if ((fS==fO)) goto L_004ececa;
L_004eceb3:; BB(0x004eceb3);
    /* 004eceb3: push 0x29d1 */ { u32 v = 0x29d1u; r_esp -= 4; W32(r_esp, v); }
    /* 004eceb8: push 0x6bf384 */ { u32 v = 0x6bf384u; r_esp -= 4; W32(r_esp, v); }
    /* 004ecebd: push 0x6bf730 */ { u32 v = 0x6bf730u; r_esp -= 4; W32(r_esp, v); }
    /* 004ecec2: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4ecec7u); f_005e9f20();
    /* 004ecec7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004ececa:; BB(0x004ececa);
    /* 004ececa: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ecece: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004eced1: jle 0x4eceea */ if ((fZ||fS!=fO)) goto L_004eceea;
L_004eced3:; BB(0x004eced3);
    /* 004eced3: push 0x29d2 */ { u32 v = 0x29d2u; r_esp -= 4; W32(r_esp, v); }
    /* 004eced8: push 0x6bf384 */ { u32 v = 0x6bf384u; r_esp -= 4; W32(r_esp, v); }
    /* 004ecedd: push 0x6bf720 */ { u32 v = 0x6bf720u; r_esp -= 4; W32(r_esp, v); }
    /* 004ecee2: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4ecee7u); f_005e9f20();
    /* 004ecee7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004eceea:; BB(0x004eceea);
    /* 004eceea: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004eceed: movsx edx, word ptr [ecx + 0x64] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x64u));
    /* 004ecef1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ecef3: jne 0x4ecf3d */ if (!fZ) goto L_004ecf3d;
L_004ecef5:; BB(0x004ecef5);
    /* 004ecef5: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ecef9: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ecefc: jne 0x4ecf0f */ if (!fZ) goto L_004ecf0f;
L_004ecefe:; BB(0x004ecefe);
    /* 004ecefe: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004ecf01: mov ax, word ptr [ecx + 0x358] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ecx+0x358u))) & 0xffffu);
    /* 004ecf08: jmp 0x4ed17c */ goto L_004ed17c;
L_004ecf0f:; BB(0x004ecf0f);
    /* 004ecf0f: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ecf13: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ecf16: jne 0x4ecf29 */ if (!fZ) goto L_004ecf29;
L_004ecf18:; BB(0x004ecf18);
    /* 004ecf18: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004ecf1b: mov ax, word ptr [eax + 0x356] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+0x356u))) & 0xffffu);
    /* 004ecf22: jmp 0x4ed17c */ goto L_004ed17c;
L_004ecf29:; BB(0x004ecf29);
    /* 004ecf29: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004ecf2c: mov ax, word ptr [ecx + 0x354] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ecx+0x354u))) & 0xffffu);
    /* 004ecf33: jmp 0x4ed17c */ goto L_004ed17c;
L_004ecf3d:; BB(0x004ecf3d);
    /* 004ecf3d: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004ecf40: movsx eax, word ptr [edx + 0x64] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x64u));
    /* 004ecf44: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ecf47: jne 0x4ecfe6 */ if (!fZ) goto L_004ecfe6;
L_004ecf4d:; BB(0x004ecf4d);
    /* 004ecf4d: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ecf51: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ecf54: jne 0x4ecf82 */ if (!fZ) goto L_004ecf82;
L_004ecf56:; BB(0x004ecf56);
    /* 004ecf56: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004ecf59: movsx esi, word ptr [edx + 0x358] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+0x358u));
    /* 004ecf60: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 004ecf62: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4ecf67u); f_0062fbf0();
    /* 004ecf67: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ecf6a: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004ecf6c: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 004ecf6e: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4ecf73u); f_0062fbf0();
    /* 004ecf73: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ecf76: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004ecf78: mov ax, si */ r_eax = (r_eax & 0xffff0000u) | (((u16)r_esi) & 0xffffu);
    /* 004ecf7b: jmp 0x4ed17c */ goto L_004ed17c;
L_004ecf82:; BB(0x004ecf82);
    /* 004ecf82: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ecf86: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ecf89: jne 0x4ecfb7 */ if (!fZ) goto L_004ecfb7;
L_004ecf8b:; BB(0x004ecf8b);
    /* 004ecf8b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004ecf8e: movsx esi, word ptr [ecx + 0x356] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ecx+0x356u));
    /* 004ecf95: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 004ecf97: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4ecf9cu); f_0062fbf0();
    /* 004ecf9c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ecf9f: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004ecfa1: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 004ecfa3: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4ecfa8u); f_0062fbf0();
    /* 004ecfa8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ecfab: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004ecfad: mov ax, si */ r_eax = (r_eax & 0xffff0000u) | (((u16)r_esi) & 0xffffu);
    /* 004ecfb0: jmp 0x4ed17c */ goto L_004ed17c;
L_004ecfb7:; BB(0x004ecfb7);
    /* 004ecfb7: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004ecfba: movsx esi, word ptr [edx + 0x354] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+0x354u));
    /* 004ecfc1: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 004ecfc3: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4ecfc8u); f_0062fbf0();
    /* 004ecfc8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ecfcb: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004ecfcd: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 004ecfcf: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4ecfd4u); f_0062fbf0();
    /* 004ecfd4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ecfd7: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004ecfd9: mov ax, si */ r_eax = (r_eax & 0xffff0000u) | (((u16)r_esi) & 0xffffu);
    /* 004ecfdc: jmp 0x4ed17c */ goto L_004ed17c;
L_004ecfe6:; BB(0x004ecfe6);
    /* 004ecfe6: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004ecfe9: movsx ecx, word ptr [eax + 0x64] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x64u));
    /* 004ecfed: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ecff0: jne 0x4ed0a6 */ if (!fZ) goto L_004ed0a6;
L_004ecff6:; BB(0x004ecff6);
    /* 004ecff6: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004ecffc: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ed000: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ed003: jne 0x4ed02d */ if (!fZ) goto L_004ed02d;
L_004ed005:; BB(0x004ed005);
    /* 004ed005: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004ed008: movsx esi, word ptr [eax + 0x358] */ r_esi = (u32)(i32)(i16)R16((u32)(r_eax+0x358u));
    /* 004ed00f: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004ed011: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4ed016u); f_0062fbf0();
    /* 004ed016: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ed019: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004ed01b: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004ed01d: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4ed022u); f_0062fbf0();
    /* 004ed022: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ed025: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004ed027: mov word ptr [ebp - 4], si */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_esi);
    /* 004ed02b: jmp 0x4ed084 */ goto L_004ed084;
L_004ed02d:; BB(0x004ed02d);
    /* 004ed02d: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ed031: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ed034: jne 0x4ed05e */ if (!fZ) goto L_004ed05e;
L_004ed036:; BB(0x004ed036);
    /* 004ed036: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004ed039: movsx esi, word ptr [edx + 0x356] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+0x356u));
    /* 004ed040: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004ed042: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4ed047u); f_0062fbf0();
    /* 004ed047: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ed04a: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004ed04c: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004ed04e: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4ed053u); f_0062fbf0();
    /* 004ed053: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ed056: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004ed058: mov word ptr [ebp - 4], si */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_esi);
    /* 004ed05c: jmp 0x4ed084 */ goto L_004ed084;
L_004ed05e:; BB(0x004ed05e);
    /* 004ed05e: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004ed061: movsx esi, word ptr [eax + 0x354] */ r_esi = (u32)(i32)(i16)R16((u32)(r_eax+0x354u));
    /* 004ed068: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004ed06a: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4ed06fu); f_0062fbf0();
    /* 004ed06f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ed072: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004ed074: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004ed076: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4ed07bu); f_0062fbf0();
    /* 004ed07b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ed07e: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004ed080: mov word ptr [ebp - 4], si */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_esi);
L_004ed084:; BB(0x004ed084);
    /* 004ed084: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004ed088: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ed08b: jge 0x4ed098 */ if ((fS==fO)) goto L_004ed098;
L_004ed08d:; BB(0x004ed08d);
    /* 004ed08d: mov ax, 1 */ r_eax = (r_eax & 0xffff0000u) | ((0x1u) & 0xffffu);
    /* 004ed091: jmp 0x4ed17c */ goto L_004ed17c;
L_004ed098:; BB(0x004ed098);
    /* 004ed098: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 004ed09c: jmp 0x4ed17c */ goto L_004ed17c;
L_004ed0a6:; BB(0x004ed0a6);
    /* 004ed0a6: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004ed0a9: movsx eax, word ptr [edx + 0x64] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x64u));
    /* 004ed0ad: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ed0b0: jne 0x4ed15d */ if (!fZ) goto L_004ed15d;
L_004ed0b6:; BB(0x004ed0b6);
    /* 004ed0b6: mov word ptr [ebp - 8], 0 */ W16((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 004ed0bc: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ed0c0: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ed0c3: jne 0x4ed0ed */ if (!fZ) goto L_004ed0ed;
L_004ed0c5:; BB(0x004ed0c5);
    /* 004ed0c5: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004ed0c8: movsx esi, word ptr [edx + 0x358] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+0x358u));
    /* 004ed0cf: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 004ed0d1: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4ed0d6u); f_0062fbf0();
    /* 004ed0d6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ed0d9: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004ed0db: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 004ed0dd: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4ed0e2u); f_0062fbf0();
    /* 004ed0e2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ed0e5: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004ed0e7: mov word ptr [ebp - 8], si */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_esi);
    /* 004ed0eb: jmp 0x4ed144 */ goto L_004ed144;
L_004ed0ed:; BB(0x004ed0ed);
    /* 004ed0ed: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ed0f1: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ed0f4: jne 0x4ed11e */ if (!fZ) goto L_004ed11e;
L_004ed0f6:; BB(0x004ed0f6);
    /* 004ed0f6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004ed0f9: movsx esi, word ptr [ecx + 0x356] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ecx+0x356u));
    /* 004ed100: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 004ed102: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4ed107u); f_0062fbf0();
    /* 004ed107: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ed10a: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004ed10c: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 004ed10e: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4ed113u); f_0062fbf0();
    /* 004ed113: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ed116: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004ed118: mov word ptr [ebp - 8], si */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_esi);
    /* 004ed11c: jmp 0x4ed144 */ goto L_004ed144;
L_004ed11e:; BB(0x004ed11e);
    /* 004ed11e: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004ed121: movsx esi, word ptr [edx + 0x354] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+0x354u));
    /* 004ed128: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 004ed12a: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4ed12fu); f_0062fbf0();
    /* 004ed12f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ed132: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004ed134: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 004ed136: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4ed13bu); f_0062fbf0();
    /* 004ed13b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ed13e: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004ed140: mov word ptr [ebp - 8], si */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_esi);
L_004ed144:; BB(0x004ed144);
    /* 004ed144: movsx eax, word ptr [ebp - 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 004ed148: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ed14b: jge 0x4ed155 */ if ((fS==fO)) goto L_004ed155;
L_004ed14d:; BB(0x004ed14d);
    /* 004ed14d: mov ax, 1 */ r_eax = (r_eax & 0xffff0000u) | ((0x1u) & 0xffffu);
    /* 004ed151: jmp 0x4ed17c */ goto L_004ed17c;
L_004ed155:; BB(0x004ed155);
    /* 004ed155: mov ax, word ptr [ebp - 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 004ed159: jmp 0x4ed17c */ goto L_004ed17c;
L_004ed15d:; BB(0x004ed15d);
    /* 004ed15d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 004ed15f: jne 0x4ed178 */ if (!fZ) goto L_004ed178;
L_004ed161:; BB(0x004ed161);
    /* 004ed161: push 0x2a03 */ { u32 v = 0x2a03u; r_esp -= 4; W32(r_esp, v); }
    /* 004ed166: push 0x6bf384 */ { u32 v = 0x6bf384u; r_esp -= 4; W32(r_esp, v); }
    /* 004ed16b: push 0x6b2b64 */ { u32 v = 0x6b2b64u; r_esp -= 4; W32(r_esp, v); }
    /* 004ed170: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4ed175u); f_005e9f20();
    /* 004ed175: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004ed178:; BB(0x004ed178);
    /* 004ed178: mov ax, 0x64 */ r_eax = (r_eax & 0xffff0000u) | ((0x64u) & 0xffffu);
L_004ed17c:; BB(0x004ed17c);
    /* 004ed17c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004ed17d: mov esp, ebp */ r_esp = r_ebp;
    /* 004ed17f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ed180: ret 4 */ FN_RET(0x004ecea0); r_esp += 8; return;
}

void f_004ed1b0(void) /* PokerPlayer::func_004ed1b0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004ed1b0);
    /* 004ed1b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ed1b1: mov ebp, esp */ r_ebp = r_esp;
    /* 004ed1b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004ed1b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004ed1b7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed1ba: movsx ecx, word ptr [eax + 0x64] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x64u));
    /* 004ed1be: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ed1c0: jne 0x4ed1d0 */ if (!fZ) goto L_004ed1d0;
L_004ed1c2:; BB(0x004ed1c2);
    /* 004ed1c2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed1c5: mov ax, word ptr [edx + 0x35c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+0x35cu))) & 0xffffu);
    /* 004ed1cc: jmp 0x4ed24d */ goto L_004ed24d;
L_004ed1d0:; BB(0x004ed1d0);
    /* 004ed1d0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed1d3: movsx ecx, word ptr [eax + 0x64] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x64u));
    /* 004ed1d7: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ed1da: jne 0x4ed1ec */ if (!fZ) goto L_004ed1ec;
L_004ed1dc:; BB(0x004ed1dc);
    /* 004ed1dc: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed1df: movsx eax, word ptr [edx + 0x35c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x35cu));
    /* 004ed1e6: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 004ed1e8: jmp 0x4ed24d */ goto L_004ed24d;
L_004ed1ec:; BB(0x004ed1ec);
    /* 004ed1ec: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed1ef: movsx ecx, word ptr [eax + 0x64] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x64u));
    /* 004ed1f3: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ed1f6: jne 0x4ed20b */ if (!fZ) goto L_004ed20b;
L_004ed1f8:; BB(0x004ed1f8);
    /* 004ed1f8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed1fb: movsx eax, word ptr [edx + 0x35c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x35cu));
    /* 004ed202: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004ed203: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004ed205: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004ed207: jmp 0x4ed24d */ goto L_004ed24d;
L_004ed20b:; BB(0x004ed20b);
    /* 004ed20b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed20e: movsx ecx, word ptr [eax + 0x64] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x64u));
    /* 004ed212: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ed215: jne 0x4ed22e */ if (!fZ) goto L_004ed22e;
L_004ed217:; BB(0x004ed217);
    /* 004ed217: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed21a: movsx eax, word ptr [edx + 0x35c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x35cu));
    /* 004ed221: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004ed222: and edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 004ed225: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004ed227: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004ed22a: jmp 0x4ed24d */ goto L_004ed24d;
L_004ed22e:; BB(0x004ed22e);
    /* 004ed22e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 004ed230: jne 0x4ed249 */ if (!fZ) goto L_004ed249;
L_004ed232:; BB(0x004ed232);
    /* 004ed232: push 0x2a18 */ { u32 v = 0x2a18u; r_esp -= 4; W32(r_esp, v); }
    /* 004ed237: push 0x6bf384 */ { u32 v = 0x6bf384u; r_esp -= 4; W32(r_esp, v); }
    /* 004ed23c: push 0x6b2b64 */ { u32 v = 0x6b2b64u; r_esp -= 4; W32(r_esp, v); }
    /* 004ed241: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4ed246u); f_005e9f20();
    /* 004ed246: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004ed249:; BB(0x004ed249);
    /* 004ed249: mov ax, 0x14 */ r_eax = (r_eax & 0xffff0000u) | ((0x14u) & 0xffffu);
L_004ed24d:; BB(0x004ed24d);
    /* 004ed24d: mov esp, ebp */ r_esp = r_ebp;
    /* 004ed24f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ed250: ret  */ FN_RET(0x004ed1b0); r_esp += 4; return;
}

void f_004ed260(void) /* PokerPlayer::func_004ed260 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004ed260);
    /* 004ed260: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ed261: mov ebp, esp */ r_ebp = r_esp;
    /* 004ed263: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004ed264: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004ed267: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed26a: movsx ecx, word ptr [eax + 0x64] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x64u));
    /* 004ed26e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ed270: jne 0x4ed280 */ if (!fZ) goto L_004ed280;
L_004ed272:; BB(0x004ed272);
    /* 004ed272: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed275: mov ax, word ptr [edx + 0x36e] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+0x36eu))) & 0xffffu);
    /* 004ed27c: jmp 0x4ed2fd */ goto L_004ed2fd;
L_004ed280:; BB(0x004ed280);
    /* 004ed280: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed283: movsx ecx, word ptr [eax + 0x64] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x64u));
    /* 004ed287: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ed28a: jne 0x4ed29c */ if (!fZ) goto L_004ed29c;
L_004ed28c:; BB(0x004ed28c);
    /* 004ed28c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed28f: movsx eax, word ptr [edx + 0x36e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x36eu));
    /* 004ed296: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 004ed298: jmp 0x4ed2fd */ goto L_004ed2fd;
L_004ed29c:; BB(0x004ed29c);
    /* 004ed29c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed29f: movsx ecx, word ptr [eax + 0x64] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x64u));
    /* 004ed2a3: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ed2a6: jne 0x4ed2bb */ if (!fZ) goto L_004ed2bb;
L_004ed2a8:; BB(0x004ed2a8);
    /* 004ed2a8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed2ab: movsx eax, word ptr [edx + 0x36e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x36eu));
    /* 004ed2b2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004ed2b3: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004ed2b5: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004ed2b7: jmp 0x4ed2fd */ goto L_004ed2fd;
L_004ed2bb:; BB(0x004ed2bb);
    /* 004ed2bb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed2be: movsx ecx, word ptr [eax + 0x64] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x64u));
    /* 004ed2c2: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ed2c5: jne 0x4ed2de */ if (!fZ) goto L_004ed2de;
L_004ed2c7:; BB(0x004ed2c7);
    /* 004ed2c7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed2ca: movsx eax, word ptr [edx + 0x36e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x36eu));
    /* 004ed2d1: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004ed2d2: and edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 004ed2d5: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004ed2d7: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004ed2da: jmp 0x4ed2fd */ goto L_004ed2fd;
L_004ed2de:; BB(0x004ed2de);
    /* 004ed2de: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 004ed2e0: jne 0x4ed2f9 */ if (!fZ) goto L_004ed2f9;
L_004ed2e2:; BB(0x004ed2e2);
    /* 004ed2e2: push 0x2a28 */ { u32 v = 0x2a28u; r_esp -= 4; W32(r_esp, v); }
    /* 004ed2e7: push 0x6bf384 */ { u32 v = 0x6bf384u; r_esp -= 4; W32(r_esp, v); }
    /* 004ed2ec: push 0x6b2b64 */ { u32 v = 0x6b2b64u; r_esp -= 4; W32(r_esp, v); }
    /* 004ed2f1: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4ed2f6u); f_005e9f20();
    /* 004ed2f6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004ed2f9:; BB(0x004ed2f9);
    /* 004ed2f9: mov ax, 0xa */ r_eax = (r_eax & 0xffff0000u) | ((0xau) & 0xffffu);
L_004ed2fd:; BB(0x004ed2fd);
    /* 004ed2fd: mov esp, ebp */ r_esp = r_ebp;
    /* 004ed2ff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ed300: ret  */ FN_RET(0x004ed260); r_esp += 4; return;
}

void f_004ed310(void) /* PokerPlayer::func_004ed310 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004ed310);
    /* 004ed310: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ed311: mov ebp, esp */ r_ebp = r_esp;
    /* 004ed313: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ed316: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004ed319: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ed31d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ed31f: jne 0x4ed332 */ if (!fZ) goto L_004ed332;
L_004ed321:; BB(0x004ed321);
    /* 004ed321: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 004ed323: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4ed328u); f_0062fbf0();
    /* 004ed328: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ed32b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004ed32e: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
L_004ed332:; BB(0x004ed332);
    /* 004ed332: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ed336: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004ed338: jle 0x4ed343 */ if ((fZ||fS!=fO)) goto L_004ed343;
L_004ed33a:; BB(0x004ed33a);
    /* 004ed33a: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ed33e: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ed341: jle 0x4ed35a */ if ((fZ||fS!=fO)) goto L_004ed35a;
L_004ed343:; BB(0x004ed343);
    /* 004ed343: push 0x2a33 */ { u32 v = 0x2a33u; r_esp -= 4; W32(r_esp, v); }
    /* 004ed348: push 0x6bf384 */ { u32 v = 0x6bf384u; r_esp -= 4; W32(r_esp, v); }
    /* 004ed34d: push 0x6bf6d8 */ { u32 v = 0x6bf6d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004ed352: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4ed357u); f_005e9f20();
    /* 004ed357: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004ed35a:; BB(0x004ed35a);
    /* 004ed35a: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ed35e: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004ed361: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004ed364: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004ed367: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 004ed36a: cmp dword ptr [ebp - 8], 9 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004ed36e: ja 0x4ede73 */ if ((!fC&&!fZ)) goto L_004ede73;
L_004ed374:; BB(0x004ed374);
    /* 004ed374: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004ed377: jmp dword ptr [eax*4 + 0x4ede7c] */ { u32 t = R32((u32)(r_eax*4+0x4ede7cu)); switch (t) { case 0x4ed37eu: goto L_004ed37e; case 0x4ed497u: goto L_004ed497; case 0x4ed5b0u: goto L_004ed5b0; case 0x4ed6c9u: goto L_004ed6c9; case 0x4ed7e2u: goto L_004ed7e2; case 0x4ed8fbu: goto L_004ed8fb; case 0x4eda14u: goto L_004eda14; case 0x4edb2du: goto L_004edb2d; case 0x4edc46u: goto L_004edc46; case 0x4edd5fu: goto L_004edd5f; default: UNSUP(0x004ed377, "jump table entry is not a known target"); } }
L_004ed37e:; BB(0x004ed37e);
    /* 004ed37e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed381: mov word ptr [ecx + 0x370], 5 */ W16((u32)(r_ecx+0x370u), 0x5u);
    /* 004ed38a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed38d: mov word ptr [edx + 0x372], 0x1e */ W16((u32)(r_edx+0x372u), 0x1eu);
    /* 004ed396: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed399: mov word ptr [eax + 0x374], 0x32 */ W16((u32)(r_eax+0x374u), 0x32u);
    /* 004ed3a2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed3a5: mov word ptr [ecx + 0x376], 0x19 */ W16((u32)(r_ecx+0x376u), 0x19u);
    /* 004ed3ae: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed3b1: mov word ptr [edx + 0x378], 0x14 */ W16((u32)(r_edx+0x378u), 0x14u);
    /* 004ed3ba: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed3bd: mov word ptr [eax + 0x37a], 6 */ W16((u32)(r_eax+0x37au), 0x6u);
    /* 004ed3c6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed3c9: mov word ptr [ecx + 0x37c], 0x28 */ W16((u32)(r_ecx+0x37cu), 0x28u);
    /* 004ed3d2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed3d5: mov word ptr [edx + 0x37e], 0xa */ W16((u32)(r_edx+0x37eu), 0xau);
    /* 004ed3de: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed3e1: mov word ptr [eax + 0x380], 0x14 */ W16((u32)(r_eax+0x380u), 0x14u);
    /* 004ed3ea: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed3ed: mov word ptr [ecx + 0x382], 0x28 */ W16((u32)(r_ecx+0x382u), 0x28u);
    /* 004ed3f6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed3f9: mov word ptr [edx + 0x384], 0x14 */ W16((u32)(r_edx+0x384u), 0x14u);
    /* 004ed402: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed405: mov word ptr [eax + 0x386], 5 */ W16((u32)(r_eax+0x386u), 0x5u);
    /* 004ed40e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed411: mov word ptr [ecx + 0x388], 0x1e */ W16((u32)(r_ecx+0x388u), 0x1eu);
    /* 004ed41a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed41d: mov word ptr [edx + 0x38c], 0x4b */ W16((u32)(r_edx+0x38cu), 0x4bu);
    /* 004ed426: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed429: mov word ptr [eax + 0x38e], 0x32 */ W16((u32)(r_eax+0x38eu), 0x32u);
    /* 004ed432: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed435: mov word ptr [ecx + 0x390], 0x19 */ W16((u32)(r_ecx+0x390u), 0x19u);
    /* 004ed43e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed441: mov word ptr [edx + 0x392], 0x46 */ W16((u32)(r_edx+0x392u), 0x46u);
    /* 004ed44a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed44d: mov word ptr [eax + 0x394], 0x3c */ W16((u32)(r_eax+0x394u), 0x3cu);
    /* 004ed456: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed459: mov word ptr [ecx + 0x38a], 5 */ W16((u32)(r_ecx+0x38au), 0x5u);
    /* 004ed462: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed465: mov word ptr [edx + 0x396], 6 */ W16((u32)(r_edx+0x396u), 0x6u);
    /* 004ed46e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed471: mov word ptr [eax + 0x398], 0x1e */ W16((u32)(r_eax+0x398u), 0x1eu);
    /* 004ed47a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed47d: mov word ptr [ecx + 0x39a], 0x1e */ W16((u32)(r_ecx+0x39au), 0x1eu);
    /* 004ed486: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed489: mov word ptr [edx + 0x39c], 0x4b */ W16((u32)(r_edx+0x39cu), 0x4bu);
    /* 004ed492: jmp 0x4ede73 */ goto L_004ede73;
L_004ed497:; BB(0x004ed497);
    /* 004ed497: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed49a: mov word ptr [eax + 0x370], 2 */ W16((u32)(r_eax+0x370u), 0x2u);
    /* 004ed4a3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed4a6: mov word ptr [ecx + 0x372], 0x32 */ W16((u32)(r_ecx+0x372u), 0x32u);
    /* 004ed4af: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed4b2: mov word ptr [edx + 0x374], 0x46 */ W16((u32)(r_edx+0x374u), 0x46u);
    /* 004ed4bb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed4be: mov word ptr [eax + 0x376], 0x32 */ W16((u32)(r_eax+0x376u), 0x32u);
    /* 004ed4c7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed4ca: mov word ptr [ecx + 0x378], 0x28 */ W16((u32)(r_ecx+0x378u), 0x28u);
    /* 004ed4d3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed4d6: mov word ptr [edx + 0x37a], 0xc */ W16((u32)(r_edx+0x37au), 0xcu);
    /* 004ed4df: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed4e2: mov word ptr [eax + 0x37c], 0x50 */ W16((u32)(r_eax+0x37cu), 0x50u);
    /* 004ed4eb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed4ee: mov word ptr [ecx + 0x37e], 0x18 */ W16((u32)(r_ecx+0x37eu), 0x18u);
    /* 004ed4f7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed4fa: mov word ptr [edx + 0x380], 8 */ W16((u32)(r_edx+0x380u), 0x8u);
    /* 004ed503: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed506: mov word ptr [eax + 0x39a], 0x12 */ W16((u32)(r_eax+0x39au), 0x12u);
    /* 004ed50f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed512: mov word ptr [ecx + 0x382], 0x2d */ W16((u32)(r_ecx+0x382u), 0x2du);
    /* 004ed51b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed51e: mov word ptr [edx + 0x384], 0x1e */ W16((u32)(r_edx+0x384u), 0x1eu);
    /* 004ed527: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed52a: mov word ptr [eax + 0x386], 0x11 */ W16((u32)(r_eax+0x386u), 0x11u);
    /* 004ed533: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed536: mov word ptr [ecx + 0x388], 0x19 */ W16((u32)(r_ecx+0x388u), 0x19u);
    /* 004ed53f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed542: mov word ptr [edx + 0x38a], 8 */ W16((u32)(r_edx+0x38au), 0x8u);
    /* 004ed54b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed54e: mov word ptr [eax + 0x38c], 0x5a */ W16((u32)(r_eax+0x38cu), 0x5au);
    /* 004ed557: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed55a: mov word ptr [ecx + 0x38e], 0x32 */ W16((u32)(r_ecx+0x38eu), 0x32u);
    /* 004ed563: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed566: mov word ptr [edx + 0x390], 0x1e */ W16((u32)(r_edx+0x390u), 0x1eu);
    /* 004ed56f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed572: mov word ptr [eax + 0x392], 0x55 */ W16((u32)(r_eax+0x392u), 0x55u);
    /* 004ed57b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed57e: mov word ptr [ecx + 0x394], 0x50 */ W16((u32)(r_ecx+0x394u), 0x50u);
    /* 004ed587: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed58a: mov word ptr [edx + 0x396], 3 */ W16((u32)(r_edx+0x396u), 0x3u);
    /* 004ed593: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed596: mov word ptr [eax + 0x398], 0x46 */ W16((u32)(r_eax+0x398u), 0x46u);
    /* 004ed59f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed5a2: mov word ptr [ecx + 0x39c], 0x3c */ W16((u32)(r_ecx+0x39cu), 0x3cu);
    /* 004ed5ab: jmp 0x4ede73 */ goto L_004ede73;
L_004ed5b0:; BB(0x004ed5b0);
    /* 004ed5b0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed5b3: mov word ptr [edx + 0x370], 8 */ W16((u32)(r_edx+0x370u), 0x8u);
    /* 004ed5bc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed5bf: mov word ptr [eax + 0x372], 0x19 */ W16((u32)(r_eax+0x372u), 0x19u);
    /* 004ed5c8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed5cb: mov word ptr [ecx + 0x374], 0x28 */ W16((u32)(r_ecx+0x374u), 0x28u);
    /* 004ed5d4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed5d7: mov word ptr [edx + 0x376], 0xf */ W16((u32)(r_edx+0x376u), 0xfu);
    /* 004ed5e0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed5e3: mov word ptr [eax + 0x378], 0xe */ W16((u32)(r_eax+0x378u), 0xeu);
    /* 004ed5ec: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed5ef: mov word ptr [ecx + 0x37a], 8 */ W16((u32)(r_ecx+0x37au), 0x8u);
    /* 004ed5f8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed5fb: mov word ptr [edx + 0x37c], 0x1c */ W16((u32)(r_edx+0x37cu), 0x1cu);
    /* 004ed604: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed607: mov word ptr [eax + 0x37e], 0x10 */ W16((u32)(r_eax+0x37eu), 0x10u);
    /* 004ed610: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed613: mov word ptr [ecx + 0x380], 0xf */ W16((u32)(r_ecx+0x380u), 0xfu);
    /* 004ed61c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed61f: mov word ptr [edx + 0x382], 0x1e */ W16((u32)(r_edx+0x382u), 0x1eu);
    /* 004ed628: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed62b: mov word ptr [eax + 0x384], 0x11 */ W16((u32)(r_eax+0x384u), 0x11u);
    /* 004ed634: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed637: mov word ptr [ecx + 0x386], 4 */ W16((u32)(r_ecx+0x386u), 0x4u);
    /* 004ed640: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed643: mov word ptr [edx + 0x388], 0x28 */ W16((u32)(r_edx+0x388u), 0x28u);
    /* 004ed64c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed64f: mov word ptr [eax + 0x38a], 2 */ W16((u32)(r_eax+0x38au), 0x2u);
    /* 004ed658: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed65b: mov word ptr [ecx + 0x38c], 0x5a */ W16((u32)(r_ecx+0x38cu), 0x5au);
    /* 004ed664: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed667: mov word ptr [edx + 0x38e], 0x3c */ W16((u32)(r_edx+0x38eu), 0x3cu);
    /* 004ed670: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed673: mov word ptr [eax + 0x390], 0x1e */ W16((u32)(r_eax+0x390u), 0x1eu);
    /* 004ed67c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed67f: mov word ptr [ecx + 0x392], 0x32 */ W16((u32)(r_ecx+0x392u), 0x32u);
    /* 004ed688: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed68b: mov word ptr [edx + 0x394], 0x32 */ W16((u32)(r_edx+0x394u), 0x32u);
    /* 004ed694: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed697: mov word ptr [eax + 0x396], 0xc */ W16((u32)(r_eax+0x396u), 0xcu);
    /* 004ed6a0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed6a3: mov word ptr [ecx + 0x398], 0x14 */ W16((u32)(r_ecx+0x398u), 0x14u);
    /* 004ed6ac: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed6af: mov word ptr [edx + 0x39a], 0x2d */ W16((u32)(r_edx+0x39au), 0x2du);
    /* 004ed6b8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed6bb: mov word ptr [eax + 0x39c], 0x5a */ W16((u32)(r_eax+0x39cu), 0x5au);
    /* 004ed6c4: jmp 0x4ede73 */ goto L_004ede73;
L_004ed6c9:; BB(0x004ed6c9);
    /* 004ed6c9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed6cc: mov word ptr [ecx + 0x370], 0xa */ W16((u32)(r_ecx+0x370u), 0xau);
    /* 004ed6d5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed6d8: mov word ptr [edx + 0x372], 0x1c */ W16((u32)(r_edx+0x372u), 0x1cu);
    /* 004ed6e1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed6e4: mov word ptr [eax + 0x374], 0x23 */ W16((u32)(r_eax+0x374u), 0x23u);
    /* 004ed6ed: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed6f0: mov word ptr [ecx + 0x376], 0x14 */ W16((u32)(r_ecx+0x376u), 0x14u);
    /* 004ed6f9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed6fc: mov word ptr [edx + 0x378], 0xa */ W16((u32)(r_edx+0x378u), 0xau);
    /* 004ed705: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed708: mov word ptr [eax + 0x37a], 0xe */ W16((u32)(r_eax+0x37au), 0xeu);
    /* 004ed711: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed714: mov word ptr [ecx + 0x37c], 0x2c */ W16((u32)(r_ecx+0x37cu), 0x2cu);
    /* 004ed71d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed720: mov word ptr [edx + 0x37e], 0x14 */ W16((u32)(r_edx+0x37eu), 0x14u);
    /* 004ed729: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed72c: mov word ptr [eax + 0x380], 0x1c */ W16((u32)(r_eax+0x380u), 0x1cu);
    /* 004ed735: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed738: mov word ptr [ecx + 0x382], 0x26 */ W16((u32)(r_ecx+0x382u), 0x26u);
    /* 004ed741: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed744: mov word ptr [edx + 0x384], 0x15 */ W16((u32)(r_edx+0x384u), 0x15u);
    /* 004ed74d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed750: mov word ptr [eax + 0x386], 5 */ W16((u32)(r_eax+0x386u), 0x5u);
    /* 004ed759: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed75c: mov word ptr [ecx + 0x388], 0x23 */ W16((u32)(r_ecx+0x388u), 0x23u);
    /* 004ed765: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed768: mov word ptr [edx + 0x38a], 4 */ W16((u32)(r_edx+0x38au), 0x4u);
    /* 004ed771: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed774: mov word ptr [eax + 0x38c], 0x50 */ W16((u32)(r_eax+0x38cu), 0x50u);
    /* 004ed77d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed780: mov word ptr [ecx + 0x38e], 0x3c */ W16((u32)(r_ecx+0x38eu), 0x3cu);
    /* 004ed789: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed78c: mov word ptr [edx + 0x390], 0x28 */ W16((u32)(r_edx+0x390u), 0x28u);
    /* 004ed795: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed798: mov word ptr [eax + 0x392], 0x3c */ W16((u32)(r_eax+0x392u), 0x3cu);
    /* 004ed7a1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed7a4: mov word ptr [ecx + 0x394], 0x3c */ W16((u32)(r_ecx+0x394u), 0x3cu);
    /* 004ed7ad: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed7b0: mov word ptr [edx + 0x396], 0xa */ W16((u32)(r_edx+0x396u), 0xau);
    /* 004ed7b9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed7bc: mov word ptr [eax + 0x398], 0x1e */ W16((u32)(r_eax+0x398u), 0x1eu);
    /* 004ed7c5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed7c8: mov word ptr [ecx + 0x39a], 0x23 */ W16((u32)(r_ecx+0x39au), 0x23u);
    /* 004ed7d1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed7d4: mov word ptr [edx + 0x39c], 0x43 */ W16((u32)(r_edx+0x39cu), 0x43u);
    /* 004ed7dd: jmp 0x4ede73 */ goto L_004ede73;
L_004ed7e2:; BB(0x004ed7e2);
    /* 004ed7e2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed7e5: mov word ptr [eax + 0x370], 7 */ W16((u32)(r_eax+0x370u), 0x7u);
    /* 004ed7ee: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed7f1: mov word ptr [ecx + 0x372], 0x23 */ W16((u32)(r_ecx+0x372u), 0x23u);
    /* 004ed7fa: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed7fd: mov word ptr [edx + 0x374], 0x2d */ W16((u32)(r_edx+0x374u), 0x2du);
    /* 004ed806: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed809: mov word ptr [eax + 0x376], 0x23 */ W16((u32)(r_eax+0x376u), 0x23u);
    /* 004ed812: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed815: mov word ptr [ecx + 0x378], 0x1e */ W16((u32)(r_ecx+0x378u), 0x1eu);
    /* 004ed81e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed821: mov word ptr [edx + 0x37a], 4 */ W16((u32)(r_edx+0x37au), 0x4u);
    /* 004ed82a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed82d: mov word ptr [eax + 0x37c], 0x3c */ W16((u32)(r_eax+0x37cu), 0x3cu);
    /* 004ed836: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed839: mov word ptr [ecx + 0x37e], 6 */ W16((u32)(r_ecx+0x37eu), 0x6u);
    /* 004ed842: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed845: mov word ptr [edx + 0x380], 0x23 */ W16((u32)(r_edx+0x380u), 0x23u);
    /* 004ed84e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed851: mov word ptr [eax + 0x382], 0x23 */ W16((u32)(r_eax+0x382u), 0x23u);
    /* 004ed85a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed85d: mov word ptr [ecx + 0x384], 0x1b */ W16((u32)(r_ecx+0x384u), 0x1bu);
    /* 004ed866: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed869: mov word ptr [edx + 0x386], 7 */ W16((u32)(r_edx+0x386u), 0x7u);
    /* 004ed872: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed875: mov word ptr [eax + 0x388], 0x19 */ W16((u32)(r_eax+0x388u), 0x19u);
    /* 004ed87e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed881: mov word ptr [ecx + 0x38a], 6 */ W16((u32)(r_ecx+0x38au), 0x6u);
    /* 004ed88a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed88d: mov word ptr [edx + 0x38c], 0x5a */ W16((u32)(r_edx+0x38cu), 0x5au);
    /* 004ed896: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed899: mov word ptr [eax + 0x38e], 0x28 */ W16((u32)(r_eax+0x38eu), 0x28u);
    /* 004ed8a2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed8a5: mov word ptr [ecx + 0x390], 0x14 */ W16((u32)(r_ecx+0x390u), 0x14u);
    /* 004ed8ae: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed8b1: mov word ptr [edx + 0x392], 0x37 */ W16((u32)(r_edx+0x392u), 0x37u);
    /* 004ed8ba: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed8bd: mov word ptr [eax + 0x394], 0x46 */ W16((u32)(r_eax+0x394u), 0x46u);
    /* 004ed8c6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed8c9: mov word ptr [ecx + 0x396], 4 */ W16((u32)(r_ecx+0x396u), 0x4u);
    /* 004ed8d2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed8d5: mov word ptr [edx + 0x398], 0x28 */ W16((u32)(r_edx+0x398u), 0x28u);
    /* 004ed8de: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed8e1: mov word ptr [eax + 0x39a], 0x19 */ W16((u32)(r_eax+0x39au), 0x19u);
    /* 004ed8ea: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed8ed: mov word ptr [ecx + 0x39c], 0x52 */ W16((u32)(r_ecx+0x39cu), 0x52u);
    /* 004ed8f6: jmp 0x4ede73 */ goto L_004ede73;
L_004ed8fb:; BB(0x004ed8fb);
    /* 004ed8fb: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed8fe: mov word ptr [edx + 0x370], 0 */ W16((u32)(r_edx+0x370u), 0x0u);
    /* 004ed907: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed90a: mov word ptr [eax + 0x372], 0x28 */ W16((u32)(r_eax+0x372u), 0x28u);
    /* 004ed913: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed916: mov word ptr [ecx + 0x374], 0x41 */ W16((u32)(r_ecx+0x374u), 0x41u);
    /* 004ed91f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed922: mov word ptr [edx + 0x376], 0x64 */ W16((u32)(r_edx+0x376u), 0x64u);
    /* 004ed92b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed92e: mov word ptr [eax + 0x378], 0x3c */ W16((u32)(r_eax+0x378u), 0x3cu);
    /* 004ed937: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed93a: mov word ptr [ecx + 0x37a], 0x14 */ W16((u32)(r_ecx+0x37au), 0x14u);
    /* 004ed943: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed946: mov word ptr [edx + 0x37c], 0x50 */ W16((u32)(r_edx+0x37cu), 0x50u);
    /* 004ed94f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed952: mov word ptr [eax + 0x37e], 0x28 */ W16((u32)(r_eax+0x37eu), 0x28u);
    /* 004ed95b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed95e: mov word ptr [ecx + 0x380], 0x1e */ W16((u32)(r_ecx+0x380u), 0x1eu);
    /* 004ed967: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed96a: mov word ptr [edx + 0x382], 0x2e */ W16((u32)(r_edx+0x382u), 0x2eu);
    /* 004ed973: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed976: mov word ptr [eax + 0x384], 0x1e */ W16((u32)(r_eax+0x384u), 0x1eu);
    /* 004ed97f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed982: mov word ptr [ecx + 0x386], 0xf */ W16((u32)(r_ecx+0x386u), 0xfu);
    /* 004ed98b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed98e: mov word ptr [edx + 0x388], 5 */ W16((u32)(r_edx+0x388u), 0x5u);
    /* 004ed997: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed99a: mov word ptr [eax + 0x38a], 8 */ W16((u32)(r_eax+0x38au), 0x8u);
    /* 004ed9a3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed9a6: mov word ptr [ecx + 0x38c], 0x41 */ W16((u32)(r_ecx+0x38cu), 0x41u);
    /* 004ed9af: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed9b2: mov word ptr [edx + 0x38e], 0x23 */ W16((u32)(r_edx+0x38eu), 0x23u);
    /* 004ed9bb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed9be: mov word ptr [eax + 0x390], 0xf */ W16((u32)(r_eax+0x390u), 0xfu);
    /* 004ed9c7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed9ca: mov word ptr [ecx + 0x392], 0x4b */ W16((u32)(r_ecx+0x392u), 0x4bu);
    /* 004ed9d3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed9d6: mov word ptr [edx + 0x394], 0x4b */ W16((u32)(r_edx+0x394u), 0x4bu);
    /* 004ed9df: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed9e2: mov word ptr [eax + 0x396], 2 */ W16((u32)(r_eax+0x396u), 0x2u);
    /* 004ed9eb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed9ee: mov word ptr [ecx + 0x398], 0x50 */ W16((u32)(r_ecx+0x398u), 0x50u);
    /* 004ed9f7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ed9fa: mov word ptr [edx + 0x39a], 0xc */ W16((u32)(r_edx+0x39au), 0xcu);
    /* 004eda03: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004eda06: mov word ptr [eax + 0x39c], 0x32 */ W16((u32)(r_eax+0x39cu), 0x32u);
    /* 004eda0f: jmp 0x4ede73 */ goto L_004ede73;
L_004eda14:; BB(0x004eda14);
    /* 004eda14: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004eda17: mov word ptr [ecx + 0x370], 3 */ W16((u32)(r_ecx+0x370u), 0x3u);
    /* 004eda20: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004eda23: mov word ptr [edx + 0x372], 0x1e */ W16((u32)(r_edx+0x372u), 0x1eu);
    /* 004eda2c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004eda2f: mov word ptr [eax + 0x374], 0x23 */ W16((u32)(r_eax+0x374u), 0x23u);
    /* 004eda38: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004eda3b: mov word ptr [ecx + 0x376], 0x19 */ W16((u32)(r_ecx+0x376u), 0x19u);
    /* 004eda44: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004eda47: mov word ptr [edx + 0x378], 0x10 */ W16((u32)(r_edx+0x378u), 0x10u);
    /* 004eda50: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004eda53: mov word ptr [eax + 0x37a], 4 */ W16((u32)(r_eax+0x37au), 0x4u);
    /* 004eda5c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004eda5f: mov word ptr [ecx + 0x37c], 0x1e */ W16((u32)(r_ecx+0x37cu), 0x1eu);
    /* 004eda68: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004eda6b: mov word ptr [edx + 0x37e], 6 */ W16((u32)(r_edx+0x37eu), 0x6u);
    /* 004eda74: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004eda77: mov word ptr [eax + 0x380], 0x32 */ W16((u32)(r_eax+0x380u), 0x32u);
    /* 004eda80: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004eda83: mov word ptr [ecx + 0x382], 0x2b */ W16((u32)(r_ecx+0x382u), 0x2bu);
    /* 004eda8c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004eda8f: mov word ptr [edx + 0x384], 0x17 */ W16((u32)(r_edx+0x384u), 0x17u);
    /* 004eda98: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004eda9b: mov word ptr [eax + 0x386], 0xc */ W16((u32)(r_eax+0x386u), 0xcu);
    /* 004edaa4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004edaa7: mov word ptr [ecx + 0x388], 0x28 */ W16((u32)(r_ecx+0x388u), 0x28u);
    /* 004edab0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004edab3: mov word ptr [edx + 0x38a], 2 */ W16((u32)(r_edx+0x38au), 0x2u);
    /* 004edabc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004edabf: mov word ptr [eax + 0x38c], 0x3c */ W16((u32)(r_eax+0x38cu), 0x3cu);
    /* 004edac8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004edacb: mov word ptr [ecx + 0x38e], 0x28 */ W16((u32)(r_ecx+0x38eu), 0x28u);
    /* 004edad4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004edad7: mov word ptr [edx + 0x390], 0x14 */ W16((u32)(r_edx+0x390u), 0x14u);
    /* 004edae0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004edae3: mov word ptr [eax + 0x392], 0x3c */ W16((u32)(r_eax+0x392u), 0x3cu);
    /* 004edaec: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004edaef: mov word ptr [ecx + 0x394], 0x28 */ W16((u32)(r_ecx+0x394u), 0x28u);
    /* 004edaf8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004edafb: mov word ptr [edx + 0x396], 4 */ W16((u32)(r_edx+0x396u), 0x4u);
    /* 004edb04: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004edb07: mov word ptr [eax + 0x398], 0x41 */ W16((u32)(r_eax+0x398u), 0x41u);
    /* 004edb10: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004edb13: mov word ptr [ecx + 0x39a], 0x14 */ W16((u32)(r_ecx+0x39au), 0x14u);
    /* 004edb1c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004edb1f: mov word ptr [edx + 0x39c], 0x41 */ W16((u32)(r_edx+0x39cu), 0x41u);
    /* 004edb28: jmp 0x4ede73 */ goto L_004ede73;
L_004edb2d:; BB(0x004edb2d);
    /* 004edb2d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004edb30: mov word ptr [eax + 0x370], 5 */ W16((u32)(r_eax+0x370u), 0x5u);
    /* 004edb39: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004edb3c: mov word ptr [ecx + 0x372], 0x1c */ W16((u32)(r_ecx+0x372u), 0x1cu);
    /* 004edb45: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004edb48: mov word ptr [edx + 0x374], 0x2e */ W16((u32)(r_edx+0x374u), 0x2eu);
    /* 004edb51: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004edb54: mov word ptr [eax + 0x376], 0x16 */ W16((u32)(r_eax+0x376u), 0x16u);
    /* 004edb5d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004edb60: mov word ptr [ecx + 0x378], 0x11 */ W16((u32)(r_ecx+0x378u), 0x11u);
    /* 004edb69: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004edb6c: mov word ptr [edx + 0x37a], 8 */ W16((u32)(r_edx+0x37au), 0x8u);
    /* 004edb75: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004edb78: mov word ptr [eax + 0x37c], 0x23 */ W16((u32)(r_eax+0x37cu), 0x23u);
    /* 004edb81: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004edb84: mov word ptr [ecx + 0x37e], 0xc */ W16((u32)(r_ecx+0x37eu), 0xcu);
    /* 004edb8d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004edb90: mov word ptr [edx + 0x380], 0x14 */ W16((u32)(r_edx+0x380u), 0x14u);
    /* 004edb99: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004edb9c: mov word ptr [eax + 0x382], 0x25 */ W16((u32)(r_eax+0x382u), 0x25u);
    /* 004edba5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004edba8: mov word ptr [ecx + 0x384], 0x15 */ W16((u32)(r_ecx+0x384u), 0x15u);
    /* 004edbb1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004edbb4: mov word ptr [edx + 0x386], 6 */ W16((u32)(r_edx+0x386u), 0x6u);
    /* 004edbbd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004edbc0: mov word ptr [eax + 0x388], 0x1e */ W16((u32)(r_eax+0x388u), 0x1eu);
    /* 004edbc9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004edbcc: mov word ptr [ecx + 0x38c], 0x4b */ W16((u32)(r_ecx+0x38cu), 0x4bu);
    /* 004edbd5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004edbd8: mov word ptr [edx + 0x38e], 0x32 */ W16((u32)(r_edx+0x38eu), 0x32u);
    /* 004edbe1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004edbe4: mov word ptr [eax + 0x390], 0x1e */ W16((u32)(r_eax+0x390u), 0x1eu);
    /* 004edbed: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004edbf0: mov word ptr [ecx + 0x392], 0x41 */ W16((u32)(r_ecx+0x392u), 0x41u);
    /* 004edbf9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004edbfc: mov word ptr [edx + 0x394], 0x32 */ W16((u32)(r_edx+0x394u), 0x32u);
    /* 004edc05: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004edc08: mov word ptr [eax + 0x38a], 5 */ W16((u32)(r_eax+0x38au), 0x5u);
    /* 004edc11: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004edc14: mov word ptr [ecx + 0x396], 0xc */ W16((u32)(r_ecx+0x396u), 0xcu);
    /* 004edc1d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004edc20: mov word ptr [edx + 0x398], 0xf */ W16((u32)(r_edx+0x398u), 0xfu);
    /* 004edc29: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004edc2c: mov word ptr [eax + 0x39a], 0x28 */ W16((u32)(r_eax+0x39au), 0x28u);
    /* 004edc35: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004edc38: mov word ptr [ecx + 0x39c], 0x4b */ W16((u32)(r_ecx+0x39cu), 0x4bu);
    /* 004edc41: jmp 0x4ede73 */ goto L_004ede73;
L_004edc46:; BB(0x004edc46);
    /* 004edc46: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004edc49: mov word ptr [edx + 0x370], 8 */ W16((u32)(r_edx+0x370u), 0x8u);
    /* 004edc52: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004edc55: mov word ptr [eax + 0x372], 0x1e */ W16((u32)(r_eax+0x372u), 0x1eu);
    /* 004edc5e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004edc61: mov word ptr [ecx + 0x374], 0x32 */ W16((u32)(r_ecx+0x374u), 0x32u);
    /* 004edc6a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004edc6d: mov word ptr [edx + 0x376], 0x19 */ W16((u32)(r_edx+0x376u), 0x19u);
    /* 004edc76: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004edc79: mov word ptr [eax + 0x378], 0x18 */ W16((u32)(r_eax+0x378u), 0x18u);
    /* 004edc82: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004edc85: mov word ptr [ecx + 0x37a], 0xa */ W16((u32)(r_ecx+0x37au), 0xau);
    /* 004edc8e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004edc91: mov word ptr [edx + 0x37c], 0x28 */ W16((u32)(r_edx+0x37cu), 0x28u);
    /* 004edc9a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004edc9d: mov word ptr [eax + 0x37e], 0xe */ W16((u32)(r_eax+0x37eu), 0xeu);
    /* 004edca6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004edca9: mov word ptr [ecx + 0x380], 0x14 */ W16((u32)(r_ecx+0x380u), 0x14u);
    /* 004edcb2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004edcb5: mov word ptr [edx + 0x382], 0x29 */ W16((u32)(r_edx+0x382u), 0x29u);
    /* 004edcbe: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004edcc1: mov word ptr [eax + 0x384], 0x1a */ W16((u32)(r_eax+0x384u), 0x1au);
    /* 004edcca: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004edccd: mov word ptr [ecx + 0x386], 8 */ W16((u32)(r_ecx+0x386u), 0x8u);
    /* 004edcd6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004edcd9: mov word ptr [edx + 0x388], 0x1e */ W16((u32)(r_edx+0x388u), 0x1eu);
    /* 004edce2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004edce5: mov word ptr [eax + 0x38c], 0x4b */ W16((u32)(r_eax+0x38cu), 0x4bu);
    /* 004edcee: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004edcf1: mov word ptr [ecx + 0x38e], 0x32 */ W16((u32)(r_ecx+0x38eu), 0x32u);
    /* 004edcfa: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004edcfd: mov word ptr [edx + 0x390], 0x23 */ W16((u32)(r_edx+0x390u), 0x23u);
    /* 004edd06: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004edd09: mov word ptr [eax + 0x392], 0x3c */ W16((u32)(r_eax+0x392u), 0x3cu);
    /* 004edd12: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004edd15: mov word ptr [ecx + 0x394], 0x28 */ W16((u32)(r_ecx+0x394u), 0x28u);
    /* 004edd1e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004edd21: mov word ptr [edx + 0x38a], 5 */ W16((u32)(r_edx+0x38au), 0x5u);
    /* 004edd2a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004edd2d: mov word ptr [eax + 0x396], 6 */ W16((u32)(r_eax+0x396u), 0x6u);
    /* 004edd36: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004edd39: mov word ptr [ecx + 0x398], 0x1e */ W16((u32)(r_ecx+0x398u), 0x1eu);
    /* 004edd42: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004edd45: mov word ptr [edx + 0x39a], 0x19 */ W16((u32)(r_edx+0x39au), 0x19u);
    /* 004edd4e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004edd51: mov word ptr [eax + 0x39c], 0x55 */ W16((u32)(r_eax+0x39cu), 0x55u);
    /* 004edd5a: jmp 0x4ede73 */ goto L_004ede73;
L_004edd5f:; BB(0x004edd5f);
    /* 004edd5f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004edd62: mov word ptr [ecx + 0x370], 7 */ W16((u32)(r_ecx+0x370u), 0x7u);
    /* 004edd6b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004edd6e: mov word ptr [edx + 0x372], 0x19 */ W16((u32)(r_edx+0x372u), 0x19u);
    /* 004edd77: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004edd7a: mov word ptr [eax + 0x374], 0x28 */ W16((u32)(r_eax+0x374u), 0x28u);
    /* 004edd83: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004edd86: mov word ptr [ecx + 0x376], 0x12 */ W16((u32)(r_ecx+0x376u), 0x12u);
    /* 004edd8f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004edd92: mov word ptr [edx + 0x378], 0x10 */ W16((u32)(r_edx+0x378u), 0x10u);
    /* 004edd9b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004edd9e: mov word ptr [eax + 0x37a], 8 */ W16((u32)(r_eax+0x37au), 0x8u);
    /* 004edda7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004eddaa: mov word ptr [ecx + 0x37c], 0x22 */ W16((u32)(r_ecx+0x37cu), 0x22u);
    /* 004eddb3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004eddb6: mov word ptr [edx + 0x37e], 0x10 */ W16((u32)(r_edx+0x37eu), 0x10u);
    /* 004eddbf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004eddc2: mov word ptr [eax + 0x380], 0x11 */ W16((u32)(r_eax+0x380u), 0x11u);
    /* 004eddcb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004eddce: mov word ptr [ecx + 0x382], 0x20 */ W16((u32)(r_ecx+0x382u), 0x20u);
    /* 004eddd7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004eddda: mov word ptr [edx + 0x384], 0x15 */ W16((u32)(r_edx+0x384u), 0x15u);
    /* 004edde3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004edde6: mov word ptr [eax + 0x386], 5 */ W16((u32)(r_eax+0x386u), 0x5u);
    /* 004eddef: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004eddf2: mov word ptr [ecx + 0x388], 0x28 */ W16((u32)(r_ecx+0x388u), 0x28u);
    /* 004eddfb: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004eddfe: mov word ptr [edx + 0x38a], 3 */ W16((u32)(r_edx+0x38au), 0x3u);
    /* 004ede07: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ede0a: mov word ptr [eax + 0x38c], 0x5a */ W16((u32)(r_eax+0x38cu), 0x5au);
    /* 004ede13: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ede16: mov word ptr [ecx + 0x38e], 0x3c */ W16((u32)(r_ecx+0x38eu), 0x3cu);
    /* 004ede1f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ede22: mov word ptr [edx + 0x390], 0x1e */ W16((u32)(r_edx+0x390u), 0x1eu);
    /* 004ede2b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ede2e: mov word ptr [eax + 0x392], 0x32 */ W16((u32)(r_eax+0x392u), 0x32u);
    /* 004ede37: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ede3a: mov word ptr [ecx + 0x394], 0x3c */ W16((u32)(r_ecx+0x394u), 0x3cu);
    /* 004ede43: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ede46: mov word ptr [edx + 0x396], 0xa */ W16((u32)(r_edx+0x396u), 0xau);
    /* 004ede4f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ede52: mov word ptr [eax + 0x398], 0x14 */ W16((u32)(r_eax+0x398u), 0x14u);
    /* 004ede5b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ede5e: mov word ptr [ecx + 0x39a], 0x28 */ W16((u32)(r_ecx+0x39au), 0x28u);
    /* 004ede67: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ede6a: mov word ptr [edx + 0x39c], 0x50 */ W16((u32)(r_edx+0x39cu), 0x50u);
L_004ede73:; BB(0x004ede73);
    /* 004ede73: mov esp, ebp */ r_esp = r_ebp;
    /* 004ede75: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ede76: ret 4 */ FN_RET(0x004ed310); r_esp += 8; return;
}

void f_004edeb0(void) /* PokerPlayer::func_004edeb0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004edeb0);
    /* 004edeb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004edeb1: mov ebp, esp */ r_ebp = r_esp;
    /* 004edeb3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004edeb6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004edeb7: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004edeba: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004edebd: movsx ecx, word ptr [eax + 0x64] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x64u));
    /* 004edec1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004edec3: jne 0x4eded9 */ if (!fZ) goto L_004eded9;
L_004edec5:; BB(0x004edec5);
    /* 004edec5: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004edec8: mov ax, word ptr [edx + 0x370] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+0x370u))) & 0xffffu);
    /* 004edecf: jmp 0x4edf8d */ goto L_004edf8d;
L_004eded9:; BB(0x004eded9);
    /* 004eded9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004ededc: movsx ecx, word ptr [eax + 0x64] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x64u));
    /* 004edee0: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004edee3: jne 0x4edf1d */ if (!fZ) goto L_004edf1d;
L_004edee5:; BB(0x004edee5);
    /* 004edee5: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004edee8: mov ax, word ptr [edx + 0x370] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+0x370u))) & 0xffffu);
    /* 004edeef: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 004edef3: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004edef5: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4edefau); f_0062fbf0();
    /* 004edefa: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004edefd: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004edf01: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004edf03: mov word ptr [ebp - 4], cx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_ecx);
    /* 004edf07: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004edf0b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004edf0d: jge 0x4edf15 */ if ((fS==fO)) goto L_004edf15;
L_004edf0f:; BB(0x004edf0f);
    /* 004edf0f: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
L_004edf15:; BB(0x004edf15);
    /* 004edf15: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 004edf19: jmp 0x4edf8d */ goto L_004edf8d;
L_004edf1d:; BB(0x004edf1d);
    /* 004edf1d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004edf20: movsx ecx, word ptr [eax + 0x64] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x64u));
    /* 004edf24: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004edf27: jne 0x4edf46 */ if (!fZ) goto L_004edf46;
L_004edf29:; BB(0x004edf29);
    /* 004edf29: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004edf2c: movsx esi, word ptr [edx + 0x370] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+0x370u));
    /* 004edf33: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004edf35: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4edf3au); f_0062fbf0();
    /* 004edf3a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004edf3d: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004edf3f: mov ax, si */ r_eax = (r_eax & 0xffff0000u) | (((u16)r_esi) & 0xffffu);
    /* 004edf42: jmp 0x4edf8d */ goto L_004edf8d;
L_004edf46:; BB(0x004edf46);
    /* 004edf46: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004edf49: movsx ecx, word ptr [eax + 0x64] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x64u));
    /* 004edf4d: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004edf50: jne 0x4edf6f */ if (!fZ) goto L_004edf6f;
L_004edf52:; BB(0x004edf52);
    /* 004edf52: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004edf55: movsx esi, word ptr [edx + 0x370] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+0x370u));
    /* 004edf5c: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004edf5e: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4edf63u); f_0062fbf0();
    /* 004edf63: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004edf66: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004edf68: mov ax, si */ r_eax = (r_eax & 0xffff0000u) | (((u16)r_esi) & 0xffffu);
    /* 004edf6b: jmp 0x4edf8d */ goto L_004edf8d;
L_004edf6f:; BB(0x004edf6f);
    /* 004edf6f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 004edf71: jne 0x4edf8a */ if (!fZ) goto L_004edf8a;
L_004edf73:; BB(0x004edf73);
    /* 004edf73: push 0x2b4e */ { u32 v = 0x2b4eu; r_esp -= 4; W32(r_esp, v); }
    /* 004edf78: push 0x6bf384 */ { u32 v = 0x6bf384u; r_esp -= 4; W32(r_esp, v); }
    /* 004edf7d: push 0x6b2b64 */ { u32 v = 0x6b2b64u; r_esp -= 4; W32(r_esp, v); }
    /* 004edf82: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4edf87u); f_005e9f20();
    /* 004edf87: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004edf8a:; BB(0x004edf8a);
    /* 004edf8a: xor ax, ax */ {  u32 a = (u16)r_eax; u32 b = (u16)r_eax; u32 r = (a ^ b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
L_004edf8d:; BB(0x004edf8d);
    /* 004edf8d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004edf8e: mov esp, ebp */ r_esp = r_ebp;
    /* 004edf90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004edf91: ret  */ FN_RET(0x004edeb0); r_esp += 4; return;
}

void f_004edfd0(void) /* PokerPlayer::func_004edfd0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004edfd0);
    /* 004edfd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004edfd1: mov ebp, esp */ r_ebp = r_esp;
    /* 004edfd3: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004edfd6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004edfd9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004edfdc: movsx ecx, word ptr [eax + 0x64] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x64u));
    /* 004edfe0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004edfe2: jne 0x4ee004 */ if (!fZ) goto L_004ee004;
L_004edfe4:; BB(0x004edfe4);
    /* 004edfe4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004edfe7: movsx eax, word ptr [edx + 0x378] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x378u));
    /* 004edfee: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004edff1: fild dword ptr [ebp - 8] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff8u)));
    /* 004edff4: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 004edffa: jmp 0x4ee093 */ goto L_004ee093;
L_004ee004:; BB(0x004ee004);
    /* 004ee004: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ee007: movsx edx, word ptr [ecx + 0x64] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x64u));
    /* 004ee00b: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ee00e: jne 0x4ee02a */ if (!fZ) goto L_004ee02a;
L_004ee010:; BB(0x004ee010);
    /* 004ee010: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ee013: movsx ecx, word ptr [eax + 0x378] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x378u));
    /* 004ee01a: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 004ee01d: fild dword ptr [ebp - 0xc] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff4u)));
    /* 004ee020: fdiv qword ptr [0x6bf718] */ ST(0) = ST(0) / R_F64((u32)(0x6bf718u));
    /* 004ee026: jmp 0x4ee093 */ goto L_004ee093;
L_004ee02a:; BB(0x004ee02a);
    /* 004ee02a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ee02d: movsx eax, word ptr [edx + 0x64] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x64u));
    /* 004ee031: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ee034: jne 0x4ee050 */ if (!fZ) goto L_004ee050;
L_004ee036:; BB(0x004ee036);
    /* 004ee036: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ee039: movsx edx, word ptr [ecx + 0x378] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x378u));
    /* 004ee040: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 004ee043: fild dword ptr [ebp - 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff0u)));
    /* 004ee046: fdiv qword ptr [0x6bf710] */ ST(0) = ST(0) / R_F64((u32)(0x6bf710u));
    /* 004ee04c: jmp 0x4ee093 */ goto L_004ee093;
L_004ee050:; BB(0x004ee050);
    /* 004ee050: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ee053: movsx ecx, word ptr [eax + 0x64] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x64u));
    /* 004ee057: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ee05a: jne 0x4ee076 */ if (!fZ) goto L_004ee076;
L_004ee05c:; BB(0x004ee05c);
    /* 004ee05c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ee05f: movsx eax, word ptr [edx + 0x378] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x378u));
    /* 004ee066: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004ee069: fild dword ptr [ebp - 0x14] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffecu)));
    /* 004ee06c: fdiv qword ptr [0x6bf708] */ ST(0) = ST(0) / R_F64((u32)(0x6bf708u));
    /* 004ee072: jmp 0x4ee093 */ goto L_004ee093;
L_004ee076:; BB(0x004ee076);
    /* 004ee076: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 004ee078: jne 0x4ee091 */ if (!fZ) goto L_004ee091;
L_004ee07a:; BB(0x004ee07a);
    /* 004ee07a: push 0x2b63 */ { u32 v = 0x2b63u; r_esp -= 4; W32(r_esp, v); }
    /* 004ee07f: push 0x6bf384 */ { u32 v = 0x6bf384u; r_esp -= 4; W32(r_esp, v); }
    /* 004ee084: push 0x6b2b64 */ { u32 v = 0x6b2b64u; r_esp -= 4; W32(r_esp, v); }
    /* 004ee089: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4ee08eu); f_005e9f20();
    /* 004ee08e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004ee091:; BB(0x004ee091);
    /* 004ee091: fldz  */ FPUSH(0.0);
L_004ee093:; BB(0x004ee093);
    /* 004ee093: mov esp, ebp */ r_esp = r_ebp;
    /* 004ee095: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ee096: ret  */ FN_RET(0x004edfd0); r_esp += 4; return;
}

void f_004ee0a0(void) /* PokerPlayer::func_004ee0a0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004ee0a0);
    /* 004ee0a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ee0a1: mov ebp, esp */ r_ebp = r_esp;
    /* 004ee0a3: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ee0a6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004ee0a9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ee0ac: movsx ecx, word ptr [eax + 0x64] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x64u));
    /* 004ee0b0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ee0b2: jne 0x4ee0d4 */ if (!fZ) goto L_004ee0d4;
L_004ee0b4:; BB(0x004ee0b4);
    /* 004ee0b4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ee0b7: movsx eax, word ptr [edx + 0x37a] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x37au));
    /* 004ee0be: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004ee0c1: fild dword ptr [ebp - 8] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff8u)));
    /* 004ee0c4: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 004ee0ca: jmp 0x4ee163 */ goto L_004ee163;
L_004ee0d4:; BB(0x004ee0d4);
    /* 004ee0d4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ee0d7: movsx edx, word ptr [ecx + 0x64] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x64u));
    /* 004ee0db: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ee0de: jne 0x4ee0fa */ if (!fZ) goto L_004ee0fa;
L_004ee0e0:; BB(0x004ee0e0);
    /* 004ee0e0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ee0e3: movsx ecx, word ptr [eax + 0x37a] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x37au));
    /* 004ee0ea: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 004ee0ed: fild dword ptr [ebp - 0xc] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff4u)));
    /* 004ee0f0: fdiv qword ptr [0x6bf718] */ ST(0) = ST(0) / R_F64((u32)(0x6bf718u));
    /* 004ee0f6: jmp 0x4ee163 */ goto L_004ee163;
L_004ee0fa:; BB(0x004ee0fa);
    /* 004ee0fa: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ee0fd: movsx eax, word ptr [edx + 0x64] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x64u));
    /* 004ee101: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ee104: jne 0x4ee120 */ if (!fZ) goto L_004ee120;
L_004ee106:; BB(0x004ee106);
    /* 004ee106: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ee109: movsx edx, word ptr [ecx + 0x37a] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x37au));
    /* 004ee110: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 004ee113: fild dword ptr [ebp - 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff0u)));
    /* 004ee116: fdiv qword ptr [0x6bf710] */ ST(0) = ST(0) / R_F64((u32)(0x6bf710u));
    /* 004ee11c: jmp 0x4ee163 */ goto L_004ee163;
L_004ee120:; BB(0x004ee120);
    /* 004ee120: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ee123: movsx ecx, word ptr [eax + 0x64] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x64u));
    /* 004ee127: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ee12a: jne 0x4ee146 */ if (!fZ) goto L_004ee146;
L_004ee12c:; BB(0x004ee12c);
    /* 004ee12c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ee12f: movsx eax, word ptr [edx + 0x37a] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x37au));
    /* 004ee136: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004ee139: fild dword ptr [ebp - 0x14] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffecu)));
    /* 004ee13c: fdiv qword ptr [0x6bf708] */ ST(0) = ST(0) / R_F64((u32)(0x6bf708u));
    /* 004ee142: jmp 0x4ee163 */ goto L_004ee163;
L_004ee146:; BB(0x004ee146);
    /* 004ee146: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 004ee148: jne 0x4ee161 */ if (!fZ) goto L_004ee161;
L_004ee14a:; BB(0x004ee14a);
    /* 004ee14a: push 0x2b73 */ { u32 v = 0x2b73u; r_esp -= 4; W32(r_esp, v); }
    /* 004ee14f: push 0x6bf384 */ { u32 v = 0x6bf384u; r_esp -= 4; W32(r_esp, v); }
    /* 004ee154: push 0x6b2b64 */ { u32 v = 0x6b2b64u; r_esp -= 4; W32(r_esp, v); }
    /* 004ee159: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4ee15eu); f_005e9f20();
    /* 004ee15e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004ee161:; BB(0x004ee161);
    /* 004ee161: fldz  */ FPUSH(0.0);
L_004ee163:; BB(0x004ee163);
    /* 004ee163: mov esp, ebp */ r_esp = r_ebp;
    /* 004ee165: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ee166: ret  */ FN_RET(0x004ee0a0); r_esp += 4; return;
}

void f_004ee170(void) /* PokerPlayer::func_004ee170 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004ee170);
    /* 004ee170: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ee171: mov ebp, esp */ r_ebp = r_esp;
    /* 004ee173: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ee176: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004ee179: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ee17c: movsx ecx, word ptr [eax + 0x64] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x64u));
    /* 004ee180: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ee182: jne 0x4ee1a4 */ if (!fZ) goto L_004ee1a4;
L_004ee184:; BB(0x004ee184);
    /* 004ee184: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ee187: movsx eax, word ptr [edx + 0x37c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x37cu));
    /* 004ee18e: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004ee191: fild dword ptr [ebp - 8] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff8u)));
    /* 004ee194: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 004ee19a: jmp 0x4ee233 */ goto L_004ee233;
L_004ee1a4:; BB(0x004ee1a4);
    /* 004ee1a4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ee1a7: movsx edx, word ptr [ecx + 0x64] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x64u));
    /* 004ee1ab: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ee1ae: jne 0x4ee1ca */ if (!fZ) goto L_004ee1ca;
L_004ee1b0:; BB(0x004ee1b0);
    /* 004ee1b0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ee1b3: movsx ecx, word ptr [eax + 0x37c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x37cu));
    /* 004ee1ba: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 004ee1bd: fild dword ptr [ebp - 0xc] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff4u)));
    /* 004ee1c0: fdiv qword ptr [0x6bf718] */ ST(0) = ST(0) / R_F64((u32)(0x6bf718u));
    /* 004ee1c6: jmp 0x4ee233 */ goto L_004ee233;
L_004ee1ca:; BB(0x004ee1ca);
    /* 004ee1ca: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ee1cd: movsx eax, word ptr [edx + 0x64] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x64u));
    /* 004ee1d1: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ee1d4: jne 0x4ee1f0 */ if (!fZ) goto L_004ee1f0;
L_004ee1d6:; BB(0x004ee1d6);
    /* 004ee1d6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ee1d9: movsx edx, word ptr [ecx + 0x37c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x37cu));
    /* 004ee1e0: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 004ee1e3: fild dword ptr [ebp - 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff0u)));
    /* 004ee1e6: fdiv qword ptr [0x6bf710] */ ST(0) = ST(0) / R_F64((u32)(0x6bf710u));
    /* 004ee1ec: jmp 0x4ee233 */ goto L_004ee233;
L_004ee1f0:; BB(0x004ee1f0);
    /* 004ee1f0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ee1f3: movsx ecx, word ptr [eax + 0x64] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x64u));
    /* 004ee1f7: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ee1fa: jne 0x4ee216 */ if (!fZ) goto L_004ee216;
L_004ee1fc:; BB(0x004ee1fc);
    /* 004ee1fc: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ee1ff: movsx eax, word ptr [edx + 0x37c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x37cu));
    /* 004ee206: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004ee209: fild dword ptr [ebp - 0x14] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffecu)));
    /* 004ee20c: fdiv qword ptr [0x6bf708] */ ST(0) = ST(0) / R_F64((u32)(0x6bf708u));
    /* 004ee212: jmp 0x4ee233 */ goto L_004ee233;
L_004ee216:; BB(0x004ee216);
    /* 004ee216: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 004ee218: jne 0x4ee231 */ if (!fZ) goto L_004ee231;
L_004ee21a:; BB(0x004ee21a);
    /* 004ee21a: push 0x2b83 */ { u32 v = 0x2b83u; r_esp -= 4; W32(r_esp, v); }
    /* 004ee21f: push 0x6bf384 */ { u32 v = 0x6bf384u; r_esp -= 4; W32(r_esp, v); }
    /* 004ee224: push 0x6b2b64 */ { u32 v = 0x6b2b64u; r_esp -= 4; W32(r_esp, v); }
    /* 004ee229: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4ee22eu); f_005e9f20();
    /* 004ee22e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004ee231:; BB(0x004ee231);
    /* 004ee231: fldz  */ FPUSH(0.0);
L_004ee233:; BB(0x004ee233);
    /* 004ee233: mov esp, ebp */ r_esp = r_ebp;
    /* 004ee235: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ee236: ret  */ FN_RET(0x004ee170); r_esp += 4; return;
}

void f_004ee240(void) /* PokerPlayer::func_004ee240 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004ee240);
    /* 004ee240: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ee241: mov ebp, esp */ r_ebp = r_esp;
    /* 004ee243: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ee246: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004ee249: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ee24c: movsx ecx, word ptr [eax + 0x64] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x64u));
    /* 004ee250: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ee252: jne 0x4ee274 */ if (!fZ) goto L_004ee274;
L_004ee254:; BB(0x004ee254);
    /* 004ee254: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ee257: movsx eax, word ptr [edx + 0x37e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x37eu));
    /* 004ee25e: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004ee261: fild dword ptr [ebp - 8] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff8u)));
    /* 004ee264: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 004ee26a: jmp 0x4ee303 */ goto L_004ee303;
L_004ee274:; BB(0x004ee274);
    /* 004ee274: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ee277: movsx edx, word ptr [ecx + 0x64] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x64u));
    /* 004ee27b: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ee27e: jne 0x4ee29a */ if (!fZ) goto L_004ee29a;
L_004ee280:; BB(0x004ee280);
    /* 004ee280: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ee283: movsx ecx, word ptr [eax + 0x37e] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x37eu));
    /* 004ee28a: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 004ee28d: fild dword ptr [ebp - 0xc] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff4u)));
    /* 004ee290: fdiv qword ptr [0x6bf718] */ ST(0) = ST(0) / R_F64((u32)(0x6bf718u));
    /* 004ee296: jmp 0x4ee303 */ goto L_004ee303;
L_004ee29a:; BB(0x004ee29a);
    /* 004ee29a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ee29d: movsx eax, word ptr [edx + 0x64] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x64u));
    /* 004ee2a1: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ee2a4: jne 0x4ee2c0 */ if (!fZ) goto L_004ee2c0;
L_004ee2a6:; BB(0x004ee2a6);
    /* 004ee2a6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ee2a9: movsx edx, word ptr [ecx + 0x37e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x37eu));
    /* 004ee2b0: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 004ee2b3: fild dword ptr [ebp - 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff0u)));
    /* 004ee2b6: fdiv qword ptr [0x6bf710] */ ST(0) = ST(0) / R_F64((u32)(0x6bf710u));
    /* 004ee2bc: jmp 0x4ee303 */ goto L_004ee303;
L_004ee2c0:; BB(0x004ee2c0);
    /* 004ee2c0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ee2c3: movsx ecx, word ptr [eax + 0x64] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x64u));
    /* 004ee2c7: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ee2ca: jne 0x4ee2e6 */ if (!fZ) goto L_004ee2e6;
L_004ee2cc:; BB(0x004ee2cc);
    /* 004ee2cc: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ee2cf: movsx eax, word ptr [edx + 0x37e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x37eu));
    /* 004ee2d6: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004ee2d9: fild dword ptr [ebp - 0x14] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffecu)));
    /* 004ee2dc: fdiv qword ptr [0x6bf708] */ ST(0) = ST(0) / R_F64((u32)(0x6bf708u));
    /* 004ee2e2: jmp 0x4ee303 */ goto L_004ee303;
L_004ee2e6:; BB(0x004ee2e6);
    /* 004ee2e6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 004ee2e8: jne 0x4ee301 */ if (!fZ) goto L_004ee301;
L_004ee2ea:; BB(0x004ee2ea);
    /* 004ee2ea: push 0x2b93 */ { u32 v = 0x2b93u; r_esp -= 4; W32(r_esp, v); }
    /* 004ee2ef: push 0x6bf384 */ { u32 v = 0x6bf384u; r_esp -= 4; W32(r_esp, v); }
    /* 004ee2f4: push 0x6b2b64 */ { u32 v = 0x6b2b64u; r_esp -= 4; W32(r_esp, v); }
    /* 004ee2f9: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4ee2feu); f_005e9f20();
    /* 004ee2fe: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004ee301:; BB(0x004ee301);
    /* 004ee301: fldz  */ FPUSH(0.0);
L_004ee303:; BB(0x004ee303);
    /* 004ee303: mov esp, ebp */ r_esp = r_ebp;
    /* 004ee305: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ee306: ret  */ FN_RET(0x004ee240); r_esp += 4; return;
}

void f_004ee310(void) /* PokerPlayer::func_004ee310 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004ee310);
    /* 004ee310: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ee311: mov ebp, esp */ r_ebp = r_esp;
    /* 004ee313: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ee316: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004ee317: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004ee31a: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ee31e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ee321: jge 0x4ee33a */ if ((fS==fO)) goto L_004ee33a;
L_004ee323:; BB(0x004ee323);
    /* 004ee323: push 0x2b9a */ { u32 v = 0x2b9au; r_esp -= 4; W32(r_esp, v); }
    /* 004ee328: push 0x6bf384 */ { u32 v = 0x6bf384u; r_esp -= 4; W32(r_esp, v); }
    /* 004ee32d: push 0x6bf730 */ { u32 v = 0x6bf730u; r_esp -= 4; W32(r_esp, v); }
    /* 004ee332: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4ee337u); f_005e9f20();
    /* 004ee337: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004ee33a:; BB(0x004ee33a);
    /* 004ee33a: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ee33e: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ee341: jle 0x4ee35a */ if ((fZ||fS!=fO)) goto L_004ee35a;
L_004ee343:; BB(0x004ee343);
    /* 004ee343: push 0x2b9b */ { u32 v = 0x2b9bu; r_esp -= 4; W32(r_esp, v); }
    /* 004ee348: push 0x6bf384 */ { u32 v = 0x6bf384u; r_esp -= 4; W32(r_esp, v); }
    /* 004ee34d: push 0x6bf720 */ { u32 v = 0x6bf720u; r_esp -= 4; W32(r_esp, v); }
    /* 004ee352: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4ee357u); f_005e9f20();
    /* 004ee357: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004ee35a:; BB(0x004ee35a);
    /* 004ee35a: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004ee360: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004ee363: movsx edx, word ptr [ecx + 0x64] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x64u));
    /* 004ee367: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ee369: jne 0x4ee3b3 */ if (!fZ) goto L_004ee3b3;
L_004ee36b:; BB(0x004ee36b);
    /* 004ee36b: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ee36f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ee372: jne 0x4ee385 */ if (!fZ) goto L_004ee385;
L_004ee374:; BB(0x004ee374);
    /* 004ee374: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004ee377: mov ax, word ptr [ecx + 0x390] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ecx+0x390u))) & 0xffffu);
    /* 004ee37e: jmp 0x4ee50b */ goto L_004ee50b;
L_004ee385:; BB(0x004ee385);
    /* 004ee385: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ee389: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ee38c: jne 0x4ee39f */ if (!fZ) goto L_004ee39f;
L_004ee38e:; BB(0x004ee38e);
    /* 004ee38e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004ee391: mov ax, word ptr [eax + 0x38e] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+0x38eu))) & 0xffffu);
    /* 004ee398: jmp 0x4ee50b */ goto L_004ee50b;
L_004ee39f:; BB(0x004ee39f);
    /* 004ee39f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004ee3a2: mov ax, word ptr [ecx + 0x38c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ecx+0x38cu))) & 0xffffu);
    /* 004ee3a9: jmp 0x4ee50b */ goto L_004ee50b;
L_004ee3b3:; BB(0x004ee3b3);
    /* 004ee3b3: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004ee3b6: movsx eax, word ptr [edx + 0x64] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x64u));
    /* 004ee3ba: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ee3bd: jne 0x4ee416 */ if (!fZ) goto L_004ee416;
L_004ee3bf:; BB(0x004ee3bf);
    /* 004ee3bf: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ee3c3: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ee3c6: jne 0x4ee3de */ if (!fZ) goto L_004ee3de;
L_004ee3c8:; BB(0x004ee3c8);
    /* 004ee3c8: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004ee3cb: movsx eax, word ptr [edx + 0x390] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x390u));
    /* 004ee3d2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004ee3d3: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004ee3d5: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004ee3d7: jmp 0x4ee50b */ goto L_004ee50b;
L_004ee3de:; BB(0x004ee3de);
    /* 004ee3de: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ee3e2: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ee3e5: jne 0x4ee3fd */ if (!fZ) goto L_004ee3fd;
L_004ee3e7:; BB(0x004ee3e7);
    /* 004ee3e7: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004ee3ea: movsx eax, word ptr [ecx + 0x38e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x38eu));
    /* 004ee3f1: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004ee3f2: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004ee3f4: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004ee3f6: jmp 0x4ee50b */ goto L_004ee50b;
L_004ee3fd:; BB(0x004ee3fd);
    /* 004ee3fd: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004ee400: movsx eax, word ptr [edx + 0x38c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x38cu));
    /* 004ee407: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004ee408: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004ee40a: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004ee40c: jmp 0x4ee50b */ goto L_004ee50b;
L_004ee416:; BB(0x004ee416);
    /* 004ee416: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004ee419: movsx ecx, word ptr [eax + 0x64] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x64u));
    /* 004ee41d: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ee420: jne 0x4ee488 */ if (!fZ) goto L_004ee488;
L_004ee422:; BB(0x004ee422);
    /* 004ee422: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ee426: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ee429: jne 0x4ee447 */ if (!fZ) goto L_004ee447;
L_004ee42b:; BB(0x004ee42b);
    /* 004ee42b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004ee42e: movsx esi, word ptr [eax + 0x390] */ r_esi = (u32)(i32)(i16)R16((u32)(r_eax+0x390u));
    /* 004ee435: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 004ee437: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4ee43cu); f_0062fbf0();
    /* 004ee43c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ee43f: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004ee441: mov word ptr [ebp - 4], si */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_esi);
    /* 004ee445: jmp 0x4ee486 */ goto L_004ee486;
L_004ee447:; BB(0x004ee447);
    /* 004ee447: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ee44b: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ee44e: jne 0x4ee46c */ if (!fZ) goto L_004ee46c;
L_004ee450:; BB(0x004ee450);
    /* 004ee450: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004ee453: movsx esi, word ptr [edx + 0x38e] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+0x38eu));
    /* 004ee45a: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 004ee45c: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4ee461u); f_0062fbf0();
    /* 004ee461: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ee464: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004ee466: mov word ptr [ebp - 4], si */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_esi);
    /* 004ee46a: jmp 0x4ee486 */ goto L_004ee486;
L_004ee46c:; BB(0x004ee46c);
    /* 004ee46c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004ee46f: movsx esi, word ptr [eax + 0x38c] */ r_esi = (u32)(i32)(i16)R16((u32)(r_eax+0x38cu));
    /* 004ee476: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 004ee478: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4ee47du); f_0062fbf0();
    /* 004ee47d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ee480: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004ee482: mov word ptr [ebp - 4], si */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_esi);
L_004ee486:; BB(0x004ee486);
    /* 004ee486: jmp 0x4ee4f8 */ goto L_004ee4f8;
L_004ee488:; BB(0x004ee488);
    /* 004ee488: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004ee48b: movsx edx, word ptr [ecx + 0x64] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x64u));
    /* 004ee48f: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ee492: jne 0x4ee4f8 */ if (!fZ) goto L_004ee4f8;
L_004ee494:; BB(0x004ee494);
    /* 004ee494: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ee498: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ee49b: jne 0x4ee4b9 */ if (!fZ) goto L_004ee4b9;
L_004ee49d:; BB(0x004ee49d);
    /* 004ee49d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004ee4a0: movsx esi, word ptr [ecx + 0x390] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ecx+0x390u));
    /* 004ee4a7: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 004ee4a9: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4ee4aeu); f_0062fbf0();
    /* 004ee4ae: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ee4b1: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004ee4b3: mov word ptr [ebp - 4], si */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_esi);
    /* 004ee4b7: jmp 0x4ee4f8 */ goto L_004ee4f8;
L_004ee4b9:; BB(0x004ee4b9);
    /* 004ee4b9: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ee4bd: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ee4c0: jne 0x4ee4de */ if (!fZ) goto L_004ee4de;
L_004ee4c2:; BB(0x004ee4c2);
    /* 004ee4c2: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004ee4c5: movsx esi, word ptr [eax + 0x38e] */ r_esi = (u32)(i32)(i16)R16((u32)(r_eax+0x38eu));
    /* 004ee4cc: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 004ee4ce: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4ee4d3u); f_0062fbf0();
    /* 004ee4d3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ee4d6: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004ee4d8: mov word ptr [ebp - 4], si */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_esi);
    /* 004ee4dc: jmp 0x4ee4f8 */ goto L_004ee4f8;
L_004ee4de:; BB(0x004ee4de);
    /* 004ee4de: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004ee4e1: movsx esi, word ptr [ecx + 0x38c] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ecx+0x38cu));
    /* 004ee4e8: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 004ee4ea: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4ee4efu); f_0062fbf0();
    /* 004ee4ef: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ee4f2: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004ee4f4: mov word ptr [ebp - 4], si */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_esi);
L_004ee4f8:; BB(0x004ee4f8);
    /* 004ee4f8: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004ee4fc: cmp edx, 0x60 */ {  u32 a = r_edx; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ee4ff: jle 0x4ee507 */ if ((fZ||fS!=fO)) goto L_004ee507;
L_004ee501:; BB(0x004ee501);
    /* 004ee501: mov word ptr [ebp - 4], 0x60 */ W16((u32)(r_ebp+0xfffffffcu), 0x60u);
L_004ee507:; BB(0x004ee507);
    /* 004ee507: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
L_004ee50b:; BB(0x004ee50b);
    /* 004ee50b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004ee50c: mov esp, ebp */ r_esp = r_ebp;
    /* 004ee50e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ee50f: ret 4 */ FN_RET(0x004ee310); r_esp += 8; return;
}

void f_004ee560(void) /* PokerPlayer::func_004ee560 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004ee560);
    /* 004ee560: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ee561: mov ebp, esp */ r_ebp = r_esp;
    /* 004ee563: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004ee564: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004ee565: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004ee568: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ee56b: movsx ecx, word ptr [eax + 0x64] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x64u));
    /* 004ee56f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ee571: jne 0x4ee587 */ if (!fZ) goto L_004ee587;
L_004ee573:; BB(0x004ee573);
    /* 004ee573: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ee576: mov ax, word ptr [edx + 0x396] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+0x396u))) & 0xffffu);
    /* 004ee57d: jmp 0x4ee616 */ goto L_004ee616;
L_004ee587:; BB(0x004ee587);
    /* 004ee587: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ee58a: movsx ecx, word ptr [eax + 0x64] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x64u));
    /* 004ee58e: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ee591: jne 0x4ee5a6 */ if (!fZ) goto L_004ee5a6;
L_004ee593:; BB(0x004ee593);
    /* 004ee593: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ee596: movsx eax, word ptr [edx + 0x396] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x396u));
    /* 004ee59d: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004ee59e: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004ee5a0: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004ee5a2: jmp 0x4ee616 */ goto L_004ee616;
L_004ee5a6:; BB(0x004ee5a6);
    /* 004ee5a6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ee5a9: movsx ecx, word ptr [eax + 0x64] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x64u));
    /* 004ee5ad: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ee5b0: jne 0x4ee5cf */ if (!fZ) goto L_004ee5cf;
L_004ee5b2:; BB(0x004ee5b2);
    /* 004ee5b2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ee5b5: movsx esi, word ptr [edx + 0x396] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+0x396u));
    /* 004ee5bc: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004ee5be: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4ee5c3u); f_0062fbf0();
    /* 004ee5c3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ee5c6: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004ee5c8: mov ax, si */ r_eax = (r_eax & 0xffff0000u) | (((u16)r_esi) & 0xffffu);
    /* 004ee5cb: jmp 0x4ee616 */ goto L_004ee616;
L_004ee5cf:; BB(0x004ee5cf);
    /* 004ee5cf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ee5d2: movsx ecx, word ptr [eax + 0x64] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x64u));
    /* 004ee5d6: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ee5d9: jne 0x4ee5f8 */ if (!fZ) goto L_004ee5f8;
L_004ee5db:; BB(0x004ee5db);
    /* 004ee5db: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ee5de: movsx esi, word ptr [edx + 0x396] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+0x396u));
    /* 004ee5e5: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004ee5e7: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4ee5ecu); f_0062fbf0();
    /* 004ee5ec: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ee5ef: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004ee5f1: mov ax, si */ r_eax = (r_eax & 0xffff0000u) | (((u16)r_esi) & 0xffffu);
    /* 004ee5f4: jmp 0x4ee616 */ goto L_004ee616;
L_004ee5f8:; BB(0x004ee5f8);
    /* 004ee5f8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 004ee5fa: jne 0x4ee613 */ if (!fZ) goto L_004ee613;
L_004ee5fc:; BB(0x004ee5fc);
    /* 004ee5fc: push 0x2bdd */ { u32 v = 0x2bddu; r_esp -= 4; W32(r_esp, v); }
    /* 004ee601: push 0x6bf384 */ { u32 v = 0x6bf384u; r_esp -= 4; W32(r_esp, v); }
    /* 004ee606: push 0x6b2b64 */ { u32 v = 0x6b2b64u; r_esp -= 4; W32(r_esp, v); }
    /* 004ee60b: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4ee610u); f_005e9f20();
    /* 004ee610: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004ee613:; BB(0x004ee613);
    /* 004ee613: xor ax, ax */ {  u32 a = (u16)r_eax; u32 b = (u16)r_eax; u32 r = (a ^ b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
L_004ee616:; BB(0x004ee616);
    /* 004ee616: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004ee617: mov esp, ebp */ r_esp = r_ebp;
    /* 004ee619: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ee61a: ret  */ FN_RET(0x004ee560); r_esp += 4; return;
}

void f_004ee6a0(void) /* PokerPlayer::func_004ee6a0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004ee6a0);
    /* 004ee6a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ee6a1: mov ebp, esp */ r_ebp = r_esp;
    /* 004ee6a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004ee6a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004ee6a7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ee6aa: movsx ecx, word ptr [eax + 0x64] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x64u));
    /* 004ee6ae: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ee6b0: jne 0x4ee6c0 */ if (!fZ) goto L_004ee6c0;
L_004ee6b2:; BB(0x004ee6b2);
    /* 004ee6b2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ee6b5: mov ax, word ptr [edx + 0x39c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+0x39cu))) & 0xffffu);
    /* 004ee6bc: jmp 0x4ee735 */ goto L_004ee735;
L_004ee6c0:; BB(0x004ee6c0);
    /* 004ee6c0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ee6c3: movsx ecx, word ptr [eax + 0x64] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x64u));
    /* 004ee6c7: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ee6ca: jne 0x4ee6dd */ if (!fZ) goto L_004ee6dd;
L_004ee6cc:; BB(0x004ee6cc);
    /* 004ee6cc: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ee6cf: movsx eax, word ptr [edx + 0x39c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x39cu));
    /* 004ee6d6: sub eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004ee6d9: jmp 0x4ee735 */ goto L_004ee735;
L_004ee6dd:; BB(0x004ee6dd);
    /* 004ee6dd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ee6e0: movsx ecx, word ptr [eax + 0x64] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x64u));
    /* 004ee6e4: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ee6e7: jne 0x4ee6fa */ if (!fZ) goto L_004ee6fa;
L_004ee6e9:; BB(0x004ee6e9);
    /* 004ee6e9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ee6ec: movsx eax, word ptr [edx + 0x39c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x39cu));
    /* 004ee6f3: add eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004ee6f6: jmp 0x4ee735 */ goto L_004ee735;
L_004ee6fa:; BB(0x004ee6fa);
    /* 004ee6fa: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ee6fd: movsx ecx, word ptr [eax + 0x64] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x64u));
    /* 004ee701: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ee704: jne 0x4ee717 */ if (!fZ) goto L_004ee717;
L_004ee706:; BB(0x004ee706);
    /* 004ee706: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ee709: movsx eax, word ptr [edx + 0x39c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x39cu));
    /* 004ee710: add eax, 0x1e */ {  u32 a = r_eax; u32 b = 0x1eu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004ee713: jmp 0x4ee735 */ goto L_004ee735;
L_004ee717:; BB(0x004ee717);
    /* 004ee717: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 004ee719: jne 0x4ee732 */ if (!fZ) goto L_004ee732;
L_004ee71b:; BB(0x004ee71b);
    /* 004ee71b: push 0x2bfd */ { u32 v = 0x2bfdu; r_esp -= 4; W32(r_esp, v); }
    /* 004ee720: push 0x6bf384 */ { u32 v = 0x6bf384u; r_esp -= 4; W32(r_esp, v); }
    /* 004ee725: push 0x6b2b64 */ { u32 v = 0x6b2b64u; r_esp -= 4; W32(r_esp, v); }
    /* 004ee72a: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4ee72fu); f_005e9f20();
    /* 004ee72f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004ee732:; BB(0x004ee732);
    /* 004ee732: xor ax, ax */ {  u32 a = (u16)r_eax; u32 b = (u16)r_eax; u32 r = (a ^ b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
L_004ee735:; BB(0x004ee735);
    /* 004ee735: mov esp, ebp */ r_esp = r_ebp;
    /* 004ee737: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ee738: ret  */ FN_RET(0x004ee6a0); r_esp += 4; return;
}

void f_004ee740(void) /* PokerPlayer::func_004ee740 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004ee740);
    /* 004ee740: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ee741: mov ebp, esp */ r_ebp = r_esp;
    /* 004ee743: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ee746: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004ee747: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004ee74a: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ee74e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004ee750: jge 0x4ee769 */ if ((fS==fO)) goto L_004ee769;
L_004ee752:; BB(0x004ee752);
    /* 004ee752: push 0x2c04 */ { u32 v = 0x2c04u; r_esp -= 4; W32(r_esp, v); }
    /* 004ee757: push 0x6bf384 */ { u32 v = 0x6bf384u; r_esp -= 4; W32(r_esp, v); }
    /* 004ee75c: push 0x6bf888 */ { u32 v = 0x6bf888u; r_esp -= 4; W32(r_esp, v); }
    /* 004ee761: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4ee766u); f_005e9f20();
    /* 004ee766: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004ee769:; BB(0x004ee769);
    /* 004ee769: movsx esi, word ptr [ebp + 8] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ee76d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004ee773: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x4ee778u); f_0047f950();
    /* 004ee778: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ee77a: jl 0x4ee793 */ if ((fS!=fO)) goto L_004ee793;
L_004ee77c:; BB(0x004ee77c);
    /* 004ee77c: push 0x2c05 */ { u32 v = 0x2c05u; r_esp -= 4; W32(r_esp, v); }
    /* 004ee781: push 0x6bf384 */ { u32 v = 0x6bf384u; r_esp -= 4; W32(r_esp, v); }
    /* 004ee786: push 0x6bf858 */ { u32 v = 0x6bf858u; r_esp -= 4; W32(r_esp, v); }
    /* 004ee78b: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4ee790u); f_005e9f20();
    /* 004ee790: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004ee793:; BB(0x004ee793);
    /* 004ee793: mov word ptr [ebp - 4], 2 */ W16((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 004ee799: jmp 0x4ee7a7 */ goto L_004ee7a7;
L_004ee79b:; BB(0x004ee79b);
    /* 004ee79b: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 004ee79f: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004ee7a3: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_004ee7a7:; BB(0x004ee7a7);
    /* 004ee7a7: movsx esi, word ptr [ebp - 4] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004ee7ab: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004ee7b1: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x4ee7b6u); f_0047f950();
    /* 004ee7b6: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ee7b8: jg 0x4ee823 */ if ((!fZ&&fS==fO)) goto L_004ee823;
L_004ee7ba:; BB(0x004ee7ba);
    /* 004ee7ba: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004ee7bd: mov edx, dword ptr [ecx + 0x428] */ r_edx = R32((u32)(r_ecx+0x428u));
    /* 004ee7c3: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ee7c7: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ee7ca: lea ecx, [edx + eax + 0xb60] */ r_ecx = (u32)(r_edx+r_eax+0xb60u);
    /* 004ee7d1: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004ee7d5: mov word ptr [ecx + edx*2 - 4], 0 */ W16((u32)(r_ecx+r_edx*2+0xfffffffcu), 0x0u);
    /* 004ee7dc: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004ee7df: mov ecx, dword ptr [eax + 0x428] */ r_ecx = R32((u32)(r_eax+0x428u));
    /* 004ee7e5: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ee7e9: imul edx, edx, 0xe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xeu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ee7ec: lea eax, [ecx + edx + 0xbd0] */ r_eax = (u32)(r_ecx+r_edx+0xbd0u);
    /* 004ee7f3: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004ee7f7: mov word ptr [eax + ecx*2 - 4], 0 */ W16((u32)(r_eax+r_ecx*2+0xfffffffcu), 0x0u);
    /* 004ee7fe: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004ee801: mov eax, dword ptr [edx + 0x428] */ r_eax = R32((u32)(r_edx+0x428u));
    /* 004ee807: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ee80b: imul ecx, ecx, 7 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x7u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ee80e: lea edx, [eax + ecx + 0xc40] */ r_edx = (u32)(r_eax+r_ecx+0xc40u);
    /* 004ee815: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004ee819: mov byte ptr [edx + eax - 2], 0 */ W8((u32)(r_edx+r_eax+0xfffffffeu), 0x0u);
    /* 004ee81e: jmp 0x4ee79b */ goto L_004ee79b;
L_004ee823:; BB(0x004ee823);
    /* 004ee823: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004ee824: mov esp, ebp */ r_esp = r_ebp;
    /* 004ee826: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ee827: ret 4 */ FN_RET(0x004ee740); r_esp += 8; return;
}

void f_004ee830(void) /* PokerPlayer::func_004ee830 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004ee830);
    /* 004ee830: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ee831: mov ebp, esp */ r_ebp = r_esp;
    /* 004ee833: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004ee834: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004ee835: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004ee838: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ee83c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004ee83e: jge 0x4ee857 */ if ((fS==fO)) goto L_004ee857;
L_004ee840:; BB(0x004ee840);
    /* 004ee840: push 0x2c13 */ { u32 v = 0x2c13u; r_esp -= 4; W32(r_esp, v); }
    /* 004ee845: push 0x6bf384 */ { u32 v = 0x6bf384u; r_esp -= 4; W32(r_esp, v); }
    /* 004ee84a: push 0x6bf888 */ { u32 v = 0x6bf888u; r_esp -= 4; W32(r_esp, v); }
    /* 004ee84f: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4ee854u); f_005e9f20();
    /* 004ee854: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004ee857:; BB(0x004ee857);
    /* 004ee857: movsx esi, word ptr [ebp + 8] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ee85b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004ee861: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x4ee866u); f_0047f950();
    /* 004ee866: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ee868: jl 0x4ee881 */ if ((fS!=fO)) goto L_004ee881;
L_004ee86a:; BB(0x004ee86a);
    /* 004ee86a: push 0x2c14 */ { u32 v = 0x2c14u; r_esp -= 4; W32(r_esp, v); }
    /* 004ee86f: push 0x6bf384 */ { u32 v = 0x6bf384u; r_esp -= 4; W32(r_esp, v); }
    /* 004ee874: push 0x6bf858 */ { u32 v = 0x6bf858u; r_esp -= 4; W32(r_esp, v); }
    /* 004ee879: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4ee87eu); f_005e9f20();
    /* 004ee87e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004ee881:; BB(0x004ee881);
    /* 004ee881: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ee885: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ee888: jge 0x4ee8a1 */ if ((fS==fO)) goto L_004ee8a1;
L_004ee88a:; BB(0x004ee88a);
    /* 004ee88a: push 0x2c15 */ { u32 v = 0x2c15u; r_esp -= 4; W32(r_esp, v); }
    /* 004ee88f: push 0x6bf384 */ { u32 v = 0x6bf384u; r_esp -= 4; W32(r_esp, v); }
    /* 004ee894: push 0x6bf778 */ { u32 v = 0x6bf778u; r_esp -= 4; W32(r_esp, v); }
    /* 004ee899: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4ee89eu); f_005e9f20();
    /* 004ee89e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004ee8a1:; BB(0x004ee8a1);
    /* 004ee8a1: movsx esi, word ptr [ebp + 0xc] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ee8a5: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004ee8ab: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x4ee8b0u); f_0047f950();
    /* 004ee8b0: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ee8b2: jle 0x4ee8cb */ if ((fZ||fS!=fO)) goto L_004ee8cb;
L_004ee8b4:; BB(0x004ee8b4);
    /* 004ee8b4: push 0x2c16 */ { u32 v = 0x2c16u; r_esp -= 4; W32(r_esp, v); }
    /* 004ee8b9: push 0x6bf384 */ { u32 v = 0x6bf384u; r_esp -= 4; W32(r_esp, v); }
    /* 004ee8be: push 0x6bf740 */ { u32 v = 0x6bf740u; r_esp -= 4; W32(r_esp, v); }
    /* 004ee8c3: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4ee8c8u); f_005e9f20();
    /* 004ee8c8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004ee8cb:; BB(0x004ee8cb);
    /* 004ee8cb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ee8ce: mov ecx, dword ptr [eax + 0x428] */ r_ecx = R32((u32)(r_eax+0x428u));
    /* 004ee8d4: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ee8d8: imul edx, edx, 0xe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xeu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ee8db: lea eax, [ecx + edx + 0xb60] */ r_eax = (u32)(r_ecx+r_edx+0xb60u);
    /* 004ee8e2: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ee8e6: mov dx, word ptr [eax + ecx*2 - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_eax+r_ecx*2+0xfffffffcu))) & 0xffffu);
    /* 004ee8eb: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004ee8ef: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ee8f3: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ee8f7: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ee8fa: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ee8fd: mov esi, dword ptr [esi + 0x428] */ r_esi = R32((u32)(r_esi+0x428u));
    /* 004ee903: lea ecx, [esi + ecx + 0xb60] */ r_ecx = (u32)(r_esi+r_ecx+0xb60u);
    /* 004ee90a: mov word ptr [ecx + eax*2 - 4], dx */ W16((u32)(r_ecx+r_eax*2+0xfffffffcu), (u16)r_edx);
    /* 004ee90f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ee912: mov eax, dword ptr [edx + 0x428] */ r_eax = R32((u32)(r_edx+0x428u));
    /* 004ee918: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ee91c: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ee91f: lea edx, [eax + ecx + 0xb60] */ r_edx = (u32)(r_eax+r_ecx+0xb60u);
    /* 004ee926: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ee92a: movzx ecx, word ptr [edx + eax*2 - 4] */ r_ecx = (u32)R16((u32)(r_edx+r_eax*2+0xfffffffcu));
    /* 004ee92f: cmp ecx, 0x3000 */ {  u32 a = r_ecx; u32 b = 0x3000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ee935: jne 0x4ee97b */ if (!fZ) goto L_004ee97b;
L_004ee937:; BB(0x004ee937);
    /* 004ee937: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ee93a: mov eax, dword ptr [edx + 0x428] */ r_eax = R32((u32)(r_edx+0x428u));
    /* 004ee940: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ee944: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ee947: lea edx, [eax + ecx + 0xb60] */ r_edx = (u32)(r_eax+r_ecx+0xb60u);
    /* 004ee94e: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ee952: mov cx, word ptr [edx + eax*2 - 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_edx+r_eax*2+0xfffffffcu))) & 0xffffu);
    /* 004ee957: sub cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004ee95b: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ee95f: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ee963: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ee966: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ee969: mov esi, dword ptr [esi + 0x428] */ r_esi = R32((u32)(r_esi+0x428u));
    /* 004ee96f: lea eax, [esi + eax + 0xb60] */ r_eax = (u32)(r_esi+r_eax+0xb60u);
    /* 004ee976: mov word ptr [eax + edx*2 - 4], cx */ W16((u32)(r_eax+r_edx*2+0xfffffffcu), (u16)r_ecx);
L_004ee97b:; BB(0x004ee97b);
    /* 004ee97b: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ee97f: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ee982: jle 0x4eea37 */ if ((fZ||fS!=fO)) goto L_004eea37;
L_004ee988:; BB(0x004ee988);
    /* 004ee988: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ee98b: mov eax, dword ptr [edx + 0x428] */ r_eax = R32((u32)(r_edx+0x428u));
    /* 004ee991: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ee995: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ee998: lea edx, [eax + ecx + 0xb60] */ r_edx = (u32)(r_eax+r_ecx+0xb60u);
    /* 004ee99f: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ee9a3: mov cx, word ptr [edx + eax*2 - 6] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_edx+r_eax*2+0xfffffffau))) & 0xffffu);
    /* 004ee9a8: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004ee9ac: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ee9b0: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ee9b4: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ee9b7: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ee9ba: mov esi, dword ptr [esi + 0x428] */ r_esi = R32((u32)(r_esi+0x428u));
    /* 004ee9c0: lea eax, [esi + eax + 0xb60] */ r_eax = (u32)(r_esi+r_eax+0xb60u);
    /* 004ee9c7: mov word ptr [eax + edx*2 - 6], cx */ W16((u32)(r_eax+r_edx*2+0xfffffffau), (u16)r_ecx);
    /* 004ee9cc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ee9cf: mov edx, dword ptr [ecx + 0x428] */ r_edx = R32((u32)(r_ecx+0x428u));
    /* 004ee9d5: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ee9d9: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ee9dc: lea ecx, [edx + eax + 0xb60] */ r_ecx = (u32)(r_edx+r_eax+0xb60u);
    /* 004ee9e3: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ee9e7: movzx eax, word ptr [ecx + edx*2 - 6] */ r_eax = (u32)R16((u32)(r_ecx+r_edx*2+0xfffffffau));
    /* 004ee9ec: cmp eax, 0x3000 */ {  u32 a = r_eax; u32 b = 0x3000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ee9f1: jne 0x4eea37 */ if (!fZ) goto L_004eea37;
L_004ee9f3:; BB(0x004ee9f3);
    /* 004ee9f3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ee9f6: mov edx, dword ptr [ecx + 0x428] */ r_edx = R32((u32)(r_ecx+0x428u));
    /* 004ee9fc: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004eea00: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004eea03: lea ecx, [edx + eax + 0xb60] */ r_ecx = (u32)(r_edx+r_eax+0xb60u);
    /* 004eea0a: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004eea0e: mov ax, word ptr [ecx + edx*2 - 6] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ecx+r_edx*2+0xfffffffau))) & 0xffffu);
    /* 004eea13: sub ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004eea17: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004eea1b: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004eea1f: imul edx, edx, 0xe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xeu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004eea22: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004eea25: mov esi, dword ptr [esi + 0x428] */ r_esi = R32((u32)(r_esi+0x428u));
    /* 004eea2b: lea edx, [esi + edx + 0xb60] */ r_edx = (u32)(r_esi+r_edx+0xb60u);
    /* 004eea32: mov word ptr [edx + ecx*2 - 6], ax */ W16((u32)(r_edx+r_ecx*2+0xfffffffau), (u16)r_eax);
L_004eea37:; BB(0x004eea37);
    /* 004eea37: movsx esi, word ptr [ebp + 0xc] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004eea3b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004eea41: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x4eea46u); f_0047f950();
    /* 004eea46: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004eea48: jge 0x4eeafe */ if ((fS==fO)) goto L_004eeafe;
L_004eea4e:; BB(0x004eea4e);
    /* 004eea4e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004eea51: mov ecx, dword ptr [eax + 0x428] */ r_ecx = R32((u32)(r_eax+0x428u));
    /* 004eea57: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004eea5b: imul edx, edx, 0xe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xeu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004eea5e: lea eax, [ecx + edx + 0xb60] */ r_eax = (u32)(r_ecx+r_edx+0xb60u);
    /* 004eea65: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004eea69: mov dx, word ptr [eax + ecx*2 - 2] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_eax+r_ecx*2+0xfffffffeu))) & 0xffffu);
    /* 004eea6e: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004eea72: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004eea76: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004eea7a: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004eea7d: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004eea80: mov esi, dword ptr [esi + 0x428] */ r_esi = R32((u32)(r_esi+0x428u));
    /* 004eea86: lea ecx, [esi + ecx + 0xb60] */ r_ecx = (u32)(r_esi+r_ecx+0xb60u);
    /* 004eea8d: mov word ptr [ecx + eax*2 - 2], dx */ W16((u32)(r_ecx+r_eax*2+0xfffffffeu), (u16)r_edx);
    /* 004eea92: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004eea95: mov eax, dword ptr [edx + 0x428] */ r_eax = R32((u32)(r_edx+0x428u));
    /* 004eea9b: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004eea9f: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004eeaa2: lea edx, [eax + ecx + 0xb60] */ r_edx = (u32)(r_eax+r_ecx+0xb60u);
    /* 004eeaa9: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004eeaad: movzx ecx, word ptr [edx + eax*2 - 2] */ r_ecx = (u32)R16((u32)(r_edx+r_eax*2+0xfffffffeu));
    /* 004eeab2: cmp ecx, 0x3000 */ {  u32 a = r_ecx; u32 b = 0x3000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004eeab8: jne 0x4eeafe */ if (!fZ) goto L_004eeafe;
L_004eeaba:; BB(0x004eeaba);
    /* 004eeaba: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004eeabd: mov eax, dword ptr [edx + 0x428] */ r_eax = R32((u32)(r_edx+0x428u));
    /* 004eeac3: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004eeac7: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004eeaca: lea edx, [eax + ecx + 0xb60] */ r_edx = (u32)(r_eax+r_ecx+0xb60u);
    /* 004eead1: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004eead5: mov cx, word ptr [edx + eax*2 - 2] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_edx+r_eax*2+0xfffffffeu))) & 0xffffu);
    /* 004eeada: sub cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004eeade: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004eeae2: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004eeae6: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004eeae9: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004eeaec: mov esi, dword ptr [esi + 0x428] */ r_esi = R32((u32)(r_esi+0x428u));
    /* 004eeaf2: lea eax, [esi + eax + 0xb60] */ r_eax = (u32)(r_esi+r_eax+0xb60u);
    /* 004eeaf9: mov word ptr [eax + edx*2 - 2], cx */ W16((u32)(r_eax+r_edx*2+0xfffffffeu), (u16)r_ecx);
L_004eeafe:; BB(0x004eeafe);
    /* 004eeafe: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004eeaff: mov esp, ebp */ r_esp = r_ebp;
    /* 004eeb01: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004eeb02: ret 8 */ FN_RET(0x004ee830); r_esp += 12; return;
}

void f_004eeb10(void) /* PokerPlayer::func_004eeb10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004eeb10);
    /* 004eeb10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004eeb11: mov ebp, esp */ r_ebp = r_esp;
    /* 004eeb13: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004eeb14: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004eeb15: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004eeb18: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004eeb1c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004eeb1e: jge 0x4eeb37 */ if ((fS==fO)) goto L_004eeb37;
L_004eeb20:; BB(0x004eeb20);
    /* 004eeb20: push 0x2c32 */ { u32 v = 0x2c32u; r_esp -= 4; W32(r_esp, v); }
    /* 004eeb25: push 0x6bf384 */ { u32 v = 0x6bf384u; r_esp -= 4; W32(r_esp, v); }
    /* 004eeb2a: push 0x6bf888 */ { u32 v = 0x6bf888u; r_esp -= 4; W32(r_esp, v); }
    /* 004eeb2f: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4eeb34u); f_005e9f20();
    /* 004eeb34: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004eeb37:; BB(0x004eeb37);
    /* 004eeb37: movsx esi, word ptr [ebp + 8] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004eeb3b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004eeb41: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x4eeb46u); f_0047f950();
    /* 004eeb46: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004eeb48: jl 0x4eeb61 */ if ((fS!=fO)) goto L_004eeb61;
L_004eeb4a:; BB(0x004eeb4a);
    /* 004eeb4a: push 0x2c33 */ { u32 v = 0x2c33u; r_esp -= 4; W32(r_esp, v); }
    /* 004eeb4f: push 0x6bf384 */ { u32 v = 0x6bf384u; r_esp -= 4; W32(r_esp, v); }
    /* 004eeb54: push 0x6bf858 */ { u32 v = 0x6bf858u; r_esp -= 4; W32(r_esp, v); }
    /* 004eeb59: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4eeb5eu); f_005e9f20();
    /* 004eeb5e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004eeb61:; BB(0x004eeb61);
    /* 004eeb61: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004eeb65: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004eeb68: jge 0x4eeb81 */ if ((fS==fO)) goto L_004eeb81;
L_004eeb6a:; BB(0x004eeb6a);
    /* 004eeb6a: push 0x2c34 */ { u32 v = 0x2c34u; r_esp -= 4; W32(r_esp, v); }
    /* 004eeb6f: push 0x6bf384 */ { u32 v = 0x6bf384u; r_esp -= 4; W32(r_esp, v); }
    /* 004eeb74: push 0x6bf778 */ { u32 v = 0x6bf778u; r_esp -= 4; W32(r_esp, v); }
    /* 004eeb79: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4eeb7eu); f_005e9f20();
    /* 004eeb7e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004eeb81:; BB(0x004eeb81);
    /* 004eeb81: movsx esi, word ptr [ebp + 0xc] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004eeb85: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004eeb8b: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x4eeb90u); f_0047f950();
    /* 004eeb90: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004eeb92: jle 0x4eebab */ if ((fZ||fS!=fO)) goto L_004eebab;
L_004eeb94:; BB(0x004eeb94);
    /* 004eeb94: push 0x2c35 */ { u32 v = 0x2c35u; r_esp -= 4; W32(r_esp, v); }
    /* 004eeb99: push 0x6bf384 */ { u32 v = 0x6bf384u; r_esp -= 4; W32(r_esp, v); }
    /* 004eeb9e: push 0x6bf740 */ { u32 v = 0x6bf740u; r_esp -= 4; W32(r_esp, v); }
    /* 004eeba3: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4eeba8u); f_005e9f20();
    /* 004eeba8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004eebab:; BB(0x004eebab);
    /* 004eebab: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004eebae: mov ecx, dword ptr [eax + 0x428] */ r_ecx = R32((u32)(r_eax+0x428u));
    /* 004eebb4: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004eebb8: imul edx, edx, 0xe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xeu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004eebbb: lea eax, [ecx + edx + 0xbd0] */ r_eax = (u32)(r_ecx+r_edx+0xbd0u);
    /* 004eebc2: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004eebc6: mov dx, word ptr [eax + ecx*2 - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_eax+r_ecx*2+0xfffffffcu))) & 0xffffu);
    /* 004eebcb: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004eebcf: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004eebd3: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004eebd7: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004eebda: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004eebdd: mov esi, dword ptr [esi + 0x428] */ r_esi = R32((u32)(r_esi+0x428u));
    /* 004eebe3: lea ecx, [esi + ecx + 0xbd0] */ r_ecx = (u32)(r_esi+r_ecx+0xbd0u);
    /* 004eebea: mov word ptr [ecx + eax*2 - 4], dx */ W16((u32)(r_ecx+r_eax*2+0xfffffffcu), (u16)r_edx);
    /* 004eebef: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004eebf2: mov eax, dword ptr [edx + 0x428] */ r_eax = R32((u32)(r_edx+0x428u));
    /* 004eebf8: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004eebfc: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004eebff: lea edx, [eax + ecx + 0xbd0] */ r_edx = (u32)(r_eax+r_ecx+0xbd0u);
    /* 004eec06: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004eec0a: movzx ecx, word ptr [edx + eax*2 - 4] */ r_ecx = (u32)R16((u32)(r_edx+r_eax*2+0xfffffffcu));
    /* 004eec0f: cmp ecx, 0x3000 */ {  u32 a = r_ecx; u32 b = 0x3000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004eec15: jne 0x4eec5b */ if (!fZ) goto L_004eec5b;
L_004eec17:; BB(0x004eec17);
    /* 004eec17: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004eec1a: mov eax, dword ptr [edx + 0x428] */ r_eax = R32((u32)(r_edx+0x428u));
    /* 004eec20: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004eec24: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004eec27: lea edx, [eax + ecx + 0xbd0] */ r_edx = (u32)(r_eax+r_ecx+0xbd0u);
    /* 004eec2e: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004eec32: mov cx, word ptr [edx + eax*2 - 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_edx+r_eax*2+0xfffffffcu))) & 0xffffu);
    /* 004eec37: sub cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004eec3b: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004eec3f: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004eec43: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004eec46: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004eec49: mov esi, dword ptr [esi + 0x428] */ r_esi = R32((u32)(r_esi+0x428u));
    /* 004eec4f: lea eax, [esi + eax + 0xbd0] */ r_eax = (u32)(r_esi+r_eax+0xbd0u);
    /* 004eec56: mov word ptr [eax + edx*2 - 4], cx */ W16((u32)(r_eax+r_edx*2+0xfffffffcu), (u16)r_ecx);
L_004eec5b:; BB(0x004eec5b);
    /* 004eec5b: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004eec5f: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004eec62: jle 0x4eed17 */ if ((fZ||fS!=fO)) goto L_004eed17;
L_004eec68:; BB(0x004eec68);
    /* 004eec68: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004eec6b: mov eax, dword ptr [edx + 0x428] */ r_eax = R32((u32)(r_edx+0x428u));
    /* 004eec71: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004eec75: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004eec78: lea edx, [eax + ecx + 0xbd0] */ r_edx = (u32)(r_eax+r_ecx+0xbd0u);
    /* 004eec7f: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004eec83: mov cx, word ptr [edx + eax*2 - 6] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_edx+r_eax*2+0xfffffffau))) & 0xffffu);
    /* 004eec88: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004eec8c: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004eec90: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004eec94: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004eec97: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004eec9a: mov esi, dword ptr [esi + 0x428] */ r_esi = R32((u32)(r_esi+0x428u));
    /* 004eeca0: lea eax, [esi + eax + 0xbd0] */ r_eax = (u32)(r_esi+r_eax+0xbd0u);
    /* 004eeca7: mov word ptr [eax + edx*2 - 6], cx */ W16((u32)(r_eax+r_edx*2+0xfffffffau), (u16)r_ecx);
    /* 004eecac: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004eecaf: mov edx, dword ptr [ecx + 0x428] */ r_edx = R32((u32)(r_ecx+0x428u));
    /* 004eecb5: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004eecb9: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004eecbc: lea ecx, [edx + eax + 0xbd0] */ r_ecx = (u32)(r_edx+r_eax+0xbd0u);
    /* 004eecc3: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004eecc7: movzx eax, word ptr [ecx + edx*2 - 6] */ r_eax = (u32)R16((u32)(r_ecx+r_edx*2+0xfffffffau));
    /* 004eeccc: cmp eax, 0x3000 */ {  u32 a = r_eax; u32 b = 0x3000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004eecd1: jne 0x4eed17 */ if (!fZ) goto L_004eed17;
L_004eecd3:; BB(0x004eecd3);
    /* 004eecd3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004eecd6: mov edx, dword ptr [ecx + 0x428] */ r_edx = R32((u32)(r_ecx+0x428u));
    /* 004eecdc: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004eece0: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004eece3: lea ecx, [edx + eax + 0xbd0] */ r_ecx = (u32)(r_edx+r_eax+0xbd0u);
    /* 004eecea: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004eecee: mov ax, word ptr [ecx + edx*2 - 6] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ecx+r_edx*2+0xfffffffau))) & 0xffffu);
    /* 004eecf3: sub ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004eecf7: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004eecfb: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004eecff: imul edx, edx, 0xe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xeu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004eed02: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004eed05: mov esi, dword ptr [esi + 0x428] */ r_esi = R32((u32)(r_esi+0x428u));
    /* 004eed0b: lea edx, [esi + edx + 0xbd0] */ r_edx = (u32)(r_esi+r_edx+0xbd0u);
    /* 004eed12: mov word ptr [edx + ecx*2 - 6], ax */ W16((u32)(r_edx+r_ecx*2+0xfffffffau), (u16)r_eax);
L_004eed17:; BB(0x004eed17);
    /* 004eed17: movsx esi, word ptr [ebp + 0xc] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004eed1b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004eed21: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x4eed26u); f_0047f950();
    /* 004eed26: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004eed28: jge 0x4eedde */ if ((fS==fO)) goto L_004eedde;
L_004eed2e:; BB(0x004eed2e);
    /* 004eed2e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004eed31: mov ecx, dword ptr [eax + 0x428] */ r_ecx = R32((u32)(r_eax+0x428u));
    /* 004eed37: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004eed3b: imul edx, edx, 0xe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xeu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004eed3e: lea eax, [ecx + edx + 0xbd0] */ r_eax = (u32)(r_ecx+r_edx+0xbd0u);
    /* 004eed45: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004eed49: mov dx, word ptr [eax + ecx*2 - 2] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_eax+r_ecx*2+0xfffffffeu))) & 0xffffu);
    /* 004eed4e: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004eed52: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004eed56: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004eed5a: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004eed5d: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004eed60: mov esi, dword ptr [esi + 0x428] */ r_esi = R32((u32)(r_esi+0x428u));
    /* 004eed66: lea ecx, [esi + ecx + 0xbd0] */ r_ecx = (u32)(r_esi+r_ecx+0xbd0u);
    /* 004eed6d: mov word ptr [ecx + eax*2 - 2], dx */ W16((u32)(r_ecx+r_eax*2+0xfffffffeu), (u16)r_edx);
    /* 004eed72: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004eed75: mov eax, dword ptr [edx + 0x428] */ r_eax = R32((u32)(r_edx+0x428u));
    /* 004eed7b: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004eed7f: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004eed82: lea edx, [eax + ecx + 0xbd0] */ r_edx = (u32)(r_eax+r_ecx+0xbd0u);
    /* 004eed89: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004eed8d: movzx ecx, word ptr [edx + eax*2 - 2] */ r_ecx = (u32)R16((u32)(r_edx+r_eax*2+0xfffffffeu));
    /* 004eed92: cmp ecx, 0x3000 */ {  u32 a = r_ecx; u32 b = 0x3000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004eed98: jne 0x4eedde */ if (!fZ) goto L_004eedde;
L_004eed9a:; BB(0x004eed9a);
    /* 004eed9a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004eed9d: mov eax, dword ptr [edx + 0x428] */ r_eax = R32((u32)(r_edx+0x428u));
    /* 004eeda3: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004eeda7: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004eedaa: lea edx, [eax + ecx + 0xbd0] */ r_edx = (u32)(r_eax+r_ecx+0xbd0u);
    /* 004eedb1: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004eedb5: mov cx, word ptr [edx + eax*2 - 2] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_edx+r_eax*2+0xfffffffeu))) & 0xffffu);
    /* 004eedba: sub cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004eedbe: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004eedc2: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004eedc6: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004eedc9: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004eedcc: mov esi, dword ptr [esi + 0x428] */ r_esi = R32((u32)(r_esi+0x428u));
    /* 004eedd2: lea eax, [esi + eax + 0xbd0] */ r_eax = (u32)(r_esi+r_eax+0xbd0u);
    /* 004eedd9: mov word ptr [eax + edx*2 - 2], cx */ W16((u32)(r_eax+r_edx*2+0xfffffffeu), (u16)r_ecx);
L_004eedde:; BB(0x004eedde);
    /* 004eedde: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004eeddf: mov esp, ebp */ r_esp = r_ebp;
    /* 004eede1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004eede2: ret 8 */ FN_RET(0x004eeb10); r_esp += 12; return;
}

void f_004eedf0(void) /* PokerPlayer::func_004eedf0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004eedf0);
    /* 004eedf0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004eedf1: mov ebp, esp */ r_ebp = r_esp;
    /* 004eedf3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004eedf4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004eedf5: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004eedf8: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004eedfc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004eedfe: jge 0x4eee17 */ if ((fS==fO)) goto L_004eee17;
L_004eee00:; BB(0x004eee00);
    /* 004eee00: push 0x2c51 */ { u32 v = 0x2c51u; r_esp -= 4; W32(r_esp, v); }
    /* 004eee05: push 0x6bf384 */ { u32 v = 0x6bf384u; r_esp -= 4; W32(r_esp, v); }
    /* 004eee0a: push 0x6bf888 */ { u32 v = 0x6bf888u; r_esp -= 4; W32(r_esp, v); }
    /* 004eee0f: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4eee14u); f_005e9f20();
    /* 004eee14: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004eee17:; BB(0x004eee17);
    /* 004eee17: movsx esi, word ptr [ebp + 8] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004eee1b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004eee21: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x4eee26u); f_0047f950();
    /* 004eee26: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004eee28: jl 0x4eee41 */ if ((fS!=fO)) goto L_004eee41;
L_004eee2a:; BB(0x004eee2a);
    /* 004eee2a: push 0x2c52 */ { u32 v = 0x2c52u; r_esp -= 4; W32(r_esp, v); }
    /* 004eee2f: push 0x6bf384 */ { u32 v = 0x6bf384u; r_esp -= 4; W32(r_esp, v); }
    /* 004eee34: push 0x6bf858 */ { u32 v = 0x6bf858u; r_esp -= 4; W32(r_esp, v); }
    /* 004eee39: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4eee3eu); f_005e9f20();
    /* 004eee3e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004eee41:; BB(0x004eee41);
    /* 004eee41: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004eee45: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004eee48: jge 0x4eee61 */ if ((fS==fO)) goto L_004eee61;
L_004eee4a:; BB(0x004eee4a);
    /* 004eee4a: push 0x2c53 */ { u32 v = 0x2c53u; r_esp -= 4; W32(r_esp, v); }
    /* 004eee4f: push 0x6bf384 */ { u32 v = 0x6bf384u; r_esp -= 4; W32(r_esp, v); }
    /* 004eee54: push 0x6bf778 */ { u32 v = 0x6bf778u; r_esp -= 4; W32(r_esp, v); }
    /* 004eee59: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4eee5eu); f_005e9f20();
    /* 004eee5e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004eee61:; BB(0x004eee61);
    /* 004eee61: movsx esi, word ptr [ebp + 0xc] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004eee65: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004eee6b: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x4eee70u); f_0047f950();
    /* 004eee70: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004eee72: jle 0x4eee8b */ if ((fZ||fS!=fO)) goto L_004eee8b;
L_004eee74:; BB(0x004eee74);
    /* 004eee74: push 0x2c54 */ { u32 v = 0x2c54u; r_esp -= 4; W32(r_esp, v); }
    /* 004eee79: push 0x6bf384 */ { u32 v = 0x6bf384u; r_esp -= 4; W32(r_esp, v); }
    /* 004eee7e: push 0x6bf740 */ { u32 v = 0x6bf740u; r_esp -= 4; W32(r_esp, v); }
    /* 004eee83: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4eee88u); f_005e9f20();
    /* 004eee88: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004eee8b:; BB(0x004eee8b);
    /* 004eee8b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004eee8e: mov ecx, dword ptr [eax + 0x428] */ r_ecx = R32((u32)(r_eax+0x428u));
    /* 004eee94: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004eee98: imul edx, edx, 7 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x7u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004eee9b: lea eax, [ecx + edx + 0xc40] */ r_eax = (u32)(r_ecx+r_edx+0xc40u);
    /* 004eeea2: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004eeea6: mov dl, byte ptr [eax + ecx - 2] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+r_ecx+0xfffffffeu))) & 0xffu);
    /* 004eeeaa: add dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004eeead: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004eeeb1: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004eeeb5: imul ecx, ecx, 7 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x7u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004eeeb8: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004eeebb: mov esi, dword ptr [esi + 0x428] */ r_esi = R32((u32)(r_esi+0x428u));
    /* 004eeec1: lea ecx, [esi + ecx + 0xc40] */ r_ecx = (u32)(r_esi+r_ecx+0xc40u);
    /* 004eeec8: mov byte ptr [ecx + eax - 2], dl */ W8((u32)(r_ecx+r_eax+0xfffffffeu), (u8)r_edx);
    /* 004eeecc: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004eeecf: mov eax, dword ptr [edx + 0x428] */ r_eax = R32((u32)(r_edx+0x428u));
    /* 004eeed5: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004eeed9: imul ecx, ecx, 7 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x7u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004eeedc: lea edx, [eax + ecx + 0xc40] */ r_edx = (u32)(r_eax+r_ecx+0xc40u);
    /* 004eeee3: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004eeee7: movzx ecx, byte ptr [edx + eax - 2] */ r_ecx = (u32)R8((u32)(r_edx+r_eax+0xfffffffeu));
    /* 004eeeec: cmp ecx, 0x50 */ {  u32 a = r_ecx; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004eeeef: jne 0x4eefba */ if (!fZ) goto L_004eefba;
L_004eeef5:; BB(0x004eeef5);
    /* 004eeef5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004eeef8: mov eax, dword ptr [edx + 0x428] */ r_eax = R32((u32)(r_edx+0x428u));
    /* 004eeefe: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004eef02: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004eef05: lea edx, [eax + ecx + 0xb60] */ r_edx = (u32)(r_eax+r_ecx+0xb60u);
    /* 004eef0c: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004eef10: movzx ecx, word ptr [edx + eax*2 - 4] */ r_ecx = (u32)R16((u32)(r_edx+r_eax*2+0xfffffffcu));
    /* 004eef15: shr ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 004eef17: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004eef1b: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004eef1f: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004eef22: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004eef25: mov esi, dword ptr [esi + 0x428] */ r_esi = R32((u32)(r_esi+0x428u));
    /* 004eef2b: lea eax, [esi + eax + 0xb60] */ r_eax = (u32)(r_esi+r_eax+0xb60u);
    /* 004eef32: mov word ptr [eax + edx*2 - 4], cx */ W16((u32)(r_eax+r_edx*2+0xfffffffcu), (u16)r_ecx);
    /* 004eef37: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004eef3a: mov edx, dword ptr [ecx + 0x428] */ r_edx = R32((u32)(r_ecx+0x428u));
    /* 004eef40: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004eef44: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004eef47: lea ecx, [edx + eax + 0xbd0] */ r_ecx = (u32)(r_edx+r_eax+0xbd0u);
    /* 004eef4e: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004eef52: movzx eax, word ptr [ecx + edx*2 - 4] */ r_eax = (u32)R16((u32)(r_ecx+r_edx*2+0xfffffffcu));
    /* 004eef57: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 004eef59: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004eef5d: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004eef61: imul edx, edx, 0xe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xeu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004eef64: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004eef67: mov esi, dword ptr [esi + 0x428] */ r_esi = R32((u32)(r_esi+0x428u));
    /* 004eef6d: lea edx, [esi + edx + 0xbd0] */ r_edx = (u32)(r_esi+r_edx+0xbd0u);
    /* 004eef74: mov word ptr [edx + ecx*2 - 4], ax */ W16((u32)(r_edx+r_ecx*2+0xfffffffcu), (u16)r_eax);
    /* 004eef79: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004eef7c: mov ecx, dword ptr [eax + 0x428] */ r_ecx = R32((u32)(r_eax+0x428u));
    /* 004eef82: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004eef86: imul edx, edx, 7 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x7u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004eef89: lea eax, [ecx + edx + 0xc40] */ r_eax = (u32)(r_ecx+r_edx+0xc40u);
    /* 004eef90: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004eef94: movzx edx, byte ptr [eax + ecx - 2] */ r_edx = (u32)R8((u32)(r_eax+r_ecx+0xfffffffeu));
    /* 004eef99: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 004eef9b: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004eef9f: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004eefa3: imul ecx, ecx, 7 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x7u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004eefa6: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004eefa9: mov esi, dword ptr [esi + 0x428] */ r_esi = R32((u32)(r_esi+0x428u));
    /* 004eefaf: lea ecx, [esi + ecx + 0xc40] */ r_ecx = (u32)(r_esi+r_ecx+0xc40u);
    /* 004eefb6: mov byte ptr [ecx + eax - 2], dl */ W8((u32)(r_ecx+r_eax+0xfffffffeu), (u8)r_edx);
L_004eefba:; BB(0x004eefba);
    /* 004eefba: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004eefbe: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004eefc1: jle 0x4ef0f6 */ if ((fZ||fS!=fO)) goto L_004ef0f6;
L_004eefc7:; BB(0x004eefc7);
    /* 004eefc7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004eefca: mov ecx, dword ptr [eax + 0x428] */ r_ecx = R32((u32)(r_eax+0x428u));
    /* 004eefd0: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004eefd4: imul edx, edx, 7 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x7u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004eefd7: lea eax, [ecx + edx + 0xc40] */ r_eax = (u32)(r_ecx+r_edx+0xc40u);
    /* 004eefde: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004eefe2: mov dl, byte ptr [eax + ecx - 3] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+r_ecx+0xfffffffdu))) & 0xffu);
    /* 004eefe6: add dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004eefe9: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004eefed: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004eeff1: imul ecx, ecx, 7 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x7u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004eeff4: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004eeff7: mov esi, dword ptr [esi + 0x428] */ r_esi = R32((u32)(r_esi+0x428u));
    /* 004eeffd: lea ecx, [esi + ecx + 0xc40] */ r_ecx = (u32)(r_esi+r_ecx+0xc40u);
    /* 004ef004: mov byte ptr [ecx + eax - 3], dl */ W8((u32)(r_ecx+r_eax+0xfffffffdu), (u8)r_edx);
    /* 004ef008: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ef00b: mov eax, dword ptr [edx + 0x428] */ r_eax = R32((u32)(r_edx+0x428u));
    /* 004ef011: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ef015: imul ecx, ecx, 7 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x7u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ef018: lea edx, [eax + ecx + 0xc40] */ r_edx = (u32)(r_eax+r_ecx+0xc40u);
    /* 004ef01f: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ef023: movzx ecx, byte ptr [edx + eax - 3] */ r_ecx = (u32)R8((u32)(r_edx+r_eax+0xfffffffdu));
    /* 004ef028: cmp ecx, 0x50 */ {  u32 a = r_ecx; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ef02b: jne 0x4ef0f6 */ if (!fZ) goto L_004ef0f6;
L_004ef031:; BB(0x004ef031);
    /* 004ef031: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ef034: mov eax, dword ptr [edx + 0x428] */ r_eax = R32((u32)(r_edx+0x428u));
    /* 004ef03a: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ef03e: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ef041: lea edx, [eax + ecx + 0xb60] */ r_edx = (u32)(r_eax+r_ecx+0xb60u);
    /* 004ef048: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ef04c: movzx ecx, word ptr [edx + eax*2 - 6] */ r_ecx = (u32)R16((u32)(r_edx+r_eax*2+0xfffffffau));
    /* 004ef051: shr ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 004ef053: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ef057: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ef05b: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ef05e: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ef061: mov esi, dword ptr [esi + 0x428] */ r_esi = R32((u32)(r_esi+0x428u));
    /* 004ef067: lea eax, [esi + eax + 0xb60] */ r_eax = (u32)(r_esi+r_eax+0xb60u);
    /* 004ef06e: mov word ptr [eax + edx*2 - 6], cx */ W16((u32)(r_eax+r_edx*2+0xfffffffau), (u16)r_ecx);
    /* 004ef073: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ef076: mov edx, dword ptr [ecx + 0x428] */ r_edx = R32((u32)(r_ecx+0x428u));
    /* 004ef07c: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ef080: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ef083: lea ecx, [edx + eax + 0xbd0] */ r_ecx = (u32)(r_edx+r_eax+0xbd0u);
    /* 004ef08a: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ef08e: movzx eax, word ptr [ecx + edx*2 - 6] */ r_eax = (u32)R16((u32)(r_ecx+r_edx*2+0xfffffffau));
    /* 004ef093: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 004ef095: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ef099: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ef09d: imul edx, edx, 0xe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xeu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ef0a0: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ef0a3: mov esi, dword ptr [esi + 0x428] */ r_esi = R32((u32)(r_esi+0x428u));
    /* 004ef0a9: lea edx, [esi + edx + 0xbd0] */ r_edx = (u32)(r_esi+r_edx+0xbd0u);
    /* 004ef0b0: mov word ptr [edx + ecx*2 - 6], ax */ W16((u32)(r_edx+r_ecx*2+0xfffffffau), (u16)r_eax);
    /* 004ef0b5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ef0b8: mov ecx, dword ptr [eax + 0x428] */ r_ecx = R32((u32)(r_eax+0x428u));
    /* 004ef0be: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ef0c2: imul edx, edx, 7 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x7u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ef0c5: lea eax, [ecx + edx + 0xc40] */ r_eax = (u32)(r_ecx+r_edx+0xc40u);
    /* 004ef0cc: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ef0d0: movzx edx, byte ptr [eax + ecx - 3] */ r_edx = (u32)R8((u32)(r_eax+r_ecx+0xfffffffdu));
    /* 004ef0d5: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 004ef0d7: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ef0db: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ef0df: imul ecx, ecx, 7 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x7u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ef0e2: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ef0e5: mov esi, dword ptr [esi + 0x428] */ r_esi = R32((u32)(r_esi+0x428u));
    /* 004ef0eb: lea ecx, [esi + ecx + 0xc40] */ r_ecx = (u32)(r_esi+r_ecx+0xc40u);
    /* 004ef0f2: mov byte ptr [ecx + eax - 3], dl */ W8((u32)(r_ecx+r_eax+0xfffffffdu), (u8)r_edx);
L_004ef0f6:; BB(0x004ef0f6);
    /* 004ef0f6: movsx esi, word ptr [ebp + 0xc] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ef0fa: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004ef100: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x4ef105u); f_0047f950();
    /* 004ef105: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ef107: jge 0x4ef23c */ if ((fS==fO)) goto L_004ef23c;
L_004ef10d:; BB(0x004ef10d);
    /* 004ef10d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ef110: mov eax, dword ptr [edx + 0x428] */ r_eax = R32((u32)(r_edx+0x428u));
    /* 004ef116: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ef11a: imul ecx, ecx, 7 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x7u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ef11d: lea edx, [eax + ecx + 0xc40] */ r_edx = (u32)(r_eax+r_ecx+0xc40u);
    /* 004ef124: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ef128: mov cl, byte ptr [edx + eax - 1] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_edx+r_eax+0xffffffffu))) & 0xffu);
    /* 004ef12c: add cl, 1 */ {  u32 a = (u8)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004ef12f: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ef133: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ef137: imul eax, eax, 7 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x7u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ef13a: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ef13d: mov esi, dword ptr [esi + 0x428] */ r_esi = R32((u32)(r_esi+0x428u));
    /* 004ef143: lea eax, [esi + eax + 0xc40] */ r_eax = (u32)(r_esi+r_eax+0xc40u);
    /* 004ef14a: mov byte ptr [eax + edx - 1], cl */ W8((u32)(r_eax+r_edx+0xffffffffu), (u8)r_ecx);
    /* 004ef14e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ef151: mov edx, dword ptr [ecx + 0x428] */ r_edx = R32((u32)(r_ecx+0x428u));
    /* 004ef157: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ef15b: imul eax, eax, 7 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x7u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ef15e: lea ecx, [edx + eax + 0xc40] */ r_ecx = (u32)(r_edx+r_eax+0xc40u);
    /* 004ef165: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ef169: movzx eax, byte ptr [ecx + edx - 1] */ r_eax = (u32)R8((u32)(r_ecx+r_edx+0xffffffffu));
    /* 004ef16e: cmp eax, 0x50 */ {  u32 a = r_eax; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ef171: jne 0x4ef23c */ if (!fZ) goto L_004ef23c;
L_004ef177:; BB(0x004ef177);
    /* 004ef177: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ef17a: mov edx, dword ptr [ecx + 0x428] */ r_edx = R32((u32)(r_ecx+0x428u));
    /* 004ef180: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ef184: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ef187: lea ecx, [edx + eax + 0xb60] */ r_ecx = (u32)(r_edx+r_eax+0xb60u);
    /* 004ef18e: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ef192: movzx eax, word ptr [ecx + edx*2 - 2] */ r_eax = (u32)R16((u32)(r_ecx+r_edx*2+0xfffffffeu));
    /* 004ef197: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 004ef199: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ef19d: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ef1a1: imul edx, edx, 0xe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xeu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ef1a4: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ef1a7: mov esi, dword ptr [esi + 0x428] */ r_esi = R32((u32)(r_esi+0x428u));
    /* 004ef1ad: lea edx, [esi + edx + 0xb60] */ r_edx = (u32)(r_esi+r_edx+0xb60u);
    /* 004ef1b4: mov word ptr [edx + ecx*2 - 2], ax */ W16((u32)(r_edx+r_ecx*2+0xfffffffeu), (u16)r_eax);
    /* 004ef1b9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ef1bc: mov ecx, dword ptr [eax + 0x428] */ r_ecx = R32((u32)(r_eax+0x428u));
    /* 004ef1c2: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ef1c6: imul edx, edx, 0xe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xeu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ef1c9: lea eax, [ecx + edx + 0xbd0] */ r_eax = (u32)(r_ecx+r_edx+0xbd0u);
    /* 004ef1d0: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ef1d4: movzx edx, word ptr [eax + ecx*2 - 2] */ r_edx = (u32)R16((u32)(r_eax+r_ecx*2+0xfffffffeu));
    /* 004ef1d9: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 004ef1db: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ef1df: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ef1e3: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ef1e6: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ef1e9: mov esi, dword ptr [esi + 0x428] */ r_esi = R32((u32)(r_esi+0x428u));
    /* 004ef1ef: lea ecx, [esi + ecx + 0xbd0] */ r_ecx = (u32)(r_esi+r_ecx+0xbd0u);
    /* 004ef1f6: mov word ptr [ecx + eax*2 - 2], dx */ W16((u32)(r_ecx+r_eax*2+0xfffffffeu), (u16)r_edx);
    /* 004ef1fb: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ef1fe: mov eax, dword ptr [edx + 0x428] */ r_eax = R32((u32)(r_edx+0x428u));
    /* 004ef204: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ef208: imul ecx, ecx, 7 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x7u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ef20b: lea edx, [eax + ecx + 0xc40] */ r_edx = (u32)(r_eax+r_ecx+0xc40u);
    /* 004ef212: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ef216: movzx ecx, byte ptr [edx + eax - 1] */ r_ecx = (u32)R8((u32)(r_edx+r_eax+0xffffffffu));
    /* 004ef21b: shr ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 004ef21d: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ef221: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ef225: imul eax, eax, 7 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x7u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ef228: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ef22b: mov esi, dword ptr [esi + 0x428] */ r_esi = R32((u32)(r_esi+0x428u));
    /* 004ef231: lea eax, [esi + eax + 0xc40] */ r_eax = (u32)(r_esi+r_eax+0xc40u);
    /* 004ef238: mov byte ptr [eax + edx - 1], cl */ W8((u32)(r_eax+r_edx+0xffffffffu), (u8)r_ecx);
L_004ef23c:; BB(0x004ef23c);
    /* 004ef23c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004ef23d: mov esp, ebp */ r_esp = r_ebp;
    /* 004ef23f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ef240: ret 8 */ FN_RET(0x004eedf0); r_esp += 12; return;
}

void f_004ef250(void) /* PokerPlayer::func_004ef250 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004ef250);
    /* 004ef250: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ef251: mov ebp, esp */ r_ebp = r_esp;
    /* 004ef253: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ef256: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004ef257: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 004ef25a: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ef25e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004ef260: jge 0x4ef279 */ if ((fS==fO)) goto L_004ef279;
L_004ef262:; BB(0x004ef262);
    /* 004ef262: push 0x2c82 */ { u32 v = 0x2c82u; r_esp -= 4; W32(r_esp, v); }
    /* 004ef267: push 0x6bf384 */ { u32 v = 0x6bf384u; r_esp -= 4; W32(r_esp, v); }
    /* 004ef26c: push 0x6bf888 */ { u32 v = 0x6bf888u; r_esp -= 4; W32(r_esp, v); }
    /* 004ef271: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4ef276u); f_005e9f20();
    /* 004ef276: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004ef279:; BB(0x004ef279);
    /* 004ef279: movsx esi, word ptr [ebp + 8] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ef27d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004ef283: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x4ef288u); f_0047f950();
    /* 004ef288: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ef28a: jl 0x4ef2a3 */ if ((fS!=fO)) goto L_004ef2a3;
L_004ef28c:; BB(0x004ef28c);
    /* 004ef28c: push 0x2c83 */ { u32 v = 0x2c83u; r_esp -= 4; W32(r_esp, v); }
    /* 004ef291: push 0x6bf384 */ { u32 v = 0x6bf384u; r_esp -= 4; W32(r_esp, v); }
    /* 004ef296: push 0x6bf858 */ { u32 v = 0x6bf858u; r_esp -= 4; W32(r_esp, v); }
    /* 004ef29b: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4ef2a0u); f_005e9f20();
    /* 004ef2a0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004ef2a3:; BB(0x004ef2a3);
    /* 004ef2a3: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ef2a7: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ef2aa: jge 0x4ef2c3 */ if ((fS==fO)) goto L_004ef2c3;
L_004ef2ac:; BB(0x004ef2ac);
    /* 004ef2ac: push 0x2c84 */ { u32 v = 0x2c84u; r_esp -= 4; W32(r_esp, v); }
    /* 004ef2b1: push 0x6bf384 */ { u32 v = 0x6bf384u; r_esp -= 4; W32(r_esp, v); }
    /* 004ef2b6: push 0x6bf778 */ { u32 v = 0x6bf778u; r_esp -= 4; W32(r_esp, v); }
    /* 004ef2bb: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4ef2c0u); f_005e9f20();
    /* 004ef2c0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004ef2c3:; BB(0x004ef2c3);
    /* 004ef2c3: movsx esi, word ptr [ebp + 0xc] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ef2c7: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004ef2cd: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x4ef2d2u); f_0047f950();
    /* 004ef2d2: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ef2d4: jle 0x4ef2ed */ if ((fZ||fS!=fO)) goto L_004ef2ed;
L_004ef2d6:; BB(0x004ef2d6);
    /* 004ef2d6: push 0x2c85 */ { u32 v = 0x2c85u; r_esp -= 4; W32(r_esp, v); }
    /* 004ef2db: push 0x6bf384 */ { u32 v = 0x6bf384u; r_esp -= 4; W32(r_esp, v); }
    /* 004ef2e0: push 0x6bf740 */ { u32 v = 0x6bf740u; r_esp -= 4; W32(r_esp, v); }
    /* 004ef2e5: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4ef2eau); f_005e9f20();
    /* 004ef2ea: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004ef2ed:; BB(0x004ef2ed);
    /* 004ef2ed: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004ef2f0: movsx ecx, word ptr [eax + 0x372] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x372u));
    /* 004ef2f7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004ef2fa: fild dword ptr [ebp - 0x20] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffe0u)));
    /* 004ef2fd: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 004ef303: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ef307: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 004ef30a: fild dword ptr [ebp - 0x24] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffdcu)));
    /* 004ef30d: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 004ef30f: fstp qword ptr [ebp - 0x18] */ W_F64((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 004ef312: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004ef315: mov ecx, dword ptr [eax + 0x428] */ r_ecx = R32((u32)(r_eax+0x428u));
    /* 004ef31b: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ef31f: imul edx, edx, 0xe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xeu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ef322: lea eax, [ecx + edx + 0xb60] */ r_eax = (u32)(r_ecx+r_edx+0xb60u);
    /* 004ef329: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ef32d: movzx edx, word ptr [eax + ecx*2 - 4] */ r_edx = (u32)R16((u32)(r_eax+r_ecx*2+0xfffffffcu));
    /* 004ef332: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ef334: jne 0x4ef33e */ if (!fZ) goto L_004ef33e;
L_004ef336:; BB(0x004ef336);
    /* 004ef336: fld qword ptr [ebp - 0x18] */ FPUSH(R_F64((u32)(r_ebp+0xffffffe8u)));
    /* 004ef339: jmp 0x4ef40e */ goto L_004ef40e;
L_004ef33e:; BB(0x004ef33e);
    /* 004ef33e: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004ef341: mov ecx, dword ptr [eax + 0x428] */ r_ecx = R32((u32)(r_eax+0x428u));
    /* 004ef347: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ef34b: imul edx, edx, 0xe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xeu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ef34e: lea eax, [ecx + edx + 0xb60] */ r_eax = (u32)(r_ecx+r_edx+0xb60u);
    /* 004ef355: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ef359: movzx edx, word ptr [eax + ecx*2 - 4] */ r_edx = (u32)R16((u32)(r_eax+r_ecx*2+0xfffffffcu));
    /* 004ef35e: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 004ef361: fild dword ptr [ebp - 0x28] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd8u)));
    /* 004ef364: fstp qword ptr [ebp - 8] */ W_F64((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 004ef367: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004ef36a: mov ecx, dword ptr [eax + 0x428] */ r_ecx = R32((u32)(r_eax+0x428u));
    /* 004ef370: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ef374: imul edx, edx, 0xe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xeu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ef377: lea eax, [ecx + edx + 0xbd0] */ r_eax = (u32)(r_ecx+r_edx+0xbd0u);
    /* 004ef37e: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ef382: movzx edx, word ptr [eax + ecx*2 - 4] */ r_edx = (u32)R16((u32)(r_eax+r_ecx*2+0xfffffffcu));
    /* 004ef387: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 004ef38a: fild dword ptr [ebp - 0x2c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd4u)));
    /* 004ef38d: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 004ef390: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 004ef396: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x4ef39bu); f_005da7b0();
    /* 004ef39b: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004ef39e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ef3a0: jne 0x4ef3d5 */ if (!fZ) goto L_004ef3d5;
L_004ef3a2:; BB(0x004ef3a2);
    /* 004ef3a2: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004ef3a5: movsx edx, word ptr [ecx + 0x376] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x376u));
    /* 004ef3ac: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 004ef3af: fild dword ptr [ebp - 0x30] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd0u)));
    /* 004ef3b2: fdivr qword ptr [ebp - 0x10] */ ST(0) = R_F64((u32)(r_ebp+0xfffffff0u)) / ST(0);
    /* 004ef3b5: fadd qword ptr [ebp - 0x18] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xffffffe8u));
    /* 004ef3b8: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004ef3bb: movsx ecx, word ptr [eax + 0x376] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x376u));
    /* 004ef3c2: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 004ef3c5: fild dword ptr [ebp - 0x34] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffccu)));
    /* 004ef3c8: fdivr qword ptr [ebp - 8] */ ST(0) = R_F64((u32)(r_ebp+0xfffffff8u)) / ST(0);
    /* 004ef3cb: fld1  */ FPUSH(1.0);
    /* 004ef3cd: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004ef3cf: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 004ef3d1: jmp 0x4ef40e */ goto L_004ef40e;
L_004ef3d5:; BB(0x004ef3d5);
    /* 004ef3d5: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004ef3d8: movsx eax, word ptr [edx + 0x376] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x376u));
    /* 004ef3df: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004ef3e0: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004ef3e2: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004ef3e4: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 004ef3e7: fild dword ptr [ebp - 0x38] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffc8u)));
    /* 004ef3ea: fdivr qword ptr [ebp - 0x10] */ ST(0) = R_F64((u32)(r_ebp+0xfffffff0u)) / ST(0);
    /* 004ef3ed: fadd qword ptr [ebp - 0x18] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xffffffe8u));
    /* 004ef3f0: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004ef3f3: movsx eax, word ptr [eax + 0x376] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x376u));
    /* 004ef3fa: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004ef3fb: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004ef3fd: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004ef3ff: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 004ef402: fild dword ptr [ebp - 0x3c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffc4u)));
    /* 004ef405: fdivr qword ptr [ebp - 8] */ ST(0) = R_F64((u32)(r_ebp+0xfffffff8u)) / ST(0);
    /* 004ef408: fld1  */ FPUSH(1.0);
    /* 004ef40a: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004ef40c: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
L_004ef40e:; BB(0x004ef40e);
    /* 004ef40e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004ef40f: mov esp, ebp */ r_esp = r_ebp;
    /* 004ef411: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ef412: ret 8 */ FN_RET(0x004ef250); r_esp += 12; return;
}

void f_004ef440(void) /* PokerPlayer::func_004ef440 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004ef440);
    /* 004ef440: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ef441: mov ebp, esp */ r_ebp = r_esp;
    /* 004ef443: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ef446: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004ef447: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 004ef44a: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ef44e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ef451: jge 0x4ef46a */ if ((fS==fO)) goto L_004ef46a;
L_004ef453:; BB(0x004ef453);
    /* 004ef453: push 0x2c99 */ { u32 v = 0x2c99u; r_esp -= 4; W32(r_esp, v); }
    /* 004ef458: push 0x6bf384 */ { u32 v = 0x6bf384u; r_esp -= 4; W32(r_esp, v); }
    /* 004ef45d: push 0x6bf730 */ { u32 v = 0x6bf730u; r_esp -= 4; W32(r_esp, v); }
    /* 004ef462: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4ef467u); f_005e9f20();
    /* 004ef467: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004ef46a:; BB(0x004ef46a);
    /* 004ef46a: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ef46e: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ef471: jle 0x4ef48a */ if ((fZ||fS!=fO)) goto L_004ef48a;
L_004ef473:; BB(0x004ef473);
    /* 004ef473: push 0x2c9a */ { u32 v = 0x2c9au; r_esp -= 4; W32(r_esp, v); }
    /* 004ef478: push 0x6bf384 */ { u32 v = 0x6bf384u; r_esp -= 4; W32(r_esp, v); }
    /* 004ef47d: push 0x6bf720 */ { u32 v = 0x6bf720u; r_esp -= 4; W32(r_esp, v); }
    /* 004ef482: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4ef487u); f_005e9f20();
    /* 004ef487: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004ef48a:; BB(0x004ef48a);
    /* 004ef48a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004ef48d: movsx edx, word ptr [ecx + 0x64] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x64u));
    /* 004ef491: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ef493: jne 0x4ef4dd */ if (!fZ) goto L_004ef4dd;
L_004ef495:; BB(0x004ef495);
    /* 004ef495: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ef499: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ef49c: jne 0x4ef4af */ if (!fZ) goto L_004ef4af;
L_004ef49e:; BB(0x004ef49e);
    /* 004ef49e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004ef4a1: mov ax, word ptr [ecx + 0x386] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ecx+0x386u))) & 0xffffu);
    /* 004ef4a8: jmp 0x4ef71c */ goto L_004ef71c;
L_004ef4af:; BB(0x004ef4af);
    /* 004ef4af: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ef4b3: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ef4b6: jne 0x4ef4c9 */ if (!fZ) goto L_004ef4c9;
L_004ef4b8:; BB(0x004ef4b8);
    /* 004ef4b8: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004ef4bb: mov ax, word ptr [eax + 0x384] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+0x384u))) & 0xffffu);
    /* 004ef4c2: jmp 0x4ef71c */ goto L_004ef71c;
L_004ef4c9:; BB(0x004ef4c9);
    /* 004ef4c9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004ef4cc: mov ax, word ptr [ecx + 0x382] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ecx+0x382u))) & 0xffffu);
    /* 004ef4d3: jmp 0x4ef71c */ goto L_004ef71c;
L_004ef4dd:; BB(0x004ef4dd);
    /* 004ef4dd: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004ef4e0: movsx eax, word ptr [edx + 0x64] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x64u));
    /* 004ef4e4: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ef4e7: jne 0x4ef586 */ if (!fZ) goto L_004ef586;
L_004ef4ed:; BB(0x004ef4ed);
    /* 004ef4ed: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ef4f1: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ef4f4: jne 0x4ef522 */ if (!fZ) goto L_004ef522;
L_004ef4f6:; BB(0x004ef4f6);
    /* 004ef4f6: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004ef4f9: movsx esi, word ptr [edx + 0x386] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+0x386u));
    /* 004ef500: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 004ef502: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4ef507u); f_0062fbf0();
    /* 004ef507: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ef50a: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004ef50c: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 004ef50e: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4ef513u); f_0062fbf0();
    /* 004ef513: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ef516: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004ef518: mov ax, si */ r_eax = (r_eax & 0xffff0000u) | (((u16)r_esi) & 0xffffu);
    /* 004ef51b: jmp 0x4ef71c */ goto L_004ef71c;
L_004ef522:; BB(0x004ef522);
    /* 004ef522: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ef526: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ef529: jne 0x4ef557 */ if (!fZ) goto L_004ef557;
L_004ef52b:; BB(0x004ef52b);
    /* 004ef52b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004ef52e: movsx esi, word ptr [ecx + 0x384] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ecx+0x384u));
    /* 004ef535: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 004ef537: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4ef53cu); f_0062fbf0();
    /* 004ef53c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ef53f: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004ef541: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 004ef543: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4ef548u); f_0062fbf0();
    /* 004ef548: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ef54b: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004ef54d: mov ax, si */ r_eax = (r_eax & 0xffff0000u) | (((u16)r_esi) & 0xffffu);
    /* 004ef550: jmp 0x4ef71c */ goto L_004ef71c;
L_004ef557:; BB(0x004ef557);
    /* 004ef557: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004ef55a: movsx esi, word ptr [edx + 0x382] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+0x382u));
    /* 004ef561: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 004ef563: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4ef568u); f_0062fbf0();
    /* 004ef568: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ef56b: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004ef56d: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 004ef56f: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4ef574u); f_0062fbf0();
    /* 004ef574: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ef577: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004ef579: mov ax, si */ r_eax = (r_eax & 0xffff0000u) | (((u16)r_esi) & 0xffffu);
    /* 004ef57c: jmp 0x4ef71c */ goto L_004ef71c;
L_004ef586:; BB(0x004ef586);
    /* 004ef586: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004ef589: movsx ecx, word ptr [eax + 0x64] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x64u));
    /* 004ef58d: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ef590: jne 0x4ef646 */ if (!fZ) goto L_004ef646;
L_004ef596:; BB(0x004ef596);
    /* 004ef596: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004ef59c: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ef5a0: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ef5a3: jne 0x4ef5cd */ if (!fZ) goto L_004ef5cd;
L_004ef5a5:; BB(0x004ef5a5);
    /* 004ef5a5: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004ef5a8: movsx esi, word ptr [eax + 0x386] */ r_esi = (u32)(i32)(i16)R16((u32)(r_eax+0x386u));
    /* 004ef5af: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004ef5b1: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4ef5b6u); f_0062fbf0();
    /* 004ef5b6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ef5b9: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004ef5bb: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004ef5bd: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4ef5c2u); f_0062fbf0();
    /* 004ef5c2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ef5c5: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004ef5c7: mov word ptr [ebp - 4], si */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_esi);
    /* 004ef5cb: jmp 0x4ef624 */ goto L_004ef624;
L_004ef5cd:; BB(0x004ef5cd);
    /* 004ef5cd: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ef5d1: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ef5d4: jne 0x4ef5fe */ if (!fZ) goto L_004ef5fe;
L_004ef5d6:; BB(0x004ef5d6);
    /* 004ef5d6: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004ef5d9: movsx esi, word ptr [edx + 0x384] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+0x384u));
    /* 004ef5e0: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004ef5e2: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4ef5e7u); f_0062fbf0();
    /* 004ef5e7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ef5ea: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004ef5ec: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004ef5ee: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4ef5f3u); f_0062fbf0();
    /* 004ef5f3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ef5f6: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004ef5f8: mov word ptr [ebp - 4], si */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_esi);
    /* 004ef5fc: jmp 0x4ef624 */ goto L_004ef624;
L_004ef5fe:; BB(0x004ef5fe);
    /* 004ef5fe: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004ef601: movsx esi, word ptr [eax + 0x382] */ r_esi = (u32)(i32)(i16)R16((u32)(r_eax+0x382u));
    /* 004ef608: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004ef60a: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4ef60fu); f_0062fbf0();
    /* 004ef60f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ef612: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004ef614: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004ef616: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4ef61bu); f_0062fbf0();
    /* 004ef61b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ef61e: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004ef620: mov word ptr [ebp - 4], si */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_esi);
L_004ef624:; BB(0x004ef624);
    /* 004ef624: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004ef628: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ef62b: jge 0x4ef638 */ if ((fS==fO)) goto L_004ef638;
L_004ef62d:; BB(0x004ef62d);
    /* 004ef62d: mov ax, 1 */ r_eax = (r_eax & 0xffff0000u) | ((0x1u) & 0xffffu);
    /* 004ef631: jmp 0x4ef71c */ goto L_004ef71c;
L_004ef638:; BB(0x004ef638);
    /* 004ef638: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 004ef63c: jmp 0x4ef71c */ goto L_004ef71c;
L_004ef646:; BB(0x004ef646);
    /* 004ef646: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004ef649: movsx eax, word ptr [edx + 0x64] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x64u));
    /* 004ef64d: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ef650: jne 0x4ef6fd */ if (!fZ) goto L_004ef6fd;
L_004ef656:; BB(0x004ef656);
    /* 004ef656: mov word ptr [ebp - 8], 0 */ W16((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 004ef65c: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ef660: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ef663: jne 0x4ef68d */ if (!fZ) goto L_004ef68d;
L_004ef665:; BB(0x004ef665);
    /* 004ef665: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004ef668: movsx esi, word ptr [edx + 0x386] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+0x386u));
    /* 004ef66f: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 004ef671: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4ef676u); f_0062fbf0();
    /* 004ef676: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ef679: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004ef67b: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 004ef67d: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4ef682u); f_0062fbf0();
    /* 004ef682: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ef685: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004ef687: mov word ptr [ebp - 8], si */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_esi);
    /* 004ef68b: jmp 0x4ef6e4 */ goto L_004ef6e4;
L_004ef68d:; BB(0x004ef68d);
    /* 004ef68d: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ef691: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ef694: jne 0x4ef6be */ if (!fZ) goto L_004ef6be;
L_004ef696:; BB(0x004ef696);
    /* 004ef696: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004ef699: movsx esi, word ptr [ecx + 0x384] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ecx+0x384u));
    /* 004ef6a0: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 004ef6a2: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4ef6a7u); f_0062fbf0();
    /* 004ef6a7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ef6aa: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004ef6ac: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 004ef6ae: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4ef6b3u); f_0062fbf0();
    /* 004ef6b3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ef6b6: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004ef6b8: mov word ptr [ebp - 8], si */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_esi);
    /* 004ef6bc: jmp 0x4ef6e4 */ goto L_004ef6e4;
L_004ef6be:; BB(0x004ef6be);
    /* 004ef6be: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004ef6c1: movsx esi, word ptr [edx + 0x382] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+0x382u));
    /* 004ef6c8: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 004ef6ca: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4ef6cfu); f_0062fbf0();
    /* 004ef6cf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ef6d2: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004ef6d4: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 004ef6d6: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4ef6dbu); f_0062fbf0();
    /* 004ef6db: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ef6de: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004ef6e0: mov word ptr [ebp - 8], si */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_esi);
L_004ef6e4:; BB(0x004ef6e4);
    /* 004ef6e4: movsx eax, word ptr [ebp - 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 004ef6e8: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ef6eb: jge 0x4ef6f5 */ if ((fS==fO)) goto L_004ef6f5;
L_004ef6ed:; BB(0x004ef6ed);
    /* 004ef6ed: mov ax, 1 */ r_eax = (r_eax & 0xffff0000u) | ((0x1u) & 0xffffu);
    /* 004ef6f1: jmp 0x4ef71c */ goto L_004ef71c;
L_004ef6f5:; BB(0x004ef6f5);
    /* 004ef6f5: mov ax, word ptr [ebp - 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 004ef6f9: jmp 0x4ef71c */ goto L_004ef71c;
L_004ef6fd:; BB(0x004ef6fd);
    /* 004ef6fd: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 004ef6ff: jne 0x4ef718 */ if (!fZ) goto L_004ef718;
L_004ef701:; BB(0x004ef701);
    /* 004ef701: push 0x2ccb */ { u32 v = 0x2ccbu; r_esp -= 4; W32(r_esp, v); }
    /* 004ef706: push 0x6bf384 */ { u32 v = 0x6bf384u; r_esp -= 4; W32(r_esp, v); }
    /* 004ef70b: push 0x6b2b64 */ { u32 v = 0x6b2b64u; r_esp -= 4; W32(r_esp, v); }
    /* 004ef710: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4ef715u); f_005e9f20();
    /* 004ef715: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004ef718:; BB(0x004ef718);
    /* 004ef718: mov ax, 0x64 */ r_eax = (r_eax & 0xffff0000u) | ((0x64u) & 0xffffu);
L_004ef71c:; BB(0x004ef71c);
    /* 004ef71c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004ef71d: mov esp, ebp */ r_esp = r_ebp;
    /* 004ef71f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ef720: ret 4 */ FN_RET(0x004ef440); r_esp += 8; return;
}

void f_004ef750(void) /* PokerPlayer::func_004ef750 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004ef750);
    /* 004ef750: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ef751: mov ebp, esp */ r_ebp = r_esp;
    /* 004ef753: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004ef754: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004ef757: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ef75a: movsx ecx, word ptr [eax + 0x64] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x64u));
    /* 004ef75e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ef760: jne 0x4ef770 */ if (!fZ) goto L_004ef770;
L_004ef762:; BB(0x004ef762);
    /* 004ef762: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ef765: mov ax, word ptr [edx + 0x38a] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+0x38au))) & 0xffffu);
    /* 004ef76c: jmp 0x4ef7ed */ goto L_004ef7ed;
L_004ef770:; BB(0x004ef770);
    /* 004ef770: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ef773: movsx ecx, word ptr [eax + 0x64] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x64u));
    /* 004ef777: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ef77a: jne 0x4ef78c */ if (!fZ) goto L_004ef78c;
L_004ef77c:; BB(0x004ef77c);
    /* 004ef77c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ef77f: movsx eax, word ptr [edx + 0x38a] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x38au));
    /* 004ef786: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 004ef788: jmp 0x4ef7ed */ goto L_004ef7ed;
L_004ef78c:; BB(0x004ef78c);
    /* 004ef78c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ef78f: movsx ecx, word ptr [eax + 0x64] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x64u));
    /* 004ef793: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ef796: jne 0x4ef7ab */ if (!fZ) goto L_004ef7ab;
L_004ef798:; BB(0x004ef798);
    /* 004ef798: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ef79b: movsx eax, word ptr [edx + 0x38a] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x38au));
    /* 004ef7a2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004ef7a3: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004ef7a5: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004ef7a7: jmp 0x4ef7ed */ goto L_004ef7ed;
L_004ef7ab:; BB(0x004ef7ab);
    /* 004ef7ab: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ef7ae: movsx ecx, word ptr [eax + 0x64] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x64u));
    /* 004ef7b2: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ef7b5: jne 0x4ef7ce */ if (!fZ) goto L_004ef7ce;
L_004ef7b7:; BB(0x004ef7b7);
    /* 004ef7b7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ef7ba: movsx eax, word ptr [edx + 0x38a] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x38au));
    /* 004ef7c1: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004ef7c2: and edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 004ef7c5: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004ef7c7: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004ef7ca: jmp 0x4ef7ed */ goto L_004ef7ed;
L_004ef7ce:; BB(0x004ef7ce);
    /* 004ef7ce: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 004ef7d0: jne 0x4ef7e9 */ if (!fZ) goto L_004ef7e9;
L_004ef7d2:; BB(0x004ef7d2);
    /* 004ef7d2: push 0x2ce0 */ { u32 v = 0x2ce0u; r_esp -= 4; W32(r_esp, v); }
    /* 004ef7d7: push 0x6bf384 */ { u32 v = 0x6bf384u; r_esp -= 4; W32(r_esp, v); }
    /* 004ef7dc: push 0x6b2b64 */ { u32 v = 0x6b2b64u; r_esp -= 4; W32(r_esp, v); }
    /* 004ef7e1: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4ef7e6u); f_005e9f20();
    /* 004ef7e6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004ef7e9:; BB(0x004ef7e9);
    /* 004ef7e9: mov ax, 0x14 */ r_eax = (r_eax & 0xffff0000u) | ((0x14u) & 0xffffu);
L_004ef7ed:; BB(0x004ef7ed);
    /* 004ef7ed: mov esp, ebp */ r_esp = r_ebp;
    /* 004ef7ef: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ef7f0: ret  */ FN_RET(0x004ef750); r_esp += 4; return;
}

void f_004ef800(void) /* PokerPlayer::func_004ef800 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004ef800);
    /* 004ef800: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ef801: mov ebp, esp */ r_ebp = r_esp;
    /* 004ef803: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ef806: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004ef809: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ef80d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ef80f: jne 0x4ef822 */ if (!fZ) goto L_004ef822;
L_004ef811:; BB(0x004ef811);
    /* 004ef811: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 004ef813: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4ef818u); f_0062fbf0();
    /* 004ef818: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ef81b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004ef81e: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
L_004ef822:; BB(0x004ef822);
    /* 004ef822: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ef826: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004ef828: jle 0x4ef833 */ if ((fZ||fS!=fO)) goto L_004ef833;
L_004ef82a:; BB(0x004ef82a);
    /* 004ef82a: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ef82e: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ef831: jle 0x4ef84a */ if ((fZ||fS!=fO)) goto L_004ef84a;
L_004ef833:; BB(0x004ef833);
    /* 004ef833: push 0x2ceb */ { u32 v = 0x2cebu; r_esp -= 4; W32(r_esp, v); }
    /* 004ef838: push 0x6bf384 */ { u32 v = 0x6bf384u; r_esp -= 4; W32(r_esp, v); }
    /* 004ef83d: push 0x6bf6d8 */ { u32 v = 0x6bf6d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004ef842: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4ef847u); f_005e9f20();
    /* 004ef847: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004ef84a:; BB(0x004ef84a);
    /* 004ef84a: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ef84e: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004ef851: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004ef854: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004ef857: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 004ef85a: cmp dword ptr [ebp - 8], 9 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004ef85e: ja 0x4f03db */ if ((!fC&&!fZ)) goto L_004f03db;
L_004ef864:; BB(0x004ef864);
    /* 004ef864: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004ef867: jmp dword ptr [eax*4 + 0x4f03e4] */ { u32 t = R32((u32)(r_eax*4+0x4f03e4u)); switch (t) { case 0x4ef86eu: goto L_004ef86e; case 0x4ef993u: goto L_004ef993; case 0x4efab8u: goto L_004efab8; case 0x4efbddu: goto L_004efbdd; case 0x4efd02u: goto L_004efd02; case 0x4efe27u: goto L_004efe27; case 0x4eff4cu: goto L_004eff4c; case 0x4f0071u: goto L_004f0071; case 0x4f0196u: goto L_004f0196; case 0x4f02bbu: goto L_004f02bb; default: UNSUP(0x004ef867, "jump table entry is not a known target"); } }
L_004ef86e:; BB(0x004ef86e);
    /* 004ef86e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ef871: mov word ptr [ecx + 0x39e], 5 */ W16((u32)(r_ecx+0x39eu), 0x5u);
    /* 004ef87a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ef87d: mov word ptr [edx + 0x3a0], 0xf */ W16((u32)(r_edx+0x3a0u), 0xfu);
    /* 004ef886: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ef889: mov word ptr [eax + 0x3a2], 0x28 */ W16((u32)(r_eax+0x3a2u), 0x28u);
    /* 004ef892: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ef895: mov word ptr [ecx + 0x3a4], 0x19 */ W16((u32)(r_ecx+0x3a4u), 0x19u);
    /* 004ef89e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ef8a1: mov word ptr [edx + 0x3a6], 0x14 */ W16((u32)(r_edx+0x3a6u), 0x14u);
    /* 004ef8aa: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ef8ad: mov word ptr [eax + 0x3a8], 6 */ W16((u32)(r_eax+0x3a8u), 0x6u);
    /* 004ef8b6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ef8b9: mov word ptr [ecx + 0x3aa], 0x28 */ W16((u32)(r_ecx+0x3aau), 0x28u);
    /* 004ef8c2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ef8c5: mov word ptr [edx + 0x3ac], 0xa */ W16((u32)(r_edx+0x3acu), 0xau);
    /* 004ef8ce: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ef8d1: mov word ptr [eax + 0x3ae], 0x14 */ W16((u32)(r_eax+0x3aeu), 0x14u);
    /* 004ef8da: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ef8dd: mov word ptr [ecx + 0x3b0], 0x28 */ W16((u32)(r_ecx+0x3b0u), 0x28u);
    /* 004ef8e6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ef8e9: mov word ptr [edx + 0x3b2], 0x19 */ W16((u32)(r_edx+0x3b2u), 0x19u);
    /* 004ef8f2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ef8f5: mov word ptr [eax + 0x3b4], 5 */ W16((u32)(r_eax+0x3b4u), 0x5u);
    /* 004ef8fe: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ef901: mov word ptr [ecx + 0x3b6], 0x1e */ W16((u32)(r_ecx+0x3b6u), 0x1eu);
    /* 004ef90a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ef90d: mov word ptr [edx + 0x3ba], 0x4b */ W16((u32)(r_edx+0x3bau), 0x4bu);
    /* 004ef916: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ef919: mov word ptr [eax + 0x3bc], 0x32 */ W16((u32)(r_eax+0x3bcu), 0x32u);
    /* 004ef922: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ef925: mov word ptr [ecx + 0x3be], 0x19 */ W16((u32)(r_ecx+0x3beu), 0x19u);
    /* 004ef92e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ef931: mov word ptr [edx + 0x3c0], 0x46 */ W16((u32)(r_edx+0x3c0u), 0x46u);
    /* 004ef93a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ef93d: mov word ptr [eax + 0x3c2], 0x3c */ W16((u32)(r_eax+0x3c2u), 0x3cu);
    /* 004ef946: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ef949: mov word ptr [ecx + 0x3b8], 5 */ W16((u32)(r_ecx+0x3b8u), 0x5u);
    /* 004ef952: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ef955: mov word ptr [edx + 0x3c4], 6 */ W16((u32)(r_edx+0x3c4u), 0x6u);
    /* 004ef95e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ef961: mov word ptr [eax + 0x3c6], 0x1e */ W16((u32)(r_eax+0x3c6u), 0x1eu);
    /* 004ef96a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ef96d: mov word ptr [ecx + 0x3c8], 0x14 */ W16((u32)(r_ecx+0x3c8u), 0x14u);
    /* 004ef976: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ef979: mov word ptr [edx + 0x3ca], 0x4b */ W16((u32)(r_edx+0x3cau), 0x4bu);
    /* 004ef982: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ef985: mov word ptr [eax + 0x3cc], 0x55 */ W16((u32)(r_eax+0x3ccu), 0x55u);
    /* 004ef98e: jmp 0x4f03db */ goto L_004f03db;
L_004ef993:; BB(0x004ef993);
    /* 004ef993: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ef996: mov word ptr [ecx + 0x39e], 2 */ W16((u32)(r_ecx+0x39eu), 0x2u);
    /* 004ef99f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ef9a2: mov word ptr [edx + 0x3a0], 0x19 */ W16((u32)(r_edx+0x3a0u), 0x19u);
    /* 004ef9ab: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ef9ae: mov word ptr [eax + 0x3a2], 0x37 */ W16((u32)(r_eax+0x3a2u), 0x37u);
    /* 004ef9b7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ef9ba: mov word ptr [ecx + 0x3a4], 0x32 */ W16((u32)(r_ecx+0x3a4u), 0x32u);
    /* 004ef9c3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ef9c6: mov word ptr [edx + 0x3a6], 0x28 */ W16((u32)(r_edx+0x3a6u), 0x28u);
    /* 004ef9cf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ef9d2: mov word ptr [eax + 0x3a8], 0xc */ W16((u32)(r_eax+0x3a8u), 0xcu);
    /* 004ef9db: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ef9de: mov word ptr [ecx + 0x3aa], 0x50 */ W16((u32)(r_ecx+0x3aau), 0x50u);
    /* 004ef9e7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ef9ea: mov word ptr [edx + 0x3ac], 0x18 */ W16((u32)(r_edx+0x3acu), 0x18u);
    /* 004ef9f3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ef9f6: mov word ptr [eax + 0x3ae], 8 */ W16((u32)(r_eax+0x3aeu), 0x8u);
    /* 004ef9ff: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004efa02: mov word ptr [ecx + 0x3c8], 0xc */ W16((u32)(r_ecx+0x3c8u), 0xcu);
    /* 004efa0b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004efa0e: mov word ptr [edx + 0x3b0], 0x2d */ W16((u32)(r_edx+0x3b0u), 0x2du);
    /* 004efa17: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004efa1a: mov word ptr [eax + 0x3b2], 0x1c */ W16((u32)(r_eax+0x3b2u), 0x1cu);
    /* 004efa23: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004efa26: mov word ptr [ecx + 0x3b4], 0x11 */ W16((u32)(r_ecx+0x3b4u), 0x11u);
    /* 004efa2f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004efa32: mov word ptr [edx + 0x3b6], 0x19 */ W16((u32)(r_edx+0x3b6u), 0x19u);
    /* 004efa3b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004efa3e: mov word ptr [eax + 0x3b8], 8 */ W16((u32)(r_eax+0x3b8u), 0x8u);
    /* 004efa47: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004efa4a: mov word ptr [ecx + 0x3ba], 0x5a */ W16((u32)(r_ecx+0x3bau), 0x5au);
    /* 004efa53: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004efa56: mov word ptr [edx + 0x3bc], 0x32 */ W16((u32)(r_edx+0x3bcu), 0x32u);
    /* 004efa5f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004efa62: mov word ptr [eax + 0x3be], 0x1e */ W16((u32)(r_eax+0x3beu), 0x1eu);
    /* 004efa6b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004efa6e: mov word ptr [ecx + 0x3c0], 0x55 */ W16((u32)(r_ecx+0x3c0u), 0x55u);
    /* 004efa77: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004efa7a: mov word ptr [edx + 0x3c2], 0x50 */ W16((u32)(r_edx+0x3c2u), 0x50u);
    /* 004efa83: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004efa86: mov word ptr [eax + 0x3c4], 3 */ W16((u32)(r_eax+0x3c4u), 0x3u);
    /* 004efa8f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004efa92: mov word ptr [ecx + 0x3c6], 0x46 */ W16((u32)(r_ecx+0x3c6u), 0x46u);
    /* 004efa9b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004efa9e: mov word ptr [edx + 0x3ca], 0x3c */ W16((u32)(r_edx+0x3cau), 0x3cu);
    /* 004efaa7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004efaaa: mov word ptr [eax + 0x3cc], 0x4b */ W16((u32)(r_eax+0x3ccu), 0x4bu);
    /* 004efab3: jmp 0x4f03db */ goto L_004f03db;
L_004efab8:; BB(0x004efab8);
    /* 004efab8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004efabb: mov word ptr [ecx + 0x39e], 8 */ W16((u32)(r_ecx+0x39eu), 0x8u);
    /* 004efac4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004efac7: mov word ptr [edx + 0x3a0], 0xa */ W16((u32)(r_edx+0x3a0u), 0xau);
    /* 004efad0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004efad3: mov word ptr [eax + 0x3a2], 0x21 */ W16((u32)(r_eax+0x3a2u), 0x21u);
    /* 004efadc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004efadf: mov word ptr [ecx + 0x3a4], 0xf */ W16((u32)(r_ecx+0x3a4u), 0xfu);
    /* 004efae8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004efaeb: mov word ptr [edx + 0x3a6], 0xe */ W16((u32)(r_edx+0x3a6u), 0xeu);
    /* 004efaf4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004efaf7: mov word ptr [eax + 0x3a8], 8 */ W16((u32)(r_eax+0x3a8u), 0x8u);
    /* 004efb00: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004efb03: mov word ptr [ecx + 0x3aa], 0x1c */ W16((u32)(r_ecx+0x3aau), 0x1cu);
    /* 004efb0c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004efb0f: mov word ptr [edx + 0x3ac], 0x10 */ W16((u32)(r_edx+0x3acu), 0x10u);
    /* 004efb18: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004efb1b: mov word ptr [eax + 0x3ae], 0xf */ W16((u32)(r_eax+0x3aeu), 0xfu);
    /* 004efb24: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004efb27: mov word ptr [ecx + 0x3b0], 0x1e */ W16((u32)(r_ecx+0x3b0u), 0x1eu);
    /* 004efb30: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004efb33: mov word ptr [edx + 0x3b2], 0x14 */ W16((u32)(r_edx+0x3b2u), 0x14u);
    /* 004efb3c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004efb3f: mov word ptr [eax + 0x3b4], 4 */ W16((u32)(r_eax+0x3b4u), 0x4u);
    /* 004efb48: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004efb4b: mov word ptr [ecx + 0x3b6], 0x28 */ W16((u32)(r_ecx+0x3b6u), 0x28u);
    /* 004efb54: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004efb57: mov word ptr [edx + 0x3b8], 2 */ W16((u32)(r_edx+0x3b8u), 0x2u);
    /* 004efb60: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004efb63: mov word ptr [eax + 0x3ba], 0x5a */ W16((u32)(r_eax+0x3bau), 0x5au);
    /* 004efb6c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004efb6f: mov word ptr [ecx + 0x3bc], 0x3c */ W16((u32)(r_ecx+0x3bcu), 0x3cu);
    /* 004efb78: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004efb7b: mov word ptr [edx + 0x3be], 0x1e */ W16((u32)(r_edx+0x3beu), 0x1eu);
    /* 004efb84: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004efb87: mov word ptr [eax + 0x3c0], 0x32 */ W16((u32)(r_eax+0x3c0u), 0x32u);
    /* 004efb90: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004efb93: mov word ptr [ecx + 0x3c2], 0x32 */ W16((u32)(r_ecx+0x3c2u), 0x32u);
    /* 004efb9c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004efb9f: mov word ptr [edx + 0x3c4], 0xc */ W16((u32)(r_edx+0x3c4u), 0xcu);
    /* 004efba8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004efbab: mov word ptr [eax + 0x3c6], 0x14 */ W16((u32)(r_eax+0x3c6u), 0x14u);
    /* 004efbb4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004efbb7: mov word ptr [ecx + 0x3c8], 0x1e */ W16((u32)(r_ecx+0x3c8u), 0x1eu);
    /* 004efbc0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004efbc3: mov word ptr [edx + 0x3ca], 0x5a */ W16((u32)(r_edx+0x3cau), 0x5au);
    /* 004efbcc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004efbcf: mov word ptr [eax + 0x3cc], 0x5f */ W16((u32)(r_eax+0x3ccu), 0x5fu);
    /* 004efbd8: jmp 0x4f03db */ goto L_004f03db;
L_004efbdd:; BB(0x004efbdd);
    /* 004efbdd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004efbe0: mov word ptr [ecx + 0x39e], 0xa */ W16((u32)(r_ecx+0x39eu), 0xau);
    /* 004efbe9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004efbec: mov word ptr [edx + 0x3a0], 0xe */ W16((u32)(r_edx+0x3a0u), 0xeu);
    /* 004efbf5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004efbf8: mov word ptr [eax + 0x3a2], 0x1e */ W16((u32)(r_eax+0x3a2u), 0x1eu);
    /* 004efc01: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004efc04: mov word ptr [ecx + 0x3a4], 0x14 */ W16((u32)(r_ecx+0x3a4u), 0x14u);
    /* 004efc0d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004efc10: mov word ptr [edx + 0x3a6], 0xa */ W16((u32)(r_edx+0x3a6u), 0xau);
    /* 004efc19: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004efc1c: mov word ptr [eax + 0x3a8], 0xe */ W16((u32)(r_eax+0x3a8u), 0xeu);
    /* 004efc25: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004efc28: mov word ptr [ecx + 0x3aa], 0x2c */ W16((u32)(r_ecx+0x3aau), 0x2cu);
    /* 004efc31: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004efc34: mov word ptr [edx + 0x3ac], 0x14 */ W16((u32)(r_edx+0x3acu), 0x14u);
    /* 004efc3d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004efc40: mov word ptr [eax + 0x3ae], 0x1c */ W16((u32)(r_eax+0x3aeu), 0x1cu);
    /* 004efc49: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004efc4c: mov word ptr [ecx + 0x3b0], 0x26 */ W16((u32)(r_ecx+0x3b0u), 0x26u);
    /* 004efc55: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004efc58: mov word ptr [edx + 0x3b2], 0x15 */ W16((u32)(r_edx+0x3b2u), 0x15u);
    /* 004efc61: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004efc64: mov word ptr [eax + 0x3b4], 5 */ W16((u32)(r_eax+0x3b4u), 0x5u);
    /* 004efc6d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004efc70: mov word ptr [ecx + 0x3b6], 0x23 */ W16((u32)(r_ecx+0x3b6u), 0x23u);
    /* 004efc79: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004efc7c: mov word ptr [edx + 0x3b8], 4 */ W16((u32)(r_edx+0x3b8u), 0x4u);
    /* 004efc85: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004efc88: mov word ptr [eax + 0x3ba], 0x50 */ W16((u32)(r_eax+0x3bau), 0x50u);
    /* 004efc91: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004efc94: mov word ptr [ecx + 0x3bc], 0x3c */ W16((u32)(r_ecx+0x3bcu), 0x3cu);
    /* 004efc9d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004efca0: mov word ptr [edx + 0x3be], 0x28 */ W16((u32)(r_edx+0x3beu), 0x28u);
    /* 004efca9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004efcac: mov word ptr [eax + 0x3c0], 0x3c */ W16((u32)(r_eax+0x3c0u), 0x3cu);
    /* 004efcb5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004efcb8: mov word ptr [ecx + 0x3c2], 0x3c */ W16((u32)(r_ecx+0x3c2u), 0x3cu);
    /* 004efcc1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004efcc4: mov word ptr [edx + 0x3c4], 0xa */ W16((u32)(r_edx+0x3c4u), 0xau);
    /* 004efccd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004efcd0: mov word ptr [eax + 0x3c6], 0x1e */ W16((u32)(r_eax+0x3c6u), 0x1eu);
    /* 004efcd9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004efcdc: mov word ptr [ecx + 0x3c8], 0x1a */ W16((u32)(r_ecx+0x3c8u), 0x1au);
    /* 004efce5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004efce8: mov word ptr [edx + 0x3ca], 0x43 */ W16((u32)(r_edx+0x3cau), 0x43u);
    /* 004efcf1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004efcf4: mov word ptr [eax + 0x3cc], 0x50 */ W16((u32)(r_eax+0x3ccu), 0x50u);
    /* 004efcfd: jmp 0x4f03db */ goto L_004f03db;
L_004efd02:; BB(0x004efd02);
    /* 004efd02: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004efd05: mov word ptr [ecx + 0x39e], 7 */ W16((u32)(r_ecx+0x39eu), 0x7u);
    /* 004efd0e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004efd11: mov word ptr [edx + 0x3a0], 0x12 */ W16((u32)(r_edx+0x3a0u), 0x12u);
    /* 004efd1a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004efd1d: mov word ptr [eax + 0x3a2], 0x25 */ W16((u32)(r_eax+0x3a2u), 0x25u);
    /* 004efd26: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004efd29: mov word ptr [ecx + 0x3a4], 0x23 */ W16((u32)(r_ecx+0x3a4u), 0x23u);
    /* 004efd32: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004efd35: mov word ptr [edx + 0x3a6], 0x1e */ W16((u32)(r_edx+0x3a6u), 0x1eu);
    /* 004efd3e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004efd41: mov word ptr [eax + 0x3a8], 4 */ W16((u32)(r_eax+0x3a8u), 0x4u);
    /* 004efd4a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004efd4d: mov word ptr [ecx + 0x3aa], 0x3c */ W16((u32)(r_ecx+0x3aau), 0x3cu);
    /* 004efd56: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004efd59: mov word ptr [edx + 0x3ac], 6 */ W16((u32)(r_edx+0x3acu), 0x6u);
    /* 004efd62: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004efd65: mov word ptr [eax + 0x3ae], 0x23 */ W16((u32)(r_eax+0x3aeu), 0x23u);
    /* 004efd6e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004efd71: mov word ptr [ecx + 0x3b0], 0x23 */ W16((u32)(r_ecx+0x3b0u), 0x23u);
    /* 004efd7a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004efd7d: mov word ptr [edx + 0x3b2], 0x1b */ W16((u32)(r_edx+0x3b2u), 0x1bu);
    /* 004efd86: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004efd89: mov word ptr [eax + 0x3b4], 7 */ W16((u32)(r_eax+0x3b4u), 0x7u);
    /* 004efd92: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004efd95: mov word ptr [ecx + 0x3b6], 0x19 */ W16((u32)(r_ecx+0x3b6u), 0x19u);
    /* 004efd9e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004efda1: mov word ptr [edx + 0x3b8], 6 */ W16((u32)(r_edx+0x3b8u), 0x6u);
    /* 004efdaa: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004efdad: mov word ptr [eax + 0x3ba], 0x5a */ W16((u32)(r_eax+0x3bau), 0x5au);
    /* 004efdb6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004efdb9: mov word ptr [ecx + 0x3bc], 0x28 */ W16((u32)(r_ecx+0x3bcu), 0x28u);
    /* 004efdc2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004efdc5: mov word ptr [edx + 0x3be], 0x14 */ W16((u32)(r_edx+0x3beu), 0x14u);
    /* 004efdce: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004efdd1: mov word ptr [eax + 0x3c0], 0x37 */ W16((u32)(r_eax+0x3c0u), 0x37u);
    /* 004efdda: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004efddd: mov word ptr [ecx + 0x3c2], 0x46 */ W16((u32)(r_ecx+0x3c2u), 0x46u);
    /* 004efde6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004efde9: mov word ptr [edx + 0x3c4], 4 */ W16((u32)(r_edx+0x3c4u), 0x4u);
    /* 004efdf2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004efdf5: mov word ptr [eax + 0x3c6], 0x28 */ W16((u32)(r_eax+0x3c6u), 0x28u);
    /* 004efdfe: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004efe01: mov word ptr [ecx + 0x3c8], 0x12 */ W16((u32)(r_ecx+0x3c8u), 0x12u);
    /* 004efe0a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004efe0d: mov word ptr [edx + 0x3ca], 0x52 */ W16((u32)(r_edx+0x3cau), 0x52u);
    /* 004efe16: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004efe19: mov word ptr [eax + 0x3cc], 0x58 */ W16((u32)(r_eax+0x3ccu), 0x58u);
    /* 004efe22: jmp 0x4f03db */ goto L_004f03db;
L_004efe27:; BB(0x004efe27);
    /* 004efe27: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004efe2a: mov word ptr [ecx + 0x39e], 0 */ W16((u32)(r_ecx+0x39eu), 0x0u);
    /* 004efe33: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004efe36: mov word ptr [edx + 0x3a0], 0x14 */ W16((u32)(r_edx+0x3a0u), 0x14u);
    /* 004efe3f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004efe42: mov word ptr [eax + 0x3a2], 0x37 */ W16((u32)(r_eax+0x3a2u), 0x37u);
    /* 004efe4b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004efe4e: mov word ptr [ecx + 0x3a4], 0x64 */ W16((u32)(r_ecx+0x3a4u), 0x64u);
    /* 004efe57: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004efe5a: mov word ptr [edx + 0x3a6], 0x3c */ W16((u32)(r_edx+0x3a6u), 0x3cu);
    /* 004efe63: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004efe66: mov word ptr [eax + 0x3a8], 0x14 */ W16((u32)(r_eax+0x3a8u), 0x14u);
    /* 004efe6f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004efe72: mov word ptr [ecx + 0x3aa], 0x50 */ W16((u32)(r_ecx+0x3aau), 0x50u);
    /* 004efe7b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004efe7e: mov word ptr [edx + 0x3ac], 0x28 */ W16((u32)(r_edx+0x3acu), 0x28u);
    /* 004efe87: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004efe8a: mov word ptr [eax + 0x3ae], 0x1e */ W16((u32)(r_eax+0x3aeu), 0x1eu);
    /* 004efe93: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004efe96: mov word ptr [ecx + 0x3b0], 0x2e */ W16((u32)(r_ecx+0x3b0u), 0x2eu);
    /* 004efe9f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004efea2: mov word ptr [edx + 0x3b2], 0x20 */ W16((u32)(r_edx+0x3b2u), 0x20u);
    /* 004efeab: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004efeae: mov word ptr [eax + 0x3b4], 0xf */ W16((u32)(r_eax+0x3b4u), 0xfu);
    /* 004efeb7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004efeba: mov word ptr [ecx + 0x3b6], 5 */ W16((u32)(r_ecx+0x3b6u), 0x5u);
    /* 004efec3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004efec6: mov word ptr [edx + 0x3b8], 8 */ W16((u32)(r_edx+0x3b8u), 0x8u);
    /* 004efecf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004efed2: mov word ptr [eax + 0x3ba], 0x41 */ W16((u32)(r_eax+0x3bau), 0x41u);
    /* 004efedb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004efede: mov word ptr [ecx + 0x3bc], 0x23 */ W16((u32)(r_ecx+0x3bcu), 0x23u);
    /* 004efee7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004efeea: mov word ptr [edx + 0x3be], 0xf */ W16((u32)(r_edx+0x3beu), 0xfu);
    /* 004efef3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004efef6: mov word ptr [eax + 0x3c0], 0x4b */ W16((u32)(r_eax+0x3c0u), 0x4bu);
    /* 004efeff: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004eff02: mov word ptr [ecx + 0x3c2], 0x4b */ W16((u32)(r_ecx+0x3c2u), 0x4bu);
    /* 004eff0b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004eff0e: mov word ptr [edx + 0x3c4], 2 */ W16((u32)(r_edx+0x3c4u), 0x2u);
    /* 004eff17: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004eff1a: mov word ptr [eax + 0x3c6], 0x50 */ W16((u32)(r_eax+0x3c6u), 0x50u);
    /* 004eff23: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004eff26: mov word ptr [ecx + 0x3c8], 0xa */ W16((u32)(r_ecx+0x3c8u), 0xau);
    /* 004eff2f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004eff32: mov word ptr [edx + 0x3ca], 0x32 */ W16((u32)(r_edx+0x3cau), 0x32u);
    /* 004eff3b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004eff3e: mov word ptr [eax + 0x3cc], 0x41 */ W16((u32)(r_eax+0x3ccu), 0x41u);
    /* 004eff47: jmp 0x4f03db */ goto L_004f03db;
L_004eff4c:; BB(0x004eff4c);
    /* 004eff4c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004eff4f: mov word ptr [ecx + 0x39e], 3 */ W16((u32)(r_ecx+0x39eu), 0x3u);
    /* 004eff58: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004eff5b: mov word ptr [edx + 0x3a0], 0xf */ W16((u32)(r_edx+0x3a0u), 0xfu);
    /* 004eff64: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004eff67: mov word ptr [eax + 0x3a2], 0x1e */ W16((u32)(r_eax+0x3a2u), 0x1eu);
    /* 004eff70: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004eff73: mov word ptr [ecx + 0x3a4], 0x19 */ W16((u32)(r_ecx+0x3a4u), 0x19u);
    /* 004eff7c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004eff7f: mov word ptr [edx + 0x3a6], 0x10 */ W16((u32)(r_edx+0x3a6u), 0x10u);
    /* 004eff88: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004eff8b: mov word ptr [eax + 0x3a8], 4 */ W16((u32)(r_eax+0x3a8u), 0x4u);
    /* 004eff94: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004eff97: mov word ptr [ecx + 0x3aa], 0x1e */ W16((u32)(r_ecx+0x3aau), 0x1eu);
    /* 004effa0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004effa3: mov word ptr [edx + 0x3ac], 6 */ W16((u32)(r_edx+0x3acu), 0x6u);
    /* 004effac: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004effaf: mov word ptr [eax + 0x3ae], 0x32 */ W16((u32)(r_eax+0x3aeu), 0x32u);
    /* 004effb8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004effbb: mov word ptr [ecx + 0x3b0], 0x2b */ W16((u32)(r_ecx+0x3b0u), 0x2bu);
    /* 004effc4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004effc7: mov word ptr [edx + 0x3b2], 0x1c */ W16((u32)(r_edx+0x3b2u), 0x1cu);
    /* 004effd0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004effd3: mov word ptr [eax + 0x3b4], 0xc */ W16((u32)(r_eax+0x3b4u), 0xcu);
    /* 004effdc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004effdf: mov word ptr [ecx + 0x3b6], 0x28 */ W16((u32)(r_ecx+0x3b6u), 0x28u);
    /* 004effe8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004effeb: mov word ptr [edx + 0x3b8], 2 */ W16((u32)(r_edx+0x3b8u), 0x2u);
    /* 004efff4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004efff7: mov word ptr [eax + 0x3ba], 0x3c */ W16((u32)(r_eax+0x3bau), 0x3cu);
    /* 004f0000: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f0003: mov word ptr [ecx + 0x3bc], 0x28 */ W16((u32)(r_ecx+0x3bcu), 0x28u);
    /* 004f000c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f000f: mov word ptr [edx + 0x3be], 0x14 */ W16((u32)(r_edx+0x3beu), 0x14u);
    /* 004f0018: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f001b: mov word ptr [eax + 0x3c0], 0x3c */ W16((u32)(r_eax+0x3c0u), 0x3cu);
    /* 004f0024: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f0027: mov word ptr [ecx + 0x3c2], 0x28 */ W16((u32)(r_ecx+0x3c2u), 0x28u);
    /* 004f0030: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f0033: mov word ptr [edx + 0x3c4], 4 */ W16((u32)(r_edx+0x3c4u), 0x4u);
    /* 004f003c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f003f: mov word ptr [eax + 0x3c6], 0x41 */ W16((u32)(r_eax+0x3c6u), 0x41u);
    /* 004f0048: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f004b: mov word ptr [ecx + 0x3c8], 0xf */ W16((u32)(r_ecx+0x3c8u), 0xfu);
    /* 004f0054: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f0057: mov word ptr [edx + 0x3ca], 0x41 */ W16((u32)(r_edx+0x3cau), 0x41u);
    /* 004f0060: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f0063: mov word ptr [eax + 0x3cc], 0x52 */ W16((u32)(r_eax+0x3ccu), 0x52u);
    /* 004f006c: jmp 0x4f03db */ goto L_004f03db;
L_004f0071:; BB(0x004f0071);
    /* 004f0071: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f0074: mov word ptr [ecx + 0x39e], 5 */ W16((u32)(r_ecx+0x39eu), 0x5u);
    /* 004f007d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f0080: mov word ptr [edx + 0x3a0], 0xe */ W16((u32)(r_edx+0x3a0u), 0xeu);
    /* 004f0089: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f008c: mov word ptr [eax + 0x3a2], 0x27 */ W16((u32)(r_eax+0x3a2u), 0x27u);
    /* 004f0095: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f0098: mov word ptr [ecx + 0x3a4], 0x16 */ W16((u32)(r_ecx+0x3a4u), 0x16u);
    /* 004f00a1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f00a4: mov word ptr [edx + 0x3a6], 0x11 */ W16((u32)(r_edx+0x3a6u), 0x11u);
    /* 004f00ad: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f00b0: mov word ptr [eax + 0x3a8], 8 */ W16((u32)(r_eax+0x3a8u), 0x8u);
    /* 004f00b9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f00bc: mov word ptr [ecx + 0x3aa], 0x21 */ W16((u32)(r_ecx+0x3aau), 0x21u);
    /* 004f00c5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f00c8: mov word ptr [edx + 0x3ac], 0xc */ W16((u32)(r_edx+0x3acu), 0xcu);
    /* 004f00d1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f00d4: mov word ptr [eax + 0x3ae], 0x14 */ W16((u32)(r_eax+0x3aeu), 0x14u);
    /* 004f00dd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f00e0: mov word ptr [ecx + 0x3b0], 0x23 */ W16((u32)(r_ecx+0x3b0u), 0x23u);
    /* 004f00e9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f00ec: mov word ptr [edx + 0x3b2], 0x17 */ W16((u32)(r_edx+0x3b2u), 0x17u);
    /* 004f00f5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f00f8: mov word ptr [eax + 0x3b4], 6 */ W16((u32)(r_eax+0x3b4u), 0x6u);
    /* 004f0101: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f0104: mov word ptr [ecx + 0x3b6], 0x1e */ W16((u32)(r_ecx+0x3b6u), 0x1eu);
    /* 004f010d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f0110: mov word ptr [edx + 0x3ba], 0x4b */ W16((u32)(r_edx+0x3bau), 0x4bu);
    /* 004f0119: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f011c: mov word ptr [eax + 0x3bc], 0x32 */ W16((u32)(r_eax+0x3bcu), 0x32u);
    /* 004f0125: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f0128: mov word ptr [ecx + 0x3be], 0x1e */ W16((u32)(r_ecx+0x3beu), 0x1eu);
    /* 004f0131: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f0134: mov word ptr [edx + 0x3c0], 0x41 */ W16((u32)(r_edx+0x3c0u), 0x41u);
    /* 004f013d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f0140: mov word ptr [eax + 0x3c2], 0x32 */ W16((u32)(r_eax+0x3c2u), 0x32u);
    /* 004f0149: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f014c: mov word ptr [ecx + 0x3b8], 5 */ W16((u32)(r_ecx+0x3b8u), 0x5u);
    /* 004f0155: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f0158: mov word ptr [edx + 0x3c4], 0xc */ W16((u32)(r_edx+0x3c4u), 0xcu);
    /* 004f0161: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f0164: mov word ptr [eax + 0x3c6], 0xf */ W16((u32)(r_eax+0x3c6u), 0xfu);
    /* 004f016d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f0170: mov word ptr [ecx + 0x3c8], 0x1d */ W16((u32)(r_ecx+0x3c8u), 0x1du);
    /* 004f0179: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f017c: mov word ptr [edx + 0x3ca], 0x4b */ W16((u32)(r_edx+0x3cau), 0x4bu);
    /* 004f0185: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f0188: mov word ptr [eax + 0x3cc], 0x57 */ W16((u32)(r_eax+0x3ccu), 0x57u);
    /* 004f0191: jmp 0x4f03db */ goto L_004f03db;
L_004f0196:; BB(0x004f0196);
    /* 004f0196: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f0199: mov word ptr [ecx + 0x39e], 8 */ W16((u32)(r_ecx+0x39eu), 0x8u);
    /* 004f01a2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f01a5: mov word ptr [edx + 0x3a0], 0xf */ W16((u32)(r_edx+0x3a0u), 0xfu);
    /* 004f01ae: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f01b1: mov word ptr [eax + 0x3a2], 0x28 */ W16((u32)(r_eax+0x3a2u), 0x28u);
    /* 004f01ba: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f01bd: mov word ptr [ecx + 0x3a4], 0x19 */ W16((u32)(r_ecx+0x3a4u), 0x19u);
    /* 004f01c6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f01c9: mov word ptr [edx + 0x3a6], 0x18 */ W16((u32)(r_edx+0x3a6u), 0x18u);
    /* 004f01d2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f01d5: mov word ptr [eax + 0x3a8], 0xa */ W16((u32)(r_eax+0x3a8u), 0xau);
    /* 004f01de: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f01e1: mov word ptr [ecx + 0x3aa], 0x28 */ W16((u32)(r_ecx+0x3aau), 0x28u);
    /* 004f01ea: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f01ed: mov word ptr [edx + 0x3ac], 0xe */ W16((u32)(r_edx+0x3acu), 0xeu);
    /* 004f01f6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f01f9: mov word ptr [eax + 0x3ae], 0x14 */ W16((u32)(r_eax+0x3aeu), 0x14u);
    /* 004f0202: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f0205: mov word ptr [ecx + 0x3b0], 0x29 */ W16((u32)(r_ecx+0x3b0u), 0x29u);
    /* 004f020e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f0211: mov word ptr [edx + 0x3b2], 0x1e */ W16((u32)(r_edx+0x3b2u), 0x1eu);
    /* 004f021a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f021d: mov word ptr [eax + 0x3b4], 8 */ W16((u32)(r_eax+0x3b4u), 0x8u);
    /* 004f0226: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f0229: mov word ptr [ecx + 0x3b6], 0x1e */ W16((u32)(r_ecx+0x3b6u), 0x1eu);
    /* 004f0232: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f0235: mov word ptr [edx + 0x3ba], 0x4b */ W16((u32)(r_edx+0x3bau), 0x4bu);
    /* 004f023e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f0241: mov word ptr [eax + 0x3bc], 0x32 */ W16((u32)(r_eax+0x3bcu), 0x32u);
    /* 004f024a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f024d: mov word ptr [ecx + 0x3be], 0x23 */ W16((u32)(r_ecx+0x3beu), 0x23u);
    /* 004f0256: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f0259: mov word ptr [edx + 0x3c0], 0x3c */ W16((u32)(r_edx+0x3c0u), 0x3cu);
    /* 004f0262: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f0265: mov word ptr [eax + 0x3c2], 0x28 */ W16((u32)(r_eax+0x3c2u), 0x28u);
    /* 004f026e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f0271: mov word ptr [ecx + 0x3b8], 5 */ W16((u32)(r_ecx+0x3b8u), 0x5u);
    /* 004f027a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f027d: mov word ptr [edx + 0x3c4], 6 */ W16((u32)(r_edx+0x3c4u), 0x6u);
    /* 004f0286: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f0289: mov word ptr [eax + 0x3c6], 0x1e */ W16((u32)(r_eax+0x3c6u), 0x1eu);
    /* 004f0292: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f0295: mov word ptr [ecx + 0x3c8], 0x15 */ W16((u32)(r_ecx+0x3c8u), 0x15u);
    /* 004f029e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f02a1: mov word ptr [edx + 0x3ca], 0x55 */ W16((u32)(r_edx+0x3cau), 0x55u);
    /* 004f02aa: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f02ad: mov word ptr [eax + 0x3cc], 0x55 */ W16((u32)(r_eax+0x3ccu), 0x55u);
    /* 004f02b6: jmp 0x4f03db */ goto L_004f03db;
L_004f02bb:; BB(0x004f02bb);
    /* 004f02bb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f02be: mov word ptr [ecx + 0x39e], 7 */ W16((u32)(r_ecx+0x39eu), 0x7u);
    /* 004f02c7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f02ca: mov word ptr [edx + 0x3a0], 0x10 */ W16((u32)(r_edx+0x3a0u), 0x10u);
    /* 004f02d3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f02d6: mov word ptr [eax + 0x3a2], 0x21 */ W16((u32)(r_eax+0x3a2u), 0x21u);
    /* 004f02df: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f02e2: mov word ptr [ecx + 0x3a4], 0x12 */ W16((u32)(r_ecx+0x3a4u), 0x12u);
    /* 004f02eb: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f02ee: mov word ptr [edx + 0x3a6], 0x10 */ W16((u32)(r_edx+0x3a6u), 0x10u);
    /* 004f02f7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f02fa: mov word ptr [eax + 0x3a8], 8 */ W16((u32)(r_eax+0x3a8u), 0x8u);
    /* 004f0303: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f0306: mov word ptr [ecx + 0x3aa], 0x22 */ W16((u32)(r_ecx+0x3aau), 0x22u);
    /* 004f030f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f0312: mov word ptr [edx + 0x3ac], 0x10 */ W16((u32)(r_edx+0x3acu), 0x10u);
    /* 004f031b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f031e: mov word ptr [eax + 0x3ae], 0x11 */ W16((u32)(r_eax+0x3aeu), 0x11u);
    /* 004f0327: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f032a: mov word ptr [ecx + 0x3b0], 0x20 */ W16((u32)(r_ecx+0x3b0u), 0x20u);
    /* 004f0333: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f0336: mov word ptr [edx + 0x3b2], 0x18 */ W16((u32)(r_edx+0x3b2u), 0x18u);
    /* 004f033f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f0342: mov word ptr [eax + 0x3b4], 5 */ W16((u32)(r_eax+0x3b4u), 0x5u);
    /* 004f034b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f034e: mov word ptr [ecx + 0x3b6], 0x28 */ W16((u32)(r_ecx+0x3b6u), 0x28u);
    /* 004f0357: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f035a: mov word ptr [edx + 0x3b8], 3 */ W16((u32)(r_edx+0x3b8u), 0x3u);
    /* 004f0363: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f0366: mov word ptr [eax + 0x3ba], 0x5a */ W16((u32)(r_eax+0x3bau), 0x5au);
    /* 004f036f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f0372: mov word ptr [ecx + 0x3bc], 0x3c */ W16((u32)(r_ecx+0x3bcu), 0x3cu);
    /* 004f037b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f037e: mov word ptr [edx + 0x3be], 0x1e */ W16((u32)(r_edx+0x3beu), 0x1eu);
    /* 004f0387: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f038a: mov word ptr [eax + 0x3c0], 0x32 */ W16((u32)(r_eax+0x3c0u), 0x32u);
    /* 004f0393: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f0396: mov word ptr [ecx + 0x3c2], 0x3c */ W16((u32)(r_ecx+0x3c2u), 0x3cu);
    /* 004f039f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f03a2: mov word ptr [edx + 0x3c4], 0xa */ W16((u32)(r_edx+0x3c4u), 0xau);
    /* 004f03ab: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f03ae: mov word ptr [eax + 0x3c6], 0x14 */ W16((u32)(r_eax+0x3c6u), 0x14u);
    /* 004f03b7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f03ba: mov word ptr [ecx + 0x3c8], 0x22 */ W16((u32)(r_ecx+0x3c8u), 0x22u);
    /* 004f03c3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f03c6: mov word ptr [edx + 0x3ca], 0x50 */ W16((u32)(r_edx+0x3cau), 0x50u);
    /* 004f03cf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f03d2: mov word ptr [eax + 0x3cc], 0x5a */ W16((u32)(r_eax+0x3ccu), 0x5au);
L_004f03db:; BB(0x004f03db);
    /* 004f03db: mov esp, ebp */ r_esp = r_ebp;
    /* 004f03dd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f03de: ret 4 */ FN_RET(0x004ef800); r_esp += 8; return;
}

void f_004f0410(void) /* PokerPlayer::func_004f0410 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f0410);
    /* 004f0410: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f0411: mov ebp, esp */ r_ebp = r_esp;
    /* 004f0413: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f0416: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004f0417: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004f041a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f041d: movsx ecx, word ptr [eax + 0x64] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x64u));
    /* 004f0421: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f0423: jne 0x4f0439 */ if (!fZ) goto L_004f0439;
L_004f0425:; BB(0x004f0425);
    /* 004f0425: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f0428: mov ax, word ptr [edx + 0x39e] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+0x39eu))) & 0xffffu);
    /* 004f042f: jmp 0x4f04ed */ goto L_004f04ed;
L_004f0439:; BB(0x004f0439);
    /* 004f0439: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f043c: movsx ecx, word ptr [eax + 0x64] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x64u));
    /* 004f0440: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f0443: jne 0x4f047d */ if (!fZ) goto L_004f047d;
L_004f0445:; BB(0x004f0445);
    /* 004f0445: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f0448: mov ax, word ptr [edx + 0x39e] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+0x39eu))) & 0xffffu);
    /* 004f044f: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 004f0453: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004f0455: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4f045au); f_0062fbf0();
    /* 004f045a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f045d: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f0461: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004f0463: mov word ptr [ebp - 4], cx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_ecx);
    /* 004f0467: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f046b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004f046d: jge 0x4f0475 */ if ((fS==fO)) goto L_004f0475;
L_004f046f:; BB(0x004f046f);
    /* 004f046f: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
L_004f0475:; BB(0x004f0475);
    /* 004f0475: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 004f0479: jmp 0x4f04ed */ goto L_004f04ed;
L_004f047d:; BB(0x004f047d);
    /* 004f047d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f0480: movsx ecx, word ptr [eax + 0x64] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x64u));
    /* 004f0484: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f0487: jne 0x4f04a6 */ if (!fZ) goto L_004f04a6;
L_004f0489:; BB(0x004f0489);
    /* 004f0489: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f048c: movsx esi, word ptr [edx + 0x39e] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+0x39eu));
    /* 004f0493: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004f0495: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4f049au); f_0062fbf0();
    /* 004f049a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f049d: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f049f: mov ax, si */ r_eax = (r_eax & 0xffff0000u) | (((u16)r_esi) & 0xffffu);
    /* 004f04a2: jmp 0x4f04ed */ goto L_004f04ed;
L_004f04a6:; BB(0x004f04a6);
    /* 004f04a6: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f04a9: movsx ecx, word ptr [eax + 0x64] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x64u));
    /* 004f04ad: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f04b0: jne 0x4f04cf */ if (!fZ) goto L_004f04cf;
L_004f04b2:; BB(0x004f04b2);
    /* 004f04b2: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f04b5: movsx esi, word ptr [edx + 0x39e] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+0x39eu));
    /* 004f04bc: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004f04be: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4f04c3u); f_0062fbf0();
    /* 004f04c3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f04c6: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f04c8: mov ax, si */ r_eax = (r_eax & 0xffff0000u) | (((u16)r_esi) & 0xffffu);
    /* 004f04cb: jmp 0x4f04ed */ goto L_004f04ed;
L_004f04cf:; BB(0x004f04cf);
    /* 004f04cf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 004f04d1: jne 0x4f04ea */ if (!fZ) goto L_004f04ea;
L_004f04d3:; BB(0x004f04d3);
    /* 004f04d3: push 0x2e10 */ { u32 v = 0x2e10u; r_esp -= 4; W32(r_esp, v); }
    /* 004f04d8: push 0x6bf384 */ { u32 v = 0x6bf384u; r_esp -= 4; W32(r_esp, v); }
    /* 004f04dd: push 0x6b2b64 */ { u32 v = 0x6b2b64u; r_esp -= 4; W32(r_esp, v); }
    /* 004f04e2: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f04e7u); f_005e9f20();
    /* 004f04e7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f04ea:; BB(0x004f04ea);
    /* 004f04ea: xor ax, ax */ {  u32 a = (u16)r_eax; u32 b = (u16)r_eax; u32 r = (a ^ b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
L_004f04ed:; BB(0x004f04ed);
    /* 004f04ed: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004f04ee: mov esp, ebp */ r_esp = r_ebp;
    /* 004f04f0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f04f1: ret  */ FN_RET(0x004f0410); r_esp += 4; return;
}

void f_004f0530(void) /* PokerPlayer::func_004f0530 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f0530);
    /* 004f0530: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f0531: mov ebp, esp */ r_ebp = r_esp;
    /* 004f0533: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f0536: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004f0539: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f053c: movsx ecx, word ptr [eax + 0x64] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x64u));
    /* 004f0540: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f0542: jne 0x4f0564 */ if (!fZ) goto L_004f0564;
L_004f0544:; BB(0x004f0544);
    /* 004f0544: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f0547: movsx eax, word ptr [edx + 0x3a6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x3a6u));
    /* 004f054e: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004f0551: fild dword ptr [ebp - 8] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff8u)));
    /* 004f0554: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 004f055a: jmp 0x4f05f3 */ goto L_004f05f3;
L_004f0564:; BB(0x004f0564);
    /* 004f0564: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f0567: movsx edx, word ptr [ecx + 0x64] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x64u));
    /* 004f056b: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f056e: jne 0x4f058a */ if (!fZ) goto L_004f058a;
L_004f0570:; BB(0x004f0570);
    /* 004f0570: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f0573: movsx ecx, word ptr [eax + 0x3a6] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x3a6u));
    /* 004f057a: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 004f057d: fild dword ptr [ebp - 0xc] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff4u)));
    /* 004f0580: fdiv qword ptr [0x6bf718] */ ST(0) = ST(0) / R_F64((u32)(0x6bf718u));
    /* 004f0586: jmp 0x4f05f3 */ goto L_004f05f3;
L_004f058a:; BB(0x004f058a);
    /* 004f058a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f058d: movsx eax, word ptr [edx + 0x64] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x64u));
    /* 004f0591: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f0594: jne 0x4f05b0 */ if (!fZ) goto L_004f05b0;
L_004f0596:; BB(0x004f0596);
    /* 004f0596: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f0599: movsx edx, word ptr [ecx + 0x3a6] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x3a6u));
    /* 004f05a0: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 004f05a3: fild dword ptr [ebp - 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff0u)));
    /* 004f05a6: fdiv qword ptr [0x6bf710] */ ST(0) = ST(0) / R_F64((u32)(0x6bf710u));
    /* 004f05ac: jmp 0x4f05f3 */ goto L_004f05f3;
L_004f05b0:; BB(0x004f05b0);
    /* 004f05b0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f05b3: movsx ecx, word ptr [eax + 0x64] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x64u));
    /* 004f05b7: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f05ba: jne 0x4f05d6 */ if (!fZ) goto L_004f05d6;
L_004f05bc:; BB(0x004f05bc);
    /* 004f05bc: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f05bf: movsx eax, word ptr [edx + 0x3a6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x3a6u));
    /* 004f05c6: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004f05c9: fild dword ptr [ebp - 0x14] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffecu)));
    /* 004f05cc: fdiv qword ptr [0x6bf708] */ ST(0) = ST(0) / R_F64((u32)(0x6bf708u));
    /* 004f05d2: jmp 0x4f05f3 */ goto L_004f05f3;
L_004f05d6:; BB(0x004f05d6);
    /* 004f05d6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 004f05d8: jne 0x4f05f1 */ if (!fZ) goto L_004f05f1;
L_004f05da:; BB(0x004f05da);
    /* 004f05da: push 0x2e25 */ { u32 v = 0x2e25u; r_esp -= 4; W32(r_esp, v); }
    /* 004f05df: push 0x6bf384 */ { u32 v = 0x6bf384u; r_esp -= 4; W32(r_esp, v); }
    /* 004f05e4: push 0x6b2b64 */ { u32 v = 0x6b2b64u; r_esp -= 4; W32(r_esp, v); }
    /* 004f05e9: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f05eeu); f_005e9f20();
    /* 004f05ee: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f05f1:; BB(0x004f05f1);
    /* 004f05f1: fldz  */ FPUSH(0.0);
L_004f05f3:; BB(0x004f05f3);
    /* 004f05f3: mov esp, ebp */ r_esp = r_ebp;
    /* 004f05f5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f05f6: ret  */ FN_RET(0x004f0530); r_esp += 4; return;
}

void f_004f0600(void) /* PokerPlayer::func_004f0600 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f0600);
    /* 004f0600: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f0601: mov ebp, esp */ r_ebp = r_esp;
    /* 004f0603: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f0606: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004f0609: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f060c: movsx ecx, word ptr [eax + 0x64] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x64u));
    /* 004f0610: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f0612: jne 0x4f0634 */ if (!fZ) goto L_004f0634;
L_004f0614:; BB(0x004f0614);
    /* 004f0614: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f0617: movsx eax, word ptr [edx + 0x3a8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x3a8u));
    /* 004f061e: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004f0621: fild dword ptr [ebp - 8] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff8u)));
    /* 004f0624: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 004f062a: jmp 0x4f06c3 */ goto L_004f06c3;
L_004f0634:; BB(0x004f0634);
    /* 004f0634: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f0637: movsx edx, word ptr [ecx + 0x64] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x64u));
    /* 004f063b: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f063e: jne 0x4f065a */ if (!fZ) goto L_004f065a;
L_004f0640:; BB(0x004f0640);
    /* 004f0640: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f0643: movsx ecx, word ptr [eax + 0x3a8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x3a8u));
    /* 004f064a: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 004f064d: fild dword ptr [ebp - 0xc] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff4u)));
    /* 004f0650: fdiv qword ptr [0x6bf718] */ ST(0) = ST(0) / R_F64((u32)(0x6bf718u));
    /* 004f0656: jmp 0x4f06c3 */ goto L_004f06c3;
L_004f065a:; BB(0x004f065a);
    /* 004f065a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f065d: movsx eax, word ptr [edx + 0x64] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x64u));
    /* 004f0661: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f0664: jne 0x4f0680 */ if (!fZ) goto L_004f0680;
L_004f0666:; BB(0x004f0666);
    /* 004f0666: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f0669: movsx edx, word ptr [ecx + 0x3a8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x3a8u));
    /* 004f0670: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 004f0673: fild dword ptr [ebp - 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff0u)));
    /* 004f0676: fdiv qword ptr [0x6bf710] */ ST(0) = ST(0) / R_F64((u32)(0x6bf710u));
    /* 004f067c: jmp 0x4f06c3 */ goto L_004f06c3;
L_004f0680:; BB(0x004f0680);
    /* 004f0680: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f0683: movsx ecx, word ptr [eax + 0x64] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x64u));
    /* 004f0687: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f068a: jne 0x4f06a6 */ if (!fZ) goto L_004f06a6;
L_004f068c:; BB(0x004f068c);
    /* 004f068c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f068f: movsx eax, word ptr [edx + 0x3a8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x3a8u));
    /* 004f0696: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004f0699: fild dword ptr [ebp - 0x14] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffecu)));
    /* 004f069c: fdiv qword ptr [0x6bf708] */ ST(0) = ST(0) / R_F64((u32)(0x6bf708u));
    /* 004f06a2: jmp 0x4f06c3 */ goto L_004f06c3;
L_004f06a6:; BB(0x004f06a6);
    /* 004f06a6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 004f06a8: jne 0x4f06c1 */ if (!fZ) goto L_004f06c1;
L_004f06aa:; BB(0x004f06aa);
    /* 004f06aa: push 0x2e35 */ { u32 v = 0x2e35u; r_esp -= 4; W32(r_esp, v); }
    /* 004f06af: push 0x6bf384 */ { u32 v = 0x6bf384u; r_esp -= 4; W32(r_esp, v); }
    /* 004f06b4: push 0x6b2b64 */ { u32 v = 0x6b2b64u; r_esp -= 4; W32(r_esp, v); }
    /* 004f06b9: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f06beu); f_005e9f20();
    /* 004f06be: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f06c1:; BB(0x004f06c1);
    /* 004f06c1: fldz  */ FPUSH(0.0);
L_004f06c3:; BB(0x004f06c3);
    /* 004f06c3: mov esp, ebp */ r_esp = r_ebp;
    /* 004f06c5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f06c6: ret  */ FN_RET(0x004f0600); r_esp += 4; return;
}

void f_004f06d0(void) /* PokerPlayer::func_004f06d0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f06d0);
    /* 004f06d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f06d1: mov ebp, esp */ r_ebp = r_esp;
    /* 004f06d3: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f06d6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004f06d9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f06dc: movsx ecx, word ptr [eax + 0x64] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x64u));
    /* 004f06e0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f06e2: jne 0x4f0704 */ if (!fZ) goto L_004f0704;
L_004f06e4:; BB(0x004f06e4);
    /* 004f06e4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f06e7: movsx eax, word ptr [edx + 0x3aa] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x3aau));
    /* 004f06ee: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004f06f1: fild dword ptr [ebp - 8] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff8u)));
    /* 004f06f4: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 004f06fa: jmp 0x4f0793 */ goto L_004f0793;
L_004f0704:; BB(0x004f0704);
    /* 004f0704: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f0707: movsx edx, word ptr [ecx + 0x64] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x64u));
    /* 004f070b: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f070e: jne 0x4f072a */ if (!fZ) goto L_004f072a;
L_004f0710:; BB(0x004f0710);
    /* 004f0710: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f0713: movsx ecx, word ptr [eax + 0x3aa] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x3aau));
    /* 004f071a: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 004f071d: fild dword ptr [ebp - 0xc] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff4u)));
    /* 004f0720: fdiv qword ptr [0x6bf718] */ ST(0) = ST(0) / R_F64((u32)(0x6bf718u));
    /* 004f0726: jmp 0x4f0793 */ goto L_004f0793;
L_004f072a:; BB(0x004f072a);
    /* 004f072a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f072d: movsx eax, word ptr [edx + 0x64] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x64u));
    /* 004f0731: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f0734: jne 0x4f0750 */ if (!fZ) goto L_004f0750;
L_004f0736:; BB(0x004f0736);
    /* 004f0736: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f0739: movsx edx, word ptr [ecx + 0x3aa] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x3aau));
    /* 004f0740: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 004f0743: fild dword ptr [ebp - 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff0u)));
    /* 004f0746: fdiv qword ptr [0x6bf710] */ ST(0) = ST(0) / R_F64((u32)(0x6bf710u));
    /* 004f074c: jmp 0x4f0793 */ goto L_004f0793;
L_004f0750:; BB(0x004f0750);
    /* 004f0750: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f0753: movsx ecx, word ptr [eax + 0x64] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x64u));
    /* 004f0757: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f075a: jne 0x4f0776 */ if (!fZ) goto L_004f0776;
L_004f075c:; BB(0x004f075c);
    /* 004f075c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f075f: movsx eax, word ptr [edx + 0x3aa] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x3aau));
    /* 004f0766: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004f0769: fild dword ptr [ebp - 0x14] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffecu)));
    /* 004f076c: fdiv qword ptr [0x6bf708] */ ST(0) = ST(0) / R_F64((u32)(0x6bf708u));
    /* 004f0772: jmp 0x4f0793 */ goto L_004f0793;
L_004f0776:; BB(0x004f0776);
    /* 004f0776: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 004f0778: jne 0x4f0791 */ if (!fZ) goto L_004f0791;
L_004f077a:; BB(0x004f077a);
    /* 004f077a: push 0x2e45 */ { u32 v = 0x2e45u; r_esp -= 4; W32(r_esp, v); }
    /* 004f077f: push 0x6bf384 */ { u32 v = 0x6bf384u; r_esp -= 4; W32(r_esp, v); }
    /* 004f0784: push 0x6b2b64 */ { u32 v = 0x6b2b64u; r_esp -= 4; W32(r_esp, v); }
    /* 004f0789: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f078eu); f_005e9f20();
    /* 004f078e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f0791:; BB(0x004f0791);
    /* 004f0791: fldz  */ FPUSH(0.0);
L_004f0793:; BB(0x004f0793);
    /* 004f0793: mov esp, ebp */ r_esp = r_ebp;
    /* 004f0795: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f0796: ret  */ FN_RET(0x004f06d0); r_esp += 4; return;
}

void f_004f07a0(void) /* PokerPlayer::func_004f07a0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f07a0);
    /* 004f07a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f07a1: mov ebp, esp */ r_ebp = r_esp;
    /* 004f07a3: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f07a6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004f07a9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f07ac: movsx ecx, word ptr [eax + 0x64] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x64u));
    /* 004f07b0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f07b2: jne 0x4f07d4 */ if (!fZ) goto L_004f07d4;
L_004f07b4:; BB(0x004f07b4);
    /* 004f07b4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f07b7: movsx eax, word ptr [edx + 0x3ac] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x3acu));
    /* 004f07be: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004f07c1: fild dword ptr [ebp - 8] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff8u)));
    /* 004f07c4: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 004f07ca: jmp 0x4f0863 */ goto L_004f0863;
L_004f07d4:; BB(0x004f07d4);
    /* 004f07d4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f07d7: movsx edx, word ptr [ecx + 0x64] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x64u));
    /* 004f07db: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f07de: jne 0x4f07fa */ if (!fZ) goto L_004f07fa;
L_004f07e0:; BB(0x004f07e0);
    /* 004f07e0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f07e3: movsx ecx, word ptr [eax + 0x3ac] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x3acu));
    /* 004f07ea: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 004f07ed: fild dword ptr [ebp - 0xc] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff4u)));
    /* 004f07f0: fdiv qword ptr [0x6bf718] */ ST(0) = ST(0) / R_F64((u32)(0x6bf718u));
    /* 004f07f6: jmp 0x4f0863 */ goto L_004f0863;
L_004f07fa:; BB(0x004f07fa);
    /* 004f07fa: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f07fd: movsx eax, word ptr [edx + 0x64] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x64u));
    /* 004f0801: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f0804: jne 0x4f0820 */ if (!fZ) goto L_004f0820;
L_004f0806:; BB(0x004f0806);
    /* 004f0806: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f0809: movsx edx, word ptr [ecx + 0x3ac] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x3acu));
    /* 004f0810: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 004f0813: fild dword ptr [ebp - 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff0u)));
    /* 004f0816: fdiv qword ptr [0x6bf710] */ ST(0) = ST(0) / R_F64((u32)(0x6bf710u));
    /* 004f081c: jmp 0x4f0863 */ goto L_004f0863;
L_004f0820:; BB(0x004f0820);
    /* 004f0820: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f0823: movsx ecx, word ptr [eax + 0x64] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x64u));
    /* 004f0827: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f082a: jne 0x4f0846 */ if (!fZ) goto L_004f0846;
L_004f082c:; BB(0x004f082c);
    /* 004f082c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f082f: movsx eax, word ptr [edx + 0x3ac] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x3acu));
    /* 004f0836: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004f0839: fild dword ptr [ebp - 0x14] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffecu)));
    /* 004f083c: fdiv qword ptr [0x6bf708] */ ST(0) = ST(0) / R_F64((u32)(0x6bf708u));
    /* 004f0842: jmp 0x4f0863 */ goto L_004f0863;
L_004f0846:; BB(0x004f0846);
    /* 004f0846: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 004f0848: jne 0x4f0861 */ if (!fZ) goto L_004f0861;
L_004f084a:; BB(0x004f084a);
    /* 004f084a: push 0x2e55 */ { u32 v = 0x2e55u; r_esp -= 4; W32(r_esp, v); }
    /* 004f084f: push 0x6bf384 */ { u32 v = 0x6bf384u; r_esp -= 4; W32(r_esp, v); }
    /* 004f0854: push 0x6b2b64 */ { u32 v = 0x6b2b64u; r_esp -= 4; W32(r_esp, v); }
    /* 004f0859: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f085eu); f_005e9f20();
    /* 004f085e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f0861:; BB(0x004f0861);
    /* 004f0861: fldz  */ FPUSH(0.0);
L_004f0863:; BB(0x004f0863);
    /* 004f0863: mov esp, ebp */ r_esp = r_ebp;
    /* 004f0865: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f0866: ret  */ FN_RET(0x004f07a0); r_esp += 4; return;
}

void f_004f0870(void) /* PokerPlayer::func_004f0870 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f0870);
    /* 004f0870: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f0871: mov ebp, esp */ r_ebp = r_esp;
    /* 004f0873: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f0876: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004f0877: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004f087a: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f087e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f0881: jge 0x4f089a */ if ((fS==fO)) goto L_004f089a;
L_004f0883:; BB(0x004f0883);
    /* 004f0883: push 0x2e5c */ { u32 v = 0x2e5cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f0888: push 0x6bf384 */ { u32 v = 0x6bf384u; r_esp -= 4; W32(r_esp, v); }
    /* 004f088d: push 0x6bf730 */ { u32 v = 0x6bf730u; r_esp -= 4; W32(r_esp, v); }
    /* 004f0892: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f0897u); f_005e9f20();
    /* 004f0897: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f089a:; BB(0x004f089a);
    /* 004f089a: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f089e: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f08a1: jle 0x4f08ba */ if ((fZ||fS!=fO)) goto L_004f08ba;
L_004f08a3:; BB(0x004f08a3);
    /* 004f08a3: push 0x2e5d */ { u32 v = 0x2e5du; r_esp -= 4; W32(r_esp, v); }
    /* 004f08a8: push 0x6bf384 */ { u32 v = 0x6bf384u; r_esp -= 4; W32(r_esp, v); }
    /* 004f08ad: push 0x6bf720 */ { u32 v = 0x6bf720u; r_esp -= 4; W32(r_esp, v); }
    /* 004f08b2: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f08b7u); f_005e9f20();
    /* 004f08b7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f08ba:; BB(0x004f08ba);
    /* 004f08ba: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004f08c0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f08c3: movsx edx, word ptr [ecx + 0x64] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x64u));
    /* 004f08c7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f08c9: jne 0x4f0913 */ if (!fZ) goto L_004f0913;
L_004f08cb:; BB(0x004f08cb);
    /* 004f08cb: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f08cf: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f08d2: jne 0x4f08e5 */ if (!fZ) goto L_004f08e5;
L_004f08d4:; BB(0x004f08d4);
    /* 004f08d4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f08d7: mov ax, word ptr [ecx + 0x3be] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ecx+0x3beu))) & 0xffffu);
    /* 004f08de: jmp 0x4f0a6b */ goto L_004f0a6b;
L_004f08e5:; BB(0x004f08e5);
    /* 004f08e5: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f08e9: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f08ec: jne 0x4f08ff */ if (!fZ) goto L_004f08ff;
L_004f08ee:; BB(0x004f08ee);
    /* 004f08ee: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f08f1: mov ax, word ptr [eax + 0x3bc] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+0x3bcu))) & 0xffffu);
    /* 004f08f8: jmp 0x4f0a6b */ goto L_004f0a6b;
L_004f08ff:; BB(0x004f08ff);
    /* 004f08ff: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f0902: mov ax, word ptr [ecx + 0x3ba] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ecx+0x3bau))) & 0xffffu);
    /* 004f0909: jmp 0x4f0a6b */ goto L_004f0a6b;
L_004f0913:; BB(0x004f0913);
    /* 004f0913: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f0916: movsx eax, word ptr [edx + 0x64] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x64u));
    /* 004f091a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f091d: jne 0x4f0976 */ if (!fZ) goto L_004f0976;
L_004f091f:; BB(0x004f091f);
    /* 004f091f: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f0923: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f0926: jne 0x4f093e */ if (!fZ) goto L_004f093e;
L_004f0928:; BB(0x004f0928);
    /* 004f0928: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f092b: movsx eax, word ptr [edx + 0x3be] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x3beu));
    /* 004f0932: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004f0933: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004f0935: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004f0937: jmp 0x4f0a6b */ goto L_004f0a6b;
L_004f093e:; BB(0x004f093e);
    /* 004f093e: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f0942: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f0945: jne 0x4f095d */ if (!fZ) goto L_004f095d;
L_004f0947:; BB(0x004f0947);
    /* 004f0947: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f094a: movsx eax, word ptr [ecx + 0x3bc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x3bcu));
    /* 004f0951: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004f0952: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004f0954: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004f0956: jmp 0x4f0a6b */ goto L_004f0a6b;
L_004f095d:; BB(0x004f095d);
    /* 004f095d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f0960: movsx eax, word ptr [edx + 0x3ba] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x3bau));
    /* 004f0967: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004f0968: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004f096a: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004f096c: jmp 0x4f0a6b */ goto L_004f0a6b;
L_004f0976:; BB(0x004f0976);
    /* 004f0976: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f0979: movsx ecx, word ptr [eax + 0x64] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x64u));
    /* 004f097d: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f0980: jne 0x4f09e8 */ if (!fZ) goto L_004f09e8;
L_004f0982:; BB(0x004f0982);
    /* 004f0982: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f0986: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f0989: jne 0x4f09a7 */ if (!fZ) goto L_004f09a7;
L_004f098b:; BB(0x004f098b);
    /* 004f098b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f098e: movsx esi, word ptr [eax + 0x3be] */ r_esi = (u32)(i32)(i16)R16((u32)(r_eax+0x3beu));
    /* 004f0995: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 004f0997: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4f099cu); f_0062fbf0();
    /* 004f099c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f099f: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f09a1: mov word ptr [ebp - 4], si */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_esi);
    /* 004f09a5: jmp 0x4f09e6 */ goto L_004f09e6;
L_004f09a7:; BB(0x004f09a7);
    /* 004f09a7: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f09ab: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f09ae: jne 0x4f09cc */ if (!fZ) goto L_004f09cc;
L_004f09b0:; BB(0x004f09b0);
    /* 004f09b0: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f09b3: movsx esi, word ptr [edx + 0x3bc] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+0x3bcu));
    /* 004f09ba: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 004f09bc: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4f09c1u); f_0062fbf0();
    /* 004f09c1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f09c4: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f09c6: mov word ptr [ebp - 4], si */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_esi);
    /* 004f09ca: jmp 0x4f09e6 */ goto L_004f09e6;
L_004f09cc:; BB(0x004f09cc);
    /* 004f09cc: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f09cf: movsx esi, word ptr [eax + 0x3ba] */ r_esi = (u32)(i32)(i16)R16((u32)(r_eax+0x3bau));
    /* 004f09d6: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 004f09d8: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4f09ddu); f_0062fbf0();
    /* 004f09dd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f09e0: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f09e2: mov word ptr [ebp - 4], si */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_esi);
L_004f09e6:; BB(0x004f09e6);
    /* 004f09e6: jmp 0x4f0a58 */ goto L_004f0a58;
L_004f09e8:; BB(0x004f09e8);
    /* 004f09e8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f09eb: movsx edx, word ptr [ecx + 0x64] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x64u));
    /* 004f09ef: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f09f2: jne 0x4f0a58 */ if (!fZ) goto L_004f0a58;
L_004f09f4:; BB(0x004f09f4);
    /* 004f09f4: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f09f8: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f09fb: jne 0x4f0a19 */ if (!fZ) goto L_004f0a19;
L_004f09fd:; BB(0x004f09fd);
    /* 004f09fd: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f0a00: movsx esi, word ptr [ecx + 0x3be] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ecx+0x3beu));
    /* 004f0a07: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 004f0a09: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4f0a0eu); f_0062fbf0();
    /* 004f0a0e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f0a11: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f0a13: mov word ptr [ebp - 4], si */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_esi);
    /* 004f0a17: jmp 0x4f0a58 */ goto L_004f0a58;
L_004f0a19:; BB(0x004f0a19);
    /* 004f0a19: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f0a1d: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f0a20: jne 0x4f0a3e */ if (!fZ) goto L_004f0a3e;
L_004f0a22:; BB(0x004f0a22);
    /* 004f0a22: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f0a25: movsx esi, word ptr [eax + 0x3bc] */ r_esi = (u32)(i32)(i16)R16((u32)(r_eax+0x3bcu));
    /* 004f0a2c: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 004f0a2e: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4f0a33u); f_0062fbf0();
    /* 004f0a33: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f0a36: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f0a38: mov word ptr [ebp - 4], si */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_esi);
    /* 004f0a3c: jmp 0x4f0a58 */ goto L_004f0a58;
L_004f0a3e:; BB(0x004f0a3e);
    /* 004f0a3e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f0a41: movsx esi, word ptr [ecx + 0x3ba] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ecx+0x3bau));
    /* 004f0a48: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 004f0a4a: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4f0a4fu); f_0062fbf0();
    /* 004f0a4f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f0a52: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f0a54: mov word ptr [ebp - 4], si */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_esi);
L_004f0a58:; BB(0x004f0a58);
    /* 004f0a58: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f0a5c: cmp edx, 0x60 */ {  u32 a = r_edx; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f0a5f: jle 0x4f0a67 */ if ((fZ||fS!=fO)) goto L_004f0a67;
L_004f0a61:; BB(0x004f0a61);
    /* 004f0a61: mov word ptr [ebp - 4], 0x60 */ W16((u32)(r_ebp+0xfffffffcu), 0x60u);
L_004f0a67:; BB(0x004f0a67);
    /* 004f0a67: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
L_004f0a6b:; BB(0x004f0a6b);
    /* 004f0a6b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004f0a6c: mov esp, ebp */ r_esp = r_ebp;
    /* 004f0a6e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f0a6f: ret 4 */ FN_RET(0x004f0870); r_esp += 8; return;
}

void f_004f0ac0(void) /* PokerPlayer::func_004f0ac0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f0ac0);
    /* 004f0ac0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f0ac1: mov ebp, esp */ r_ebp = r_esp;
    /* 004f0ac3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f0ac4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004f0ac5: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004f0ac8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f0acb: movsx ecx, word ptr [eax + 0x64] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x64u));
    /* 004f0acf: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f0ad1: jne 0x4f0ae7 */ if (!fZ) goto L_004f0ae7;
L_004f0ad3:; BB(0x004f0ad3);
    /* 004f0ad3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f0ad6: mov ax, word ptr [edx + 0x3c4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+0x3c4u))) & 0xffffu);
    /* 004f0add: jmp 0x4f0b76 */ goto L_004f0b76;
L_004f0ae7:; BB(0x004f0ae7);
    /* 004f0ae7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f0aea: movsx ecx, word ptr [eax + 0x64] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x64u));
    /* 004f0aee: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f0af1: jne 0x4f0b06 */ if (!fZ) goto L_004f0b06;
L_004f0af3:; BB(0x004f0af3);
    /* 004f0af3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f0af6: movsx eax, word ptr [edx + 0x3c4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x3c4u));
    /* 004f0afd: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004f0afe: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004f0b00: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004f0b02: jmp 0x4f0b76 */ goto L_004f0b76;
L_004f0b06:; BB(0x004f0b06);
    /* 004f0b06: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f0b09: movsx ecx, word ptr [eax + 0x64] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x64u));
    /* 004f0b0d: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f0b10: jne 0x4f0b2f */ if (!fZ) goto L_004f0b2f;
L_004f0b12:; BB(0x004f0b12);
    /* 004f0b12: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f0b15: movsx esi, word ptr [edx + 0x3c4] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+0x3c4u));
    /* 004f0b1c: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004f0b1e: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4f0b23u); f_0062fbf0();
    /* 004f0b23: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f0b26: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f0b28: mov ax, si */ r_eax = (r_eax & 0xffff0000u) | (((u16)r_esi) & 0xffffu);
    /* 004f0b2b: jmp 0x4f0b76 */ goto L_004f0b76;
L_004f0b2f:; BB(0x004f0b2f);
    /* 004f0b2f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f0b32: movsx ecx, word ptr [eax + 0x64] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x64u));
    /* 004f0b36: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f0b39: jne 0x4f0b58 */ if (!fZ) goto L_004f0b58;
L_004f0b3b:; BB(0x004f0b3b);
    /* 004f0b3b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f0b3e: movsx esi, word ptr [edx + 0x3c4] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+0x3c4u));
    /* 004f0b45: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004f0b47: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4f0b4cu); f_0062fbf0();
    /* 004f0b4c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f0b4f: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f0b51: mov ax, si */ r_eax = (r_eax & 0xffff0000u) | (((u16)r_esi) & 0xffffu);
    /* 004f0b54: jmp 0x4f0b76 */ goto L_004f0b76;
L_004f0b58:; BB(0x004f0b58);
    /* 004f0b58: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 004f0b5a: jne 0x4f0b73 */ if (!fZ) goto L_004f0b73;
L_004f0b5c:; BB(0x004f0b5c);
    /* 004f0b5c: push 0x2e9f */ { u32 v = 0x2e9fu; r_esp -= 4; W32(r_esp, v); }
    /* 004f0b61: push 0x6bf384 */ { u32 v = 0x6bf384u; r_esp -= 4; W32(r_esp, v); }
    /* 004f0b66: push 0x6b2b64 */ { u32 v = 0x6b2b64u; r_esp -= 4; W32(r_esp, v); }
    /* 004f0b6b: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f0b70u); f_005e9f20();
    /* 004f0b70: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f0b73:; BB(0x004f0b73);
    /* 004f0b73: xor ax, ax */ {  u32 a = (u16)r_eax; u32 b = (u16)r_eax; u32 r = (a ^ b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
L_004f0b76:; BB(0x004f0b76);
    /* 004f0b76: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004f0b77: mov esp, ebp */ r_esp = r_ebp;
    /* 004f0b79: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f0b7a: ret  */ FN_RET(0x004f0ac0); r_esp += 4; return;
}

void f_004f0c00(void) /* PokerPlayer::func_004f0c00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f0c00);
    /* 004f0c00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f0c01: mov ebp, esp */ r_ebp = r_esp;
    /* 004f0c03: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f0c06: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004f0c07: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004f0c0a: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f0c0e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004f0c10: jge 0x4f0c29 */ if ((fS==fO)) goto L_004f0c29;
L_004f0c12:; BB(0x004f0c12);
    /* 004f0c12: push 0x2eb6 */ { u32 v = 0x2eb6u; r_esp -= 4; W32(r_esp, v); }
    /* 004f0c17: push 0x6bf384 */ { u32 v = 0x6bf384u; r_esp -= 4; W32(r_esp, v); }
    /* 004f0c1c: push 0x6bf888 */ { u32 v = 0x6bf888u; r_esp -= 4; W32(r_esp, v); }
    /* 004f0c21: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f0c26u); f_005e9f20();
    /* 004f0c26: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f0c29:; BB(0x004f0c29);
    /* 004f0c29: movsx esi, word ptr [ebp + 8] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f0c2d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004f0c33: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x4f0c38u); f_0047f950();
    /* 004f0c38: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f0c3a: jl 0x4f0c53 */ if ((fS!=fO)) goto L_004f0c53;
L_004f0c3c:; BB(0x004f0c3c);
    /* 004f0c3c: push 0x2eb7 */ { u32 v = 0x2eb7u; r_esp -= 4; W32(r_esp, v); }
    /* 004f0c41: push 0x6bf384 */ { u32 v = 0x6bf384u; r_esp -= 4; W32(r_esp, v); }
    /* 004f0c46: push 0x6bf858 */ { u32 v = 0x6bf858u; r_esp -= 4; W32(r_esp, v); }
    /* 004f0c4b: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f0c50u); f_005e9f20();
    /* 004f0c50: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f0c53:; BB(0x004f0c53);
    /* 004f0c53: mov word ptr [ebp - 4], 2 */ W16((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 004f0c59: jmp 0x4f0c67 */ goto L_004f0c67;
L_004f0c5b:; BB(0x004f0c5b);
    /* 004f0c5b: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 004f0c5f: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f0c63: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_004f0c67:; BB(0x004f0c67);
    /* 004f0c67: movsx esi, word ptr [ebp - 4] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f0c6b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004f0c71: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x4f0c76u); f_0047f950();
    /* 004f0c76: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f0c78: jg 0x4f0ce3 */ if ((!fZ&&fS==fO)) goto L_004f0ce3;
L_004f0c7a:; BB(0x004f0c7a);
    /* 004f0c7a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f0c7d: mov edx, dword ptr [ecx + 0x428] */ r_edx = R32((u32)(r_ecx+0x428u));
    /* 004f0c83: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f0c87: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f0c8a: lea ecx, [edx + eax + 0xc78] */ r_ecx = (u32)(r_edx+r_eax+0xc78u);
    /* 004f0c91: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f0c95: mov word ptr [ecx + edx*2 - 4], 0 */ W16((u32)(r_ecx+r_edx*2+0xfffffffcu), 0x0u);
    /* 004f0c9c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f0c9f: mov ecx, dword ptr [eax + 0x428] */ r_ecx = R32((u32)(r_eax+0x428u));
    /* 004f0ca5: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f0ca9: imul edx, edx, 0xe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xeu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f0cac: lea eax, [ecx + edx + 0xce8] */ r_eax = (u32)(r_ecx+r_edx+0xce8u);
    /* 004f0cb3: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f0cb7: mov word ptr [eax + ecx*2 - 4], 0 */ W16((u32)(r_eax+r_ecx*2+0xfffffffcu), 0x0u);
    /* 004f0cbe: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f0cc1: mov eax, dword ptr [edx + 0x428] */ r_eax = R32((u32)(r_edx+0x428u));
    /* 004f0cc7: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f0ccb: imul ecx, ecx, 7 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x7u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f0cce: lea edx, [eax + ecx + 0xd58] */ r_edx = (u32)(r_eax+r_ecx+0xd58u);
    /* 004f0cd5: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f0cd9: mov byte ptr [edx + eax - 2], 0 */ W8((u32)(r_edx+r_eax+0xfffffffeu), 0x0u);
    /* 004f0cde: jmp 0x4f0c5b */ goto L_004f0c5b;
L_004f0ce3:; BB(0x004f0ce3);
    /* 004f0ce3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004f0ce4: mov esp, ebp */ r_esp = r_ebp;
    /* 004f0ce6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f0ce7: ret 4 */ FN_RET(0x004f0c00); r_esp += 8; return;
}

void f_004f0cf0(void) /* PokerPlayer::func_004f0cf0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f0cf0);
    /* 004f0cf0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f0cf1: mov ebp, esp */ r_ebp = r_esp;
    /* 004f0cf3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f0cf4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004f0cf5: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004f0cf8: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f0cfc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004f0cfe: jge 0x4f0d17 */ if ((fS==fO)) goto L_004f0d17;
L_004f0d00:; BB(0x004f0d00);
    /* 004f0d00: push 0x2ec5 */ { u32 v = 0x2ec5u; r_esp -= 4; W32(r_esp, v); }
    /* 004f0d05: push 0x6bf384 */ { u32 v = 0x6bf384u; r_esp -= 4; W32(r_esp, v); }
    /* 004f0d0a: push 0x6bf888 */ { u32 v = 0x6bf888u; r_esp -= 4; W32(r_esp, v); }
    /* 004f0d0f: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f0d14u); f_005e9f20();
    /* 004f0d14: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f0d17:; BB(0x004f0d17);
    /* 004f0d17: movsx esi, word ptr [ebp + 8] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f0d1b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004f0d21: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x4f0d26u); f_0047f950();
    /* 004f0d26: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f0d28: jl 0x4f0d41 */ if ((fS!=fO)) goto L_004f0d41;
L_004f0d2a:; BB(0x004f0d2a);
    /* 004f0d2a: push 0x2ec6 */ { u32 v = 0x2ec6u; r_esp -= 4; W32(r_esp, v); }
    /* 004f0d2f: push 0x6bf384 */ { u32 v = 0x6bf384u; r_esp -= 4; W32(r_esp, v); }
    /* 004f0d34: push 0x6bf858 */ { u32 v = 0x6bf858u; r_esp -= 4; W32(r_esp, v); }
    /* 004f0d39: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f0d3eu); f_005e9f20();
    /* 004f0d3e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f0d41:; BB(0x004f0d41);
    /* 004f0d41: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f0d45: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f0d48: jge 0x4f0d61 */ if ((fS==fO)) goto L_004f0d61;
L_004f0d4a:; BB(0x004f0d4a);
    /* 004f0d4a: push 0x2ec7 */ { u32 v = 0x2ec7u; r_esp -= 4; W32(r_esp, v); }
    /* 004f0d4f: push 0x6bf384 */ { u32 v = 0x6bf384u; r_esp -= 4; W32(r_esp, v); }
    /* 004f0d54: push 0x6bf778 */ { u32 v = 0x6bf778u; r_esp -= 4; W32(r_esp, v); }
    /* 004f0d59: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f0d5eu); f_005e9f20();
    /* 004f0d5e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f0d61:; BB(0x004f0d61);
    /* 004f0d61: movsx esi, word ptr [ebp + 0xc] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f0d65: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004f0d6b: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x4f0d70u); f_0047f950();
    /* 004f0d70: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f0d72: jle 0x4f0d8b */ if ((fZ||fS!=fO)) goto L_004f0d8b;
L_004f0d74:; BB(0x004f0d74);
    /* 004f0d74: push 0x2ec8 */ { u32 v = 0x2ec8u; r_esp -= 4; W32(r_esp, v); }
    /* 004f0d79: push 0x6bf384 */ { u32 v = 0x6bf384u; r_esp -= 4; W32(r_esp, v); }
    /* 004f0d7e: push 0x6bf740 */ { u32 v = 0x6bf740u; r_esp -= 4; W32(r_esp, v); }
    /* 004f0d83: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f0d88u); f_005e9f20();
    /* 004f0d88: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f0d8b:; BB(0x004f0d8b);
    /* 004f0d8b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f0d8e: mov ecx, dword ptr [eax + 0x428] */ r_ecx = R32((u32)(r_eax+0x428u));
    /* 004f0d94: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f0d98: imul edx, edx, 0xe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xeu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f0d9b: lea eax, [ecx + edx + 0xc78] */ r_eax = (u32)(r_ecx+r_edx+0xc78u);
    /* 004f0da2: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f0da6: mov dx, word ptr [eax + ecx*2 - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_eax+r_ecx*2+0xfffffffcu))) & 0xffffu);
    /* 004f0dab: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f0daf: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f0db3: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f0db7: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f0dba: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f0dbd: mov esi, dword ptr [esi + 0x428] */ r_esi = R32((u32)(r_esi+0x428u));
    /* 004f0dc3: lea ecx, [esi + ecx + 0xc78] */ r_ecx = (u32)(r_esi+r_ecx+0xc78u);
    /* 004f0dca: mov word ptr [ecx + eax*2 - 4], dx */ W16((u32)(r_ecx+r_eax*2+0xfffffffcu), (u16)r_edx);
    /* 004f0dcf: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f0dd2: mov eax, dword ptr [edx + 0x428] */ r_eax = R32((u32)(r_edx+0x428u));
    /* 004f0dd8: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f0ddc: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f0ddf: lea edx, [eax + ecx + 0xc78] */ r_edx = (u32)(r_eax+r_ecx+0xc78u);
    /* 004f0de6: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f0dea: movzx ecx, word ptr [edx + eax*2 - 4] */ r_ecx = (u32)R16((u32)(r_edx+r_eax*2+0xfffffffcu));
    /* 004f0def: cmp ecx, 0x3000 */ {  u32 a = r_ecx; u32 b = 0x3000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f0df5: jne 0x4f0e3b */ if (!fZ) goto L_004f0e3b;
L_004f0df7:; BB(0x004f0df7);
    /* 004f0df7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f0dfa: mov eax, dword ptr [edx + 0x428] */ r_eax = R32((u32)(r_edx+0x428u));
    /* 004f0e00: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f0e04: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f0e07: lea edx, [eax + ecx + 0xc78] */ r_edx = (u32)(r_eax+r_ecx+0xc78u);
    /* 004f0e0e: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f0e12: mov cx, word ptr [edx + eax*2 - 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_edx+r_eax*2+0xfffffffcu))) & 0xffffu);
    /* 004f0e17: sub cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f0e1b: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f0e1f: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f0e23: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f0e26: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f0e29: mov esi, dword ptr [esi + 0x428] */ r_esi = R32((u32)(r_esi+0x428u));
    /* 004f0e2f: lea eax, [esi + eax + 0xc78] */ r_eax = (u32)(r_esi+r_eax+0xc78u);
    /* 004f0e36: mov word ptr [eax + edx*2 - 4], cx */ W16((u32)(r_eax+r_edx*2+0xfffffffcu), (u16)r_ecx);
L_004f0e3b:; BB(0x004f0e3b);
    /* 004f0e3b: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f0e3f: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f0e42: jle 0x4f0ef7 */ if ((fZ||fS!=fO)) goto L_004f0ef7;
L_004f0e48:; BB(0x004f0e48);
    /* 004f0e48: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f0e4b: mov eax, dword ptr [edx + 0x428] */ r_eax = R32((u32)(r_edx+0x428u));
    /* 004f0e51: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f0e55: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f0e58: lea edx, [eax + ecx + 0xc78] */ r_edx = (u32)(r_eax+r_ecx+0xc78u);
    /* 004f0e5f: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f0e63: mov cx, word ptr [edx + eax*2 - 6] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_edx+r_eax*2+0xfffffffau))) & 0xffffu);
    /* 004f0e68: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f0e6c: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f0e70: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f0e74: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f0e77: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f0e7a: mov esi, dword ptr [esi + 0x428] */ r_esi = R32((u32)(r_esi+0x428u));
    /* 004f0e80: lea eax, [esi + eax + 0xc78] */ r_eax = (u32)(r_esi+r_eax+0xc78u);
    /* 004f0e87: mov word ptr [eax + edx*2 - 6], cx */ W16((u32)(r_eax+r_edx*2+0xfffffffau), (u16)r_ecx);
    /* 004f0e8c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f0e8f: mov edx, dword ptr [ecx + 0x428] */ r_edx = R32((u32)(r_ecx+0x428u));
    /* 004f0e95: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f0e99: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f0e9c: lea ecx, [edx + eax + 0xc78] */ r_ecx = (u32)(r_edx+r_eax+0xc78u);
    /* 004f0ea3: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f0ea7: movzx eax, word ptr [ecx + edx*2 - 6] */ r_eax = (u32)R16((u32)(r_ecx+r_edx*2+0xfffffffau));
    /* 004f0eac: cmp eax, 0x3000 */ {  u32 a = r_eax; u32 b = 0x3000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f0eb1: jne 0x4f0ef7 */ if (!fZ) goto L_004f0ef7;
L_004f0eb3:; BB(0x004f0eb3);
    /* 004f0eb3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f0eb6: mov edx, dword ptr [ecx + 0x428] */ r_edx = R32((u32)(r_ecx+0x428u));
    /* 004f0ebc: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f0ec0: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f0ec3: lea ecx, [edx + eax + 0xc78] */ r_ecx = (u32)(r_edx+r_eax+0xc78u);
    /* 004f0eca: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f0ece: mov ax, word ptr [ecx + edx*2 - 6] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ecx+r_edx*2+0xfffffffau))) & 0xffffu);
    /* 004f0ed3: sub ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f0ed7: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f0edb: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f0edf: imul edx, edx, 0xe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xeu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f0ee2: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f0ee5: mov esi, dword ptr [esi + 0x428] */ r_esi = R32((u32)(r_esi+0x428u));
    /* 004f0eeb: lea edx, [esi + edx + 0xc78] */ r_edx = (u32)(r_esi+r_edx+0xc78u);
    /* 004f0ef2: mov word ptr [edx + ecx*2 - 6], ax */ W16((u32)(r_edx+r_ecx*2+0xfffffffau), (u16)r_eax);
L_004f0ef7:; BB(0x004f0ef7);
    /* 004f0ef7: movsx esi, word ptr [ebp + 0xc] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f0efb: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004f0f01: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x4f0f06u); f_0047f950();
    /* 004f0f06: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f0f08: jge 0x4f0fbe */ if ((fS==fO)) goto L_004f0fbe;
L_004f0f0e:; BB(0x004f0f0e);
    /* 004f0f0e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f0f11: mov ecx, dword ptr [eax + 0x428] */ r_ecx = R32((u32)(r_eax+0x428u));
    /* 004f0f17: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f0f1b: imul edx, edx, 0xe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xeu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f0f1e: lea eax, [ecx + edx + 0xc78] */ r_eax = (u32)(r_ecx+r_edx+0xc78u);
    /* 004f0f25: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f0f29: mov dx, word ptr [eax + ecx*2 - 2] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_eax+r_ecx*2+0xfffffffeu))) & 0xffffu);
    /* 004f0f2e: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f0f32: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f0f36: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f0f3a: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f0f3d: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f0f40: mov esi, dword ptr [esi + 0x428] */ r_esi = R32((u32)(r_esi+0x428u));
    /* 004f0f46: lea ecx, [esi + ecx + 0xc78] */ r_ecx = (u32)(r_esi+r_ecx+0xc78u);
    /* 004f0f4d: mov word ptr [ecx + eax*2 - 2], dx */ W16((u32)(r_ecx+r_eax*2+0xfffffffeu), (u16)r_edx);
    /* 004f0f52: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f0f55: mov eax, dword ptr [edx + 0x428] */ r_eax = R32((u32)(r_edx+0x428u));
    /* 004f0f5b: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f0f5f: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f0f62: lea edx, [eax + ecx + 0xc78] */ r_edx = (u32)(r_eax+r_ecx+0xc78u);
    /* 004f0f69: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f0f6d: movzx ecx, word ptr [edx + eax*2 - 2] */ r_ecx = (u32)R16((u32)(r_edx+r_eax*2+0xfffffffeu));
    /* 004f0f72: cmp ecx, 0x3000 */ {  u32 a = r_ecx; u32 b = 0x3000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f0f78: jne 0x4f0fbe */ if (!fZ) goto L_004f0fbe;
L_004f0f7a:; BB(0x004f0f7a);
    /* 004f0f7a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f0f7d: mov eax, dword ptr [edx + 0x428] */ r_eax = R32((u32)(r_edx+0x428u));
    /* 004f0f83: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f0f87: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f0f8a: lea edx, [eax + ecx + 0xc78] */ r_edx = (u32)(r_eax+r_ecx+0xc78u);
    /* 004f0f91: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f0f95: mov cx, word ptr [edx + eax*2 - 2] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_edx+r_eax*2+0xfffffffeu))) & 0xffffu);
    /* 004f0f9a: sub cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f0f9e: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f0fa2: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f0fa6: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f0fa9: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f0fac: mov esi, dword ptr [esi + 0x428] */ r_esi = R32((u32)(r_esi+0x428u));
    /* 004f0fb2: lea eax, [esi + eax + 0xc78] */ r_eax = (u32)(r_esi+r_eax+0xc78u);
    /* 004f0fb9: mov word ptr [eax + edx*2 - 2], cx */ W16((u32)(r_eax+r_edx*2+0xfffffffeu), (u16)r_ecx);
L_004f0fbe:; BB(0x004f0fbe);
    /* 004f0fbe: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004f0fbf: mov esp, ebp */ r_esp = r_ebp;
    /* 004f0fc1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f0fc2: ret 8 */ FN_RET(0x004f0cf0); r_esp += 12; return;
}

void f_004f0fd0(void) /* PokerPlayer::func_004f0fd0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f0fd0);
    /* 004f0fd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f0fd1: mov ebp, esp */ r_ebp = r_esp;
    /* 004f0fd3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f0fd4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004f0fd5: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004f0fd8: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f0fdc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004f0fde: jge 0x4f0ff7 */ if ((fS==fO)) goto L_004f0ff7;
L_004f0fe0:; BB(0x004f0fe0);
    /* 004f0fe0: push 0x2ee4 */ { u32 v = 0x2ee4u; r_esp -= 4; W32(r_esp, v); }
    /* 004f0fe5: push 0x6bf384 */ { u32 v = 0x6bf384u; r_esp -= 4; W32(r_esp, v); }
    /* 004f0fea: push 0x6bf888 */ { u32 v = 0x6bf888u; r_esp -= 4; W32(r_esp, v); }
    /* 004f0fef: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f0ff4u); f_005e9f20();
    /* 004f0ff4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f0ff7:; BB(0x004f0ff7);
    /* 004f0ff7: movsx esi, word ptr [ebp + 8] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f0ffb: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004f1001: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x4f1006u); f_0047f950();
    /* 004f1006: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f1008: jl 0x4f1021 */ if ((fS!=fO)) goto L_004f1021;
L_004f100a:; BB(0x004f100a);
    /* 004f100a: push 0x2ee5 */ { u32 v = 0x2ee5u; r_esp -= 4; W32(r_esp, v); }
    /* 004f100f: push 0x6bf384 */ { u32 v = 0x6bf384u; r_esp -= 4; W32(r_esp, v); }
    /* 004f1014: push 0x6bf858 */ { u32 v = 0x6bf858u; r_esp -= 4; W32(r_esp, v); }
    /* 004f1019: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f101eu); f_005e9f20();
    /* 004f101e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f1021:; BB(0x004f1021);
    /* 004f1021: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f1025: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f1028: jge 0x4f1041 */ if ((fS==fO)) goto L_004f1041;
L_004f102a:; BB(0x004f102a);
    /* 004f102a: push 0x2ee6 */ { u32 v = 0x2ee6u; r_esp -= 4; W32(r_esp, v); }
    /* 004f102f: push 0x6bf384 */ { u32 v = 0x6bf384u; r_esp -= 4; W32(r_esp, v); }
    /* 004f1034: push 0x6bf778 */ { u32 v = 0x6bf778u; r_esp -= 4; W32(r_esp, v); }
    /* 004f1039: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f103eu); f_005e9f20();
    /* 004f103e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f1041:; BB(0x004f1041);
    /* 004f1041: movsx esi, word ptr [ebp + 0xc] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f1045: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004f104b: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x4f1050u); f_0047f950();
    /* 004f1050: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f1052: jle 0x4f106b */ if ((fZ||fS!=fO)) goto L_004f106b;
L_004f1054:; BB(0x004f1054);
    /* 004f1054: push 0x2ee7 */ { u32 v = 0x2ee7u; r_esp -= 4; W32(r_esp, v); }
    /* 004f1059: push 0x6bf384 */ { u32 v = 0x6bf384u; r_esp -= 4; W32(r_esp, v); }
    /* 004f105e: push 0x6bf740 */ { u32 v = 0x6bf740u; r_esp -= 4; W32(r_esp, v); }
    /* 004f1063: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f1068u); f_005e9f20();
    /* 004f1068: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f106b:; BB(0x004f106b);
    /* 004f106b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f106e: mov ecx, dword ptr [eax + 0x428] */ r_ecx = R32((u32)(r_eax+0x428u));
    /* 004f1074: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f1078: imul edx, edx, 0xe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xeu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f107b: lea eax, [ecx + edx + 0xce8] */ r_eax = (u32)(r_ecx+r_edx+0xce8u);
    /* 004f1082: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f1086: mov dx, word ptr [eax + ecx*2 - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_eax+r_ecx*2+0xfffffffcu))) & 0xffffu);
    /* 004f108b: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f108f: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f1093: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f1097: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f109a: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f109d: mov esi, dword ptr [esi + 0x428] */ r_esi = R32((u32)(r_esi+0x428u));
    /* 004f10a3: lea ecx, [esi + ecx + 0xce8] */ r_ecx = (u32)(r_esi+r_ecx+0xce8u);
    /* 004f10aa: mov word ptr [ecx + eax*2 - 4], dx */ W16((u32)(r_ecx+r_eax*2+0xfffffffcu), (u16)r_edx);
    /* 004f10af: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f10b2: mov eax, dword ptr [edx + 0x428] */ r_eax = R32((u32)(r_edx+0x428u));
    /* 004f10b8: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f10bc: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f10bf: lea edx, [eax + ecx + 0xce8] */ r_edx = (u32)(r_eax+r_ecx+0xce8u);
    /* 004f10c6: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f10ca: movzx ecx, word ptr [edx + eax*2 - 4] */ r_ecx = (u32)R16((u32)(r_edx+r_eax*2+0xfffffffcu));
    /* 004f10cf: cmp ecx, 0x3000 */ {  u32 a = r_ecx; u32 b = 0x3000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f10d5: jne 0x4f111b */ if (!fZ) goto L_004f111b;
L_004f10d7:; BB(0x004f10d7);
    /* 004f10d7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f10da: mov eax, dword ptr [edx + 0x428] */ r_eax = R32((u32)(r_edx+0x428u));
    /* 004f10e0: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f10e4: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f10e7: lea edx, [eax + ecx + 0xce8] */ r_edx = (u32)(r_eax+r_ecx+0xce8u);
    /* 004f10ee: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f10f2: mov cx, word ptr [edx + eax*2 - 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_edx+r_eax*2+0xfffffffcu))) & 0xffffu);
    /* 004f10f7: sub cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f10fb: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f10ff: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f1103: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f1106: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f1109: mov esi, dword ptr [esi + 0x428] */ r_esi = R32((u32)(r_esi+0x428u));
    /* 004f110f: lea eax, [esi + eax + 0xce8] */ r_eax = (u32)(r_esi+r_eax+0xce8u);
    /* 004f1116: mov word ptr [eax + edx*2 - 4], cx */ W16((u32)(r_eax+r_edx*2+0xfffffffcu), (u16)r_ecx);
L_004f111b:; BB(0x004f111b);
    /* 004f111b: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f111f: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f1122: jle 0x4f11d7 */ if ((fZ||fS!=fO)) goto L_004f11d7;
L_004f1128:; BB(0x004f1128);
    /* 004f1128: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f112b: mov eax, dword ptr [edx + 0x428] */ r_eax = R32((u32)(r_edx+0x428u));
    /* 004f1131: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f1135: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f1138: lea edx, [eax + ecx + 0xce8] */ r_edx = (u32)(r_eax+r_ecx+0xce8u);
    /* 004f113f: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f1143: mov cx, word ptr [edx + eax*2 - 6] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_edx+r_eax*2+0xfffffffau))) & 0xffffu);
    /* 004f1148: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f114c: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f1150: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f1154: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f1157: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f115a: mov esi, dword ptr [esi + 0x428] */ r_esi = R32((u32)(r_esi+0x428u));
    /* 004f1160: lea eax, [esi + eax + 0xce8] */ r_eax = (u32)(r_esi+r_eax+0xce8u);
    /* 004f1167: mov word ptr [eax + edx*2 - 6], cx */ W16((u32)(r_eax+r_edx*2+0xfffffffau), (u16)r_ecx);
    /* 004f116c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f116f: mov edx, dword ptr [ecx + 0x428] */ r_edx = R32((u32)(r_ecx+0x428u));
    /* 004f1175: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f1179: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f117c: lea ecx, [edx + eax + 0xce8] */ r_ecx = (u32)(r_edx+r_eax+0xce8u);
    /* 004f1183: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f1187: movzx eax, word ptr [ecx + edx*2 - 6] */ r_eax = (u32)R16((u32)(r_ecx+r_edx*2+0xfffffffau));
    /* 004f118c: cmp eax, 0x3000 */ {  u32 a = r_eax; u32 b = 0x3000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f1191: jne 0x4f11d7 */ if (!fZ) goto L_004f11d7;
L_004f1193:; BB(0x004f1193);
    /* 004f1193: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f1196: mov edx, dword ptr [ecx + 0x428] */ r_edx = R32((u32)(r_ecx+0x428u));
    /* 004f119c: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f11a0: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f11a3: lea ecx, [edx + eax + 0xce8] */ r_ecx = (u32)(r_edx+r_eax+0xce8u);
    /* 004f11aa: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f11ae: mov ax, word ptr [ecx + edx*2 - 6] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ecx+r_edx*2+0xfffffffau))) & 0xffffu);
    /* 004f11b3: sub ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f11b7: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f11bb: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f11bf: imul edx, edx, 0xe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xeu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f11c2: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f11c5: mov esi, dword ptr [esi + 0x428] */ r_esi = R32((u32)(r_esi+0x428u));
    /* 004f11cb: lea edx, [esi + edx + 0xce8] */ r_edx = (u32)(r_esi+r_edx+0xce8u);
    /* 004f11d2: mov word ptr [edx + ecx*2 - 6], ax */ W16((u32)(r_edx+r_ecx*2+0xfffffffau), (u16)r_eax);
L_004f11d7:; BB(0x004f11d7);
    /* 004f11d7: movsx esi, word ptr [ebp + 0xc] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f11db: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004f11e1: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x4f11e6u); f_0047f950();
    /* 004f11e6: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f11e8: jge 0x4f129e */ if ((fS==fO)) goto L_004f129e;
L_004f11ee:; BB(0x004f11ee);
    /* 004f11ee: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f11f1: mov ecx, dword ptr [eax + 0x428] */ r_ecx = R32((u32)(r_eax+0x428u));
    /* 004f11f7: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f11fb: imul edx, edx, 0xe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xeu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f11fe: lea eax, [ecx + edx + 0xce8] */ r_eax = (u32)(r_ecx+r_edx+0xce8u);
    /* 004f1205: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f1209: mov dx, word ptr [eax + ecx*2 - 2] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_eax+r_ecx*2+0xfffffffeu))) & 0xffffu);
    /* 004f120e: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f1212: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f1216: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f121a: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f121d: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f1220: mov esi, dword ptr [esi + 0x428] */ r_esi = R32((u32)(r_esi+0x428u));
    /* 004f1226: lea ecx, [esi + ecx + 0xce8] */ r_ecx = (u32)(r_esi+r_ecx+0xce8u);
    /* 004f122d: mov word ptr [ecx + eax*2 - 2], dx */ W16((u32)(r_ecx+r_eax*2+0xfffffffeu), (u16)r_edx);
    /* 004f1232: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f1235: mov eax, dword ptr [edx + 0x428] */ r_eax = R32((u32)(r_edx+0x428u));
    /* 004f123b: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f123f: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f1242: lea edx, [eax + ecx + 0xce8] */ r_edx = (u32)(r_eax+r_ecx+0xce8u);
    /* 004f1249: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f124d: movzx ecx, word ptr [edx + eax*2 - 2] */ r_ecx = (u32)R16((u32)(r_edx+r_eax*2+0xfffffffeu));
    /* 004f1252: cmp ecx, 0x3000 */ {  u32 a = r_ecx; u32 b = 0x3000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f1258: jne 0x4f129e */ if (!fZ) goto L_004f129e;
L_004f125a:; BB(0x004f125a);
    /* 004f125a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f125d: mov eax, dword ptr [edx + 0x428] */ r_eax = R32((u32)(r_edx+0x428u));
    /* 004f1263: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f1267: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f126a: lea edx, [eax + ecx + 0xce8] */ r_edx = (u32)(r_eax+r_ecx+0xce8u);
    /* 004f1271: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f1275: mov cx, word ptr [edx + eax*2 - 2] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_edx+r_eax*2+0xfffffffeu))) & 0xffffu);
    /* 004f127a: sub cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f127e: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f1282: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f1286: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f1289: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f128c: mov esi, dword ptr [esi + 0x428] */ r_esi = R32((u32)(r_esi+0x428u));
    /* 004f1292: lea eax, [esi + eax + 0xce8] */ r_eax = (u32)(r_esi+r_eax+0xce8u);
    /* 004f1299: mov word ptr [eax + edx*2 - 2], cx */ W16((u32)(r_eax+r_edx*2+0xfffffffeu), (u16)r_ecx);
L_004f129e:; BB(0x004f129e);
    /* 004f129e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004f129f: mov esp, ebp */ r_esp = r_ebp;
    /* 004f12a1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f12a2: ret 8 */ FN_RET(0x004f0fd0); r_esp += 12; return;
}

void f_004f12b0(void) /* PokerPlayer::func_004f12b0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f12b0);
    /* 004f12b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f12b1: mov ebp, esp */ r_ebp = r_esp;
    /* 004f12b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f12b4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004f12b5: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004f12b8: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f12bc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004f12be: jge 0x4f12d7 */ if ((fS==fO)) goto L_004f12d7;
L_004f12c0:; BB(0x004f12c0);
    /* 004f12c0: push 0x2f03 */ { u32 v = 0x2f03u; r_esp -= 4; W32(r_esp, v); }
    /* 004f12c5: push 0x6bf384 */ { u32 v = 0x6bf384u; r_esp -= 4; W32(r_esp, v); }
    /* 004f12ca: push 0x6bf888 */ { u32 v = 0x6bf888u; r_esp -= 4; W32(r_esp, v); }
    /* 004f12cf: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f12d4u); f_005e9f20();
    /* 004f12d4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f12d7:; BB(0x004f12d7);
    /* 004f12d7: movsx esi, word ptr [ebp + 8] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f12db: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004f12e1: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x4f12e6u); f_0047f950();
    /* 004f12e6: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f12e8: jl 0x4f1301 */ if ((fS!=fO)) goto L_004f1301;
L_004f12ea:; BB(0x004f12ea);
    /* 004f12ea: push 0x2f04 */ { u32 v = 0x2f04u; r_esp -= 4; W32(r_esp, v); }
    /* 004f12ef: push 0x6bf384 */ { u32 v = 0x6bf384u; r_esp -= 4; W32(r_esp, v); }
    /* 004f12f4: push 0x6bf858 */ { u32 v = 0x6bf858u; r_esp -= 4; W32(r_esp, v); }
    /* 004f12f9: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f12feu); f_005e9f20();
    /* 004f12fe: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f1301:; BB(0x004f1301);
    /* 004f1301: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f1305: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f1308: jge 0x4f1321 */ if ((fS==fO)) goto L_004f1321;
L_004f130a:; BB(0x004f130a);
    /* 004f130a: push 0x2f05 */ { u32 v = 0x2f05u; r_esp -= 4; W32(r_esp, v); }
    /* 004f130f: push 0x6bf384 */ { u32 v = 0x6bf384u; r_esp -= 4; W32(r_esp, v); }
    /* 004f1314: push 0x6bf778 */ { u32 v = 0x6bf778u; r_esp -= 4; W32(r_esp, v); }
    /* 004f1319: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f131eu); f_005e9f20();
    /* 004f131e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f1321:; BB(0x004f1321);
    /* 004f1321: movsx esi, word ptr [ebp + 0xc] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f1325: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004f132b: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x4f1330u); f_0047f950();
    /* 004f1330: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f1332: jle 0x4f134b */ if ((fZ||fS!=fO)) goto L_004f134b;
L_004f1334:; BB(0x004f1334);
    /* 004f1334: push 0x2f06 */ { u32 v = 0x2f06u; r_esp -= 4; W32(r_esp, v); }
    /* 004f1339: push 0x6bf384 */ { u32 v = 0x6bf384u; r_esp -= 4; W32(r_esp, v); }
    /* 004f133e: push 0x6bf740 */ { u32 v = 0x6bf740u; r_esp -= 4; W32(r_esp, v); }
    /* 004f1343: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f1348u); f_005e9f20();
    /* 004f1348: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f134b:; BB(0x004f134b);
    /* 004f134b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f134e: mov ecx, dword ptr [eax + 0x428] */ r_ecx = R32((u32)(r_eax+0x428u));
    /* 004f1354: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f1358: imul edx, edx, 7 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x7u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f135b: lea eax, [ecx + edx + 0xd58] */ r_eax = (u32)(r_ecx+r_edx+0xd58u);
    /* 004f1362: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f1366: mov dl, byte ptr [eax + ecx - 2] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+r_ecx+0xfffffffeu))) & 0xffu);
    /* 004f136a: add dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004f136d: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f1371: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f1375: imul ecx, ecx, 7 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x7u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f1378: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f137b: mov esi, dword ptr [esi + 0x428] */ r_esi = R32((u32)(r_esi+0x428u));
    /* 004f1381: lea ecx, [esi + ecx + 0xd58] */ r_ecx = (u32)(r_esi+r_ecx+0xd58u);
    /* 004f1388: mov byte ptr [ecx + eax - 2], dl */ W8((u32)(r_ecx+r_eax+0xfffffffeu), (u8)r_edx);
    /* 004f138c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f138f: mov eax, dword ptr [edx + 0x428] */ r_eax = R32((u32)(r_edx+0x428u));
    /* 004f1395: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f1399: imul ecx, ecx, 7 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x7u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f139c: lea edx, [eax + ecx + 0xd58] */ r_edx = (u32)(r_eax+r_ecx+0xd58u);
    /* 004f13a3: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f13a7: movzx ecx, byte ptr [edx + eax - 2] */ r_ecx = (u32)R8((u32)(r_edx+r_eax+0xfffffffeu));
    /* 004f13ac: cmp ecx, 0x50 */ {  u32 a = r_ecx; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f13af: jne 0x4f147a */ if (!fZ) goto L_004f147a;
L_004f13b5:; BB(0x004f13b5);
    /* 004f13b5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f13b8: mov eax, dword ptr [edx + 0x428] */ r_eax = R32((u32)(r_edx+0x428u));
    /* 004f13be: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f13c2: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f13c5: lea edx, [eax + ecx + 0xc78] */ r_edx = (u32)(r_eax+r_ecx+0xc78u);
    /* 004f13cc: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f13d0: movzx ecx, word ptr [edx + eax*2 - 4] */ r_ecx = (u32)R16((u32)(r_edx+r_eax*2+0xfffffffcu));
    /* 004f13d5: shr ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 004f13d7: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f13db: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f13df: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f13e2: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f13e5: mov esi, dword ptr [esi + 0x428] */ r_esi = R32((u32)(r_esi+0x428u));
    /* 004f13eb: lea eax, [esi + eax + 0xc78] */ r_eax = (u32)(r_esi+r_eax+0xc78u);
    /* 004f13f2: mov word ptr [eax + edx*2 - 4], cx */ W16((u32)(r_eax+r_edx*2+0xfffffffcu), (u16)r_ecx);
    /* 004f13f7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f13fa: mov edx, dword ptr [ecx + 0x428] */ r_edx = R32((u32)(r_ecx+0x428u));
    /* 004f1400: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f1404: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f1407: lea ecx, [edx + eax + 0xce8] */ r_ecx = (u32)(r_edx+r_eax+0xce8u);
    /* 004f140e: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f1412: movzx eax, word ptr [ecx + edx*2 - 4] */ r_eax = (u32)R16((u32)(r_ecx+r_edx*2+0xfffffffcu));
    /* 004f1417: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 004f1419: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f141d: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f1421: imul edx, edx, 0xe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xeu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f1424: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f1427: mov esi, dword ptr [esi + 0x428] */ r_esi = R32((u32)(r_esi+0x428u));
    /* 004f142d: lea edx, [esi + edx + 0xce8] */ r_edx = (u32)(r_esi+r_edx+0xce8u);
    /* 004f1434: mov word ptr [edx + ecx*2 - 4], ax */ W16((u32)(r_edx+r_ecx*2+0xfffffffcu), (u16)r_eax);
    /* 004f1439: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f143c: mov ecx, dword ptr [eax + 0x428] */ r_ecx = R32((u32)(r_eax+0x428u));
    /* 004f1442: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f1446: imul edx, edx, 7 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x7u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f1449: lea eax, [ecx + edx + 0xd58] */ r_eax = (u32)(r_ecx+r_edx+0xd58u);
    /* 004f1450: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f1454: movzx edx, byte ptr [eax + ecx - 2] */ r_edx = (u32)R8((u32)(r_eax+r_ecx+0xfffffffeu));
    /* 004f1459: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 004f145b: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f145f: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f1463: imul ecx, ecx, 7 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x7u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f1466: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f1469: mov esi, dword ptr [esi + 0x428] */ r_esi = R32((u32)(r_esi+0x428u));
    /* 004f146f: lea ecx, [esi + ecx + 0xd58] */ r_ecx = (u32)(r_esi+r_ecx+0xd58u);
    /* 004f1476: mov byte ptr [ecx + eax - 2], dl */ W8((u32)(r_ecx+r_eax+0xfffffffeu), (u8)r_edx);
L_004f147a:; BB(0x004f147a);
    /* 004f147a: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f147e: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f1481: jle 0x4f15b6 */ if ((fZ||fS!=fO)) goto L_004f15b6;
L_004f1487:; BB(0x004f1487);
    /* 004f1487: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f148a: mov ecx, dword ptr [eax + 0x428] */ r_ecx = R32((u32)(r_eax+0x428u));
    /* 004f1490: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f1494: imul edx, edx, 7 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x7u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f1497: lea eax, [ecx + edx + 0xd58] */ r_eax = (u32)(r_ecx+r_edx+0xd58u);
    /* 004f149e: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f14a2: mov dl, byte ptr [eax + ecx - 3] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+r_ecx+0xfffffffdu))) & 0xffu);
    /* 004f14a6: add dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004f14a9: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f14ad: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f14b1: imul ecx, ecx, 7 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x7u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f14b4: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f14b7: mov esi, dword ptr [esi + 0x428] */ r_esi = R32((u32)(r_esi+0x428u));
    /* 004f14bd: lea ecx, [esi + ecx + 0xd58] */ r_ecx = (u32)(r_esi+r_ecx+0xd58u);
    /* 004f14c4: mov byte ptr [ecx + eax - 3], dl */ W8((u32)(r_ecx+r_eax+0xfffffffdu), (u8)r_edx);
    /* 004f14c8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f14cb: mov eax, dword ptr [edx + 0x428] */ r_eax = R32((u32)(r_edx+0x428u));
    /* 004f14d1: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f14d5: imul ecx, ecx, 7 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x7u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f14d8: lea edx, [eax + ecx + 0xd58] */ r_edx = (u32)(r_eax+r_ecx+0xd58u);
    /* 004f14df: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f14e3: movzx ecx, byte ptr [edx + eax - 3] */ r_ecx = (u32)R8((u32)(r_edx+r_eax+0xfffffffdu));
    /* 004f14e8: cmp ecx, 0x50 */ {  u32 a = r_ecx; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f14eb: jne 0x4f15b6 */ if (!fZ) goto L_004f15b6;
L_004f14f1:; BB(0x004f14f1);
    /* 004f14f1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f14f4: mov eax, dword ptr [edx + 0x428] */ r_eax = R32((u32)(r_edx+0x428u));
    /* 004f14fa: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f14fe: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f1501: lea edx, [eax + ecx + 0xc78] */ r_edx = (u32)(r_eax+r_ecx+0xc78u);
    /* 004f1508: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f150c: movzx ecx, word ptr [edx + eax*2 - 6] */ r_ecx = (u32)R16((u32)(r_edx+r_eax*2+0xfffffffau));
    /* 004f1511: shr ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 004f1513: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f1517: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f151b: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f151e: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f1521: mov esi, dword ptr [esi + 0x428] */ r_esi = R32((u32)(r_esi+0x428u));
    /* 004f1527: lea eax, [esi + eax + 0xc78] */ r_eax = (u32)(r_esi+r_eax+0xc78u);
    /* 004f152e: mov word ptr [eax + edx*2 - 6], cx */ W16((u32)(r_eax+r_edx*2+0xfffffffau), (u16)r_ecx);
    /* 004f1533: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f1536: mov edx, dword ptr [ecx + 0x428] */ r_edx = R32((u32)(r_ecx+0x428u));
    /* 004f153c: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f1540: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f1543: lea ecx, [edx + eax + 0xce8] */ r_ecx = (u32)(r_edx+r_eax+0xce8u);
    /* 004f154a: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f154e: movzx eax, word ptr [ecx + edx*2 - 6] */ r_eax = (u32)R16((u32)(r_ecx+r_edx*2+0xfffffffau));
    /* 004f1553: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 004f1555: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f1559: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f155d: imul edx, edx, 0xe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xeu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f1560: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f1563: mov esi, dword ptr [esi + 0x428] */ r_esi = R32((u32)(r_esi+0x428u));
    /* 004f1569: lea edx, [esi + edx + 0xce8] */ r_edx = (u32)(r_esi+r_edx+0xce8u);
    /* 004f1570: mov word ptr [edx + ecx*2 - 6], ax */ W16((u32)(r_edx+r_ecx*2+0xfffffffau), (u16)r_eax);
    /* 004f1575: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f1578: mov ecx, dword ptr [eax + 0x428] */ r_ecx = R32((u32)(r_eax+0x428u));
    /* 004f157e: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f1582: imul edx, edx, 7 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x7u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f1585: lea eax, [ecx + edx + 0xd58] */ r_eax = (u32)(r_ecx+r_edx+0xd58u);
    /* 004f158c: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f1590: movzx edx, byte ptr [eax + ecx - 3] */ r_edx = (u32)R8((u32)(r_eax+r_ecx+0xfffffffdu));
    /* 004f1595: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 004f1597: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f159b: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f159f: imul ecx, ecx, 7 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x7u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f15a2: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f15a5: mov esi, dword ptr [esi + 0x428] */ r_esi = R32((u32)(r_esi+0x428u));
    /* 004f15ab: lea ecx, [esi + ecx + 0xd58] */ r_ecx = (u32)(r_esi+r_ecx+0xd58u);
    /* 004f15b2: mov byte ptr [ecx + eax - 3], dl */ W8((u32)(r_ecx+r_eax+0xfffffffdu), (u8)r_edx);
L_004f15b6:; BB(0x004f15b6);
    /* 004f15b6: movsx esi, word ptr [ebp + 0xc] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f15ba: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004f15c0: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x4f15c5u); f_0047f950();
    /* 004f15c5: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f15c7: jge 0x4f16fc */ if ((fS==fO)) goto L_004f16fc;
L_004f15cd:; BB(0x004f15cd);
    /* 004f15cd: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f15d0: mov eax, dword ptr [edx + 0x428] */ r_eax = R32((u32)(r_edx+0x428u));
    /* 004f15d6: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f15da: imul ecx, ecx, 7 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x7u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f15dd: lea edx, [eax + ecx + 0xd58] */ r_edx = (u32)(r_eax+r_ecx+0xd58u);
    /* 004f15e4: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f15e8: mov cl, byte ptr [edx + eax - 1] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_edx+r_eax+0xffffffffu))) & 0xffu);
    /* 004f15ec: add cl, 1 */ {  u32 a = (u8)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004f15ef: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f15f3: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f15f7: imul eax, eax, 7 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x7u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f15fa: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f15fd: mov esi, dword ptr [esi + 0x428] */ r_esi = R32((u32)(r_esi+0x428u));
    /* 004f1603: lea eax, [esi + eax + 0xd58] */ r_eax = (u32)(r_esi+r_eax+0xd58u);
    /* 004f160a: mov byte ptr [eax + edx - 1], cl */ W8((u32)(r_eax+r_edx+0xffffffffu), (u8)r_ecx);
    /* 004f160e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f1611: mov edx, dword ptr [ecx + 0x428] */ r_edx = R32((u32)(r_ecx+0x428u));
    /* 004f1617: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f161b: imul eax, eax, 7 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x7u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f161e: lea ecx, [edx + eax + 0xd58] */ r_ecx = (u32)(r_edx+r_eax+0xd58u);
    /* 004f1625: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f1629: movzx eax, byte ptr [ecx + edx - 1] */ r_eax = (u32)R8((u32)(r_ecx+r_edx+0xffffffffu));
    /* 004f162e: cmp eax, 0x50 */ {  u32 a = r_eax; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f1631: jne 0x4f16fc */ if (!fZ) goto L_004f16fc;
L_004f1637:; BB(0x004f1637);
    /* 004f1637: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f163a: mov edx, dword ptr [ecx + 0x428] */ r_edx = R32((u32)(r_ecx+0x428u));
    /* 004f1640: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f1644: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f1647: lea ecx, [edx + eax + 0xc78] */ r_ecx = (u32)(r_edx+r_eax+0xc78u);
    /* 004f164e: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f1652: movzx eax, word ptr [ecx + edx*2 - 2] */ r_eax = (u32)R16((u32)(r_ecx+r_edx*2+0xfffffffeu));
    /* 004f1657: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 004f1659: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f165d: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f1661: imul edx, edx, 0xe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xeu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f1664: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f1667: mov esi, dword ptr [esi + 0x428] */ r_esi = R32((u32)(r_esi+0x428u));
    /* 004f166d: lea edx, [esi + edx + 0xc78] */ r_edx = (u32)(r_esi+r_edx+0xc78u);
    /* 004f1674: mov word ptr [edx + ecx*2 - 2], ax */ W16((u32)(r_edx+r_ecx*2+0xfffffffeu), (u16)r_eax);
    /* 004f1679: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f167c: mov ecx, dword ptr [eax + 0x428] */ r_ecx = R32((u32)(r_eax+0x428u));
    /* 004f1682: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f1686: imul edx, edx, 0xe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xeu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f1689: lea eax, [ecx + edx + 0xce8] */ r_eax = (u32)(r_ecx+r_edx+0xce8u);
    /* 004f1690: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f1694: movzx edx, word ptr [eax + ecx*2 - 2] */ r_edx = (u32)R16((u32)(r_eax+r_ecx*2+0xfffffffeu));
    /* 004f1699: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 004f169b: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f169f: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f16a3: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f16a6: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f16a9: mov esi, dword ptr [esi + 0x428] */ r_esi = R32((u32)(r_esi+0x428u));
    /* 004f16af: lea ecx, [esi + ecx + 0xce8] */ r_ecx = (u32)(r_esi+r_ecx+0xce8u);
    /* 004f16b6: mov word ptr [ecx + eax*2 - 2], dx */ W16((u32)(r_ecx+r_eax*2+0xfffffffeu), (u16)r_edx);
    /* 004f16bb: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f16be: mov eax, dword ptr [edx + 0x428] */ r_eax = R32((u32)(r_edx+0x428u));
    /* 004f16c4: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f16c8: imul ecx, ecx, 7 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x7u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f16cb: lea edx, [eax + ecx + 0xd58] */ r_edx = (u32)(r_eax+r_ecx+0xd58u);
    /* 004f16d2: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f16d6: movzx ecx, byte ptr [edx + eax - 1] */ r_ecx = (u32)R8((u32)(r_edx+r_eax+0xffffffffu));
    /* 004f16db: shr ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 004f16dd: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f16e1: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f16e5: imul eax, eax, 7 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x7u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f16e8: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f16eb: mov esi, dword ptr [esi + 0x428] */ r_esi = R32((u32)(r_esi+0x428u));
    /* 004f16f1: lea eax, [esi + eax + 0xd58] */ r_eax = (u32)(r_esi+r_eax+0xd58u);
    /* 004f16f8: mov byte ptr [eax + edx - 1], cl */ W8((u32)(r_eax+r_edx+0xffffffffu), (u8)r_ecx);
L_004f16fc:; BB(0x004f16fc);
    /* 004f16fc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004f16fd: mov esp, ebp */ r_esp = r_ebp;
    /* 004f16ff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f1700: ret 8 */ FN_RET(0x004f12b0); r_esp += 12; return;
}

void f_004f1710(void) /* PokerPlayer::func_004f1710 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f1710);
    /* 004f1710: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f1711: mov ebp, esp */ r_ebp = r_esp;
    /* 004f1713: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f1716: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004f1717: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 004f171a: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f171e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004f1720: jge 0x4f1739 */ if ((fS==fO)) goto L_004f1739;
L_004f1722:; BB(0x004f1722);
    /* 004f1722: push 0x2f34 */ { u32 v = 0x2f34u; r_esp -= 4; W32(r_esp, v); }
    /* 004f1727: push 0x6bf384 */ { u32 v = 0x6bf384u; r_esp -= 4; W32(r_esp, v); }
    /* 004f172c: push 0x6bf888 */ { u32 v = 0x6bf888u; r_esp -= 4; W32(r_esp, v); }
    /* 004f1731: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f1736u); f_005e9f20();
    /* 004f1736: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f1739:; BB(0x004f1739);
    /* 004f1739: movsx esi, word ptr [ebp + 8] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f173d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004f1743: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x4f1748u); f_0047f950();
    /* 004f1748: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f174a: jl 0x4f1763 */ if ((fS!=fO)) goto L_004f1763;
L_004f174c:; BB(0x004f174c);
    /* 004f174c: push 0x2f35 */ { u32 v = 0x2f35u; r_esp -= 4; W32(r_esp, v); }
    /* 004f1751: push 0x6bf384 */ { u32 v = 0x6bf384u; r_esp -= 4; W32(r_esp, v); }
    /* 004f1756: push 0x6bf858 */ { u32 v = 0x6bf858u; r_esp -= 4; W32(r_esp, v); }
    /* 004f175b: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f1760u); f_005e9f20();
    /* 004f1760: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f1763:; BB(0x004f1763);
    /* 004f1763: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f1767: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f176a: jge 0x4f1783 */ if ((fS==fO)) goto L_004f1783;
L_004f176c:; BB(0x004f176c);
    /* 004f176c: push 0x2f36 */ { u32 v = 0x2f36u; r_esp -= 4; W32(r_esp, v); }
    /* 004f1771: push 0x6bf384 */ { u32 v = 0x6bf384u; r_esp -= 4; W32(r_esp, v); }
    /* 004f1776: push 0x6bf778 */ { u32 v = 0x6bf778u; r_esp -= 4; W32(r_esp, v); }
    /* 004f177b: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f1780u); f_005e9f20();
    /* 004f1780: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f1783:; BB(0x004f1783);
    /* 004f1783: movsx esi, word ptr [ebp + 0xc] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f1787: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004f178d: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x4f1792u); f_0047f950();
    /* 004f1792: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f1794: jle 0x4f17ad */ if ((fZ||fS!=fO)) goto L_004f17ad;
L_004f1796:; BB(0x004f1796);
    /* 004f1796: push 0x2f37 */ { u32 v = 0x2f37u; r_esp -= 4; W32(r_esp, v); }
    /* 004f179b: push 0x6bf384 */ { u32 v = 0x6bf384u; r_esp -= 4; W32(r_esp, v); }
    /* 004f17a0: push 0x6bf740 */ { u32 v = 0x6bf740u; r_esp -= 4; W32(r_esp, v); }
    /* 004f17a5: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f17aau); f_005e9f20();
    /* 004f17aa: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f17ad:; BB(0x004f17ad);
    /* 004f17ad: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004f17b0: movsx ecx, word ptr [eax + 0x3a0] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x3a0u));
    /* 004f17b7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004f17ba: fild dword ptr [ebp - 0x20] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffe0u)));
    /* 004f17bd: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 004f17c3: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f17c7: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 004f17ca: fild dword ptr [ebp - 0x24] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffdcu)));
    /* 004f17cd: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 004f17cf: fstp qword ptr [ebp - 0x18] */ W_F64((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 004f17d2: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004f17d5: mov ecx, dword ptr [eax + 0x428] */ r_ecx = R32((u32)(r_eax+0x428u));
    /* 004f17db: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f17df: imul edx, edx, 0xe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xeu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f17e2: lea eax, [ecx + edx + 0xc78] */ r_eax = (u32)(r_ecx+r_edx+0xc78u);
    /* 004f17e9: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f17ed: movzx edx, word ptr [eax + ecx*2 - 4] */ r_edx = (u32)R16((u32)(r_eax+r_ecx*2+0xfffffffcu));
    /* 004f17f2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f17f4: jne 0x4f17fe */ if (!fZ) goto L_004f17fe;
L_004f17f6:; BB(0x004f17f6);
    /* 004f17f6: fld qword ptr [ebp - 0x18] */ FPUSH(R_F64((u32)(r_ebp+0xffffffe8u)));
    /* 004f17f9: jmp 0x4f18ce */ goto L_004f18ce;
L_004f17fe:; BB(0x004f17fe);
    /* 004f17fe: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004f1801: mov ecx, dword ptr [eax + 0x428] */ r_ecx = R32((u32)(r_eax+0x428u));
    /* 004f1807: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f180b: imul edx, edx, 0xe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xeu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f180e: lea eax, [ecx + edx + 0xc78] */ r_eax = (u32)(r_ecx+r_edx+0xc78u);
    /* 004f1815: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f1819: movzx edx, word ptr [eax + ecx*2 - 4] */ r_edx = (u32)R16((u32)(r_eax+r_ecx*2+0xfffffffcu));
    /* 004f181e: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 004f1821: fild dword ptr [ebp - 0x28] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd8u)));
    /* 004f1824: fstp qword ptr [ebp - 8] */ W_F64((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 004f1827: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004f182a: mov ecx, dword ptr [eax + 0x428] */ r_ecx = R32((u32)(r_eax+0x428u));
    /* 004f1830: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f1834: imul edx, edx, 0xe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xeu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f1837: lea eax, [ecx + edx + 0xce8] */ r_eax = (u32)(r_ecx+r_edx+0xce8u);
    /* 004f183e: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f1842: movzx edx, word ptr [eax + ecx*2 - 4] */ r_edx = (u32)R16((u32)(r_eax+r_ecx*2+0xfffffffcu));
    /* 004f1847: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 004f184a: fild dword ptr [ebp - 0x2c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd4u)));
    /* 004f184d: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 004f1850: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 004f1856: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x4f185bu); f_005da7b0();
    /* 004f185b: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004f185e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f1860: jne 0x4f1895 */ if (!fZ) goto L_004f1895;
L_004f1862:; BB(0x004f1862);
    /* 004f1862: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004f1865: movsx edx, word ptr [ecx + 0x3a4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x3a4u));
    /* 004f186c: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 004f186f: fild dword ptr [ebp - 0x30] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd0u)));
    /* 004f1872: fdivr qword ptr [ebp - 0x10] */ ST(0) = R_F64((u32)(r_ebp+0xfffffff0u)) / ST(0);
    /* 004f1875: fadd qword ptr [ebp - 0x18] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xffffffe8u));
    /* 004f1878: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004f187b: movsx ecx, word ptr [eax + 0x3a4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x3a4u));
    /* 004f1882: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 004f1885: fild dword ptr [ebp - 0x34] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffccu)));
    /* 004f1888: fdivr qword ptr [ebp - 8] */ ST(0) = R_F64((u32)(r_ebp+0xfffffff8u)) / ST(0);
    /* 004f188b: fld1  */ FPUSH(1.0);
    /* 004f188d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004f188f: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 004f1891: jmp 0x4f18ce */ goto L_004f18ce;
L_004f1895:; BB(0x004f1895);
    /* 004f1895: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004f1898: movsx eax, word ptr [edx + 0x3a4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x3a4u));
    /* 004f189f: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004f18a0: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004f18a2: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004f18a4: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 004f18a7: fild dword ptr [ebp - 0x38] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffc8u)));
    /* 004f18aa: fdivr qword ptr [ebp - 0x10] */ ST(0) = R_F64((u32)(r_ebp+0xfffffff0u)) / ST(0);
    /* 004f18ad: fadd qword ptr [ebp - 0x18] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xffffffe8u));
    /* 004f18b0: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004f18b3: movsx eax, word ptr [eax + 0x3a4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x3a4u));
    /* 004f18ba: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004f18bb: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004f18bd: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004f18bf: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 004f18c2: fild dword ptr [ebp - 0x3c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffc4u)));
    /* 004f18c5: fdivr qword ptr [ebp - 8] */ ST(0) = R_F64((u32)(r_ebp+0xfffffff8u)) / ST(0);
    /* 004f18c8: fld1  */ FPUSH(1.0);
    /* 004f18ca: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004f18cc: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
L_004f18ce:; BB(0x004f18ce);
    /* 004f18ce: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004f18cf: mov esp, ebp */ r_esp = r_ebp;
    /* 004f18d1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f18d2: ret 8 */ FN_RET(0x004f1710); r_esp += 12; return;
}

void f_004f1900(void) /* PokerPlayer::func_004f1900 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f1900);
    /* 004f1900: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f1901: mov ebp, esp */ r_ebp = r_esp;
    /* 004f1903: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f1906: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004f1907: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 004f190a: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f190e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f1911: jge 0x4f192a */ if ((fS==fO)) goto L_004f192a;
L_004f1913:; BB(0x004f1913);
    /* 004f1913: push 0x2f4b */ { u32 v = 0x2f4bu; r_esp -= 4; W32(r_esp, v); }
    /* 004f1918: push 0x6bf384 */ { u32 v = 0x6bf384u; r_esp -= 4; W32(r_esp, v); }
    /* 004f191d: push 0x6bf730 */ { u32 v = 0x6bf730u; r_esp -= 4; W32(r_esp, v); }
    /* 004f1922: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f1927u); f_005e9f20();
    /* 004f1927: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f192a:; BB(0x004f192a);
    /* 004f192a: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f192e: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f1931: jle 0x4f194a */ if ((fZ||fS!=fO)) goto L_004f194a;
L_004f1933:; BB(0x004f1933);
    /* 004f1933: push 0x2f4c */ { u32 v = 0x2f4cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f1938: push 0x6bf384 */ { u32 v = 0x6bf384u; r_esp -= 4; W32(r_esp, v); }
    /* 004f193d: push 0x6bf720 */ { u32 v = 0x6bf720u; r_esp -= 4; W32(r_esp, v); }
    /* 004f1942: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f1947u); f_005e9f20();
    /* 004f1947: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f194a:; BB(0x004f194a);
    /* 004f194a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f194d: movsx edx, word ptr [ecx + 0x64] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x64u));
    /* 004f1951: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f1953: jne 0x4f199d */ if (!fZ) goto L_004f199d;
L_004f1955:; BB(0x004f1955);
    /* 004f1955: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f1959: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f195c: jne 0x4f196f */ if (!fZ) goto L_004f196f;
L_004f195e:; BB(0x004f195e);
    /* 004f195e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f1961: mov ax, word ptr [ecx + 0x3b4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ecx+0x3b4u))) & 0xffffu);
    /* 004f1968: jmp 0x4f1bdc */ goto L_004f1bdc;
L_004f196f:; BB(0x004f196f);
    /* 004f196f: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f1973: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f1976: jne 0x4f1989 */ if (!fZ) goto L_004f1989;
L_004f1978:; BB(0x004f1978);
    /* 004f1978: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f197b: mov ax, word ptr [eax + 0x3b2] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+0x3b2u))) & 0xffffu);
    /* 004f1982: jmp 0x4f1bdc */ goto L_004f1bdc;
L_004f1989:; BB(0x004f1989);
    /* 004f1989: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f198c: mov ax, word ptr [ecx + 0x3b0] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ecx+0x3b0u))) & 0xffffu);
    /* 004f1993: jmp 0x4f1bdc */ goto L_004f1bdc;
L_004f199d:; BB(0x004f199d);
    /* 004f199d: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f19a0: movsx eax, word ptr [edx + 0x64] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x64u));
    /* 004f19a4: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f19a7: jne 0x4f1a46 */ if (!fZ) goto L_004f1a46;
L_004f19ad:; BB(0x004f19ad);
    /* 004f19ad: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f19b1: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f19b4: jne 0x4f19e2 */ if (!fZ) goto L_004f19e2;
L_004f19b6:; BB(0x004f19b6);
    /* 004f19b6: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f19b9: movsx esi, word ptr [edx + 0x3b4] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+0x3b4u));
    /* 004f19c0: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 004f19c2: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4f19c7u); f_0062fbf0();
    /* 004f19c7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f19ca: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f19cc: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 004f19ce: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4f19d3u); f_0062fbf0();
    /* 004f19d3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f19d6: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f19d8: mov ax, si */ r_eax = (r_eax & 0xffff0000u) | (((u16)r_esi) & 0xffffu);
    /* 004f19db: jmp 0x4f1bdc */ goto L_004f1bdc;
L_004f19e2:; BB(0x004f19e2);
    /* 004f19e2: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f19e6: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f19e9: jne 0x4f1a17 */ if (!fZ) goto L_004f1a17;
L_004f19eb:; BB(0x004f19eb);
    /* 004f19eb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f19ee: movsx esi, word ptr [ecx + 0x3b2] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ecx+0x3b2u));
    /* 004f19f5: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 004f19f7: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4f19fcu); f_0062fbf0();
    /* 004f19fc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f19ff: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f1a01: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 004f1a03: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4f1a08u); f_0062fbf0();
    /* 004f1a08: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f1a0b: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f1a0d: mov ax, si */ r_eax = (r_eax & 0xffff0000u) | (((u16)r_esi) & 0xffffu);
    /* 004f1a10: jmp 0x4f1bdc */ goto L_004f1bdc;
L_004f1a17:; BB(0x004f1a17);
    /* 004f1a17: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f1a1a: movsx esi, word ptr [edx + 0x3b0] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+0x3b0u));
    /* 004f1a21: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 004f1a23: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4f1a28u); f_0062fbf0();
    /* 004f1a28: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f1a2b: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f1a2d: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 004f1a2f: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4f1a34u); f_0062fbf0();
    /* 004f1a34: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f1a37: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f1a39: mov ax, si */ r_eax = (r_eax & 0xffff0000u) | (((u16)r_esi) & 0xffffu);
    /* 004f1a3c: jmp 0x4f1bdc */ goto L_004f1bdc;
L_004f1a46:; BB(0x004f1a46);
    /* 004f1a46: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f1a49: movsx ecx, word ptr [eax + 0x64] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x64u));
    /* 004f1a4d: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f1a50: jne 0x4f1b06 */ if (!fZ) goto L_004f1b06;
L_004f1a56:; BB(0x004f1a56);
    /* 004f1a56: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004f1a5c: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f1a60: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f1a63: jne 0x4f1a8d */ if (!fZ) goto L_004f1a8d;
L_004f1a65:; BB(0x004f1a65);
    /* 004f1a65: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f1a68: movsx esi, word ptr [eax + 0x3b4] */ r_esi = (u32)(i32)(i16)R16((u32)(r_eax+0x3b4u));
    /* 004f1a6f: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004f1a71: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4f1a76u); f_0062fbf0();
    /* 004f1a76: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f1a79: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004f1a7b: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004f1a7d: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4f1a82u); f_0062fbf0();
    /* 004f1a82: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f1a85: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004f1a87: mov word ptr [ebp - 4], si */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_esi);
    /* 004f1a8b: jmp 0x4f1ae4 */ goto L_004f1ae4;
L_004f1a8d:; BB(0x004f1a8d);
    /* 004f1a8d: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f1a91: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f1a94: jne 0x4f1abe */ if (!fZ) goto L_004f1abe;
L_004f1a96:; BB(0x004f1a96);
    /* 004f1a96: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f1a99: movsx esi, word ptr [edx + 0x3b2] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+0x3b2u));
    /* 004f1aa0: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004f1aa2: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4f1aa7u); f_0062fbf0();
    /* 004f1aa7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f1aaa: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004f1aac: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004f1aae: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4f1ab3u); f_0062fbf0();
    /* 004f1ab3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f1ab6: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004f1ab8: mov word ptr [ebp - 4], si */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_esi);
    /* 004f1abc: jmp 0x4f1ae4 */ goto L_004f1ae4;
L_004f1abe:; BB(0x004f1abe);
    /* 004f1abe: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f1ac1: movsx esi, word ptr [eax + 0x3b0] */ r_esi = (u32)(i32)(i16)R16((u32)(r_eax+0x3b0u));
    /* 004f1ac8: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004f1aca: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4f1acfu); f_0062fbf0();
    /* 004f1acf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f1ad2: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004f1ad4: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004f1ad6: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4f1adbu); f_0062fbf0();
    /* 004f1adb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f1ade: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004f1ae0: mov word ptr [ebp - 4], si */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_esi);
L_004f1ae4:; BB(0x004f1ae4);
    /* 004f1ae4: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f1ae8: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f1aeb: jge 0x4f1af8 */ if ((fS==fO)) goto L_004f1af8;
L_004f1aed:; BB(0x004f1aed);
    /* 004f1aed: mov ax, 1 */ r_eax = (r_eax & 0xffff0000u) | ((0x1u) & 0xffffu);
    /* 004f1af1: jmp 0x4f1bdc */ goto L_004f1bdc;
L_004f1af8:; BB(0x004f1af8);
    /* 004f1af8: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 004f1afc: jmp 0x4f1bdc */ goto L_004f1bdc;
L_004f1b06:; BB(0x004f1b06);
    /* 004f1b06: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f1b09: movsx eax, word ptr [edx + 0x64] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x64u));
    /* 004f1b0d: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f1b10: jne 0x4f1bbd */ if (!fZ) goto L_004f1bbd;
L_004f1b16:; BB(0x004f1b16);
    /* 004f1b16: mov word ptr [ebp - 8], 0 */ W16((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 004f1b1c: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f1b20: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f1b23: jne 0x4f1b4d */ if (!fZ) goto L_004f1b4d;
L_004f1b25:; BB(0x004f1b25);
    /* 004f1b25: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f1b28: movsx esi, word ptr [edx + 0x3b4] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+0x3b4u));
    /* 004f1b2f: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 004f1b31: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4f1b36u); f_0062fbf0();
    /* 004f1b36: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f1b39: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004f1b3b: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 004f1b3d: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4f1b42u); f_0062fbf0();
    /* 004f1b42: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f1b45: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004f1b47: mov word ptr [ebp - 8], si */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_esi);
    /* 004f1b4b: jmp 0x4f1ba4 */ goto L_004f1ba4;
L_004f1b4d:; BB(0x004f1b4d);
    /* 004f1b4d: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f1b51: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f1b54: jne 0x4f1b7e */ if (!fZ) goto L_004f1b7e;
L_004f1b56:; BB(0x004f1b56);
    /* 004f1b56: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f1b59: movsx esi, word ptr [ecx + 0x3b2] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ecx+0x3b2u));
    /* 004f1b60: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 004f1b62: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4f1b67u); f_0062fbf0();
    /* 004f1b67: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f1b6a: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004f1b6c: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 004f1b6e: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4f1b73u); f_0062fbf0();
    /* 004f1b73: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f1b76: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004f1b78: mov word ptr [ebp - 8], si */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_esi);
    /* 004f1b7c: jmp 0x4f1ba4 */ goto L_004f1ba4;
L_004f1b7e:; BB(0x004f1b7e);
    /* 004f1b7e: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f1b81: movsx esi, word ptr [edx + 0x3b0] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+0x3b0u));
    /* 004f1b88: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 004f1b8a: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4f1b8fu); f_0062fbf0();
    /* 004f1b8f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f1b92: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004f1b94: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 004f1b96: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4f1b9bu); f_0062fbf0();
    /* 004f1b9b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f1b9e: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004f1ba0: mov word ptr [ebp - 8], si */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_esi);
L_004f1ba4:; BB(0x004f1ba4);
    /* 004f1ba4: movsx eax, word ptr [ebp - 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 004f1ba8: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f1bab: jge 0x4f1bb5 */ if ((fS==fO)) goto L_004f1bb5;
L_004f1bad:; BB(0x004f1bad);
    /* 004f1bad: mov ax, 1 */ r_eax = (r_eax & 0xffff0000u) | ((0x1u) & 0xffffu);
    /* 004f1bb1: jmp 0x4f1bdc */ goto L_004f1bdc;
L_004f1bb5:; BB(0x004f1bb5);
    /* 004f1bb5: mov ax, word ptr [ebp - 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 004f1bb9: jmp 0x4f1bdc */ goto L_004f1bdc;
L_004f1bbd:; BB(0x004f1bbd);
    /* 004f1bbd: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 004f1bbf: jne 0x4f1bd8 */ if (!fZ) goto L_004f1bd8;
L_004f1bc1:; BB(0x004f1bc1);
    /* 004f1bc1: push 0x2f7d */ { u32 v = 0x2f7du; r_esp -= 4; W32(r_esp, v); }
    /* 004f1bc6: push 0x6bf384 */ { u32 v = 0x6bf384u; r_esp -= 4; W32(r_esp, v); }
    /* 004f1bcb: push 0x6b2b64 */ { u32 v = 0x6b2b64u; r_esp -= 4; W32(r_esp, v); }
    /* 004f1bd0: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f1bd5u); f_005e9f20();
    /* 004f1bd5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f1bd8:; BB(0x004f1bd8);
    /* 004f1bd8: mov ax, 0x64 */ r_eax = (r_eax & 0xffff0000u) | ((0x64u) & 0xffffu);
L_004f1bdc:; BB(0x004f1bdc);
    /* 004f1bdc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004f1bdd: mov esp, ebp */ r_esp = r_ebp;
    /* 004f1bdf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f1be0: ret 4 */ FN_RET(0x004f1900); r_esp += 8; return;
}

void f_004f1c10(void) /* PokerPlayer::func_004f1c10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f1c10);
    /* 004f1c10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f1c11: mov ebp, esp */ r_ebp = r_esp;
    /* 004f1c13: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f1c14: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004f1c17: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f1c1a: movsx ecx, word ptr [eax + 0x64] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x64u));
    /* 004f1c1e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f1c20: jne 0x4f1c30 */ if (!fZ) goto L_004f1c30;
L_004f1c22:; BB(0x004f1c22);
    /* 004f1c22: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f1c25: mov ax, word ptr [edx + 0x3b8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+0x3b8u))) & 0xffffu);
    /* 004f1c2c: jmp 0x4f1cad */ goto L_004f1cad;
L_004f1c30:; BB(0x004f1c30);
    /* 004f1c30: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f1c33: movsx ecx, word ptr [eax + 0x64] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x64u));
    /* 004f1c37: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f1c3a: jne 0x4f1c4c */ if (!fZ) goto L_004f1c4c;
L_004f1c3c:; BB(0x004f1c3c);
    /* 004f1c3c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f1c3f: movsx eax, word ptr [edx + 0x3b8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x3b8u));
    /* 004f1c46: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 004f1c48: jmp 0x4f1cad */ goto L_004f1cad;
L_004f1c4c:; BB(0x004f1c4c);
    /* 004f1c4c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f1c4f: movsx ecx, word ptr [eax + 0x64] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x64u));
    /* 004f1c53: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f1c56: jne 0x4f1c6b */ if (!fZ) goto L_004f1c6b;
L_004f1c58:; BB(0x004f1c58);
    /* 004f1c58: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f1c5b: movsx eax, word ptr [edx + 0x3b8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x3b8u));
    /* 004f1c62: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004f1c63: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004f1c65: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004f1c67: jmp 0x4f1cad */ goto L_004f1cad;
L_004f1c6b:; BB(0x004f1c6b);
    /* 004f1c6b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f1c6e: movsx ecx, word ptr [eax + 0x64] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x64u));
    /* 004f1c72: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f1c75: jne 0x4f1c8e */ if (!fZ) goto L_004f1c8e;
L_004f1c77:; BB(0x004f1c77);
    /* 004f1c77: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f1c7a: movsx eax, word ptr [edx + 0x3b8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x3b8u));
    /* 004f1c81: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004f1c82: and edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 004f1c85: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f1c87: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004f1c8a: jmp 0x4f1cad */ goto L_004f1cad;
L_004f1c8e:; BB(0x004f1c8e);
    /* 004f1c8e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 004f1c90: jne 0x4f1ca9 */ if (!fZ) goto L_004f1ca9;
L_004f1c92:; BB(0x004f1c92);
    /* 004f1c92: push 0x2f92 */ { u32 v = 0x2f92u; r_esp -= 4; W32(r_esp, v); }
    /* 004f1c97: push 0x6bf384 */ { u32 v = 0x6bf384u; r_esp -= 4; W32(r_esp, v); }
    /* 004f1c9c: push 0x6b2b64 */ { u32 v = 0x6b2b64u; r_esp -= 4; W32(r_esp, v); }
    /* 004f1ca1: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f1ca6u); f_005e9f20();
    /* 004f1ca6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f1ca9:; BB(0x004f1ca9);
    /* 004f1ca9: mov ax, 0x14 */ r_eax = (r_eax & 0xffff0000u) | ((0x14u) & 0xffffu);
L_004f1cad:; BB(0x004f1cad);
    /* 004f1cad: mov esp, ebp */ r_esp = r_ebp;
    /* 004f1caf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f1cb0: ret  */ FN_RET(0x004f1c10); r_esp += 4; return;
}

void f_004f1cc0(void) /* PokerPlayer::func_004f1cc0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f1cc0);
    /* 004f1cc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f1cc1: mov ebp, esp */ r_ebp = r_esp;
    /* 004f1cc3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f1cc4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004f1cc7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f1cca: movsx ecx, word ptr [eax + 0x64] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x64u));
    /* 004f1cce: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f1cd0: jne 0x4f1ce0 */ if (!fZ) goto L_004f1ce0;
L_004f1cd2:; BB(0x004f1cd2);
    /* 004f1cd2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f1cd5: mov ax, word ptr [edx + 0x3ca] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+0x3cau))) & 0xffffu);
    /* 004f1cdc: jmp 0x4f1d55 */ goto L_004f1d55;
L_004f1ce0:; BB(0x004f1ce0);
    /* 004f1ce0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f1ce3: movsx ecx, word ptr [eax + 0x64] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x64u));
    /* 004f1ce7: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f1cea: jne 0x4f1cfd */ if (!fZ) goto L_004f1cfd;
L_004f1cec:; BB(0x004f1cec);
    /* 004f1cec: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f1cef: movsx eax, word ptr [edx + 0x3ca] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x3cau));
    /* 004f1cf6: sub eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004f1cf9: jmp 0x4f1d55 */ goto L_004f1d55;
L_004f1cfd:; BB(0x004f1cfd);
    /* 004f1cfd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f1d00: movsx ecx, word ptr [eax + 0x64] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x64u));
    /* 004f1d04: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f1d07: jne 0x4f1d1a */ if (!fZ) goto L_004f1d1a;
L_004f1d09:; BB(0x004f1d09);
    /* 004f1d09: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f1d0c: movsx eax, word ptr [edx + 0x3ca] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x3cau));
    /* 004f1d13: add eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f1d16: jmp 0x4f1d55 */ goto L_004f1d55;
L_004f1d1a:; BB(0x004f1d1a);
    /* 004f1d1a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f1d1d: movsx ecx, word ptr [eax + 0x64] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x64u));
    /* 004f1d21: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f1d24: jne 0x4f1d37 */ if (!fZ) goto L_004f1d37;
L_004f1d26:; BB(0x004f1d26);
    /* 004f1d26: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f1d29: movsx eax, word ptr [edx + 0x3ca] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x3cau));
    /* 004f1d30: add eax, 0x1e */ {  u32 a = r_eax; u32 b = 0x1eu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f1d33: jmp 0x4f1d55 */ goto L_004f1d55;
L_004f1d37:; BB(0x004f1d37);
    /* 004f1d37: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 004f1d39: jne 0x4f1d52 */ if (!fZ) goto L_004f1d52;
L_004f1d3b:; BB(0x004f1d3b);
    /* 004f1d3b: push 0x2fa2 */ { u32 v = 0x2fa2u; r_esp -= 4; W32(r_esp, v); }
    /* 004f1d40: push 0x6bf384 */ { u32 v = 0x6bf384u; r_esp -= 4; W32(r_esp, v); }
    /* 004f1d45: push 0x6b2b64 */ { u32 v = 0x6b2b64u; r_esp -= 4; W32(r_esp, v); }
    /* 004f1d4a: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f1d4fu); f_005e9f20();
    /* 004f1d4f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f1d52:; BB(0x004f1d52);
    /* 004f1d52: xor ax, ax */ {  u32 a = (u16)r_eax; u32 b = (u16)r_eax; u32 r = (a ^ b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
L_004f1d55:; BB(0x004f1d55);
    /* 004f1d55: mov esp, ebp */ r_esp = r_ebp;
    /* 004f1d57: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f1d58: ret  */ FN_RET(0x004f1cc0); r_esp += 4; return;
}

void f_004f1d60(void) /* PokerPlayer::func_004f1d60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f1d60);
    /* 004f1d60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f1d61: mov ebp, esp */ r_ebp = r_esp;
    /* 004f1d63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f1d64: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004f1d67: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f1d6a: movsx ecx, word ptr [eax + 0x64] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x64u));
    /* 004f1d6e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f1d70: jne 0x4f1d80 */ if (!fZ) goto L_004f1d80;
L_004f1d72:; BB(0x004f1d72);
    /* 004f1d72: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f1d75: mov ax, word ptr [edx + 0x3cc] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+0x3ccu))) & 0xffffu);
    /* 004f1d7c: jmp 0x4f1df5 */ goto L_004f1df5;
L_004f1d80:; BB(0x004f1d80);
    /* 004f1d80: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f1d83: movsx ecx, word ptr [eax + 0x64] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x64u));
    /* 004f1d87: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f1d8a: jne 0x4f1d9d */ if (!fZ) goto L_004f1d9d;
L_004f1d8c:; BB(0x004f1d8c);
    /* 004f1d8c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f1d8f: movsx eax, word ptr [edx + 0x3cc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x3ccu));
    /* 004f1d96: sub eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004f1d99: jmp 0x4f1df5 */ goto L_004f1df5;
L_004f1d9d:; BB(0x004f1d9d);
    /* 004f1d9d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f1da0: movsx ecx, word ptr [eax + 0x64] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x64u));
    /* 004f1da4: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f1da7: jne 0x4f1dba */ if (!fZ) goto L_004f1dba;
L_004f1da9:; BB(0x004f1da9);
    /* 004f1da9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f1dac: movsx eax, word ptr [edx + 0x3cc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x3ccu));
    /* 004f1db3: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f1db6: jmp 0x4f1df5 */ goto L_004f1df5;
L_004f1dba:; BB(0x004f1dba);
    /* 004f1dba: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f1dbd: movsx ecx, word ptr [eax + 0x64] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x64u));
    /* 004f1dc1: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f1dc4: jne 0x4f1dd7 */ if (!fZ) goto L_004f1dd7;
L_004f1dc6:; BB(0x004f1dc6);
    /* 004f1dc6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f1dc9: movsx eax, word ptr [edx + 0x3cc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x3ccu));
    /* 004f1dd0: add eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f1dd3: jmp 0x4f1df5 */ goto L_004f1df5;
L_004f1dd7:; BB(0x004f1dd7);
    /* 004f1dd7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 004f1dd9: jne 0x4f1df2 */ if (!fZ) goto L_004f1df2;
L_004f1ddb:; BB(0x004f1ddb);
    /* 004f1ddb: push 0x2fb2 */ { u32 v = 0x2fb2u; r_esp -= 4; W32(r_esp, v); }
    /* 004f1de0: push 0x6bf384 */ { u32 v = 0x6bf384u; r_esp -= 4; W32(r_esp, v); }
    /* 004f1de5: push 0x6b2b64 */ { u32 v = 0x6b2b64u; r_esp -= 4; W32(r_esp, v); }
    /* 004f1dea: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f1defu); f_005e9f20();
    /* 004f1def: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f1df2:; BB(0x004f1df2);
    /* 004f1df2: xor ax, ax */ {  u32 a = (u16)r_eax; u32 b = (u16)r_eax; u32 r = (a ^ b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
L_004f1df5:; BB(0x004f1df5);
    /* 004f1df5: mov esp, ebp */ r_esp = r_ebp;
    /* 004f1df7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f1df8: ret  */ FN_RET(0x004f1d60); r_esp += 4; return;
}

void f_004f1e00(void) /* PokerPlayer::func_004f1e00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f1e00);
    /* 004f1e00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f1e01: mov ebp, esp */ r_ebp = r_esp;
    /* 004f1e03: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f1e06: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004f1e09: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f1e0d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f1e0f: jne 0x4f1e22 */ if (!fZ) goto L_004f1e22;
L_004f1e11:; BB(0x004f1e11);
    /* 004f1e11: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 004f1e13: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4f1e18u); f_0062fbf0();
    /* 004f1e18: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f1e1b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f1e1e: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
L_004f1e22:; BB(0x004f1e22);
    /* 004f1e22: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f1e26: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f1e28: jle 0x4f1e33 */ if ((fZ||fS!=fO)) goto L_004f1e33;
L_004f1e2a:; BB(0x004f1e2a);
    /* 004f1e2a: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f1e2e: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f1e31: jle 0x4f1e4a */ if ((fZ||fS!=fO)) goto L_004f1e4a;
L_004f1e33:; BB(0x004f1e33);
    /* 004f1e33: push 0x2fbd */ { u32 v = 0x2fbdu; r_esp -= 4; W32(r_esp, v); }
    /* 004f1e38: push 0x6bf384 */ { u32 v = 0x6bf384u; r_esp -= 4; W32(r_esp, v); }
    /* 004f1e3d: push 0x6bf6d8 */ { u32 v = 0x6bf6d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004f1e42: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f1e47u); f_005e9f20();
    /* 004f1e47: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f1e4a:; BB(0x004f1e4a);
    /* 004f1e4a: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f1e4e: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004f1e51: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f1e54: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004f1e57: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 004f1e5a: cmp dword ptr [ebp - 8], 9 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004f1e5e: ja 0x4f28eb */ if ((!fC&&!fZ)) goto L_004f28eb;
L_004f1e64:; BB(0x004f1e64);
    /* 004f1e64: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f1e67: jmp dword ptr [eax*4 + 0x4f28f4] */ { u32 t = R32((u32)(r_eax*4+0x4f28f4u)); switch (t) { case 0x4f1e6eu: goto L_004f1e6e; case 0x4f1f7bu: goto L_004f1f7b; case 0x4f2088u: goto L_004f2088; case 0x4f2195u: goto L_004f2195; case 0x4f22a2u: goto L_004f22a2; case 0x4f23afu: goto L_004f23af; case 0x4f24bcu: goto L_004f24bc; case 0x4f25c9u: goto L_004f25c9; case 0x4f26d6u: goto L_004f26d6; case 0x4f27e3u: goto L_004f27e3; default: UNSUP(0x004f1e67, "jump table entry is not a known target"); } }
L_004f1e6e:; BB(0x004f1e6e);
    /* 004f1e6e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f1e71: mov word ptr [ecx + 0x3ce], 5 */ W16((u32)(r_ecx+0x3ceu), 0x5u);
    /* 004f1e7a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f1e7d: mov word ptr [edx + 0x3d0], 0x1e */ W16((u32)(r_edx+0x3d0u), 0x1eu);
    /* 004f1e86: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f1e89: mov word ptr [eax + 0x3d2], 0x32 */ W16((u32)(r_eax+0x3d2u), 0x32u);
    /* 004f1e92: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f1e95: mov word ptr [ecx + 0x3d4], 0x19 */ W16((u32)(r_ecx+0x3d4u), 0x19u);
    /* 004f1e9e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f1ea1: mov word ptr [edx + 0x3d6], 0x3c */ W16((u32)(r_edx+0x3d6u), 0x3cu);
    /* 004f1eaa: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f1ead: mov word ptr [eax + 0x3d8], 0x1e */ W16((u32)(r_eax+0x3d8u), 0x1eu);
    /* 004f1eb6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f1eb9: mov word ptr [ecx + 0x3da], 0x4b */ W16((u32)(r_ecx+0x3dau), 0x4bu);
    /* 004f1ec2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f1ec5: mov word ptr [edx + 0x3dc], 0x28 */ W16((u32)(r_edx+0x3dcu), 0x28u);
    /* 004f1ece: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f1ed1: mov word ptr [eax + 0x3de], 0x14 */ W16((u32)(r_eax+0x3deu), 0x14u);
    /* 004f1eda: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f1edd: mov word ptr [ecx + 0x3e0], 0x28 */ W16((u32)(r_ecx+0x3e0u), 0x28u);
    /* 004f1ee6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f1ee9: mov word ptr [edx + 0x3e2], 0x14 */ W16((u32)(r_edx+0x3e2u), 0x14u);
    /* 004f1ef2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f1ef5: mov word ptr [eax + 0x3e4], 5 */ W16((u32)(r_eax+0x3e4u), 0x5u);
    /* 004f1efe: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f1f01: mov word ptr [ecx + 0x3e6], 0x1e */ W16((u32)(r_ecx+0x3e6u), 0x1eu);
    /* 004f1f0a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f1f0d: mov word ptr [edx + 0x3ea], 0x4b */ W16((u32)(r_edx+0x3eau), 0x4bu);
    /* 004f1f16: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f1f19: mov word ptr [eax + 0x3ec], 0x32 */ W16((u32)(r_eax+0x3ecu), 0x32u);
    /* 004f1f22: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f1f25: mov word ptr [ecx + 0x3ee], 0x19 */ W16((u32)(r_ecx+0x3eeu), 0x19u);
    /* 004f1f2e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f1f31: mov word ptr [edx + 0x3f0], 0x46 */ W16((u32)(r_edx+0x3f0u), 0x46u);
    /* 004f1f3a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f1f3d: mov word ptr [eax + 0x3f2], 0x3c */ W16((u32)(r_eax+0x3f2u), 0x3cu);
    /* 004f1f46: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f1f49: mov word ptr [ecx + 0x3e8], 5 */ W16((u32)(r_ecx+0x3e8u), 0x5u);
    /* 004f1f52: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f1f55: mov word ptr [edx + 0x3f4], 6 */ W16((u32)(r_edx+0x3f4u), 0x6u);
    /* 004f1f5e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f1f61: mov word ptr [eax + 0x3f6], 0x1e */ W16((u32)(r_eax+0x3f6u), 0x1eu);
    /* 004f1f6a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f1f6d: mov word ptr [ecx + 0x3f8], 0x1e */ W16((u32)(r_ecx+0x3f8u), 0x1eu);
    /* 004f1f76: jmp 0x4f28eb */ goto L_004f28eb;
L_004f1f7b:; BB(0x004f1f7b);
    /* 004f1f7b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f1f7e: mov word ptr [edx + 0x3ce], 2 */ W16((u32)(r_edx+0x3ceu), 0x2u);
    /* 004f1f87: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f1f8a: mov word ptr [eax + 0x3d0], 0x32 */ W16((u32)(r_eax+0x3d0u), 0x32u);
    /* 004f1f93: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f1f96: mov word ptr [ecx + 0x3d2], 0x46 */ W16((u32)(r_ecx+0x3d2u), 0x46u);
    /* 004f1f9f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f1fa2: mov word ptr [edx + 0x3d4], 0x32 */ W16((u32)(r_edx+0x3d4u), 0x32u);
    /* 004f1fab: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f1fae: mov word ptr [eax + 0x3d6], 0x69 */ W16((u32)(r_eax+0x3d6u), 0x69u);
    /* 004f1fb7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f1fba: mov word ptr [ecx + 0x3d8], 0x2c */ W16((u32)(r_ecx+0x3d8u), 0x2cu);
    /* 004f1fc3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f1fc6: mov word ptr [edx + 0x3da], 0x96 */ W16((u32)(r_edx+0x3dau), 0x96u);
    /* 004f1fcf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f1fd2: mov word ptr [eax + 0x3dc], 0x3c */ W16((u32)(r_eax+0x3dcu), 0x3cu);
    /* 004f1fdb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f1fde: mov word ptr [ecx + 0x3de], 8 */ W16((u32)(r_ecx+0x3deu), 0x8u);
    /* 004f1fe7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f1fea: mov word ptr [edx + 0x3f8], 0x12 */ W16((u32)(r_edx+0x3f8u), 0x12u);
    /* 004f1ff3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f1ff6: mov word ptr [eax + 0x3e0], 0x2d */ W16((u32)(r_eax+0x3e0u), 0x2du);
    /* 004f1fff: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f2002: mov word ptr [ecx + 0x3e2], 0x17 */ W16((u32)(r_ecx+0x3e2u), 0x17u);
    /* 004f200b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f200e: mov word ptr [edx + 0x3e4], 0x11 */ W16((u32)(r_edx+0x3e4u), 0x11u);
    /* 004f2017: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f201a: mov word ptr [eax + 0x3e6], 0x19 */ W16((u32)(r_eax+0x3e6u), 0x19u);
    /* 004f2023: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f2026: mov word ptr [ecx + 0x3e8], 8 */ W16((u32)(r_ecx+0x3e8u), 0x8u);
    /* 004f202f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f2032: mov word ptr [edx + 0x3ea], 0x5a */ W16((u32)(r_edx+0x3eau), 0x5au);
    /* 004f203b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f203e: mov word ptr [eax + 0x3ec], 0x32 */ W16((u32)(r_eax+0x3ecu), 0x32u);
    /* 004f2047: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f204a: mov word ptr [ecx + 0x3ee], 0x1e */ W16((u32)(r_ecx+0x3eeu), 0x1eu);
    /* 004f2053: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f2056: mov word ptr [edx + 0x3f0], 0x55 */ W16((u32)(r_edx+0x3f0u), 0x55u);
    /* 004f205f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f2062: mov word ptr [eax + 0x3f2], 0x50 */ W16((u32)(r_eax+0x3f2u), 0x50u);
    /* 004f206b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f206e: mov word ptr [ecx + 0x3f4], 3 */ W16((u32)(r_ecx+0x3f4u), 0x3u);
    /* 004f2077: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f207a: mov word ptr [edx + 0x3f6], 0x46 */ W16((u32)(r_edx+0x3f6u), 0x46u);
    /* 004f2083: jmp 0x4f28eb */ goto L_004f28eb;
L_004f2088:; BB(0x004f2088);
    /* 004f2088: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f208b: mov word ptr [eax + 0x3ce], 8 */ W16((u32)(r_eax+0x3ceu), 0x8u);
    /* 004f2094: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f2097: mov word ptr [ecx + 0x3d0], 0x19 */ W16((u32)(r_ecx+0x3d0u), 0x19u);
    /* 004f20a0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f20a3: mov word ptr [edx + 0x3d2], 0x28 */ W16((u32)(r_edx+0x3d2u), 0x28u);
    /* 004f20ac: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f20af: mov word ptr [eax + 0x3d4], 0xf */ W16((u32)(r_eax+0x3d4u), 0xfu);
    /* 004f20b8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f20bb: mov word ptr [ecx + 0x3d6], 0x2d */ W16((u32)(r_ecx+0x3d6u), 0x2du);
    /* 004f20c4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f20c7: mov word ptr [edx + 0x3d8], 0x12 */ W16((u32)(r_edx+0x3d8u), 0x12u);
    /* 004f20d0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f20d3: mov word ptr [eax + 0x3da], 0x3c */ W16((u32)(r_eax+0x3dau), 0x3cu);
    /* 004f20dc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f20df: mov word ptr [ecx + 0x3dc], 0x1c */ W16((u32)(r_ecx+0x3dcu), 0x1cu);
    /* 004f20e8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f20eb: mov word ptr [edx + 0x3de], 0xf */ W16((u32)(r_edx+0x3deu), 0xfu);
    /* 004f20f4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f20f7: mov word ptr [eax + 0x3e0], 0x1e */ W16((u32)(r_eax+0x3e0u), 0x1eu);
    /* 004f2100: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f2103: mov word ptr [ecx + 0x3e2], 0xf */ W16((u32)(r_ecx+0x3e2u), 0xfu);
    /* 004f210c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f210f: mov word ptr [edx + 0x3e4], 4 */ W16((u32)(r_edx+0x3e4u), 0x4u);
    /* 004f2118: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f211b: mov word ptr [eax + 0x3e6], 0x28 */ W16((u32)(r_eax+0x3e6u), 0x28u);
    /* 004f2124: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f2127: mov word ptr [ecx + 0x3e8], 2 */ W16((u32)(r_ecx+0x3e8u), 0x2u);
    /* 004f2130: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f2133: mov word ptr [edx + 0x3ea], 0x5a */ W16((u32)(r_edx+0x3eau), 0x5au);
    /* 004f213c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f213f: mov word ptr [eax + 0x3ec], 0x3c */ W16((u32)(r_eax+0x3ecu), 0x3cu);
    /* 004f2148: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f214b: mov word ptr [ecx + 0x3ee], 0x1e */ W16((u32)(r_ecx+0x3eeu), 0x1eu);
    /* 004f2154: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f2157: mov word ptr [edx + 0x3f0], 0x32 */ W16((u32)(r_edx+0x3f0u), 0x32u);
    /* 004f2160: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f2163: mov word ptr [eax + 0x3f2], 0x32 */ W16((u32)(r_eax+0x3f2u), 0x32u);
    /* 004f216c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f216f: mov word ptr [ecx + 0x3f4], 0xc */ W16((u32)(r_ecx+0x3f4u), 0xcu);
    /* 004f2178: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f217b: mov word ptr [edx + 0x3f6], 0x14 */ W16((u32)(r_edx+0x3f6u), 0x14u);
    /* 004f2184: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f2187: mov word ptr [eax + 0x3f8], 0x2d */ W16((u32)(r_eax+0x3f8u), 0x2du);
    /* 004f2190: jmp 0x4f28eb */ goto L_004f28eb;
L_004f2195:; BB(0x004f2195);
    /* 004f2195: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f2198: mov word ptr [ecx + 0x3ce], 0xa */ W16((u32)(r_ecx+0x3ceu), 0xau);
    /* 004f21a1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f21a4: mov word ptr [edx + 0x3d0], 0x1c */ W16((u32)(r_edx+0x3d0u), 0x1cu);
    /* 004f21ad: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f21b0: mov word ptr [eax + 0x3d2], 0x23 */ W16((u32)(r_eax+0x3d2u), 0x23u);
    /* 004f21b9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f21bc: mov word ptr [ecx + 0x3d4], 0x14 */ W16((u32)(r_ecx+0x3d4u), 0x14u);
    /* 004f21c5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f21c8: mov word ptr [edx + 0x3d6], 0x37 */ W16((u32)(r_edx+0x3d6u), 0x37u);
    /* 004f21d1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f21d4: mov word ptr [eax + 0x3d8], 0x18 */ W16((u32)(r_eax+0x3d8u), 0x18u);
    /* 004f21dd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f21e0: mov word ptr [ecx + 0x3da], 0x50 */ W16((u32)(r_ecx+0x3dau), 0x50u);
    /* 004f21e9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f21ec: mov word ptr [edx + 0x3dc], 0x22 */ W16((u32)(r_edx+0x3dcu), 0x22u);
    /* 004f21f5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f21f8: mov word ptr [eax + 0x3de], 0xe */ W16((u32)(r_eax+0x3deu), 0xeu);
    /* 004f2201: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f2204: mov word ptr [ecx + 0x3e0], 0x26 */ W16((u32)(r_ecx+0x3e0u), 0x26u);
    /* 004f220d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f2210: mov word ptr [edx + 0x3e2], 0x15 */ W16((u32)(r_edx+0x3e2u), 0x15u);
    /* 004f2219: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f221c: mov word ptr [eax + 0x3e4], 5 */ W16((u32)(r_eax+0x3e4u), 0x5u);
    /* 004f2225: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f2228: mov word ptr [ecx + 0x3e6], 0x23 */ W16((u32)(r_ecx+0x3e6u), 0x23u);
    /* 004f2231: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f2234: mov word ptr [edx + 0x3e8], 4 */ W16((u32)(r_edx+0x3e8u), 0x4u);
    /* 004f223d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f2240: mov word ptr [eax + 0x3ea], 0x50 */ W16((u32)(r_eax+0x3eau), 0x50u);
    /* 004f2249: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f224c: mov word ptr [ecx + 0x3ec], 0x3c */ W16((u32)(r_ecx+0x3ecu), 0x3cu);
    /* 004f2255: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f2258: mov word ptr [edx + 0x3ee], 0x28 */ W16((u32)(r_edx+0x3eeu), 0x28u);
    /* 004f2261: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f2264: mov word ptr [eax + 0x3f0], 0x3c */ W16((u32)(r_eax+0x3f0u), 0x3cu);
    /* 004f226d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f2270: mov word ptr [ecx + 0x3f2], 0x3c */ W16((u32)(r_ecx+0x3f2u), 0x3cu);
    /* 004f2279: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f227c: mov word ptr [edx + 0x3f4], 0xa */ W16((u32)(r_edx+0x3f4u), 0xau);
    /* 004f2285: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f2288: mov word ptr [eax + 0x3f6], 0x1e */ W16((u32)(r_eax+0x3f6u), 0x1eu);
    /* 004f2291: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f2294: mov word ptr [ecx + 0x3f8], 0x23 */ W16((u32)(r_ecx+0x3f8u), 0x23u);
    /* 004f229d: jmp 0x4f28eb */ goto L_004f28eb;
L_004f22a2:; BB(0x004f22a2);
    /* 004f22a2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f22a5: mov word ptr [edx + 0x3ce], 7 */ W16((u32)(r_edx+0x3ceu), 0x7u);
    /* 004f22ae: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f22b1: mov word ptr [eax + 0x3d0], 0x23 */ W16((u32)(r_eax+0x3d0u), 0x23u);
    /* 004f22ba: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f22bd: mov word ptr [ecx + 0x3d2], 0x2d */ W16((u32)(r_ecx+0x3d2u), 0x2du);
    /* 004f22c6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f22c9: mov word ptr [edx + 0x3d4], 0x23 */ W16((u32)(r_edx+0x3d4u), 0x23u);
    /* 004f22d2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f22d5: mov word ptr [eax + 0x3d6], 0x46 */ W16((u32)(r_eax+0x3d6u), 0x46u);
    /* 004f22de: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f22e1: mov word ptr [ecx + 0x3d8], 0x22 */ W16((u32)(r_ecx+0x3d8u), 0x22u);
    /* 004f22ea: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f22ed: mov word ptr [edx + 0x3da], 0x69 */ W16((u32)(r_edx+0x3dau), 0x69u);
    /* 004f22f6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f22f9: mov word ptr [eax + 0x3dc], 0x30 */ W16((u32)(r_eax+0x3dcu), 0x30u);
    /* 004f2302: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f2305: mov word ptr [ecx + 0x3de], 0x23 */ W16((u32)(r_ecx+0x3deu), 0x23u);
    /* 004f230e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f2311: mov word ptr [edx + 0x3e0], 0x23 */ W16((u32)(r_edx+0x3e0u), 0x23u);
    /* 004f231a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f231d: mov word ptr [eax + 0x3e2], 0x1b */ W16((u32)(r_eax+0x3e2u), 0x1bu);
    /* 004f2326: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f2329: mov word ptr [ecx + 0x3e4], 7 */ W16((u32)(r_ecx+0x3e4u), 0x7u);
    /* 004f2332: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f2335: mov word ptr [edx + 0x3e6], 0x19 */ W16((u32)(r_edx+0x3e6u), 0x19u);
    /* 004f233e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f2341: mov word ptr [eax + 0x3e8], 6 */ W16((u32)(r_eax+0x3e8u), 0x6u);
    /* 004f234a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f234d: mov word ptr [ecx + 0x3ea], 0x5a */ W16((u32)(r_ecx+0x3eau), 0x5au);
    /* 004f2356: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f2359: mov word ptr [edx + 0x3ec], 0x28 */ W16((u32)(r_edx+0x3ecu), 0x28u);
    /* 004f2362: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f2365: mov word ptr [eax + 0x3ee], 0x14 */ W16((u32)(r_eax+0x3eeu), 0x14u);
    /* 004f236e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f2371: mov word ptr [ecx + 0x3f0], 0x37 */ W16((u32)(r_ecx+0x3f0u), 0x37u);
    /* 004f237a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f237d: mov word ptr [edx + 0x3f2], 0x46 */ W16((u32)(r_edx+0x3f2u), 0x46u);
    /* 004f2386: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f2389: mov word ptr [eax + 0x3f4], 4 */ W16((u32)(r_eax+0x3f4u), 0x4u);
    /* 004f2392: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f2395: mov word ptr [ecx + 0x3f6], 0x28 */ W16((u32)(r_ecx+0x3f6u), 0x28u);
    /* 004f239e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f23a1: mov word ptr [edx + 0x3f8], 0x19 */ W16((u32)(r_edx+0x3f8u), 0x19u);
    /* 004f23aa: jmp 0x4f28eb */ goto L_004f28eb;
L_004f23af:; BB(0x004f23af);
    /* 004f23af: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f23b2: mov word ptr [eax + 0x3ce], 0 */ W16((u32)(r_eax+0x3ceu), 0x0u);
    /* 004f23bb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f23be: mov word ptr [ecx + 0x3d0], 0x28 */ W16((u32)(r_ecx+0x3d0u), 0x28u);
    /* 004f23c7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f23ca: mov word ptr [edx + 0x3d2], 0x41 */ W16((u32)(r_edx+0x3d2u), 0x41u);
    /* 004f23d3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f23d6: mov word ptr [eax + 0x3d4], 0x64 */ W16((u32)(r_eax+0x3d4u), 0x64u);
    /* 004f23df: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f23e2: mov word ptr [ecx + 0x3d6], 0x69 */ W16((u32)(r_ecx+0x3d6u), 0x69u);
    /* 004f23eb: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f23ee: mov word ptr [edx + 0x3d8], 0x36 */ W16((u32)(r_edx+0x3d8u), 0x36u);
    /* 004f23f7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f23fa: mov word ptr [eax + 0x3da], 0x96 */ W16((u32)(r_eax+0x3dau), 0x96u);
    /* 004f2403: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f2406: mov word ptr [ecx + 0x3dc], 0x46 */ W16((u32)(r_ecx+0x3dcu), 0x46u);
    /* 004f240f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f2412: mov word ptr [edx + 0x3de], 0x1e */ W16((u32)(r_edx+0x3deu), 0x1eu);
    /* 004f241b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f241e: mov word ptr [eax + 0x3e0], 0x2e */ W16((u32)(r_eax+0x3e0u), 0x2eu);
    /* 004f2427: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f242a: mov word ptr [ecx + 0x3e2], 0x1e */ W16((u32)(r_ecx+0x3e2u), 0x1eu);
    /* 004f2433: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f2436: mov word ptr [edx + 0x3e4], 0xf */ W16((u32)(r_edx+0x3e4u), 0xfu);
    /* 004f243f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f2442: mov word ptr [eax + 0x3e6], 5 */ W16((u32)(r_eax+0x3e6u), 0x5u);
    /* 004f244b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f244e: mov word ptr [ecx + 0x3e8], 8 */ W16((u32)(r_ecx+0x3e8u), 0x8u);
    /* 004f2457: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f245a: mov word ptr [edx + 0x3ea], 0x41 */ W16((u32)(r_edx+0x3eau), 0x41u);
    /* 004f2463: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f2466: mov word ptr [eax + 0x3ec], 0x23 */ W16((u32)(r_eax+0x3ecu), 0x23u);
    /* 004f246f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f2472: mov word ptr [ecx + 0x3ee], 0xf */ W16((u32)(r_ecx+0x3eeu), 0xfu);
    /* 004f247b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f247e: mov word ptr [edx + 0x3f0], 0x4b */ W16((u32)(r_edx+0x3f0u), 0x4bu);
    /* 004f2487: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f248a: mov word ptr [eax + 0x3f2], 0x4b */ W16((u32)(r_eax+0x3f2u), 0x4bu);
    /* 004f2493: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f2496: mov word ptr [ecx + 0x3f4], 2 */ W16((u32)(r_ecx+0x3f4u), 0x2u);
    /* 004f249f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f24a2: mov word ptr [edx + 0x3f6], 0x50 */ W16((u32)(r_edx+0x3f6u), 0x50u);
    /* 004f24ab: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f24ae: mov word ptr [eax + 0x3f8], 0xc */ W16((u32)(r_eax+0x3f8u), 0xcu);
    /* 004f24b7: jmp 0x4f28eb */ goto L_004f28eb;
L_004f24bc:; BB(0x004f24bc);
    /* 004f24bc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f24bf: mov word ptr [ecx + 0x3ce], 3 */ W16((u32)(r_ecx+0x3ceu), 0x3u);
    /* 004f24c8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f24cb: mov word ptr [edx + 0x3d0], 0x1e */ W16((u32)(r_edx+0x3d0u), 0x1eu);
    /* 004f24d4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f24d7: mov word ptr [eax + 0x3d2], 0x23 */ W16((u32)(r_eax+0x3d2u), 0x23u);
    /* 004f24e0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f24e3: mov word ptr [ecx + 0x3d4], 0x19 */ W16((u32)(r_ecx+0x3d4u), 0x19u);
    /* 004f24ec: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f24ef: mov word ptr [edx + 0x3d6], 0x37 */ W16((u32)(r_edx+0x3d6u), 0x37u);
    /* 004f24f8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f24fb: mov word ptr [eax + 0x3d8], 0x10 */ W16((u32)(r_eax+0x3d8u), 0x10u);
    /* 004f2504: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f2507: mov word ptr [ecx + 0x3da], 0x4b */ W16((u32)(r_ecx+0x3dau), 0x4bu);
    /* 004f2510: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f2513: mov word ptr [edx + 0x3dc], 0x16 */ W16((u32)(r_edx+0x3dcu), 0x16u);
    /* 004f251c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f251f: mov word ptr [eax + 0x3de], 0x32 */ W16((u32)(r_eax+0x3deu), 0x32u);
    /* 004f2528: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f252b: mov word ptr [ecx + 0x3e0], 0x2b */ W16((u32)(r_ecx+0x3e0u), 0x2bu);
    /* 004f2534: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f2537: mov word ptr [edx + 0x3e2], 0x17 */ W16((u32)(r_edx+0x3e2u), 0x17u);
    /* 004f2540: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f2543: mov word ptr [eax + 0x3e4], 0xc */ W16((u32)(r_eax+0x3e4u), 0xcu);
    /* 004f254c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f254f: mov word ptr [ecx + 0x3e6], 0x28 */ W16((u32)(r_ecx+0x3e6u), 0x28u);
    /* 004f2558: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f255b: mov word ptr [edx + 0x3e8], 2 */ W16((u32)(r_edx+0x3e8u), 0x2u);
    /* 004f2564: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f2567: mov word ptr [eax + 0x3ea], 0x3c */ W16((u32)(r_eax+0x3eau), 0x3cu);
    /* 004f2570: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f2573: mov word ptr [ecx + 0x3ec], 0x28 */ W16((u32)(r_ecx+0x3ecu), 0x28u);
    /* 004f257c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f257f: mov word ptr [edx + 0x3ee], 0x14 */ W16((u32)(r_edx+0x3eeu), 0x14u);
    /* 004f2588: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f258b: mov word ptr [eax + 0x3f0], 0x3c */ W16((u32)(r_eax+0x3f0u), 0x3cu);
    /* 004f2594: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f2597: mov word ptr [ecx + 0x3f2], 0x28 */ W16((u32)(r_ecx+0x3f2u), 0x28u);
    /* 004f25a0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f25a3: mov word ptr [edx + 0x3f4], 4 */ W16((u32)(r_edx+0x3f4u), 0x4u);
    /* 004f25ac: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f25af: mov word ptr [eax + 0x3f6], 0x41 */ W16((u32)(r_eax+0x3f6u), 0x41u);
    /* 004f25b8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f25bb: mov word ptr [ecx + 0x3f8], 0x14 */ W16((u32)(r_ecx+0x3f8u), 0x14u);
    /* 004f25c4: jmp 0x4f28eb */ goto L_004f28eb;
L_004f25c9:; BB(0x004f25c9);
    /* 004f25c9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f25cc: mov word ptr [edx + 0x3ce], 5 */ W16((u32)(r_edx+0x3ceu), 0x5u);
    /* 004f25d5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f25d8: mov word ptr [eax + 0x3d0], 0x1c */ W16((u32)(r_eax+0x3d0u), 0x1cu);
    /* 004f25e1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f25e4: mov word ptr [ecx + 0x3d2], 0x2e */ W16((u32)(r_ecx+0x3d2u), 0x2eu);
    /* 004f25ed: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f25f0: mov word ptr [edx + 0x3d4], 0x16 */ W16((u32)(r_edx+0x3d4u), 0x16u);
    /* 004f25f9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f25fc: mov word ptr [eax + 0x3d6], 0x4b */ W16((u32)(r_eax+0x3d6u), 0x4bu);
    /* 004f2605: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f2608: mov word ptr [ecx + 0x3d8], 0x22 */ W16((u32)(r_ecx+0x3d8u), 0x22u);
    /* 004f2611: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f2614: mov word ptr [edx + 0x3da], 0x69 */ W16((u32)(r_edx+0x3dau), 0x69u);
    /* 004f261d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f2620: mov word ptr [eax + 0x3dc], 0x2c */ W16((u32)(r_eax+0x3dcu), 0x2cu);
    /* 004f2629: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f262c: mov word ptr [ecx + 0x3de], 0x14 */ W16((u32)(r_ecx+0x3deu), 0x14u);
    /* 004f2635: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f2638: mov word ptr [edx + 0x3e0], 0x29 */ W16((u32)(r_edx+0x3e0u), 0x29u);
    /* 004f2641: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f2644: mov word ptr [eax + 0x3e2], 0x17 */ W16((u32)(r_eax+0x3e2u), 0x17u);
    /* 004f264d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f2650: mov word ptr [ecx + 0x3e4], 6 */ W16((u32)(r_ecx+0x3e4u), 0x6u);
    /* 004f2659: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f265c: mov word ptr [edx + 0x3e6], 0x1e */ W16((u32)(r_edx+0x3e6u), 0x1eu);
    /* 004f2665: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f2668: mov word ptr [eax + 0x3ea], 0x4b */ W16((u32)(r_eax+0x3eau), 0x4bu);
    /* 004f2671: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f2674: mov word ptr [ecx + 0x3ec], 0x32 */ W16((u32)(r_ecx+0x3ecu), 0x32u);
    /* 004f267d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f2680: mov word ptr [edx + 0x3ee], 0x1e */ W16((u32)(r_edx+0x3eeu), 0x1eu);
    /* 004f2689: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f268c: mov word ptr [eax + 0x3f0], 0x41 */ W16((u32)(r_eax+0x3f0u), 0x41u);
    /* 004f2695: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f2698: mov word ptr [ecx + 0x3f2], 0x32 */ W16((u32)(r_ecx+0x3f2u), 0x32u);
    /* 004f26a1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f26a4: mov word ptr [edx + 0x3e8], 5 */ W16((u32)(r_edx+0x3e8u), 0x5u);
    /* 004f26ad: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f26b0: mov word ptr [eax + 0x3f4], 0xc */ W16((u32)(r_eax+0x3f4u), 0xcu);
    /* 004f26b9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f26bc: mov word ptr [ecx + 0x3f6], 0xf */ W16((u32)(r_ecx+0x3f6u), 0xfu);
    /* 004f26c5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f26c8: mov word ptr [edx + 0x3f8], 0x28 */ W16((u32)(r_edx+0x3f8u), 0x28u);
    /* 004f26d1: jmp 0x4f28eb */ goto L_004f28eb;
L_004f26d6:; BB(0x004f26d6);
    /* 004f26d6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f26d9: mov word ptr [eax + 0x3ce], 8 */ W16((u32)(r_eax+0x3ceu), 0x8u);
    /* 004f26e2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f26e5: mov word ptr [ecx + 0x3d0], 0x1e */ W16((u32)(r_ecx+0x3d0u), 0x1eu);
    /* 004f26ee: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f26f1: mov word ptr [edx + 0x3d2], 0x32 */ W16((u32)(r_edx+0x3d2u), 0x32u);
    /* 004f26fa: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f26fd: mov word ptr [eax + 0x3d4], 0x19 */ W16((u32)(r_eax+0x3d4u), 0x19u);
    /* 004f2706: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f2709: mov word ptr [ecx + 0x3d6], 0x2d */ W16((u32)(r_ecx+0x3d6u), 0x2du);
    /* 004f2712: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f2715: mov word ptr [edx + 0x3d8], 0x14 */ W16((u32)(r_edx+0x3d8u), 0x14u);
    /* 004f271e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f2721: mov word ptr [eax + 0x3da], 0x3c */ W16((u32)(r_eax+0x3dau), 0x3cu);
    /* 004f272a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f272d: mov word ptr [ecx + 0x3dc], 0x20 */ W16((u32)(r_ecx+0x3dcu), 0x20u);
    /* 004f2736: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f2739: mov word ptr [edx + 0x3de], 0x14 */ W16((u32)(r_edx+0x3deu), 0x14u);
    /* 004f2742: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f2745: mov word ptr [eax + 0x3e0], 0x29 */ W16((u32)(r_eax+0x3e0u), 0x29u);
    /* 004f274e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f2751: mov word ptr [ecx + 0x3e2], 0x1a */ W16((u32)(r_ecx+0x3e2u), 0x1au);
    /* 004f275a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f275d: mov word ptr [edx + 0x3e4], 8 */ W16((u32)(r_edx+0x3e4u), 0x8u);
    /* 004f2766: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f2769: mov word ptr [eax + 0x3e6], 0x1e */ W16((u32)(r_eax+0x3e6u), 0x1eu);
    /* 004f2772: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f2775: mov word ptr [ecx + 0x3ea], 0x4b */ W16((u32)(r_ecx+0x3eau), 0x4bu);
    /* 004f277e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f2781: mov word ptr [edx + 0x3ec], 0x32 */ W16((u32)(r_edx+0x3ecu), 0x32u);
    /* 004f278a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f278d: mov word ptr [eax + 0x3ee], 0x23 */ W16((u32)(r_eax+0x3eeu), 0x23u);
    /* 004f2796: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f2799: mov word ptr [ecx + 0x3f0], 0x3c */ W16((u32)(r_ecx+0x3f0u), 0x3cu);
    /* 004f27a2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f27a5: mov word ptr [edx + 0x3f2], 0x28 */ W16((u32)(r_edx+0x3f2u), 0x28u);
    /* 004f27ae: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f27b1: mov word ptr [eax + 0x3e8], 5 */ W16((u32)(r_eax+0x3e8u), 0x5u);
    /* 004f27ba: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f27bd: mov word ptr [ecx + 0x3f4], 6 */ W16((u32)(r_ecx+0x3f4u), 0x6u);
    /* 004f27c6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f27c9: mov word ptr [edx + 0x3f6], 0x1e */ W16((u32)(r_edx+0x3f6u), 0x1eu);
    /* 004f27d2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f27d5: mov word ptr [eax + 0x3f8], 0x19 */ W16((u32)(r_eax+0x3f8u), 0x19u);
    /* 004f27de: jmp 0x4f28eb */ goto L_004f28eb;
L_004f27e3:; BB(0x004f27e3);
    /* 004f27e3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f27e6: mov word ptr [ecx + 0x3ce], 7 */ W16((u32)(r_ecx+0x3ceu), 0x7u);
    /* 004f27ef: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f27f2: mov word ptr [edx + 0x3d0], 0x19 */ W16((u32)(r_edx+0x3d0u), 0x19u);
    /* 004f27fb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f27fe: mov word ptr [eax + 0x3d2], 0x28 */ W16((u32)(r_eax+0x3d2u), 0x28u);
    /* 004f2807: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f280a: mov word ptr [ecx + 0x3d4], 0x12 */ W16((u32)(r_ecx+0x3d4u), 0x12u);
    /* 004f2813: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f2816: mov word ptr [edx + 0x3d6], 0x32 */ W16((u32)(r_edx+0x3d6u), 0x32u);
    /* 004f281f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f2822: mov word ptr [eax + 0x3d8], 0x16 */ W16((u32)(r_eax+0x3d8u), 0x16u);
    /* 004f282b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f282e: mov word ptr [ecx + 0x3da], 0x4b */ W16((u32)(r_ecx+0x3dau), 0x4bu);
    /* 004f2837: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f283a: mov word ptr [edx + 0x3dc], 0x1e */ W16((u32)(r_edx+0x3dcu), 0x1eu);
    /* 004f2843: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f2846: mov word ptr [eax + 0x3de], 0x11 */ W16((u32)(r_eax+0x3deu), 0x11u);
    /* 004f284f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f2852: mov word ptr [ecx + 0x3e0], 0x20 */ W16((u32)(r_ecx+0x3e0u), 0x20u);
    /* 004f285b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f285e: mov word ptr [edx + 0x3e2], 0x15 */ W16((u32)(r_edx+0x3e2u), 0x15u);
    /* 004f2867: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f286a: mov word ptr [eax + 0x3e4], 5 */ W16((u32)(r_eax+0x3e4u), 0x5u);
    /* 004f2873: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f2876: mov word ptr [ecx + 0x3e6], 0x28 */ W16((u32)(r_ecx+0x3e6u), 0x28u);
    /* 004f287f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f2882: mov word ptr [edx + 0x3e8], 3 */ W16((u32)(r_edx+0x3e8u), 0x3u);
    /* 004f288b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f288e: mov word ptr [eax + 0x3ea], 0x5a */ W16((u32)(r_eax+0x3eau), 0x5au);
    /* 004f2897: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f289a: mov word ptr [ecx + 0x3ec], 0x3c */ W16((u32)(r_ecx+0x3ecu), 0x3cu);
    /* 004f28a3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f28a6: mov word ptr [edx + 0x3ee], 0x1e */ W16((u32)(r_edx+0x3eeu), 0x1eu);
    /* 004f28af: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f28b2: mov word ptr [eax + 0x3f0], 0x32 */ W16((u32)(r_eax+0x3f0u), 0x32u);
    /* 004f28bb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f28be: mov word ptr [ecx + 0x3f2], 0x3c */ W16((u32)(r_ecx+0x3f2u), 0x3cu);
    /* 004f28c7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f28ca: mov word ptr [edx + 0x3f4], 0xa */ W16((u32)(r_edx+0x3f4u), 0xau);
    /* 004f28d3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f28d6: mov word ptr [eax + 0x3f6], 0x14 */ W16((u32)(r_eax+0x3f6u), 0x14u);
    /* 004f28df: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f28e2: mov word ptr [ecx + 0x3f8], 0x28 */ W16((u32)(r_ecx+0x3f8u), 0x28u);
L_004f28eb:; BB(0x004f28eb);
    /* 004f28eb: mov esp, ebp */ r_esp = r_ebp;
    /* 004f28ed: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f28ee: ret 4 */ FN_RET(0x004f1e00); r_esp += 8; return;
}

void f_004f3110(void) /* PokerPlayer::func_004f3110 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f3110);
    /* 004f3110: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f3111: mov ebp, esp */ r_ebp = r_esp;
    /* 004f3113: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f3116: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004f3117: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004f311a: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f311e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004f3120: jge 0x4f3139 */ if ((fS==fO)) goto L_004f3139;
L_004f3122:; BB(0x004f3122);
    /* 004f3122: push 0x3174 */ { u32 v = 0x3174u; r_esp -= 4; W32(r_esp, v); }
    /* 004f3127: push 0x6bf384 */ { u32 v = 0x6bf384u; r_esp -= 4; W32(r_esp, v); }
    /* 004f312c: push 0x6bf888 */ { u32 v = 0x6bf888u; r_esp -= 4; W32(r_esp, v); }
    /* 004f3131: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f3136u); f_005e9f20();
    /* 004f3136: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f3139:; BB(0x004f3139);
    /* 004f3139: movsx esi, word ptr [ebp + 8] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f313d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004f3143: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x4f3148u); f_0047f950();
    /* 004f3148: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f314a: jl 0x4f3163 */ if ((fS!=fO)) goto L_004f3163;
L_004f314c:; BB(0x004f314c);
    /* 004f314c: push 0x3175 */ { u32 v = 0x3175u; r_esp -= 4; W32(r_esp, v); }
    /* 004f3151: push 0x6bf384 */ { u32 v = 0x6bf384u; r_esp -= 4; W32(r_esp, v); }
    /* 004f3156: push 0x6bf858 */ { u32 v = 0x6bf858u; r_esp -= 4; W32(r_esp, v); }
    /* 004f315b: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f3160u); f_005e9f20();
    /* 004f3160: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f3163:; BB(0x004f3163);
    /* 004f3163: mov word ptr [ebp - 4], 2 */ W16((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 004f3169: jmp 0x4f3177 */ goto L_004f3177;
L_004f316b:; BB(0x004f316b);
    /* 004f316b: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 004f316f: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f3173: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_004f3177:; BB(0x004f3177);
    /* 004f3177: movsx esi, word ptr [ebp - 4] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f317b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004f3181: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x4f3186u); f_0047f950();
    /* 004f3186: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f3188: jg 0x4f31f3 */ if ((!fZ&&fS==fO)) goto L_004f31f3;
L_004f318a:; BB(0x004f318a);
    /* 004f318a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f318d: mov edx, dword ptr [ecx + 0x428] */ r_edx = R32((u32)(r_ecx+0x428u));
    /* 004f3193: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f3197: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f319a: lea ecx, [edx + eax + 0xd90] */ r_ecx = (u32)(r_edx+r_eax+0xd90u);
    /* 004f31a1: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f31a5: mov word ptr [ecx + edx*2 - 4], 0 */ W16((u32)(r_ecx+r_edx*2+0xfffffffcu), 0x0u);
    /* 004f31ac: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f31af: mov ecx, dword ptr [eax + 0x428] */ r_ecx = R32((u32)(r_eax+0x428u));
    /* 004f31b5: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f31b9: imul edx, edx, 0xe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xeu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f31bc: lea eax, [ecx + edx + 0xe00] */ r_eax = (u32)(r_ecx+r_edx+0xe00u);
    /* 004f31c3: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f31c7: mov word ptr [eax + ecx*2 - 4], 0 */ W16((u32)(r_eax+r_ecx*2+0xfffffffcu), 0x0u);
    /* 004f31ce: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f31d1: mov eax, dword ptr [edx + 0x428] */ r_eax = R32((u32)(r_edx+0x428u));
    /* 004f31d7: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f31db: imul ecx, ecx, 7 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x7u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f31de: lea edx, [eax + ecx + 0xe70] */ r_edx = (u32)(r_eax+r_ecx+0xe70u);
    /* 004f31e5: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f31e9: mov byte ptr [edx + eax - 2], 0 */ W8((u32)(r_edx+r_eax+0xfffffffeu), 0x0u);
    /* 004f31ee: jmp 0x4f316b */ goto L_004f316b;
L_004f31f3:; BB(0x004f31f3);
    /* 004f31f3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004f31f4: mov esp, ebp */ r_esp = r_ebp;
    /* 004f31f6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f31f7: ret 4 */ FN_RET(0x004f3110); r_esp += 8; return;
}

void f_004f3200(void) /* PokerPlayer::func_004f3200 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f3200);
    /* 004f3200: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f3201: mov ebp, esp */ r_ebp = r_esp;
    /* 004f3203: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f3204: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004f3205: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004f3208: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f320c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004f320e: jge 0x4f3227 */ if ((fS==fO)) goto L_004f3227;
L_004f3210:; BB(0x004f3210);
    /* 004f3210: push 0x3183 */ { u32 v = 0x3183u; r_esp -= 4; W32(r_esp, v); }
    /* 004f3215: push 0x6bf384 */ { u32 v = 0x6bf384u; r_esp -= 4; W32(r_esp, v); }
    /* 004f321a: push 0x6bf888 */ { u32 v = 0x6bf888u; r_esp -= 4; W32(r_esp, v); }
    /* 004f321f: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f3224u); f_005e9f20();
    /* 004f3224: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f3227:; BB(0x004f3227);
    /* 004f3227: movsx esi, word ptr [ebp + 8] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f322b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004f3231: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x4f3236u); f_0047f950();
    /* 004f3236: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f3238: jl 0x4f3251 */ if ((fS!=fO)) goto L_004f3251;
L_004f323a:; BB(0x004f323a);
    /* 004f323a: push 0x3184 */ { u32 v = 0x3184u; r_esp -= 4; W32(r_esp, v); }
    /* 004f323f: push 0x6bf384 */ { u32 v = 0x6bf384u; r_esp -= 4; W32(r_esp, v); }
    /* 004f3244: push 0x6bf858 */ { u32 v = 0x6bf858u; r_esp -= 4; W32(r_esp, v); }
    /* 004f3249: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f324eu); f_005e9f20();
    /* 004f324e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f3251:; BB(0x004f3251);
    /* 004f3251: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f3255: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f3258: jge 0x4f3271 */ if ((fS==fO)) goto L_004f3271;
L_004f325a:; BB(0x004f325a);
    /* 004f325a: push 0x3185 */ { u32 v = 0x3185u; r_esp -= 4; W32(r_esp, v); }
    /* 004f325f: push 0x6bf384 */ { u32 v = 0x6bf384u; r_esp -= 4; W32(r_esp, v); }
    /* 004f3264: push 0x6bf778 */ { u32 v = 0x6bf778u; r_esp -= 4; W32(r_esp, v); }
    /* 004f3269: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f326eu); f_005e9f20();
    /* 004f326e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f3271:; BB(0x004f3271);
    /* 004f3271: movsx esi, word ptr [ebp + 0xc] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f3275: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004f327b: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x4f3280u); f_0047f950();
    /* 004f3280: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f3282: jle 0x4f329b */ if ((fZ||fS!=fO)) goto L_004f329b;
L_004f3284:; BB(0x004f3284);
    /* 004f3284: push 0x3186 */ { u32 v = 0x3186u; r_esp -= 4; W32(r_esp, v); }
    /* 004f3289: push 0x6bf384 */ { u32 v = 0x6bf384u; r_esp -= 4; W32(r_esp, v); }
    /* 004f328e: push 0x6bf740 */ { u32 v = 0x6bf740u; r_esp -= 4; W32(r_esp, v); }
    /* 004f3293: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f3298u); f_005e9f20();
    /* 004f3298: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f329b:; BB(0x004f329b);
    /* 004f329b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f329e: mov ecx, dword ptr [eax + 0x428] */ r_ecx = R32((u32)(r_eax+0x428u));
    /* 004f32a4: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f32a8: imul edx, edx, 0xe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xeu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f32ab: lea eax, [ecx + edx + 0xd90] */ r_eax = (u32)(r_ecx+r_edx+0xd90u);
    /* 004f32b2: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f32b6: mov dx, word ptr [eax + ecx*2 - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_eax+r_ecx*2+0xfffffffcu))) & 0xffffu);
    /* 004f32bb: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f32bf: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f32c3: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f32c7: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f32ca: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f32cd: mov esi, dword ptr [esi + 0x428] */ r_esi = R32((u32)(r_esi+0x428u));
    /* 004f32d3: lea ecx, [esi + ecx + 0xd90] */ r_ecx = (u32)(r_esi+r_ecx+0xd90u);
    /* 004f32da: mov word ptr [ecx + eax*2 - 4], dx */ W16((u32)(r_ecx+r_eax*2+0xfffffffcu), (u16)r_edx);
    /* 004f32df: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f32e2: mov eax, dword ptr [edx + 0x428] */ r_eax = R32((u32)(r_edx+0x428u));
    /* 004f32e8: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f32ec: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f32ef: lea edx, [eax + ecx + 0xd90] */ r_edx = (u32)(r_eax+r_ecx+0xd90u);
    /* 004f32f6: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f32fa: movzx ecx, word ptr [edx + eax*2 - 4] */ r_ecx = (u32)R16((u32)(r_edx+r_eax*2+0xfffffffcu));
    /* 004f32ff: cmp ecx, 0x3000 */ {  u32 a = r_ecx; u32 b = 0x3000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f3305: jne 0x4f334b */ if (!fZ) goto L_004f334b;
L_004f3307:; BB(0x004f3307);
    /* 004f3307: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f330a: mov eax, dword ptr [edx + 0x428] */ r_eax = R32((u32)(r_edx+0x428u));
    /* 004f3310: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f3314: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f3317: lea edx, [eax + ecx + 0xd90] */ r_edx = (u32)(r_eax+r_ecx+0xd90u);
    /* 004f331e: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f3322: mov cx, word ptr [edx + eax*2 - 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_edx+r_eax*2+0xfffffffcu))) & 0xffffu);
    /* 004f3327: sub cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f332b: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f332f: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f3333: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f3336: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f3339: mov esi, dword ptr [esi + 0x428] */ r_esi = R32((u32)(r_esi+0x428u));
    /* 004f333f: lea eax, [esi + eax + 0xd90] */ r_eax = (u32)(r_esi+r_eax+0xd90u);
    /* 004f3346: mov word ptr [eax + edx*2 - 4], cx */ W16((u32)(r_eax+r_edx*2+0xfffffffcu), (u16)r_ecx);
L_004f334b:; BB(0x004f334b);
    /* 004f334b: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f334f: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f3352: jle 0x4f3407 */ if ((fZ||fS!=fO)) goto L_004f3407;
L_004f3358:; BB(0x004f3358);
    /* 004f3358: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f335b: mov eax, dword ptr [edx + 0x428] */ r_eax = R32((u32)(r_edx+0x428u));
    /* 004f3361: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f3365: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f3368: lea edx, [eax + ecx + 0xd90] */ r_edx = (u32)(r_eax+r_ecx+0xd90u);
    /* 004f336f: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f3373: mov cx, word ptr [edx + eax*2 - 6] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_edx+r_eax*2+0xfffffffau))) & 0xffffu);
    /* 004f3378: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f337c: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f3380: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f3384: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f3387: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f338a: mov esi, dword ptr [esi + 0x428] */ r_esi = R32((u32)(r_esi+0x428u));
    /* 004f3390: lea eax, [esi + eax + 0xd90] */ r_eax = (u32)(r_esi+r_eax+0xd90u);
    /* 004f3397: mov word ptr [eax + edx*2 - 6], cx */ W16((u32)(r_eax+r_edx*2+0xfffffffau), (u16)r_ecx);
    /* 004f339c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f339f: mov edx, dword ptr [ecx + 0x428] */ r_edx = R32((u32)(r_ecx+0x428u));
    /* 004f33a5: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f33a9: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f33ac: lea ecx, [edx + eax + 0xd90] */ r_ecx = (u32)(r_edx+r_eax+0xd90u);
    /* 004f33b3: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f33b7: movzx eax, word ptr [ecx + edx*2 - 6] */ r_eax = (u32)R16((u32)(r_ecx+r_edx*2+0xfffffffau));
    /* 004f33bc: cmp eax, 0x3000 */ {  u32 a = r_eax; u32 b = 0x3000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f33c1: jne 0x4f3407 */ if (!fZ) goto L_004f3407;
L_004f33c3:; BB(0x004f33c3);
    /* 004f33c3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f33c6: mov edx, dword ptr [ecx + 0x428] */ r_edx = R32((u32)(r_ecx+0x428u));
    /* 004f33cc: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f33d0: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f33d3: lea ecx, [edx + eax + 0xd90] */ r_ecx = (u32)(r_edx+r_eax+0xd90u);
    /* 004f33da: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f33de: mov ax, word ptr [ecx + edx*2 - 6] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ecx+r_edx*2+0xfffffffau))) & 0xffffu);
    /* 004f33e3: sub ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f33e7: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f33eb: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f33ef: imul edx, edx, 0xe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xeu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f33f2: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f33f5: mov esi, dword ptr [esi + 0x428] */ r_esi = R32((u32)(r_esi+0x428u));
    /* 004f33fb: lea edx, [esi + edx + 0xd90] */ r_edx = (u32)(r_esi+r_edx+0xd90u);
    /* 004f3402: mov word ptr [edx + ecx*2 - 6], ax */ W16((u32)(r_edx+r_ecx*2+0xfffffffau), (u16)r_eax);
L_004f3407:; BB(0x004f3407);
    /* 004f3407: movsx esi, word ptr [ebp + 0xc] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f340b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004f3411: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x4f3416u); f_0047f950();
    /* 004f3416: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f3418: jge 0x4f34ce */ if ((fS==fO)) goto L_004f34ce;
L_004f341e:; BB(0x004f341e);
    /* 004f341e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f3421: mov ecx, dword ptr [eax + 0x428] */ r_ecx = R32((u32)(r_eax+0x428u));
    /* 004f3427: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f342b: imul edx, edx, 0xe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xeu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f342e: lea eax, [ecx + edx + 0xd90] */ r_eax = (u32)(r_ecx+r_edx+0xd90u);
    /* 004f3435: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f3439: mov dx, word ptr [eax + ecx*2 - 2] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_eax+r_ecx*2+0xfffffffeu))) & 0xffffu);
    /* 004f343e: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f3442: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f3446: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f344a: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f344d: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f3450: mov esi, dword ptr [esi + 0x428] */ r_esi = R32((u32)(r_esi+0x428u));
    /* 004f3456: lea ecx, [esi + ecx + 0xd90] */ r_ecx = (u32)(r_esi+r_ecx+0xd90u);
    /* 004f345d: mov word ptr [ecx + eax*2 - 2], dx */ W16((u32)(r_ecx+r_eax*2+0xfffffffeu), (u16)r_edx);
    /* 004f3462: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f3465: mov eax, dword ptr [edx + 0x428] */ r_eax = R32((u32)(r_edx+0x428u));
    /* 004f346b: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f346f: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f3472: lea edx, [eax + ecx + 0xd90] */ r_edx = (u32)(r_eax+r_ecx+0xd90u);
    /* 004f3479: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f347d: movzx ecx, word ptr [edx + eax*2 - 2] */ r_ecx = (u32)R16((u32)(r_edx+r_eax*2+0xfffffffeu));
    /* 004f3482: cmp ecx, 0x3000 */ {  u32 a = r_ecx; u32 b = 0x3000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f3488: jne 0x4f34ce */ if (!fZ) goto L_004f34ce;
L_004f348a:; BB(0x004f348a);
    /* 004f348a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f348d: mov eax, dword ptr [edx + 0x428] */ r_eax = R32((u32)(r_edx+0x428u));
    /* 004f3493: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f3497: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f349a: lea edx, [eax + ecx + 0xd90] */ r_edx = (u32)(r_eax+r_ecx+0xd90u);
    /* 004f34a1: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f34a5: mov cx, word ptr [edx + eax*2 - 2] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_edx+r_eax*2+0xfffffffeu))) & 0xffffu);
    /* 004f34aa: sub cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f34ae: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f34b2: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f34b6: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f34b9: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f34bc: mov esi, dword ptr [esi + 0x428] */ r_esi = R32((u32)(r_esi+0x428u));
    /* 004f34c2: lea eax, [esi + eax + 0xd90] */ r_eax = (u32)(r_esi+r_eax+0xd90u);
    /* 004f34c9: mov word ptr [eax + edx*2 - 2], cx */ W16((u32)(r_eax+r_edx*2+0xfffffffeu), (u16)r_ecx);
L_004f34ce:; BB(0x004f34ce);
    /* 004f34ce: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004f34cf: mov esp, ebp */ r_esp = r_ebp;
    /* 004f34d1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f34d2: ret 8 */ FN_RET(0x004f3200); r_esp += 12; return;
}

void f_004f34e0(void) /* PokerPlayer::func_004f34e0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f34e0);
    /* 004f34e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f34e1: mov ebp, esp */ r_ebp = r_esp;
    /* 004f34e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f34e4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004f34e5: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004f34e8: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f34ec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004f34ee: jge 0x4f3507 */ if ((fS==fO)) goto L_004f3507;
L_004f34f0:; BB(0x004f34f0);
    /* 004f34f0: push 0x31a2 */ { u32 v = 0x31a2u; r_esp -= 4; W32(r_esp, v); }
    /* 004f34f5: push 0x6bf384 */ { u32 v = 0x6bf384u; r_esp -= 4; W32(r_esp, v); }
    /* 004f34fa: push 0x6bf888 */ { u32 v = 0x6bf888u; r_esp -= 4; W32(r_esp, v); }
    /* 004f34ff: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f3504u); f_005e9f20();
    /* 004f3504: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f3507:; BB(0x004f3507);
    /* 004f3507: movsx esi, word ptr [ebp + 8] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f350b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004f3511: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x4f3516u); f_0047f950();
    /* 004f3516: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f3518: jl 0x4f3531 */ if ((fS!=fO)) goto L_004f3531;
L_004f351a:; BB(0x004f351a);
    /* 004f351a: push 0x31a3 */ { u32 v = 0x31a3u; r_esp -= 4; W32(r_esp, v); }
    /* 004f351f: push 0x6bf384 */ { u32 v = 0x6bf384u; r_esp -= 4; W32(r_esp, v); }
    /* 004f3524: push 0x6bf858 */ { u32 v = 0x6bf858u; r_esp -= 4; W32(r_esp, v); }
    /* 004f3529: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f352eu); f_005e9f20();
    /* 004f352e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f3531:; BB(0x004f3531);
    /* 004f3531: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f3535: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f3538: jge 0x4f3551 */ if ((fS==fO)) goto L_004f3551;
L_004f353a:; BB(0x004f353a);
    /* 004f353a: push 0x31a4 */ { u32 v = 0x31a4u; r_esp -= 4; W32(r_esp, v); }
    /* 004f353f: push 0x6bf384 */ { u32 v = 0x6bf384u; r_esp -= 4; W32(r_esp, v); }
    /* 004f3544: push 0x6bf778 */ { u32 v = 0x6bf778u; r_esp -= 4; W32(r_esp, v); }
    /* 004f3549: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f354eu); f_005e9f20();
    /* 004f354e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f3551:; BB(0x004f3551);
    /* 004f3551: movsx esi, word ptr [ebp + 0xc] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f3555: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004f355b: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x4f3560u); f_0047f950();
    /* 004f3560: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f3562: jle 0x4f357b */ if ((fZ||fS!=fO)) goto L_004f357b;
L_004f3564:; BB(0x004f3564);
    /* 004f3564: push 0x31a5 */ { u32 v = 0x31a5u; r_esp -= 4; W32(r_esp, v); }
    /* 004f3569: push 0x6bf384 */ { u32 v = 0x6bf384u; r_esp -= 4; W32(r_esp, v); }
    /* 004f356e: push 0x6bf740 */ { u32 v = 0x6bf740u; r_esp -= 4; W32(r_esp, v); }
    /* 004f3573: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f3578u); f_005e9f20();
    /* 004f3578: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f357b:; BB(0x004f357b);
    /* 004f357b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f357e: mov ecx, dword ptr [eax + 0x428] */ r_ecx = R32((u32)(r_eax+0x428u));
    /* 004f3584: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f3588: imul edx, edx, 0xe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xeu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f358b: lea eax, [ecx + edx + 0xe00] */ r_eax = (u32)(r_ecx+r_edx+0xe00u);
    /* 004f3592: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f3596: mov dx, word ptr [eax + ecx*2 - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_eax+r_ecx*2+0xfffffffcu))) & 0xffffu);
    /* 004f359b: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f359f: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f35a3: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f35a7: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f35aa: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f35ad: mov esi, dword ptr [esi + 0x428] */ r_esi = R32((u32)(r_esi+0x428u));
    /* 004f35b3: lea ecx, [esi + ecx + 0xe00] */ r_ecx = (u32)(r_esi+r_ecx+0xe00u);
    /* 004f35ba: mov word ptr [ecx + eax*2 - 4], dx */ W16((u32)(r_ecx+r_eax*2+0xfffffffcu), (u16)r_edx);
    /* 004f35bf: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f35c2: mov eax, dword ptr [edx + 0x428] */ r_eax = R32((u32)(r_edx+0x428u));
    /* 004f35c8: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f35cc: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f35cf: lea edx, [eax + ecx + 0xe00] */ r_edx = (u32)(r_eax+r_ecx+0xe00u);
    /* 004f35d6: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f35da: movzx ecx, word ptr [edx + eax*2 - 4] */ r_ecx = (u32)R16((u32)(r_edx+r_eax*2+0xfffffffcu));
    /* 004f35df: cmp ecx, 0x3000 */ {  u32 a = r_ecx; u32 b = 0x3000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f35e5: jne 0x4f362b */ if (!fZ) goto L_004f362b;
L_004f35e7:; BB(0x004f35e7);
    /* 004f35e7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f35ea: mov eax, dword ptr [edx + 0x428] */ r_eax = R32((u32)(r_edx+0x428u));
    /* 004f35f0: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f35f4: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f35f7: lea edx, [eax + ecx + 0xe00] */ r_edx = (u32)(r_eax+r_ecx+0xe00u);
    /* 004f35fe: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f3602: mov cx, word ptr [edx + eax*2 - 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_edx+r_eax*2+0xfffffffcu))) & 0xffffu);
    /* 004f3607: sub cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f360b: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f360f: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f3613: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f3616: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f3619: mov esi, dword ptr [esi + 0x428] */ r_esi = R32((u32)(r_esi+0x428u));
    /* 004f361f: lea eax, [esi + eax + 0xe00] */ r_eax = (u32)(r_esi+r_eax+0xe00u);
    /* 004f3626: mov word ptr [eax + edx*2 - 4], cx */ W16((u32)(r_eax+r_edx*2+0xfffffffcu), (u16)r_ecx);
L_004f362b:; BB(0x004f362b);
    /* 004f362b: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f362f: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f3632: jle 0x4f36e7 */ if ((fZ||fS!=fO)) goto L_004f36e7;
L_004f3638:; BB(0x004f3638);
    /* 004f3638: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f363b: mov eax, dword ptr [edx + 0x428] */ r_eax = R32((u32)(r_edx+0x428u));
    /* 004f3641: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f3645: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f3648: lea edx, [eax + ecx + 0xe00] */ r_edx = (u32)(r_eax+r_ecx+0xe00u);
    /* 004f364f: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f3653: mov cx, word ptr [edx + eax*2 - 6] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_edx+r_eax*2+0xfffffffau))) & 0xffffu);
    /* 004f3658: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f365c: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f3660: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f3664: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f3667: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f366a: mov esi, dword ptr [esi + 0x428] */ r_esi = R32((u32)(r_esi+0x428u));
    /* 004f3670: lea eax, [esi + eax + 0xe00] */ r_eax = (u32)(r_esi+r_eax+0xe00u);
    /* 004f3677: mov word ptr [eax + edx*2 - 6], cx */ W16((u32)(r_eax+r_edx*2+0xfffffffau), (u16)r_ecx);
    /* 004f367c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f367f: mov edx, dword ptr [ecx + 0x428] */ r_edx = R32((u32)(r_ecx+0x428u));
    /* 004f3685: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f3689: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f368c: lea ecx, [edx + eax + 0xe00] */ r_ecx = (u32)(r_edx+r_eax+0xe00u);
    /* 004f3693: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f3697: movzx eax, word ptr [ecx + edx*2 - 6] */ r_eax = (u32)R16((u32)(r_ecx+r_edx*2+0xfffffffau));
    /* 004f369c: cmp eax, 0x3000 */ {  u32 a = r_eax; u32 b = 0x3000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f36a1: jne 0x4f36e7 */ if (!fZ) goto L_004f36e7;
L_004f36a3:; BB(0x004f36a3);
    /* 004f36a3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f36a6: mov edx, dword ptr [ecx + 0x428] */ r_edx = R32((u32)(r_ecx+0x428u));
    /* 004f36ac: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f36b0: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f36b3: lea ecx, [edx + eax + 0xe00] */ r_ecx = (u32)(r_edx+r_eax+0xe00u);
    /* 004f36ba: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f36be: mov ax, word ptr [ecx + edx*2 - 6] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ecx+r_edx*2+0xfffffffau))) & 0xffffu);
    /* 004f36c3: sub ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f36c7: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f36cb: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f36cf: imul edx, edx, 0xe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xeu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f36d2: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f36d5: mov esi, dword ptr [esi + 0x428] */ r_esi = R32((u32)(r_esi+0x428u));
    /* 004f36db: lea edx, [esi + edx + 0xe00] */ r_edx = (u32)(r_esi+r_edx+0xe00u);
    /* 004f36e2: mov word ptr [edx + ecx*2 - 6], ax */ W16((u32)(r_edx+r_ecx*2+0xfffffffau), (u16)r_eax);
L_004f36e7:; BB(0x004f36e7);
    /* 004f36e7: movsx esi, word ptr [ebp + 0xc] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f36eb: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004f36f1: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x4f36f6u); f_0047f950();
    /* 004f36f6: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f36f8: jge 0x4f37ae */ if ((fS==fO)) goto L_004f37ae;
L_004f36fe:; BB(0x004f36fe);
    /* 004f36fe: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f3701: mov ecx, dword ptr [eax + 0x428] */ r_ecx = R32((u32)(r_eax+0x428u));
    /* 004f3707: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f370b: imul edx, edx, 0xe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xeu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f370e: lea eax, [ecx + edx + 0xe00] */ r_eax = (u32)(r_ecx+r_edx+0xe00u);
    /* 004f3715: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f3719: mov dx, word ptr [eax + ecx*2 - 2] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_eax+r_ecx*2+0xfffffffeu))) & 0xffffu);
    /* 004f371e: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f3722: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f3726: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f372a: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f372d: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f3730: mov esi, dword ptr [esi + 0x428] */ r_esi = R32((u32)(r_esi+0x428u));
    /* 004f3736: lea ecx, [esi + ecx + 0xe00] */ r_ecx = (u32)(r_esi+r_ecx+0xe00u);
    /* 004f373d: mov word ptr [ecx + eax*2 - 2], dx */ W16((u32)(r_ecx+r_eax*2+0xfffffffeu), (u16)r_edx);
    /* 004f3742: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f3745: mov eax, dword ptr [edx + 0x428] */ r_eax = R32((u32)(r_edx+0x428u));
    /* 004f374b: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f374f: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f3752: lea edx, [eax + ecx + 0xe00] */ r_edx = (u32)(r_eax+r_ecx+0xe00u);
    /* 004f3759: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f375d: movzx ecx, word ptr [edx + eax*2 - 2] */ r_ecx = (u32)R16((u32)(r_edx+r_eax*2+0xfffffffeu));
    /* 004f3762: cmp ecx, 0x3000 */ {  u32 a = r_ecx; u32 b = 0x3000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f3768: jne 0x4f37ae */ if (!fZ) goto L_004f37ae;
L_004f376a:; BB(0x004f376a);
    /* 004f376a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f376d: mov eax, dword ptr [edx + 0x428] */ r_eax = R32((u32)(r_edx+0x428u));
    /* 004f3773: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f3777: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f377a: lea edx, [eax + ecx + 0xe00] */ r_edx = (u32)(r_eax+r_ecx+0xe00u);
    /* 004f3781: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f3785: mov cx, word ptr [edx + eax*2 - 2] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_edx+r_eax*2+0xfffffffeu))) & 0xffffu);
    /* 004f378a: sub cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f378e: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f3792: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f3796: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f3799: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f379c: mov esi, dword ptr [esi + 0x428] */ r_esi = R32((u32)(r_esi+0x428u));
    /* 004f37a2: lea eax, [esi + eax + 0xe00] */ r_eax = (u32)(r_esi+r_eax+0xe00u);
    /* 004f37a9: mov word ptr [eax + edx*2 - 2], cx */ W16((u32)(r_eax+r_edx*2+0xfffffffeu), (u16)r_ecx);
L_004f37ae:; BB(0x004f37ae);
    /* 004f37ae: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004f37af: mov esp, ebp */ r_esp = r_ebp;
    /* 004f37b1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f37b2: ret 8 */ FN_RET(0x004f34e0); r_esp += 12; return;
}

void f_004f37c0(void) /* PokerPlayer::func_004f37c0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f37c0);
    /* 004f37c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f37c1: mov ebp, esp */ r_ebp = r_esp;
    /* 004f37c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f37c4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004f37c5: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004f37c8: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f37cc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004f37ce: jge 0x4f37e7 */ if ((fS==fO)) goto L_004f37e7;
L_004f37d0:; BB(0x004f37d0);
    /* 004f37d0: push 0x31c1 */ { u32 v = 0x31c1u; r_esp -= 4; W32(r_esp, v); }
    /* 004f37d5: push 0x6bf384 */ { u32 v = 0x6bf384u; r_esp -= 4; W32(r_esp, v); }
    /* 004f37da: push 0x6bf888 */ { u32 v = 0x6bf888u; r_esp -= 4; W32(r_esp, v); }
    /* 004f37df: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f37e4u); f_005e9f20();
    /* 004f37e4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f37e7:; BB(0x004f37e7);
    /* 004f37e7: movsx esi, word ptr [ebp + 8] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f37eb: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004f37f1: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x4f37f6u); f_0047f950();
    /* 004f37f6: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f37f8: jl 0x4f3811 */ if ((fS!=fO)) goto L_004f3811;
L_004f37fa:; BB(0x004f37fa);
    /* 004f37fa: push 0x31c2 */ { u32 v = 0x31c2u; r_esp -= 4; W32(r_esp, v); }
    /* 004f37ff: push 0x6bf384 */ { u32 v = 0x6bf384u; r_esp -= 4; W32(r_esp, v); }
    /* 004f3804: push 0x6bf858 */ { u32 v = 0x6bf858u; r_esp -= 4; W32(r_esp, v); }
    /* 004f3809: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f380eu); f_005e9f20();
    /* 004f380e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f3811:; BB(0x004f3811);
    /* 004f3811: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f3815: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f3818: jge 0x4f3831 */ if ((fS==fO)) goto L_004f3831;
L_004f381a:; BB(0x004f381a);
    /* 004f381a: push 0x31c3 */ { u32 v = 0x31c3u; r_esp -= 4; W32(r_esp, v); }
    /* 004f381f: push 0x6bf384 */ { u32 v = 0x6bf384u; r_esp -= 4; W32(r_esp, v); }
    /* 004f3824: push 0x6bf778 */ { u32 v = 0x6bf778u; r_esp -= 4; W32(r_esp, v); }
    /* 004f3829: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f382eu); f_005e9f20();
    /* 004f382e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f3831:; BB(0x004f3831);
    /* 004f3831: movsx esi, word ptr [ebp + 0xc] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f3835: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004f383b: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x4f3840u); f_0047f950();
    /* 004f3840: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f3842: jle 0x4f385b */ if ((fZ||fS!=fO)) goto L_004f385b;
L_004f3844:; BB(0x004f3844);
    /* 004f3844: push 0x31c4 */ { u32 v = 0x31c4u; r_esp -= 4; W32(r_esp, v); }
    /* 004f3849: push 0x6bf384 */ { u32 v = 0x6bf384u; r_esp -= 4; W32(r_esp, v); }
    /* 004f384e: push 0x6bf740 */ { u32 v = 0x6bf740u; r_esp -= 4; W32(r_esp, v); }
    /* 004f3853: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f3858u); f_005e9f20();
    /* 004f3858: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f385b:; BB(0x004f385b);
    /* 004f385b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f385e: mov ecx, dword ptr [eax + 0x428] */ r_ecx = R32((u32)(r_eax+0x428u));
    /* 004f3864: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f3868: imul edx, edx, 7 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x7u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f386b: lea eax, [ecx + edx + 0xe70] */ r_eax = (u32)(r_ecx+r_edx+0xe70u);
    /* 004f3872: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f3876: mov dl, byte ptr [eax + ecx - 2] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+r_ecx+0xfffffffeu))) & 0xffu);
    /* 004f387a: add dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004f387d: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f3881: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f3885: imul ecx, ecx, 7 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x7u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f3888: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f388b: mov esi, dword ptr [esi + 0x428] */ r_esi = R32((u32)(r_esi+0x428u));
    /* 004f3891: lea ecx, [esi + ecx + 0xe70] */ r_ecx = (u32)(r_esi+r_ecx+0xe70u);
    /* 004f3898: mov byte ptr [ecx + eax - 2], dl */ W8((u32)(r_ecx+r_eax+0xfffffffeu), (u8)r_edx);
    /* 004f389c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f389f: mov eax, dword ptr [edx + 0x428] */ r_eax = R32((u32)(r_edx+0x428u));
    /* 004f38a5: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f38a9: imul ecx, ecx, 7 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x7u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f38ac: lea edx, [eax + ecx + 0xe70] */ r_edx = (u32)(r_eax+r_ecx+0xe70u);
    /* 004f38b3: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f38b7: movzx ecx, byte ptr [edx + eax - 2] */ r_ecx = (u32)R8((u32)(r_edx+r_eax+0xfffffffeu));
    /* 004f38bc: cmp ecx, 0x50 */ {  u32 a = r_ecx; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f38bf: jne 0x4f398a */ if (!fZ) goto L_004f398a;
L_004f38c5:; BB(0x004f38c5);
    /* 004f38c5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f38c8: mov eax, dword ptr [edx + 0x428] */ r_eax = R32((u32)(r_edx+0x428u));
    /* 004f38ce: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f38d2: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f38d5: lea edx, [eax + ecx + 0xd90] */ r_edx = (u32)(r_eax+r_ecx+0xd90u);
    /* 004f38dc: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f38e0: movzx ecx, word ptr [edx + eax*2 - 4] */ r_ecx = (u32)R16((u32)(r_edx+r_eax*2+0xfffffffcu));
    /* 004f38e5: shr ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 004f38e7: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f38eb: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f38ef: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f38f2: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f38f5: mov esi, dword ptr [esi + 0x428] */ r_esi = R32((u32)(r_esi+0x428u));
    /* 004f38fb: lea eax, [esi + eax + 0xd90] */ r_eax = (u32)(r_esi+r_eax+0xd90u);
    /* 004f3902: mov word ptr [eax + edx*2 - 4], cx */ W16((u32)(r_eax+r_edx*2+0xfffffffcu), (u16)r_ecx);
    /* 004f3907: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f390a: mov edx, dword ptr [ecx + 0x428] */ r_edx = R32((u32)(r_ecx+0x428u));
    /* 004f3910: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f3914: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f3917: lea ecx, [edx + eax + 0xe00] */ r_ecx = (u32)(r_edx+r_eax+0xe00u);
    /* 004f391e: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f3922: movzx eax, word ptr [ecx + edx*2 - 4] */ r_eax = (u32)R16((u32)(r_ecx+r_edx*2+0xfffffffcu));
    /* 004f3927: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 004f3929: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f392d: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f3931: imul edx, edx, 0xe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xeu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f3934: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f3937: mov esi, dword ptr [esi + 0x428] */ r_esi = R32((u32)(r_esi+0x428u));
    /* 004f393d: lea edx, [esi + edx + 0xe00] */ r_edx = (u32)(r_esi+r_edx+0xe00u);
    /* 004f3944: mov word ptr [edx + ecx*2 - 4], ax */ W16((u32)(r_edx+r_ecx*2+0xfffffffcu), (u16)r_eax);
    /* 004f3949: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f394c: mov ecx, dword ptr [eax + 0x428] */ r_ecx = R32((u32)(r_eax+0x428u));
    /* 004f3952: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f3956: imul edx, edx, 7 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x7u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f3959: lea eax, [ecx + edx + 0xe70] */ r_eax = (u32)(r_ecx+r_edx+0xe70u);
    /* 004f3960: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f3964: movzx edx, byte ptr [eax + ecx - 2] */ r_edx = (u32)R8((u32)(r_eax+r_ecx+0xfffffffeu));
    /* 004f3969: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 004f396b: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f396f: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f3973: imul ecx, ecx, 7 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x7u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f3976: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f3979: mov esi, dword ptr [esi + 0x428] */ r_esi = R32((u32)(r_esi+0x428u));
    /* 004f397f: lea ecx, [esi + ecx + 0xe70] */ r_ecx = (u32)(r_esi+r_ecx+0xe70u);
    /* 004f3986: mov byte ptr [ecx + eax - 2], dl */ W8((u32)(r_ecx+r_eax+0xfffffffeu), (u8)r_edx);
L_004f398a:; BB(0x004f398a);
    /* 004f398a: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f398e: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f3991: jle 0x4f3ac6 */ if ((fZ||fS!=fO)) goto L_004f3ac6;
L_004f3997:; BB(0x004f3997);
    /* 004f3997: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f399a: mov ecx, dword ptr [eax + 0x428] */ r_ecx = R32((u32)(r_eax+0x428u));
    /* 004f39a0: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f39a4: imul edx, edx, 7 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x7u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f39a7: lea eax, [ecx + edx + 0xe70] */ r_eax = (u32)(r_ecx+r_edx+0xe70u);
    /* 004f39ae: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f39b2: mov dl, byte ptr [eax + ecx - 3] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+r_ecx+0xfffffffdu))) & 0xffu);
    /* 004f39b6: add dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004f39b9: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f39bd: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f39c1: imul ecx, ecx, 7 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x7u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f39c4: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f39c7: mov esi, dword ptr [esi + 0x428] */ r_esi = R32((u32)(r_esi+0x428u));
    /* 004f39cd: lea ecx, [esi + ecx + 0xe70] */ r_ecx = (u32)(r_esi+r_ecx+0xe70u);
    /* 004f39d4: mov byte ptr [ecx + eax - 3], dl */ W8((u32)(r_ecx+r_eax+0xfffffffdu), (u8)r_edx);
    /* 004f39d8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f39db: mov eax, dword ptr [edx + 0x428] */ r_eax = R32((u32)(r_edx+0x428u));
    /* 004f39e1: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f39e5: imul ecx, ecx, 7 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x7u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f39e8: lea edx, [eax + ecx + 0xe70] */ r_edx = (u32)(r_eax+r_ecx+0xe70u);
    /* 004f39ef: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f39f3: movzx ecx, byte ptr [edx + eax - 3] */ r_ecx = (u32)R8((u32)(r_edx+r_eax+0xfffffffdu));
    /* 004f39f8: cmp ecx, 0x50 */ {  u32 a = r_ecx; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f39fb: jne 0x4f3ac6 */ if (!fZ) goto L_004f3ac6;
L_004f3a01:; BB(0x004f3a01);
    /* 004f3a01: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f3a04: mov eax, dword ptr [edx + 0x428] */ r_eax = R32((u32)(r_edx+0x428u));
    /* 004f3a0a: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f3a0e: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f3a11: lea edx, [eax + ecx + 0xd90] */ r_edx = (u32)(r_eax+r_ecx+0xd90u);
    /* 004f3a18: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f3a1c: movzx ecx, word ptr [edx + eax*2 - 6] */ r_ecx = (u32)R16((u32)(r_edx+r_eax*2+0xfffffffau));
    /* 004f3a21: shr ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 004f3a23: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f3a27: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f3a2b: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f3a2e: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f3a31: mov esi, dword ptr [esi + 0x428] */ r_esi = R32((u32)(r_esi+0x428u));
    /* 004f3a37: lea eax, [esi + eax + 0xd90] */ r_eax = (u32)(r_esi+r_eax+0xd90u);
    /* 004f3a3e: mov word ptr [eax + edx*2 - 6], cx */ W16((u32)(r_eax+r_edx*2+0xfffffffau), (u16)r_ecx);
    /* 004f3a43: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f3a46: mov edx, dword ptr [ecx + 0x428] */ r_edx = R32((u32)(r_ecx+0x428u));
    /* 004f3a4c: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f3a50: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f3a53: lea ecx, [edx + eax + 0xe00] */ r_ecx = (u32)(r_edx+r_eax+0xe00u);
    /* 004f3a5a: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f3a5e: movzx eax, word ptr [ecx + edx*2 - 6] */ r_eax = (u32)R16((u32)(r_ecx+r_edx*2+0xfffffffau));
    /* 004f3a63: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 004f3a65: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f3a69: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f3a6d: imul edx, edx, 0xe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xeu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f3a70: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f3a73: mov esi, dword ptr [esi + 0x428] */ r_esi = R32((u32)(r_esi+0x428u));
    /* 004f3a79: lea edx, [esi + edx + 0xe00] */ r_edx = (u32)(r_esi+r_edx+0xe00u);
    /* 004f3a80: mov word ptr [edx + ecx*2 - 6], ax */ W16((u32)(r_edx+r_ecx*2+0xfffffffau), (u16)r_eax);
    /* 004f3a85: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f3a88: mov ecx, dword ptr [eax + 0x428] */ r_ecx = R32((u32)(r_eax+0x428u));
    /* 004f3a8e: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f3a92: imul edx, edx, 7 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x7u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f3a95: lea eax, [ecx + edx + 0xe70] */ r_eax = (u32)(r_ecx+r_edx+0xe70u);
    /* 004f3a9c: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f3aa0: movzx edx, byte ptr [eax + ecx - 3] */ r_edx = (u32)R8((u32)(r_eax+r_ecx+0xfffffffdu));
    /* 004f3aa5: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 004f3aa7: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f3aab: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f3aaf: imul ecx, ecx, 7 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x7u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f3ab2: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f3ab5: mov esi, dword ptr [esi + 0x428] */ r_esi = R32((u32)(r_esi+0x428u));
    /* 004f3abb: lea ecx, [esi + ecx + 0xe70] */ r_ecx = (u32)(r_esi+r_ecx+0xe70u);
    /* 004f3ac2: mov byte ptr [ecx + eax - 3], dl */ W8((u32)(r_ecx+r_eax+0xfffffffdu), (u8)r_edx);
L_004f3ac6:; BB(0x004f3ac6);
    /* 004f3ac6: movsx esi, word ptr [ebp + 0xc] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f3aca: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004f3ad0: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x4f3ad5u); f_0047f950();
    /* 004f3ad5: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f3ad7: jge 0x4f3c0c */ if ((fS==fO)) goto L_004f3c0c;
L_004f3add:; BB(0x004f3add);
    /* 004f3add: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f3ae0: mov eax, dword ptr [edx + 0x428] */ r_eax = R32((u32)(r_edx+0x428u));
    /* 004f3ae6: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f3aea: imul ecx, ecx, 7 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x7u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f3aed: lea edx, [eax + ecx + 0xe70] */ r_edx = (u32)(r_eax+r_ecx+0xe70u);
    /* 004f3af4: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f3af8: mov cl, byte ptr [edx + eax - 1] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_edx+r_eax+0xffffffffu))) & 0xffu);
    /* 004f3afc: add cl, 1 */ {  u32 a = (u8)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004f3aff: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f3b03: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f3b07: imul eax, eax, 7 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x7u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f3b0a: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f3b0d: mov esi, dword ptr [esi + 0x428] */ r_esi = R32((u32)(r_esi+0x428u));
    /* 004f3b13: lea eax, [esi + eax + 0xe70] */ r_eax = (u32)(r_esi+r_eax+0xe70u);
    /* 004f3b1a: mov byte ptr [eax + edx - 1], cl */ W8((u32)(r_eax+r_edx+0xffffffffu), (u8)r_ecx);
    /* 004f3b1e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f3b21: mov edx, dword ptr [ecx + 0x428] */ r_edx = R32((u32)(r_ecx+0x428u));
    /* 004f3b27: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f3b2b: imul eax, eax, 7 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x7u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f3b2e: lea ecx, [edx + eax + 0xe70] */ r_ecx = (u32)(r_edx+r_eax+0xe70u);
    /* 004f3b35: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f3b39: movzx eax, byte ptr [ecx + edx - 1] */ r_eax = (u32)R8((u32)(r_ecx+r_edx+0xffffffffu));
    /* 004f3b3e: cmp eax, 0x50 */ {  u32 a = r_eax; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f3b41: jne 0x4f3c0c */ if (!fZ) goto L_004f3c0c;
L_004f3b47:; BB(0x004f3b47);
    /* 004f3b47: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f3b4a: mov edx, dword ptr [ecx + 0x428] */ r_edx = R32((u32)(r_ecx+0x428u));
    /* 004f3b50: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f3b54: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f3b57: lea ecx, [edx + eax + 0xd90] */ r_ecx = (u32)(r_edx+r_eax+0xd90u);
    /* 004f3b5e: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f3b62: movzx eax, word ptr [ecx + edx*2 - 2] */ r_eax = (u32)R16((u32)(r_ecx+r_edx*2+0xfffffffeu));
    /* 004f3b67: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 004f3b69: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f3b6d: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f3b71: imul edx, edx, 0xe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xeu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f3b74: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f3b77: mov esi, dword ptr [esi + 0x428] */ r_esi = R32((u32)(r_esi+0x428u));
    /* 004f3b7d: lea edx, [esi + edx + 0xd90] */ r_edx = (u32)(r_esi+r_edx+0xd90u);
    /* 004f3b84: mov word ptr [edx + ecx*2 - 2], ax */ W16((u32)(r_edx+r_ecx*2+0xfffffffeu), (u16)r_eax);
    /* 004f3b89: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f3b8c: mov ecx, dword ptr [eax + 0x428] */ r_ecx = R32((u32)(r_eax+0x428u));
    /* 004f3b92: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f3b96: imul edx, edx, 0xe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xeu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f3b99: lea eax, [ecx + edx + 0xe00] */ r_eax = (u32)(r_ecx+r_edx+0xe00u);
    /* 004f3ba0: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f3ba4: movzx edx, word ptr [eax + ecx*2 - 2] */ r_edx = (u32)R16((u32)(r_eax+r_ecx*2+0xfffffffeu));
    /* 004f3ba9: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 004f3bab: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f3baf: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f3bb3: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f3bb6: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f3bb9: mov esi, dword ptr [esi + 0x428] */ r_esi = R32((u32)(r_esi+0x428u));
    /* 004f3bbf: lea ecx, [esi + ecx + 0xe00] */ r_ecx = (u32)(r_esi+r_ecx+0xe00u);
    /* 004f3bc6: mov word ptr [ecx + eax*2 - 2], dx */ W16((u32)(r_ecx+r_eax*2+0xfffffffeu), (u16)r_edx);
    /* 004f3bcb: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f3bce: mov eax, dword ptr [edx + 0x428] */ r_eax = R32((u32)(r_edx+0x428u));
    /* 004f3bd4: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f3bd8: imul ecx, ecx, 7 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x7u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f3bdb: lea edx, [eax + ecx + 0xe70] */ r_edx = (u32)(r_eax+r_ecx+0xe70u);
    /* 004f3be2: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f3be6: movzx ecx, byte ptr [edx + eax - 1] */ r_ecx = (u32)R8((u32)(r_edx+r_eax+0xffffffffu));
    /* 004f3beb: shr ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 004f3bed: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f3bf1: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f3bf5: imul eax, eax, 7 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x7u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f3bf8: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f3bfb: mov esi, dword ptr [esi + 0x428] */ r_esi = R32((u32)(r_esi+0x428u));
    /* 004f3c01: lea eax, [esi + eax + 0xe70] */ r_eax = (u32)(r_esi+r_eax+0xe70u);
    /* 004f3c08: mov byte ptr [eax + edx - 1], cl */ W8((u32)(r_eax+r_edx+0xffffffffu), (u8)r_ecx);
L_004f3c0c:; BB(0x004f3c0c);
    /* 004f3c0c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004f3c0d: mov esp, ebp */ r_esp = r_ebp;
    /* 004f3c0f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f3c10: ret 8 */ FN_RET(0x004f37c0); r_esp += 12; return;
}

