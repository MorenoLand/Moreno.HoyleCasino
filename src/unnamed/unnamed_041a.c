#include "protos.h"

void f_0041a080(void) /* sub_41A080 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0041a080);
    /* 0041a080: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041a081: mov ebp, esp */ r_ebp = r_esp;
    /* 0041a083: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041a084: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0041a087: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041a08a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041a08d: cmp dword ptr [ecx + eax*8 + 0x478], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*8+0x478u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041a095: jle 0x41a09b */ if ((fZ||fS!=fO)) goto L_0041a09b;
L_0041a097:; BB(0x0041a097);
    /* 0041a097: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0041a099: jmp 0x41a09d */ goto L_0041a09d;
L_0041a09b:; BB(0x0041a09b);
    /* 0041a09b: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0041a09d:; BB(0x0041a09d);
    /* 0041a09d: mov esp, ebp */ r_esp = r_ebp;
    /* 0041a09f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041a0a0: ret 4 */ FN_RET(0x0041a080); r_esp += 8; return;
}

void f_0041a0b0(void) /* sub_41A0B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0041a0b0);
    /* 0041a0b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041a0b1: mov ebp, esp */ r_ebp = r_esp;
    /* 0041a0b3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041a0b6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0041a0b9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041a0bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041a0bd: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041a0c0: call 0x41a080 */ r_esp -= 4; W32(r_esp, 0x41a0c5u); f_0041a080();
    /* 0041a0c5: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0041a0c8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041a0ca: jne 0x41a0d1 */ if (!fZ) goto L_0041a0d1;
L_0041a0cc:; BB(0x0041a0cc);
    /* 0041a0cc: jmp 0x41a188 */ goto L_0041a188;
L_0041a0d1:; BB(0x0041a0d1);
    /* 0041a0d1: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0041a0d4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041a0d5: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x41a0dau); f_005dcb00();
    /* 0041a0da: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041a0dd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041a0df: jne 0x41a0e6 */ if (!fZ) goto L_0041a0e6;
L_0041a0e1:; BB(0x0041a0e1);
    /* 0041a0e1: jmp 0x41a188 */ goto L_0041a188;
L_0041a0e6:; BB(0x0041a0e6);
    /* 0041a0e6: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041a0e9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041a0ea: mov ecx, dword ptr [0x790320] */ r_ecx = R32((u32)(0x790320u));
    /* 0041a0f0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0041a0f2: mov ecx, dword ptr [0x790320] */ r_ecx = R32((u32)(0x790320u));
    /* 0041a0f8: mov eax, dword ptr [edx + 0x290] */ r_eax = R32((u32)(r_edx+0x290u));
    /* 0041a0fe: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x41a100u); call_ind(t); }
    /* 0041a100: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041a103: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041a106: cmp dword ptr [edx + ecx*8 + 0x478], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*8+0x478u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041a10e: jle 0x41a146 */ if ((fZ||fS!=fO)) goto L_0041a146;
L_0041a110:; BB(0x0041a110);
    /* 0041a110: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0041a112: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041a114: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041a117: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041a11a: lea edx, [ecx + eax*8 + 0x478] */ r_edx = (u32)(r_ecx+r_eax*8+0x478u);
    /* 0041a121: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041a122: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041a125: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041a128: mov edx, dword ptr [ecx + eax*4 + 0x468] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x468u));
    /* 0041a12f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041a132: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041a135: mov ecx, dword ptr [ecx + eax*4 + 0x468] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x468u));
    /* 0041a13c: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0041a13e: mov eax, dword ptr [edx + 0xc4] */ r_eax = R32((u32)(r_edx+0xc4u));
    /* 0041a144: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x41a146u); call_ind(t); }
L_0041a146:; BB(0x0041a146);
    /* 0041a146: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041a149: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041a14a: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x41a14fu); f_005dcb00();
    /* 0041a14f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041a152: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0041a155: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041a158: mov byte ptr [edx + 0x4a0], 1 */ W8((u32)(r_edx+0x4a0u), 0x1u);
    /* 0041a15f: mov ecx, dword ptr [0x79032c] */ r_ecx = R32((u32)(0x79032cu));
    /* 0041a165: call 0x40cc00 */ r_esp -= 4; W32(r_esp, 0x41a16au); f_0040cc00();
    /* 0041a16a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041a16c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0041a16e: mov eax, dword ptr [0x790320] */ r_eax = R32((u32)(0x790320u));
    /* 0041a173: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0041a176: mov edx, dword ptr [0x790320] */ r_edx = R32((u32)(0x790320u));
    /* 0041a17c: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0041a17f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0041a181: mov ecx, eax */ r_ecx = r_eax;
    /* 0041a183: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0041a186: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x41a188u); call_ind(t); }
L_0041a188:; BB(0x0041a188);
    /* 0041a188: mov esp, ebp */ r_esp = r_ebp;
    /* 0041a18a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041a18b: ret 4 */ FN_RET(0x0041a0b0); r_esp += 8; return;
}

void f_0041a190(void) /* sub_41A190 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0041a190);
    /* 0041a190: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041a191: mov ebp, esp */ r_ebp = r_esp;
    /* 0041a193: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041a196: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0041a197: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0041a19a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0041a1a1: jmp 0x41a1ac */ goto L_0041a1ac;
L_0041a1a3:; BB(0x0041a1a3);
    /* 0041a1a3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041a1a6: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0041a1a9: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0041a1ac:; BB(0x0041a1ac);
    /* 0041a1ac: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041a1b0: jge 0x41a255 */ if ((fS==fO)) goto L_0041a255;
L_0041a1b6:; BB(0x0041a1b6);
    /* 0041a1b6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041a1b9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041a1ba: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x41a1bfu); f_005dcb00();
    /* 0041a1bf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041a1c2: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0041a1c5: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0041a1c8: mov al, byte ptr [edx + 0x4a0] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x4a0u))) & 0xffu);
    /* 0041a1ce: mov byte ptr [ebp - 0x19], al */ W8((u32)(r_ebp+0xffffffe7u), (u8)r_eax);
    /* 0041a1d1: movzx ecx, byte ptr [ebp - 0x19] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffe7u));
    /* 0041a1d5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041a1d7: je 0x41a224 */ if (fZ) goto L_0041a224;
