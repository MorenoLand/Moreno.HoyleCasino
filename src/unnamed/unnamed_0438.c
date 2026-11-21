#include "protos.h"

void f_004380d0(void) /* sub_4380D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004380d0);
    /* 004380d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004380d1: mov ebp, esp */ r_ebp = r_esp;
    /* 004380d3: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004380d6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004380d7: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 004380da: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004380e1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004380e3: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 004380e6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004380e9: mov edx, dword ptr [ecx + eax + 0xacc] */ r_edx = R32((u32)(r_ecx+r_eax+0xaccu));
    /* 004380f0: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 004380f3: mov eax, 1 */ r_eax = 0x1u;
    /* 004380f8: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 004380fb: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004380fe: mov edx, dword ptr [ecx + eax + 0xacc] */ r_edx = R32((u32)(r_ecx+r_eax+0xaccu));
    /* 00438105: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00438108: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043810b: add eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043810e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00438110: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438113: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00438116: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 00438119: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043811b: jne 0x438121 */ if (!fZ) goto L_00438121;
L_0043811d:; BB(0x0043811d);
    /* 0043811d: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0043811f: jmp 0x438178 */ goto L_00438178;
L_00438121:; BB(0x00438121);
    /* 00438121: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00438123: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00438126: call 0x434a90 */ r_esp -= 4; W32(r_esp, 0x43812bu); f_00434a90();
    /* 0043812b: mov esi, eax */ r_esi = r_eax;
    /* 0043812d: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0043812f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00438132: call 0x434a90 */ r_esp -= 4; W32(r_esp, 0x438137u); f_00434a90();
    /* 00438137: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00438139: push 0x21 */ { u32 v = 0x21u; r_esp -= 4; W32(r_esp, v); }
    /* 0043813b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043813e: call 0x434a90 */ r_esp -= 4; W32(r_esp, 0x438143u); f_00434a90();
    /* 00438143: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00438145: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 00438147: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043814a: call 0x434a90 */ r_esp -= 4; W32(r_esp, 0x43814fu); f_00434a90();
    /* 0043814f: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00438151: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 00438153: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00438156: call 0x434a90 */ r_esp -= 4; W32(r_esp, 0x43815bu); f_00434a90();
    /* 0043815b: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0043815d: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 0043815f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00438162: call 0x434a90 */ r_esp -= 4; W32(r_esp, 0x438167u); f_00434a90();
    /* 00438167: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00438169: mov dword ptr [ebp - 4], esi */ W32((u32)(r_ebp+0xfffffffcu), r_esi);
    /* 0043816c: cmp dword ptr [ebp - 4], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438170: jne 0x438176 */ if (!fZ) goto L_00438176;
L_00438172:; BB(0x00438172);
    /* 00438172: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00438174: jmp 0x438178 */ goto L_00438178;
L_00438176:; BB(0x00438176);
    /* 00438176: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_00438178:; BB(0x00438178);
    /* 00438178: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00438179: mov esp, ebp */ r_esp = r_ebp;
    /* 0043817b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043817c: ret  */ FN_RET(0x004380d0); r_esp += 4; return;
}

void f_00438180(void) /* sub_438180 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00438180);
    /* 00438180: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00438181: mov ebp, esp */ r_ebp = r_esp;
    /* 00438183: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00438186: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00438187: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0043818a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00438191: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00438193: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00438196: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00438199: mov edx, dword ptr [ecx + eax + 0xacc] */ r_edx = R32((u32)(r_ecx+r_eax+0xaccu));
    /* 004381a0: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 004381a3: mov eax, 1 */ r_eax = 0x1u;
    /* 004381a8: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 004381ab: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004381ae: mov edx, dword ptr [ecx + eax + 0xacc] */ r_edx = R32((u32)(r_ecx+r_eax+0xaccu));
    /* 004381b5: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 004381b8: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004381bb: add eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004381be: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004381c0: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004381c3: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 004381c6: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 004381c9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004381cb: jne 0x4381d1 */ if (!fZ) goto L_004381d1;
L_004381cd:; BB(0x004381cd);
    /* 004381cd: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004381cf: jmp 0x438228 */ goto L_00438228;
L_004381d1:; BB(0x004381d1);
    /* 004381d1: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 004381d3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004381d6: call 0x434a90 */ r_esp -= 4; W32(r_esp, 0x4381dbu); f_00434a90();
    /* 004381db: mov esi, eax */ r_esi = r_eax;
    /* 004381dd: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 004381df: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004381e2: call 0x434a90 */ r_esp -= 4; W32(r_esp, 0x4381e7u); f_00434a90();
    /* 004381e7: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004381e9: push 0x21 */ { u32 v = 0x21u; r_esp -= 4; W32(r_esp, v); }
    /* 004381eb: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004381ee: call 0x434a90 */ r_esp -= 4; W32(r_esp, 0x4381f3u); f_00434a90();
    /* 004381f3: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004381f5: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 004381f7: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004381fa: call 0x434a90 */ r_esp -= 4; W32(r_esp, 0x4381ffu); f_00434a90();
    /* 004381ff: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00438201: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 00438203: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00438206: call 0x434a90 */ r_esp -= 4; W32(r_esp, 0x43820bu); f_00434a90();
    /* 0043820b: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0043820d: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 0043820f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00438212: call 0x434a90 */ r_esp -= 4; W32(r_esp, 0x438217u); f_00434a90();
    /* 00438217: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00438219: mov dword ptr [ebp - 4], esi */ W32((u32)(r_ebp+0xfffffffcu), r_esi);
    /* 0043821c: cmp dword ptr [ebp - 4], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00438220: jle 0x438226 */ if ((fZ||fS!=fO)) goto L_00438226;
L_00438222:; BB(0x00438222);
    /* 00438222: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00438224: jmp 0x438228 */ goto L_00438228;
L_00438226:; BB(0x00438226);
    /* 00438226: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_00438228:; BB(0x00438228);
    /* 00438228: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00438229: mov esp, ebp */ r_esp = r_ebp;
    /* 0043822b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043822c: ret  */ FN_RET(0x00438180); r_esp += 4; return;
}

void f_00438230(void) /* sub_438230 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00438230);
    /* 00438230: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00438231: mov ebp, esp */ r_ebp = r_esp;
    /* 00438233: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00438236: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00438239: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043823b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043823e: call 0x436a00 */ r_esp -= 4; W32(r_esp, 0x438243u); f_00436a00();
    /* 00438243: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00438246: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438248: je 0x438271 */ if (fZ) goto L_00438271;
L_0043824a:; BB(0x0043824a);
    /* 0043824a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043824d: call 0x437150 */ r_esp -= 4; W32(r_esp, 0x438252u); f_00437150();
    /* 00438252: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00438255: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438257: jne 0x438268 */ if (!fZ) goto L_00438268;
L_00438259:; BB(0x00438259);
    /* 00438259: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043825c: call 0x437200 */ r_esp -= 4; W32(r_esp, 0x438261u); f_00437200();
    /* 00438261: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00438264: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438266: je 0x438271 */ if (fZ) goto L_00438271;
L_00438268:; BB(0x00438268);
    /* 00438268: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 0043826f: jmp 0x438278 */ goto L_00438278;
L_00438271:; BB(0x00438271);
    /* 00438271: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_00438278:; BB(0x00438278);
    /* 00438278: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0043827b: mov esp, ebp */ r_esp = r_ebp;
    /* 0043827d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043827e: ret  */ FN_RET(0x00438230); r_esp += 4; return;
}

void f_00438280(void) /* sub_438280 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00438280);
    /* 00438280: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00438281: mov ebp, esp */ r_ebp = r_esp;
    /* 00438283: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00438286: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00438289: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0043828b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043828e: call 0x436a00 */ r_esp -= 4; W32(r_esp, 0x438293u); f_00436a00();
    /* 00438293: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00438296: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438298: je 0x43831f */ if (fZ) goto L_0043831f;
L_0043829e:; BB(0x0043829e);
    /* 0043829e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004382a0: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 004382a3: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004382a6: mov eax, dword ptr [edx + ecx + 0xacc] */ r_eax = R32((u32)(r_edx+r_ecx+0xaccu));
    /* 004382ad: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004382b0: mov ecx, 1 */ r_ecx = 0x1u;
    /* 004382b5: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 004382b8: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004382bb: mov eax, dword ptr [edx + ecx + 0xacc] */ r_eax = R32((u32)(r_edx+r_ecx+0xaccu));
    /* 004382c2: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004382c5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004382c8: add ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004382cb: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004382cd: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004382d0: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 004382d3: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 004382d6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004382d8: jne 0x438316 */ if (!fZ) goto L_00438316;
L_004382da:; BB(0x004382da);
    /* 004382da: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004382dc: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 004382df: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004382e2: mov eax, dword ptr [edx + ecx + 0xacc] */ r_eax = R32((u32)(r_edx+r_ecx+0xaccu));
    /* 004382e9: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 004382ec: mov ecx, 1 */ r_ecx = 0x1u;
    /* 004382f1: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 004382f4: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004382f7: mov eax, dword ptr [edx + ecx + 0xacc] */ r_eax = R32((u32)(r_edx+r_ecx+0xaccu));
    /* 004382fe: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00438301: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00438304: add ecx, dword ptr [ebp - 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00438307: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00438309: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043830c: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0043830f: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 00438312: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438314: je 0x43831f */ if (fZ) goto L_0043831f;
L_00438316:; BB(0x00438316);
    /* 00438316: mov dword ptr [ebp - 0x18], 1 */ W32((u32)(r_ebp+0xffffffe8u), 0x1u);
    /* 0043831d: jmp 0x438326 */ goto L_00438326;
L_0043831f:; BB(0x0043831f);
    /* 0043831f: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
L_00438326:; BB(0x00438326);
    /* 00438326: mov al, byte ptr [ebp - 0x18] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffe8u))) & 0xffu);
    /* 00438329: mov esp, ebp */ r_esp = r_ebp;
    /* 0043832b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043832c: ret  */ FN_RET(0x00438280); r_esp += 4; return;
}

void f_00438330(void) /* sub_438330 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00438330);
    /* 00438330: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00438331: mov ebp, esp */ r_ebp = r_esp;
    /* 00438333: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00438336: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00438339: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0043833b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043833e: call 0x436a00 */ r_esp -= 4; W32(r_esp, 0x438343u); f_00436a00();
    /* 00438343: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00438346: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438348: je 0x4383ad */ if (fZ) goto L_004383ad;
L_0043834a:; BB(0x0043834a);
    /* 0043834a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043834d: call 0x437250 */ r_esp -= 4; W32(r_esp, 0x438352u); f_00437250();
    /* 00438352: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00438355: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438357: je 0x438395 */ if (fZ) goto L_00438395;
L_00438359:; BB(0x00438359);
    /* 00438359: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0043835b: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0043835e: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00438361: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 00438368: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043836b: mov edx, 1 */ r_edx = 0x1u;
    /* 00438370: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00438373: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00438376: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 0043837d: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00438380: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00438383: add edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00438386: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00438388: cmp edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043838b: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0043838e: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00438391: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438393: je 0x4383a4 */ if (fZ) goto L_004383a4;
L_00438395:; BB(0x00438395);
    /* 00438395: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00438398: call 0x437340 */ r_esp -= 4; W32(r_esp, 0x43839du); f_00437340();
    /* 0043839d: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004383a0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004383a2: je 0x4383ad */ if (fZ) goto L_004383ad;
L_004383a4:; BB(0x004383a4);
    /* 004383a4: mov dword ptr [ebp - 0x10], 1 */ W32((u32)(r_ebp+0xfffffff0u), 0x1u);
    /* 004383ab: jmp 0x4383b4 */ goto L_004383b4;
L_004383ad:; BB(0x004383ad);
    /* 004383ad: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_004383b4:; BB(0x004383b4);
    /* 004383b4: mov al, byte ptr [ebp - 0x10] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff0u))) & 0xffu);
    /* 004383b7: mov esp, ebp */ r_esp = r_ebp;
    /* 004383b9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004383ba: ret  */ FN_RET(0x00438330); r_esp += 4; return;
}

void f_004383c0(void) /* sub_4383C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004383c0);
    /* 004383c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004383c1: mov ebp, esp */ r_ebp = r_esp;
    /* 004383c3: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004383c6: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 004383c9: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 004383cc: mov ecx, dword ptr [eax + 0xac4] */ r_ecx = R32((u32)(r_eax+0xac4u));
    /* 004383d2: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004383d5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004383d7: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004383db: setne dl */ r_edx = (r_edx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 004383de: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 004383e1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004383e3: jne 0x4383fb */ if (!fZ) goto L_004383fb;
L_004383e5:; BB(0x004383e5);
    /* 004383e5: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004383e8: call 0x434410 */ r_esp -= 4; W32(r_esp, 0x4383edu); f_00434410();
    /* 004383ed: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004383f0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004383f2: jne 0x4383fb */ if (!fZ) goto L_004383fb;
L_004383f4:; BB(0x004383f4);
    /* 004383f4: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004383f6: jmp 0x4385ef */ goto L_004385ef;
L_004383fb:; BB(0x004383fb);
    /* 004383fb: push 0x2b */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 004383fd: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00438400: call 0x436a00 */ r_esp -= 4; W32(r_esp, 0x438405u); f_00436a00();
    /* 00438405: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00438408: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043840a: je 0x43844f */ if (fZ) goto L_0043844f;
L_0043840c:; BB(0x0043840c);
    /* 0043840c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043840e: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00438411: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00438414: mov edx, dword ptr [ecx + eax + 0xacc] */ r_edx = R32((u32)(r_ecx+r_eax+0xaccu));
    /* 0043841b: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0043841e: mov eax, 1 */ r_eax = 0x1u;
    /* 00438423: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00438426: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00438429: mov edx, dword ptr [ecx + eax + 0xacc] */ r_edx = R32((u32)(r_ecx+r_eax+0xaccu));
    /* 00438430: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00438433: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00438436: add eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00438439: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0043843b: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043843e: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00438441: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 00438444: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438446: je 0x43844f */ if (fZ) goto L_0043844f;
L_00438448:; BB(0x00438448);
    /* 00438448: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0043844a: jmp 0x4385ef */ goto L_004385ef;
L_0043844f:; BB(0x0043844f);
    /* 0043844f: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 00438451: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00438454: call 0x436a00 */ r_esp -= 4; W32(r_esp, 0x438459u); f_00436a00();
    /* 00438459: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0043845c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043845e: je 0x4384a3 */ if (fZ) goto L_004384a3;
L_00438460:; BB(0x00438460);
    /* 00438460: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00438462: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00438465: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00438468: mov eax, dword ptr [edx + ecx + 0xacc] */ r_eax = R32((u32)(r_edx+r_ecx+0xaccu));
    /* 0043846f: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00438472: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00438477: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0043847a: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0043847d: mov eax, dword ptr [edx + ecx + 0xacc] */ r_eax = R32((u32)(r_edx+r_ecx+0xaccu));
    /* 00438484: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00438487: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043848a: add ecx, dword ptr [ebp - 0x14] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043848d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0043848f: cmp ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438492: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00438495: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 00438498: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043849a: je 0x4384a3 */ if (fZ) goto L_004384a3;
L_0043849c:; BB(0x0043849c);
    /* 0043849c: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0043849e: jmp 0x4385ef */ goto L_004385ef;
L_004384a3:; BB(0x004384a3);
    /* 004384a3: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 004384a5: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004384a8: call 0x436a00 */ r_esp -= 4; W32(r_esp, 0x4384adu); f_00436a00();
    /* 004384ad: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004384b0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004384b2: je 0x4384f7 */ if (fZ) goto L_004384f7;
L_004384b4:; BB(0x004384b4);
    /* 004384b4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004384b6: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 004384b9: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 004384bc: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 004384c3: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 004384c6: mov edx, 1 */ r_edx = 0x1u;
    /* 004384cb: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 004384ce: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 004384d1: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 004384d8: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 004384db: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004384de: add edx, dword ptr [ebp - 0x1c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004384e1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004384e3: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004384e6: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 004384e9: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004384ec: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004384ee: je 0x4384f7 */ if (fZ) goto L_004384f7;
L_004384f0:; BB(0x004384f0);
    /* 004384f0: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 004384f2: jmp 0x4385ef */ goto L_004385ef;
L_004384f7:; BB(0x004384f7);
    /* 004384f7: push 0x2e */ { u32 v = 0x2eu; r_esp -= 4; W32(r_esp, v); }
    /* 004384f9: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004384fc: call 0x436a00 */ r_esp -= 4; W32(r_esp, 0x438501u); f_00436a00();
    /* 00438501: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00438504: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438506: je 0x43854b */ if (fZ) goto L_0043854b;
L_00438508:; BB(0x00438508);
    /* 00438508: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043850a: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0043850d: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00438510: mov edx, dword ptr [ecx + eax + 0xacc] */ r_edx = R32((u32)(r_ecx+r_eax+0xaccu));
    /* 00438517: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0043851a: mov eax, 1 */ r_eax = 0x1u;
    /* 0043851f: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00438522: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00438525: mov edx, dword ptr [ecx + eax + 0xacc] */ r_edx = R32((u32)(r_ecx+r_eax+0xaccu));
    /* 0043852c: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 0043852f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00438532: add eax, dword ptr [ebp - 0x24] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00438535: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00438537: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043853a: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0043853d: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 00438540: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438542: je 0x43854b */ if (fZ) goto L_0043854b;
L_00438544:; BB(0x00438544);
    /* 00438544: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00438546: jmp 0x4385ef */ goto L_004385ef;
L_0043854b:; BB(0x0043854b);
    /* 0043854b: push 0x2f */ { u32 v = 0x2fu; r_esp -= 4; W32(r_esp, v); }
    /* 0043854d: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00438550: call 0x436a00 */ r_esp -= 4; W32(r_esp, 0x438555u); f_00436a00();
    /* 00438555: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00438558: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043855a: je 0x43859c */ if (fZ) goto L_0043859c;
L_0043855c:; BB(0x0043855c);
    /* 0043855c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0043855e: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00438561: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00438564: mov eax, dword ptr [edx + ecx + 0xacc] */ r_eax = R32((u32)(r_edx+r_ecx+0xaccu));
    /* 0043856b: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0043856e: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00438573: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00438576: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00438579: mov eax, dword ptr [edx + ecx + 0xacc] */ r_eax = R32((u32)(r_edx+r_ecx+0xaccu));
    /* 00438580: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00438583: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00438586: add ecx, dword ptr [ebp - 0x2c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffd4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00438589: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0043858b: cmp ecx, 9 */ {  u32 a = r_ecx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043858e: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00438591: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 00438594: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438596: je 0x43859c */ if (fZ) goto L_0043859c;
L_00438598:; BB(0x00438598);
    /* 00438598: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0043859a: jmp 0x4385ef */ goto L_004385ef;
L_0043859c:; BB(0x0043859c);
    /* 0043859c: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 0043859e: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004385a1: call 0x436a00 */ r_esp -= 4; W32(r_esp, 0x4385a6u); f_00436a00();
    /* 004385a6: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004385a9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004385ab: je 0x4385ed */ if (fZ) goto L_004385ed;
L_004385ad:; BB(0x004385ad);
    /* 004385ad: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004385af: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 004385b2: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 004385b5: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 004385bc: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 004385bf: mov edx, 1 */ r_edx = 0x1u;
    /* 004385c4: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 004385c7: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 004385ca: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 004385d1: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 004385d4: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004385d7: add edx, dword ptr [ebp - 0x34] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffccu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004385da: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004385dc: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004385df: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 004385e2: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004385e5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004385e7: je 0x4385ed */ if (fZ) goto L_004385ed;
L_004385e9:; BB(0x004385e9);
    /* 004385e9: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 004385eb: jmp 0x4385ef */ goto L_004385ef;
L_004385ed:; BB(0x004385ed);
    /* 004385ed: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_004385ef:; BB(0x004385ef);
    /* 004385ef: mov esp, ebp */ r_esp = r_ebp;
    /* 004385f1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004385f2: ret  */ FN_RET(0x004383c0); r_esp += 4; return;
}

void f_00438600(void) /* sub_438600 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00438600);
    /* 00438600: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00438601: mov ebp, esp */ r_ebp = r_esp;
    /* 00438603: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00438604: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00438607: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043860a: call 0x437340 */ r_esp -= 4; W32(r_esp, 0x43860fu); f_00437340();
    /* 0043860f: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00438612: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438614: jne 0x43861a */ if (!fZ) goto L_0043861a;
L_00438616:; BB(0x00438616);
    /* 00438616: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00438618: jmp 0x438660 */ goto L_00438660;
L_0043861a:; BB(0x0043861a);
    /* 0043861a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043861d: call 0x437460 */ r_esp -= 4; W32(r_esp, 0x438622u); f_00437460();
    /* 00438622: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00438625: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438627: je 0x43862d */ if (fZ) goto L_0043862d;
L_00438629:; BB(0x00438629);
    /* 00438629: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0043862b: jmp 0x438660 */ goto L_00438660;
L_0043862d:; BB(0x0043862d);
    /* 0043862d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00438630: call 0x437860 */ r_esp -= 4; W32(r_esp, 0x438635u); f_00437860();
    /* 00438635: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00438638: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043863a: jne 0x43865a */ if (!fZ) goto L_0043865a;
L_0043863c:; BB(0x0043863c);
    /* 0043863c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043863f: call 0x4380d0 */ r_esp -= 4; W32(r_esp, 0x438644u); f_004380d0();
    /* 00438644: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00438647: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438649: jne 0x43865a */ if (!fZ) goto L_0043865a;
L_0043864b:; BB(0x0043864b);
    /* 0043864b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043864e: call 0x438180 */ r_esp -= 4; W32(r_esp, 0x438653u); f_00438180();
    /* 00438653: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00438656: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438658: je 0x43865e */ if (fZ) goto L_0043865e;
L_0043865a:; BB(0x0043865a);
    /* 0043865a: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0043865c: jmp 0x438660 */ goto L_00438660;
L_0043865e:; BB(0x0043865e);
    /* 0043865e: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_00438660:; BB(0x00438660);
    /* 00438660: mov esp, ebp */ r_esp = r_ebp;
    /* 00438662: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00438663: ret  */ FN_RET(0x00438600); r_esp += 4; return;
}

