#include "protos.h"

void f_00562010(void) /* sub_562010 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00562010);
    /* 00562010: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00562011: mov ebp, esp */ r_ebp = r_esp;
    /* 00562013: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00562016: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00562019: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00562020: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00562027: mov ecx, dword ptr [0x79343c] */ r_ecx = R32((u32)(0x79343cu));
    /* 0056202d: call 0x569fe0 */ r_esp -= 4; W32(r_esp, 0x562032u); f_00569fe0();
    /* 00562032: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00562035: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00562038: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00562039: mov ecx, dword ptr [0x79343c] */ r_ecx = R32((u32)(0x79343cu));
    /* 0056203f: call 0x5698c0 */ r_esp -= 4; W32(r_esp, 0x562044u); f_005698c0();
    /* 00562044: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00562047: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056204b: je 0x5620a4 */ if (fZ) goto L_005620a4;
L_0056204d:; BB(0x0056204d);
    /* 0056204d: movzx ecx, byte ptr [ebp + 8] */ r_ecx = (u32)R8((u32)(r_ebp+0x8u));
    /* 00562051: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00562053: je 0x562065 */ if (fZ) goto L_00562065;
L_00562055:; BB(0x00562055);
    /* 00562055: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00562058: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00562059: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056205c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056205d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00562060: call 0x560360 */ r_esp -= 4; W32(r_esp, 0x562065u); f_00560360();
L_00562065:; BB(0x00562065);
    /* 00562065: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00562068: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00562069: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056206c: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 0056206f: call 0x566b00 */ r_esp -= 4; W32(r_esp, 0x562074u); f_00566b00();
    /* 00562074: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00562077: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00562078: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056207b: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0056207e: call 0x566ae0 */ r_esp -= 4; W32(r_esp, 0x562083u); f_00566ae0();
    /* 00562083: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00562086: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 00562089: call 0x5669c0 */ r_esp -= 4; W32(r_esp, 0x56208eu); f_005669c0();
    /* 0056208e: movzx eax, byte ptr [ebp + 8] */ r_eax = (u32)R8((u32)(r_ebp+0x8u));
    /* 00562092: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00562094: je 0x5620a2 */ if (fZ) goto L_005620a2;
L_00562096:; BB(0x00562096);
    /* 00562096: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00562099: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056209a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056209d: call 0x562a00 */ r_esp -= 4; W32(r_esp, 0x5620a2u); f_00562a00();
L_005620a2:; BB(0x005620a2);
    /* 005620a2: jmp 0x5620af */ goto L_005620af;
L_005620a4:; BB(0x005620a4);
    /* 005620a4: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005620a7: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 005620aa: call 0x566a20 */ r_esp -= 4; W32(r_esp, 0x5620afu); f_00566a20();
L_005620af:; BB(0x005620af);
    /* 005620af: mov esp, ebp */ r_esp = r_ebp;
    /* 005620b1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005620b2: ret 4 */ FN_RET(0x00562010); r_esp += 8; return;
}

void f_005620c0(void) /* sub_5620C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005620c0);
    /* 005620c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005620c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005620c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005620c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005620c7: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005620cb: je 0x562102 */ if (fZ) goto L_00562102;
L_005620cd:; BB(0x005620cd);
    /* 005620cd: push 0x31225a */ { u32 v = 0x31225au; r_esp -= 4; W32(r_esp, v); }
    /* 005620d2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005620d5: mov ecx, dword ptr [eax + 0xd8] */ r_ecx = R32((u32)(r_eax+0xd8u));
    /* 005620db: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x5620e0u); f_005eaf00();
    /* 005620e0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005620e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005620e4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005620e7: mov ecx, dword ptr [edx + 0xdc] */ r_ecx = R32((u32)(r_edx+0xdcu));
    /* 005620ed: call 0x5664c0 */ r_esp -= 4; W32(r_esp, 0x5620f2u); f_005664c0();
    /* 005620f2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005620f5: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 005620fb: call 0x566210 */ r_esp -= 4; W32(r_esp, 0x562100u); f_00566210();
    /* 00562100: jmp 0x562133 */ goto L_00562133;
L_00562102:; BB(0x00562102);
    /* 00562102: push 0x312257 */ { u32 v = 0x312257u; r_esp -= 4; W32(r_esp, v); }
    /* 00562107: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056210a: mov ecx, dword ptr [ecx + 0xd8] */ r_ecx = R32((u32)(r_ecx+0xd8u));
    /* 00562110: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x562115u); f_005eaf00();
    /* 00562115: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00562117: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056211a: mov ecx, dword ptr [edx + 0xdc] */ r_ecx = R32((u32)(r_edx+0xdcu));
    /* 00562120: call 0x5664c0 */ r_esp -= 4; W32(r_esp, 0x562125u); f_005664c0();
    /* 00562125: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00562128: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 0056212e: call 0x566310 */ r_esp -= 4; W32(r_esp, 0x562133u); f_00566310();
L_00562133:; BB(0x00562133);
    /* 00562133: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00562136: mov edx, dword ptr [ecx + 0xd8] */ r_edx = R32((u32)(r_ecx+0xd8u));
    /* 0056213c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056213f: mov ecx, dword ptr [eax + 0xd8] */ r_ecx = R32((u32)(r_eax+0xd8u));
    /* 00562145: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00562147: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0056214a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56214cu); call_ind(t); }
    /* 0056214c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056214e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00562151: call 0x562010 */ r_esp -= 4; W32(r_esp, 0x562156u); f_00562010();
    /* 00562156: mov esp, ebp */ r_esp = r_ebp;
    /* 00562158: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00562159: ret 4 */ FN_RET(0x005620c0); r_esp += 8; return;
}

