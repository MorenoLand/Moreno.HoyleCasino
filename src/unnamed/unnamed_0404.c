#include "protos.h"

void f_00404160(void) /* sub_404160 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00404160);
    /* 00404160: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00404161: mov ebp, esp */ r_ebp = r_esp;
    /* 00404163: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00404164: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00404167: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040416a: mov byte ptr [eax + 5], 0 */ W8((u32)(r_eax+0x5u), 0x0u);
    /* 0040416e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00404171: mov byte ptr [ecx + 4], 0 */ W8((u32)(r_ecx+0x4u), 0x0u);
    /* 00404175: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00404178: mov byte ptr [edx + 6], 0 */ W8((u32)(r_edx+0x6u), 0x0u);
    /* 0040417c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040417f: mov byte ptr [eax + 7], 0 */ W8((u32)(r_eax+0x7u), 0x0u);
    /* 00404183: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00404186: mov byte ptr [ecx + 8], 0 */ W8((u32)(r_ecx+0x8u), 0x0u);
    /* 0040418a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040418d: mov byte ptr [edx + 9], 0 */ W8((u32)(r_edx+0x9u), 0x0u);
    /* 00404191: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00404194: mov byte ptr [eax + 0xa], 0 */ W8((u32)(r_eax+0xau), 0x0u);
    /* 00404198: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040419c: jne 0x4041ca */ if (!fZ) goto L_004041ca;
L_0040419e:; BB(0x0040419e);
    /* 0040419e: mov ecx, dword ptr [0x7902f0] */ r_ecx = R32((u32)(0x7902f0u));
    /* 004041a4: call 0x4079b0 */ r_esp -= 4; W32(r_esp, 0x4041a9u); f_004079b0();
    /* 004041a9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004041ac: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004041ad: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004041af: mov edx, dword ptr [0x7902ec] */ r_edx = R32((u32)(0x7902ecu));
    /* 004041b5: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004041b8: mov ecx, dword ptr [0x7902ec] */ r_ecx = R32((u32)(0x7902ecu));
    /* 004041be: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 004041c1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004041c3: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 004041c6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4041c8u); call_ind(t); }
    /* 004041c8: jmp 0x4041ec */ goto L_004041ec;
L_004041ca:; BB(0x004041ca);
    /* 004041ca: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004041cd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004041ce: push 0x1f4 */ { u32 v = 0x1f4u; r_esp -= 4; W32(r_esp, v); }
    /* 004041d3: mov edx, dword ptr [0x7902ec] */ r_edx = R32((u32)(0x7902ecu));
    /* 004041d9: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004041dc: mov ecx, dword ptr [0x7902ec] */ r_ecx = R32((u32)(0x7902ecu));
    /* 004041e2: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 004041e5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004041e7: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 004041ea: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4041ecu); call_ind(t); }
L_004041ec:; BB(0x004041ec);
    /* 004041ec: mov esp, ebp */ r_esp = r_ebp;
    /* 004041ee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004041ef: ret 4 */ FN_RET(0x00404160); r_esp += 8; return;
}

