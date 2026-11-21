#include "protos.h"

void f_00527170(void) /* RouletteRoomInterface::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00527170);
    /* 00527170: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00527171: mov ebp, esp */ r_ebp = r_esp;
    /* 00527173: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00527174: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00527177: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0052717a: call 0x5e9e20 */ r_esp -= 4; W32(r_esp, 0x52717fu); f_005e9e20();
    /* 0052717f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00527182: mov dword ptr [eax], 0x6b3374 */ W32((u32)(r_eax), 0x6b3374u);
    /* 00527188: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0052718b: mov dword ptr [ecx], 0x6c35f4 */ W32((u32)(r_ecx), 0x6c35f4u);
    /* 00527191: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00527194: mov esp, ebp */ r_esp = r_ebp;
    /* 00527196: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00527197: ret  */ FN_RET(0x00527170); r_esp += 4; return;
}

void f_005271a0(void) /* RouletteRoomInterface::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005271a0);
    /* 005271a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005271a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005271a3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005271a5: push 0x6a419b */ { u32 v = 0x6a419bu; r_esp -= 4; W32(r_esp, v); }
    /* 005271aa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005271b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005271b1: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005271b4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005271b9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005271bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005271bc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005271bf: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005271c5: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005271c8: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 005271cd: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5271d2u); f_00686d82();
    /* 005271d2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005271d5: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005271d8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005271df: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005271e3: je 0x5271f2 */ if (fZ) goto L_005271f2;
L_005271e5:; BB(0x005271e5);
    /* 005271e5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005271e8: call 0x525d20 */ r_esp -= 4; W32(r_esp, 0x5271edu); f_00525d20();
    /* 005271ed: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005271f0: jmp 0x5271f9 */ goto L_005271f9;
L_005271f2:; BB(0x005271f2);
    /* 005271f2: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_005271f9:; BB(0x005271f9);
    /* 005271f9: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005271fc: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005271ff: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00527206: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00527209: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052720c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00527213: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00527214: mov esp, ebp */ r_esp = r_ebp;
    /* 00527216: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00527217: ret  */ FN_RET(0x005271a0); r_esp += 4; return;
}

void f_00527220(void) /* RouletteRoomInterface::vfunc3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00527220);
    /* 00527220: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00527221: mov ebp, esp */ r_ebp = r_esp;
    /* 00527223: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00527224: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00527227: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052722b: jne 0x527231 */ if (!fZ) goto L_00527231;
L_0052722d:; BB(0x0052722d);
    /* 0052722d: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0052722f: jmp 0x52724d */ goto L_0052724d;
L_00527231:; BB(0x00527231);
    /* 00527231: push 0x6c2fb0 */ { u32 v = 0x6c2fb0u; r_esp -= 4; W32(r_esp, v); }
    /* 00527236: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x52723bu); f_00630f40();
    /* 0052723b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052723e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052723f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00527242: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00527243: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x527248u); f_00686d8e();
    /* 00527248: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052724b: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_0052724d:; BB(0x0052724d);
    /* 0052724d: mov esp, ebp */ r_esp = r_ebp;
    /* 0052724f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00527250: ret 4 */ FN_RET(0x00527220); r_esp += 8; return;
}

void f_00527280(void) /* RouletteRoomInterface::vfunc4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00527280);
    /* 00527280: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00527281: mov ebp, esp */ r_ebp = r_esp;
    /* 00527283: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00527284: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00527287: mov eax, 0x30eb70 */ r_eax = 0x30eb70u;
    /* 0052728c: mov esp, ebp */ r_esp = r_ebp;
    /* 0052728e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052728f: ret  */ FN_RET(0x00527280); r_esp += 4; return;
}

void f_00527290(void) /* RouletteRoomInterface::vfunc5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00527290);
    /* 00527290: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00527291: mov ebp, esp */ r_ebp = r_esp;
    /* 00527293: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00527294: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00527297: mov eax, 0x6c374c */ r_eax = 0x6c374cu;
    /* 0052729c: mov esp, ebp */ r_esp = r_ebp;
    /* 0052729e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052729f: ret  */ FN_RET(0x00527290); r_esp += 4; return;
}