void f_00438670(void) /* sub_438670 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00438670);
    /* 00438670: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00438671: mov ebp, esp */ r_ebp = r_esp;
    /* 00438673: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00438676: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 00438679: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043867c: mov ecx, dword ptr [eax + 0xac4] */ r_ecx = R32((u32)(r_eax+0xac4u));
    /* 00438682: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00438685: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00438687: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043868b: setne dl */ r_edx = (r_edx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0043868e: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 00438691: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438693: jne 0x4386d1 */ if (!fZ) goto L_004386d1;
L_00438695:; BB(0x00438695);
    /* 00438695: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00438697: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0043869a: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043869d: mov eax, dword ptr [edx + ecx + 0xacc] */ r_eax = R32((u32)(r_edx+r_ecx+0xaccu));
    /* 004386a4: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004386a7: mov ecx, 1 */ r_ecx = 0x1u;
    /* 004386ac: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 004386af: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004386b2: mov eax, dword ptr [edx + ecx + 0xacc] */ r_eax = R32((u32)(r_edx+r_ecx+0xaccu));
    /* 004386b9: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 004386bc: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004386bf: add ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004386c2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004386c4: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004386c7: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 004386ca: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 004386cd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004386cf: jne 0x4386d5 */ if (!fZ) goto L_004386d5;
L_004386d1:; BB(0x004386d1);
    /* 004386d1: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004386d3: jmp 0x43872e */ goto L_0043872e;
L_004386d5:; BB(0x004386d5);
    /* 004386d5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004386d7: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004386da: call 0x436a00 */ r_esp -= 4; W32(r_esp, 0x4386dfu); f_00436a00();
    /* 004386df: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004386e2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004386e4: je 0x4386ea */ if (fZ) goto L_004386ea;
L_004386e6:; BB(0x004386e6);
    /* 004386e6: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004386e8: jmp 0x43872e */ goto L_0043872e;
L_004386ea:; BB(0x004386ea);
    /* 004386ea: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004386ed: call 0x437970 */ r_esp -= 4; W32(r_esp, 0x4386f2u); f_00437970();
    /* 004386f2: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004386f5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004386f7: jne 0x438728 */ if (!fZ) goto L_00438728;
L_004386f9:; BB(0x004386f9);
    /* 004386f9: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004386fc: call 0x437b50 */ r_esp -= 4; W32(r_esp, 0x438701u); f_00437b50();
    /* 00438701: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00438704: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438706: jne 0x438728 */ if (!fZ) goto L_00438728;
L_00438708:; BB(0x00438708);
    /* 00438708: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043870b: call 0x431b50 */ r_esp -= 4; W32(r_esp, 0x438710u); f_00431b50();
    /* 00438710: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00438713: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438715: jne 0x438728 */ if (!fZ) goto L_00438728;
L_00438717:; BB(0x00438717);
    /* 00438717: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 00438719: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043871c: call 0x436a00 */ r_esp -= 4; W32(r_esp, 0x438721u); f_00436a00();
    /* 00438721: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00438724: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438726: je 0x43872c */ if (fZ) goto L_0043872c;
L_00438728:; BB(0x00438728);
    /* 00438728: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0043872a: jmp 0x43872e */ goto L_0043872e;
L_0043872c:; BB(0x0043872c);
    /* 0043872c: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0043872e:; BB(0x0043872e);
    /* 0043872e: mov esp, ebp */ r_esp = r_ebp;
    /* 00438730: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00438731: ret  */ FN_RET(0x00438670); r_esp += 4; return;
}

void f_00438740(void) /* sub_438740 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00438740);
    /* 00438740: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00438741: mov ebp, esp */ r_ebp = r_esp;
    /* 00438743: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00438746: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 00438749: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043874c: mov ecx, dword ptr [eax + 0xac4] */ r_ecx = R32((u32)(r_eax+0xac4u));
    /* 00438752: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00438755: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00438757: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043875b: setne dl */ r_edx = (r_edx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0043875e: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 00438761: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438763: jne 0x4387a1 */ if (!fZ) goto L_004387a1;
L_00438765:; BB(0x00438765);
    /* 00438765: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00438767: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0043876a: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043876d: mov eax, dword ptr [edx + ecx + 0xacc] */ r_eax = R32((u32)(r_edx+r_ecx+0xaccu));
    /* 00438774: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00438777: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0043877c: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0043877f: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00438782: mov eax, dword ptr [edx + ecx + 0xacc] */ r_eax = R32((u32)(r_edx+r_ecx+0xaccu));
    /* 00438789: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0043878c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043878f: add ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00438792: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00438794: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438797: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0043879a: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 0043879d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043879f: jne 0x4387a5 */ if (!fZ) goto L_004387a5;
L_004387a1:; BB(0x004387a1);
    /* 004387a1: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004387a3: jmp 0x4387fe */ goto L_004387fe;
L_004387a5:; BB(0x004387a5);
    /* 004387a5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004387a7: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004387aa: call 0x436a00 */ r_esp -= 4; W32(r_esp, 0x4387afu); f_00436a00();
    /* 004387af: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004387b2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004387b4: je 0x4387ba */ if (fZ) goto L_004387ba;
L_004387b6:; BB(0x004387b6);
    /* 004387b6: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004387b8: jmp 0x4387fe */ goto L_004387fe;
L_004387ba:; BB(0x004387ba);
    /* 004387ba: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004387bd: call 0x437970 */ r_esp -= 4; W32(r_esp, 0x4387c2u); f_00437970();
    /* 004387c2: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004387c5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004387c7: jne 0x4387f8 */ if (!fZ) goto L_004387f8;
L_004387c9:; BB(0x004387c9);
    /* 004387c9: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004387cc: call 0x437b50 */ r_esp -= 4; W32(r_esp, 0x4387d1u); f_00437b50();
    /* 004387d1: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004387d4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004387d6: jne 0x4387f8 */ if (!fZ) goto L_004387f8;
L_004387d8:; BB(0x004387d8);
    /* 004387d8: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004387db: call 0x431b50 */ r_esp -= 4; W32(r_esp, 0x4387e0u); f_00431b50();
    /* 004387e0: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004387e3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004387e5: jne 0x4387f8 */ if (!fZ) goto L_004387f8;
L_004387e7:; BB(0x004387e7);
    /* 004387e7: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 004387e9: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004387ec: call 0x436a00 */ r_esp -= 4; W32(r_esp, 0x4387f1u); f_00436a00();
    /* 004387f1: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004387f4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004387f6: je 0x4387fc */ if (fZ) goto L_004387fc;
L_004387f8:; BB(0x004387f8);
    /* 004387f8: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 004387fa: jmp 0x4387fe */ goto L_004387fe;
L_004387fc:; BB(0x004387fc);
    /* 004387fc: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_004387fe:; BB(0x004387fe);
    /* 004387fe: mov esp, ebp */ r_esp = r_ebp;
    /* 00438800: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00438801: ret  */ FN_RET(0x00438740); r_esp += 4; return;
}

void f_00438810(void) /* sub_438810 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00438810);
    /* 00438810: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00438811: mov ebp, esp */ r_ebp = r_esp;
    /* 00438813: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00438816: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00438819: cmp dword ptr [ebp + 8], 0x19 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043881d: jl 0x43882e */ if ((fS!=fO)) goto L_0043882e;
L_0043881f:; BB(0x0043881f);
    /* 0043881f: cmp dword ptr [ebp + 8], 0x1e */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00438823: jg 0x43882e */ if ((!fZ&&fS==fO)) goto L_0043882e;
L_00438825:; BB(0x00438825);
    /* 00438825: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 0043882c: jmp 0x438835 */ goto L_00438835;
L_0043882e:; BB(0x0043882e);
    /* 0043882e: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_00438835:; BB(0x00438835);
    /* 00438835: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 00438838: mov esp, ebp */ r_esp = r_ebp;
    /* 0043883a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043883b: ret 4 */ FN_RET(0x00438810); r_esp += 8; return;
}

void f_00438840(void) /* sub_438840 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00438840);
    /* 00438840: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00438841: mov ebp, esp */ r_ebp = r_esp;
    /* 00438843: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00438846: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00438849: cmp dword ptr [ebp + 8], 0x1f */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x1fu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043884d: jl 0x43885e */ if ((fS!=fO)) goto L_0043885e;
L_0043884f:; BB(0x0043884f);
    /* 0043884f: cmp dword ptr [ebp + 8], 0x24 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00438853: jg 0x43885e */ if ((!fZ&&fS==fO)) goto L_0043885e;
L_00438855:; BB(0x00438855);
    /* 00438855: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 0043885c: jmp 0x438865 */ goto L_00438865;
L_0043885e:; BB(0x0043885e);
    /* 0043885e: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_00438865:; BB(0x00438865);
    /* 00438865: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 00438868: mov esp, ebp */ r_esp = r_ebp;
    /* 0043886a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043886b: ret 4 */ FN_RET(0x00438840); r_esp += 8; return;
}

void f_00438870(void) /* sub_438870 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00438870);
    /* 00438870: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00438871: mov ebp, esp */ r_ebp = r_esp;
    /* 00438873: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00438876: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00438879: cmp dword ptr [ebp + 8], 0x2b */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x2bu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043887d: jl 0x43888e */ if ((fS!=fO)) goto L_0043888e;
L_0043887f:; BB(0x0043887f);
    /* 0043887f: cmp dword ptr [ebp + 8], 0x30 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00438883: jg 0x43888e */ if ((!fZ&&fS==fO)) goto L_0043888e;
L_00438885:; BB(0x00438885);
    /* 00438885: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 0043888c: jmp 0x438895 */ goto L_00438895;
L_0043888e:; BB(0x0043888e);
    /* 0043888e: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_00438895:; BB(0x00438895);
    /* 00438895: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 00438898: mov esp, ebp */ r_esp = r_ebp;
    /* 0043889a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043889b: ret 4 */ FN_RET(0x00438870); r_esp += 8; return;
}

void f_004388a0(void) /* sub_4388A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004388a0);
    /* 004388a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004388a1: mov ebp, esp */ r_ebp = r_esp;
    /* 004388a3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004388a6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004388a9: cmp dword ptr [ebp + 8], 0x37 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x37u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004388ad: jl 0x4388be */ if ((fS!=fO)) goto L_004388be;
L_004388af:; BB(0x004388af);
    /* 004388af: cmp dword ptr [ebp + 8], 0x3c */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004388b3: jg 0x4388be */ if ((!fZ&&fS==fO)) goto L_004388be;
L_004388b5:; BB(0x004388b5);
    /* 004388b5: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 004388bc: jmp 0x4388c5 */ goto L_004388c5;
L_004388be:; BB(0x004388be);
    /* 004388be: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_004388c5:; BB(0x004388c5);
    /* 004388c5: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 004388c8: mov esp, ebp */ r_esp = r_ebp;
    /* 004388ca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004388cb: ret 4 */ FN_RET(0x004388a0); r_esp += 8; return;
}

void f_004388d0(void) /* sub_4388D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004388d0);
    /* 004388d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004388d1: mov ebp, esp */ r_ebp = r_esp;
    /* 004388d3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004388d6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004388d9: cmp dword ptr [ebp + 8], 0x31 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x31u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004388dd: jl 0x4388ee */ if ((fS!=fO)) goto L_004388ee;
L_004388df:; BB(0x004388df);
    /* 004388df: cmp dword ptr [ebp + 8], 0x36 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x36u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004388e3: jg 0x4388ee */ if ((!fZ&&fS==fO)) goto L_004388ee;
L_004388e5:; BB(0x004388e5);
    /* 004388e5: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 004388ec: jmp 0x4388f5 */ goto L_004388f5;
L_004388ee:; BB(0x004388ee);
    /* 004388ee: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_004388f5:; BB(0x004388f5);
    /* 004388f5: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 004388f8: mov esp, ebp */ r_esp = r_ebp;
    /* 004388fa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004388fb: ret 4 */ FN_RET(0x004388d0); r_esp += 8; return;
}

void f_00438900(void) /* sub_438900 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00438900);
    /* 00438900: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00438901: mov ebp, esp */ r_ebp = r_esp;
    /* 00438903: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00438906: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00438909: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043890c: call 0x434410 */ r_esp -= 4; W32(r_esp, 0x438911u); f_00434410();
    /* 00438911: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00438914: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438916: je 0x43891c */ if (fZ) goto L_0043891c;
L_00438918:; BB(0x00438918);
    /* 00438918: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0043891a: jmp 0x43898a */ goto L_0043898a;
L_0043891c:; BB(0x0043891c);
    /* 0043891c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043891f: mov edx, dword ptr [ecx + 0xac4] */ r_edx = R32((u32)(r_ecx+0xac4u));
    /* 00438925: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 00438928: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043892a: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043892e: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 00438931: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00438934: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438936: jne 0x438988 */ if (!fZ) goto L_00438988;
L_00438938:; BB(0x00438938);
    /* 00438938: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0043893b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043893c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043893f: call 0x438870 */ r_esp -= 4; W32(r_esp, 0x438944u); f_00438870();
    /* 00438944: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00438947: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438949: jne 0x438984 */ if (!fZ) goto L_00438984;
L_0043894b:; BB(0x0043894b);
    /* 0043894b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043894e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043894f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00438952: call 0x438810 */ r_esp -= 4; W32(r_esp, 0x438957u); f_00438810();
    /* 00438957: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0043895a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043895c: jne 0x438984 */ if (!fZ) goto L_00438984;
L_0043895e:; BB(0x0043895e);
    /* 0043895e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00438961: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00438962: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00438965: call 0x4388d0 */ r_esp -= 4; W32(r_esp, 0x43896au); f_004388d0();
    /* 0043896a: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0043896d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043896f: jne 0x438984 */ if (!fZ) goto L_00438984;
L_00438971:; BB(0x00438971);
    /* 00438971: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00438974: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00438975: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00438978: call 0x4388a0 */ r_esp -= 4; W32(r_esp, 0x43897du); f_004388a0();
    /* 0043897d: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00438980: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438982: je 0x438988 */ if (fZ) goto L_00438988;
L_00438984:; BB(0x00438984);
    /* 00438984: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00438986: jmp 0x43898a */ goto L_0043898a;
L_00438988:; BB(0x00438988);
    /* 00438988: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_0043898a:; BB(0x0043898a);
    /* 0043898a: mov esp, ebp */ r_esp = r_ebp;
    /* 0043898c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043898d: ret 4 */ FN_RET(0x00438900); r_esp += 8; return;
}

void f_00438990(void) /* sub_438990 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00438990);
    /* 00438990: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00438991: mov ebp, esp */ r_ebp = r_esp;
    /* 00438993: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00438996: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00438999: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043899b: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0043899e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004389a1: mov edx, dword ptr [ecx + eax + 0xacc] */ r_edx = R32((u32)(r_ecx+r_eax+0xaccu));
    /* 004389a8: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 004389ab: mov eax, 1 */ r_eax = 0x1u;
    /* 004389b0: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 004389b3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004389b6: mov edx, dword ptr [ecx + eax + 0xacc] */ r_edx = R32((u32)(r_ecx+r_eax+0xaccu));
    /* 004389bd: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 004389c0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004389c3: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004389c6: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004389c9: jle 0x438a01 */ if ((fZ||fS!=fO)) goto L_00438a01;
L_004389cb:; BB(0x004389cb);
    /* 004389cb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004389cd: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 004389d0: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004389d3: mov eax, dword ptr [edx + ecx + 0xacc] */ r_eax = R32((u32)(r_edx+r_ecx+0xaccu));
    /* 004389da: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 004389dd: mov ecx, 1 */ r_ecx = 0x1u;
    /* 004389e2: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 004389e5: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004389e8: mov eax, dword ptr [edx + ecx + 0xacc] */ r_eax = R32((u32)(r_edx+r_ecx+0xaccu));
    /* 004389ef: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 004389f2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004389f5: add ecx, dword ptr [ebp - 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004389f8: cmp ecx, 9 */ {  u32 a = r_ecx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004389fb: jge 0x438a01 */ if ((fS==fO)) goto L_00438a01;
L_004389fd:; BB(0x004389fd);
    /* 004389fd: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004389ff: jmp 0x438a03 */ goto L_00438a03;
L_00438a01:; BB(0x00438a01);
    /* 00438a01: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_00438a03:; BB(0x00438a03);
    /* 00438a03: mov esp, ebp */ r_esp = r_ebp;
    /* 00438a05: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00438a06: ret  */ FN_RET(0x00438990); r_esp += 4; return;
}