void f_00404200(void) /* sub_404200 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00404200);
    /* 00404200: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00404201: mov ebp, esp */ r_ebp = r_esp;
    /* 00404203: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00404205: push 0x69d73b */ { u32 v = 0x69d73bu; r_esp -= 4; W32(r_esp, v); }
    /* 0040420a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00404210: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00404211: sub esp, 0x6c */ {  u32 a = r_esp; u32 b = 0x6cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00404214: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00404219: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0040421b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040421c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0040421f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00404225: mov dword ptr [ebp - 0x68], ecx */ W32((u32)(r_ebp+0xffffff98u), r_ecx);
    /* 00404228: mov ecx, dword ptr [0x7902f8] */ r_ecx = R32((u32)(0x7902f8u));
    /* 0040422e: call 0x401cb0 */ r_esp -= 4; W32(r_esp, 0x404233u); f_00401cb0();
    /* 00404233: mov eax, dword ptr [0x7902f0] */ r_eax = R32((u32)(0x7902f0u));
    /* 00404238: mov ecx, dword ptr [eax + 0x10e0] */ r_ecx = R32((u32)(r_eax+0x10e0u));
    /* 0040423e: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00404241: cmp dword ptr [ebp - 0x20], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404245: je 0x404254 */ if (fZ) goto L_00404254;
L_00404247:; BB(0x00404247);
    /* 00404247: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0040424a: call 0x404ba0 */ r_esp -= 4; W32(r_esp, 0x40424fu); f_00404ba0();
    /* 0040424f: jmp 0x404666 */ goto L_00404666;
L_00404254:; BB(0x00404254);
    /* 00404254: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 00404257: movzx eax, byte ptr [edx + 4] */ r_eax = (u32)R8((u32)(r_edx+0x4u));
    /* 0040425b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040425d: jne 0x4042ab */ if (!fZ) goto L_004042ab;
L_0040425f:; BB(0x0040425f);
    /* 0040425f: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 00404262: mov byte ptr [ecx + 4], 1 */ W8((u32)(r_ecx+0x4u), 0x1u);
    /* 00404266: mov edx, dword ptr [0x7902f0] */ r_edx = R32((u32)(0x7902f0u));
    /* 0040426c: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 0040426f: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00404272: mov dword ptr [eax + 0x10e0], 0 */ W32((u32)(r_eax+0x10e0u), 0x0u);
    /* 0040427c: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040427f: mov dword ptr [ecx + 0x10e4], 4 */ W32((u32)(r_ecx+0x10e4u), 0x4u);
    /* 00404289: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040428b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040428d: mov edx, dword ptr [0x7902ec] */ r_edx = R32((u32)(0x7902ecu));
    /* 00404293: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00404296: mov ecx, dword ptr [0x7902ec] */ r_ecx = R32((u32)(0x7902ecu));
    /* 0040429c: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0040429f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004042a1: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 004042a4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4042a6u); call_ind(t); }
    /* 004042a6: jmp 0x404666 */ goto L_00404666;
L_004042ab:; BB(0x004042ab);
    /* 004042ab: mov ecx, dword ptr [0x7902f0] */ r_ecx = R32((u32)(0x7902f0u));
    /* 004042b1: call 0x407d00 */ r_esp -= 4; W32(r_esp, 0x4042b6u); f_00407d00();
    /* 004042b6: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 004042b9: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 004042bf: mov dl, byte ptr [ecx + 0x25] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x25u))) & 0xffu);
    /* 004042c2: mov byte ptr [ebp - 0x25], dl */ W8((u32)(r_ebp+0xffffffdbu), (u8)r_edx);
    /* 004042c5: movzx eax, byte ptr [ebp - 0x25] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffdbu));
    /* 004042c9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004042cb: je 0x404347 */ if (fZ) goto L_00404347;
L_004042cd:; BB(0x004042cd);
    /* 004042cd: cmp dword ptr [ebp - 0x10], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004042d1: je 0x404347 */ if (fZ) goto L_00404347;
L_004042d3:; BB(0x004042d3);
    /* 004042d3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004042d6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004042d7: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4042dcu); f_005dcb00();
    /* 004042dc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004042df: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 004042e2: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004042e5: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x4042eau); f_0063aac0();
    /* 004042ea: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004042ec: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 004042ef: cmp dword ptr [ebp - 0x2c], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004042f3: je 0x404311 */ if (fZ) goto L_00404311;
L_004042f5:; BB(0x004042f5);
    /* 004042f5: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004042f8: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x4042fdu); f_0063aac0();
    /* 004042fd: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 004042ff: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00404302: cmp dword ptr [ebp - 0x30], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404306: je 0x404311 */ if (fZ) goto L_00404311;
L_00404308:; BB(0x00404308);
    /* 00404308: mov dword ptr [ebp - 0x6c], 0 */ W32((u32)(r_ebp+0xffffff94u), 0x0u);
    /* 0040430f: jmp 0x404318 */ goto L_00404318;
L_00404311:; BB(0x00404311);
    /* 00404311: mov dword ptr [ebp - 0x6c], 1 */ W32((u32)(r_ebp+0xffffff94u), 0x1u);
L_00404318:; BB(0x00404318);
    /* 00404318: movzx ecx, byte ptr [ebp - 0x6c] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffff94u));
    /* 0040431c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040431e: je 0x404347 */ if (fZ) goto L_00404347;
L_00404320:; BB(0x00404320);
    /* 00404320: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00404323: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00404324: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x404329u); f_005dcb00();
    /* 00404329: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040432c: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0040432f: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00404332: mov byte ptr [eax + 0x4a1], 1 */ W8((u32)(r_eax+0x4a1u), 0x1u);
    /* 00404339: mov ecx, dword ptr [0x7902f0] */ r_ecx = R32((u32)(0x7902f0u));
    /* 0040433f: call 0x407d00 */ r_esp -= 4; W32(r_esp, 0x404344u); f_00407d00();
    /* 00404344: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_00404347:; BB(0x00404347);
    /* 00404347: cmp dword ptr [ebp - 0x10], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040434b: je 0x4043b6 */ if (fZ) goto L_004043b6;
L_0040434d:; BB(0x0040434d);
    /* 0040434d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00404350: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00404351: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x404356u); f_005dcb00();
    /* 00404356: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00404359: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0040435c: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0040435f: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x404364u); f_0063aac0();
    /* 00404364: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00404366: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 00404369: cmp dword ptr [ebp - 0x3c], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040436d: je 0x40438b */ if (fZ) goto L_0040438b;
L_0040436f:; BB(0x0040436f);
    /* 0040436f: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00404372: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x404377u); f_0063aac0();
    /* 00404377: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00404379: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0040437c: cmp dword ptr [ebp - 0x40], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404380: je 0x40438b */ if (fZ) goto L_0040438b;
L_00404382:; BB(0x00404382);
    /* 00404382: mov dword ptr [ebp - 0x70], 0 */ W32((u32)(r_ebp+0xffffff90u), 0x0u);
    /* 00404389: jmp 0x404392 */ goto L_00404392;
L_0040438b:; BB(0x0040438b);
    /* 0040438b: mov dword ptr [ebp - 0x70], 1 */ W32((u32)(r_ebp+0xffffff90u), 0x1u);
L_00404392:; BB(0x00404392);
    /* 00404392: mov cl, byte ptr [ebp - 0x70] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffff90u))) & 0xffu);
    /* 00404395: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00404396: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00404399: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040439a: mov ecx, dword ptr [0x7902f0] */ r_ecx = R32((u32)(0x7902f0u));
    /* 004043a0: call 0x407be0 */ r_esp -= 4; W32(r_esp, 0x4043a5u); f_00407be0();
    /* 004043a5: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004043a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004043a9: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 004043ac: call 0x404680 */ r_esp -= 4; W32(r_esp, 0x4043b1u); f_00404680();
    /* 004043b1: jmp 0x404666 */ goto L_00404666;
L_004043b6:; BB(0x004043b6);
    /* 004043b6: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 004043b9: movzx edx, byte ptr [ecx + 0xa] */ r_edx = (u32)R8((u32)(r_ecx+0xau));
    /* 004043bd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004043bf: jne 0x4043d3 */ if (!fZ) goto L_004043d3;
L_004043c1:; BB(0x004043c1);
    /* 004043c1: mov ecx, dword ptr [0x7902f0] */ r_ecx = R32((u32)(0x7902f0u));
    /* 004043c7: call 0x4080d0 */ r_esp -= 4; W32(r_esp, 0x4043ccu); f_004080d0();
    /* 004043cc: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 004043cf: mov byte ptr [eax + 0xa], 1 */ W8((u32)(r_eax+0xau), 0x1u);
L_004043d3:; BB(0x004043d3);
    /* 004043d3: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 004043d6: movzx edx, byte ptr [ecx + 6] */ r_edx = (u32)R8((u32)(r_ecx+0x6u));
    /* 004043da: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004043dc: jne 0x404429 */ if (!fZ) goto L_00404429;
L_004043de:; BB(0x004043de);
    /* 004043de: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 004043e1: mov byte ptr [eax + 6], 1 */ W8((u32)(r_eax+0x6u), 0x1u);
    /* 004043e5: mov ecx, dword ptr [0x7902f0] */ r_ecx = R32((u32)(0x7902f0u));
    /* 004043eb: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 004043ee: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004043f1: mov dword ptr [edx + 0x10e0], 1 */ W32((u32)(r_edx+0x10e0u), 0x1u);
    /* 004043fb: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 004043fe: mov dword ptr [eax + 0x10e4], 4 */ W32((u32)(r_eax+0x10e4u), 0x4u);
    /* 00404408: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040440a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040440c: mov ecx, dword ptr [0x7902ec] */ r_ecx = R32((u32)(0x7902ecu));
    /* 00404412: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00404415: mov eax, dword ptr [0x7902ec] */ r_eax = R32((u32)(0x7902ecu));
    /* 0040441a: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0040441d: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0040441f: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00404422: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x404424u); call_ind(t); }
    /* 00404424: jmp 0x404666 */ goto L_00404666;
L_00404429:; BB(0x00404429);
    /* 00404429: mov ecx, dword ptr [0x7902f0] */ r_ecx = R32((u32)(0x7902f0u));
    /* 0040442f: call 0x407cc0 */ r_esp -= 4; W32(r_esp, 0x404434u); f_00407cc0();
    /* 00404434: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00404437: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404439: je 0x404499 */ if (fZ) goto L_00404499;
L_0040443b:; BB(0x0040443b);
    /* 0040443b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040443d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040443f: mov ecx, dword ptr [0x7902f0] */ r_ecx = R32((u32)(0x7902f0u));
    /* 00404445: call 0x407be0 */ r_esp -= 4; W32(r_esp, 0x40444au); f_00407be0();
    /* 0040444a: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0040444c: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x404451u); f_00686d82();
    /* 00404451: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00404454: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00404457: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0040445e: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404462: je 0x404471 */ if (fZ) goto L_00404471;
L_00404464:; BB(0x00404464);
    /* 00404464: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00404467: call 0x403ba0 */ r_esp -= 4; W32(r_esp, 0x40446cu); f_00403ba0();
    /* 0040446c: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 0040446f: jmp 0x404478 */ goto L_00404478;
L_00404471:; BB(0x00404471);
    /* 00404471: mov dword ptr [ebp - 0x74], 0 */ W32((u32)(r_ebp+0xffffff8cu), 0x0u);
L_00404478:; BB(0x00404478);
    /* 00404478: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0040447b: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0040447e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00404485: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00404488: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00404489: mov ecx, dword ptr [0x7902ec] */ r_ecx = R32((u32)(0x7902ecu));
    /* 0040448f: call 0x5da390 */ r_esp -= 4; W32(r_esp, 0x404494u); f_005da390();
    /* 00404494: jmp 0x404666 */ goto L_00404666;
L_00404499:; BB(0x00404499);
    /* 00404499: mov ecx, dword ptr [0x7902f8] */ r_ecx = R32((u32)(0x7902f8u));
    /* 0040449f: call 0x402370 */ r_esp -= 4; W32(r_esp, 0x4044a4u); f_00402370();
    /* 004044a4: mov ecx, dword ptr [0x7902f0] */ r_ecx = R32((u32)(0x7902f0u));
    /* 004044aa: call 0x4082e0 */ r_esp -= 4; W32(r_esp, 0x4044afu); f_004082e0();
    /* 004044af: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 004044b2: cmp dword ptr [ebp - 0x10], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004044b6: je 0x40457a */ if (fZ) goto L_0040457a;
L_004044bc:; BB(0x004044bc);
    /* 004044bc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004044be: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004044c1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004044c2: mov ecx, dword ptr [0x7902f0] */ r_ecx = R32((u32)(0x7902f0u));
    /* 004044c8: call 0x407be0 */ r_esp -= 4; W32(r_esp, 0x4044cdu); f_00407be0();
    /* 004044cd: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004044d0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004044d1: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 004044d4: call 0x404ad0 */ r_esp -= 4; W32(r_esp, 0x4044d9u); f_00404ad0();
    /* 004044d9: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004044dc: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004044df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004044e0: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4044e5u); f_005dcb00();
    /* 004044e5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004044e8: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 004044eb: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 004044ee: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x4044f3u); f_0063aac0();
    /* 004044f3: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 004044f5: mov dword ptr [ebp - 0x4c], ecx */ W32((u32)(r_ebp+0xffffffb4u), r_ecx);
    /* 004044f8: cmp dword ptr [ebp - 0x4c], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffb4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004044fc: je 0x40451a */ if (fZ) goto L_0040451a;
L_004044fe:; BB(0x004044fe);
    /* 004044fe: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 00404501: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x404506u); f_0063aac0();
    /* 00404506: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00404508: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 0040450b: cmp dword ptr [ebp - 0x50], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffb0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040450f: je 0x40451a */ if (fZ) goto L_0040451a;
L_00404511:; BB(0x00404511);
    /* 00404511: mov dword ptr [ebp - 0x78], 0 */ W32((u32)(r_ebp+0xffffff88u), 0x0u);
    /* 00404518: jmp 0x404521 */ goto L_00404521;
L_0040451a:; BB(0x0040451a);
    /* 0040451a: mov dword ptr [ebp - 0x78], 1 */ W32((u32)(r_ebp+0xffffff88u), 0x1u);
L_00404521:; BB(0x00404521);
    /* 00404521: movzx eax, byte ptr [ebp - 0x78] */ r_eax = (u32)R8((u32)(r_ebp+0xffffff88u));
    /* 00404525: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404527: je 0x404532 */ if (fZ) goto L_00404532;
L_00404529:; BB(0x00404529);
    /* 00404529: mov dword ptr [ebp - 0x5c], 0xffffffff */ W32((u32)(r_ebp+0xffffffa4u), 0xffffffffu);
    /* 00404530: jmp 0x404538 */ goto L_00404538;
L_00404532:; BB(0x00404532);
    /* 00404532: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00404535: mov dword ptr [ebp - 0x5c], ecx */ W32((u32)(r_ebp+0xffffffa4u), r_ecx);
L_00404538:; BB(0x00404538);
    /* 00404538: mov edx, dword ptr [0x7902f0] */ r_edx = R32((u32)(0x7902f0u));
    /* 0040453e: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 00404541: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 00404544: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00404547: mov dword ptr [eax + 0x10e0], ecx */ W32((u32)(r_eax+0x10e0u), r_ecx);
    /* 0040454d: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00404550: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 00404553: mov dword ptr [edx + 0x10e4], eax */ W32((u32)(r_edx+0x10e4u), r_eax);
    /* 00404559: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040455b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040455d: mov ecx, dword ptr [0x7902ec] */ r_ecx = R32((u32)(0x7902ecu));
    /* 00404563: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00404566: mov eax, dword ptr [0x7902ec] */ r_eax = R32((u32)(0x7902ecu));
    /* 0040456b: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0040456e: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00404570: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00404573: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x404575u); call_ind(t); }
    /* 00404575: jmp 0x404666 */ goto L_00404666;
L_0040457a:; BB(0x0040457a);
    /* 0040457a: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0040457d: movzx edx, byte ptr [ecx + 7] */ r_edx = (u32)R8((u32)(r_ecx+0x7u));
    /* 00404581: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404583: jne 0x4045c3 */ if (!fZ) goto L_004045c3;
L_00404585:; BB(0x00404585);
    /* 00404585: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 00404588: mov byte ptr [eax + 7], 1 */ W8((u32)(r_eax+0x7u), 0x1u);
    /* 0040458c: mov ecx, dword ptr [0x7902f0] */ r_ecx = R32((u32)(0x7902f0u));
    /* 00404592: call 0x4084f0 */ r_esp -= 4; W32(r_esp, 0x404597u); f_004084f0();
    /* 00404597: mov ecx, dword ptr [0x7902f0] */ r_ecx = R32((u32)(0x7902f0u));
    /* 0040459d: call 0x409630 */ r_esp -= 4; W32(r_esp, 0x4045a2u); f_00409630();
    /* 004045a2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004045a4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004045a6: mov ecx, dword ptr [0x7902ec] */ r_ecx = R32((u32)(0x7902ecu));
    /* 004045ac: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 004045af: mov eax, dword ptr [0x7902ec] */ r_eax = R32((u32)(0x7902ecu));
    /* 004045b4: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 004045b7: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004045b9: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 004045bc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4045beu); call_ind(t); }
    /* 004045be: jmp 0x404666 */ goto L_00404666;
L_004045c3:; BB(0x004045c3);
    /* 004045c3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004045c5: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004045c7: mov ecx, dword ptr [0x7902f0] */ r_ecx = R32((u32)(0x7902f0u));
    /* 004045cd: call 0x407be0 */ r_esp -= 4; W32(r_esp, 0x4045d2u); f_00407be0();
    /* 004045d2: mov ecx, dword ptr [0x7902ec] */ r_ecx = R32((u32)(0x7902ecu));
    /* 004045d8: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x4045ddu); f_005da7b0();
    /* 004045dd: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004045e0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004045e2: je 0x404638 */ if (fZ) goto L_00404638;
L_004045e4:; BB(0x004045e4);
    /* 004045e4: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 004045e7: movzx eax, byte ptr [edx + 9] */ r_eax = (u32)R8((u32)(r_edx+0x9u));
    /* 004045eb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004045ed: jne 0x404638 */ if (!fZ) goto L_00404638;
L_004045ef:; BB(0x004045ef);
    /* 004045ef: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 004045f2: mov byte ptr [ecx + 9], 1 */ W8((u32)(r_ecx+0x9u), 0x1u);
    /* 004045f6: mov edx, dword ptr [0x7902f0] */ r_edx = R32((u32)(0x7902f0u));
    /* 004045fc: mov dword ptr [ebp - 0x60], edx */ W32((u32)(r_ebp+0xffffffa0u), r_edx);
    /* 004045ff: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 00404602: mov dword ptr [eax + 0x10e0], 3 */ W32((u32)(r_eax+0x10e0u), 0x3u);
    /* 0040460c: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0040460f: mov dword ptr [ecx + 0x10e4], 0xffffffff */ W32((u32)(r_ecx+0x10e4u), 0xffffffffu);
    /* 00404619: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040461b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040461d: mov edx, dword ptr [0x7902ec] */ r_edx = R32((u32)(0x7902ecu));
    /* 00404623: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00404626: mov ecx, dword ptr [0x7902ec] */ r_ecx = R32((u32)(0x7902ecu));
    /* 0040462c: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0040462f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00404631: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00404634: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x404636u); call_ind(t); }
    /* 00404636: jmp 0x404666 */ goto L_00404666;
L_00404638:; BB(0x00404638);
    /* 00404638: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0040463e: mov dl, byte ptr [ecx + 0x25] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x25u))) & 0xffu);
    /* 00404641: mov byte ptr [ebp - 0x61], dl */ W8((u32)(r_ebp+0xffffff9fu), (u8)r_edx);
    /* 00404644: movzx eax, byte ptr [ebp - 0x61] */ r_eax = (u32)R8((u32)(r_ebp+0xffffff9fu));
    /* 00404648: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040464a: je 0x40465b */ if (fZ) goto L_0040465b;
L_0040464c:; BB(0x0040464c);
    /* 0040464c: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 00404651: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 00404654: call 0x404160 */ r_esp -= 4; W32(r_esp, 0x404659u); f_00404160();
    /* 00404659: jmp 0x404666 */ goto L_00404666;
L_0040465b:; BB(0x0040465b);
    /* 0040465b: mov ecx, dword ptr [0x7902f8] */ r_ecx = R32((u32)(0x7902f8u));
    /* 00404661: call 0x401f30 */ r_esp -= 4; W32(r_esp, 0x404666u); f_00401f30();
L_00404666:; BB(0x00404666);
    /* 00404666: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00404669: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00404670: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00404671: mov esp, ebp */ r_esp = r_ebp;
    /* 00404673: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00404674: ret  */ FN_RET(0x00404200); r_esp += 4; return;
}