void f_005272b0(void) /* RouletteRoomInterface::vfunc7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005272b0);
    /* 005272b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005272b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005272b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005272b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005272b7: mov eax, 0x7228a4 */ r_eax = 0x7228a4u;
    /* 005272bc: mov esp, ebp */ r_esp = r_ebp;
    /* 005272be: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005272bf: ret  */ FN_RET(0x005272b0); r_esp += 4; return;
}

void f_005272c0(void) /* RouletteRoomInterface::vfunc8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005272c0);
    /* 005272c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005272c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005272c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005272c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005272c7: mov eax, 0x7228b0 */ r_eax = 0x7228b0u;
    /* 005272cc: mov esp, ebp */ r_esp = r_ebp;
    /* 005272ce: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005272cf: ret  */ FN_RET(0x005272c0); r_esp += 4; return;
}

void f_005272f0(void) /* RouletteRoomInterface::vfunc11 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005272f0);
    /* 005272f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005272f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005272f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005272f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005272f7: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005272fb: jne 0x527301 */ if (!fZ) goto L_00527301;
L_005272fd:; BB(0x005272fd);
    /* 005272fd: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005272ff: jmp 0x527348 */ goto L_00527348;
L_00527301:; BB(0x00527301);
    /* 00527301: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00527304: mov dword ptr [eax], 4 */ W32((u32)(r_eax), 0x4u);
    /* 0052730a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0052730d: mov dword ptr [ecx + 4], 1 */ W32((u32)(r_ecx+0x4u), 0x1u);
    /* 00527314: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00527317: mov dword ptr [edx + 8], 4 */ W32((u32)(r_edx+0x8u), 0x4u);
    /* 0052731e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00527321: mov dword ptr [eax + 0xc], 1 */ W32((u32)(r_eax+0xcu), 0x1u);
    /* 00527328: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0052732b: mov dword ptr [ecx + 0x10], 4 */ W32((u32)(r_ecx+0x10u), 0x4u);
    /* 00527332: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00527335: mov dword ptr [edx + 0x14], 0 */ W32((u32)(r_edx+0x14u), 0x0u);
    /* 0052733c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0052733f: mov dword ptr [eax + 0x18], 3 */ W32((u32)(r_eax+0x18u), 0x3u);
    /* 00527346: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_00527348:; BB(0x00527348);
    /* 00527348: mov esp, ebp */ r_esp = r_ebp;
    /* 0052734a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052734b: ret 8 */ FN_RET(0x005272f0); r_esp += 12; return;
}

void f_00527350(void) /* RouletteRoomInterface::vfunc12 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00527350);
    /* 00527350: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00527351: mov ebp, esp */ r_ebp = r_esp;
    /* 00527353: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00527354: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00527357: mov eax, 0x14 */ r_eax = 0x14u;
    /* 0052735c: mov esp, ebp */ r_esp = r_ebp;
    /* 0052735e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052735f: ret  */ FN_RET(0x00527350); r_esp += 4; return;
}

void f_00527360(void) /* RouletteRoomInterface::vfunc13 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00527360);
    /* 00527360: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00527361: mov ebp, esp */ r_ebp = r_esp;
    /* 00527363: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00527366: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00527369: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052736d: jne 0x527373 */ if (!fZ) goto L_00527373;
L_0052736f:; BB(0x0052736f);
    /* 0052736f: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00527371: jmp 0x527388 */ goto L_00527388;
L_00527373:; BB(0x00527373);
    /* 00527373: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00527376: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00527379: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0052737c: mov byte ptr [ecx], 1 */ W8((u32)(r_ecx), 0x1u);
    /* 0052737f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00527382: mov byte ptr [edx + 1], 1 */ W8((u32)(r_edx+0x1u), 0x1u);
    /* 00527386: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_00527388:; BB(0x00527388);
    /* 00527388: mov esp, ebp */ r_esp = r_ebp;
    /* 0052738a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052738b: ret 4 */ FN_RET(0x00527360); r_esp += 8; return;
}

