#include "protos.h"

void f_005410d0(void) /* sub_5410D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005410d0);
    /* 005410d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005410d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005410d3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005410d6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005410d9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005410e0: jmp 0x5410eb */ goto L_005410eb;
L_005410e2:; BB(0x005410e2);
    /* 005410e2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005410e5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005410e8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005410eb:; BB(0x005410eb);
    /* 005410eb: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005410ef: jge 0x541107 */ if ((fS==fO)) goto L_00541107;
L_005410f1:; BB(0x005410f1);
    /* 005410f1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005410f4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005410f5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005410f8: call 0x540c30 */ r_esp -= 4; W32(r_esp, 0x5410fdu); f_00540c30();
    /* 005410fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005410ff: je 0x541105 */ if (fZ) goto L_00541105;
L_00541101:; BB(0x00541101);
    /* 00541101: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00541103: jmp 0x541109 */ goto L_00541109;
L_00541105:; BB(0x00541105);
    /* 00541105: jmp 0x5410e2 */ goto L_005410e2;
L_00541107:; BB(0x00541107);
    /* 00541107: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_00541109:; BB(0x00541109);
    /* 00541109: mov esp, ebp */ r_esp = r_ebp;
    /* 0054110b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054110c: ret  */ FN_RET(0x005410d0); r_esp += 4; return;
}

void f_00541110(void) /* sub_541110 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00541110);
    /* 00541110: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00541111: mov ebp, esp */ r_ebp = r_esp;
    /* 00541113: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00541116: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00541119: mov dword ptr [ebp - 8], 3 */ W32((u32)(r_ebp+0xfffffff8u), 0x3u);
    /* 00541120: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00541127: jmp 0x541132 */ goto L_00541132;
L_00541129:; BB(0x00541129);
    /* 00541129: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054112c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054112f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00541132:; BB(0x00541132);
    /* 00541132: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00541136: jge 0x54117d */ if ((fS==fO)) goto L_0054117d;
L_00541138:; BB(0x00541138);
    /* 00541138: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054113b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054113c: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x541141u); f_005dcb00();
    /* 00541141: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00541144: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00541147: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054114a: mov al, byte ptr [edx + 0x4a0] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x4a0u))) & 0xffu);
    /* 00541150: mov byte ptr [ebp - 0xd], al */ W8((u32)(r_ebp+0xfffffff3u), (u8)r_eax);
    /* 00541153: movzx ecx, byte ptr [ebp - 0xd] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffff3u));
    /* 00541157: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00541159: je 0x54117b */ if (fZ) goto L_0054117b;
L_0054115b:; BB(0x0054115b);
    /* 0054115b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054115e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054115f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00541162: call 0x540c30 */ r_esp -= 4; W32(r_esp, 0x541167u); f_00540c30();
    /* 00541167: cmp eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054116a: jge 0x54117b */ if ((fS==fO)) goto L_0054117b;
L_0054116c:; BB(0x0054116c);
    /* 0054116c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054116f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00541170: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00541173: call 0x540c30 */ r_esp -= 4; W32(r_esp, 0x541178u); f_00540c30();
    /* 00541178: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0054117b:; BB(0x0054117b);
    /* 0054117b: jmp 0x541129 */ goto L_00541129;
L_0054117d:; BB(0x0054117d);
    /* 0054117d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00541180: mov esp, ebp */ r_esp = r_ebp;
    /* 00541182: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00541183: ret  */ FN_RET(0x00541110); r_esp += 4; return;
}

void f_00541190(void) /* sub_541190 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00541190);
    /* 00541190: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00541191: mov ebp, esp */ r_ebp = r_esp;
    /* 00541193: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00541196: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00541197: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0054119a: mov dword ptr [ebp - 0x18], 2 */ W32((u32)(r_ebp+0xffffffe8u), 0x2u);
    /* 005411a1: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 005411a8: mov dword ptr [ebp - 0x10], 1 */ W32((u32)(r_ebp+0xfffffff0u), 0x1u);
    /* 005411af: mov dword ptr [ebp - 0xc], 3 */ W32((u32)(r_ebp+0xfffffff4u), 0x3u);
    /* 005411b6: mov dword ptr [ebp - 8], 4 */ W32((u32)(r_ebp+0xfffffff8u), 0x4u);
    /* 005411bd: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005411c4: jmp 0x5411cf */ goto L_005411cf;
L_005411c6:; BB(0x005411c6);
    /* 005411c6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005411c9: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005411cc: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005411cf:; BB(0x005411cf);
    /* 005411cf: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005411d3: jge 0x541269 */ if ((fS==fO)) goto L_00541269;
