#include "protos.h"

void f_00668170(void) /* sub_668170 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00668170);
    /* 00668170: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00668171: mov ebp, esp */ r_ebp = r_esp;
    /* 00668173: sub esp, 0x478 */ {  u32 a = r_esp; u32 b = 0x478u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00668179: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0066817e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00668180: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00668183: mov dword ptr [ebp - 0x470], ecx */ W32((u32)(r_ebp+0xfffffb90u), r_ecx);
    /* 00668189: movzx eax, byte ptr [ebp + 8] */ r_eax = (u32)R8((u32)(r_ebp+0x8u));
    /* 0066818d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066818f: je 0x6681ae */ if (fZ) goto L_006681ae;
L_00668191:; BB(0x00668191);
    /* 00668191: mov ecx, dword ptr [0x16306d0] */ r_ecx = R32((u32)(0x16306d0u));
    /* 00668197: call 0x673cb0 */ r_esp -= 4; W32(r_esp, 0x66819cu); f_00673cb0();
    /* 0066819c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066819d: lea ecx, [ebp - 0x448] */ r_ecx = (u32)(r_ebp+0xfffffbb8u);
    /* 006681a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006681a4: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x6681a9u); f_00686d8e();
    /* 006681a9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006681ac: jmp 0x6681c0 */ goto L_006681c0;
L_006681ae:; BB(0x006681ae);
    /* 006681ae: lea edx, [ebp - 0x448] */ r_edx = (u32)(r_ebp+0xfffffbb8u);
    /* 006681b4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006681b5: mov ecx, dword ptr [ebp - 0x470] */ r_ecx = R32((u32)(r_ebp+0xfffffb90u));
    /* 006681bb: call 0x669310 */ r_esp -= 4; W32(r_esp, 0x6681c0u); f_00669310();
L_006681c0:; BB(0x006681c0);
    /* 006681c0: mov byte ptr [ebp - 0x408], 0 */ W8((u32)(r_ebp+0xfffffbf8u), 0x0u);
    /* 006681c7: push 0x3ff */ { u32 v = 0x3ffu; r_esp -= 4; W32(r_esp, v); }
    /* 006681cc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006681ce: lea eax, [ebp - 0x407] */ r_eax = (u32)(r_ebp+0xfffffbf9u);
    /* 006681d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006681d5: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x6681dau); f_00686fa2();
    /* 006681da: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006681dd: lea ecx, [ebp - 0x448] */ r_ecx = (u32)(r_ebp+0xfffffbb8u);
    /* 006681e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006681e4: lea edx, [ebp - 0x408] */ r_edx = (u32)(r_ebp+0xfffffbf8u);
    /* 006681ea: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006681eb: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x6681f0u); f_00686d8e();
    /* 006681f0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006681f3: mov dword ptr [ebp - 0x44c], 0x21496 */ W32((u32)(r_ebp+0xfffffbb4u), 0x21496u);
    /* 006681fd: mov eax, dword ptr [ebp - 0x44c] */ r_eax = R32((u32)(r_ebp+0xfffffbb4u));
    /* 00668203: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00668204: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x668209u); f_00686d82();
    /* 00668209: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066820c: mov dword ptr [ebp - 0x450], eax */ W32((u32)(r_ebp+0xfffffbb0u), r_eax);
    /* 00668212: cmp dword ptr [ebp - 0x450], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffbb0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00668219: je 0x668241 */ if (fZ) goto L_00668241;
L_0066821b:; BB(0x0066821b);
    /* 0066821b: mov ecx, dword ptr [ebp - 0x44c] */ r_ecx = R32((u32)(r_ebp+0xfffffbb4u));
    /* 00668221: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00668222: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00668224: mov edx, dword ptr [ebp - 0x450] */ r_edx = R32((u32)(r_ebp+0xfffffbb0u));
    /* 0066822a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066822b: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x668230u); f_00686fa2();
    /* 00668230: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00668233: mov eax, dword ptr [ebp - 0x450] */ r_eax = R32((u32)(r_ebp+0xfffffbb0u));
    /* 00668239: mov dword ptr [ebp - 0x474], eax */ W32((u32)(r_ebp+0xfffffb8cu), r_eax);
    /* 0066823f: jmp 0x66824b */ goto L_0066824b;
L_00668241:; BB(0x00668241);
    /* 00668241: mov dword ptr [ebp - 0x474], 0 */ W32((u32)(r_ebp+0xfffffb8cu), 0x0u);
L_0066824b:; BB(0x0066824b);
    /* 0066824b: mov ecx, dword ptr [ebp - 0x474] */ r_ecx = R32((u32)(r_ebp+0xfffffb8cu));
    /* 00668251: mov dword ptr [ebp - 0x42c], ecx */ W32((u32)(r_ebp+0xfffffbd4u), r_ecx);
    /* 00668257: push 0x21496 */ { u32 v = 0x21496u; r_esp -= 4; W32(r_esp, v); }
    /* 0066825c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066825e: mov edx, dword ptr [ebp - 0x42c] */ r_edx = R32((u32)(r_ebp+0xfffffbd4u));
    /* 00668264: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00668265: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x66826au); f_00686fa2();
    /* 0066826a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066826d: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00668273: call 0x5f3bf0 */ r_esp -= 4; W32(r_esp, 0x668278u); f_005f3bf0();
    /* 00668278: mov ecx, dword ptr [ebp - 0x42c] */ r_ecx = R32((u32)(r_ebp+0xfffffbd4u));
    /* 0066827e: mov byte ptr [ecx], al */ W8((u32)(r_ecx), (u8)r_eax);
    /* 00668280: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00668282: mov ecx, dword ptr [0x16306d0] */ r_ecx = R32((u32)(0x16306d0u));
    /* 00668288: call 0x5fb810 */ r_esp -= 4; W32(r_esp, 0x66828du); f_005fb810();
    /* 0066828d: mov dword ptr [ebp - 0x478], eax */ W32((u32)(r_ebp+0xfffffb88u), r_eax);
    /* 00668293: mov edx, dword ptr [ebp - 0x478] */ r_edx = R32((u32)(r_ebp+0xfffffb88u));
    /* 00668299: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0066829b: mov ecx, dword ptr [ebp - 0x478] */ r_ecx = R32((u32)(r_ebp+0xfffffb88u));
    /* 006682a1: mov edx, dword ptr [eax + 0xb8] */ r_edx = R32((u32)(r_eax+0xb8u));
    /* 006682a7: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x6682a9u); call_ind(t); }
    /* 006682a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006682aa: mov eax, dword ptr [ebp - 0x42c] */ r_eax = R32((u32)(r_ebp+0xfffffbd4u));
    /* 006682b0: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006682b3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006682b4: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x6682b9u); f_00686d8e();
    /* 006682b9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006682bc: push 0x21480 */ { u32 v = 0x21480u; r_esp -= 4; W32(r_esp, v); }
    /* 006682c1: mov ecx, dword ptr [0x16306d0] */ r_ecx = R32((u32)(0x16306d0u));
    /* 006682c7: mov edx, dword ptr [ecx + 0x1bc] */ r_edx = R32((u32)(r_ecx+0x1bcu));
    /* 006682cd: add edx, 0x4c */ {  u32 a = r_edx; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006682d0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006682d1: mov eax, dword ptr [ebp - 0x42c] */ r_eax = R32((u32)(r_ebp+0xfffffbd4u));
    /* 006682d7: add eax, 0x16 */ {  u32 a = r_eax; u32 b = 0x16u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006682da: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006682db: call 0x686fde */ r_esp -= 4; W32(r_esp, 0x6682e0u); f_00686fde();
    /* 006682e0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006682e3: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006682e9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006682eb: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006682f1: mov eax, dword ptr [edx + 0x10c] */ r_eax = R32((u32)(r_edx+0x10cu));
    /* 006682f7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6682f9u); call_ind(t); }
    /* 006682f9: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006682fb: mov edx, 0x4c */ r_edx = 0x4cu;
    /* 00668300: mul edx */ { u64 t = (u64)r_eax * r_edx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 00668302: seto cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fO) ? 1 : 0) & 0xffu);
    /* 00668305: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00668307: or ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00668309: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066830a: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x66830fu); f_00686d82();
    /* 0066830f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00668312: mov dword ptr [ebp - 0x454], eax */ W32((u32)(r_ebp+0xfffffbacu), r_eax);
    /* 00668318: mov eax, dword ptr [ebp - 0x454] */ r_eax = R32((u32)(r_ebp+0xfffffbacu));
    /* 0066831e: mov dword ptr [ebp - 0x428], eax */ W32((u32)(r_ebp+0xfffffbd8u), r_eax);
    /* 00668324: mov dword ptr [ebp - 0x410], 0 */ W32((u32)(r_ebp+0xfffffbf0u), 0x0u);
    /* 0066832e: jmp 0x66833f */ goto L_0066833f;
L_00668330:; BB(0x00668330);
    /* 00668330: mov ecx, dword ptr [ebp - 0x410] */ r_ecx = R32((u32)(r_ebp+0xfffffbf0u));
    /* 00668336: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00668339: mov dword ptr [ebp - 0x410], ecx */ W32((u32)(r_ebp+0xfffffbf0u), r_ecx);
L_0066833f:; BB(0x0066833f);
    /* 0066833f: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 00668345: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00668347: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066834d: mov edx, dword ptr [eax + 0x10c] */ r_edx = R32((u32)(r_eax+0x10cu));
    /* 00668353: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x668355u); call_ind(t); }
    /* 00668355: cmp dword ptr [ebp - 0x410], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffbf0u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0066835b: jge 0x66837b */ if ((fS==fO)) goto L_0066837b;
L_0066835d:; BB(0x0066835d);
    /* 0066835d: push 0x4c */ { u32 v = 0x4cu; r_esp -= 4; W32(r_esp, v); }
    /* 0066835f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00668361: mov eax, dword ptr [ebp - 0x410] */ r_eax = R32((u32)(r_ebp+0xfffffbf0u));
    /* 00668367: imul eax, eax, 0x4c */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x4cu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0066836a: add eax, dword ptr [ebp - 0x428] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffbd8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00668370: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00668371: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x668376u); f_00686fa2();
    /* 00668376: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00668379: jmp 0x668330 */ goto L_00668330;
