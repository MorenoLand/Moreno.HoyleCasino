#include "protos.h"

void f_005d11b0(void) /* sub_5D11B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d11b0);
    /* 005d11b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d11b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005d11b3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d11b6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005d11b9: mov byte ptr [ebp - 2], 0 */ W8((u32)(r_ebp+0xfffffffeu), 0x0u);
    /* 005d11bd: mov byte ptr [ebp - 1], 0 */ W8((u32)(r_ebp+0xffffffffu), 0x0u);
L_005d11c1:; BB(0x005d11c1);
    /* 005d11c1: mov byte ptr [ebp - 2], 0 */ W8((u32)(r_ebp+0xfffffffeu), 0x0u);
    /* 005d11c5: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d11c8: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005d11cb: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005d11ce: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d11d1: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d11d3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d11d6: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005d11d9: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5d11dbu); call_ind(t); }
    /* 005d11db: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005d11dd: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d11e0: setge cl */ r_ecx = (r_ecx & 0xffffff00u) | ((((fS==fO)) ? 1 : 0) & 0xffu);
    /* 005d11e3: mov byte ptr [ebp - 1], cl */ W8((u32)(r_ebp+0xffffffffu), (u8)r_ecx);
    /* 005d11e6: movzx edx, byte ptr [ebp - 1] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 005d11ea: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d11ec: jne 0x5d11f9 */ if (!fZ) goto L_005d11f9;
L_005d11ee:; BB(0x005d11ee);
    /* 005d11ee: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d11f1: call 0x5d0ff0 */ r_esp -= 4; W32(r_esp, 0x5d11f6u); f_005d0ff0();
    /* 005d11f6: mov byte ptr [ebp - 2], al */ W8((u32)(r_ebp+0xfffffffeu), (u8)r_eax);
L_005d11f9:; BB(0x005d11f9);
    /* 005d11f9: movzx eax, byte ptr [ebp - 2] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffffeu));
    /* 005d11fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d11ff: jne 0x5d11c1 */ if (!fZ) goto L_005d11c1;
L_005d1201:; BB(0x005d1201);
    /* 005d1201: mov esp, ebp */ r_esp = r_ebp;
    /* 005d1203: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d1204: ret  */ FN_RET(0x005d11b0); r_esp += 4; return;
}

void f_005d1210(void) /* sub_5D1210 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d1210);
    /* 005d1210: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d1211: mov ebp, esp */ r_ebp = r_esp;
    /* 005d1213: sub esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d1216: mov dword ptr [ebp - 0x54], ecx */ W32((u32)(r_ebp+0xffffffacu), r_ecx);
    /* 005d1219: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005d121c: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005d121f: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 005d1222: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005d1225: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d1227: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005d122a: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005d122d: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5d122fu); call_ind(t); }
    /* 005d122f: sub eax, dword ptr [ebp - 0x2c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffd4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005d1232: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005d1235: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005d1238: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005d123b: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 005d123e: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d1241: cmp edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d1244: jl 0x5d127c */ if ((fS!=fO)) goto L_005d127c;
L_005d1246:; BB(0x005d1246);
    /* 005d1246: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005d1249: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005d124c: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 005d124f: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005d1252: sub edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005d1255: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d1256: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005d1259: call 0x5d0a20 */ r_esp -= 4; W32(r_esp, 0x5d125eu); f_005d0a20();
    /* 005d125e: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005d1261: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d1263: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005d1266: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005d1269: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d126bu); call_ind(t); }
    /* 005d126b: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 005d126e: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005d1271: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005d1274: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 005d1277: jmp 0x5d13d7 */ goto L_005d13d7;
L_005d127c:; BB(0x005d127c);
    /* 005d127c: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005d127f: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005d1282: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 005d1285: cmp dword ptr [ebp - 0x3c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d1289: je 0x5d12c5 */ if (fZ) goto L_005d12c5;
L_005d128b:; BB(0x005d128b);
    /* 005d128b: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005d128e: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005d1291: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 005d1294: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d1297: sub ecx, dword ptr [ebp - 0x40] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffc0u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005d129a: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d129d: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005d12a0: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005d12a3: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 005d12a6: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005d12a9: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005d12ac: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 005d12af: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 005d12b2: add eax, dword ptr [ebp - 0x48] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffb8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d12b5: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005d12b8: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 005d12bb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d12bd: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005d12c0: call 0x5d0a20 */ r_esp -= 4; W32(r_esp, 0x5d12c5u); f_005d0a20();
