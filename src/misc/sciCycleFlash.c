#include "protos.h"

void f_00601110(void) /* sciCycleFlash::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00601110);
    /* 00601110: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00601111: mov ebp, esp */ r_ebp = r_esp;
    /* 00601113: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00601114: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00601117: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0060111a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060111b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060111e: call 0x600420 */ r_esp -= 4; W32(r_esp, 0x601123u); f_00600420();
    /* 00601123: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00601126: mov dword ptr [ecx], 0x6d7554 */ W32((u32)(r_ecx), 0x6d7554u);
    /* 0060112c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060112f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00601132: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 00601135: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00601138: mov dl, byte ptr [ebp + 0xc] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xcu))) & 0xffu);
    /* 0060113b: mov byte ptr [ecx + 0x20], dl */ W8((u32)(r_ecx+0x20u), (u8)r_edx);
    /* 0060113e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00601141: mov cl, byte ptr [ebp + 0x10] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x10u))) & 0xffu);
    /* 00601144: mov byte ptr [eax + 0x21], cl */ W8((u32)(r_eax+0x21u), (u8)r_ecx);
    /* 00601147: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060114a: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 0060114d: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 00601150: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00601153: mov esp, ebp */ r_esp = r_ebp;
    /* 00601155: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00601156: ret 0x14 */ FN_RET(0x00601110); r_esp += 24; return;
}

void f_00601180(void) /* sciCycleFlash::vfunc2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00601180);
    /* 00601180: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00601181: mov ebp, esp */ r_ebp = r_esp;
    /* 00601183: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00601186: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00601189: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060118c: movzx ecx, byte ptr [eax + 0x18] */ r_ecx = (u32)R8((u32)(r_eax+0x18u));
    /* 00601190: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00601192: jne 0x601199 */ if (!fZ) goto L_00601199;
L_00601194:; BB(0x00601194);
    /* 00601194: jmp 0x601289 */ goto L_00601289;
L_00601199:; BB(0x00601199);
    /* 00601199: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060119c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0060119e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006011a1: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 006011a4: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x6011a6u); call_ind(t); }
    /* 006011a6: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006011a9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006011ab: je 0x601268 */ if (fZ) goto L_00601268;