void f_00527390(void) /* RouletteRoomInterface::vfunc14 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00527390);
    /* 00527390: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00527391: mov ebp, esp */ r_ebp = r_esp;
    /* 00527393: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00527396: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00527399: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052739b: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005273a1: call 0x5de600 */ r_esp -= 4; W32(r_esp, 0x5273a6u); f_005de600();
    /* 005273a6: mov ecx, eax */ r_ecx = r_eax;
    /* 005273a8: call 0x63aae0 */ r_esp -= 4; W32(r_esp, 0x5273adu); f_0063aae0();
    /* 005273ad: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005273b0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005273b3: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005273b6: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005273ba: je 0x5273c2 */ if (fZ) goto L_005273c2;
L_005273bc:; BB(0x005273bc);
    /* 005273bc: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005273c0: jne 0x5273c6 */ if (!fZ) goto L_005273c6;
L_005273c2:; BB(0x005273c2);
    /* 005273c2: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005273c4: jmp 0x5273de */ goto L_005273de;
L_005273c6:; BB(0x005273c6);
    /* 005273c6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005273c9: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005273cc: mov al, byte ptr [edx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 005273ce: mov byte ptr [ecx], al */ W8((u32)(r_ecx), (u8)r_eax);
    /* 005273d0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005273d3: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005273d6: mov al, byte ptr [edx + 1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x1u))) & 0xffu);
    /* 005273d9: mov byte ptr [ecx + 1], al */ W8((u32)(r_ecx+0x1u), (u8)r_eax);
    /* 005273dc: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_005273de:; BB(0x005273de);
    /* 005273de: mov esp, ebp */ r_esp = r_ebp;
    /* 005273e0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005273e1: ret 4 */ FN_RET(0x00527390); r_esp += 8; return;
}

void f_005273f0(void) /* RouletteRoomInterface::vfunc15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005273f0);
    /* 005273f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005273f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005273f3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005273f6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005273f9: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005273fd: jne 0x527403 */ if (!fZ) goto L_00527403;
L_005273ff:; BB(0x005273ff);
    /* 005273ff: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00527401: jmp 0x527433 */ goto L_00527433;
L_00527403:; BB(0x00527403);
    /* 00527403: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00527406: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00527409: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0052740c: mov dword ptr [ecx + 4], 0 */ W32((u32)(r_ecx+0x4u), 0x0u);
    /* 00527413: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00527416: mov dword ptr [edx + 8], 0 */ W32((u32)(r_edx+0x8u), 0x0u);
    /* 0052741d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00527420: mov dword ptr [eax + 0xc], 0 */ W32((u32)(r_eax+0xcu), 0x0u);
    /* 00527427: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0052742a: mov dword ptr [ecx + 0x10], 0 */ W32((u32)(r_ecx+0x10u), 0x0u);
    /* 00527431: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_00527433:; BB(0x00527433);
    /* 00527433: mov esp, ebp */ r_esp = r_ebp;
    /* 00527435: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00527436: ret 4 */ FN_RET(0x005273f0); r_esp += 8; return;
}

void f_00527450(void) /* RouletteRoomInterface::vfunc20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00527450);
    /* 00527450: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00527451: mov ebp, esp */ r_ebp = r_esp;
    /* 00527453: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00527454: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00527457: mov eax, 0xb */ r_eax = 0xbu;
    /* 0052745c: mov esp, ebp */ r_esp = r_ebp;
    /* 0052745e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052745f: ret  */ FN_RET(0x00527450); r_esp += 4; return;
}

