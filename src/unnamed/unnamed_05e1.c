#include "protos.h"

void f_005e1070(void) /* sub_5E1070 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e1070);
    /* 005e1070: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e1071: mov ebp, esp */ r_ebp = r_esp;
    /* 005e1073: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e1074: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e1077: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e107a: mov ecx, dword ptr [eax + 0x98] */ r_ecx = R32((u32)(r_eax+0x98u));
    /* 005e1080: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e1083: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e1086: mov dword ptr [edx + 0x98], ecx */ W32((u32)(r_edx+0x98u), r_ecx);
    /* 005e108c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e108f: cmp dword ptr [eax + 0x98], 0x3e9 */ {  u32 a = R32((u32)(r_eax+0x98u)); u32 b = 0x3e9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e1099: jne 0x5e10a8 */ if (!fZ) goto L_005e10a8;
L_005e109b:; BB(0x005e109b);
    /* 005e109b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e109e: mov dword ptr [ecx + 0x98], 1 */ W32((u32)(r_ecx+0x98u), 0x1u);
L_005e10a8:; BB(0x005e10a8);
    /* 005e10a8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e10ab: call 0x5e0df0 */ r_esp -= 4; W32(r_esp, 0x5e10b0u); f_005e0df0();
    /* 005e10b0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e10b3: call 0x5e1100 */ r_esp -= 4; W32(r_esp, 0x5e10b8u); f_005e1100();
    /* 005e10b8: cmp dword ptr [0x793584], 0 */ {  u32 a = R32((u32)(0x793584u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e10bf: je 0x5e10cc */ if (fZ) goto L_005e10cc;
L_005e10c1:; BB(0x005e10c1);
    /* 005e10c1: mov ecx, dword ptr [0x793584] */ r_ecx = R32((u32)(0x793584u));
    /* 005e10c7: call 0x5891b0 */ r_esp -= 4; W32(r_esp, 0x5e10ccu); f_005891b0();
L_005e10cc:; BB(0x005e10cc);
    /* 005e10cc: mov esp, ebp */ r_esp = r_ebp;
    /* 005e10ce: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e10cf: ret  */ FN_RET(0x005e1070); r_esp += 4; return;
}

void f_005e10d0(void) /* sub_5E10D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e10d0);
    /* 005e10d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e10d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005e10d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e10d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e10d7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e10da: cmp dword ptr [eax + 0x98], 1 */ {  u32 a = R32((u32)(r_eax+0x98u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e10e1: jne 0x5e10ea */ if (!fZ) goto L_005e10ea;
L_005e10e3:; BB(0x005e10e3);
    /* 005e10e3: mov eax, 0x3e8 */ r_eax = 0x3e8u;
    /* 005e10e8: jmp 0x5e10f6 */ goto L_005e10f6;
L_005e10ea:; BB(0x005e10ea);
    /* 005e10ea: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e10ed: mov eax, dword ptr [ecx + 0x98] */ r_eax = R32((u32)(r_ecx+0x98u));
    /* 005e10f3: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
L_005e10f6:; BB(0x005e10f6);
    /* 005e10f6: mov esp, ebp */ r_esp = r_ebp;
    /* 005e10f8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e10f9: ret  */ FN_RET(0x005e10d0); r_esp += 4; return;
}

void f_005e1100(void) /* sub_5E1100 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e1100);
    /* 005e1100: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e1101: mov ebp, esp */ r_ebp = r_esp;
    /* 005e1103: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e1105: push 0x6a960f */ { u32 v = 0x6a960fu; r_esp -= 4; W32(r_esp, v); }
    /* 005e110a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005e1110: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e1111: sub esp, 0x520 */ {  u32 a = r_esp; u32 b = 0x520u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e1117: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005e111c: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005e111e: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005e1121: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e1122: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005e1125: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005e112b: mov dword ptr [ebp - 0x52c], ecx */ W32((u32)(r_ebp+0xfffffad4u), r_ecx);
    /* 005e1131: lea ecx, [ebp - 0x50c] */ r_ecx = (u32)(r_ebp+0xfffffaf4u);
    /* 005e1137: call 0x5d4cf0 */ r_esp -= 4; W32(r_esp, 0x5e113cu); f_005d4cf0();
    /* 005e113c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e1143: mov dword ptr [ebp - 0x510], 0 */ W32((u32)(r_ebp+0xfffffaf0u), 0x0u);
    /* 005e114d: jmp 0x5e115e */ goto L_005e115e;
L_005e114f:; BB(0x005e114f);
    /* 005e114f: mov eax, dword ptr [ebp - 0x510] */ r_eax = R32((u32)(r_ebp+0xfffffaf0u));
    /* 005e1155: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e1158: mov dword ptr [ebp - 0x510], eax */ W32((u32)(r_ebp+0xfffffaf0u), r_eax);
L_005e115e:; BB(0x005e115e);
    /* 005e115e: cmp dword ptr [ebp - 0x510], 0x64 */ {  u32 a = R32((u32)(r_ebp+0xfffffaf0u)); u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e1165: jge 0x5e1206 */ if ((fS==fO)) goto L_005e1206;
L_005e116b:; BB(0x005e116b);
    /* 005e116b: mov ecx, dword ptr [ebp - 0x510] */ r_ecx = R32((u32)(r_ebp+0xfffffaf0u));
    /* 005e1171: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e1172: push 0x6d44ec */ { u32 v = 0x6d44ecu; r_esp -= 4; W32(r_esp, v); }
    /* 005e1177: lea edx, [ebp - 0x524] */ r_edx = (u32)(r_ebp+0xfffffadcu);
    /* 005e117d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e117e: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x5e1184u); call_ind(t); }
    /* 005e1184: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e1187: push 0x6c2d28 */ { u32 v = 0x6c2d28u; r_esp -= 4; W32(r_esp, v); }
    /* 005e118c: lea eax, [ebp - 0x524] */ r_eax = (u32)(r_ebp+0xfffffadcu);
    /* 005e1192: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e1193: call 0x5ea9c0 */ r_esp -= 4; W32(r_esp, 0x5e1198u); f_005ea9c0();
    /* 005e1198: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e119b: mov dword ptr [ebp - 0x514], eax */ W32((u32)(r_ebp+0xfffffaecu), r_eax);
    /* 005e11a1: cmp dword ptr [ebp - 0x514], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffaecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e11a8: je 0x5e1201 */ if (fZ) goto L_005e1201;
L_005e11aa:; BB(0x005e11aa);
    /* 005e11aa: mov ecx, dword ptr [ebp - 0x514] */ r_ecx = R32((u32)(r_ebp+0xfffffaecu));
    /* 005e11b0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e11b1: call dword ptr [0x6b2258] */ { u32 t = R32((u32)(0x6b2258u)); r_esp -= 4; W32(r_esp, 0x5e11b7u); call_ind(t); }
    /* 005e11b7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e11ba: lea edx, [ebp - 0x524] */ r_edx = (u32)(r_ebp+0xfffffadcu);
    /* 005e11c0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e11c1: lea ecx, [ebp - 0x50c] */ r_ecx = (u32)(r_ebp+0xfffffaf4u);
    /* 005e11c7: call 0x63ab10 */ r_esp -= 4; W32(r_esp, 0x5e11ccu); f_0063ab10();
    /* 005e11cc: lea ecx, [ebp - 0x50c] */ r_ecx = (u32)(r_ebp+0xfffffaf4u);
    /* 005e11d2: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5e11d7u); f_0063aac0();
    /* 005e11d7: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e11da: mov dword ptr [ebp - 0x528], eax */ W32((u32)(r_ebp+0xfffffad8u), r_eax);
    /* 005e11e0: lea ecx, [ebp - 0x50c] */ r_ecx = (u32)(r_ebp+0xfffffaf4u);
    /* 005e11e6: call 0x5d52e0 */ r_esp -= 4; W32(r_esp, 0x5e11ebu); f_005d52e0();
    /* 005e11eb: add eax, 0x60 */ {  u32 a = r_eax; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e11ee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e11ef: mov eax, dword ptr [ebp - 0x528] */ r_eax = R32((u32)(r_ebp+0xfffffad8u));
    /* 005e11f5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e11f6: mov ecx, dword ptr [ebp - 0x52c] */ r_ecx = R32((u32)(r_ebp+0xfffffad4u));
    /* 005e11fc: call 0x5e1240 */ r_esp -= 4; W32(r_esp, 0x5e1201u); f_005e1240();
L_005e1201:; BB(0x005e1201);
    /* 005e1201: jmp 0x5e114f */ goto L_005e114f;
L_005e1206:; BB(0x005e1206);
    /* 005e1206: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005e120d: lea ecx, [ebp - 0x50c] */ r_ecx = (u32)(r_ebp+0xfffffaf4u);
    /* 005e1213: call 0x5d4f50 */ r_esp -= 4; W32(r_esp, 0x5e1218u); f_005d4f50();
    /* 005e1218: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e121b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005e1222: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e1223: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e1226: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005e1228: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x5e122du); f_00686d72();
    /* 005e122d: mov esp, ebp */ r_esp = r_ebp;
    /* 005e122f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e1230: ret  */ FN_RET(0x005e1100); r_esp += 4; return;
}

void f_005e1410(void) /* sub_5E1410 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e1410);
    /* 005e1410: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e1411: mov ebp, esp */ r_ebp = r_esp;
    /* 005e1413: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e1416: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 005e1419: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e141c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e141d: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5e1422u); f_005dcb00();
    /* 005e1422: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e1425: mov ecx, eax */ r_ecx = r_eax;
    /* 005e1427: call 0x5d52e0 */ r_esp -= 4; W32(r_esp, 0x5e142cu); f_005d52e0();
    /* 005e142c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005e142f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e1432: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e1433: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5e1438u); f_005dcb00();
    /* 005e1438: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e143b: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005e143e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005e1441: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5e1446u); f_0063aac0();
    /* 005e1446: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e1448: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 005e144b: cmp dword ptr [ebp - 0x1c], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e144f: je 0x5e146d */ if (fZ) goto L_005e146d;
L_005e1451:; BB(0x005e1451);
    /* 005e1451: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005e1454: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5e1459u); f_0063aac0();
    /* 005e1459: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005e145b: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005e145e: cmp dword ptr [ebp - 0x20], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e1462: je 0x5e146d */ if (fZ) goto L_005e146d;
L_005e1464:; BB(0x005e1464);
    /* 005e1464: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 005e146b: jmp 0x5e1474 */ goto L_005e1474;
L_005e146d:; BB(0x005e146d);
    /* 005e146d: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
L_005e1474:; BB(0x005e1474);
    /* 005e1474: movzx ecx, byte ptr [ebp - 0x34] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffccu));
    /* 005e1478: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e147a: je 0x5e1485 */ if (fZ) goto L_005e1485;
L_005e147c:; BB(0x005e147c);
    /* 005e147c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e147f: cmp dword ptr [edx + 0x2c], 0 */ {  u32 a = R32((u32)(r_edx+0x2cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e1483: jne 0x5e148a */ if (!fZ) goto L_005e148a;
L_005e1485:; BB(0x005e1485);
    /* 005e1485: jmp 0x5e15a0 */ goto L_005e15a0;
L_005e148a:; BB(0x005e148a);
    /* 005e148a: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 005e148c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e148f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e1490: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5e1495u); f_005dcb00();
    /* 005e1495: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e1498: mov ecx, eax */ r_ecx = r_eax;
    /* 005e149a: call 0x63aae0 */ r_esp -= 4; W32(r_esp, 0x5e149fu); f_0063aae0();
    /* 005e149f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005e14a2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e14a4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e14a7: mov edx, dword ptr [ecx + 0x2c] */ r_edx = R32((u32)(r_ecx+0x2cu));
    /* 005e14aa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e14ab: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5e14b0u); f_0064c8a0();
    /* 005e14b0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e14b3: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005e14b6: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005e14b9: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e14bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e14bd: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e14c0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e14c1: lea edx, [ebp - 0x18] */ r_edx = (u32)(r_ebp+0xffffffe8u);
    /* 005e14c4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e14c5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e14c8: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x5e14cdu); f_0064c5c0();
    /* 005e14cd: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005e14cf: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005e14d2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e14d5: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 005e14d7: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 005e14da: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e14dd: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e14df: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e14e2: add edx, dword ptr [eax + 0x2c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x2cu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e14e5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e14e8: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 005e14ea: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e14ed: mov dword ptr [edx + 0x2c], 0 */ W32((u32)(r_edx+0x2cu), 0x0u);
    /* 005e14f4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e14f7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e14f8: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5e14fdu); f_005dcb00();
    /* 005e14fd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e1500: mov ecx, eax */ r_ecx = r_eax;
    /* 005e1502: call 0x63b0a0 */ r_esp -= 4; W32(r_esp, 0x5e1507u); f_0063b0a0();
    /* 005e1507: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e1509: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e150c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e150d: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5e1512u); f_005dcb00();
    /* 005e1512: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e1515: mov ecx, eax */ r_ecx = r_eax;
    /* 005e1517: call 0x5d6ee0 */ r_esp -= 4; W32(r_esp, 0x5e151cu); f_005d6ee0();
    /* 005e151c: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005e151f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e1521: je 0x5e154f */ if (fZ) goto L_005e154f;
L_005e1523:; BB(0x005e1523);
    /* 005e1523: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e1526: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e1527: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5e152cu); f_005dcb00();
    /* 005e152c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e152f: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005e1532: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005e1535: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5e153au); f_0063aac0();
    /* 005e153a: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e153d: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005e1540: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005e1543: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e1544: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005e154a: call 0x5dc520 */ r_esp -= 4; W32(r_esp, 0x5e154fu); f_005dc520();
L_005e154f:; BB(0x005e154f);
    /* 005e154f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e1552: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e1553: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5e1558u); f_005dcb00();
    /* 005e1558: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e155b: mov ecx, eax */ r_ecx = r_eax;
    /* 005e155d: call 0x5d6f90 */ r_esp -= 4; W32(r_esp, 0x5e1562u); f_005d6f90();
    /* 005e1562: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005e1565: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e1567: je 0x5e1581 */ if (fZ) goto L_005e1581;
L_005e1569:; BB(0x005e1569);
    /* 005e1569: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e156c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e156d: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5e1572u); f_005dcb00();
    /* 005e1572: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e1575: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e1576: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005e157c: call 0x5dc3e0 */ r_esp -= 4; W32(r_esp, 0x5e1581u); f_005dc3e0();
L_005e1581:; BB(0x005e1581);
    /* 005e1581: cmp dword ptr [0x793584], 0 */ {  u32 a = R32((u32)(0x793584u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e1588: je 0x5e1595 */ if (fZ) goto L_005e1595;
L_005e158a:; BB(0x005e158a);
    /* 005e158a: mov ecx, dword ptr [0x793584] */ r_ecx = R32((u32)(0x793584u));
    /* 005e1590: call 0x589290 */ r_esp -= 4; W32(r_esp, 0x5e1595u); f_00589290();
L_005e1595:; BB(0x005e1595);
    /* 005e1595: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005e159b: call 0x5d8f90 */ r_esp -= 4; W32(r_esp, 0x5e15a0u); f_005d8f90();
L_005e15a0:; BB(0x005e15a0);
    /* 005e15a0: mov esp, ebp */ r_esp = r_ebp;
    /* 005e15a2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e15a3: ret 4 */ FN_RET(0x005e1410); r_esp += 8; return;
}

void f_005e15b0(void) /* sub_5E15B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e15b0);
    /* 005e15b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e15b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005e15b3: sub esp, 0x714 */ {  u32 a = r_esp; u32 b = 0x714u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e15b9: mov dword ptr [ebp - 0x710], ecx */ W32((u32)(r_ebp+0xfffff8f0u), r_ecx);
    /* 005e15bf: mov dword ptr [ebp - 0x5e0], 3 */ W32((u32)(r_ebp+0xfffffa20u), 0x3u);
    /* 005e15c9: mov dword ptr [ebp - 0x5dc], 0xf */ W32((u32)(r_ebp+0xfffffa24u), 0xfu);
    /* 005e15d3: mov dword ptr [ebp - 0x5d8], 0x1e */ W32((u32)(r_ebp+0xfffffa28u), 0x1eu);
    /* 005e15dd: mov dword ptr [ebp - 0x5d4], 0x3c */ W32((u32)(r_ebp+0xfffffa2cu), 0x3cu);
    /* 005e15e7: mov dword ptr [ebp - 0x5d0], 0xc */ W32((u32)(r_ebp+0xfffffa30u), 0xcu);
    /* 005e15f1: mov dword ptr [ebp - 0x5cc], 0x3c */ W32((u32)(r_ebp+0xfffffa34u), 0x3cu);
    /* 005e15fb: mov dword ptr [ebp - 0x5c8], 0x78 */ W32((u32)(r_ebp+0xfffffa38u), 0x78u);
    /* 005e1605: mov dword ptr [ebp - 0x5c4], 0xf0 */ W32((u32)(r_ebp+0xfffffa3cu), 0xf0u);
    /* 005e160f: mov dword ptr [ebp - 0x5c0], 0x2a */ W32((u32)(r_ebp+0xfffffa40u), 0x2au);
    /* 005e1619: mov dword ptr [ebp - 0x5bc], 0xd2 */ W32((u32)(r_ebp+0xfffffa44u), 0xd2u);
    /* 005e1623: mov dword ptr [ebp - 0x5b8], 0x1a4 */ W32((u32)(r_ebp+0xfffffa48u), 0x1a4u);
    /* 005e162d: mov dword ptr [ebp - 0x5b4], 0x348 */ W32((u32)(r_ebp+0xfffffa4cu), 0x348u);
    /* 005e1637: mov dword ptr [ebp - 0x5b0], 1 */ W32((u32)(r_ebp+0xfffffa50u), 0x1u);
    /* 005e1641: mov dword ptr [ebp - 0x5ac], 5 */ W32((u32)(r_ebp+0xfffffa54u), 0x5u);
    /* 005e164b: mov dword ptr [ebp - 0x5a8], 0xa */ W32((u32)(r_ebp+0xfffffa58u), 0xau);
    /* 005e1655: mov dword ptr [ebp - 0x5a4], 0x14 */ W32((u32)(r_ebp+0xfffffa5cu), 0x14u);
    /* 005e165f: mov dword ptr [ebp - 0x5a0], 0x78 */ W32((u32)(r_ebp+0xfffffa60u), 0x78u);
    /* 005e1669: mov dword ptr [ebp - 0x59c], 0x258 */ W32((u32)(r_ebp+0xfffffa64u), 0x258u);
    /* 005e1673: mov dword ptr [ebp - 0x598], 0x4b0 */ W32((u32)(r_ebp+0xfffffa68u), 0x4b0u);
    /* 005e167d: mov dword ptr [ebp - 0x594], 0x960 */ W32((u32)(r_ebp+0xfffffa6cu), 0x960u);
    /* 005e1687: mov dword ptr [ebp - 0x590], 3 */ W32((u32)(r_ebp+0xfffffa70u), 0x3u);
    /* 005e1691: mov dword ptr [ebp - 0x58c], 0xf */ W32((u32)(r_ebp+0xfffffa74u), 0xfu);
    /* 005e169b: mov dword ptr [ebp - 0x588], 0x1e */ W32((u32)(r_ebp+0xfffffa78u), 0x1eu);
    /* 005e16a5: mov dword ptr [ebp - 0x584], 0x3c */ W32((u32)(r_ebp+0xfffffa7cu), 0x3cu);
    /* 005e16af: mov dword ptr [ebp - 0x580], 1 */ W32((u32)(r_ebp+0xfffffa80u), 0x1u);
    /* 005e16b9: mov dword ptr [ebp - 0x57c], 5 */ W32((u32)(r_ebp+0xfffffa84u), 0x5u);
    /* 005e16c3: mov dword ptr [ebp - 0x578], 0xa */ W32((u32)(r_ebp+0xfffffa88u), 0xau);
    /* 005e16cd: mov dword ptr [ebp - 0x574], 0x14 */ W32((u32)(r_ebp+0xfffffa8cu), 0x14u);
    /* 005e16d7: mov dword ptr [ebp - 0x570], 0x550 */ W32((u32)(r_ebp+0xfffffa90u), 0x550u);
    /* 005e16e1: mov dword ptr [ebp - 0x56c], 0xaa0 */ W32((u32)(r_ebp+0xfffffa94u), 0xaa0u);
    /* 005e16eb: mov dword ptr [ebp - 0x568], 0x1540 */ W32((u32)(r_ebp+0xfffffa98u), 0x1540u);
    /* 005e16f5: mov dword ptr [ebp - 0x564], 0x3520 */ W32((u32)(r_ebp+0xfffffa9cu), 0x3520u);
    /* 005e16ff: mov dword ptr [ebp - 0x560], 0x14 */ W32((u32)(r_ebp+0xfffffaa0u), 0x14u);
    /* 005e1709: mov dword ptr [ebp - 0x55c], 0x28 */ W32((u32)(r_ebp+0xfffffaa4u), 0x28u);
    /* 005e1713: mov dword ptr [ebp - 0x558], 0x50 */ W32((u32)(r_ebp+0xfffffaa8u), 0x50u);
    /* 005e171d: mov dword ptr [ebp - 0x554], 0xc8 */ W32((u32)(r_ebp+0xfffffaacu), 0xc8u);
    /* 005e1727: mov dword ptr [ebp - 0x550], 0x320 */ W32((u32)(r_ebp+0xfffffab0u), 0x320u);
    /* 005e1731: mov dword ptr [ebp - 0x54c], 0xfa0 */ W32((u32)(r_ebp+0xfffffab4u), 0xfa0u);
    /* 005e173b: mov dword ptr [ebp - 0x548], 0x1f40 */ W32((u32)(r_ebp+0xfffffab8u), 0x1f40u);
    /* 005e1745: mov dword ptr [ebp - 0x544], 0x3e80 */ W32((u32)(r_ebp+0xfffffabcu), 0x3e80u);
    /* 005e174f: mov dword ptr [ebp - 0x540], 9 */ W32((u32)(r_ebp+0xfffffac0u), 0x9u);
    /* 005e1759: mov dword ptr [ebp - 0x53c], 0x2d */ W32((u32)(r_ebp+0xfffffac4u), 0x2du);
    /* 005e1763: mov dword ptr [ebp - 0x538], 0x5a */ W32((u32)(r_ebp+0xfffffac8u), 0x5au);
    /* 005e176d: mov dword ptr [ebp - 0x534], 0xb4 */ W32((u32)(r_ebp+0xfffffaccu), 0xb4u);
    /* 005e1777: mov dword ptr [ebp - 0x530], 1 */ W32((u32)(r_ebp+0xfffffad0u), 0x1u);
    /* 005e1781: mov dword ptr [ebp - 0x52c], 5 */ W32((u32)(r_ebp+0xfffffad4u), 0x5u);
    /* 005e178b: mov dword ptr [ebp - 0x528], 0xa */ W32((u32)(r_ebp+0xfffffad8u), 0xau);
    /* 005e1795: mov dword ptr [ebp - 0x524], 0x14 */ W32((u32)(r_ebp+0xfffffadcu), 0x14u);
    /* 005e179f: mov dword ptr [ebp - 0x520], 0x1b58 */ W32((u32)(r_ebp+0xfffffae0u), 0x1b58u);
    /* 005e17a9: mov dword ptr [ebp - 0x51c], 0x36b0 */ W32((u32)(r_ebp+0xfffffae4u), 0x36b0u);
    /* 005e17b3: mov dword ptr [ebp - 0x518], 0x6d60 */ W32((u32)(r_ebp+0xfffffae8u), 0x6d60u);
    /* 005e17bd: mov dword ptr [ebp - 0x514], 0x11170 */ W32((u32)(r_ebp+0xfffffaecu), 0x11170u);
    /* 005e17c7: mov dword ptr [ebp - 0x510], 0x28 */ W32((u32)(r_ebp+0xfffffaf0u), 0x28u);
    /* 005e17d1: mov dword ptr [ebp - 0x50c], 0x50 */ W32((u32)(r_ebp+0xfffffaf4u), 0x50u);
    /* 005e17db: mov dword ptr [ebp - 0x508], 0xa0 */ W32((u32)(r_ebp+0xfffffaf8u), 0xa0u);
    /* 005e17e5: mov dword ptr [ebp - 0x504], 0x190 */ W32((u32)(r_ebp+0xfffffafcu), 0x190u);
    /* 005e17ef: mov dword ptr [ebp - 0x500], 0x5dc */ W32((u32)(r_ebp+0xfffffb00u), 0x5dcu);
    /* 005e17f9: mov dword ptr [ebp - 0x4fc], 0x1d4c */ W32((u32)(r_ebp+0xfffffb04u), 0x1d4cu);
    /* 005e1803: mov dword ptr [ebp - 0x4f8], 0x3a98 */ W32((u32)(r_ebp+0xfffffb08u), 0x3a98u);
    /* 005e180d: mov dword ptr [ebp - 0x4f4], 0x7530 */ W32((u32)(r_ebp+0xfffffb0cu), 0x7530u);
    /* 005e1817: mov dword ptr [ebp - 0x4f0], 0x58 */ W32((u32)(r_ebp+0xfffffb10u), 0x58u);
    /* 005e1821: mov dword ptr [ebp - 0x4ec], 0x1b8 */ W32((u32)(r_ebp+0xfffffb14u), 0x1b8u);
    /* 005e182b: mov dword ptr [ebp - 0x4e8], 0x370 */ W32((u32)(r_ebp+0xfffffb18u), 0x370u);
    /* 005e1835: mov dword ptr [ebp - 0x4e4], 0x6e0 */ W32((u32)(r_ebp+0xfffffb1cu), 0x6e0u);
    /* 005e183f: mov dword ptr [ebp - 0x4e0], 4 */ W32((u32)(r_ebp+0xfffffb20u), 0x4u);
    /* 005e1849: mov dword ptr [ebp - 0x4dc], 0x14 */ W32((u32)(r_ebp+0xfffffb24u), 0x14u);
    /* 005e1853: mov dword ptr [ebp - 0x4d8], 0x28 */ W32((u32)(r_ebp+0xfffffb28u), 0x28u);
    /* 005e185d: mov dword ptr [ebp - 0x4d4], 0x50 */ W32((u32)(r_ebp+0xfffffb2cu), 0x50u);
    /* 005e1867: mov dword ptr [ebp - 0x4d0], 1 */ W32((u32)(r_ebp+0xfffffb30u), 0x1u);
    /* 005e1871: mov dword ptr [ebp - 0x4cc], 5 */ W32((u32)(r_ebp+0xfffffb34u), 0x5u);
    /* 005e187b: mov dword ptr [ebp - 0x4c8], 0xa */ W32((u32)(r_ebp+0xfffffb38u), 0xau);
    /* 005e1885: mov dword ptr [ebp - 0x4c4], 0x14 */ W32((u32)(r_ebp+0xfffffb3cu), 0x14u);
    /* 005e188f: mov dword ptr [ebp - 0x4c0], 0x4e20 */ W32((u32)(r_ebp+0xfffffb40u), 0x4e20u);
    /* 005e1899: mov dword ptr [ebp - 0x4bc], 0x9c40 */ W32((u32)(r_ebp+0xfffffb44u), 0x9c40u);
    /* 005e18a3: mov dword ptr [ebp - 0x4b8], 0x13880 */ W32((u32)(r_ebp+0xfffffb48u), 0x13880u);
    /* 005e18ad: mov dword ptr [ebp - 0x4b4], 0x186a0 */ W32((u32)(r_ebp+0xfffffb4cu), 0x186a0u);
    /* 005e18b7: mov dword ptr [ebp - 0x4b0], 0x1a4 */ W32((u32)(r_ebp+0xfffffb50u), 0x1a4u);
    /* 005e18c1: mov dword ptr [ebp - 0x4ac], 0x348 */ W32((u32)(r_ebp+0xfffffb54u), 0x348u);
    /* 005e18cb: mov dword ptr [ebp - 0x4a8], 0x690 */ W32((u32)(r_ebp+0xfffffb58u), 0x690u);
    /* 005e18d5: mov dword ptr [ebp - 0x4a4], 0x1068 */ W32((u32)(r_ebp+0xfffffb5cu), 0x1068u);
    /* 005e18df: mov dword ptr [ebp - 0x4a0], 0x28 */ W32((u32)(r_ebp+0xfffffb60u), 0x28u);
    /* 005e18e9: mov dword ptr [ebp - 0x49c], 0x50 */ W32((u32)(r_ebp+0xfffffb64u), 0x50u);
    /* 005e18f3: mov dword ptr [ebp - 0x498], 0xa0 */ W32((u32)(r_ebp+0xfffffb68u), 0xa0u);
    /* 005e18fd: mov dword ptr [ebp - 0x494], 0x190 */ W32((u32)(r_ebp+0xfffffb6cu), 0x190u);
    /* 005e1907: mov dword ptr [ebp - 0x490], 0x1b58 */ W32((u32)(r_ebp+0xfffffb70u), 0x1b58u);
    /* 005e1911: mov dword ptr [ebp - 0x48c], 0x88b8 */ W32((u32)(r_ebp+0xfffffb74u), 0x88b8u);
    /* 005e191b: mov dword ptr [ebp - 0x488], 0x11170 */ W32((u32)(r_ebp+0xfffffb78u), 0x11170u);
    /* 005e1925: mov dword ptr [ebp - 0x484], 0x186a0 */ W32((u32)(r_ebp+0xfffffb7cu), 0x186a0u);
    /* 005e192f: mov dword ptr [ebp - 0x480], 0x15e */ W32((u32)(r_ebp+0xfffffb80u), 0x15eu);
    /* 005e1939: mov dword ptr [ebp - 0x47c], 0x6d6 */ W32((u32)(r_ebp+0xfffffb84u), 0x6d6u);
    /* 005e1943: mov dword ptr [ebp - 0x478], 0xdac */ W32((u32)(r_ebp+0xfffffb88u), 0xdacu);
    /* 005e194d: mov dword ptr [ebp - 0x474], 0x1b58 */ W32((u32)(r_ebp+0xfffffb8cu), 0x1b58u);
    /* 005e1957: mov dword ptr [ebp - 0x470], 0x14 */ W32((u32)(r_ebp+0xfffffb90u), 0x14u);
    /* 005e1961: mov dword ptr [ebp - 0x46c], 0x64 */ W32((u32)(r_ebp+0xfffffb94u), 0x64u);
    /* 005e196b: mov dword ptr [ebp - 0x468], 0xc8 */ W32((u32)(r_ebp+0xfffffb98u), 0xc8u);
    /* 005e1975: mov dword ptr [ebp - 0x464], 0x190 */ W32((u32)(r_ebp+0xfffffb9cu), 0x190u);
    /* 005e197f: mov dword ptr [ebp - 0x460], 2 */ W32((u32)(r_ebp+0xfffffba0u), 0x2u);
    /* 005e1989: mov dword ptr [ebp - 0x45c], 0xa */ W32((u32)(r_ebp+0xfffffba4u), 0xau);
    /* 005e1993: mov dword ptr [ebp - 0x458], 0x14 */ W32((u32)(r_ebp+0xfffffba8u), 0x14u);
    /* 005e199d: mov dword ptr [ebp - 0x454], 0x28 */ W32((u32)(r_ebp+0xfffffbacu), 0x28u);
    /* 005e19a7: mov dword ptr [ebp - 0x450], 0x4e20 */ W32((u32)(r_ebp+0xfffffbb0u), 0x4e20u);
    /* 005e19b1: mov dword ptr [ebp - 0x44c], 0x186a0 */ W32((u32)(r_ebp+0xfffffbb4u), 0x186a0u);
    /* 005e19bb: mov dword ptr [ebp - 0x448], 0x186a0 */ W32((u32)(r_ebp+0xfffffbb8u), 0x186a0u);
    /* 005e19c5: mov dword ptr [ebp - 0x444], 0x186a0 */ W32((u32)(r_ebp+0xfffffbbcu), 0x186a0u);
    /* 005e19cf: mov dword ptr [ebp - 0x440], 0x5dc */ W32((u32)(r_ebp+0xfffffbc0u), 0x5dcu);
    /* 005e19d9: mov dword ptr [ebp - 0x43c], 0x1d4c */ W32((u32)(r_ebp+0xfffffbc4u), 0x1d4cu);
    /* 005e19e3: mov dword ptr [ebp - 0x438], 0x3a98 */ W32((u32)(r_ebp+0xfffffbc8u), 0x3a98u);
    /* 005e19ed: mov dword ptr [ebp - 0x434], 0x7530 */ W32((u32)(r_ebp+0xfffffbccu), 0x7530u);
    /* 005e19f7: mov dword ptr [ebp - 0x430], 0x5a */ W32((u32)(r_ebp+0xfffffbd0u), 0x5au);
    /* 005e1a01: mov dword ptr [ebp - 0x42c], 0x1c2 */ W32((u32)(r_ebp+0xfffffbd4u), 0x1c2u);
    /* 005e1a0b: mov dword ptr [ebp - 0x428], 0x384 */ W32((u32)(r_ebp+0xfffffbd8u), 0x384u);
    /* 005e1a15: mov dword ptr [ebp - 0x424], 0x708 */ W32((u32)(r_ebp+0xfffffbdcu), 0x708u);
    /* 005e1a1f: mov dword ptr [ebp - 0x420], 9 */ W32((u32)(r_ebp+0xfffffbe0u), 0x9u);
    /* 005e1a29: mov dword ptr [ebp - 0x41c], 0x2d */ W32((u32)(r_ebp+0xfffffbe4u), 0x2du);
    /* 005e1a33: mov dword ptr [ebp - 0x418], 0x5a */ W32((u32)(r_ebp+0xfffffbe8u), 0x5au);
    /* 005e1a3d: mov dword ptr [ebp - 0x414], 0xb4 */ W32((u32)(r_ebp+0xfffffbecu), 0xb4u);
    /* 005e1a47: mov dword ptr [ebp - 0x410], 0x61a8 */ W32((u32)(r_ebp+0xfffffbf0u), 0x61a8u);
    /* 005e1a51: mov dword ptr [ebp - 0x40c], 0x186a0 */ W32((u32)(r_ebp+0xfffffbf4u), 0x186a0u);
    /* 005e1a5b: mov dword ptr [ebp - 0x408], 0x186a0 */ W32((u32)(r_ebp+0xfffffbf8u), 0x186a0u);
    /* 005e1a65: mov dword ptr [ebp - 0x404], 0x186a0 */ W32((u32)(r_ebp+0xfffffbfcu), 0x186a0u);
    /* 005e1a6f: mov dword ptr [ebp - 0x400], 0xfa0 */ W32((u32)(r_ebp+0xfffffc00u), 0xfa0u);
    /* 005e1a79: mov dword ptr [ebp - 0x3fc], 0x4e20 */ W32((u32)(r_ebp+0xfffffc04u), 0x4e20u);
    /* 005e1a83: mov dword ptr [ebp - 0x3f8], 0x9c40 */ W32((u32)(r_ebp+0xfffffc08u), 0x9c40u);
    /* 005e1a8d: mov dword ptr [ebp - 0x3f4], 0x13880 */ W32((u32)(r_ebp+0xfffffc0cu), 0x13880u);
    /* 005e1a97: mov dword ptr [ebp - 0x3f0], 0x12c */ W32((u32)(r_ebp+0xfffffc10u), 0x12cu);
    /* 005e1aa1: mov dword ptr [ebp - 0x3ec], 0x5dc */ W32((u32)(r_ebp+0xfffffc14u), 0x5dcu);
    /* 005e1aab: mov dword ptr [ebp - 0x3e8], 0xbb8 */ W32((u32)(r_ebp+0xfffffc18u), 0xbb8u);
    /* 005e1ab5: mov dword ptr [ebp - 0x3e4], 0x1770 */ W32((u32)(r_ebp+0xfffffc1cu), 0x1770u);
    /* 005e1abf: mov dword ptr [ebp - 0x3e0], 0x2b */ W32((u32)(r_ebp+0xfffffc20u), 0x2bu);
    /* 005e1ac9: mov dword ptr [ebp - 0x3dc], 0xd7 */ W32((u32)(r_ebp+0xfffffc24u), 0xd7u);
    /* 005e1ad3: mov dword ptr [ebp - 0x3d8], 0x1ae */ W32((u32)(r_ebp+0xfffffc28u), 0x1aeu);
    /* 005e1add: mov dword ptr [ebp - 0x3d4], 0x35c */ W32((u32)(r_ebp+0xfffffc2cu), 0x35cu);
    /* 005e1ae7: mov dword ptr [ebp - 0x3d0], 4 */ W32((u32)(r_ebp+0xfffffc30u), 0x4u);
    /* 005e1af1: mov dword ptr [ebp - 0x3cc], 0x14 */ W32((u32)(r_ebp+0xfffffc34u), 0x14u);
    /* 005e1afb: mov dword ptr [ebp - 0x3c8], 0x28 */ W32((u32)(r_ebp+0xfffffc38u), 0x28u);
    /* 005e1b05: mov dword ptr [ebp - 0x3c4], 0x50 */ W32((u32)(r_ebp+0xfffffc3cu), 0x50u);
    /* 005e1b0f: mov dword ptr [ebp - 0x3c0], 0xc350 */ W32((u32)(r_ebp+0xfffffc40u), 0xc350u);
    /* 005e1b19: mov dword ptr [ebp - 0x3bc], 0x186a0 */ W32((u32)(r_ebp+0xfffffc44u), 0x186a0u);
    /* 005e1b23: mov dword ptr [ebp - 0x3b8], 0x186a0 */ W32((u32)(r_ebp+0xfffffc48u), 0x186a0u);
    /* 005e1b2d: mov dword ptr [ebp - 0x3b4], 0x186a0 */ W32((u32)(r_ebp+0xfffffc4cu), 0x186a0u);
    /* 005e1b37: mov dword ptr [ebp - 0x3b0], 0x1f40 */ W32((u32)(r_ebp+0xfffffc50u), 0x1f40u);
    /* 005e1b41: mov dword ptr [ebp - 0x3ac], 0x4e20 */ W32((u32)(r_ebp+0xfffffc54u), 0x4e20u);
    /* 005e1b4b: mov dword ptr [ebp - 0x3a8], 0x9c40 */ W32((u32)(r_ebp+0xfffffc58u), 0x9c40u);
    /* 005e1b55: mov dword ptr [ebp - 0x3a4], 0x13880 */ W32((u32)(r_ebp+0xfffffc5cu), 0x13880u);
    /* 005e1b5f: mov dword ptr [ebp - 0x3a0], 0x7d0 */ W32((u32)(r_ebp+0xfffffc60u), 0x7d0u);
    /* 005e1b69: mov dword ptr [ebp - 0x39c], 0x1388 */ W32((u32)(r_ebp+0xfffffc64u), 0x1388u);
    /* 005e1b73: mov dword ptr [ebp - 0x398], 0x2710 */ W32((u32)(r_ebp+0xfffffc68u), 0x2710u);
    /* 005e1b7d: mov dword ptr [ebp - 0x394], 0x4e20 */ W32((u32)(r_ebp+0xfffffc6cu), 0x4e20u);
    /* 005e1b87: mov dword ptr [ebp - 0x390], 0x104 */ W32((u32)(r_ebp+0xfffffc70u), 0x104u);
    /* 005e1b91: mov dword ptr [ebp - 0x38c], 0x28a */ W32((u32)(r_ebp+0xfffffc74u), 0x28au);
    /* 005e1b9b: mov dword ptr [ebp - 0x388], 0x514 */ W32((u32)(r_ebp+0xfffffc78u), 0x514u);
    /* 005e1ba5: mov dword ptr [ebp - 0x384], 0xa28 */ W32((u32)(r_ebp+0xfffffc7cu), 0xa28u);
    /* 005e1baf: mov dword ptr [ebp - 0x380], 0x28 */ W32((u32)(r_ebp+0xfffffc80u), 0x28u);
    /* 005e1bb9: mov dword ptr [ebp - 0x37c], 0x64 */ W32((u32)(r_ebp+0xfffffc84u), 0x64u);
    /* 005e1bc3: mov dword ptr [ebp - 0x378], 0xc8 */ W32((u32)(r_ebp+0xfffffc88u), 0xc8u);
    /* 005e1bcd: mov dword ptr [ebp - 0x374], 0x190 */ W32((u32)(r_ebp+0xfffffc8cu), 0x190u);
    /* 005e1bd7: mov dword ptr [ebp - 0x370], 4 */ W32((u32)(r_ebp+0xfffffc90u), 0x4u);
    /* 005e1be1: mov dword ptr [ebp - 0x36c], 0xa */ W32((u32)(r_ebp+0xfffffc94u), 0xau);
    /* 005e1beb: mov dword ptr [ebp - 0x368], 0x14 */ W32((u32)(r_ebp+0xfffffc98u), 0x14u);
    /* 005e1bf5: mov dword ptr [ebp - 0x364], 0x28 */ W32((u32)(r_ebp+0xfffffc9cu), 0x28u);
    /* 005e1bff: mov dword ptr [ebp - 0x360], 0xc350 */ W32((u32)(r_ebp+0xfffffca0u), 0xc350u);
    /* 005e1c09: mov dword ptr [ebp - 0x35c], 0x186a0 */ W32((u32)(r_ebp+0xfffffca4u), 0x186a0u);
    /* 005e1c13: mov dword ptr [ebp - 0x358], 0x186a0 */ W32((u32)(r_ebp+0xfffffca8u), 0x186a0u);
    /* 005e1c1d: mov dword ptr [ebp - 0x354], 0x186a0 */ W32((u32)(r_ebp+0xfffffcacu), 0x186a0u);
    /* 005e1c27: mov dword ptr [ebp - 0x350], 0x61a8 */ W32((u32)(r_ebp+0xfffffcb0u), 0x61a8u);
    /* 005e1c31: mov dword ptr [ebp - 0x34c], 0xf424 */ W32((u32)(r_ebp+0xfffffcb4u), 0xf424u);
    /* 005e1c3b: mov dword ptr [ebp - 0x348], 0x186a0 */ W32((u32)(r_ebp+0xfffffcb8u), 0x186a0u);
    /* 005e1c45: mov dword ptr [ebp - 0x344], 0x186a0 */ W32((u32)(r_ebp+0xfffffcbcu), 0x186a0u);
    /* 005e1c4f: mov dword ptr [ebp - 0x340], 0x1194 */ W32((u32)(r_ebp+0xfffffcc0u), 0x1194u);
    /* 005e1c59: mov dword ptr [ebp - 0x33c], 0x2bf2 */ W32((u32)(r_ebp+0xfffffcc4u), 0x2bf2u);
    /* 005e1c63: mov dword ptr [ebp - 0x338], 0x57e4 */ W32((u32)(r_ebp+0xfffffcc8u), 0x57e4u);
    /* 005e1c6d: mov dword ptr [ebp - 0x334], 0xafc8 */ W32((u32)(r_ebp+0xfffffcccu), 0xafc8u);
    /* 005e1c77: mov dword ptr [ebp - 0x330], 0x320 */ W32((u32)(r_ebp+0xfffffcd0u), 0x320u);
    /* 005e1c81: mov dword ptr [ebp - 0x32c], 0x7d0 */ W32((u32)(r_ebp+0xfffffcd4u), 0x7d0u);
    /* 005e1c8b: mov dword ptr [ebp - 0x328], 0xfa0 */ W32((u32)(r_ebp+0xfffffcd8u), 0xfa0u);
    /* 005e1c95: mov dword ptr [ebp - 0x324], 0x1f40 */ W32((u32)(r_ebp+0xfffffcdcu), 0x1f40u);
    /* 005e1c9f: mov dword ptr [ebp - 0x320], 0x96 */ W32((u32)(r_ebp+0xfffffce0u), 0x96u);
    /* 005e1ca9: mov dword ptr [ebp - 0x31c], 0x177 */ W32((u32)(r_ebp+0xfffffce4u), 0x177u);
    /* 005e1cb3: mov dword ptr [ebp - 0x318], 0x2ee */ W32((u32)(r_ebp+0xfffffce8u), 0x2eeu);
    /* 005e1cbd: mov dword ptr [ebp - 0x314], 0x5dc */ W32((u32)(r_ebp+0xfffffcecu), 0x5dcu);
    /* 005e1cc7: mov dword ptr [ebp - 0x310], 0x12 */ W32((u32)(r_ebp+0xfffffcf0u), 0x12u);
    /* 005e1cd1: mov dword ptr [ebp - 0x30c], 0x2d */ W32((u32)(r_ebp+0xfffffcf4u), 0x2du);
    /* 005e1cdb: mov dword ptr [ebp - 0x308], 0x5a */ W32((u32)(r_ebp+0xfffffcf8u), 0x5au);
    /* 005e1ce5: mov dword ptr [ebp - 0x304], 0xb4 */ W32((u32)(r_ebp+0xfffffcfcu), 0xb4u);
    /* 005e1cef: mov dword ptr [ebp - 0x300], 0xc350 */ W32((u32)(r_ebp+0xfffffd00u), 0xc350u);
    /* 005e1cf9: mov dword ptr [ebp - 0x2fc], 0x186a0 */ W32((u32)(r_ebp+0xfffffd04u), 0x186a0u);
    /* 005e1d03: mov dword ptr [ebp - 0x2f8], 0x186a0 */ W32((u32)(r_ebp+0xfffffd08u), 0x186a0u);
    /* 005e1d0d: mov dword ptr [ebp - 0x2f4], 0x186a0 */ W32((u32)(r_ebp+0xfffffd0cu), 0x186a0u);
    /* 005e1d17: mov dword ptr [ebp - 0x2f0], 0x61a8 */ W32((u32)(r_ebp+0xfffffd10u), 0x61a8u);
    /* 005e1d21: mov dword ptr [ebp - 0x2ec], 0xf424 */ W32((u32)(r_ebp+0xfffffd14u), 0xf424u);
    /* 005e1d2b: mov dword ptr [ebp - 0x2e8], 0x186a0 */ W32((u32)(r_ebp+0xfffffd18u), 0x186a0u);
    /* 005e1d35: mov dword ptr [ebp - 0x2e4], 0x186a0 */ W32((u32)(r_ebp+0xfffffd1cu), 0x186a0u);
    /* 005e1d3f: mov dword ptr [ebp - 0x2e0], 0x1388 */ W32((u32)(r_ebp+0xfffffd20u), 0x1388u);
    /* 005e1d49: mov dword ptr [ebp - 0x2dc], 0x30d4 */ W32((u32)(r_ebp+0xfffffd24u), 0x30d4u);
    /* 005e1d53: mov dword ptr [ebp - 0x2d8], 0x61a8 */ W32((u32)(r_ebp+0xfffffd28u), 0x61a8u);
    /* 005e1d5d: mov dword ptr [ebp - 0x2d4], 0xc350 */ W32((u32)(r_ebp+0xfffffd2cu), 0xc350u);
    /* 005e1d67: mov dword ptr [ebp - 0x2d0], 0x4b0 */ W32((u32)(r_ebp+0xfffffd30u), 0x4b0u);
    /* 005e1d71: mov dword ptr [ebp - 0x2cc], 0xbb8 */ W32((u32)(r_ebp+0xfffffd34u), 0xbb8u);
    /* 005e1d7b: mov dword ptr [ebp - 0x2c8], 0x1770 */ W32((u32)(r_ebp+0xfffffd38u), 0x1770u);
    /* 005e1d85: mov dword ptr [ebp - 0x2c4], 0x2ee0 */ W32((u32)(r_ebp+0xfffffd3cu), 0x2ee0u);
    /* 005e1d8f: mov dword ptr [ebp - 0x2c0], 0x1f4 */ W32((u32)(r_ebp+0xfffffd40u), 0x1f4u);
    /* 005e1d99: mov dword ptr [ebp - 0x2bc], 0x4e2 */ W32((u32)(r_ebp+0xfffffd44u), 0x4e2u);
    /* 005e1da3: mov dword ptr [ebp - 0x2b8], 0x9c4 */ W32((u32)(r_ebp+0xfffffd48u), 0x9c4u);
    /* 005e1dad: mov dword ptr [ebp - 0x2b4], 0x1388 */ W32((u32)(r_ebp+0xfffffd4cu), 0x1388u);
    /* 005e1db7: mov dword ptr [ebp - 0x2b0], 0x3c */ W32((u32)(r_ebp+0xfffffd50u), 0x3cu);
    /* 005e1dc1: mov dword ptr [ebp - 0x2ac], 0x96 */ W32((u32)(r_ebp+0xfffffd54u), 0x96u);
    /* 005e1dcb: mov dword ptr [ebp - 0x2a8], 0x12c */ W32((u32)(r_ebp+0xfffffd58u), 0x12cu);
    /* 005e1dd5: mov dword ptr [ebp - 0x2a4], 0x258 */ W32((u32)(r_ebp+0xfffffd5cu), 0x258u);
    /* 005e1ddf: mov dword ptr [ebp - 0x2a0], 0xa */ W32((u32)(r_ebp+0xfffffd60u), 0xau);
    /* 005e1de9: mov dword ptr [ebp - 0x29c], 0x19 */ W32((u32)(r_ebp+0xfffffd64u), 0x19u);
    /* 005e1df3: mov dword ptr [ebp - 0x298], 0x32 */ W32((u32)(r_ebp+0xfffffd68u), 0x32u);
    /* 005e1dfd: mov dword ptr [ebp - 0x294], 0x64 */ W32((u32)(r_ebp+0xfffffd6cu), 0x64u);
    /* 005e1e07: mov dword ptr [ebp - 0x290], 0x186a0 */ W32((u32)(r_ebp+0xfffffd70u), 0x186a0u);
    /* 005e1e11: mov dword ptr [ebp - 0x28c], 0x186a0 */ W32((u32)(r_ebp+0xfffffd74u), 0x186a0u);
    /* 005e1e1b: mov dword ptr [ebp - 0x288], 0x186a0 */ W32((u32)(r_ebp+0xfffffd78u), 0x186a0u);
    /* 005e1e25: mov dword ptr [ebp - 0x284], 0x186a0 */ W32((u32)(r_ebp+0xfffffd7cu), 0x186a0u);
    /* 005e1e2f: mov dword ptr [ebp - 0x280], 0xc350 */ W32((u32)(r_ebp+0xfffffd80u), 0xc350u);
    /* 005e1e39: mov dword ptr [ebp - 0x27c], 0x186a0 */ W32((u32)(r_ebp+0xfffffd84u), 0x186a0u);
    /* 005e1e43: mov dword ptr [ebp - 0x278], 0x186a0 */ W32((u32)(r_ebp+0xfffffd88u), 0x186a0u);
    /* 005e1e4d: mov dword ptr [ebp - 0x274], 0x186a0 */ W32((u32)(r_ebp+0xfffffd8cu), 0x186a0u);
    /* 005e1e57: mov dword ptr [ebp - 0x270], 0x4650 */ W32((u32)(r_ebp+0xfffffd90u), 0x4650u);
    /* 005e1e61: mov dword ptr [ebp - 0x26c], 0xafc8 */ W32((u32)(r_ebp+0xfffffd94u), 0xafc8u);
    /* 005e1e6b: mov dword ptr [ebp - 0x268], 0x15f90 */ W32((u32)(r_ebp+0xfffffd98u), 0x15f90u);
    /* 005e1e75: mov dword ptr [ebp - 0x264], 0x186a0 */ W32((u32)(r_ebp+0xfffffd9cu), 0x186a0u);
    /* 005e1e7f: mov dword ptr [ebp - 0x260], 0x1f40 */ W32((u32)(r_ebp+0xfffffda0u), 0x1f40u);
    /* 005e1e89: mov dword ptr [ebp - 0x25c], 0x4e20 */ W32((u32)(r_ebp+0xfffffda4u), 0x4e20u);
    /* 005e1e93: mov dword ptr [ebp - 0x258], 0x9c40 */ W32((u32)(r_ebp+0xfffffda8u), 0x9c40u);
    /* 005e1e9d: mov dword ptr [ebp - 0x254], 0x13880 */ W32((u32)(r_ebp+0xfffffdacu), 0x13880u);
    /* 005e1ea7: mov dword ptr [ebp - 0x250], 0x5dc */ W32((u32)(r_ebp+0xfffffdb0u), 0x5dcu);
    /* 005e1eb1: mov dword ptr [ebp - 0x24c], 0xea6 */ W32((u32)(r_ebp+0xfffffdb4u), 0xea6u);
    /* 005e1ebb: mov dword ptr [ebp - 0x248], 0x1d4c */ W32((u32)(r_ebp+0xfffffdb8u), 0x1d4cu);
    /* 005e1ec5: mov dword ptr [ebp - 0x244], 0x3a98 */ W32((u32)(r_ebp+0xfffffdbcu), 0x3a98u);
    /* 005e1ecf: mov dword ptr [ebp - 0x240], 0xa0 */ W32((u32)(r_ebp+0xfffffdc0u), 0xa0u);
    /* 005e1ed9: mov dword ptr [ebp - 0x23c], 0x190 */ W32((u32)(r_ebp+0xfffffdc4u), 0x190u);
    /* 005e1ee3: mov dword ptr [ebp - 0x238], 0x320 */ W32((u32)(r_ebp+0xfffffdc8u), 0x320u);
    /* 005e1eed: mov dword ptr [ebp - 0x234], 0x640 */ W32((u32)(r_ebp+0xfffffdccu), 0x640u);
    /* 005e1ef7: mov dword ptr [ebp - 0x230], 0x1e */ W32((u32)(r_ebp+0xfffffdd0u), 0x1eu);
    /* 005e1f01: mov dword ptr [ebp - 0x22c], 0x4b */ W32((u32)(r_ebp+0xfffffdd4u), 0x4bu);
    /* 005e1f0b: mov dword ptr [ebp - 0x228], 0x96 */ W32((u32)(r_ebp+0xfffffdd8u), 0x96u);
    /* 005e1f15: mov dword ptr [ebp - 0x224], 0x12c */ W32((u32)(r_ebp+0xfffffddcu), 0x12cu);
    /* 005e1f1f: mov dword ptr [ebp - 0x220], 2 */ W32((u32)(r_ebp+0xfffffde0u), 0x2u);
    /* 005e1f29: mov dword ptr [ebp - 0x21c], 5 */ W32((u32)(r_ebp+0xfffffde4u), 0x5u);
    /* 005e1f33: mov dword ptr [ebp - 0x218], 0xa */ W32((u32)(r_ebp+0xfffffde8u), 0xau);
    /* 005e1f3d: mov dword ptr [ebp - 0x214], 0x14 */ W32((u32)(r_ebp+0xfffffdecu), 0x14u);
    /* 005e1f47: mov dword ptr [ebp - 0x210], 0x186a0 */ W32((u32)(r_ebp+0xfffffdf0u), 0x186a0u);
    /* 005e1f51: mov dword ptr [ebp - 0x20c], 0x186a0 */ W32((u32)(r_ebp+0xfffffdf4u), 0x186a0u);
    /* 005e1f5b: mov dword ptr [ebp - 0x208], 0x186a0 */ W32((u32)(r_ebp+0xfffffdf8u), 0x186a0u);
    /* 005e1f65: mov dword ptr [ebp - 0x204], 0x186a0 */ W32((u32)(r_ebp+0xfffffdfcu), 0x186a0u);
    /* 005e1f6f: mov dword ptr [ebp - 0x200], 0x11170 */ W32((u32)(r_ebp+0xfffffe00u), 0x11170u);
    /* 005e1f79: mov dword ptr [ebp - 0x1fc], 0x186a0 */ W32((u32)(r_ebp+0xfffffe04u), 0x186a0u);
    /* 005e1f83: mov dword ptr [ebp - 0x1f8], 0x186a0 */ W32((u32)(r_ebp+0xfffffe08u), 0x186a0u);
    /* 005e1f8d: mov dword ptr [ebp - 0x1f4], 0x186a0 */ W32((u32)(r_ebp+0xfffffe0cu), 0x186a0u);
    /* 005e1f97: mov dword ptr [ebp - 0x1f0], 0x61a8 */ W32((u32)(r_ebp+0xfffffe10u), 0x61a8u);
    /* 005e1fa1: mov dword ptr [ebp - 0x1ec], 0xf424 */ W32((u32)(r_ebp+0xfffffe14u), 0xf424u);
    /* 005e1fab: mov dword ptr [ebp - 0x1e8], 0x186a0 */ W32((u32)(r_ebp+0xfffffe18u), 0x186a0u);
    /* 005e1fb5: mov dword ptr [ebp - 0x1e4], 0x186a0 */ W32((u32)(r_ebp+0xfffffe1cu), 0x186a0u);
    /* 005e1fbf: mov dword ptr [ebp - 0x1e0], 0x3a98 */ W32((u32)(r_ebp+0xfffffe20u), 0x3a98u);
    /* 005e1fc9: mov dword ptr [ebp - 0x1dc], 0x927c */ W32((u32)(r_ebp+0xfffffe24u), 0x927cu);
    /* 005e1fd3: mov dword ptr [ebp - 0x1d8], 0x124f8 */ W32((u32)(r_ebp+0xfffffe28u), 0x124f8u);
    /* 005e1fdd: mov dword ptr [ebp - 0x1d4], 0x186a0 */ W32((u32)(r_ebp+0xfffffe2cu), 0x186a0u);
    /* 005e1fe7: mov dword ptr [ebp - 0x1d0], 0x5dc */ W32((u32)(r_ebp+0xfffffe30u), 0x5dcu);
    /* 005e1ff1: mov dword ptr [ebp - 0x1cc], 0xea6 */ W32((u32)(r_ebp+0xfffffe34u), 0xea6u);
    /* 005e1ffb: mov dword ptr [ebp - 0x1c8], 0x1d4c */ W32((u32)(r_ebp+0xfffffe38u), 0x1d4cu);
    /* 005e2005: mov dword ptr [ebp - 0x1c4], 0x3a98 */ W32((u32)(r_ebp+0xfffffe3cu), 0x3a98u);
    /* 005e200f: mov dword ptr [ebp - 0x1c0], 0x258 */ W32((u32)(r_ebp+0xfffffe40u), 0x258u);
    /* 005e2019: mov dword ptr [ebp - 0x1bc], 0x5dc */ W32((u32)(r_ebp+0xfffffe44u), 0x5dcu);
    /* 005e2023: mov dword ptr [ebp - 0x1b8], 0xbb8 */ W32((u32)(r_ebp+0xfffffe48u), 0xbb8u);
    /* 005e202d: mov dword ptr [ebp - 0x1b4], 0x1770 */ W32((u32)(r_ebp+0xfffffe4cu), 0x1770u);
    /* 005e2037: mov dword ptr [ebp - 0x1b0], 0x55 */ W32((u32)(r_ebp+0xfffffe50u), 0x55u);
    /* 005e2041: mov dword ptr [ebp - 0x1ac], 0xd4 */ W32((u32)(r_ebp+0xfffffe54u), 0xd4u);
    /* 005e204b: mov dword ptr [ebp - 0x1a8], 0x1a9 */ W32((u32)(r_ebp+0xfffffe58u), 0x1a9u);
    /* 005e2055: mov dword ptr [ebp - 0x1a4], 0x352 */ W32((u32)(r_ebp+0xfffffe5cu), 0x352u);
    /* 005e205f: mov dword ptr [ebp - 0x1a0], 0x14 */ W32((u32)(r_ebp+0xfffffe60u), 0x14u);
    /* 005e2069: mov dword ptr [ebp - 0x19c], 0x32 */ W32((u32)(r_ebp+0xfffffe64u), 0x32u);
    /* 005e2073: mov dword ptr [ebp - 0x198], 0x64 */ W32((u32)(r_ebp+0xfffffe68u), 0x64u);
    /* 005e207d: mov dword ptr [ebp - 0x194], 0xc8 */ W32((u32)(r_ebp+0xfffffe6cu), 0xc8u);
    /* 005e2087: mov dword ptr [ebp - 0x190], 2 */ W32((u32)(r_ebp+0xfffffe70u), 0x2u);
    /* 005e2091: mov dword ptr [ebp - 0x18c], 5 */ W32((u32)(r_ebp+0xfffffe74u), 0x5u);
    /* 005e209b: mov dword ptr [ebp - 0x188], 0xa */ W32((u32)(r_ebp+0xfffffe78u), 0xau);
    /* 005e20a5: mov dword ptr [ebp - 0x184], 0x14 */ W32((u32)(r_ebp+0xfffffe7cu), 0x14u);
    /* 005e20af: mov dword ptr [ebp - 0x180], 0x186a0 */ W32((u32)(r_ebp+0xfffffe80u), 0x186a0u);
    /* 005e20b9: mov dword ptr [ebp - 0x17c], 0x186a0 */ W32((u32)(r_ebp+0xfffffe84u), 0x186a0u);
    /* 005e20c3: mov dword ptr [ebp - 0x178], 0x186a0 */ W32((u32)(r_ebp+0xfffffe88u), 0x186a0u);
    /* 005e20cd: mov dword ptr [ebp - 0x174], 0x186a0 */ W32((u32)(r_ebp+0xfffffe8cu), 0x186a0u);
    /* 005e20d7: mov dword ptr [ebp - 0x170], 0x186a0 */ W32((u32)(r_ebp+0xfffffe90u), 0x186a0u);
    /* 005e20e1: mov dword ptr [ebp - 0x16c], 0x186a0 */ W32((u32)(r_ebp+0xfffffe94u), 0x186a0u);
    /* 005e20eb: mov dword ptr [ebp - 0x168], 0x186a0 */ W32((u32)(r_ebp+0xfffffe98u), 0x186a0u);
    /* 005e20f5: mov dword ptr [ebp - 0x164], 0x186a0 */ W32((u32)(r_ebp+0xfffffe9cu), 0x186a0u);
    /* 005e20ff: mov dword ptr [ebp - 0x160], 0x11170 */ W32((u32)(r_ebp+0xfffffea0u), 0x11170u);
    /* 005e2109: mov dword ptr [ebp - 0x15c], 0x186a0 */ W32((u32)(r_ebp+0xfffffea4u), 0x186a0u);
    /* 005e2113: mov dword ptr [ebp - 0x158], 0x186a0 */ W32((u32)(r_ebp+0xfffffea8u), 0x186a0u);
    /* 005e211d: mov dword ptr [ebp - 0x154], 0x186a0 */ W32((u32)(r_ebp+0xfffffeacu), 0x186a0u);
    /* 005e2127: mov dword ptr [ebp - 0x150], 0x61a8 */ W32((u32)(r_ebp+0xfffffeb0u), 0x61a8u);
    /* 005e2131: mov dword ptr [ebp - 0x14c], 0xf424 */ W32((u32)(r_ebp+0xfffffeb4u), 0xf424u);
    /* 005e213b: mov dword ptr [ebp - 0x148], 0x186a0 */ W32((u32)(r_ebp+0xfffffeb8u), 0x186a0u);
    /* 005e2145: mov dword ptr [ebp - 0x144], 0x186a0 */ W32((u32)(r_ebp+0xfffffebcu), 0x186a0u);
    /* 005e214f: mov dword ptr [ebp - 0x140], 0x15e0 */ W32((u32)(r_ebp+0xfffffec0u), 0x15e0u);
    /* 005e2159: mov dword ptr [ebp - 0x13c], 0x36b0 */ W32((u32)(r_ebp+0xfffffec4u), 0x36b0u);
    /* 005e2163: mov dword ptr [ebp - 0x138], 0x6d60 */ W32((u32)(r_ebp+0xfffffec8u), 0x6d60u);
    /* 005e216d: mov dword ptr [ebp - 0x134], 0xdac0 */ W32((u32)(r_ebp+0xfffffeccu), 0xdac0u);
    /* 005e2177: mov dword ptr [ebp - 0x130], 0x258 */ W32((u32)(r_ebp+0xfffffed0u), 0x258u);
    /* 005e2181: mov dword ptr [ebp - 0x12c], 0x5dc */ W32((u32)(r_ebp+0xfffffed4u), 0x5dcu);
    /* 005e218b: mov dword ptr [ebp - 0x128], 0xbb8 */ W32((u32)(r_ebp+0xfffffed8u), 0xbb8u);
    /* 005e2195: mov dword ptr [ebp - 0x124], 0x1770 */ W32((u32)(r_ebp+0xfffffedcu), 0x1770u);
    /* 005e219f: mov dword ptr [ebp - 0x120], 0xc8 */ W32((u32)(r_ebp+0xfffffee0u), 0xc8u);
    /* 005e21a9: mov dword ptr [ebp - 0x11c], 0x1f4 */ W32((u32)(r_ebp+0xfffffee4u), 0x1f4u);
    /* 005e21b3: mov dword ptr [ebp - 0x118], 0x3e8 */ W32((u32)(r_ebp+0xfffffee8u), 0x3e8u);
    /* 005e21bd: mov dword ptr [ebp - 0x114], 0x7d0 */ W32((u32)(r_ebp+0xfffffeecu), 0x7d0u);
    /* 005e21c7: mov dword ptr [ebp - 0x110], 0x32 */ W32((u32)(r_ebp+0xfffffef0u), 0x32u);
    /* 005e21d1: mov dword ptr [ebp - 0x10c], 0x7d */ W32((u32)(r_ebp+0xfffffef4u), 0x7du);
    /* 005e21db: mov dword ptr [ebp - 0x108], 0xfa */ W32((u32)(r_ebp+0xfffffef8u), 0xfau);
    /* 005e21e5: mov dword ptr [ebp - 0x104], 0x1f4 */ W32((u32)(r_ebp+0xfffffefcu), 0x1f4u);
    /* 005e21ef: mov dword ptr [ebp - 0x100], 0x14 */ W32((u32)(r_ebp+0xffffff00u), 0x14u);
    /* 005e21f9: mov dword ptr [ebp - 0xfc], 0x32 */ W32((u32)(r_ebp+0xffffff04u), 0x32u);
    /* 005e2203: mov dword ptr [ebp - 0xf8], 0x64 */ W32((u32)(r_ebp+0xffffff08u), 0x64u);
    /* 005e220d: mov dword ptr [ebp - 0xf4], 0xc8 */ W32((u32)(r_ebp+0xffffff0cu), 0xc8u);
    /* 005e2217: mov dword ptr [ebp - 0xb0], 0x186a0 */ W32((u32)(r_ebp+0xffffff50u), 0x186a0u);
    /* 005e2221: mov dword ptr [ebp - 0xac], 0x186a0 */ W32((u32)(r_ebp+0xffffff54u), 0x186a0u);
    /* 005e222b: mov dword ptr [ebp - 0xa8], 0x186a0 */ W32((u32)(r_ebp+0xffffff58u), 0x186a0u);
    /* 005e2235: mov dword ptr [ebp - 0xa4], 0x186a0 */ W32((u32)(r_ebp+0xffffff5cu), 0x186a0u);
    /* 005e223f: mov dword ptr [ebp - 0xa0], 0x186a0 */ W32((u32)(r_ebp+0xffffff60u), 0x186a0u);
    /* 005e2249: mov dword ptr [ebp - 0x9c], 0x186a0 */ W32((u32)(r_ebp+0xffffff64u), 0x186a0u);
    /* 005e2253: mov dword ptr [ebp - 0x98], 0x186a0 */ W32((u32)(r_ebp+0xffffff68u), 0x186a0u);
    /* 005e225d: mov dword ptr [ebp - 0x94], 0x186a0 */ W32((u32)(r_ebp+0xffffff6cu), 0x186a0u);
    /* 005e2267: mov dword ptr [ebp - 0x90], 0xc350 */ W32((u32)(r_ebp+0xffffff70u), 0xc350u);
    /* 005e2271: mov dword ptr [ebp - 0x8c], 0x186a0 */ W32((u32)(r_ebp+0xffffff74u), 0x186a0u);
    /* 005e227b: mov dword ptr [ebp - 0x88], 0x61a8 */ W32((u32)(r_ebp+0xffffff78u), 0x61a8u);
    /* 005e2285: mov dword ptr [ebp - 0x84], 0xc350 */ W32((u32)(r_ebp+0xffffff7cu), 0xc350u);
    /* 005e228f: mov dword ptr [ebp - 0x80], 0x30d4 */ W32((u32)(r_ebp+0xffffff80u), 0x30d4u);
    /* 005e2296: mov dword ptr [ebp - 0x7c], 0x61a8 */ W32((u32)(r_ebp+0xffffff84u), 0x61a8u);
    /* 005e229d: mov dword ptr [ebp - 0x78], 0x1388 */ W32((u32)(r_ebp+0xffffff88u), 0x1388u);
    /* 005e22a4: mov dword ptr [ebp - 0x74], 0x2710 */ W32((u32)(r_ebp+0xffffff8cu), 0x2710u);
    /* 005e22ab: mov dword ptr [ebp - 0x70], 0x3e8 */ W32((u32)(r_ebp+0xffffff90u), 0x3e8u);
    /* 005e22b2: mov dword ptr [ebp - 0x6c], 0x7d0 */ W32((u32)(r_ebp+0xffffff94u), 0x7d0u);
    /* 005e22b9: mov dword ptr [ebp - 0x68], 0xc8 */ W32((u32)(r_ebp+0xffffff98u), 0xc8u);
    /* 005e22c0: mov dword ptr [ebp - 0x64], 0x190 */ W32((u32)(r_ebp+0xffffff9cu), 0x190u);
    /* 005e22c7: mov dword ptr [ebp - 0x60], 0x32 */ W32((u32)(r_ebp+0xffffffa0u), 0x32u);
    /* 005e22ce: mov dword ptr [ebp - 0x5c], 0x64 */ W32((u32)(r_ebp+0xffffffa4u), 0x64u);
    /* 005e22d5: mov dword ptr [ebp - 0x58], 0x19 */ W32((u32)(r_ebp+0xffffffa8u), 0x19u);
    /* 005e22dc: mov dword ptr [ebp - 0x54], 0x32 */ W32((u32)(r_ebp+0xffffffacu), 0x32u);
    /* 005e22e3: mov dword ptr [ebp - 0x50], 0xa */ W32((u32)(r_ebp+0xffffffb0u), 0xau);
    /* 005e22ea: mov dword ptr [ebp - 0x4c], 0x14 */ W32((u32)(r_ebp+0xffffffb4u), 0x14u);
    /* 005e22f1: mov dword ptr [ebp - 0x48], 5 */ W32((u32)(r_ebp+0xffffffb8u), 0x5u);
    /* 005e22f8: mov dword ptr [ebp - 0x44], 0xa */ W32((u32)(r_ebp+0xffffffbcu), 0xau);
    /* 005e22ff: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 005e2306: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 005e230d: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 005e2314: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 005e231b: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 005e2322: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 005e2329: mov dword ptr [ebp - 0x28], 5 */ W32((u32)(r_ebp+0xffffffd8u), 0x5u);
    /* 005e2330: mov dword ptr [ebp - 0x24], 0xa */ W32((u32)(r_ebp+0xffffffdcu), 0xau);
    /* 005e2337: mov dword ptr [ebp - 0x20], 5 */ W32((u32)(r_ebp+0xffffffe0u), 0x5u);
    /* 005e233e: mov dword ptr [ebp - 0x1c], 0xa */ W32((u32)(r_ebp+0xffffffe4u), 0xau);
    /* 005e2345: mov dword ptr [ebp - 0x18], 0xa */ W32((u32)(r_ebp+0xffffffe8u), 0xau);
    /* 005e234c: mov dword ptr [ebp - 0x14], 0x14 */ W32((u32)(r_ebp+0xffffffecu), 0x14u);
    /* 005e2353: mov dword ptr [ebp - 0x10], 0x1f4 */ W32((u32)(r_ebp+0xfffffff0u), 0x1f4u);
    /* 005e235a: mov dword ptr [ebp - 0xc], 0x3e8 */ W32((u32)(r_ebp+0xfffffff4u), 0x3e8u);
    /* 005e2361: mov dword ptr [ebp - 0x708], 0x3d090 */ W32((u32)(r_ebp+0xfffff8f8u), 0x3d090u);
    /* 005e236b: mov dword ptr [ebp - 0x704], 0xc350 */ W32((u32)(r_ebp+0xfffff8fcu), 0xc350u);
    /* 005e2375: mov dword ptr [ebp - 0x700], 0xbb8 */ W32((u32)(r_ebp+0xfffff900u), 0xbb8u);
    /* 005e237f: mov dword ptr [ebp - 0x6fc], 0x3e8 */ W32((u32)(r_ebp+0xfffff904u), 0x3e8u);
    /* 005e2389: mov dword ptr [ebp - 0x6f8], 0xc8 */ W32((u32)(r_ebp+0xfffff908u), 0xc8u);
    /* 005e2393: mov dword ptr [ebp - 0x6f4], 0x28 */ W32((u32)(r_ebp+0xfffff90cu), 0x28u);
    /* 005e239d: mov dword ptr [ebp - 0x6f0], 0xa */ W32((u32)(r_ebp+0xfffff910u), 0xau);
    /* 005e23a7: mov dword ptr [ebp - 0x6ec], 3 */ W32((u32)(r_ebp+0xfffff914u), 0x3u);
    /* 005e23b1: mov dword ptr [ebp - 0x6e8], 1 */ W32((u32)(r_ebp+0xfffff918u), 0x1u);
    /* 005e23bb: mov dword ptr [ebp - 0x6e4], 1 */ W32((u32)(r_ebp+0xfffff91cu), 0x1u);
    /* 005e23c5: mov dword ptr [ebp - 0x6e0], 1 */ W32((u32)(r_ebp+0xfffff920u), 0x1u);
    /* 005e23cf: mov dword ptr [ebp - 0x6dc], 1 */ W32((u32)(r_ebp+0xfffff924u), 0x1u);
    /* 005e23d9: mov dword ptr [ebp - 0x6d8], 1 */ W32((u32)(r_ebp+0xfffff928u), 0x1u);
    /* 005e23e3: mov dword ptr [ebp - 0x6d4], 3 */ W32((u32)(r_ebp+0xfffff92cu), 0x3u);
    /* 005e23ed: mov dword ptr [ebp - 0x6d0], 0xa */ W32((u32)(r_ebp+0xfffff930u), 0xau);
    /* 005e23f7: mov dword ptr [ebp - 0x6cc], 0x28 */ W32((u32)(r_ebp+0xfffff934u), 0x28u);
    /* 005e2401: mov dword ptr [ebp - 0x6c8], 0xc8 */ W32((u32)(r_ebp+0xfffff938u), 0xc8u);
    /* 005e240b: mov dword ptr [ebp - 0x6c4], 0x3e8 */ W32((u32)(r_ebp+0xfffff93cu), 0x3e8u);
    /* 005e2415: mov dword ptr [ebp - 0x6c0], 0xbb8 */ W32((u32)(r_ebp+0xfffff940u), 0xbb8u);
    /* 005e241f: mov dword ptr [ebp - 0x6bc], 0xc350 */ W32((u32)(r_ebp+0xfffff944u), 0xc350u);
    /* 005e2429: mov dword ptr [ebp - 0x6b8], 0x3d090 */ W32((u32)(r_ebp+0xfffff948u), 0x3d090u);
    /* 005e2433: mov dword ptr [ebp - 0x670], 0x61a8 */ W32((u32)(r_ebp+0xfffff990u), 0x61a8u);
    /* 005e243d: mov dword ptr [ebp - 0x66c], 0x5dc */ W32((u32)(r_ebp+0xfffff994u), 0x5dcu);
    /* 005e2447: mov dword ptr [ebp - 0x668], 0x12c */ W32((u32)(r_ebp+0xfffff998u), 0x12cu);
    /* 005e2451: mov dword ptr [ebp - 0x664], 0x1e */ W32((u32)(r_ebp+0xfffff99cu), 0x1eu);
    /* 005e245b: mov dword ptr [ebp - 0x660], 0xa */ W32((u32)(r_ebp+0xfffff9a0u), 0xau);
    /* 005e2465: mov dword ptr [ebp - 0x65c], 3 */ W32((u32)(r_ebp+0xfffff9a4u), 0x3u);
    /* 005e246f: mov dword ptr [ebp - 0x658], 1 */ W32((u32)(r_ebp+0xfffff9a8u), 0x1u);
    /* 005e2479: mov dword ptr [ebp - 0x654], 1 */ W32((u32)(r_ebp+0xfffff9acu), 0x1u);
    /* 005e2483: mov dword ptr [ebp - 0x650], 1 */ W32((u32)(r_ebp+0xfffff9b0u), 0x1u);
    /* 005e248d: mov dword ptr [ebp - 0x64c], 1 */ W32((u32)(r_ebp+0xfffff9b4u), 0x1u);
    /* 005e2497: mov dword ptr [ebp - 0x648], 1 */ W32((u32)(r_ebp+0xfffff9b8u), 0x1u);
    /* 005e24a1: mov dword ptr [ebp - 0x644], 3 */ W32((u32)(r_ebp+0xfffff9bcu), 0x3u);
    /* 005e24ab: mov dword ptr [ebp - 0x640], 0xa */ W32((u32)(r_ebp+0xfffff9c0u), 0xau);
    /* 005e24b5: mov dword ptr [ebp - 0x63c], 0x32 */ W32((u32)(r_ebp+0xfffff9c4u), 0x32u);
    /* 005e24bf: mov dword ptr [ebp - 0x638], 0xc8 */ W32((u32)(r_ebp+0xfffff9c8u), 0xc8u);
    /* 005e24c9: mov dword ptr [ebp - 0x634], 0x3e8 */ W32((u32)(r_ebp+0xfffff9ccu), 0x3e8u);
    /* 005e24d3: mov dword ptr [ebp - 0x630], 0x1388 */ W32((u32)(r_ebp+0xfffff9d0u), 0x1388u);
    /* 005e24dd: mov dword ptr [ebp - 0x62c], 0x61a8 */ W32((u32)(r_ebp+0xfffff9d4u), 0x61a8u);
    /* 005e24e7: mov dword ptr [ebp - 0x628], 0xea60 */ W32((u32)(r_ebp+0xfffff9d8u), 0xea60u);
    /* 005e24f1: mov dword ptr [ebp - 0x624], 0x186a0 */ W32((u32)(r_ebp+0xfffff9dcu), 0x186a0u);
    /* 005e24fb: mov dword ptr [ebp - 0x620], 0x3d090 */ W32((u32)(r_ebp+0xfffff9e0u), 0x3d090u);
    /* 005e2505: mov dword ptr [ebp - 0xec], 1 */ W32((u32)(r_ebp+0xffffff14u), 0x1u);
    /* 005e250f: mov dword ptr [ebp - 0xe8], 2 */ W32((u32)(r_ebp+0xffffff18u), 0x2u);
    /* 005e2519: mov dword ptr [ebp - 0xe4], 2 */ W32((u32)(r_ebp+0xffffff1cu), 0x2u);
    /* 005e2523: mov dword ptr [ebp - 0xe0], 2 */ W32((u32)(r_ebp+0xffffff20u), 0x2u);
    /* 005e252d: mov dword ptr [ebp - 0xdc], 3 */ W32((u32)(r_ebp+0xffffff24u), 0x3u);
    /* 005e2537: mov dword ptr [ebp - 0xd8], 3 */ W32((u32)(r_ebp+0xffffff28u), 0x3u);
    /* 005e2541: mov dword ptr [ebp - 0xd4], 4 */ W32((u32)(r_ebp+0xffffff2cu), 0x4u);
    /* 005e254b: mov dword ptr [ebp - 0xd0], 5 */ W32((u32)(r_ebp+0xffffff30u), 0x5u);
    /* 005e2555: mov dword ptr [ebp - 0xcc], 5 */ W32((u32)(r_ebp+0xffffff34u), 0x5u);
    /* 005e255f: mov dword ptr [ebp - 0xc8], 5 */ W32((u32)(r_ebp+0xffffff38u), 0x5u);
    /* 005e2569: mov dword ptr [ebp - 0xc4], 6 */ W32((u32)(r_ebp+0xffffff3cu), 0x6u);
    /* 005e2573: mov dword ptr [ebp - 0xc0], 6 */ W32((u32)(r_ebp+0xffffff40u), 0x6u);
    /* 005e257d: mov dword ptr [ebp - 0xbc], 6 */ W32((u32)(r_ebp+0xffffff44u), 0x6u);
    /* 005e2587: mov dword ptr [ebp - 0xb8], 6 */ W32((u32)(r_ebp+0xffffff48u), 0x6u);
    /* 005e2591: mov dword ptr [ebp - 0xb4], 7 */ W32((u32)(r_ebp+0xffffff4cu), 0x7u);
    /* 005e259b: mov dword ptr [ebp - 0x5f8], 0 */ W32((u32)(r_ebp+0xfffffa08u), 0x0u);
    /* 005e25a5: mov dword ptr [ebp - 0x5f4], 0 */ W32((u32)(r_ebp+0xfffffa0cu), 0x0u);
    /* 005e25af: mov dword ptr [ebp - 0x5f0], 0 */ W32((u32)(r_ebp+0xfffffa10u), 0x0u);
    /* 005e25b9: mov dword ptr [ebp - 0x5ec], 3 */ W32((u32)(r_ebp+0xfffffa14u), 0x3u);
    /* 005e25c3: mov dword ptr [ebp - 0x5e8], 4 */ W32((u32)(r_ebp+0xfffffa18u), 0x4u);
    /* 005e25cd: mov dword ptr [ebp - 0x5e4], 4 */ W32((u32)(r_ebp+0xfffffa1cu), 0x4u);
    /* 005e25d7: mov dword ptr [ebp - 0x6ac], 0 */ W32((u32)(r_ebp+0xfffff954u), 0x0u);
    /* 005e25e1: mov dword ptr [ebp - 0x6a8], 1 */ W32((u32)(r_ebp+0xfffff958u), 0x1u);
    /* 005e25eb: mov dword ptr [ebp - 0x6a4], 2 */ W32((u32)(r_ebp+0xfffff95cu), 0x2u);
    /* 005e25f5: mov dword ptr [ebp - 0x6a0], 4 */ W32((u32)(r_ebp+0xfffff960u), 0x4u);
    /* 005e25ff: mov dword ptr [ebp - 0x69c], 9 */ W32((u32)(r_ebp+0xfffff964u), 0x9u);
    /* 005e2609: mov dword ptr [ebp - 0x698], 0xe */ W32((u32)(r_ebp+0xfffff968u), 0xeu);
    /* 005e2613: mov dword ptr [ebp - 0x694], 0x15 */ W32((u32)(r_ebp+0xfffff96cu), 0x15u);
    /* 005e261d: mov dword ptr [ebp - 0x690], 0x19 */ W32((u32)(r_ebp+0xfffff970u), 0x19u);
    /* 005e2627: mov dword ptr [ebp - 0x68c], 0x1d */ W32((u32)(r_ebp+0xfffff974u), 0x1du);
    /* 005e2631: mov dword ptr [ebp - 0x688], 0x22 */ W32((u32)(r_ebp+0xfffff978u), 0x22u);
    /* 005e263b: mov dword ptr [ebp - 0x684], 0x28 */ W32((u32)(r_ebp+0xfffff97cu), 0x28u);
    /* 005e2645: mov dword ptr [ebp - 0x680], 0x2e */ W32((u32)(r_ebp+0xfffff980u), 0x2eu);
    /* 005e264f: mov dword ptr [ebp - 0x67c], 0x35 */ W32((u32)(r_ebp+0xfffff984u), 0x35u);
    /* 005e2659: mov dword ptr [ebp - 0x678], 0x3d */ W32((u32)(r_ebp+0xfffff988u), 0x3du);
    /* 005e2663: mov dword ptr [ebp - 0x674], 0x46 */ W32((u32)(r_ebp+0xfffff98cu), 0x46u);
    /* 005e266d: mov dword ptr [ebp - 0x618], 0 */ W32((u32)(r_ebp+0xfffff9e8u), 0x0u);
    /* 005e2677: mov dword ptr [ebp - 0x614], 0 */ W32((u32)(r_ebp+0xfffff9ecu), 0x0u);
    /* 005e2681: mov dword ptr [ebp - 0x610], 0 */ W32((u32)(r_ebp+0xfffff9f0u), 0x0u);
    /* 005e268b: mov dword ptr [ebp - 0x60c], 7 */ W32((u32)(r_ebp+0xfffff9f4u), 0x7u);
    /* 005e2695: mov dword ptr [ebp - 0x608], 0xc */ W32((u32)(r_ebp+0xfffff9f8u), 0xcu);
    /* 005e269f: mov dword ptr [ebp - 0x604], 0x12 */ W32((u32)(r_ebp+0xfffff9fcu), 0x12u);
    /* 005e26a9: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 005e26ac: mov dword ptr [ebp - 0x714], eax */ W32((u32)(r_ebp+0xfffff8ecu), r_eax);
    /* 005e26b2: mov ecx, dword ptr [ebp - 0x714] */ r_ecx = R32((u32)(r_ebp+0xfffff8ecu));
    /* 005e26b8: sub ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005e26bb: mov dword ptr [ebp - 0x714], ecx */ W32((u32)(r_ebp+0xfffff8ecu), r_ecx);
    /* 005e26c1: cmp dword ptr [ebp - 0x714], 0x41 */ {  u32 a = R32((u32)(r_ebp+0xfffff8ecu)); u32 b = 0x41u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005e26c8: ja 0x5e26de */ if ((!fC&&!fZ)) goto L_005e26de;
L_005e26ca:; BB(0x005e26ca);
    /* 005e26ca: mov edx, dword ptr [ebp - 0x714] */ r_edx = R32((u32)(r_ebp+0xfffff8ecu));
    /* 005e26d0: movzx eax, byte ptr [edx + 0x5e2810] */ r_eax = (u32)R8((u32)(r_edx+0x5e2810u));
    /* 005e26d7: jmp dword ptr [eax*4 + 0x5e2800] */ { u32 t = R32((u32)(r_eax*4+0x5e2800u)); switch (t) { case 0x5e26e7u: goto L_005e26e7; case 0x5e26f0u: goto L_005e26f0; case 0x5e26f9u: goto L_005e26f9; case 0x5e26deu: goto L_005e26de; default: UNSUP(0x005e26d7, "jump table entry is not a known target"); } }
L_005e26de:; BB(0x005e26de);
    /* 005e26de: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e26e5: jmp 0x5e2700 */ goto L_005e2700;
L_005e26e7:; BB(0x005e26e7);
    /* 005e26e7: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005e26ee: jmp 0x5e2700 */ goto L_005e2700;
L_005e26f0:; BB(0x005e26f0);
    /* 005e26f0: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 005e26f7: jmp 0x5e2700 */ goto L_005e2700;
L_005e26f9:; BB(0x005e26f9);
    /* 005e26f9: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
L_005e2700:; BB(0x005e2700);
    /* 005e2700: movzx ecx, byte ptr [ebp + 0x14] */ r_ecx = (u32)R8((u32)(r_ebp+0x14u));
    /* 005e2704: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e2706: je 0x5e271a */ if (fZ) goto L_005e271a;
L_005e2708:; BB(0x005e2708);
    /* 005e2708: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005e270b: mov eax, dword ptr [ebp + edx*4 - 0x61c] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xfffff9e4u));
    /* 005e2712: mov dword ptr [ebp - 0x600], eax */ W32((u32)(r_ebp+0xfffffa00u), r_eax);
    /* 005e2718: jmp 0x5e272a */ goto L_005e272a;
L_005e271a:; BB(0x005e271a);
    /* 005e271a: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005e271d: mov edx, dword ptr [ebp + ecx*4 - 0x6b0] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xfffff950u));
    /* 005e2724: mov dword ptr [ebp - 0x600], edx */ W32((u32)(r_ebp+0xfffffa00u), r_edx);
L_005e272a:; BB(0x005e272a);
    /* 005e272a: cmp dword ptr [ebp + 0xc], 0x14 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e272e: jne 0x5e274a */ if (!fZ) goto L_005e274a;
L_005e2730:; BB(0x005e2730);
    /* 005e2730: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005e2732: cmp dword ptr [ebp + 0x18], 5 */ {  u32 a = R32((u32)(r_ebp+0x18u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e2736: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 005e2739: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005e273c: mov ecx, 0x14 */ r_ecx = 0x14u;
    /* 005e2741: sub ecx, dword ptr [ebp + 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005e2744: mov dword ptr [ebp - 0x600], ecx */ W32((u32)(r_ebp+0xfffffa00u), r_ecx);
L_005e274a:; BB(0x005e274a);
    /* 005e274a: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e274e: jge 0x5e27ce */ if ((fS==fO)) goto L_005e27ce;
L_005e2750:; BB(0x005e2750);
    /* 005e2750: cmp dword ptr [ebp + 0xc], 0x14 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e2754: jge 0x5e27b7 */ if ((fS==fO)) goto L_005e27b7;
L_005e2756:; BB(0x005e2756);
    /* 005e2756: movzx edx, byte ptr [ebp + 0x14] */ r_edx = (u32)R8((u32)(r_ebp+0x14u));
    /* 005e275a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e275c: je 0x5e2770 */ if (fZ) goto L_005e2770;
L_005e275e:; BB(0x005e275e);
    /* 005e275e: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005e2761: mov ecx, dword ptr [ebp + eax*4 - 0x5fc] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xfffffa04u));
    /* 005e2768: mov dword ptr [ebp - 0x70c], ecx */ W32((u32)(r_ebp+0xfffff8f4u), r_ecx);
    /* 005e276e: jmp 0x5e2780 */ goto L_005e2780;
L_005e2770:; BB(0x005e2770);
    /* 005e2770: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005e2773: mov eax, dword ptr [ebp + edx*4 - 0xf0] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xffffff10u));
    /* 005e277a: mov dword ptr [ebp - 0x70c], eax */ W32((u32)(r_ebp+0xfffff8f4u), r_eax);
L_005e2780:; BB(0x005e2780);
    /* 005e2780: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005e2783: cmp ecx, dword ptr [ebp - 0x70c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffff8f4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e2789: jl 0x5e27b5 */ if ((fS!=fO)) goto L_005e27b5;
L_005e278b:; BB(0x005e278b);
    /* 005e278b: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005e278e: sub edx, dword ptr [ebp + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005e2791: mov dword ptr [ebp - 0x5fc], edx */ W32((u32)(r_ebp+0xfffffa04u), r_edx);
    /* 005e2797: mov eax, dword ptr [ebp - 0x600] */ r_eax = R32((u32)(r_ebp+0xfffffa00u));
    /* 005e279d: add eax, dword ptr [ebp - 0x5fc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffa04u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e27a3: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005e27a6: lea ecx, [ebp + eax - 0x5e0] */ r_ecx = (u32)(r_ebp+r_eax+0xfffffa20u);
    /* 005e27ad: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e27b0: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 005e27b3: jmp 0x5e27fa */ goto L_005e27fa;
L_005e27b5:; BB(0x005e27b5);
    /* 005e27b5: jmp 0x5e27cc */ goto L_005e27cc;
L_005e27b7:; BB(0x005e27b7);
    /* 005e27b7: mov eax, dword ptr [ebp - 0x600] */ r_eax = R32((u32)(r_ebp+0xfffffa00u));
    /* 005e27bd: lea ecx, [ebp + eax*8 - 0xb0] */ r_ecx = (u32)(r_ebp+r_eax*8+0xffffff50u);
    /* 005e27c4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e27c7: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 005e27ca: jmp 0x5e27fa */ goto L_005e27fa;
L_005e27cc:; BB(0x005e27cc);
    /* 005e27cc: jmp 0x5e27f8 */ goto L_005e27f8;
L_005e27ce:; BB(0x005e27ce);
    /* 005e27ce: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e27d2: jne 0x5e27e0 */ if (!fZ) goto L_005e27e0;
L_005e27d4:; BB(0x005e27d4);
    /* 005e27d4: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005e27d7: mov eax, dword ptr [ebp + eax*4 - 0x670] */ r_eax = R32((u32)(r_ebp+r_eax*4+0xfffff990u));
    /* 005e27de: jmp 0x5e27fa */ goto L_005e27fa;
L_005e27e0:; BB(0x005e27e0);
    /* 005e27e0: cmp dword ptr [ebp + 8], 5 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e27e4: je 0x5e27ec */ if (fZ) goto L_005e27ec;
L_005e27e6:; BB(0x005e27e6);
    /* 005e27e6: cmp dword ptr [ebp + 8], 6 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e27ea: jne 0x5e27f8 */ if (!fZ) goto L_005e27f8;
L_005e27ec:; BB(0x005e27ec);
    /* 005e27ec: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005e27ef: mov eax, dword ptr [ebp + ecx*4 - 0x708] */ r_eax = R32((u32)(r_ebp+r_ecx*4+0xfffff8f8u));
    /* 005e27f6: jmp 0x5e27fa */ goto L_005e27fa;
L_005e27f8:; BB(0x005e27f8);
    /* 005e27f8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005e27fa:; BB(0x005e27fa);
    /* 005e27fa: mov esp, ebp */ r_esp = r_ebp;
    /* 005e27fc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e27fd: ret 0x14 */ FN_RET(0x005e15b0); r_esp += 24; return;
}