L_0041a1d9:; BB(0x0041a1d9);
    /* 0041a1d9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041a1dc: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0041a1df: mov ecx, dword ptr [eax + edx*4 + 0x468] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x468u));
    /* 0041a1e6: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0041a1e9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041a1ec: shl edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0041a1ef: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0041a1f2: lea ecx, [eax + edx + 0x48] */ r_ecx = (u32)(r_eax+r_edx+0x48u);
    /* 0041a1f6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0041a1f8: shl edx, 3 */ { u32 c = (3u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0041a1fb: mov eax, dword ptr [ecx + edx] */ r_eax = R32((u32)(r_ecx+r_edx));
    /* 0041a1fe: mov ecx, dword ptr [ecx + edx + 4] */ r_ecx = R32((u32)(r_ecx+r_edx+0x4u));
    /* 0041a202: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0041a205: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0041a208: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041a20b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041a20e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041a211: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0041a214: mov dword ptr [esi + ecx*8 + 0x478], edx */ W32((u32)(r_esi+r_ecx*8+0x478u), r_edx);
    /* 0041a21b: mov dword ptr [esi + ecx*8 + 0x47c], eax */ W32((u32)(r_esi+r_ecx*8+0x47cu), r_eax);
    /* 0041a222: jmp 0x41a250 */ goto L_0041a250;
L_0041a224:; BB(0x0041a224);
    /* 0041a224: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041a226: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041a228: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x41a22du); f_0064c8a0();
    /* 0041a22d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041a230: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0041a233: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0041a236: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041a239: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0041a23c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0041a23f: mov dword ptr [eax + edx*8 + 0x478], ecx */ W32((u32)(r_eax+r_edx*8+0x478u), r_ecx);
    /* 0041a246: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041a249: mov dword ptr [eax + edx*8 + 0x47c], ecx */ W32((u32)(r_eax+r_edx*8+0x47cu), r_ecx);
L_0041a250:; BB(0x0041a250);
    /* 0041a250: jmp 0x41a1a3 */ goto L_0041a1a3;
L_0041a255:; BB(0x0041a255);
    /* 0041a255: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0041a256: mov esp, ebp */ r_esp = r_ebp;
    /* 0041a258: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041a259: ret  */ FN_RET(0x0041a190); r_esp += 4; return;
}

void f_0041a260(void) /* sub_41A260 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0041a260);
    /* 0041a260: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041a261: mov ebp, esp */ r_ebp = r_esp;
    /* 0041a263: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041a266: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0041a269: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0041a270: jmp 0x41a27b */ goto L_0041a27b;
L_0041a272:; BB(0x0041a272);
    /* 0041a272: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041a275: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0041a278: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0041a27b:; BB(0x0041a27b);
    /* 0041a27b: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041a27f: jge 0x41a2bd */ if ((fS==fO)) goto L_0041a2bd;
L_0041a281:; BB(0x0041a281);
    /* 0041a281: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041a284: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041a285: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041a288: call 0x419eb0 */ r_esp -= 4; W32(r_esp, 0x41a28du); f_00419eb0();
    /* 0041a28d: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0041a290: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041a292: jne 0x41a2b7 */ if (!fZ) goto L_0041a2b7;
L_0041a294:; BB(0x0041a294);
    /* 0041a294: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041a297: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041a298: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x41a29du); f_005dcb00();
    /* 0041a29d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041a2a0: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0041a2a3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041a2a6: mov dl, byte ptr [ecx + 0x4a0] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x4a0u))) & 0xffu);
    /* 0041a2ac: mov byte ptr [ebp - 9], dl */ W8((u32)(r_ebp+0xfffffff7u), (u8)r_edx);
    /* 0041a2af: movzx eax, byte ptr [ebp - 9] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffff7u));
    /* 0041a2b3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041a2b5: je 0x41a2bb */ if (fZ) goto L_0041a2bb;
L_0041a2b7:; BB(0x0041a2b7);
    /* 0041a2b7: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0041a2b9: jmp 0x41a2bf */ goto L_0041a2bf;
L_0041a2bb:; BB(0x0041a2bb);
    /* 0041a2bb: jmp 0x41a272 */ goto L_0041a272;
L_0041a2bd:; BB(0x0041a2bd);
    /* 0041a2bd: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0041a2bf:; BB(0x0041a2bf);
    /* 0041a2bf: mov esp, ebp */ r_esp = r_ebp;
    /* 0041a2c1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041a2c2: ret  */ FN_RET(0x0041a260); r_esp += 4; return;
}