void f_00438a10(void) /* sub_438A10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00438a10);
    /* 00438a10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00438a11: mov ebp, esp */ r_ebp = r_esp;
    /* 00438a13: sub esp, 0x31c */ {  u32 a = r_esp; u32 b = 0x31cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00438a19: mov dword ptr [ebp - 0x318], ecx */ W32((u32)(r_ebp+0xfffffce8u), r_ecx);
    /* 00438a1f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00438a26: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00438a29: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00438a2a: mov ecx, dword ptr [ebp - 0x318] */ r_ecx = R32((u32)(r_ebp+0xfffffce8u));
    /* 00438a30: call 0x438870 */ r_esp -= 4; W32(r_esp, 0x438a35u); f_00438870();
    /* 00438a35: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00438a38: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438a3a: je 0x438a5a */ if (fZ) goto L_00438a5a;
L_00438a3c:; BB(0x00438a3c);
    /* 00438a3c: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00438a3f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00438a40: mov ecx, dword ptr [ebp - 0x318] */ r_ecx = R32((u32)(r_ebp+0xfffffce8u));
    /* 00438a46: call 0x438900 */ r_esp -= 4; W32(r_esp, 0x438a4bu); f_00438900();
    /* 00438a4b: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00438a4e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438a50: jne 0x438a5a */ if (!fZ) goto L_00438a5a;
L_00438a52:; BB(0x00438a52);
    /* 00438a52: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00438a55: jmp 0x43acc0 */ goto L_0043acc0;
L_00438a5a:; BB(0x00438a5a);
    /* 00438a5a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00438a5d: mov dword ptr [ebp - 0x31c], ecx */ W32((u32)(r_ebp+0xfffffce4u), r_ecx);
    /* 00438a63: cmp dword ptr [ebp - 0x31c], 0x3d */ {  u32 a = R32((u32)(r_ebp+0xfffffce4u)); u32 b = 0x3du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00438a6a: ja 0x43acbd */ if ((!fC&&!fZ)) goto L_0043acbd;
L_00438a70:; BB(0x00438a70);
    /* 00438a70: mov edx, dword ptr [ebp - 0x31c] */ r_edx = R32((u32)(r_ebp+0xfffffce4u));
    /* 00438a76: jmp dword ptr [edx*4 + 0x43acc8] */ { u32 t = R32((u32)(r_edx*4+0x43acc8u)); switch (t) { case 0x438a7du: goto L_00438a7d; case 0x438ad8u: goto L_00438ad8; case 0x438b0fu: goto L_00438b0f; case 0x438bacu: goto L_00438bac; case 0x438be3u: goto L_00438be3; case 0x438d6du: goto L_00438d6d; case 0x438effu: goto L_00438eff; case 0x438f96u: goto L_00438f96; case 0x439033u: goto L_00439033; case 0x439180u: goto L_00439180; case 0x4392cdu: goto L_004392cd; case 0x43941au: goto L_0043941a; case 0x439567u: goto L_00439567; case 0x4395cau: goto L_004395ca; case 0x43962du: goto L_0043962d; case 0x439690u: goto L_00439690; case 0x4396f3u: goto L_004396f3; case 0x439756u: goto L_00439756; case 0x439859u: goto L_00439859; case 0x439a95u: goto L_00439a95; case 0x439c2bu: goto L_00439c2b; case 0x439dc1u: goto L_00439dc1; case 0x439f57u: goto L_00439f57; case 0x43a0edu: goto L_0043a0ed; case 0x43a283u: goto L_0043a283; case 0x4399aeu: goto L_004399ae; case 0x439b44u: goto L_00439b44; case 0x439cdau: goto L_00439cda; case 0x439e70u: goto L_00439e70; case 0x43a006u: goto L_0043a006; case 0x43a19cu: goto L_0043a19c; case 0x43a415u: goto L_0043a415; case 0x43a5a7u: goto L_0043a5a7; case 0x43a739u: goto L_0043a739; case 0x43a8cbu: goto L_0043a8cb; case 0x43aa5du: goto L_0043aa5d; case 0x43abefu: goto L_0043abef; case 0x43a332u: goto L_0043a332; case 0x43a4c4u: goto L_0043a4c4; case 0x43a656u: goto L_0043a656; case 0x43a7e8u: goto L_0043a7e8; case 0x43a97au: goto L_0043a97a; case 0x43ab0cu: goto L_0043ab0c; case 0x43ac9bu: goto L_0043ac9b; default: UNSUP(0x00438a76, "jump table entry is not a known target"); } }
L_00438a7d:; BB(0x00438a7d);
    /* 00438a7d: mov ecx, dword ptr [ebp - 0x318] */ r_ecx = R32((u32)(r_ebp+0xfffffce8u));
    /* 00438a83: call 0x437150 */ r_esp -= 4; W32(r_esp, 0x438a88u); f_00437150();
    /* 00438a88: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00438a8b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438a8d: jne 0x438aa1 */ if (!fZ) goto L_00438aa1;
L_00438a8f:; BB(0x00438a8f);
    /* 00438a8f: mov ecx, dword ptr [ebp - 0x318] */ r_ecx = R32((u32)(r_ebp+0xfffffce8u));
    /* 00438a95: call 0x437200 */ r_esp -= 4; W32(r_esp, 0x438a9au); f_00437200();
    /* 00438a9a: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00438a9d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438a9f: je 0x438aa8 */ if (fZ) goto L_00438aa8;
L_00438aa1:; BB(0x00438aa1);
    /* 00438aa1: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
L_00438aa8:; BB(0x00438aa8);
    /* 00438aa8: mov ecx, dword ptr [ebp - 0x318] */ r_ecx = R32((u32)(r_ebp+0xfffffce8u));
    /* 00438aae: call 0x437250 */ r_esp -= 4; W32(r_esp, 0x438ab3u); f_00437250();
    /* 00438ab3: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00438ab6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438ab8: jne 0x438acc */ if (!fZ) goto L_00438acc;
L_00438aba:; BB(0x00438aba);
    /* 00438aba: mov ecx, dword ptr [ebp - 0x318] */ r_ecx = R32((u32)(r_ebp+0xfffffce8u));
    /* 00438ac0: call 0x437340 */ r_esp -= 4; W32(r_esp, 0x438ac5u); f_00437340();
    /* 00438ac5: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00438ac8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438aca: je 0x438ad3 */ if (fZ) goto L_00438ad3;
L_00438acc:; BB(0x00438acc);
    /* 00438acc: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
L_00438ad3:; BB(0x00438ad3);
    /* 00438ad3: jmp 0x43acbd */ goto L_0043acbd;
L_00438ad8:; BB(0x00438ad8);
    /* 00438ad8: mov ecx, dword ptr [ebp - 0x318] */ r_ecx = R32((u32)(r_ebp+0xfffffce8u));
    /* 00438ade: call 0x437200 */ r_esp -= 4; W32(r_esp, 0x438ae3u); f_00437200();
    /* 00438ae3: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00438ae6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438ae8: je 0x438af1 */ if (fZ) goto L_00438af1;
L_00438aea:; BB(0x00438aea);
    /* 00438aea: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
L_00438af1:; BB(0x00438af1);
    /* 00438af1: mov ecx, dword ptr [ebp - 0x318] */ r_ecx = R32((u32)(r_ebp+0xfffffce8u));
    /* 00438af7: call 0x437340 */ r_esp -= 4; W32(r_esp, 0x438afcu); f_00437340();
    /* 00438afc: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00438aff: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438b01: je 0x438b0a */ if (fZ) goto L_00438b0a;
L_00438b03:; BB(0x00438b03);
    /* 00438b03: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
L_00438b0a:; BB(0x00438b0a);
    /* 00438b0a: jmp 0x43acbd */ goto L_0043acbd;
L_00438b0f:; BB(0x00438b0f);
    /* 00438b0f: mov ecx, dword ptr [ebp - 0x318] */ r_ecx = R32((u32)(r_ebp+0xfffffce8u));
    /* 00438b15: call 0x437150 */ r_esp -= 4; W32(r_esp, 0x438b1au); f_00437150();
    /* 00438b1a: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00438b1d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438b1f: jne 0x438b33 */ if (!fZ) goto L_00438b33;
L_00438b21:; BB(0x00438b21);
    /* 00438b21: mov ecx, dword ptr [ebp - 0x318] */ r_ecx = R32((u32)(r_ebp+0xfffffce8u));
    /* 00438b27: call 0x437200 */ r_esp -= 4; W32(r_esp, 0x438b2cu); f_00437200();
    /* 00438b2c: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00438b2f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438b31: je 0x438b3a */ if (fZ) goto L_00438b3a;
L_00438b33:; BB(0x00438b33);
    /* 00438b33: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
L_00438b3a:; BB(0x00438b3a);
    /* 00438b3a: mov ecx, dword ptr [ebp - 0x318] */ r_ecx = R32((u32)(r_ebp+0xfffffce8u));
    /* 00438b40: call 0x437250 */ r_esp -= 4; W32(r_esp, 0x438b45u); f_00437250();
    /* 00438b45: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00438b48: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438b4a: je 0x438b8e */ if (fZ) goto L_00438b8e;
L_00438b4c:; BB(0x00438b4c);
    /* 00438b4c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00438b4e: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00438b51: mov ecx, dword ptr [ebp - 0x318] */ r_ecx = R32((u32)(r_ebp+0xfffffce8u));
    /* 00438b57: mov edx, dword ptr [ecx + eax + 0xacc] */ r_edx = R32((u32)(r_ecx+r_eax+0xaccu));
    /* 00438b5e: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00438b61: mov eax, 1 */ r_eax = 0x1u;
    /* 00438b66: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00438b69: mov ecx, dword ptr [ebp - 0x318] */ r_ecx = R32((u32)(r_ebp+0xfffffce8u));
    /* 00438b6f: mov edx, dword ptr [ecx + eax + 0xacc] */ r_edx = R32((u32)(r_ecx+r_eax+0xaccu));
    /* 00438b76: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00438b79: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00438b7c: add eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00438b7f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00438b81: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438b84: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00438b87: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 00438b8a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438b8c: je 0x438ba0 */ if (fZ) goto L_00438ba0;
L_00438b8e:; BB(0x00438b8e);
    /* 00438b8e: mov ecx, dword ptr [ebp - 0x318] */ r_ecx = R32((u32)(r_ebp+0xfffffce8u));
    /* 00438b94: call 0x437340 */ r_esp -= 4; W32(r_esp, 0x438b99u); f_00437340();
    /* 00438b99: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00438b9c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438b9e: je 0x438ba7 */ if (fZ) goto L_00438ba7;
L_00438ba0:; BB(0x00438ba0);
    /* 00438ba0: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
L_00438ba7:; BB(0x00438ba7);
    /* 00438ba7: jmp 0x43acbd */ goto L_0043acbd;
L_00438bac:; BB(0x00438bac);
    /* 00438bac: mov ecx, dword ptr [ebp - 0x318] */ r_ecx = R32((u32)(r_ebp+0xfffffce8u));
    /* 00438bb2: call 0x437340 */ r_esp -= 4; W32(r_esp, 0x438bb7u); f_00437340();
    /* 00438bb7: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00438bba: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438bbc: je 0x438bc5 */ if (fZ) goto L_00438bc5;
L_00438bbe:; BB(0x00438bbe);
    /* 00438bbe: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
L_00438bc5:; BB(0x00438bc5);
    /* 00438bc5: mov ecx, dword ptr [ebp - 0x318] */ r_ecx = R32((u32)(r_ebp+0xfffffce8u));
    /* 00438bcb: call 0x437200 */ r_esp -= 4; W32(r_esp, 0x438bd0u); f_00437200();
    /* 00438bd0: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00438bd3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438bd5: je 0x438bde */ if (fZ) goto L_00438bde;
L_00438bd7:; BB(0x00438bd7);
    /* 00438bd7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
L_00438bde:; BB(0x00438bde);
    /* 00438bde: jmp 0x43acbd */ goto L_0043acbd;
L_00438be3:; BB(0x00438be3);
    /* 00438be3: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 00438be9: mov ecx, dword ptr [eax + 0xac4] */ r_ecx = R32((u32)(r_eax+0xac4u));
    /* 00438bef: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00438bf2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00438bf4: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438bf8: setne dl */ r_edx = (r_edx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 00438bfb: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 00438bfe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438c00: jne 0x438c07 */ if (!fZ) goto L_00438c07;
L_00438c02:; BB(0x00438c02);
    /* 00438c02: jmp 0x43acbd */ goto L_0043acbd;
L_00438c07:; BB(0x00438c07);
    /* 00438c07: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00438c09: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00438c0c: mov edx, dword ptr [ebp - 0x318] */ r_edx = R32((u32)(r_ebp+0xfffffce8u));
    /* 00438c12: mov eax, dword ptr [edx + ecx + 0xacc] */ r_eax = R32((u32)(r_edx+r_ecx+0xaccu));
    /* 00438c19: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00438c1c: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00438c21: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00438c24: mov edx, dword ptr [ebp - 0x318] */ r_edx = R32((u32)(r_ebp+0xfffffce8u));
    /* 00438c2a: mov eax, dword ptr [edx + ecx + 0xacc] */ r_eax = R32((u32)(r_edx+r_ecx+0xaccu));
    /* 00438c31: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00438c34: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00438c37: add ecx, dword ptr [ebp - 0x18] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00438c3a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00438c3c: cmp ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438c3f: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00438c42: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 00438c45: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438c47: jne 0x438c8b */ if (!fZ) goto L_00438c8b;
L_00438c49:; BB(0x00438c49);
    /* 00438c49: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00438c4b: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00438c4e: mov edx, dword ptr [ebp - 0x318] */ r_edx = R32((u32)(r_ebp+0xfffffce8u));
    /* 00438c54: mov eax, dword ptr [edx + ecx + 0xacc] */ r_eax = R32((u32)(r_edx+r_ecx+0xaccu));
    /* 00438c5b: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00438c5e: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00438c63: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00438c66: mov edx, dword ptr [ebp - 0x318] */ r_edx = R32((u32)(r_ebp+0xfffffce8u));
    /* 00438c6c: mov eax, dword ptr [edx + ecx + 0xacc] */ r_eax = R32((u32)(r_edx+r_ecx+0xaccu));
    /* 00438c73: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00438c76: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00438c79: add ecx, dword ptr [ebp - 0x20] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00438c7c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00438c7e: cmp ecx, 0xb */ {  u32 a = r_ecx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438c81: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00438c84: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 00438c87: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438c89: je 0x438c97 */ if (fZ) goto L_00438c97;
L_00438c8b:; BB(0x00438c8b);
    /* 00438c8b: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00438c92: jmp 0x438d68 */ goto L_00438d68;
L_00438c97:; BB(0x00438c97);
    /* 00438c97: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00438c99: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00438c9c: mov edx, dword ptr [ebp - 0x318] */ r_edx = R32((u32)(r_ebp+0xfffffce8u));
    /* 00438ca2: mov eax, dword ptr [edx + ecx + 0xacc] */ r_eax = R32((u32)(r_edx+r_ecx+0xaccu));
    /* 00438ca9: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00438cac: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00438cb1: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00438cb4: mov edx, dword ptr [ebp - 0x318] */ r_edx = R32((u32)(r_ebp+0xfffffce8u));
    /* 00438cba: mov eax, dword ptr [edx + ecx + 0xacc] */ r_eax = R32((u32)(r_edx+r_ecx+0xaccu));
    /* 00438cc1: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00438cc4: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00438cc7: add ecx, dword ptr [ebp - 0x28] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffd8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00438cca: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00438ccc: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438ccf: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00438cd2: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 00438cd5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438cd7: jne 0x438d61 */ if (!fZ) goto L_00438d61;
L_00438cdd:; BB(0x00438cdd);
    /* 00438cdd: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00438cdf: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00438ce2: mov edx, dword ptr [ebp - 0x318] */ r_edx = R32((u32)(r_ebp+0xfffffce8u));
    /* 00438ce8: mov eax, dword ptr [edx + ecx + 0xacc] */ r_eax = R32((u32)(r_edx+r_ecx+0xaccu));
    /* 00438cef: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00438cf2: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00438cf7: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00438cfa: mov edx, dword ptr [ebp - 0x318] */ r_edx = R32((u32)(r_ebp+0xfffffce8u));
    /* 00438d00: mov eax, dword ptr [edx + ecx + 0xacc] */ r_eax = R32((u32)(r_edx+r_ecx+0xaccu));
    /* 00438d07: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00438d0a: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00438d0d: add ecx, dword ptr [ebp - 0x30] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffd0u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00438d10: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00438d12: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438d15: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00438d18: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 00438d1b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438d1d: jne 0x438d61 */ if (!fZ) goto L_00438d61;
L_00438d1f:; BB(0x00438d1f);
    /* 00438d1f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00438d21: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00438d24: mov edx, dword ptr [ebp - 0x318] */ r_edx = R32((u32)(r_ebp+0xfffffce8u));
    /* 00438d2a: mov eax, dword ptr [edx + ecx + 0xacc] */ r_eax = R32((u32)(r_edx+r_ecx+0xaccu));
    /* 00438d31: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00438d34: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00438d39: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00438d3c: mov edx, dword ptr [ebp - 0x318] */ r_edx = R32((u32)(r_ebp+0xfffffce8u));
    /* 00438d42: mov eax, dword ptr [edx + ecx + 0xacc] */ r_eax = R32((u32)(r_edx+r_ecx+0xaccu));
    /* 00438d49: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00438d4c: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00438d4f: add ecx, dword ptr [ebp - 0x38] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffc8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00438d52: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00438d54: cmp ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438d57: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00438d5a: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 00438d5d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438d5f: je 0x438d68 */ if (fZ) goto L_00438d68;
L_00438d61:; BB(0x00438d61);
    /* 00438d61: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
L_00438d68:; BB(0x00438d68);
    /* 00438d68: jmp 0x43acbd */ goto L_0043acbd;
L_00438d6d:; BB(0x00438d6d);
    /* 00438d6d: mov ecx, dword ptr [ebp - 0x318] */ r_ecx = R32((u32)(r_ebp+0xfffffce8u));
    /* 00438d73: mov edx, dword ptr [ecx + 0xac4] */ r_edx = R32((u32)(r_ecx+0xac4u));
    /* 00438d79: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 00438d7c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00438d7e: cmp dword ptr [ebp - 0x3c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438d82: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 00438d85: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00438d88: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438d8a: jne 0x438d91 */ if (!fZ) goto L_00438d91;
L_00438d8c:; BB(0x00438d8c);
    /* 00438d8c: jmp 0x43acbd */ goto L_0043acbd;
L_00438d91:; BB(0x00438d91);
    /* 00438d91: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00438d93: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00438d96: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 00438d9c: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 00438da3: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 00438da6: mov edx, 1 */ r_edx = 0x1u;
    /* 00438dab: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00438dae: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 00438db4: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 00438dbb: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 00438dbe: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00438dc1: add edx, dword ptr [ebp - 0x44] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffbcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00438dc4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00438dc6: cmp edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438dc9: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00438dcc: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00438dcf: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438dd1: je 0x438ddf */ if (fZ) goto L_00438ddf;
L_00438dd3:; BB(0x00438dd3);
    /* 00438dd3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00438dda: jmp 0x43acbd */ goto L_0043acbd;
L_00438ddf:; BB(0x00438ddf);
    /* 00438ddf: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00438de1: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00438de4: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 00438dea: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 00438df1: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 00438df4: mov edx, 1 */ r_edx = 0x1u;
    /* 00438df9: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00438dfc: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 00438e02: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 00438e09: mov dword ptr [ebp - 0x4c], ecx */ W32((u32)(r_ebp+0xffffffb4u), r_ecx);
    /* 00438e0c: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00438e0f: add edx, dword ptr [ebp - 0x4c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffb4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00438e12: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00438e14: cmp edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438e17: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00438e1a: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00438e1d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438e1f: jne 0x438e63 */ if (!fZ) goto L_00438e63;
L_00438e21:; BB(0x00438e21);
    /* 00438e21: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00438e23: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00438e26: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 00438e2c: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 00438e33: mov dword ptr [ebp - 0x50], ecx */ W32((u32)(r_ebp+0xffffffb0u), r_ecx);
    /* 00438e36: mov edx, 1 */ r_edx = 0x1u;
    /* 00438e3b: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00438e3e: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 00438e44: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 00438e4b: mov dword ptr [ebp - 0x54], ecx */ W32((u32)(r_ebp+0xffffffacu), r_ecx);
    /* 00438e4e: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00438e51: add edx, dword ptr [ebp - 0x54] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffacu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00438e54: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00438e56: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438e59: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00438e5c: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00438e5f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438e61: je 0x438e6f */ if (fZ) goto L_00438e6f;
L_00438e63:; BB(0x00438e63);
    /* 00438e63: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00438e6a: jmp 0x438efa */ goto L_00438efa;
L_00438e6f:; BB(0x00438e6f);
    /* 00438e6f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00438e71: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00438e74: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 00438e7a: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 00438e81: mov dword ptr [ebp - 0x58], ecx */ W32((u32)(r_ebp+0xffffffa8u), r_ecx);
    /* 00438e84: mov edx, 1 */ r_edx = 0x1u;
    /* 00438e89: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00438e8c: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 00438e92: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 00438e99: mov dword ptr [ebp - 0x5c], ecx */ W32((u32)(r_ebp+0xffffffa4u), r_ecx);
    /* 00438e9c: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00438e9f: add edx, dword ptr [ebp - 0x5c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffa4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00438ea2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00438ea4: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438ea7: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00438eaa: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00438ead: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438eaf: jne 0x438ef3 */ if (!fZ) goto L_00438ef3;
L_00438eb1:; BB(0x00438eb1);
    /* 00438eb1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00438eb3: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00438eb6: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 00438ebc: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 00438ec3: mov dword ptr [ebp - 0x60], ecx */ W32((u32)(r_ebp+0xffffffa0u), r_ecx);
    /* 00438ec6: mov edx, 1 */ r_edx = 0x1u;
    /* 00438ecb: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00438ece: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 00438ed4: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 00438edb: mov dword ptr [ebp - 0x64], ecx */ W32((u32)(r_ebp+0xffffff9cu), r_ecx);
    /* 00438ede: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00438ee1: add edx, dword ptr [ebp - 0x64] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffff9cu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00438ee4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00438ee6: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438ee9: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00438eec: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00438eef: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438ef1: je 0x438efa */ if (fZ) goto L_00438efa;
L_00438ef3:; BB(0x00438ef3);
    /* 00438ef3: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
L_00438efa:; BB(0x00438efa);
    /* 00438efa: jmp 0x43acbd */ goto L_0043acbd;
L_00438eff:; BB(0x00438eff);
    /* 00438eff: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00438f01: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00438f04: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 00438f0a: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 00438f11: mov dword ptr [ebp - 0x68], ecx */ W32((u32)(r_ebp+0xffffff98u), r_ecx);
    /* 00438f14: mov edx, 1 */ r_edx = 0x1u;
    /* 00438f19: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00438f1c: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 00438f22: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 00438f29: mov dword ptr [ebp - 0x6c], ecx */ W32((u32)(r_ebp+0xffffff94u), r_ecx);
    /* 00438f2c: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 00438f2f: add edx, dword ptr [ebp - 0x6c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffff94u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00438f32: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00438f34: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438f37: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00438f3a: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00438f3d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438f3f: je 0x438f48 */ if (fZ) goto L_00438f48;
L_00438f41:; BB(0x00438f41);
    /* 00438f41: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
L_00438f48:; BB(0x00438f48);
    /* 00438f48: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00438f4a: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00438f4d: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 00438f53: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 00438f5a: mov dword ptr [ebp - 0x70], ecx */ W32((u32)(r_ebp+0xffffff90u), r_ecx);
    /* 00438f5d: mov edx, 1 */ r_edx = 0x1u;
    /* 00438f62: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00438f65: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 00438f6b: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 00438f72: mov dword ptr [ebp - 0x74], ecx */ W32((u32)(r_ebp+0xffffff8cu), r_ecx);
    /* 00438f75: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 00438f78: add edx, dword ptr [ebp - 0x74] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffff8cu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00438f7b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00438f7d: cmp edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438f80: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00438f83: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00438f86: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438f88: je 0x438f91 */ if (fZ) goto L_00438f91;
L_00438f8a:; BB(0x00438f8a);
    /* 00438f8a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
L_00438f91:; BB(0x00438f91);
    /* 00438f91: jmp 0x43acbd */ goto L_0043acbd;
L_00438f96:; BB(0x00438f96);
    /* 00438f96: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00438f98: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00438f9b: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 00438fa1: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 00438fa8: mov dword ptr [ebp - 0x78], ecx */ W32((u32)(r_ebp+0xffffff88u), r_ecx);
    /* 00438fab: mov edx, 1 */ r_edx = 0x1u;
    /* 00438fb0: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00438fb3: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 00438fb9: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 00438fc0: mov dword ptr [ebp - 0x7c], ecx */ W32((u32)(r_ebp+0xffffff84u), r_ecx);
    /* 00438fc3: mov edx, dword ptr [ebp - 0x78] */ r_edx = R32((u32)(r_ebp+0xffffff88u));
    /* 00438fc6: add edx, dword ptr [ebp - 0x7c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffff84u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00438fc9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00438fcb: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438fce: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00438fd1: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00438fd4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438fd6: je 0x438fdf */ if (fZ) goto L_00438fdf;
L_00438fd8:; BB(0x00438fd8);
    /* 00438fd8: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
L_00438fdf:; BB(0x00438fdf);
    /* 00438fdf: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00438fe1: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00438fe4: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 00438fea: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 00438ff1: mov dword ptr [ebp - 0x80], ecx */ W32((u32)(r_ebp+0xffffff80u), r_ecx);
    /* 00438ff4: mov edx, 1 */ r_edx = 0x1u;
    /* 00438ff9: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00438ffc: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 00439002: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 00439009: mov dword ptr [ebp - 0x84], ecx */ W32((u32)(r_ebp+0xffffff7cu), r_ecx);
    /* 0043900f: mov edx, dword ptr [ebp - 0x80] */ r_edx = R32((u32)(r_ebp+0xffffff80u));
    /* 00439012: add edx, dword ptr [ebp - 0x84] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffff7cu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00439018: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043901a: cmp edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043901d: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00439020: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00439023: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439025: je 0x43902e */ if (fZ) goto L_0043902e;
L_00439027:; BB(0x00439027);
    /* 00439027: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
L_0043902e:; BB(0x0043902e);
    /* 0043902e: jmp 0x43acbd */ goto L_0043acbd;
L_00439033:; BB(0x00439033);
    /* 00439033: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00439035: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00439038: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 0043903e: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 00439045: mov dword ptr [ebp - 0x88], ecx */ W32((u32)(r_ebp+0xffffff78u), r_ecx);
    /* 0043904b: mov edx, 1 */ r_edx = 0x1u;
    /* 00439050: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00439053: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 00439059: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 00439060: mov dword ptr [ebp - 0x8c], ecx */ W32((u32)(r_ebp+0xffffff74u), r_ecx);
    /* 00439066: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 0043906c: add edx, dword ptr [ebp - 0x8c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffff74u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00439072: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00439074: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439077: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0043907a: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0043907d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043907f: je 0x4390d8 */ if (fZ) goto L_004390d8;
L_00439081:; BB(0x00439081);
    /* 00439081: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00439083: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00439086: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 0043908c: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 00439093: mov dword ptr [ebp - 0x90], ecx */ W32((u32)(r_ebp+0xffffff70u), r_ecx);
    /* 00439099: mov edx, 1 */ r_edx = 0x1u;
    /* 0043909e: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 004390a1: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 004390a7: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 004390ae: mov dword ptr [ebp - 0x94], ecx */ W32((u32)(r_ebp+0xffffff6cu), r_ecx);
    /* 004390b4: mov edx, dword ptr [ebp - 0x90] */ r_edx = R32((u32)(r_ebp+0xffffff70u));
    /* 004390ba: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004390bc: cmp edx, dword ptr [ebp - 0x94] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffff6cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004390c2: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 004390c5: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004390c8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004390ca: je 0x4390d8 */ if (fZ) goto L_004390d8;
L_004390cc:; BB(0x004390cc);
    /* 004390cc: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 004390d3: jmp 0x43917b */ goto L_0043917b;
L_004390d8:; BB(0x004390d8);
    /* 004390d8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004390da: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 004390dd: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 004390e3: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 004390ea: mov dword ptr [ebp - 0x98], ecx */ W32((u32)(r_ebp+0xffffff68u), r_ecx);
    /* 004390f0: mov edx, 1 */ r_edx = 0x1u;
    /* 004390f5: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 004390f8: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 004390fe: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 00439105: mov dword ptr [ebp - 0x9c], ecx */ W32((u32)(r_ebp+0xffffff64u), r_ecx);
    /* 0043910b: mov edx, dword ptr [ebp - 0x98] */ r_edx = R32((u32)(r_ebp+0xffffff68u));
    /* 00439111: add edx, dword ptr [ebp - 0x9c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffff64u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00439117: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00439119: cmp edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043911c: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0043911f: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00439122: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439124: jne 0x439174 */ if (!fZ) goto L_00439174;
L_00439126:; BB(0x00439126);
    /* 00439126: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00439128: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0043912b: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 00439131: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 00439138: mov dword ptr [ebp - 0xa0], ecx */ W32((u32)(r_ebp+0xffffff60u), r_ecx);
    /* 0043913e: mov edx, 1 */ r_edx = 0x1u;
    /* 00439143: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00439146: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 0043914c: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 00439153: mov dword ptr [ebp - 0xa4], ecx */ W32((u32)(r_ebp+0xffffff5cu), r_ecx);
    /* 00439159: mov edx, dword ptr [ebp - 0xa0] */ r_edx = R32((u32)(r_ebp+0xffffff60u));
    /* 0043915f: add edx, dword ptr [ebp - 0xa4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffff5cu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00439165: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00439167: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043916a: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0043916d: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00439170: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439172: je 0x43917b */ if (fZ) goto L_0043917b;
L_00439174:; BB(0x00439174);
    /* 00439174: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
L_0043917b:; BB(0x0043917b);
    /* 0043917b: jmp 0x43acbd */ goto L_0043acbd;
L_00439180:; BB(0x00439180);
    /* 00439180: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00439182: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00439185: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 0043918b: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 00439192: mov dword ptr [ebp - 0xa8], ecx */ W32((u32)(r_ebp+0xffffff58u), r_ecx);
    /* 00439198: mov edx, 1 */ r_edx = 0x1u;
    /* 0043919d: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 004391a0: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 004391a6: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 004391ad: mov dword ptr [ebp - 0xac], ecx */ W32((u32)(r_ebp+0xffffff54u), r_ecx);
    /* 004391b3: mov edx, dword ptr [ebp - 0xa8] */ r_edx = R32((u32)(r_ebp+0xffffff58u));
    /* 004391b9: add edx, dword ptr [ebp - 0xac] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffff54u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004391bf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004391c1: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004391c4: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 004391c7: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004391ca: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004391cc: je 0x439225 */ if (fZ) goto L_00439225;
L_004391ce:; BB(0x004391ce);
    /* 004391ce: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004391d0: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 004391d3: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 004391d9: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 004391e0: mov dword ptr [ebp - 0xb0], ecx */ W32((u32)(r_ebp+0xffffff50u), r_ecx);
    /* 004391e6: mov edx, 1 */ r_edx = 0x1u;
    /* 004391eb: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 004391ee: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 004391f4: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 004391fb: mov dword ptr [ebp - 0xb4], ecx */ W32((u32)(r_ebp+0xffffff4cu), r_ecx);
    /* 00439201: mov edx, dword ptr [ebp - 0xb0] */ r_edx = R32((u32)(r_ebp+0xffffff50u));
    /* 00439207: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00439209: cmp edx, dword ptr [ebp - 0xb4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffff4cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043920f: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00439212: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00439215: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439217: je 0x439225 */ if (fZ) goto L_00439225;
L_00439219:; BB(0x00439219);
    /* 00439219: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00439220: jmp 0x4392c8 */ goto L_004392c8;
L_00439225:; BB(0x00439225);
    /* 00439225: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00439227: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0043922a: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 00439230: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 00439237: mov dword ptr [ebp - 0xb8], ecx */ W32((u32)(r_ebp+0xffffff48u), r_ecx);
    /* 0043923d: mov edx, 1 */ r_edx = 0x1u;
    /* 00439242: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00439245: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 0043924b: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 00439252: mov dword ptr [ebp - 0xbc], ecx */ W32((u32)(r_ebp+0xffffff44u), r_ecx);
    /* 00439258: mov edx, dword ptr [ebp - 0xb8] */ r_edx = R32((u32)(r_ebp+0xffffff48u));
    /* 0043925e: add edx, dword ptr [ebp - 0xbc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffff44u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00439264: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00439266: cmp edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439269: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0043926c: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0043926f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439271: jne 0x4392c1 */ if (!fZ) goto L_004392c1;
L_00439273:; BB(0x00439273);
    /* 00439273: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00439275: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00439278: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 0043927e: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 00439285: mov dword ptr [ebp - 0xc0], ecx */ W32((u32)(r_ebp+0xffffff40u), r_ecx);
    /* 0043928b: mov edx, 1 */ r_edx = 0x1u;
    /* 00439290: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00439293: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 00439299: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 004392a0: mov dword ptr [ebp - 0xc4], ecx */ W32((u32)(r_ebp+0xffffff3cu), r_ecx);
    /* 004392a6: mov edx, dword ptr [ebp - 0xc0] */ r_edx = R32((u32)(r_ebp+0xffffff40u));
    /* 004392ac: add edx, dword ptr [ebp - 0xc4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffff3cu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004392b2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004392b4: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004392b7: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 004392ba: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004392bd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004392bf: je 0x4392c8 */ if (fZ) goto L_004392c8;
L_004392c1:; BB(0x004392c1);
    /* 004392c1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
L_004392c8:; BB(0x004392c8);
    /* 004392c8: jmp 0x43acbd */ goto L_0043acbd;
L_004392cd:; BB(0x004392cd);
    /* 004392cd: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004392cf: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 004392d2: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 004392d8: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 004392df: mov dword ptr [ebp - 0xc8], ecx */ W32((u32)(r_ebp+0xffffff38u), r_ecx);
    /* 004392e5: mov edx, 1 */ r_edx = 0x1u;
    /* 004392ea: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 004392ed: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 004392f3: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 004392fa: mov dword ptr [ebp - 0xcc], ecx */ W32((u32)(r_ebp+0xffffff34u), r_ecx);
    /* 00439300: mov edx, dword ptr [ebp - 0xc8] */ r_edx = R32((u32)(r_ebp+0xffffff38u));
    /* 00439306: add edx, dword ptr [ebp - 0xcc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffff34u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043930c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043930e: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439311: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00439314: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00439317: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439319: je 0x439372 */ if (fZ) goto L_00439372;
L_0043931b:; BB(0x0043931b);
    /* 0043931b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0043931d: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00439320: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 00439326: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 0043932d: mov dword ptr [ebp - 0xd0], ecx */ W32((u32)(r_ebp+0xffffff30u), r_ecx);
    /* 00439333: mov edx, 1 */ r_edx = 0x1u;
    /* 00439338: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0043933b: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 00439341: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 00439348: mov dword ptr [ebp - 0xd4], ecx */ W32((u32)(r_ebp+0xffffff2cu), r_ecx);
    /* 0043934e: mov edx, dword ptr [ebp - 0xd0] */ r_edx = R32((u32)(r_ebp+0xffffff30u));
    /* 00439354: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00439356: cmp edx, dword ptr [ebp - 0xd4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffff2cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043935c: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0043935f: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00439362: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439364: je 0x439372 */ if (fZ) goto L_00439372;
L_00439366:; BB(0x00439366);
    /* 00439366: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0043936d: jmp 0x439415 */ goto L_00439415;
L_00439372:; BB(0x00439372);
    /* 00439372: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00439374: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00439377: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 0043937d: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 00439384: mov dword ptr [ebp - 0xd8], ecx */ W32((u32)(r_ebp+0xffffff28u), r_ecx);
    /* 0043938a: mov edx, 1 */ r_edx = 0x1u;
    /* 0043938f: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00439392: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 00439398: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 0043939f: mov dword ptr [ebp - 0xdc], ecx */ W32((u32)(r_ebp+0xffffff24u), r_ecx);
    /* 004393a5: mov edx, dword ptr [ebp - 0xd8] */ r_edx = R32((u32)(r_ebp+0xffffff28u));
    /* 004393ab: add edx, dword ptr [ebp - 0xdc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffff24u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004393b1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004393b3: cmp edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004393b6: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 004393b9: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004393bc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004393be: jne 0x43940e */ if (!fZ) goto L_0043940e;
L_004393c0:; BB(0x004393c0);
    /* 004393c0: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004393c2: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 004393c5: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 004393cb: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 004393d2: mov dword ptr [ebp - 0xe0], ecx */ W32((u32)(r_ebp+0xffffff20u), r_ecx);
    /* 004393d8: mov edx, 1 */ r_edx = 0x1u;
    /* 004393dd: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 004393e0: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 004393e6: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 004393ed: mov dword ptr [ebp - 0xe4], ecx */ W32((u32)(r_ebp+0xffffff1cu), r_ecx);
    /* 004393f3: mov edx, dword ptr [ebp - 0xe0] */ r_edx = R32((u32)(r_ebp+0xffffff20u));
    /* 004393f9: add edx, dword ptr [ebp - 0xe4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffff1cu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004393ff: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00439401: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439404: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00439407: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0043940a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043940c: je 0x439415 */ if (fZ) goto L_00439415;
L_0043940e:; BB(0x0043940e);
    /* 0043940e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
L_00439415:; BB(0x00439415);
    /* 00439415: jmp 0x43acbd */ goto L_0043acbd;
L_0043941a:; BB(0x0043941a);
    /* 0043941a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0043941c: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0043941f: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 00439425: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 0043942c: mov dword ptr [ebp - 0xe8], ecx */ W32((u32)(r_ebp+0xffffff18u), r_ecx);
    /* 00439432: mov edx, 1 */ r_edx = 0x1u;
    /* 00439437: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0043943a: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 00439440: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 00439447: mov dword ptr [ebp - 0xec], ecx */ W32((u32)(r_ebp+0xffffff14u), r_ecx);
    /* 0043944d: mov edx, dword ptr [ebp - 0xe8] */ r_edx = R32((u32)(r_ebp+0xffffff18u));
    /* 00439453: add edx, dword ptr [ebp - 0xec] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffff14u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00439459: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043945b: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043945e: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00439461: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00439464: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439466: je 0x4394bf */ if (fZ) goto L_004394bf;
L_00439468:; BB(0x00439468);
    /* 00439468: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0043946a: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0043946d: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 00439473: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 0043947a: mov dword ptr [ebp - 0xf0], ecx */ W32((u32)(r_ebp+0xffffff10u), r_ecx);
    /* 00439480: mov edx, 1 */ r_edx = 0x1u;
    /* 00439485: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00439488: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 0043948e: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 00439495: mov dword ptr [ebp - 0xf4], ecx */ W32((u32)(r_ebp+0xffffff0cu), r_ecx);
    /* 0043949b: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 004394a1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004394a3: cmp edx, dword ptr [ebp - 0xf4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffff0cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004394a9: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 004394ac: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004394af: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004394b1: je 0x4394bf */ if (fZ) goto L_004394bf;
L_004394b3:; BB(0x004394b3);
    /* 004394b3: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 004394ba: jmp 0x439562 */ goto L_00439562;
L_004394bf:; BB(0x004394bf);
    /* 004394bf: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004394c1: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 004394c4: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 004394ca: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 004394d1: mov dword ptr [ebp - 0xf8], ecx */ W32((u32)(r_ebp+0xffffff08u), r_ecx);
    /* 004394d7: mov edx, 1 */ r_edx = 0x1u;
    /* 004394dc: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 004394df: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 004394e5: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 004394ec: mov dword ptr [ebp - 0xfc], ecx */ W32((u32)(r_ebp+0xffffff04u), r_ecx);
    /* 004394f2: mov edx, dword ptr [ebp - 0xf8] */ r_edx = R32((u32)(r_ebp+0xffffff08u));
    /* 004394f8: add edx, dword ptr [ebp - 0xfc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffff04u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004394fe: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00439500: cmp edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439503: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00439506: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00439509: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043950b: jne 0x43955b */ if (!fZ) goto L_0043955b;
L_0043950d:; BB(0x0043950d);
    /* 0043950d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0043950f: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00439512: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 00439518: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 0043951f: mov dword ptr [ebp - 0x100], ecx */ W32((u32)(r_ebp+0xffffff00u), r_ecx);
    /* 00439525: mov edx, 1 */ r_edx = 0x1u;
    /* 0043952a: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0043952d: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 00439533: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 0043953a: mov dword ptr [ebp - 0x104], ecx */ W32((u32)(r_ebp+0xfffffefcu), r_ecx);
    /* 00439540: mov edx, dword ptr [ebp - 0x100] */ r_edx = R32((u32)(r_ebp+0xffffff00u));
    /* 00439546: add edx, dword ptr [ebp - 0x104] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffefcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043954c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043954e: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439551: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00439554: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00439557: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439559: je 0x439562 */ if (fZ) goto L_00439562;
L_0043955b:; BB(0x0043955b);
    /* 0043955b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
L_00439562:; BB(0x00439562);
    /* 00439562: jmp 0x43acbd */ goto L_0043acbd;
L_00439567:; BB(0x00439567);
    /* 00439567: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00439569: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0043956c: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 00439572: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 00439579: mov dword ptr [ebp - 0x108], ecx */ W32((u32)(r_ebp+0xfffffef8u), r_ecx);
    /* 0043957f: mov edx, 1 */ r_edx = 0x1u;
    /* 00439584: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00439587: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 0043958d: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 00439594: mov dword ptr [ebp - 0x10c], ecx */ W32((u32)(r_ebp+0xfffffef4u), r_ecx);
    /* 0043959a: mov edx, dword ptr [ebp - 0x108] */ r_edx = R32((u32)(r_ebp+0xfffffef8u));
    /* 004395a0: add edx, dword ptr [ebp - 0x10c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffef4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004395a6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004395a8: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004395ab: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 004395ae: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004395b1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004395b3: je 0x4395be */ if (fZ) goto L_004395be;
L_004395b5:; BB(0x004395b5);
    /* 004395b5: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 004395bc: jmp 0x4395c5 */ goto L_004395c5;
L_004395be:; BB(0x004395be);
    /* 004395be: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
L_004395c5:; BB(0x004395c5);
    /* 004395c5: jmp 0x43acbd */ goto L_0043acbd;
L_004395ca:; BB(0x004395ca);
    /* 004395ca: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004395cc: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 004395cf: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 004395d5: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 004395dc: mov dword ptr [ebp - 0x110], ecx */ W32((u32)(r_ebp+0xfffffef0u), r_ecx);
    /* 004395e2: mov edx, 1 */ r_edx = 0x1u;
    /* 004395e7: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 004395ea: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 004395f0: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 004395f7: mov dword ptr [ebp - 0x114], ecx */ W32((u32)(r_ebp+0xfffffeecu), r_ecx);
    /* 004395fd: mov edx, dword ptr [ebp - 0x110] */ r_edx = R32((u32)(r_ebp+0xfffffef0u));
    /* 00439603: add edx, dword ptr [ebp - 0x114] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffeecu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00439609: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043960b: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043960e: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00439611: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00439614: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439616: je 0x439621 */ if (fZ) goto L_00439621;
L_00439618:; BB(0x00439618);
    /* 00439618: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0043961f: jmp 0x439628 */ goto L_00439628;
L_00439621:; BB(0x00439621);
    /* 00439621: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
L_00439628:; BB(0x00439628);
    /* 00439628: jmp 0x43acbd */ goto L_0043acbd;
L_0043962d:; BB(0x0043962d);
    /* 0043962d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0043962f: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00439632: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 00439638: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 0043963f: mov dword ptr [ebp - 0x118], ecx */ W32((u32)(r_ebp+0xfffffee8u), r_ecx);
    /* 00439645: mov edx, 1 */ r_edx = 0x1u;
    /* 0043964a: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0043964d: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 00439653: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 0043965a: mov dword ptr [ebp - 0x11c], ecx */ W32((u32)(r_ebp+0xfffffee4u), r_ecx);
    /* 00439660: mov edx, dword ptr [ebp - 0x118] */ r_edx = R32((u32)(r_ebp+0xfffffee8u));
    /* 00439666: add edx, dword ptr [ebp - 0x11c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffee4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043966c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043966e: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439671: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00439674: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00439677: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439679: je 0x439684 */ if (fZ) goto L_00439684;
L_0043967b:; BB(0x0043967b);
    /* 0043967b: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00439682: jmp 0x43968b */ goto L_0043968b;
L_00439684:; BB(0x00439684);
    /* 00439684: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
L_0043968b:; BB(0x0043968b);
    /* 0043968b: jmp 0x43acbd */ goto L_0043acbd;
L_00439690:; BB(0x00439690);
    /* 00439690: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00439692: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00439695: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 0043969b: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 004396a2: mov dword ptr [ebp - 0x120], ecx */ W32((u32)(r_ebp+0xfffffee0u), r_ecx);
    /* 004396a8: mov edx, 1 */ r_edx = 0x1u;
    /* 004396ad: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 004396b0: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 004396b6: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 004396bd: mov dword ptr [ebp - 0x124], ecx */ W32((u32)(r_ebp+0xfffffedcu), r_ecx);
    /* 004396c3: mov edx, dword ptr [ebp - 0x120] */ r_edx = R32((u32)(r_ebp+0xfffffee0u));
    /* 004396c9: add edx, dword ptr [ebp - 0x124] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffedcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004396cf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004396d1: cmp edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004396d4: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 004396d7: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004396da: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004396dc: je 0x4396e7 */ if (fZ) goto L_004396e7;
L_004396de:; BB(0x004396de);
    /* 004396de: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 004396e5: jmp 0x4396ee */ goto L_004396ee;
L_004396e7:; BB(0x004396e7);
    /* 004396e7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
L_004396ee:; BB(0x004396ee);
    /* 004396ee: jmp 0x43acbd */ goto L_0043acbd;
L_004396f3:; BB(0x004396f3);
    /* 004396f3: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004396f5: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 004396f8: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 004396fe: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 00439705: mov dword ptr [ebp - 0x128], ecx */ W32((u32)(r_ebp+0xfffffed8u), r_ecx);
    /* 0043970b: mov edx, 1 */ r_edx = 0x1u;
    /* 00439710: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00439713: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 00439719: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 00439720: mov dword ptr [ebp - 0x12c], ecx */ W32((u32)(r_ebp+0xfffffed4u), r_ecx);
    /* 00439726: mov edx, dword ptr [ebp - 0x128] */ r_edx = R32((u32)(r_ebp+0xfffffed8u));
    /* 0043972c: add edx, dword ptr [ebp - 0x12c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffed4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00439732: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00439734: cmp edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439737: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0043973a: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0043973d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043973f: je 0x43974a */ if (fZ) goto L_0043974a;
L_00439741:; BB(0x00439741);
    /* 00439741: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00439748: jmp 0x439751 */ goto L_00439751;
L_0043974a:; BB(0x0043974a);
    /* 0043974a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
L_00439751:; BB(0x00439751);
    /* 00439751: jmp 0x43acbd */ goto L_0043acbd;
L_00439756:; BB(0x00439756);
    /* 00439756: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00439758: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0043975b: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 00439761: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 00439768: mov dword ptr [ebp - 0x130], ecx */ W32((u32)(r_ebp+0xfffffed0u), r_ecx);
    /* 0043976e: mov edx, 1 */ r_edx = 0x1u;
    /* 00439773: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00439776: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 0043977c: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 00439783: mov dword ptr [ebp - 0x134], ecx */ W32((u32)(r_ebp+0xfffffeccu), r_ecx);
    /* 00439789: mov edx, dword ptr [ebp - 0x130] */ r_edx = R32((u32)(r_ebp+0xfffffed0u));
    /* 0043978f: add edx, dword ptr [ebp - 0x134] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffeccu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00439795: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00439797: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043979a: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0043979d: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004397a0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004397a2: jne 0x439844 */ if (!fZ) goto L_00439844;
L_004397a8:; BB(0x004397a8);
    /* 004397a8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004397aa: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 004397ad: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 004397b3: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 004397ba: mov dword ptr [ebp - 0x138], ecx */ W32((u32)(r_ebp+0xfffffec8u), r_ecx);
    /* 004397c0: mov edx, 1 */ r_edx = 0x1u;
    /* 004397c5: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 004397c8: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 004397ce: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 004397d5: mov dword ptr [ebp - 0x13c], ecx */ W32((u32)(r_ebp+0xfffffec4u), r_ecx);
    /* 004397db: mov edx, dword ptr [ebp - 0x138] */ r_edx = R32((u32)(r_ebp+0xfffffec8u));
    /* 004397e1: add edx, dword ptr [ebp - 0x13c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffec4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004397e7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004397e9: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004397ec: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 004397ef: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004397f2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004397f4: jne 0x439844 */ if (!fZ) goto L_00439844;
L_004397f6:; BB(0x004397f6);
    /* 004397f6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004397f8: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 004397fb: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 00439801: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 00439808: mov dword ptr [ebp - 0x140], ecx */ W32((u32)(r_ebp+0xfffffec0u), r_ecx);
    /* 0043980e: mov edx, 1 */ r_edx = 0x1u;
    /* 00439813: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00439816: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 0043981c: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 00439823: mov dword ptr [ebp - 0x144], ecx */ W32((u32)(r_ebp+0xfffffebcu), r_ecx);
    /* 00439829: mov edx, dword ptr [ebp - 0x140] */ r_edx = R32((u32)(r_ebp+0xfffffec0u));
    /* 0043982f: add edx, dword ptr [ebp - 0x144] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffebcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00439835: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00439837: cmp edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043983a: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0043983d: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00439840: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439842: je 0x43984d */ if (fZ) goto L_0043984d;
L_00439844:; BB(0x00439844);
    /* 00439844: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0043984b: jmp 0x439854 */ goto L_00439854;
L_0043984d:; BB(0x0043984d);
    /* 0043984d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
L_00439854:; BB(0x00439854);
    /* 00439854: jmp 0x43acbd */ goto L_0043acbd;
L_00439859:; BB(0x00439859);
    /* 00439859: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0043985b: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0043985e: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 00439864: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 0043986b: mov dword ptr [ebp - 0x148], ecx */ W32((u32)(r_ebp+0xfffffeb8u), r_ecx);
    /* 00439871: mov edx, 1 */ r_edx = 0x1u;
    /* 00439876: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00439879: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 0043987f: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 00439886: mov dword ptr [ebp - 0x14c], ecx */ W32((u32)(r_ebp+0xfffffeb4u), r_ecx);
    /* 0043988c: mov edx, dword ptr [ebp - 0x148] */ r_edx = R32((u32)(r_ebp+0xfffffeb8u));
    /* 00439892: add edx, dword ptr [ebp - 0x14c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffeb4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00439898: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043989a: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043989d: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 004398a0: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004398a3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004398a5: jne 0x439999 */ if (!fZ) goto L_00439999;
L_004398ab:; BB(0x004398ab);
    /* 004398ab: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004398ad: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 004398b0: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 004398b6: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 004398bd: mov dword ptr [ebp - 0x150], ecx */ W32((u32)(r_ebp+0xfffffeb0u), r_ecx);
    /* 004398c3: mov edx, 1 */ r_edx = 0x1u;
    /* 004398c8: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 004398cb: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 004398d1: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 004398d8: mov dword ptr [ebp - 0x154], ecx */ W32((u32)(r_ebp+0xfffffeacu), r_ecx);
    /* 004398de: mov edx, dword ptr [ebp - 0x150] */ r_edx = R32((u32)(r_ebp+0xfffffeb0u));
    /* 004398e4: add edx, dword ptr [ebp - 0x154] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffeacu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004398ea: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004398ec: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004398ef: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 004398f2: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004398f5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004398f7: jne 0x439999 */ if (!fZ) goto L_00439999;
L_004398fd:; BB(0x004398fd);
    /* 004398fd: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004398ff: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00439902: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 00439908: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 0043990f: mov dword ptr [ebp - 0x158], ecx */ W32((u32)(r_ebp+0xfffffea8u), r_ecx);
    /* 00439915: mov edx, 1 */ r_edx = 0x1u;
    /* 0043991a: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0043991d: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 00439923: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 0043992a: mov dword ptr [ebp - 0x15c], ecx */ W32((u32)(r_ebp+0xfffffea4u), r_ecx);
    /* 00439930: mov edx, dword ptr [ebp - 0x158] */ r_edx = R32((u32)(r_ebp+0xfffffea8u));
    /* 00439936: add edx, dword ptr [ebp - 0x15c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffea4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043993c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043993e: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439941: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00439944: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00439947: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439949: jne 0x439999 */ if (!fZ) goto L_00439999;
L_0043994b:; BB(0x0043994b);
    /* 0043994b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0043994d: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00439950: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 00439956: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 0043995d: mov dword ptr [ebp - 0x160], ecx */ W32((u32)(r_ebp+0xfffffea0u), r_ecx);
    /* 00439963: mov edx, 1 */ r_edx = 0x1u;
    /* 00439968: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0043996b: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 00439971: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 00439978: mov dword ptr [ebp - 0x164], ecx */ W32((u32)(r_ebp+0xfffffe9cu), r_ecx);
    /* 0043997e: mov edx, dword ptr [ebp - 0x160] */ r_edx = R32((u32)(r_ebp+0xfffffea0u));
    /* 00439984: add edx, dword ptr [ebp - 0x164] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffe9cu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043998a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043998c: cmp edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043998f: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00439992: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00439995: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439997: je 0x4399a2 */ if (fZ) goto L_004399a2;
L_00439999:; BB(0x00439999);
    /* 00439999: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 004399a0: jmp 0x4399a9 */ goto L_004399a9;
L_004399a2:; BB(0x004399a2);
    /* 004399a2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
L_004399a9:; BB(0x004399a9);
    /* 004399a9: jmp 0x43acbd */ goto L_0043acbd;
L_004399ae:; BB(0x004399ae);
    /* 004399ae: mov edx, dword ptr [ebp - 0x318] */ r_edx = R32((u32)(r_ebp+0xfffffce8u));
    /* 004399b4: mov eax, dword ptr [edx + 0xac4] */ r_eax = R32((u32)(r_edx+0xac4u));
    /* 004399ba: mov dword ptr [ebp - 0x168], eax */ W32((u32)(r_ebp+0xfffffe98u), r_eax);
    /* 004399c0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004399c2: cmp dword ptr [ebp - 0x168], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffe98u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004399c9: setne cl */ r_ecx = (r_ecx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 004399cc: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 004399cf: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004399d1: jne 0x439a95 */ if (!fZ) goto L_00439a95;
L_004399d7:; BB(0x004399d7);
    /* 004399d7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004399d9: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 004399dc: mov ecx, dword ptr [ebp - 0x318] */ r_ecx = R32((u32)(r_ebp+0xfffffce8u));
    /* 004399e2: mov edx, dword ptr [ecx + eax + 0xacc] */ r_edx = R32((u32)(r_ecx+r_eax+0xaccu));
    /* 004399e9: mov dword ptr [ebp - 0x16c], edx */ W32((u32)(r_ebp+0xfffffe94u), r_edx);
    /* 004399ef: mov eax, 1 */ r_eax = 0x1u;
    /* 004399f4: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 004399f7: mov ecx, dword ptr [ebp - 0x318] */ r_ecx = R32((u32)(r_ebp+0xfffffce8u));
    /* 004399fd: mov edx, dword ptr [ecx + eax + 0xacc] */ r_edx = R32((u32)(r_ecx+r_eax+0xaccu));
    /* 00439a04: mov dword ptr [ebp - 0x170], edx */ W32((u32)(r_ebp+0xfffffe90u), r_edx);
    /* 00439a0a: mov eax, dword ptr [ebp - 0x16c] */ r_eax = R32((u32)(r_ebp+0xfffffe94u));
    /* 00439a10: add eax, dword ptr [ebp - 0x170] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffe90u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00439a16: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00439a18: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439a1b: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00439a1e: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 00439a21: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439a23: jne 0x439a73 */ if (!fZ) goto L_00439a73;
L_00439a25:; BB(0x00439a25);
    /* 00439a25: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00439a27: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00439a2a: mov ecx, dword ptr [ebp - 0x318] */ r_ecx = R32((u32)(r_ebp+0xfffffce8u));
    /* 00439a30: mov edx, dword ptr [ecx + eax + 0xacc] */ r_edx = R32((u32)(r_ecx+r_eax+0xaccu));
    /* 00439a37: mov dword ptr [ebp - 0x174], edx */ W32((u32)(r_ebp+0xfffffe8cu), r_edx);
    /* 00439a3d: mov eax, 1 */ r_eax = 0x1u;
    /* 00439a42: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00439a45: mov ecx, dword ptr [ebp - 0x318] */ r_ecx = R32((u32)(r_ebp+0xfffffce8u));
    /* 00439a4b: mov edx, dword ptr [ecx + eax + 0xacc] */ r_edx = R32((u32)(r_ecx+r_eax+0xaccu));
    /* 00439a52: mov dword ptr [ebp - 0x178], edx */ W32((u32)(r_ebp+0xfffffe88u), r_edx);
    /* 00439a58: mov eax, dword ptr [ebp - 0x174] */ r_eax = R32((u32)(r_ebp+0xfffffe8cu));
    /* 00439a5e: add eax, dword ptr [ebp - 0x178] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffe88u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00439a64: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00439a66: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439a69: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00439a6c: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 00439a6f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439a71: je 0x439a95 */ if (fZ) goto L_00439a95;
L_00439a73:; BB(0x00439a73);
    /* 00439a73: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00439a76: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00439a77: mov ecx, dword ptr [ebp - 0x318] */ r_ecx = R32((u32)(r_ebp+0xfffffce8u));
    /* 00439a7d: call 0x438900 */ r_esp -= 4; W32(r_esp, 0x439a82u); f_00438900();
    /* 00439a82: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00439a85: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439a87: jne 0x439a95 */ if (!fZ) goto L_00439a95;
L_00439a89:; BB(0x00439a89);
    /* 00439a89: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 00439a90: jmp 0x43acbd */ goto L_0043acbd;
L_00439a95:; BB(0x00439a95);
    /* 00439a95: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00439a97: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00439a9a: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 00439aa0: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 00439aa7: mov dword ptr [ebp - 0x17c], ecx */ W32((u32)(r_ebp+0xfffffe84u), r_ecx);
    /* 00439aad: mov edx, 1 */ r_edx = 0x1u;
    /* 00439ab2: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00439ab5: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 00439abb: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 00439ac2: mov dword ptr [ebp - 0x180], ecx */ W32((u32)(r_ebp+0xfffffe80u), r_ecx);
    /* 00439ac8: mov edx, dword ptr [ebp - 0x17c] */ r_edx = R32((u32)(r_ebp+0xfffffe84u));
    /* 00439ace: add edx, dword ptr [ebp - 0x180] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffe80u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00439ad4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00439ad6: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439ad9: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00439adc: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00439adf: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439ae1: je 0x439aea */ if (fZ) goto L_00439aea;
L_00439ae3:; BB(0x00439ae3);
    /* 00439ae3: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
L_00439aea:; BB(0x00439aea);
    /* 00439aea: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00439aec: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00439aef: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 00439af5: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 00439afc: mov dword ptr [ebp - 0x184], ecx */ W32((u32)(r_ebp+0xfffffe7cu), r_ecx);
    /* 00439b02: mov edx, 1 */ r_edx = 0x1u;
    /* 00439b07: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00439b0a: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 00439b10: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 00439b17: mov dword ptr [ebp - 0x188], ecx */ W32((u32)(r_ebp+0xfffffe78u), r_ecx);
    /* 00439b1d: mov edx, dword ptr [ebp - 0x184] */ r_edx = R32((u32)(r_ebp+0xfffffe7cu));
    /* 00439b23: add edx, dword ptr [ebp - 0x188] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffe78u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00439b29: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00439b2b: cmp edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439b2e: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00439b31: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00439b34: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439b36: je 0x439b3f */ if (fZ) goto L_00439b3f;
L_00439b38:; BB(0x00439b38);
    /* 00439b38: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
L_00439b3f:; BB(0x00439b3f);
    /* 00439b3f: jmp 0x43acbd */ goto L_0043acbd;
L_00439b44:; BB(0x00439b44);
    /* 00439b44: mov edx, dword ptr [ebp - 0x318] */ r_edx = R32((u32)(r_ebp+0xfffffce8u));
    /* 00439b4a: mov eax, dword ptr [edx + 0xac4] */ r_eax = R32((u32)(r_edx+0xac4u));
    /* 00439b50: mov dword ptr [ebp - 0x18c], eax */ W32((u32)(r_ebp+0xfffffe74u), r_eax);
    /* 00439b56: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00439b58: cmp dword ptr [ebp - 0x18c], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffe74u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439b5f: setne cl */ r_ecx = (r_ecx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 00439b62: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 00439b65: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439b67: jne 0x439c2b */ if (!fZ) goto L_00439c2b;
L_00439b6d:; BB(0x00439b6d);
    /* 00439b6d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00439b6f: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00439b72: mov ecx, dword ptr [ebp - 0x318] */ r_ecx = R32((u32)(r_ebp+0xfffffce8u));
    /* 00439b78: mov edx, dword ptr [ecx + eax + 0xacc] */ r_edx = R32((u32)(r_ecx+r_eax+0xaccu));
    /* 00439b7f: mov dword ptr [ebp - 0x190], edx */ W32((u32)(r_ebp+0xfffffe70u), r_edx);
    /* 00439b85: mov eax, 1 */ r_eax = 0x1u;
    /* 00439b8a: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00439b8d: mov ecx, dword ptr [ebp - 0x318] */ r_ecx = R32((u32)(r_ebp+0xfffffce8u));
    /* 00439b93: mov edx, dword ptr [ecx + eax + 0xacc] */ r_edx = R32((u32)(r_ecx+r_eax+0xaccu));
    /* 00439b9a: mov dword ptr [ebp - 0x194], edx */ W32((u32)(r_ebp+0xfffffe6cu), r_edx);
    /* 00439ba0: mov eax, dword ptr [ebp - 0x190] */ r_eax = R32((u32)(r_ebp+0xfffffe70u));
    /* 00439ba6: add eax, dword ptr [ebp - 0x194] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffe6cu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00439bac: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00439bae: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439bb1: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00439bb4: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 00439bb7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439bb9: jne 0x439c09 */ if (!fZ) goto L_00439c09;
L_00439bbb:; BB(0x00439bbb);
    /* 00439bbb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00439bbd: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00439bc0: mov ecx, dword ptr [ebp - 0x318] */ r_ecx = R32((u32)(r_ebp+0xfffffce8u));
    /* 00439bc6: mov edx, dword ptr [ecx + eax + 0xacc] */ r_edx = R32((u32)(r_ecx+r_eax+0xaccu));
    /* 00439bcd: mov dword ptr [ebp - 0x198], edx */ W32((u32)(r_ebp+0xfffffe68u), r_edx);
    /* 00439bd3: mov eax, 1 */ r_eax = 0x1u;
    /* 00439bd8: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00439bdb: mov ecx, dword ptr [ebp - 0x318] */ r_ecx = R32((u32)(r_ebp+0xfffffce8u));
    /* 00439be1: mov edx, dword ptr [ecx + eax + 0xacc] */ r_edx = R32((u32)(r_ecx+r_eax+0xaccu));
    /* 00439be8: mov dword ptr [ebp - 0x19c], edx */ W32((u32)(r_ebp+0xfffffe64u), r_edx);
    /* 00439bee: mov eax, dword ptr [ebp - 0x198] */ r_eax = R32((u32)(r_ebp+0xfffffe68u));
    /* 00439bf4: add eax, dword ptr [ebp - 0x19c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffe64u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00439bfa: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00439bfc: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439bff: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00439c02: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 00439c05: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439c07: je 0x439c2b */ if (fZ) goto L_00439c2b;
L_00439c09:; BB(0x00439c09);
    /* 00439c09: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00439c0c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00439c0d: mov ecx, dword ptr [ebp - 0x318] */ r_ecx = R32((u32)(r_ebp+0xfffffce8u));
    /* 00439c13: call 0x438900 */ r_esp -= 4; W32(r_esp, 0x439c18u); f_00438900();
    /* 00439c18: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00439c1b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439c1d: jne 0x439c2b */ if (!fZ) goto L_00439c2b;
L_00439c1f:; BB(0x00439c1f);
    /* 00439c1f: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 00439c26: jmp 0x43acbd */ goto L_0043acbd;
L_00439c2b:; BB(0x00439c2b);
    /* 00439c2b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00439c2d: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00439c30: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 00439c36: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 00439c3d: mov dword ptr [ebp - 0x1a0], ecx */ W32((u32)(r_ebp+0xfffffe60u), r_ecx);
    /* 00439c43: mov edx, 1 */ r_edx = 0x1u;
    /* 00439c48: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00439c4b: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 00439c51: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 00439c58: mov dword ptr [ebp - 0x1a4], ecx */ W32((u32)(r_ebp+0xfffffe5cu), r_ecx);
    /* 00439c5e: mov edx, dword ptr [ebp - 0x1a0] */ r_edx = R32((u32)(r_ebp+0xfffffe60u));
    /* 00439c64: add edx, dword ptr [ebp - 0x1a4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffe5cu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00439c6a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00439c6c: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439c6f: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00439c72: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00439c75: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439c77: je 0x439c80 */ if (fZ) goto L_00439c80;
L_00439c79:; BB(0x00439c79);
    /* 00439c79: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
L_00439c80:; BB(0x00439c80);
    /* 00439c80: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00439c82: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00439c85: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 00439c8b: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 00439c92: mov dword ptr [ebp - 0x1a8], ecx */ W32((u32)(r_ebp+0xfffffe58u), r_ecx);
    /* 00439c98: mov edx, 1 */ r_edx = 0x1u;
    /* 00439c9d: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00439ca0: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 00439ca6: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 00439cad: mov dword ptr [ebp - 0x1ac], ecx */ W32((u32)(r_ebp+0xfffffe54u), r_ecx);
    /* 00439cb3: mov edx, dword ptr [ebp - 0x1a8] */ r_edx = R32((u32)(r_ebp+0xfffffe58u));
    /* 00439cb9: add edx, dword ptr [ebp - 0x1ac] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffe54u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00439cbf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00439cc1: cmp edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439cc4: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00439cc7: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00439cca: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439ccc: je 0x439cd5 */ if (fZ) goto L_00439cd5;
L_00439cce:; BB(0x00439cce);
    /* 00439cce: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
L_00439cd5:; BB(0x00439cd5);
    /* 00439cd5: jmp 0x43acbd */ goto L_0043acbd;
L_00439cda:; BB(0x00439cda);
    /* 00439cda: mov edx, dword ptr [ebp - 0x318] */ r_edx = R32((u32)(r_ebp+0xfffffce8u));
    /* 00439ce0: mov eax, dword ptr [edx + 0xac4] */ r_eax = R32((u32)(r_edx+0xac4u));
    /* 00439ce6: mov dword ptr [ebp - 0x1b0], eax */ W32((u32)(r_ebp+0xfffffe50u), r_eax);
    /* 00439cec: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00439cee: cmp dword ptr [ebp - 0x1b0], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffe50u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439cf5: setne cl */ r_ecx = (r_ecx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 00439cf8: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 00439cfb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439cfd: jne 0x439dc1 */ if (!fZ) goto L_00439dc1;
L_00439d03:; BB(0x00439d03);
    /* 00439d03: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00439d05: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00439d08: mov ecx, dword ptr [ebp - 0x318] */ r_ecx = R32((u32)(r_ebp+0xfffffce8u));
    /* 00439d0e: mov edx, dword ptr [ecx + eax + 0xacc] */ r_edx = R32((u32)(r_ecx+r_eax+0xaccu));
    /* 00439d15: mov dword ptr [ebp - 0x1b4], edx */ W32((u32)(r_ebp+0xfffffe4cu), r_edx);
    /* 00439d1b: mov eax, 1 */ r_eax = 0x1u;
    /* 00439d20: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00439d23: mov ecx, dword ptr [ebp - 0x318] */ r_ecx = R32((u32)(r_ebp+0xfffffce8u));
    /* 00439d29: mov edx, dword ptr [ecx + eax + 0xacc] */ r_edx = R32((u32)(r_ecx+r_eax+0xaccu));
    /* 00439d30: mov dword ptr [ebp - 0x1b8], edx */ W32((u32)(r_ebp+0xfffffe48u), r_edx);
    /* 00439d36: mov eax, dword ptr [ebp - 0x1b4] */ r_eax = R32((u32)(r_ebp+0xfffffe4cu));
    /* 00439d3c: add eax, dword ptr [ebp - 0x1b8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffe48u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00439d42: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00439d44: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439d47: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00439d4a: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 00439d4d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439d4f: jne 0x439d9f */ if (!fZ) goto L_00439d9f;
L_00439d51:; BB(0x00439d51);
    /* 00439d51: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00439d53: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00439d56: mov ecx, dword ptr [ebp - 0x318] */ r_ecx = R32((u32)(r_ebp+0xfffffce8u));
    /* 00439d5c: mov edx, dword ptr [ecx + eax + 0xacc] */ r_edx = R32((u32)(r_ecx+r_eax+0xaccu));
    /* 00439d63: mov dword ptr [ebp - 0x1bc], edx */ W32((u32)(r_ebp+0xfffffe44u), r_edx);
    /* 00439d69: mov eax, 1 */ r_eax = 0x1u;
    /* 00439d6e: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00439d71: mov ecx, dword ptr [ebp - 0x318] */ r_ecx = R32((u32)(r_ebp+0xfffffce8u));
    /* 00439d77: mov edx, dword ptr [ecx + eax + 0xacc] */ r_edx = R32((u32)(r_ecx+r_eax+0xaccu));
    /* 00439d7e: mov dword ptr [ebp - 0x1c0], edx */ W32((u32)(r_ebp+0xfffffe40u), r_edx);
    /* 00439d84: mov eax, dword ptr [ebp - 0x1bc] */ r_eax = R32((u32)(r_ebp+0xfffffe44u));
    /* 00439d8a: add eax, dword ptr [ebp - 0x1c0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffe40u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00439d90: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00439d92: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439d95: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00439d98: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 00439d9b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439d9d: je 0x439dc1 */ if (fZ) goto L_00439dc1;
L_00439d9f:; BB(0x00439d9f);
    /* 00439d9f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00439da2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00439da3: mov ecx, dword ptr [ebp - 0x318] */ r_ecx = R32((u32)(r_ebp+0xfffffce8u));
    /* 00439da9: call 0x438900 */ r_esp -= 4; W32(r_esp, 0x439daeu); f_00438900();
    /* 00439dae: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00439db1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439db3: jne 0x439dc1 */ if (!fZ) goto L_00439dc1;
L_00439db5:; BB(0x00439db5);
    /* 00439db5: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 00439dbc: jmp 0x43acbd */ goto L_0043acbd;
L_00439dc1:; BB(0x00439dc1);
    /* 00439dc1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00439dc3: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00439dc6: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 00439dcc: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 00439dd3: mov dword ptr [ebp - 0x1c4], ecx */ W32((u32)(r_ebp+0xfffffe3cu), r_ecx);
    /* 00439dd9: mov edx, 1 */ r_edx = 0x1u;
    /* 00439dde: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00439de1: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 00439de7: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 00439dee: mov dword ptr [ebp - 0x1c8], ecx */ W32((u32)(r_ebp+0xfffffe38u), r_ecx);
    /* 00439df4: mov edx, dword ptr [ebp - 0x1c4] */ r_edx = R32((u32)(r_ebp+0xfffffe3cu));
    /* 00439dfa: add edx, dword ptr [ebp - 0x1c8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffe38u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00439e00: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00439e02: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439e05: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00439e08: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00439e0b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439e0d: je 0x439e16 */ if (fZ) goto L_00439e16;
L_00439e0f:; BB(0x00439e0f);
    /* 00439e0f: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
L_00439e16:; BB(0x00439e16);
    /* 00439e16: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00439e18: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00439e1b: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 00439e21: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 00439e28: mov dword ptr [ebp - 0x1cc], ecx */ W32((u32)(r_ebp+0xfffffe34u), r_ecx);
    /* 00439e2e: mov edx, 1 */ r_edx = 0x1u;
    /* 00439e33: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00439e36: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 00439e3c: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 00439e43: mov dword ptr [ebp - 0x1d0], ecx */ W32((u32)(r_ebp+0xfffffe30u), r_ecx);
    /* 00439e49: mov edx, dword ptr [ebp - 0x1cc] */ r_edx = R32((u32)(r_ebp+0xfffffe34u));
    /* 00439e4f: add edx, dword ptr [ebp - 0x1d0] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffe30u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00439e55: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00439e57: cmp edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439e5a: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00439e5d: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00439e60: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439e62: je 0x439e6b */ if (fZ) goto L_00439e6b;
L_00439e64:; BB(0x00439e64);
    /* 00439e64: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
L_00439e6b:; BB(0x00439e6b);
    /* 00439e6b: jmp 0x43acbd */ goto L_0043acbd;
L_00439e70:; BB(0x00439e70);
    /* 00439e70: mov edx, dword ptr [ebp - 0x318] */ r_edx = R32((u32)(r_ebp+0xfffffce8u));
    /* 00439e76: mov eax, dword ptr [edx + 0xac4] */ r_eax = R32((u32)(r_edx+0xac4u));
    /* 00439e7c: mov dword ptr [ebp - 0x1d4], eax */ W32((u32)(r_ebp+0xfffffe2cu), r_eax);
    /* 00439e82: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00439e84: cmp dword ptr [ebp - 0x1d4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffe2cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439e8b: setne cl */ r_ecx = (r_ecx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 00439e8e: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 00439e91: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439e93: jne 0x439f57 */ if (!fZ) goto L_00439f57;
L_00439e99:; BB(0x00439e99);
    /* 00439e99: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00439e9b: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00439e9e: mov ecx, dword ptr [ebp - 0x318] */ r_ecx = R32((u32)(r_ebp+0xfffffce8u));
    /* 00439ea4: mov edx, dword ptr [ecx + eax + 0xacc] */ r_edx = R32((u32)(r_ecx+r_eax+0xaccu));
    /* 00439eab: mov dword ptr [ebp - 0x1d8], edx */ W32((u32)(r_ebp+0xfffffe28u), r_edx);
    /* 00439eb1: mov eax, 1 */ r_eax = 0x1u;
    /* 00439eb6: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00439eb9: mov ecx, dword ptr [ebp - 0x318] */ r_ecx = R32((u32)(r_ebp+0xfffffce8u));
    /* 00439ebf: mov edx, dword ptr [ecx + eax + 0xacc] */ r_edx = R32((u32)(r_ecx+r_eax+0xaccu));
    /* 00439ec6: mov dword ptr [ebp - 0x1dc], edx */ W32((u32)(r_ebp+0xfffffe24u), r_edx);
    /* 00439ecc: mov eax, dword ptr [ebp - 0x1d8] */ r_eax = R32((u32)(r_ebp+0xfffffe28u));
    /* 00439ed2: add eax, dword ptr [ebp - 0x1dc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffe24u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00439ed8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00439eda: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439edd: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00439ee0: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 00439ee3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439ee5: jne 0x439f35 */ if (!fZ) goto L_00439f35;
L_00439ee7:; BB(0x00439ee7);
    /* 00439ee7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00439ee9: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00439eec: mov ecx, dword ptr [ebp - 0x318] */ r_ecx = R32((u32)(r_ebp+0xfffffce8u));
    /* 00439ef2: mov edx, dword ptr [ecx + eax + 0xacc] */ r_edx = R32((u32)(r_ecx+r_eax+0xaccu));
    /* 00439ef9: mov dword ptr [ebp - 0x1e0], edx */ W32((u32)(r_ebp+0xfffffe20u), r_edx);
    /* 00439eff: mov eax, 1 */ r_eax = 0x1u;
    /* 00439f04: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00439f07: mov ecx, dword ptr [ebp - 0x318] */ r_ecx = R32((u32)(r_ebp+0xfffffce8u));
    /* 00439f0d: mov edx, dword ptr [ecx + eax + 0xacc] */ r_edx = R32((u32)(r_ecx+r_eax+0xaccu));
    /* 00439f14: mov dword ptr [ebp - 0x1e4], edx */ W32((u32)(r_ebp+0xfffffe1cu), r_edx);
    /* 00439f1a: mov eax, dword ptr [ebp - 0x1e0] */ r_eax = R32((u32)(r_ebp+0xfffffe20u));
    /* 00439f20: add eax, dword ptr [ebp - 0x1e4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffe1cu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00439f26: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00439f28: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439f2b: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00439f2e: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 00439f31: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439f33: je 0x439f57 */ if (fZ) goto L_00439f57;
L_00439f35:; BB(0x00439f35);
    /* 00439f35: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00439f38: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00439f39: mov ecx, dword ptr [ebp - 0x318] */ r_ecx = R32((u32)(r_ebp+0xfffffce8u));
    /* 00439f3f: call 0x438900 */ r_esp -= 4; W32(r_esp, 0x439f44u); f_00438900();
    /* 00439f44: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00439f47: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439f49: jne 0x439f57 */ if (!fZ) goto L_00439f57;
L_00439f4b:; BB(0x00439f4b);
    /* 00439f4b: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 00439f52: jmp 0x43acbd */ goto L_0043acbd;
L_00439f57:; BB(0x00439f57);
    /* 00439f57: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00439f59: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00439f5c: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 00439f62: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 00439f69: mov dword ptr [ebp - 0x1e8], ecx */ W32((u32)(r_ebp+0xfffffe18u), r_ecx);
    /* 00439f6f: mov edx, 1 */ r_edx = 0x1u;
    /* 00439f74: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00439f77: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 00439f7d: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 00439f84: mov dword ptr [ebp - 0x1ec], ecx */ W32((u32)(r_ebp+0xfffffe14u), r_ecx);
    /* 00439f8a: mov edx, dword ptr [ebp - 0x1e8] */ r_edx = R32((u32)(r_ebp+0xfffffe18u));
    /* 00439f90: add edx, dword ptr [ebp - 0x1ec] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffe14u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00439f96: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00439f98: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439f9b: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00439f9e: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00439fa1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439fa3: je 0x439fac */ if (fZ) goto L_00439fac;
L_00439fa5:; BB(0x00439fa5);
    /* 00439fa5: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
L_00439fac:; BB(0x00439fac);
    /* 00439fac: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00439fae: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00439fb1: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 00439fb7: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 00439fbe: mov dword ptr [ebp - 0x1f0], ecx */ W32((u32)(r_ebp+0xfffffe10u), r_ecx);
    /* 00439fc4: mov edx, 1 */ r_edx = 0x1u;
    /* 00439fc9: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00439fcc: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 00439fd2: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 00439fd9: mov dword ptr [ebp - 0x1f4], ecx */ W32((u32)(r_ebp+0xfffffe0cu), r_ecx);
    /* 00439fdf: mov edx, dword ptr [ebp - 0x1f0] */ r_edx = R32((u32)(r_ebp+0xfffffe10u));
    /* 00439fe5: add edx, dword ptr [ebp - 0x1f4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffe0cu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00439feb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00439fed: cmp edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439ff0: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00439ff3: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00439ff6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00439ff8: je 0x43a001 */ if (fZ) goto L_0043a001;
L_00439ffa:; BB(0x00439ffa);
    /* 00439ffa: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
L_0043a001:; BB(0x0043a001);
    /* 0043a001: jmp 0x43acbd */ goto L_0043acbd;
L_0043a006:; BB(0x0043a006);
    /* 0043a006: mov edx, dword ptr [ebp - 0x318] */ r_edx = R32((u32)(r_ebp+0xfffffce8u));
    /* 0043a00c: mov eax, dword ptr [edx + 0xac4] */ r_eax = R32((u32)(r_edx+0xac4u));
    /* 0043a012: mov dword ptr [ebp - 0x1f8], eax */ W32((u32)(r_ebp+0xfffffe08u), r_eax);
    /* 0043a018: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0043a01a: cmp dword ptr [ebp - 0x1f8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffe08u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a021: setne cl */ r_ecx = (r_ecx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0043a024: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 0043a027: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a029: jne 0x43a0ed */ if (!fZ) goto L_0043a0ed;
L_0043a02f:; BB(0x0043a02f);
    /* 0043a02f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043a031: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0043a034: mov ecx, dword ptr [ebp - 0x318] */ r_ecx = R32((u32)(r_ebp+0xfffffce8u));
    /* 0043a03a: mov edx, dword ptr [ecx + eax + 0xacc] */ r_edx = R32((u32)(r_ecx+r_eax+0xaccu));
    /* 0043a041: mov dword ptr [ebp - 0x1fc], edx */ W32((u32)(r_ebp+0xfffffe04u), r_edx);
    /* 0043a047: mov eax, 1 */ r_eax = 0x1u;
    /* 0043a04c: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0043a04f: mov ecx, dword ptr [ebp - 0x318] */ r_ecx = R32((u32)(r_ebp+0xfffffce8u));
    /* 0043a055: mov edx, dword ptr [ecx + eax + 0xacc] */ r_edx = R32((u32)(r_ecx+r_eax+0xaccu));
    /* 0043a05c: mov dword ptr [ebp - 0x200], edx */ W32((u32)(r_ebp+0xfffffe00u), r_edx);
    /* 0043a062: mov eax, dword ptr [ebp - 0x1fc] */ r_eax = R32((u32)(r_ebp+0xfffffe04u));
    /* 0043a068: add eax, dword ptr [ebp - 0x200] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffe00u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043a06e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0043a070: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a073: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0043a076: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 0043a079: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a07b: jne 0x43a0cb */ if (!fZ) goto L_0043a0cb;
L_0043a07d:; BB(0x0043a07d);
    /* 0043a07d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043a07f: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0043a082: mov ecx, dword ptr [ebp - 0x318] */ r_ecx = R32((u32)(r_ebp+0xfffffce8u));
    /* 0043a088: mov edx, dword ptr [ecx + eax + 0xacc] */ r_edx = R32((u32)(r_ecx+r_eax+0xaccu));
    /* 0043a08f: mov dword ptr [ebp - 0x204], edx */ W32((u32)(r_ebp+0xfffffdfcu), r_edx);
    /* 0043a095: mov eax, 1 */ r_eax = 0x1u;
    /* 0043a09a: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0043a09d: mov ecx, dword ptr [ebp - 0x318] */ r_ecx = R32((u32)(r_ebp+0xfffffce8u));
    /* 0043a0a3: mov edx, dword ptr [ecx + eax + 0xacc] */ r_edx = R32((u32)(r_ecx+r_eax+0xaccu));
    /* 0043a0aa: mov dword ptr [ebp - 0x208], edx */ W32((u32)(r_ebp+0xfffffdf8u), r_edx);
    /* 0043a0b0: mov eax, dword ptr [ebp - 0x204] */ r_eax = R32((u32)(r_ebp+0xfffffdfcu));
    /* 0043a0b6: add eax, dword ptr [ebp - 0x208] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffdf8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043a0bc: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0043a0be: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a0c1: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0043a0c4: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 0043a0c7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a0c9: je 0x43a0ed */ if (fZ) goto L_0043a0ed;
L_0043a0cb:; BB(0x0043a0cb);
    /* 0043a0cb: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043a0ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043a0cf: mov ecx, dword ptr [ebp - 0x318] */ r_ecx = R32((u32)(r_ebp+0xfffffce8u));
    /* 0043a0d5: call 0x438900 */ r_esp -= 4; W32(r_esp, 0x43a0dau); f_00438900();
    /* 0043a0da: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0043a0dd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a0df: jne 0x43a0ed */ if (!fZ) goto L_0043a0ed;
L_0043a0e1:; BB(0x0043a0e1);
    /* 0043a0e1: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0043a0e8: jmp 0x43acbd */ goto L_0043acbd;
L_0043a0ed:; BB(0x0043a0ed);
    /* 0043a0ed: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0043a0ef: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0043a0f2: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 0043a0f8: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 0043a0ff: mov dword ptr [ebp - 0x20c], ecx */ W32((u32)(r_ebp+0xfffffdf4u), r_ecx);
    /* 0043a105: mov edx, 1 */ r_edx = 0x1u;
    /* 0043a10a: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0043a10d: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 0043a113: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 0043a11a: mov dword ptr [ebp - 0x210], ecx */ W32((u32)(r_ebp+0xfffffdf0u), r_ecx);
    /* 0043a120: mov edx, dword ptr [ebp - 0x20c] */ r_edx = R32((u32)(r_ebp+0xfffffdf4u));
    /* 0043a126: add edx, dword ptr [ebp - 0x210] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffdf0u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043a12c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043a12e: cmp edx, 9 */ {  u32 a = r_edx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a131: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0043a134: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0043a137: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a139: je 0x43a142 */ if (fZ) goto L_0043a142;
L_0043a13b:; BB(0x0043a13b);
    /* 0043a13b: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
L_0043a142:; BB(0x0043a142);
    /* 0043a142: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0043a144: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0043a147: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 0043a14d: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 0043a154: mov dword ptr [ebp - 0x214], ecx */ W32((u32)(r_ebp+0xfffffdecu), r_ecx);
    /* 0043a15a: mov edx, 1 */ r_edx = 0x1u;
    /* 0043a15f: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0043a162: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 0043a168: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 0043a16f: mov dword ptr [ebp - 0x218], ecx */ W32((u32)(r_ebp+0xfffffde8u), r_ecx);
    /* 0043a175: mov edx, dword ptr [ebp - 0x214] */ r_edx = R32((u32)(r_ebp+0xfffffdecu));
    /* 0043a17b: add edx, dword ptr [ebp - 0x218] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffde8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043a181: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043a183: cmp edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a186: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0043a189: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0043a18c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a18e: je 0x43a197 */ if (fZ) goto L_0043a197;
L_0043a190:; BB(0x0043a190);
    /* 0043a190: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
L_0043a197:; BB(0x0043a197);
    /* 0043a197: jmp 0x43acbd */ goto L_0043acbd;
L_0043a19c:; BB(0x0043a19c);
    /* 0043a19c: mov edx, dword ptr [ebp - 0x318] */ r_edx = R32((u32)(r_ebp+0xfffffce8u));
    /* 0043a1a2: mov eax, dword ptr [edx + 0xac4] */ r_eax = R32((u32)(r_edx+0xac4u));
    /* 0043a1a8: mov dword ptr [ebp - 0x21c], eax */ W32((u32)(r_ebp+0xfffffde4u), r_eax);
    /* 0043a1ae: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0043a1b0: cmp dword ptr [ebp - 0x21c], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffde4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a1b7: setne cl */ r_ecx = (r_ecx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0043a1ba: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 0043a1bd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a1bf: jne 0x43a283 */ if (!fZ) goto L_0043a283;
L_0043a1c5:; BB(0x0043a1c5);
    /* 0043a1c5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043a1c7: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0043a1ca: mov ecx, dword ptr [ebp - 0x318] */ r_ecx = R32((u32)(r_ebp+0xfffffce8u));
    /* 0043a1d0: mov edx, dword ptr [ecx + eax + 0xacc] */ r_edx = R32((u32)(r_ecx+r_eax+0xaccu));
    /* 0043a1d7: mov dword ptr [ebp - 0x220], edx */ W32((u32)(r_ebp+0xfffffde0u), r_edx);
    /* 0043a1dd: mov eax, 1 */ r_eax = 0x1u;
    /* 0043a1e2: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0043a1e5: mov ecx, dword ptr [ebp - 0x318] */ r_ecx = R32((u32)(r_ebp+0xfffffce8u));
    /* 0043a1eb: mov edx, dword ptr [ecx + eax + 0xacc] */ r_edx = R32((u32)(r_ecx+r_eax+0xaccu));
    /* 0043a1f2: mov dword ptr [ebp - 0x224], edx */ W32((u32)(r_ebp+0xfffffddcu), r_edx);
    /* 0043a1f8: mov eax, dword ptr [ebp - 0x220] */ r_eax = R32((u32)(r_ebp+0xfffffde0u));
    /* 0043a1fe: add eax, dword ptr [ebp - 0x224] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffddcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043a204: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0043a206: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a209: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0043a20c: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 0043a20f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a211: jne 0x43a261 */ if (!fZ) goto L_0043a261;
L_0043a213:; BB(0x0043a213);
    /* 0043a213: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043a215: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0043a218: mov ecx, dword ptr [ebp - 0x318] */ r_ecx = R32((u32)(r_ebp+0xfffffce8u));
    /* 0043a21e: mov edx, dword ptr [ecx + eax + 0xacc] */ r_edx = R32((u32)(r_ecx+r_eax+0xaccu));
    /* 0043a225: mov dword ptr [ebp - 0x228], edx */ W32((u32)(r_ebp+0xfffffdd8u), r_edx);
    /* 0043a22b: mov eax, 1 */ r_eax = 0x1u;
    /* 0043a230: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0043a233: mov ecx, dword ptr [ebp - 0x318] */ r_ecx = R32((u32)(r_ebp+0xfffffce8u));
    /* 0043a239: mov edx, dword ptr [ecx + eax + 0xacc] */ r_edx = R32((u32)(r_ecx+r_eax+0xaccu));
    /* 0043a240: mov dword ptr [ebp - 0x22c], edx */ W32((u32)(r_ebp+0xfffffdd4u), r_edx);
    /* 0043a246: mov eax, dword ptr [ebp - 0x228] */ r_eax = R32((u32)(r_ebp+0xfffffdd8u));
    /* 0043a24c: add eax, dword ptr [ebp - 0x22c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffdd4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043a252: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0043a254: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a257: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0043a25a: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 0043a25d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a25f: je 0x43a283 */ if (fZ) goto L_0043a283;
L_0043a261:; BB(0x0043a261);
    /* 0043a261: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043a264: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043a265: mov ecx, dword ptr [ebp - 0x318] */ r_ecx = R32((u32)(r_ebp+0xfffffce8u));
    /* 0043a26b: call 0x438900 */ r_esp -= 4; W32(r_esp, 0x43a270u); f_00438900();
    /* 0043a270: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0043a273: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a275: jne 0x43a283 */ if (!fZ) goto L_0043a283;
L_0043a277:; BB(0x0043a277);
    /* 0043a277: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0043a27e: jmp 0x43acbd */ goto L_0043acbd;
L_0043a283:; BB(0x0043a283);
    /* 0043a283: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0043a285: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0043a288: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 0043a28e: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 0043a295: mov dword ptr [ebp - 0x230], ecx */ W32((u32)(r_ebp+0xfffffdd0u), r_ecx);
    /* 0043a29b: mov edx, 1 */ r_edx = 0x1u;
    /* 0043a2a0: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0043a2a3: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 0043a2a9: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 0043a2b0: mov dword ptr [ebp - 0x234], ecx */ W32((u32)(r_ebp+0xfffffdccu), r_ecx);
    /* 0043a2b6: mov edx, dword ptr [ebp - 0x230] */ r_edx = R32((u32)(r_ebp+0xfffffdd0u));
    /* 0043a2bc: add edx, dword ptr [ebp - 0x234] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffdccu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043a2c2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043a2c4: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a2c7: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0043a2ca: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0043a2cd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a2cf: je 0x43a2d8 */ if (fZ) goto L_0043a2d8;
L_0043a2d1:; BB(0x0043a2d1);
    /* 0043a2d1: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
L_0043a2d8:; BB(0x0043a2d8);
    /* 0043a2d8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0043a2da: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0043a2dd: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 0043a2e3: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 0043a2ea: mov dword ptr [ebp - 0x238], ecx */ W32((u32)(r_ebp+0xfffffdc8u), r_ecx);
    /* 0043a2f0: mov edx, 1 */ r_edx = 0x1u;
    /* 0043a2f5: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0043a2f8: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 0043a2fe: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 0043a305: mov dword ptr [ebp - 0x23c], ecx */ W32((u32)(r_ebp+0xfffffdc4u), r_ecx);
    /* 0043a30b: mov edx, dword ptr [ebp - 0x238] */ r_edx = R32((u32)(r_ebp+0xfffffdc8u));
    /* 0043a311: add edx, dword ptr [ebp - 0x23c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffdc4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043a317: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043a319: cmp edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a31c: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0043a31f: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0043a322: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a324: je 0x43a32d */ if (fZ) goto L_0043a32d;
L_0043a326:; BB(0x0043a326);
    /* 0043a326: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
L_0043a32d:; BB(0x0043a32d);
    /* 0043a32d: jmp 0x43acbd */ goto L_0043acbd;
L_0043a332:; BB(0x0043a332);
    /* 0043a332: mov edx, dword ptr [ebp - 0x318] */ r_edx = R32((u32)(r_ebp+0xfffffce8u));
    /* 0043a338: mov eax, dword ptr [edx + 0xac4] */ r_eax = R32((u32)(r_edx+0xac4u));
    /* 0043a33e: mov dword ptr [ebp - 0x240], eax */ W32((u32)(r_ebp+0xfffffdc0u), r_eax);
    /* 0043a344: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0043a346: cmp dword ptr [ebp - 0x240], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffdc0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a34d: setne cl */ r_ecx = (r_ecx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0043a350: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 0043a353: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a355: jne 0x43a415 */ if (!fZ) goto L_0043a415;
L_0043a35b:; BB(0x0043a35b);
    /* 0043a35b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043a35d: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0043a360: mov ecx, dword ptr [ebp - 0x318] */ r_ecx = R32((u32)(r_ebp+0xfffffce8u));
    /* 0043a366: mov edx, dword ptr [ecx + eax + 0xacc] */ r_edx = R32((u32)(r_ecx+r_eax+0xaccu));
    /* 0043a36d: mov dword ptr [ebp - 0x244], edx */ W32((u32)(r_ebp+0xfffffdbcu), r_edx);
    /* 0043a373: mov eax, 1 */ r_eax = 0x1u;
    /* 0043a378: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0043a37b: mov ecx, dword ptr [ebp - 0x318] */ r_ecx = R32((u32)(r_ebp+0xfffffce8u));
    /* 0043a381: mov edx, dword ptr [ecx + eax + 0xacc] */ r_edx = R32((u32)(r_ecx+r_eax+0xaccu));
    /* 0043a388: mov dword ptr [ebp - 0x248], edx */ W32((u32)(r_ebp+0xfffffdb8u), r_edx);
    /* 0043a38e: mov eax, dword ptr [ebp - 0x244] */ r_eax = R32((u32)(r_ebp+0xfffffdbcu));
    /* 0043a394: add eax, dword ptr [ebp - 0x248] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffdb8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043a39a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0043a39c: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a39f: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0043a3a2: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 0043a3a5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a3a7: jne 0x43a3f7 */ if (!fZ) goto L_0043a3f7;
L_0043a3a9:; BB(0x0043a3a9);
    /* 0043a3a9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043a3ab: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0043a3ae: mov ecx, dword ptr [ebp - 0x318] */ r_ecx = R32((u32)(r_ebp+0xfffffce8u));
    /* 0043a3b4: mov edx, dword ptr [ecx + eax + 0xacc] */ r_edx = R32((u32)(r_ecx+r_eax+0xaccu));
    /* 0043a3bb: mov dword ptr [ebp - 0x24c], edx */ W32((u32)(r_ebp+0xfffffdb4u), r_edx);
    /* 0043a3c1: mov eax, 1 */ r_eax = 0x1u;
    /* 0043a3c6: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0043a3c9: mov ecx, dword ptr [ebp - 0x318] */ r_ecx = R32((u32)(r_ebp+0xfffffce8u));
    /* 0043a3cf: mov edx, dword ptr [ecx + eax + 0xacc] */ r_edx = R32((u32)(r_ecx+r_eax+0xaccu));
    /* 0043a3d6: mov dword ptr [ebp - 0x250], edx */ W32((u32)(r_ebp+0xfffffdb0u), r_edx);
    /* 0043a3dc: mov eax, dword ptr [ebp - 0x24c] */ r_eax = R32((u32)(r_ebp+0xfffffdb4u));
    /* 0043a3e2: add eax, dword ptr [ebp - 0x250] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffdb0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043a3e8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0043a3ea: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a3ed: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0043a3f0: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 0043a3f3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a3f5: je 0x43a415 */ if (fZ) goto L_0043a415;
L_0043a3f7:; BB(0x0043a3f7);
    /* 0043a3f7: mov ecx, dword ptr [ebp - 0x318] */ r_ecx = R32((u32)(r_ebp+0xfffffce8u));
    /* 0043a3fd: call 0x434410 */ r_esp -= 4; W32(r_esp, 0x43a402u); f_00434410();
    /* 0043a402: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0043a405: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a407: jne 0x43a415 */ if (!fZ) goto L_0043a415;
L_0043a409:; BB(0x0043a409);
    /* 0043a409: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0043a410: jmp 0x43acbd */ goto L_0043acbd;
L_0043a415:; BB(0x0043a415);
    /* 0043a415: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0043a417: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0043a41a: mov edx, dword ptr [ebp - 0x318] */ r_edx = R32((u32)(r_ebp+0xfffffce8u));
    /* 0043a420: mov eax, dword ptr [edx + ecx + 0xacc] */ r_eax = R32((u32)(r_edx+r_ecx+0xaccu));
    /* 0043a427: mov dword ptr [ebp - 0x254], eax */ W32((u32)(r_ebp+0xfffffdacu), r_eax);
    /* 0043a42d: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0043a432: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0043a435: mov edx, dword ptr [ebp - 0x318] */ r_edx = R32((u32)(r_ebp+0xfffffce8u));
    /* 0043a43b: mov eax, dword ptr [edx + ecx + 0xacc] */ r_eax = R32((u32)(r_edx+r_ecx+0xaccu));
    /* 0043a442: mov dword ptr [ebp - 0x258], eax */ W32((u32)(r_ebp+0xfffffda8u), r_eax);
    /* 0043a448: mov ecx, dword ptr [ebp - 0x254] */ r_ecx = R32((u32)(r_ebp+0xfffffdacu));
    /* 0043a44e: add ecx, dword ptr [ebp - 0x258] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffda8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043a454: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0043a456: cmp ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a459: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0043a45c: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 0043a45f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a461: je 0x43a46a */ if (fZ) goto L_0043a46a;
L_0043a463:; BB(0x0043a463);
    /* 0043a463: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
L_0043a46a:; BB(0x0043a46a);
    /* 0043a46a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0043a46c: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0043a46f: mov edx, dword ptr [ebp - 0x318] */ r_edx = R32((u32)(r_ebp+0xfffffce8u));
    /* 0043a475: mov eax, dword ptr [edx + ecx + 0xacc] */ r_eax = R32((u32)(r_edx+r_ecx+0xaccu));
    /* 0043a47c: mov dword ptr [ebp - 0x25c], eax */ W32((u32)(r_ebp+0xfffffda4u), r_eax);
    /* 0043a482: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0043a487: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0043a48a: mov edx, dword ptr [ebp - 0x318] */ r_edx = R32((u32)(r_ebp+0xfffffce8u));
    /* 0043a490: mov eax, dword ptr [edx + ecx + 0xacc] */ r_eax = R32((u32)(r_edx+r_ecx+0xaccu));
    /* 0043a497: mov dword ptr [ebp - 0x260], eax */ W32((u32)(r_ebp+0xfffffda0u), r_eax);
    /* 0043a49d: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 0043a4a3: add ecx, dword ptr [ebp - 0x260] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffda0u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043a4a9: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0043a4ab: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a4ae: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0043a4b1: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 0043a4b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a4b6: je 0x43a4bf */ if (fZ) goto L_0043a4bf;
L_0043a4b8:; BB(0x0043a4b8);
    /* 0043a4b8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
L_0043a4bf:; BB(0x0043a4bf);
    /* 0043a4bf: jmp 0x43acbd */ goto L_0043acbd;
L_0043a4c4:; BB(0x0043a4c4);
    /* 0043a4c4: mov ecx, dword ptr [ebp - 0x318] */ r_ecx = R32((u32)(r_ebp+0xfffffce8u));
    /* 0043a4ca: mov edx, dword ptr [ecx + 0xac4] */ r_edx = R32((u32)(r_ecx+0xac4u));
    /* 0043a4d0: mov dword ptr [ebp - 0x264], edx */ W32((u32)(r_ebp+0xfffffd9cu), r_edx);
    /* 0043a4d6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043a4d8: cmp dword ptr [ebp - 0x264], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffd9cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a4df: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0043a4e2: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0043a4e5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a4e7: jne 0x43a5a7 */ if (!fZ) goto L_0043a5a7;
L_0043a4ed:; BB(0x0043a4ed);
    /* 0043a4ed: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0043a4ef: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0043a4f2: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 0043a4f8: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 0043a4ff: mov dword ptr [ebp - 0x268], ecx */ W32((u32)(r_ebp+0xfffffd98u), r_ecx);
    /* 0043a505: mov edx, 1 */ r_edx = 0x1u;
    /* 0043a50a: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0043a50d: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 0043a513: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 0043a51a: mov dword ptr [ebp - 0x26c], ecx */ W32((u32)(r_ebp+0xfffffd94u), r_ecx);
    /* 0043a520: mov edx, dword ptr [ebp - 0x268] */ r_edx = R32((u32)(r_ebp+0xfffffd98u));
    /* 0043a526: add edx, dword ptr [ebp - 0x26c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffd94u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043a52c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043a52e: cmp edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a531: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0043a534: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0043a537: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a539: jne 0x43a589 */ if (!fZ) goto L_0043a589;
L_0043a53b:; BB(0x0043a53b);
    /* 0043a53b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0043a53d: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0043a540: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 0043a546: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 0043a54d: mov dword ptr [ebp - 0x270], ecx */ W32((u32)(r_ebp+0xfffffd90u), r_ecx);
    /* 0043a553: mov edx, 1 */ r_edx = 0x1u;
    /* 0043a558: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0043a55b: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 0043a561: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 0043a568: mov dword ptr [ebp - 0x274], ecx */ W32((u32)(r_ebp+0xfffffd8cu), r_ecx);
    /* 0043a56e: mov edx, dword ptr [ebp - 0x270] */ r_edx = R32((u32)(r_ebp+0xfffffd90u));
    /* 0043a574: add edx, dword ptr [ebp - 0x274] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffd8cu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043a57a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043a57c: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a57f: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0043a582: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0043a585: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a587: je 0x43a5a7 */ if (fZ) goto L_0043a5a7;
L_0043a589:; BB(0x0043a589);
    /* 0043a589: mov ecx, dword ptr [ebp - 0x318] */ r_ecx = R32((u32)(r_ebp+0xfffffce8u));
    /* 0043a58f: call 0x434410 */ r_esp -= 4; W32(r_esp, 0x43a594u); f_00434410();
    /* 0043a594: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0043a597: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a599: jne 0x43a5a7 */ if (!fZ) goto L_0043a5a7;
L_0043a59b:; BB(0x0043a59b);
    /* 0043a59b: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0043a5a2: jmp 0x43acbd */ goto L_0043acbd;
L_0043a5a7:; BB(0x0043a5a7);
    /* 0043a5a7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043a5a9: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0043a5ac: mov ecx, dword ptr [ebp - 0x318] */ r_ecx = R32((u32)(r_ebp+0xfffffce8u));
    /* 0043a5b2: mov edx, dword ptr [ecx + eax + 0xacc] */ r_edx = R32((u32)(r_ecx+r_eax+0xaccu));
    /* 0043a5b9: mov dword ptr [ebp - 0x278], edx */ W32((u32)(r_ebp+0xfffffd88u), r_edx);
    /* 0043a5bf: mov eax, 1 */ r_eax = 0x1u;
    /* 0043a5c4: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0043a5c7: mov ecx, dword ptr [ebp - 0x318] */ r_ecx = R32((u32)(r_ebp+0xfffffce8u));
    /* 0043a5cd: mov edx, dword ptr [ecx + eax + 0xacc] */ r_edx = R32((u32)(r_ecx+r_eax+0xaccu));
    /* 0043a5d4: mov dword ptr [ebp - 0x27c], edx */ W32((u32)(r_ebp+0xfffffd84u), r_edx);
    /* 0043a5da: mov eax, dword ptr [ebp - 0x278] */ r_eax = R32((u32)(r_ebp+0xfffffd88u));
    /* 0043a5e0: add eax, dword ptr [ebp - 0x27c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffd84u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043a5e6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0043a5e8: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a5eb: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0043a5ee: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 0043a5f1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a5f3: je 0x43a5fc */ if (fZ) goto L_0043a5fc;
L_0043a5f5:; BB(0x0043a5f5);
    /* 0043a5f5: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
L_0043a5fc:; BB(0x0043a5fc);
    /* 0043a5fc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043a5fe: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0043a601: mov ecx, dword ptr [ebp - 0x318] */ r_ecx = R32((u32)(r_ebp+0xfffffce8u));
    /* 0043a607: mov edx, dword ptr [ecx + eax + 0xacc] */ r_edx = R32((u32)(r_ecx+r_eax+0xaccu));
    /* 0043a60e: mov dword ptr [ebp - 0x280], edx */ W32((u32)(r_ebp+0xfffffd80u), r_edx);
    /* 0043a614: mov eax, 1 */ r_eax = 0x1u;
    /* 0043a619: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0043a61c: mov ecx, dword ptr [ebp - 0x318] */ r_ecx = R32((u32)(r_ebp+0xfffffce8u));
    /* 0043a622: mov edx, dword ptr [ecx + eax + 0xacc] */ r_edx = R32((u32)(r_ecx+r_eax+0xaccu));
    /* 0043a629: mov dword ptr [ebp - 0x284], edx */ W32((u32)(r_ebp+0xfffffd7cu), r_edx);
    /* 0043a62f: mov eax, dword ptr [ebp - 0x280] */ r_eax = R32((u32)(r_ebp+0xfffffd80u));
    /* 0043a635: add eax, dword ptr [ebp - 0x284] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffd7cu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043a63b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0043a63d: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a640: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0043a643: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 0043a646: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a648: je 0x43a651 */ if (fZ) goto L_0043a651;
L_0043a64a:; BB(0x0043a64a);
    /* 0043a64a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
L_0043a651:; BB(0x0043a651);
    /* 0043a651: jmp 0x43acbd */ goto L_0043acbd;
L_0043a656:; BB(0x0043a656);
    /* 0043a656: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 0043a65c: mov ecx, dword ptr [eax + 0xac4] */ r_ecx = R32((u32)(r_eax+0xac4u));
    /* 0043a662: mov dword ptr [ebp - 0x288], ecx */ W32((u32)(r_ebp+0xfffffd78u), r_ecx);
    /* 0043a668: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0043a66a: cmp dword ptr [ebp - 0x288], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffd78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a671: setne dl */ r_edx = (r_edx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0043a674: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 0043a677: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a679: jne 0x43a739 */ if (!fZ) goto L_0043a739;
L_0043a67f:; BB(0x0043a67f);
    /* 0043a67f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0043a681: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0043a684: mov edx, dword ptr [ebp - 0x318] */ r_edx = R32((u32)(r_ebp+0xfffffce8u));
    /* 0043a68a: mov eax, dword ptr [edx + ecx + 0xacc] */ r_eax = R32((u32)(r_edx+r_ecx+0xaccu));
    /* 0043a691: mov dword ptr [ebp - 0x28c], eax */ W32((u32)(r_ebp+0xfffffd74u), r_eax);
    /* 0043a697: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0043a69c: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0043a69f: mov edx, dword ptr [ebp - 0x318] */ r_edx = R32((u32)(r_ebp+0xfffffce8u));
    /* 0043a6a5: mov eax, dword ptr [edx + ecx + 0xacc] */ r_eax = R32((u32)(r_edx+r_ecx+0xaccu));
    /* 0043a6ac: mov dword ptr [ebp - 0x290], eax */ W32((u32)(r_ebp+0xfffffd70u), r_eax);
    /* 0043a6b2: mov ecx, dword ptr [ebp - 0x28c] */ r_ecx = R32((u32)(r_ebp+0xfffffd74u));
    /* 0043a6b8: add ecx, dword ptr [ebp - 0x290] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffd70u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043a6be: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0043a6c0: cmp ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a6c3: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0043a6c6: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 0043a6c9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a6cb: jne 0x43a71b */ if (!fZ) goto L_0043a71b;
L_0043a6cd:; BB(0x0043a6cd);
    /* 0043a6cd: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0043a6cf: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0043a6d2: mov edx, dword ptr [ebp - 0x318] */ r_edx = R32((u32)(r_ebp+0xfffffce8u));
    /* 0043a6d8: mov eax, dword ptr [edx + ecx + 0xacc] */ r_eax = R32((u32)(r_edx+r_ecx+0xaccu));
    /* 0043a6df: mov dword ptr [ebp - 0x294], eax */ W32((u32)(r_ebp+0xfffffd6cu), r_eax);
    /* 0043a6e5: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0043a6ea: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0043a6ed: mov edx, dword ptr [ebp - 0x318] */ r_edx = R32((u32)(r_ebp+0xfffffce8u));
    /* 0043a6f3: mov eax, dword ptr [edx + ecx + 0xacc] */ r_eax = R32((u32)(r_edx+r_ecx+0xaccu));
    /* 0043a6fa: mov dword ptr [ebp - 0x298], eax */ W32((u32)(r_ebp+0xfffffd68u), r_eax);
    /* 0043a700: mov ecx, dword ptr [ebp - 0x294] */ r_ecx = R32((u32)(r_ebp+0xfffffd6cu));
    /* 0043a706: add ecx, dword ptr [ebp - 0x298] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffd68u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043a70c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0043a70e: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a711: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0043a714: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 0043a717: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a719: je 0x43a739 */ if (fZ) goto L_0043a739;
L_0043a71b:; BB(0x0043a71b);
    /* 0043a71b: mov ecx, dword ptr [ebp - 0x318] */ r_ecx = R32((u32)(r_ebp+0xfffffce8u));
    /* 0043a721: call 0x434410 */ r_esp -= 4; W32(r_esp, 0x43a726u); f_00434410();
    /* 0043a726: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0043a729: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a72b: jne 0x43a739 */ if (!fZ) goto L_0043a739;
L_0043a72d:; BB(0x0043a72d);
    /* 0043a72d: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0043a734: jmp 0x43acbd */ goto L_0043acbd;
L_0043a739:; BB(0x0043a739);
    /* 0043a739: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0043a73b: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0043a73e: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 0043a744: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 0043a74b: mov dword ptr [ebp - 0x29c], ecx */ W32((u32)(r_ebp+0xfffffd64u), r_ecx);
    /* 0043a751: mov edx, 1 */ r_edx = 0x1u;
    /* 0043a756: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0043a759: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 0043a75f: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 0043a766: mov dword ptr [ebp - 0x2a0], ecx */ W32((u32)(r_ebp+0xfffffd60u), r_ecx);
    /* 0043a76c: mov edx, dword ptr [ebp - 0x29c] */ r_edx = R32((u32)(r_ebp+0xfffffd64u));
    /* 0043a772: add edx, dword ptr [ebp - 0x2a0] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffd60u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043a778: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043a77a: cmp edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a77d: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0043a780: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0043a783: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a785: je 0x43a78e */ if (fZ) goto L_0043a78e;
L_0043a787:; BB(0x0043a787);
    /* 0043a787: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
L_0043a78e:; BB(0x0043a78e);
    /* 0043a78e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0043a790: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0043a793: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 0043a799: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 0043a7a0: mov dword ptr [ebp - 0x2a4], ecx */ W32((u32)(r_ebp+0xfffffd5cu), r_ecx);
    /* 0043a7a6: mov edx, 1 */ r_edx = 0x1u;
    /* 0043a7ab: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0043a7ae: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 0043a7b4: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 0043a7bb: mov dword ptr [ebp - 0x2a8], ecx */ W32((u32)(r_ebp+0xfffffd58u), r_ecx);
    /* 0043a7c1: mov edx, dword ptr [ebp - 0x2a4] */ r_edx = R32((u32)(r_ebp+0xfffffd5cu));
    /* 0043a7c7: add edx, dword ptr [ebp - 0x2a8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffd58u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043a7cd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043a7cf: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a7d2: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0043a7d5: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0043a7d8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a7da: je 0x43a7e3 */ if (fZ) goto L_0043a7e3;
L_0043a7dc:; BB(0x0043a7dc);
    /* 0043a7dc: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
L_0043a7e3:; BB(0x0043a7e3);
    /* 0043a7e3: jmp 0x43acbd */ goto L_0043acbd;
L_0043a7e8:; BB(0x0043a7e8);
    /* 0043a7e8: mov edx, dword ptr [ebp - 0x318] */ r_edx = R32((u32)(r_ebp+0xfffffce8u));
    /* 0043a7ee: mov eax, dword ptr [edx + 0xac4] */ r_eax = R32((u32)(r_edx+0xac4u));
    /* 0043a7f4: mov dword ptr [ebp - 0x2ac], eax */ W32((u32)(r_ebp+0xfffffd54u), r_eax);
    /* 0043a7fa: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0043a7fc: cmp dword ptr [ebp - 0x2ac], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffd54u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a803: setne cl */ r_ecx = (r_ecx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0043a806: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 0043a809: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a80b: jne 0x43a8cb */ if (!fZ) goto L_0043a8cb;
L_0043a811:; BB(0x0043a811);
    /* 0043a811: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043a813: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0043a816: mov ecx, dword ptr [ebp - 0x318] */ r_ecx = R32((u32)(r_ebp+0xfffffce8u));
    /* 0043a81c: mov edx, dword ptr [ecx + eax + 0xacc] */ r_edx = R32((u32)(r_ecx+r_eax+0xaccu));
    /* 0043a823: mov dword ptr [ebp - 0x2b0], edx */ W32((u32)(r_ebp+0xfffffd50u), r_edx);
    /* 0043a829: mov eax, 1 */ r_eax = 0x1u;
    /* 0043a82e: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0043a831: mov ecx, dword ptr [ebp - 0x318] */ r_ecx = R32((u32)(r_ebp+0xfffffce8u));
    /* 0043a837: mov edx, dword ptr [ecx + eax + 0xacc] */ r_edx = R32((u32)(r_ecx+r_eax+0xaccu));
    /* 0043a83e: mov dword ptr [ebp - 0x2b4], edx */ W32((u32)(r_ebp+0xfffffd4cu), r_edx);
    /* 0043a844: mov eax, dword ptr [ebp - 0x2b0] */ r_eax = R32((u32)(r_ebp+0xfffffd50u));
    /* 0043a84a: add eax, dword ptr [ebp - 0x2b4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffd4cu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043a850: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0043a852: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a855: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0043a858: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 0043a85b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a85d: jne 0x43a8ad */ if (!fZ) goto L_0043a8ad;
L_0043a85f:; BB(0x0043a85f);
    /* 0043a85f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043a861: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0043a864: mov ecx, dword ptr [ebp - 0x318] */ r_ecx = R32((u32)(r_ebp+0xfffffce8u));
    /* 0043a86a: mov edx, dword ptr [ecx + eax + 0xacc] */ r_edx = R32((u32)(r_ecx+r_eax+0xaccu));
    /* 0043a871: mov dword ptr [ebp - 0x2b8], edx */ W32((u32)(r_ebp+0xfffffd48u), r_edx);
    /* 0043a877: mov eax, 1 */ r_eax = 0x1u;
    /* 0043a87c: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0043a87f: mov ecx, dword ptr [ebp - 0x318] */ r_ecx = R32((u32)(r_ebp+0xfffffce8u));
    /* 0043a885: mov edx, dword ptr [ecx + eax + 0xacc] */ r_edx = R32((u32)(r_ecx+r_eax+0xaccu));
    /* 0043a88c: mov dword ptr [ebp - 0x2bc], edx */ W32((u32)(r_ebp+0xfffffd44u), r_edx);
    /* 0043a892: mov eax, dword ptr [ebp - 0x2b8] */ r_eax = R32((u32)(r_ebp+0xfffffd48u));
    /* 0043a898: add eax, dword ptr [ebp - 0x2bc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffd44u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043a89e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0043a8a0: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a8a3: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0043a8a6: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 0043a8a9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a8ab: je 0x43a8cb */ if (fZ) goto L_0043a8cb;
L_0043a8ad:; BB(0x0043a8ad);
    /* 0043a8ad: mov ecx, dword ptr [ebp - 0x318] */ r_ecx = R32((u32)(r_ebp+0xfffffce8u));
    /* 0043a8b3: call 0x434410 */ r_esp -= 4; W32(r_esp, 0x43a8b8u); f_00434410();
    /* 0043a8b8: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0043a8bb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a8bd: jne 0x43a8cb */ if (!fZ) goto L_0043a8cb;
L_0043a8bf:; BB(0x0043a8bf);
    /* 0043a8bf: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0043a8c6: jmp 0x43acbd */ goto L_0043acbd;
L_0043a8cb:; BB(0x0043a8cb);
    /* 0043a8cb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0043a8cd: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0043a8d0: mov edx, dword ptr [ebp - 0x318] */ r_edx = R32((u32)(r_ebp+0xfffffce8u));
    /* 0043a8d6: mov eax, dword ptr [edx + ecx + 0xacc] */ r_eax = R32((u32)(r_edx+r_ecx+0xaccu));
    /* 0043a8dd: mov dword ptr [ebp - 0x2c0], eax */ W32((u32)(r_ebp+0xfffffd40u), r_eax);
    /* 0043a8e3: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0043a8e8: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0043a8eb: mov edx, dword ptr [ebp - 0x318] */ r_edx = R32((u32)(r_ebp+0xfffffce8u));
    /* 0043a8f1: mov eax, dword ptr [edx + ecx + 0xacc] */ r_eax = R32((u32)(r_edx+r_ecx+0xaccu));
    /* 0043a8f8: mov dword ptr [ebp - 0x2c4], eax */ W32((u32)(r_ebp+0xfffffd3cu), r_eax);
    /* 0043a8fe: mov ecx, dword ptr [ebp - 0x2c0] */ r_ecx = R32((u32)(r_ebp+0xfffffd40u));
    /* 0043a904: add ecx, dword ptr [ebp - 0x2c4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffd3cu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043a90a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0043a90c: cmp ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a90f: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0043a912: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 0043a915: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a917: je 0x43a920 */ if (fZ) goto L_0043a920;
L_0043a919:; BB(0x0043a919);
    /* 0043a919: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
L_0043a920:; BB(0x0043a920);
    /* 0043a920: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0043a922: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0043a925: mov edx, dword ptr [ebp - 0x318] */ r_edx = R32((u32)(r_ebp+0xfffffce8u));
    /* 0043a92b: mov eax, dword ptr [edx + ecx + 0xacc] */ r_eax = R32((u32)(r_edx+r_ecx+0xaccu));
    /* 0043a932: mov dword ptr [ebp - 0x2c8], eax */ W32((u32)(r_ebp+0xfffffd38u), r_eax);
    /* 0043a938: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0043a93d: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0043a940: mov edx, dword ptr [ebp - 0x318] */ r_edx = R32((u32)(r_ebp+0xfffffce8u));
    /* 0043a946: mov eax, dword ptr [edx + ecx + 0xacc] */ r_eax = R32((u32)(r_edx+r_ecx+0xaccu));
    /* 0043a94d: mov dword ptr [ebp - 0x2cc], eax */ W32((u32)(r_ebp+0xfffffd34u), r_eax);
    /* 0043a953: mov ecx, dword ptr [ebp - 0x2c8] */ r_ecx = R32((u32)(r_ebp+0xfffffd38u));
    /* 0043a959: add ecx, dword ptr [ebp - 0x2cc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffd34u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043a95f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0043a961: cmp ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a964: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0043a967: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 0043a96a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a96c: je 0x43a975 */ if (fZ) goto L_0043a975;
L_0043a96e:; BB(0x0043a96e);
    /* 0043a96e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
L_0043a975:; BB(0x0043a975);
    /* 0043a975: jmp 0x43acbd */ goto L_0043acbd;
L_0043a97a:; BB(0x0043a97a);
    /* 0043a97a: mov ecx, dword ptr [ebp - 0x318] */ r_ecx = R32((u32)(r_ebp+0xfffffce8u));
    /* 0043a980: mov edx, dword ptr [ecx + 0xac4] */ r_edx = R32((u32)(r_ecx+0xac4u));
    /* 0043a986: mov dword ptr [ebp - 0x2d0], edx */ W32((u32)(r_ebp+0xfffffd30u), r_edx);
    /* 0043a98c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043a98e: cmp dword ptr [ebp - 0x2d0], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffd30u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a995: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0043a998: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0043a99b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a99d: jne 0x43aa5d */ if (!fZ) goto L_0043aa5d;
L_0043a9a3:; BB(0x0043a9a3);
    /* 0043a9a3: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0043a9a5: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0043a9a8: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 0043a9ae: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 0043a9b5: mov dword ptr [ebp - 0x2d4], ecx */ W32((u32)(r_ebp+0xfffffd2cu), r_ecx);
    /* 0043a9bb: mov edx, 1 */ r_edx = 0x1u;
    /* 0043a9c0: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0043a9c3: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 0043a9c9: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 0043a9d0: mov dword ptr [ebp - 0x2d8], ecx */ W32((u32)(r_ebp+0xfffffd28u), r_ecx);
    /* 0043a9d6: mov edx, dword ptr [ebp - 0x2d4] */ r_edx = R32((u32)(r_ebp+0xfffffd2cu));
    /* 0043a9dc: add edx, dword ptr [ebp - 0x2d8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffd28u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043a9e2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043a9e4: cmp edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a9e7: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0043a9ea: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0043a9ed: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043a9ef: jne 0x43aa3f */ if (!fZ) goto L_0043aa3f;
L_0043a9f1:; BB(0x0043a9f1);
    /* 0043a9f1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0043a9f3: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0043a9f6: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 0043a9fc: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 0043aa03: mov dword ptr [ebp - 0x2dc], ecx */ W32((u32)(r_ebp+0xfffffd24u), r_ecx);
    /* 0043aa09: mov edx, 1 */ r_edx = 0x1u;
    /* 0043aa0e: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0043aa11: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 0043aa17: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 0043aa1e: mov dword ptr [ebp - 0x2e0], ecx */ W32((u32)(r_ebp+0xfffffd20u), r_ecx);
    /* 0043aa24: mov edx, dword ptr [ebp - 0x2dc] */ r_edx = R32((u32)(r_ebp+0xfffffd24u));
    /* 0043aa2a: add edx, dword ptr [ebp - 0x2e0] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffd20u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043aa30: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043aa32: cmp edx, 9 */ {  u32 a = r_edx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043aa35: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0043aa38: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0043aa3b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043aa3d: je 0x43aa5d */ if (fZ) goto L_0043aa5d;
L_0043aa3f:; BB(0x0043aa3f);
    /* 0043aa3f: mov ecx, dword ptr [ebp - 0x318] */ r_ecx = R32((u32)(r_ebp+0xfffffce8u));
    /* 0043aa45: call 0x434410 */ r_esp -= 4; W32(r_esp, 0x43aa4au); f_00434410();
    /* 0043aa4a: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0043aa4d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043aa4f: jne 0x43aa5d */ if (!fZ) goto L_0043aa5d;
L_0043aa51:; BB(0x0043aa51);
    /* 0043aa51: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0043aa58: jmp 0x43acbd */ goto L_0043acbd;
L_0043aa5d:; BB(0x0043aa5d);
    /* 0043aa5d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043aa5f: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0043aa62: mov ecx, dword ptr [ebp - 0x318] */ r_ecx = R32((u32)(r_ebp+0xfffffce8u));
    /* 0043aa68: mov edx, dword ptr [ecx + eax + 0xacc] */ r_edx = R32((u32)(r_ecx+r_eax+0xaccu));
    /* 0043aa6f: mov dword ptr [ebp - 0x2e4], edx */ W32((u32)(r_ebp+0xfffffd1cu), r_edx);
    /* 0043aa75: mov eax, 1 */ r_eax = 0x1u;
    /* 0043aa7a: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0043aa7d: mov ecx, dword ptr [ebp - 0x318] */ r_ecx = R32((u32)(r_ebp+0xfffffce8u));
    /* 0043aa83: mov edx, dword ptr [ecx + eax + 0xacc] */ r_edx = R32((u32)(r_ecx+r_eax+0xaccu));
    /* 0043aa8a: mov dword ptr [ebp - 0x2e8], edx */ W32((u32)(r_ebp+0xfffffd18u), r_edx);
    /* 0043aa90: mov eax, dword ptr [ebp - 0x2e4] */ r_eax = R32((u32)(r_ebp+0xfffffd1cu));
    /* 0043aa96: add eax, dword ptr [ebp - 0x2e8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffd18u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043aa9c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0043aa9e: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043aaa1: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0043aaa4: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 0043aaa7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043aaa9: je 0x43aab2 */ if (fZ) goto L_0043aab2;
L_0043aaab:; BB(0x0043aaab);
    /* 0043aaab: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
L_0043aab2:; BB(0x0043aab2);
    /* 0043aab2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043aab4: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0043aab7: mov ecx, dword ptr [ebp - 0x318] */ r_ecx = R32((u32)(r_ebp+0xfffffce8u));
    /* 0043aabd: mov edx, dword ptr [ecx + eax + 0xacc] */ r_edx = R32((u32)(r_ecx+r_eax+0xaccu));
    /* 0043aac4: mov dword ptr [ebp - 0x2ec], edx */ W32((u32)(r_ebp+0xfffffd14u), r_edx);
    /* 0043aaca: mov eax, 1 */ r_eax = 0x1u;
    /* 0043aacf: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0043aad2: mov ecx, dword ptr [ebp - 0x318] */ r_ecx = R32((u32)(r_ebp+0xfffffce8u));
    /* 0043aad8: mov edx, dword ptr [ecx + eax + 0xacc] */ r_edx = R32((u32)(r_ecx+r_eax+0xaccu));
    /* 0043aadf: mov dword ptr [ebp - 0x2f0], edx */ W32((u32)(r_ebp+0xfffffd10u), r_edx);
    /* 0043aae5: mov eax, dword ptr [ebp - 0x2ec] */ r_eax = R32((u32)(r_ebp+0xfffffd14u));
    /* 0043aaeb: add eax, dword ptr [ebp - 0x2f0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffd10u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043aaf1: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0043aaf3: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043aaf6: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0043aaf9: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 0043aafc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043aafe: je 0x43ab07 */ if (fZ) goto L_0043ab07;
L_0043ab00:; BB(0x0043ab00);
    /* 0043ab00: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
L_0043ab07:; BB(0x0043ab07);
    /* 0043ab07: jmp 0x43acbd */ goto L_0043acbd;
L_0043ab0c:; BB(0x0043ab0c);
    /* 0043ab0c: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 0043ab12: mov ecx, dword ptr [eax + 0xac4] */ r_ecx = R32((u32)(r_eax+0xac4u));
    /* 0043ab18: mov dword ptr [ebp - 0x2f4], ecx */ W32((u32)(r_ebp+0xfffffd0cu), r_ecx);
    /* 0043ab1e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0043ab20: cmp dword ptr [ebp - 0x2f4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffd0cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043ab27: setne dl */ r_edx = (r_edx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0043ab2a: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 0043ab2d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043ab2f: jne 0x43abef */ if (!fZ) goto L_0043abef;
L_0043ab35:; BB(0x0043ab35);
    /* 0043ab35: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0043ab37: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0043ab3a: mov edx, dword ptr [ebp - 0x318] */ r_edx = R32((u32)(r_ebp+0xfffffce8u));
    /* 0043ab40: mov eax, dword ptr [edx + ecx + 0xacc] */ r_eax = R32((u32)(r_edx+r_ecx+0xaccu));
    /* 0043ab47: mov dword ptr [ebp - 0x2f8], eax */ W32((u32)(r_ebp+0xfffffd08u), r_eax);
    /* 0043ab4d: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0043ab52: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0043ab55: mov edx, dword ptr [ebp - 0x318] */ r_edx = R32((u32)(r_ebp+0xfffffce8u));
    /* 0043ab5b: mov eax, dword ptr [edx + ecx + 0xacc] */ r_eax = R32((u32)(r_edx+r_ecx+0xaccu));
    /* 0043ab62: mov dword ptr [ebp - 0x2fc], eax */ W32((u32)(r_ebp+0xfffffd04u), r_eax);
    /* 0043ab68: mov ecx, dword ptr [ebp - 0x2f8] */ r_ecx = R32((u32)(r_ebp+0xfffffd08u));
    /* 0043ab6e: add ecx, dword ptr [ebp - 0x2fc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffd04u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043ab74: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0043ab76: cmp ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043ab79: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0043ab7c: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 0043ab7f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043ab81: jne 0x43abd1 */ if (!fZ) goto L_0043abd1;
L_0043ab83:; BB(0x0043ab83);
    /* 0043ab83: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0043ab85: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0043ab88: mov edx, dword ptr [ebp - 0x318] */ r_edx = R32((u32)(r_ebp+0xfffffce8u));
    /* 0043ab8e: mov eax, dword ptr [edx + ecx + 0xacc] */ r_eax = R32((u32)(r_edx+r_ecx+0xaccu));
    /* 0043ab95: mov dword ptr [ebp - 0x300], eax */ W32((u32)(r_ebp+0xfffffd00u), r_eax);
    /* 0043ab9b: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0043aba0: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0043aba3: mov edx, dword ptr [ebp - 0x318] */ r_edx = R32((u32)(r_ebp+0xfffffce8u));
    /* 0043aba9: mov eax, dword ptr [edx + ecx + 0xacc] */ r_eax = R32((u32)(r_edx+r_ecx+0xaccu));
    /* 0043abb0: mov dword ptr [ebp - 0x304], eax */ W32((u32)(r_ebp+0xfffffcfcu), r_eax);
    /* 0043abb6: mov ecx, dword ptr [ebp - 0x300] */ r_ecx = R32((u32)(r_ebp+0xfffffd00u));
    /* 0043abbc: add ecx, dword ptr [ebp - 0x304] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffcfcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043abc2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0043abc4: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043abc7: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0043abca: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 0043abcd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043abcf: je 0x43abef */ if (fZ) goto L_0043abef;
L_0043abd1:; BB(0x0043abd1);
    /* 0043abd1: mov ecx, dword ptr [ebp - 0x318] */ r_ecx = R32((u32)(r_ebp+0xfffffce8u));
    /* 0043abd7: call 0x434410 */ r_esp -= 4; W32(r_esp, 0x43abdcu); f_00434410();
    /* 0043abdc: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0043abdf: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043abe1: jne 0x43abef */ if (!fZ) goto L_0043abef;
L_0043abe3:; BB(0x0043abe3);
    /* 0043abe3: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0043abea: jmp 0x43acbd */ goto L_0043acbd;
L_0043abef:; BB(0x0043abef);
    /* 0043abef: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0043abf1: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0043abf4: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 0043abfa: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 0043ac01: mov dword ptr [ebp - 0x308], ecx */ W32((u32)(r_ebp+0xfffffcf8u), r_ecx);
    /* 0043ac07: mov edx, 1 */ r_edx = 0x1u;
    /* 0043ac0c: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0043ac0f: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 0043ac15: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 0043ac1c: mov dword ptr [ebp - 0x30c], ecx */ W32((u32)(r_ebp+0xfffffcf4u), r_ecx);
    /* 0043ac22: mov edx, dword ptr [ebp - 0x308] */ r_edx = R32((u32)(r_ebp+0xfffffcf8u));
    /* 0043ac28: add edx, dword ptr [ebp - 0x30c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffcf4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043ac2e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043ac30: cmp edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043ac33: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0043ac36: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0043ac39: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043ac3b: je 0x43ac44 */ if (fZ) goto L_0043ac44;
L_0043ac3d:; BB(0x0043ac3d);
    /* 0043ac3d: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
L_0043ac44:; BB(0x0043ac44);
    /* 0043ac44: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0043ac46: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0043ac49: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 0043ac4f: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 0043ac56: mov dword ptr [ebp - 0x310], ecx */ W32((u32)(r_ebp+0xfffffcf0u), r_ecx);
    /* 0043ac5c: mov edx, 1 */ r_edx = 0x1u;
    /* 0043ac61: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0043ac64: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 0043ac6a: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 0043ac71: mov dword ptr [ebp - 0x314], ecx */ W32((u32)(r_ebp+0xfffffcecu), r_ecx);
    /* 0043ac77: mov edx, dword ptr [ebp - 0x310] */ r_edx = R32((u32)(r_ebp+0xfffffcf0u));
    /* 0043ac7d: add edx, dword ptr [ebp - 0x314] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffcecu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043ac83: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043ac85: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043ac88: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0043ac8b: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0043ac8e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043ac90: je 0x43ac99 */ if (fZ) goto L_0043ac99;
L_0043ac92:; BB(0x0043ac92);
    /* 0043ac92: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
L_0043ac99:; BB(0x0043ac99);
    /* 0043ac99: jmp 0x43acbd */ goto L_0043acbd;
L_0043ac9b:; BB(0x0043ac9b);
    /* 0043ac9b: mov ecx, dword ptr [ebp - 0x318] */ r_ecx = R32((u32)(r_ebp+0xfffffce8u));
    /* 0043aca1: call 0x438990 */ r_esp -= 4; W32(r_esp, 0x43aca6u); f_00438990();
    /* 0043aca6: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0043aca9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043acab: je 0x43acb6 */ if (fZ) goto L_0043acb6;
L_0043acad:; BB(0x0043acad);
    /* 0043acad: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0043acb4: jmp 0x43acbd */ goto L_0043acbd;
L_0043acb6:; BB(0x0043acb6);
    /* 0043acb6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
L_0043acbd:; BB(0x0043acbd);
    /* 0043acbd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
L_0043acc0:; BB(0x0043acc0);
    /* 0043acc0: mov esp, ebp */ r_esp = r_ebp;
    /* 0043acc2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043acc3: ret 4 */ FN_RET(0x00438a10); r_esp += 8; return;
}

