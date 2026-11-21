#include "protos.h"

void f_0065d1e0(void) /* LoadFaceDialog::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0065d1e0);
    /* 0065d1e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065d1e1: mov ebp, esp */ r_ebp = r_esp;
    /* 0065d1e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065d1e5: push 0x6ac7f3 */ { u32 v = 0x6ac7f3u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d1ea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0065d1f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065d1f1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065d1f2: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0065d1f7: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065d1f9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065d1fa: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0065d1fd: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0065d203: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0065d206: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065d209: call 0x65ba70 */ r_esp -= 4; W32(r_esp, 0x65d20eu); f_0065ba70();
    /* 0065d20e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0065d215: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065d218: mov dword ptr [eax], 0x6de924 */ W32((u32)(r_eax), 0x6de924u);
    /* 0065d21e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d220: push 0x30d4f2 */ { u32 v = 0x30d4f2u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d225: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065d228: call 0x5f83d0 */ r_esp -= 4; W32(r_esp, 0x65d22du); f_005f83d0();
    /* 0065d22d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d22f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d231: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065d234: call 0x5f7340 */ r_esp -= 4; W32(r_esp, 0x65d239u); f_005f7340();
    /* 0065d239: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065d23c: mov dword ptr [0x16306a8], ecx */ W32((u32)(0x16306a8u), r_ecx);
    /* 0065d242: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0065d249: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065d24c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065d24f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0065d256: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065d257: mov esp, ebp */ r_esp = r_ebp;
    /* 0065d259: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065d25a: ret  */ FN_RET(0x0065d1e0); r_esp += 4; return;
}

void f_0065d260(void) /* LoadFaceDialog::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0065d260);
    /* 0065d260: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065d261: mov ebp, esp */ r_ebp = r_esp;
    /* 0065d263: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065d264: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0065d267: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065d26a: mov dword ptr [eax], 0x6de924 */ W32((u32)(r_eax), 0x6de924u);
    /* 0065d270: mov dword ptr [0x16306a8], 0 */ W32((u32)(0x16306a8u), 0x0u);
    /* 0065d27a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065d27d: call 0x65bae0 */ r_esp -= 4; W32(r_esp, 0x65d282u); f_0065bae0();
    /* 0065d282: mov esp, ebp */ r_esp = r_ebp;
    /* 0065d284: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065d285: ret  */ FN_RET(0x0065d260); r_esp += 4; return;
}

void f_0065d290(void) /* LoadFaceDialog::vfunc24 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0065d290);
    /* 0065d290: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065d291: mov ebp, esp */ r_ebp = r_esp;
    /* 0065d293: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065d294: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0065d297: mov eax, 0x7a */ r_eax = 0x7au;
    /* 0065d29c: mov esp, ebp */ r_esp = r_ebp;
    /* 0065d29e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065d29f: ret  */ FN_RET(0x0065d290); r_esp += 4; return;
}

void f_0065d2a0(void) /* LoadFaceDialog::vfunc25 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0065d2a0);
    /* 0065d2a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065d2a1: mov ebp, esp */ r_ebp = r_esp;
    /* 0065d2a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065d2a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0065d2a7: mov eax, 0xb9 */ r_eax = 0xb9u;
    /* 0065d2ac: mov esp, ebp */ r_esp = r_ebp;
    /* 0065d2ae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065d2af: ret  */ FN_RET(0x0065d2a0); r_esp += 4; return;
}

void f_0065d2b0(void) /* LoadFaceDialog::vfunc29 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0065d2b0);
    /* 0065d2b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065d2b1: mov ebp, esp */ r_ebp = r_esp;
    /* 0065d2b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065d2b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0065d2b7: mov eax, 0x55 */ r_eax = 0x55u;
    /* 0065d2bc: mov esp, ebp */ r_esp = r_ebp;
    /* 0065d2be: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065d2bf: ret  */ FN_RET(0x0065d2b0); r_esp += 4; return;
}

void f_0065d2c0(void) /* LoadFaceDialog::vfunc30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0065d2c0);
    /* 0065d2c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065d2c1: mov ebp, esp */ r_ebp = r_esp;
    /* 0065d2c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065d2c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0065d2c7: mov eax, 0x2b */ r_eax = 0x2bu;
    /* 0065d2cc: mov esp, ebp */ r_esp = r_ebp;
    /* 0065d2ce: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065d2cf: ret  */ FN_RET(0x0065d2c0); r_esp += 4; return;
}

