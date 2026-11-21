#include "protos.h"

void f_00665040(void) /* sub_665040 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00665040);
    /* 00665040: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00665041: mov ebp, esp */ r_ebp = r_esp;
    /* 00665043: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00665044: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00665045: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00665048: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066504c: je 0x665064 */ if (fZ) goto L_00665064;
L_0066504e:; BB(0x0066504e);
    /* 0066504e: cmp dword ptr [ebp + 8], 1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00665052: je 0x665064 */ if (fZ) goto L_00665064;
L_00665054:; BB(0x00665054);
    /* 00665054: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00665057: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00665058: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066505b: call 0x6651e0 */ r_esp -= 4; W32(r_esp, 0x665060u); f_006651e0();
    /* 00665060: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00665062: jne 0x665069 */ if (!fZ) goto L_00665069;
L_00665064:; BB(0x00665064);
    /* 00665064: jmp 0x665139 */ goto L_00665139;
L_00665069:; BB(0x00665069);
    /* 00665069: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0066506c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066506d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00665070: call 0x664d20 */ r_esp -= 4; W32(r_esp, 0x665075u); f_00664d20();
    /* 00665075: movsx esi, al */ r_esi = (u32)(i32)(i8)(u8)r_eax;
    /* 00665078: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0066507b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066507c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066507f: call 0x664d40 */ r_esp -= 4; W32(r_esp, 0x665084u); f_00664d40();
    /* 00665084: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00665086: jge 0x66509d */ if ((fS==fO)) goto L_0066509d;
L_00665088:; BB(0x00665088);
    /* 00665088: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0066508b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066508c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066508f: call 0x664d40 */ r_esp -= 4; W32(r_esp, 0x665094u); f_00664d40();
    /* 00665094: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00665097: add ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0066509a: mov byte ptr [ecx + 0x4d], al */ W8((u32)(r_ecx+0x4du), (u8)r_eax);
L_0066509d:; BB(0x0066509d);
    /* 0066509d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006650a0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006650a1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006650a4: call 0x664d20 */ r_esp -= 4; W32(r_esp, 0x6650a9u); f_00664d20();
    /* 006650a9: movsx esi, al */ r_esi = (u32)(i32)(i8)(u8)r_eax;
    /* 006650ac: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006650af: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006650b0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006650b3: call 0x664dd0 */ r_esp -= 4; W32(r_esp, 0x6650b8u); f_00664dd0();
    /* 006650b8: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006650ba: jle 0x6650d1 */ if ((fZ||fS!=fO)) goto L_006650d1;
L_006650bc:; BB(0x006650bc);
    /* 006650bc: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006650bf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006650c0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006650c3: call 0x664dd0 */ r_esp -= 4; W32(r_esp, 0x6650c8u); f_00664dd0();
    /* 006650c8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006650cb: add edx, dword ptr [ebp + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006650ce: mov byte ptr [edx + 0x4d], al */ W8((u32)(r_edx+0x4du), (u8)r_eax);
L_006650d1:; BB(0x006650d1);
    /* 006650d1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006650d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006650d5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006650d8: call 0x664d00 */ r_esp -= 4; W32(r_esp, 0x6650ddu); f_00664d00();
    /* 006650dd: movsx esi, al */ r_esi = (u32)(i32)(i8)(u8)r_eax;
    /* 006650e0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006650e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006650e4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006650e7: call 0x664ec0 */ r_esp -= 4; W32(r_esp, 0x6650ecu); f_00664ec0();
    /* 006650ec: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006650ee: jge 0x665105 */ if ((fS==fO)) goto L_00665105;
L_006650f0:; BB(0x006650f0);
    /* 006650f0: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006650f3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006650f4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006650f7: call 0x664ec0 */ r_esp -= 4; W32(r_esp, 0x6650fcu); f_00664ec0();
    /* 006650fc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006650ff: add ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00665102: mov byte ptr [ecx + 0x41], al */ W8((u32)(r_ecx+0x41u), (u8)r_eax);
L_00665105:; BB(0x00665105);
    /* 00665105: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00665108: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00665109: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066510c: call 0x664d00 */ r_esp -= 4; W32(r_esp, 0x665111u); f_00664d00();
    /* 00665111: movsx esi, al */ r_esi = (u32)(i32)(i8)(u8)r_eax;
    /* 00665114: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00665117: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00665118: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066511b: call 0x664f50 */ r_esp -= 4; W32(r_esp, 0x665120u); f_00664f50();
    /* 00665120: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00665122: jle 0x665139 */ if ((fZ||fS!=fO)) goto L_00665139;
