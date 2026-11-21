#include "protos.h"

void f_00664200(void) /* sub_664200 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00664200);
    /* 00664200: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00664201: mov ebp, esp */ r_ebp = r_esp;
    /* 00664203: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00664205: push 0x6acbd3 */ { u32 v = 0x6acbd3u; r_esp -= 4; W32(r_esp, v); }
    /* 0066420a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00664210: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00664211: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00664214: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00664219: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066421b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066421c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0066421f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00664225: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00664228: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0066422f: jmp 0x66423a */ goto L_0066423a;
L_00664231:; BB(0x00664231);
    /* 00664231: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00664234: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00664237: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_0066423a:; BB(0x0066423a);
    /* 0066423a: cmp dword ptr [ebp - 0x10], 0x1b */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x1bu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0066423e: jge 0x6642d6 */ if ((fS==fO)) goto L_006642d6;
L_00664244:; BB(0x00664244);
    /* 00664244: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00664247: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0066424a: cmp dword ptr [edx + ecx*4 + 0x5c], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x5cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066424f: jne 0x6642a0 */ if (!fZ) goto L_006642a0;
L_00664251:; BB(0x00664251);
    /* 00664251: push 0x188 */ { u32 v = 0x188u; r_esp -= 4; W32(r_esp, v); }
    /* 00664256: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x66425bu); f_00686d82();
    /* 0066425b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066425e: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00664261: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00664268: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066426c: je 0x66427f */ if (fZ) goto L_0066427f;
L_0066426e:; BB(0x0066426e);
    /* 0066426e: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00664271: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00664272: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00664275: call 0x663e60 */ r_esp -= 4; W32(r_esp, 0x66427au); f_00663e60();
    /* 0066427a: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0066427d: jmp 0x664286 */ goto L_00664286;
L_0066427f:; BB(0x0066427f);
    /* 0066427f: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_00664286:; BB(0x00664286);
    /* 00664286: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00664289: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0066428c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00664293: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00664296: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00664299: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0066429c: mov dword ptr [eax + edx*4 + 0x5c], ecx */ W32((u32)(r_eax+r_edx*4+0x5cu), r_ecx);
L_006642a0:; BB(0x006642a0);
    /* 006642a0: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006642a4: je 0x6642b6 */ if (fZ) goto L_006642b6;
L_006642a6:; BB(0x006642a6);
    /* 006642a6: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006642a9: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 006642ac: mov ecx, dword ptr [eax + edx*4 + 0x5c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x5cu));
    /* 006642b0: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006642b3: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
L_006642b6:; BB(0x006642b6);
    /* 006642b6: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 006642b9: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006642bc: mov edx, dword ptr [ecx + eax*4 + 0x5c] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x5cu));
    /* 006642c0: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 006642c3: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006642c6: mov ecx, dword ptr [ecx + eax*4 + 0x5c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x5cu));
    /* 006642ca: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 006642cc: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 006642cf: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6642d1u); call_ind(t); }
    /* 006642d1: jmp 0x664231 */ goto L_00664231;
L_006642d6:; BB(0x006642d6);
    /* 006642d6: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006642d9: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 006642dc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006642dd: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006642e0: call 0x664480 */ r_esp -= 4; W32(r_esp, 0x6642e5u); f_00664480();
    /* 006642e5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006642e8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006642ef: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006642f0: mov esp, ebp */ r_esp = r_ebp;
    /* 006642f2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006642f3: ret 8 */ FN_RET(0x00664200); r_esp += 12; return;
}

