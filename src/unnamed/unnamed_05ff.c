#include "protos.h"

void f_005ff040(void) /* sub_5FF040 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ff040);
    /* 005ff040: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ff041: mov ebp, esp */ r_ebp = r_esp;
    /* 005ff043: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ff044: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005ff047: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ff04a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ff04d: mov dword ptr [eax + 0x1c0], ecx */ W32((u32)(r_eax+0x1c0u), r_ecx);
    /* 005ff053: mov esp, ebp */ r_esp = r_ebp;
    /* 005ff055: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ff056: ret 4 */ FN_RET(0x005ff040); r_esp += 8; return;
}

void f_005ff060(void) /* sub_5FF060 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ff060);
    /* 005ff060: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ff061: mov ebp, esp */ r_ebp = r_esp;
    /* 005ff063: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ff064: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005ff067: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ff06a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ff06b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ff06e: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x5ff073u); f_005fb300();
    /* 005ff073: mov esp, ebp */ r_esp = r_ebp;
    /* 005ff075: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ff076: ret 4 */ FN_RET(0x005ff060); r_esp += 8; return;
}

void f_005ff080(void) /* sub_5FF080 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ff080);
    /* 005ff080: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ff081: mov ebp, esp */ r_ebp = r_esp;
    /* 005ff083: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ff084: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005ff087: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ff08a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ff08b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ff08e: add ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ff091: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x5ff096u); f_0060ca40();
    /* 005ff096: mov esp, ebp */ r_esp = r_ebp;
    /* 005ff098: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ff099: ret 4 */ FN_RET(0x005ff080); r_esp += 8; return;
}

