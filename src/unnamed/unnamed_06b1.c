#include "protos.h"

void f_006b1130(void) /* sub_6B1130 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006b1130);
    /* 006b1130: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006b1131: mov ebp, esp */ r_ebp = r_esp;
    /* 006b1133: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006b1135: push 0x6a977a */ { u32 v = 0x6a977au; r_esp -= 4; W32(r_esp, v); }
    /* 006b113a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006b1140: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b1141: sub esp, 0x108 */ {  u32 a = r_esp; u32 b = 0x108u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b1147: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 006b114c: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006b114e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b114f: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 006b1152: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 006b1158: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006b115a: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x6b115fu); f_00686d82();
    /* 006b115f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b1162: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006b1165: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006b116c: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b1170: je 0x6b1182 */ if (fZ) goto L_006b1182;
L_006b1172:; BB(0x006b1172);
    /* 006b1172: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006b1175: call 0x4068d0 */ r_esp -= 4; W32(r_esp, 0x6b117au); f_004068d0();
    /* 006b117a: mov dword ptr [ebp - 0xc0], eax */ W32((u32)(r_ebp+0xffffff40u), r_eax);
    /* 006b1180: jmp 0x6b118c */ goto L_006b118c;
L_006b1182:; BB(0x006b1182);
    /* 006b1182: mov dword ptr [ebp - 0xc0], 0 */ W32((u32)(r_ebp+0xffffff40u), 0x0u);
L_006b118c:; BB(0x006b118c);
    /* 006b118c: mov eax, dword ptr [ebp - 0xc0] */ r_eax = R32((u32)(r_ebp+0xffffff40u));
    /* 006b1192: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 006b1195: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006b119c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006b119f: mov dword ptr [0x7947f4], ecx */ W32((u32)(0x7947f4u), r_ecx);
    /* 006b11a5: mov dword ptr [0x7947f8], 0x311280 */ W32((u32)(0x7947f8u), 0x311280u);
    /* 006b11af: mov dword ptr [0x7947fc], 2 */ W32((u32)(0x7947fcu), 0x2u);
    /* 006b11b9: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006b11bb: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x6b11c0u); f_00686d82();
    /* 006b11c0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b11c3: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 006b11c6: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006b11cd: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b11d1: je 0x6b11e3 */ if (fZ) goto L_006b11e3;
L_006b11d3:; BB(0x006b11d3);
    /* 006b11d3: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006b11d6: call 0x4176d0 */ r_esp -= 4; W32(r_esp, 0x6b11dbu); f_004176d0();
    /* 006b11db: mov dword ptr [ebp - 0xc4], eax */ W32((u32)(r_ebp+0xffffff3cu), r_eax);
    /* 006b11e1: jmp 0x6b11ed */ goto L_006b11ed;
L_006b11e3:; BB(0x006b11e3);
    /* 006b11e3: mov dword ptr [ebp - 0xc4], 0 */ W32((u32)(r_ebp+0xffffff3cu), 0x0u);
L_006b11ed:; BB(0x006b11ed);
    /* 006b11ed: mov edx, dword ptr [ebp - 0xc4] */ r_edx = R32((u32)(r_ebp+0xffffff3cu));
    /* 006b11f3: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 006b11f6: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006b11fd: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006b1200: mov dword ptr [0x794800], eax */ W32((u32)(0x794800u), r_eax);
    /* 006b1205: mov dword ptr [0x794804], 0x30d7e8 */ W32((u32)(0x794804u), 0x30d7e8u);
    /* 006b120f: mov dword ptr [0x794808], 3 */ W32((u32)(0x794808u), 0x3u);
    /* 006b1219: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006b121b: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x6b1220u); f_00686d82();
    /* 006b1220: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b1223: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 006b1226: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 006b122d: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b1231: je 0x6b1243 */ if (fZ) goto L_006b1243;
L_006b1233:; BB(0x006b1233);
    /* 006b1233: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006b1236: call 0x425350 */ r_esp -= 4; W32(r_esp, 0x6b123bu); f_00425350();
    /* 006b123b: mov dword ptr [ebp - 0xc8], eax */ W32((u32)(r_ebp+0xffffff38u), r_eax);
    /* 006b1241: jmp 0x6b124d */ goto L_006b124d;
L_006b1243:; BB(0x006b1243);
    /* 006b1243: mov dword ptr [ebp - 0xc8], 0 */ W32((u32)(r_ebp+0xffffff38u), 0x0u);
L_006b124d:; BB(0x006b124d);
    /* 006b124d: mov ecx, dword ptr [ebp - 0xc8] */ r_ecx = R32((u32)(r_ebp+0xffffff38u));
    /* 006b1253: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006b1256: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006b125d: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006b1260: mov dword ptr [0x79480c], edx */ W32((u32)(0x79480cu), r_edx);
    /* 006b1266: mov dword ptr [0x794810], 0x3106c8 */ W32((u32)(0x794810u), 0x3106c8u);
    /* 006b1270: mov dword ptr [0x794814], 4 */ W32((u32)(0x794814u), 0x4u);
    /* 006b127a: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006b127c: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x6b1281u); f_00686d82();
    /* 006b1281: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b1284: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 006b1287: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 006b128e: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b1292: je 0x6b12a4 */ if (fZ) goto L_006b12a4;
L_006b1294:; BB(0x006b1294);
    /* 006b1294: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 006b1297: call 0x433800 */ r_esp -= 4; W32(r_esp, 0x6b129cu); f_00433800();
    /* 006b129c: mov dword ptr [ebp - 0xcc], eax */ W32((u32)(r_ebp+0xffffff34u), r_eax);
    /* 006b12a2: jmp 0x6b12ae */ goto L_006b12ae;