L_00665124:; BB(0x00665124);
    /* 00665124: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00665127: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00665128: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066512b: call 0x664f50 */ r_esp -= 4; W32(r_esp, 0x665130u); f_00664f50();
    /* 00665130: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00665133: add edx, dword ptr [ebp + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00665136: mov byte ptr [edx + 0x41], al */ W8((u32)(r_edx+0x41u), (u8)r_eax);
L_00665139:; BB(0x00665139);
    /* 00665139: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0066513a: mov esp, ebp */ r_esp = r_ebp;
    /* 0066513c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066513d: ret 4 */ FN_RET(0x00665040); r_esp += 8; return;
}

void f_00665140(void) /* sub_665140 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00665140);
    /* 00665140: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00665141: mov ebp, esp */ r_ebp = r_esp;
    /* 00665143: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00665144: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00665147: movzx eax, byte ptr [ebp + 0xc] */ r_eax = (u32)R8((u32)(r_ebp+0xcu));
    /* 0066514b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066514d: je 0x665167 */ if (fZ) goto L_00665167;
L_0066514f:; BB(0x0066514f);
    /* 0066514f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00665152: add ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00665155: movsx edx, byte ptr [ecx + 0x41] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x41u));
    /* 00665159: add edx, dword ptr [ebp + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0066515c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066515f: add eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00665162: mov byte ptr [eax + 0x41], dl */ W8((u32)(r_eax+0x41u), (u8)r_edx);
    /* 00665165: jmp 0x66517d */ goto L_0066517d;
L_00665167:; BB(0x00665167);
    /* 00665167: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066516a: add ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0066516d: movsx edx, byte ptr [ecx + 0x4d] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x4du));
    /* 00665171: add edx, dword ptr [ebp + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00665174: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00665177: add eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0066517a: mov byte ptr [eax + 0x4d], dl */ W8((u32)(r_eax+0x4du), (u8)r_edx);
L_0066517d:; BB(0x0066517d);
    /* 0066517d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00665180: call 0x664630 */ r_esp -= 4; W32(r_esp, 0x665185u); f_00664630();
    /* 00665185: mov esp, ebp */ r_esp = r_ebp;
    /* 00665187: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00665188: ret 0xc */ FN_RET(0x00665140); r_esp += 16; return;
}

void f_00665190(void) /* sub_665190 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00665190);
    /* 00665190: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00665191: mov ebp, esp */ r_ebp = r_esp;
    /* 00665193: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00665194: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00665197: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066519a: add eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0066519d: mov byte ptr [eax + 0x41], 0 */ W8((u32)(r_eax+0x41u), 0x0u);
    /* 006651a1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006651a4: add ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006651a7: mov byte ptr [ecx + 0x4d], 0 */ W8((u32)(r_ecx+0x4du), 0x0u);
    /* 006651ab: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006651ae: call 0x664630 */ r_esp -= 4; W32(r_esp, 0x6651b3u); f_00664630();
    /* 006651b3: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 006651b5: mov esp, ebp */ r_esp = r_ebp;
    /* 006651b7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006651b8: ret 4 */ FN_RET(0x00665190); r_esp += 8; return;
}

void f_006651c0(void) /* sub_6651C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006651c0);
    /* 006651c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006651c1: mov ebp, esp */ r_ebp = r_esp;
    /* 006651c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006651c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006651c7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006651ca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006651cb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006651ce: call 0x664830 */ r_esp -= 4; W32(r_esp, 0x6651d3u); f_00664830();
    /* 006651d3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006651d6: mov eax, dword ptr [ecx + eax*4 + 0x5c] */ r_eax = R32((u32)(r_ecx+r_eax*4+0x5cu));
    /* 006651da: mov esp, ebp */ r_esp = r_ebp;
    /* 006651dc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006651dd: ret 4 */ FN_RET(0x006651c0); r_esp += 8; return;
}

void f_006651e0(void) /* sub_6651E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006651e0);
    /* 006651e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006651e1: mov ebp, esp */ r_ebp = r_esp;
    /* 006651e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006651e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006651e7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006651ea: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006651ed: mov eax, dword ptr [ecx + eax*4 + 0x10] */ r_eax = R32((u32)(r_ecx+r_eax*4+0x10u));
    /* 006651f1: mov esp, ebp */ r_esp = r_ebp;
    /* 006651f3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006651f4: ret 4 */ FN_RET(0x006651e0); r_esp += 8; return;
}