void f_00664300(void) /* sub_664300 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00664300);
    /* 00664300: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00664301: mov ebp, esp */ r_ebp = r_esp;
    /* 00664303: sub esp, 0x414 */ {  u32 a = r_esp; u32 b = 0x414u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00664309: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0066430e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00664310: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00664313: mov dword ptr [ebp - 0x414], ecx */ W32((u32)(r_ebp+0xfffffbecu), r_ecx);
    /* 00664319: mov byte ptr [ebp - 0x408], 0 */ W8((u32)(r_ebp+0xfffffbf8u), 0x0u);
    /* 00664320: push 0x3ff */ { u32 v = 0x3ffu; r_esp -= 4; W32(r_esp, v); }
    /* 00664325: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00664327: lea eax, [ebp - 0x407] */ r_eax = (u32)(r_ebp+0xfffffbf9u);
    /* 0066432d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066432e: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x664333u); f_00686fa2();
    /* 00664333: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00664336: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00664339: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066433a: push 0x6d61f8 */ { u32 v = 0x6d61f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0066433f: push 0x795fc0 */ { u32 v = 0x795fc0u; r_esp -= 4; W32(r_esp, v); }
    /* 00664344: push 0x6de52c */ { u32 v = 0x6de52cu; r_esp -= 4; W32(r_esp, v); }
    /* 00664349: lea edx, [ebp - 0x408] */ r_edx = (u32)(r_ebp+0xfffffbf8u);
    /* 0066434f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00664350: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x664356u); call_ind(t); }
    /* 00664356: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00664359: push 0x6c2d28 */ { u32 v = 0x6c2d28u; r_esp -= 4; W32(r_esp, v); }
    /* 0066435e: lea eax, [ebp - 0x408] */ r_eax = (u32)(r_ebp+0xfffffbf8u);
    /* 00664364: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00664365: call 0x5ea9c0 */ r_esp -= 4; W32(r_esp, 0x66436au); f_005ea9c0();
    /* 0066436a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066436d: mov dword ptr [ebp - 0x40c], eax */ W32((u32)(r_ebp+0xfffffbf4u), r_eax);
    /* 00664373: cmp dword ptr [ebp - 0x40c], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffbf4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066437a: je 0x6643d4 */ if (fZ) goto L_006643d4;
L_0066437c:; BB(0x0066437c);
    /* 0066437c: mov ecx, dword ptr [ebp - 0x40c] */ r_ecx = R32((u32)(r_ebp+0xfffffbf4u));
    /* 00664382: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00664383: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00664385: push 0x4c */ { u32 v = 0x4cu; r_esp -= 4; W32(r_esp, v); }
    /* 00664387: mov edx, dword ptr [ebp - 0x414] */ r_edx = R32((u32)(r_ebp+0xfffffbecu));
    /* 0066438d: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00664390: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00664391: call dword ptr [0x6b225c] */ { u32 t = R32((u32)(0x6b225cu)); r_esp -= 4; W32(r_esp, 0x664397u); call_ind(t); }
    /* 00664397: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066439a: mov eax, dword ptr [ebp - 0x40c] */ r_eax = R32((u32)(r_ebp+0xfffffbf4u));
    /* 006643a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006643a1: call dword ptr [0x6b2258] */ { u32 t = R32((u32)(0x6b2258u)); r_esp -= 4; W32(r_esp, 0x6643a7u); call_ind(t); }
    /* 006643a7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006643aa: mov dword ptr [ebp - 0x410], 0 */ W32((u32)(r_ebp+0xfffffbf0u), 0x0u);
    /* 006643b4: jmp 0x6643c5 */ goto L_006643c5;
L_006643b6:; BB(0x006643b6);
    /* 006643b6: mov ecx, dword ptr [ebp - 0x410] */ r_ecx = R32((u32)(r_ebp+0xfffffbf0u));
    /* 006643bc: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006643bf: mov dword ptr [ebp - 0x410], ecx */ W32((u32)(r_ebp+0xfffffbf0u), r_ecx);
L_006643c5:; BB(0x006643c5);
    /* 006643c5: cmp dword ptr [ebp - 0x410], 0xc */ {  u32 a = R32((u32)(r_ebp+0xfffffbf0u)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006643cc: jge 0x6643d0 */ if ((fS==fO)) goto L_006643d0;
L_006643ce:; BB(0x006643ce);
    /* 006643ce: jmp 0x6643b6 */ goto L_006643b6;
L_006643d0:; BB(0x006643d0);
    /* 006643d0: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 006643d2: jmp 0x6643d6 */ goto L_006643d6;
L_006643d4:; BB(0x006643d4);
    /* 006643d4: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_006643d6:; BB(0x006643d6);
    /* 006643d6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006643d9: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006643db: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x6643e0u); f_00686d72();
    /* 006643e0: mov esp, ebp */ r_esp = r_ebp;
    /* 006643e2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006643e3: ret 4 */ FN_RET(0x00664300); r_esp += 8; return;
}

void f_006643f0(void) /* sub_6643F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006643f0);
    /* 006643f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006643f1: mov ebp, esp */ r_ebp = r_esp;
    /* 006643f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006643f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006643f7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006643fa: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006643fd: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 00664400: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00664403: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00664406: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00664409: mov esp, ebp */ r_esp = r_ebp;
    /* 0066440b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066440c: ret 8 */ FN_RET(0x006643f0); r_esp += 12; return;
}

void f_00664410(void) /* sub_664410 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00664410);
    /* 00664410: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00664411: mov ebp, esp */ r_ebp = r_esp;
    /* 00664413: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00664416: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00664419: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00664420: jmp 0x66442b */ goto L_0066442b;
L_00664422:; BB(0x00664422);
    /* 00664422: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00664425: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00664428: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0066442b:; BB(0x0066442b);
    /* 0066442b: cmp dword ptr [ebp - 4], 0x1b */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1bu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0066442f: jge 0x66446d */ if ((fS==fO)) goto L_0066446d;
L_00664431:; BB(0x00664431);
    /* 00664431: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00664434: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00664437: cmp dword ptr [edx + ecx*4 + 0x5c], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x5cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066443c: je 0x66446b */ if (fZ) goto L_0066446b;
L_0066443e:; BB(0x0066443e);
    /* 0066443e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00664441: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00664442: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00664445: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00664448: mov eax, dword ptr [edx + ecx*4 + 0x5c] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x5cu));
    /* 0066444c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066444f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00664452: mov ecx, dword ptr [edx + ecx*4 + 0x5c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x5cu));
    /* 00664456: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00664458: mov edx, dword ptr [eax + 0x84] */ r_edx = R32((u32)(r_eax+0x84u));
    /* 0066445e: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x664460u); call_ind(t); }
    /* 00664460: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00664463: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00664465: je 0x66446b */ if (fZ) goto L_0066446b;
L_00664467:; BB(0x00664467);
    /* 00664467: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00664469: jmp 0x66446f */ goto L_0066446f;
L_0066446b:; BB(0x0066446b);
    /* 0066446b: jmp 0x664422 */ goto L_00664422;
L_0066446d:; BB(0x0066446d);
    /* 0066446d: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0066446f:; BB(0x0066446f);
    /* 0066446f: mov esp, ebp */ r_esp = r_ebp;
    /* 00664471: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00664472: ret 4 */ FN_RET(0x00664410); r_esp += 8; return;
}

void f_00664480(void) /* sub_664480 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00664480);
    /* 00664480: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00664481: mov ebp, esp */ r_ebp = r_esp;
    /* 00664483: sub esp, 0x7c */ {  u32 a = r_esp; u32 b = 0x7cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00664486: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00664487: mov dword ptr [ebp - 0x7c], ecx */ W32((u32)(r_ebp+0xffffff84u), r_ecx);
    /* 0066448a: mov dword ptr [ebp - 0x78], 0xa */ W32((u32)(r_ebp+0xffffff88u), 0xau);
    /* 00664491: mov dword ptr [ebp - 0x74], 1 */ W32((u32)(r_ebp+0xffffff8cu), 0x1u);
    /* 00664498: mov dword ptr [ebp - 0x70], 0xf */ W32((u32)(r_ebp+0xffffff90u), 0xfu);
    /* 0066449f: mov dword ptr [ebp - 0x6c], 0x14 */ W32((u32)(r_ebp+0xffffff94u), 0x14u);
    /* 006644a6: mov dword ptr [ebp - 0x68], 2 */ W32((u32)(r_ebp+0xffffff98u), 0x2u);
    /* 006644ad: mov dword ptr [ebp - 0x64], 0x3e */ W32((u32)(r_ebp+0xffffff9cu), 0x3eu);
    /* 006644b4: mov dword ptr [ebp - 0x60], 0x3d */ W32((u32)(r_ebp+0xffffffa0u), 0x3du);
    /* 006644bb: mov dword ptr [ebp - 0x5c], 0x3c */ W32((u32)(r_ebp+0xffffffa4u), 0x3cu);
    /* 006644c2: mov dword ptr [ebp - 0x58], 0x3e */ W32((u32)(r_ebp+0xffffffa8u), 0x3eu);
    /* 006644c9: mov dword ptr [ebp - 0x54], 0x3d */ W32((u32)(r_ebp+0xffffffacu), 0x3du);
    /* 006644d0: mov dword ptr [ebp - 0x50], 0x3c */ W32((u32)(r_ebp+0xffffffb0u), 0x3cu);
    /* 006644d7: mov dword ptr [ebp - 0x4c], 0x6e */ W32((u32)(r_ebp+0xffffffb4u), 0x6eu);
    /* 006644de: mov dword ptr [ebp - 0x48], 6 */ W32((u32)(r_ebp+0xffffffb8u), 0x6u);
    /* 006644e5: mov dword ptr [ebp - 0x44], 0x20 */ W32((u32)(r_ebp+0xffffffbcu), 0x20u);
    /* 006644ec: mov dword ptr [ebp - 0x40], 0x1f */ W32((u32)(r_ebp+0xffffffc0u), 0x1fu);
    /* 006644f3: mov dword ptr [ebp - 0x3c], 0x1e */ W32((u32)(r_ebp+0xffffffc4u), 0x1eu);
    /* 006644fa: mov dword ptr [ebp - 0x38], 0x34 */ W32((u32)(r_ebp+0xffffffc8u), 0x34u);
    /* 00664501: mov dword ptr [ebp - 0x34], 0x33 */ W32((u32)(r_ebp+0xffffffccu), 0x33u);
    /* 00664508: mov dword ptr [ebp - 0x30], 0x32 */ W32((u32)(r_ebp+0xffffffd0u), 0x32u);
    /* 0066450f: mov dword ptr [ebp - 0x2c], 0x2d */ W32((u32)(r_ebp+0xffffffd4u), 0x2du);
    /* 00664516: mov dword ptr [ebp - 0x28], 0x2c */ W32((u32)(r_ebp+0xffffffd8u), 0x2cu);
    /* 0066451d: mov dword ptr [ebp - 0x24], 0x2b */ W32((u32)(r_ebp+0xffffffdcu), 0x2bu);
    /* 00664524: mov dword ptr [ebp - 0x20], 0x2a */ W32((u32)(r_ebp+0xffffffe0u), 0x2au);
    /* 0066452b: mov dword ptr [ebp - 0x1c], 0x29 */ W32((u32)(r_ebp+0xffffffe4u), 0x29u);
    /* 00664532: mov dword ptr [ebp - 0x18], 0x28 */ W32((u32)(r_ebp+0xffffffe8u), 0x28u);
    /* 00664539: mov dword ptr [ebp - 0x14], 0x50 */ W32((u32)(r_ebp+0xffffffecu), 0x50u);
    /* 00664540: mov dword ptr [ebp - 0x10], 0x78 */ W32((u32)(r_ebp+0xfffffff0u), 0x78u);
    /* 00664547: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 0066454a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0066454d: mov dword ptr [eax + 0xc], ecx */ W32((u32)(r_eax+0xcu), r_ecx);
    /* 00664550: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00664557: jmp 0x664562 */ goto L_00664562;
L_00664559:; BB(0x00664559);
    /* 00664559: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066455c: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0066455f: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_00664562:; BB(0x00664562);
    /* 00664562: cmp dword ptr [ebp - 4], 0x1b */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1bu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00664566: jge 0x6645bc */ if ((fS==fO)) goto L_006645bc;
L_00664568:; BB(0x00664568);
    /* 00664568: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066456b: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 0066456e: cmp dword ptr [ecx + eax*4 + 0x5c], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x5cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00664573: je 0x6645ba */ if (fZ) goto L_006645ba;
L_00664575:; BB(0x00664575);
    /* 00664575: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 00664578: mov esi, dword ptr [edx + 0xc] */ r_esi = R32((u32)(r_edx+0xcu));
    /* 0066457b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066457e: add esi, dword ptr [ebp + eax*4 - 0x78] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+r_eax*4+0xffffff88u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00664582: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00664585: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00664586: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0066458c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0066458e: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00664594: mov edx, dword ptr [eax + 0x324] */ r_edx = R32((u32)(r_eax+0x324u));
    /* 0066459a: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x66459cu); call_ind(t); }
    /* 0066459c: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0066459e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0066459f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006645a2: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 006645a5: mov edx, dword ptr [ecx + eax*4 + 0x5c] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x5cu));
    /* 006645a9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006645ac: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 006645af: mov ecx, dword ptr [ecx + eax*4 + 0x5c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x5cu));
    /* 006645b3: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 006645b5: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 006645b8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6645bau); call_ind(t); }
L_006645ba:; BB(0x006645ba);
    /* 006645ba: jmp 0x664559 */ goto L_00664559;
L_006645bc:; BB(0x006645bc);
    /* 006645bc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006645bd: mov esp, ebp */ r_esp = r_ebp;
    /* 006645bf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006645c0: ret 4 */ FN_RET(0x00664480); r_esp += 8; return;
}

void f_00664630(void) /* sub_664630 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00664630);
    /* 00664630: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00664631: mov ebp, esp */ r_ebp = r_esp;
    /* 00664633: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00664636: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00664639: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00664640: jmp 0x66464b */ goto L_0066464b;
L_00664642:; BB(0x00664642);
    /* 00664642: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00664645: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00664648: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0066464b:; BB(0x0066464b);
    /* 0066464b: cmp dword ptr [ebp - 4], 0xc */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0066464f: jge 0x66465f */ if ((fS==fO)) goto L_0066465f;
L_00664651:; BB(0x00664651);
    /* 00664651: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00664654: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00664655: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00664658: call 0x6648a0 */ r_esp -= 4; W32(r_esp, 0x66465du); f_006648a0();
    /* 0066465d: jmp 0x664642 */ goto L_00664642;
L_0066465f:; BB(0x0066465f);
    /* 0066465f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00664661: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00664663: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00664666: call 0x665270 */ r_esp -= 4; W32(r_esp, 0x66466bu); f_00665270();
    /* 0066466b: mov esp, ebp */ r_esp = r_ebp;
    /* 0066466d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066466e: ret  */ FN_RET(0x00664630); r_esp += 4; return;
}