L_0066837b:; BB(0x0066837b);
    /* 0066837b: mov ecx, dword ptr [ebp - 0x428] */ r_ecx = R32((u32)(r_ebp+0xfffffbd8u));
    /* 00668381: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00668382: mov ecx, dword ptr [ebp - 0x470] */ r_ecx = R32((u32)(r_ebp+0xfffffb90u));
    /* 00668388: call 0x668e10 */ r_esp -= 4; W32(r_esp, 0x66838du); f_00668e10();
    /* 0066838d: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00668393: call 0x5f3bf0 */ r_esp -= 4; W32(r_esp, 0x668398u); f_005f3bf0();
    /* 00668398: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00668399: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0066839f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006683a1: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006683a7: mov edx, dword ptr [eax + 0x108] */ r_edx = R32((u32)(r_eax+0x108u));
    /* 006683ad: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x6683afu); call_ind(t); }
    /* 006683af: mov dword ptr [ebp - 0x40c], eax */ W32((u32)(r_ebp+0xfffffbf4u), r_eax);
    /* 006683b5: mov eax, dword ptr [ebp - 0x40c] */ r_eax = R32((u32)(r_ebp+0xfffffbf4u));
    /* 006683bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006683bc: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x6683c1u); f_00686d82();
    /* 006683c1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006683c4: mov dword ptr [ebp - 0x458], eax */ W32((u32)(r_ebp+0xfffffba8u), r_eax);
    /* 006683ca: mov ecx, dword ptr [ebp - 0x458] */ r_ecx = R32((u32)(r_ebp+0xfffffba8u));
    /* 006683d0: mov dword ptr [ebp - 0x424], ecx */ W32((u32)(r_ebp+0xfffffbdcu), r_ecx);
    /* 006683d6: mov edx, dword ptr [ebp - 0x40c] */ r_edx = R32((u32)(r_ebp+0xfffffbf4u));
    /* 006683dc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006683dd: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006683df: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006683e5: call 0x6375b0 */ r_esp -= 4; W32(r_esp, 0x6683eau); f_006375b0();
    /* 006683ea: mov ecx, eax */ r_ecx = r_eax;
    /* 006683ec: call 0x63aae0 */ r_esp -= 4; W32(r_esp, 0x6683f1u); f_0063aae0();
    /* 006683f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006683f2: mov eax, dword ptr [ebp - 0x424] */ r_eax = R32((u32)(r_ebp+0xfffffbdcu));
    /* 006683f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006683f9: call 0x686fde */ r_esp -= 4; W32(r_esp, 0x6683feu); f_00686fde();
    /* 006683fe: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00668401: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00668407: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00668409: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0066840f: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 00668415: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x668417u); call_ind(t); }
    /* 00668417: mov dword ptr [ebp - 0x420], eax */ W32((u32)(r_ebp+0xfffffbe0u), r_eax);
    /* 0066841d: mov ecx, dword ptr [ebp - 0x420] */ r_ecx = R32((u32)(r_ebp+0xfffffbe0u));
    /* 00668423: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00668424: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x668429u); f_00686d82();
    /* 00668429: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066842c: mov dword ptr [ebp - 0x45c], eax */ W32((u32)(r_ebp+0xfffffba4u), r_eax);
    /* 00668432: mov edx, dword ptr [ebp - 0x45c] */ r_edx = R32((u32)(r_ebp+0xfffffba4u));
    /* 00668438: mov dword ptr [ebp - 0x414], edx */ W32((u32)(r_ebp+0xfffffbecu), r_edx);
    /* 0066843e: mov eax, dword ptr [ebp - 0x414] */ r_eax = R32((u32)(r_ebp+0xfffffbecu));
    /* 00668444: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00668445: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0066844b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066844d: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00668453: mov eax, dword ptr [edx + 0x90] */ r_eax = R32((u32)(r_edx+0x90u));
    /* 00668459: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66845bu); call_ind(t); }
    /* 0066845b: mov byte ptr [ebp - 0x419], 0 */ W8((u32)(r_ebp+0xfffffbe7u), 0x0u);
    /* 00668462: push 0x6c2d2c */ { u32 v = 0x6c2d2cu; r_esp -= 4; W32(r_esp, v); }
    /* 00668467: lea ecx, [ebp - 0x408] */ r_ecx = (u32)(r_ebp+0xfffffbf8u);
    /* 0066846d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066846e: call 0x5ea9c0 */ r_esp -= 4; W32(r_esp, 0x668473u); f_005ea9c0();
    /* 00668473: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00668476: mov dword ptr [ebp - 0x418], eax */ W32((u32)(r_ebp+0xfffffbe8u), r_eax);
    /* 0066847c: cmp dword ptr [ebp - 0x418], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffbe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00668483: je 0x668593 */ if (fZ) goto L_00668593;
