#include "protos.h"

void f_00433800(void) /* CrapsRoomInterface::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00433800);
    /* 00433800: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00433801: mov ebp, esp */ r_ebp = r_esp;
    /* 00433803: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00433804: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00433807: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043380a: call 0x5e9e20 */ r_esp -= 4; W32(r_esp, 0x43380fu); f_005e9e20();
    /* 0043380f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00433812: mov dword ptr [eax], 0x6b3374 */ W32((u32)(r_eax), 0x6b3374u);
    /* 00433818: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043381b: mov dword ptr [ecx], 0x6b7d8c */ W32((u32)(r_ecx), 0x6b7d8cu);
    /* 00433821: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00433824: mov esp, ebp */ r_esp = r_ebp;
    /* 00433826: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00433827: ret  */ FN_RET(0x00433800); r_esp += 4; return;
}

void f_00433830(void) /* CrapsRoomInterface::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00433830);
    /* 00433830: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00433831: mov ebp, esp */ r_ebp = r_esp;
    /* 00433833: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00433835: push 0x69e78b */ { u32 v = 0x69e78bu; r_esp -= 4; W32(r_esp, v); }
    /* 0043383a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00433840: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00433841: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00433844: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00433849: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043384b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043384c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0043384f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00433855: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00433858: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 0043385d: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x433862u); f_00686d82();
    /* 00433862: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00433865: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00433868: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0043386f: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00433873: je 0x433882 */ if (fZ) goto L_00433882;
L_00433875:; BB(0x00433875);
    /* 00433875: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00433878: call 0x431c70 */ r_esp -= 4; W32(r_esp, 0x43387du); f_00431c70();
    /* 0043387d: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00433880: jmp 0x433889 */ goto L_00433889;
L_00433882:; BB(0x00433882);
    /* 00433882: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_00433889:; BB(0x00433889);
    /* 00433889: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0043388c: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0043388f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00433896: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00433899: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043389c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004338a3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004338a4: mov esp, ebp */ r_esp = r_ebp;
    /* 004338a6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004338a7: ret  */ FN_RET(0x00433830); r_esp += 4; return;
}

void f_004338b0(void) /* CrapsRoomInterface::vfunc3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004338b0);
    /* 004338b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004338b1: mov ebp, esp */ r_ebp = r_esp;
    /* 004338b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004338b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004338b7: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004338bb: jne 0x4338c1 */ if (!fZ) goto L_004338c1;
L_004338bd:; BB(0x004338bd);
    /* 004338bd: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004338bf: jmp 0x4338dd */ goto L_004338dd;
L_004338c1:; BB(0x004338c1);
    /* 004338c1: push 0x6b6b0c */ { u32 v = 0x6b6b0cu; r_esp -= 4; W32(r_esp, v); }
    /* 004338c6: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4338cbu); f_00630f40();
    /* 004338cb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004338ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004338cf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004338d2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004338d3: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x4338d8u); f_00686d8e();
    /* 004338d8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004338db: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_004338dd:; BB(0x004338dd);
    /* 004338dd: mov esp, ebp */ r_esp = r_ebp;
    /* 004338df: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004338e0: ret 4 */ FN_RET(0x004338b0); r_esp += 8; return;
}

void f_00433910(void) /* CrapsRoomInterface::vfunc4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00433910);
    /* 00433910: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00433911: mov ebp, esp */ r_ebp = r_esp;
    /* 00433913: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00433914: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00433917: mov eax, 0x30dbd0 */ r_eax = 0x30dbd0u;
    /* 0043391c: mov esp, ebp */ r_esp = r_ebp;
    /* 0043391e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043391f: ret  */ FN_RET(0x00433910); r_esp += 4; return;
}

void f_00433920(void) /* CrapsRoomInterface::vfunc5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00433920);
    /* 00433920: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00433921: mov ebp, esp */ r_ebp = r_esp;
    /* 00433923: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00433924: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00433927: mov eax, 0x6b7ee4 */ r_eax = 0x6b7ee4u;
    /* 0043392c: mov esp, ebp */ r_esp = r_ebp;
    /* 0043392e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043392f: ret  */ FN_RET(0x00433920); r_esp += 4; return;
}

void f_00433940(void) /* CrapsRoomInterface::vfunc7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00433940);
    /* 00433940: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00433941: mov ebp, esp */ r_ebp = r_esp;
    /* 00433943: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00433944: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00433947: mov eax, 0x7131f4 */ r_eax = 0x7131f4u;
    /* 0043394c: mov esp, ebp */ r_esp = r_ebp;
    /* 0043394e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043394f: ret  */ FN_RET(0x00433940); r_esp += 4; return;
}