void f_0041a2d0(void) /* sub_41A2D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0041a2d0);
    /* 0041a2d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041a2d1: mov ebp, esp */ r_ebp = r_esp;
    /* 0041a2d3: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041a2d6: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0041a2d9: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0041a2dc: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041a2df: mov edx, dword ptr [ecx + eax*4 + 0x468] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x468u));
    /* 0041a2e6: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0041a2e9: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0041a2ec: shl eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0041a2ef: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041a2f2: lea edx, [ecx + eax + 0x48] */ r_edx = (u32)(r_ecx+r_eax+0x48u);
    /* 0041a2f6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0041a2f8: shl eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0041a2fb: mov ecx, dword ptr [edx + eax] */ r_ecx = R32((u32)(r_edx+r_eax));
    /* 0041a2fe: mov edx, dword ptr [edx + eax + 4] */ r_edx = R32((u32)(r_edx+r_eax+0x4u));
    /* 0041a302: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0041a305: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0041a308: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0041a30b: imul eax, eax, 0x118 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x118u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0041a311: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041a314: cmp byte ptr [ecx + eax + 0x10c], 0 */ {  u32 a = R8((u32)(r_ecx+r_eax+0x10cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0041a31c: setne dl */ r_edx = (r_edx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0041a31f: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 0041a322: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041a324: je 0x41a331 */ if (fZ) goto L_0041a331;
L_0041a326:; BB(0x0041a326);
    /* 0041a326: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041a329: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0041a32a: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0041a32c: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0041a32e: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0041a331:; BB(0x0041a331);
    /* 0041a331: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041a334: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041a337: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 0041a339: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041a33c: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0041a33f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041a342: mov esp, ebp */ r_esp = r_ebp;
    /* 0041a344: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041a345: ret 8 */ FN_RET(0x0041a2d0); r_esp += 12; return;
}

void f_0041a350(void) /* sub_41A350 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0041a350);
    /* 0041a350: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041a351: mov ebp, esp */ r_ebp = r_esp;
    /* 0041a353: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041a356: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0041a359: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0041a360: jmp 0x41a36b */ goto L_0041a36b;
L_0041a362:; BB(0x0041a362);
    /* 0041a362: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041a365: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0041a368: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0041a36b:; BB(0x0041a36b);
    /* 0041a36b: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041a36f: jge 0x41a387 */ if ((fS==fO)) goto L_0041a387;
L_0041a371:; BB(0x0041a371);
    /* 0041a371: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041a374: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041a375: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041a378: call 0x419610 */ r_esp -= 4; W32(r_esp, 0x41a37du); f_00419610();
    /* 0041a37d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041a37f: je 0x41a385 */ if (fZ) goto L_0041a385;
L_0041a381:; BB(0x0041a381);
    /* 0041a381: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0041a383: jmp 0x41a389 */ goto L_0041a389;
L_0041a385:; BB(0x0041a385);
    /* 0041a385: jmp 0x41a362 */ goto L_0041a362;
L_0041a387:; BB(0x0041a387);
    /* 0041a387: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_0041a389:; BB(0x0041a389);
    /* 0041a389: mov esp, ebp */ r_esp = r_ebp;
    /* 0041a38b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041a38c: ret  */ FN_RET(0x0041a350); r_esp += 4; return;
}

void f_0041a390(void) /* sub_41A390 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0041a390);
    /* 0041a390: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041a391: mov ebp, esp */ r_ebp = r_esp;
    /* 0041a393: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041a396: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0041a399: mov dword ptr [ebp - 0x14], 3 */ W32((u32)(r_ebp+0xffffffecu), 0x3u);
    /* 0041a3a0: mov dword ptr [ebp - 0x10], 1 */ W32((u32)(r_ebp+0xfffffff0u), 0x1u);
    /* 0041a3a7: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0041a3ae: mov dword ptr [ebp - 8], 2 */ W32((u32)(r_ebp+0xfffffff8u), 0x2u);
    /* 0041a3b5: mov dword ptr [ebp - 0x18], 4 */ W32((u32)(r_ebp+0xffffffe8u), 0x4u);
    /* 0041a3bc: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0041a3be: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0041a3c1: call 0x419610 */ r_esp -= 4; W32(r_esp, 0x41a3c6u); f_00419610();
    /* 0041a3c6: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0041a3c9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0041a3d0: jmp 0x41a3db */ goto L_0041a3db;
L_0041a3d2:; BB(0x0041a3d2);
    /* 0041a3d2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041a3d5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0041a3d8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0041a3db:; BB(0x0041a3db);
    /* 0041a3db: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041a3df: jge 0x41a429 */ if ((fS==fO)) goto L_0041a429;
L_0041a3e1:; BB(0x0041a3e1);
    /* 0041a3e1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041a3e4: mov edx, dword ptr [ebp + ecx*4 - 0x14] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffecu));
    /* 0041a3e8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041a3e9: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0041a3ec: call 0x419610 */ r_esp -= 4; W32(r_esp, 0x41a3f1u); f_00419610();
    /* 0041a3f1: cmp dword ptr [ebp - 0x1c], eax */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041a3f4: jne 0x41a427 */ if (!fZ) goto L_0041a427;
L_0041a3f6:; BB(0x0041a3f6);
    /* 0041a3f6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041a3f9: mov ecx, dword ptr [ebp + eax*4 - 0x14] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffffecu));
    /* 0041a3fd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041a3fe: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x41a403u); f_005dcb00();
    /* 0041a403: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041a406: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0041a409: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0041a40c: mov al, byte ptr [edx + 0x4a0] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x4a0u))) & 0xffu);
    /* 0041a412: mov byte ptr [ebp - 0x21], al */ W8((u32)(r_ebp+0xffffffdfu), (u8)r_eax);
    /* 0041a415: movzx ecx, byte ptr [ebp - 0x21] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffdfu));
    /* 0041a419: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041a41b: je 0x41a427 */ if (fZ) goto L_0041a427;
L_0041a41d:; BB(0x0041a41d);
    /* 0041a41d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041a420: mov eax, dword ptr [ebp + edx*4 - 0x14] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xffffffecu));
    /* 0041a424: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_0041a427:; BB(0x0041a427);
    /* 0041a427: jmp 0x41a3d2 */ goto L_0041a3d2;
L_0041a429:; BB(0x0041a429);
    /* 0041a429: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0041a42c: mov esp, ebp */ r_esp = r_ebp;
    /* 0041a42e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041a42f: ret  */ FN_RET(0x0041a390); r_esp += 4; return;
}

void f_0041a430(void) /* sub_41A430 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0041a430);
    /* 0041a430: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041a431: mov ebp, esp */ r_ebp = r_esp;
    /* 0041a433: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041a436: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 0041a439: mov dword ptr [ebp - 0x14], 2 */ W32((u32)(r_ebp+0xffffffecu), 0x2u);
    /* 0041a440: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0041a447: mov dword ptr [ebp - 0xc], 1 */ W32((u32)(r_ebp+0xfffffff4u), 0x1u);
    /* 0041a44e: mov dword ptr [ebp - 8], 3 */ W32((u32)(r_ebp+0xfffffff8u), 0x3u);
    /* 0041a455: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0041a458: call 0x418540 */ r_esp -= 4; W32(r_esp, 0x41a45du); f_00418540();
    /* 0041a45d: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0041a460: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041a462: je 0x41a488 */ if (fZ) goto L_0041a488;
L_0041a464:; BB(0x0041a464);
    /* 0041a464: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0041a466: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041a468: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0041a46a: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0041a46d: call 0x419780 */ r_esp -= 4; W32(r_esp, 0x41a472u); f_00419780();
    /* 0041a472: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041a475: jne 0x41a488 */ if (!fZ) goto L_0041a488;
L_0041a477:; BB(0x0041a477);
    /* 0041a477: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0041a479: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0041a47b: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0041a47e: call 0x419530 */ r_esp -= 4; W32(r_esp, 0x41a483u); f_00419530();
    /* 0041a483: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041a486: je 0x41a490 */ if (fZ) goto L_0041a490;
L_0041a488:; BB(0x0041a488);
    /* 0041a488: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0041a48b: jmp 0x41a564 */ goto L_0041a564;
L_0041a490:; BB(0x0041a490);
    /* 0041a490: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0041a497: jmp 0x41a4a2 */ goto L_0041a4a2;
L_0041a499:; BB(0x0041a499);
    /* 0041a499: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041a49c: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0041a49f: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0041a4a2:; BB(0x0041a4a2);
    /* 0041a4a2: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041a4a6: jge 0x41a561 */ if ((fS==fO)) goto L_0041a561;
L_0041a4ac:; BB(0x0041a4ac);
    /* 0041a4ac: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041a4af: mov eax, dword ptr [ebp + edx*4 - 0x14] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xffffffecu));
    /* 0041a4b3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041a4b4: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x41a4b9u); f_005dcb00();
    /* 0041a4b9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041a4bc: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0041a4bf: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0041a4c2: mov dl, byte ptr [ecx + 0x4a0] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x4a0u))) & 0xffu);
    /* 0041a4c8: mov byte ptr [ebp - 0x19], dl */ W8((u32)(r_ebp+0xffffffe7u), (u8)r_edx);
    /* 0041a4cb: movzx eax, byte ptr [ebp - 0x19] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffe7u));
    /* 0041a4cf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041a4d1: je 0x41a53e */ if (fZ) goto L_0041a53e;
L_0041a4d3:; BB(0x0041a4d3);
    /* 0041a4d3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041a4d6: mov edx, dword ptr [ebp + ecx*4 - 0x14] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffecu));
    /* 0041a4da: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041a4db: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0041a4de: call 0x41a610 */ r_esp -= 4; W32(r_esp, 0x41a4e3u); f_0041a610();
    /* 0041a4e3: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0041a4e6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041a4e8: je 0x41a53e */ if (fZ) goto L_0041a53e;
L_0041a4ea:; BB(0x0041a4ea);
    /* 0041a4ea: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041a4ed: mov edx, dword ptr [ebp + ecx*4 - 0x14] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffecu));
    /* 0041a4f1: imul edx, edx, 0x118 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x118u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0041a4f7: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0041a4fa: cmp byte ptr [eax + edx + 0x11a], 0 */ {  u32 a = R8((u32)(r_eax+r_edx+0x11au)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0041a502: setne cl */ r_ecx = (r_ecx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0041a505: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 0041a508: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041a50a: jne 0x41a53e */ if (!fZ) goto L_0041a53e;
L_0041a50c:; BB(0x0041a50c);
    /* 0041a50c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041a50f: mov ecx, dword ptr [ebp + eax*4 - 0x14] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffffecu));
    /* 0041a513: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041a514: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x41a519u); f_005dcb00();
    /* 0041a519: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041a51c: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0041a51f: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0041a522: mov al, byte ptr [edx + 0x4a2] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x4a2u))) & 0xffu);
    /* 0041a528: mov byte ptr [ebp - 0x21], al */ W8((u32)(r_ebp+0xffffffdfu), (u8)r_eax);
    /* 0041a52b: movzx ecx, byte ptr [ebp - 0x21] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffdfu));
    /* 0041a52f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041a531: jne 0x41a53e */ if (!fZ) goto L_0041a53e;
L_0041a533:; BB(0x0041a533);
    /* 0041a533: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041a536: mov eax, dword ptr [ebp + edx*4 - 0x14] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xffffffecu));
    /* 0041a53a: jmp 0x41a564 */ goto L_0041a564;
L_0041a53e:; BB(0x0041a53e);
    /* 0041a53e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041a541: mov ecx, dword ptr [ebp + eax*4 - 0x14] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffffecu));
    /* 0041a545: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0041a548: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0041a54b: imul edx, edx, 0x118 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x118u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0041a551: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0041a554: mov byte ptr [eax + edx + 0x11a], 1 */ W8((u32)(r_eax+r_edx+0x11au), 0x1u);
    /* 0041a55c: jmp 0x41a499 */ goto L_0041a499;
L_0041a561:; BB(0x0041a561);
    /* 0041a561: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_0041a564:; BB(0x0041a564);
    /* 0041a564: mov esp, ebp */ r_esp = r_ebp;
    /* 0041a566: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041a567: ret  */ FN_RET(0x0041a430); r_esp += 4; return;
}

void f_0041a570(void) /* sub_41A570 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0041a570);
    /* 0041a570: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041a571: mov ebp, esp */ r_ebp = r_esp;
    /* 0041a573: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041a576: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0041a579: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041a57c: imul eax, eax, 0x118 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x118u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0041a582: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041a585: mov byte ptr [ecx + eax + 0x11a], 1 */ W8((u32)(r_ecx+r_eax+0x11au), 0x1u);
    /* 0041a58d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0041a590: imul edx, edx, 0x118 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x118u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0041a596: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041a599: mov cl, byte ptr [ebp + 0xc] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xcu))) & 0xffu);
    /* 0041a59c: mov byte ptr [eax + edx + 0x11b], cl */ W8((u32)(r_eax+r_edx+0x11bu), (u8)r_ecx);
    /* 0041a5a3: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0041a5a6: imul edx, edx, 0x118 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x118u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0041a5ac: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041a5af: cmp byte ptr [eax + edx + 0x11b], 0 */ {  u32 a = R8((u32)(r_eax+r_edx+0x11bu)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0041a5b7: setne cl */ r_ecx = (r_ecx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0041a5ba: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 0041a5bd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041a5bf: je 0x41a5fd */ if (fZ) goto L_0041a5fd;
L_0041a5c1:; BB(0x0041a5c1);
    /* 0041a5c1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041a5c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041a5c5: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 0041a5c8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041a5c9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041a5cc: call 0x41a660 */ r_esp -= 4; W32(r_esp, 0x41a5d1u); f_0041a660();
    /* 0041a5d1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041a5d3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0041a5d5: lea edx, [ebp - 8] */ r_edx = (u32)(r_ebp+0xfffffff8u);
    /* 0041a5d8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041a5d9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041a5dc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041a5df: mov edx, dword ptr [ecx + eax*4 + 0x468] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x468u));
    /* 0041a5e6: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041a5e9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041a5ec: mov ecx, dword ptr [ecx + eax*4 + 0x468] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x468u));
    /* 0041a5f3: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0041a5f5: mov eax, dword ptr [edx + 0xc4] */ r_eax = R32((u32)(r_edx+0xc4u));
    /* 0041a5fb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x41a5fdu); call_ind(t); }
L_0041a5fd:; BB(0x0041a5fd);
    /* 0041a5fd: mov esp, ebp */ r_esp = r_ebp;
    /* 0041a5ff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041a600: ret 8 */ FN_RET(0x0041a570); r_esp += 12; return;
}

void f_0041a610(void) /* sub_41A610 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0041a610);
    /* 0041a610: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041a611: mov ebp, esp */ r_ebp = r_esp;
    /* 0041a613: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041a616: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0041a619: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041a61c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041a61d: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0041a620: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041a621: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0041a624: call 0x41a660 */ r_esp -= 4; W32(r_esp, 0x41a629u); f_0041a660();
    /* 0041a629: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0041a62c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041a62d: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0041a62f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041a630: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 0041a633: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041a634: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0041a637: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041a638: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x41a63du); f_005dcb00();
    /* 0041a63d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041a640: mov ecx, eax */ r_ecx = r_eax;
    /* 0041a642: call 0x5d5a90 */ r_esp -= 4; W32(r_esp, 0x41a647u); f_005d5a90();
    /* 0041a647: mov ecx, eax */ r_ecx = r_eax;
    /* 0041a649: call 0x64c7a0 */ r_esp -= 4; W32(r_esp, 0x41a64eu); f_0064c7a0();
    /* 0041a64e: mov esp, ebp */ r_esp = r_ebp;
    /* 0041a650: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041a651: ret 4 */ FN_RET(0x0041a610); r_esp += 8; return;
}

void f_0041a660(void) /* sub_41A660 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0041a660);
    /* 0041a660: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041a661: mov ebp, esp */ r_ebp = r_esp;
    /* 0041a663: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041a666: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0041a669: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0041a66c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0041a66f: mov edx, dword ptr [ecx + eax*4 + 0x468] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x468u));
    /* 0041a676: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0041a679: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0041a67c: shl eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0041a67f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0041a682: lea edx, [ecx + eax + 0x48] */ r_edx = (u32)(r_ecx+r_eax+0x48u);
    /* 0041a686: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0041a688: shl eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0041a68b: mov ecx, dword ptr [edx + eax] */ r_ecx = R32((u32)(r_edx+r_eax));
    /* 0041a68e: mov edx, dword ptr [edx + eax + 4] */ r_edx = R32((u32)(r_edx+r_eax+0x4u));
    /* 0041a692: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0041a695: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0041a698: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041a69a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041a69c: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x41a6a1u); f_0064c8a0();
    /* 0041a6a1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041a6a4: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0041a6a7: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0041a6aa: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0041a6ad: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0041a6b0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0041a6b3: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0041a6b6: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041a6b9: and edx, 0x80000001 */ {  u32 a = r_edx; u32 b = 0x80000001u; u32 r = (a & b) & 0xffffffffu; r_edx = r; fS = ((r >> 31) & 1); }
    /* 0041a6bf: jns 0x41a6c6 */ if (!fS) goto L_0041a6c6;
L_0041a6c1:; BB(0x0041a6c1);
    /* 0041a6c1: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0041a6c2: or edx, 0xfffffffe */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0041a6c5: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_0041a6c6:; BB(0x0041a6c6);
    /* 0041a6c6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041a6c8: je 0x41a6d1 */ if (fZ) goto L_0041a6d1;
L_0041a6ca:; BB(0x0041a6ca);
    /* 0041a6ca: mov dword ptr [ebp - 0xc], 0x32 */ W32((u32)(r_ebp+0xfffffff4u), 0x32u);
L_0041a6d1:; BB(0x0041a6d1);
    /* 0041a6d1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041a6d4: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0041a6d5: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0041a6d7: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0041a6d9: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0041a6dc: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041a6df: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041a6e2: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 0041a6e4: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041a6e7: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0041a6ea: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041a6ed: mov esp, ebp */ r_esp = r_ebp;
    /* 0041a6ef: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041a6f0: ret 8 */ FN_RET(0x0041a660); r_esp += 12; return;
}

void f_0041a700(void) /* sub_41A700 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0041a700);
    /* 0041a700: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041a701: mov ebp, esp */ r_ebp = r_esp;
    /* 0041a703: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041a706: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0041a709: mov dword ptr [ebp - 0x14], 2 */ W32((u32)(r_ebp+0xffffffecu), 0x2u);
    /* 0041a710: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0041a717: mov dword ptr [ebp - 0xc], 1 */ W32((u32)(r_ebp+0xfffffff4u), 0x1u);
    /* 0041a71e: mov dword ptr [ebp - 8], 3 */ W32((u32)(r_ebp+0xfffffff8u), 0x3u);
    /* 0041a725: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0041a72c: jmp 0x41a737 */ goto L_0041a737;
L_0041a72e:; BB(0x0041a72e);
    /* 0041a72e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041a731: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0041a734: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0041a737:; BB(0x0041a737);
    /* 0041a737: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041a73b: jge 0x41a76a */ if ((fS==fO)) goto L_0041a76a;
L_0041a73d:; BB(0x0041a73d);
    /* 0041a73d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041a740: mov edx, dword ptr [ebp + ecx*4 - 0x14] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffecu));
    /* 0041a744: imul edx, edx, 0x118 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x118u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0041a74a: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0041a74d: cmp byte ptr [eax + edx + 0x11b], 0 */ {  u32 a = R8((u32)(r_eax+r_edx+0x11bu)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0041a755: setne cl */ r_ecx = (r_ecx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0041a758: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 0041a75b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041a75d: je 0x41a768 */ if (fZ) goto L_0041a768;
L_0041a75f:; BB(0x0041a75f);
    /* 0041a75f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041a762: mov eax, dword ptr [ebp + eax*4 - 0x14] */ r_eax = R32((u32)(r_ebp+r_eax*4+0xffffffecu));
    /* 0041a766: jmp 0x41a76d */ goto L_0041a76d;
L_0041a768:; BB(0x0041a768);
    /* 0041a768: jmp 0x41a72e */ goto L_0041a72e;
L_0041a76a:; BB(0x0041a76a);
    /* 0041a76a: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_0041a76d:; BB(0x0041a76d);
    /* 0041a76d: mov esp, ebp */ r_esp = r_ebp;
    /* 0041a76f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041a770: ret  */ FN_RET(0x0041a700); r_esp += 4; return;
}

void f_0041a780(void) /* sub_41A780 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0041a780);
    /* 0041a780: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041a781: mov ebp, esp */ r_ebp = r_esp;
    /* 0041a783: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041a786: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0041a789: mov dword ptr [ebp - 0x14], 2 */ W32((u32)(r_ebp+0xffffffecu), 0x2u);
    /* 0041a790: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0041a797: mov dword ptr [ebp - 0xc], 1 */ W32((u32)(r_ebp+0xfffffff4u), 0x1u);
    /* 0041a79e: mov dword ptr [ebp - 8], 3 */ W32((u32)(r_ebp+0xfffffff8u), 0x3u);
    /* 0041a7a5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0041a7ac: jmp 0x41a7b7 */ goto L_0041a7b7;
L_0041a7ae:; BB(0x0041a7ae);
    /* 0041a7ae: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041a7b1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0041a7b4: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0041a7b7:; BB(0x0041a7b7);
    /* 0041a7b7: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041a7bb: jge 0x41a806 */ if ((fS==fO)) goto L_0041a806;
L_0041a7bd:; BB(0x0041a7bd);
    /* 0041a7bd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041a7c0: mov edx, dword ptr [ebp + ecx*4 - 0x14] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffecu));
    /* 0041a7c4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041a7c5: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0041a7c8: call 0x419eb0 */ r_esp -= 4; W32(r_esp, 0x41a7cdu); f_00419eb0();
    /* 0041a7cd: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0041a7d0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041a7d2: je 0x41a804 */ if (fZ) goto L_0041a804;
L_0041a7d4:; BB(0x0041a7d4);
    /* 0041a7d4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041a7d7: mov edx, dword ptr [ebp + ecx*4 - 0x14] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffecu));
    /* 0041a7db: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041a7dc: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x41a7e1u); f_005dcb00();
    /* 0041a7e1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041a7e4: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0041a7e7: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0041a7ea: mov cl, byte ptr [eax + 0x4a2] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x4a2u))) & 0xffu);
    /* 0041a7f0: mov byte ptr [ebp - 0x19], cl */ W8((u32)(r_ebp+0xffffffe7u), (u8)r_ecx);
    /* 0041a7f3: movzx edx, byte ptr [ebp - 0x19] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffe7u));
    /* 0041a7f7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041a7f9: jne 0x41a804 */ if (!fZ) goto L_0041a804;
L_0041a7fb:; BB(0x0041a7fb);
    /* 0041a7fb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041a7fe: mov eax, dword ptr [ebp + eax*4 - 0x14] */ r_eax = R32((u32)(r_ebp+r_eax*4+0xffffffecu));
    /* 0041a802: jmp 0x41a809 */ goto L_0041a809;
L_0041a804:; BB(0x0041a804);
    /* 0041a804: jmp 0x41a7ae */ goto L_0041a7ae;
L_0041a806:; BB(0x0041a806);
    /* 0041a806: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_0041a809:; BB(0x0041a809);
    /* 0041a809: mov esp, ebp */ r_esp = r_ebp;
    /* 0041a80b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041a80c: ret  */ FN_RET(0x0041a780); r_esp += 4; return;
}

void f_0041a830(void) /* sub_41A830 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0041a830);
    /* 0041a830: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041a831: mov ebp, esp */ r_ebp = r_esp;
    /* 0041a833: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041a836: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0041a839: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041a83c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041a83d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041a840: call 0x4194c0 */ r_esp -= 4; W32(r_esp, 0x41a845u); f_004194c0();
    /* 0041a845: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041a848: jne 0x41a879 */ if (!fZ) goto L_0041a879;
L_0041a84a:; BB(0x0041a84a);
    /* 0041a84a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041a84c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041a84f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041a850: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041a853: call 0x419530 */ r_esp -= 4; W32(r_esp, 0x41a858u); f_00419530();
    /* 0041a858: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041a85b: jne 0x41a879 */ if (!fZ) goto L_0041a879;
L_0041a85d:; BB(0x0041a85d);
    /* 0041a85d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041a85f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0041a862: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041a863: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041a866: call 0x419980 */ r_esp -= 4; W32(r_esp, 0x41a86bu); f_00419980();
    /* 0041a86b: cmp eax, 0x15 */ {  u32 a = r_eax; u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041a86e: jne 0x41a879 */ if (!fZ) goto L_0041a879;
L_0041a870:; BB(0x0041a870);
    /* 0041a870: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 0041a877: jmp 0x41a880 */ goto L_0041a880;
L_0041a879:; BB(0x0041a879);
    /* 0041a879: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_0041a880:; BB(0x0041a880);
    /* 0041a880: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0041a883: mov esp, ebp */ r_esp = r_ebp;
    /* 0041a885: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041a886: ret 4 */ FN_RET(0x0041a830); r_esp += 8; return;
}

void f_0041a890(void) /* sub_41A890 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0041a890);
    /* 0041a890: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041a891: mov ebp, esp */ r_ebp = r_esp;
    /* 0041a893: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041a896: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0041a899: mov dword ptr [ebp - 0x14], 2 */ W32((u32)(r_ebp+0xffffffecu), 0x2u);
    /* 0041a8a0: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0041a8a7: mov dword ptr [ebp - 0xc], 1 */ W32((u32)(r_ebp+0xfffffff4u), 0x1u);
    /* 0041a8ae: mov dword ptr [ebp - 8], 3 */ W32((u32)(r_ebp+0xfffffff8u), 0x3u);
    /* 0041a8b5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0041a8bc: jmp 0x41a8c7 */ goto L_0041a8c7;
L_0041a8be:; BB(0x0041a8be);
    /* 0041a8be: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041a8c1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0041a8c4: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0041a8c7:; BB(0x0041a8c7);
    /* 0041a8c7: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041a8cb: jge 0x41a951 */ if ((fS==fO)) goto L_0041a951;
L_0041a8d1:; BB(0x0041a8d1);
    /* 0041a8d1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041a8d4: mov edx, dword ptr [ebp + ecx*4 - 0x14] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffecu));
    /* 0041a8d8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041a8d9: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x41a8deu); f_005dcb00();
    /* 0041a8de: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041a8e1: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0041a8e4: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0041a8e7: mov cl, byte ptr [eax + 0x4a0] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x4a0u))) & 0xffu);
    /* 0041a8ed: mov byte ptr [ebp - 0x19], cl */ W8((u32)(r_ebp+0xffffffe7u), (u8)r_ecx);
    /* 0041a8f0: movzx edx, byte ptr [ebp - 0x19] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffe7u));
    /* 0041a8f4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041a8f6: je 0x41a94c */ if (fZ) goto L_0041a94c;
L_0041a8f8:; BB(0x0041a8f8);
    /* 0041a8f8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041a8fb: mov ecx, dword ptr [ebp + eax*4 - 0x14] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffffecu));
    /* 0041a8ff: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0041a902: cmp dword ptr [ebp - 0x20], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041a906: jne 0x41a911 */ if (!fZ) goto L_0041a911;
L_0041a908:; BB(0x0041a908);
    /* 0041a908: mov dword ptr [ebp - 0x24], 0xffffffff */ W32((u32)(r_ebp+0xffffffdcu), 0xffffffffu);
    /* 0041a90f: jmp 0x41a93d */ goto L_0041a93d;
L_0041a911:; BB(0x0041a911);
    /* 0041a911: cmp dword ptr [ebp - 0x20], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041a915: jne 0x41a920 */ if (!fZ) goto L_0041a920;
L_0041a917:; BB(0x0041a917);
    /* 0041a917: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0041a91e: jmp 0x41a937 */ goto L_0041a937;
L_0041a920:; BB(0x0041a920);
    /* 0041a920: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0041a923: imul edx, edx, 0x118 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x118u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0041a929: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0041a92c: movsx ecx, byte ptr [eax + edx + 0x119] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+r_edx+0x119u));
    /* 0041a934: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
L_0041a937:; BB(0x0041a937);
    /* 0041a937: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0041a93a: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
L_0041a93d:; BB(0x0041a93d);
    /* 0041a93d: cmp dword ptr [ebp - 0x24], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041a941: je 0x41a94c */ if (fZ) goto L_0041a94c;
L_0041a943:; BB(0x0041a943);
    /* 0041a943: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041a946: mov eax, dword ptr [ebp + eax*4 - 0x14] */ r_eax = R32((u32)(r_ebp+r_eax*4+0xffffffecu));
    /* 0041a94a: jmp 0x41a954 */ goto L_0041a954;
L_0041a94c:; BB(0x0041a94c);
    /* 0041a94c: jmp 0x41a8be */ goto L_0041a8be;
L_0041a951:; BB(0x0041a951);
    /* 0041a951: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_0041a954:; BB(0x0041a954);
    /* 0041a954: mov esp, ebp */ r_esp = r_ebp;
    /* 0041a956: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041a957: ret  */ FN_RET(0x0041a890); r_esp += 4; return;
}

void f_0041ade0(void) /* sub_41ADE0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0041ade0);
    /* 0041ade0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041ade1: mov ebp, esp */ r_ebp = r_esp;
    /* 0041ade3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041ade4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0041ade7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041adea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041adeb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041adee: call 0x41af20 */ r_esp -= 4; W32(r_esp, 0x41adf3u); f_0041af20();
    /* 0041adf3: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0041adf6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041adf8: jne 0x41ae01 */ if (!fZ) goto L_0041ae01;
L_0041adfa:; BB(0x0041adfa);
    /* 0041adfa: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0041adfc: jmp 0x41aeb6 */ goto L_0041aeb6;
L_0041ae01:; BB(0x0041ae01);
    /* 0041ae01: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041ae04: call 0x418600 */ r_esp -= 4; W32(r_esp, 0x41ae09u); f_00418600();
    /* 0041ae09: movsx edx, al */ r_edx = (u32)(i32)(i8)(u8)r_eax;
    /* 0041ae0c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041ae0e: je 0x41aeb4 */ if (fZ) goto L_0041aeb4;
L_0041ae14:; BB(0x0041ae14);
    /* 0041ae14: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0041ae17: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041ae18: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041ae1b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041ae1c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041ae1f: call 0x41afe0 */ r_esp -= 4; W32(r_esp, 0x41ae24u); f_0041afe0();
    /* 0041ae24: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0041ae27: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041ae29: je 0x41aeb4 */ if (fZ) goto L_0041aeb4;
L_0041ae2f:; BB(0x0041ae2f);
    /* 0041ae2f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041ae32: call 0x418690 */ r_esp -= 4; W32(r_esp, 0x41ae37u); f_00418690();
    /* 0041ae37: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0041ae3a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041ae3c: jne 0x41ae6a */ if (!fZ) goto L_0041ae6a;
L_0041ae3e:; BB(0x0041ae3e);
    /* 0041ae3e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041ae40: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0041ae43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041ae44: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0041ae47: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041ae48: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041ae4b: call 0x419780 */ r_esp -= 4; W32(r_esp, 0x41ae50u); f_00419780();
    /* 0041ae50: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041ae53: jne 0x41ae6a */ if (!fZ) goto L_0041ae6a;
L_0041ae55:; BB(0x0041ae55);
    /* 0041ae55: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041ae58: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041ae59: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041ae5c: call 0x4194c0 */ r_esp -= 4; W32(r_esp, 0x41ae61u); f_004194c0();
    /* 0041ae61: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041ae64: jle 0x41ae6a */ if ((fZ||fS!=fO)) goto L_0041ae6a;
L_0041ae66:; BB(0x0041ae66);
    /* 0041ae66: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0041ae68: jmp 0x41aeb6 */ goto L_0041aeb6;
L_0041ae6a:; BB(0x0041ae6a);
    /* 0041ae6a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041ae6d: call 0x418600 */ r_esp -= 4; W32(r_esp, 0x41ae72u); f_00418600();
    /* 0041ae72: movsx ecx, al */ r_ecx = (u32)(i32)(i8)(u8)r_eax;
    /* 0041ae75: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041ae78: jne 0x41ae8f */ if (!fZ) goto L_0041ae8f;
L_0041ae7a:; BB(0x0041ae7a);
    /* 0041ae7a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0041ae7d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041ae7e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041ae81: call 0x4194c0 */ r_esp -= 4; W32(r_esp, 0x41ae86u); f_004194c0();
    /* 0041ae86: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041ae89: jne 0x41ae8f */ if (!fZ) goto L_0041ae8f;
L_0041ae8b:; BB(0x0041ae8b);
    /* 0041ae8b: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0041ae8d: jmp 0x41aeb6 */ goto L_0041aeb6;
L_0041ae8f:; BB(0x0041ae8f);
    /* 0041ae8f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041ae92: call 0x418600 */ r_esp -= 4; W32(r_esp, 0x41ae97u); f_00418600();
    /* 0041ae97: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 0041ae9a: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041ae9d: jne 0x41aeb4 */ if (!fZ) goto L_0041aeb4;
L_0041ae9f:; BB(0x0041ae9f);
    /* 0041ae9f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041aea2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041aea3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041aea6: call 0x4194c0 */ r_esp -= 4; W32(r_esp, 0x41aeabu); f_004194c0();
    /* 0041aeab: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041aeae: jge 0x41aeb4 */ if ((fS==fO)) goto L_0041aeb4;
L_0041aeb0:; BB(0x0041aeb0);
    /* 0041aeb0: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0041aeb2: jmp 0x41aeb6 */ goto L_0041aeb6;
L_0041aeb4:; BB(0x0041aeb4);
    /* 0041aeb4: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0041aeb6:; BB(0x0041aeb6);
    /* 0041aeb6: mov esp, ebp */ r_esp = r_ebp;
    /* 0041aeb8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041aeb9: ret 8 */ FN_RET(0x0041ade0); r_esp += 12; return;
}

void f_0041aec0(void) /* sub_41AEC0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0041aec0);
    /* 0041aec0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041aec1: mov ebp, esp */ r_ebp = r_esp;
    /* 0041aec3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041aec6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0041aec9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041aecc: call 0x418580 */ r_esp -= 4; W32(r_esp, 0x41aed1u); f_00418580();
    /* 0041aed1: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0041aed4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041aed6: je 0x41af05 */ if (fZ) goto L_0041af05;
L_0041aed8:; BB(0x0041aed8);
    /* 0041aed8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041aedb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041aedc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041aedf: call 0x4194c0 */ r_esp -= 4; W32(r_esp, 0x41aee4u); f_004194c0();
    /* 0041aee4: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041aee7: jne 0x41af05 */ if (!fZ) goto L_0041af05;
L_0041aee9:; BB(0x0041aee9);
    /* 0041aee9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041aeeb: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0041aeee: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041aeef: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041aef2: call 0x419530 */ r_esp -= 4; W32(r_esp, 0x41aef7u); f_00419530();
    /* 0041aef7: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041aefa: jne 0x41af05 */ if (!fZ) goto L_0041af05;
L_0041aefc:; BB(0x0041aefc);
    /* 0041aefc: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 0041af03: jmp 0x41af0c */ goto L_0041af0c;
L_0041af05:; BB(0x0041af05);
    /* 0041af05: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_0041af0c:; BB(0x0041af0c);
    /* 0041af0c: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0041af0f: mov esp, ebp */ r_esp = r_ebp;
    /* 0041af11: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041af12: ret 4 */ FN_RET(0x0041aec0); r_esp += 8; return;
}

void f_0041af20(void) /* sub_41AF20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0041af20);
    /* 0041af20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041af21: mov ebp, esp */ r_ebp = r_esp;
    /* 0041af23: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041af26: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0041af29: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041af2c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041af2f: mov edx, dword ptr [ecx + eax*4 + 0x468] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x468u));
    /* 0041af36: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0041af39: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041af3c: shl eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0041af3f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041af42: lea edx, [ecx + eax + 0x48] */ r_edx = (u32)(r_ecx+r_eax+0x48u);
    /* 0041af46: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0041af48: shl eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0041af4b: mov ecx, dword ptr [edx + eax] */ r_ecx = R32((u32)(r_edx+r_eax));
    /* 0041af4e: mov edx, dword ptr [edx + eax + 4] */ r_edx = R32((u32)(r_edx+r_eax+0x4u));
    /* 0041af52: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0041af55: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0041af58: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041af5b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041af5c: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x41af61u); f_005dcb00();
    /* 0041af61: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041af64: mov ecx, eax */ r_ecx = r_eax;
    /* 0041af66: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x41af6bu); f_005d5a50();
    /* 0041af6b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0041af6d: cmp eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041af70: setge cl */ r_ecx = (r_ecx & 0xffffff00u) | ((((fS==fO)) ? 1 : 0) & 0xffu);
    /* 0041af73: mov al, cl */ r_eax = (r_eax & 0xffffff00u) | (((u8)r_ecx) & 0xffu);
    /* 0041af75: mov esp, ebp */ r_esp = r_ebp;
    /* 0041af77: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041af78: ret 4 */ FN_RET(0x0041af20); r_esp += 8; return;
}