L_005d12c5:; BB(0x005d12c5);
    /* 005d12c5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d12c8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d12c9: lea eax, [ebp - 0x18] */ r_eax = (u32)(r_ebp+0xffffffe8u);
    /* 005d12cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d12cd: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005d12d0: call 0x5d0c30 */ r_esp -= 4; W32(r_esp, 0x5d12d5u); f_005d0c30();
    /* 005d12d5: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005d12d7: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005d12da: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005d12dd: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005d12e0: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d12e4: jne 0x5d1308 */ if (!fZ) goto L_005d1308;
L_005d12e6:; BB(0x005d12e6);
    /* 005d12e6: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d12e9: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005d12ec: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d12ef: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005d12f0: mov ecx, 0x64 */ r_ecx = 0x64u;
    /* 005d12f5: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005d12f5, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005d12f5, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005d12f7: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005d12fa: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d12fd: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005d12fe: mov ecx, 0x64 */ r_ecx = 0x64u;
    /* 005d1303: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005d1303, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005d1303, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005d1305: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_005d1308:; BB(0x005d1308);
    /* 005d1308: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d130b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d130c: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005d130f: call 0x5d0d60 */ r_esp -= 4; W32(r_esp, 0x5d1314u); f_005d0d60();
    /* 005d1314: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005d1317: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d1319: je 0x5d1358 */ if (fZ) goto L_005d1358;
L_005d131b:; BB(0x005d131b);
    /* 005d131b: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005d131e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d1320: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005d1323: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005d1326: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d1328u); call_ind(t); }
    /* 005d1328: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 005d132b: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005d132e: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005d1331: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 005d1334: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d1337: imul eax, eax, -1 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xffffffffu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d133a: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005d133d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d1340: imul ecx, ecx, -1 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xffffffffu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d1343: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005d1346: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d1349: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d134a: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d134d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d134e: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005d1351: call 0x5d1420 */ r_esp -= 4; W32(r_esp, 0x5d1356u); f_005d1420();
    /* 005d1356: jmp 0x5d13d7 */ goto L_005d13d7;
L_005d1358:; BB(0x005d1358);
    /* 005d1358: lea ecx, [ebp - 0x20] */ r_ecx = (u32)(r_ebp+0xffffffe0u);
    /* 005d135b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d135c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d135e: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5d1363u); f_005dcb00();
    /* 005d1363: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d1366: mov ecx, eax */ r_ecx = r_eax;
    /* 005d1368: call 0x5d5a90 */ r_esp -= 4; W32(r_esp, 0x5d136du); f_005d5a90();
    /* 005d136d: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005d1370: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d1371: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005d1373: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d1374: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005d1377: call 0x5d0d30 */ r_esp -= 4; W32(r_esp, 0x5d137cu); f_005d0d30();
    /* 005d137c: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005d137f: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d1383: je 0x5d13d7 */ if (fZ) goto L_005d13d7;
L_005d1385:; BB(0x005d1385);
    /* 005d1385: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d1388: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d1389: lea edx, [ebp - 0x28] */ r_edx = (u32)(r_ebp+0xffffffd8u);
    /* 005d138c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d138d: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005d1390: call 0x5d0c30 */ r_esp -= 4; W32(r_esp, 0x5d1395u); f_005d0c30();
    /* 005d1395: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005d1397: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005d139a: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005d139d: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005d13a0: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d13a3: imul eax, eax, -1 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xffffffffu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d13a6: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005d13a9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d13ac: imul ecx, ecx, -1 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xffffffffu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d13af: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005d13b2: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005d13b5: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005d13b8: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 005d13bb: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005d13be: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d13c1: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005d13c4: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 005d13c7: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d13ca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d13cb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d13ce: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d13cf: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005d13d2: call 0x5d1420 */ r_esp -= 4; W32(r_esp, 0x5d13d7u); f_005d1420();
L_005d13d7:; BB(0x005d13d7);
    /* 005d13d7: mov esp, ebp */ r_esp = r_ebp;
    /* 005d13d9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d13da: ret  */ FN_RET(0x005d1210); r_esp += 4; return;
}

