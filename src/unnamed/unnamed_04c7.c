#include "protos.h"

void f_004c7090(void) /* sub_4C7090 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004c7090);
    /* 004c7090: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004c7091: mov ebp, esp */ r_ebp = r_esp;
    /* 004c7093: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c7094: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004c7097: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004c709a: mov al, byte ptr [eax + 0x84] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0x84u))) & 0xffu);
    /* 004c70a0: mov esp, ebp */ r_esp = r_ebp;
    /* 004c70a2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c70a3: ret  */ FN_RET(0x004c7090); r_esp += 4; return;
}

void f_004c70b0(void) /* sub_4C70B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004c70b0);
    /* 004c70b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004c70b1: mov ebp, esp */ r_ebp = r_esp;
    /* 004c70b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c70b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004c70b7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004c70ba: mov cl, byte ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 004c70bd: mov byte ptr [eax + 0x84], cl */ W8((u32)(r_eax+0x84u), (u8)r_ecx);
    /* 004c70c3: mov esp, ebp */ r_esp = r_ebp;
    /* 004c70c5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c70c6: ret 4 */ FN_RET(0x004c70b0); r_esp += 8; return;
}

void f_004c70f0(void) /* sub_4C70F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004c70f0);
    /* 004c70f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004c70f1: mov ebp, esp */ r_ebp = r_esp;
    /* 004c70f3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004c70f6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004c70f9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004c70fc: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004c70ff: mov dword ptr [eax + 0x8c], ecx */ W32((u32)(r_eax+0x8cu), r_ecx);
    /* 004c7105: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004c7108: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 004c710e: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004c7111: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004c7114: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c7117: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004c711a: cmp dword ptr [ebp - 8], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004c711e: ja 0x4c71fb */ if ((!fC&&!fZ)) goto L_004c71fb;
L_004c7124:; BB(0x004c7124);
    /* 004c7124: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004c7127: jmp dword ptr [edx*4 + 0x4c7204] */ { u32 t = R32((u32)(r_edx*4+0x4c7204u)); switch (t) { case 0x4c712eu: goto L_004c712e; case 0x4c7147u: goto L_004c7147; case 0x4c7160u: goto L_004c7160; case 0x4c7179u: goto L_004c7179; case 0x4c718fu: goto L_004c718f; case 0x4c71a5u: goto L_004c71a5; case 0x4c71bbu: goto L_004c71bb; case 0x4c71d1u: goto L_004c71d1; case 0x4c71e7u: goto L_004c71e7; default: UNSUP(0x004c7127, "jump table entry is not a known target"); } }
L_004c712e:; BB(0x004c712e);
    /* 004c712e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004c7131: mov dword ptr [eax + 0x10], 0x77 */ W32((u32)(r_eax+0x10u), 0x77u);
    /* 004c7138: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004c713b: mov dword ptr [ecx + 0x14], 0xd5 */ W32((u32)(r_ecx+0x14u), 0xd5u);
    /* 004c7142: jmp 0x4c71fb */ goto L_004c71fb;
L_004c7147:; BB(0x004c7147);
    /* 004c7147: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004c714a: mov dword ptr [edx + 0x10], 0xe */ W32((u32)(r_edx+0x10u), 0xeu);
    /* 004c7151: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004c7154: mov dword ptr [eax + 0x14], 0x1e */ W32((u32)(r_eax+0x14u), 0x1eu);
    /* 004c715b: jmp 0x4c71fb */ goto L_004c71fb;
L_004c7160:; BB(0x004c7160);
    /* 004c7160: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004c7163: mov dword ptr [ecx + 0x10], 0xda */ W32((u32)(r_ecx+0x10u), 0xdau);
    /* 004c716a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004c716d: mov dword ptr [edx + 0x14], 0x1e */ W32((u32)(r_edx+0x14u), 0x1eu);
    /* 004c7174: jmp 0x4c71fb */ goto L_004c71fb;
L_004c7179:; BB(0x004c7179);
    /* 004c7179: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004c717c: mov dword ptr [eax + 0x10], 0x212 */ W32((u32)(r_eax+0x10u), 0x212u);
    /* 004c7183: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004c7186: mov dword ptr [ecx + 0x14], 0x1e */ W32((u32)(r_ecx+0x14u), 0x1eu);
    /* 004c718d: jmp 0x4c71fb */ goto L_004c71fb;
L_004c718f:; BB(0x004c718f);
    /* 004c718f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004c7192: mov dword ptr [edx + 0x10], 0x212 */ W32((u32)(r_edx+0x10u), 0x212u);
    /* 004c7199: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004c719c: mov dword ptr [eax + 0x14], 0xaa */ W32((u32)(r_eax+0x14u), 0xaau);
    /* 004c71a3: jmp 0x4c71fb */ goto L_004c71fb;
L_004c71a5:; BB(0x004c71a5);
    /* 004c71a5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004c71a8: mov dword ptr [ecx + 0x10], 0x212 */ W32((u32)(r_ecx+0x10u), 0x212u);
    /* 004c71af: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004c71b2: mov dword ptr [edx + 0x14], 0x136 */ W32((u32)(r_edx+0x14u), 0x136u);
    /* 004c71b9: jmp 0x4c71fb */ goto L_004c71fb;