void f_0041af80(void) /* sub_41AF80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0041af80);
    /* 0041af80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041af81: mov ebp, esp */ r_ebp = r_esp;
    /* 0041af83: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041af86: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0041af87: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0041af8a: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0041af8d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041af8e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041af91: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041af92: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041af95: call 0x4197d0 */ r_esp -= 4; W32(r_esp, 0x41af9au); f_004197d0();
    /* 0041af9a: mov esi, eax */ r_esi = r_eax;
    /* 0041af9c: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0041af9f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041afa0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041afa3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041afa4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041afa7: call 0x4198d0 */ r_esp -= 4; W32(r_esp, 0x41afacu); f_004198d0();
    /* 0041afac: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041afae: je 0x41afce */ if (fZ) goto L_0041afce;
L_0041afb0:; BB(0x0041afb0);
    /* 0041afb0: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0041afb3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041afb4: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0041afb7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041afb8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041afbb: call 0x4197d0 */ r_esp -= 4; W32(r_esp, 0x41afc0u); f_004197d0();
    /* 0041afc0: cmp eax, 0x15 */ {  u32 a = r_eax; u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041afc3: jg 0x41afce */ if ((!fZ&&fS==fO)) goto L_0041afce;
L_0041afc5:; BB(0x0041afc5);
    /* 0041afc5: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0041afcc: jmp 0x41afd5 */ goto L_0041afd5;
L_0041afce:; BB(0x0041afce);
    /* 0041afce: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
L_0041afd5:; BB(0x0041afd5);
    /* 0041afd5: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0041afd8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0041afd9: mov esp, ebp */ r_esp = r_ebp;
    /* 0041afdb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041afdc: ret 8 */ FN_RET(0x0041af80); r_esp += 12; return;
}