void f_00664670(void) /* sub_664670 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00664670);
    /* 00664670: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00664671: mov ebp, esp */ r_ebp = r_esp;
    /* 00664673: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00664676: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00664679: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00664680: jmp 0x66468b */ goto L_0066468b;
L_00664682:; BB(0x00664682);
    /* 00664682: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00664685: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00664688: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0066468b:; BB(0x0066468b);
    /* 0066468b: cmp dword ptr [ebp - 4], 0x1b */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1bu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0066468f: jge 0x6646ae */ if ((fS==fO)) goto L_006646ae;
L_00664691:; BB(0x00664691);
    /* 00664691: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00664694: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00664697: mov eax, dword ptr [edx + ecx*4 + 0x5c] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x5cu));
    /* 0066469b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066469e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006646a1: mov ecx, dword ptr [edx + ecx*4 + 0x5c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x5cu));
    /* 006646a5: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 006646a7: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 006646aa: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x6646acu); call_ind(t); }
    /* 006646ac: jmp 0x664682 */ goto L_00664682;
L_006646ae:; BB(0x006646ae);
    /* 006646ae: mov esp, ebp */ r_esp = r_ebp;
    /* 006646b0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006646b1: ret  */ FN_RET(0x00664670); r_esp += 4; return;
}

void f_006646c0(void) /* sub_6646C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006646c0);
    /* 006646c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006646c1: mov ebp, esp */ r_ebp = r_esp;
    /* 006646c3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006646c6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 006646c9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006646d0: jmp 0x6646db */ goto L_006646db;
L_006646d2:; BB(0x006646d2);
    /* 006646d2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006646d5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006646d8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_006646db:; BB(0x006646db);
    /* 006646db: cmp dword ptr [ebp - 4], 0x1b */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1bu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006646df: jge 0x6646fd */ if ((fS==fO)) goto L_006646fd;
L_006646e1:; BB(0x006646e1);
    /* 006646e1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006646e4: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006646e7: mov ecx, dword ptr [edx + ecx*4 + 0x5c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x5cu));
    /* 006646eb: call 0x5f54a0 */ r_esp -= 4; W32(r_esp, 0x6646f0u); f_005f54a0();
    /* 006646f0: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006646f3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006646f5: je 0x6646fb */ if (fZ) goto L_006646fb;
L_006646f7:; BB(0x006646f7);
    /* 006646f7: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006646f9: jmp 0x6646ff */ goto L_006646ff;
L_006646fb:; BB(0x006646fb);
    /* 006646fb: jmp 0x6646d2 */ goto L_006646d2;