void f_00665200(void) /* sub_665200 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00665200);
    /* 00665200: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00665201: mov ebp, esp */ r_ebp = r_esp;
    /* 00665203: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00665204: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0066520b: jmp 0x665216 */ goto L_00665216;
L_0066520d:; BB(0x0066520d);
    /* 0066520d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00665210: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00665213: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00665216:; BB(0x00665216);
    /* 00665216: cmp dword ptr [ebp - 4], 0xc */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0066521a: jge 0x66523d */ if ((fS==fO)) goto L_0066523d;
L_0066521c:; BB(0x0066521c);
    /* 0066521c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066521f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00665222: cmp dword ptr [edx + ecx*4], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00665226: je 0x66523b */ if (fZ) goto L_0066523b;
L_00665228:; BB(0x00665228);
    /* 00665228: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066522b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0066522e: cmp dword ptr [ecx + eax*4], 0xf9060 */ {  u32 a = R32((u32)(r_ecx+r_eax*4)); u32 b = 0xf9060u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00665235: jge 0x66523b */ if ((fS==fO)) goto L_0066523b;
L_00665237:; BB(0x00665237);
    /* 00665237: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00665239: jmp 0x66523f */ goto L_0066523f;
L_0066523b:; BB(0x0066523b);
    /* 0066523b: jmp 0x66520d */ goto L_0066520d;
L_0066523d:; BB(0x0066523d);
    /* 0066523d: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_0066523f:; BB(0x0066523f);
    /* 0066523f: mov esp, ebp */ r_esp = r_ebp;
    /* 00665241: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00665242: ret  */ FN_RET(0x00665200); r_esp += 4; return;
}

void f_00665250(void) /* sub_665250 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00665250);
    /* 00665250: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00665251: mov ebp, esp */ r_ebp = r_esp;
    /* 00665253: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00665254: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00665257: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066525a: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0066525d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066525e: call 0x665200 */ r_esp -= 4; W32(r_esp, 0x665263u); f_00665200();
    /* 00665263: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00665266: mov esp, ebp */ r_esp = r_ebp;
    /* 00665268: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00665269: ret  */ FN_RET(0x00665250); r_esp += 4; return;
}

