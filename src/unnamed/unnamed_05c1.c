#include "protos.h"

void f_005c10b0(void) /* sub_5C10B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c10b0);
    /* 005c10b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c10b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005c10b3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c10b5: push 0x6a84e2 */ { u32 v = 0x6a84e2u; r_esp -= 4; W32(r_esp, v); }
    /* 005c10ba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005c10c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c10c1: sub esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c10c4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005c10c9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c10cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c10cc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005c10cf: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005c10d5: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 005c10d8: push 0x1dc */ { u32 v = 0x1dcu; r_esp -= 4; W32(r_esp, v); }
    /* 005c10dd: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5c10e2u); f_00686d82();
    /* 005c10e2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c10e5: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005c10e8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c10ef: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c10f3: je 0x5c1102 */ if (fZ) goto L_005c1102;
L_005c10f5:; BB(0x005c10f5);
    /* 005c10f5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c10f8: call 0x601a80 */ r_esp -= 4; W32(r_esp, 0x5c10fdu); f_00601a80();
    /* 005c10fd: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 005c1100: jmp 0x5c1109 */ goto L_005c1109;
L_005c1102:; BB(0x005c1102);
    /* 005c1102: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_005c1109:; BB(0x005c1109);
    /* 005c1109: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005c110c: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005c110f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005c1116: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c1118: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c111a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c111c: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c111e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c1120: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 005c1125: push 0x3e8 */ { u32 v = 0x3e8u; r_esp -= 4; W32(r_esp, v); }
    /* 005c112a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c112c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c112e: push 0x31592e */ { u32 v = 0x31592eu; r_esp -= 4; W32(r_esp, v); }
    /* 005c1133: push 0x5e */ { u32 v = 0x5eu; r_esp -= 4; W32(r_esp, v); }
    /* 005c1135: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c1138: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c1139: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005c113c: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005c113f: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x5c1144u); f_005f9de0();
    /* 005c1144: push 0x1dc */ { u32 v = 0x1dcu; r_esp -= 4; W32(r_esp, v); }
    /* 005c1149: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5c114eu); f_00686d82();
    /* 005c114e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c1151: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005c1154: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005c115b: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c115f: je 0x5c116e */ if (fZ) goto L_005c116e;
L_005c1161:; BB(0x005c1161);
    /* 005c1161: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c1164: call 0x601a80 */ r_esp -= 4; W32(r_esp, 0x5c1169u); f_00601a80();
    /* 005c1169: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 005c116c: jmp 0x5c1175 */ goto L_005c1175;
L_005c116e:; BB(0x005c116e);
    /* 005c116e: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
L_005c1175:; BB(0x005c1175);
    /* 005c1175: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 005c1178: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005c117b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005c1182: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c1184: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c1186: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c1188: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c118a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c118c: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 005c1191: push 0x3e8 */ { u32 v = 0x3e8u; r_esp -= 4; W32(r_esp, v); }
    /* 005c1196: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c1198: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c119a: push 0x31592f */ { u32 v = 0x31592fu; r_esp -= 4; W32(r_esp, v); }
    /* 005c119f: push 0x5f */ { u32 v = 0x5fu; r_esp -= 4; W32(r_esp, v); }
    /* 005c11a1: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c11a4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c11a5: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005c11a8: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005c11ab: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x5c11b0u); f_005f9de0();
    /* 005c11b0: push 0x1dc */ { u32 v = 0x1dcu; r_esp -= 4; W32(r_esp, v); }
    /* 005c11b5: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5c11bau); f_00686d82();
    /* 005c11ba: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c11bd: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005c11c0: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 005c11c7: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c11cb: je 0x5c11da */ if (fZ) goto L_005c11da;
L_005c11cd:; BB(0x005c11cd);
    /* 005c11cd: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c11d0: call 0x601a80 */ r_esp -= 4; W32(r_esp, 0x5c11d5u); f_00601a80();
    /* 005c11d5: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 005c11d8: jmp 0x5c11e1 */ goto L_005c11e1;
L_005c11da:; BB(0x005c11da);
    /* 005c11da: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
L_005c11e1:; BB(0x005c11e1);
    /* 005c11e1: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005c11e4: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005c11e7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005c11ee: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c11f0: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c11f2: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c11f4: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c11f6: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c11f8: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 005c11fd: push 0x3e8 */ { u32 v = 0x3e8u; r_esp -= 4; W32(r_esp, v); }
    /* 005c1202: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c1204: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c1206: push 0x315930 */ { u32 v = 0x315930u; r_esp -= 4; W32(r_esp, v); }
    /* 005c120b: push 0x60 */ { u32 v = 0x60u; r_esp -= 4; W32(r_esp, v); }
    /* 005c120d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c1210: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c1211: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005c1214: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005c1217: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x5c121cu); f_005f9de0();
    /* 005c121c: push 0x1dc */ { u32 v = 0x1dcu; r_esp -= 4; W32(r_esp, v); }
    /* 005c1221: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5c1226u); f_00686d82();
    /* 005c1226: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c1229: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005c122c: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 005c1233: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c1237: je 0x5c1246 */ if (fZ) goto L_005c1246;