void f_005d13e0(void) /* sub_5D13E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d13e0);
    /* 005d13e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d13e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005d13e3: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d13e6: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005d13e9: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d13ec: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005d13ef: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005d13f2: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d13f5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d13f6: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 005d13f9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d13fa: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d13fd: call 0x5d0c30 */ r_esp -= 4; W32(r_esp, 0x5d1402u); f_005d0c30();
    /* 005d1402: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005d1405: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d1406: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d1408: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d1409: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d140c: call 0x5d1420 */ r_esp -= 4; W32(r_esp, 0x5d1411u); f_005d1420();
    /* 005d1411: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1413: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d1416: call 0x5d0a20 */ r_esp -= 4; W32(r_esp, 0x5d141bu); f_005d0a20();
    /* 005d141b: mov esp, ebp */ r_esp = r_ebp;
    /* 005d141d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d141e: ret  */ FN_RET(0x005d13e0); r_esp += 4; return;
}

void f_005d1420(void) /* sub_5D1420 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d1420);
    /* 005d1420: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d1421: mov ebp, esp */ r_ebp = r_esp;
    /* 005d1423: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d1424: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d1427: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1429: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5d142eu); f_005dcb00();
    /* 005d142e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d1431: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d1433: jne 0x5d1437 */ if (!fZ) goto L_005d1437;
L_005d1435:; BB(0x005d1435);
    /* 005d1435: jmp 0x5d1469 */ goto L_005d1469;
L_005d1437:; BB(0x005d1437);
    /* 005d1437: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005d143a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d143b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d143e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d143f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1441: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5d1446u); f_005dcb00();
    /* 005d1446: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d1449: mov ecx, eax */ r_ecx = r_eax;
    /* 005d144b: call 0x5d5fb0 */ r_esp -= 4; W32(r_esp, 0x5d1450u); f_005d5fb0();
    /* 005d1450: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005d1453: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d1454: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d1457: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d1458: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d145a: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5d145fu); f_005dcb00();
    /* 005d145f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d1462: mov ecx, eax */ r_ecx = r_eax;
    /* 005d1464: call 0x5d5cf0 */ r_esp -= 4; W32(r_esp, 0x5d1469u); f_005d5cf0();
L_005d1469:; BB(0x005d1469);
    /* 005d1469: mov esp, ebp */ r_esp = r_ebp;
    /* 005d146b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d146c: ret 8 */ FN_RET(0x005d1420); r_esp += 12; return;
}

void f_005d1470(void) /* sub_5D1470 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d1470);
    /* 005d1470: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d1471: mov ebp, esp */ r_ebp = r_esp;
    /* 005d1473: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d1476: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005d1479: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 005d147c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d147d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d1480: call 0x5d14b0 */ r_esp -= 4; W32(r_esp, 0x5d1485u); f_005d14b0();
    /* 005d1485: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d1488: mov esp, ebp */ r_esp = r_ebp;
    /* 005d148a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d148b: ret  */ FN_RET(0x005d1470); r_esp += 4; return;
}

void f_005d14b0(void) /* sub_5D14B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d14b0);
    /* 005d14b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d14b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005d14b3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d14b6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005d14b9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d14bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d14bd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d14bf: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5d14c4u); f_005dcb00();
    /* 005d14c4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d14c7: mov ecx, eax */ r_ecx = r_eax;
    /* 005d14c9: call 0x5d5a90 */ r_esp -= 4; W32(r_esp, 0x5d14ceu); f_005d5a90();
    /* 005d14ce: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d14d1: jmp 0x5d14f6 */ goto L_005d14f6;
L_005d14f6:; BB(0x005d14f6);
    /* 005d14f6: mov esp, ebp */ r_esp = r_ebp;
    /* 005d14f8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d14f9: ret 4 */ FN_RET(0x005d14b0); r_esp += 8; return;
}

