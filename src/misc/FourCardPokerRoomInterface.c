#include "protos.h"

void f_005971d0(void) /* FourCardPokerRoomInterface::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005971d0);
    /* 005971d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005971d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005971d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005971d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005971d7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005971da: call 0x5e9e20 */ r_esp -= 4; W32(r_esp, 0x5971dfu); f_005e9e20();
    /* 005971df: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005971e2: mov dword ptr [eax], 0x6b3374 */ W32((u32)(r_eax), 0x6b3374u);
    /* 005971e8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005971eb: mov dword ptr [ecx], 0x6ce8dc */ W32((u32)(r_ecx), 0x6ce8dcu);
    /* 005971f1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005971f4: mov esp, ebp */ r_esp = r_ebp;
    /* 005971f6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005971f7: ret  */ FN_RET(0x005971d0); r_esp += 4; return;
}

void f_00597240(void) /* FourCardPokerRoomInterface::vfunc28 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00597240);
    /* 00597240: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00597241: mov ebp, esp */ r_ebp = r_esp;
    /* 00597243: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00597245: push 0x6a73de */ { u32 v = 0x6a73deu; r_esp -= 4; W32(r_esp, v); }
    /* 0059724a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00597250: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00597251: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00597252: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00597257: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00597259: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059725a: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0059725d: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00597263: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00597266: mov eax, dword ptr [0x7935ac] */ r_eax = R32((u32)(0x7935acu));
    /* 0059726b: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0059726e: jne 0x5972d9 */ if (!fZ) goto L_005972d9;
L_00597270:; BB(0x00597270);
    /* 00597270: mov ecx, dword ptr [0x7935ac] */ r_ecx = R32((u32)(0x7935acu));
    /* 00597276: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00597279: mov dword ptr [0x7935ac], ecx */ W32((u32)(0x7935acu), r_ecx);
    /* 0059727f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00597286: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 0059728c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0059728e: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00597294: mov edx, dword ptr [eax + 0x23c] */ r_edx = R32((u32)(r_eax+0x23cu));
    /* 0059729a: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x59729cu); call_ind(t); }
    /* 0059729c: mov dword ptr [0x74f7b4], eax */ W32((u32)(0x74f7b4u), r_eax);
    /* 005972a1: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 005972a6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005972a8: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005972ae: mov eax, dword ptr [edx + 0x23c] */ r_eax = R32((u32)(r_edx+0x23cu));
    /* 005972b4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5972b6u); call_ind(t); }
    /* 005972b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005972b7: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005972bd: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005972bf: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005972c5: mov eax, dword ptr [edx + 0x244] */ r_eax = R32((u32)(r_edx+0x244u));
    /* 005972cb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5972cdu); call_ind(t); }
    /* 005972cd: mov dword ptr [0x74f7b8], eax */ W32((u32)(0x74f7b8u), r_eax);
    /* 005972d2: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_005972d9:; BB(0x005972d9);
    /* 005972d9: cmp dword ptr [ebp + 8], 0x314d19 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x314d19u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005972e0: jne 0x5972e9 */ if (!fZ) goto L_005972e9;
L_005972e2:; BB(0x005972e2);
    /* 005972e2: mov eax, 0x74f7b0 */ r_eax = 0x74f7b0u;
    /* 005972e7: jmp 0x5972eb */ goto L_005972eb;
L_005972e9:; BB(0x005972e9);
    /* 005972e9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005972eb:; BB(0x005972eb);
    /* 005972eb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005972ee: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005972f5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005972f6: mov esp, ebp */ r_esp = r_ebp;
    /* 005972f8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005972f9: ret 4 */ FN_RET(0x00597240); r_esp += 8; return;
}

void f_00597300(void) /* FourCardPokerRoomInterface::vfunc30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00597300);
    /* 00597300: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00597301: mov ebp, esp */ r_ebp = r_esp;
    /* 00597303: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00597304: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00597307: mov eax, 0x74f228 */ r_eax = 0x74f228u;
    /* 0059730c: mov esp, ebp */ r_esp = r_ebp;
    /* 0059730e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059730f: ret  */ FN_RET(0x00597300); r_esp += 4; return;
}