L_006b12a4:; BB(0x006b12a4);
    /* 006b12a4: mov dword ptr [ebp - 0xcc], 0 */ W32((u32)(r_ebp+0xffffff34u), 0x0u);
L_006b12ae:; BB(0x006b12ae);
    /* 006b12ae: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 006b12b4: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 006b12b7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006b12be: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006b12c1: mov dword ptr [0x794818], ecx */ W32((u32)(0x794818u), r_ecx);
    /* 006b12c7: mov dword ptr [0x79481c], 0x30dbd0 */ W32((u32)(0x79481cu), 0x30dbd0u);
    /* 006b12d1: mov dword ptr [0x794820], 7 */ W32((u32)(0x794820u), 0x7u);
    /* 006b12db: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006b12dd: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x6b12e2u); f_00686d82();
    /* 006b12e2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b12e5: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 006b12e8: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 006b12ef: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b12f3: je 0x6b1305 */ if (fZ) goto L_006b1305;
L_006b12f5:; BB(0x006b12f5);
    /* 006b12f5: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 006b12f8: call 0x444480 */ r_esp -= 4; W32(r_esp, 0x6b12fdu); f_00444480();
    /* 006b12fd: mov dword ptr [ebp - 0xd0], eax */ W32((u32)(r_ebp+0xffffff30u), r_eax);
    /* 006b1303: jmp 0x6b130f */ goto L_006b130f;
L_006b1305:; BB(0x006b1305);
    /* 006b1305: mov dword ptr [ebp - 0xd0], 0 */ W32((u32)(r_ebp+0xffffff30u), 0x0u);
L_006b130f:; BB(0x006b130f);
    /* 006b130f: mov edx, dword ptr [ebp - 0xd0] */ r_edx = R32((u32)(r_ebp+0xffffff30u));
    /* 006b1315: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 006b1318: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006b131f: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 006b1322: mov dword ptr [0x794824], eax */ W32((u32)(0x794824u), r_eax);
    /* 006b1327: mov dword ptr [0x794828], 0x30f728 */ W32((u32)(0x794828u), 0x30f728u);
    /* 006b1331: mov dword ptr [0x79482c], 8 */ W32((u32)(0x79482cu), 0x8u);
    /* 006b133b: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006b133d: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x6b1342u); f_00686d82();
    /* 006b1342: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b1345: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 006b1348: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 006b134f: cmp dword ptr [ebp - 0x3c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b1353: je 0x6b1365 */ if (fZ) goto L_006b1365;
L_006b1355:; BB(0x006b1355);
    /* 006b1355: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 006b1358: call 0x583b60 */ r_esp -= 4; W32(r_esp, 0x6b135du); f_00583b60();
    /* 006b135d: mov dword ptr [ebp - 0xd4], eax */ W32((u32)(r_ebp+0xffffff2cu), r_eax);
    /* 006b1363: jmp 0x6b136f */ goto L_006b136f;
L_006b1365:; BB(0x006b1365);
    /* 006b1365: mov dword ptr [ebp - 0xd4], 0 */ W32((u32)(r_ebp+0xffffff2cu), 0x0u);