L_006646fd:; BB(0x006646fd);
    /* 006646fd: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_006646ff:; BB(0x006646ff);
    /* 006646ff: mov esp, ebp */ r_esp = r_ebp;
    /* 00664701: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00664702: ret  */ FN_RET(0x006646c0); r_esp += 4; return;
}

void f_00664710(void) /* sub_664710 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00664710);
    /* 00664710: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00664711: mov ebp, esp */ r_ebp = r_esp;
    /* 00664713: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00664714: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00664717: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066471a: call 0x6646c0 */ r_esp -= 4; W32(r_esp, 0x66471fu); f_006646c0();
    /* 0066471f: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00664722: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 00664724: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 00664726: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00664729: mov esp, ebp */ r_esp = r_ebp;
    /* 0066472b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066472c: ret  */ FN_RET(0x00664710); r_esp += 4; return;
}

void f_00664730(void) /* sub_664730 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00664730);
    /* 00664730: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00664731: mov ebp, esp */ r_ebp = r_esp;
    /* 00664733: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00664734: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00664737: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0066473a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066473d: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00664740: mov dword ptr [ecx + eax*4 + 0x10], edx */ W32((u32)(r_ecx+r_eax*4+0x10u), r_edx);
    /* 00664744: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00664747: call 0x664630 */ r_esp -= 4; W32(r_esp, 0x66474cu); f_00664630();
    /* 0066474c: mov esp, ebp */ r_esp = r_ebp;
    /* 0066474e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066474f: ret 8 */ FN_RET(0x00664730); r_esp += 12; return;
}

void f_006647c0(void) /* sub_6647C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006647c0);
    /* 006647c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006647c1: mov ebp, esp */ r_ebp = r_esp;
    /* 006647c3: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006647c6: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 006647c9: mov dword ptr [ebp - 0x30], 2 */ W32((u32)(r_ebp+0xffffffd0u), 0x2u);
    /* 006647d0: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 006647d7: mov dword ptr [ebp - 0x28], 2 */ W32((u32)(r_ebp+0xffffffd8u), 0x2u);
    /* 006647de: mov dword ptr [ebp - 0x24], 3 */ W32((u32)(r_ebp+0xffffffdcu), 0x3u);
    /* 006647e5: mov dword ptr [ebp - 0x20], 3 */ W32((u32)(r_ebp+0xffffffe0u), 0x3u);
    /* 006647ec: mov dword ptr [ebp - 0x1c], 2 */ W32((u32)(r_ebp+0xffffffe4u), 0x2u);
    /* 006647f3: mov dword ptr [ebp - 0x18], 3 */ W32((u32)(r_ebp+0xffffffe8u), 0x3u);
    /* 006647fa: mov dword ptr [ebp - 0x14], 3 */ W32((u32)(r_ebp+0xffffffecu), 0x3u);
    /* 00664801: mov dword ptr [ebp - 0x10], 3 */ W32((u32)(r_ebp+0xfffffff0u), 0x3u);
    /* 00664808: mov dword ptr [ebp - 0xc], 3 */ W32((u32)(r_ebp+0xfffffff4u), 0x3u);
    /* 0066480f: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 00664816: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0066481d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00664820: mov eax, dword ptr [ebp + eax*4 - 0x30] */ r_eax = R32((u32)(r_ebp+r_eax*4+0xffffffd0u));
    /* 00664824: mov esp, ebp */ r_esp = r_ebp;
    /* 00664826: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00664827: ret 4 */ FN_RET(0x006647c0); r_esp += 8; return;
}

void f_00664830(void) /* sub_664830 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00664830);
    /* 00664830: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00664831: mov ebp, esp */ r_ebp = r_esp;
    /* 00664833: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00664836: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 00664839: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 00664840: mov dword ptr [ebp - 0x2c], 2 */ W32((u32)(r_ebp+0xffffffd4u), 0x2u);
    /* 00664847: mov dword ptr [ebp - 0x28], 3 */ W32((u32)(r_ebp+0xffffffd8u), 0x3u);
    /* 0066484e: mov dword ptr [ebp - 0x24], 5 */ W32((u32)(r_ebp+0xffffffdcu), 0x5u);
    /* 00664855: mov dword ptr [ebp - 0x20], 8 */ W32((u32)(r_ebp+0xffffffe0u), 0x8u);
    /* 0066485c: mov dword ptr [ebp - 0x1c], 0xb */ W32((u32)(r_ebp+0xffffffe4u), 0xbu);
    /* 00664863: mov dword ptr [ebp - 0x18], 0xd */ W32((u32)(r_ebp+0xffffffe8u), 0xdu);
    /* 0066486a: mov dword ptr [ebp - 0x14], 0x10 */ W32((u32)(r_ebp+0xffffffecu), 0x10u);
    /* 00664871: mov dword ptr [ebp - 0x10], 0x13 */ W32((u32)(r_ebp+0xfffffff0u), 0x13u);
    /* 00664878: mov dword ptr [ebp - 0xc], 0x16 */ W32((u32)(r_ebp+0xfffffff4u), 0x16u);
    /* 0066487f: mov dword ptr [ebp - 8], 0x19 */ W32((u32)(r_ebp+0xfffffff8u), 0x19u);
    /* 00664886: mov dword ptr [ebp - 4], 0x1a */ W32((u32)(r_ebp+0xfffffffcu), 0x1au);
    /* 0066488d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00664890: mov eax, dword ptr [ebp + eax*4 - 0x30] */ r_eax = R32((u32)(r_ebp+r_eax*4+0xffffffd0u));
    /* 00664894: mov esp, ebp */ r_esp = r_ebp;
    /* 00664896: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00664897: ret 4 */ FN_RET(0x00664830); r_esp += 8; return;
}

void f_006648a0(void) /* sub_6648A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006648a0);
    /* 006648a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006648a1: mov ebp, esp */ r_ebp = r_esp;
    /* 006648a3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006648a5: push 0x6acbf9 */ { u32 v = 0x6acbf9u; r_esp -= 4; W32(r_esp, v); }
    /* 006648aa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006648b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006648b1: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006648b4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006648b5: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 006648ba: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006648bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006648bd: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 006648c0: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 006648c6: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 006648c9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006648cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006648cd: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006648d0: call 0x6647c0 */ r_esp -= 4; W32(r_esp, 0x6648d5u); f_006647c0();
    /* 006648d5: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 006648d8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006648db: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006648dc: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006648df: call 0x664830 */ r_esp -= 4; W32(r_esp, 0x6648e4u); f_00664830();
    /* 006648e4: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006648e7: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006648ea: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006648eb: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006648ee: call 0x6651e0 */ r_esp -= 4; W32(r_esp, 0x6648f3u); f_006651e0();
    /* 006648f3: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006648f6: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 006648fd: jmp 0x664908 */ goto L_00664908;
L_006648ff:; BB(0x006648ff);
    /* 006648ff: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00664902: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00664905: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_00664908:; BB(0x00664908);
    /* 00664908: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0066490b: cmp ecx, dword ptr [ebp - 0x1c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0066490e: jge 0x664b71 */ if ((fS==fO)) goto L_00664b71;