void f_00597310(void) /* FourCardPokerRoomInterface::vfunc29 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00597310);
    /* 00597310: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00597311: mov ebp, esp */ r_ebp = r_esp;
    /* 00597313: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00597314: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00597317: mov eax, 0x74f2c8 */ r_eax = 0x74f2c8u;
    /* 0059731c: mov esp, ebp */ r_esp = r_ebp;
    /* 0059731e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059731f: ret  */ FN_RET(0x00597310); r_esp += 4; return;
}

void f_00597340(void) /* FourCardPokerRoomInterface::vfunc3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00597340);
    /* 00597340: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00597341: mov ebp, esp */ r_ebp = r_esp;
    /* 00597343: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00597344: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00597347: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059734b: jne 0x597351 */ if (!fZ) goto L_00597351;
L_0059734d:; BB(0x0059734d);
    /* 0059734d: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0059734f: jmp 0x59736d */ goto L_0059736d;
L_00597351:; BB(0x00597351);
    /* 00597351: push 0x6ce1b8 */ { u32 v = 0x6ce1b8u; r_esp -= 4; W32(r_esp, v); }
    /* 00597356: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x59735bu); f_00630f40();
    /* 0059735b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059735e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059735f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00597362: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00597363: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x597368u); f_00686d8e();
    /* 00597368: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059736b: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_0059736d:; BB(0x0059736d);
    /* 0059736d: mov esp, ebp */ r_esp = r_ebp;
    /* 0059736f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00597370: ret 4 */ FN_RET(0x00597340); r_esp += 8; return;
}

void f_00597380(void) /* FourCardPokerRoomInterface::vfunc11 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00597380);
    /* 00597380: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00597381: mov ebp, esp */ r_ebp = r_esp;
    /* 00597383: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00597384: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00597387: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059738b: jne 0x597391 */ if (!fZ) goto L_00597391;
L_0059738d:; BB(0x0059738d);
    /* 0059738d: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0059738f: jmp 0x5973d8 */ goto L_005973d8;
L_00597391:; BB(0x00597391);
    /* 00597391: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00597394: mov dword ptr [eax], 4 */ W32((u32)(r_eax), 0x4u);
    /* 0059739a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0059739d: mov dword ptr [ecx + 4], 1 */ W32((u32)(r_ecx+0x4u), 0x1u);
    /* 005973a4: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005973a7: mov dword ptr [edx + 8], 4 */ W32((u32)(r_edx+0x8u), 0x4u);
    /* 005973ae: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005973b1: mov dword ptr [eax + 0xc], 1 */ W32((u32)(r_eax+0xcu), 0x1u);
    /* 005973b8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005973bb: mov dword ptr [ecx + 0x10], 4 */ W32((u32)(r_ecx+0x10u), 0x4u);
    /* 005973c2: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005973c5: mov dword ptr [edx + 0x14], 0 */ W32((u32)(r_edx+0x14u), 0x0u);
    /* 005973cc: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005973cf: mov dword ptr [eax + 0x18], 3 */ W32((u32)(r_eax+0x18u), 0x3u);
    /* 005973d6: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_005973d8:; BB(0x005973d8);
    /* 005973d8: mov esp, ebp */ r_esp = r_ebp;
    /* 005973da: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005973db: ret 8 */ FN_RET(0x00597380); r_esp += 12; return;
}

void f_005973e0(void) /* FourCardPokerRoomInterface::vfunc4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005973e0);
    /* 005973e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005973e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005973e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005973e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005973e7: mov eax, 0x314d18 */ r_eax = 0x314d18u;
    /* 005973ec: mov esp, ebp */ r_esp = r_ebp;
    /* 005973ee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005973ef: ret  */ FN_RET(0x005973e0); r_esp += 4; return;
}

void f_005973f0(void) /* FourCardPokerRoomInterface::vfunc27 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005973f0);
    /* 005973f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005973f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005973f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005973f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005973f7: mov eax, 0x74f7bc */ r_eax = 0x74f7bcu;
    /* 005973fc: mov esp, ebp */ r_esp = r_ebp;
    /* 005973fe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005973ff: ret  */ FN_RET(0x005973f0); r_esp += 4; return;
}