void f_0041afe0(void) /* sub_41AFE0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0041afe0);
    /* 0041afe0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041afe1: mov ebp, esp */ r_ebp = r_esp;
    /* 0041afe3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041afe6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0041afe7: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0041afea: cmp dword ptr [ebp + 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041afee: jne 0x41b02b */ if (!fZ) goto L_0041b02b;
L_0041aff0:; BB(0x0041aff0);
    /* 0041aff0: cmp dword ptr [ebp + 8], -1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041aff4: jne 0x41afff */ if (!fZ) goto L_0041afff;
L_0041aff6:; BB(0x0041aff6);
    /* 0041aff6: mov dword ptr [ebp + 0xc], 0xffffffff */ W32((u32)(r_ebp+0xcu), 0xffffffffu);
    /* 0041affd: jmp 0x41b02b */ goto L_0041b02b;
L_0041afff:; BB(0x0041afff);
    /* 0041afff: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041b003: jne 0x41b00e */ if (!fZ) goto L_0041b00e;
L_0041b005:; BB(0x0041b005);
    /* 0041b005: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0041b00c: jmp 0x41b025 */ goto L_0041b025;
L_0041b00e:; BB(0x0041b00e);
    /* 0041b00e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041b011: imul eax, eax, 0x118 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x118u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0041b017: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041b01a: movsx edx, byte ptr [ecx + eax + 0x119] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+r_eax+0x119u));
    /* 0041b022: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0041b025:; BB(0x0041b025);
    /* 0041b025: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041b028: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
L_0041b02b:; BB(0x0041b02b);
    /* 0041b02b: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0041b02e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041b02f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0041b032: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041b033: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041b036: call 0x419530 */ r_esp -= 4; W32(r_esp, 0x41b03bu); f_00419530();
    /* 0041b03b: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041b03e: jne 0x41b085 */ if (!fZ) goto L_0041b085;
