#include "protos.h"

void f_005a1220(void) /* BigRaiseSettingsHelpText::vfunc15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a1220);
    /* 005a1220: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a1221: mov ebp, esp */ r_ebp = r_esp;
    /* 005a1223: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a1226: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 005a1229: cmp dword ptr [0x163068c], 0 */ {  u32 a = R32((u32)(0x163068cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a1230: jne 0x5a1237 */ if (!fZ) goto L_005a1237;
L_005a1232:; BB(0x005a1232);
    /* 005a1232: jmp 0x5a1377 */ goto L_005a1377;
L_005a1237:; BB(0x005a1237);
    /* 005a1237: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 005a1239: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 005a123f: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x5a1244u); f_005fb350();
    /* 005a1244: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005a1247: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 005a124e: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 005a1250: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 005a1256: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x5a125bu); f_005fb350();
    /* 005a125b: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005a125e: mov dword ptr [ebp - 0x14], 1 */ W32((u32)(r_ebp+0xffffffecu), 0x1u);
    /* 005a1265: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 005a1267: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 005a126d: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x5a1272u); f_005fb350();
    /* 005a1272: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005a1275: mov dword ptr [ebp - 0xc], 2 */ W32((u32)(r_ebp+0xfffffff4u), 0x2u);
    /* 005a127c: mov dword ptr [ebp - 8], 3 */ W32((u32)(r_ebp+0xfffffff8u), 0x3u);
    /* 005a1283: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005a128a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005a1291: jmp 0x5a129c */ goto L_005a129c;
L_005a1293:; BB(0x005a1293);
    /* 005a1293: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005a1296: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a1299: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
L_005a129c:; BB(0x005a129c);
    /* 005a129c: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005a129f: cmp ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a12a2: jge 0x5a12df */ if ((fS==fO)) goto L_005a12df;
L_005a12a4:; BB(0x005a12a4);
    /* 005a12a4: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005a12a7: cmp dword ptr [ebp + edx*8 - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+r_edx*8+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a12ac: je 0x5a12dd */ if (fZ) goto L_005a12dd;
L_005a12ae:; BB(0x005a12ae);
    /* 005a12ae: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a12b1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a12b2: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005a12b5: mov edx, dword ptr [ebp + ecx*8 - 0x20] */ r_edx = R32((u32)(r_ebp+r_ecx*8+0xffffffe0u));
    /* 005a12b9: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005a12bc: mov ecx, dword ptr [ebp + eax*8 - 0x20] */ r_ecx = R32((u32)(r_ebp+r_eax*8+0xffffffe0u));
    /* 005a12c0: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005a12c2: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 005a12c8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5a12cau); call_ind(t); }
    /* 005a12ca: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005a12cd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a12cf: je 0x5a12dd */ if (fZ) goto L_005a12dd;
L_005a12d1:; BB(0x005a12d1);
    /* 005a12d1: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005a12d4: mov eax, dword ptr [ebp + edx*8 - 0x1c] */ r_eax = R32((u32)(r_ebp+r_edx*8+0xffffffe4u));
    /* 005a12d8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005a12db: jmp 0x5a12df */ goto L_005a12df;
L_005a12dd:; BB(0x005a12dd);
    /* 005a12dd: jmp 0x5a1293 */ goto L_005a1293;
L_005a12df:; BB(0x005a12df);
    /* 005a12df: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a12e3: jne 0x5a1307 */ if (!fZ) goto L_005a1307;
L_005a12e5:; BB(0x005a12e5);
    /* 005a12e5: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a12e8: cmp dword ptr [ecx + 0x18], 3 */ {  u32 a = R32((u32)(r_ecx+0x18u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a12ec: jne 0x5a1303 */ if (!fZ) goto L_005a1303;
L_005a12ee:; BB(0x005a12ee);
    /* 005a12ee: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 005a12f3: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005a12f6: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005a12f8: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005a12fb: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 005a1301: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5a1303u); call_ind(t); }
L_005a1303:; BB(0x005a1303);
    /* 005a1303: jmp 0x5a1377 */ goto L_005a1377;
L_005a1307:; BB(0x005a1307);
    /* 005a1307: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a130b: jne 0x5a132d */ if (!fZ) goto L_005a132d;
L_005a130d:; BB(0x005a130d);
    /* 005a130d: push 0x6b312c */ { u32 v = 0x6b312cu; r_esp -= 4; W32(r_esp, v); }
    /* 005a1312: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5a1317u); f_00630f40();
    /* 005a1317: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a131a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a131b: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005a131e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005a1320: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005a1323: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 005a1329: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5a132bu); call_ind(t); }
    /* 005a132b: jmp 0x5a1377 */ goto L_005a1377;
L_005a132d:; BB(0x005a132d);
    /* 005a132d: cmp dword ptr [ebp - 4], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a1331: jne 0x5a1353 */ if (!fZ) goto L_005a1353;
L_005a1333:; BB(0x005a1333);
    /* 005a1333: push 0x6b310c */ { u32 v = 0x6b310cu; r_esp -= 4; W32(r_esp, v); }
    /* 005a1338: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5a133du); f_00630f40();
    /* 005a133d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a1340: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a1341: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005a1344: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005a1346: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005a1349: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 005a134f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5a1351u); call_ind(t); }
    /* 005a1351: jmp 0x5a1377 */ goto L_005a1377;
L_005a1353:; BB(0x005a1353);
    /* 005a1353: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a1357: jne 0x5a1377 */ if (!fZ) goto L_005a1377;
L_005a1359:; BB(0x005a1359);
    /* 005a1359: push 0x6cf4d4 */ { u32 v = 0x6cf4d4u; r_esp -= 4; W32(r_esp, v); }
    /* 005a135e: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5a1363u); f_00630f40();
    /* 005a1363: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a1366: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a1367: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005a136a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005a136c: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005a136f: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 005a1375: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5a1377u); call_ind(t); }
L_005a1377:; BB(0x005a1377);
    /* 005a1377: mov esp, ebp */ r_esp = r_ebp;
    /* 005a1379: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a137a: ret 4 */ FN_RET(0x005a1220); r_esp += 8; return;
}