L_005c1239:; BB(0x005c1239);
    /* 005c1239: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005c123c: call 0x601a80 */ r_esp -= 4; W32(r_esp, 0x5c1241u); f_00601a80();
    /* 005c1241: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 005c1244: jmp 0x5c124d */ goto L_005c124d;
L_005c1246:; BB(0x005c1246);
    /* 005c1246: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
L_005c124d:; BB(0x005c124d);
    /* 005c124d: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 005c1250: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005c1253: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005c125a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c125c: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c125e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c1260: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c1262: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c1264: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 005c1269: push 0x3e8 */ { u32 v = 0x3e8u; r_esp -= 4; W32(r_esp, v); }
    /* 005c126e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c1270: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c1272: push 0x315931 */ { u32 v = 0x315931u; r_esp -= 4; W32(r_esp, v); }
    /* 005c1277: push 0x61 */ { u32 v = 0x61u; r_esp -= 4; W32(r_esp, v); }
    /* 005c1279: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005c127c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c127d: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005c1280: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005c1283: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x5c1288u); f_005f9de0();
    /* 005c1288: push 0x1dc */ { u32 v = 0x1dcu; r_esp -= 4; W32(r_esp, v); }
    /* 005c128d: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5c1292u); f_00686d82();
    /* 005c1292: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c1295: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 005c1298: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 005c129f: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c12a3: je 0x5c12b2 */ if (fZ) goto L_005c12b2;
L_005c12a5:; BB(0x005c12a5);
    /* 005c12a5: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005c12a8: call 0x601a80 */ r_esp -= 4; W32(r_esp, 0x5c12adu); f_00601a80();
    /* 005c12ad: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 005c12b0: jmp 0x5c12b9 */ goto L_005c12b9;
L_005c12b2:; BB(0x005c12b2);
    /* 005c12b2: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
L_005c12b9:; BB(0x005c12b9);
    /* 005c12b9: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 005c12bc: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005c12bf: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005c12c6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c12c8: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c12ca: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c12cc: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c12ce: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c12d0: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 005c12d5: push 0x3e8 */ { u32 v = 0x3e8u; r_esp -= 4; W32(r_esp, v); }
    /* 005c12da: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c12dc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c12de: push 0x315924 */ { u32 v = 0x315924u; r_esp -= 4; W32(r_esp, v); }
    /* 005c12e3: push 0x54 */ { u32 v = 0x54u; r_esp -= 4; W32(r_esp, v); }
    /* 005c12e5: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005c12e8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c12e9: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005c12ec: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005c12ef: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x5c12f4u); f_005f9de0();
    /* 005c12f4: push 0x1dc */ { u32 v = 0x1dcu; r_esp -= 4; W32(r_esp, v); }
    /* 005c12f9: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5c12feu); f_00686d82();
    /* 005c12fe: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c1301: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 005c1304: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 005c130b: cmp dword ptr [ebp - 0x3c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c130f: je 0x5c131e */ if (fZ) goto L_005c131e;
L_005c1311:; BB(0x005c1311);
    /* 005c1311: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005c1314: call 0x601a80 */ r_esp -= 4; W32(r_esp, 0x5c1319u); f_00601a80();
    /* 005c1319: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 005c131c: jmp 0x5c1325 */ goto L_005c1325;