void f_00433950(void) /* CrapsRoomInterface::vfunc8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00433950);
    /* 00433950: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00433951: mov ebp, esp */ r_ebp = r_esp;
    /* 00433953: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00433954: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00433957: mov eax, 0x7131fc */ r_eax = 0x7131fcu;
    /* 0043395c: mov esp, ebp */ r_esp = r_ebp;
    /* 0043395e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043395f: ret  */ FN_RET(0x00433950); r_esp += 4; return;
}

void f_00433980(void) /* CrapsRoomInterface::vfunc11 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00433980);
    /* 00433980: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00433981: mov ebp, esp */ r_ebp = r_esp;
    /* 00433983: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00433984: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00433987: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043398b: jne 0x433991 */ if (!fZ) goto L_00433991;
L_0043398d:; BB(0x0043398d);
    /* 0043398d: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0043398f: jmp 0x4339d8 */ goto L_004339d8;
L_00433991:; BB(0x00433991);
    /* 00433991: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00433994: mov dword ptr [eax], 4 */ W32((u32)(r_eax), 0x4u);
    /* 0043399a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043399d: mov dword ptr [ecx + 4], 1 */ W32((u32)(r_ecx+0x4u), 0x1u);
    /* 004339a4: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004339a7: mov dword ptr [edx + 8], 4 */ W32((u32)(r_edx+0x8u), 0x4u);
    /* 004339ae: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004339b1: mov dword ptr [eax + 0xc], 1 */ W32((u32)(r_eax+0xcu), 0x1u);
    /* 004339b8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004339bb: mov dword ptr [ecx + 0x10], 4 */ W32((u32)(r_ecx+0x10u), 0x4u);
    /* 004339c2: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004339c5: mov dword ptr [edx + 0x14], 0 */ W32((u32)(r_edx+0x14u), 0x0u);
    /* 004339cc: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004339cf: mov dword ptr [eax + 0x18], 3 */ W32((u32)(r_eax+0x18u), 0x3u);
    /* 004339d6: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_004339d8:; BB(0x004339d8);
    /* 004339d8: mov esp, ebp */ r_esp = r_ebp;
    /* 004339da: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004339db: ret 8 */ FN_RET(0x00433980); r_esp += 12; return;
}

void f_004339e0(void) /* CrapsRoomInterface::vfunc12 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004339e0);
    /* 004339e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004339e1: mov ebp, esp */ r_ebp = r_esp;
    /* 004339e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004339e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004339e7: mov eax, 0x18 */ r_eax = 0x18u;
    /* 004339ec: mov esp, ebp */ r_esp = r_ebp;
    /* 004339ee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004339ef: ret  */ FN_RET(0x004339e0); r_esp += 4; return;
}

void f_004339f0(void) /* CrapsRoomInterface::vfunc13 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004339f0);
    /* 004339f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004339f1: mov ebp, esp */ r_ebp = r_esp;
    /* 004339f3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004339f6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004339f9: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004339fd: jne 0x433a03 */ if (!fZ) goto L_00433a03;
L_004339ff:; BB(0x004339ff);
    /* 004339ff: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00433a01: jmp 0x433a3b */ goto L_00433a3b;
L_00433a03:; BB(0x00433a03);
    /* 00433a03: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00433a06: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00433a09: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00433a0c: mov byte ptr [ecx], 1 */ W8((u32)(r_ecx), 0x1u);
    /* 00433a0f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00433a12: mov byte ptr [edx + 1], 1 */ W8((u32)(r_edx+0x1u), 0x1u);
    /* 00433a16: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00433a19: mov byte ptr [eax + 2], 1 */ W8((u32)(r_eax+0x2u), 0x1u);
    /* 00433a1d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00433a20: mov byte ptr [ecx + 3], 1 */ W8((u32)(r_ecx+0x3u), 0x1u);
    /* 00433a24: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00433a27: mov byte ptr [edx + 4], 0 */ W8((u32)(r_edx+0x4u), 0x0u);
    /* 00433a2b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00433a2e: mov byte ptr [eax + 5], 1 */ W8((u32)(r_eax+0x5u), 0x1u);
    /* 00433a32: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00433a35: mov byte ptr [ecx + 6], 0 */ W8((u32)(r_ecx+0x6u), 0x0u);
    /* 00433a39: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_00433a3b:; BB(0x00433a3b);
    /* 00433a3b: mov esp, ebp */ r_esp = r_ebp;
    /* 00433a3d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00433a3e: ret 4 */ FN_RET(0x004339f0); r_esp += 8; return;
}