L_00664914:; BB(0x00664914);
    /* 00664914: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00664918: jne 0x66496a */ if (!fZ) goto L_0066496a;
L_0066491a:; BB(0x0066491a);
    /* 0066491a: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0066491d: add edx, dword ptr [ebp - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00664920: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00664923: mov ecx, dword ptr [eax + edx*4 + 0x5c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x5cu));
    /* 00664927: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0066492a: add edx, dword ptr [ebp - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0066492d: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00664930: mov edx, dword ptr [eax + edx*4 + 0x5c] */ r_edx = R32((u32)(r_eax+r_edx*4+0x5cu));
    /* 00664934: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00664936: mov ecx, edx */ r_ecx = r_edx;
    /* 00664938: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 0066493b: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x66493du); call_ind(t); }
    /* 0066493d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066493f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00664942: add eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00664945: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00664948: mov ecx, dword ptr [ecx + eax*4 + 0x5c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x5cu));
    /* 0066494c: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x664951u); f_005eaf00();
    /* 00664951: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00664953: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00664956: add edx, dword ptr [ebp - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00664959: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0066495c: mov ecx, dword ptr [eax + edx*4 + 0x5c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x5cu));
    /* 00664960: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x664965u); f_005f5d50();
    /* 00664965: jmp 0x664b6c */ goto L_00664b6c;
L_0066496a:; BB(0x0066496a);
    /* 0066496a: cmp dword ptr [ebp - 0x10], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066496e: jne 0x664a22 */ if (!fZ) goto L_00664a22;
L_00664974:; BB(0x00664974);
    /* 00664974: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00664978: je 0x66498a */ if (fZ) goto L_0066498a;
L_0066497a:; BB(0x0066497a);
    /* 0066497a: cmp dword ptr [ebp + 8], 5 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066497e: je 0x66498a */ if (fZ) goto L_0066498a;
L_00664980:; BB(0x00664980);
    /* 00664980: cmp dword ptr [ebp + 8], 2 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00664984: jne 0x664a22 */ if (!fZ) goto L_00664a22;
L_0066498a:; BB(0x0066498a);
    /* 0066498a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0066498d: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 00664990: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00664994: je 0x6649a4 */ if (fZ) goto L_006649a4;
L_00664996:; BB(0x00664996);
    /* 00664996: cmp dword ptr [ebp - 0x2c], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066499a: je 0x6649a4 */ if (fZ) goto L_006649a4;
L_0066499c:; BB(0x0066499c);
    /* 0066499c: cmp dword ptr [ebp - 0x2c], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006649a0: je 0x6649e4 */ if (fZ) goto L_006649e4;
L_006649a2:; BB(0x006649a2);
    /* 006649a2: jmp 0x664a20 */ goto L_00664a20;
L_006649a4:; BB(0x006649a4);
    /* 006649a4: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006649a7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006649a8: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006649ab: add eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006649ae: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006649b1: mov ecx, dword ptr [ecx + eax*4 + 0x5c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x5cu));
    /* 006649b5: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x6649bau); f_005eaf00();
    /* 006649ba: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006649bc: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006649bf: add edx, dword ptr [ebp - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006649c2: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 006649c5: mov ecx, dword ptr [eax + edx*4 + 0x5c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x5cu));
    /* 006649c9: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006649cc: add edx, dword ptr [ebp - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006649cf: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 006649d2: mov edx, dword ptr [eax + edx*4 + 0x5c] */ r_edx = R32((u32)(r_eax+r_edx*4+0x5cu));
    /* 006649d6: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006649d8: mov ecx, edx */ r_ecx = r_edx;
    /* 006649da: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 006649e0: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x6649e2u); call_ind(t); }
    /* 006649e2: jmp 0x664a20 */ goto L_00664a20;
L_006649e4:; BB(0x006649e4);
    /* 006649e4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006649e7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006649e8: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006649eb: add ecx, dword ptr [ebp - 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006649ee: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006649f1: mov ecx, dword ptr [edx + ecx*4 + 0x5c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x5cu));
    /* 006649f5: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x6649fau); f_005eaf00();
    /* 006649fa: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006649fc: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006649ff: add eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00664a02: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00664a05: mov edx, dword ptr [ecx + eax*4 + 0x5c] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x5cu));
    /* 00664a09: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00664a0c: add eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00664a0f: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00664a12: mov ecx, dword ptr [ecx + eax*4 + 0x5c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x5cu));
    /* 00664a16: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00664a18: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00664a1e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x664a20u); call_ind(t); }
L_00664a20:; BB(0x00664a20);
    /* 00664a20: jmp 0x664a8d */ goto L_00664a8d;
L_00664a22:; BB(0x00664a22);
    /* 00664a22: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00664a25: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00664a26: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00664a29: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00664a2a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00664a2d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00664a2e: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00664a34: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00664a36: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00664a3c: mov eax, dword ptr [edx + 0x320] */ r_eax = R32((u32)(r_edx+0x320u));
    /* 00664a42: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x664a44u); call_ind(t); }
    /* 00664a44: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00664a45: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00664a48: add ecx, dword ptr [ebp - 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00664a4b: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00664a4e: mov ecx, dword ptr [edx + ecx*4 + 0x5c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x5cu));
    /* 00664a52: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x664a57u); f_005eaf00();
    /* 00664a57: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00664a5b: je 0x664a63 */ if (fZ) goto L_00664a63;
L_00664a5d:; BB(0x00664a5d);
    /* 00664a5d: cmp dword ptr [ebp + 8], 2 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00664a61: jne 0x664a8d */ if (!fZ) goto L_00664a8d;
L_00664a63:; BB(0x00664a63);
    /* 00664a63: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00664a66: call 0x664cb0 */ r_esp -= 4; W32(r_esp, 0x664a6bu); f_00664cb0();
    /* 00664a6b: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 00664a6e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00664a6f: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00664a72: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00664a75: mov eax, dword ptr [edx + ecx*4 + 0x5c] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x5cu));
    /* 00664a79: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00664a7c: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00664a7f: mov ecx, dword ptr [edx + ecx*4 + 0x5c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x5cu));
    /* 00664a83: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00664a85: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 00664a8b: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x664a8du); call_ind(t); }
L_00664a8d:; BB(0x00664a8d);
    /* 00664a8d: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00664a90: add esi, dword ptr [ebp - 0x10] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00664a93: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 00664a95: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00664a98: call 0x664830 */ r_esp -= 4; W32(r_esp, 0x664a9du); f_00664830();
    /* 00664a9d: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00664a9f: jne 0x664b6c */ if (!fZ) goto L_00664b6c;
L_00664aa5:; BB(0x00664aa5);
    /* 00664aa5: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00664aa8: add eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00664aab: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00664aae: mov ecx, dword ptr [ecx + eax*4 + 0x5c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x5cu));
    /* 00664ab2: call 0x5eb240 */ r_esp -= 4; W32(r_esp, 0x664ab7u); f_005eb240();
    /* 00664ab7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00664ab9: je 0x664b41 */ if (fZ) goto L_00664b41;