void f_00527460(void) /* RouletteRoomInterface::vfunc38 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00527460);
    /* 00527460: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00527461: mov ebp, esp */ r_ebp = r_esp;
    /* 00527463: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00527466: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00527469: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0052746b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0052746e: call 0x63aae0 */ r_esp -= 4; W32(r_esp, 0x527473u); f_0063aae0();
    /* 00527473: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00527476: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00527479: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0052747c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0052747f: add ecx, dword ptr [edx + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0xcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00527482: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00527485: add ecx, dword ptr [eax] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00527487: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0052748a: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 0052748c: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0052748f: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00527492: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00527495: add ecx, dword ptr [edx + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00527498: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0052749b: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 0052749e: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005274a1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005274a3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005274a6: add edx, dword ptr [eax + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005274a9: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005274ac: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 005274ae: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005274b1: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005274b4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005274b7: add eax, dword ptr [ecx + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005274ba: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005274bd: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 005274c0: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 005274c3: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005274c5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005274c8: add ecx, dword ptr [edx + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0xcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005274cb: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 005274ce: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 005274d0: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 005274d3: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005274d6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005274d9: add edx, dword ptr [eax + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x10u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005274dc: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 005274df: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 005274e2: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005274e4: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 005274ea: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005274ec: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005274f2: mov edx, dword ptr [eax + 0x33c] */ r_edx = R32((u32)(r_eax+0x33cu));
    /* 005274f8: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5274fau); call_ind(t); }
    /* 005274fa: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005274fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005274ff: je 0x52757f */ if (fZ) goto L_0052757f;
L_00527501:; BB(0x00527501);
    /* 00527501: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00527507: call 0x5f3bf0 */ r_esp -= 4; W32(r_esp, 0x52750cu); f_005f3bf0();
    /* 0052750c: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052750f: jne 0x52757f */ if (!fZ) goto L_0052757f;
L_00527511:; BB(0x00527511);
    /* 00527511: lea ecx, [ebp - 0xc] */ r_ecx = (u32)(r_ebp+0xfffffff4u);
    /* 00527514: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00527515: lea edx, [ebp - 0x14] */ r_edx = (u32)(r_ebp+0xffffffecu);
    /* 00527518: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00527519: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0052751c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052751d: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00527523: call 0x5e0c40 */ r_esp -= 4; W32(r_esp, 0x527528u); f_005e0c40();
    /* 00527528: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0052752b: add ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0052752e: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00527531: add ecx, dword ptr [edx] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00527533: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00527536: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 00527538: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0052753b: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0052753e: add edx, dword ptr [ebp - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00527541: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00527544: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 00527547: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0052754a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0052754c: add edx, dword ptr [ebp - 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0052754f: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00527552: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 00527554: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00527557: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0052755a: add edx, dword ptr [ebp - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0052755d: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00527560: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 00527563: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 00527566: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00527568: add edx, dword ptr [ebp - 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0052756b: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0052756e: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 00527570: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 00527573: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00527576: add edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00527579: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0052757c: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
L_0052757f:; BB(0x0052757f);
    /* 0052757f: mov esp, ebp */ r_esp = r_ebp;
    /* 00527581: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00527582: ret 0x10 */ FN_RET(0x00527460); r_esp += 20; return;
}