L_00668489:; BB(0x00668489);
    /* 00668489: mov edx, dword ptr [ebp - 0x418] */ r_edx = R32((u32)(r_ebp+0xfffffbe8u));
    /* 0066848f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00668490: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00668492: push 0x21496 */ { u32 v = 0x21496u; r_esp -= 4; W32(r_esp, v); }
    /* 00668497: mov eax, dword ptr [ebp - 0x42c] */ r_eax = R32((u32)(r_ebp+0xfffffbd4u));
    /* 0066849d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066849e: call dword ptr [0x6b2260] */ { u32 t = R32((u32)(0x6b2260u)); r_esp -= 4; W32(r_esp, 0x6684a4u); call_ind(t); }
    /* 006684a4: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006684a7: mov dword ptr [ebp - 0x410], 0 */ W32((u32)(r_ebp+0xfffffbf0u), 0x0u);
    /* 006684b1: jmp 0x6684c2 */ goto L_006684c2;
L_006684b3:; BB(0x006684b3);
    /* 006684b3: mov ecx, dword ptr [ebp - 0x410] */ r_ecx = R32((u32)(r_ebp+0xfffffbf0u));
    /* 006684b9: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006684bc: mov dword ptr [ebp - 0x410], ecx */ W32((u32)(r_ebp+0xfffffbf0u), r_ecx);