void f_00433a50(void) /* CrapsRoomInterface::vfunc14 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00433a50);
    /* 00433a50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00433a51: mov ebp, esp */ r_ebp = r_esp;
    /* 00433a53: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00433a56: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00433a59: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00433a5b: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00433a61: call 0x5de600 */ r_esp -= 4; W32(r_esp, 0x433a66u); f_005de600();
    /* 00433a66: mov ecx, eax */ r_ecx = r_eax;
    /* 00433a68: call 0x63aae0 */ r_esp -= 4; W32(r_esp, 0x433a6du); f_0063aae0();
    /* 00433a6d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00433a70: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00433a73: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00433a76: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00433a7a: je 0x433a82 */ if (fZ) goto L_00433a82;
L_00433a7c:; BB(0x00433a7c);
    /* 00433a7c: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00433a80: jne 0x433a86 */ if (!fZ) goto L_00433a86;
L_00433a82:; BB(0x00433a82);
    /* 00433a82: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00433a84: jmp 0x433ada */ goto L_00433ada;
L_00433a86:; BB(0x00433a86);
    /* 00433a86: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00433a89: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00433a8c: mov al, byte ptr [edx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 00433a8e: mov byte ptr [ecx], al */ W8((u32)(r_ecx), (u8)r_eax);
    /* 00433a90: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00433a93: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00433a96: mov al, byte ptr [edx + 1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x1u))) & 0xffu);
    /* 00433a99: mov byte ptr [ecx + 1], al */ W8((u32)(r_ecx+0x1u), (u8)r_eax);
    /* 00433a9c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00433a9f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00433aa2: mov al, byte ptr [edx + 2] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x2u))) & 0xffu);
    /* 00433aa5: mov byte ptr [ecx + 2], al */ W8((u32)(r_ecx+0x2u), (u8)r_eax);
    /* 00433aa8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00433aab: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00433aae: mov al, byte ptr [edx + 3] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x3u))) & 0xffu);
    /* 00433ab1: mov byte ptr [ecx + 3], al */ W8((u32)(r_ecx+0x3u), (u8)r_eax);
    /* 00433ab4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00433ab7: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00433aba: mov al, byte ptr [edx + 4] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x4u))) & 0xffu);
    /* 00433abd: mov byte ptr [ecx + 4], al */ W8((u32)(r_ecx+0x4u), (u8)r_eax);
    /* 00433ac0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00433ac3: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00433ac6: mov al, byte ptr [edx + 5] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x5u))) & 0xffu);
    /* 00433ac9: mov byte ptr [ecx + 5], al */ W8((u32)(r_ecx+0x5u), (u8)r_eax);
    /* 00433acc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00433acf: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00433ad2: mov al, byte ptr [edx + 6] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x6u))) & 0xffu);
    /* 00433ad5: mov byte ptr [ecx + 6], al */ W8((u32)(r_ecx+0x6u), (u8)r_eax);
    /* 00433ad8: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_00433ada:; BB(0x00433ada);
    /* 00433ada: mov esp, ebp */ r_esp = r_ebp;
    /* 00433adc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00433add: ret 4 */ FN_RET(0x00433a50); r_esp += 8; return;
}

void f_00433ae0(void) /* CrapsRoomInterface::vfunc15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00433ae0);
    /* 00433ae0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00433ae1: mov ebp, esp */ r_ebp = r_esp;
    /* 00433ae3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00433ae6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00433ae9: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00433aed: jne 0x433af3 */ if (!fZ) goto L_00433af3;
L_00433aef:; BB(0x00433aef);
    /* 00433aef: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00433af1: jmp 0x433b23 */ goto L_00433b23;
L_00433af3:; BB(0x00433af3);
    /* 00433af3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00433af6: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00433af9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00433afc: mov dword ptr [ecx + 8], 0 */ W32((u32)(r_ecx+0x8u), 0x0u);
    /* 00433b03: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00433b06: mov dword ptr [edx + 0xc], 0 */ W32((u32)(r_edx+0xcu), 0x0u);
    /* 00433b0d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00433b10: mov dword ptr [eax + 0x10], 0 */ W32((u32)(r_eax+0x10u), 0x0u);
    /* 00433b17: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00433b1a: mov dword ptr [ecx + 0x14], 0 */ W32((u32)(r_ecx+0x14u), 0x0u);
    /* 00433b21: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_00433b23:; BB(0x00433b23);
    /* 00433b23: mov esp, ebp */ r_esp = r_ebp;
    /* 00433b25: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00433b26: ret 4 */ FN_RET(0x00433ae0); r_esp += 8; return;
}