L_005411d9:; BB(0x005411d9);
    /* 005411d9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005411dc: cmp dword ptr [ebp + ecx*4 - 0x18], 4 */ {  u32 a = R32((u32)(r_ebp+r_ecx*4+0xffffffe8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005411e1: jne 0x541201 */ if (!fZ) goto L_00541201;
L_005411e3:; BB(0x005411e3);
    /* 005411e3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005411e6: mov eax, dword ptr [ebp + edx*4 - 0x18] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xffffffe8u));
    /* 005411ea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005411eb: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005411ee: call 0x540c30 */ r_esp -= 4; W32(r_esp, 0x5411f3u); f_00540c30();
    /* 005411f3: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005411f6: jge 0x541201 */ if ((fS==fO)) goto L_00541201;
L_005411f8:; BB(0x005411f8);
    /* 005411f8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005411fb: mov eax, dword ptr [ebp + ecx*4 - 0x18] */ r_eax = R32((u32)(r_ebp+r_ecx*4+0xffffffe8u));
    /* 005411ff: jmp 0x54126c */ goto L_0054126c;
L_00541201:; BB(0x00541201);
    /* 00541201: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00541204: mov eax, dword ptr [ebp + edx*4 - 0x18] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xffffffe8u));
    /* 00541208: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00541209: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x54120eu); f_005dcb00();
    /* 0054120e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00541211: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00541214: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00541217: mov dl, byte ptr [ecx + 0x4a0] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x4a0u))) & 0xffu);
    /* 0054121d: mov byte ptr [ebp - 0x1d], dl */ W8((u32)(r_ebp+0xffffffe3u), (u8)r_edx);
    /* 00541220: movzx eax, byte ptr [ebp - 0x1d] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffe3u));
    /* 00541224: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00541226: je 0x541264 */ if (fZ) goto L_00541264;
L_00541228:; BB(0x00541228);
    /* 00541228: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054122b: mov edx, dword ptr [ebp + ecx*4 - 0x18] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffe8u));
    /* 0054122f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00541230: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00541233: call 0x540c30 */ r_esp -= 4; W32(r_esp, 0x541238u); f_00540c30();
    /* 00541238: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054123b: jge 0x541264 */ if ((fS==fO)) goto L_00541264;
L_0054123d:; BB(0x0054123d);
    /* 0054123d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00541240: mov ecx, dword ptr [ebp + eax*4 - 0x18] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffffe8u));
    /* 00541244: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00541245: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00541248: call 0x540c30 */ r_esp -= 4; W32(r_esp, 0x54124du); f_00540c30();
    /* 0054124d: mov esi, eax */ r_esi = r_eax;
    /* 0054124f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00541252: call 0x541110 */ r_esp -= 4; W32(r_esp, 0x541257u); f_00541110();
    /* 00541257: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00541259: jne 0x541264 */ if (!fZ) goto L_00541264;
L_0054125b:; BB(0x0054125b);
    /* 0054125b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054125e: mov eax, dword ptr [ebp + edx*4 - 0x18] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xffffffe8u));
    /* 00541262: jmp 0x54126c */ goto L_0054126c;
L_00541264:; BB(0x00541264);
    /* 00541264: jmp 0x5411c6 */ goto L_005411c6;
L_00541269:; BB(0x00541269);
    /* 00541269: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_0054126c:; BB(0x0054126c);
    /* 0054126c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0054126d: mov esp, ebp */ r_esp = r_ebp;
    /* 0054126f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00541270: ret  */ FN_RET(0x00541190); r_esp += 4; return;
}

void f_00541280(void) /* sub_541280 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00541280);
    /* 00541280: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00541281: mov ebp, esp */ r_ebp = r_esp;
    /* 00541283: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00541286: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00541289: mov dword ptr [ebp - 0x14], 2 */ W32((u32)(r_ebp+0xffffffecu), 0x2u);
    /* 00541290: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00541297: mov dword ptr [ebp - 0xc], 1 */ W32((u32)(r_ebp+0xfffffff4u), 0x1u);
    /* 0054129e: mov dword ptr [ebp - 8], 3 */ W32((u32)(r_ebp+0xfffffff8u), 0x3u);
    /* 005412a5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005412ac: jmp 0x5412b7 */ goto L_005412b7;
L_005412ae:; BB(0x005412ae);
    /* 005412ae: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005412b1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005412b4: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005412b7:; BB(0x005412b7);
    /* 005412b7: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005412bb: jge 0x541359 */ if ((fS==fO)) goto L_00541359;
L_005412c1:; BB(0x005412c1);
    /* 005412c1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005412c4: mov edx, dword ptr [ebp + ecx*4 - 0x14] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffecu));
    /* 005412c8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005412c9: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5412ceu); f_005dcb00();
    /* 005412ce: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005412d1: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005412d4: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005412d7: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5412dcu); f_0063aac0();
    /* 005412dc: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005412de: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005412e1: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005412e3: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005412e7: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 005412ea: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 005412ed: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005412ef: jne 0x541354 */ if (!fZ) goto L_00541354;
L_005412f1:; BB(0x005412f1);
    /* 005412f1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005412f4: mov ecx, dword ptr [ebp + eax*4 - 0x14] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffffecu));
    /* 005412f8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005412f9: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5412feu); f_005dcb00();
    /* 005412fe: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00541301: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00541304: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00541307: mov al, byte ptr [edx + 0x4a1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x4a1u))) & 0xffu);
    /* 0054130d: mov byte ptr [ebp - 0x21], al */ W8((u32)(r_ebp+0xffffffdfu), (u8)r_eax);
    /* 00541310: movzx ecx, byte ptr [ebp - 0x21] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffdfu));
    /* 00541314: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00541316: jne 0x541354 */ if (!fZ) goto L_00541354;
L_00541318:; BB(0x00541318);
    /* 00541318: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054131b: mov eax, dword ptr [ebp + edx*4 - 0x14] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xffffffecu));
    /* 0054131f: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00541322: mov dl, byte ptr [ecx + eax + 0xf2] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+r_eax+0xf2u))) & 0xffu);
    /* 00541329: mov byte ptr [ebp - 0x22], dl */ W8((u32)(r_ebp+0xffffffdeu), (u8)r_edx);
    /* 0054132c: movzx eax, byte ptr [ebp - 0x22] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffdeu));
    /* 00541330: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00541332: jne 0x541354 */ if (!fZ) goto L_00541354;
L_00541334:; BB(0x00541334);
    /* 00541334: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00541337: mov edx, dword ptr [ebp + ecx*4 - 0x14] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffecu));
    /* 0054133b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054133c: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0054133f: call 0x5414e0 */ r_esp -= 4; W32(r_esp, 0x541344u); f_005414e0();
    /* 00541344: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00541347: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00541349: je 0x541354 */ if (fZ) goto L_00541354;
L_0054134b:; BB(0x0054134b);
    /* 0054134b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054134e: mov eax, dword ptr [ebp + ecx*4 - 0x14] */ r_eax = R32((u32)(r_ebp+r_ecx*4+0xffffffecu));
    /* 00541352: jmp 0x54135c */ goto L_0054135c;
L_00541354:; BB(0x00541354);
    /* 00541354: jmp 0x5412ae */ goto L_005412ae;
L_00541359:; BB(0x00541359);
    /* 00541359: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_0054135c:; BB(0x0054135c);
    /* 0054135c: mov esp, ebp */ r_esp = r_ebp;
    /* 0054135e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054135f: ret  */ FN_RET(0x00541280); r_esp += 4; return;
}

void f_00541360(void) /* sub_541360 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00541360);
    /* 00541360: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00541361: mov ebp, esp */ r_ebp = r_esp;
    /* 00541363: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00541366: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00541369: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0054136c: imul eax, eax, 3 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0054136f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00541372: movzx ecx, byte ptr [ebp + 0xc] */ r_ecx = (u32)R8((u32)(r_ebp+0xcu));
    /* 00541376: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00541378: je 0x54143d */ if (fZ) goto L_0054143d;
L_0054137e:; BB(0x0054137e);
    /* 0054137e: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00541381: add edx, dword ptr [ebp + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00541384: mov byte ptr [edx + 0xf6], 1 */ W8((u32)(r_edx+0xf6u), 0x1u);
    /* 0054138b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054138d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054138f: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x541394u); f_0064c8a0();
    /* 00541394: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00541397: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0054139a: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0054139d: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005413a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005413a1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005413a4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005413a5: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005413a8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005413a9: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5413aeu); f_005dcb00();
    /* 005413ae: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005413b1: mov ecx, eax */ r_ecx = r_eax;
    /* 005413b3: call 0x5d6050 */ r_esp -= 4; W32(r_esp, 0x5413b8u); f_005d6050();
    /* 005413b8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005413ba: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005413bd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005413be: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005413c1: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005413c4: mov ecx, dword ptr [edx + ecx*4 + 0xc] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0xcu));
    /* 005413c8: call 0x5cb7d0 */ r_esp -= 4; W32(r_esp, 0x5413cdu); f_005cb7d0();
    /* 005413cd: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005413d0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005413d2: je 0x5413ed */ if (fZ) goto L_005413ed;
L_005413d4:; BB(0x005413d4);
    /* 005413d4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005413d6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005413d8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005413da: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005413dd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005413de: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005413e1: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005413e4: mov ecx, dword ptr [eax + edx*4 + 0xc] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xcu));
    /* 005413e8: call 0x5423a0 */ r_esp -= 4; W32(r_esp, 0x5413edu); f_005423a0();
L_005413ed:; BB(0x005413ed);
    /* 005413ed: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005413ef: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005413f2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005413f3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005413f6: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005413f9: mov ecx, dword ptr [eax + edx*4 + 0x10] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x10u));
    /* 005413fd: call 0x5cb7d0 */ r_esp -= 4; W32(r_esp, 0x541402u); f_005cb7d0();
    /* 00541402: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00541405: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00541407: je 0x541422 */ if (fZ) goto L_00541422;
L_00541409:; BB(0x00541409);
    /* 00541409: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054140b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054140d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054140f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00541412: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00541413: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00541416: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00541419: mov ecx, dword ptr [ecx + eax*4 + 0x10] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x10u));
    /* 0054141d: call 0x5423a0 */ r_esp -= 4; W32(r_esp, 0x541422u); f_005423a0();
L_00541422:; BB(0x00541422);
    /* 00541422: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00541425: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00541426: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x54142bu); f_005dcb00();
    /* 0054142b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054142e: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00541431: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00541434: mov byte ptr [eax + 0x4a2], 1 */ W8((u32)(r_eax+0x4a2u), 0x1u);
    /* 0054143b: jmp 0x541491 */ goto L_00541491;
L_0054143d:; BB(0x0054143d);
    /* 0054143d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00541440: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00541443: mov eax, dword ptr [edx + ecx*4 + 0xc] */ r_eax = R32((u32)(r_edx+r_ecx*4+0xcu));
    /* 00541447: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0054144a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0054144d: shl ecx, 5 */ { u32 c = (5u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00541450: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00541453: lea eax, [edx + ecx + 0x48] */ r_eax = (u32)(r_edx+r_ecx+0x48u);
    /* 00541457: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00541459: shl ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0054145c: mov edx, dword ptr [eax + ecx] */ r_edx = R32((u32)(r_eax+r_ecx));
    /* 0054145f: mov eax, dword ptr [eax + ecx + 4] */ r_eax = R32((u32)(r_eax+r_ecx+0x4u));
    /* 00541463: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00541466: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00541469: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054146b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054146d: lea ecx, [ebp - 0xc] */ r_ecx = (u32)(r_ebp+0xfffffff4u);
    /* 00541470: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00541471: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00541474: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00541477: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 0054147b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054147e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00541481: mov edx, dword ptr [eax + edx*4 + 8] */ r_edx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 00541485: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00541487: mov ecx, edx */ r_ecx = r_edx;
    /* 00541489: mov edx, dword ptr [eax + 0xc4] */ r_edx = R32((u32)(r_eax+0xc4u));
    /* 0054148f: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x541491u); call_ind(t); }
L_00541491:; BB(0x00541491);
    /* 00541491: mov esp, ebp */ r_esp = r_ebp;
    /* 00541493: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00541494: ret 8 */ FN_RET(0x00541360); r_esp += 12; return;
}

void f_005414a0(void) /* sub_5414A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005414a0);
    /* 005414a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005414a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005414a3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005414a6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005414a9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005414b0: jmp 0x5414bb */ goto L_005414bb;
L_005414b2:; BB(0x005414b2);
    /* 005414b2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005414b5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005414b8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005414bb:; BB(0x005414bb);
    /* 005414bb: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005414bf: jge 0x5414d0 */ if ((fS==fO)) goto L_005414d0;
L_005414c1:; BB(0x005414c1);
    /* 005414c1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005414c4: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005414c7: mov byte ptr [ecx + 0xf2], 0 */ W8((u32)(r_ecx+0xf2u), 0x0u);
    /* 005414ce: jmp 0x5414b2 */ goto L_005414b2;
L_005414d0:; BB(0x005414d0);
    /* 005414d0: mov esp, ebp */ r_esp = r_ebp;
    /* 005414d2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005414d3: ret  */ FN_RET(0x005414a0); r_esp += 4; return;
}

void f_005414e0(void) /* sub_5414E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005414e0);
    /* 005414e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005414e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005414e3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005414e6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005414e9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005414ec: imul eax, eax, 3 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005414ef: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005414f2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005414f4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005414f7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005414f8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005414fb: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005414fe: mov ecx, dword ptr [eax + edx*4 + 0xc] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xcu));
    /* 00541502: call 0x5cb7d0 */ r_esp -= 4; W32(r_esp, 0x541507u); f_005cb7d0();
    /* 00541507: mov esp, ebp */ r_esp = r_ebp;
    /* 00541509: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054150a: ret 4 */ FN_RET(0x005414e0); r_esp += 8; return;
}