L_006684c2:; BB(0x006684c2);
    /* 006684c2: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 006684c8: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006684ca: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006684d0: mov edx, dword ptr [eax + 0x10c] */ r_edx = R32((u32)(r_eax+0x10cu));
    /* 006684d6: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x6684d8u); call_ind(t); }
    /* 006684d8: cmp dword ptr [ebp - 0x410], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffbf0u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006684de: jge 0x668506 */ if ((fS==fO)) goto L_00668506;
L_006684e0:; BB(0x006684e0);
    /* 006684e0: mov eax, dword ptr [ebp - 0x418] */ r_eax = R32((u32)(r_ebp+0xfffffbe8u));
    /* 006684e6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006684e7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006684e9: push 0x4c */ { u32 v = 0x4cu; r_esp -= 4; W32(r_esp, v); }
    /* 006684eb: mov ecx, dword ptr [ebp - 0x410] */ r_ecx = R32((u32)(r_ebp+0xfffffbf0u));
    /* 006684f1: imul ecx, ecx, 0x4c */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x4cu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006684f4: add ecx, dword ptr [ebp - 0x428] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffbd8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006684fa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006684fb: call dword ptr [0x6b2260] */ { u32 t = R32((u32)(0x6b2260u)); r_esp -= 4; W32(r_esp, 0x668501u); call_ind(t); }
    /* 00668501: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00668504: jmp 0x6684b3 */ goto L_006684b3;
L_00668506:; BB(0x00668506);
    /* 00668506: mov edx, dword ptr [ebp - 0x418] */ r_edx = R32((u32)(r_ebp+0xfffffbe8u));
    /* 0066850c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066850d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0066850f: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00668511: lea eax, [ebp - 0x40c] */ r_eax = (u32)(r_ebp+0xfffffbf4u);
    /* 00668517: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00668518: call dword ptr [0x6b2260] */ { u32 t = R32((u32)(0x6b2260u)); r_esp -= 4; W32(r_esp, 0x66851eu); call_ind(t); }
    /* 0066851e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00668521: mov ecx, dword ptr [ebp - 0x418] */ r_ecx = R32((u32)(r_ebp+0xfffffbe8u));
    /* 00668527: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00668528: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0066852a: mov edx, dword ptr [ebp - 0x40c] */ r_edx = R32((u32)(r_ebp+0xfffffbf4u));
    /* 00668530: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00668531: mov eax, dword ptr [ebp - 0x424] */ r_eax = R32((u32)(r_ebp+0xfffffbdcu));
    /* 00668537: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00668538: call dword ptr [0x6b2260] */ { u32 t = R32((u32)(0x6b2260u)); r_esp -= 4; W32(r_esp, 0x66853eu); call_ind(t); }
    /* 0066853e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00668541: mov ecx, dword ptr [ebp - 0x418] */ r_ecx = R32((u32)(r_ebp+0xfffffbe8u));
    /* 00668547: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00668548: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0066854a: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0066854c: lea edx, [ebp - 0x420] */ r_edx = (u32)(r_ebp+0xfffffbe0u);
    /* 00668552: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00668553: call dword ptr [0x6b2260] */ { u32 t = R32((u32)(0x6b2260u)); r_esp -= 4; W32(r_esp, 0x668559u); call_ind(t); }
    /* 00668559: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066855c: mov eax, dword ptr [ebp - 0x418] */ r_eax = R32((u32)(r_ebp+0xfffffbe8u));
    /* 00668562: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00668563: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00668565: mov ecx, dword ptr [ebp - 0x420] */ r_ecx = R32((u32)(r_ebp+0xfffffbe0u));
    /* 0066856b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066856c: mov edx, dword ptr [ebp - 0x414] */ r_edx = R32((u32)(r_ebp+0xfffffbecu));
    /* 00668572: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00668573: call dword ptr [0x6b2260] */ { u32 t = R32((u32)(0x6b2260u)); r_esp -= 4; W32(r_esp, 0x668579u); call_ind(t); }
    /* 00668579: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066857c: mov eax, dword ptr [ebp - 0x418] */ r_eax = R32((u32)(r_ebp+0xfffffbe8u));
    /* 00668582: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00668583: call dword ptr [0x6b2258] */ { u32 t = R32((u32)(0x6b2258u)); r_esp -= 4; W32(r_esp, 0x668589u); call_ind(t); }
    /* 00668589: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066858c: mov byte ptr [ebp - 0x419], 1 */ W8((u32)(r_ebp+0xfffffbe7u), 0x1u);
