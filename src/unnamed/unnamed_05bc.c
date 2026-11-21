#include "protos.h"

void f_005bc040(void) /* sub_5BC040 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bc040);
    /* 005bc040: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bc041: mov ebp, esp */ r_ebp = r_esp;
    /* 005bc043: sub esp, 0x168 */ {  u32 a = r_esp; u32 b = 0x168u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005bc049: mov dword ptr [ebp - 0x148], ecx */ W32((u32)(r_ebp+0xfffffeb8u), r_ecx);
    /* 005bc04f: mov eax, dword ptr [ebp - 0x148] */ r_eax = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005bc055: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bc058: je 0x5bc3d4 */ if (fZ) goto L_005bc3d4;
L_005bc05e:; BB(0x005bc05e);
    /* 005bc05e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005bc061: cmp dword ptr [ecx + 4], 0 */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bc065: jne 0x5bc073 */ if (!fZ) goto L_005bc073;
L_005bc067:; BB(0x005bc067);
    /* 005bc067: mov dword ptr [ebp - 0x14c], 0 */ W32((u32)(r_ebp+0xfffffeb4u), 0x0u);
    /* 005bc071: jmp 0x5bc088 */ goto L_005bc088;
L_005bc073:; BB(0x005bc073);
    /* 005bc073: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005bc076: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005bc079: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005bc07c: sub ecx, dword ptr [eax + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005bc07f: sar ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 005bc082: mov dword ptr [ebp - 0x14c], ecx */ W32((u32)(r_ebp+0xfffffeb4u), r_ecx);
L_005bc088:; BB(0x005bc088);
    /* 005bc088: cmp dword ptr [ebp - 0x14c], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffeb4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bc08f: jne 0x5bc0a1 */ if (!fZ) goto L_005bc0a1;
L_005bc091:; BB(0x005bc091);
    /* 005bc091: mov ecx, dword ptr [ebp - 0x148] */ r_ecx = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005bc097: call 0x5bc3e0 */ r_esp -= 4; W32(r_esp, 0x5bc09cu); f_005bc3e0();
    /* 005bc09c: jmp 0x5bc3d4 */ goto L_005bc3d4;
L_005bc0a1:; BB(0x005bc0a1);
    /* 005bc0a1: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005bc0a4: cmp dword ptr [edx + 4], 0 */ {  u32 a = R32((u32)(r_edx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bc0a8: jne 0x5bc0b6 */ if (!fZ) goto L_005bc0b6;
L_005bc0aa:; BB(0x005bc0aa);
    /* 005bc0aa: mov dword ptr [ebp - 0x150], 0 */ W32((u32)(r_ebp+0xfffffeb0u), 0x0u);
    /* 005bc0b4: jmp 0x5bc0cb */ goto L_005bc0cb;
L_005bc0b6:; BB(0x005bc0b6);
    /* 005bc0b6: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005bc0b9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005bc0bc: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 005bc0bf: sub edx, dword ptr [ecx + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005bc0c2: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 005bc0c5: mov dword ptr [ebp - 0x150], edx */ W32((u32)(r_ebp+0xfffffeb0u), r_edx);
L_005bc0cb:; BB(0x005bc0cb);
    /* 005bc0cb: mov eax, dword ptr [ebp - 0x148] */ r_eax = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005bc0d1: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bc0d5: jne 0x5bc0e3 */ if (!fZ) goto L_005bc0e3;
L_005bc0d7:; BB(0x005bc0d7);
    /* 005bc0d7: mov dword ptr [ebp - 0x154], 0 */ W32((u32)(r_ebp+0xfffffeacu), 0x0u);
    /* 005bc0e1: jmp 0x5bc0fe */ goto L_005bc0fe;
L_005bc0e3:; BB(0x005bc0e3);
    /* 005bc0e3: mov ecx, dword ptr [ebp - 0x148] */ r_ecx = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005bc0e9: mov edx, dword ptr [ebp - 0x148] */ r_edx = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005bc0ef: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 005bc0f2: sub eax, dword ptr [edx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005bc0f5: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005bc0f8: mov dword ptr [ebp - 0x154], eax */ W32((u32)(r_ebp+0xfffffeacu), r_eax);
L_005bc0fe:; BB(0x005bc0fe);
    /* 005bc0fe: mov ecx, dword ptr [ebp - 0x150] */ r_ecx = R32((u32)(r_ebp+0xfffffeb0u));
    /* 005bc104: cmp ecx, dword ptr [ebp - 0x154] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffeacu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005bc10a: ja 0x5bc19b */ if ((!fC&&!fZ)) goto L_005bc19b;
L_005bc110:; BB(0x005bc110);
    /* 005bc110: mov edx, dword ptr [ebp - 0x148] */ r_edx = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005bc116: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005bc119: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bc11a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005bc11d: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005bc120: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bc121: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005bc124: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005bc127: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bc128: call 0x5c0980 */ r_esp -= 4; W32(r_esp, 0x5bc12du); f_005c0980();
    /* 005bc12d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bc130: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005bc133: mov edx, dword ptr [ebp - 0x148] */ r_edx = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005bc139: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005bc13c: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 005bc13f: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005bc142: mov dword ptr [ebp - 0x54], ecx */ W32((u32)(r_ebp+0xffffffacu), r_ecx);
    /* 005bc145: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bc148: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 005bc14b: mov al, byte ptr [ebp - 0x4c] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffb4u))) & 0xffu);
    /* 005bc14e: mov byte ptr [ebp - 0x4b], al */ W8((u32)(r_ebp+0xffffffb5u), (u8)r_eax);
    /* 005bc151: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005bc154: cmp dword ptr [ecx + 4], 0 */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bc158: jne 0x5bc166 */ if (!fZ) goto L_005bc166;
L_005bc15a:; BB(0x005bc15a);
    /* 005bc15a: mov dword ptr [ebp - 0x158], 0 */ W32((u32)(r_ebp+0xfffffea8u), 0x0u);
    /* 005bc164: jmp 0x5bc17b */ goto L_005bc17b;
L_005bc166:; BB(0x005bc166);
    /* 005bc166: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005bc169: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005bc16c: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005bc16f: sub ecx, dword ptr [eax + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005bc172: sar ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 005bc175: mov dword ptr [ebp - 0x158], ecx */ W32((u32)(r_ebp+0xfffffea8u), r_ecx);
L_005bc17b:; BB(0x005bc17b);
    /* 005bc17b: mov edx, dword ptr [ebp - 0x148] */ r_edx = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005bc181: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005bc184: mov ecx, dword ptr [ebp - 0x158] */ r_ecx = R32((u32)(r_ebp+0xfffffea8u));
    /* 005bc18a: lea edx, [eax + ecx*4] */ r_edx = (u32)(r_eax+r_ecx*4);
    /* 005bc18d: mov eax, dword ptr [ebp - 0x148] */ r_eax = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005bc193: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 005bc196: jmp 0x5bc3d4 */ goto L_005bc3d4;
L_005bc19b:; BB(0x005bc19b);
    /* 005bc19b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005bc19e: cmp dword ptr [ecx + 4], 0 */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bc1a2: jne 0x5bc1b0 */ if (!fZ) goto L_005bc1b0;
L_005bc1a4:; BB(0x005bc1a4);
    /* 005bc1a4: mov dword ptr [ebp - 0x15c], 0 */ W32((u32)(r_ebp+0xfffffea4u), 0x0u);
    /* 005bc1ae: jmp 0x5bc1c5 */ goto L_005bc1c5;
L_005bc1b0:; BB(0x005bc1b0);
    /* 005bc1b0: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005bc1b3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005bc1b6: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005bc1b9: sub ecx, dword ptr [eax + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005bc1bc: sar ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 005bc1bf: mov dword ptr [ebp - 0x15c], ecx */ W32((u32)(r_ebp+0xfffffea4u), r_ecx);
L_005bc1c5:; BB(0x005bc1c5);
    /* 005bc1c5: mov edx, dword ptr [ebp - 0x148] */ r_edx = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005bc1cb: cmp dword ptr [edx + 4], 0 */ {  u32 a = R32((u32)(r_edx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bc1cf: jne 0x5bc1dd */ if (!fZ) goto L_005bc1dd;
L_005bc1d1:; BB(0x005bc1d1);
    /* 005bc1d1: mov dword ptr [ebp - 0x160], 0 */ W32((u32)(r_ebp+0xfffffea0u), 0x0u);
    /* 005bc1db: jmp 0x5bc1f8 */ goto L_005bc1f8;
L_005bc1dd:; BB(0x005bc1dd);
    /* 005bc1dd: mov eax, dword ptr [ebp - 0x148] */ r_eax = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005bc1e3: mov ecx, dword ptr [ebp - 0x148] */ r_ecx = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005bc1e9: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 005bc1ec: sub edx, dword ptr [ecx + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005bc1ef: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 005bc1f2: mov dword ptr [ebp - 0x160], edx */ W32((u32)(r_ebp+0xfffffea0u), r_edx);
L_005bc1f8:; BB(0x005bc1f8);
    /* 005bc1f8: mov eax, dword ptr [ebp - 0x15c] */ r_eax = R32((u32)(r_ebp+0xfffffea4u));
    /* 005bc1fe: cmp eax, dword ptr [ebp - 0x160] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffea0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005bc204: ja 0x5bc2b6 */ if ((!fC&&!fZ)) goto L_005bc2b6;
L_005bc20a:; BB(0x005bc20a);
    /* 005bc20a: mov ecx, dword ptr [ebp - 0x148] */ r_ecx = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005bc210: cmp dword ptr [ecx + 4], 0 */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bc214: jne 0x5bc222 */ if (!fZ) goto L_005bc222;
L_005bc216:; BB(0x005bc216);
    /* 005bc216: mov dword ptr [ebp - 0x164], 0 */ W32((u32)(r_ebp+0xfffffe9cu), 0x0u);
    /* 005bc220: jmp 0x5bc23d */ goto L_005bc23d;
L_005bc222:; BB(0x005bc222);
    /* 005bc222: mov edx, dword ptr [ebp - 0x148] */ r_edx = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005bc228: mov eax, dword ptr [ebp - 0x148] */ r_eax = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005bc22e: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005bc231: sub ecx, dword ptr [eax + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005bc234: sar ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 005bc237: mov dword ptr [ebp - 0x164], ecx */ W32((u32)(r_ebp+0xfffffe9cu), r_ecx);
L_005bc23d:; BB(0x005bc23d);
    /* 005bc23d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005bc240: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005bc243: mov ecx, dword ptr [ebp - 0x164] */ r_ecx = R32((u32)(r_ebp+0xfffffe9cu));
    /* 005bc249: lea edx, [eax + ecx*4] */ r_edx = (u32)(r_eax+r_ecx*4);
    /* 005bc24c: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005bc24f: mov eax, dword ptr [ebp - 0x148] */ r_eax = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005bc255: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005bc258: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bc259: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bc25c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bc25d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005bc260: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005bc263: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bc264: call 0x5c0980 */ r_esp -= 4; W32(r_esp, 0x5bc269u); f_005c0980();
    /* 005bc269: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bc26c: mov edx, dword ptr [ebp - 0x148] */ r_edx = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005bc272: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005bc275: mov dword ptr [ebp - 0xa4], eax */ W32((u32)(r_ebp+0xffffff5cu), r_eax);
    /* 005bc27b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005bc27e: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005bc281: mov dword ptr [ebp - 0xa0], edx */ W32((u32)(r_ebp+0xffffff60u), r_edx);
    /* 005bc287: mov eax, dword ptr [ebp - 0x148] */ r_eax = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005bc28d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bc28e: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 005bc294: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bc295: mov edx, dword ptr [ebp - 0xa0] */ r_edx = R32((u32)(r_ebp+0xffffff60u));
    /* 005bc29b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bc29c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bc29f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bc2a0: call 0x5bf010 */ r_esp -= 4; W32(r_esp, 0x5bc2a5u); f_005bf010();
    /* 005bc2a5: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bc2a8: mov ecx, dword ptr [ebp - 0x148] */ r_ecx = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005bc2ae: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 005bc2b1: jmp 0x5bc3d4 */ goto L_005bc3d4;
L_005bc2b6:; BB(0x005bc2b6);
    /* 005bc2b6: mov edx, dword ptr [ebp - 0x148] */ r_edx = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005bc2bc: cmp dword ptr [edx + 4], 0 */ {  u32 a = R32((u32)(r_edx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bc2c0: je 0x5bc33d */ if (fZ) goto L_005bc33d;
L_005bc2c2:; BB(0x005bc2c2);
    /* 005bc2c2: mov eax, dword ptr [ebp - 0x148] */ r_eax = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005bc2c8: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005bc2cb: mov dword ptr [ebp - 0xb8], ecx */ W32((u32)(r_ebp+0xffffff48u), r_ecx);
    /* 005bc2d1: mov edx, dword ptr [ebp - 0x148] */ r_edx = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005bc2d7: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005bc2da: mov dword ptr [ebp - 0xb4], eax */ W32((u32)(r_ebp+0xffffff4cu), r_eax);
    /* 005bc2e0: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 005bc2e6: mov dword ptr [ebp - 0xb0], ecx */ W32((u32)(r_ebp+0xffffff50u), r_ecx);
    /* 005bc2ec: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 005bc2f2: mov dword ptr [ebp - 0xac], edx */ W32((u32)(r_ebp+0xffffff54u), r_edx);
    /* 005bc2f8: mov al, byte ptr [ebp - 0xa6] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffff5au))) & 0xffu);
    /* 005bc2fe: mov byte ptr [ebp - 0xa5], al */ W8((u32)(r_ebp+0xffffff5bu), (u8)r_eax);
    /* 005bc304: mov ecx, dword ptr [ebp - 0x148] */ r_ecx = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005bc30a: mov edx, dword ptr [ebp - 0x148] */ r_edx = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005bc310: mov eax, dword ptr [ecx + 0xc] */ r_eax = R32((u32)(r_ecx+0xcu));
    /* 005bc313: sub eax, dword ptr [edx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005bc316: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005bc319: mov dword ptr [ebp - 0xc0], eax */ W32((u32)(r_ebp+0xffffff40u), r_eax);
    /* 005bc31f: mov ecx, dword ptr [ebp - 0x148] */ r_ecx = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005bc325: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005bc328: mov dword ptr [ebp - 0xbc], edx */ W32((u32)(r_ebp+0xffffff44u), r_edx);
    /* 005bc32e: mov eax, dword ptr [ebp - 0xbc] */ r_eax = R32((u32)(r_ebp+0xffffff44u));
    /* 005bc334: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bc335: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x5bc33au); f_00686cae();
    /* 005bc33a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005bc33d:; BB(0x005bc33d);
    /* 005bc33d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005bc340: cmp dword ptr [ecx + 4], 0 */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bc344: jne 0x5bc352 */ if (!fZ) goto L_005bc352;
L_005bc346:; BB(0x005bc346);
    /* 005bc346: mov dword ptr [ebp - 0x168], 0 */ W32((u32)(r_ebp+0xfffffe98u), 0x0u);
    /* 005bc350: jmp 0x5bc367 */ goto L_005bc367;
L_005bc352:; BB(0x005bc352);
    /* 005bc352: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005bc355: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005bc358: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005bc35b: sub ecx, dword ptr [eax + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005bc35e: sar ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 005bc361: mov dword ptr [ebp - 0x168], ecx */ W32((u32)(r_ebp+0xfffffe98u), r_ecx);
L_005bc367:; BB(0x005bc367);
    /* 005bc367: mov edx, dword ptr [ebp - 0x168] */ r_edx = R32((u32)(r_ebp+0xfffffe98u));
    /* 005bc36d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bc36e: mov ecx, dword ptr [ebp - 0x148] */ r_ecx = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005bc374: call 0x5bbd80 */ r_esp -= 4; W32(r_esp, 0x5bc379u); f_005bbd80();
    /* 005bc379: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005bc37c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bc37e: je 0x5bc3d4 */ if (fZ) goto L_005bc3d4;
L_005bc380:; BB(0x005bc380);
    /* 005bc380: mov ecx, dword ptr [ebp - 0x148] */ r_ecx = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005bc386: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005bc389: mov dword ptr [ebp - 0x144], edx */ W32((u32)(r_ebp+0xfffffebcu), r_edx);
    /* 005bc38f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005bc392: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005bc395: mov dword ptr [ebp - 0x140], ecx */ W32((u32)(r_ebp+0xfffffec0u), r_ecx);
    /* 005bc39b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005bc39e: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005bc3a1: mov dword ptr [ebp - 0x13c], eax */ W32((u32)(r_ebp+0xfffffec4u), r_eax);
    /* 005bc3a7: mov ecx, dword ptr [ebp - 0x148] */ r_ecx = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005bc3ad: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bc3ae: mov edx, dword ptr [ebp - 0x144] */ r_edx = R32((u32)(r_ebp+0xfffffebcu));
    /* 005bc3b4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bc3b5: mov eax, dword ptr [ebp - 0x140] */ r_eax = R32((u32)(r_ebp+0xfffffec0u));
    /* 005bc3bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bc3bc: mov ecx, dword ptr [ebp - 0x13c] */ r_ecx = R32((u32)(r_ebp+0xfffffec4u));
    /* 005bc3c2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bc3c3: call 0x5bf010 */ r_esp -= 4; W32(r_esp, 0x5bc3c8u); f_005bf010();
    /* 005bc3c8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bc3cb: mov edx, dword ptr [ebp - 0x148] */ r_edx = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005bc3d1: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
L_005bc3d4:; BB(0x005bc3d4);
    /* 005bc3d4: mov eax, dword ptr [ebp - 0x148] */ r_eax = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005bc3da: mov esp, ebp */ r_esp = r_ebp;
    /* 005bc3dc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bc3dd: ret 4 */ FN_RET(0x005bc040); r_esp += 8; return;
}

void f_005bc3e0(void) /* sub_5BC3E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bc3e0);
    /* 005bc3e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bc3e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005bc3e3: sub esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005bc3e6: mov dword ptr [ebp - 0x58], ecx */ W32((u32)(r_ebp+0xffffffa8u), r_ecx);
    /* 005bc3e9: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 005bc3ec: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005bc3ef: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005bc3f2: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005bc3f9: cmp dword ptr [ebp - 0x58], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bc3fd: je 0x5bc415 */ if (fZ) goto L_005bc415;
L_005bc3ff:; BB(0x005bc3ff);
    /* 005bc3ff: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005bc402: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005bc405: cmp eax, dword ptr [ebp - 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005bc408: ja 0x5bc415 */ if ((!fC&&!fZ)) goto L_005bc415;
L_005bc40a:; BB(0x005bc40a);
    /* 005bc40a: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005bc40d: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005bc410: cmp edx, dword ptr [ecx + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005bc413: jbe 0x5bc41b */ if ((fC||fZ)) goto L_005bc41b;
L_005bc415:; BB(0x005bc415);
    /* 005bc415: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x5bc41bu); call_ind(t); }
L_005bc41b:; BB(0x005bc41b);
    /* 005bc41b: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 005bc41e: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005bc421: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005bc424: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005bc427: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005bc42a: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005bc42d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005bc430: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005bc437: cmp dword ptr [ebp - 0x58], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bc43b: je 0x5bc453 */ if (fZ) goto L_005bc453;
L_005bc43d:; BB(0x005bc43d);
    /* 005bc43d: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005bc440: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005bc443: cmp edx, dword ptr [ebp - 0x20] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005bc446: ja 0x5bc453 */ if ((!fC&&!fZ)) goto L_005bc453;
L_005bc448:; BB(0x005bc448);
    /* 005bc448: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 005bc44b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005bc44e: cmp ecx, dword ptr [eax + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005bc451: jbe 0x5bc459 */ if ((fC||fZ)) goto L_005bc459;
L_005bc453:; BB(0x005bc453);
    /* 005bc453: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x5bc459u); call_ind(t); }
L_005bc459:; BB(0x005bc459);
    /* 005bc459: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005bc45c: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 005bc45f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005bc462: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005bc465: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bc468: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bc469: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bc46c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bc46d: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bc470: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bc471: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bc474: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bc475: lea edx, [ebp - 0x18] */ r_edx = (u32)(r_ebp+0xffffffe8u);
    /* 005bc478: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bc479: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005bc47c: call 0x5bc490 */ r_esp -= 4; W32(r_esp, 0x5bc481u); f_005bc490();
    /* 005bc481: mov esp, ebp */ r_esp = r_ebp;
    /* 005bc483: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bc484: ret  */ FN_RET(0x005bc3e0); r_esp += 4; return;
}

void f_005bc490(void) /* sub_5BC490 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bc490);
    /* 005bc490: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bc491: mov ebp, esp */ r_ebp = r_esp;
    /* 005bc493: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005bc496: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 005bc499: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bc49d: je 0x5bc4a7 */ if (fZ) goto L_005bc4a7;
L_005bc49f:; BB(0x005bc49f);
    /* 005bc49f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005bc4a2: cmp eax, dword ptr [ebp + 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x14u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bc4a5: je 0x5bc4ad */ if (fZ) goto L_005bc4ad;
L_005bc4a7:; BB(0x005bc4a7);
    /* 005bc4a7: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x5bc4adu); call_ind(t); }
L_005bc4ad:; BB(0x005bc4ad);
    /* 005bc4ad: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005bc4b0: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005bc4b2: cmp ecx, dword ptr [ebp + 0x18] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x18u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bc4b5: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 005bc4b8: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 005bc4bb: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 005bc4bd: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 005bc4bf: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005bc4c2: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005bc4c5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bc4c7: je 0x5bc507 */ if (fZ) goto L_005bc507;
L_005bc4c9:; BB(0x005bc4c9);
    /* 005bc4c9: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005bc4cc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bc4cd: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005bc4d0: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005bc4d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bc4d4: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 005bc4d7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bc4d8: call 0x5c0980 */ r_esp -= 4; W32(r_esp, 0x5bc4ddu); f_005c0980();
    /* 005bc4dd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bc4e0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005bc4e3: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005bc4e6: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005bc4e9: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 005bc4ec: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005bc4ef: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 005bc4f2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bc4f5: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005bc4f8: mov cl, byte ptr [ebp - 0x28] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffd8u))) & 0xffu);
    /* 005bc4fb: mov byte ptr [ebp - 0x27], cl */ W8((u32)(r_ebp+0xffffffd9u), (u8)r_ecx);
    /* 005bc4fe: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005bc501: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bc504: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
L_005bc507:; BB(0x005bc507);
    /* 005bc507: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005bc50a: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005bc50d: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 005bc50f: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005bc512: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 005bc515: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005bc518: mov esp, ebp */ r_esp = r_ebp;
    /* 005bc51a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bc51b: ret 0x14 */ FN_RET(0x005bc490); r_esp += 24; return;
}

void f_005bc520(void) /* sub_5BC520 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bc520);
    /* 005bc520: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bc521: mov ebp, esp */ r_ebp = r_esp;
    /* 005bc523: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005bc525: push 0x6a80b9 */ { u32 v = 0x6a80b9u; r_esp -= 4; W32(r_esp, v); }
    /* 005bc52a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005bc530: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bc531: sub esp, 0x184 */ {  u32 a = r_esp; u32 b = 0x184u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005bc537: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005bc53c: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005bc53e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bc53f: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005bc542: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005bc548: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005bc54b: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005bc54e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bc551: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005bc554: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005bc55b: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bc55f: je 0x5bc590 */ if (fZ) goto L_005bc590;
L_005bc561:; BB(0x005bc561);
    /* 005bc561: lea edx, [ebp - 0x21] */ r_edx = (u32)(r_ebp+0xffffffdfu);
    /* 005bc564: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 005bc567: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bc569: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005bc56c: call 0x5bbd80 */ r_esp -= 4; W32(r_esp, 0x5bc571u); f_005bbd80();
    /* 005bc571: mov byte ptr [ebp - 4], 1 */ W8((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005bc575: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005bc578: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bc579: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005bc57c: call 0x5bc040 */ r_esp -= 4; W32(r_esp, 0x5bc581u); f_005bc040();
    /* 005bc581: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005bc585: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005bc588: mov dword ptr [ebp - 0x190], ecx */ W32((u32)(r_ebp+0xfffffe70u), r_ecx);
    /* 005bc58e: jmp 0x5bc59a */ goto L_005bc59a;
L_005bc590:; BB(0x005bc590);
    /* 005bc590: mov dword ptr [ebp - 0x190], 0 */ W32((u32)(r_ebp+0xfffffe70u), 0x0u);
L_005bc59a:; BB(0x005bc59a);
    /* 005bc59a: mov edx, dword ptr [ebp - 0x190] */ r_edx = R32((u32)(r_ebp+0xfffffe70u));
    /* 005bc5a0: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005bc5a3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005bc5aa: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bc5ad: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005bc5b4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005bc5b5: mov esp, ebp */ r_esp = r_ebp;
    /* 005bc5b7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bc5b8: ret  */ FN_RET(0x005bc520); r_esp += 4; return;
}

void f_005bc5c0(void) /* sub_5BC5C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bc5c0);
    /* 005bc5c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bc5c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005bc5c3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bc5c4: ret  */ FN_RET(0x005bc5c0); r_esp += 4; return;
}

void f_005bc5d0(void) /* sub_5BC5D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bc5d0);
    /* 005bc5d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bc5d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005bc5d3: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005bc5d6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005bc5d8: mov byte ptr [ebp - 1], al */ W8((u32)(r_ebp+0xffffffffu), (u8)r_eax);
    /* 005bc5db: mov cl, byte ptr [ebp - 3] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffffdu))) & 0xffu);
    /* 005bc5de: mov byte ptr [ebp - 2], cl */ W8((u32)(r_ebp+0xfffffffeu), (u8)r_ecx);
    /* 005bc5e1: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005bc5e4: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005bc5e7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005bc5ea: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005bc5ed: mov cl, byte ptr [ebp - 1] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffffu))) & 0xffu);
    /* 005bc5f0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bc5f1: mov dl, byte ptr [ebp - 2] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffffeu))) & 0xffu);
    /* 005bc5f4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bc5f5: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 005bc5f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bc5f9: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005bc5fc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bc5fd: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bc600: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bc601: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bc604: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bc605: call 0x5bc620 */ r_esp -= 4; W32(r_esp, 0x5bc60au); f_005bc620();
    /* 005bc60a: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bc60d: mov esp, ebp */ r_esp = r_ebp;
    /* 005bc60f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bc610: ret  */ FN_RET(0x005bc5d0); r_esp += 4; return;
}

void f_005bc620(void) /* sub_5BC620 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bc620);
    /* 005bc620: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bc621: mov ebp, esp */ r_ebp = r_esp;
    /* 005bc623: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005bc625: push 0x6a80e0 */ { u32 v = 0x6a80e0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bc62a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005bc630: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bc631: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bc632: sub esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005bc638: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005bc639: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005bc63a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005bc63b: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005bc640: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005bc642: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bc643: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005bc646: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005bc64c: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005bc64f: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005bc652: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005bc655: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005bc65c: jmp 0x5bc670 */ goto L_005bc670;
L_005bc65e:; BB(0x005bc65e);
    /* 005bc65e: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005bc661: add ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005bc664: mov dword ptr [ebp + 0x10], ecx */ W32((u32)(r_ebp+0x10u), r_ecx);
    /* 005bc667: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005bc66a: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005bc66d: mov dword ptr [ebp + 8], edx */ W32((u32)(r_ebp+0x8u), r_edx);
L_005bc670:; BB(0x005bc670);
    /* 005bc670: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005bc673: cmp eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bc676: je 0x5bc68a */ if (fZ) goto L_005bc68a;
L_005bc678:; BB(0x005bc678);
    /* 005bc678: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005bc67b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bc67c: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005bc67f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bc680: call 0x5bc520 */ r_esp -= 4; W32(r_esp, 0x5bc685u); f_005bc520();
    /* 005bc685: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bc688: jmp 0x5bc65e */ goto L_005bc65e;
L_005bc68a:; BB(0x005bc68a);
    /* 005bc68a: jmp 0x5bc6d2 */ goto L_005bc6d2;
L_005bc6d2:; BB(0x005bc6d2);
    /* 005bc6d2: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005bc6d9: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005bc6dc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bc6df: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005bc6e6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005bc6e7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005bc6e8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005bc6e9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005bc6ea: mov esp, ebp */ r_esp = r_ebp;
    /* 005bc6ec: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bc6ed: ret  */ FN_RET(0x005bc620); r_esp += 4; return;
}

void f_005bc6f0(void) /* sub_5BC6F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bc6f0);
    /* 005bc6f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bc6f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005bc6f3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005bc6f6: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005bc6f9: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005bc6fc: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005bc6ff: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005bc702: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bc705: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bc708: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 005bc70b: sub ecx, dword ptr [eax + 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x10u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005bc70e: mov eax, ecx */ r_eax = r_ecx;
    /* 005bc710: mov esp, ebp */ r_esp = r_ebp;
    /* 005bc712: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bc713: ret  */ FN_RET(0x005bc6f0); r_esp += 4; return;
}

void f_005bc720(void) /* sub_5BC720 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bc720);
    /* 005bc720: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bc721: mov ebp, esp */ r_ebp = r_esp;
    /* 005bc723: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005bc725: push 0x6a810b */ { u32 v = 0x6a810bu; r_esp -= 4; W32(r_esp, v); }
    /* 005bc72a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005bc730: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bc731: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005bc734: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005bc739: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005bc73b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bc73c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005bc73f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005bc745: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005bc74c: jmp 0x5bc757 */ goto L_005bc757;
L_005bc74e:; BB(0x005bc74e);
    /* 005bc74e: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bc751: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005bc754: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_005bc757:; BB(0x005bc757);
    /* 005bc757: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bc75a: imul ecx, ecx, 0x108 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x108u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005bc760: cmp dword ptr [ecx + 0x758d20], 0 */ {  u32 a = R32((u32)(r_ecx+0x758d20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bc767: je 0x5bc7dc */ if (fZ) goto L_005bc7dc;
L_005bc769:; BB(0x005bc769);
    /* 005bc769: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bc76c: imul edx, edx, 0x108 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x108u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005bc772: mov eax, dword ptr [edx + 0x758d20] */ r_eax = R32((u32)(r_edx+0x758d20u));
    /* 005bc778: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bc77b: jne 0x5bc7d7 */ if (!fZ) goto L_005bc7d7;
L_005bc77d:; BB(0x005bc77d);
    /* 005bc77d: push 0x70 */ { u32 v = 0x70u; r_esp -= 4; W32(r_esp, v); }
    /* 005bc77f: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5bc784u); f_00686d82();
    /* 005bc784: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bc787: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005bc78a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005bc791: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bc795: je 0x5bc7a4 */ if (fZ) goto L_005bc7a4;
L_005bc797:; BB(0x005bc797);
    /* 005bc797: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005bc79a: call 0x5bc7f0 */ r_esp -= 4; W32(r_esp, 0x5bc79fu); f_005bc7f0();
    /* 005bc79f: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005bc7a2: jmp 0x5bc7ab */ goto L_005bc7ab;
L_005bc7a4:; BB(0x005bc7a4);
    /* 005bc7a4: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_005bc7ab:; BB(0x005bc7ab);
    /* 005bc7ab: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005bc7ae: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005bc7b1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005bc7b8: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005bc7bb: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005bc7be: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bc7c1: imul eax, eax, 0x108 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x108u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005bc7c7: add eax, 0x758d20 */ {  u32 a = r_eax; u32 b = 0x758d20u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005bc7cc: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005bc7cf: mov dword ptr [ecx + 0x50], eax */ W32((u32)(r_ecx+0x50u), r_eax);
    /* 005bc7d2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005bc7d5: jmp 0x5bc7de */ goto L_005bc7de;
L_005bc7d7:; BB(0x005bc7d7);
    /* 005bc7d7: jmp 0x5bc74e */ goto L_005bc74e;
L_005bc7dc:; BB(0x005bc7dc);
    /* 005bc7dc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005bc7de:; BB(0x005bc7de);
    /* 005bc7de: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bc7e1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005bc7e8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005bc7e9: mov esp, ebp */ r_esp = r_ebp;
    /* 005bc7eb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bc7ec: ret  */ FN_RET(0x005bc720); r_esp += 4; return;
}

void f_005bceb0(void) /* sub_5BCEB0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bceb0);
    /* 005bceb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bceb1: mov ebp, esp */ r_ebp = r_esp;
    /* 005bceb3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bceb4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005bceb7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bceba: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bcebc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bcebf: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005bcec2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5bcec4u); call_ind(t); }
    /* 005bcec4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bcec7: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005bceca: mov dword ptr [ecx + 0x54], edx */ W32((u32)(r_ecx+0x54u), r_edx);
    /* 005bcecd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bced0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bced2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bced5: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005bced8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5bcedau); call_ind(t); }
    /* 005bceda: mov esp, ebp */ r_esp = r_ebp;
    /* 005bcedc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bcedd: ret 4 */ FN_RET(0x005bceb0); r_esp += 8; return;
}

void f_005bcee0(void) /* sub_5BCEE0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bcee0);
    /* 005bcee0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bcee1: mov ebp, esp */ r_ebp = r_esp;
    /* 005bcee3: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005bcee6: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005bcee9: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005bceec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bceed: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005bcef0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bcef1: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005bcef4: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 005bcef7: call 0x5be340 */ r_esp -= 4; W32(r_esp, 0x5bcefcu); f_005be340();
    /* 005bcefc: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005bceff: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005bcf02: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 005bcf05: add ecx, 0x2c */ {  u32 a = r_ecx; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005bcf08: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005bcf0b: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005bcf0d: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 005bcf0f: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 005bcf12: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 005bcf15: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 005bcf18: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 005bcf1b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005bcf1e: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 005bcf21: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 005bcf24: imul ecx, dword ptr [ebp - 4] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0xfffffffcu)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005bcf28: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005bcf2b: add ecx, dword ptr [edx] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005bcf2d: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005bcf30: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 005bcf32: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005bcf35: mov edx, dword ptr [ecx + 0x50] */ r_edx = R32((u32)(r_ecx+0x50u));
    /* 005bcf38: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 005bcf3b: imul eax, dword ptr [ebp - 4] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xfffffffcu)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005bcf3f: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005bcf42: add eax, dword ptr [ecx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005bcf45: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005bcf48: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 005bcf4b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005bcf4e: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 005bcf51: mov edx, dword ptr [ecx + 0x40] */ r_edx = R32((u32)(r_ecx+0x40u));
    /* 005bcf54: imul edx, dword ptr [ebp - 4] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_ebp+0xfffffffcu)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005bcf58: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005bcf5b: add edx, dword ptr [eax + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005bcf5e: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005bcf61: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 005bcf64: mov esp, ebp */ r_esp = r_ebp;
    /* 005bcf66: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bcf67: ret 0xc */ FN_RET(0x005bcee0); r_esp += 16; return;
}

void f_005bcf70(void) /* sub_5BCF70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bcf70);
    /* 005bcf70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bcf71: mov ebp, esp */ r_ebp = r_esp;
    /* 005bcf73: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005bcf75: push 0x6a81cc */ { u32 v = 0x6a81ccu; r_esp -= 4; W32(r_esp, v); }
    /* 005bcf7a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005bcf80: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bcf81: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005bcf84: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005bcf89: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005bcf8b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bcf8c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005bcf8f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005bcf95: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 005bcf98: lea eax, [ebp - 0x1c] */ r_eax = (u32)(r_ebp+0xffffffe4u);
    /* 005bcf9b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bcf9c: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005bcf9f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bcfa0: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005bcfa3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bcfa4: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005bcfa7: call 0x5bcee0 */ r_esp -= 4; W32(r_esp, 0x5bcfacu); f_005bcee0();
    /* 005bcfac: push 0x190 */ { u32 v = 0x190u; r_esp -= 4; W32(r_esp, v); }
    /* 005bcfb1: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5bcfb6u); f_00686d82();
    /* 005bcfb6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bcfb9: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005bcfbc: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005bcfc3: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bcfc7: je 0x5bcfd6 */ if (fZ) goto L_005bcfd6;
L_005bcfc9:; BB(0x005bcfc9);
    /* 005bcfc9: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005bcfcc: call 0x5f5f50 */ r_esp -= 4; W32(r_esp, 0x5bcfd1u); f_005f5f50();
    /* 005bcfd1: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005bcfd4: jmp 0x5bcfdd */ goto L_005bcfdd;
L_005bcfd6:; BB(0x005bcfd6);
    /* 005bcfd6: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_005bcfdd:; BB(0x005bcfdd);
    /* 005bcfdd: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005bcfe0: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005bcfe3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005bcfea: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005bcfed: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005bcff0: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005bcff3: add edx, 0x3158dc */ {  u32 a = r_edx; u32 b = 0x3158dcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005bcff9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bcffa: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 005bcffc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bcffe: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bd000: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005bd003: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bd004: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bd007: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x5bd00cu); f_005eae80();
    /* 005bd00c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005bd00f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bd010: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bd013: call 0x5eb000 */ r_esp -= 4; W32(r_esp, 0x5bd018u); f_005eb000();
    /* 005bd018: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005bd01b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bd01c: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bd01f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bd021: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bd024: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005bd02a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5bd02cu); call_ind(t); }
    /* 005bd02c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bd02f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005bd031: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bd034: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005bd037: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5bd039u); call_ind(t); }
    /* 005bd039: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bd03c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bd03f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005bd046: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005bd047: mov esp, ebp */ r_esp = r_ebp;
    /* 005bd049: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bd04a: ret 8 */ FN_RET(0x005bcf70); r_esp += 12; return;
}