L_004c71bb:; BB(0x004c71bb);
    /* 004c71bb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004c71be: mov dword ptr [eax + 0x10], 0x141 */ W32((u32)(r_eax+0x10u), 0x141u);
    /* 004c71c5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004c71c8: mov dword ptr [ecx + 0x14], 0x136 */ W32((u32)(r_ecx+0x14u), 0x136u);
    /* 004c71cf: jmp 0x4c71fb */ goto L_004c71fb;
L_004c71d1:; BB(0x004c71d1);
    /* 004c71d1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004c71d4: mov dword ptr [edx + 0x10], 0xe */ W32((u32)(r_edx+0x10u), 0xeu);
    /* 004c71db: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004c71de: mov dword ptr [eax + 0x14], 0x136 */ W32((u32)(r_eax+0x14u), 0x136u);
    /* 004c71e5: jmp 0x4c71fb */ goto L_004c71fb;
L_004c71e7:; BB(0x004c71e7);
    /* 004c71e7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004c71ea: mov dword ptr [ecx + 0x10], 0xe */ W32((u32)(r_ecx+0x10u), 0xeu);
    /* 004c71f1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004c71f4: mov dword ptr [edx + 0x14], 0xaa */ W32((u32)(r_edx+0x14u), 0xaau);
L_004c71fb:; BB(0x004c71fb);
    /* 004c71fb: mov esp, ebp */ r_esp = r_ebp;
    /* 004c71fd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c71fe: ret 4 */ FN_RET(0x004c70f0); r_esp += 8; return;
}

void f_004c7230(void) /* sub_4C7230 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004c7230);
    /* 004c7230: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004c7231: mov ebp, esp */ r_ebp = r_esp;
    /* 004c7233: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004c7236: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 004c7239: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004c723c: call 0x4c70d0 */ r_esp -= 4; W32(r_esp, 0x4c7241u); f_004c70d0();
    /* 004c7241: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c7244: je 0x4c724e */ if (fZ) goto L_004c724e;
L_004c7246:; BB(0x004c7246);
    /* 004c7246: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004c7249: call 0x4c8eb0 */ r_esp -= 4; W32(r_esp, 0x4c724eu); f_004c8eb0();
L_004c724e:; BB(0x004c724e);
    /* 004c724e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004c7255: jmp 0x4c7260 */ goto L_004c7260;
L_004c7257:; BB(0x004c7257);
    /* 004c7257: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004c725a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004c725d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_004c7260:; BB(0x004c7260);
    /* 004c7260: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004c7263: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 004c7266: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x4c726bu); f_0060c9a0();
    /* 004c726b: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c726e: jge 0x4c729b */ if ((fS==fO)) goto L_004c729b;
L_004c7270:; BB(0x004c7270);
    /* 004c7270: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004c7273: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c7274: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004c7277: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 004c727a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c727b: call 0x4c72f0 */ r_esp -= 4; W32(r_esp, 0x4c7280u); f_004c72f0();
    /* 004c7280: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c7283: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004c7286: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c728a: je 0x4c7299 */ if (fZ) goto L_004c7299;
L_004c728c:; BB(0x004c728c);
    /* 004c728c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004c728f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004c7291: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004c7294: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 004c7297: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4c7299u); call_ind(t); }
L_004c7299:; BB(0x004c7299);
    /* 004c7299: jmp 0x4c7257 */ goto L_004c7257;
L_004c729b:; BB(0x004c729b);
    /* 004c729b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004c72a2: jmp 0x4c72ad */ goto L_004c72ad;
L_004c72a4:; BB(0x004c72a4);
    /* 004c72a4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004c72a7: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004c72aa: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_004c72ad:; BB(0x004c72ad);
    /* 004c72ad: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004c72b0: mov ecx, dword ptr [ecx + 0xc] */ r_ecx = R32((u32)(r_ecx+0xcu));
    /* 004c72b3: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x4c72b8u); f_0060c9a0();
    /* 004c72b8: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c72bb: jge 0x4c72e8 */ if ((fS==fO)) goto L_004c72e8;
L_004c72bd:; BB(0x004c72bd);
    /* 004c72bd: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004c72c0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c72c1: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004c72c4: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 004c72c7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c72c8: call 0x4c72f0 */ r_esp -= 4; W32(r_esp, 0x4c72cdu); f_004c72f0();
    /* 004c72cd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c72d0: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004c72d3: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c72d7: je 0x4c72e6 */ if (fZ) goto L_004c72e6;
L_004c72d9:; BB(0x004c72d9);
    /* 004c72d9: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004c72dc: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004c72de: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004c72e1: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 004c72e4: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4c72e6u); call_ind(t); }
L_004c72e6:; BB(0x004c72e6);
    /* 004c72e6: jmp 0x4c72a4 */ goto L_004c72a4;
L_004c72e8:; BB(0x004c72e8);
    /* 004c72e8: mov esp, ebp */ r_esp = r_ebp;
    /* 004c72ea: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c72eb: ret  */ FN_RET(0x004c7230); r_esp += 4; return;
}

void f_004c72f0(void) /* sub_4C72F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004c72f0);
    /* 004c72f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004c72f1: mov ebp, esp */ r_ebp = r_esp;
    /* 004c72f3: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004c72f6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c72f7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004c72fa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c72fb: call 0x4c7310 */ r_esp -= 4; W32(r_esp, 0x4c7300u); f_004c7310();
    /* 004c7300: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c7303: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 004c7306: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c7307: ret  */ FN_RET(0x004c72f0); r_esp += 4; return;
}