L_00668593:; BB(0x00668593);
    /* 00668593: mov ecx, dword ptr [ebp - 0x42c] */ r_ecx = R32((u32)(r_ebp+0xfffffbd4u));
    /* 00668599: mov dword ptr [ebp - 0x460], ecx */ W32((u32)(r_ebp+0xfffffba0u), r_ecx);
    /* 0066859f: mov edx, dword ptr [ebp - 0x460] */ r_edx = R32((u32)(r_ebp+0xfffffba0u));
    /* 006685a5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006685a6: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x6685abu); f_00686cae();
    /* 006685ab: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006685ae: mov eax, dword ptr [ebp - 0x428] */ r_eax = R32((u32)(r_ebp+0xfffffbd8u));
    /* 006685b4: mov dword ptr [ebp - 0x464], eax */ W32((u32)(r_ebp+0xfffffb9cu), r_eax);
    /* 006685ba: mov ecx, dword ptr [ebp - 0x464] */ r_ecx = R32((u32)(r_ebp+0xfffffb9cu));
    /* 006685c0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006685c1: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x6685c6u); f_00686cae();
    /* 006685c6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006685c9: mov edx, dword ptr [ebp - 0x424] */ r_edx = R32((u32)(r_ebp+0xfffffbdcu));
    /* 006685cf: mov dword ptr [ebp - 0x468], edx */ W32((u32)(r_ebp+0xfffffb98u), r_edx);
    /* 006685d5: mov eax, dword ptr [ebp - 0x468] */ r_eax = R32((u32)(r_ebp+0xfffffb98u));
    /* 006685db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006685dc: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x6685e1u); f_00686cae();
    /* 006685e1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006685e4: mov ecx, dword ptr [ebp - 0x414] */ r_ecx = R32((u32)(r_ebp+0xfffffbecu));
    /* 006685ea: mov dword ptr [ebp - 0x46c], ecx */ W32((u32)(r_ebp+0xfffffb94u), r_ecx);
    /* 006685f0: mov edx, dword ptr [ebp - 0x46c] */ r_edx = R32((u32)(r_ebp+0xfffffb94u));
    /* 006685f6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006685f7: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x6685fcu); f_00686cae();
    /* 006685fc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006685ff: mov al, byte ptr [ebp - 0x419] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffbe7u))) & 0xffu);
    /* 00668605: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00668608: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0066860a: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x66860fu); f_00686d72();
    /* 0066860f: mov esp, ebp */ r_esp = r_ebp;
    /* 00668611: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00668612: ret 4 */ FN_RET(0x00668170); r_esp += 8; return;
}

void f_00668e10(void) /* sub_668E10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00668e10);
    /* 00668e10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00668e11: mov ebp, esp */ r_ebp = r_esp;
    /* 00668e13: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00668e16: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 00668e19: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00668e20: jmp 0x668e2b */ goto L_00668e2b;
L_00668e22:; BB(0x00668e22);
    /* 00668e22: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00668e25: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00668e28: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00668e2b:; BB(0x00668e2b);
    /* 00668e2b: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00668e31: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00668e33: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00668e39: mov eax, dword ptr [edx + 0x10c] */ r_eax = R32((u32)(r_edx+0x10cu));
    /* 00668e3f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x668e41u); call_ind(t); }
    /* 00668e41: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00668e44: jge 0x668f90 */ if ((fS==fO)) goto L_00668f90;
L_00668e4a:; BB(0x00668e4a);
    /* 00668e4a: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00668e50: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 00668e53: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00668e56: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 00668e59: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00668e5c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00668e5f: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x668e64u); f_0063aac0();
    /* 00668e64: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00668e66: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00668e69: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00668e6b: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00668e6f: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00668e72: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00668e75: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00668e77: je 0x668e8b */ if (fZ) goto L_00668e8b;
L_00668e79:; BB(0x00668e79);
    /* 00668e79: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00668e7c: imul edx, edx, 0x4c */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x4cu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00668e7f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00668e82: mov byte ptr [eax + edx], 0 */ W8((u32)(r_eax+r_edx), 0x0u);
    /* 00668e86: jmp 0x668f8b */ goto L_00668f8b;