void f_00541510(void) /* sub_541510 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00541510);
    /* 00541510: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00541511: mov ebp, esp */ r_ebp = r_esp;
    /* 00541513: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00541516: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00541519: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0054151c: imul eax, eax, 3 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0054151f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00541522: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00541524: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00541527: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00541528: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054152b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054152e: mov ecx, dword ptr [eax + edx*4 + 0x10] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x10u));
    /* 00541532: call 0x5cb7d0 */ r_esp -= 4; W32(r_esp, 0x541537u); f_005cb7d0();
    /* 00541537: mov esp, ebp */ r_esp = r_ebp;
    /* 00541539: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054153a: ret 4 */ FN_RET(0x00541510); r_esp += 8; return;
}

void f_00541540(void) /* sub_541540 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00541540);
    /* 00541540: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00541541: mov ebp, esp */ r_ebp = r_esp;
    /* 00541543: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00541546: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00541547: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0054154a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0054154c: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00541552: call 0x5df7b0 */ r_esp -= 4; W32(r_esp, 0x541557u); f_005df7b0();
    /* 00541557: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0054155a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054155c: je 0x5415f4 */ if (fZ) goto L_005415f4;
L_00541562:; BB(0x00541562);
    /* 00541562: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00541565: movzx edx, byte ptr [ecx + 0xec] */ r_edx = (u32)R8((u32)(r_ecx+0xecu));
    /* 0054156c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054156e: jne 0x5415f4 */ if (!fZ) goto L_005415f4;
L_00541574:; BB(0x00541574);
    /* 00541574: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00541577: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00541578: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x54157du); f_005dcb00();
    /* 0054157d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00541580: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00541583: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00541586: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x54158bu); f_0063aac0();
    /* 0054158b: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0054158d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00541590: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00541594: je 0x5415b2 */ if (fZ) goto L_005415b2;
L_00541596:; BB(0x00541596);
    /* 00541596: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00541599: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x54159eu); f_0063aac0();
    /* 0054159e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005415a0: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005415a3: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005415a7: je 0x5415b2 */ if (fZ) goto L_005415b2;
L_005415a9:; BB(0x005415a9);
    /* 005415a9: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 005415b0: jmp 0x5415b9 */ goto L_005415b9;
L_005415b2:; BB(0x005415b2);
    /* 005415b2: mov dword ptr [ebp - 0x14], 1 */ W32((u32)(r_ebp+0xffffffecu), 0x1u);
L_005415b9:; BB(0x005415b9);
    /* 005415b9: movzx eax, byte ptr [ebp - 0x14] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffecu));
    /* 005415bd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005415bf: je 0x5415f4 */ if (fZ) goto L_005415f4;
L_005415c1:; BB(0x005415c1);
    /* 005415c1: movzx esi, byte ptr [ebp + 0xc] */ r_esi = (u32)R8((u32)(r_ebp+0xcu));
    /* 005415c5: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005415c8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005415c9: mov ecx, dword ptr [0x7933f8] */ r_ecx = R32((u32)(0x7933f8u));
    /* 005415cf: call 0x539f40 */ r_esp -= 4; W32(r_esp, 0x5415d4u); f_00539f40();
    /* 005415d4: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005415d7: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005415d9: je 0x5415f4 */ if (fZ) goto L_005415f4;
L_005415db:; BB(0x005415db);
    /* 005415db: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005415de: mov byte ptr [eax + 0xec], 1 */ W8((u32)(r_eax+0xecu), 0x1u);
    /* 005415e5: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 005415eb: call 0x57c140 */ r_esp -= 4; W32(r_esp, 0x5415f0u); f_0057c140();
    /* 005415f0: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005415f2: jmp 0x5415f6 */ goto L_005415f6;
L_005415f4:; BB(0x005415f4);
    /* 005415f4: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_005415f6:; BB(0x005415f6);
    /* 005415f6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005415f7: mov esp, ebp */ r_esp = r_ebp;
    /* 005415f9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005415fa: ret 8 */ FN_RET(0x00541540); r_esp += 12; return;
}