void f_00562160(void) /* sub_562160 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00562160);
    /* 00562160: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00562161: mov ebp, esp */ r_ebp = r_esp;
    /* 00562163: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00562166: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00562169: mov ecx, dword ptr [0x79343c] */ r_ecx = R32((u32)(0x79343cu));
    /* 0056216f: call 0x569270 */ r_esp -= 4; W32(r_esp, 0x562174u); f_00569270();
    /* 00562174: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 00562179: mov ecx, dword ptr [eax + 0x4f14] */ r_ecx = R32((u32)(r_eax+0x4f14u));
    /* 0056217f: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00562182: mov edx, dword ptr [0x79343c] */ r_edx = R32((u32)(0x79343cu));
    /* 00562188: add edx, 0x24 */ {  u32 a = r_edx; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0056218b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056218c: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056218f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00562190: mov ecx, dword ptr [0x793444] */ r_ecx = R32((u32)(0x793444u));
    /* 00562196: call 0x55a4e0 */ r_esp -= 4; W32(r_esp, 0x56219bu); f_0055a4e0();
    /* 0056219b: mov byte ptr [ebp - 5], al */ W8((u32)(r_ebp+0xfffffffbu), (u8)r_eax);
    /* 0056219e: movsx ecx, byte ptr [ebp - 5] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebp+0xfffffffbu));
    /* 005621a2: cmp ecx, 0x2e */ {  u32 a = r_ecx; u32 b = 0x2eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005621a5: jne 0x5621bb */ if (!fZ) goto L_005621bb;
L_005621a7:; BB(0x005621a7);
    /* 005621a7: mov ecx, dword ptr [0x79343c] */ r_ecx = R32((u32)(0x79343cu));
    /* 005621ad: call 0x568890 */ r_esp -= 4; W32(r_esp, 0x5621b2u); f_00568890();
    /* 005621b2: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005621b5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005621b7: je 0x5621bb */ if (fZ) goto L_005621bb;
L_005621b9:; BB(0x005621b9);
    /* 005621b9: jmp 0x562230 */ goto L_00562230;
L_005621bb:; BB(0x005621bb);
    /* 005621bb: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005621c2: jmp 0x5621cd */ goto L_005621cd;
L_005621c4:; BB(0x005621c4);
    /* 005621c4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005621c7: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005621ca: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005621cd:; BB(0x005621cd);
    /* 005621cd: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005621d1: jge 0x56220a */ if ((fS==fO)) goto L_0056220a;
L_005621d3:; BB(0x005621d3);
    /* 005621d3: mov ecx, dword ptr [0x793444] */ r_ecx = R32((u32)(0x793444u));
    /* 005621d9: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005621dc: movsx edx, byte ptr [ecx + 0x14] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x14u));
    /* 005621e0: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005621e3: je 0x562208 */ if (fZ) goto L_00562208;
L_005621e5:; BB(0x005621e5);
    /* 005621e5: mov eax, dword ptr [0x793444] */ r_eax = R32((u32)(0x793444u));
    /* 005621ea: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005621ed: movsx ecx, byte ptr [eax + 0x14] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x14u));
    /* 005621f1: mov edx, dword ptr [0x79343c] */ r_edx = R32((u32)(0x79343cu));
    /* 005621f7: mov ax, word ptr [edx + ecx*2 + 0x24] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x24u))) & 0xffffu);
    /* 005621fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005621fd: mov ecx, dword ptr [0x79343c] */ r_ecx = R32((u32)(0x79343cu));
    /* 00562203: call 0x568ed0 */ r_esp -= 4; W32(r_esp, 0x562208u); f_00568ed0();
L_00562208:; BB(0x00562208);
    /* 00562208: jmp 0x5621c4 */ goto L_005621c4;
L_0056220a:; BB(0x0056220a);
    /* 0056220a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056220d: call 0x561f20 */ r_esp -= 4; W32(r_esp, 0x562212u); f_00561f20();
    /* 00562212: mov ecx, dword ptr [0x79343c] */ r_ecx = R32((u32)(0x79343cu));
    /* 00562218: mov ecx, dword ptr [ecx + 0x34] */ r_ecx = R32((u32)(r_ecx+0x34u));
    /* 0056221b: call 0x56ace0 */ r_esp -= 4; W32(r_esp, 0x562220u); f_0056ace0();
    /* 00562220: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00562222: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00562225: mov ecx, dword ptr [edx + 0xb8] */ r_ecx = R32((u32)(r_edx+0xb8u));
    /* 0056222b: call 0x5645c0 */ r_esp -= 4; W32(r_esp, 0x562230u); f_005645c0();
L_00562230:; BB(0x00562230);
    /* 00562230: mov esp, ebp */ r_esp = r_ebp;
    /* 00562232: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00562233: ret  */ FN_RET(0x00562160); r_esp += 4; return;
}

void f_00562240(void) /* sub_562240 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00562240);
    /* 00562240: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00562241: mov ebp, esp */ r_ebp = r_esp;
    /* 00562243: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00562246: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00562249: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00562250: jmp 0x56225b */ goto L_0056225b;
L_00562252:; BB(0x00562252);
    /* 00562252: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00562255: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00562258: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0056225b:; BB(0x0056225b);
    /* 0056225b: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056225f: jge 0x562281 */ if ((fS==fO)) goto L_00562281;
L_00562261:; BB(0x00562261);
    /* 00562261: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00562264: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00562267: mov eax, dword ptr [edx + ecx*4 + 8] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 0056226b: movzx ecx, word ptr [eax + 0x190] */ r_ecx = (u32)R16((u32)(r_eax+0x190u));
    /* 00562272: movzx edx, word ptr [ebp + 8] */ r_edx = (u32)R16((u32)(r_ebp+0x8u));
    /* 00562276: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00562278: jne 0x56227f */ if (!fZ) goto L_0056227f;
L_0056227a:; BB(0x0056227a);
    /* 0056227a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056227d: jmp 0x562284 */ goto L_00562284;
L_0056227f:; BB(0x0056227f);
    /* 0056227f: jmp 0x562252 */ goto L_00562252;
L_00562281:; BB(0x00562281);
    /* 00562281: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_00562284:; BB(0x00562284);
    /* 00562284: mov esp, ebp */ r_esp = r_ebp;
    /* 00562286: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00562287: ret 4 */ FN_RET(0x00562240); r_esp += 8; return;
}

void f_00562290(void) /* sub_562290 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00562290);
    /* 00562290: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00562291: mov ebp, esp */ r_ebp = r_esp;
    /* 00562293: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00562295: push 0x6a5944 */ { u32 v = 0x6a5944u; r_esp -= 4; W32(r_esp, v); }
    /* 0056229a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005622a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005622a1: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005622a4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005622a9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005622ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005622ac: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005622af: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005622b5: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005622b8: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 005622bd: mov cl, byte ptr [eax + 0x25] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x25u))) & 0xffu);
    /* 005622c0: mov byte ptr [ebp - 0x15], cl */ W8((u32)(r_ebp+0xffffffebu), (u8)r_ecx);
    /* 005622c3: movzx edx, byte ptr [ebp - 0x15] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffebu));
    /* 005622c7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005622c9: jne 0x5622e7 */ if (!fZ) goto L_005622e7;
L_005622cb:; BB(0x005622cb);
    /* 005622cb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005622cd: mov eax, dword ptr [0x793438] */ r_eax = R32((u32)(0x793438u));
    /* 005622d2: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005622d5: mov edx, dword ptr [0x793438] */ r_edx = R32((u32)(0x793438u));
    /* 005622db: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005622de: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005622e0: mov ecx, eax */ r_ecx = r_eax;
    /* 005622e2: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005622e5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5622e7u); call_ind(t); }
L_005622e7:; BB(0x005622e7);
    /* 005622e7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005622e9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005622ea: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 005622f0: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005622f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005622f4: fld1  */ FPUSH(1.0);
    /* 005622f6: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005622f9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005622fb: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005622fd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005622ff: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00562301: push 0x18a96 */ { u32 v = 0x18a96u; r_esp -= 4; W32(r_esp, v); }
    /* 00562306: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0056230c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0056230e: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00562314: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 0056231a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56231cu); call_ind(t); }
    /* 0056231c: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0056231f: mov edx, dword ptr [ecx + 0x74] */ r_edx = R32((u32)(r_ecx+0x74u));
    /* 00562322: mov dword ptr [edx + 0x178], 1 */ W32((u32)(r_edx+0x178u), 0x1u);
    /* 0056232c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056232e: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00562331: mov ecx, dword ptr [eax + 0x74] */ r_ecx = R32((u32)(r_eax+0x74u));
    /* 00562334: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00562337: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0056233a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0056233c: mov ecx, eax */ r_ecx = r_eax;
    /* 0056233e: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00562344: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x562346u); call_ind(t); }
    /* 00562346: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00562349: mov edx, dword ptr [ecx + 0x74] */ r_edx = R32((u32)(r_ecx+0x74u));
    /* 0056234c: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0056234f: mov ecx, dword ptr [eax + 0x74] */ r_ecx = R32((u32)(r_eax+0x74u));
    /* 00562352: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00562354: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00562357: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x562359u); call_ind(t); }
    /* 00562359: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0056235b: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x562360u); f_00686d82();
    /* 00562360: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00562363: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00562366: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0056236d: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00562371: je 0x56238a */ if (fZ) goto L_0056238a;