L_00664abf:; BB(0x00664abf);
    /* 00664abf: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00664ac2: add edx, dword ptr [ebp - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00664ac5: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00664ac8: mov ecx, dword ptr [eax + edx*4 + 0x5c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x5cu));
    /* 00664acc: cmp dword ptr [ecx + 0x180], 0 */ {  u32 a = R32((u32)(r_ecx+0x180u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00664ad3: jne 0x664b3f */ if (!fZ) goto L_00664b3f;
L_00664ad5:; BB(0x00664ad5);
    /* 00664ad5: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00664ad8: add edx, dword ptr [ebp - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00664adb: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00664ade: mov ecx, dword ptr [eax + edx*4 + 0x5c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x5cu));
    /* 00664ae2: mov dword ptr [ecx + 0x178], 0xa */ W32((u32)(r_ecx+0x178u), 0xau);
    /* 00664aec: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00664aee: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x664af3u); f_00686d82();
    /* 00664af3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00664af6: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00664af9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00664b00: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00664b04: je 0x664b15 */ if (fZ) goto L_00664b15;
L_00664b06:; BB(0x00664b06);
    /* 00664b06: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00664b08: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00664b0b: call 0x600a70 */ r_esp -= 4; W32(r_esp, 0x664b10u); f_00600a70();
    /* 00664b10: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00664b13: jmp 0x664b1c */ goto L_00664b1c;
L_00664b15:; BB(0x00664b15);
    /* 00664b15: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_00664b1c:; BB(0x00664b1c);
    /* 00664b1c: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00664b1f: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 00664b22: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00664b29: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00664b2c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00664b2d: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00664b30: add ecx, dword ptr [ebp - 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00664b33: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00664b36: mov ecx, dword ptr [edx + ecx*4 + 0x5c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x5cu));
    /* 00664b3a: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x664b3fu); f_005f5d50();
L_00664b3f:; BB(0x00664b3f);
    /* 00664b3f: jmp 0x664b6c */ goto L_00664b6c;
L_00664b41:; BB(0x00664b41);
    /* 00664b41: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00664b44: add eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00664b47: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00664b4a: mov edx, dword ptr [ecx + eax*4 + 0x5c] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x5cu));
    /* 00664b4e: mov dword ptr [edx + 0x178], 4 */ W32((u32)(r_edx+0x178u), 0x4u);
    /* 00664b58: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00664b5a: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00664b5d: add eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00664b60: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00664b63: mov ecx, dword ptr [ecx + eax*4 + 0x5c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x5cu));
    /* 00664b67: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x664b6cu); f_005f5d50();
L_00664b6c:; BB(0x00664b6c);
    /* 00664b6c: jmp 0x6648ff */ goto L_006648ff;
L_00664b71:; BB(0x00664b71);
    /* 00664b71: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00664b74: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00664b75: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00664b78: call 0x665040 */ r_esp -= 4; W32(r_esp, 0x664b7du); f_00665040();
    /* 00664b7d: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00664b84: jmp 0x664b8f */ goto L_00664b8f;
L_00664b86:; BB(0x00664b86);
    /* 00664b86: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00664b89: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00664b8c: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_00664b8f:; BB(0x00664b8f);
    /* 00664b8f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00664b92: cmp ecx, dword ptr [ebp - 0x1c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00664b95: jge 0x664c12 */ if ((fS==fO)) goto L_00664c12;
L_00664b97:; BB(0x00664b97);
    /* 00664b97: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00664b9b: jle 0x664c0d */ if ((fZ||fS!=fO)) goto L_00664c0d;
L_00664b9d:; BB(0x00664b9d);
    /* 00664b9d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00664ba0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00664ba1: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00664ba4: call 0x664d20 */ r_esp -= 4; W32(r_esp, 0x664ba9u); f_00664d20();
    /* 00664ba9: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 00664bac: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00664baf: add eax, dword ptr [ecx + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00664bb2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00664bb3: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00664bb6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00664bb7: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00664bba: call 0x664d00 */ r_esp -= 4; W32(r_esp, 0x664bbfu); f_00664d00();
    /* 00664bbf: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 00664bc2: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00664bc5: add eax, dword ptr [ecx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00664bc8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00664bc9: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00664bcc: add edx, dword ptr [ebp - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00664bcf: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00664bd2: mov ecx, dword ptr [eax + edx*4 + 0x5c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x5cu));
    /* 00664bd6: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00664bd9: add edx, dword ptr [ebp - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00664bdc: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00664bdf: mov edx, dword ptr [eax + edx*4 + 0x5c] */ r_edx = R32((u32)(r_eax+r_edx*4+0x5cu));
    /* 00664be3: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00664be5: mov ecx, edx */ r_ecx = r_edx;
    /* 00664be7: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 00664bea: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x664becu); call_ind(t); }
    /* 00664bec: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00664bef: add eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00664bf2: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00664bf5: mov edx, dword ptr [ecx + eax*4 + 0x5c] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x5cu));
    /* 00664bf9: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00664bfc: add eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00664bff: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00664c02: mov ecx, dword ptr [ecx + eax*4 + 0x5c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x5cu));
    /* 00664c06: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00664c08: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00664c0b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x664c0du); call_ind(t); }
L_00664c0d:; BB(0x00664c0d);
    /* 00664c0d: jmp 0x664b86 */ goto L_00664b86;
L_00664c12:; BB(0x00664c12);
    /* 00664c12: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00664c15: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00664c1c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00664c1d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00664c1e: mov esp, ebp */ r_esp = r_ebp;
    /* 00664c20: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00664c21: ret 4 */ FN_RET(0x006648a0); r_esp += 8; return;
}

void f_00664c90(void) /* sub_664C90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00664c90);
    /* 00664c90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00664c91: mov ebp, esp */ r_ebp = r_esp;
    /* 00664c93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00664c94: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00664c97: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00664c9a: mov cl, byte ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 00664c9d: mov byte ptr [eax + 0x40], cl */ W8((u32)(r_eax+0x40u), (u8)r_ecx);
    /* 00664ca0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00664ca3: call 0x664630 */ r_esp -= 4; W32(r_esp, 0x664ca8u); f_00664630();
    /* 00664ca8: mov esp, ebp */ r_esp = r_ebp;
    /* 00664caa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00664cab: ret 4 */ FN_RET(0x00664c90); r_esp += 8; return;
}

void f_00664d00(void) /* sub_664D00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00664d00);
    /* 00664d00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00664d01: mov ebp, esp */ r_ebp = r_esp;
    /* 00664d03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00664d04: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00664d07: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00664d0a: add eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00664d0d: mov al, byte ptr [eax + 0x41] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0x41u))) & 0xffu);
    /* 00664d10: mov esp, ebp */ r_esp = r_ebp;
    /* 00664d12: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00664d13: ret 4 */ FN_RET(0x00664d00); r_esp += 8; return;
}

void f_00664d20(void) /* sub_664D20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00664d20);
    /* 00664d20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00664d21: mov ebp, esp */ r_ebp = r_esp;
    /* 00664d23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00664d24: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00664d27: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00664d2a: add eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00664d2d: mov al, byte ptr [eax + 0x4d] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0x4du))) & 0xffu);
    /* 00664d30: mov esp, ebp */ r_esp = r_ebp;
    /* 00664d32: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00664d33: ret 4 */ FN_RET(0x00664d20); r_esp += 8; return;
}