void f_00541600(void) /* sub_541600 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00541600);
    /* 00541600: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00541601: mov ebp, esp */ r_ebp = r_esp;
    /* 00541603: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00541604: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00541607: mov al, byte ptr [ebp + 0xc] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xcu))) & 0xffu);
    /* 0054160a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054160b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0054160e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054160f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00541612: call 0x541540 */ r_esp -= 4; W32(r_esp, 0x541617u); f_00541540();
    /* 00541617: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0054161a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054161c: je 0x541622 */ if (fZ) goto L_00541622;
L_0054161e:; BB(0x0054161e);
    /* 0054161e: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00541620: jmp 0x541658 */ goto L_00541658;
L_00541622:; BB(0x00541622);
    /* 00541622: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00541625: mov byte ptr [eax + 0xec], 0 */ W8((u32)(r_eax+0xecu), 0x0u);
    /* 0054162c: mov cl, byte ptr [ebp + 0xc] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xcu))) & 0xffu);
    /* 0054162f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00541630: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00541633: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00541634: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00541637: call 0x541360 */ r_esp -= 4; W32(r_esp, 0x54163cu); f_00541360();
    /* 0054163c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054163f: add eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00541642: mov byte ptr [eax + 0xed], 0 */ W8((u32)(r_eax+0xedu), 0x0u);
    /* 00541649: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054164c: add ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0054164f: mov byte ptr [ecx + 0xf2], 1 */ W8((u32)(r_ecx+0xf2u), 0x1u);
    /* 00541656: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_00541658:; BB(0x00541658);
    /* 00541658: mov esp, ebp */ r_esp = r_ebp;
    /* 0054165a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054165b: ret 8 */ FN_RET(0x00541600); r_esp += 12; return;
}

void f_00541660(void) /* sub_541660 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00541660);
    /* 00541660: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00541661: mov ebp, esp */ r_ebp = r_esp;
    /* 00541663: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00541666: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 00541669: mov dword ptr [ebp - 0x14], 3 */ W32((u32)(r_ebp+0xffffffecu), 0x3u);
    /* 00541670: mov dword ptr [ebp - 0x10], 1 */ W32((u32)(r_ebp+0xfffffff0u), 0x1u);
    /* 00541677: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0054167e: mov dword ptr [ebp - 8], 2 */ W32((u32)(r_ebp+0xfffffff8u), 0x2u);
    /* 00541685: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0054168c: jmp 0x541697 */ goto L_00541697;
L_0054168e:; BB(0x0054168e);
    /* 0054168e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00541691: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00541694: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00541697:; BB(0x00541697);
    /* 00541697: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054169b: jge 0x54172d */ if ((fS==fO)) goto L_0054172d;
L_005416a1:; BB(0x005416a1);
    /* 005416a1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005416a4: mov edx, dword ptr [ebp + ecx*4 - 0x14] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffecu));
    /* 005416a8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005416a9: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5416aeu); f_005dcb00();
    /* 005416ae: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005416b1: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005416b4: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005416b7: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5416bcu); f_0063aac0();
    /* 005416bc: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005416be: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005416c1: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005416c3: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005416c7: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 005416ca: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 005416cd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005416cf: jne 0x541728 */ if (!fZ) goto L_00541728;
L_005416d1:; BB(0x005416d1);
    /* 005416d1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005416d4: mov ecx, dword ptr [ebp + eax*4 - 0x14] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffffecu));
    /* 005416d8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005416d9: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5416deu); f_005dcb00();
    /* 005416de: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005416e1: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005416e4: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005416e7: mov al, byte ptr [edx + 0x4a1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x4a1u))) & 0xffu);
    /* 005416ed: mov byte ptr [ebp - 0x21], al */ W8((u32)(r_ebp+0xffffffdfu), (u8)r_eax);
    /* 005416f0: movzx ecx, byte ptr [ebp - 0x21] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffdfu));
    /* 005416f4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005416f6: jne 0x541728 */ if (!fZ) goto L_00541728;
L_005416f8:; BB(0x005416f8);
    /* 005416f8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005416fb: mov eax, dword ptr [ebp + edx*4 - 0x14] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xffffffecu));
    /* 005416ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00541700: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x541705u); f_005dcb00();
    /* 00541705: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00541708: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0054170b: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0054170e: mov dl, byte ptr [ecx + 0x4a2] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x4a2u))) & 0xffu);
    /* 00541714: mov byte ptr [ebp - 0x29], dl */ W8((u32)(r_ebp+0xffffffd7u), (u8)r_edx);
    /* 00541717: movzx eax, byte ptr [ebp - 0x29] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffd7u));
    /* 0054171b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054171d: jne 0x541728 */ if (!fZ) goto L_00541728;
L_0054171f:; BB(0x0054171f);
    /* 0054171f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00541722: mov eax, dword ptr [ebp + ecx*4 - 0x14] */ r_eax = R32((u32)(r_ebp+r_ecx*4+0xffffffecu));
    /* 00541726: jmp 0x541730 */ goto L_00541730;
L_00541728:; BB(0x00541728);
    /* 00541728: jmp 0x54168e */ goto L_0054168e;
L_0054172d:; BB(0x0054172d);
    /* 0054172d: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_00541730:; BB(0x00541730);
    /* 00541730: mov esp, ebp */ r_esp = r_ebp;
    /* 00541732: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00541733: ret  */ FN_RET(0x00541660); r_esp += 4; return;
}