L_005c131e:; BB(0x005c131e);
    /* 005c131e: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
L_005c1325:; BB(0x005c1325);
    /* 005c1325: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 005c1328: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 005c132b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005c1332: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c1334: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c1336: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c1338: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c133a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c133c: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 005c1341: push 0x3e8 */ { u32 v = 0x3e8u; r_esp -= 4; W32(r_esp, v); }
    /* 005c1346: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c1348: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c134a: push 0x315925 */ { u32 v = 0x315925u; r_esp -= 4; W32(r_esp, v); }
    /* 005c134f: push 0x55 */ { u32 v = 0x55u; r_esp -= 4; W32(r_esp, v); }
    /* 005c1351: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005c1354: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c1355: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005c1358: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005c135b: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x5c1360u); f_005f9de0();
    /* 005c1360: push 0x1dc */ { u32 v = 0x1dcu; r_esp -= 4; W32(r_esp, v); }
    /* 005c1365: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5c136au); f_00686d82();
    /* 005c136a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c136d: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 005c1370: mov dword ptr [ebp - 4], 6 */ W32((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 005c1377: cmp dword ptr [ebp - 0x44], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffbcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c137b: je 0x5c138a */ if (fZ) goto L_005c138a;
L_005c137d:; BB(0x005c137d);
    /* 005c137d: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005c1380: call 0x601a80 */ r_esp -= 4; W32(r_esp, 0x5c1385u); f_00601a80();
    /* 005c1385: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 005c1388: jmp 0x5c1391 */ goto L_005c1391;
L_005c138a:; BB(0x005c138a);
    /* 005c138a: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
L_005c1391:; BB(0x005c1391);
    /* 005c1391: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 005c1394: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 005c1397: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005c139e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c13a0: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c13a2: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c13a4: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c13a6: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c13a8: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 005c13ad: push 0x3e8 */ { u32 v = 0x3e8u; r_esp -= 4; W32(r_esp, v); }
    /* 005c13b2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c13b4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c13b6: push 0x315932 */ { u32 v = 0x315932u; r_esp -= 4; W32(r_esp, v); }
    /* 005c13bb: push 0x62 */ { u32 v = 0x62u; r_esp -= 4; W32(r_esp, v); }
    /* 005c13bd: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005c13c0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c13c1: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005c13c4: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005c13c7: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x5c13ccu); f_005f9de0();
    /* 005c13cc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c13cf: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005c13d6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c13d7: mov esp, ebp */ r_esp = r_ebp;
    /* 005c13d9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c13da: ret  */ FN_RET(0x005c10b0); r_esp += 4; return;
}

void f_005c13e0(void) /* sub_5C13E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c13e0);
    /* 005c13e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c13e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005c13e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c13e5: push 0x6a8508 */ { u32 v = 0x6a8508u; r_esp -= 4; W32(r_esp, v); }
    /* 005c13ea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005c13f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c13f1: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c13f4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005c13f9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c13fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c13fc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005c13ff: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005c1405: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 005c1408: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005c140b: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c140e: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005c1411: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005c1414: add ecx, 0x3c */ {  u32 a = r_ecx; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c1417: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005c141a: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005c141d: add edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c1420: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 005c1423: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005c1426: add eax, 0x44 */ {  u32 a = r_eax; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c1429: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005c142c: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005c142f: add ecx, 0x48 */ {  u32 a = r_ecx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c1432: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005c1435: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005c143c: jmp 0x5c1447 */ goto L_005c1447;
L_005c143e:; BB(0x005c143e);
    /* 005c143e: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c1441: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c1444: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
L_005c1447:; BB(0x005c1447);
    /* 005c1447: cmp dword ptr [ebp - 0x24], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c144b: jge 0x5c1518 */ if ((fS==fO)) goto L_005c1518;
L_005c1451:; BB(0x005c1451);
    /* 005c1451: push 0x1d4 */ { u32 v = 0x1d4u; r_esp -= 4; W32(r_esp, v); }
    /* 005c1456: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5c145bu); f_00686d82();
    /* 005c145b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c145e: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005c1461: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c1468: cmp dword ptr [ebp - 0x30], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c146c: je 0x5c147b */ if (fZ) goto L_005c147b;
L_005c146e:; BB(0x005c146e);
    /* 005c146e: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005c1471: call 0x60f380 */ r_esp -= 4; W32(r_esp, 0x5c1476u); f_0060f380();
    /* 005c1476: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 005c1479: jmp 0x5c1482 */ goto L_005c1482;
L_005c147b:; BB(0x005c147b);
    /* 005c147b: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_005c1482:; BB(0x005c1482);
    /* 005c1482: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005c1485: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005c1488: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005c148f: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005c1492: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 005c1495: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c1498: mov eax, dword ptr [ebp + edx*4 - 0x20] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xffffffe0u));
    /* 005c149c: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005c149f: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 005c14a1: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c14a3: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c14a6: imul edx, edx, 0x28 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x28u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c14a9: mov eax, dword ptr [edx + 0x759d90] */ r_eax = R32((u32)(r_edx+0x759d90u));
    /* 005c14af: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c14b0: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c14b3: imul ecx, ecx, 0x28 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x28u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c14b6: mov edx, dword ptr [ecx + 0x759d98] */ r_edx = R32((u32)(r_ecx+0x759d98u));
    /* 005c14bc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c14bd: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c14c0: imul eax, eax, 0x28 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x28u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c14c3: mov ecx, dword ptr [eax + 0x759d94] */ r_ecx = R32((u32)(r_eax+0x759d94u));
    /* 005c14c9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c14ca: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c14cd: imul edx, edx, 0x28 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x28u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c14d0: mov eax, dword ptr [edx + 0x759d84] */ r_eax = R32((u32)(r_edx+0x759d84u));
    /* 005c14d6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c14d7: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c14da: imul ecx, ecx, 0x28 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x28u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c14dd: mov dx, word ptr [ecx + 0x759d9c] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+0x759d9cu))) & 0xffffu);
    /* 005c14e4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c14e5: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005c14e8: call 0x60f560 */ r_esp -= 4; W32(r_esp, 0x5c14edu); f_0060f560();
    /* 005c14ed: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c14ef: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c14f1: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005c14f4: call 0x60fb30 */ r_esp -= 4; W32(r_esp, 0x5c14f9u); f_0060fb30();
    /* 005c14f9: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005c14fc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c14fe: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005c1501: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005c1504: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5c1506u); call_ind(t); }
    /* 005c1506: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005c1509: mov dword ptr [ecx + 0x178], 0xe */ W32((u32)(r_ecx+0x178u), 0xeu);
    /* 005c1513: jmp 0x5c143e */ goto L_005c143e;
L_005c1518:; BB(0x005c1518);
    /* 005c1518: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005c151b: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 005c151e: mov dword ptr [eax + 0x178], 2 */ W32((u32)(r_eax+0x178u), 0x2u);
    /* 005c1528: push 0x759e40 */ { u32 v = 0x759e40u; r_esp -= 4; W32(r_esp, v); }
    /* 005c152d: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005c1530: mov ecx, dword ptr [ecx + 0x3c] */ r_ecx = R32((u32)(r_ecx+0x3cu));
    /* 005c1533: call 0x60f870 */ r_esp -= 4; W32(r_esp, 0x5c1538u); f_0060f870();
    /* 005c1538: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c153b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005c1542: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c1543: mov esp, ebp */ r_esp = r_ebp;
    /* 005c1545: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c1546: ret  */ FN_RET(0x005c13e0); r_esp += 4; return;
}

void f_005c1a80(void) /* sub_5C1A80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c1a80);
    /* 005c1a80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c1a81: mov ebp, esp */ r_ebp = r_esp;
    /* 005c1a83: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c1a86: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005c1a89: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 005c1a8e: mov ecx, dword ptr [eax + 0x4f14] */ r_ecx = R32((u32)(r_eax+0x4f14u));
    /* 005c1a94: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c1a97: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c1a9a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c1a9b: call 0x5bf170 */ r_esp -= 4; W32(r_esp, 0x5c1aa0u); f_005bf170();
    /* 005c1aa0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c1aa3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c1aa6: mov dword ptr [ecx + 0x10], eax */ W32((u32)(r_ecx+0x10u), r_eax);
    /* 005c1aa9: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c1aac: cmp dword ptr [edx + 0x10], 0 */ {  u32 a = R32((u32)(r_edx+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c1ab0: jne 0x5c1ab4 */ if (!fZ) goto L_005c1ab4;
L_005c1ab2:; BB(0x005c1ab2);
    /* 005c1ab2: jmp 0x5c1b09 */ goto L_005c1b09;
L_005c1ab4:; BB(0x005c1ab4);
    /* 005c1ab4: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c1ab7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c1ab9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c1abc: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 005c1abf: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5c1ac1u); call_ind(t); }
    /* 005c1ac1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c1ac4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c1ac5: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c1ac8: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 005c1acb: call 0x5bf260 */ r_esp -= 4; W32(r_esp, 0x5c1ad0u); f_005bf260();
    /* 005c1ad0: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c1ad3: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005c1ad6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c1ad7: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c1ada: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 005c1add: call 0x5bf280 */ r_esp -= 4; W32(r_esp, 0x5c1ae2u); f_005bf280();
    /* 005c1ae2: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 005c1ae7: mov ecx, dword ptr [eax + 0x4f14] */ r_ecx = R32((u32)(r_eax+0x4f14u));
    /* 005c1aed: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005c1af0: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c1af3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c1af4: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c1af7: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005c1afa: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c1afd: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005c1b00: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005c1b02: mov ecx, eax */ r_ecx = r_eax;
    /* 005c1b04: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005c1b07: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5c1b09u); call_ind(t); }
L_005c1b09:; BB(0x005c1b09);
    /* 005c1b09: mov esp, ebp */ r_esp = r_ebp;
    /* 005c1b0b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c1b0c: ret  */ FN_RET(0x005c1a80); r_esp += 4; return;
}

void f_005c1b60(void) /* sub_5C1B60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c1b60);
    /* 005c1b60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c1b61: mov ebp, esp */ r_ebp = r_esp;
    /* 005c1b63: sub esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c1b66: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 005c1b69: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 005c1b6c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c1b6e: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005c1b71: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 005c1b74: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5c1b76u); call_ind(t); }
    /* 005c1b76: mov byte ptr [ebp - 9], al */ W8((u32)(r_ebp+0xfffffff7u), (u8)r_eax);
    /* 005c1b79: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 005c1b7f: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 005c1b82: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 005c1b87: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 005c1b8a: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005c1b8c: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005c1b8f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5c1b91u); call_ind(t); }
    /* 005c1b91: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005c1b94: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005c1b97: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005c1b99: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005c1b9c: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 005c1b9f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5c1ba1u); call_ind(t); }
    /* 005c1ba1: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005c1ba4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c1ba6: jne 0x5c1bb8 */ if (!fZ) goto L_005c1bb8;
L_005c1ba8:; BB(0x005c1ba8);
    /* 005c1ba8: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005c1bab: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 005c1bae: call 0x5be3f0 */ r_esp -= 4; W32(r_esp, 0x5c1bb3u); f_005be3f0();
    /* 005c1bb3: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 005c1bb6: jmp 0x5c1bbf */ goto L_005c1bbf;
L_005c1bb8:; BB(0x005c1bb8);
    /* 005c1bb8: mov dword ptr [ebp - 0x48], 1 */ W32((u32)(r_ebp+0xffffffb8u), 0x1u);
L_005c1bbf:; BB(0x005c1bbf);
    /* 005c1bbf: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 005c1bc2: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005c1bc5: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 005c1bcc: mov dword ptr [ebp - 4], 0x3e8 */ W32((u32)(r_ebp+0xfffffffcu), 0x3e8u);
    /* 005c1bd3: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c1bd6: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c1bd9: imul ecx, dword ptr [ebp - 4] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0xfffffffcu)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c1bdd: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005c1be0: mov dword ptr [ebp - 0x1c], 1 */ W32((u32)(r_ebp+0xffffffe4u), 0x1u);
    /* 005c1be7: jmp 0x5c1bf2 */ goto L_005c1bf2;
L_005c1be9:; BB(0x005c1be9);
    /* 005c1be9: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c1bec: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c1bef: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
L_005c1bf2:; BB(0x005c1bf2);
    /* 005c1bf2: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 005c1bf5: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005c1bf8: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 005c1bfb: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005c1bfe: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005c1c01: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c1c04: cmp ecx, dword ptr [ebp - 0x30] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffd0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c1c07: jg 0x5c1d50 */ if ((!fZ&&fS==fO)) goto L_005c1d50;
L_005c1c0d:; BB(0x005c1c0d);
    /* 005c1c0d: mov byte ptr [ebp - 0x21], 0 */ W8((u32)(r_ebp+0xffffffdfu), 0x0u);
    /* 005c1c11: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005c1c14: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c1c16: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005c1c19: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 005c1c1c: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5c1c1eu); call_ind(t); }
    /* 005c1c1e: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005c1c21: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c1c23: je 0x5c1c3b */ if (fZ) goto L_005c1c3b;
L_005c1c25:; BB(0x005c1c25);
    /* 005c1c25: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005c1c28: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005c1c2b: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c1c2e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005c1c30: cmp eax, dword ptr [edx + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c1c33: setle cl */ r_ecx = (r_ecx & 0xffffff00u) | ((((fZ||fS!=fO)) ? 1 : 0) & 0xffu);
    /* 005c1c36: mov byte ptr [ebp - 0x21], cl */ W8((u32)(r_ebp+0xffffffdfu), (u8)r_ecx);
    /* 005c1c39: jmp 0x5c1cae */ goto L_005c1cae;
L_005c1c3b:; BB(0x005c1c3b);
    /* 005c1c3b: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005c1c3e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c1c40: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005c1c43: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 005c1c46: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5c1c48u); call_ind(t); }
    /* 005c1c48: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005c1c4b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c1c4d: je 0x5c1cae */ if (fZ) goto L_005c1cae;
L_005c1c4f:; BB(0x005c1c4f);
    /* 005c1c4f: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005c1c52: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005c1c54: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005c1c57: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 005c1c5a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5c1c5cu); call_ind(t); }
    /* 005c1c5c: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005c1c5f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c1c61: jne 0x5c1cae */ if (!fZ) goto L_005c1cae;
L_005c1c63:; BB(0x005c1c63);
    /* 005c1c63: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005c1c66: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005c1c69: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 005c1c6c: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005c1c6f: call 0x5c9140 */ r_esp -= 4; W32(r_esp, 0x5c1c74u); f_005c9140();
    /* 005c1c74: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005c1c77: add ecx, dword ptr [ebp - 0x1c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c1c7a: mov dl, byte ptr [ecx + 0x33] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x33u))) & 0xffu);
    /* 005c1c7d: mov byte ptr [ebp - 0x35], dl */ W8((u32)(r_ebp+0xffffffcbu), (u8)r_edx);
    /* 005c1c80: movzx eax, byte ptr [ebp - 0x35] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffcbu));
    /* 005c1c84: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c1c86: je 0x5c1cae */ if (fZ) goto L_005c1cae;
L_005c1c88:; BB(0x005c1c88);
    /* 005c1c88: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005c1c8b: imul eax, dword ptr [ebp - 0x10] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xfffffff0u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c1c8f: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005c1c90: idiv dword ptr [ebp - 0x18] */ { i32 d = (i32)R32((u32)(r_ebp+0xffffffe8u)); if (!d) UNSUP(0x005c1c90, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005c1c90, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005c1c93: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c1c96: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005c1c97: idiv dword ptr [ebp - 0x10] */ { i32 d = (i32)R32((u32)(r_ebp+0xfffffff0u)); if (!d) UNSUP(0x005c1c97, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005c1c97, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005c1c9a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005c1c9c: cmp edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c1c9f: setl cl */ r_ecx = (r_ecx & 0xffffff00u) | ((((fS!=fO)) ? 1 : 0) & 0xffu);
    /* 005c1ca2: mov byte ptr [ebp - 0x21], cl */ W8((u32)(r_ebp+0xffffffdfu), (u8)r_ecx);
    /* 005c1ca5: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c1ca8: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c1cab: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
L_005c1cae:; BB(0x005c1cae);
    /* 005c1cae: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c1cb1: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005c1cb4: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 005c1cb7: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005c1cba: add ecx, 0x28 */ {  u32 a = r_ecx; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c1cbd: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 005c1cc0: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005c1cc3: cmp dword ptr [edx + 4], 0 */ {  u32 a = R32((u32)(r_edx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c1cc7: jne 0x5c1cd2 */ if (!fZ) goto L_005c1cd2;
L_005c1cc9:; BB(0x005c1cc9);
    /* 005c1cc9: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 005c1cd0: jmp 0x5c1ce4 */ goto L_005c1ce4;
L_005c1cd2:; BB(0x005c1cd2);
    /* 005c1cd2: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 005c1cd5: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005c1cd8: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 005c1cdb: sub edx, dword ptr [ecx + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005c1cde: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 005c1ce1: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
L_005c1ce4:; BB(0x005c1ce4);
    /* 005c1ce4: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 005c1ce7: cmp eax, dword ptr [ebp - 0x4c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffb4u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005c1cea: jb 0x5c1cf2 */ if (fC) goto L_005c1cf2;
L_005c1cec:; BB(0x005c1cec);
    /* 005c1cec: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x5c1cf2u); call_ind(t); }
L_005c1cf2:; BB(0x005c1cf2);
    /* 005c1cf2: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005c1cf5: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005c1cf8: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 005c1cfb: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 005c1cfe: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005c1d01: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c1d04: call 0x5f54e0 */ r_esp -= 4; W32(r_esp, 0x5c1d09u); f_005f54e0();
    /* 005c1d09: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005c1d0c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c1d0e: je 0x5c1d27 */ if (fZ) goto L_005c1d27;
L_005c1d10:; BB(0x005c1d10);
    /* 005c1d10: movzx eax, byte ptr [ebp - 0x21] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffdfu));
    /* 005c1d14: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c1d16: jne 0x5c1d27 */ if (!fZ) goto L_005c1d27;
L_005c1d18:; BB(0x005c1d18);
    /* 005c1d18: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c1d1b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005c1d1d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c1d20: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 005c1d23: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5c1d25u); call_ind(t); }
    /* 005c1d25: jmp 0x5c1d4b */ goto L_005c1d4b;
L_005c1d27:; BB(0x005c1d27);
    /* 005c1d27: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c1d2a: call 0x5f54e0 */ r_esp -= 4; W32(r_esp, 0x5c1d2fu); f_005f54e0();
    /* 005c1d2f: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005c1d32: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c1d34: jne 0x5c1d4b */ if (!fZ) goto L_005c1d4b;
L_005c1d36:; BB(0x005c1d36);
    /* 005c1d36: movzx edx, byte ptr [ebp - 0x21] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffdfu));
    /* 005c1d3a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c1d3c: je 0x5c1d4b */ if (fZ) goto L_005c1d4b;
L_005c1d3e:; BB(0x005c1d3e);
    /* 005c1d3e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c1d41: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c1d43: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c1d46: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005c1d49: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5c1d4bu); call_ind(t); }
L_005c1d4b:; BB(0x005c1d4b);
    /* 005c1d4b: jmp 0x5c1be9 */ goto L_005c1be9;
L_005c1d50:; BB(0x005c1d50);
    /* 005c1d50: mov esp, ebp */ r_esp = r_ebp;
    /* 005c1d52: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c1d53: ret  */ FN_RET(0x005c1b60); r_esp += 4; return;
}

void f_005c1d60(void) /* sub_5C1D60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c1d60);
    /* 005c1d60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c1d61: mov ebp, esp */ r_ebp = r_esp;
    /* 005c1d63: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c1d66: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 005c1d69: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005c1d6c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c1d6e: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005c1d71: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 005c1d74: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5c1d76u); call_ind(t); }
    /* 005c1d76: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005c1d79: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c1d7b: je 0x5c1d82 */ if (fZ) goto L_005c1d82;
L_005c1d7d:; BB(0x005c1d7d);
    /* 005c1d7d: jmp 0x5c1ec4 */ goto L_005c1ec4;
L_005c1d82:; BB(0x005c1d82);
    /* 005c1d82: movzx edx, byte ptr [ebp + 8] */ r_edx = (u32)R8((u32)(r_ebp+0x8u));
    /* 005c1d86: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c1d88: jne 0x5c1dbd */ if (!fZ) goto L_005c1dbd;
L_005c1d8a:; BB(0x005c1d8a);
    /* 005c1d8a: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005c1d8d: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005c1d90: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c1d93: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c1d96: call 0x5c9140 */ r_esp -= 4; W32(r_esp, 0x5c1d9bu); f_005c9140();
    /* 005c1d9b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c1d9e: mov eax, dword ptr [edx + 0xe0] */ r_eax = R32((u32)(r_edx+0xe0u));
    /* 005c1da4: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005c1da7: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005c1daa: mov ecx, dword ptr [ecx + 0x3c] */ r_ecx = R32((u32)(r_ecx+0x3cu));
    /* 005c1dad: call 0x60fb10 */ r_esp -= 4; W32(r_esp, 0x5c1db2u); f_0060fb10();
    /* 005c1db2: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c1db5: jl 0x5c1dbd */ if ((fS!=fO)) goto L_005c1dbd;
L_005c1db7:; BB(0x005c1db7);
    /* 005c1db7: mov byte ptr [ebp - 0x39], 0 */ W8((u32)(r_ebp+0xffffffc7u), 0x0u);
    /* 005c1dbb: jmp 0x5c1dc1 */ goto L_005c1dc1;
L_005c1dbd:; BB(0x005c1dbd);
    /* 005c1dbd: mov byte ptr [ebp - 0x39], 1 */ W8((u32)(r_ebp+0xffffffc7u), 0x1u);
L_005c1dc1:; BB(0x005c1dc1);
    /* 005c1dc1: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005c1dc4: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005c1dc7: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005c1dca: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c1dcd: call 0x5c9140 */ r_esp -= 4; W32(r_esp, 0x5c1dd2u); f_005c9140();
    /* 005c1dd2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c1dd5: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 005c1ddb: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 005c1dde: mov al, byte ptr [ebp - 0x39] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffc7u))) & 0xffu);
    /* 005c1de1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c1de2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c1de5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c1de6: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005c1de9: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 005c1dec: call 0x60fb30 */ r_esp -= 4; W32(r_esp, 0x5c1df1u); f_0060fb30();
    /* 005c1df1: movzx eax, byte ptr [ebp + 8] */ r_eax = (u32)R8((u32)(r_ebp+0x8u));
    /* 005c1df5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c1df7: jne 0x5c1e29 */ if (!fZ) goto L_005c1e29;
L_005c1df9:; BB(0x005c1df9);
    /* 005c1df9: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005c1dfc: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005c1dff: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 005c1e02: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c1e05: call 0x5c9140 */ r_esp -= 4; W32(r_esp, 0x5c1e0au); f_005c9140();
    /* 005c1e0a: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c1e0d: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005c1e10: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005c1e13: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005c1e16: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 005c1e19: call 0x60fb10 */ r_esp -= 4; W32(r_esp, 0x5c1e1eu); f_0060fb10();
    /* 005c1e1e: cmp dword ptr [ebp - 0x14], eax */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c1e21: jl 0x5c1e29 */ if ((fS!=fO)) goto L_005c1e29;
L_005c1e23:; BB(0x005c1e23);
    /* 005c1e23: mov byte ptr [ebp - 0x3a], 0 */ W8((u32)(r_ebp+0xffffffc6u), 0x0u);
    /* 005c1e27: jmp 0x5c1e2d */ goto L_005c1e2d;
L_005c1e29:; BB(0x005c1e29);
    /* 005c1e29: mov byte ptr [ebp - 0x3a], 1 */ W8((u32)(r_ebp+0xffffffc6u), 0x1u);
L_005c1e2d:; BB(0x005c1e2d);
    /* 005c1e2d: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005c1e30: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005c1e33: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005c1e36: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c1e39: call 0x5c9140 */ r_esp -= 4; W32(r_esp, 0x5c1e3eu); f_005c9140();
    /* 005c1e3e: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c1e41: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005c1e44: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005c1e47: mov cl, byte ptr [ebp - 0x3a] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffc6u))) & 0xffu);
    /* 005c1e4a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c1e4b: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c1e4e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c1e4f: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005c1e52: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 005c1e55: call 0x60fb30 */ r_esp -= 4; W32(r_esp, 0x5c1e5au); f_0060fb30();
    /* 005c1e5a: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005c1e5d: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005c1e60: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005c1e63: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005c1e66: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c1e68: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c1e6b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c1e6c: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005c1e6f: mov ecx, dword ptr [edx + 0x40] */ r_ecx = R32((u32)(r_edx+0x40u));
    /* 005c1e72: call 0x60fb30 */ r_esp -= 4; W32(r_esp, 0x5c1e77u); f_0060fb30();
    /* 005c1e77: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005c1e7a: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005c1e7d: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 005c1e80: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005c1e83: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005c1e86: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005c1e89: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005c1e8c: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 005c1e8f: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 005c1e92: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c1e94: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005c1e97: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005c1e98: idiv dword ptr [ebp - 0x2c] */ { i32 d = (i32)R32((u32)(r_ebp+0xffffffd4u)); if (!d) UNSUP(0x005c1e98, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005c1e98, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005c1e9b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c1e9c: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005c1e9f: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 005c1ea2: call 0x60fb30 */ r_esp -= 4; W32(r_esp, 0x5c1ea7u); f_0060fb30();
    /* 005c1ea7: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005c1eaa: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005c1ead: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005c1eb0: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 005c1eb3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c1eb5: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005c1eb8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c1eb9: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005c1ebc: mov ecx, dword ptr [edx + 0x48] */ r_ecx = R32((u32)(r_edx+0x48u));
    /* 005c1ebf: call 0x60fb30 */ r_esp -= 4; W32(r_esp, 0x5c1ec4u); f_0060fb30();
L_005c1ec4:; BB(0x005c1ec4);
    /* 005c1ec4: mov esp, ebp */ r_esp = r_ebp;
    /* 005c1ec6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c1ec7: ret 4 */ FN_RET(0x005c1d60); r_esp += 8; return;
}

void f_005c1ed0(void) /* sub_5C1ED0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c1ed0);
    /* 005c1ed0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c1ed1: mov ebp, esp */ r_ebp = r_esp;
    /* 005c1ed3: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c1ed6: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005c1ed9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c1edc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c1ede: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c1ee1: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 005c1ee4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5c1ee6u); call_ind(t); }
    /* 005c1ee6: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005c1ee9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c1eeb: je 0x5c1f0a */ if (fZ) goto L_005c1f0a;
L_005c1eed:; BB(0x005c1eed);
    /* 005c1eed: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c1ef0: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c1ef2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c1ef5: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 005c1ef8: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5c1efau); call_ind(t); }
    /* 005c1efa: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005c1efd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c1eff: jne 0x5c1f0a */ if (!fZ) goto L_005c1f0a;
L_005c1f01:; BB(0x005c1f01);
    /* 005c1f01: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005c1f08: jmp 0x5c1f11 */ goto L_005c1f11;
L_005c1f0a:; BB(0x005c1f0a);
    /* 005c1f0a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005c1f11:; BB(0x005c1f11);
    /* 005c1f11: mov cl, byte ptr [ebp - 0x24] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffdcu))) & 0xffu);
    /* 005c1f14: mov byte ptr [ebp - 5], cl */ W8((u32)(r_ebp+0xfffffffbu), (u8)r_ecx);
    /* 005c1f17: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c1f1e: jmp 0x5c1f29 */ goto L_005c1f29;
L_005c1f20:; BB(0x005c1f20);
    /* 005c1f20: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c1f23: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c1f26: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_005c1f29:; BB(0x005c1f29);
    /* 005c1f29: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c1f2c: cmp dword ptr [eax*4 + 0x759e6c], 0 */ {  u32 a = R32((u32)(r_eax*4+0x759e6cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c1f34: jl 0x5c1f6b */ if ((fS!=fO)) goto L_005c1f6b;
L_005c1f36:; BB(0x005c1f36);
    /* 005c1f36: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c1f39: mov edx, dword ptr [ecx*4 + 0x759e6c] */ r_edx = R32((u32)(r_ecx*4+0x759e6cu));
    /* 005c1f40: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c1f41: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c1f44: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005c1f47: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x5c1f4cu); f_005fb300();
    /* 005c1f4c: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005c1f4f: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c1f53: je 0x5c1f69 */ if (fZ) goto L_005c1f69;
L_005c1f55:; BB(0x005c1f55);
    /* 005c1f55: mov cl, byte ptr [ebp - 5] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffffbu))) & 0xffu);
    /* 005c1f58: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c1f59: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c1f5c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c1f5e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c1f61: mov edx, dword ptr [eax + 0xd4] */ r_edx = R32((u32)(r_eax+0xd4u));
    /* 005c1f67: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5c1f69u); call_ind(t); }
L_005c1f69:; BB(0x005c1f69);
    /* 005c1f69: jmp 0x5c1f20 */ goto L_005c1f20;
L_005c1f6b:; BB(0x005c1f6b);
    /* 005c1f6b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c1f6e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c1f70: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c1f73: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 005c1f76: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5c1f78u); call_ind(t); }
    /* 005c1f78: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005c1f7b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c1f7d: je 0x5c1fb8 */ if (fZ) goto L_005c1fb8;
L_005c1f7f:; BB(0x005c1f7f);
    /* 005c1f7f: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c1f82: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c1f84: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c1f87: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 005c1f8a: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5c1f8cu); call_ind(t); }
    /* 005c1f8c: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005c1f8f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c1f91: jne 0x5c1fb8 */ if (!fZ) goto L_005c1fb8;
L_005c1f93:; BB(0x005c1f93);
    /* 005c1f93: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c1f96: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005c1f99: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005c1f9c: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005c1f9f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c1fa2: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 005c1fa5: call 0x5c47b0 */ r_esp -= 4; W32(r_esp, 0x5c1faau); f_005c47b0();
    /* 005c1faa: cmp dword ptr [ebp - 0x10], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c1fad: jg 0x5c1fb8 */ if ((!fZ&&fS==fO)) goto L_005c1fb8;
L_005c1faf:; BB(0x005c1faf);
    /* 005c1faf: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 005c1fb6: jmp 0x5c1fbf */ goto L_005c1fbf;
L_005c1fb8:; BB(0x005c1fb8);
    /* 005c1fb8: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_005c1fbf:; BB(0x005c1fbf);
    /* 005c1fbf: mov dl, byte ptr [ebp - 0x28] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffd8u))) & 0xffu);
    /* 005c1fc2: mov byte ptr [ebp - 5], dl */ W8((u32)(r_ebp+0xfffffffbu), (u8)r_edx);
    /* 005c1fc5: push 0x5e */ { u32 v = 0x5eu; r_esp -= 4; W32(r_esp, v); }
    /* 005c1fc7: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c1fca: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005c1fcd: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x5c1fd2u); f_005fb300();
    /* 005c1fd2: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005c1fd5: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c1fd9: je 0x5c1fef */ if (fZ) goto L_005c1fef;
L_005c1fdb:; BB(0x005c1fdb);
    /* 005c1fdb: mov cl, byte ptr [ebp - 5] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffffbu))) & 0xffu);
    /* 005c1fde: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c1fdf: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c1fe2: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c1fe4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c1fe7: mov edx, dword ptr [eax + 0xd4] */ r_edx = R32((u32)(r_eax+0xd4u));
    /* 005c1fed: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5c1fefu); call_ind(t); }
L_005c1fef:; BB(0x005c1fef);
    /* 005c1fef: mov esp, ebp */ r_esp = r_ebp;
    /* 005c1ff1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c1ff2: ret  */ FN_RET(0x005c1ed0); r_esp += 4; return;
}