void f_005ff0a0(void) /* sub_5FF0A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ff0a0);
    /* 005ff0a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ff0a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005ff0a3: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ff0a6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005ff0a9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ff0ac: cmp dword ptr [eax + 0x1bc], 0 */ {  u32 a = R32((u32)(r_eax+0x1bcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ff0b3: je 0x5ff187 */ if (fZ) goto L_005ff187;
L_005ff0b9:; BB(0x005ff0b9);
    /* 005ff0b9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005ff0c0: jmp 0x5ff0cb */ goto L_005ff0cb;
L_005ff0c2:; BB(0x005ff0c2);
    /* 005ff0c2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ff0c5: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ff0c8: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005ff0cb:; BB(0x005ff0cb);
    /* 005ff0cb: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ff0ce: mov ecx, dword ptr [edx + 0x1bc] */ r_ecx = R32((u32)(r_edx+0x1bcu));
    /* 005ff0d4: call 0x5feda0 */ r_esp -= 4; W32(r_esp, 0x5ff0d9u); f_005feda0();
    /* 005ff0d9: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ff0dc: jge 0x5ff142 */ if ((fS==fO)) goto L_005ff142;
L_005ff0de:; BB(0x005ff0de);
    /* 005ff0de: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ff0e0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ff0e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ff0e4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ff0e7: mov ecx, dword ptr [ecx + 0x1bc] */ r_ecx = R32((u32)(r_ecx+0x1bcu));
    /* 005ff0ed: call 0x5ff080 */ r_esp -= 4; W32(r_esp, 0x5ff0f2u); f_005ff080();
    /* 005ff0f2: mov ecx, eax */ r_ecx = r_eax;
    /* 005ff0f4: call 0x5f5df0 */ r_esp -= 4; W32(r_esp, 0x5ff0f9u); f_005f5df0();
    /* 005ff0f9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ff0fc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ff0fd: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ff100: mov ecx, dword ptr [eax + 0x1bc] */ r_ecx = R32((u32)(r_eax+0x1bcu));
    /* 005ff106: call 0x5ff080 */ r_esp -= 4; W32(r_esp, 0x5ff10bu); f_005ff080();
    /* 005ff10b: mov ecx, eax */ r_ecx = r_eax;
    /* 005ff10d: call 0x6026d0 */ r_esp -= 4; W32(r_esp, 0x5ff112u); f_006026d0();
    /* 005ff112: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005ff115: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ff117: je 0x5ff140 */ if (fZ) goto L_005ff140;
L_005ff119:; BB(0x005ff119);
    /* 005ff119: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ff11c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ff11d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ff120: mov ecx, dword ptr [eax + 0x1bc] */ r_ecx = R32((u32)(r_eax+0x1bcu));
    /* 005ff126: call 0x5ff080 */ r_esp -= 4; W32(r_esp, 0x5ff12bu); f_005ff080();
    /* 005ff12b: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005ff12e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ff130: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ff133: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005ff135: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ff138: mov eax, dword ptr [edx + 0xd8] */ r_eax = R32((u32)(r_edx+0xd8u));
    /* 005ff13e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ff140u); call_ind(t); }
L_005ff140:; BB(0x005ff140);
    /* 005ff140: jmp 0x5ff0c2 */ goto L_005ff0c2;
L_005ff142:; BB(0x005ff142);
    /* 005ff142: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ff145: mov edx, dword ptr [ecx + 0x1bc] */ r_edx = R32((u32)(r_ecx+0x1bcu));
    /* 005ff14b: cmp dword ptr [edx + 0x1b8], -1 */ {  u32 a = R32((u32)(r_edx+0x1b8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ff152: je 0x5ff187 */ if (fZ) goto L_005ff187;
L_005ff154:; BB(0x005ff154);
    /* 005ff154: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ff157: mov ecx, dword ptr [eax + 0x1bc] */ r_ecx = R32((u32)(r_eax+0x1bcu));
    /* 005ff15d: mov edx, dword ptr [ecx + 0x1b8] */ r_edx = R32((u32)(r_ecx+0x1b8u));
    /* 005ff163: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ff164: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ff167: mov ecx, dword ptr [eax + 0x1bc] */ r_ecx = R32((u32)(r_eax+0x1bcu));
    /* 005ff16d: call 0x5ff060 */ r_esp -= 4; W32(r_esp, 0x5ff172u); f_005ff060();
    /* 005ff172: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005ff175: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005ff177: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ff17a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005ff17c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ff17f: mov eax, dword ptr [edx + 0xd8] */ r_eax = R32((u32)(r_edx+0xd8u));
    /* 005ff185: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ff187u); call_ind(t); }
L_005ff187:; BB(0x005ff187);
    /* 005ff187: mov esp, ebp */ r_esp = r_ebp;
    /* 005ff189: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ff18a: ret  */ FN_RET(0x005ff0a0); r_esp += 4; return;
}

void f_005ff2a0(void) /* sub_5FF2A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ff2a0);
    /* 005ff2a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ff2a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005ff2a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ff2a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005ff2a7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ff2aa: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ff2ad: mov dl, byte ptr [ecx + 4] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x4u))) & 0xffu);
    /* 005ff2b0: mov byte ptr [eax + 4], dl */ W8((u32)(r_eax+0x4u), (u8)r_edx);
    /* 005ff2b3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ff2b6: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ff2b9: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005ff2bc: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 005ff2bf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ff2c2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ff2c5: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 005ff2c8: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
    /* 005ff2cb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ff2ce: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ff2d1: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 005ff2d4: mov dword ptr [eax + 0x10], edx */ W32((u32)(r_eax+0x10u), r_edx);
    /* 005ff2d7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ff2da: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ff2dd: mov dl, byte ptr [ecx + 0x14] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x14u))) & 0xffu);
    /* 005ff2e0: mov byte ptr [eax + 0x14], dl */ W8((u32)(r_eax+0x14u), (u8)r_edx);
    /* 005ff2e3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ff2e6: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ff2e9: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 005ff2ec: mov dword ptr [eax + 0x18], edx */ W32((u32)(r_eax+0x18u), r_edx);
    /* 005ff2ef: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ff2f2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ff2f5: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 005ff2f8: mov dword ptr [eax + 0x1c], edx */ W32((u32)(r_eax+0x1cu), r_edx);
    /* 005ff2fb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ff2fe: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ff301: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 005ff304: mov dword ptr [eax + 0x20], edx */ W32((u32)(r_eax+0x20u), r_edx);
    /* 005ff307: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ff30a: mov esp, ebp */ r_esp = r_ebp;
    /* 005ff30c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ff30d: ret 4 */ FN_RET(0x005ff2a0); r_esp += 8; return;
}

void f_005ff4c0(void) /* sub_5FF4C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ff4c0);
    /* 005ff4c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ff4c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005ff4c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ff4c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005ff4c7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ff4c9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ff4cb: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 005ff4ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ff4cf: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 005ff4d2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ff4d3: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005ff4d6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ff4d7: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005ff4da: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ff4db: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ff4de: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ff4df: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ff4e2: call 0x602830 */ r_esp -= 4; W32(r_esp, 0x5ff4e7u); f_00602830();
    /* 005ff4e7: mov esp, ebp */ r_esp = r_ebp;
    /* 005ff4e9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ff4ea: ret 0x14 */ FN_RET(0x005ff4c0); r_esp += 24; return;
}

void f_005ff580(void) /* sub_5FF580 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ff580);
    /* 005ff580: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ff581: mov ebp, esp */ r_ebp = r_esp;
    /* 005ff583: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ff584: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005ff587: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ff58a: mov ax, word ptr [eax + 0x218] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+0x218u))) & 0xffffu);
    /* 005ff591: mov esp, ebp */ r_esp = r_ebp;
    /* 005ff593: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ff594: ret  */ FN_RET(0x005ff580); r_esp += 4; return;
}

void f_005ff5a0(void) /* sub_5FF5A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ff5a0);
    /* 005ff5a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ff5a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005ff5a3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ff5a5: push 0x6aa7be */ { u32 v = 0x6aa7beu; r_esp -= 4; W32(r_esp, v); }
    /* 005ff5aa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005ff5b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ff5b1: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ff5b4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005ff5b9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005ff5bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ff5bc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005ff5bf: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005ff5c5: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005ff5c8: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ff5cb: cmp dword ptr [eax + 0x210], 0 */ {  u32 a = R32((u32)(r_eax+0x210u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ff5d2: jne 0x5ff61b */ if (!fZ) goto L_005ff61b;
L_005ff5d4:; BB(0x005ff5d4);
    /* 005ff5d4: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 005ff5d6: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5ff5dbu); f_00686d82();
    /* 005ff5db: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ff5de: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005ff5e1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005ff5e8: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ff5ec: je 0x5ff5fb */ if (fZ) goto L_005ff5fb;
L_005ff5ee:; BB(0x005ff5ee);
    /* 005ff5ee: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ff5f1: call 0x60c5f0 */ r_esp -= 4; W32(r_esp, 0x5ff5f6u); f_0060c5f0();
    /* 005ff5f6: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005ff5f9: jmp 0x5ff602 */ goto L_005ff602;
L_005ff5fb:; BB(0x005ff5fb);
    /* 005ff5fb: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_005ff602:; BB(0x005ff602);
    /* 005ff602: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005ff605: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005ff608: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005ff60f: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ff612: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ff615: mov dword ptr [edx + 0x210], eax */ W32((u32)(r_edx+0x210u), r_eax);
L_005ff61b:; BB(0x005ff61b);
    /* 005ff61b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ff61e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ff61f: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ff622: mov ecx, dword ptr [edx + 0x210] */ r_ecx = R32((u32)(r_edx+0x210u));
    /* 005ff628: call 0x60c9e0 */ r_esp -= 4; W32(r_esp, 0x5ff62du); f_0060c9e0();
    /* 005ff62d: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005ff630: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ff632: jne 0x5ff652 */ if (!fZ) goto L_005ff652;
L_005ff634:; BB(0x005ff634);
    /* 005ff634: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ff637: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ff638: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ff63b: mov ecx, dword ptr [edx + 0x210] */ r_ecx = R32((u32)(r_edx+0x210u));
    /* 005ff641: call 0x60c840 */ r_esp -= 4; W32(r_esp, 0x5ff646u); f_0060c840();
    /* 005ff646: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ff649: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ff64c: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005ff64f: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
L_005ff652:; BB(0x005ff652);
    /* 005ff652: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ff655: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ff65c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ff65d: mov esp, ebp */ r_esp = r_ebp;
    /* 005ff65f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ff660: ret 4 */ FN_RET(0x005ff5a0); r_esp += 8; return;
}

void f_005ff670(void) /* sub_5FF670 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ff670);
    /* 005ff670: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ff671: mov ebp, esp */ r_ebp = r_esp;
    /* 005ff673: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ff674: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005ff677: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ff67a: cmp dword ptr [eax + 0x210], 0 */ {  u32 a = R32((u32)(r_eax+0x210u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ff681: je 0x5ff695 */ if (fZ) goto L_005ff695;
L_005ff683:; BB(0x005ff683);
    /* 005ff683: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ff686: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ff687: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ff68a: mov ecx, dword ptr [edx + 0x210] */ r_ecx = R32((u32)(r_edx+0x210u));
    /* 005ff690: call 0x60c890 */ r_esp -= 4; W32(r_esp, 0x5ff695u); f_0060c890();
L_005ff695:; BB(0x005ff695);
    /* 005ff695: mov esp, ebp */ r_esp = r_ebp;
    /* 005ff697: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ff698: ret 4 */ FN_RET(0x005ff670); r_esp += 8; return;
}

void f_005ff7a0(void) /* sub_5FF7A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ff7a0);
    /* 005ff7a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ff7a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005ff7a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ff7a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005ff7a7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ff7aa: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ff7ad: mov dword ptr [eax + 0x214], ecx */ W32((u32)(r_eax+0x214u), r_ecx);
    /* 005ff7b3: mov esp, ebp */ r_esp = r_ebp;
    /* 005ff7b5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ff7b6: ret 4 */ FN_RET(0x005ff7a0); r_esp += 8; return;
}

void f_005ff840(void) /* sub_5FF840 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ff840);
    /* 005ff840: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ff841: mov ebp, esp */ r_ebp = r_esp;
    /* 005ff843: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ff846: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005ff849: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ff84c: mov ecx, dword ptr [eax + 0x210] */ r_ecx = R32((u32)(r_eax+0x210u));
    /* 005ff852: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x5ff857u); f_0060c9a0();
    /* 005ff857: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005ff85a: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005ff861: jmp 0x5ff86c */ goto L_005ff86c;
L_005ff863:; BB(0x005ff863);
    /* 005ff863: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ff866: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ff869: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_005ff86c:; BB(0x005ff86c);
    /* 005ff86c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ff86f: cmp edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ff872: jge 0x5ff898 */ if ((fS==fO)) goto L_005ff898;
L_005ff874:; BB(0x005ff874);
    /* 005ff874: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ff877: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005ff87a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ff87b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ff87e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ff87f: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ff882: mov ecx, dword ptr [eax + 0x210] */ r_ecx = R32((u32)(r_eax+0x210u));
    /* 005ff888: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x5ff88du); f_0060ca40();
    /* 005ff88d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ff88e: call 0x6104e0 */ r_esp -= 4; W32(r_esp, 0x5ff893u); f_006104e0();
    /* 005ff893: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ff896: jmp 0x5ff863 */ goto L_005ff863;
L_005ff898:; BB(0x005ff898);
    /* 005ff898: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ff89b: mov ecx, dword ptr [ecx + 0x210] */ r_ecx = R32((u32)(r_ecx+0x210u));
    /* 005ff8a1: call 0x60ca10 */ r_esp -= 4; W32(r_esp, 0x5ff8a6u); f_0060ca10();
    /* 005ff8a6: mov esp, ebp */ r_esp = r_ebp;
    /* 005ff8a8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ff8a9: ret  */ FN_RET(0x005ff840); r_esp += 4; return;
}

void f_005ff8f0(void) /* sub_5FF8F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ff8f0);
    /* 005ff8f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ff8f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005ff8f3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ff8f6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005ff8f9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ff8fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ff8fd: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ff900: call 0x6062a0 */ r_esp -= 4; W32(r_esp, 0x5ff905u); f_006062a0();
    /* 005ff905: mov byte ptr [ebp - 1], al */ W8((u32)(r_ebp+0xffffffffu), (u8)r_eax);
    /* 005ff908: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ff90b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ff90c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ff90f: call 0x5ff7a0 */ r_esp -= 4; W32(r_esp, 0x5ff914u); f_005ff7a0();
    /* 005ff914: mov al, byte ptr [ebp - 1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffffu))) & 0xffu);
    /* 005ff917: mov esp, ebp */ r_esp = r_ebp;
    /* 005ff919: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ff91a: ret 4 */ FN_RET(0x005ff8f0); r_esp += 8; return;
}

void f_005ff920(void) /* sub_5FF920 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ff920);
    /* 005ff920: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ff921: mov ebp, esp */ r_ebp = r_esp;
    /* 005ff923: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ff924: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005ff927: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ff92a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ff92b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ff92e: call 0x606350 */ r_esp -= 4; W32(r_esp, 0x5ff933u); f_00606350();
    /* 005ff933: mov esp, ebp */ r_esp = r_ebp;
    /* 005ff935: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ff936: ret 4 */ FN_RET(0x005ff920); r_esp += 8; return;
}

void f_005ff940(void) /* sub_5FF940 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ff940);
    /* 005ff940: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ff941: mov ebp, esp */ r_ebp = r_esp;
    /* 005ff943: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ff944: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005ff947: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ff94a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ff94b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ff94e: call 0x606380 */ r_esp -= 4; W32(r_esp, 0x5ff953u); f_00606380();
    /* 005ff953: mov esp, ebp */ r_esp = r_ebp;
    /* 005ff955: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ff956: ret 4 */ FN_RET(0x005ff940); r_esp += 8; return;
}

void f_005ff960(void) /* sub_5FF960 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ff960);
    /* 005ff960: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ff961: mov ebp, esp */ r_ebp = r_esp;
    /* 005ff963: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ff966: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005ff967: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005ff96a: mov word ptr [ebp - 0x10], 0 */ W16((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005ff970: mov word ptr [ebp - 8], 0 */ W16((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005ff976: jmp 0x5ff984 */ goto L_005ff984;
L_005ff978:; BB(0x005ff978);
    /* 005ff978: mov ax, word ptr [ebp - 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 005ff97c: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005ff980: mov word ptr [ebp - 8], ax */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_eax);
L_005ff984:; BB(0x005ff984);
    /* 005ff984: movsx esi, word ptr [ebp - 8] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 005ff988: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ff98b: call 0x6063e0 */ r_esp -= 4; W32(r_esp, 0x5ff990u); f_006063e0();
    /* 005ff990: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ff992: jge 0x5ff9cc */ if ((fS==fO)) goto L_005ff9cc;
L_005ff994:; BB(0x005ff994);
    /* 005ff994: movsx ecx, word ptr [ebp - 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 005ff998: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ff999: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ff99c: call 0x5ff920 */ r_esp -= 4; W32(r_esp, 0x5ff9a1u); f_005ff920();
    /* 005ff9a1: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005ff9a4: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ff9a7: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005ff9a9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ff9ac: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 005ff9af: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5ff9b1u); call_ind(t); }
    /* 005ff9b1: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 005ff9b5: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ff9b7: jle 0x5ff9ca */ if ((fZ||fS!=fO)) goto L_005ff9ca;
L_005ff9b9:; BB(0x005ff9b9);
    /* 005ff9b9: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ff9bc: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005ff9be: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ff9c1: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 005ff9c4: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5ff9c6u); call_ind(t); }
    /* 005ff9c6: mov word ptr [ebp - 0x10], ax */ W16((u32)(r_ebp+0xfffffff0u), (u16)r_eax);
L_005ff9ca:; BB(0x005ff9ca);
    /* 005ff9ca: jmp 0x5ff978 */ goto L_005ff978;
L_005ff9cc:; BB(0x005ff9cc);
    /* 005ff9cc: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ff9cf: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ff9d1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ff9d4: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 005ff9d7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ff9d9u); call_ind(t); }
    /* 005ff9d9: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 005ff9dd: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ff9df: jne 0x5ffa46 */ if (!fZ) goto L_005ffa46;
L_005ff9e1:; BB(0x005ff9e1);
    /* 005ff9e1: mov word ptr [ebp - 8], 0 */ W16((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005ff9e7: jmp 0x5ff9f5 */ goto L_005ff9f5;
L_005ff9e9:; BB(0x005ff9e9);
    /* 005ff9e9: mov dx, word ptr [ebp - 8] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 005ff9ed: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005ff9f1: mov word ptr [ebp - 8], dx */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_edx);
L_005ff9f5:; BB(0x005ff9f5);
    /* 005ff9f5: movsx esi, word ptr [ebp - 8] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 005ff9f9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ff9fc: call 0x6063e0 */ r_esp -= 4; W32(r_esp, 0x5ffa01u); f_006063e0();
    /* 005ffa01: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ffa03: jge 0x5ffa41 */ if ((fS==fO)) goto L_005ffa41;
L_005ffa05:; BB(0x005ffa05);
    /* 005ffa05: movsx eax, word ptr [ebp - 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 005ffa09: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ffa0a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ffa0d: call 0x5ff920 */ r_esp -= 4; W32(r_esp, 0x5ffa12u); f_005ff920();
    /* 005ffa12: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005ffa15: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ffa18: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005ffa1a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ffa1d: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 005ffa20: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ffa22u); call_ind(t); }
    /* 005ffa22: mov esi, eax */ r_esi = r_eax;
    /* 005ffa24: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ffa27: call 0x5ff580 */ r_esp -= 4; W32(r_esp, 0x5ffa2cu); f_005ff580();
    /* 005ffa2c: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 005ffa2f: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005ffa31: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005ffa32: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ffa35: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005ffa37: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ffa3a: mov edx, dword ptr [eax + 0x6c] */ r_edx = R32((u32)(r_eax+0x6cu));
    /* 005ffa3d: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5ffa3fu); call_ind(t); }
    /* 005ffa3f: jmp 0x5ff9e9 */ goto L_005ff9e9;
L_005ffa41:; BB(0x005ffa41);
    /* 005ffa41: jmp 0x5ffb2a */ goto L_005ffb2a;
L_005ffa46:; BB(0x005ffa46);
    /* 005ffa46: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ffa49: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ffa4b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ffa4e: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 005ffa51: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ffa53u); call_ind(t); }
    /* 005ffa53: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 005ffa57: mov word ptr [ebp - 8], 0 */ W16((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005ffa5d: jmp 0x5ffa6b */ goto L_005ffa6b;
L_005ffa5f:; BB(0x005ffa5f);
    /* 005ffa5f: mov cx, word ptr [ebp - 8] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 005ffa63: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005ffa67: mov word ptr [ebp - 8], cx */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_ecx);
L_005ffa6b:; BB(0x005ffa6b);
    /* 005ffa6b: movsx esi, word ptr [ebp - 8] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 005ffa6f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ffa72: call 0x6063e0 */ r_esp -= 4; W32(r_esp, 0x5ffa77u); f_006063e0();
    /* 005ffa77: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ffa79: jge 0x5ffb2a */ if ((fS==fO)) goto L_005ffb2a;
L_005ffa7f:; BB(0x005ffa7f);
    /* 005ffa7f: movsx edx, word ptr [ebp - 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 005ffa83: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ffa84: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ffa87: call 0x5ff920 */ r_esp -= 4; W32(r_esp, 0x5ffa8cu); f_005ff920();
    /* 005ffa8c: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005ffa8f: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ffa92: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ffa94: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ffa97: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 005ffa9a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ffa9cu); call_ind(t); }
    /* 005ffa9c: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005ffaa0: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ffaa2: jne 0x5ffac6 */ if (!fZ) goto L_005ffac6;
L_005ffaa4:; BB(0x005ffaa4);
    /* 005ffaa4: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 005ffaa8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ffaa9: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ffaac: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ffaae: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ffab1: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005ffab4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ffab6u); call_ind(t); }
    /* 005ffab6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ffab7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ffaba: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005ffabc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ffabf: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 005ffac2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ffac4u); call_ind(t); }
    /* 005ffac4: jmp 0x5ffafb */ goto L_005ffafb;
L_005ffac6:; BB(0x005ffac6);
    /* 005ffac6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ffac9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005ffacb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fface: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 005ffad1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ffad3u); call_ind(t); }
    /* 005ffad3: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 005ffad7: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ffad9: jne 0x5ffafb */ if (!fZ) goto L_005ffafb;
L_005ffadb:; BB(0x005ffadb);
    /* 005ffadb: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005ffadf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ffae0: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ffae3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ffae5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ffae8: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005ffaeb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ffaedu); call_ind(t); }
    /* 005ffaed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ffaee: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ffaf1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005ffaf3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ffaf6: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 005ffaf9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ffafbu); call_ind(t); }
L_005ffafb:; BB(0x005ffafb);
    /* 005ffafb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ffafe: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005ffb00: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ffb03: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 005ffb06: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ffb08u); call_ind(t); }
    /* 005ffb08: mov esi, eax */ r_esi = r_eax;
    /* 005ffb0a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ffb0d: call 0x5ff580 */ r_esp -= 4; W32(r_esp, 0x5ffb12u); f_005ff580();
    /* 005ffb12: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 005ffb15: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005ffb17: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005ffb18: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ffb1b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005ffb1d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ffb20: mov edx, dword ptr [eax + 0x6c] */ r_edx = R32((u32)(r_eax+0x6cu));
    /* 005ffb23: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5ffb25u); call_ind(t); }
    /* 005ffb25: jmp 0x5ffa5f */ goto L_005ffa5f;
L_005ffb2a:; BB(0x005ffb2a);
    /* 005ffb2a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005ffb2b: mov esp, ebp */ r_esp = r_ebp;
    /* 005ffb2d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ffb2e: ret 4 */ FN_RET(0x005ff960); r_esp += 8; return;
}

void f_005ffb40(void) /* sub_5FFB40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ffb40);
    /* 005ffb40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ffb41: mov ebp, esp */ r_ebp = r_esp;
    /* 005ffb43: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ffb46: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005ffb49: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ffb4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ffb4d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ffb50: call 0x5ff920 */ r_esp -= 4; W32(r_esp, 0x5ffb55u); f_005ff920();
    /* 005ffb55: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005ffb58: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ffb5c: jne 0x5ffb60 */ if (!fZ) goto L_005ffb60;
L_005ffb5e:; BB(0x005ffb5e);
    /* 005ffb5e: jmp 0x5ffb9b */ goto L_005ffb9b;
L_005ffb60:; BB(0x005ffb60);
    /* 005ffb60: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ffb63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ffb64: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ffb67: add ecx, 0x48 */ {  u32 a = r_ecx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ffb6a: call 0x60c890 */ r_esp -= 4; W32(r_esp, 0x5ffb6fu); f_0060c890();
    /* 005ffb6f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ffb72: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005ffb75: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ffb78: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005ffb7b: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ffb7f: je 0x5ffb94 */ if (fZ) goto L_005ffb94;
L_005ffb81:; BB(0x005ffb81);
    /* 005ffb81: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ffb83: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ffb86: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005ffb88: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ffb8b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005ffb8d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ffb8fu); call_ind(t); }
    /* 005ffb8f: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005ffb92: jmp 0x5ffb9b */ goto L_005ffb9b;
L_005ffb94:; BB(0x005ffb94);
    /* 005ffb94: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_005ffb9b:; BB(0x005ffb9b);
    /* 005ffb9b: mov esp, ebp */ r_esp = r_ebp;
    /* 005ffb9d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ffb9e: ret 4 */ FN_RET(0x005ffb40); r_esp += 8; return;
}

void f_005fff30(void) /* sub_5FFF30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fff30);
    /* 005fff30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fff31: mov ebp, esp */ r_ebp = r_esp;
    /* 005fff33: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fff36: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005fff39: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fff3c: call 0x5f5550 */ r_esp -= 4; W32(r_esp, 0x5fff41u); f_005f5550();
    /* 005fff41: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005fff44: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fff47: cmp dword ptr [eax + 0x190], 0 */ {  u32 a = R32((u32)(r_eax+0x190u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fff4e: je 0x5fff64 */ if (fZ) goto L_005fff64;
L_005fff50:; BB(0x005fff50);
    /* 005fff50: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fff53: mov ecx, dword ptr [ecx + 0x190] */ r_ecx = R32((u32)(r_ecx+0x190u));
    /* 005fff59: call 0x5f5550 */ r_esp -= 4; W32(r_esp, 0x5fff5eu); f_005f5550();
    /* 005fff5e: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005fff61: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005fff64:; BB(0x005fff64);
    /* 005fff64: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fff67: mov esp, ebp */ r_esp = r_ebp;
    /* 005fff69: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fff6a: ret  */ FN_RET(0x005fff30); r_esp += 4; return;
}

void f_005fff90(void) /* sub_5FFF90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fff90);
    /* 005fff90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fff91: mov ebp, esp */ r_ebp = r_esp;
    /* 005fff93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fff94: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005fff97: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fff9a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005fff9d: mov dword ptr [eax + 0x1e0], ecx */ W32((u32)(r_eax+0x1e0u), r_ecx);
    /* 005fffa3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fffa6: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005fffa9: mov dword ptr [edx + 0x1e4], eax */ W32((u32)(r_edx+0x1e4u), r_eax);
    /* 005fffaf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fffb2: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005fffb5: mov dword ptr [ecx + 0x1e8], edx */ W32((u32)(r_ecx+0x1e8u), r_edx);
    /* 005fffbb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fffbe: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 005fffc1: mov dword ptr [eax + 0x1ec], ecx */ W32((u32)(r_eax+0x1ecu), r_ecx);
    /* 005fffc7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fffca: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 005fffcd: mov dword ptr [edx + 0x1f0], eax */ W32((u32)(r_edx+0x1f0u), r_eax);
    /* 005fffd3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fffd6: mov edx, dword ptr [ebp + 0x1c] */ r_edx = R32((u32)(r_ebp+0x1cu));
    /* 005fffd9: mov dword ptr [ecx + 0x1f4], edx */ W32((u32)(r_ecx+0x1f4u), r_edx);
    /* 005fffdf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fffe2: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 005fffe5: mov dword ptr [eax + 0x1f8], ecx */ W32((u32)(r_eax+0x1f8u), r_ecx);
    /* 005fffeb: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fffee: mov eax, dword ptr [ebp + 0x24] */ r_eax = R32((u32)(r_ebp+0x24u));
    /* 005ffff1: mov dword ptr [edx + 0x1fc], eax */ W32((u32)(r_edx+0x1fcu), r_eax);
    /* 005ffff7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ffffa: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005ffffc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fffff: mov eax, dword ptr [edx + 0xec] */ r_eax = R32((u32)(r_edx+0xecu));
    /* 00600005: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x600007u); call_ind(t); }
    /* 00600007: mov esp, ebp */ r_esp = r_ebp;
    /* 00600009: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060000a: ret 0x20 */ FN_RET(0x005fff90); r_esp += 36; return;
}