void f_00664d40(void) /* sub_664D40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00664d40);
    /* 00664d40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00664d41: mov ebp, esp */ r_ebp = r_esp;
    /* 00664d43: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00664d46: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00664d49: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00664d4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00664d4d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00664d50: call 0x664830 */ r_esp -= 4; W32(r_esp, 0x664d55u); f_00664830();
    /* 00664d55: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00664d58: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00664d5b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00664d5c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00664d5f: call 0x6647c0 */ r_esp -= 4; W32(r_esp, 0x664d64u); f_006647c0();
    /* 00664d64: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00664d67: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00664d6a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00664d6d: mov ecx, dword ptr [eax + edx*4 + 0x5c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x5cu));
    /* 00664d71: call 0x5eb4b0 */ r_esp -= 4; W32(r_esp, 0x664d76u); f_005eb4b0();
    /* 00664d76: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00664d79: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00664d80: jmp 0x664d8b */ goto L_00664d8b;
L_00664d82:; BB(0x00664d82);
    /* 00664d82: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00664d85: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00664d88: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00664d8b:; BB(0x00664d8b);
    /* 00664d8b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00664d8e: cmp edx, dword ptr [ebp - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00664d91: jge 0x664dc1 */ if ((fS==fO)) goto L_00664dc1;
L_00664d93:; BB(0x00664d93);
    /* 00664d93: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00664d96: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00664d99: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00664d9c: mov ecx, dword ptr [ecx + eax*4 + 0x5c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x5cu));
    /* 00664da0: call 0x5eb4b0 */ r_esp -= 4; W32(r_esp, 0x664da5u); f_005eb4b0();
    /* 00664da5: cmp dword ptr [ebp - 0xc], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00664da8: jle 0x664dbf */ if ((fZ||fS!=fO)) goto L_00664dbf;
L_00664daa:; BB(0x00664daa);
    /* 00664daa: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00664dad: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00664db0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00664db3: mov ecx, dword ptr [eax + edx*4 + 0x5c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x5cu));
    /* 00664db7: call 0x5eb4b0 */ r_esp -= 4; W32(r_esp, 0x664dbcu); f_005eb4b0();
    /* 00664dbc: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_00664dbf:; BB(0x00664dbf);
    /* 00664dbf: jmp 0x664d82 */ goto L_00664d82;
L_00664dc1:; BB(0x00664dc1);
    /* 00664dc1: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00664dc4: imul eax, eax, -1 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xffffffffu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00664dc7: mov esp, ebp */ r_esp = r_ebp;
    /* 00664dc9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00664dca: ret 4 */ FN_RET(0x00664d40); r_esp += 8; return;
}

void f_00664dd0(void) /* sub_664DD0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00664dd0);
    /* 00664dd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00664dd1: mov ebp, esp */ r_ebp = r_esp;
    /* 00664dd3: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00664dd6: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00664dd9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00664ddc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00664ddd: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00664de0: call 0x664830 */ r_esp -= 4; W32(r_esp, 0x664de5u); f_00664830();
    /* 00664de5: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00664de8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00664deb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00664dec: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00664def: call 0x6647c0 */ r_esp -= 4; W32(r_esp, 0x664df4u); f_006647c0();
    /* 00664df4: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00664df7: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00664dfa: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00664dfd: mov ecx, dword ptr [eax + edx*4 + 0x5c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x5cu));
    /* 00664e01: call 0x5eb4b0 */ r_esp -= 4; W32(r_esp, 0x664e06u); f_005eb4b0();
    /* 00664e06: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00664e09: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00664e0c: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00664e0f: mov ecx, dword ptr [edx + ecx*4 + 0x5c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x5cu));
    /* 00664e13: call 0x5f5590 */ r_esp -= 4; W32(r_esp, 0x664e18u); f_005f5590();
    /* 00664e18: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00664e1b: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00664e22: jmp 0x664e2d */ goto L_00664e2d;
L_00664e24:; BB(0x00664e24);
    /* 00664e24: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00664e27: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00664e2a: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00664e2d:; BB(0x00664e2d);
    /* 00664e2d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00664e30: cmp ecx, dword ptr [ebp - 0x14] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00664e33: jge 0x664e8f */ if ((fS==fO)) goto L_00664e8f;
L_00664e35:; BB(0x00664e35);
    /* 00664e35: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00664e38: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00664e3b: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00664e3e: mov ecx, dword ptr [eax + edx*4 + 0x5c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x5cu));
    /* 00664e42: call 0x5eb4b0 */ r_esp -= 4; W32(r_esp, 0x664e47u); f_005eb4b0();
    /* 00664e47: cmp dword ptr [ebp - 0xc], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00664e4a: jge 0x664e61 */ if ((fS==fO)) goto L_00664e61;
L_00664e4c:; BB(0x00664e4c);
    /* 00664e4c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00664e4f: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00664e52: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00664e55: mov ecx, dword ptr [edx + ecx*4 + 0x5c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x5cu));
    /* 00664e59: call 0x5eb4b0 */ r_esp -= 4; W32(r_esp, 0x664e5eu); f_005eb4b0();
    /* 00664e5e: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_00664e61:; BB(0x00664e61);
    /* 00664e61: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00664e64: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00664e67: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00664e6a: mov ecx, dword ptr [ecx + eax*4 + 0x5c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x5cu));
    /* 00664e6e: call 0x5f5590 */ r_esp -= 4; W32(r_esp, 0x664e73u); f_005f5590();
    /* 00664e73: cmp dword ptr [ebp - 0x10], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00664e76: jge 0x664e8d */ if ((fS==fO)) goto L_00664e8d;
L_00664e78:; BB(0x00664e78);
    /* 00664e78: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00664e7b: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00664e7e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00664e81: mov ecx, dword ptr [eax + edx*4 + 0x5c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x5cu));
    /* 00664e85: call 0x5f5590 */ r_esp -= 4; W32(r_esp, 0x664e8au); f_005f5590();
    /* 00664e8a: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_00664e8d:; BB(0x00664e8d);
    /* 00664e8d: jmp 0x664e24 */ goto L_00664e24;
L_00664e8f:; BB(0x00664e8f);
    /* 00664e8f: mov ecx, 0x54 */ r_ecx = 0x54u;
    /* 00664e94: sub ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00664e97: sub ecx, dword ptr [ebp - 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r; fS = ((r >> 31) & 1); }
    /* 00664e9a: jns 0x664ea0 */ if (!fS) goto L_00664ea0;
L_00664e9c:; BB(0x00664e9c);
    /* 00664e9c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00664e9e: jmp 0x664eab */ goto L_00664eab;
L_00664ea0:; BB(0x00664ea0);
    /* 00664ea0: mov eax, 0x54 */ r_eax = 0x54u;
    /* 00664ea5: sub eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00664ea8: sub eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
L_00664eab:; BB(0x00664eab);
    /* 00664eab: mov esp, ebp */ r_esp = r_ebp;
    /* 00664ead: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00664eae: ret 4 */ FN_RET(0x00664dd0); r_esp += 8; return;
}