void f_00541740(void) /* sub_541740 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00541740);
    /* 00541740: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00541741: mov ebp, esp */ r_ebp = r_esp;
    /* 00541743: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00541746: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00541749: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054174b: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0054174d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00541750: add eax, 0xe0 */ {  u32 a = r_eax; u32 b = 0xe0u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00541755: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00541756: call 0x462ba0 */ r_esp -= 4; W32(r_esp, 0x54175bu); f_00462ba0();
    /* 0054175b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054175e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00541761: cmp dword ptr [ebp - 4], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00541765: jne 0x541786 */ if (!fZ) goto L_00541786;
L_00541767:; BB(0x00541767);
    /* 00541767: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00541769: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054176b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054176e: add ecx, 0xe0 */ {  u32 a = r_ecx; u32 b = 0xe0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00541774: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00541775: call 0x4630c0 */ r_esp -= 4; W32(r_esp, 0x54177au); f_004630c0();
    /* 0054177a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054177d: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00541780: jne 0x541786 */ if (!fZ) goto L_00541786;
L_00541782:; BB(0x00541782);
    /* 00541782: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00541784: jmp 0x541788 */ goto L_00541788;
L_00541786:; BB(0x00541786);
    /* 00541786: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_00541788:; BB(0x00541788);
    /* 00541788: mov esp, ebp */ r_esp = r_ebp;
    /* 0054178a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054178b: ret  */ FN_RET(0x00541740); r_esp += 4; return;
}

void f_00541790(void) /* sub_541790 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00541790);
    /* 00541790: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00541791: mov ebp, esp */ r_ebp = r_esp;
    /* 00541793: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00541796: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00541799: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054179b: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0054179d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005417a0: add eax, 0xe0 */ {  u32 a = r_eax; u32 b = 0xe0u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005417a5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005417a6: call 0x462ba0 */ r_esp -= 4; W32(r_esp, 0x5417abu); f_00462ba0();
    /* 005417ab: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005417ae: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005417b1: cmp dword ptr [ebp - 4], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005417b5: jne 0x5417d6 */ if (!fZ) goto L_005417d6;
L_005417b7:; BB(0x005417b7);
    /* 005417b7: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005417b9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005417bb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005417be: add ecx, 0xe0 */ {  u32 a = r_ecx; u32 b = 0xe0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005417c4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005417c5: call 0x4630c0 */ r_esp -= 4; W32(r_esp, 0x5417cau); f_004630c0();
    /* 005417ca: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005417cd: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005417d0: jge 0x5417d6 */ if ((fS==fO)) goto L_005417d6;
L_005417d2:; BB(0x005417d2);
    /* 005417d2: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005417d4: jmp 0x5417d8 */ goto L_005417d8;
L_005417d6:; BB(0x005417d6);
    /* 005417d6: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_005417d8:; BB(0x005417d8);
    /* 005417d8: mov esp, ebp */ r_esp = r_ebp;
    /* 005417da: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005417db: ret  */ FN_RET(0x00541790); r_esp += 4; return;
}

void f_005417e0(void) /* sub_5417E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005417e0);
    /* 005417e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005417e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005417e3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005417e6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005417e9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005417eb: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005417ed: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005417f0: imul eax, eax, 6 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x6u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005417f3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005417f6: lea edx, [ecx + eax + 0xc8] */ r_edx = (u32)(r_ecx+r_eax+0xc8u);
    /* 005417fd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005417fe: call 0x462ba0 */ r_esp -= 4; W32(r_esp, 0x541803u); f_00462ba0();
    /* 00541803: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00541806: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00541809: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054180b: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0054180d: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00541810: add eax, 0xe0 */ {  u32 a = r_eax; u32 b = 0xe0u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00541815: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00541816: call 0x462ba0 */ r_esp -= 4; W32(r_esp, 0x54181bu); f_00462ba0();
    /* 0054181b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054181e: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00541821: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00541825: jne 0x54183a */ if (!fZ) goto L_0054183a;
L_00541827:; BB(0x00541827);
    /* 00541827: cmp dword ptr [ebp - 8], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054182b: je 0x541833 */ if (fZ) goto L_00541833;
L_0054182d:; BB(0x0054182d);
    /* 0054182d: cmp dword ptr [ebp - 8], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00541831: jne 0x54183a */ if (!fZ) goto L_0054183a;
L_00541833:; BB(0x00541833);
    /* 00541833: mov eax, 1 */ r_eax = 0x1u;
    /* 00541838: jmp 0x541898 */ goto L_00541898;
L_0054183a:; BB(0x0054183a);
    /* 0054183a: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054183e: jne 0x541850 */ if (!fZ) goto L_00541850;
L_00541840:; BB(0x00541840);
    /* 00541840: cmp dword ptr [ebp - 4], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00541844: je 0x54184c */ if (fZ) goto L_0054184c;
L_00541846:; BB(0x00541846);
    /* 00541846: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054184a: jne 0x541850 */ if (!fZ) goto L_00541850;
L_0054184c:; BB(0x0054184c);
    /* 0054184c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0054184e: jmp 0x541898 */ goto L_00541898;
L_00541850:; BB(0x00541850);
    /* 00541850: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00541854: jne 0x541863 */ if (!fZ) goto L_00541863;
L_00541856:; BB(0x00541856);
    /* 00541856: cmp dword ptr [ebp - 8], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054185a: jne 0x541863 */ if (!fZ) goto L_00541863;
L_0054185c:; BB(0x0054185c);
    /* 0054185c: mov eax, 1 */ r_eax = 0x1u;
    /* 00541861: jmp 0x541898 */ goto L_00541898;
L_00541863:; BB(0x00541863);
    /* 00541863: cmp dword ptr [ebp - 8], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00541867: jne 0x541873 */ if (!fZ) goto L_00541873;
L_00541869:; BB(0x00541869);
    /* 00541869: cmp dword ptr [ebp - 4], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054186d: jne 0x541873 */ if (!fZ) goto L_00541873;
L_0054186f:; BB(0x0054186f);
    /* 0054186f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00541871: jmp 0x541898 */ goto L_00541898;
L_00541873:; BB(0x00541873);
    /* 00541873: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00541875: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00541878: add ecx, 0xe0 */ {  u32 a = r_ecx; u32 b = 0xe0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0054187e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054187f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00541882: imul edx, edx, 6 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x6u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00541885: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00541888: lea ecx, [eax + edx + 0xc8] */ r_ecx = (u32)(r_eax+r_edx+0xc8u);
    /* 0054188f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00541890: call 0x462da0 */ r_esp -= 4; W32(r_esp, 0x541895u); f_00462da0();
    /* 00541895: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00541898:; BB(0x00541898);
    /* 00541898: mov esp, ebp */ r_esp = r_ebp;
    /* 0054189a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054189b: ret 4 */ FN_RET(0x005417e0); r_esp += 8; return;
}

void f_005418a0(void) /* sub_5418A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005418a0);
    /* 005418a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005418a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005418a3: sub esp, 0x90 */ {  u32 a = r_esp; u32 b = 0x90u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005418a9: mov dword ptr [ebp - 0x7c], ecx */ W32((u32)(r_ebp+0xffffff84u), r_ecx);
    /* 005418ac: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005418af: imul eax, eax, 3 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005418b2: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005418b5: mov dword ptr [ebp - 0xc], 0xffffffff */ W32((u32)(r_ebp+0xfffffff4u), 0xffffffffu);
    /* 005418bc: mov dword ptr [ebp - 0x10], 0xffffffff */ W32((u32)(r_ebp+0xfffffff0u), 0xffffffffu);
    /* 005418c3: mov byte ptr [ebp - 1], 0 */ W8((u32)(r_ebp+0xffffffffu), 0x0u);
    /* 005418c7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005418c9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005418cb: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5418d0u); f_0064c8a0();
    /* 005418d0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005418d3: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005418d6: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 005418d9: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005418dc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005418dd: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005418e0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005418e1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005418e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005418e5: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5418eau); f_005dcb00();
    /* 005418ea: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005418ed: mov ecx, eax */ r_ecx = r_eax;
    /* 005418ef: call 0x5d6050 */ r_esp -= 4; W32(r_esp, 0x5418f4u); f_005d6050();
    /* 005418f4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005418f7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005418f8: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5418fdu); f_005dcb00();
    /* 005418fd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00541900: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 00541903: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 00541906: call 0x5d52e0 */ r_esp -= 4; W32(r_esp, 0x54190bu); f_005d52e0();
    /* 0054190b: mov dl, byte ptr [eax + 0x2a] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+0x2au))) & 0xffu);
    /* 0054190e: mov byte ptr [ebp - 0x6d], dl */ W8((u32)(r_ebp+0xffffff93u), (u8)r_edx);
    /* 00541911: movsx eax, byte ptr [ebp - 0x6d] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffff93u));
    /* 00541915: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 00541918: mov dword ptr [ecx + 0x108], eax */ W32((u32)(r_ecx+0x108u), r_eax);
    /* 0054191e: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 00541921: mov dword ptr [edx + 0x10c], 0xffffffff */ W32((u32)(r_edx+0x10cu), 0xffffffffu);
    /* 0054192b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0054192e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054192f: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 00541932: call 0x5414e0 */ r_esp -= 4; W32(r_esp, 0x541937u); f_005414e0();
    /* 00541937: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0054193a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054193c: je 0x541c4a */ if (fZ) goto L_00541c4a;
L_00541942:; BB(0x00541942);
    /* 00541942: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00541945: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00541946: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 00541949: call 0x5417e0 */ r_esp -= 4; W32(r_esp, 0x54194eu); f_005417e0();
    /* 0054194e: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00541951: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 00541954: call 0x541790 */ r_esp -= 4; W32(r_esp, 0x541959u); f_00541790();
    /* 00541959: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0054195c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054195e: je 0x54197d */ if (fZ) goto L_0054197d;
L_00541960:; BB(0x00541960);
    /* 00541960: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00541962: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00541964: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00541967: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00541968: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0054196b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054196c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054196f: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 00541972: mov ecx, dword ptr [ecx + eax*4 + 8] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x8u));
    /* 00541976: call 0x5423a0 */ r_esp -= 4; W32(r_esp, 0x54197bu); f_005423a0();
    /* 0054197b: jmp 0x541996 */ goto L_00541996;
L_0054197d:; BB(0x0054197d);
    /* 0054197d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054197f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00541981: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00541983: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00541986: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00541987: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054198a: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 0054198d: mov ecx, dword ptr [ecx + eax*4 + 8] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x8u));
    /* 00541991: call 0x5423a0 */ r_esp -= 4; W32(r_esp, 0x541996u); f_005423a0();
L_00541996:; BB(0x00541996);
    /* 00541996: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00541998: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0054199a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0054199d: imul edx, edx, 6 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x6u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005419a0: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 005419a3: lea ecx, [eax + edx + 0xc8] */ r_ecx = (u32)(r_eax+r_edx+0xc8u);
    /* 005419aa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005419ab: call 0x462ba0 */ r_esp -= 4; W32(r_esp, 0x5419b0u); f_00462ba0();
    /* 005419b0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005419b3: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005419b6: cmp dword ptr [ebp - 0x10], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005419ba: je 0x5419d1 */ if (fZ) goto L_005419d1;
L_005419bc:; BB(0x005419bc);
    /* 005419bc: cmp dword ptr [ebp - 0x10], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005419c0: je 0x5419d1 */ if (fZ) goto L_005419d1;
L_005419c2:; BB(0x005419c2);
    /* 005419c2: cmp dword ptr [ebp - 0x10], 9 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005419c6: je 0x5419d1 */ if (fZ) goto L_005419d1;
L_005419c8:; BB(0x005419c8);
    /* 005419c8: mov dword ptr [ebp - 0x80], 0 */ W32((u32)(r_ebp+0xffffff80u), 0x0u);
    /* 005419cf: jmp 0x5419d8 */ goto L_005419d8;
L_005419d1:; BB(0x005419d1);
    /* 005419d1: mov dword ptr [ebp - 0x80], 1 */ W32((u32)(r_ebp+0xffffff80u), 0x1u);
L_005419d8:; BB(0x005419d8);
    /* 005419d8: mov dl, byte ptr [ebp - 0x80] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffff80u))) & 0xffu);
    /* 005419db: mov byte ptr [ebp - 2], dl */ W8((u32)(r_ebp+0xfffffffeu), (u8)r_edx);
    /* 005419de: movzx eax, byte ptr [ebp - 2] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffffeu));
    /* 005419e2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005419e4: je 0x541a01 */ if (fZ) goto L_00541a01;
L_005419e6:; BB(0x005419e6);
    /* 005419e6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005419e8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005419eb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005419ec: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005419ee: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005419f1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005419f2: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005419f5: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 005419f8: mov ecx, dword ptr [ecx + eax*4 + 0xc] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0xcu));
    /* 005419fc: call 0x5423a0 */ r_esp -= 4; W32(r_esp, 0x541a01u); f_005423a0();
L_00541a01:; BB(0x00541a01);
    /* 00541a01: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 00541a04: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 00541a07: mov ecx, dword ptr [edx + 0x108] */ r_ecx = R32((u32)(r_edx+0x108u));
    /* 00541a0d: cmp ecx, dword ptr [eax + 0x10c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x10cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00541a13: je 0x541a2d */ if (fZ) goto L_00541a2d;
L_00541a15:; BB(0x00541a15);
    /* 00541a15: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 00541a18: cmp dword ptr [edx + 0x10c], 0 */ {  u32 a = R32((u32)(r_edx+0x10cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00541a1f: jne 0x541a2d */ if (!fZ) goto L_00541a2d;
L_00541a21:; BB(0x00541a21);
    /* 00541a21: mov dword ptr [ebp - 0x84], 1 */ W32((u32)(r_ebp+0xffffff7cu), 0x1u);
    /* 00541a2b: jmp 0x541a37 */ goto L_00541a37;
L_00541a2d:; BB(0x00541a2d);
    /* 00541a2d: mov dword ptr [ebp - 0x84], 0 */ W32((u32)(r_ebp+0xffffff7cu), 0x0u);
L_00541a37:; BB(0x00541a37);
    /* 00541a37: mov al, byte ptr [ebp - 0x84] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffff7cu))) & 0xffu);
    /* 00541a3d: mov byte ptr [ebp - 1], al */ W8((u32)(r_ebp+0xffffffffu), (u8)r_eax);
    /* 00541a40: movzx ecx, byte ptr [ebp - 1] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 00541a44: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00541a46: je 0x541abb */ if (fZ) goto L_00541abb;
L_00541a48:; BB(0x00541a48);
    /* 00541a48: push 0xf4240 */ { u32 v = 0xf4240u; r_esp -= 4; W32(r_esp, v); }
    /* 00541a4d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00541a4f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00541a52: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00541a53: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x541a58u); f_005dcb00();
    /* 00541a58: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00541a5b: mov ecx, eax */ r_ecx = r_eax;
    /* 00541a5d: call 0x5d70e0 */ r_esp -= 4; W32(r_esp, 0x541a62u); f_005d70e0();
    /* 00541a62: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00541a65: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00541a66: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x541a6bu); f_005dcb00();
    /* 00541a6b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00541a6e: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 00541a74: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00541a76: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 00541a7c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00541a7e: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 00541a84: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00541a87: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x541a89u); call_ind(t); }
    /* 00541a89: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00541a8b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00541a8d: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x541a92u); f_0064c8a0();
    /* 00541a92: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00541a95: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00541a98: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 00541a9b: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00541a9e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00541a9f: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00541aa2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00541aa3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00541aa6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00541aa7: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x541aacu); f_005dcb00();
    /* 00541aac: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00541aaf: mov ecx, eax */ r_ecx = r_eax;
    /* 00541ab1: call 0x5d6050 */ r_esp -= 4; W32(r_esp, 0x541ab6u); f_005d6050();
    /* 00541ab6: jmp 0x541d72 */ goto L_00541d72;
L_00541abb:; BB(0x00541abb);
    /* 00541abb: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 00541abe: call 0x541790 */ r_esp -= 4; W32(r_esp, 0x541ac3u); f_00541790();
    /* 00541ac3: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00541ac6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00541ac8: je 0x541ae7 */ if (fZ) goto L_00541ae7;
L_00541aca:; BB(0x00541aca);
    /* 00541aca: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00541acc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00541ace: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00541ad1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00541ad2: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00541ad5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00541ad6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00541ad9: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 00541adc: mov ecx, dword ptr [edx + ecx*4 + 0xc] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0xcu));
    /* 00541ae0: call 0x5423a0 */ r_esp -= 4; W32(r_esp, 0x541ae5u); f_005423a0();
    /* 00541ae5: jmp 0x541b00 */ goto L_00541b00;
L_00541ae7:; BB(0x00541ae7);
    /* 00541ae7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00541ae9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00541aeb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00541aed: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00541af0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00541af1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00541af4: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 00541af7: mov ecx, dword ptr [edx + ecx*4 + 0xc] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0xcu));
    /* 00541afb: call 0x5423a0 */ r_esp -= 4; W32(r_esp, 0x541b00u); f_005423a0();
L_00541b00:; BB(0x00541b00);
    /* 00541b00: movzx eax, byte ptr [ebp - 2] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffffeu));
    /* 00541b04: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00541b06: je 0x541c4a */ if (fZ) goto L_00541c4a;
L_00541b0c:; BB(0x00541b0c);
    /* 00541b0c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00541b0e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00541b10: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x541b15u); f_0064c8a0();
    /* 00541b15: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00541b18: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00541b1b: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 00541b1e: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00541b21: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00541b24: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00541b27: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 00541b2a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00541b2c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00541b2e: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x541b33u); f_0064c8a0();
    /* 00541b33: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00541b36: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 00541b39: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 00541b3c: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00541b3f: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00541b42: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00541b45: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00541b48: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00541b4a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00541b4c: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x541b51u); f_0064c8a0();
    /* 00541b51: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00541b54: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 00541b57: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 00541b5a: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00541b5d: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00541b60: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00541b63: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00541b66: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00541b69: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 00541b6c: mov eax, dword ptr [edx + ecx*4 + 0xc] */ r_eax = R32((u32)(r_edx+r_ecx*4+0xcu));
    /* 00541b70: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 00541b73: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00541b76: shl ecx, 5 */ { u32 c = (5u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00541b79: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 00541b7c: lea eax, [edx + ecx + 0x48] */ r_eax = (u32)(r_edx+r_ecx+0x48u);
    /* 00541b80: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00541b82: shl ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00541b85: mov edx, dword ptr [eax + ecx] */ r_edx = R32((u32)(r_eax+r_ecx));
    /* 00541b88: mov eax, dword ptr [eax + ecx + 4] */ r_eax = R32((u32)(r_eax+r_ecx+0x4u));
    /* 00541b8c: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 00541b8f: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00541b92: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00541b95: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 00541b98: mov eax, dword ptr [edx + ecx*4 + 0xc] */ r_eax = R32((u32)(r_edx+r_ecx*4+0xcu));
    /* 00541b9c: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 00541b9f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00541ba2: shl ecx, 5 */ { u32 c = (5u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00541ba5: mov edx, dword ptr [ebp - 0x78] */ r_edx = R32((u32)(r_ebp+0xffffff88u));
    /* 00541ba8: lea eax, [edx + ecx + 0x48] */ r_eax = (u32)(r_edx+r_ecx+0x48u);
    /* 00541bac: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00541bb1: shl ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00541bb4: mov edx, dword ptr [eax + ecx] */ r_edx = R32((u32)(r_eax+r_ecx));
    /* 00541bb7: mov eax, dword ptr [eax + ecx + 4] */ r_eax = R32((u32)(r_eax+r_ecx+0x4u));
    /* 00541bbb: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 00541bbe: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00541bc1: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00541bc4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00541bc5: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00541bc8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00541bc9: lea eax, [ebp - 0x58] */ r_eax = (u32)(r_ebp+0xffffffa8u);
    /* 00541bcc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00541bcd: lea ecx, [ebp - 0x20] */ r_ecx = (u32)(r_ebp+0xffffffe0u);
    /* 00541bd0: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x541bd5u); f_0064c5c0();
    /* 00541bd5: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00541bd7: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00541bda: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00541bdd: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00541be0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00541be2: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00541be5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00541be6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00541be9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00541bea: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00541bed: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00541bee: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00541bf1: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 00541bf4: mov edx, dword ptr [ecx + eax*4 + 0xc] */ r_edx = R32((u32)(r_ecx+r_eax*4+0xcu));
    /* 00541bf8: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00541bfb: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 00541bfe: mov ecx, dword ptr [ecx + eax*4 + 0xc] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0xcu));
    /* 00541c02: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00541c04: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 00541c0a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x541c0cu); call_ind(t); }
    /* 00541c0c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00541c0e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00541c10: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x541c15u); f_0064c8a0();
    /* 00541c15: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00541c18: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 00541c1b: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
    /* 00541c1e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00541c20: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00541c23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00541c24: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00541c27: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00541c28: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 00541c2b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00541c2c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00541c2f: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 00541c32: mov eax, dword ptr [edx + ecx*4 + 0xc] */ r_eax = R32((u32)(r_edx+r_ecx*4+0xcu));
    /* 00541c36: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00541c39: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 00541c3c: mov ecx, dword ptr [edx + ecx*4 + 0xc] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0xcu));
    /* 00541c40: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00541c42: mov edx, dword ptr [eax + 0xb8] */ r_edx = R32((u32)(r_eax+0xb8u));
    /* 00541c48: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x541c4au); call_ind(t); }
L_00541c4a:; BB(0x00541c4a);
    /* 00541c4a: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 00541c4d: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 00541c50: mov edx, dword ptr [eax + 0x108] */ r_edx = R32((u32)(r_eax+0x108u));
    /* 00541c56: cmp edx, dword ptr [ecx + 0x10c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x10cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00541c5c: je 0x541c76 */ if (fZ) goto L_00541c76;
L_00541c5e:; BB(0x00541c5e);
    /* 00541c5e: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 00541c61: cmp dword ptr [eax + 0x10c], 0 */ {  u32 a = R32((u32)(r_eax+0x10cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00541c68: jne 0x541c76 */ if (!fZ) goto L_00541c76;
L_00541c6a:; BB(0x00541c6a);
    /* 00541c6a: mov dword ptr [ebp - 0x8c], 1 */ W32((u32)(r_ebp+0xffffff74u), 0x1u);
    /* 00541c74: jmp 0x541c80 */ goto L_00541c80;
L_00541c76:; BB(0x00541c76);
    /* 00541c76: mov dword ptr [ebp - 0x8c], 0 */ W32((u32)(r_ebp+0xffffff74u), 0x0u);
L_00541c80:; BB(0x00541c80);
    /* 00541c80: mov cl, byte ptr [ebp - 0x8c] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffff74u))) & 0xffu);
    /* 00541c86: mov byte ptr [ebp - 1], cl */ W8((u32)(r_ebp+0xffffffffu), (u8)r_ecx);
    /* 00541c89: movzx edx, byte ptr [ebp - 1] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 00541c8d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00541c8f: je 0x541d01 */ if (fZ) goto L_00541d01;
L_00541c91:; BB(0x00541c91);
    /* 00541c91: push 0xf4240 */ { u32 v = 0xf4240u; r_esp -= 4; W32(r_esp, v); }
    /* 00541c96: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00541c98: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00541c9b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00541c9c: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x541ca1u); f_005dcb00();
    /* 00541ca1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00541ca4: mov ecx, eax */ r_ecx = r_eax;
    /* 00541ca6: call 0x5d70e0 */ r_esp -= 4; W32(r_esp, 0x541cabu); f_005d70e0();
    /* 00541cab: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00541cae: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00541caf: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x541cb4u); f_005dcb00();
    /* 00541cb4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00541cb7: mov dword ptr [ebp - 0x90], eax */ W32((u32)(r_ebp+0xffffff70u), r_eax);
    /* 00541cbd: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00541cbf: mov edx, dword ptr [ebp - 0x90] */ r_edx = R32((u32)(r_ebp+0xffffff70u));
    /* 00541cc5: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00541cc7: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 00541ccd: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00541cd0: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x541cd2u); call_ind(t); }
    /* 00541cd2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00541cd4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00541cd6: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x541cdbu); f_0064c8a0();
    /* 00541cdb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00541cde: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 00541ce1: mov dword ptr [ebp - 0x64], edx */ W32((u32)(r_ebp+0xffffff9cu), r_edx);
    /* 00541ce4: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 00541ce7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00541ce8: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 00541ceb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00541cec: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00541cef: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00541cf0: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x541cf5u); f_005dcb00();
    /* 00541cf5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00541cf8: mov ecx, eax */ r_ecx = r_eax;
    /* 00541cfa: call 0x5d6050 */ r_esp -= 4; W32(r_esp, 0x541cffu); f_005d6050();
    /* 00541cff: jmp 0x541d72 */ goto L_00541d72;
L_00541d01:; BB(0x00541d01);
    /* 00541d01: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00541d04: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00541d05: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 00541d08: call 0x541510 */ r_esp -= 4; W32(r_esp, 0x541d0du); f_00541510();
    /* 00541d0d: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00541d10: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00541d12: je 0x541d72 */ if (fZ) goto L_00541d72;
L_00541d14:; BB(0x00541d14);
    /* 00541d14: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00541d16: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00541d18: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00541d1b: imul edx, edx, 6 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x6u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00541d1e: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 00541d21: lea ecx, [eax + edx + 0xc8] */ r_ecx = (u32)(r_eax+r_edx+0xc8u);
    /* 00541d28: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00541d29: call 0x462ba0 */ r_esp -= 4; W32(r_esp, 0x541d2eu); f_00462ba0();
    /* 00541d2e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00541d31: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00541d34: cmp dword ptr [ebp - 0x10], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00541d38: jle 0x541d57 */ if ((fZ||fS!=fO)) goto L_00541d57;
L_00541d3a:; BB(0x00541d3a);
    /* 00541d3a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00541d3c: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00541d3f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00541d40: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00541d42: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00541d45: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00541d46: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00541d49: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 00541d4c: mov ecx, dword ptr [edx + ecx*4 + 0x10] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x10u));
    /* 00541d50: call 0x5423a0 */ r_esp -= 4; W32(r_esp, 0x541d55u); f_005423a0();
    /* 00541d55: jmp 0x541d72 */ goto L_00541d72;
L_00541d57:; BB(0x00541d57);
    /* 00541d57: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00541d59: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00541d5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00541d5d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00541d5f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00541d62: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00541d63: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00541d66: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 00541d69: mov ecx, dword ptr [eax + edx*4 + 0x10] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x10u));
    /* 00541d6d: call 0x5423a0 */ r_esp -= 4; W32(r_esp, 0x541d72u); f_005423a0();
L_00541d72:; BB(0x00541d72);
    /* 00541d72: mov esp, ebp */ r_esp = r_ebp;
    /* 00541d74: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00541d75: ret 4 */ FN_RET(0x005418a0); r_esp += 8; return;
}

void f_00541d80(void) /* sub_541D80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00541d80);
    /* 00541d80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00541d81: mov ebp, esp */ r_ebp = r_esp;
    /* 00541d83: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00541d86: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00541d89: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00541d8b: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00541d8d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00541d90: imul eax, eax, 6 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x6u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00541d93: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00541d96: lea edx, [ecx + eax + 0xc8] */ r_edx = (u32)(r_ecx+r_eax+0xc8u);
    /* 00541d9d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00541d9e: call 0x462ba0 */ r_esp -= 4; W32(r_esp, 0x541da3u); f_00462ba0();
    /* 00541da3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00541da6: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00541da9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00541dac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00541dad: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00541db0: call 0x541510 */ r_esp -= 4; W32(r_esp, 0x541db5u); f_00541510();
    /* 00541db5: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00541db8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00541dba: je 0x541dcb */ if (fZ) goto L_00541dcb;
L_00541dbc:; BB(0x00541dbc);
    /* 00541dbc: cmp dword ptr [ebp - 4], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00541dc0: jle 0x541dcb */ if ((fZ||fS!=fO)) goto L_00541dcb;
L_00541dc2:; BB(0x00541dc2);
    /* 00541dc2: mov dword ptr [ebp - 0xc], 1 */ W32((u32)(r_ebp+0xfffffff4u), 0x1u);
    /* 00541dc9: jmp 0x541dd2 */ goto L_00541dd2;
L_00541dcb:; BB(0x00541dcb);
    /* 00541dcb: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
L_00541dd2:; BB(0x00541dd2);
    /* 00541dd2: mov al, byte ptr [ebp - 0xc] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff4u))) & 0xffu);
    /* 00541dd5: mov esp, ebp */ r_esp = r_ebp;
    /* 00541dd7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00541dd8: ret 4 */ FN_RET(0x00541d80); r_esp += 8; return;
}

void f_00541de0(void) /* sub_541DE0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00541de0);
    /* 00541de0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00541de1: mov ebp, esp */ r_ebp = r_esp;
    /* 00541de3: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00541de6: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00541de9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00541deb: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00541ded: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00541df0: imul eax, eax, 6 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x6u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00541df3: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00541df6: lea edx, [ecx + eax + 0xc8] */ r_edx = (u32)(r_ecx+r_eax+0xc8u);
    /* 00541dfd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00541dfe: call 0x462ba0 */ r_esp -= 4; W32(r_esp, 0x541e03u); f_00462ba0();
    /* 00541e03: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00541e06: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00541e09: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00541e0c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00541e0d: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x541e12u); f_005dcb00();
    /* 00541e12: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00541e15: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00541e18: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00541e1b: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x541e20u); f_0063aac0();
    /* 00541e20: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00541e22: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00541e25: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00541e27: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00541e2b: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00541e2e: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 00541e31: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00541e33: jne 0x541e58 */ if (!fZ) goto L_00541e58;
L_00541e35:; BB(0x00541e35);
    /* 00541e35: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00541e38: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00541e39: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x541e3eu); f_005dcb00();
    /* 00541e3e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00541e41: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00541e44: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00541e47: mov al, byte ptr [edx + 0x4a1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x4a1u))) & 0xffu);
    /* 00541e4d: mov byte ptr [ebp - 0x11], al */ W8((u32)(r_ebp+0xffffffefu), (u8)r_eax);
    /* 00541e50: movzx ecx, byte ptr [ebp - 0x11] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffefu));
    /* 00541e54: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00541e56: je 0x541e5c */ if (fZ) goto L_00541e5c;
L_00541e58:; BB(0x00541e58);
    /* 00541e58: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00541e5a: jmp 0x541e7b */ goto L_00541e7b;
L_00541e5c:; BB(0x00541e5c);
    /* 00541e5c: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00541e5f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00541e60: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00541e63: call 0x541510 */ r_esp -= 4; W32(r_esp, 0x541e68u); f_00541510();
    /* 00541e68: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00541e6b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00541e6d: jne 0x541e79 */ if (!fZ) goto L_00541e79;
L_00541e6f:; BB(0x00541e6f);
    /* 00541e6f: cmp dword ptr [ebp - 4], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00541e73: jle 0x541e79 */ if ((fZ||fS!=fO)) goto L_00541e79;
L_00541e75:; BB(0x00541e75);
    /* 00541e75: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00541e77: jmp 0x541e7b */ goto L_00541e7b;
L_00541e79:; BB(0x00541e79);
    /* 00541e79: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_00541e7b:; BB(0x00541e7b);
    /* 00541e7b: mov esp, ebp */ r_esp = r_ebp;
    /* 00541e7d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00541e7e: ret 4 */ FN_RET(0x00541de0); r_esp += 8; return;
}