void f_00527590(void) /* RouletteRoomInterface::vfunc21 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00527590);
    /* 00527590: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00527591: mov ebp, esp */ r_ebp = r_esp;
    /* 00527593: sub esp, 0x88 */ {  u32 a = r_esp; u32 b = 0x88u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00527599: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0052759e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005275a0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005275a3: mov dword ptr [ebp - 0x88], ecx */ W32((u32)(r_ebp+0xffffff78u), r_ecx);
    /* 005275a9: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 005275ab: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005275ae: call 0x63aae0 */ r_esp -= 4; W32(r_esp, 0x5275b3u); f_0063aae0();
    /* 005275b3: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 005275b6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005275b8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005275ba: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5275bfu); f_0064c8a0();
    /* 005275bf: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005275c2: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 005275c5: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 005275c8: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005275cb: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 005275ce: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005275d1: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 005275d4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005275d6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005275d8: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5275ddu); f_0064c8a0();
    /* 005275dd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005275e0: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 005275e3: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 005275e6: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 005275e9: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 005275ec: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 005275ef: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 005275f2: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005275f5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005275f6: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005275f9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005275fa: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00527600: call 0x5e0690 */ r_esp -= 4; W32(r_esp, 0x527605u); f_005e0690();
    /* 00527605: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0052760b: call 0x5f3bf0 */ r_esp -= 4; W32(r_esp, 0x527610u); f_005f3bf0();
    /* 00527610: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00527613: jne 0x52762c */ if (!fZ) goto L_0052762c;
L_00527615:; BB(0x00527615);
    /* 00527615: lea eax, [ebp - 0x44] */ r_eax = (u32)(r_ebp+0xffffffbcu);
    /* 00527618: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00527619: lea ecx, [ebp - 0x4c] */ r_ecx = (u32)(r_ebp+0xffffffb4u);
    /* 0052761c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052761d: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00527620: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00527621: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00527627: call 0x5e0c40 */ r_esp -= 4; W32(r_esp, 0x52762cu); f_005e0c40();
L_0052762c:; BB(0x0052762c);
    /* 0052762c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0052762e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00527630: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00527632: lea eax, [ebp - 0x38] */ r_eax = (u32)(r_ebp+0xffffffc8u);
    /* 00527635: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00527636: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00527639: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052763a: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0052763d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052763e: lea eax, [ebp - 0x74] */ r_eax = (u32)(r_ebp+0xffffff8cu);
    /* 00527641: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00527642: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00527645: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00527646: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00527649: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052764a: lea eax, [ebp - 0x6c] */ r_eax = (u32)(r_ebp+0xffffff94u);
    /* 0052764d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052764e: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00527651: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 00527654: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00527655: mov eax, dword ptr [ecx + 0xc] */ r_eax = R32((u32)(r_ecx+0xcu));
    /* 00527658: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00527659: lea ecx, [ebp - 0x64] */ r_ecx = (u32)(r_ebp+0xffffff9cu);
    /* 0052765c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052765d: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00527660: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00527663: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x527668u); f_0064c5c0();
    /* 00527668: mov ecx, eax */ r_ecx = r_eax;
    /* 0052766a: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x52766fu); f_0064c5c0();
    /* 0052766f: mov ecx, eax */ r_ecx = r_eax;
    /* 00527671: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x527676u); f_0064c5c0();
    /* 00527676: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00527679: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052767a: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0052767c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052767d: call 0x64c8d0 */ r_esp -= 4; W32(r_esp, 0x527682u); f_0064c8d0();
    /* 00527682: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00527685: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 00527688: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00527689: push 0x6b3590 */ { u32 v = 0x6b3590u; r_esp -= 4; W32(r_esp, v); }
    /* 0052768e: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x527693u); f_00630f40();
    /* 00527693: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00527696: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00527697: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00527699: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0052769c: call 0x654390 */ r_esp -= 4; W32(r_esp, 0x5276a1u); f_00654390();
    /* 005276a1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005276a3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005276a5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005276a7: lea edx, [ebp - 0x38] */ r_edx = (u32)(r_ebp+0xffffffc8u);
    /* 005276aa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005276ab: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 005276ae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005276af: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005276b2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005276b3: lea edx, [ebp - 0x7c] */ r_edx = (u32)(r_ebp+0xffffff84u);
    /* 005276b6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005276b7: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005276ba: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005276bd: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x5276c2u); f_0064c5c0();
    /* 005276c2: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005276c5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005276c6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005276c8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005276c9: call 0x64c8d0 */ r_esp -= 4; W32(r_esp, 0x5276ceu); f_0064c8d0();
    /* 005276ce: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005276d1: lea eax, [ebp - 0x38] */ r_eax = (u32)(r_ebp+0xffffffc8u);
    /* 005276d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005276d5: push 0x6b356c */ { u32 v = 0x6b356cu; r_esp -= 4; W32(r_esp, v); }
    /* 005276da: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5276dfu); f_00630f40();
    /* 005276df: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005276e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005276e3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005276e5: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005276e8: call 0x654390 */ r_esp -= 4; W32(r_esp, 0x5276edu); f_00654390();
    /* 005276ed: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005276ef: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005276f1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005276f3: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 005276f6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005276f7: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005276fa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005276fb: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 005276fe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005276ff: lea ecx, [ebp - 0x84] */ r_ecx = (u32)(r_ebp+0xffffff7cu);
    /* 00527705: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00527706: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00527709: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0052770c: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x527711u); f_0064c5c0();
    /* 00527711: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00527714: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00527715: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00527717: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00527718: call 0x64c8d0 */ r_esp -= 4; W32(r_esp, 0x52771du); f_0064c8d0();
    /* 0052771d: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00527720: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 00527723: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00527724: push 0x6b3548 */ { u32 v = 0x6b3548u; r_esp -= 4; W32(r_esp, v); }
    /* 00527729: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x52772eu); f_00630f40();
    /* 0052772e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00527731: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00527732: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00527734: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00527737: call 0x654390 */ r_esp -= 4; W32(r_esp, 0x52773cu); f_00654390();
    /* 0052773c: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0052773e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00527741: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00527743: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x527748u); f_00686d72();
    /* 00527748: mov esp, ebp */ r_esp = r_ebp;
    /* 0052774a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052774b: ret 8 */ FN_RET(0x00527590); r_esp += 12; return;
}