L_006b136f:; BB(0x006b136f);
    /* 006b136f: mov ecx, dword ptr [ebp - 0xd4] */ r_ecx = R32((u32)(r_ebp+0xffffff2cu));
    /* 006b1375: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 006b1378: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006b137f: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 006b1382: mov dword ptr [0x794830], edx */ W32((u32)(0x794830u), r_edx);
    /* 006b1388: mov dword ptr [0x794834], 0x30dfb8 */ W32((u32)(0x794834u), 0x30dfb8u);
    /* 006b1392: mov dword ptr [0x794838], 9 */ W32((u32)(0x794838u), 0x9u);
    /* 006b139c: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006b139e: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x6b13a3u); f_00686d82();
    /* 006b13a3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b13a6: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 006b13a9: mov dword ptr [ebp - 4], 6 */ W32((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 006b13b0: cmp dword ptr [ebp - 0x44], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffbcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b13b4: je 0x6b13c6 */ if (fZ) goto L_006b13c6;
L_006b13b6:; BB(0x006b13b6);
    /* 006b13b6: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 006b13b9: call 0x44bde0 */ r_esp -= 4; W32(r_esp, 0x6b13beu); f_0044bde0();
    /* 006b13be: mov dword ptr [ebp - 0xd8], eax */ W32((u32)(r_ebp+0xffffff28u), r_eax);
    /* 006b13c4: jmp 0x6b13d0 */ goto L_006b13d0;
L_006b13c6:; BB(0x006b13c6);
    /* 006b13c6: mov dword ptr [ebp - 0xd8], 0 */ W32((u32)(r_ebp+0xffffff28u), 0x0u);
L_006b13d0:; BB(0x006b13d0);
    /* 006b13d0: mov eax, dword ptr [ebp - 0xd8] */ r_eax = R32((u32)(r_ebp+0xffffff28u));
    /* 006b13d6: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 006b13d9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006b13e0: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 006b13e3: mov dword ptr [0x79483c], ecx */ W32((u32)(0x79483cu), r_ecx);
    /* 006b13e9: mov dword ptr [0x794840], 0x310ab0 */ W32((u32)(0x794840u), 0x310ab0u);
    /* 006b13f3: mov dword ptr [0x794844], 0xa */ W32((u32)(0x794844u), 0xau);
    /* 006b13fd: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 006b13ff: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x6b1404u); f_00686d82();
    /* 006b1404: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b1407: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 006b140a: mov dword ptr [ebp - 4], 7 */ W32((u32)(r_ebp+0xfffffffcu), 0x7u);
    /* 006b1411: cmp dword ptr [ebp - 0x4c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b1415: je 0x6b1429 */ if (fZ) goto L_006b1429;
L_006b1417:; BB(0x006b1417);
    /* 006b1417: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006b1419: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 006b141c: call 0x45ebb0 */ r_esp -= 4; W32(r_esp, 0x6b1421u); f_0045ebb0();
    /* 006b1421: mov dword ptr [ebp - 0xdc], eax */ W32((u32)(r_ebp+0xffffff24u), r_eax);
    /* 006b1427: jmp 0x6b1433 */ goto L_006b1433;
L_006b1429:; BB(0x006b1429);
    /* 006b1429: mov dword ptr [ebp - 0xdc], 0 */ W32((u32)(r_ebp+0xffffff24u), 0x0u);
L_006b1433:; BB(0x006b1433);
    /* 006b1433: mov edx, dword ptr [ebp - 0xdc] */ r_edx = R32((u32)(r_ebp+0xffffff24u));
    /* 006b1439: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 006b143c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006b1443: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 006b1446: mov dword ptr [0x794848], eax */ W32((u32)(0x794848u), r_eax);
    /* 006b144b: mov dword ptr [0x79484c], 0x30e3a0 */ W32((u32)(0x79484cu), 0x30e3a0u);
    /* 006b1455: mov dword ptr [0x794850], 0xb */ W32((u32)(0x794850u), 0xbu);
    /* 006b145f: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006b1461: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x6b1466u); f_00686d82();
    /* 006b1466: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b1469: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 006b146c: mov dword ptr [ebp - 4], 8 */ W32((u32)(r_ebp+0xfffffffcu), 0x8u);
    /* 006b1473: cmp dword ptr [ebp - 0x54], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffacu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b1477: je 0x6b1489 */ if (fZ) goto L_006b1489;
L_006b1479:; BB(0x006b1479);
    /* 006b1479: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 006b147c: call 0x4fd7b0 */ r_esp -= 4; W32(r_esp, 0x6b1481u); f_004fd7b0();
    /* 006b1481: mov dword ptr [ebp - 0xe0], eax */ W32((u32)(r_ebp+0xffffff20u), r_eax);
    /* 006b1487: jmp 0x6b1493 */ goto L_006b1493;
L_006b1489:; BB(0x006b1489);
    /* 006b1489: mov dword ptr [ebp - 0xe0], 0 */ W32((u32)(r_ebp+0xffffff20u), 0x0u);
L_006b1493:; BB(0x006b1493);
    /* 006b1493: mov ecx, dword ptr [ebp - 0xe0] */ r_ecx = R32((u32)(r_ebp+0xffffff20u));
    /* 006b1499: mov dword ptr [ebp - 0x50], ecx */ W32((u32)(r_ebp+0xffffffb0u), r_ecx);
    /* 006b149c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006b14a3: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006b14a6: mov dword ptr [0x794854], edx */ W32((u32)(0x794854u), r_edx);
    /* 006b14ac: mov dword ptr [0x794858], 0x2f7470 */ W32((u32)(0x794858u), 0x2f7470u);
    /* 006b14b6: mov dword ptr [0x79485c], 0xc */ W32((u32)(0x79485cu), 0xcu);
    /* 006b14c0: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006b14c2: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x6b14c7u); f_00686d82();
    /* 006b14c7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b14ca: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 006b14cd: mov dword ptr [ebp - 4], 9 */ W32((u32)(r_ebp+0xfffffffcu), 0x9u);
    /* 006b14d4: cmp dword ptr [ebp - 0x5c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b14d8: je 0x6b14ea */ if (fZ) goto L_006b14ea;
L_006b14da:; BB(0x006b14da);
    /* 006b14da: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 006b14dd: call 0x527170 */ r_esp -= 4; W32(r_esp, 0x6b14e2u); f_00527170();
    /* 006b14e2: mov dword ptr [ebp - 0xe4], eax */ W32((u32)(r_ebp+0xffffff1cu), r_eax);
    /* 006b14e8: jmp 0x6b14f4 */ goto L_006b14f4;
L_006b14ea:; BB(0x006b14ea);
    /* 006b14ea: mov dword ptr [ebp - 0xe4], 0 */ W32((u32)(r_ebp+0xffffff1cu), 0x0u);
L_006b14f4:; BB(0x006b14f4);
    /* 006b14f4: mov eax, dword ptr [ebp - 0xe4] */ r_eax = R32((u32)(r_ebp+0xffffff1cu));
    /* 006b14fa: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 006b14fd: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006b1504: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 006b1507: mov dword ptr [0x794860], ecx */ W32((u32)(0x794860u), r_ecx);
    /* 006b150d: mov dword ptr [0x794864], 0x30eb70 */ W32((u32)(0x794864u), 0x30eb70u);
    /* 006b1517: mov dword ptr [0x794868], 0xe */ W32((u32)(0x794868u), 0xeu);
    /* 006b1521: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006b1523: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x6b1528u); f_00686d82();
    /* 006b1528: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b152b: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 006b152e: mov dword ptr [ebp - 4], 0xa */ W32((u32)(r_ebp+0xfffffffcu), 0xau);
    /* 006b1535: cmp dword ptr [ebp - 0x64], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff9cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b1539: je 0x6b154b */ if (fZ) goto L_006b154b;
L_006b153b:; BB(0x006b153b);
    /* 006b153b: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 006b153e: call 0x5350a0 */ r_esp -= 4; W32(r_esp, 0x6b1543u); f_005350a0();
    /* 006b1543: mov dword ptr [ebp - 0xe8], eax */ W32((u32)(r_ebp+0xffffff18u), r_eax);
    /* 006b1549: jmp 0x6b1555 */ goto L_006b1555;
L_006b154b:; BB(0x006b154b);
    /* 006b154b: mov dword ptr [ebp - 0xe8], 0 */ W32((u32)(r_ebp+0xffffff18u), 0x0u);
L_006b1555:; BB(0x006b1555);
    /* 006b1555: mov edx, dword ptr [ebp - 0xe8] */ r_edx = R32((u32)(r_ebp+0xffffff18u));
    /* 006b155b: mov dword ptr [ebp - 0x60], edx */ W32((u32)(r_ebp+0xffffffa0u), r_edx);
    /* 006b155e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006b1565: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 006b1568: mov dword ptr [0x79486c], eax */ W32((u32)(0x79486cu), r_eax);
    /* 006b156d: mov dword ptr [0x794870], 0x30ef58 */ W32((u32)(0x794870u), 0x30ef58u);
    /* 006b1577: mov dword ptr [0x794874], 0xf */ W32((u32)(0x794874u), 0xfu);
    /* 006b1581: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006b1583: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x6b1588u); f_00686d82();
    /* 006b1588: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b158b: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 006b158e: mov dword ptr [ebp - 4], 0xb */ W32((u32)(r_ebp+0xfffffffcu), 0xbu);
    /* 006b1595: cmp dword ptr [ebp - 0x6c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff94u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b1599: je 0x6b15ab */ if (fZ) goto L_006b15ab;
L_006b159b:; BB(0x006b159b);
    /* 006b159b: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 006b159e: call 0x53fc50 */ r_esp -= 4; W32(r_esp, 0x6b15a3u); f_0053fc50();
    /* 006b15a3: mov dword ptr [ebp - 0xec], eax */ W32((u32)(r_ebp+0xffffff14u), r_eax);
    /* 006b15a9: jmp 0x6b15b5 */ goto L_006b15b5;
L_006b15ab:; BB(0x006b15ab);
    /* 006b15ab: mov dword ptr [ebp - 0xec], 0 */ W32((u32)(r_ebp+0xffffff14u), 0x0u);
L_006b15b5:; BB(0x006b15b5);
    /* 006b15b5: mov ecx, dword ptr [ebp - 0xec] */ r_ecx = R32((u32)(r_ebp+0xffffff14u));
    /* 006b15bb: mov dword ptr [ebp - 0x68], ecx */ W32((u32)(r_ebp+0xffffff98u), r_ecx);
    /* 006b15be: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006b15c5: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 006b15c8: mov dword ptr [0x794878], edx */ W32((u32)(0x794878u), r_edx);
    /* 006b15ce: mov dword ptr [0x79487c], 0x310e98 */ W32((u32)(0x79487cu), 0x310e98u);
    /* 006b15d8: mov dword ptr [0x794880], 0x10 */ W32((u32)(0x794880u), 0x10u);
    /* 006b15e2: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006b15e4: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x6b15e9u); f_00686d82();
    /* 006b15e9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b15ec: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 006b15ef: mov dword ptr [ebp - 4], 0xc */ W32((u32)(r_ebp+0xfffffffcu), 0xcu);
    /* 006b15f6: cmp dword ptr [ebp - 0x74], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b15fa: je 0x6b160c */ if (fZ) goto L_006b160c;
L_006b15fc:; BB(0x006b15fc);
    /* 006b15fc: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 006b15ff: call 0x548130 */ r_esp -= 4; W32(r_esp, 0x6b1604u); f_00548130();
    /* 006b1604: mov dword ptr [ebp - 0xf0], eax */ W32((u32)(r_ebp+0xffffff10u), r_eax);
    /* 006b160a: jmp 0x6b1616 */ goto L_006b1616;
L_006b160c:; BB(0x006b160c);
    /* 006b160c: mov dword ptr [ebp - 0xf0], 0 */ W32((u32)(r_ebp+0xffffff10u), 0x0u);
L_006b1616:; BB(0x006b1616);
    /* 006b1616: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 006b161c: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 006b161f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006b1626: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 006b1629: mov dword ptr [0x794884], ecx */ W32((u32)(0x794884u), r_ecx);
    /* 006b162f: mov dword ptr [0x794888], 0x311668 */ W32((u32)(0x794888u), 0x311668u);
    /* 006b1639: mov dword ptr [0x79488c], 0x11 */ W32((u32)(0x79488cu), 0x11u);
    /* 006b1643: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006b1645: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x6b164au); f_00686d82();
    /* 006b164a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b164d: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 006b1650: mov dword ptr [ebp - 4], 0xd */ W32((u32)(r_ebp+0xfffffffcu), 0xdu);
    /* 006b1657: cmp dword ptr [ebp - 0x7c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff84u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b165b: je 0x6b166d */ if (fZ) goto L_006b166d;
L_006b165d:; BB(0x006b165d);
    /* 006b165d: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 006b1660: call 0x556890 */ r_esp -= 4; W32(r_esp, 0x6b1665u); f_00556890();
    /* 006b1665: mov dword ptr [ebp - 0xf4], eax */ W32((u32)(r_ebp+0xffffff0cu), r_eax);
    /* 006b166b: jmp 0x6b1677 */ goto L_006b1677;
L_006b166d:; BB(0x006b166d);
    /* 006b166d: mov dword ptr [ebp - 0xf4], 0 */ W32((u32)(r_ebp+0xffffff0cu), 0x0u);
L_006b1677:; BB(0x006b1677);
    /* 006b1677: mov edx, dword ptr [ebp - 0xf4] */ r_edx = R32((u32)(r_ebp+0xffffff0cu));
    /* 006b167d: mov dword ptr [ebp - 0x78], edx */ W32((u32)(r_ebp+0xffffff88u), r_edx);
    /* 006b1680: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006b1687: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 006b168a: mov dword ptr [0x794890], eax */ W32((u32)(0x794890u), r_eax);
    /* 006b168f: mov dword ptr [0x794894], 0x30f340 */ W32((u32)(0x794894u), 0x30f340u);
    /* 006b1699: mov dword ptr [0x794898], 0x12 */ W32((u32)(0x794898u), 0x12u);
    /* 006b16a3: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006b16a5: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x6b16aau); f_00686d82();
    /* 006b16aa: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b16ad: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 006b16b3: mov dword ptr [ebp - 4], 0xe */ W32((u32)(r_ebp+0xfffffffcu), 0xeu);
    /* 006b16ba: cmp dword ptr [ebp - 0x84], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff7cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b16c1: je 0x6b16d6 */ if (fZ) goto L_006b16d6;
L_006b16c3:; BB(0x006b16c3);
    /* 006b16c3: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 006b16c9: call 0x567b30 */ r_esp -= 4; W32(r_esp, 0x6b16ceu); f_00567b30();
    /* 006b16ce: mov dword ptr [ebp - 0xf8], eax */ W32((u32)(r_ebp+0xffffff08u), r_eax);
    /* 006b16d4: jmp 0x6b16e0 */ goto L_006b16e0;
L_006b16d6:; BB(0x006b16d6);
    /* 006b16d6: mov dword ptr [ebp - 0xf8], 0 */ W32((u32)(r_ebp+0xffffff08u), 0x0u);
L_006b16e0:; BB(0x006b16e0);
    /* 006b16e0: mov ecx, dword ptr [ebp - 0xf8] */ r_ecx = R32((u32)(r_ebp+0xffffff08u));
    /* 006b16e6: mov dword ptr [ebp - 0x80], ecx */ W32((u32)(r_ebp+0xffffff80u), r_ecx);
    /* 006b16e9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006b16f0: mov edx, dword ptr [ebp - 0x80] */ r_edx = R32((u32)(r_ebp+0xffffff80u));
    /* 006b16f3: mov dword ptr [0x79489c], edx */ W32((u32)(0x79489cu), r_edx);
    /* 006b16f9: mov dword ptr [0x7948a0], 0x30f340 */ W32((u32)(0x7948a0u), 0x30f340u);
    /* 006b1703: mov dword ptr [0x7948a4], 0x13 */ W32((u32)(0x7948a4u), 0x13u);
    /* 006b170d: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006b170f: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x6b1714u); f_00686d82();
    /* 006b1714: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b1717: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 006b171d: mov dword ptr [ebp - 4], 0xf */ W32((u32)(r_ebp+0xfffffffcu), 0xfu);
    /* 006b1724: cmp dword ptr [ebp - 0x8c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff74u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b172b: je 0x6b1740 */ if (fZ) goto L_006b1740;
L_006b172d:; BB(0x006b172d);
    /* 006b172d: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 006b1733: call 0x579650 */ r_esp -= 4; W32(r_esp, 0x6b1738u); f_00579650();
    /* 006b1738: mov dword ptr [ebp - 0xfc], eax */ W32((u32)(r_ebp+0xffffff04u), r_eax);
    /* 006b173e: jmp 0x6b174a */ goto L_006b174a;
L_006b1740:; BB(0x006b1740);
    /* 006b1740: mov dword ptr [ebp - 0xfc], 0 */ W32((u32)(r_ebp+0xffffff04u), 0x0u);
L_006b174a:; BB(0x006b174a);
    /* 006b174a: mov eax, dword ptr [ebp - 0xfc] */ r_eax = R32((u32)(r_ebp+0xffffff04u));
    /* 006b1750: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 006b1756: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006b175d: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 006b1763: mov dword ptr [0x7948a8], ecx */ W32((u32)(0x7948a8u), r_ecx);
    /* 006b1769: mov dword ptr [0x7948ac], 0x30ef58 */ W32((u32)(0x7948acu), 0x30ef58u);
    /* 006b1773: mov dword ptr [0x7948b0], 0x14 */ W32((u32)(0x7948b0u), 0x14u);
    /* 006b177d: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006b177f: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x6b1784u); f_00686d82();
    /* 006b1784: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b1787: mov dword ptr [ebp - 0x94], eax */ W32((u32)(r_ebp+0xffffff6cu), r_eax);
    /* 006b178d: mov dword ptr [ebp - 4], 0x10 */ W32((u32)(r_ebp+0xfffffffcu), 0x10u);
    /* 006b1794: cmp dword ptr [ebp - 0x94], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff6cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b179b: je 0x6b17b0 */ if (fZ) goto L_006b17b0;
L_006b179d:; BB(0x006b179d);
    /* 006b179d: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 006b17a3: call 0x572d00 */ r_esp -= 4; W32(r_esp, 0x6b17a8u); f_00572d00();
    /* 006b17a8: mov dword ptr [ebp - 0x100], eax */ W32((u32)(r_ebp+0xffffff00u), r_eax);
    /* 006b17ae: jmp 0x6b17ba */ goto L_006b17ba;
L_006b17b0:; BB(0x006b17b0);
    /* 006b17b0: mov dword ptr [ebp - 0x100], 0 */ W32((u32)(r_ebp+0xffffff00u), 0x0u);
L_006b17ba:; BB(0x006b17ba);
    /* 006b17ba: mov edx, dword ptr [ebp - 0x100] */ r_edx = R32((u32)(r_ebp+0xffffff00u));
    /* 006b17c0: mov dword ptr [ebp - 0x90], edx */ W32((u32)(r_ebp+0xffffff70u), r_edx);
    /* 006b17c6: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006b17cd: mov eax, dword ptr [ebp - 0x90] */ r_eax = R32((u32)(r_ebp+0xffffff70u));
    /* 006b17d3: mov dword ptr [0x7948b4], eax */ W32((u32)(0x7948b4u), r_eax);
    /* 006b17d8: mov dword ptr [0x7948b8], 0x30ef58 */ W32((u32)(0x7948b8u), 0x30ef58u);
    /* 006b17e2: mov dword ptr [0x7948bc], 6 */ W32((u32)(0x7948bcu), 0x6u);
    /* 006b17ec: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006b17ee: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x6b17f3u); f_00686d82();
    /* 006b17f3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b17f6: mov dword ptr [ebp - 0x9c], eax */ W32((u32)(r_ebp+0xffffff64u), r_eax);
    /* 006b17fc: mov dword ptr [ebp - 4], 0x11 */ W32((u32)(r_ebp+0xfffffffcu), 0x11u);
    /* 006b1803: cmp dword ptr [ebp - 0x9c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff64u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b180a: je 0x6b181f */ if (fZ) goto L_006b181f;
L_006b180c:; BB(0x006b180c);
    /* 006b180c: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 006b1812: call 0x5971d0 */ r_esp -= 4; W32(r_esp, 0x6b1817u); f_005971d0();
    /* 006b1817: mov dword ptr [ebp - 0x104], eax */ W32((u32)(r_ebp+0xfffffefcu), r_eax);
    /* 006b181d: jmp 0x6b1829 */ goto L_006b1829;
L_006b181f:; BB(0x006b181f);
    /* 006b181f: mov dword ptr [ebp - 0x104], 0 */ W32((u32)(r_ebp+0xfffffefcu), 0x0u);
L_006b1829:; BB(0x006b1829);
    /* 006b1829: mov ecx, dword ptr [ebp - 0x104] */ r_ecx = R32((u32)(r_ebp+0xfffffefcu));
    /* 006b182f: mov dword ptr [ebp - 0x98], ecx */ W32((u32)(r_ebp+0xffffff68u), r_ecx);
    /* 006b1835: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006b183c: mov edx, dword ptr [ebp - 0x98] */ r_edx = R32((u32)(r_ebp+0xffffff68u));
    /* 006b1842: mov dword ptr [0x7948c0], edx */ W32((u32)(0x7948c0u), r_edx);
    /* 006b1848: mov dword ptr [0x7948c4], 0x312222 */ W32((u32)(0x7948c4u), 0x312222u);
    /* 006b1852: mov dword ptr [0x7948c8], 1 */ W32((u32)(0x7948c8u), 0x1u);
    /* 006b185c: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006b185e: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x6b1863u); f_00686d82();
    /* 006b1863: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b1866: mov dword ptr [ebp - 0xa4], eax */ W32((u32)(r_ebp+0xffffff5cu), r_eax);
    /* 006b186c: mov dword ptr [ebp - 4], 0x12 */ W32((u32)(r_ebp+0xfffffffcu), 0x12u);
    /* 006b1873: cmp dword ptr [ebp - 0xa4], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff5cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b187a: je 0x6b188f */ if (fZ) goto L_006b188f;
L_006b187c:; BB(0x006b187c);
    /* 006b187c: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 006b1882: call 0x5a13b0 */ r_esp -= 4; W32(r_esp, 0x6b1887u); f_005a13b0();
    /* 006b1887: mov dword ptr [ebp - 0x108], eax */ W32((u32)(r_ebp+0xfffffef8u), r_eax);
    /* 006b188d: jmp 0x6b1899 */ goto L_006b1899;
L_006b188f:; BB(0x006b188f);
    /* 006b188f: mov dword ptr [ebp - 0x108], 0 */ W32((u32)(r_ebp+0xfffffef8u), 0x0u);
L_006b1899:; BB(0x006b1899);
    /* 006b1899: mov eax, dword ptr [ebp - 0x108] */ r_eax = R32((u32)(r_ebp+0xfffffef8u));
    /* 006b189f: mov dword ptr [ebp - 0xa0], eax */ W32((u32)(r_ebp+0xffffff60u), r_eax);
    /* 006b18a5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006b18ac: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 006b18b2: mov dword ptr [0x7948cc], ecx */ W32((u32)(0x7948ccu), r_ecx);
    /* 006b18b8: mov dword ptr [0x7948d0], 0x31260a */ W32((u32)(0x7948d0u), 0x31260au);
    /* 006b18c2: mov dword ptr [0x7948d4], 5 */ W32((u32)(0x7948d4u), 0x5u);
    /* 006b18cc: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 006b18ce: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x6b18d3u); f_00686d82();
    /* 006b18d3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b18d6: mov dword ptr [ebp - 0xac], eax */ W32((u32)(r_ebp+0xffffff54u), r_eax);
    /* 006b18dc: mov dword ptr [ebp - 4], 0x13 */ W32((u32)(r_ebp+0xfffffffcu), 0x13u);
    /* 006b18e3: cmp dword ptr [ebp - 0xac], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff54u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b18ea: je 0x6b1901 */ if (fZ) goto L_006b1901;
L_006b18ec:; BB(0x006b18ec);
    /* 006b18ec: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006b18ee: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 006b18f4: call 0x45ebb0 */ r_esp -= 4; W32(r_esp, 0x6b18f9u); f_0045ebb0();
    /* 006b18f9: mov dword ptr [ebp - 0x10c], eax */ W32((u32)(r_ebp+0xfffffef4u), r_eax);
    /* 006b18ff: jmp 0x6b190b */ goto L_006b190b;
L_006b1901:; BB(0x006b1901);
    /* 006b1901: mov dword ptr [ebp - 0x10c], 0 */ W32((u32)(r_ebp+0xfffffef4u), 0x0u);
L_006b190b:; BB(0x006b190b);
    /* 006b190b: mov edx, dword ptr [ebp - 0x10c] */ r_edx = R32((u32)(r_ebp+0xfffffef4u));
    /* 006b1911: mov dword ptr [ebp - 0xa8], edx */ W32((u32)(r_ebp+0xffffff58u), r_edx);
    /* 006b1917: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006b191e: mov eax, dword ptr [ebp - 0xa8] */ r_eax = R32((u32)(r_ebp+0xffffff58u));
    /* 006b1924: mov dword ptr [0x7948d8], eax */ W32((u32)(0x7948d8u), r_eax);
    /* 006b1929: mov dword ptr [0x7948dc], 0x312dda */ W32((u32)(0x7948dcu), 0x312ddau);
    /* 006b1933: mov dword ptr [0x7948e0], 0xd */ W32((u32)(0x7948e0u), 0xdu);
    /* 006b193d: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006b193f: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x6b1944u); f_00686d82();
    /* 006b1944: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b1947: mov dword ptr [ebp - 0xb4], eax */ W32((u32)(r_ebp+0xffffff4cu), r_eax);
    /* 006b194d: mov dword ptr [ebp - 4], 0x14 */ W32((u32)(r_ebp+0xfffffffcu), 0x14u);
    /* 006b1954: cmp dword ptr [ebp - 0xb4], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff4cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b195b: je 0x6b1970 */ if (fZ) goto L_006b1970;
L_006b195d:; BB(0x006b195d);
    /* 006b195d: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 006b1963: call 0x5b2400 */ r_esp -= 4; W32(r_esp, 0x6b1968u); f_005b2400();
    /* 006b1968: mov dword ptr [ebp - 0x110], eax */ W32((u32)(r_ebp+0xfffffef0u), r_eax);
    /* 006b196e: jmp 0x6b197a */ goto L_006b197a;
L_006b1970:; BB(0x006b1970);
    /* 006b1970: mov dword ptr [ebp - 0x110], 0 */ W32((u32)(r_ebp+0xfffffef0u), 0x0u);
L_006b197a:; BB(0x006b197a);
    /* 006b197a: mov ecx, dword ptr [ebp - 0x110] */ r_ecx = R32((u32)(r_ebp+0xfffffef0u));
    /* 006b1980: mov dword ptr [ebp - 0xb0], ecx */ W32((u32)(r_ebp+0xffffff50u), r_ecx);
    /* 006b1986: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006b198d: mov edx, dword ptr [ebp - 0xb0] */ r_edx = R32((u32)(r_ebp+0xffffff50u));
    /* 006b1993: mov dword ptr [0x7948e4], edx */ W32((u32)(0x7948e4u), r_edx);
    /* 006b1999: mov dword ptr [0x7948e8], 0x3129f2 */ W32((u32)(0x7948e8u), 0x3129f2u);
    /* 006b19a3: mov dword ptr [0x7948ec], 0x15 */ W32((u32)(0x7948ecu), 0x15u);
    /* 006b19ad: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006b19af: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x6b19b4u); f_00686d82();
    /* 006b19b4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b19b7: mov dword ptr [ebp - 0xbc], eax */ W32((u32)(r_ebp+0xffffff44u), r_eax);
    /* 006b19bd: mov dword ptr [ebp - 4], 0x15 */ W32((u32)(r_ebp+0xfffffffcu), 0x15u);
    /* 006b19c4: cmp dword ptr [ebp - 0xbc], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff44u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b19cb: je 0x6b19e0 */ if (fZ) goto L_006b19e0;
L_006b19cd:; BB(0x006b19cd);
    /* 006b19cd: mov ecx, dword ptr [ebp - 0xbc] */ r_ecx = R32((u32)(r_ebp+0xffffff44u));
    /* 006b19d3: call 0x5c8700 */ r_esp -= 4; W32(r_esp, 0x6b19d8u); f_005c8700();
    /* 006b19d8: mov dword ptr [ebp - 0x114], eax */ W32((u32)(r_ebp+0xfffffeecu), r_eax);
    /* 006b19de: jmp 0x6b19ea */ goto L_006b19ea;
L_006b19e0:; BB(0x006b19e0);
    /* 006b19e0: mov dword ptr [ebp - 0x114], 0 */ W32((u32)(r_ebp+0xfffffeecu), 0x0u);
L_006b19ea:; BB(0x006b19ea);
    /* 006b19ea: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 006b19f0: mov dword ptr [ebp - 0xb8], eax */ W32((u32)(r_ebp+0xffffff48u), r_eax);
    /* 006b19f6: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006b19fd: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 006b1a03: mov dword ptr [0x7948f0], ecx */ W32((u32)(0x7948f0u), r_ecx);
    /* 006b1a09: mov dword ptr [0x7948f4], 0x30fb10 */ W32((u32)(0x7948f4u), 0x30fb10u);
    /* 006b1a13: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006b1a16: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006b1a1d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b1a1e: mov esp, ebp */ r_esp = r_ebp;
    /* 006b1a20: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b1a21: ret  */ FN_RET(0x006b1130); r_esp += 4; return;
}

void f_006b1a50(void) /* sub_6B1A50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006b1a50);
    /* 006b1a50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006b1a51: mov ebp, esp */ r_ebp = r_esp;
    /* 006b1a53: sub esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b1a56: lea eax, [ebp - 9] */ r_eax = (u32)(r_ebp+0xfffffff7u);
    /* 006b1a59: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 006b1a5c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006b1a5e: mov ecx, 0x15e55f0 */ r_ecx = 0x15e55f0u;
    /* 006b1a63: call 0x612d80 */ r_esp -= 4; W32(r_esp, 0x6b1a68u); f_00612d80();
    /* 006b1a68: push 0x6b1b20 */ { u32 v = 0x6b1b20u; r_esp -= 4; W32(r_esp, v); }
    /* 006b1a6d: call 0x686f8f */ r_esp -= 4; W32(r_esp, 0x6b1a72u); f_00686f8f();
    /* 006b1a72: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b1a75: mov esp, ebp */ r_esp = r_ebp;
    /* 006b1a77: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b1a78: ret  */ FN_RET(0x006b1a50); r_esp += 4; return;
}