L_00562373:; BB(0x00562373);
    /* 00562373: mov ecx, dword ptr [0x793438] */ r_ecx = R32((u32)(0x793438u));
    /* 00562379: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0056237c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056237d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00562380: call 0x563370 */ r_esp -= 4; W32(r_esp, 0x562385u); f_00563370();
    /* 00562385: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00562388: jmp 0x562391 */ goto L_00562391;
L_0056238a:; BB(0x0056238a);
    /* 0056238a: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_00562391:; BB(0x00562391);
    /* 00562391: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00562394: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00562397: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0056239e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005623a1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005623a2: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005623a5: mov ecx, dword ptr [edx + 0x74] */ r_ecx = R32((u32)(r_edx+0x74u));
    /* 005623a8: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x5623adu); f_005f5d50();
    /* 005623ad: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005623b0: call 0x561950 */ r_esp -= 4; W32(r_esp, 0x5623b5u); f_00561950();
    /* 005623b5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005623b8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005623bf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005623c0: mov esp, ebp */ r_esp = r_ebp;
    /* 005623c2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005623c3: ret  */ FN_RET(0x00562290); r_esp += 4; return;
}

void f_005623d0(void) /* sub_5623D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005623d0);
    /* 005623d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005623d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005623d3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005623d6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005623d9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005623dc: call 0x5602a0 */ r_esp -= 4; W32(r_esp, 0x5623e1u); f_005602a0();
    /* 005623e1: mov eax, dword ptr [0x79343c] */ r_eax = R32((u32)(0x79343cu));
    /* 005623e6: cmp dword ptr [eax + 0x14], 0 */ {  u32 a = R32((u32)(r_eax+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005623ea: jne 0x562455 */ if (!fZ) goto L_00562455;
L_005623ec:; BB(0x005623ec);
    /* 005623ec: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005623ee: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005623f1: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 005623f7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005623f8: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 005623fd: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00562400: call 0x609870 */ r_esp -= 4; W32(r_esp, 0x562405u); f_00609870();
    /* 00562405: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00562407: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056240a: mov edx, dword ptr [ecx + 0xe4] */ r_edx = R32((u32)(r_ecx+0xe4u));
    /* 00562410: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00562411: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 00562416: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00562419: call 0x609870 */ r_esp -= 4; W32(r_esp, 0x56241eu); f_00609870();
    /* 0056241e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00562425: jmp 0x562430 */ goto L_00562430;
L_00562427:; BB(0x00562427);
    /* 00562427: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056242a: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0056242d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00562430:; BB(0x00562430);
    /* 00562430: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00562434: jge 0x562455 */ if ((fS==fO)) goto L_00562455;
L_00562436:; BB(0x00562436);
    /* 00562436: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00562439: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056243c: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 00562440: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00562443: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00562446: mov edx, dword ptr [eax + edx*4 + 8] */ r_edx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 0056244a: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0056244c: mov ecx, edx */ r_ecx = r_edx;
    /* 0056244e: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 00562451: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x562453u); call_ind(t); }
    /* 00562453: jmp 0x562427 */ goto L_00562427;
L_00562455:; BB(0x00562455);
    /* 00562455: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0056245c: jmp 0x562467 */ goto L_00562467;
L_0056245e:; BB(0x0056245e);
    /* 0056245e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00562461: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00562464: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00562467:; BB(0x00562467);
    /* 00562467: cmp dword ptr [ebp - 4], 0xb */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056246b: jge 0x562493 */ if ((fS==fO)) goto L_00562493;
L_0056246d:; BB(0x0056246d);
    /* 0056246d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00562470: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00562473: mov ecx, dword ptr [edx + ecx*4 + 0x8c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x8cu));
    /* 0056247a: call 0x562d90 */ r_esp -= 4; W32(r_esp, 0x56247fu); f_00562d90();
    /* 0056247f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00562482: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00562485: mov ecx, dword ptr [ecx + eax*4 + 0x8c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x8cu));
    /* 0056248c: call 0x563080 */ r_esp -= 4; W32(r_esp, 0x562491u); f_00563080();
    /* 00562491: jmp 0x56245e */ goto L_0056245e;
L_00562493:; BB(0x00562493);
    /* 00562493: mov esp, ebp */ r_esp = r_ebp;
    /* 00562495: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00562496: ret  */ FN_RET(0x005623d0); r_esp += 4; return;
}

void f_005624a0(void) /* sub_5624A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005624a0);
    /* 005624a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005624a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005624a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005624a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005624a7: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005624aa: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005624ad: mov edx, dword ptr [ecx + eax*4 + 8] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x8u));
    /* 005624b1: mov ax, word ptr [ebp + 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 005624b5: mov word ptr [edx + 0x190], ax */ W16((u32)(r_edx+0x190u), (u16)r_eax);
    /* 005624bc: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005624bf: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005624c2: mov eax, dword ptr [edx + ecx*4 + 8] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 005624c6: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005624c9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005624cc: mov ecx, dword ptr [edx + ecx*4 + 8] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 005624d0: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005624d2: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 005624d5: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5624d7u); call_ind(t); }
    /* 005624d7: mov esp, ebp */ r_esp = r_ebp;
    /* 005624d9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005624da: ret 8 */ FN_RET(0x005624a0); r_esp += 12; return;
}

void f_005624e0(void) /* sub_5624E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005624e0);
    /* 005624e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005624e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005624e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005624e5: push 0x6a596a */ { u32 v = 0x6a596au; r_esp -= 4; W32(r_esp, v); }
    /* 005624ea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005624f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005624f1: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005624f4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005624f9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005624fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005624fc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005624ff: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00562505: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00562508: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0056250f: jmp 0x56251a */ goto L_0056251a;
L_00562511:; BB(0x00562511);
    /* 00562511: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00562514: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00562517: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_0056251a:; BB(0x0056251a);
    /* 0056251a: cmp dword ptr [ebp - 0x10], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056251e: jge 0x56253d */ if ((fS==fO)) goto L_0056253d;
L_00562520:; BB(0x00562520);
    /* 00562520: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00562523: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00562526: mov eax, dword ptr [edx + ecx*4 + 0x4c] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x4cu));
    /* 0056252a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056252d: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00562530: mov ecx, dword ptr [edx + ecx*4 + 0x4c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x4cu));
    /* 00562534: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00562536: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 00562539: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x56253bu); call_ind(t); }
    /* 0056253b: jmp 0x562511 */ goto L_00562511;
L_0056253d:; BB(0x0056253d);
    /* 0056253d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056253f: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00562545: call 0x637810 */ r_esp -= 4; W32(r_esp, 0x56254au); f_00637810();
    /* 0056254a: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0056254d: cmp dword ptr [ebp - 0x14], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00562551: jg 0x56255c */ if ((!fZ&&fS==fO)) goto L_0056255c;
L_00562553:; BB(0x00562553);
    /* 00562553: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 0056255a: jmp 0x562581 */ goto L_00562581;
L_0056255c:; BB(0x0056255c);
    /* 0056255c: cmp dword ptr [ebp - 0x14], 6 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00562560: jg 0x56256b */ if ((!fZ&&fS==fO)) goto L_0056256b;
L_00562562:; BB(0x00562562);
    /* 00562562: mov dword ptr [ebp - 0x14], 1 */ W32((u32)(r_ebp+0xffffffecu), 0x1u);
    /* 00562569: jmp 0x562581 */ goto L_00562581;
L_0056256b:; BB(0x0056256b);
    /* 0056256b: cmp dword ptr [ebp - 0x14], 8 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056256f: jg 0x56257a */ if ((!fZ&&fS==fO)) goto L_0056257a;
L_00562571:; BB(0x00562571);
    /* 00562571: mov dword ptr [ebp - 0x14], 2 */ W32((u32)(r_ebp+0xffffffecu), 0x2u);
    /* 00562578: jmp 0x562581 */ goto L_00562581;
L_0056257a:; BB(0x0056257a);
    /* 0056257a: mov dword ptr [ebp - 0x14], 3 */ W32((u32)(r_ebp+0xffffffecu), 0x3u);
L_00562581:; BB(0x00562581);
    /* 00562581: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00562588: jmp 0x562593 */ goto L_00562593;
L_0056258a:; BB(0x0056258a);
    /* 0056258a: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056258d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00562590: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_00562593:; BB(0x00562593);
    /* 00562593: cmp dword ptr [ebp - 0x10], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00562597: jge 0x5626ff */ if ((fS==fO)) goto L_005626ff;
L_0056259d:; BB(0x0056259d);
    /* 0056259d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005625a0: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005625a3: mov ecx, dword ptr [edx + ecx*4 + 8] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 005625a7: call 0x5f54c0 */ r_esp -= 4; W32(r_esp, 0x5625acu); f_005f54c0();
    /* 005625ac: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005625af: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005625b1: je 0x5626fa */ if (fZ) goto L_005626fa;
L_005625b7:; BB(0x005625b7);
    /* 005625b7: cmp dword ptr [0x793434], 0 */ {  u32 a = R32((u32)(0x793434u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005625be: jne 0x5625ff */ if (!fZ) goto L_005625ff;
L_005625c0:; BB(0x005625c0);
    /* 005625c0: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005625c3: add ecx, 0xe0 */ {  u32 a = r_ecx; u32 b = 0xe0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005625c9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005625ca: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005625cb: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 005625d1: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005625d4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005625d5: fld1  */ FPUSH(1.0);
    /* 005625d7: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005625da: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005625dc: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005625de: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005625e0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005625e2: push 0x186a3 */ { u32 v = 0x186a3u; r_esp -= 4; W32(r_esp, v); }
    /* 005625e7: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 005625ed: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005625ef: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005625f5: mov edx, dword ptr [eax + 0x80] */ r_edx = R32((u32)(r_eax+0x80u));
    /* 005625fb: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5625fdu); call_ind(t); }
    /* 005625fd: jmp 0x56263b */ goto L_0056263b;
L_005625ff:; BB(0x005625ff);
    /* 005625ff: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00562602: add eax, 0xe4 */ {  u32 a = r_eax; u32 b = 0xe4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00562607: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00562608: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00562609: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 0056260f: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00562612: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00562613: fld1  */ FPUSH(1.0);
    /* 00562615: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00562618: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0056261a: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0056261c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056261e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00562620: push 0x186a3 */ { u32 v = 0x186a3u; r_esp -= 4; W32(r_esp, v); }
    /* 00562625: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0056262b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0056262d: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00562633: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 00562639: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56263bu); call_ind(t); }
L_0056263b:; BB(0x0056263b);
    /* 0056263b: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00562640: sub ecx, dword ptr [0x793434] */ {  u32 a = r_ecx; u32 b = R32((u32)(0x793434u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00562646: mov dword ptr [0x793434], ecx */ W32((u32)(0x793434u), r_ecx);
    /* 0056264c: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0056264f: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00562652: mov dword ptr [edx + 0xf8], eax */ W32((u32)(r_edx+0xf8u), r_eax);
    /* 00562658: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056265a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056265d: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00562660: mov eax, dword ptr [edx + ecx*4 + 0x1c] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x1cu));
    /* 00562664: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00562667: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0056266a: mov ecx, dword ptr [edx + ecx*4 + 0x1c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x1cu));
    /* 0056266e: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00562670: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 00562676: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x562678u); call_ind(t); }
    /* 00562678: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056267b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0056267e: mov edx, dword ptr [ecx + eax*4 + 0x1c] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x1cu));
    /* 00562682: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00562685: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00562688: mov ecx, dword ptr [ecx + eax*4 + 0x1c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x1cu));
    /* 0056268c: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0056268e: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00562691: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x562693u); call_ind(t); }
    /* 00562693: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00562695: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x56269au); f_00686d82();
    /* 0056269a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056269d: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005626a0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005626a7: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005626ab: je 0x5626be */ if (fZ) goto L_005626be;
L_005626ad:; BB(0x005626ad);
    /* 005626ad: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005626b0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005626b1: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005626b4: call 0x565210 */ r_esp -= 4; W32(r_esp, 0x5626b9u); f_00565210();
    /* 005626b9: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005626bc: jmp 0x5626c5 */ goto L_005626c5;
L_005626be:; BB(0x005626be);
    /* 005626be: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005626c5:; BB(0x005626c5);
    /* 005626c5: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005626c8: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 005626cb: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005626d2: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005626d5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005626d6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005626d9: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005626dc: mov ecx, dword ptr [edx + ecx*4 + 0x1c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x1cu));
    /* 005626e0: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x5626e5u); f_005f5d50();
    /* 005626e5: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005626e8: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005626eb: mov edx, dword ptr [ecx + eax*4 + 0x1c] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x1cu));
    /* 005626ef: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005626f2: mov dword ptr [edx + 0x178], eax */ W32((u32)(r_edx+0x178u), r_eax);
    /* 005626f8: jmp 0x562710 */ goto L_00562710;
L_005626fa:; BB(0x005626fa);
    /* 005626fa: jmp 0x56258a */ goto L_0056258a;
L_005626ff:; BB(0x005626ff);
    /* 005626ff: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00562701: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00562703: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00562706: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00562708: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0056270b: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0056270e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x562710u); call_ind(t); }
L_00562710:; BB(0x00562710);
    /* 00562710: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00562713: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0056271a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0056271b: mov esp, ebp */ r_esp = r_ebp;
    /* 0056271d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056271e: ret 4 */ FN_RET(0x005624e0); r_esp += 8; return;
}

void f_00562730(void) /* sub_562730 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00562730);
    /* 00562730: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00562731: mov ebp, esp */ r_ebp = r_esp;
    /* 00562733: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00562735: push 0x6a5990 */ { u32 v = 0x6a5990u; r_esp -= 4; W32(r_esp, v); }
    /* 0056273a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00562740: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00562741: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00562744: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00562749: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0056274b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056274c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0056274f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00562755: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00562758: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0056275a: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x56275fu); f_00686d82();
    /* 0056275f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00562762: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00562765: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0056276c: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00562770: je 0x562781 */ if (fZ) goto L_00562781;
L_00562772:; BB(0x00562772);
    /* 00562772: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00562774: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00562777: call 0x563440 */ r_esp -= 4; W32(r_esp, 0x56277cu); f_00563440();
    /* 0056277c: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0056277f: jmp 0x562788 */ goto L_00562788;
L_00562781:; BB(0x00562781);
    /* 00562781: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_00562788:; BB(0x00562788);
    /* 00562788: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0056278b: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0056278e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00562795: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00562798: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00562799: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0056279c: mov ecx, dword ptr [edx + 0x78] */ r_ecx = R32((u32)(r_edx+0x78u));
    /* 0056279f: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x5627a4u); f_005f5d50();
    /* 005627a4: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 005627a6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005627a8: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005627ab: call 0x5627c0 */ r_esp -= 4; W32(r_esp, 0x5627b0u); f_005627c0();
    /* 005627b0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005627b3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005627ba: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005627bb: mov esp, ebp */ r_esp = r_ebp;
    /* 005627bd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005627be: ret  */ FN_RET(0x00562730); r_esp += 4; return;
}

void f_005627c0(void) /* sub_5627C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005627c0);
    /* 005627c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005627c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005627c3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005627c5: push 0x6a59b6 */ { u32 v = 0x6a59b6u; r_esp -= 4; W32(r_esp, v); }
    /* 005627ca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005627d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005627d1: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005627d4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005627d9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005627db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005627dc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005627df: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005627e5: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005627e8: movzx eax, byte ptr [ebp + 8] */ r_eax = (u32)R8((u32)(r_ebp+0x8u));
    /* 005627ec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005627ee: je 0x56286a */ if (fZ) goto L_0056286a;
L_005627f0:; BB(0x005627f0);
    /* 005627f0: mov ecx, dword ptr [0x79343c] */ r_ecx = R32((u32)(0x79343cu));
    /* 005627f6: movzx edx, byte ptr [ecx + 0x2e] */ r_edx = (u32)R8((u32)(r_ecx+0x2eu));
    /* 005627fa: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005627fc: jne 0x56286a */ if (!fZ) goto L_0056286a;
L_005627fe:; BB(0x005627fe);
    /* 005627fe: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00562800: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x562805u); f_00686d82();
    /* 00562805: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00562808: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0056280b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00562812: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00562816: je 0x562827 */ if (fZ) goto L_00562827;
L_00562818:; BB(0x00562818);
    /* 00562818: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056281a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0056281d: call 0x600a70 */ r_esp -= 4; W32(r_esp, 0x562822u); f_00600a70();
    /* 00562822: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00562825: jmp 0x56282e */ goto L_0056282e;
L_00562827:; BB(0x00562827);
    /* 00562827: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_0056282e:; BB(0x0056282e);
    /* 0056282e: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00562831: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00562834: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0056283b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056283e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056283f: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00562842: mov ecx, dword ptr [edx + 0x84] */ r_ecx = R32((u32)(r_edx+0x84u));
    /* 00562848: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x56284du); f_005f5d50();
    /* 0056284d: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00562850: mov ecx, dword ptr [eax + 0x84] */ r_ecx = R32((u32)(r_eax+0x84u));
    /* 00562856: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00562859: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 0056285f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00562861: mov ecx, eax */ r_ecx = r_eax;
    /* 00562863: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00562866: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x562868u); call_ind(t); }
    /* 00562868: jmp 0x562893 */ goto L_00562893;
L_0056286a:; BB(0x0056286a);
    /* 0056286a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056286c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0056286f: mov ecx, dword ptr [ecx + 0x84] */ r_ecx = R32((u32)(r_ecx+0x84u));
    /* 00562875: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x56287au); f_005f5d50();
    /* 0056287a: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0056287d: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 00562883: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00562886: mov ecx, dword ptr [ecx + 0x84] */ r_ecx = R32((u32)(r_ecx+0x84u));
    /* 0056288c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0056288e: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00562891: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x562893u); call_ind(t); }
L_00562893:; BB(0x00562893);
    /* 00562893: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00562896: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0056289d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0056289e: mov esp, ebp */ r_esp = r_ebp;
    /* 005628a0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005628a1: ret 8 */ FN_RET(0x005627c0); r_esp += 12; return;
}

void f_005628b0(void) /* sub_5628B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005628b0);
    /* 005628b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005628b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005628b3: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005628b6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005628b9: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005628c0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005628c3: mov dword ptr [eax], 0x21e */ W32((u32)(r_eax), 0x21eu);
    /* 005628c9: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005628cc: mov dword ptr [ecx], 0x121 */ W32((u32)(r_ecx), 0x121u);
    /* 005628d2: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 005628d8: mov eax, dword ptr [edx + 0x4f10] */ r_eax = R32((u32)(r_edx+0x4f10u));
    /* 005628de: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005628e1: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005628e4: sub ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005628e7: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005628ea: cmp dword ptr [ebp - 0x10], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005628ee: ja 0x562952 */ if ((!fC&&!fZ)) goto L_00562952;
L_005628f0:; BB(0x005628f0);
    /* 005628f0: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005628f3: jmp dword ptr [edx*4 + 0x56297c] */ { u32 t = R32((u32)(r_edx*4+0x56297cu)); switch (t) { case 0x5628fau: goto L_005628fa; case 0x56290cu: goto L_0056290c; case 0x56291eu: goto L_0056291e; case 0x562952u: goto L_00562952; case 0x562930u: goto L_00562930; case 0x562942u: goto L_00562942; default: UNSUP(0x005628f3, "jump table entry is not a known target"); } }
L_005628fa:; BB(0x005628fa);
    /* 005628fa: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005628fd: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 00562903: mov dword ptr [ebp - 8], 0xfffffff5 */ W32((u32)(r_ebp+0xfffffff8u), 0xfffffff5u);
    /* 0056290a: jmp 0x562952 */ goto L_00562952;
L_0056290c:; BB(0x0056290c);
    /* 0056290c: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0056290f: mov dword ptr [ecx], 1 */ W32((u32)(r_ecx), 0x1u);
    /* 00562915: mov dword ptr [ebp - 8], 0xfffffffa */ W32((u32)(r_ebp+0xfffffff8u), 0xfffffffau);
    /* 0056291c: jmp 0x562952 */ goto L_00562952;
L_0056291e:; BB(0x0056291e);
    /* 0056291e: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00562921: mov dword ptr [edx], 2 */ W32((u32)(r_edx), 0x2u);
    /* 00562927: mov dword ptr [ebp - 8], 0xfffffffa */ W32((u32)(r_ebp+0xfffffff8u), 0xfffffffau);
    /* 0056292e: jmp 0x562952 */ goto L_00562952;
L_00562930:; BB(0x00562930);
    /* 00562930: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00562933: mov dword ptr [eax], 3 */ W32((u32)(r_eax), 0x3u);
    /* 00562939: mov dword ptr [ebp - 8], 0xfffffff8 */ W32((u32)(r_ebp+0xfffffff8u), 0xfffffff8u);
    /* 00562940: jmp 0x562952 */ goto L_00562952;
L_00562942:; BB(0x00562942);
    /* 00562942: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00562945: mov dword ptr [ecx], 4 */ W32((u32)(r_ecx), 0x4u);
    /* 0056294b: mov dword ptr [ebp - 8], 0xfffffff8 */ W32((u32)(r_ebp+0xfffffff8u), 0xfffffff8u);
L_00562952:; BB(0x00562952);
    /* 00562952: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 00562958: mov eax, dword ptr [edx + 0x4f14] */ r_eax = R32((u32)(r_edx+0x4f14u));
    /* 0056295e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00562961: cmp dword ptr [ebp - 4], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00562965: je 0x562969 */ if (fZ) goto L_00562969;
L_00562967:; BB(0x00562967);
    /* 00562967: jmp 0x562976 */ goto L_00562976;
L_00562969:; BB(0x00562969);
    /* 00562969: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0056296c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0056296e: add edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00562971: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00562974: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
L_00562976:; BB(0x00562976);
    /* 00562976: mov esp, ebp */ r_esp = r_ebp;
    /* 00562978: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00562979: ret 0xc */ FN_RET(0x005628b0); r_esp += 16; return;
}

void f_00562a00(void) /* sub_562A00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00562a00);
    /* 00562a00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00562a01: mov ebp, esp */ r_ebp = r_esp;
    /* 00562a03: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00562a06: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00562a09: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00562a0c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00562a0d: mov ecx, dword ptr [0x79343c] */ r_ecx = R32((u32)(0x79343cu));
    /* 00562a13: call 0x569f00 */ r_esp -= 4; W32(r_esp, 0x562a18u); f_00569f00();
    /* 00562a18: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00562a1b: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00562a1f: je 0x562ab9 */ if (fZ) goto L_00562ab9;
L_00562a25:; BB(0x00562a25);
    /* 00562a25: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00562a28: mov edx, dword ptr [ecx + 0xe8] */ r_edx = R32((u32)(r_ecx+0xe8u));
    /* 00562a2e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00562a2f: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00562a35: call 0x5f45a0 */ r_esp -= 4; W32(r_esp, 0x562a3au); f_005f45a0();
    /* 00562a3a: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00562a3d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00562a3f: jne 0x562a7e */ if (!fZ) goto L_00562a7e;
L_00562a41:; BB(0x00562a41);
    /* 00562a41: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00562a44: add ecx, 0xe8 */ {  u32 a = r_ecx; u32 b = 0xe8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00562a4a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00562a4b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00562a4c: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 00562a52: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00562a55: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00562a56: fld1  */ FPUSH(1.0);
    /* 00562a58: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00562a5b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00562a5d: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00562a5f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00562a61: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00562a63: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00562a66: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00562a67: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 00562a6c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00562a6e: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00562a74: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 00562a7a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x562a7cu); call_ind(t); }
    /* 00562a7c: jmp 0x562ab9 */ goto L_00562ab9;
L_00562a7e:; BB(0x00562a7e);
    /* 00562a7e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00562a81: add ecx, 0xec */ {  u32 a = r_ecx; u32 b = 0xecu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00562a87: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00562a88: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00562a89: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 00562a8f: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00562a92: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00562a93: fld1  */ FPUSH(1.0);
    /* 00562a95: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00562a98: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00562a9a: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00562a9c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00562a9e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00562aa0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00562aa3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00562aa4: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 00562aa9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00562aab: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00562ab1: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 00562ab7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x562ab9u); call_ind(t); }
L_00562ab9:; BB(0x00562ab9);
    /* 00562ab9: mov esp, ebp */ r_esp = r_ebp;
    /* 00562abb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00562abc: ret 4 */ FN_RET(0x00562a00); r_esp += 8; return;
}

void f_00562ac0(void) /* sub_562AC0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00562ac0);
    /* 00562ac0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00562ac1: mov ebp, esp */ r_ebp = r_esp;
    /* 00562ac3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00562ac4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00562ac7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00562aca: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 00562ad0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00562ad3: mov dword ptr [ecx + 4], 0 */ W32((u32)(r_ecx+0x4u), 0x0u);
    /* 00562ada: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00562add: mov dword ptr [edx + 8], 0 */ W32((u32)(r_edx+0x8u), 0x0u);
    /* 00562ae4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00562ae7: mov byte ptr [eax + 0x18], 0 */ W8((u32)(r_eax+0x18u), 0x0u);
    /* 00562aeb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00562aee: mov dword ptr [ecx + 0x14], 0 */ W32((u32)(r_ecx+0x14u), 0x0u);
    /* 00562af5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00562af8: mov dword ptr [edx + 0x1c], 0 */ W32((u32)(r_edx+0x1cu), 0x0u);
    /* 00562aff: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00562b02: mov dword ptr [eax + 0x20], 0 */ W32((u32)(r_eax+0x20u), 0x0u);
    /* 00562b09: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00562b0c: mov esp, ebp */ r_esp = r_ebp;
    /* 00562b0e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00562b0f: ret  */ FN_RET(0x00562ac0); r_esp += 4; return;
}

void f_00562b10(void) /* sub_562B10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00562b10);
    /* 00562b10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00562b11: mov ebp, esp */ r_ebp = r_esp;
    /* 00562b13: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00562b16: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00562b19: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00562b1c: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00562b1e: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00562b21: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00562b24: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 00562b27: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00562b2b: je 0x562b40 */ if (fZ) goto L_00562b40;
L_00562b2d:; BB(0x00562b2d);
    /* 00562b2d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00562b2f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00562b32: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00562b34: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00562b37: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00562b39: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x562b3bu); call_ind(t); }
    /* 00562b3b: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00562b3e: jmp 0x562b47 */ goto L_00562b47;
L_00562b40:; BB(0x00562b40);
    /* 00562b40: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_00562b47:; BB(0x00562b47);
    /* 00562b47: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00562b4a: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00562b4d: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00562b50: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00562b53: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00562b56: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00562b5a: je 0x562b82 */ if (fZ) goto L_00562b82;
L_00562b5c:; BB(0x00562b5c);
    /* 00562b5c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00562b5f: call 0x565630 */ r_esp -= 4; W32(r_esp, 0x562b64u); f_00565630();
    /* 00562b64: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00562b69: and ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00562b6c: je 0x562b7a */ if (fZ) goto L_00562b7a;
L_00562b6e:; BB(0x00562b6e);
    /* 00562b6e: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00562b71: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00562b72: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x562b77u); f_00686cae();
    /* 00562b77: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00562b7a:; BB(0x00562b7a);
    /* 00562b7a: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00562b7d: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00562b80: jmp 0x562b89 */ goto L_00562b89;
L_00562b82:; BB(0x00562b82);
    /* 00562b82: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00562b89:; BB(0x00562b89);
    /* 00562b89: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00562b8c: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 00562b8f: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00562b92: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00562b95: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00562b98: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00562b9c: je 0x562bc4 */ if (fZ) goto L_00562bc4;
L_00562b9e:; BB(0x00562b9e);
    /* 00562b9e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00562ba1: call 0x565630 */ r_esp -= 4; W32(r_esp, 0x562ba6u); f_00565630();
    /* 00562ba6: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00562bab: and ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00562bae: je 0x562bbc */ if (fZ) goto L_00562bbc;
L_00562bb0:; BB(0x00562bb0);
    /* 00562bb0: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00562bb3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00562bb4: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x562bb9u); f_00686cae();
    /* 00562bb9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00562bbc:; BB(0x00562bbc);
    /* 00562bbc: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00562bbf: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00562bc2: jmp 0x562bcb */ goto L_00562bcb;
L_00562bc4:; BB(0x00562bc4);
    /* 00562bc4: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00562bcb:; BB(0x00562bcb);
    /* 00562bcb: mov esp, ebp */ r_esp = r_ebp;
    /* 00562bcd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00562bce: ret  */ FN_RET(0x00562b10); r_esp += 4; return;
}

void f_00562bd0(void) /* sub_562BD0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00562bd0);
    /* 00562bd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00562bd1: mov ebp, esp */ r_ebp = r_esp;
    /* 00562bd3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00562bd5: push 0x6a59f2 */ { u32 v = 0x6a59f2u; r_esp -= 4; W32(r_esp, v); }
    /* 00562bda: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00562be0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00562be1: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00562be4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00562be9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00562beb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00562bec: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00562bef: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00562bf5: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 00562bf8: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00562bfb: call 0x562e40 */ r_esp -= 4; W32(r_esp, 0x562c00u); f_00562e40();
    /* 00562c00: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00562c03: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 00562c08: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x562c0du); f_00686d82();
    /* 00562c0d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00562c10: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00562c13: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00562c1a: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00562c1e: je 0x562c2d */ if (fZ) goto L_00562c2d;
L_00562c20:; BB(0x00562c20);
    /* 00562c20: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00562c23: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x562c28u); f_005eaaf0();
    /* 00562c28: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00562c2b: jmp 0x562c34 */ goto L_00562c34;
L_00562c2d:; BB(0x00562c2d);
    /* 00562c2d: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_00562c34:; BB(0x00562c34);
    /* 00562c34: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00562c37: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00562c3a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00562c41: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00562c44: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00562c47: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 00562c49: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00562c4b: push 0x2bc */ { u32 v = 0x2bcu; r_esp -= 4; W32(r_esp, v); }
    /* 00562c50: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00562c52: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00562c54: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00562c57: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 00562c5a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00562c5b: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00562c5e: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 00562c60: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x562c65u); f_005eae80();
    /* 00562c65: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00562c68: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 00562c6b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00562c6c: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00562c6f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00562c71: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00562c74: mov ecx, dword ptr [ecx] */ r_ecx = R32((u32)(r_ecx));
    /* 00562c76: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00562c78: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00562c7e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x562c80u); call_ind(t); }
    /* 00562c80: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00562c82: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x562c87u); f_00686d82();
    /* 00562c87: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00562c8a: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00562c8d: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00562c94: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00562c98: je 0x562ca7 */ if (fZ) goto L_00562ca7;
L_00562c9a:; BB(0x00562c9a);
    /* 00562c9a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00562c9d: call 0x5655d0 */ r_esp -= 4; W32(r_esp, 0x562ca2u); f_005655d0();
    /* 00562ca2: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00562ca5: jmp 0x562cae */ goto L_00562cae;
L_00562ca7:; BB(0x00562ca7);
    /* 00562ca7: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_00562cae:; BB(0x00562cae);
    /* 00562cae: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00562cb1: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00562cb4: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00562cbb: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00562cbe: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00562cc1: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00562cc4: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00562cc7: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00562cca: call 0x5656f0 */ r_esp -= 4; W32(r_esp, 0x562ccfu); f_005656f0();
    /* 00562ccf: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00562cd2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00562cd3: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00562cd6: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00562cd9: call 0x565a50 */ r_esp -= 4; W32(r_esp, 0x562cdeu); f_00565a50();
    /* 00562cde: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00562ce1: call 0x562eb0 */ r_esp -= 4; W32(r_esp, 0x562ce6u); f_00562eb0();
    /* 00562ce6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00562ce7: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00562cea: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00562ced: call 0x565cf0 */ r_esp -= 4; W32(r_esp, 0x562cf2u); f_00565cf0();
    /* 00562cf2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00562cf4: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00562cf7: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 00562cfa: call 0x5664c0 */ r_esp -= 4; W32(r_esp, 0x562cffu); f_005664c0();
    /* 00562cff: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00562d01: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x562d06u); f_00686d82();
    /* 00562d06: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00562d09: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00562d0c: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00562d13: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00562d17: je 0x562d26 */ if (fZ) goto L_00562d26;
L_00562d19:; BB(0x00562d19);
    /* 00562d19: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00562d1c: call 0x5655d0 */ r_esp -= 4; W32(r_esp, 0x562d21u); f_005655d0();
    /* 00562d21: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00562d24: jmp 0x562d2d */ goto L_00562d2d;
L_00562d26:; BB(0x00562d26);
    /* 00562d26: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_00562d2d:; BB(0x00562d2d);
    /* 00562d2d: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00562d30: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00562d33: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00562d3a: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00562d3d: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00562d40: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 00562d43: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00562d46: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00562d49: call 0x5656f0 */ r_esp -= 4; W32(r_esp, 0x562d4eu); f_005656f0();
    /* 00562d4e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00562d51: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00562d52: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00562d55: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 00562d58: call 0x565a50 */ r_esp -= 4; W32(r_esp, 0x562d5du); f_00565a50();
    /* 00562d5d: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00562d60: call 0x562f30 */ r_esp -= 4; W32(r_esp, 0x562d65u); f_00562f30();
    /* 00562d65: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00562d66: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00562d69: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00562d6c: call 0x565cf0 */ r_esp -= 4; W32(r_esp, 0x562d71u); f_00565cf0();
    /* 00562d71: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00562d73: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00562d76: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 00562d79: call 0x5664c0 */ r_esp -= 4; W32(r_esp, 0x562d7eu); f_005664c0();
    /* 00562d7e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00562d81: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00562d88: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00562d89: mov esp, ebp */ r_esp = r_ebp;
    /* 00562d8b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00562d8c: ret  */ FN_RET(0x00562bd0); r_esp += 4; return;
}

void f_00562d90(void) /* sub_562D90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00562d90);
    /* 00562d90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00562d91: mov ebp, esp */ r_ebp = r_esp;
    /* 00562d93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00562d94: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00562d97: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00562d9a: mov dword ptr [eax + 0x1c], 0 */ W32((u32)(r_eax+0x1cu), 0x0u);
    /* 00562da1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00562da4: mov dword ptr [ecx + 0x20], 0 */ W32((u32)(r_ecx+0x20u), 0x0u);
    /* 00562dab: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00562dae: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00562db1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00562db2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00562db5: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00562db8: call 0x5664c0 */ r_esp -= 4; W32(r_esp, 0x562dbdu); f_005664c0();
    /* 00562dbd: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00562dc0: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 00562dc3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00562dc4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00562dc7: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 00562dca: call 0x5664c0 */ r_esp -= 4; W32(r_esp, 0x562dcfu); f_005664c0();
    /* 00562dcf: mov esp, ebp */ r_esp = r_ebp;
    /* 00562dd1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00562dd2: ret  */ FN_RET(0x00562d90); r_esp += 4; return;
}

void f_00562de0(void) /* sub_562DE0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00562de0);
    /* 00562de0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00562de1: mov ebp, esp */ r_ebp = r_esp;
    /* 00562de3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00562de4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00562de7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00562dea: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 00562ded: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00562df0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00562df3: mov dword ptr [edx + 0x1c], ecx */ W32((u32)(r_edx+0x1cu), r_ecx);
    /* 00562df6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00562df9: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 00562dfc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00562dfd: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00562e00: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 00562e03: call 0x5664c0 */ r_esp -= 4; W32(r_esp, 0x562e08u); f_005664c0();
    /* 00562e08: mov esp, ebp */ r_esp = r_ebp;
    /* 00562e0a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00562e0b: ret  */ FN_RET(0x00562de0); r_esp += 4; return;
}

void f_00562e10(void) /* sub_562E10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00562e10);
    /* 00562e10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00562e11: mov ebp, esp */ r_ebp = r_esp;
    /* 00562e13: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00562e14: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00562e17: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00562e1a: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00562e1d: add ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00562e20: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00562e23: mov dword ptr [edx + 0x20], ecx */ W32((u32)(r_edx+0x20u), r_ecx);
    /* 00562e26: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00562e29: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00562e2c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00562e2d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00562e30: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 00562e33: call 0x5664c0 */ r_esp -= 4; W32(r_esp, 0x562e38u); f_005664c0();
    /* 00562e38: mov esp, ebp */ r_esp = r_ebp;
    /* 00562e3a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00562e3b: ret 4 */ FN_RET(0x00562e10); r_esp += 8; return;
}