void f_00527750(void) /* RouletteRoomInterface::vfunc22 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00527750);
    /* 00527750: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00527751: mov ebp, esp */ r_ebp = r_esp;
    /* 00527753: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00527754: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00527757: push 0x6b35b0 */ { u32 v = 0x6b35b0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052775c: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0052775e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00527761: call 0x5fb5a0 */ r_esp -= 4; W32(r_esp, 0x527766u); f_005fb5a0();
    /* 00527766: push 0x6b35b0 */ { u32 v = 0x6b35b0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052776b: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0052776d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00527770: call 0x5fb5a0 */ r_esp -= 4; W32(r_esp, 0x527775u); f_005fb5a0();
    /* 00527775: push 0x6b35b0 */ { u32 v = 0x6b35b0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052777a: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0052777c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0052777f: call 0x5fb5a0 */ r_esp -= 4; W32(r_esp, 0x527784u); f_005fb5a0();
    /* 00527784: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00527786: mov esp, ebp */ r_esp = r_ebp;
    /* 00527788: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00527789: ret 4 */ FN_RET(0x00527750); r_esp += 8; return;
}

void f_00527790(void) /* RouletteRoomInterface::vfunc23 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00527790);
    /* 00527790: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00527791: mov ebp, esp */ r_ebp = r_esp;
    /* 00527793: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00527794: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00527797: cmp dword ptr [ebp + 8], 0x30eb70 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x30eb70u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052779e: jne 0x5277b1 */ if (!fZ) goto L_005277b1;
L_005277a0:; BB(0x005277a0);
    /* 005277a0: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 005277a2: mov ecx, dword ptr [0x163069c] */ r_ecx = R32((u32)(0x163069cu));
    /* 005277a8: call 0x653bd0 */ r_esp -= 4; W32(r_esp, 0x5277adu); f_00653bd0();
    /* 005277ad: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005277af: jmp 0x5277b3 */ goto L_005277b3;
L_005277b1:; BB(0x005277b1);
    /* 005277b1: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_005277b3:; BB(0x005277b3);
    /* 005277b3: mov esp, ebp */ r_esp = r_ebp;
    /* 005277b5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005277b6: ret 4 */ FN_RET(0x00527790); r_esp += 8; return;
}

void f_005277c0(void) /* RouletteRoomInterface::vfunc24 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005277c0);
    /* 005277c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005277c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005277c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005277c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005277c7: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005277c9: mov esp, ebp */ r_esp = r_ebp;
    /* 005277cb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005277cc: ret 4 */ FN_RET(0x005277c0); r_esp += 8; return;
}

void f_005277d0(void) /* RouletteRoomInterface::vfunc25 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005277d0);
    /* 005277d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005277d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005277d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005277d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005277d7: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005277d9: mov esp, ebp */ r_esp = r_ebp;
    /* 005277db: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005277dc: ret 4 */ FN_RET(0x005277d0); r_esp += 8; return;
}

void f_005277e0(void) /* RouletteRoomInterface::vfunc27 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005277e0);
    /* 005277e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005277e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005277e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005277e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005277e7: mov eax, 0x7228b4 */ r_eax = 0x7228b4u;
    /* 005277ec: mov esp, ebp */ r_esp = r_ebp;
    /* 005277ee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005277ef: ret  */ FN_RET(0x005277e0); r_esp += 4; return;
}