void f_006b1a80(void) /* sub_6B1A80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006b1a80);
    /* 006b1a80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006b1a81: mov ebp, esp */ r_ebp = r_esp;
    /* 006b1a83: push 0x4a20f0 */ { u32 v = 0x4a20f0u; r_esp -= 4; W32(r_esp, v); }
    /* 006b1a88: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 006b1a8a: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006b1a8c: push 0x793010 */ { u32 v = 0x793010u; r_esp -= 4; W32(r_esp, v); }
    /* 006b1a91: call 0x686e57 */ r_esp -= 4; W32(r_esp, 0x6b1a96u); f_00686e57();
    /* 006b1a96: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b1a97: ret  */ FN_RET(0x006b1a80); r_esp += 4; return;
}

void f_006b1aa0(void) /* sub_6B1AA0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006b1aa0);
    /* 006b1aa0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006b1aa1: mov ebp, esp */ r_ebp = r_esp;
    /* 006b1aa3: push 0x484470 */ { u32 v = 0x484470u; r_esp -= 4; W32(r_esp, v); }
    /* 006b1aa8: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 006b1aaa: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 006b1aac: push 0x792f90 */ { u32 v = 0x792f90u; r_esp -= 4; W32(r_esp, v); }
    /* 006b1ab1: call 0x686e57 */ r_esp -= 4; W32(r_esp, 0x6b1ab6u); f_00686e57();
    /* 006b1ab6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b1ab7: ret  */ FN_RET(0x006b1aa0); r_esp += 4; return;
}