void f_00665bd0(void) /* sub_665BD0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00665bd0);
    /* 00665bd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00665bd1: mov ebp, esp */ r_ebp = r_esp;
    /* 00665bd3: sub esp, 0x11c */ {  u32 a = r_esp; u32 b = 0x11cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00665bd9: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00665bde: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00665be0: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00665be3: mov byte ptr [ebp - 1], 1 */ W8((u32)(r_ebp+0xffffffffu), 0x1u);
    /* 00665be7: push 0x104 */ { u32 v = 0x104u; r_esp -= 4; W32(r_esp, v); }
    /* 00665bec: lea eax, [ebp - 0x110] */ r_eax = (u32)(r_ebp+0xfffffef0u);
    /* 00665bf2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00665bf3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00665bf5: call dword ptr [0x6b20cc] */ { u32 t = R32((u32)(0x6b20ccu)); r_esp -= 4; W32(r_esp, 0x665bfbu); call_ind(t); }
    /* 00665bfb: mov dword ptr [ebp - 0x11c], eax */ W32((u32)(r_ebp+0xfffffee4u), r_eax);
    /* 00665c01: cmp dword ptr [ebp - 0x11c], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffee4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00665c08: jle 0x665c4b */ if ((fZ||fS!=fO)) goto L_00665c4b;
L_00665c0a:; BB(0x00665c0a);
    /* 00665c0a: lea ecx, [ebp - 0x110] */ r_ecx = (u32)(r_ebp+0xfffffef0u);
    /* 00665c10: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00665c11: push 0x7951c0 */ { u32 v = 0x7951c0u; r_esp -= 4; W32(r_esp, v); }
    /* 00665c16: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x665c1bu); f_00686d8e();
    /* 00665c1b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00665c1e: push 0x5c */ { u32 v = 0x5cu; r_esp -= 4; W32(r_esp, v); }
    /* 00665c20: lea edx, [ebp - 0x110] */ r_edx = (u32)(r_ebp+0xfffffef0u);
    /* 00665c26: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00665c27: call dword ptr [0x6b2264] */ { u32 t = R32((u32)(0x6b2264u)); r_esp -= 4; W32(r_esp, 0x665c2du); call_ind(t); }
    /* 00665c2d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00665c30: mov dword ptr [ebp - 0x114], eax */ W32((u32)(r_ebp+0xfffffeecu), r_eax);
    /* 00665c36: cmp dword ptr [ebp - 0x114], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffeecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00665c3d: je 0x665c49 */ if (fZ) goto L_00665c49;
L_00665c3f:; BB(0x00665c3f);
    /* 00665c3f: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 00665c45: mov byte ptr [eax + 1], 0 */ W8((u32)(r_eax+0x1u), 0x0u);
L_00665c49:; BB(0x00665c49);
    /* 00665c49: jmp 0x665c5d */ goto L_00665c5d;
L_00665c4b:; BB(0x00665c4b);
    /* 00665c4b: mov byte ptr [ebp - 1], 0 */ W8((u32)(r_ebp+0xffffffffu), 0x0u);
    /* 00665c4f: mov byte ptr [0x7951c0], 0 */ W8((u32)(0x7951c0u), 0x0u);
    /* 00665c56: mov byte ptr [ebp - 0x110], 0 */ W8((u32)(r_ebp+0xfffffef0u), 0x0u);
L_00665c5d:; BB(0x00665c5d);
    /* 00665c5d: lea ecx, [ebp - 0x110] */ r_ecx = (u32)(r_ebp+0xfffffef0u);
    /* 00665c63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00665c64: push 0x7950bc */ { u32 v = 0x7950bcu; r_esp -= 4; W32(r_esp, v); }
    /* 00665c69: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x665c6eu); f_00686d8e();
    /* 00665c6e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00665c71: call 0x5ea680 */ r_esp -= 4; W32(r_esp, 0x665c76u); f_005ea680();
    /* 00665c76: mov dword ptr [ebp - 0x118], eax */ W32((u32)(r_ebp+0xfffffee8u), r_eax);
    /* 00665c7c: mov edx, dword ptr [ebp - 0x118] */ r_edx = R32((u32)(r_ebp+0xfffffee8u));
    /* 00665c82: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00665c83: call dword ptr [0x6b22f0] */ { u32 t = R32((u32)(0x6b22f0u)); r_esp -= 4; W32(r_esp, 0x665c89u); call_ind(t); }
    /* 00665c89: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00665c8c: mov eax, dword ptr [ebp - 0x118] */ r_eax = R32((u32)(r_ebp+0xfffffee8u));
    /* 00665c92: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00665c93: call dword ptr [0x6b2174] */ { u32 t = R32((u32)(0x6b2174u)); r_esp -= 4; W32(r_esp, 0x665c99u); call_ind(t); }
    /* 00665c99: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00665c9c: mov al, byte ptr [ebp - 1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffffu))) & 0xffu);
    /* 00665c9f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00665ca2: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00665ca4: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x665ca9u); f_00686d72();
    /* 00665ca9: mov esp, ebp */ r_esp = r_ebp;
    /* 00665cab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00665cac: ret  */ FN_RET(0x00665bd0); r_esp += 4; return;
}

void f_00665cb0(void) /* sub_665CB0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00665cb0);
    /* 00665cb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00665cb1: mov ebp, esp */ r_ebp = r_esp;
    /* 00665cb3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00665cb4: push 0x7950bc */ { u32 v = 0x7950bcu; r_esp -= 4; W32(r_esp, v); }
    /* 00665cb9: push 0x7952c4 */ { u32 v = 0x7952c4u; r_esp -= 4; W32(r_esp, v); }
    /* 00665cbe: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x665cc3u); f_00686d8e();
    /* 00665cc3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00665cc6: push 0x795a44 */ { u32 v = 0x795a44u; r_esp -= 4; W32(r_esp, v); }
    /* 00665ccb: push 0x7952c4 */ { u32 v = 0x7952c4u; r_esp -= 4; W32(r_esp, v); }
    /* 00665cd0: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x665cd5u); f_00686ec6();
    /* 00665cd5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00665cd8: push 0x6c2d28 */ { u32 v = 0x6c2d28u; r_esp -= 4; W32(r_esp, v); }
    /* 00665cdd: push 0x7952c4 */ { u32 v = 0x7952c4u; r_esp -= 4; W32(r_esp, v); }
    /* 00665ce2: call 0x5ea9c0 */ r_esp -= 4; W32(r_esp, 0x665ce7u); f_005ea9c0();
    /* 00665ce7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00665cea: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00665ced: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00665cf1: je 0x665d02 */ if (fZ) goto L_00665d02;