void f_005277f0(void) /* RouletteRoomInterface::vfunc28 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005277f0);
    /* 005277f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005277f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005277f3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005277f5: push 0x6a41c4 */ { u32 v = 0x6a41c4u; r_esp -= 4; W32(r_esp, v); }
    /* 005277fa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00527800: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00527801: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00527802: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00527807: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00527809: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052780a: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0052780d: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00527813: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00527816: mov eax, dword ptr [0x793384] */ r_eax = R32((u32)(0x793384u));
    /* 0052781b: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0052781e: jne 0x527889 */ if (!fZ) goto L_00527889;
L_00527820:; BB(0x00527820);
    /* 00527820: mov ecx, dword ptr [0x793384] */ r_ecx = R32((u32)(0x793384u));
    /* 00527826: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00527829: mov dword ptr [0x793384], ecx */ W32((u32)(0x793384u), r_ecx);
    /* 0052782f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00527836: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 0052783c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0052783e: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00527844: mov edx, dword ptr [eax + 0x23c] */ r_edx = R32((u32)(r_eax+0x23cu));
    /* 0052784a: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x52784cu); call_ind(t); }
    /* 0052784c: mov dword ptr [0x7228d8], eax */ W32((u32)(0x7228d8u), r_eax);
    /* 00527851: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 00527856: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00527858: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0052785e: mov eax, dword ptr [edx + 0x23c] */ r_eax = R32((u32)(r_edx+0x23cu));
    /* 00527864: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x527866u); call_ind(t); }
    /* 00527866: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00527867: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0052786d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0052786f: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00527875: mov eax, dword ptr [edx + 0x244] */ r_eax = R32((u32)(r_edx+0x244u));
    /* 0052787b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52787du); call_ind(t); }
    /* 0052787d: mov dword ptr [0x7228dc], eax */ W32((u32)(0x7228dcu), r_eax);
    /* 00527882: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_00527889:; BB(0x00527889);
    /* 00527889: cmp dword ptr [ebp + 8], 0x30eb71 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x30eb71u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00527890: jne 0x52789b */ if (!fZ) goto L_0052789b;
L_00527892:; BB(0x00527892);
    /* 00527892: mov eax, 0x7228d4 */ r_eax = 0x7228d4u;
    /* 00527897: jmp 0x52789d */ goto L_0052789d;
L_0052789b:; BB(0x0052789b);
    /* 0052789b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0052789d:; BB(0x0052789d);
    /* 0052789d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005278a0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005278a7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005278a8: mov esp, ebp */ r_esp = r_ebp;
    /* 005278aa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005278ab: ret 4 */ FN_RET(0x005277f0); r_esp += 8; return;
}

void f_005278b0(void) /* RouletteRoomInterface::vfunc29 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005278b0);
    /* 005278b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005278b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005278b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005278b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005278b7: mov eax, 0x722350 */ r_eax = 0x722350u;
    /* 005278bc: mov esp, ebp */ r_esp = r_ebp;
    /* 005278be: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005278bf: ret  */ FN_RET(0x005278b0); r_esp += 4; return;
}

void f_005278c0(void) /* RouletteRoomInterface::vfunc30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005278c0);
    /* 005278c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005278c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005278c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005278c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005278c7: mov eax, 0x722810 */ r_eax = 0x722810u;
    /* 005278cc: mov esp, ebp */ r_esp = r_ebp;
    /* 005278ce: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005278cf: ret  */ FN_RET(0x005278c0); r_esp += 4; return;
}

void f_005278d0(void) /* RouletteRoomInterface::vfunc31 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005278d0);
    /* 005278d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005278d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005278d3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005278d6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005278d9: cmp dword ptr [ebp + 0xc], 0x30eb70 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x30eb70u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005278e0: jne 0x5279a6 */ if (!fZ) goto L_005279a6;
L_005278e6:; BB(0x005278e6);
    /* 005278e6: cmp dword ptr [ebp + 8], 0x1397 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x1397u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005278ed: jne 0x527905 */ if (!fZ) goto L_00527905;