void f_00597430(void) /* FourCardPokerRoomInterface::vfunc40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00597430);
    /* 00597430: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00597431: mov ebp, esp */ r_ebp = r_esp;
    /* 00597433: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00597434: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00597437: mov eax, 0xb */ r_eax = 0xbu;
    /* 0059743c: mov esp, ebp */ r_esp = r_ebp;
    /* 0059743e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059743f: ret  */ FN_RET(0x00597430); r_esp += 4; return;
}

void f_00597440(void) /* FourCardPokerRoomInterface::vfunc5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00597440);
    /* 00597440: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00597441: mov ebp, esp */ r_ebp = r_esp;
    /* 00597443: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00597444: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00597447: mov eax, 0x6cea34 */ r_eax = 0x6cea34u;
    /* 0059744c: mov esp, ebp */ r_esp = r_ebp;
    /* 0059744e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059744f: ret  */ FN_RET(0x00597440); r_esp += 4; return;
}

void f_00597450(void) /* FourCardPokerRoomInterface::vfunc12 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00597450);
    /* 00597450: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00597451: mov ebp, esp */ r_ebp = r_esp;
    /* 00597453: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00597454: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00597457: mov eax, 0x14 */ r_eax = 0x14u;
    /* 0059745c: mov esp, ebp */ r_esp = r_ebp;
    /* 0059745e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059745f: ret  */ FN_RET(0x00597450); r_esp += 4; return;
}

void f_00597470(void) /* FourCardPokerRoomInterface::vfunc38 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00597470);
    /* 00597470: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00597471: mov ebp, esp */ r_ebp = r_esp;
    /* 00597473: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00597476: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00597479: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0059747b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0059747e: call 0x63aae0 */ r_esp -= 4; W32(r_esp, 0x597483u); f_0063aae0();
    /* 00597483: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00597486: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00597489: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0059748c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059748f: add ecx, dword ptr [edx + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0xcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00597492: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00597495: add ecx, dword ptr [eax] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00597497: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0059749a: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 0059749c: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0059749f: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005974a2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005974a5: add ecx, dword ptr [edx + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005974a8: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005974ab: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 005974ae: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005974b1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005974b3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005974b6: add edx, dword ptr [eax + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005974b9: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005974bc: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 005974be: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005974c1: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005974c4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005974c7: add eax, dword ptr [ecx + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005974ca: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005974cd: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 005974d0: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 005974d3: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005974d5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005974d8: add ecx, dword ptr [edx + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0xcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005974db: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 005974de: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 005974e0: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 005974e3: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005974e6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005974e9: add edx, dword ptr [eax + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x10u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005974ec: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 005974ef: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 005974f2: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005974f4: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 005974fa: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005974fc: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00597502: mov edx, dword ptr [eax + 0x33c] */ r_edx = R32((u32)(r_eax+0x33cu));
    /* 00597508: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x59750au); call_ind(t); }
    /* 0059750a: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0059750d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059750f: je 0x59758f */ if (fZ) goto L_0059758f;
L_00597511:; BB(0x00597511);
    /* 00597511: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00597517: call 0x5f3bf0 */ r_esp -= 4; W32(r_esp, 0x59751cu); f_005f3bf0();
    /* 0059751c: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059751f: jne 0x59758f */ if (!fZ) goto L_0059758f;