void f_00433b50(void) /* CrapsRoomInterface::vfunc38 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00433b50);
    /* 00433b50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00433b51: mov ebp, esp */ r_ebp = r_esp;
    /* 00433b53: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00433b56: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00433b59: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00433b5b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00433b5e: call 0x63aae0 */ r_esp -= 4; W32(r_esp, 0x433b63u); f_0063aae0();
    /* 00433b63: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00433b66: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00433b69: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00433b6c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00433b6f: add ecx, dword ptr [edx + 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x10u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00433b72: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00433b75: add ecx, dword ptr [eax] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00433b77: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00433b7a: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 00433b7c: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00433b7f: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00433b82: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00433b85: add ecx, dword ptr [edx + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0xcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00433b88: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00433b8b: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 00433b8e: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00433b91: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00433b93: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00433b96: add edx, dword ptr [eax + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00433b99: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00433b9c: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 00433b9e: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00433ba1: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00433ba4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00433ba7: add eax, dword ptr [ecx + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0xcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00433baa: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00433bad: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00433bb0: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00433bb3: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00433bb5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00433bb8: add ecx, dword ptr [edx + 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x10u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00433bbb: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00433bbe: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 00433bc0: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 00433bc3: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00433bc6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00433bc9: add edx, dword ptr [eax + 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x14u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00433bcc: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 00433bcf: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 00433bd2: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00433bd4: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 00433bda: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00433bdc: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00433be2: mov edx, dword ptr [eax + 0x33c] */ r_edx = R32((u32)(r_eax+0x33cu));
    /* 00433be8: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x433beau); call_ind(t); }
    /* 00433bea: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00433bed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00433bef: je 0x433c6f */ if (fZ) goto L_00433c6f;
L_00433bf1:; BB(0x00433bf1);
    /* 00433bf1: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00433bf7: call 0x5f3bf0 */ r_esp -= 4; W32(r_esp, 0x433bfcu); f_005f3bf0();
    /* 00433bfc: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00433bff: jne 0x433c6f */ if (!fZ) goto L_00433c6f;
L_00433c01:; BB(0x00433c01);
    /* 00433c01: lea ecx, [ebp - 0xc] */ r_ecx = (u32)(r_ebp+0xfffffff4u);
    /* 00433c04: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00433c05: lea edx, [ebp - 0x14] */ r_edx = (u32)(r_ebp+0xffffffecu);
    /* 00433c08: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00433c09: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00433c0c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00433c0d: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00433c13: call 0x5e0c40 */ r_esp -= 4; W32(r_esp, 0x433c18u); f_005e0c40();
    /* 00433c18: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00433c1b: add ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00433c1e: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00433c21: add ecx, dword ptr [edx] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00433c23: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00433c26: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 00433c28: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00433c2b: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00433c2e: add edx, dword ptr [ebp - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00433c31: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00433c34: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 00433c37: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00433c3a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00433c3c: add edx, dword ptr [ebp - 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00433c3f: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00433c42: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 00433c44: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00433c47: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00433c4a: add edx, dword ptr [ebp - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00433c4d: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00433c50: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 00433c53: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 00433c56: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00433c58: add edx, dword ptr [ebp - 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00433c5b: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00433c5e: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 00433c60: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 00433c63: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00433c66: add edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00433c69: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00433c6c: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
L_00433c6f:; BB(0x00433c6f);
    /* 00433c6f: mov esp, ebp */ r_esp = r_ebp;
    /* 00433c71: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00433c72: ret 0x10 */ FN_RET(0x00433b50); r_esp += 20; return;
}