void f_006b1ac0(void) /* sub_6B1AC0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006b1ac0);
    /* 006b1ac0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006b1ac1: mov ebp, esp */ r_ebp = r_esp;
    /* 006b1ac3: push 0x484470 */ { u32 v = 0x484470u; r_esp -= 4; W32(r_esp, v); }
    /* 006b1ac8: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 006b1aca: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 006b1acc: push 0x792fd0 */ { u32 v = 0x792fd0u; r_esp -= 4; W32(r_esp, v); }
    /* 006b1ad1: call 0x686e57 */ r_esp -= 4; W32(r_esp, 0x6b1ad6u); f_00686e57();
    /* 006b1ad6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b1ad7: ret  */ FN_RET(0x006b1ac0); r_esp += 4; return;
}

void f_006b1ae0(void) /* sub_6B1AE0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006b1ae0);
    /* 006b1ae0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006b1ae1: mov ebp, esp */ r_ebp = r_esp;
    /* 006b1ae3: mov ecx, 0x792f88 */ r_ecx = 0x792f88u;
    /* 006b1ae8: call 0x464210 */ r_esp -= 4; W32(r_esp, 0x6b1aedu); f_00464210();
    /* 006b1aed: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b1aee: ret  */ FN_RET(0x006b1ae0); r_esp += 4; return;
}