void f_00404680(void) /* sub_404680 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00404680);
    /* 00404680: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00404681: mov ebp, esp */ r_ebp = r_esp;
    /* 00404683: sub esp, 0x148 */ {  u32 a = r_esp; u32 b = 0x148u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00404689: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0040468e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00404690: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00404693: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00404694: mov dword ptr [ebp - 0x144], ecx */ W32((u32)(r_ebp+0xfffffebcu), r_ecx);
    /* 0040469a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040469d: imul eax, eax, 3 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004046a0: mov dword ptr [ebp - 0x114], eax */ W32((u32)(r_ebp+0xfffffeecu), r_eax);
    /* 004046a6: mov ecx, dword ptr [0x7902f8] */ r_ecx = R32((u32)(0x7902f8u));
    /* 004046ac: call 0x401bc0 */ r_esp -= 4; W32(r_esp, 0x4046b1u); f_00401bc0();
    /* 004046b1: mov ecx, dword ptr [0x7902f0] */ r_ecx = R32((u32)(0x7902f0u));
    /* 004046b7: call 0x407bb0 */ r_esp -= 4; W32(r_esp, 0x4046bcu); f_00407bb0();
    /* 004046bc: mov dword ptr [ebp - 0x128], eax */ W32((u32)(r_ebp+0xfffffed8u), r_eax);
    /* 004046c2: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 004046c8: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x4046cdu); f_0063aac0();
    /* 004046cd: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 004046cf: mov dword ptr [ebp - 0x120], ecx */ W32((u32)(r_ebp+0xfffffee0u), r_ecx);
    /* 004046d5: cmp dword ptr [ebp - 0x120], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffee0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004046dc: je 0x404706 */ if (fZ) goto L_00404706;
L_004046de:; BB(0x004046de);
    /* 004046de: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 004046e4: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x4046e9u); f_0063aac0();
    /* 004046e9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004046eb: mov dword ptr [ebp - 0x124], edx */ W32((u32)(r_ebp+0xfffffedcu), r_edx);
    /* 004046f1: cmp dword ptr [ebp - 0x124], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffedcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004046f8: je 0x404706 */ if (fZ) goto L_00404706;
L_004046fa:; BB(0x004046fa);
    /* 004046fa: mov dword ptr [ebp - 0x148], 0 */ W32((u32)(r_ebp+0xfffffeb8u), 0x0u);
    /* 00404704: jmp 0x404710 */ goto L_00404710;
L_00404706:; BB(0x00404706);
    /* 00404706: mov dword ptr [ebp - 0x148], 1 */ W32((u32)(r_ebp+0xfffffeb8u), 0x1u);
L_00404710:; BB(0x00404710);
    /* 00404710: movzx eax, byte ptr [ebp - 0x148] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffeb8u));
    /* 00404717: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404719: je 0x404806 */ if (fZ) goto L_00404806;
L_0040471f:; BB(0x0040471f);
    /* 0040471f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00404721: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00404727: call 0x5df700 */ r_esp -= 4; W32(r_esp, 0x40472cu); f_005df700();
    /* 0040472c: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0040472f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404731: je 0x404747 */ if (fZ) goto L_00404747;
L_00404733:; BB(0x00404733);
    /* 00404733: push 0x705308 */ { u32 v = 0x705308u; r_esp -= 4; W32(r_esp, v); }
    /* 00404738: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0040473a: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 00404740: call 0x57ab80 */ r_esp -= 4; W32(r_esp, 0x404745u); f_0057ab80();
    /* 00404745: jmp 0x404752 */ goto L_00404752;
L_00404747:; BB(0x00404747);
    /* 00404747: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 0040474d: call 0x57ae30 */ r_esp -= 4; W32(r_esp, 0x404752u); f_0057ae30();
L_00404752:; BB(0x00404752);
    /* 00404752: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00404755: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00404756: mov ecx, dword ptr [0x7902f0] */ r_ecx = R32((u32)(0x7902f0u));
    /* 0040475c: call 0x407de0 */ r_esp -= 4; W32(r_esp, 0x404761u); f_00407de0();
    /* 00404761: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00404764: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404766: jne 0x4047f6 */ if (!fZ) goto L_004047f6;
L_0040476c:; BB(0x0040476c);
    /* 0040476c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0040476f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00404770: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x404775u); f_005dcb00();
    /* 00404775: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00404778: mov ecx, eax */ r_ecx = r_eax;
    /* 0040477a: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x40477fu); f_005d5a50();
    /* 0040477f: mov esi, eax */ r_esi = r_eax;
    /* 00404781: mov edx, dword ptr [0x7902ec] */ r_edx = R32((u32)(0x7902ecu));
    /* 00404787: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00404789: mov ecx, dword ptr [0x7902ec] */ r_ecx = R32((u32)(0x7902ecu));
    /* 0040478f: mov edx, dword ptr [eax + 0x2b0] */ r_edx = R32((u32)(r_eax+0x2b0u));
    /* 00404795: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x404797u); call_ind(t); }
    /* 00404797: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00404799: jge 0x4047f6 */ if ((fS==fO)) goto L_004047f6;
L_0040479b:; BB(0x0040479b);
    /* 0040479b: mov ecx, dword ptr [0x7902ec] */ r_ecx = R32((u32)(0x7902ecu));
    /* 004047a1: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x4047a6u); f_005da7b0();
    /* 004047a6: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004047a9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004047ab: je 0x4047dc */ if (fZ) goto L_004047dc;
L_004047ad:; BB(0x004047ad);
    /* 004047ad: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004047b0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004047b1: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4047b6u); f_005dcb00();
    /* 004047b6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004047b9: mov dword ptr [ebp - 0x12c], eax */ W32((u32)(r_ebp+0xfffffed4u), r_eax);
    /* 004047bf: mov edx, dword ptr [ebp - 0x12c] */ r_edx = R32((u32)(r_ebp+0xfffffed4u));
    /* 004047c5: mov byte ptr [edx + 0x4a1], 1 */ W8((u32)(r_edx+0x4a1u), 0x1u);
    /* 004047cc: mov ecx, dword ptr [ebp - 0x144] */ r_ecx = R32((u32)(r_ebp+0xfffffebcu));
    /* 004047d2: call 0x404200 */ r_esp -= 4; W32(r_esp, 0x4047d7u); f_00404200();
    /* 004047d7: jmp 0x404aba */ goto L_00404aba;
L_004047dc:; BB(0x004047dc);
    /* 004047dc: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004047df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004047e0: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4047e5u); f_005dcb00();
    /* 004047e5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004047e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004047e9: mov ecx, dword ptr [0x7902ec] */ r_ecx = R32((u32)(0x7902ecu));
    /* 004047ef: call 0x5dbb70 */ r_esp -= 4; W32(r_esp, 0x4047f4u); f_005dbb70();
    /* 004047f4: jmp 0x404801 */ goto L_00404801;
L_004047f6:; BB(0x004047f6);
    /* 004047f6: mov ecx, dword ptr [0x7902f8] */ r_ecx = R32((u32)(0x7902f8u));
    /* 004047fc: call 0x401fb0 */ r_esp -= 4; W32(r_esp, 0x404801u); f_00401fb0();
L_00404801:; BB(0x00404801);
    /* 00404801: jmp 0x404aba */ goto L_00404aba;
L_00404806:; BB(0x00404806);
    /* 00404806: mov ecx, dword ptr [ebp - 0x144] */ r_ecx = R32((u32)(r_ebp+0xfffffebcu));
    /* 0040480c: movzx edx, byte ptr [ecx + 5] */ r_edx = (u32)R8((u32)(r_ecx+0x5u));
    /* 00404810: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404812: jne 0x40483c */ if (!fZ) goto L_0040483c;
L_00404814:; BB(0x00404814);
    /* 00404814: mov eax, dword ptr [ebp - 0x144] */ r_eax = R32((u32)(r_ebp+0xfffffebcu));
    /* 0040481a: mov byte ptr [eax + 5], 1 */ W8((u32)(r_eax+0x5u), 0x1u);
    /* 0040481e: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00404820: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00404826: call 0x637810 */ r_esp -= 4; W32(r_esp, 0x40482bu); f_00637810();
    /* 0040482b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040482c: mov ecx, dword ptr [0x7902ec] */ r_ecx = R32((u32)(0x7902ecu));
    /* 00404832: call 0x5da360 */ r_esp -= 4; W32(r_esp, 0x404837u); f_005da360();
    /* 00404837: jmp 0x404aba */ goto L_00404aba;
L_0040483c:; BB(0x0040483c);
    /* 0040483c: mov ecx, dword ptr [ebp - 0x144] */ r_ecx = R32((u32)(r_ebp+0xfffffebcu));
    /* 00404842: mov byte ptr [ecx + 5], 0 */ W8((u32)(r_ecx+0x5u), 0x0u);
    /* 00404846: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00404849: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040484a: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x40484fu); f_005dcb00();
    /* 0040484f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00404852: mov ecx, eax */ r_ecx = r_eax;
    /* 00404854: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x404859u); f_005d5a50();
    /* 00404859: mov esi, eax */ r_esi = r_eax;
    /* 0040485b: mov eax, dword ptr [0x7902ec] */ r_eax = R32((u32)(0x7902ecu));
    /* 00404860: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00404862: mov ecx, dword ptr [0x7902ec] */ r_ecx = R32((u32)(0x7902ecu));
    /* 00404868: mov eax, dword ptr [edx + 0x2b0] */ r_eax = R32((u32)(r_edx+0x2b0u));
    /* 0040486e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x404870u); call_ind(t); }
    /* 00404870: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00404872: jl 0x404a5b */ if ((fS!=fO)) goto L_00404a5b;
L_00404878:; BB(0x00404878);
    /* 00404878: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040487a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0040487d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040487e: mov ecx, dword ptr [0x7902fc] */ r_ecx = R32((u32)(0x7902fcu));
    /* 00404884: call 0x401040 */ r_esp -= 4; W32(r_esp, 0x404889u); f_00401040();
    /* 00404889: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040488a: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x40488fu); f_0064c8a0();
    /* 0040488f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00404892: mov dword ptr [ebp - 0x11c], eax */ W32((u32)(r_ebp+0xfffffee4u), r_eax);
    /* 00404898: mov dword ptr [ebp - 0x118], edx */ W32((u32)(r_ebp+0xfffffee8u), r_edx);
    /* 0040489e: mov edx, dword ptr [ebp - 0x11c] */ r_edx = R32((u32)(r_ebp+0xfffffee4u));
    /* 004048a4: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 004048a7: mov eax, dword ptr [ebp - 0x118] */ r_eax = R32((u32)(r_ebp+0xfffffee8u));
    /* 004048ad: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004048b0: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 004048b2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004048b4: call 0x62fc30 */ r_esp -= 4; W32(r_esp, 0x4048b9u); f_0062fc30();
    /* 004048b9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004048bc: cmp eax, 0x5a */ {  u32 a = r_eax; u32 b = 0x5au; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004048bf: jge 0x404994 */ if ((fS==fO)) goto L_00404994;
L_004048c5:; BB(0x004048c5);
    /* 004048c5: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 004048c7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004048c9: call 0x62fc30 */ r_esp -= 4; W32(r_esp, 0x4048ceu); f_0062fc30();
    /* 004048ce: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004048d1: cmp eax, 0x32 */ {  u32 a = r_eax; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004048d4: jge 0x404935 */ if ((fS==fO)) goto L_00404935;
L_004048d6:; BB(0x004048d6);
    /* 004048d6: mov ecx, dword ptr [0x7902f0] */ r_ecx = R32((u32)(0x7902f0u));
    /* 004048dc: mov dword ptr [ebp - 0x130], ecx */ W32((u32)(r_ebp+0xfffffed0u), r_ecx);
    /* 004048e2: mov edx, dword ptr [ebp - 0x130] */ r_edx = R32((u32)(r_ebp+0xfffffed0u));
    /* 004048e8: mov dword ptr [edx + 0x10e0], 5 */ W32((u32)(r_edx+0x10e0u), 0x5u);
    /* 004048f2: mov eax, dword ptr [ebp - 0x130] */ r_eax = R32((u32)(r_ebp+0xfffffed0u));
    /* 004048f8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004048fb: mov dword ptr [eax + 0x10e4], ecx */ W32((u32)(r_eax+0x10e4u), r_ecx);
    /* 00404901: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00404903: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00404905: lea edx, [ebp - 8] */ r_edx = (u32)(r_ebp+0xfffffff8u);
    /* 00404908: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00404909: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 0040490f: mov ecx, dword ptr [0x7902f0] */ r_ecx = R32((u32)(0x7902f0u));
    /* 00404915: mov edx, dword ptr [ecx + eax*4 + 0xc] */ r_edx = R32((u32)(r_ecx+r_eax*4+0xcu));
    /* 00404919: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 0040491f: mov ecx, dword ptr [0x7902f0] */ r_ecx = R32((u32)(0x7902f0u));
    /* 00404925: mov ecx, dword ptr [ecx + eax*4 + 0xc] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0xcu));
    /* 00404929: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0040492b: mov eax, dword ptr [edx + 0xc4] */ r_eax = R32((u32)(r_edx+0xc4u));
    /* 00404931: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x404933u); call_ind(t); }
    /* 00404933: jmp 0x404992 */ goto L_00404992;
L_00404935:; BB(0x00404935);
    /* 00404935: mov ecx, dword ptr [0x7902f0] */ r_ecx = R32((u32)(0x7902f0u));
    /* 0040493b: mov dword ptr [ebp - 0x134], ecx */ W32((u32)(r_ebp+0xfffffeccu), r_ecx);
    /* 00404941: mov edx, dword ptr [ebp - 0x134] */ r_edx = R32((u32)(r_ebp+0xfffffeccu));
    /* 00404947: mov dword ptr [edx + 0x10e0], 4 */ W32((u32)(r_edx+0x10e0u), 0x4u);
    /* 00404951: mov eax, dword ptr [ebp - 0x134] */ r_eax = R32((u32)(r_ebp+0xfffffeccu));
    /* 00404957: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0040495a: mov dword ptr [eax + 0x10e4], ecx */ W32((u32)(r_eax+0x10e4u), r_ecx);
    /* 00404960: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00404962: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00404964: lea edx, [ebp - 8] */ r_edx = (u32)(r_ebp+0xfffffff8u);
    /* 00404967: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00404968: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 0040496e: mov ecx, dword ptr [0x7902f0] */ r_ecx = R32((u32)(0x7902f0u));
    /* 00404974: mov edx, dword ptr [ecx + eax*4 + 8] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x8u));
    /* 00404978: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 0040497e: mov ecx, dword ptr [0x7902f0] */ r_ecx = R32((u32)(0x7902f0u));
    /* 00404984: mov ecx, dword ptr [ecx + eax*4 + 8] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x8u));
    /* 00404988: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0040498a: mov eax, dword ptr [edx + 0xc4] */ r_eax = R32((u32)(r_edx+0xc4u));
    /* 00404990: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x404992u); call_ind(t); }
L_00404992:; BB(0x00404992);
    /* 00404992: jmp 0x4049f1 */ goto L_004049f1;
L_00404994:; BB(0x00404994);
    /* 00404994: mov ecx, dword ptr [0x7902f0] */ r_ecx = R32((u32)(0x7902f0u));
    /* 0040499a: mov dword ptr [ebp - 0x138], ecx */ W32((u32)(r_ebp+0xfffffec8u), r_ecx);
    /* 004049a0: mov edx, dword ptr [ebp - 0x138] */ r_edx = R32((u32)(r_ebp+0xfffffec8u));
    /* 004049a6: mov dword ptr [edx + 0x10e0], 6 */ W32((u32)(r_edx+0x10e0u), 0x6u);
    /* 004049b0: mov eax, dword ptr [ebp - 0x138] */ r_eax = R32((u32)(r_ebp+0xfffffec8u));
    /* 004049b6: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004049b9: mov dword ptr [eax + 0x10e4], ecx */ W32((u32)(r_eax+0x10e4u), r_ecx);
    /* 004049bf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004049c1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004049c3: lea edx, [ebp - 8] */ r_edx = (u32)(r_ebp+0xfffffff8u);
    /* 004049c6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004049c7: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 004049cd: mov ecx, dword ptr [0x7902f0] */ r_ecx = R32((u32)(0x7902f0u));
    /* 004049d3: mov edx, dword ptr [ecx + eax*4 + 4] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 004049d7: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 004049dd: mov ecx, dword ptr [0x7902f0] */ r_ecx = R32((u32)(0x7902f0u));
    /* 004049e3: mov ecx, dword ptr [ecx + eax*4 + 4] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 004049e7: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004049e9: mov eax, dword ptr [edx + 0xc4] */ r_eax = R32((u32)(r_edx+0xc4u));
    /* 004049ef: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4049f1u); call_ind(t); }
L_004049f1:; BB(0x004049f1);
    /* 004049f1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004049f4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004049f5: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004049f8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004049f9: push 0x6b2c18 */ { u32 v = 0x6b2c18u; r_esp -= 4; W32(r_esp, v); }
    /* 004049fe: lea eax, [ebp - 0x110] */ r_eax = (u32)(r_ebp+0xfffffef0u);
    /* 00404a04: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00404a05: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x404a0bu); call_ind(t); }
    /* 00404a0b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00404a0e: lea ecx, [ebp - 0x110] */ r_ecx = (u32)(r_ebp+0xfffffef0u);
    /* 00404a14: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00404a15: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x404a1au); f_0062fde0();
    /* 00404a1a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00404a1d: mov ecx, dword ptr [0x7902f0] */ r_ecx = R32((u32)(0x7902f0u));
    /* 00404a23: call 0x407bb0 */ r_esp -= 4; W32(r_esp, 0x404a28u); f_00407bb0();
    /* 00404a28: mov dword ptr [ebp - 0x13c], eax */ W32((u32)(r_ebp+0xfffffec4u), r_eax);
    /* 00404a2e: mov edx, dword ptr [ebp - 0x13c] */ r_edx = R32((u32)(r_ebp+0xfffffec4u));
    /* 00404a34: mov byte ptr [edx + 0x4a0], 1 */ W8((u32)(r_edx+0x4a0u), 0x1u);
    /* 00404a3b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00404a3d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00404a3f: mov eax, dword ptr [0x7902ec] */ r_eax = R32((u32)(0x7902ecu));
    /* 00404a44: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00404a47: mov edx, dword ptr [0x7902ec] */ r_edx = R32((u32)(0x7902ecu));
    /* 00404a4d: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00404a50: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00404a52: mov ecx, eax */ r_ecx = r_eax;
    /* 00404a54: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00404a57: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x404a59u); call_ind(t); }
    /* 00404a59: jmp 0x404aba */ goto L_00404aba;
L_00404a5b:; BB(0x00404a5b);
    /* 00404a5b: mov ecx, dword ptr [0x7902ec] */ r_ecx = R32((u32)(0x7902ecu));
    /* 00404a61: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x404a66u); f_005da7b0();
    /* 00404a66: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00404a69: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404a6b: je 0x404a8e */ if (fZ) goto L_00404a8e;
L_00404a6d:; BB(0x00404a6d);
    /* 00404a6d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00404a70: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00404a71: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x404a76u); f_005dcb00();
    /* 00404a76: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00404a79: mov dword ptr [ebp - 0x140], eax */ W32((u32)(r_ebp+0xfffffec0u), r_eax);
    /* 00404a7f: mov eax, dword ptr [ebp - 0x140] */ r_eax = R32((u32)(r_ebp+0xfffffec0u));
    /* 00404a85: mov byte ptr [eax + 0x4a1], 1 */ W8((u32)(r_eax+0x4a1u), 0x1u);
    /* 00404a8c: jmp 0x404a9d */ goto L_00404a9d;
L_00404a8e:; BB(0x00404a8e);
    /* 00404a8e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00404a91: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00404a92: mov ecx, dword ptr [0x7902ec] */ r_ecx = R32((u32)(0x7902ecu));
    /* 00404a98: call 0x5d9570 */ r_esp -= 4; W32(r_esp, 0x404a9du); f_005d9570();
L_00404a9d:; BB(0x00404a9d);
    /* 00404a9d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00404a9f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00404aa1: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 00404aa7: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00404aaa: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00404ab0: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00404ab3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00404ab5: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00404ab8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x404abau); call_ind(t); }
L_00404aba:; BB(0x00404aba);
    /* 00404aba: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00404abb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00404abe: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00404ac0: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x404ac5u); f_00686d72();
    /* 00404ac5: mov esp, ebp */ r_esp = r_ebp;
    /* 00404ac7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00404ac8: ret 4 */ FN_RET(0x00404680); r_esp += 8; return;
}

void f_00404ad0(void) /* sub_404AD0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00404ad0);
    /* 00404ad0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00404ad1: mov ebp, esp */ r_ebp = r_esp;
    /* 00404ad3: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00404ad6: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00404ad9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00404adc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00404add: mov ecx, dword ptr [0x7902f0] */ r_ecx = R32((u32)(0x7902f0u));
    /* 00404ae3: call 0x408c00 */ r_esp -= 4; W32(r_esp, 0x404ae8u); f_00408c00();
    /* 00404ae8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00404aeb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00404aec: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x404af1u); f_005dcb00();
    /* 00404af1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00404af4: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00404af7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00404afa: mov byte ptr [edx + 0x4a2], 1 */ W8((u32)(r_edx+0x4a2u), 0x1u);
    /* 00404b01: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00404b03: mov eax, dword ptr [0x7902ec] */ r_eax = R32((u32)(0x7902ecu));
    /* 00404b08: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00404b0b: mov edx, dword ptr [0x7902ec] */ r_edx = R32((u32)(0x7902ecu));
    /* 00404b11: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00404b14: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00404b16: mov ecx, eax */ r_ecx = r_eax;
    /* 00404b18: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00404b1b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x404b1du); call_ind(t); }
    /* 00404b1d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00404b20: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00404b21: mov ecx, dword ptr [0x7902f0] */ r_ecx = R32((u32)(0x7902f0u));
    /* 00404b27: call 0x408b40 */ r_esp -= 4; W32(r_esp, 0x404b2cu); f_00408b40();
    /* 00404b2c: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00404b2f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404b31: je 0x404b87 */ if (fZ) goto L_00404b87;
L_00404b33:; BB(0x00404b33);
    /* 00404b33: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00404b36: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00404b37: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x404b3cu); f_005dcb00();
    /* 00404b3c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00404b3f: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00404b42: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00404b45: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x404b4au); f_0063aac0();
    /* 00404b4a: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00404b4c: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00404b4f: cmp dword ptr [ebp - 8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404b53: je 0x404b71 */ if (fZ) goto L_00404b71;
L_00404b55:; BB(0x00404b55);
    /* 00404b55: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00404b58: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x404b5du); f_0063aac0();
    /* 00404b5d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00404b5f: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00404b62: cmp dword ptr [ebp - 0xc], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404b66: je 0x404b71 */ if (fZ) goto L_00404b71;
L_00404b68:; BB(0x00404b68);
    /* 00404b68: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 00404b6f: jmp 0x404b78 */ goto L_00404b78;
L_00404b71:; BB(0x00404b71);
    /* 00404b71: mov dword ptr [ebp - 0x18], 1 */ W32((u32)(r_ebp+0xffffffe8u), 0x1u);
L_00404b78:; BB(0x00404b78);
    /* 00404b78: movzx eax, byte ptr [ebp - 0x18] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffe8u));
    /* 00404b7c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404b7e: jne 0x404b87 */ if (!fZ) goto L_00404b87;
L_00404b80:; BB(0x00404b80);
    /* 00404b80: mov eax, 7 */ r_eax = 0x7u;
    /* 00404b85: jmp 0x404b8c */ goto L_00404b8c;
L_00404b87:; BB(0x00404b87);
    /* 00404b87: mov eax, 2 */ r_eax = 0x2u;
L_00404b8c:; BB(0x00404b8c);
    /* 00404b8c: mov esp, ebp */ r_esp = r_ebp;
    /* 00404b8e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00404b8f: ret 4 */ FN_RET(0x00404ad0); r_esp += 8; return;
}

void f_00404ba0(void) /* sub_404BA0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00404ba0);
    /* 00404ba0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00404ba1: mov ebp, esp */ r_ebp = r_esp;
    /* 00404ba3: sub esp, 0xd4 */ {  u32 a = r_esp; u32 b = 0xd4u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00404ba9: mov dword ptr [ebp - 0xb4], ecx */ W32((u32)(r_ebp+0xffffff4cu), r_ecx);
    /* 00404baf: mov dword ptr [ebp - 0x44], 0xffffffff */ W32((u32)(r_ebp+0xffffffbcu), 0xffffffffu);
    /* 00404bb6: mov dword ptr [ebp - 0x20], 0xffffffff */ W32((u32)(r_ebp+0xffffffe0u), 0xffffffffu);
    /* 00404bbd: mov dword ptr [ebp - 0x4c], 0xffffffff */ W32((u32)(r_ebp+0xffffffb4u), 0xffffffffu);
    /* 00404bc4: fldz  */ FPUSH(0.0);
    /* 00404bc6: fstp qword ptr [ebp - 0x18] */ W_F64((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 00404bc9: fld1  */ FPUSH(1.0);
    /* 00404bcb: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 00404bce: mov eax, dword ptr [0x7902f0] */ r_eax = R32((u32)(0x7902f0u));
    /* 00404bd3: mov ecx, dword ptr [eax + 0x10dc] */ r_ecx = R32((u32)(r_eax+0x10dcu));
    /* 00404bd9: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00404bdc: mov dword ptr [ebp - 0x1c], 0xffffffff */ W32((u32)(r_ebp+0xffffffe4u), 0xffffffffu);
    /* 00404be3: mov dword ptr [ebp - 0x48], 0xffffffff */ W32((u32)(r_ebp+0xffffffb8u), 0xffffffffu);
    /* 00404bea: mov dword ptr [ebp - 8], 0xffffffff */ W32((u32)(r_ebp+0xfffffff8u), 0xffffffffu);
    /* 00404bf1: mov dword ptr [ebp - 0x58], 0xffffffff */ W32((u32)(r_ebp+0xffffffa8u), 0xffffffffu);
    /* 00404bf8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00404bfa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00404bfc: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x404c01u); f_0064c8a0();
    /* 00404c01: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00404c04: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 00404c07: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
    /* 00404c0a: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00404c0d: mov dword ptr [ebp - 0x54], edx */ W32((u32)(r_ebp+0xffffffacu), r_edx);
    /* 00404c10: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 00404c13: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 00404c16: mov ecx, dword ptr [0x7902f0] */ r_ecx = R32((u32)(0x7902f0u));
    /* 00404c1c: mov edx, dword ptr [ecx + 0x10e4] */ r_edx = R32((u32)(r_ecx+0x10e4u));
    /* 00404c22: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 00404c25: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 00404c28: mov dword ptr [ebp - 0xb8], eax */ W32((u32)(r_ebp+0xffffff48u), r_eax);
    /* 00404c2e: mov ecx, dword ptr [0x7902f0] */ r_ecx = R32((u32)(0x7902f0u));
    /* 00404c34: mov edx, dword ptr [ecx + 0x10e0] */ r_edx = R32((u32)(r_ecx+0x10e0u));
    /* 00404c3a: mov dword ptr [ebp - 0xb8], edx */ W32((u32)(r_ebp+0xffffff48u), r_edx);
    /* 00404c40: cmp dword ptr [ebp - 0xb8], 9 */ {  u32 a = R32((u32)(r_ebp+0xffffff48u)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00404c47: ja 0x404fe4 */ if ((!fC&&!fZ)) goto L_00404fe4;
L_00404c4d:; BB(0x00404c4d);
    /* 00404c4d: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 00404c53: jmp dword ptr [eax*4 + 0x4051a8] */ { u32 t = R32((u32)(r_eax*4+0x4051a8u)); switch (t) { case 0x404c5au: goto L_00404c5a; case 0x404c66u: goto L_00404c66; case 0x404c72u: goto L_00404c72; case 0x404fe4u: goto L_00404fe4; case 0x404f5fu: goto L_00404f5f; case 0x404f83u: goto L_00404f83; case 0x404fa7u: goto L_00404fa7; case 0x404fcbu: goto L_00404fcb; case 0x404fd4u: goto L_00404fd4; case 0x404fddu: goto L_00404fdd; default: UNSUP(0x00404c53, "jump table entry is not a known target"); } }
L_00404c5a:; BB(0x00404c5a);
    /* 00404c5a: mov dword ptr [ebp - 0x1c], 0x29810 */ W32((u32)(r_ebp+0xffffffe4u), 0x29810u);
    /* 00404c61: jmp 0x404fe4 */ goto L_00404fe4;
L_00404c66:; BB(0x00404c66);
    /* 00404c66: mov dword ptr [ebp - 0x1c], 0x29816 */ W32((u32)(r_ebp+0xffffffe4u), 0x29816u);
    /* 00404c6d: jmp 0x404fe4 */ goto L_00404fe4;
L_00404c72:; BB(0x00404c72);
    /* 00404c72: lea ecx, [ebp - 0x54] */ r_ecx = (u32)(r_ebp+0xffffffacu);
    /* 00404c75: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00404c76: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00404c79: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00404c7a: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x404c7fu); f_005dcb00();
    /* 00404c7f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00404c82: mov ecx, eax */ r_ecx = r_eax;
    /* 00404c84: call 0x5d6020 */ r_esp -= 4; W32(r_esp, 0x404c89u); f_005d6020();
    /* 00404c89: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00404c8c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00404c8d: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x404c92u); f_005dcb00();
    /* 00404c92: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00404c95: cmp dword ptr [eax + 0x4a8], 3 */ {  u32 a = R32((u32)(r_eax+0x4a8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00404c9c: jle 0x404d1c */ if ((fZ||fS!=fO)) goto L_00404d1c;
L_00404c9e:; BB(0x00404c9e);
    /* 00404c9e: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00404ca0: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x404ca5u); f_0062fbf0();
    /* 00404ca5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00404ca8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404caa: jne 0x404d1c */ if (!fZ) goto L_00404d1c;
L_00404cac:; BB(0x00404cac);
    /* 00404cac: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00404caf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00404cb0: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x404cb5u); f_005dcb00();
    /* 00404cb5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00404cb8: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 00404cbb: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 00404cbe: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x404cc3u); f_0063aac0();
    /* 00404cc3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00404cc5: mov dword ptr [ebp - 0x68], edx */ W32((u32)(r_ebp+0xffffff98u), r_edx);
    /* 00404cc8: cmp dword ptr [ebp - 0x68], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff98u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404ccc: je 0x404ced */ if (fZ) goto L_00404ced;
L_00404cce:; BB(0x00404cce);
    /* 00404cce: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 00404cd1: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x404cd6u); f_0063aac0();
    /* 00404cd6: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00404cd8: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 00404cdb: cmp dword ptr [ebp - 0x6c], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff94u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404cdf: je 0x404ced */ if (fZ) goto L_00404ced;
L_00404ce1:; BB(0x00404ce1);
    /* 00404ce1: mov dword ptr [ebp - 0xbc], 0 */ W32((u32)(r_ebp+0xffffff44u), 0x0u);
    /* 00404ceb: jmp 0x404cf7 */ goto L_00404cf7;
L_00404ced:; BB(0x00404ced);
    /* 00404ced: mov dword ptr [ebp - 0xbc], 1 */ W32((u32)(r_ebp+0xffffff44u), 0x1u);
L_00404cf7:; BB(0x00404cf7);
    /* 00404cf7: movzx ecx, byte ptr [ebp - 0xbc] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffff44u));
    /* 00404cfe: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 00404d00: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 00404d02: and ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00404d05: add ecx, 0x400 */ {  u32 a = r_ecx; u32 b = 0x400u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00404d0b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00404d0e: fld qword ptr [0x6b2c40] */ FPUSH(R_F64((u32)(0x6b2c40u)));
    /* 00404d14: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 00404d17: jmp 0x404fe4 */ goto L_00404fe4;
L_00404d1c:; BB(0x00404d1c);
    /* 00404d1c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00404d1f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00404d20: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x404d25u); f_005dcb00();
    /* 00404d25: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00404d28: cmp dword ptr [eax + 0x4a8], -3 */ {  u32 a = R32((u32)(r_eax+0x4a8u)); u32 b = 0xfffffffdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00404d2f: jge 0x404dae */ if ((fS==fO)) goto L_00404dae;
L_00404d31:; BB(0x00404d31);
    /* 00404d31: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00404d33: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x404d38u); f_0062fbf0();
    /* 00404d38: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00404d3b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404d3d: jne 0x404dae */ if (!fZ) goto L_00404dae;
L_00404d3f:; BB(0x00404d3f);
    /* 00404d3f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00404d42: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00404d43: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x404d48u); f_005dcb00();
    /* 00404d48: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00404d4b: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 00404d4e: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 00404d51: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x404d56u); f_0063aac0();
    /* 00404d56: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00404d58: mov dword ptr [ebp - 0x74], ecx */ W32((u32)(r_ebp+0xffffff8cu), r_ecx);
    /* 00404d5b: cmp dword ptr [ebp - 0x74], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff8cu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404d5f: je 0x404d80 */ if (fZ) goto L_00404d80;
L_00404d61:; BB(0x00404d61);
    /* 00404d61: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 00404d64: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x404d69u); f_0063aac0();
    /* 00404d69: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00404d6b: mov dword ptr [ebp - 0x78], edx */ W32((u32)(r_ebp+0xffffff88u), r_edx);
    /* 00404d6e: cmp dword ptr [ebp - 0x78], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff88u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404d72: je 0x404d80 */ if (fZ) goto L_00404d80;
L_00404d74:; BB(0x00404d74);
    /* 00404d74: mov dword ptr [ebp - 0xc0], 0 */ W32((u32)(r_ebp+0xffffff40u), 0x0u);
    /* 00404d7e: jmp 0x404d8a */ goto L_00404d8a;
L_00404d80:; BB(0x00404d80);
    /* 00404d80: mov dword ptr [ebp - 0xc0], 1 */ W32((u32)(r_ebp+0xffffff40u), 0x1u);
L_00404d8a:; BB(0x00404d8a);
    /* 00404d8a: movzx eax, byte ptr [ebp - 0xc0] */ r_eax = (u32)R8((u32)(r_ebp+0xffffff40u));
    /* 00404d91: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 00404d93: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 00404d95: and eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00404d98: add eax, 0x3ff */ {  u32 a = r_eax; u32 b = 0x3ffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00404d9d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00404da0: fld qword ptr [0x6b2c40] */ FPUSH(R_F64((u32)(0x6b2c40u)));
    /* 00404da6: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 00404da9: jmp 0x404fe4 */ goto L_00404fe4;
L_00404dae:; BB(0x00404dae);
    /* 00404dae: mov ecx, dword ptr [0x7902f0] */ r_ecx = R32((u32)(0x7902f0u));
    /* 00404db4: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00404db7: movzx edx, byte ptr [ecx + 0xb8] */ r_edx = (u32)R8((u32)(r_ecx+0xb8u));
    /* 00404dbe: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404dc0: je 0x404e3c */ if (fZ) goto L_00404e3c;
L_00404dc2:; BB(0x00404dc2);
    /* 00404dc2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00404dc5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00404dc6: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x404dcbu); f_005dcb00();
    /* 00404dcb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00404dce: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 00404dd4: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 00404dda: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x404ddfu); f_0063aac0();
    /* 00404ddf: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00404de1: mov dword ptr [ebp - 0x80], ecx */ W32((u32)(r_ebp+0xffffff80u), r_ecx);
    /* 00404de4: cmp dword ptr [ebp - 0x80], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff80u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404de8: je 0x404e12 */ if (fZ) goto L_00404e12;
L_00404dea:; BB(0x00404dea);
    /* 00404dea: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 00404df0: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x404df5u); f_0063aac0();
    /* 00404df5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00404df7: mov dword ptr [ebp - 0x84], edx */ W32((u32)(r_ebp+0xffffff7cu), r_edx);
    /* 00404dfd: cmp dword ptr [ebp - 0x84], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff7cu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404e04: je 0x404e12 */ if (fZ) goto L_00404e12;
L_00404e06:; BB(0x00404e06);
    /* 00404e06: mov dword ptr [ebp - 0xc4], 0 */ W32((u32)(r_ebp+0xffffff3cu), 0x0u);
    /* 00404e10: jmp 0x404e1c */ goto L_00404e1c;
L_00404e12:; BB(0x00404e12);
    /* 00404e12: mov dword ptr [ebp - 0xc4], 1 */ W32((u32)(r_ebp+0xffffff3cu), 0x1u);
L_00404e1c:; BB(0x00404e1c);
    /* 00404e1c: movzx eax, byte ptr [ebp - 0xc4] */ r_eax = (u32)R8((u32)(r_ebp+0xffffff3cu));
    /* 00404e23: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 00404e25: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 00404e27: and eax, 0x15 */ {  u32 a = r_eax; u32 b = 0x15u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00404e2a: add eax, 0x3fe */ {  u32 a = r_eax; u32 b = 0x3feu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00404e2f: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00404e32: fld1  */ FPUSH(1.0);
    /* 00404e34: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 00404e37: jmp 0x404fe4 */ goto L_00404fe4;
L_00404e3c:; BB(0x00404e3c);
    /* 00404e3c: cmp dword ptr [ebp - 0x54], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffacu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00404e40: jge 0x404ecb */ if ((fS==fO)) goto L_00404ecb;
L_00404e46:; BB(0x00404e46);
    /* 00404e46: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00404e49: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00404e4a: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x404e4fu); f_005dcb00();
    /* 00404e4f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00404e52: mov dword ptr [ebp - 0x94], eax */ W32((u32)(r_ebp+0xffffff6cu), r_eax);
    /* 00404e58: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 00404e5e: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x404e63u); f_0063aac0();
    /* 00404e63: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00404e65: mov dword ptr [ebp - 0x8c], edx */ W32((u32)(r_ebp+0xffffff74u), r_edx);
    /* 00404e6b: cmp dword ptr [ebp - 0x8c], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff74u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404e72: je 0x404e9c */ if (fZ) goto L_00404e9c;
L_00404e74:; BB(0x00404e74);
    /* 00404e74: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 00404e7a: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x404e7fu); f_0063aac0();
    /* 00404e7f: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00404e81: mov dword ptr [ebp - 0x90], eax */ W32((u32)(r_ebp+0xffffff70u), r_eax);
    /* 00404e87: cmp dword ptr [ebp - 0x90], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff70u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404e8e: je 0x404e9c */ if (fZ) goto L_00404e9c;
L_00404e90:; BB(0x00404e90);
    /* 00404e90: mov dword ptr [ebp - 0xc8], 0 */ W32((u32)(r_ebp+0xffffff38u), 0x0u);
    /* 00404e9a: jmp 0x404ea6 */ goto L_00404ea6;
L_00404e9c:; BB(0x00404e9c);
    /* 00404e9c: mov dword ptr [ebp - 0xc8], 1 */ W32((u32)(r_ebp+0xffffff38u), 0x1u);
L_00404ea6:; BB(0x00404ea6);
    /* 00404ea6: movzx ecx, byte ptr [ebp - 0xc8] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffff38u));
    /* 00404ead: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 00404eaf: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 00404eb1: and ecx, 0xffffffe6 */ {  u32 a = r_ecx; u32 b = 0xffffffe6u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00404eb4: add ecx, 0x402 */ {  u32 a = r_ecx; u32 b = 0x402u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00404eba: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00404ebd: fld qword ptr [0x6b2c38] */ FPUSH(R_F64((u32)(0x6b2c38u)));
    /* 00404ec3: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 00404ec6: jmp 0x404fe4 */ goto L_00404fe4;
L_00404ecb:; BB(0x00404ecb);
    /* 00404ecb: cmp dword ptr [ebp - 0x54], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffacu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00404ecf: jle 0x404f5a */ if ((fZ||fS!=fO)) goto L_00404f5a;
L_00404ed5:; BB(0x00404ed5);
    /* 00404ed5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00404ed8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00404ed9: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x404edeu); f_005dcb00();
    /* 00404ede: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00404ee1: mov dword ptr [ebp - 0xa0], eax */ W32((u32)(r_ebp+0xffffff60u), r_eax);
    /* 00404ee7: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 00404eed: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x404ef2u); f_0063aac0();
    /* 00404ef2: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00404ef4: mov dword ptr [ebp - 0x98], eax */ W32((u32)(r_ebp+0xffffff68u), r_eax);
    /* 00404efa: cmp dword ptr [ebp - 0x98], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff68u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404f01: je 0x404f2b */ if (fZ) goto L_00404f2b;
L_00404f03:; BB(0x00404f03);
    /* 00404f03: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 00404f09: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x404f0eu); f_0063aac0();
    /* 00404f0e: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00404f10: mov dword ptr [ebp - 0x9c], ecx */ W32((u32)(r_ebp+0xffffff64u), r_ecx);
    /* 00404f16: cmp dword ptr [ebp - 0x9c], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff64u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404f1d: je 0x404f2b */ if (fZ) goto L_00404f2b;
L_00404f1f:; BB(0x00404f1f);
    /* 00404f1f: mov dword ptr [ebp - 0xcc], 0 */ W32((u32)(r_ebp+0xffffff34u), 0x0u);
    /* 00404f29: jmp 0x404f35 */ goto L_00404f35;
L_00404f2b:; BB(0x00404f2b);
    /* 00404f2b: mov dword ptr [ebp - 0xcc], 1 */ W32((u32)(r_ebp+0xffffff34u), 0x1u);
L_00404f35:; BB(0x00404f35);
    /* 00404f35: movzx edx, byte ptr [ebp - 0xcc] */ r_edx = (u32)R8((u32)(r_ebp+0xffffff34u));
    /* 00404f3c: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); fC = (b != 0); }
    /* 00404f3e: sbb edx, edx */ { u32 c = fC; u32 a = r_edx; u32 b = r_edx; u32 r = (a - b - c) & 0xffffffffu; r_edx = r;  }
    /* 00404f40: and edx, 0xffffffec */ {  u32 a = r_edx; u32 b = 0xffffffecu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00404f43: add edx, 0x404 */ {  u32 a = r_edx; u32 b = 0x404u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00404f49: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 00404f4c: fld qword ptr [0x6b2c38] */ FPUSH(R_F64((u32)(0x6b2c38u)));
    /* 00404f52: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 00404f55: jmp 0x404fe4 */ goto L_00404fe4;
L_00404f5a:; BB(0x00404f5a);
    /* 00404f5a: jmp 0x404fe4 */ goto L_00404fe4;
L_00404f5f:; BB(0x00404f5f);
    /* 00404f5f: mov ecx, dword ptr [0x7902ec] */ r_ecx = R32((u32)(0x7902ecu));
    /* 00404f65: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x404f6au); f_005da7b0();
    /* 00404f6a: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00404f6d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404f6f: jne 0x404f81 */ if (!fZ) goto L_00404f81;
L_00404f71:; BB(0x00404f71);
    /* 00404f71: mov dword ptr [ebp - 0x20], 0x7ec */ W32((u32)(r_ebp+0xffffffe0u), 0x7ecu);
    /* 00404f78: fld qword ptr [0x6b2c38] */ FPUSH(R_F64((u32)(0x6b2c38u)));
    /* 00404f7e: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
L_00404f81:; BB(0x00404f81);
    /* 00404f81: jmp 0x404fe4 */ goto L_00404fe4;
L_00404f83:; BB(0x00404f83);
    /* 00404f83: mov ecx, dword ptr [0x7902ec] */ r_ecx = R32((u32)(0x7902ecu));
    /* 00404f89: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x404f8eu); f_005da7b0();
    /* 00404f8e: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00404f91: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404f93: jne 0x404fa5 */ if (!fZ) goto L_00404fa5;
L_00404f95:; BB(0x00404f95);
    /* 00404f95: mov dword ptr [ebp - 0x20], 0x7ed */ W32((u32)(r_ebp+0xffffffe0u), 0x7edu);
    /* 00404f9c: fld qword ptr [0x6b2c38] */ FPUSH(R_F64((u32)(0x6b2c38u)));
    /* 00404fa2: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
L_00404fa5:; BB(0x00404fa5);
    /* 00404fa5: jmp 0x404fe4 */ goto L_00404fe4;
L_00404fa7:; BB(0x00404fa7);
    /* 00404fa7: mov ecx, dword ptr [0x7902ec] */ r_ecx = R32((u32)(0x7902ecu));
    /* 00404fad: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x404fb2u); f_005da7b0();
    /* 00404fb2: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00404fb5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404fb7: jne 0x404fc9 */ if (!fZ) goto L_00404fc9;
L_00404fb9:; BB(0x00404fb9);
    /* 00404fb9: mov dword ptr [ebp - 0x20], 0x7ee */ W32((u32)(r_ebp+0xffffffe0u), 0x7eeu);
    /* 00404fc0: fld qword ptr [0x6b2c38] */ FPUSH(R_F64((u32)(0x6b2c38u)));
    /* 00404fc6: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
L_00404fc9:; BB(0x00404fc9);
    /* 00404fc9: jmp 0x404fe4 */ goto L_00404fe4;
L_00404fcb:; BB(0x00404fcb);
    /* 00404fcb: mov dword ptr [ebp - 0x20], 0x7ef */ W32((u32)(r_ebp+0xffffffe0u), 0x7efu);
    /* 00404fd2: jmp 0x404fe4 */ goto L_00404fe4;
L_00404fd4:; BB(0x00404fd4);
    /* 00404fd4: mov dword ptr [ebp - 0x20], 0x7f0 */ W32((u32)(r_ebp+0xffffffe0u), 0x7f0u);
    /* 00404fdb: jmp 0x404fe4 */ goto L_00404fe4;
L_00404fdd:; BB(0x00404fdd);
    /* 00404fdd: mov dword ptr [ebp - 0x20], 0x7f1 */ W32((u32)(r_ebp+0xffffffe0u), 0x7f1u);
L_00404fe4:; BB(0x00404fe4);
    /* 00404fe4: mov eax, dword ptr [0x7902f0] */ r_eax = R32((u32)(0x7902f0u));
    /* 00404fe9: mov dword ptr [ebp - 0xa4], eax */ W32((u32)(r_ebp+0xffffff5cu), r_eax);
    /* 00404fef: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 00404ff5: mov dword ptr [ecx + 0x10e0], 0xffffffff */ W32((u32)(r_ecx+0x10e0u), 0xffffffffu);
    /* 00404fff: mov edx, dword ptr [ebp - 0xa4] */ r_edx = R32((u32)(r_ebp+0xffffff5cu));
    /* 00405005: mov dword ptr [edx + 0x10e4], 0xffffffff */ W32((u32)(r_edx+0x10e4u), 0xffffffffu);
    /* 0040500f: cmp dword ptr [ebp - 0x44], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffbcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00405013: jne 0x40508a */ if (!fZ) goto L_0040508a;
L_00405015:; BB(0x00405015);
    /* 00405015: cmp dword ptr [ebp - 0x1c], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00405019: jne 0x40503e */ if (!fZ) goto L_0040503e;
L_0040501b:; BB(0x0040501b);
    /* 0040501b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040501d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040501f: mov eax, dword ptr [0x162ee80] */ r_eax = R32((u32)(0x162ee80u));
    /* 00405024: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00405027: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 0040502d: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00405030: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00405032: mov ecx, eax */ r_ecx = r_eax;
    /* 00405034: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00405037: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x405039u); call_ind(t); }
    /* 00405039: jmp 0x4051a3 */ goto L_004051a3;
L_0040503e:; BB(0x0040503e);
    /* 0040503e: cmp dword ptr [ebp - 0x48], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00405042: jne 0x405064 */ if (!fZ) goto L_00405064;
L_00405044:; BB(0x00405044);
    /* 00405044: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00405046: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0040504c: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0040504f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00405050: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00405053: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00405054: mov ecx, dword ptr [0x7902f8] */ r_ecx = R32((u32)(0x7902f8u));
    /* 0040505a: mov ecx, dword ptr [ecx + 0x50] */ r_ecx = R32((u32)(r_ecx+0x50u));
    /* 0040505d: call 0x5cd7c0 */ r_esp -= 4; W32(r_esp, 0x405062u); f_005cd7c0();
    /* 00405062: jmp 0x405085 */ goto L_00405085;
L_00405064:; BB(0x00405064);
    /* 00405064: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00405066: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 0040506c: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0040506f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00405070: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00405073: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00405074: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00405077: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00405078: mov eax, dword ptr [0x7902f8] */ r_eax = R32((u32)(0x7902f8u));
    /* 0040507d: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 00405080: call 0x5cd700 */ r_esp -= 4; W32(r_esp, 0x405085u); f_005cd700();
L_00405085:; BB(0x00405085);
    /* 00405085: jmp 0x4051a3 */ goto L_004051a3;
L_0040508a:; BB(0x0040508a);
    /* 0040508a: cmp dword ptr [ebp - 0x20], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040508e: je 0x405118 */ if (fZ) goto L_00405118;
L_00405094:; BB(0x00405094);
    /* 00405094: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0040509a: call 0x636730 */ r_esp -= 4; W32(r_esp, 0x40509fu); f_00636730();
    /* 0040509f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004050a1: je 0x405118 */ if (fZ) goto L_00405118;
L_004050a3:; BB(0x004050a3);
    /* 004050a3: cmp dword ptr [ebp - 0x44], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffbcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004050a7: jle 0x405137 */ if ((fZ||fS!=fO)) goto L_00405137;
L_004050ad:; BB(0x004050ad);
    /* 004050ad: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 004050b0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004050b1: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4050b6u); f_005dcb00();
    /* 004050b6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004050b9: mov dword ptr [ebp - 0xb0], eax */ W32((u32)(r_ebp+0xffffff50u), r_eax);
    /* 004050bf: mov ecx, dword ptr [ebp - 0xb0] */ r_ecx = R32((u32)(r_ebp+0xffffff50u));
    /* 004050c5: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x4050cau); f_0063aac0();
    /* 004050ca: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004050cc: mov dword ptr [ebp - 0xa8], edx */ W32((u32)(r_ebp+0xffffff58u), r_edx);
    /* 004050d2: cmp dword ptr [ebp - 0xa8], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff58u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004050d9: je 0x405103 */ if (fZ) goto L_00405103;
L_004050db:; BB(0x004050db);
    /* 004050db: mov ecx, dword ptr [ebp - 0xb0] */ r_ecx = R32((u32)(r_ebp+0xffffff50u));
    /* 004050e1: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x4050e6u); f_0063aac0();
    /* 004050e6: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 004050e8: mov dword ptr [ebp - 0xac], eax */ W32((u32)(r_ebp+0xffffff54u), r_eax);
    /* 004050ee: cmp dword ptr [ebp - 0xac], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff54u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004050f5: je 0x405103 */ if (fZ) goto L_00405103;
L_004050f7:; BB(0x004050f7);
    /* 004050f7: mov dword ptr [ebp - 0xd0], 0 */ W32((u32)(r_ebp+0xffffff30u), 0x0u);
    /* 00405101: jmp 0x40510d */ goto L_0040510d;
L_00405103:; BB(0x00405103);
    /* 00405103: mov dword ptr [ebp - 0xd0], 1 */ W32((u32)(r_ebp+0xffffff30u), 0x1u);
L_0040510d:; BB(0x0040510d);
    /* 0040510d: movzx ecx, byte ptr [ebp - 0xd0] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffff30u));
    /* 00405114: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00405116: je 0x405137 */ if (fZ) goto L_00405137;
L_00405118:; BB(0x00405118);
    /* 00405118: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040511a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040511c: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 00405122: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00405125: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0040512b: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0040512e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00405130: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00405133: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x405135u); call_ind(t); }
    /* 00405135: jmp 0x4051a3 */ goto L_004051a3;
L_00405137:; BB(0x00405137);
    /* 00405137: cmp dword ptr [ebp - 0x44], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffbcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040513b: je 0x405148 */ if (fZ) goto L_00405148;
L_0040513d:; BB(0x0040513d);
    /* 0040513d: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00405140: mov dword ptr [ebp - 0xd4], ecx */ W32((u32)(r_ebp+0xffffff2cu), r_ecx);
    /* 00405146: jmp 0x405159 */ goto L_00405159;
L_00405148:; BB(0x00405148);
    /* 00405148: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0040514e: call 0x636c50 */ r_esp -= 4; W32(r_esp, 0x405153u); f_00636c50();
    /* 00405153: mov dword ptr [ebp - 0xd4], eax */ W32((u32)(r_ebp+0xffffff2cu), r_eax);
L_00405159:; BB(0x00405159);
    /* 00405159: mov edx, dword ptr [ebp - 0xd4] */ r_edx = R32((u32)(r_ebp+0xffffff2cu));
    /* 0040515f: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 00405162: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00405165: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00405168: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0040516b: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 0040516e: fld qword ptr [ebp - 0x18] */ FPUSH(R_F64((u32)(r_ebp+0xffffffe8u)));
    /* 00405171: fstp qword ptr [ebp - 0x30] */ W_F64((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
    /* 00405174: fld qword ptr [ebp - 0x10] */ FPUSH(R_F64((u32)(r_ebp+0xfffffff0u)));
    /* 00405177: fstp qword ptr [ebp - 0x28] */ W_F64((u32)(r_ebp+0xffffffd8u), ST(0)); FPOP();
    /* 0040517a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040517c: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0040517e: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00405184: call 0x637810 */ r_esp -= 4; W32(r_esp, 0x405189u); f_00637810();
    /* 00405189: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040518a: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 00405190: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00405193: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00405194: lea ecx, [ebp - 0x40] */ r_ecx = (u32)(r_ebp+0xffffffc0u);
    /* 00405197: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00405198: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0040519e: call 0x639390 */ r_esp -= 4; W32(r_esp, 0x4051a3u); f_00639390();
L_004051a3:; BB(0x004051a3);
    /* 004051a3: mov esp, ebp */ r_esp = r_ebp;
    /* 004051a5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004051a6: ret  */ FN_RET(0x00404ba0); r_esp += 4; return;
}