L_00665cf3:; BB(0x00665cf3);
    /* 00665cf3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00665cf6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00665cf7: call dword ptr [0x6b2258] */ { u32 t = R32((u32)(0x6b2258u)); r_esp -= 4; W32(r_esp, 0x665cfdu); call_ind(t); }
    /* 00665cfd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00665d00: jmp 0x665d14 */ goto L_00665d14;
L_00665d02:; BB(0x00665d02);
    /* 00665d02: push 0x795a44 */ { u32 v = 0x795a44u; r_esp -= 4; W32(r_esp, v); }
    /* 00665d07: push 0x7952c4 */ { u32 v = 0x7952c4u; r_esp -= 4; W32(r_esp, v); }
    /* 00665d0c: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x665d11u); f_00686d8e();
    /* 00665d11: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00665d14:; BB(0x00665d14);
    /* 00665d14: mov esp, ebp */ r_esp = r_ebp;
    /* 00665d16: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00665d17: ret  */ FN_RET(0x00665cb0); r_esp += 4; return;
}

void f_00665d20(void) /* sub_665D20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00665d20);
    /* 00665d20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00665d21: mov ebp, esp */ r_ebp = r_esp;
    /* 00665d23: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00665d26: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00665d2b: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00665d2d: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00665d30: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00665d37: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 00665d39: lea eax, [ebp - 0x3c] */ r_eax = (u32)(r_ebp+0xffffffc4u);
    /* 00665d3c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00665d3d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00665d3f: call dword ptr [0x6b246c] */ { u32 t = R32((u32)(0x6b246cu)); r_esp -= 4; W32(r_esp, 0x665d45u); call_ind(t); }
    /* 00665d45: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00665d48: and ecx, 0x40 */ {  u32 a = r_ecx; u32 b = 0x40u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00665d4b: je 0x665d56 */ if (fZ) goto L_00665d56;
L_00665d4d:; BB(0x00665d4d);
    /* 00665d4d: mov byte ptr [0x7950b4], 0x10 */ W8((u32)(0x7950b4u), 0x10u);
    /* 00665d54: jmp 0x665d6e */ goto L_00665d6e;
L_00665d56:; BB(0x00665d56);
    /* 00665d56: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00665d59: and edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00665d5c: je 0x665d67 */ if (fZ) goto L_00665d67;
L_00665d5e:; BB(0x00665d5e);
    /* 00665d5e: mov byte ptr [0x7950b4], 8 */ W8((u32)(0x7950b4u), 0x8u);
    /* 00665d65: jmp 0x665d6e */ goto L_00665d6e;
L_00665d67:; BB(0x00665d67);
    /* 00665d67: mov byte ptr [0x7950b4], 0 */ W8((u32)(0x7950b4u), 0x0u);
L_00665d6e:; BB(0x00665d6e);
    /* 00665d6e: call dword ptr [0x6b2470] */ { u32 t = R32((u32)(0x6b2470u)); r_esp -= 4; W32(r_esp, 0x665d74u); call_ind(t); }
    /* 00665d74: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00665d76: jne 0x665d7a */ if (!fZ) goto L_00665d7a;
L_00665d78:; BB(0x00665d78);
    /* 00665d78: jmp 0x665d89 */ goto L_00665d89;
L_00665d7a:; BB(0x00665d7a);
    /* 00665d7a: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00665d7d: and eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00665d80: je 0x665d89 */ if (fZ) goto L_00665d89;
L_00665d82:; BB(0x00665d82);
    /* 00665d82: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
L_00665d89:; BB(0x00665d89);
    /* 00665d89: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00665d8c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00665d8f: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00665d91: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x665d96u); f_00686d72();
    /* 00665d96: mov esp, ebp */ r_esp = r_ebp;
    /* 00665d98: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00665d99: ret  */ FN_RET(0x00665d20); r_esp += 4; return;
}