void f_00664ec0(void) /* sub_664EC0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00664ec0);
    /* 00664ec0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00664ec1: mov ebp, esp */ r_ebp = r_esp;
    /* 00664ec3: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00664ec6: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00664ec9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00664ecc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00664ecd: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00664ed0: call 0x664830 */ r_esp -= 4; W32(r_esp, 0x664ed5u); f_00664830();
    /* 00664ed5: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00664ed8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00664edb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00664edc: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00664edf: call 0x6647c0 */ r_esp -= 4; W32(r_esp, 0x664ee4u); f_006647c0();
    /* 00664ee4: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00664ee7: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00664eea: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00664eed: mov ecx, dword ptr [eax + edx*4 + 0x5c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x5cu));
    /* 00664ef1: call 0x5eb470 */ r_esp -= 4; W32(r_esp, 0x664ef6u); f_005eb470();
    /* 00664ef6: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00664ef9: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00664f00: jmp 0x664f0b */ goto L_00664f0b;
L_00664f02:; BB(0x00664f02);
    /* 00664f02: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00664f05: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00664f08: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00664f0b:; BB(0x00664f0b);
    /* 00664f0b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00664f0e: cmp edx, dword ptr [ebp - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00664f11: jge 0x664f41 */ if ((fS==fO)) goto L_00664f41;
L_00664f13:; BB(0x00664f13);
    /* 00664f13: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00664f16: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00664f19: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00664f1c: mov ecx, dword ptr [ecx + eax*4 + 0x5c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x5cu));
    /* 00664f20: call 0x5eb470 */ r_esp -= 4; W32(r_esp, 0x664f25u); f_005eb470();
    /* 00664f25: cmp dword ptr [ebp - 0xc], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00664f28: jge 0x664f3f */ if ((fS==fO)) goto L_00664f3f;
L_00664f2a:; BB(0x00664f2a);
    /* 00664f2a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00664f2d: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00664f30: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00664f33: mov ecx, dword ptr [eax + edx*4 + 0x5c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x5cu));
    /* 00664f37: call 0x5eb470 */ r_esp -= 4; W32(r_esp, 0x664f3cu); f_005eb470();
    /* 00664f3c: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_00664f3f:; BB(0x00664f3f);
    /* 00664f3f: jmp 0x664f02 */ goto L_00664f02;
L_00664f41:; BB(0x00664f41);
    /* 00664f41: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00664f44: imul eax, eax, -1 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xffffffffu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00664f47: mov esp, ebp */ r_esp = r_ebp;
    /* 00664f49: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00664f4a: ret 4 */ FN_RET(0x00664ec0); r_esp += 8; return;
}

void f_00664f50(void) /* sub_664F50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00664f50);
    /* 00664f50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00664f51: mov ebp, esp */ r_ebp = r_esp;
    /* 00664f53: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00664f56: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00664f59: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00664f5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00664f5d: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00664f60: call 0x664830 */ r_esp -= 4; W32(r_esp, 0x664f65u); f_00664830();
    /* 00664f65: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00664f68: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00664f6b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00664f6c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00664f6f: call 0x6647c0 */ r_esp -= 4; W32(r_esp, 0x664f74u); f_006647c0();
    /* 00664f74: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00664f77: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00664f7a: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00664f7d: mov ecx, dword ptr [eax + edx*4 + 0x5c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x5cu));
    /* 00664f81: call 0x5eb470 */ r_esp -= 4; W32(r_esp, 0x664f86u); f_005eb470();
    /* 00664f86: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00664f89: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00664f8c: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00664f8f: mov ecx, dword ptr [edx + ecx*4 + 0x5c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x5cu));
    /* 00664f93: call 0x5f5550 */ r_esp -= 4; W32(r_esp, 0x664f98u); f_005f5550();
    /* 00664f98: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00664f9b: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00664fa2: jmp 0x664fad */ goto L_00664fad;
L_00664fa4:; BB(0x00664fa4);
    /* 00664fa4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00664fa7: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00664faa: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00664fad:; BB(0x00664fad);
    /* 00664fad: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00664fb0: cmp ecx, dword ptr [ebp - 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00664fb3: jge 0x66500f */ if ((fS==fO)) goto L_0066500f;
L_00664fb5:; BB(0x00664fb5);
    /* 00664fb5: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00664fb8: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00664fbb: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00664fbe: mov ecx, dword ptr [eax + edx*4 + 0x5c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x5cu));
    /* 00664fc2: call 0x5eb470 */ r_esp -= 4; W32(r_esp, 0x664fc7u); f_005eb470();
    /* 00664fc7: cmp dword ptr [ebp - 0xc], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00664fca: jle 0x664fe1 */ if ((fZ||fS!=fO)) goto L_00664fe1;
L_00664fcc:; BB(0x00664fcc);
    /* 00664fcc: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00664fcf: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00664fd2: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00664fd5: mov ecx, dword ptr [edx + ecx*4 + 0x5c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x5cu));
    /* 00664fd9: call 0x5eb470 */ r_esp -= 4; W32(r_esp, 0x664fdeu); f_005eb470();
    /* 00664fde: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_00664fe1:; BB(0x00664fe1);
    /* 00664fe1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00664fe4: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00664fe7: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00664fea: mov ecx, dword ptr [ecx + eax*4 + 0x5c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x5cu));
    /* 00664fee: call 0x5f5550 */ r_esp -= 4; W32(r_esp, 0x664ff3u); f_005f5550();
    /* 00664ff3: cmp dword ptr [ebp - 0x14], eax */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00664ff6: jge 0x66500d */ if ((fS==fO)) goto L_0066500d;
L_00664ff8:; BB(0x00664ff8);
    /* 00664ff8: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00664ffb: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00664ffe: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00665001: mov ecx, dword ptr [eax + edx*4 + 0x5c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x5cu));
    /* 00665005: call 0x5f5550 */ r_esp -= 4; W32(r_esp, 0x66500au); f_005f5550();
    /* 0066500a: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_0066500d:; BB(0x0066500d);
    /* 0066500d: jmp 0x664fa4 */ goto L_00664fa4;
L_0066500f:; BB(0x0066500f);
    /* 0066500f: mov ecx, 0x64 */ r_ecx = 0x64u;
    /* 00665014: sub ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00665017: sub ecx, dword ptr [ebp - 0x14] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu; r_ecx = r; fS = ((r >> 31) & 1); }
    /* 0066501a: jns 0x665020 */ if (!fS) goto L_00665020;
L_0066501c:; BB(0x0066501c);
    /* 0066501c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066501e: jmp 0x66502b */ goto L_0066502b;
L_00665020:; BB(0x00665020);
    /* 00665020: mov eax, 0x64 */ r_eax = 0x64u;
    /* 00665025: sub eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00665028: sub eax, dword ptr [ebp - 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
L_0066502b:; BB(0x0066502b);
    /* 0066502b: mov esp, ebp */ r_esp = r_ebp;
    /* 0066502d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066502e: ret 4 */ FN_RET(0x00664f50); r_esp += 8; return;
}