void f_006b1af0(void) /* sub_6B1AF0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006b1af0);
    /* 006b1af0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006b1af1: mov ebp, esp */ r_ebp = r_esp;
    /* 006b1af3: mov ecx, 0x793148 */ r_ecx = 0x793148u;
    /* 006b1af8: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x6b1afdu); f_004a20f0();
    /* 006b1afd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b1afe: ret  */ FN_RET(0x006b1af0); r_esp += 4; return;
}

void f_006b1b00(void) /* sub_6B1B00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006b1b00);
    /* 006b1b00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006b1b01: mov ebp, esp */ r_ebp = r_esp;
    /* 006b1b03: mov ecx, 0x79314c */ r_ecx = 0x79314cu;
    /* 006b1b08: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x6b1b0du); f_004a20f0();
    /* 006b1b0d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b1b0e: ret  */ FN_RET(0x006b1b00); r_esp += 4; return;
}

void f_006b1b10(void) /* sub_6B1B10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006b1b10);
    /* 006b1b10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006b1b11: mov ebp, esp */ r_ebp = r_esp;
    /* 006b1b13: mov ecx, 0x795098 */ r_ecx = 0x795098u;
    /* 006b1b18: call 0x60c6a0 */ r_esp -= 4; W32(r_esp, 0x6b1b1du); f_0060c6a0();
    /* 006b1b1d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b1b1e: ret  */ FN_RET(0x006b1b10); r_esp += 4; return;
}

void f_006b1b20(void) /* sub_6B1B20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006b1b20);
    /* 006b1b20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006b1b21: mov ebp, esp */ r_ebp = r_esp;
    /* 006b1b23: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b1b26: mov ecx, 0x15e55f0 */ r_ecx = 0x15e55f0u;
    /* 006b1b2b: call 0x612e20 */ r_esp -= 4; W32(r_esp, 0x6b1b30u); f_00612e20();
    /* 006b1b30: mov esp, ebp */ r_esp = r_ebp;
    /* 006b1b32: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b1b33: ret  */ FN_RET(0x006b1b20); r_esp += 4; return;
}

void f_006b1b40(void) /* sub_6B1B40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006b1b40);
    /* 006b1b40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006b1b41: mov ebp, esp */ r_ebp = r_esp;
    /* 006b1b43: mov ecx, 0x162ee20 */ r_ecx = 0x162ee20u;
    /* 006b1b48: call 0x62ecf0 */ r_esp -= 4; W32(r_esp, 0x6b1b4du); f_0062ecf0();
    /* 006b1b4d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b1b4e: ret  */ FN_RET(0x006b1b40); r_esp += 4; return;
}

