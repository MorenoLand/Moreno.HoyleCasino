#include "protos.h"

void f_0066f1a0(void) /* sub_66F1A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0066f1a0);
    /* 0066f1a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066f1a1: mov ebp, esp */ r_ebp = r_esp;
    /* 0066f1a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066f1a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0066f1a7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066f1aa: call 0x5eb570 */ r_esp -= 4; W32(r_esp, 0x66f1afu); f_005eb570();
    /* 0066f1af: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066f1b2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0066f1b4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066f1b7: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 0066f1ba: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66f1bcu); call_ind(t); }
    /* 0066f1bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066f1bd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066f1c0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066f1c2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066f1c5: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 0066f1c8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66f1cau); call_ind(t); }
    /* 0066f1ca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066f1cb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066f1ce: mov edx, dword ptr [ecx + 0x1f8] */ r_edx = R32((u32)(r_ecx+0x1f8u));
    /* 0066f1d4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066f1d7: mov ecx, dword ptr [eax + 0x1f8] */ r_ecx = R32((u32)(r_eax+0x1f8u));
    /* 0066f1dd: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0066f1df: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0066f1e2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66f1e4u); call_ind(t); }
    /* 0066f1e4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066f1e7: mov edx, dword ptr [ecx + 0x1f8] */ r_edx = R32((u32)(r_ecx+0x1f8u));
    /* 0066f1ed: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066f1f0: mov ecx, dword ptr [eax + 0x1f8] */ r_ecx = R32((u32)(r_eax+0x1f8u));
    /* 0066f1f6: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0066f1f8: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0066f1fb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66f1fdu); call_ind(t); }
    /* 0066f1fd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066f200: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066f202: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066f205: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 0066f208: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66f20au); call_ind(t); }
    /* 0066f20a: add eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0066f20d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066f20e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066f211: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066f213: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066f216: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 0066f219: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66f21bu); call_ind(t); }
    /* 0066f21b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066f21c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066f21f: mov edx, dword ptr [ecx + 0x1fc] */ r_edx = R32((u32)(r_ecx+0x1fcu));
    /* 0066f225: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066f228: mov ecx, dword ptr [eax + 0x1fc] */ r_ecx = R32((u32)(r_eax+0x1fcu));
    /* 0066f22e: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0066f230: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0066f233: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66f235u); call_ind(t); }
    /* 0066f235: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066f238: mov edx, dword ptr [ecx + 0x1fc] */ r_edx = R32((u32)(r_ecx+0x1fcu));
    /* 0066f23e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066f241: mov ecx, dword ptr [eax + 0x1fc] */ r_ecx = R32((u32)(r_eax+0x1fcu));
    /* 0066f247: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0066f249: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0066f24c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66f24eu); call_ind(t); }
    /* 0066f24e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066f251: cmp dword ptr [ecx + 0x200], 0 */ {  u32 a = R32((u32)(r_ecx+0x200u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066f258: je 0x66f2ad */ if (fZ) goto L_0066f2ad;
L_0066f25a:; BB(0x0066f25a);
    /* 0066f25a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066f25d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0066f25f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066f262: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 0066f265: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x66f267u); call_ind(t); }
    /* 0066f267: add eax, 0x2e */ {  u32 a = r_eax; u32 b = 0x2eu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0066f26a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066f26b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066f26e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0066f270: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066f273: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 0066f276: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66f278u); call_ind(t); }
    /* 0066f278: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066f279: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066f27c: mov edx, dword ptr [ecx + 0x200] */ r_edx = R32((u32)(r_ecx+0x200u));
    /* 0066f282: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066f285: mov ecx, dword ptr [eax + 0x200] */ r_ecx = R32((u32)(r_eax+0x200u));
    /* 0066f28b: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0066f28d: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0066f290: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66f292u); call_ind(t); }
    /* 0066f292: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066f295: mov edx, dword ptr [ecx + 0x200] */ r_edx = R32((u32)(r_ecx+0x200u));
    /* 0066f29b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066f29e: mov ecx, dword ptr [eax + 0x200] */ r_ecx = R32((u32)(r_eax+0x200u));
    /* 0066f2a4: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0066f2a6: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0066f2a9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66f2abu); call_ind(t); }
    /* 0066f2ab: jmp 0x66f30a */ goto L_0066f30a;
L_0066f2ad:; BB(0x0066f2ad);
    /* 0066f2ad: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066f2b0: cmp dword ptr [ecx + 0x208], 0 */ {  u32 a = R32((u32)(r_ecx+0x208u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066f2b7: je 0x66f30a */ if (fZ) goto L_0066f30a;
L_0066f2b9:; BB(0x0066f2b9);
    /* 0066f2b9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066f2bc: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0066f2be: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066f2c1: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 0066f2c4: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x66f2c6u); call_ind(t); }
    /* 0066f2c6: add eax, 0x2e */ {  u32 a = r_eax; u32 b = 0x2eu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0066f2c9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066f2ca: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066f2cd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0066f2cf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066f2d2: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 0066f2d5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66f2d7u); call_ind(t); }
    /* 0066f2d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066f2d8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066f2db: mov edx, dword ptr [ecx + 0x208] */ r_edx = R32((u32)(r_ecx+0x208u));
    /* 0066f2e1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066f2e4: mov ecx, dword ptr [eax + 0x208] */ r_ecx = R32((u32)(r_eax+0x208u));
    /* 0066f2ea: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0066f2ec: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0066f2ef: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66f2f1u); call_ind(t); }
    /* 0066f2f1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066f2f4: mov edx, dword ptr [ecx + 0x208] */ r_edx = R32((u32)(r_ecx+0x208u));
    /* 0066f2fa: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066f2fd: mov ecx, dword ptr [eax + 0x208] */ r_ecx = R32((u32)(r_eax+0x208u));
    /* 0066f303: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0066f305: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0066f308: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66f30au); call_ind(t); }
L_0066f30a:; BB(0x0066f30a);
    /* 0066f30a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066f30d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066f30f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066f312: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 0066f315: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66f317u); call_ind(t); }
    /* 0066f317: add eax, 0x17c */ {  u32 a = r_eax; u32 b = 0x17cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0066f31c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066f31d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066f320: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066f322: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066f325: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 0066f328: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66f32au); call_ind(t); }
    /* 0066f32a: add eax, 0x186 */ {  u32 a = r_eax; u32 b = 0x186u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0066f32f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066f330: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066f333: mov edx, dword ptr [ecx + 0x204] */ r_edx = R32((u32)(r_ecx+0x204u));
    /* 0066f339: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066f33c: mov ecx, dword ptr [eax + 0x204] */ r_ecx = R32((u32)(r_eax+0x204u));
    /* 0066f342: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0066f344: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0066f347: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66f349u); call_ind(t); }
    /* 0066f349: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066f34c: mov edx, dword ptr [ecx + 0x204] */ r_edx = R32((u32)(r_ecx+0x204u));
    /* 0066f352: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066f355: mov ecx, dword ptr [eax + 0x204] */ r_ecx = R32((u32)(r_eax+0x204u));
    /* 0066f35b: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0066f35d: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0066f360: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66f362u); call_ind(t); }
    /* 0066f362: mov esp, ebp */ r_esp = r_ebp;
    /* 0066f364: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066f365: ret  */ FN_RET(0x0066f1a0); r_esp += 4; return;
}

void f_0066f370(void) /* sub_66F370 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0066f370);
    /* 0066f370: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066f371: mov ebp, esp */ r_ebp = r_esp;
    /* 0066f373: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066f376: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0066f379: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066f37d: je 0x66f3d1 */ if (fZ) goto L_0066f3d1;
L_0066f37f:; BB(0x0066f37f);
    /* 0066f37f: mov eax, dword ptr [0x162ee80] */ r_eax = R32((u32)(0x162ee80u));
    /* 0066f384: movzx ecx, byte ptr [eax + 0x48] */ r_ecx = (u32)R8((u32)(r_eax+0x48u));
    /* 0066f388: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066f38a: je 0x66f3ca */ if (fZ) goto L_0066f3ca;
L_0066f38c:; BB(0x0066f38c);
    /* 0066f38c: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 0066f392: movzx eax, byte ptr [edx + 0x48] */ r_eax = (u32)R8((u32)(r_edx+0x48u));
    /* 0066f396: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066f398: je 0x66f3d1 */ if (fZ) goto L_0066f3d1;
L_0066f39a:; BB(0x0066f39a);
    /* 0066f39a: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066f3a0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066f3a2: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066f3a8: mov eax, dword ptr [edx + 0xe8] */ r_eax = R32((u32)(r_edx+0xe8u));
    /* 0066f3ae: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66f3b0u); call_ind(t); }
    /* 0066f3b0: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0066f3b3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0066f3b6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066f3b8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0066f3bb: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 0066f3c1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66f3c3u); call_ind(t); }
    /* 0066f3c3: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0066f3c6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066f3c8: jne 0x66f3d1 */ if (!fZ) goto L_0066f3d1;
L_0066f3ca:; BB(0x0066f3ca);
    /* 0066f3ca: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0066f3cd: mov byte ptr [edx + 4], 1 */ W8((u32)(r_edx+0x4u), 0x1u);
L_0066f3d1:; BB(0x0066f3d1);
    /* 0066f3d1: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0066f3d7: call 0x64fa40 */ r_esp -= 4; W32(r_esp, 0x66f3dcu); f_0064fa40();
    /* 0066f3dc: mov esp, ebp */ r_esp = r_ebp;
    /* 0066f3de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066f3df: ret 4 */ FN_RET(0x0066f370); r_esp += 8; return;
}

void f_0066f4f0(void) /* sub_66F4F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0066f4f0);
    /* 0066f4f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066f4f1: mov ebp, esp */ r_ebp = r_esp;
    /* 0066f4f3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066f4f5: push 0x6ad064 */ { u32 v = 0x6ad064u; r_esp -= 4; W32(r_esp, v); }
    /* 0066f4fa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0066f500: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066f501: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066f504: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0066f509: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066f50b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066f50c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0066f50f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0066f515: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0066f518: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066f51a: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 0066f51c: push 0x1388 */ { u32 v = 0x1388u; r_esp -= 4; W32(r_esp, v); }
    /* 0066f521: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066f523: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066f525: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066f527: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066f529: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066f52b: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0066f530: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0066f533: call 0x5ec8f0 */ r_esp -= 4; W32(r_esp, 0x66f538u); f_005ec8f0();
    /* 0066f538: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0066f53b: call 0x5f62b0 */ r_esp -= 4; W32(r_esp, 0x66f540u); f_005f62b0();
    /* 0066f540: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066f546: call 0x5f3bf0 */ r_esp -= 4; W32(r_esp, 0x66f54bu); f_005f3bf0();
    /* 0066f54b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066f54c: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0066f551: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0066f553: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066f559: mov eax, dword ptr [edx + 0xe0] */ r_eax = R32((u32)(r_edx+0xe0u));
    /* 0066f55f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66f561u); call_ind(t); }
    /* 0066f561: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0066f564: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0066f567: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066f569: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0066f56c: mov eax, dword ptr [edx + 0xec] */ r_eax = R32((u32)(r_edx+0xecu));
    /* 0066f572: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66f574u); call_ind(t); }
    /* 0066f574: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066f576: je 0x66f601 */ if (fZ) goto L_0066f601;
L_0066f57c:; BB(0x0066f57c);
    /* 0066f57c: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 0066f581: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x66f586u); f_00686d82();
    /* 0066f586: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066f589: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0066f58c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0066f593: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066f597: je 0x66f5a6 */ if (fZ) goto L_0066f5a6;
L_0066f599:; BB(0x0066f599);
    /* 0066f599: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0066f59c: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x66f5a1u); f_005eaaf0();
    /* 0066f5a1: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0066f5a4: jmp 0x66f5ad */ goto L_0066f5ad;
L_0066f5a6:; BB(0x0066f5a6);
    /* 0066f5a6: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_0066f5ad:; BB(0x0066f5ad);
    /* 0066f5ad: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0066f5b0: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0066f5b3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0066f5ba: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0066f5bd: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0066f5c0: mov dword ptr [edx + 0x238], eax */ W32((u32)(r_edx+0x238u), r_eax);
    /* 0066f5c6: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066f5c8: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0066f5cb: call 0x5f53c0 */ r_esp -= 4; W32(r_esp, 0x66f5d0u); f_005f53c0();
    /* 0066f5d0: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0066f5d3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066f5d4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066f5d6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066f5d8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066f5da: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0066f5dd: mov ecx, dword ptr [ecx + 0x238] */ r_ecx = R32((u32)(r_ecx+0x238u));
    /* 0066f5e3: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x66f5e8u); f_005eae80();
    /* 0066f5e8: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0066f5eb: mov eax, dword ptr [edx + 0x238] */ r_eax = R32((u32)(r_edx+0x238u));
    /* 0066f5f1: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0066f5f4: mov ecx, dword ptr [ecx + 0x238] */ r_ecx = R32((u32)(r_ecx+0x238u));
    /* 0066f5fa: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0066f5fc: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0066f5ff: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66f601u); call_ind(t); }
L_0066f601:; BB(0x0066f601);
    /* 0066f601: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066f604: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0066f60b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066f60c: mov esp, ebp */ r_esp = r_ebp;
    /* 0066f60e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066f60f: ret  */ FN_RET(0x0066f4f0); r_esp += 4; return;
}

void f_0066f610(void) /* sub_66F610 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0066f610);
    /* 0066f610: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066f611: mov ebp, esp */ r_ebp = r_esp;
    /* 0066f613: sub esp, 0xec */ {  u32 a = r_esp; u32 b = 0xecu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066f619: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0066f61e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066f620: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0066f623: mov dword ptr [ebp - 0xec], ecx */ W32((u32)(r_ebp+0xffffff14u), r_ecx);
    /* 0066f629: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 0066f630: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066f636: call 0x5f3bf0 */ r_esp -= 4; W32(r_esp, 0x66f63bu); f_005f3bf0();
    /* 0066f63b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066f63c: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0066f641: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0066f643: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066f649: mov eax, dword ptr [edx + 0xe0] */ r_eax = R32((u32)(r_edx+0xe0u));
    /* 0066f64f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66f651u); call_ind(t); }
    /* 0066f651: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0066f654: push 0x127 */ { u32 v = 0x127u; r_esp -= 4; W32(r_esp, v); }
    /* 0066f659: mov ecx, dword ptr [ebp - 0xec] */ r_ecx = R32((u32)(r_ebp+0xffffff14u));
    /* 0066f65f: call 0x5ecc60 */ r_esp -= 4; W32(r_esp, 0x66f664u); f_005ecc60();
    /* 0066f664: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 0066f666: mov ecx, dword ptr [ebp - 0xec] */ r_ecx = R32((u32)(r_ebp+0xffffff14u));
    /* 0066f66c: call 0x5eccb0 */ r_esp -= 4; W32(r_esp, 0x66f671u); f_005eccb0();
    /* 0066f671: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0066f674: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066f676: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0066f679: mov eax, dword ptr [edx + 0xe4] */ r_eax = R32((u32)(r_edx+0xe4u));
    /* 0066f67f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66f681u); call_ind(t); }
    /* 0066f681: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066f682: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0066f685: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066f687: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0066f68a: mov eax, dword ptr [edx + 0xe0] */ r_eax = R32((u32)(r_edx+0xe0u));
    /* 0066f690: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66f692u); call_ind(t); }
    /* 0066f692: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066f693: mov ecx, dword ptr [ebp - 0xec] */ r_ecx = R32((u32)(r_ebp+0xffffff14u));
    /* 0066f699: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066f69b: mov ecx, dword ptr [ebp - 0xec] */ r_ecx = R32((u32)(r_ebp+0xffffff14u));
    /* 0066f6a1: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0066f6a4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66f6a6u); call_ind(t); }
    /* 0066f6a6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066f6a7: mov ecx, esp */ r_ecx = r_esp;
    /* 0066f6a9: mov dx, word ptr [0x75ee1c] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(0x75ee1cu))) & 0xffffu);
    /* 0066f6b0: mov word ptr [ecx], dx */ W16((u32)(r_ecx), (u16)r_edx);
    /* 0066f6b3: mov al, byte ptr [0x75ee1e] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0x75ee1eu))) & 0xffu);
    /* 0066f6b8: mov byte ptr [ecx + 2], al */ W8((u32)(r_ecx+0x2u), (u8)r_eax);
    /* 0066f6bb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066f6bd: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0066f6c0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066f6c2: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0066f6c5: mov eax, dword ptr [edx + 0xe8] */ r_eax = R32((u32)(r_edx+0xe8u));
    /* 0066f6cb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66f6cdu); call_ind(t); }
    /* 0066f6cd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066f6ce: mov ecx, dword ptr [ebp - 0xec] */ r_ecx = R32((u32)(r_ebp+0xffffff14u));
    /* 0066f6d4: call 0x5ecd00 */ r_esp -= 4; W32(r_esp, 0x66f6d9u); f_005ecd00();
    /* 0066f6d9: mov ecx, dword ptr [ebp - 0xec] */ r_ecx = R32((u32)(r_ebp+0xffffff14u));
    /* 0066f6df: cmp dword ptr [ecx + 0x234], -1 */ {  u32 a = R32((u32)(r_ecx+0x234u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066f6e6: je 0x66f6f0 */ if (fZ) goto L_0066f6f0;
L_0066f6e8:; BB(0x0066f6e8);
    /* 0066f6e8: movzx edx, byte ptr [ebp + 8] */ r_edx = (u32)R8((u32)(r_ebp+0x8u));
    /* 0066f6ec: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066f6ee: je 0x66f73d */ if (fZ) goto L_0066f73d;
L_0066f6f0:; BB(0x0066f6f0);
    /* 0066f6f0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0066f6f2: lea eax, [ebp - 0xe8] */ r_eax = (u32)(r_ebp+0xffffff18u);
    /* 0066f6f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066f6f9: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066f6ff: call 0x633ea0 */ r_esp -= 4; W32(r_esp, 0x66f704u); f_00633ea0();
    /* 0066f704: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0066f707: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066f709: jne 0x66f710 */ if (!fZ) goto L_0066f710;
L_0066f70b:; BB(0x0066f70b);
    /* 0066f70b: jmp 0x66f7f8 */ goto L_0066f7f8;
L_0066f710:; BB(0x0066f710);
    /* 0066f710: lea edx, [ebp - 0xe8] */ r_edx = (u32)(r_ebp+0xffffff18u);
    /* 0066f716: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066f717: mov eax, dword ptr [ebp - 0xec] */ r_eax = R32((u32)(r_ebp+0xffffff14u));
    /* 0066f71d: add eax, 0x1d0 */ {  u32 a = r_eax; u32 b = 0x1d0u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0066f722: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066f723: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x66f728u); f_00686d8e();
    /* 0066f728: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066f72b: mov ecx, dword ptr [ebp - 0xec] */ r_ecx = R32((u32)(r_ebp+0xffffff14u));
    /* 0066f731: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0066f737: mov dword ptr [ecx + 0x234], edx */ W32((u32)(r_ecx+0x234u), r_edx);
L_0066f73d:; BB(0x0066f73d);
    /* 0066f73d: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 0066f73f: mov ecx, dword ptr [ebp - 0xec] */ r_ecx = R32((u32)(r_ebp+0xffffff14u));
    /* 0066f745: call 0x5ef310 */ r_esp -= 4; W32(r_esp, 0x66f74au); f_005ef310();
    /* 0066f74a: lea eax, [ebp - 0x14] */ r_eax = (u32)(r_ebp+0xffffffecu);
    /* 0066f74d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066f74e: mov ecx, dword ptr [ebp - 0xec] */ r_ecx = R32((u32)(r_ebp+0xffffff14u));
    /* 0066f754: mov edx, dword ptr [ecx + 0x234] */ r_edx = R32((u32)(r_ecx+0x234u));
    /* 0066f75a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066f75b: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0066f75e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0066f760: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0066f763: mov eax, dword ptr [edx + 0xd8] */ r_eax = R32((u32)(r_edx+0xd8u));
    /* 0066f769: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66f76bu); call_ind(t); }
    /* 0066f76b: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 0066f76e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066f76f: mov edx, dword ptr [ebp - 0xec] */ r_edx = R32((u32)(r_ebp+0xffffff14u));
    /* 0066f775: add edx, 0x1d0 */ {  u32 a = r_edx; u32 b = 0x1d0u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0066f77b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066f77c: push 0x6e0ed8 */ { u32 v = 0x6e0ed8u; r_esp -= 4; W32(r_esp, v); }
    /* 0066f781: lea eax, [ebp - 0x48] */ r_eax = (u32)(r_ebp+0xffffffb8u);
    /* 0066f784: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066f785: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x66f78bu); call_ind(t); }
    /* 0066f78b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066f78e: lea ecx, [ebp - 0x48] */ r_ecx = (u32)(r_ebp+0xffffffb8u);
    /* 0066f791: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066f792: mov ecx, dword ptr [ebp - 0xec] */ r_ecx = R32((u32)(r_ebp+0xffffff14u));
    /* 0066f798: call 0x5ee710 */ r_esp -= 4; W32(r_esp, 0x66f79du); f_005ee710();
    /* 0066f79d: mov ecx, dword ptr [ebp - 0xec] */ r_ecx = R32((u32)(r_ebp+0xffffff14u));
    /* 0066f7a3: call 0x5f6270 */ r_esp -= 4; W32(r_esp, 0x66f7a8u); f_005f6270();
    /* 0066f7a8: mov edx, dword ptr [ebp - 0xec] */ r_edx = R32((u32)(r_ebp+0xffffff14u));
    /* 0066f7ae: cmp dword ptr [edx + 0x238], 0 */ {  u32 a = R32((u32)(r_edx+0x238u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066f7b5: je 0x66f7f8 */ if (fZ) goto L_0066f7f8;
L_0066f7b7:; BB(0x0066f7b7);
    /* 0066f7b7: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0066f7ba: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0066f7bc: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0066f7bf: mov eax, dword ptr [edx + 0xec] */ r_eax = R32((u32)(r_edx+0xecu));
    /* 0066f7c5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66f7c7u); call_ind(t); }
    /* 0066f7c7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066f7c8: mov ecx, dword ptr [ebp - 0xec] */ r_ecx = R32((u32)(r_ebp+0xffffff14u));
    /* 0066f7ce: mov ecx, dword ptr [ecx + 0x238] */ r_ecx = R32((u32)(r_ecx+0x238u));
    /* 0066f7d4: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x66f7d9u); f_005eaf00();
    /* 0066f7d9: mov edx, dword ptr [ebp - 0xec] */ r_edx = R32((u32)(r_ebp+0xffffff14u));
    /* 0066f7df: mov eax, dword ptr [edx + 0x238] */ r_eax = R32((u32)(r_edx+0x238u));
    /* 0066f7e5: mov ecx, dword ptr [ebp - 0xec] */ r_ecx = R32((u32)(r_ebp+0xffffff14u));
    /* 0066f7eb: mov ecx, dword ptr [ecx + 0x238] */ r_ecx = R32((u32)(r_ecx+0x238u));
    /* 0066f7f1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0066f7f3: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0066f7f6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66f7f8u); call_ind(t); }
L_0066f7f8:; BB(0x0066f7f8);
    /* 0066f7f8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066f7fb: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0066f7fd: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x66f802u); f_00686d72();
    /* 0066f802: mov esp, ebp */ r_esp = r_ebp;
    /* 0066f804: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066f805: ret 4 */ FN_RET(0x0066f610); r_esp += 8; return;
}