void f_00433c80(void) /* CrapsRoomInterface::vfunc21 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00433c80);
    /* 00433c80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00433c81: mov ebp, esp */ r_ebp = r_esp;
    /* 00433c83: sub esp, 0x88 */ {  u32 a = r_esp; u32 b = 0x88u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00433c89: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00433c8e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00433c90: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00433c93: mov dword ptr [ebp - 0x88], ecx */ W32((u32)(r_ebp+0xffffff78u), r_ecx);
    /* 00433c99: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00433c9b: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00433c9e: call 0x63aae0 */ r_esp -= 4; W32(r_esp, 0x433ca3u); f_0063aae0();
    /* 00433ca3: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00433ca6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00433ca8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00433caa: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x433cafu); f_0064c8a0();
    /* 00433caf: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00433cb2: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 00433cb5: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 00433cb8: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 00433cbb: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00433cbe: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00433cc1: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 00433cc4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00433cc6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00433cc8: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x433ccdu); f_0064c8a0();
    /* 00433ccd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00433cd0: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 00433cd3: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 00433cd6: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00433cd9: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 00433cdc: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 00433cdf: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00433ce2: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00433ce5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00433ce6: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00433ce9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00433cea: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00433cf0: call 0x5e0690 */ r_esp -= 4; W32(r_esp, 0x433cf5u); f_005e0690();
    /* 00433cf5: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00433cfb: call 0x5f3bf0 */ r_esp -= 4; W32(r_esp, 0x433d00u); f_005f3bf0();
    /* 00433d00: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00433d03: jne 0x433d1c */ if (!fZ) goto L_00433d1c;
L_00433d05:; BB(0x00433d05);
    /* 00433d05: lea eax, [ebp - 0x44] */ r_eax = (u32)(r_ebp+0xffffffbcu);
    /* 00433d08: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00433d09: lea ecx, [ebp - 0x4c] */ r_ecx = (u32)(r_ebp+0xffffffb4u);
    /* 00433d0c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00433d0d: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00433d10: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00433d11: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00433d17: call 0x5e0c40 */ r_esp -= 4; W32(r_esp, 0x433d1cu); f_005e0c40();
L_00433d1c:; BB(0x00433d1c);
    /* 00433d1c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00433d1e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00433d20: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00433d22: lea eax, [ebp - 0x38] */ r_eax = (u32)(r_ebp+0xffffffc8u);
    /* 00433d25: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00433d26: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00433d29: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00433d2a: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00433d2d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00433d2e: lea eax, [ebp - 0x74] */ r_eax = (u32)(r_ebp+0xffffff8cu);
    /* 00433d31: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00433d32: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00433d35: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00433d36: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00433d39: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00433d3a: lea eax, [ebp - 0x6c] */ r_eax = (u32)(r_ebp+0xffffff94u);
    /* 00433d3d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00433d3e: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00433d41: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 00433d44: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00433d45: mov eax, dword ptr [ecx + 0x10] */ r_eax = R32((u32)(r_ecx+0x10u));
    /* 00433d48: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00433d49: lea ecx, [ebp - 0x64] */ r_ecx = (u32)(r_ebp+0xffffff9cu);
    /* 00433d4c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00433d4d: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00433d50: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00433d53: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x433d58u); f_0064c5c0();
    /* 00433d58: mov ecx, eax */ r_ecx = r_eax;
    /* 00433d5a: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x433d5fu); f_0064c5c0();
    /* 00433d5f: mov ecx, eax */ r_ecx = r_eax;
    /* 00433d61: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x433d66u); f_0064c5c0();
    /* 00433d66: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00433d69: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00433d6a: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00433d6c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00433d6d: call 0x64c8d0 */ r_esp -= 4; W32(r_esp, 0x433d72u); f_0064c8d0();
    /* 00433d72: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00433d75: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 00433d78: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00433d79: push 0x6b3590 */ { u32 v = 0x6b3590u; r_esp -= 4; W32(r_esp, v); }
    /* 00433d7e: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x433d83u); f_00630f40();
    /* 00433d83: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00433d86: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00433d87: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00433d89: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00433d8c: call 0x654390 */ r_esp -= 4; W32(r_esp, 0x433d91u); f_00654390();
    /* 00433d91: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00433d93: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00433d95: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00433d97: lea edx, [ebp - 0x38] */ r_edx = (u32)(r_ebp+0xffffffc8u);
    /* 00433d9a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00433d9b: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00433d9e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00433d9f: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00433da2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00433da3: lea edx, [ebp - 0x7c] */ r_edx = (u32)(r_ebp+0xffffff84u);
    /* 00433da6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00433da7: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00433daa: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00433dad: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x433db2u); f_0064c5c0();
    /* 00433db2: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00433db5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00433db6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00433db8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00433db9: call 0x64c8d0 */ r_esp -= 4; W32(r_esp, 0x433dbeu); f_0064c8d0();
    /* 00433dbe: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00433dc1: lea eax, [ebp - 0x38] */ r_eax = (u32)(r_ebp+0xffffffc8u);
    /* 00433dc4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00433dc5: push 0x6b356c */ { u32 v = 0x6b356cu; r_esp -= 4; W32(r_esp, v); }
    /* 00433dca: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x433dcfu); f_00630f40();
    /* 00433dcf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00433dd2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00433dd3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00433dd5: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00433dd8: call 0x654390 */ r_esp -= 4; W32(r_esp, 0x433dddu); f_00654390();
    /* 00433ddd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00433ddf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00433de1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00433de3: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 00433de6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00433de7: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00433dea: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00433deb: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00433dee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00433def: lea ecx, [ebp - 0x84] */ r_ecx = (u32)(r_ebp+0xffffff7cu);
    /* 00433df5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00433df6: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00433df9: add ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00433dfc: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x433e01u); f_0064c5c0();
    /* 00433e01: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00433e04: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00433e05: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00433e07: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00433e08: call 0x64c8d0 */ r_esp -= 4; W32(r_esp, 0x433e0du); f_0064c8d0();
    /* 00433e0d: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00433e10: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 00433e13: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00433e14: push 0x6b3548 */ { u32 v = 0x6b3548u; r_esp -= 4; W32(r_esp, v); }
    /* 00433e19: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x433e1eu); f_00630f40();
    /* 00433e1e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00433e21: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00433e22: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00433e24: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00433e27: call 0x654390 */ r_esp -= 4; W32(r_esp, 0x433e2cu); f_00654390();
    /* 00433e2c: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00433e2e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00433e31: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00433e33: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x433e38u); f_00686d72();
    /* 00433e38: mov esp, ebp */ r_esp = r_ebp;
    /* 00433e3a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00433e3b: ret 8 */ FN_RET(0x00433c80); r_esp += 12; return;
}