L_00597521:; BB(0x00597521);
    /* 00597521: lea ecx, [ebp - 0xc] */ r_ecx = (u32)(r_ebp+0xfffffff4u);
    /* 00597524: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00597525: lea edx, [ebp - 0x14] */ r_edx = (u32)(r_ebp+0xffffffecu);
    /* 00597528: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00597529: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0059752c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059752d: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00597533: call 0x5e0c40 */ r_esp -= 4; W32(r_esp, 0x597538u); f_005e0c40();
    /* 00597538: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0059753b: add ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0059753e: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00597541: add ecx, dword ptr [edx] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00597543: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00597546: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 00597548: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0059754b: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0059754e: add edx, dword ptr [ebp - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00597551: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00597554: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 00597557: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0059755a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0059755c: add edx, dword ptr [ebp - 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0059755f: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00597562: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 00597564: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00597567: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0059756a: add edx, dword ptr [ebp - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0059756d: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00597570: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 00597573: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 00597576: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00597578: add edx, dword ptr [ebp - 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0059757b: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0059757e: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 00597580: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 00597583: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00597586: add edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00597589: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0059758c: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
L_0059758f:; BB(0x0059758f);
    /* 0059758f: mov esp, ebp */ r_esp = r_ebp;
    /* 00597591: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00597592: ret 0x10 */ FN_RET(0x00597470); r_esp += 20; return;
}

void f_005975a0(void) /* FourCardPokerRoomInterface::vfunc39 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005975a0);
    /* 005975a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005975a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005975a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005975a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005975a7: mov eax, 0x19 */ r_eax = 0x19u;
    /* 005975ac: mov esp, ebp */ r_esp = r_ebp;
    /* 005975ae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005975af: ret  */ FN_RET(0x005975a0); r_esp += 4; return;
}

void f_005975b0(void) /* FourCardPokerRoomInterface::vfunc31 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005975b0);
    /* 005975b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005975b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005975b3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005975b6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005975b9: cmp dword ptr [ebp + 0xc], 0x314d18 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x314d18u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005975c0: jne 0x597686 */ if (!fZ) goto L_00597686;
L_005975c6:; BB(0x005975c6);
    /* 005975c6: cmp dword ptr [ebp + 8], 0x1397 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x1397u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005975cd: jne 0x5975e5 */ if (!fZ) goto L_005975e5;
L_005975cf:; BB(0x005975cf);
    /* 005975cf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005975d1: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005975d3: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005975d9: call 0x5dbd00 */ r_esp -= 4; W32(r_esp, 0x5975deu); f_005dbd00();
    /* 005975de: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005975e0: jmp 0x5976af */ goto L_005976af;
L_005975e5:; BB(0x005975e5);
    /* 005975e5: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005975eb: call 0x5e2f90 */ r_esp -= 4; W32(r_esp, 0x5975f0u); f_005e2f90();
    /* 005975f0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005975f3: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005975f6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005975f9: sub ecx, 0x1392 */ {  u32 a = r_ecx; u32 b = 0x1392u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005975ff: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00597602: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00597606: ja 0x597656 */ if ((!fC&&!fZ)) goto L_00597656;
L_00597608:; BB(0x00597608);
    /* 00597608: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0059760b: jmp dword ptr [edx*4 + 0x5976b8] */ { u32 t = R32((u32)(r_edx*4+0x5976b8u)); switch (t) { case 0x597612u: goto L_00597612; case 0x597623u: goto L_00597623; case 0x597635u: goto L_00597635; case 0x597647u: goto L_00597647; default: UNSUP(0x0059760b, "jump table entry is not a known target"); } }
L_00597612:; BB(0x00597612);
    /* 00597612: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 00597617: mov dword ptr [eax + 0x4f0c], 5 */ W32((u32)(r_eax+0x4f0cu), 0x5u);
    /* 00597621: jmp 0x597656 */ goto L_00597656;
L_00597623:; BB(0x00597623);
    /* 00597623: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00597629: mov dword ptr [ecx + 0x4f0c], 0xa */ W32((u32)(r_ecx+0x4f0cu), 0xau);
    /* 00597633: jmp 0x597656 */ goto L_00597656;
L_00597635:; BB(0x00597635);
    /* 00597635: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 0059763b: mov dword ptr [edx + 0x4f0c], 0x19 */ W32((u32)(r_edx+0x4f0cu), 0x19u);
    /* 00597645: jmp 0x597656 */ goto L_00597656;
L_00597647:; BB(0x00597647);
    /* 00597647: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 0059764c: mov dword ptr [eax + 0x4f0c], 0x64 */ W32((u32)(r_eax+0x4f0cu), 0x64u);
L_00597656:; BB(0x00597656);
    /* 00597656: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00597658: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0059765a: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00597660: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00597662: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00597668: mov eax, dword ptr [edx + 0x334] */ r_eax = R32((u32)(r_edx+0x334u));
    /* 0059766e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x597670u); call_ind(t); }
    /* 00597670: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00597673: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00597675: jne 0x597682 */ if (!fZ) goto L_00597682;
L_00597677:; BB(0x00597677);
    /* 00597677: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0059767d: call 0x5e3130 */ r_esp -= 4; W32(r_esp, 0x597682u); f_005e3130();
L_00597682:; BB(0x00597682);
    /* 00597682: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00597684: jmp 0x5976af */ goto L_005976af;
L_00597686:; BB(0x00597686);
    /* 00597686: cmp dword ptr [ebp + 8], 0x314d18 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x314d18u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059768d: jne 0x5976ad */ if (!fZ) goto L_005976ad;
L_0059768f:; BB(0x0059768f);
    /* 0059768f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00597691: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00597693: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 00597699: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0059769b: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005976a1: mov edx, dword ptr [eax + 0x334] */ r_edx = R32((u32)(r_eax+0x334u));
    /* 005976a7: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5976a9u); call_ind(t); }
    /* 005976a9: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005976ab: jmp 0x5976af */ goto L_005976af;
L_005976ad:; BB(0x005976ad);
    /* 005976ad: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_005976af:; BB(0x005976af);
    /* 005976af: mov esp, ebp */ r_esp = r_ebp;
    /* 005976b1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005976b2: ret 8 */ FN_RET(0x005975b0); r_esp += 12; return;
}