L_00668e8b:; BB(0x00668e8b);
    /* 00668e8b: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00668e91: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 00668e94: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00668e97: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 00668e9a: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00668e9d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00668ea0: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x668ea5u); f_0063aac0();
    /* 00668ea5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00668ea7: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00668eaa: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00668ead: imul eax, eax, 0x4c */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x4cu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00668eb0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00668eb3: mov dl, byte ptr [ebp - 0x14] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffecu))) & 0xffu);
    /* 00668eb6: mov byte ptr [ecx + eax], dl */ W8((u32)(r_ecx+r_eax), (u8)r_edx);
    /* 00668eb9: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 00668ebe: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 00668ec1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00668ec4: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 00668ec7: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00668eca: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00668ecd: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00668ed0: imul edx, edx, 0x4c */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x4cu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00668ed3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00668ed6: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00668ed9: mov dword ptr [eax + edx + 4], ecx */ W32((u32)(r_eax+r_edx+0x4u), r_ecx);
    /* 00668edd: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 00668ee3: mov eax, dword ptr [edx + 0x58] */ r_eax = R32((u32)(r_edx+0x58u));
    /* 00668ee6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00668ee9: mov edx, dword ptr [eax + ecx*4] */ r_edx = R32((u32)(r_eax+r_ecx*4));
    /* 00668eec: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 00668eef: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00668ef2: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x668ef7u); f_0063aac0();
    /* 00668ef7: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00668efa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00668efb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00668efe: imul eax, eax, 0x4c */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x4cu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00668f01: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00668f04: lea edx, [ecx + eax + 8] */ r_edx = (u32)(r_ecx+r_eax+0x8u);
    /* 00668f08: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00668f09: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x668f0eu); f_00686d8e();
    /* 00668f0e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00668f11: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 00668f16: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 00668f19: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00668f1c: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 00668f1f: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00668f22: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00668f25: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x668f2au); f_0063aac0();
    /* 00668f2a: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00668f2c: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00668f2f: cmp dword ptr [ebp - 0x20], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00668f33: je 0x668f51 */ if (fZ) goto L_00668f51;
L_00668f35:; BB(0x00668f35);
    /* 00668f35: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00668f38: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x668f3du); f_0063aac0();
    /* 00668f3d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00668f3f: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 00668f42: cmp dword ptr [ebp - 0x24], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00668f46: je 0x668f51 */ if (fZ) goto L_00668f51;
L_00668f48:; BB(0x00668f48);
    /* 00668f48: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 00668f4f: jmp 0x668f58 */ goto L_00668f58;
L_00668f51:; BB(0x00668f51);
    /* 00668f51: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
L_00668f58:; BB(0x00668f58);
    /* 00668f58: movzx eax, byte ptr [ebp - 0x34] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffccu));
    /* 00668f5c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00668f5e: je 0x668f8b */ if (fZ) goto L_00668f8b;
L_00668f60:; BB(0x00668f60);
    /* 00668f60: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00668f66: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 00668f69: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00668f6c: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 00668f6f: call 0x520e60 */ r_esp -= 4; W32(r_esp, 0x668f74u); f_00520e60();
    /* 00668f74: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00668f75: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00668f78: imul ecx, ecx, 0x4c */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x4cu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00668f7b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00668f7e: lea eax, [edx + ecx + 0x3c] */ r_eax = (u32)(r_edx+r_ecx+0x3cu);
    /* 00668f82: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00668f83: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x668f88u); f_00686d8e();
    /* 00668f88: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00668f8b:; BB(0x00668f8b);
    /* 00668f8b: jmp 0x668e22 */ goto L_00668e22;
L_00668f90:; BB(0x00668f90);
    /* 00668f90: mov esp, ebp */ r_esp = r_ebp;
    /* 00668f92: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00668f93: ret 4 */ FN_RET(0x00668e10); r_esp += 8; return;
}

void f_00668fa0(void) /* sub_668FA0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00668fa0);
    /* 00668fa0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00668fa1: mov ebp, esp */ r_ebp = r_esp;
    /* 00668fa3: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00668fa6: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 00668fa9: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00668fac: mov dword ptr [eax + 4], 0 */ W32((u32)(r_eax+0x4u), 0x0u);
    /* 00668fb3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00668fba: jmp 0x668fc5 */ goto L_00668fc5;
L_00668fbc:; BB(0x00668fbc);
    /* 00668fbc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00668fbf: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00668fc2: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00668fc5:; BB(0x00668fc5);
    /* 00668fc5: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 00668fcb: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00668fcd: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00668fd3: mov edx, dword ptr [eax + 0x10c] */ r_edx = R32((u32)(r_eax+0x10cu));
    /* 00668fd9: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x668fdbu); call_ind(t); }
    /* 00668fdb: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00668fde: jge 0x668ff5 */ if ((fS==fO)) goto L_00668ff5;
L_00668fe0:; BB(0x00668fe0);
    /* 00668fe0: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 00668fe5: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 00668fe8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00668feb: mov ecx, dword ptr [ecx + edx*4] */ r_ecx = R32((u32)(r_ecx+r_edx*4));
    /* 00668fee: call 0x63b2d0 */ r_esp -= 4; W32(r_esp, 0x668ff3u); f_0063b2d0();
    /* 00668ff3: jmp 0x668fbc */ goto L_00668fbc;
L_00668ff5:; BB(0x00668ff5);
    /* 00668ff5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00668ffc: jmp 0x669007 */ goto L_00669007;
L_00668ffe:; BB(0x00668ffe);
    /* 00668ffe: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00669001: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00669004: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00669007:; BB(0x00669007);
    /* 00669007: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066900d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066900f: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00669015: mov eax, dword ptr [edx + 0x10c] */ r_eax = R32((u32)(r_edx+0x10cu));
    /* 0066901b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66901du); call_ind(t); }
    /* 0066901d: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00669020: jge 0x669143 */ if ((fS==fO)) goto L_00669143;