L_005278ef:; BB(0x005278ef);
    /* 005278ef: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005278f1: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 005278f3: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005278f9: call 0x5dbd00 */ r_esp -= 4; W32(r_esp, 0x5278feu); f_005dbd00();
    /* 005278fe: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00527900: jmp 0x5279cf */ goto L_005279cf;
L_00527905:; BB(0x00527905);
    /* 00527905: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0052790b: call 0x5e2f90 */ r_esp -= 4; W32(r_esp, 0x527910u); f_005e2f90();
    /* 00527910: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00527913: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00527916: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00527919: sub ecx, 0x1392 */ {  u32 a = r_ecx; u32 b = 0x1392u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0052791f: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00527922: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00527926: ja 0x527976 */ if ((!fC&&!fZ)) goto L_00527976;
L_00527928:; BB(0x00527928);
    /* 00527928: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0052792b: jmp dword ptr [edx*4 + 0x5279d8] */ { u32 t = R32((u32)(r_edx*4+0x5279d8u)); switch (t) { case 0x527932u: goto L_00527932; case 0x527943u: goto L_00527943; case 0x527955u: goto L_00527955; case 0x527967u: goto L_00527967; default: UNSUP(0x0052792b, "jump table entry is not a known target"); } }
L_00527932:; BB(0x00527932);
    /* 00527932: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 00527937: mov dword ptr [eax + 0x4f0c], 5 */ W32((u32)(r_eax+0x4f0cu), 0x5u);
    /* 00527941: jmp 0x527976 */ goto L_00527976;
L_00527943:; BB(0x00527943);
    /* 00527943: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00527949: mov dword ptr [ecx + 0x4f0c], 0xa */ W32((u32)(r_ecx+0x4f0cu), 0xau);
    /* 00527953: jmp 0x527976 */ goto L_00527976;
L_00527955:; BB(0x00527955);
    /* 00527955: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 0052795b: mov dword ptr [edx + 0x4f0c], 0x19 */ W32((u32)(r_edx+0x4f0cu), 0x19u);
    /* 00527965: jmp 0x527976 */ goto L_00527976;
L_00527967:; BB(0x00527967);
    /* 00527967: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 0052796c: mov dword ptr [eax + 0x4f0c], 0x64 */ W32((u32)(r_eax+0x4f0cu), 0x64u);
L_00527976:; BB(0x00527976);
    /* 00527976: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00527978: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0052797a: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00527980: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00527982: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00527988: mov eax, dword ptr [edx + 0x334] */ r_eax = R32((u32)(r_edx+0x334u));
    /* 0052798e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x527990u); call_ind(t); }
    /* 00527990: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00527993: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00527995: jne 0x5279a2 */ if (!fZ) goto L_005279a2;
L_00527997:; BB(0x00527997);
    /* 00527997: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0052799d: call 0x5e3130 */ r_esp -= 4; W32(r_esp, 0x5279a2u); f_005e3130();
L_005279a2:; BB(0x005279a2);
    /* 005279a2: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005279a4: jmp 0x5279cf */ goto L_005279cf;
L_005279a6:; BB(0x005279a6);
    /* 005279a6: cmp dword ptr [ebp + 8], 0x30eb70 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x30eb70u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005279ad: jne 0x5279cd */ if (!fZ) goto L_005279cd;
L_005279af:; BB(0x005279af);
    /* 005279af: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005279b1: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 005279b3: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 005279b9: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005279bb: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005279c1: mov edx, dword ptr [eax + 0x334] */ r_edx = R32((u32)(r_eax+0x334u));
    /* 005279c7: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5279c9u); call_ind(t); }
    /* 005279c9: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005279cb: jmp 0x5279cf */ goto L_005279cf;
L_005279cd:; BB(0x005279cd);
    /* 005279cd: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_005279cf:; BB(0x005279cf);
    /* 005279cf: mov esp, ebp */ r_esp = r_ebp;
    /* 005279d1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005279d2: ret 8 */ FN_RET(0x005278d0); r_esp += 12; return;
}