void f_005976d0(void) /* FourCardPokerRoomInterface::vfunc23 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005976d0);
    /* 005976d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005976d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005976d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005976d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005976d7: cmp dword ptr [ebp + 8], 0x314d18 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x314d18u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005976de: jne 0x5976f1 */ if (!fZ) goto L_005976f1;
L_005976e0:; BB(0x005976e0);
    /* 005976e0: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005976e2: mov ecx, dword ptr [0x163069c] */ r_ecx = R32((u32)(0x163069cu));
    /* 005976e8: call 0x653bd0 */ r_esp -= 4; W32(r_esp, 0x5976edu); f_00653bd0();
    /* 005976ed: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005976ef: jmp 0x5976f3 */ goto L_005976f3;
L_005976f1:; BB(0x005976f1);
    /* 005976f1: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_005976f3:; BB(0x005976f3);
    /* 005976f3: mov esp, ebp */ r_esp = r_ebp;
    /* 005976f5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005976f6: ret 4 */ FN_RET(0x005976d0); r_esp += 8; return;
}

void f_00597700(void) /* FourCardPokerRoomInterface::vfunc24 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00597700);
    /* 00597700: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00597701: mov ebp, esp */ r_ebp = r_esp;
    /* 00597703: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00597704: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00597707: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00597709: mov esp, ebp */ r_esp = r_ebp;
    /* 0059770b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059770c: ret 4 */ FN_RET(0x00597700); r_esp += 8; return;
}

void f_00597710(void) /* FourCardPokerRoomInterface::vfunc25 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00597710);
    /* 00597710: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00597711: mov ebp, esp */ r_ebp = r_esp;
    /* 00597713: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00597714: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00597717: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00597719: mov esp, ebp */ r_esp = r_ebp;
    /* 0059771b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059771c: ret 4 */ FN_RET(0x00597710); r_esp += 8; return;
}