L_00669026:; BB(0x00669026);
    /* 00669026: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00669029: imul ecx, ecx, 0x4c */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x4cu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0066902c: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0066902f: movsx eax, byte ptr [edx + ecx] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+r_ecx));
    /* 00669033: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00669035: jne 0x669076 */ if (!fZ) goto L_00669076;
L_00669037:; BB(0x00669037);
    /* 00669037: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00669039: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066903c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066903d: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 00669043: mov eax, dword ptr [edx + 0x58] */ r_eax = R32((u32)(r_edx+0x58u));
    /* 00669046: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00669049: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 0066904c: call 0x63a3e0 */ r_esp -= 4; W32(r_esp, 0x669051u); f_0063a3e0();
    /* 00669051: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 00669057: mov eax, dword ptr [edx + 0x58] */ r_eax = R32((u32)(r_edx+0x58u));
    /* 0066905a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066905d: mov edx, dword ptr [eax + ecx*4] */ r_edx = R32((u32)(r_eax+r_ecx*4));
    /* 00669060: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00669063: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00669066: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x66906bu); f_0063aac0();
    /* 0066906b: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 00669071: jmp 0x66913e */ goto L_0066913e;
L_00669076:; BB(0x00669076);
    /* 00669076: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00669079: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0066907c: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0066907f: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00669082: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 00669085: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00669088: imul eax, eax, 0x4c */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x4cu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0066908b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0066908e: movsx edx, byte ptr [ecx + eax] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+r_eax));
    /* 00669092: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00669095: je 0x6690ba */ if (fZ) goto L_006690ba;
L_00669097:; BB(0x00669097);
    /* 00669097: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066909a: imul eax, eax, 0x4c */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x4cu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0066909d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006690a0: lea edx, [ecx + eax + 0x3c] */ r_edx = (u32)(r_ecx+r_eax+0x3cu);
    /* 006690a4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006690a5: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 006690aa: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 006690ad: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006690b0: mov ecx, dword ptr [ecx + edx*4] */ r_ecx = R32((u32)(r_ecx+r_edx*4));
    /* 006690b3: call 0x63ab10 */ r_esp -= 4; W32(r_esp, 0x6690b8u); f_0063ab10();
    /* 006690b8: jmp 0x66910a */ goto L_0066910a;
L_006690ba:; BB(0x006690ba);
    /* 006690ba: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006690bd: imul eax, eax, 0x4c */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x4cu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006690c0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006690c3: movsx edx, byte ptr [ecx + eax] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+r_eax));
    /* 006690c7: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 006690ca: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 006690cf: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 006690d2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006690d5: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 006690d8: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 006690db: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006690de: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x6690e3u); f_0063aac0();
    /* 006690e3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006690e6: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 006690e8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006690eb: imul edx, edx, 0x4c */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x4cu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006690ee: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006690f1: mov ecx, dword ptr [eax + edx + 4] */ r_ecx = R32((u32)(r_eax+r_edx+0x4u));
    /* 006690f5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006690f6: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 006690fc: mov eax, dword ptr [edx + 0x58] */ r_eax = R32((u32)(r_edx+0x58u));
    /* 006690ff: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00669102: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 00669105: call 0x63b490 */ r_esp -= 4; W32(r_esp, 0x66910au); f_0063b490();
L_0066910a:; BB(0x0066910a);
    /* 0066910a: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 00669110: mov eax, dword ptr [edx + 0x58] */ r_eax = R32((u32)(r_edx+0x58u));
    /* 00669113: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00669116: mov edx, dword ptr [eax + ecx*4] */ r_edx = R32((u32)(r_eax+r_ecx*4));
    /* 00669119: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0066911c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066911f: imul eax, eax, 0x4c */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x4cu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00669122: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00669125: lea edx, [ecx + eax + 8] */ r_edx = (u32)(r_ecx+r_eax+0x8u);
    /* 00669129: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066912a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0066912d: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x669132u); f_0063aac0();
    /* 00669132: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00669135: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00669136: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x66913bu); f_00686d8e();
    /* 0066913b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0066913e:; BB(0x0066913e);
    /* 0066913e: jmp 0x668ffe */ goto L_00668ffe;
L_00669143:; BB(0x00669143);
    /* 00669143: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0066914a: jmp 0x669155 */ goto L_00669155;
L_0066914c:; BB(0x0066914c);
    /* 0066914c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066914f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00669152: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00669155:; BB(0x00669155);
    /* 00669155: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066915b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066915d: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00669163: mov eax, dword ptr [edx + 0x10c] */ r_eax = R32((u32)(r_edx+0x10cu));
    /* 00669169: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66916bu); call_ind(t); }
    /* 0066916b: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0066916e: jge 0x669201 */ if ((fS==fO)) goto L_00669201;
L_00669174:; BB(0x00669174);
    /* 00669174: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00669177: imul ecx, ecx, 0x4c */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x4cu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0066917a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0066917d: movsx eax, byte ptr [edx + ecx] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+r_ecx));
    /* 00669181: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00669183: je 0x6691fc */ if (fZ) goto L_006691fc;