void f_004c7310(void) /* sub_4C7310 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004c7310);
    /* 004c7310: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004c7311: mov ebp, esp */ r_ebp = r_esp;
    /* 004c7313: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004c7316: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c7317: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004c731a: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x4c731fu); f_0060ca40();
    /* 004c731f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c7320: ret  */ FN_RET(0x004c7310); r_esp += 4; return;
}

void f_004c7330(void) /* sub_4C7330 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004c7330);
    /* 004c7330: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004c7331: mov ebp, esp */ r_ebp = r_esp;
    /* 004c7333: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c7334: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004c7337: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004c733a: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 004c733d: call 0x60ca10 */ r_esp -= 4; W32(r_esp, 0x4c7342u); f_0060ca10();
    /* 004c7342: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004c7345: mov ecx, dword ptr [ecx + 0xc] */ r_ecx = R32((u32)(r_ecx+0xcu));
    /* 004c7348: call 0x60ca10 */ r_esp -= 4; W32(r_esp, 0x4c734du); f_0060ca10();
    /* 004c734d: mov esp, ebp */ r_esp = r_ebp;
    /* 004c734f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c7350: ret  */ FN_RET(0x004c7330); r_esp += 4; return;
}

void f_004c7360(void) /* sub_4C7360 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004c7360);
    /* 004c7360: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004c7361: mov ebp, esp */ r_ebp = r_esp;
    /* 004c7363: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004c7365: push 0x6a225e */ { u32 v = 0x6a225eu; r_esp -= 4; W32(r_esp, v); }
    /* 004c736a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004c7370: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c7371: sub esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004c7374: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 004c7379: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004c737b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c737c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 004c737f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 004c7385: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 004c7388: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 004c738f: jmp 0x4c739a */ goto L_004c739a;
L_004c7391:; BB(0x004c7391);
    /* 004c7391: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c7394: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004c7397: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
L_004c739a:; BB(0x004c739a);
    /* 004c739a: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 004c739d: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 004c73a0: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x4c73a5u); f_0060c9a0();
    /* 004c73a5: cmp dword ptr [ebp - 0x20], eax */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c73a8: jge 0x4c76ad */ if ((fS==fO)) goto L_004c76ad;
L_004c73ae:; BB(0x004c73ae);
    /* 004c73ae: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 004c73b5: jmp 0x4c73c0 */ goto L_004c73c0;
L_004c73b7:; BB(0x004c73b7);
    /* 004c73b7: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004c73ba: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004c73bd: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
L_004c73c0:; BB(0x004c73c0);
    /* 004c73c0: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 004c73c3: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 004c73c6: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x4c73cbu); f_0060c9a0();
    /* 004c73cb: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004c73ce: cmp dword ptr [ebp - 0x24], eax */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c73d1: jge 0x4c76a8 */ if ((fS==fO)) goto L_004c76a8;
L_004c73d7:; BB(0x004c73d7);
    /* 004c73d7: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004c73da: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c73db: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 004c73de: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 004c73e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c73e2: call 0x4c7310 */ r_esp -= 4; W32(r_esp, 0x4c73e7u); f_004c7310();
    /* 004c73e7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c73ea: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004c73ed: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004c73f0: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c73f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c73f4: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 004c73f7: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 004c73fa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c73fb: call 0x4c7310 */ r_esp -= 4; W32(r_esp, 0x4c7400u); f_004c7310();
    /* 004c7400: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c7403: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 004c7406: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004c7409: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 004c740c: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 004c740f: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004c7412: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 004c7415: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 004c7418: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c741e: call 0x47d6f0 */ r_esp -= 4; W32(r_esp, 0x4c7423u); f_0047d6f0();
    /* 004c7423: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c7426: jne 0x4c752b */ if (!fZ) goto L_004c752b;