void f_00597720(void) /* FourCardPokerRoomInterface::vfunc22 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00597720);
    /* 00597720: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00597721: mov ebp, esp */ r_ebp = r_esp;
    /* 00597723: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00597724: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00597727: push 0x6b35b0 */ { u32 v = 0x6b35b0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059772c: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0059772e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00597731: call 0x5fb5a0 */ r_esp -= 4; W32(r_esp, 0x597736u); f_005fb5a0();
    /* 00597736: push 0x6b35b0 */ { u32 v = 0x6b35b0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059773b: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0059773d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00597740: call 0x5fb5a0 */ r_esp -= 4; W32(r_esp, 0x597745u); f_005fb5a0();
    /* 00597745: push 0x6b35b0 */ { u32 v = 0x6b35b0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059774a: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0059774c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0059774f: call 0x5fb5a0 */ r_esp -= 4; W32(r_esp, 0x597754u); f_005fb5a0();
    /* 00597754: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00597756: mov esp, ebp */ r_esp = r_ebp;
    /* 00597758: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00597759: ret 4 */ FN_RET(0x00597720); r_esp += 8; return;
}

void f_00597760(void) /* FourCardPokerRoomInterface::vfunc13 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00597760);
    /* 00597760: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00597761: mov ebp, esp */ r_ebp = r_esp;
    /* 00597763: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00597764: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00597767: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059776b: jne 0x597771 */ if (!fZ) goto L_00597771;
L_0059776d:; BB(0x0059776d);
    /* 0059776d: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0059776f: jmp 0x597780 */ goto L_00597780;
L_00597771:; BB(0x00597771);
    /* 00597771: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00597774: mov byte ptr [eax], 1 */ W8((u32)(r_eax), 0x1u);
    /* 00597777: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0059777a: mov byte ptr [ecx + 1], 1 */ W8((u32)(r_ecx+0x1u), 0x1u);
    /* 0059777e: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_00597780:; BB(0x00597780);
    /* 00597780: mov esp, ebp */ r_esp = r_ebp;
    /* 00597782: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00597783: ret 4 */ FN_RET(0x00597760); r_esp += 8; return;
}

void f_00597790(void) /* FourCardPokerRoomInterface::vfunc15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00597790);
    /* 00597790: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00597791: mov ebp, esp */ r_ebp = r_esp;
    /* 00597793: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00597794: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00597797: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059779b: jne 0x5977a1 */ if (!fZ) goto L_005977a1;
L_0059779d:; BB(0x0059779d);
    /* 0059779d: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0059779f: jmp 0x5977cb */ goto L_005977cb;
L_005977a1:; BB(0x005977a1);
    /* 005977a1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005977a4: mov dword ptr [eax + 4], 0 */ W32((u32)(r_eax+0x4u), 0x0u);
    /* 005977ab: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005977ae: mov dword ptr [ecx + 8], 0 */ W32((u32)(r_ecx+0x8u), 0x0u);
    /* 005977b5: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005977b8: mov dword ptr [edx + 0xc], 0 */ W32((u32)(r_edx+0xcu), 0x0u);
    /* 005977bf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005977c2: mov dword ptr [eax + 0x10], 0 */ W32((u32)(r_eax+0x10u), 0x0u);
    /* 005977c9: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_005977cb:; BB(0x005977cb);
    /* 005977cb: mov esp, ebp */ r_esp = r_ebp;
    /* 005977cd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005977ce: ret 4 */ FN_RET(0x00597790); r_esp += 8; return;
}

void f_005977f0(void) /* FourCardPokerRoomInterface::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005977f0);
    /* 005977f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005977f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005977f3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005977f5: push 0x6a7404 */ { u32 v = 0x6a7404u; r_esp -= 4; W32(r_esp, v); }
    /* 005977fa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00597800: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00597801: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00597804: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00597809: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0059780b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059780c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0059780f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00597815: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00597818: push 0x84 */ { u32 v = 0x84u; r_esp -= 4; W32(r_esp, v); }
    /* 0059781d: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x597822u); f_00686d82();
    /* 00597822: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00597825: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00597828: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0059782f: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00597833: je 0x597842 */ if (fZ) goto L_00597842;
L_00597835:; BB(0x00597835);
    /* 00597835: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00597838: call 0x595cb0 */ r_esp -= 4; W32(r_esp, 0x59783du); f_00595cb0();
    /* 0059783d: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00597840: jmp 0x597849 */ goto L_00597849;
L_00597842:; BB(0x00597842);
    /* 00597842: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_00597849:; BB(0x00597849);
    /* 00597849: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0059784c: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0059784f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00597856: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00597859: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0059785c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00597863: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00597864: mov esp, ebp */ r_esp = r_ebp;
    /* 00597866: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00597867: ret  */ FN_RET(0x005977f0); r_esp += 4; return;
}