void f_00433e40(void) /* CrapsRoomInterface::vfunc22 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00433e40);
    /* 00433e40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00433e41: mov ebp, esp */ r_ebp = r_esp;
    /* 00433e43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00433e44: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00433e47: push 0x6b35b0 */ { u32 v = 0x6b35b0u; r_esp -= 4; W32(r_esp, v); }
    /* 00433e4c: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00433e4e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00433e51: call 0x5fb5a0 */ r_esp -= 4; W32(r_esp, 0x433e56u); f_005fb5a0();
    /* 00433e56: push 0x6b35b0 */ { u32 v = 0x6b35b0u; r_esp -= 4; W32(r_esp, v); }
    /* 00433e5b: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00433e5d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00433e60: call 0x5fb5a0 */ r_esp -= 4; W32(r_esp, 0x433e65u); f_005fb5a0();
    /* 00433e65: push 0x6b35b0 */ { u32 v = 0x6b35b0u; r_esp -= 4; W32(r_esp, v); }
    /* 00433e6a: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00433e6c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00433e6f: call 0x5fb5a0 */ r_esp -= 4; W32(r_esp, 0x433e74u); f_005fb5a0();
    /* 00433e74: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00433e76: mov esp, ebp */ r_esp = r_ebp;
    /* 00433e78: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00433e79: ret 4 */ FN_RET(0x00433e40); r_esp += 8; return;
}

void f_00433e80(void) /* CrapsRoomInterface::vfunc23 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00433e80);
    /* 00433e80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00433e81: mov ebp, esp */ r_ebp = r_esp;
    /* 00433e83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00433e84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00433e87: cmp dword ptr [ebp + 8], 0x30dbd0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x30dbd0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00433e8e: jne 0x433ea1 */ if (!fZ) goto L_00433ea1;
L_00433e90:; BB(0x00433e90);
    /* 00433e90: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00433e92: mov ecx, dword ptr [0x163069c] */ r_ecx = R32((u32)(0x163069cu));
    /* 00433e98: call 0x653bd0 */ r_esp -= 4; W32(r_esp, 0x433e9du); f_00653bd0();
    /* 00433e9d: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00433e9f: jmp 0x433ea3 */ goto L_00433ea3;
L_00433ea1:; BB(0x00433ea1);
    /* 00433ea1: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_00433ea3:; BB(0x00433ea3);
    /* 00433ea3: mov esp, ebp */ r_esp = r_ebp;
    /* 00433ea5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00433ea6: ret 4 */ FN_RET(0x00433e80); r_esp += 8; return;
}

void f_00433eb0(void) /* CrapsRoomInterface::vfunc24 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00433eb0);
    /* 00433eb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00433eb1: mov ebp, esp */ r_ebp = r_esp;
    /* 00433eb3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00433eb4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00433eb7: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00433eb9: mov esp, ebp */ r_esp = r_ebp;
    /* 00433ebb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00433ebc: ret 4 */ FN_RET(0x00433eb0); r_esp += 8; return;
}

void f_00433ec0(void) /* CrapsRoomInterface::vfunc25 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00433ec0);
    /* 00433ec0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00433ec1: mov ebp, esp */ r_ebp = r_esp;
    /* 00433ec3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00433ec4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00433ec7: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00433ec9: mov esp, ebp */ r_esp = r_ebp;
    /* 00433ecb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00433ecc: ret 4 */ FN_RET(0x00433ec0); r_esp += 8; return;
}

void f_00433ed0(void) /* CrapsRoomInterface::vfunc27 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00433ed0);
    /* 00433ed0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00433ed1: mov ebp, esp */ r_ebp = r_esp;
    /* 00433ed3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00433ed4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00433ed7: mov eax, 0x713200 */ r_eax = 0x713200u;
    /* 00433edc: mov esp, ebp */ r_esp = r_ebp;
    /* 00433ede: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00433edf: ret  */ FN_RET(0x00433ed0); r_esp += 4; return;
}