void f_005d16b0(void) /* sub_5D16B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d16b0);
    /* 005d16b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d16b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005d16b3: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d16b6: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 005d16b9: mov dword ptr [ebp - 0x24], 0xffffffff */ W32((u32)(r_ebp+0xffffffdcu), 0xffffffffu);
    /* 005d16c0: mov dword ptr [ebp - 0x20], 0x30d464 */ W32((u32)(r_ebp+0xffffffe0u), 0x30d464u);
    /* 005d16c7: mov dword ptr [ebp - 0x1c], 0x30d465 */ W32((u32)(r_ebp+0xffffffe4u), 0x30d465u);
    /* 005d16ce: mov dword ptr [ebp - 0x18], 0x30d466 */ W32((u32)(r_ebp+0xffffffe8u), 0x30d466u);
    /* 005d16d5: mov dword ptr [ebp - 0x14], 0x30d467 */ W32((u32)(r_ebp+0xffffffecu), 0x30d467u);
    /* 005d16dc: mov dword ptr [ebp - 0x10], 0x30d468 */ W32((u32)(r_ebp+0xfffffff0u), 0x30d468u);
    /* 005d16e3: mov dword ptr [ebp - 0xc], 0x30d469 */ W32((u32)(r_ebp+0xfffffff4u), 0x30d469u);
    /* 005d16ea: mov dword ptr [ebp - 8], 0x30d46a */ W32((u32)(r_ebp+0xfffffff8u), 0x30d46au);
    /* 005d16f1: mov dword ptr [ebp - 4], 0x30d46b */ W32((u32)(r_ebp+0xfffffffcu), 0x30d46bu);
    /* 005d16f8: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d16fb: mov ecx, dword ptr [eax + 0x80] */ r_ecx = R32((u32)(r_eax+0x80u));
    /* 005d1701: cmp ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d1704: jne 0x5d1708 */ if (!fZ) goto L_005d1708;
L_005d1706:; BB(0x005d1706);
    /* 005d1706: jmp 0x5d1744 */ goto L_005d1744;
L_005d1708:; BB(0x005d1708);
    /* 005d1708: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005d170b: mov eax, dword ptr [ebp + edx*4 - 0x24] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xffffffdcu));
    /* 005d170f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d1710: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d1713: call 0x5f1ad0 */ r_esp -= 4; W32(r_esp, 0x5d1718u); f_005f1ad0();
    /* 005d1718: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d171b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005d171e: mov dword ptr [ecx + 0x80], edx */ W32((u32)(r_ecx+0x80u), r_edx);
    /* 005d1724: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d1727: call 0x5d1db0 */ r_esp -= 4; W32(r_esp, 0x5d172cu); f_005d1db0();
    /* 005d172c: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d172f: call 0x5d2220 */ r_esp -= 4; W32(r_esp, 0x5d1734u); f_005d2220();
    /* 005d1734: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d1737: call 0x5d3b10 */ r_esp -= 4; W32(r_esp, 0x5d173cu); f_005d3b10();
    /* 005d173c: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d173f: call 0x5d4200 */ r_esp -= 4; W32(r_esp, 0x5d1744u); f_005d4200();
L_005d1744:; BB(0x005d1744);
    /* 005d1744: mov esp, ebp */ r_esp = r_ebp;
    /* 005d1746: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d1747: ret 4 */ FN_RET(0x005d16b0); r_esp += 8; return;
}

void f_005d1d60(void) /* sub_5D1D60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d1d60);
    /* 005d1d60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d1d61: mov ebp, esp */ r_ebp = r_esp;
    /* 005d1d63: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d1d66: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005d1d69: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d1d70: jmp 0x5d1d7b */ goto L_005d1d7b;
L_005d1d72:; BB(0x005d1d72);
    /* 005d1d72: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d1d75: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d1d78: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005d1d7b:; BB(0x005d1d7b);
    /* 005d1d7b: cmp dword ptr [ebp - 4], 9 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d1d7f: jge 0x5d1da5 */ if ((fS==fO)) goto L_005d1da5;
L_005d1d81:; BB(0x005d1d81);
    /* 005d1d81: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d1d84: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d1d85: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 005d1d8b: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 005d1d8e: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x5d1d93u); f_005fb300();
    /* 005d1d93: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005d1d96: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d1d99: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d1d9b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d1d9e: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005d1da1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d1da3u); call_ind(t); }
    /* 005d1da3: jmp 0x5d1d72 */ goto L_005d1d72;
L_005d1da5:; BB(0x005d1da5);
    /* 005d1da5: mov esp, ebp */ r_esp = r_ebp;
    /* 005d1da7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d1da8: ret  */ FN_RET(0x005d1d60); r_esp += 4; return;
}