void f_00597870(void) /* FourCardPokerRoomInterface::vfunc14 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00597870);
    /* 00597870: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00597871: mov ebp, esp */ r_ebp = r_esp;
    /* 00597873: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00597876: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00597879: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0059787b: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00597881: call 0x5de600 */ r_esp -= 4; W32(r_esp, 0x597886u); f_005de600();
    /* 00597886: mov ecx, eax */ r_ecx = r_eax;
    /* 00597888: call 0x63aae0 */ r_esp -= 4; W32(r_esp, 0x59788du); f_0063aae0();
    /* 0059788d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00597890: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00597894: je 0x59789c */ if (fZ) goto L_0059789c;
L_00597896:; BB(0x00597896);
    /* 00597896: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059789a: jne 0x5978a0 */ if (!fZ) goto L_005978a0;
L_0059789c:; BB(0x0059789c);
    /* 0059789c: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0059789e: jmp 0x5978b8 */ goto L_005978b8;
L_005978a0:; BB(0x005978a0);
    /* 005978a0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005978a3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005978a6: mov dl, byte ptr [ecx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 005978a8: mov byte ptr [eax], dl */ W8((u32)(r_eax), (u8)r_edx);
    /* 005978aa: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005978ad: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005978b0: mov dl, byte ptr [ecx + 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x1u))) & 0xffu);
    /* 005978b3: mov byte ptr [eax + 1], dl */ W8((u32)(r_eax+0x1u), (u8)r_edx);
    /* 005978b6: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_005978b8:; BB(0x005978b8);
    /* 005978b8: mov esp, ebp */ r_esp = r_ebp;
    /* 005978ba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005978bb: ret 4 */ FN_RET(0x00597870); r_esp += 8; return;
}