L_00669185:; BB(0x00669185);
    /* 00669185: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00669188: imul ecx, ecx, 0x4c */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x4cu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0066918b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0066918e: movsx eax, byte ptr [edx + ecx] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+r_ecx));
    /* 00669192: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00669195: je 0x6691fc */ if (fZ) goto L_006691fc;
L_00669197:; BB(0x00669197);
    /* 00669197: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066919a: imul ecx, ecx, 0x4c */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x4cu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0066919d: add ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006691a0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006691a1: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 006691a4: call 0x669450 */ r_esp -= 4; W32(r_esp, 0x6691a9u); f_00669450();
    /* 006691a9: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 006691ac: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006691ae: je 0x6691fc */ if (fZ) goto L_006691fc;
L_006691b0:; BB(0x006691b0);
    /* 006691b0: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 006691b5: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 006691b8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006691bb: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 006691be: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006691c1: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006691c4: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x6691c9u); f_0063aac0();
    /* 006691c9: mov dword ptr [eax], 1 */ W32((u32)(r_eax), 0x1u);
    /* 006691cf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006691d1: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006691d7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006691d9: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006691df: mov eax, dword ptr [edx + 0x370] */ r_eax = R32((u32)(r_edx+0x370u));
    /* 006691e5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6691e7u); call_ind(t); }
    /* 006691e7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006691e8: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006691ee: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 006691f1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006691f4: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 006691f7: call 0x63b490 */ r_esp -= 4; W32(r_esp, 0x6691fcu); f_0063b490();
L_006691fc:; BB(0x006691fc);
    /* 006691fc: jmp 0x66914c */ goto L_0066914c;
L_00669201:; BB(0x00669201);
    /* 00669201: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00669208: jmp 0x669213 */ goto L_00669213;
L_0066920a:; BB(0x0066920a);
    /* 0066920a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066920d: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00669210: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00669213:; BB(0x00669213);
    /* 00669213: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 00669219: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0066921b: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00669221: mov edx, dword ptr [eax + 0x10c] */ r_edx = R32((u32)(r_eax+0x10cu));
    /* 00669227: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x669229u); call_ind(t); }
    /* 00669229: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0066922c: jge 0x669308 */ if ((fS==fO)) goto L_00669308;
L_00669232:; BB(0x00669232);
    /* 00669232: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 00669237: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 0066923a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066923d: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 00669240: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00669243: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00669246: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x66924bu); f_0063aac0();
    /* 0066924b: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0066924d: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00669250: cmp dword ptr [ebp - 0x1c], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00669254: je 0x669272 */ if (fZ) goto L_00669272;
L_00669256:; BB(0x00669256);
    /* 00669256: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00669259: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x66925eu); f_0063aac0();
    /* 0066925e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00669260: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 00669263: cmp dword ptr [ebp - 0x20], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00669267: je 0x669272 */ if (fZ) goto L_00669272;
L_00669269:; BB(0x00669269);
    /* 00669269: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 00669270: jmp 0x669279 */ goto L_00669279;
L_00669272:; BB(0x00669272);
    /* 00669272: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
L_00669279:; BB(0x00669279);
    /* 00669279: movzx eax, byte ptr [ebp - 0x38] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffc8u));
    /* 0066927d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066927f: je 0x66929f */ if (fZ) goto L_0066929f;
L_00669281:; BB(0x00669281);
    /* 00669281: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00669283: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00669285: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00669287: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00669289: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066928b: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00669291: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 00669294: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00669297: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 0066929a: call 0x63a8d0 */ r_esp -= 4; W32(r_esp, 0x66929fu); f_0063a8d0();
L_0066929f:; BB(0x0066929f);
    /* 0066929f: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006692a5: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 006692a8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006692ab: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 006692ae: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 006692b1: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 006692b4: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x6692b9u); f_0063aac0();
    /* 006692b9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006692bb: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 006692be: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006692c0: cmp dword ptr [ebp - 0x28], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006692c4: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 006692c7: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 006692ca: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006692cc: je 0x669303 */ if (fZ) goto L_00669303;
L_006692ce:; BB(0x006692ce);
    /* 006692ce: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 006692d4: mov eax, dword ptr [edx + 0x58] */ r_eax = R32((u32)(r_edx+0x58u));
    /* 006692d7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006692da: mov edx, dword ptr [eax + ecx*4] */ r_edx = R32((u32)(r_eax+r_ecx*4));
    /* 006692dd: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 006692e0: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 006692e3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006692e5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006692e7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006692e9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006692eb: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006692ee: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006692ef: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 006692f5: mov eax, dword ptr [edx + 0x58] */ r_eax = R32((u32)(r_edx+0x58u));
    /* 006692f8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006692fb: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 006692fe: call 0x63a8d0 */ r_esp -= 4; W32(r_esp, 0x669303u); f_0063a8d0();
L_00669303:; BB(0x00669303);
    /* 00669303: jmp 0x66920a */ goto L_0066920a;
L_00669308:; BB(0x00669308);
    /* 00669308: mov esp, ebp */ r_esp = r_ebp;
    /* 0066930a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066930b: ret 4 */ FN_RET(0x00668fa0); r_esp += 8; return;
}

