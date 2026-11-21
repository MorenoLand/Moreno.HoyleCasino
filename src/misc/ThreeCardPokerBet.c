#include "protos.h"

void f_00542060(void) /* ThreeCardPokerBet::vfunc49 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00542060);
    /* 00542060: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00542061: mov ebp, esp */ r_ebp = r_esp;
    /* 00542063: sub esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00542066: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00542067: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 0054206a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054206c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054206e: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x542073u); f_0064c8a0();
    /* 00542073: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00542076: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00542079: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 0054207c: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0054207f: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00542082: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00542085: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00542088: mov edx, dword ptr [0x7933ec] */ r_edx = R32((u32)(0x7933ecu));
    /* 0054208e: mov eax, dword ptr [edx + 0xe8] */ r_eax = R32((u32)(r_edx+0xe8u));
    /* 00542094: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00542097: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054209a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054209b: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5420a0u); f_005dcb00();
    /* 005420a0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005420a3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005420a5: jne 0x5420ac */ if (!fZ) goto L_005420ac;
L_005420a7:; BB(0x005420a7);
    /* 005420a7: jmp 0x542392 */ goto L_00542392;
L_005420ac:; BB(0x005420ac);
    /* 005420ac: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005420af: imul edx, edx, 3 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x3u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005420b2: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 005420b5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005420b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005420b9: lea ecx, [ebp - 0xc] */ r_ecx = (u32)(r_ebp+0xfffffff4u);
    /* 005420bc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005420bd: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005420c0: mov eax, dword ptr [0x7933ec] */ r_eax = R32((u32)(0x7933ecu));
    /* 005420c5: mov ecx, dword ptr [eax + edx*4 + 0xc] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xcu));
    /* 005420c9: call 0x5cb880 */ r_esp -= 4; W32(r_esp, 0x5420ceu); f_005cb880();
    /* 005420ce: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005420d1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005420d2: lea edx, [ebp - 0x18] */ r_edx = (u32)(r_ebp+0xffffffe8u);
    /* 005420d5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005420d6: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005420d9: mov ecx, dword ptr [0x7933ec] */ r_ecx = R32((u32)(0x7933ecu));
    /* 005420df: mov ecx, dword ptr [ecx + eax*4 + 0x10] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x10u));
    /* 005420e3: call 0x5cb880 */ r_esp -= 4; W32(r_esp, 0x5420e8u); f_005cb880();
    /* 005420e8: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005420eb: cmp dword ptr [edx], 0 */ {  u32 a = R32((u32)(r_edx)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005420ee: jne 0x542109 */ if (!fZ) goto L_00542109;
L_005420f0:; BB(0x005420f0);
    /* 005420f0: lea eax, [ebp - 0x20] */ r_eax = (u32)(r_ebp+0xffffffe0u);
    /* 005420f3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005420f4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005420f7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005420f8: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5420fdu); f_005dcb00();
    /* 005420fd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00542100: mov ecx, eax */ r_ecx = r_eax;
    /* 00542102: call 0x5d5de0 */ r_esp -= 4; W32(r_esp, 0x542107u); f_005d5de0();
    /* 00542107: jmp 0x542117 */ goto L_00542117;
L_00542109:; BB(0x00542109);
    /* 00542109: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0054210c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0054210e: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 00542111: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00542114: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
L_00542117:; BB(0x00542117);
    /* 00542117: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054211b: jne 0x542136 */ if (!fZ) goto L_00542136;
L_0054211d:; BB(0x0054211d);
    /* 0054211d: mov edx, dword ptr [0x7933e8] */ r_edx = R32((u32)(0x7933e8u));
    /* 00542123: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00542125: mov ecx, dword ptr [0x7933e8] */ r_ecx = R32((u32)(0x7933e8u));
    /* 0054212b: mov edx, dword ptr [eax + 0x2b0] */ r_edx = R32((u32)(r_eax+0x2b0u));
    /* 00542131: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x542133u); call_ind(t); }
    /* 00542133: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
L_00542136:; BB(0x00542136);
    /* 00542136: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00542139: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054213a: mov ecx, dword ptr [0x7933ec] */ r_ecx = R32((u32)(0x7933ecu));
    /* 00542140: call 0x540e40 */ r_esp -= 4; W32(r_esp, 0x542145u); f_00540e40();
    /* 00542145: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00542148: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0054214b: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054214d: jne 0x542188 */ if (!fZ) goto L_00542188;
L_0054214f:; BB(0x0054214f);
    /* 0054214f: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00542153: jne 0x542188 */ if (!fZ) goto L_00542188;
L_00542155:; BB(0x00542155);
    /* 00542155: mov edx, dword ptr [0x7933e8] */ r_edx = R32((u32)(0x7933e8u));
    /* 0054215b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0054215d: mov ecx, dword ptr [0x7933e8] */ r_ecx = R32((u32)(0x7933e8u));
    /* 00542163: mov edx, dword ptr [eax + 0x2b0] */ r_edx = R32((u32)(r_eax+0x2b0u));
    /* 00542169: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x54216bu); call_ind(t); }
    /* 0054216b: cmp dword ptr [ebp - 0x20], eax */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054216e: jge 0x542188 */ if ((fS==fO)) goto L_00542188;
L_00542170:; BB(0x00542170);
    /* 00542170: mov eax, dword ptr [0x7933e8] */ r_eax = R32((u32)(0x7933e8u));
    /* 00542175: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00542177: mov ecx, dword ptr [0x7933e8] */ r_ecx = R32((u32)(0x7933e8u));
    /* 0054217d: mov eax, dword ptr [edx + 0x2b0] */ r_eax = R32((u32)(r_edx+0x2b0u));
    /* 00542183: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x542185u); call_ind(t); }
    /* 00542185: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
L_00542188:; BB(0x00542188);
    /* 00542188: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0054218b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054218c: mov ecx, dword ptr [0x7933ec] */ r_ecx = R32((u32)(0x7933ecu));
    /* 00542192: call 0x540e40 */ r_esp -= 4; W32(r_esp, 0x542197u); f_00540e40();
    /* 00542197: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054219a: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0054219d: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054219f: jne 0x5421da */ if (!fZ) goto L_005421da;
L_005421a1:; BB(0x005421a1);
    /* 005421a1: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005421a5: jne 0x5421da */ if (!fZ) goto L_005421da;
L_005421a7:; BB(0x005421a7);
    /* 005421a7: mov eax, dword ptr [0x7933e8] */ r_eax = R32((u32)(0x7933e8u));
    /* 005421ac: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005421ae: mov ecx, dword ptr [0x7933e8] */ r_ecx = R32((u32)(0x7933e8u));
    /* 005421b4: mov eax, dword ptr [edx + 0x2b0] */ r_eax = R32((u32)(r_edx+0x2b0u));
    /* 005421ba: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5421bcu); call_ind(t); }
    /* 005421bc: cmp dword ptr [ebp - 0x20], eax */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005421bf: jge 0x5421da */ if ((fS==fO)) goto L_005421da;
L_005421c1:; BB(0x005421c1);
    /* 005421c1: mov ecx, dword ptr [0x7933e8] */ r_ecx = R32((u32)(0x7933e8u));
    /* 005421c7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005421c9: mov ecx, dword ptr [0x7933e8] */ r_ecx = R32((u32)(0x7933e8u));
    /* 005421cf: mov eax, dword ptr [edx + 0x2b0] */ r_eax = R32((u32)(r_edx+0x2b0u));
    /* 005421d5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5421d7u); call_ind(t); }
    /* 005421d7: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
L_005421da:; BB(0x005421da);
    /* 005421da: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005421dd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005421de: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5421e3u); f_005dcb00();
    /* 005421e3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005421e6: mov ecx, eax */ r_ecx = r_eax;
    /* 005421e8: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x5421edu); f_005d5a50();
    /* 005421ed: cmp dword ptr [ebp - 0x20], eax */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005421f0: jle 0x542208 */ if ((fZ||fS!=fO)) goto L_00542208;
L_005421f2:; BB(0x005421f2);
    /* 005421f2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005421f5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005421f6: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5421fbu); f_005dcb00();
    /* 005421fb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005421fe: mov ecx, eax */ r_ecx = r_eax;
    /* 00542200: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x542205u); f_005d5a50();
    /* 00542205: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
L_00542208:; BB(0x00542208);
    /* 00542208: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054220c: jle 0x54237e */ if ((fZ||fS!=fO)) goto L_0054237e;
L_00542212:; BB(0x00542212);
    /* 00542212: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00542215: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00542216: mov ecx, dword ptr [0x7933ec] */ r_ecx = R32((u32)(0x7933ecu));
    /* 0054221c: call 0x540e40 */ r_esp -= 4; W32(r_esp, 0x542221u); f_00540e40();
    /* 00542221: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00542224: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00542227: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00542229: jne 0x5422c7 */ if (!fZ) goto L_005422c7;
L_0054222f:; BB(0x0054222f);
    /* 0054222f: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00542232: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00542235: lea esi, [eax + edx*2] */ r_esi = (u32)(r_eax+r_edx*2);
    /* 00542238: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054223b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054223c: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x542241u); f_005dcb00();
    /* 00542241: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00542244: mov ecx, eax */ r_ecx = r_eax;
    /* 00542246: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x54224bu); f_005d5a50();
    /* 0054224b: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054224d: jle 0x5422c7 */ if ((fZ||fS!=fO)) goto L_005422c7;
L_0054224f:; BB(0x0054224f);
    /* 0054224f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00542252: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00542253: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x542258u); f_005dcb00();
    /* 00542258: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054225b: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0054225e: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00542261: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x542266u); f_0063aac0();
    /* 00542266: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00542268: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0054226b: cmp dword ptr [ebp - 0x2c], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054226f: je 0x54228d */ if (fZ) goto L_0054228d;
L_00542271:; BB(0x00542271);
    /* 00542271: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00542274: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x542279u); f_0063aac0();
    /* 00542279: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0054227b: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 0054227e: cmp dword ptr [ebp - 0x30], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00542282: je 0x54228d */ if (fZ) goto L_0054228d;
L_00542284:; BB(0x00542284);
    /* 00542284: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 0054228b: jmp 0x542294 */ goto L_00542294;
L_0054228d:; BB(0x0054228d);
    /* 0054228d: mov dword ptr [ebp - 0x48], 1 */ W32((u32)(r_ebp+0xffffffb8u), 0x1u);
L_00542294:; BB(0x00542294);
    /* 00542294: movzx edx, byte ptr [ebp - 0x48] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffb8u));
    /* 00542298: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054229a: je 0x5422c2 */ if (fZ) goto L_005422c2;
L_0054229c:; BB(0x0054229c);
    /* 0054229c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054229e: push 0x6b6940 */ { u32 v = 0x6b6940u; r_esp -= 4; W32(r_esp, v); }
    /* 005422a3: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5422a8u); f_00630f40();
    /* 005422a8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005422ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005422ac: push 0x6c656c */ { u32 v = 0x6c656cu; r_esp -= 4; W32(r_esp, v); }
    /* 005422b1: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5422b6u); f_00630f40();
    /* 005422b6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005422b9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005422ba: call 0x62ff10 */ r_esp -= 4; W32(r_esp, 0x5422bfu); f_0062ff10();
    /* 005422bf: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005422c2:; BB(0x005422c2);
    /* 005422c2: jmp 0x542392 */ goto L_00542392;
L_005422c7:; BB(0x005422c7);
    /* 005422c7: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005422cb: je 0x54237e */ if (fZ) goto L_0054237e;
L_005422d1:; BB(0x005422d1);
    /* 005422d1: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 005422d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005422d5: mov ecx, dword ptr [0x7933ec] */ r_ecx = R32((u32)(0x7933ecu));
    /* 005422db: call 0x540e40 */ r_esp -= 4; W32(r_esp, 0x5422e0u); f_00540e40();
    /* 005422e0: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005422e3: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005422e6: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005422e8: jne 0x54237e */ if (!fZ) goto L_0054237e;
L_005422ee:; BB(0x005422ee);
    /* 005422ee: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005422f1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005422f2: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5422f7u); f_005dcb00();
    /* 005422f7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005422fa: mov ecx, eax */ r_ecx = r_eax;
    /* 005422fc: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x542301u); f_005d5a50();
    /* 00542301: sub eax, dword ptr [ebp - 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00542304: cmp eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00542307: jge 0x54237e */ if ((fS==fO)) goto L_0054237e;
L_00542309:; BB(0x00542309);
    /* 00542309: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054230c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054230d: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x542312u); f_005dcb00();
    /* 00542312: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00542315: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00542318: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0054231b: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x542320u); f_0063aac0();
    /* 00542320: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00542322: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 00542325: cmp dword ptr [ebp - 0x38], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00542329: je 0x542347 */ if (fZ) goto L_00542347;
L_0054232b:; BB(0x0054232b);
    /* 0054232b: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0054232e: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x542333u); f_0063aac0();
    /* 00542333: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00542335: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 00542338: cmp dword ptr [ebp - 0x3c], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054233c: je 0x542347 */ if (fZ) goto L_00542347;
L_0054233e:; BB(0x0054233e);
    /* 0054233e: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 00542345: jmp 0x54234e */ goto L_0054234e;
L_00542347:; BB(0x00542347);
    /* 00542347: mov dword ptr [ebp - 0x4c], 1 */ W32((u32)(r_ebp+0xffffffb4u), 0x1u);
L_0054234e:; BB(0x0054234e);
    /* 0054234e: movzx eax, byte ptr [ebp - 0x4c] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffb4u));
    /* 00542352: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00542354: je 0x54237c */ if (fZ) goto L_0054237c;
L_00542356:; BB(0x00542356);
    /* 00542356: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00542358: push 0x6b6940 */ { u32 v = 0x6b6940u; r_esp -= 4; W32(r_esp, v); }
    /* 0054235d: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x542362u); f_00630f40();
    /* 00542362: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00542365: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00542366: push 0x6c653c */ { u32 v = 0x6c653cu; r_esp -= 4; W32(r_esp, v); }
    /* 0054236b: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x542370u); f_00630f40();
    /* 00542370: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00542373: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00542374: call 0x62ff10 */ r_esp -= 4; W32(r_esp, 0x542379u); f_0062ff10();
    /* 00542379: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0054237c:; BB(0x0054237c);
    /* 0054237c: jmp 0x542392 */ goto L_00542392;
L_0054237e:; BB(0x0054237e);
    /* 0054237e: mov cl, byte ptr [ebp + 0x10] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x10u))) & 0xffu);
    /* 00542381: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00542382: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00542385: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00542386: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00542389: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054238a: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0054238d: call 0x5cba10 */ r_esp -= 4; W32(r_esp, 0x542392u); f_005cba10();
L_00542392:; BB(0x00542392);
    /* 00542392: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00542393: mov esp, ebp */ r_esp = r_ebp;
    /* 00542395: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00542396: ret 0xc */ FN_RET(0x00542060); r_esp += 16; return;
}

void f_005427e0(void) /* ThreeCardPokerBet::vfunc48 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005427e0);
    /* 005427e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005427e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005427e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005427e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005427e7: cmp dword ptr [0x7933f4], 0 */ {  u32 a = R32((u32)(0x7933f4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005427ee: je 0x542808 */ if (fZ) goto L_00542808;
L_005427f0:; BB(0x005427f0);
    /* 005427f0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005427f3: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x5427f8u); f_005f5400();
    /* 005427f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005427f9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005427fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005427fd: mov ecx, dword ptr [0x7933f4] */ r_ecx = R32((u32)(0x7933f4u));
    /* 00542803: call 0x53b6f0 */ r_esp -= 4; W32(r_esp, 0x542808u); f_0053b6f0();
L_00542808:; BB(0x00542808);
    /* 00542808: mov esp, ebp */ r_esp = r_ebp;
    /* 0054280a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054280b: ret 8 */ FN_RET(0x005427e0); r_esp += 12; return;
}

void f_00542810(void) /* ThreeCardPokerBet::vfunc44 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00542810);
    /* 00542810: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00542811: mov ebp, esp */ r_ebp = r_esp;
    /* 00542813: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00542816: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00542819: mov eax, dword ptr [0x7933ec] */ r_eax = R32((u32)(0x7933ecu));
    /* 0054281e: mov ecx, dword ptr [eax + 0xe8] */ r_ecx = R32((u32)(r_eax+0xe8u));
    /* 00542824: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00542827: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054282b: jne 0x542834 */ if (!fZ) goto L_00542834;
L_0054282d:; BB(0x0054282d);
    /* 0054282d: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0054282f: jmp 0x5428f1 */ goto L_005428f1;
L_00542834:; BB(0x00542834);
    /* 00542834: mov edx, dword ptr [0x7933ec] */ r_edx = R32((u32)(0x7933ecu));
    /* 0054283a: mov eax, dword ptr [edx + 0xe8] */ r_eax = R32((u32)(r_edx+0xe8u));
    /* 00542840: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00542843: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00542846: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x54284bu); f_005f5400();
    /* 0054284b: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0054284c: mov ecx, 3 */ r_ecx = 0x3u;
    /* 00542851: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00542851, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00542851, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00542853: cmp eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00542856: jne 0x5428e7 */ if (!fZ) goto L_005428e7;
L_0054285c:; BB(0x0054285c);
    /* 0054285c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0054285f: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x542864u); f_005f5400();
    /* 00542864: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00542865: mov ecx, 3 */ r_ecx = 0x3u;
    /* 0054286a: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0054286a, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0054286a, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0054286c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054286e: je 0x5428e7 */ if (fZ) goto L_005428e7;
L_00542870:; BB(0x00542870);
    /* 00542870: mov ecx, dword ptr [0x7933ec] */ r_ecx = R32((u32)(0x7933ecu));
    /* 00542876: call 0x540af0 */ r_esp -= 4; W32(r_esp, 0x54287bu); f_00540af0();
    /* 0054287b: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0054287e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00542881: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x542886u); f_0063aac0();
    /* 00542886: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00542888: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0054288b: cmp dword ptr [ebp - 0xc], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054288f: je 0x5428ad */ if (fZ) goto L_005428ad;
L_00542891:; BB(0x00542891);
    /* 00542891: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00542894: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x542899u); f_0063aac0();
    /* 00542899: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0054289b: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0054289e: cmp dword ptr [ebp - 0x10], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005428a2: je 0x5428ad */ if (fZ) goto L_005428ad;
L_005428a4:; BB(0x005428a4);
    /* 005428a4: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005428ab: jmp 0x5428b4 */ goto L_005428b4;
L_005428ad:; BB(0x005428ad);
    /* 005428ad: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
L_005428b4:; BB(0x005428b4);
    /* 005428b4: movzx ecx, byte ptr [ebp - 0x24] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffdcu));
    /* 005428b8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005428ba: je 0x5428e7 */ if (fZ) goto L_005428e7;
L_005428bc:; BB(0x005428bc);
    /* 005428bc: mov ecx, dword ptr [0x7933ec] */ r_ecx = R32((u32)(0x7933ecu));
    /* 005428c2: call 0x540af0 */ r_esp -= 4; W32(r_esp, 0x5428c7u); f_00540af0();
    /* 005428c7: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005428ca: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005428cd: mov al, byte ptr [edx + 0x4a0] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x4a0u))) & 0xffu);
    /* 005428d3: mov byte ptr [ebp - 0x19], al */ W8((u32)(r_ebp+0xffffffe7u), (u8)r_eax);
    /* 005428d6: movzx ecx, byte ptr [ebp - 0x19] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffe7u));
    /* 005428da: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005428dc: jne 0x5428e7 */ if (!fZ) goto L_005428e7;
L_005428de:; BB(0x005428de);
    /* 005428de: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 005428e5: jmp 0x5428ee */ goto L_005428ee;
L_005428e7:; BB(0x005428e7);
    /* 005428e7: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_005428ee:; BB(0x005428ee);
    /* 005428ee: mov al, byte ptr [ebp - 0x28] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffd8u))) & 0xffu);
L_005428f1:; BB(0x005428f1);
    /* 005428f1: mov esp, ebp */ r_esp = r_ebp;
    /* 005428f3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005428f4: ret  */ FN_RET(0x00542810); r_esp += 4; return;
}