L_006011b1:; BB(0x006011b1);
    /* 006011b1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006011b4: cmp dword ptr [ecx + 0x24], 0 */ {  u32 a = R32((u32)(r_ecx+0x24u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006011b8: jne 0x6011ca */ if (!fZ) goto L_006011ca;
L_006011ba:; BB(0x006011ba);
    /* 006011ba: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006011bd: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 006011c0: call 0x5f54c0 */ r_esp -= 4; W32(r_esp, 0x6011c5u); f_005f54c0();
    /* 006011c5: mov byte ptr [ebp - 1], al */ W8((u32)(r_ebp+0xffffffffu), (u8)r_eax);
    /* 006011c8: jmp 0x6011e6 */ goto L_006011e6;
L_006011ca:; BB(0x006011ca);
    /* 006011ca: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 006011cd: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 006011d0: call 0x5eb610 */ r_esp -= 4; W32(r_esp, 0x6011d5u); f_005eb610();
    /* 006011d5: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 006011d8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006011da: cmp ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006011e0: setne dl */ r_edx = (r_edx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 006011e3: mov byte ptr [ebp - 1], dl */ W8((u32)(r_ebp+0xffffffffu), (u8)r_edx);
L_006011e6:; BB(0x006011e6);
    /* 006011e6: movzx eax, byte ptr [ebp - 1] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 006011ea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006011ec: je 0x601238 */ if (fZ) goto L_00601238;
L_006011ee:; BB(0x006011ee);
    /* 006011ee: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006011f1: cmp dword ptr [ecx + 0x24], 0 */ {  u32 a = R32((u32)(r_ecx+0x24u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006011f5: jne 0x60120c */ if (!fZ) goto L_0060120c;
L_006011f7:; BB(0x006011f7);
    /* 006011f7: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006011fa: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 006011fd: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00601200: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00601203: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00601205: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00601208: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x60120au); call_ind(t); }
    /* 0060120a: jmp 0x60121c */ goto L_0060121c;
L_0060120c:; BB(0x0060120c);
    /* 0060120c: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 00601211: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00601214: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00601217: call 0x5eb5d0 */ r_esp -= 4; W32(r_esp, 0x60121cu); f_005eb5d0();
L_0060121c:; BB(0x0060121c);
    /* 0060121c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060121f: movzx eax, byte ptr [edx + 0x21] */ r_eax = (u32)R8((u32)(r_edx+0x21u));
    /* 00601223: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00601225: jne 0x601236 */ if (!fZ) goto L_00601236;
L_00601227:; BB(0x00601227);
    /* 00601227: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060122a: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 0060122d: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00601230: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00601233: mov dword ptr [eax + 0x1c], edx */ W32((u32)(r_eax+0x1cu), r_edx);
L_00601236:; BB(0x00601236);
    /* 00601236: jmp 0x601268 */ goto L_00601268;
L_00601238:; BB(0x00601238);
    /* 00601238: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060123b: cmp dword ptr [ecx + 0x24], 0 */ {  u32 a = R32((u32)(r_ecx+0x24u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060123f: jne 0x601256 */ if (!fZ) goto L_00601256;
L_00601241:; BB(0x00601241);
    /* 00601241: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00601244: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00601247: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060124a: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0060124d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0060124f: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00601252: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x601254u); call_ind(t); }
    /* 00601254: jmp 0x601268 */ goto L_00601268;
L_00601256:; BB(0x00601256);
    /* 00601256: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00601259: mov dl, byte ptr [ecx + 0x24] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x24u))) & 0xffu);
    /* 0060125c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060125d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00601260: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00601263: call 0x5eb5d0 */ r_esp -= 4; W32(r_esp, 0x601268u); f_005eb5d0();
L_00601268:; BB(0x00601268);
    /* 00601268: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060126b: movzx edx, byte ptr [ecx + 0x21] */ r_edx = (u32)R8((u32)(r_ecx+0x21u));
    /* 0060126f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00601271: jne 0x601289 */ if (!fZ) goto L_00601289;
L_00601273:; BB(0x00601273);
    /* 00601273: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00601276: cmp dword ptr [eax + 0x1c], 0 */ {  u32 a = R32((u32)(r_eax+0x1cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060127a: jg 0x601289 */ if ((!fZ&&fS==fO)) goto L_00601289;
L_0060127c:; BB(0x0060127c);
    /* 0060127c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060127f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00601281: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00601284: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 00601287: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x601289u); call_ind(t); }
L_00601289:; BB(0x00601289);
    /* 00601289: mov esp, ebp */ r_esp = r_ebp;
    /* 0060128b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060128c: ret  */ FN_RET(0x00601180); r_esp += 4; return;
}

void f_00601290(void) /* sciCycleFlash::vfunc5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00601290);
    /* 00601290: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00601291: mov ebp, esp */ r_ebp = r_esp;
    /* 00601293: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00601294: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00601297: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060129a: movzx ecx, byte ptr [eax + 0x20] */ r_ecx = (u32)R8((u32)(r_eax+0x20u));
    /* 0060129e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006012a0: jne 0x6012b7 */ if (!fZ) goto L_006012b7;
L_006012a2:; BB(0x006012a2);
    /* 006012a2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006012a5: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 006012a8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006012ab: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 006012ae: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006012b0: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 006012b3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6012b5u); call_ind(t); }
    /* 006012b5: jmp 0x6012e3 */ goto L_006012e3;
L_006012b7:; BB(0x006012b7);
    /* 006012b7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006012ba: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 006012bd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006012c0: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 006012c3: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 006012c5: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 006012c8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6012cau); call_ind(t); }
    /* 006012ca: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006012cd: cmp dword ptr [ecx + 0x24], 0 */ {  u32 a = R32((u32)(r_ecx+0x24u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006012d1: je 0x6012e3 */ if (fZ) goto L_006012e3;
L_006012d3:; BB(0x006012d3);
    /* 006012d3: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 006012d8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006012db: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 006012de: call 0x5eb5d0 */ r_esp -= 4; W32(r_esp, 0x6012e3u); f_005eb5d0();
L_006012e3:; BB(0x006012e3);
    /* 006012e3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006012e6: call 0x6005d0 */ r_esp -= 4; W32(r_esp, 0x6012ebu); f_006005d0();
    /* 006012eb: mov esp, ebp */ r_esp = r_ebp;
    /* 006012ed: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006012ee: ret  */ FN_RET(0x00601290); r_esp += 4; return;
}