void f_005978d0(void) /* FourCardPokerRoomInterface::vfunc21 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005978d0);
    /* 005978d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005978d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005978d3: sub esp, 0x88 */ {  u32 a = r_esp; u32 b = 0x88u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005978d9: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005978de: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005978e0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005978e3: mov dword ptr [ebp - 0x88], ecx */ W32((u32)(r_ebp+0xffffff78u), r_ecx);
    /* 005978e9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005978eb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005978ed: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5978f2u); f_0064c8a0();
    /* 005978f2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005978f5: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 005978f8: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 005978fb: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005978fe: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00597901: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00597904: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 00597907: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00597909: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059790b: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x597910u); f_0064c8a0();
    /* 00597910: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00597913: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 00597916: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 00597919: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0059791c: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 0059791f: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 00597922: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00597925: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00597927: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0059792a: call 0x63aae0 */ r_esp -= 4; W32(r_esp, 0x59792fu); f_0063aae0();
    /* 0059792f: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00597932: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00597935: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00597936: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00597939: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059793a: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00597940: call 0x5e0690 */ r_esp -= 4; W32(r_esp, 0x597945u); f_005e0690();
    /* 00597945: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0059794b: call 0x5f3bf0 */ r_esp -= 4; W32(r_esp, 0x597950u); f_005f3bf0();
    /* 00597950: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00597953: jne 0x59796c */ if (!fZ) goto L_0059796c;
L_00597955:; BB(0x00597955);
    /* 00597955: lea eax, [ebp - 0x44] */ r_eax = (u32)(r_ebp+0xffffffbcu);
    /* 00597958: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00597959: lea ecx, [ebp - 0x4c] */ r_ecx = (u32)(r_ebp+0xffffffb4u);
    /* 0059795c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059795d: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00597960: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00597961: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00597967: call 0x5e0c40 */ r_esp -= 4; W32(r_esp, 0x59796cu); f_005e0c40();
L_0059796c:; BB(0x0059796c);
    /* 0059796c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0059796e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00597970: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00597972: lea eax, [ebp - 0x38] */ r_eax = (u32)(r_ebp+0xffffffc8u);
    /* 00597975: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00597976: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00597979: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059797a: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0059797d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059797e: lea eax, [ebp - 0x74] */ r_eax = (u32)(r_ebp+0xffffff8cu);
    /* 00597981: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00597982: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00597985: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00597986: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00597989: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059798a: lea eax, [ebp - 0x6c] */ r_eax = (u32)(r_ebp+0xffffff94u);
    /* 0059798d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059798e: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00597991: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 00597994: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00597995: mov eax, dword ptr [ecx + 0xc] */ r_eax = R32((u32)(r_ecx+0xcu));
    /* 00597998: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00597999: lea ecx, [ebp - 0x64] */ r_ecx = (u32)(r_ebp+0xffffff9cu);
    /* 0059799c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059799d: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005979a0: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005979a3: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x5979a8u); f_0064c5c0();
    /* 005979a8: mov ecx, eax */ r_ecx = r_eax;
    /* 005979aa: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x5979afu); f_0064c5c0();
    /* 005979af: mov ecx, eax */ r_ecx = r_eax;
    /* 005979b1: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x5979b6u); f_0064c5c0();
    /* 005979b6: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005979b9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005979ba: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005979bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005979bd: call 0x64c8d0 */ r_esp -= 4; W32(r_esp, 0x5979c2u); f_0064c8d0();
    /* 005979c2: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005979c5: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 005979c8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005979c9: push 0x6b3590 */ { u32 v = 0x6b3590u; r_esp -= 4; W32(r_esp, v); }
    /* 005979ce: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5979d3u); f_00630f40();
    /* 005979d3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005979d6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005979d7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005979d9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005979dc: call 0x654390 */ r_esp -= 4; W32(r_esp, 0x5979e1u); f_00654390();
    /* 005979e1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005979e3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005979e5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005979e7: lea edx, [ebp - 0x38] */ r_edx = (u32)(r_ebp+0xffffffc8u);
    /* 005979ea: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005979eb: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 005979ee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005979ef: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005979f2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005979f3: lea edx, [ebp - 0x7c] */ r_edx = (u32)(r_ebp+0xffffff84u);
    /* 005979f6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005979f7: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005979fa: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005979fd: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x597a02u); f_0064c5c0();
    /* 00597a02: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00597a05: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00597a06: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00597a08: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00597a09: call 0x64c8d0 */ r_esp -= 4; W32(r_esp, 0x597a0eu); f_0064c8d0();
    /* 00597a0e: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00597a11: lea eax, [ebp - 0x38] */ r_eax = (u32)(r_ebp+0xffffffc8u);
    /* 00597a14: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00597a15: push 0x6b356c */ { u32 v = 0x6b356cu; r_esp -= 4; W32(r_esp, v); }
    /* 00597a1a: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x597a1fu); f_00630f40();
    /* 00597a1f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00597a22: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00597a23: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00597a25: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00597a28: call 0x654390 */ r_esp -= 4; W32(r_esp, 0x597a2du); f_00654390();
    /* 00597a2d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00597a2f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00597a31: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00597a33: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 00597a36: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00597a37: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00597a3a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00597a3b: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00597a3e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00597a3f: lea ecx, [ebp - 0x84] */ r_ecx = (u32)(r_ebp+0xffffff7cu);
    /* 00597a45: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00597a46: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00597a49: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00597a4c: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x597a51u); f_0064c5c0();
    /* 00597a51: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00597a54: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00597a55: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00597a57: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00597a58: call 0x64c8d0 */ r_esp -= 4; W32(r_esp, 0x597a5du); f_0064c8d0();
    /* 00597a5d: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00597a60: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 00597a63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00597a64: push 0x6b3548 */ { u32 v = 0x6b3548u; r_esp -= 4; W32(r_esp, v); }
    /* 00597a69: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x597a6eu); f_00630f40();
    /* 00597a6e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00597a71: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00597a72: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00597a74: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00597a77: call 0x654390 */ r_esp -= 4; W32(r_esp, 0x597a7cu); f_00654390();
    /* 00597a7c: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00597a7e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00597a81: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00597a83: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x597a88u); f_00686d72();
    /* 00597a88: mov esp, ebp */ r_esp = r_ebp;
    /* 00597a8a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00597a8b: ret 8 */ FN_RET(0x005978d0); r_esp += 12; return;
}