void f_00433ee0(void) /* CrapsRoomInterface::vfunc28 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00433ee0);
    /* 00433ee0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00433ee1: mov ebp, esp */ r_ebp = r_esp;
    /* 00433ee3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00433ee5: push 0x69e7b4 */ { u32 v = 0x69e7b4u; r_esp -= 4; W32(r_esp, v); }
    /* 00433eea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00433ef0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00433ef1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00433ef2: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00433ef7: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00433ef9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00433efa: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00433efd: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00433f03: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00433f06: mov eax, dword ptr [0x7906e4] */ r_eax = R32((u32)(0x7906e4u));
    /* 00433f0b: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00433f0e: jne 0x433f79 */ if (!fZ) goto L_00433f79;
L_00433f10:; BB(0x00433f10);
    /* 00433f10: mov ecx, dword ptr [0x7906e4] */ r_ecx = R32((u32)(0x7906e4u));
    /* 00433f16: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00433f19: mov dword ptr [0x7906e4], ecx */ W32((u32)(0x7906e4u), r_ecx);
    /* 00433f1f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00433f26: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 00433f2c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00433f2e: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00433f34: mov edx, dword ptr [eax + 0x23c] */ r_edx = R32((u32)(r_eax+0x23cu));
    /* 00433f3a: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x433f3cu); call_ind(t); }
    /* 00433f3c: mov dword ptr [0x713224], eax */ W32((u32)(0x713224u), r_eax);
    /* 00433f41: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 00433f46: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00433f48: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00433f4e: mov eax, dword ptr [edx + 0x23c] */ r_eax = R32((u32)(r_edx+0x23cu));
    /* 00433f54: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x433f56u); call_ind(t); }
    /* 00433f56: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00433f57: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00433f5d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00433f5f: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00433f65: mov eax, dword ptr [edx + 0x244] */ r_eax = R32((u32)(r_edx+0x244u));
    /* 00433f6b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x433f6du); call_ind(t); }
    /* 00433f6d: mov dword ptr [0x713228], eax */ W32((u32)(0x713228u), r_eax);
    /* 00433f72: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_00433f79:; BB(0x00433f79);
    /* 00433f79: cmp dword ptr [ebp + 8], 0x30dbd1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x30dbd1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00433f80: jne 0x433f8b */ if (!fZ) goto L_00433f8b;
L_00433f82:; BB(0x00433f82);
    /* 00433f82: mov eax, 0x713220 */ r_eax = 0x713220u;
    /* 00433f87: jmp 0x433f8d */ goto L_00433f8d;
L_00433f8b:; BB(0x00433f8b);
    /* 00433f8b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00433f8d:; BB(0x00433f8d);
    /* 00433f8d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00433f90: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00433f97: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00433f98: mov esp, ebp */ r_esp = r_ebp;
    /* 00433f9a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00433f9b: ret 4 */ FN_RET(0x00433ee0); r_esp += 8; return;
}

void f_00433fa0(void) /* CrapsRoomInterface::vfunc29 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00433fa0);
    /* 00433fa0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00433fa1: mov ebp, esp */ r_ebp = r_esp;
    /* 00433fa3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00433fa4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00433fa7: mov eax, 0x712ab0 */ r_eax = 0x712ab0u;
    /* 00433fac: mov esp, ebp */ r_esp = r_ebp;
    /* 00433fae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00433faf: ret  */ FN_RET(0x00433fa0); r_esp += 4; return;
}

void f_00433fb0(void) /* CrapsRoomInterface::vfunc30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00433fb0);
    /* 00433fb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00433fb1: mov ebp, esp */ r_ebp = r_esp;
    /* 00433fb3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00433fb4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00433fb7: mov eax, 0x713100 */ r_eax = 0x713100u;
    /* 00433fbc: mov esp, ebp */ r_esp = r_ebp;
    /* 00433fbe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00433fbf: ret  */ FN_RET(0x00433fb0); r_esp += 4; return;
}

void f_00433fc0(void) /* CrapsRoomInterface::vfunc31 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00433fc0);
    /* 00433fc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00433fc1: mov ebp, esp */ r_ebp = r_esp;
    /* 00433fc3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00433fc6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00433fc9: cmp dword ptr [ebp + 0xc], 0x30dbd0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x30dbd0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00433fd0: jne 0x434096 */ if (!fZ) goto L_00434096;