void f_00665da0(void) /* sub_665DA0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00665da0);
    /* 00665da0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00665da1: mov ebp, esp */ r_ebp = r_esp;
    /* 00665da3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00665da6: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00665dad: call dword ptr [0x6b23f4] */ { u32 t = R32((u32)(0x6b23f4u)); r_esp -= 4; W32(r_esp, 0x665db3u); call_ind(t); }
    /* 00665db3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00665db4: call dword ptr [0x6b23c4] */ { u32 t = R32((u32)(0x6b23c4u)); r_esp -= 4; W32(r_esp, 0x665dbau); call_ind(t); }
    /* 00665dba: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00665dbd: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 00665dbf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00665dc2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00665dc3: call dword ptr [0x6b2014] */ { u32 t = R32((u32)(0x6b2014u)); r_esp -= 4; W32(r_esp, 0x665dc9u); call_ind(t); }
    /* 00665dc9: mov byte ptr [0x7950b5], al */ W8((u32)(0x7950b5u), (u8)r_eax);
    /* 00665dce: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00665dd0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00665dd3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00665dd4: call dword ptr [0x6b2014] */ { u32 t = R32((u32)(0x6b2014u)); r_esp -= 4; W32(r_esp, 0x665ddau); call_ind(t); }
    /* 00665dda: cmp eax, 0x280 */ {  u32 a = r_eax; u32 b = 0x280u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00665ddf: jl 0x665df4 */ if ((fS!=fO)) goto L_00665df4;
L_00665de1:; BB(0x00665de1);
    /* 00665de1: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00665de3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00665de6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00665de7: call dword ptr [0x6b2014] */ { u32 t = R32((u32)(0x6b2014u)); r_esp -= 4; W32(r_esp, 0x665dedu); call_ind(t); }
    /* 00665ded: cmp eax, 0x1e0 */ {  u32 a = r_eax; u32 b = 0x1e0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00665df2: jge 0x665dfb */ if ((fS==fO)) goto L_00665dfb;
L_00665df4:; BB(0x00665df4);
    /* 00665df4: mov dword ptr [ebp - 8], 2 */ W32((u32)(r_ebp+0xfffffff8u), 0x2u);
L_00665dfb:; BB(0x00665dfb);
    /* 00665dfb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00665dfe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00665dff: call dword ptr [0x6b23f4] */ { u32 t = R32((u32)(0x6b23f4u)); r_esp -= 4; W32(r_esp, 0x665e05u); call_ind(t); }
    /* 00665e05: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00665e06: call dword ptr [0x6b23b4] */ { u32 t = R32((u32)(0x6b23b4u)); r_esp -= 4; W32(r_esp, 0x665e0cu); call_ind(t); }
    /* 00665e0c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00665e0f: mov esp, ebp */ r_esp = r_ebp;
    /* 00665e11: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00665e12: ret  */ FN_RET(0x00665da0); r_esp += 4; return;
}

void f_00665e20(void) /* sub_665E20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00665e20);
    /* 00665e20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00665e21: mov ebp, esp */ r_ebp = r_esp;
    /* 00665e23: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00665e26: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00665e2d: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00665e34: mov dword ptr [ebp - 0x24], 0x20 */ W32((u32)(r_ebp+0xffffffdcu), 0x20u);
    /* 00665e3b: lea eax, [ebp - 0x24] */ r_eax = (u32)(r_ebp+0xffffffdcu);
    /* 00665e3e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00665e3f: call dword ptr [0x6b20c8] */ { u32 t = R32((u32)(0x6b20c8u)); r_esp -= 4; W32(r_esp, 0x665e45u); call_ind(t); }
    /* 00665e45: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00665e48: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00665e4b: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00665e4e: sub edx, 0x400000 */ {  u32 a = r_edx; u32 b = 0x400000u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00665e54: mov dword ptr [0x795f9c], edx */ W32((u32)(0x795f9cu), r_edx);
    /* 00665e5a: cmp dword ptr [0x795f9c], 0x800000 */ {  u32 a = R32((u32)(0x795f9cu)); u32 b = 0x800000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00665e64: jge 0x665e70 */ if ((fS==fO)) goto L_00665e70;
L_00665e66:; BB(0x00665e66);
    /* 00665e66: mov dword ptr [0x795f9c], 0x800000 */ W32((u32)(0x795f9cu), 0x800000u);
L_00665e70:; BB(0x00665e70);
    /* 00665e70: cmp dword ptr [ebp - 0x28], 0xf00000 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0xf00000u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00665e77: jae 0x665e82 */ if (!fC) goto L_00665e82;
L_00665e79:; BB(0x00665e79);
    /* 00665e79: mov byte ptr [0x795f98], 1 */ W8((u32)(0x795f98u), 0x1u);
    /* 00665e80: jmp 0x665e89 */ goto L_00665e89;
L_00665e82:; BB(0x00665e82);
    /* 00665e82: mov byte ptr [0x795f98], 0 */ W8((u32)(0x795f98u), 0x0u);
L_00665e89:; BB(0x00665e89);
    /* 00665e89: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00665e8c: mov esp, ebp */ r_esp = r_ebp;
    /* 00665e8e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00665e8f: ret  */ FN_RET(0x00665e20); r_esp += 4; return;
}