void f_00562e40(void) /* sub_562E40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00562e40);
    /* 00562e40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00562e41: mov ebp, esp */ r_ebp = r_esp;
    /* 00562e43: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00562e46: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00562e49: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 00562e4e: mov ecx, dword ptr [eax + 0x4f14] */ r_ecx = R32((u32)(r_eax+0x4f14u));
    /* 00562e54: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00562e57: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00562e5a: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00562e5d: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00562e61: je 0x562e71 */ if (fZ) goto L_00562e71;
L_00562e63:; BB(0x00562e63);
    /* 00562e63: cmp dword ptr [ebp - 0xc], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00562e67: je 0x562e81 */ if (fZ) goto L_00562e81;
L_00562e69:; BB(0x00562e69);
    /* 00562e69: cmp dword ptr [ebp - 0xc], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00562e6d: je 0x562e8f */ if (fZ) goto L_00562e8f;
L_00562e6f:; BB(0x00562e6f);
    /* 00562e6f: jmp 0x562e9f */ goto L_00562e9f;
L_00562e71:; BB(0x00562e71);
    /* 00562e71: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00562e74: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00562e76: cmp dword ptr [eax + 0x14], 4 */ {  u32 a = R32((u32)(r_eax+0x14u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00562e7a: setg cl */ r_ecx = (r_ecx & 0xffffff00u) | ((((!fZ&&fS==fO)) ? 1 : 0) & 0xffu);
    /* 00562e7d: mov eax, ecx */ r_eax = r_ecx;
    /* 00562e7f: jmp 0x562ea1 */ goto L_00562ea1;
L_00562e81:; BB(0x00562e81);
    /* 00562e81: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00562e84: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00562e86: cmp dword ptr [edx + 0x14], 4 */ {  u32 a = R32((u32)(r_edx+0x14u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00562e8a: setg al */ r_eax = (r_eax & 0xffffff00u) | ((((!fZ&&fS==fO)) ? 1 : 0) & 0xffu);
    /* 00562e8d: jmp 0x562ea1 */ goto L_00562ea1;
L_00562e8f:; BB(0x00562e8f);
    /* 00562e8f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00562e92: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00562e94: cmp dword ptr [eax + 0x14], 5 */ {  u32 a = R32((u32)(r_eax+0x14u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00562e98: setg cl */ r_ecx = (r_ecx & 0xffffff00u) | ((((!fZ&&fS==fO)) ? 1 : 0) & 0xffu);
    /* 00562e9b: mov eax, ecx */ r_eax = r_ecx;
    /* 00562e9d: jmp 0x562ea1 */ goto L_00562ea1;
L_00562e9f:; BB(0x00562e9f);
    /* 00562e9f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00562ea1:; BB(0x00562ea1);
    /* 00562ea1: mov esp, ebp */ r_esp = r_ebp;
    /* 00562ea3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00562ea4: ret  */ FN_RET(0x00562e40); r_esp += 4; return;
}

void f_00562fb0(void) /* sub_562FB0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00562fb0);
    /* 00562fb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00562fb1: mov ebp, esp */ r_ebp = r_esp;
    /* 00562fb3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00562fb4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00562fb7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00562fba: movzx ecx, byte ptr [eax + 0x18] */ r_ecx = (u32)R8((u32)(r_eax+0x18u));
    /* 00562fbe: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00562fc0: jne 0x562fc4 */ if (!fZ) goto L_00562fc4;
L_00562fc2:; BB(0x00562fc2);
    /* 00562fc2: jmp 0x562feb */ goto L_00562feb;
L_00562fc4:; BB(0x00562fc4);
    /* 00562fc4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00562fc7: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00562fc9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00562fcc: mov ecx, dword ptr [ecx] */ r_ecx = R32((u32)(r_ecx));
    /* 00562fce: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00562fd0: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00562fd3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x562fd5u); call_ind(t); }
    /* 00562fd5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00562fd8: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00562fdb: call 0x566210 */ r_esp -= 4; W32(r_esp, 0x562fe0u); f_00566210();
    /* 00562fe0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00562fe3: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 00562fe6: call 0x566210 */ r_esp -= 4; W32(r_esp, 0x562febu); f_00566210();
L_00562feb:; BB(0x00562feb);
    /* 00562feb: mov esp, ebp */ r_esp = r_ebp;
    /* 00562fed: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00562fee: ret  */ FN_RET(0x00562fb0); r_esp += 4; return;
}

void f_00562ff0(void) /* sub_562FF0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00562ff0);
    /* 00562ff0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00562ff1: mov ebp, esp */ r_ebp = r_esp;
    /* 00562ff3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00562ff4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00562ff7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00562ffa: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00562ffc: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00562fff: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00563001: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00563003: mov ecx, eax */ r_ecx = r_eax;
    /* 00563005: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00563008: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56300au); call_ind(t); }
    /* 0056300a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056300d: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00563010: call 0x566310 */ r_esp -= 4; W32(r_esp, 0x563015u); f_00566310();
    /* 00563015: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00563018: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 0056301b: call 0x566310 */ r_esp -= 4; W32(r_esp, 0x563020u); f_00566310();
    /* 00563020: mov esp, ebp */ r_esp = r_ebp;
    /* 00563022: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00563023: ret  */ FN_RET(0x00562ff0); r_esp += 4; return;
}