L_00433fd6:; BB(0x00433fd6);
    /* 00433fd6: cmp dword ptr [ebp + 8], 0x1397 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x1397u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00433fdd: jne 0x433ff5 */ if (!fZ) goto L_00433ff5;
L_00433fdf:; BB(0x00433fdf);
    /* 00433fdf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00433fe1: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00433fe3: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 00433fe9: call 0x5dbd00 */ r_esp -= 4; W32(r_esp, 0x433feeu); f_005dbd00();
    /* 00433fee: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00433ff0: jmp 0x4340bf */ goto L_004340bf;
L_00433ff5:; BB(0x00433ff5);
    /* 00433ff5: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00433ffb: call 0x5e2f90 */ r_esp -= 4; W32(r_esp, 0x434000u); f_005e2f90();
    /* 00434000: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00434003: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00434006: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00434009: sub ecx, 0x1392 */ {  u32 a = r_ecx; u32 b = 0x1392u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0043400f: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00434012: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00434016: ja 0x434066 */ if ((!fC&&!fZ)) goto L_00434066;
L_00434018:; BB(0x00434018);
    /* 00434018: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043401b: jmp dword ptr [edx*4 + 0x4340c8] */ { u32 t = R32((u32)(r_edx*4+0x4340c8u)); switch (t) { case 0x434022u: goto L_00434022; case 0x434033u: goto L_00434033; case 0x434045u: goto L_00434045; case 0x434057u: goto L_00434057; default: UNSUP(0x0043401b, "jump table entry is not a known target"); } }
L_00434022:; BB(0x00434022);
    /* 00434022: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 00434027: mov dword ptr [eax + 0x4f0c], 5 */ W32((u32)(r_eax+0x4f0cu), 0x5u);
    /* 00434031: jmp 0x434066 */ goto L_00434066;
L_00434033:; BB(0x00434033);
    /* 00434033: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00434039: mov dword ptr [ecx + 0x4f0c], 0xa */ W32((u32)(r_ecx+0x4f0cu), 0xau);
    /* 00434043: jmp 0x434066 */ goto L_00434066;
L_00434045:; BB(0x00434045);
    /* 00434045: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 0043404b: mov dword ptr [edx + 0x4f0c], 0x19 */ W32((u32)(r_edx+0x4f0cu), 0x19u);
    /* 00434055: jmp 0x434066 */ goto L_00434066;
L_00434057:; BB(0x00434057);
    /* 00434057: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 0043405c: mov dword ptr [eax + 0x4f0c], 0x64 */ W32((u32)(r_eax+0x4f0cu), 0x64u);
L_00434066:; BB(0x00434066);
    /* 00434066: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00434068: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0043406a: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00434070: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00434072: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00434078: mov eax, dword ptr [edx + 0x334] */ r_eax = R32((u32)(r_edx+0x334u));
    /* 0043407e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x434080u); call_ind(t); }
    /* 00434080: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00434083: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00434085: jne 0x434092 */ if (!fZ) goto L_00434092;
L_00434087:; BB(0x00434087);
    /* 00434087: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0043408d: call 0x5e3130 */ r_esp -= 4; W32(r_esp, 0x434092u); f_005e3130();
L_00434092:; BB(0x00434092);
    /* 00434092: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00434094: jmp 0x4340bf */ goto L_004340bf;
L_00434096:; BB(0x00434096);
    /* 00434096: cmp dword ptr [ebp + 8], 0x30dbd0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x30dbd0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043409d: jne 0x4340bd */ if (!fZ) goto L_004340bd;
L_0043409f:; BB(0x0043409f);
    /* 0043409f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004340a1: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004340a3: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 004340a9: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004340ab: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 004340b1: mov edx, dword ptr [eax + 0x334] */ r_edx = R32((u32)(r_eax+0x334u));
    /* 004340b7: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4340b9u); call_ind(t); }
    /* 004340b9: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 004340bb: jmp 0x4340bf */ goto L_004340bf;
L_004340bd:; BB(0x004340bd);
    /* 004340bd: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_004340bf:; BB(0x004340bf);
    /* 004340bf: mov esp, ebp */ r_esp = r_ebp;
    /* 004340c1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004340c2: ret 8 */ FN_RET(0x00433fc0); r_esp += 12; return;
}

void f_00534d50(void) /* CrapsRoomInterface::vfunc40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534d50);
    /* 00534d50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534d51: mov ebp, esp */ r_ebp = r_esp;
    /* 00534d53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00534d54: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00534d57: mov eax, 0xc */ r_eax = 0xcu;
    /* 00534d5c: mov esp, ebp */ r_esp = r_ebp;
    /* 00534d5e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00534d5f: ret  */ FN_RET(0x00534d50); r_esp += 4; return;
}