void f_0065d2d0(void) /* LoadFaceDialog::vfunc15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0065d2d0);
    /* 0065d2d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065d2d1: mov ebp, esp */ r_ebp = r_esp;
    /* 0065d2d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065d2d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0065d2d7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065d2da: call 0x65bb00 */ r_esp -= 4; W32(r_esp, 0x65d2dfu); f_0065bb00();
    /* 0065d2df: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065d2e1: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d2e3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d2e5: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d2e7: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d2e9: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d2eb: push 0x142 */ { u32 v = 0x142u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d2f0: push 0x49 */ { u32 v = 0x49u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d2f2: push 0x6de9d0 */ { u32 v = 0x6de9d0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d2f7: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x65d2fcu); f_00630f40();
    /* 0065d2fc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065d2ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065d300: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d302: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d304: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065d307: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x65d30cu); f_005fa5b0();
    /* 0065d30c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d30e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d310: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d312: push 0xa1 */ { u32 v = 0xa1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d317: push 0x7c */ { u32 v = 0x7cu; r_esp -= 4; W32(r_esp, v); }
    /* 0065d319: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d31b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d31d: push 0xda */ { u32 v = 0xdau; r_esp -= 4; W32(r_esp, v); }
    /* 0065d322: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d324: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d326: push 0x149 */ { u32 v = 0x149u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d32b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d32d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d32f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065d332: call 0x5fa880 */ r_esp -= 4; W32(r_esp, 0x65d337u); f_005fa880();
    /* 0065d337: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d339: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d33b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d33d: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065d342: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065d347: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065d34c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d34e: push 0xdb */ { u32 v = 0xdbu; r_esp -= 4; W32(r_esp, v); }
    /* 0065d353: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d355: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d357: push 0x149 */ { u32 v = 0x149u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d35c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d35e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d360: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065d363: call 0x5fa880 */ r_esp -= 4; W32(r_esp, 0x65d368u); f_005fa880();
    /* 0065d368: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0065d36a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065d36c: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 0065d36e: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 0065d370: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d372: push 0x6de9c0 */ { u32 v = 0x6de9c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d377: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x65d37cu); f_00630f40();
    /* 0065d37c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065d37f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065d380: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d382: push 0xe1 */ { u32 v = 0xe1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d387: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d389: push 0x30d4e5 */ { u32 v = 0x30d4e5u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d38e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d390: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d392: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065d395: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x65d39au); f_005f9de0();
    /* 0065d39a: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 0065d39c: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065d39e: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 0065d3a0: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 0065d3a2: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d3a4: push 0x6c2318 */ { u32 v = 0x6c2318u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d3a9: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x65d3aeu); f_00630f40();
    /* 0065d3ae: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065d3b1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065d3b2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d3b4: push 0xe1 */ { u32 v = 0xe1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d3b9: push 0xaa */ { u32 v = 0xaau; r_esp -= 4; W32(r_esp, v); }
    /* 0065d3be: push 0x30d4de */ { u32 v = 0x30d4deu; r_esp -= 4; W32(r_esp, v); }
    /* 0065d3c3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d3c5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d3c7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065d3ca: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x65d3cfu); f_005f9de0();
    /* 0065d3cf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d3d1: mov eax, dword ptr [0x16306a4] */ r_eax = R32((u32)(0x16306a4u));
    /* 0065d3d6: add eax, 0x1bc */ {  u32 a = r_eax; u32 b = 0x1bcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065d3db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065d3dc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d3de: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d3e0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065d3e3: call 0x65c820 */ r_esp -= 4; W32(r_esp, 0x65d3e8u); f_0065c820();
    /* 0065d3e8: mov esp, ebp */ r_esp = r_ebp;
    /* 0065d3ea: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065d3eb: ret  */ FN_RET(0x0065d2d0); r_esp += 4; return;
}

void f_0065d3f0(void) /* LoadFaceDialog::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0065d3f0);
    /* 0065d3f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065d3f1: mov ebp, esp */ r_ebp = r_esp;
    /* 0065d3f3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065d3f6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0065d3f9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0065d3fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065d3fd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065d400: call 0x65c660 */ r_esp -= 4; W32(r_esp, 0x65d405u); f_0065c660();
    /* 0065d405: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065d408: mov ecx, dword ptr [ecx + 0x1bc] */ r_ecx = R32((u32)(r_ecx+0x1bcu));
    /* 0065d40e: call 0x615260 */ r_esp -= 4; W32(r_esp, 0x65d413u); f_00615260();
    /* 0065d413: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065d416: jne 0x65d435 */ if (!fZ) goto L_0065d435;
L_0065d418:; BB(0x0065d418);
    /* 0065d418: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d41a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065d41d: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x65d422u); f_005fb300();
    /* 0065d422: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0065d425: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065d428: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0065d42a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065d42d: mov edx, dword ptr [eax + 0xd0] */ r_edx = R32((u32)(r_eax+0xd0u));
    /* 0065d433: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x65d435u); call_ind(t); }
L_0065d435:; BB(0x0065d435);
    /* 0065d435: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0065d438: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0065d43b: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065d43f: je 0x65d449 */ if (fZ) goto L_0065d449;
L_0065d441:; BB(0x0065d441);
    /* 0065d441: cmp dword ptr [ebp - 0xc], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065d445: je 0x65d465 */ if (fZ) goto L_0065d465;
L_0065d447:; BB(0x0065d447);
    /* 0065d447: jmp 0x65d472 */ goto L_0065d472;
L_0065d449:; BB(0x0065d449);
    /* 0065d449: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065d44c: mov ecx, dword ptr [ecx + 0x1bc] */ r_ecx = R32((u32)(r_ecx+0x1bcu));
    /* 0065d452: call 0x65d130 */ r_esp -= 4; W32(r_esp, 0x65d457u); f_0065d130();
    /* 0065d457: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065d458: mov ecx, dword ptr [0x16306a4] */ r_ecx = R32((u32)(0x16306a4u));
    /* 0065d45e: call 0x65a5f0 */ r_esp -= 4; W32(r_esp, 0x65d463u); f_0065a5f0();
    /* 0065d463: jmp 0x65d472 */ goto L_0065d472;
L_0065d465:; BB(0x0065d465);
    /* 0065d465: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d467: mov ecx, dword ptr [0x16306a4] */ r_ecx = R32((u32)(0x16306a4u));
    /* 0065d46d: call 0x65a5f0 */ r_esp -= 4; W32(r_esp, 0x65d472u); f_0065a5f0();
L_0065d472:; BB(0x0065d472);
    /* 0065d472: mov esp, ebp */ r_esp = r_ebp;
    /* 0065d474: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065d475: ret 4 */ FN_RET(0x0065d3f0); r_esp += 8; return;
}

void f_0065d480(void) /* LoadFaceDialog::vfunc37 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0065d480);
    /* 0065d480: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065d481: mov ebp, esp */ r_ebp = r_esp;
    /* 0065d483: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065d484: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0065d487: cmp dword ptr [0x16306b0], 0 */ {  u32 a = R32((u32)(0x16306b0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065d48e: je 0x65d49b */ if (fZ) goto L_0065d49b;
L_0065d490:; BB(0x0065d490);
    /* 0065d490: mov ecx, dword ptr [0x16306b0] */ r_ecx = R32((u32)(0x16306b0u));
    /* 0065d496: call 0x65ca40 */ r_esp -= 4; W32(r_esp, 0x65d49bu); f_0065ca40();
L_0065d49b:; BB(0x0065d49b);
    /* 0065d49b: cmp dword ptr [0x1630690], 0 */ {  u32 a = R32((u32)(0x1630690u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065d4a2: je 0x65d4af */ if (fZ) goto L_0065d4af;
L_0065d4a4:; BB(0x0065d4a4);
    /* 0065d4a4: mov ecx, dword ptr [0x1630690] */ r_ecx = R32((u32)(0x1630690u));
    /* 0065d4aa: call 0x65ca40 */ r_esp -= 4; W32(r_esp, 0x65d4afu); f_0065ca40();
L_0065d4af:; BB(0x0065d4af);
    /* 0065d4af: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0065d4b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065d4b3: mov ecx, dword ptr [0x16306a4] */ r_ecx = R32((u32)(0x16306a4u));
    /* 0065d4b9: add ecx, 0x1bc */ {  u32 a = r_ecx; u32 b = 0x1bcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0065d4bf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065d4c0: call dword ptr [0x6b21e4] */ { u32 t = R32((u32)(0x6b21e4u)); r_esp -= 4; W32(r_esp, 0x65d4c6u); call_ind(t); }
    /* 0065d4c6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065d4c9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065d4cb: jne 0x65d4d8 */ if (!fZ) goto L_0065d4d8;
L_0065d4cd:; BB(0x0065d4cd);
    /* 0065d4cd: mov ecx, dword ptr [0x16306a4] */ r_ecx = R32((u32)(0x16306a4u));
    /* 0065d4d3: call 0x65a290 */ r_esp -= 4; W32(r_esp, 0x65d4d8u); f_0065a290();
L_0065d4d8:; BB(0x0065d4d8);
    /* 0065d4d8: mov esp, ebp */ r_esp = r_ebp;
    /* 0065d4da: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065d4db: ret 4 */ FN_RET(0x0065d480); r_esp += 8; return;
}

void f_0065d4e0(void) /* LoadFaceDialog::vfunc38 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0065d4e0);
    /* 0065d4e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065d4e1: mov ebp, esp */ r_ebp = r_esp;
    /* 0065d4e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065d4e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0065d4e7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d4e9: push 0x6de9d0 */ { u32 v = 0x6de9d0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d4ee: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x65d4f3u); f_00630f40();
    /* 0065d4f3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065d4f6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065d4f7: push 0x6de9e4 */ { u32 v = 0x6de9e4u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d4fc: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x65d501u); f_00630f40();
    /* 0065d501: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065d504: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065d505: call 0x62ff10 */ r_esp -= 4; W32(r_esp, 0x65d50au); f_0062ff10();
    /* 0065d50a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065d50d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d50f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065d512: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0065d514: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065d517: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 0065d51a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65d51cu); call_ind(t); }
    /* 0065d51c: mov esp, ebp */ r_esp = r_ebp;
    /* 0065d51e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065d51f: ret  */ FN_RET(0x0065d4e0); r_esp += 4; return;
}