L_0041b040:; BB(0x0041b040);
    /* 0041b040: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041b042: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0041b045: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041b046: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041b049: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041b04a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041b04d: call 0x4193d0 */ r_esp -= 4; W32(r_esp, 0x41b052u); f_004193d0();
    /* 0041b052: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041b053: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x41b058u); f_00641280();
    /* 0041b058: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041b05b: mov esi, eax */ r_esi = r_eax;
    /* 0041b05d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0041b05f: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0041b062: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041b063: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041b066: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041b067: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041b06a: call 0x4193d0 */ r_esp -= 4; W32(r_esp, 0x41b06fu); f_004193d0();
    /* 0041b06f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041b070: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x41b075u); f_00641280();
    /* 0041b075: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041b078: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041b07a: jne 0x41b085 */ if (!fZ) goto L_0041b085;
L_0041b07c:; BB(0x0041b07c);
    /* 0041b07c: mov dword ptr [ebp - 0xc], 1 */ W32((u32)(r_ebp+0xfffffff4u), 0x1u);
    /* 0041b083: jmp 0x41b08c */ goto L_0041b08c;
L_0041b085:; BB(0x0041b085);
    /* 0041b085: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
L_0041b08c:; BB(0x0041b08c);
    /* 0041b08c: mov al, byte ptr [ebp - 0xc] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff4u))) & 0xffu);
    /* 0041b08f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0041b090: mov esp, ebp */ r_esp = r_ebp;
    /* 0041b092: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041b093: ret 8 */ FN_RET(0x0041afe0); r_esp += 12; return;
}