L_004c742c:; BB(0x004c742c);
    /* 004c742c: mov edx, dword ptr [0x790780] */ r_edx = R32((u32)(0x790780u));
    /* 004c7432: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c7433: mov eax, dword ptr [0x79077c] */ r_eax = R32((u32)(0x79077cu));
    /* 004c7438: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c7439: lea ecx, [ebp - 0x2f] */ r_ecx = (u32)(r_ebp+0xffffffd1u);
    /* 004c743c: call 0x464130 */ r_esp -= 4; W32(r_esp, 0x4c7441u); f_00464130();
    /* 004c7441: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 004c7444: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 004c7447: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 004c744a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004c7451: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004c7454: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c7455: lea eax, [ebp - 0x2e] */ r_eax = (u32)(r_ebp+0xffffffd2u);
    /* 004c7458: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c7459: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 004c745c: call 0x4dd940 */ r_esp -= 4; W32(r_esp, 0x4c7461u); f_004dd940();
    /* 004c7461: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 004c7464: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004c7467: mov dword ptr [ebp - 0x4c], ecx */ W32((u32)(r_ebp+0xffffffb4u), r_ecx);
    /* 004c746a: mov byte ptr [ebp - 4], 1 */ W8((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 004c746e: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 004c7471: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c7472: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 004c7475: call 0x464500 */ r_esp -= 4; W32(r_esp, 0x4c747au); f_00464500();
    /* 004c747a: mov byte ptr [ebp - 0x2d], al */ W8((u32)(r_ebp+0xffffffd3u), (u8)r_eax);
    /* 004c747d: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004c7481: lea ecx, [ebp - 0x2e] */ r_ecx = (u32)(r_ebp+0xffffffd2u);
    /* 004c7484: call 0x464210 */ r_esp -= 4; W32(r_esp, 0x4c7489u); f_00464210();
    /* 004c7489: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004c7490: lea ecx, [ebp - 0x2f] */ r_ecx = (u32)(r_ebp+0xffffffd1u);
    /* 004c7493: call 0x464210 */ r_esp -= 4; W32(r_esp, 0x4c7498u); f_00464210();
    /* 004c7498: movzx eax, byte ptr [ebp - 0x2d] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffd3u));
    /* 004c749c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c749e: je 0x4c74a9 */ if (fZ) goto L_004c74a9;
L_004c74a0:; BB(0x004c74a0);
    /* 004c74a0: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004c74a3: add ecx, 0x64 */ {  u32 a = r_ecx; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c74a6: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
L_004c74a9:; BB(0x004c74a9);
    /* 004c74a9: mov edx, dword ptr [0x790780] */ r_edx = R32((u32)(0x790780u));
    /* 004c74af: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c74b0: mov eax, dword ptr [0x79077c] */ r_eax = R32((u32)(0x79077cu));
    /* 004c74b5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c74b6: lea ecx, [ebp - 0x32] */ r_ecx = (u32)(r_ebp+0xffffffceu);
    /* 004c74b9: call 0x464130 */ r_esp -= 4; W32(r_esp, 0x4c74beu); f_00464130();
    /* 004c74be: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 004c74c1: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 004c74c4: mov dword ptr [ebp - 0x54], ecx */ W32((u32)(r_ebp+0xffffffacu), r_ecx);
    /* 004c74c7: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 004c74ce: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004c74d1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c74d2: lea eax, [ebp - 0x31] */ r_eax = (u32)(r_ebp+0xffffffcfu);
    /* 004c74d5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c74d6: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 004c74d9: call 0x4dd940 */ r_esp -= 4; W32(r_esp, 0x4c74deu); f_004dd940();
    /* 004c74de: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 004c74e1: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 004c74e4: mov dword ptr [ebp - 0x5c], ecx */ W32((u32)(r_ebp+0xffffffa4u), r_ecx);
    /* 004c74e7: mov byte ptr [ebp - 4], 3 */ W8((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 004c74eb: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 004c74ee: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c74ef: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 004c74f2: call 0x464500 */ r_esp -= 4; W32(r_esp, 0x4c74f7u); f_00464500();
    /* 004c74f7: mov byte ptr [ebp - 0x30], al */ W8((u32)(r_ebp+0xffffffd0u), (u8)r_eax);
    /* 004c74fa: mov byte ptr [ebp - 4], 2 */ W8((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 004c74fe: lea ecx, [ebp - 0x31] */ r_ecx = (u32)(r_ebp+0xffffffcfu);
    /* 004c7501: call 0x464210 */ r_esp -= 4; W32(r_esp, 0x4c7506u); f_00464210();
    /* 004c7506: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004c750d: lea ecx, [ebp - 0x32] */ r_ecx = (u32)(r_ebp+0xffffffceu);
    /* 004c7510: call 0x464210 */ r_esp -= 4; W32(r_esp, 0x4c7515u); f_00464210();
    /* 004c7515: movzx eax, byte ptr [ebp - 0x30] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffd0u));
    /* 004c7519: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c751b: je 0x4c7526 */ if (fZ) goto L_004c7526;
L_004c751d:; BB(0x004c751d);
    /* 004c751d: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004c7520: add ecx, 0x64 */ {  u32 a = r_ecx; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c7523: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
L_004c7526:; BB(0x004c7526);
    /* 004c7526: jmp 0x4c7639 */ goto L_004c7639;
L_004c752b:; BB(0x004c752b);
    /* 004c752b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c7531: call 0x47d6f0 */ r_esp -= 4; W32(r_esp, 0x4c7536u); f_0047d6f0();
    /* 004c7536: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c7539: jne 0x4c7639 */ if (!fZ) goto L_004c7639;
L_004c753f:; BB(0x004c753f);
    /* 004c753f: mov edx, dword ptr [0x790780] */ r_edx = R32((u32)(0x790780u));
    /* 004c7545: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c7546: mov eax, dword ptr [0x79077c] */ r_eax = R32((u32)(0x79077cu));
    /* 004c754b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c754c: lea ecx, [ebp - 0x35] */ r_ecx = (u32)(r_ebp+0xffffffcbu);
    /* 004c754f: call 0x464130 */ r_esp -= 4; W32(r_esp, 0x4c7554u); f_00464130();
    /* 004c7554: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 004c7557: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 004c755a: mov dword ptr [ebp - 0x64], ecx */ W32((u32)(r_ebp+0xffffff9cu), r_ecx);
    /* 004c755d: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 004c7564: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004c7567: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c7568: lea eax, [ebp - 0x34] */ r_eax = (u32)(r_ebp+0xffffffccu);
    /* 004c756b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c756c: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 004c756f: call 0x4ddb10 */ r_esp -= 4; W32(r_esp, 0x4c7574u); f_004ddb10();
    /* 004c7574: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 004c7577: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 004c757a: mov dword ptr [ebp - 0x6c], ecx */ W32((u32)(r_ebp+0xffffff94u), r_ecx);
    /* 004c757d: mov byte ptr [ebp - 4], 5 */ W8((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 004c7581: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004c7584: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c7585: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 004c7588: call 0x464500 */ r_esp -= 4; W32(r_esp, 0x4c758du); f_00464500();
    /* 004c758d: mov byte ptr [ebp - 0x33], al */ W8((u32)(r_ebp+0xffffffcdu), (u8)r_eax);
    /* 004c7590: mov byte ptr [ebp - 4], 4 */ W8((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 004c7594: lea ecx, [ebp - 0x34] */ r_ecx = (u32)(r_ebp+0xffffffccu);
    /* 004c7597: call 0x464210 */ r_esp -= 4; W32(r_esp, 0x4c759cu); f_00464210();
    /* 004c759c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004c75a3: lea ecx, [ebp - 0x35] */ r_ecx = (u32)(r_ebp+0xffffffcbu);
    /* 004c75a6: call 0x464210 */ r_esp -= 4; W32(r_esp, 0x4c75abu); f_00464210();
    /* 004c75ab: movzx eax, byte ptr [ebp - 0x33] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffcdu));
    /* 004c75af: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c75b1: je 0x4c75bc */ if (fZ) goto L_004c75bc;
L_004c75b3:; BB(0x004c75b3);
    /* 004c75b3: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004c75b6: add ecx, 0x64 */ {  u32 a = r_ecx; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c75b9: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
L_004c75bc:; BB(0x004c75bc);
    /* 004c75bc: mov edx, dword ptr [0x790780] */ r_edx = R32((u32)(0x790780u));
    /* 004c75c2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c75c3: mov eax, dword ptr [0x79077c] */ r_eax = R32((u32)(0x79077cu));
    /* 004c75c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c75c9: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 004c75cc: call 0x464130 */ r_esp -= 4; W32(r_esp, 0x4c75d1u); f_00464130();
    /* 004c75d1: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 004c75d4: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 004c75d7: mov dword ptr [ebp - 0x74], ecx */ W32((u32)(r_ebp+0xffffff8cu), r_ecx);
    /* 004c75da: mov dword ptr [ebp - 4], 6 */ W32((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 004c75e1: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004c75e4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c75e5: lea eax, [ebp - 0x37] */ r_eax = (u32)(r_ebp+0xffffffc9u);
    /* 004c75e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c75e9: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 004c75ec: call 0x4ddb10 */ r_esp -= 4; W32(r_esp, 0x4c75f1u); f_004ddb10();
    /* 004c75f1: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 004c75f4: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 004c75f7: mov dword ptr [ebp - 0x7c], ecx */ W32((u32)(r_ebp+0xffffff84u), r_ecx);
    /* 004c75fa: mov byte ptr [ebp - 4], 7 */ W8((u32)(r_ebp+0xfffffffcu), 0x7u);
    /* 004c75fe: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 004c7601: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c7602: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 004c7605: call 0x464500 */ r_esp -= 4; W32(r_esp, 0x4c760au); f_00464500();
    /* 004c760a: mov byte ptr [ebp - 0x36], al */ W8((u32)(r_ebp+0xffffffcau), (u8)r_eax);
    /* 004c760d: mov byte ptr [ebp - 4], 6 */ W8((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 004c7611: lea ecx, [ebp - 0x37] */ r_ecx = (u32)(r_ebp+0xffffffc9u);
    /* 004c7614: call 0x464210 */ r_esp -= 4; W32(r_esp, 0x4c7619u); f_00464210();
    /* 004c7619: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004c7620: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 004c7623: call 0x464210 */ r_esp -= 4; W32(r_esp, 0x4c7628u); f_00464210();
    /* 004c7628: movzx eax, byte ptr [ebp - 0x36] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffcau));
    /* 004c762c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c762e: je 0x4c7639 */ if (fZ) goto L_004c7639;
L_004c7630:; BB(0x004c7630);
    /* 004c7630: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004c7633: add ecx, 0x64 */ {  u32 a = r_ecx; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c7636: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
L_004c7639:; BB(0x004c7639);
    /* 004c7639: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c763f: call 0x47ce60 */ r_esp -= 4; W32(r_esp, 0x4c7644u); f_0047ce60();
    /* 004c7644: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c7647: je 0x4c7659 */ if (fZ) goto L_004c7659;
L_004c7649:; BB(0x004c7649);
    /* 004c7649: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c764f: call 0x47ce60 */ r_esp -= 4; W32(r_esp, 0x4c7654u); f_0047ce60();
    /* 004c7654: cmp eax, 0xd */ {  u32 a = r_eax; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c7657: jne 0x4c7669 */ if (!fZ) goto L_004c7669;
L_004c7659:; BB(0x004c7659);
    /* 004c7659: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004c765c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004c765e: cmp edx, dword ptr [ebp - 0x28] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffd8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c7661: setg al */ r_eax = (r_eax & 0xffffff00u) | ((((!fZ&&fS==fO)) ? 1 : 0) & 0xffu);
    /* 004c7664: mov byte ptr [ebp - 0x19], al */ W8((u32)(r_ebp+0xffffffe7u), (u8)r_eax);
    /* 004c7667: jmp 0x4c7677 */ goto L_004c7677;
L_004c7669:; BB(0x004c7669);
    /* 004c7669: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004c766c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004c766e: cmp ecx, dword ptr [ebp - 0x28] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffd8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c7671: setl dl */ r_edx = (r_edx & 0xffffff00u) | ((((fS!=fO)) ? 1 : 0) & 0xffu);
    /* 004c7674: mov byte ptr [ebp - 0x19], dl */ W8((u32)(r_ebp+0xffffffe7u), (u8)r_edx);
L_004c7677:; BB(0x004c7677);
    /* 004c7677: movzx eax, byte ptr [ebp - 0x19] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffe7u));
    /* 004c767b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c767d: je 0x4c76a3 */ if (fZ) goto L_004c76a3;
L_004c767f:; BB(0x004c767f);
    /* 004c767f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004c7682: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 004c7685: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004c7688: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c7689: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 004c768c: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 004c768f: call 0x60c890 */ r_esp -= 4; W32(r_esp, 0x4c7694u); f_0060c890();
    /* 004c7694: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004c7697: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c7698: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 004c769b: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 004c769e: call 0x60c7d0 */ r_esp -= 4; W32(r_esp, 0x4c76a3u); f_0060c7d0();
L_004c76a3:; BB(0x004c76a3);
    /* 004c76a3: jmp 0x4c73b7 */ goto L_004c73b7;
L_004c76a8:; BB(0x004c76a8);
    /* 004c76a8: jmp 0x4c7391 */ goto L_004c7391;
L_004c76ad:; BB(0x004c76ad);
    /* 004c76ad: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004c76b0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004c76b7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004c76b8: mov esp, ebp */ r_esp = r_ebp;
    /* 004c76ba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c76bb: ret  */ FN_RET(0x004c7360); r_esp += 4; return;
}

void f_004c76e0(void) /* sub_4C76E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004c76e0);
    /* 004c76e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004c76e1: mov ebp, esp */ r_ebp = r_esp;
    /* 004c76e3: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004c76e6: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 004c76e9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004c76ec: call 0x4c70d0 */ r_esp -= 4; W32(r_esp, 0x4c76f1u); f_004c70d0();
    /* 004c76f1: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004c76f4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004c76f7: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 004c76fa: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x4c76ffu); f_0060c9a0();
    /* 004c76ff: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004c7702: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 004c7705: jmp 0x4c7710 */ goto L_004c7710;
L_004c7707:; BB(0x004c7707);
    /* 004c7707: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004c770a: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004c770d: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_004c7710:; BB(0x004c7710);
    /* 004c7710: cmp dword ptr [ebp - 0x10], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c7714: jle 0x4c77f9 */ if ((fZ||fS!=fO)) goto L_004c77f9;
L_004c771a:; BB(0x004c771a);
    /* 004c771a: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004c771d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c771e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004c7721: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 004c7724: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c7725: call 0x4c7310 */ r_esp -= 4; W32(r_esp, 0x4c772au); f_004c7310();
    /* 004c772a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c772d: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 004c7730: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004c7733: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 004c7736: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004c7739: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004c773c: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 004c773f: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004c7742: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004c7745: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 004c7748: cmp dword ptr [ebp - 0x18], 8 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004c774c: ja 0x4c77cd */ if ((!fC&&!fZ)) goto L_004c77cd;
L_004c774e:; BB(0x004c774e);
    /* 004c774e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004c7751: movzx ecx, byte ptr [eax + 0x4c7808] */ r_ecx = (u32)R8((u32)(r_eax+0x4c7808u));
    /* 004c7758: jmp dword ptr [ecx*4 + 0x4c7800] */ { u32 t = R32((u32)(r_ecx*4+0x4c7800u)); switch (t) { case 0x4c775fu: goto L_004c775f; case 0x4c7797u: goto L_004c7797; default: UNSUP(0x004c7758, "jump table entry is not a known target"); } }
L_004c775f:; BB(0x004c775f);
    /* 004c775f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004c7762: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 004c7765: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004c7768: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c7769: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004c776c: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 004c776f: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x4c7774u); f_0060c9a0();
    /* 004c7774: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004c7777: sub eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004c777a: imul eax, eax, 0xd */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xdu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004c777d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004c7780: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 004c7783: lea edx, [eax + ecx + 0x56] */ r_edx = (u32)(r_eax+r_ecx+0x56u);
    /* 004c7787: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c7788: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004c778b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004c778d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004c7790: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 004c7793: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4c7795u); call_ind(t); }
    /* 004c7795: jmp 0x4c77cd */ goto L_004c77cd;
L_004c7797:; BB(0x004c7797);
    /* 004c7797: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004c779a: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 004c779d: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004c77a0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c77a1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004c77a4: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 004c77a7: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x4c77acu); f_0060c9a0();
    /* 004c77ac: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004c77af: sub eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004c77b2: imul eax, eax, 0xd */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xdu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004c77b5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004c77b8: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 004c77bb: lea eax, [eax + edx - 0x55] */ r_eax = (u32)(r_eax+r_edx+0xffffffabu);
    /* 004c77bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c77c0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004c77c3: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004c77c5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004c77c8: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 004c77cb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4c77cdu); call_ind(t); }
L_004c77cd:; BB(0x004c77cd);
    /* 004c77cd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004c77d0: call 0x463d40 */ r_esp -= 4; W32(r_esp, 0x4c77d5u); f_00463d40();
    /* 004c77d5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004c77d8: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 004c77db: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x4c77e0u); f_0060c9a0();
    /* 004c77e0: sub eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004c77e3: add eax, 0x5a */ {  u32 a = r_eax; u32 b = 0x5au; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004c77e6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c77e7: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004c77ea: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004c77ec: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004c77ef: mov edx, dword ptr [eax + 0x6c] */ r_edx = R32((u32)(r_eax+0x6cu));
    /* 004c77f2: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4c77f4u); call_ind(t); }
    /* 004c77f4: jmp 0x4c7707 */ goto L_004c7707;
L_004c77f9:; BB(0x004c77f9);
    /* 004c77f9: mov esp, ebp */ r_esp = r_ebp;
    /* 004c77fb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c77fc: ret  */ FN_RET(0x004c76e0); r_esp += 4; return;
}

void f_004c7820(void) /* sub_4C7820 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004c7820);
    /* 004c7820: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004c7821: mov ebp, esp */ r_ebp = r_esp;
    /* 004c7823: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004c7826: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 004c7829: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004c782c: call 0x4c70d0 */ r_esp -= 4; W32(r_esp, 0x4c7831u); f_004c70d0();
    /* 004c7831: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004c7834: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 004c783b: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004c783e: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 004c7841: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x4c7846u); f_0060c9a0();
    /* 004c7846: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004c7849: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 004c784c: jmp 0x4c7857 */ goto L_004c7857;
L_004c784e:; BB(0x004c784e);
    /* 004c784e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004c7851: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004c7854: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_004c7857:; BB(0x004c7857);
    /* 004c7857: cmp dword ptr [ebp - 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c785b: jle 0x4c7953 */ if ((fZ||fS!=fO)) goto L_004c7953;
L_004c7861:; BB(0x004c7861);
    /* 004c7861: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004c7864: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c7865: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004c7868: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 004c786b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c786c: call 0x4c72f0 */ r_esp -= 4; W32(r_esp, 0x4c7871u); f_004c72f0();
    /* 004c7871: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c7874: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004c7877: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004c787a: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 004c787d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004c7880: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004c7883: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004c7886: cmp dword ptr [ebp - 0x14], 8 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004c788a: ja 0x4c790b */ if ((!fC&&!fZ)) goto L_004c790b;
L_004c788c:; BB(0x004c788c);
    /* 004c788c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004c788f: movzx edx, byte ptr [ecx + 0x4c7964] */ r_edx = (u32)R8((u32)(r_ecx+0x4c7964u));
    /* 004c7896: jmp dword ptr [edx*4 + 0x4c795c] */ { u32 t = R32((u32)(r_edx*4+0x4c795cu)); switch (t) { case 0x4c789du: goto L_004c789d; case 0x4c78d5u: goto L_004c78d5; default: UNSUP(0x004c7896, "jump table entry is not a known target"); } }
L_004c789d:; BB(0x004c789d);
    /* 004c789d: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004c78a0: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 004c78a3: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c78a6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c78a7: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004c78aa: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 004c78ad: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x4c78b2u); f_0060c9a0();
    /* 004c78b2: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004c78b5: sub eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004c78b8: imul eax, eax, 0xd */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xdu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004c78bb: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004c78be: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 004c78c1: lea eax, [eax + edx + 0x56] */ r_eax = (u32)(r_eax+r_edx+0x56u);
    /* 004c78c5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c78c6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004c78c9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004c78cb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004c78ce: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 004c78d1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4c78d3u); call_ind(t); }
    /* 004c78d3: jmp 0x4c790b */ goto L_004c790b;
L_004c78d5:; BB(0x004c78d5);
    /* 004c78d5: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004c78d8: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 004c78db: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004c78de: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c78df: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004c78e2: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 004c78e5: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x4c78eau); f_0060c9a0();
    /* 004c78ea: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004c78ed: sub eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004c78f0: imul eax, eax, 0xd */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xdu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004c78f3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004c78f6: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 004c78f9: lea eax, [eax + edx - 0x55] */ r_eax = (u32)(r_eax+r_edx+0xffffffabu);
    /* 004c78fd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c78fe: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004c7901: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004c7903: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004c7906: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 004c7909: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4c790bu); call_ind(t); }
L_004c790b:; BB(0x004c790b);
    /* 004c790b: movzx ecx, byte ptr [ebp + 8] */ r_ecx = (u32)R8((u32)(r_ebp+0x8u));
    /* 004c790f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c7911: je 0x4c792b */ if (fZ) goto L_004c792b;
L_004c7913:; BB(0x004c7913);
    /* 004c7913: mov edx, 0x68 */ r_edx = 0x68u;
    /* 004c7918: sub edx, dword ptr [ebp - 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004c791b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c791c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004c791f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004c7921: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004c7924: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 004c7927: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4c7929u); call_ind(t); }
    /* 004c7929: jmp 0x4c7941 */ goto L_004c7941;
L_004c792b:; BB(0x004c792b);
    /* 004c792b: mov ecx, 0xd */ r_ecx = 0xdu;
    /* 004c7930: sub ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004c7933: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c7934: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004c7937: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004c7939: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004c793c: mov edx, dword ptr [eax + 0x6c] */ r_edx = R32((u32)(r_eax+0x6cu));
    /* 004c793f: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4c7941u); call_ind(t); }
L_004c7941:; BB(0x004c7941);
    /* 004c7941: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004c7944: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004c7946: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004c7949: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 004c794c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4c794eu); call_ind(t); }
    /* 004c794e: jmp 0x4c784e */ goto L_004c784e;
L_004c7953:; BB(0x004c7953);
    /* 004c7953: mov esp, ebp */ r_esp = r_ebp;
    /* 004c7955: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c7956: ret 4 */ FN_RET(0x004c7820); r_esp += 8; return;
}

void f_004c79d0(void) /* sub_4C79D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004c79d0);
    /* 004c79d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004c79d1: mov ebp, esp */ r_ebp = r_esp;
    /* 004c79d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c79d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004c79d7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004c79da: mov cx, word ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 004c79de: mov word ptr [eax + 0x98], cx */ W16((u32)(r_eax+0x98u), (u16)r_ecx);
    /* 004c79e5: mov esp, ebp */ r_esp = r_ebp;
    /* 004c79e7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c79e8: ret 4 */ FN_RET(0x004c79d0); r_esp += 8; return;
}

void f_004c7c40(void) /* sub_4C7C40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004c7c40);
    /* 004c7c40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004c7c41: mov ebp, esp */ r_ebp = r_esp;
    /* 004c7c43: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004c7c45: push 0x6a22a2 */ { u32 v = 0x6a22a2u; r_esp -= 4; W32(r_esp, v); }
    /* 004c7c4a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004c7c50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c7c51: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004c7c54: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 004c7c59: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004c7c5b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c7c5c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 004c7c5f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 004c7c65: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 004c7c68: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 004c7c6f: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 004c7c72: call 0x484300 */ r_esp -= 4; W32(r_esp, 0x4c7c77u); f_00484300();
    /* 004c7c77: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 004c7c7e: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 004c7c81: cmp dword ptr [eax + 8], 0 */ {  u32 a = R32((u32)(r_eax+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c7c85: je 0x4c7cf0 */ if (fZ) goto L_004c7cf0;
L_004c7c87:; BB(0x004c7c87);
    /* 004c7c87: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 004c7c8e: jmp 0x4c7c99 */ goto L_004c7c99;
L_004c7c90:; BB(0x004c7c90);
    /* 004c7c90: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004c7c93: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c7c96: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
L_004c7c99:; BB(0x004c7c99);
    /* 004c7c99: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004c7c9c: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 004c7c9f: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x4c7ca4u); f_0060c9a0();
    /* 004c7ca4: cmp dword ptr [ebp - 0x18], eax */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c7ca7: jge 0x4c7cf0 */ if ((fS==fO)) goto L_004c7cf0;
L_004c7ca9:; BB(0x004c7ca9);
    /* 004c7ca9: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004c7cac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c7cad: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004c7cb0: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 004c7cb3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c7cb4: call 0x4c7310 */ r_esp -= 4; W32(r_esp, 0x4c7cb9u); f_004c7310();
    /* 004c7cb9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c7cbc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c7cbd: lea eax, [ebp - 0x19] */ r_eax = (u32)(r_ebp+0xffffffe7u);
    /* 004c7cc0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c7cc1: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004c7cc4: call 0x4dd780 */ r_esp -= 4; W32(r_esp, 0x4c7cc9u); f_004dd780();
    /* 004c7cc9: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 004c7ccc: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004c7ccf: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 004c7cd2: mov byte ptr [ebp - 4], 2 */ W8((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 004c7cd6: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004c7cd9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c7cda: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 004c7cdd: call 0x484830 */ r_esp -= 4; W32(r_esp, 0x4c7ce2u); f_00484830();
    /* 004c7ce2: mov byte ptr [ebp - 4], 1 */ W8((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 004c7ce6: lea ecx, [ebp - 0x19] */ r_ecx = (u32)(r_ebp+0xffffffe7u);
    /* 004c7ce9: call 0x464210 */ r_esp -= 4; W32(r_esp, 0x4c7ceeu); f_00464210();
    /* 004c7cee: jmp 0x4c7c90 */ goto L_004c7c90;
L_004c7cf0:; BB(0x004c7cf0);
    /* 004c7cf0: lea eax, [ebp - 0x14] */ r_eax = (u32)(r_ebp+0xffffffecu);
    /* 004c7cf3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c7cf4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004c7cf7: call 0x484320 */ r_esp -= 4; W32(r_esp, 0x4c7cfcu); f_00484320();
    /* 004c7cfc: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c7cff: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 004c7d02: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004c7d05: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004c7d09: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 004c7d0c: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x4c7d11u); f_00484470();
    /* 004c7d11: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004c7d14: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004c7d17: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004c7d1e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004c7d1f: mov esp, ebp */ r_esp = r_ebp;
    /* 004c7d21: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c7d22: ret 4 */ FN_RET(0x004c7c40); r_esp += 8; return;
}

