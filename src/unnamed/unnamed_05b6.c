#include "protos.h"

void f_005b6040(void) /* sub_5B6040 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b6040);
    /* 005b6040: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b6041: mov ebp, esp */ r_ebp = r_esp;
    /* 005b6043: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b6046: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b6049: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b604c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b604d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b6050: call 0x5b58f0 */ r_esp -= 4; W32(r_esp, 0x5b6055u); f_005b58f0();
    /* 005b6055: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b6058: jne 0x5b6089 */ if (!fZ) goto L_005b6089;
L_005b605a:; BB(0x005b605a);
    /* 005b605a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b605c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b605f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b6060: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b6063: call 0x5b5830 */ r_esp -= 4; W32(r_esp, 0x5b6068u); f_005b5830();
    /* 005b6068: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b606b: jne 0x5b6089 */ if (!fZ) goto L_005b6089;
L_005b606d:; BB(0x005b606d);
    /* 005b606d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b606f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b6072: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b6073: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b6076: call 0x5b4f50 */ r_esp -= 4; W32(r_esp, 0x5b607bu); f_005b4f50();
    /* 005b607b: cmp eax, 0x15 */ {  u32 a = r_eax; u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b607e: jne 0x5b6089 */ if (!fZ) goto L_005b6089;
L_005b6080:; BB(0x005b6080);
    /* 005b6080: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 005b6087: jmp 0x5b6090 */ goto L_005b6090;
L_005b6089:; BB(0x005b6089);
    /* 005b6089: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_005b6090:; BB(0x005b6090);
    /* 005b6090: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 005b6093: mov esp, ebp */ r_esp = r_ebp;
    /* 005b6095: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b6096: ret 4 */ FN_RET(0x005b6040); r_esp += 8; return;
}

void f_005b60a0(void) /* sub_5B60A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b60a0);
    /* 005b60a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b60a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005b60a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b60a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b60a7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b60aa: imul eax, eax, 0x118 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x118u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005b60b0: add eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b60b3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b60b6: mov al, byte ptr [ecx + eax + 0x5c] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ecx+r_eax+0x5cu))) & 0xffu);
    /* 005b60ba: mov esp, ebp */ r_esp = r_ebp;
    /* 005b60bc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b60bd: ret 8 */ FN_RET(0x005b60a0); r_esp += 12; return;
}

void f_005b60c0(void) /* sub_5B60C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b60c0);
    /* 005b60c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b60c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005b60c3: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b60c6: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005b60c9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b60cb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b60cd: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5b60d2u); f_0064c8a0();
    /* 005b60d2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b60d5: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005b60d8: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005b60db: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b60de: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b60df: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b60e2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b60e3: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b60e6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b60e7: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 005b60ea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b60eb: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b60ee: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005b60f1: mov ecx, dword ptr [edx + ecx*4 + 0x580] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x580u));
    /* 005b60f8: call 0x5cb880 */ r_esp -= 4; W32(r_esp, 0x5b60fdu); f_005cb880();
    /* 005b60fd: mov ecx, eax */ r_ecx = r_eax;
    /* 005b60ff: call 0x64c6e0 */ r_esp -= 4; W32(r_esp, 0x5b6104u); f_0064c6e0();
    /* 005b6104: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005b6107: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b6109: jne 0x5b6156 */ if (!fZ) goto L_005b6156;
L_005b610b:; BB(0x005b610b);
    /* 005b610b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b610d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b610f: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5b6114u); f_0064c8a0();
    /* 005b6114: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b6117: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005b611a: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 005b611d: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005b6120: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b6121: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005b6124: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b6125: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b6128: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b6129: lea ecx, [ebp - 0x18] */ r_ecx = (u32)(r_ebp+0xffffffe8u);
    /* 005b612c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b612d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b6130: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005b6133: mov ecx, dword ptr [eax + edx*4 + 0x634] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x634u));
    /* 005b613a: call 0x5cb880 */ r_esp -= 4; W32(r_esp, 0x5b613fu); f_005cb880();
    /* 005b613f: mov ecx, eax */ r_ecx = r_eax;
    /* 005b6141: call 0x64c6e0 */ r_esp -= 4; W32(r_esp, 0x5b6146u); f_0064c6e0();
    /* 005b6146: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005b6149: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b614b: jne 0x5b6156 */ if (!fZ) goto L_005b6156;
L_005b614d:; BB(0x005b614d);
    /* 005b614d: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 005b6154: jmp 0x5b615d */ goto L_005b615d;
L_005b6156:; BB(0x005b6156);
    /* 005b6156: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
L_005b615d:; BB(0x005b615d);
    /* 005b615d: mov al, byte ptr [ebp - 0x28] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffd8u))) & 0xffu);
    /* 005b6160: mov esp, ebp */ r_esp = r_ebp;
    /* 005b6162: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b6163: ret 4 */ FN_RET(0x005b60c0); r_esp += 8; return;
}

void f_005b6170(void) /* sub_5B6170 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b6170);
    /* 005b6170: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b6171: mov ebp, esp */ r_ebp = r_esp;
    /* 005b6173: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b6174: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b6177: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b617a: imul eax, eax, 0x118 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x118u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005b6180: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b6183: mov al, byte ptr [ecx + eax + 0x65] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ecx+r_eax+0x65u))) & 0xffu);
    /* 005b6187: mov esp, ebp */ r_esp = r_ebp;
    /* 005b6189: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b618a: ret 4 */ FN_RET(0x005b6170); r_esp += 8; return;
}

void f_005b6190(void) /* sub_5B6190 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b6190);
    /* 005b6190: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b6191: mov ebp, esp */ r_ebp = r_esp;
    /* 005b6193: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b6195: push 0x6a7e87 */ { u32 v = 0x6a7e87u; r_esp -= 4; W32(r_esp, v); }
    /* 005b619a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005b61a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b61a1: sub esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b61a4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005b61a9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b61ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b61ac: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005b61af: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005b61b5: mov dword ptr [ebp - 0x6c], ecx */ W32((u32)(r_ebp+0xffffff94u), r_ecx);
    /* 005b61b8: mov dword ptr [ebp - 0x38], 5 */ W32((u32)(r_ebp+0xffffffc8u), 0x5u);
    /* 005b61bf: mov dword ptr [ebp - 0x34], 5 */ W32((u32)(r_ebp+0xffffffccu), 0x5u);
    /* 005b61c6: mov dword ptr [ebp - 0x30], 6 */ W32((u32)(r_ebp+0xffffffd0u), 0x6u);
    /* 005b61cd: mov dword ptr [ebp - 0x2c], 5 */ W32((u32)(r_ebp+0xffffffd4u), 0x5u);
    /* 005b61d4: mov dword ptr [ebp - 0x28], 2 */ W32((u32)(r_ebp+0xffffffd8u), 0x2u);
    /* 005b61db: mov dword ptr [ebp - 0x24], 5 */ W32((u32)(r_ebp+0xffffffdcu), 0x5u);
    /* 005b61e2: mov dword ptr [ebp - 0x20], 3 */ W32((u32)(r_ebp+0xffffffe0u), 0x3u);
    /* 005b61e9: mov dword ptr [ebp - 0x1c], 1 */ W32((u32)(r_ebp+0xffffffe4u), 0x1u);
    /* 005b61f0: mov dword ptr [ebp - 0x18], 2 */ W32((u32)(r_ebp+0xffffffe8u), 0x2u);
    /* 005b61f7: mov dword ptr [ebp - 0x14], 4 */ W32((u32)(r_ebp+0xffffffecu), 0x4u);
    /* 005b61fe: mov dword ptr [ebp - 0x10], 6 */ W32((u32)(r_ebp+0xfffffff0u), 0x6u);
    /* 005b6205: mov ecx, dword ptr [0x793600] */ r_ecx = R32((u32)(0x793600u));
    /* 005b620b: call 0x5da830 */ r_esp -= 4; W32(r_esp, 0x5b6210u); f_005da830();
    /* 005b6210: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005b6213: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b6215: je 0x5b6228 */ if (fZ) goto L_005b6228;
L_005b6217:; BB(0x005b6217);
    /* 005b6217: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005b621d: mov edx, dword ptr [ecx + 0x4ef4] */ r_edx = R32((u32)(r_ecx+0x4ef4u));
    /* 005b6223: mov dword ptr [ebp - 0x70], edx */ W32((u32)(r_ebp+0xffffff90u), r_edx);
    /* 005b6226: jmp 0x5b623d */ goto L_005b623d;
L_005b6228:; BB(0x005b6228);
    /* 005b6228: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b622a: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 005b622d: call 0x5b5fb0 */ r_esp -= 4; W32(r_esp, 0x5b6232u); f_005b5fb0();
    /* 005b6232: movsx eax, byte ptr [eax + 9] */ r_eax = (u32)(i32)(i8)R8((u32)(r_eax+0x9u));
    /* 005b6236: mov ecx, dword ptr [ebp + eax*4 - 0x1c] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffffe4u));
    /* 005b623a: mov dword ptr [ebp - 0x70], ecx */ W32((u32)(r_ebp+0xffffff90u), r_ecx);
L_005b623d:; BB(0x005b623d);
    /* 005b623d: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 005b6240: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 005b6243: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 005b6246: cmp dword ptr [eax + 0x57c], 0 */ {  u32 a = R32((u32)(r_eax+0x57cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b624d: jne 0x5b6299 */ if (!fZ) goto L_005b6299;
L_005b624f:; BB(0x005b624f);
    /* 005b624f: push 0x810 */ { u32 v = 0x810u; r_esp -= 4; W32(r_esp, v); }
    /* 005b6254: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5b6259u); f_00686d82();
    /* 005b6259: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b625c: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 005b625f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005b6266: cmp dword ptr [ebp - 0x48], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b626a: je 0x5b6279 */ if (fZ) goto L_005b6279;
L_005b626c:; BB(0x005b626c);
    /* 005b626c: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005b626f: call 0x642e10 */ r_esp -= 4; W32(r_esp, 0x5b6274u); f_00642e10();
    /* 005b6274: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 005b6277: jmp 0x5b6280 */ goto L_005b6280;
L_005b6279:; BB(0x005b6279);
    /* 005b6279: mov dword ptr [ebp - 0x74], 0 */ W32((u32)(r_ebp+0xffffff8cu), 0x0u);
L_005b6280:; BB(0x005b6280);
    /* 005b6280: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 005b6283: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 005b6286: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005b628d: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 005b6290: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 005b6293: mov dword ptr [edx + 0x57c], eax */ W32((u32)(r_edx+0x57cu), r_eax);
L_005b6299:; BB(0x005b6299);
    /* 005b6299: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005b629c: mov edx, dword ptr [ebp + ecx*4 - 0x38] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffc8u));
    /* 005b62a0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b62a1: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 005b62a4: mov ecx, dword ptr [eax + 0x57c] */ r_ecx = R32((u32)(r_eax+0x57cu));
    /* 005b62aa: call 0x642e70 */ r_esp -= 4; W32(r_esp, 0x5b62afu); f_00642e70();
    /* 005b62af: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 005b62b2: call 0x5b7ef0 */ r_esp -= 4; W32(r_esp, 0x5b62b7u); f_005b7ef0();
    /* 005b62b7: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 005b62be: jmp 0x5b62c9 */ goto L_005b62c9;
L_005b62c0:; BB(0x005b62c0);
    /* 005b62c0: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005b62c3: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b62c6: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
L_005b62c9:; BB(0x005b62c9);
    /* 005b62c9: cmp dword ptr [ebp - 0x40], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b62cd: jge 0x5b63f8 */ if ((fS==fO)) goto L_005b63f8;
L_005b62d3:; BB(0x005b62d3);
    /* 005b62d3: push 0xf0 */ { u32 v = 0xf0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b62d8: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5b62ddu); f_00686d82();
    /* 005b62dd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b62e0: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 005b62e3: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005b62ea: cmp dword ptr [ebp - 0x50], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b62ee: je 0x5b62fd */ if (fZ) goto L_005b62fd;
L_005b62f0:; BB(0x005b62f0);
    /* 005b62f0: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005b62f3: call 0x5b85a0 */ r_esp -= 4; W32(r_esp, 0x5b62f8u); f_005b85a0();
    /* 005b62f8: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 005b62fb: jmp 0x5b6304 */ goto L_005b6304;
L_005b62fd:; BB(0x005b62fd);
    /* 005b62fd: mov dword ptr [ebp - 0x78], 0 */ W32((u32)(r_ebp+0xffffff88u), 0x0u);
L_005b6304:; BB(0x005b6304);
    /* 005b6304: mov edx, dword ptr [ebp - 0x78] */ r_edx = R32((u32)(r_ebp+0xffffff88u));
    /* 005b6307: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 005b630a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005b6311: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 005b6314: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 005b6317: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005b631a: mov dword ptr [ecx + eax*4 + 0x580], edx */ W32((u32)(r_ecx+r_eax*4+0x580u), r_edx);
    /* 005b6321: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 005b6324: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b6325: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005b6328: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 005b632b: mov ecx, dword ptr [edx + ecx*4 + 0x580] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x580u));
    /* 005b6332: call 0x5f53e0 */ r_esp -= 4; W32(r_esp, 0x5b6337u); f_005f53e0();
    /* 005b6337: push 0xf0 */ { u32 v = 0xf0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b633c: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5b6341u); f_00686d82();
    /* 005b6341: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b6344: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 005b6347: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 005b634e: cmp dword ptr [ebp - 0x58], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b6352: je 0x5b6361 */ if (fZ) goto L_005b6361;
L_005b6354:; BB(0x005b6354);
    /* 005b6354: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005b6357: call 0x5b85a0 */ r_esp -= 4; W32(r_esp, 0x5b635cu); f_005b85a0();
    /* 005b635c: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 005b635f: jmp 0x5b6368 */ goto L_005b6368;
L_005b6361:; BB(0x005b6361);
    /* 005b6361: mov dword ptr [ebp - 0x7c], 0 */ W32((u32)(r_ebp+0xffffff84u), 0x0u);
L_005b6368:; BB(0x005b6368);
    /* 005b6368: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 005b636b: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 005b636e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005b6375: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005b6378: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 005b637b: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005b637e: mov dword ptr [edx + ecx*4 + 0x634], eax */ W32((u32)(r_edx+r_ecx*4+0x634u), r_eax);
    /* 005b6385: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005b6388: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b6389: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005b638c: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 005b638f: mov ecx, dword ptr [eax + edx*4 + 0x634] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x634u));
    /* 005b6396: call 0x5f53e0 */ r_esp -= 4; W32(r_esp, 0x5b639bu); f_005f53e0();
    /* 005b639b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b639d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b639f: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5b63a4u); f_0064c8a0();
    /* 005b63a4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b63a7: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 005b63aa: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
    /* 005b63ad: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005b63b0: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 005b63b3: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 005b63b6: mov dword ptr [edx + ecx*8 + 0x590], eax */ W32((u32)(r_edx+r_ecx*8+0x590u), r_eax);
    /* 005b63bd: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 005b63c0: mov dword ptr [edx + ecx*8 + 0x594], eax */ W32((u32)(r_edx+r_ecx*8+0x594u), r_eax);
    /* 005b63c7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b63c9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b63cb: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5b63d0u); f_0064c8a0();
    /* 005b63d0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b63d3: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 005b63d6: mov dword ptr [ebp - 0x64], edx */ W32((u32)(r_ebp+0xffffff9cu), r_edx);
    /* 005b63d9: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005b63dc: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 005b63df: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 005b63e2: mov dword ptr [edx + ecx*8 + 0x644], eax */ W32((u32)(r_edx+r_ecx*8+0x644u), r_eax);
    /* 005b63e9: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 005b63ec: mov dword ptr [edx + ecx*8 + 0x648], eax */ W32((u32)(r_edx+r_ecx*8+0x648u), r_eax);
    /* 005b63f3: jmp 0x5b62c0 */ goto L_005b62c0;
L_005b63f8:; BB(0x005b63f8);
    /* 005b63f8: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 005b63fb: mov byte ptr [ecx + 0x5c0], 0 */ W8((u32)(r_ecx+0x5c0u), 0x0u);
    /* 005b6402: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 005b6405: mov byte ptr [edx + 0x5b4], 0 */ W8((u32)(r_edx+0x5b4u), 0x0u);
    /* 005b640c: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 005b640f: mov dword ptr [eax + 0x5b0], 0 */ W32((u32)(r_eax+0x5b0u), 0x0u);
    /* 005b6419: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 005b641c: mov dword ptr [ecx + 0x5c4], 0 */ W32((u32)(r_ecx+0x5c4u), 0x0u);
    /* 005b6426: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 005b6429: mov dword ptr [edx + 0x5cc], 0 */ W32((u32)(r_edx+0x5ccu), 0x0u);
    /* 005b6433: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 005b6436: mov dword ptr [eax + 0x5c8], 0 */ W32((u32)(r_eax+0x5c8u), 0x0u);
    /* 005b6440: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 005b6443: mov dword ptr [ecx + 0x5d0], 0 */ W32((u32)(r_ecx+0x5d0u), 0x0u);
    /* 005b644d: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 005b6450: call 0x5b7d30 */ r_esp -= 4; W32(r_esp, 0x5b6455u); f_005b7d30();
    /* 005b6455: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005b6458: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); fC = (b != 0); }
    /* 005b645a: sbb edx, edx */ { u32 c = fC; u32 a = r_edx; u32 b = r_edx; u32 r = (a - b - c) & 0xffffffffu; r_edx = r;  }
    /* 005b645c: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b645f: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 005b6462: mov byte ptr [eax + 0x678], dl */ W8((u32)(r_eax+0x678u), (u8)r_edx);
    /* 005b6468: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 005b646b: call 0x5b6a60 */ r_esp -= 4; W32(r_esp, 0x5b6470u); f_005b6a60();
    /* 005b6470: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b6473: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005b647a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005b647b: mov esp, ebp */ r_esp = r_ebp;
    /* 005b647d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b647e: ret  */ FN_RET(0x005b6190); r_esp += 4; return;
}

void f_005b6480(void) /* sub_5B6480 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b6480);
    /* 005b6480: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b6481: mov ebp, esp */ r_ebp = r_esp;
    /* 005b6483: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b6484: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b6485: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b6488: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005b648b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b648c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b648f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b6490: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b6493: call 0x5b5040 */ r_esp -= 4; W32(r_esp, 0x5b6498u); f_005b5040();
    /* 005b6498: mov esi, eax */ r_esi = r_eax;
    /* 005b649a: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005b649d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b649e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b64a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b64a2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b64a5: call 0x5b5260 */ r_esp -= 4; W32(r_esp, 0x5b64aau); f_005b5260();
    /* 005b64aa: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005b64ac: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b64ae: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 005b64b1: mov al, cl */ r_eax = (r_eax & 0xffffff00u) | (((u8)r_ecx) & 0xffu);
    /* 005b64b3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b64b4: mov esp, ebp */ r_esp = r_ebp;
    /* 005b64b6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b64b7: ret 8 */ FN_RET(0x005b6480); r_esp += 12; return;
}

void f_005b64c0(void) /* sub_5B64C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b64c0);
    /* 005b64c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b64c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005b64c3: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b64c6: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005b64c9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005b64d0: jmp 0x5b64db */ goto L_005b64db;
L_005b64d2:; BB(0x005b64d2);
    /* 005b64d2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b64d5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b64d8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005b64db:; BB(0x005b64db);
    /* 005b64db: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b64df: jge 0x5b651d */ if ((fS==fO)) goto L_005b651d;
L_005b64e1:; BB(0x005b64e1);
    /* 005b64e1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b64e4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b64e5: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b64e8: call 0x5b60c0 */ r_esp -= 4; W32(r_esp, 0x5b64edu); f_005b60c0();
    /* 005b64ed: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005b64f0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b64f2: jne 0x5b6517 */ if (!fZ) goto L_005b6517;
L_005b64f4:; BB(0x005b64f4);
    /* 005b64f4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b64f7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b64f8: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5b64fdu); f_005dcb00();
    /* 005b64fd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b6500: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005b6503: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b6506: mov dl, byte ptr [ecx + 0x4a0] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x4a0u))) & 0xffu);
    /* 005b650c: mov byte ptr [ebp - 9], dl */ W8((u32)(r_ebp+0xfffffff7u), (u8)r_edx);
    /* 005b650f: movzx eax, byte ptr [ebp - 9] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffff7u));
    /* 005b6513: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b6515: je 0x5b651b */ if (fZ) goto L_005b651b;
L_005b6517:; BB(0x005b6517);
    /* 005b6517: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005b6519: jmp 0x5b651f */ goto L_005b651f;
L_005b651b:; BB(0x005b651b);
    /* 005b651b: jmp 0x5b64d2 */ goto L_005b64d2;
L_005b651d:; BB(0x005b651d);
    /* 005b651d: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_005b651f:; BB(0x005b651f);
    /* 005b651f: mov esp, ebp */ r_esp = r_ebp;
    /* 005b6521: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b6522: ret  */ FN_RET(0x005b64c0); r_esp += 4; return;
}

void f_005b6530(void) /* sub_5B6530 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b6530);
    /* 005b6530: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b6531: mov ebp, esp */ r_ebp = r_esp;
    /* 005b6533: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b6536: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005b6539: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b653b: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005b653d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b6540: call 0x5b4f50 */ r_esp -= 4; W32(r_esp, 0x5b6545u); f_005b4f50();
    /* 005b6545: cmp eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b6548: jle 0x5b6551 */ if ((fZ||fS!=fO)) goto L_005b6551;
L_005b654a:; BB(0x005b654a);
    /* 005b654a: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005b654c: jmp 0x5b65e0 */ goto L_005b65e0;
L_005b6551:; BB(0x005b6551);
    /* 005b6551: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b6553: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005b6555: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b6558: call 0x5b4f50 */ r_esp -= 4; W32(r_esp, 0x5b655du); f_005b4f50();
    /* 005b655d: cmp eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b6560: jne 0x5b6586 */ if (!fZ) goto L_005b6586;
L_005b6562:; BB(0x005b6562);
    /* 005b6562: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b6564: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005b6566: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b6569: call 0x5b5260 */ r_esp -= 4; W32(r_esp, 0x5b656eu); f_005b5260();
    /* 005b656e: cmp eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b6571: je 0x5b6582 */ if (fZ) goto L_005b6582;
L_005b6573:; BB(0x005b6573);
    /* 005b6573: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b6576: call 0x5b3dc0 */ r_esp -= 4; W32(r_esp, 0x5b657bu); f_005b3dc0();
    /* 005b657b: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005b657e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b6580: jne 0x5b6586 */ if (!fZ) goto L_005b6586;
L_005b6582:; BB(0x005b6582);
    /* 005b6582: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005b6584: jmp 0x5b65e0 */ goto L_005b65e0;
L_005b6586:; BB(0x005b6586);
    /* 005b6586: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005b658d: jmp 0x5b6598 */ goto L_005b6598;
L_005b658f:; BB(0x005b658f);
    /* 005b658f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b6592: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b6595: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005b6598:; BB(0x005b6598);
    /* 005b6598: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b659c: jge 0x5b65de */ if ((fS==fO)) goto L_005b65de;
L_005b659e:; BB(0x005b659e);
    /* 005b659e: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005b65a5: jmp 0x5b65b0 */ goto L_005b65b0;
L_005b65a7:; BB(0x005b65a7);
    /* 005b65a7: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b65aa: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b65ad: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_005b65b0:; BB(0x005b65b0);
    /* 005b65b0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b65b3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b65b4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b65b7: call 0x5b58f0 */ r_esp -= 4; W32(r_esp, 0x5b65bcu); f_005b58f0();
    /* 005b65bc: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b65bf: jge 0x5b65dc */ if ((fS==fO)) goto L_005b65dc;
L_005b65c1:; BB(0x005b65c1);
    /* 005b65c1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b65c4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b65c5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b65c8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b65c9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b65cc: call 0x5b5010 */ r_esp -= 4; W32(r_esp, 0x5b65d1u); f_005b5010();
    /* 005b65d1: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b65d4: jne 0x5b65da */ if (!fZ) goto L_005b65da;
L_005b65d6:; BB(0x005b65d6);
    /* 005b65d6: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005b65d8: jmp 0x5b65e0 */ goto L_005b65e0;
L_005b65da:; BB(0x005b65da);
    /* 005b65da: jmp 0x5b65a7 */ goto L_005b65a7;
L_005b65dc:; BB(0x005b65dc);
    /* 005b65dc: jmp 0x5b658f */ goto L_005b658f;
L_005b65de:; BB(0x005b65de);
    /* 005b65de: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_005b65e0:; BB(0x005b65e0);
    /* 005b65e0: mov esp, ebp */ r_esp = r_ebp;
    /* 005b65e2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b65e3: ret  */ FN_RET(0x005b6530); r_esp += 4; return;
}

void f_005b65f0(void) /* sub_5B65F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b65f0);
    /* 005b65f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b65f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005b65f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b65f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b65f7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b65f9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b65fc: call 0x5b5fb0 */ r_esp -= 4; W32(r_esp, 0x5b6601u); f_005b5fb0();
    /* 005b6601: mov al, byte ptr [eax + 4] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0x4u))) & 0xffu);
    /* 005b6604: mov esp, ebp */ r_esp = r_ebp;
    /* 005b6606: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b6607: ret  */ FN_RET(0x005b65f0); r_esp += 4; return;
}

void f_005b6610(void) /* sub_5B6610 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b6610);
    /* 005b6610: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b6611: mov ebp, esp */ r_ebp = r_esp;
    /* 005b6613: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b6614: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b6617: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b661a: imul eax, eax, 0x118 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x118u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005b6620: add eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b6623: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b6626: mov al, byte ptr [ecx + eax + 0x60] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ecx+r_eax+0x60u))) & 0xffu);
    /* 005b662a: mov esp, ebp */ r_esp = r_ebp;
    /* 005b662c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b662d: ret 8 */ FN_RET(0x005b6610); r_esp += 12; return;
}

void f_005b6630(void) /* sub_5B6630 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b6630);
    /* 005b6630: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b6631: mov ebp, esp */ r_ebp = r_esp;
    /* 005b6633: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b6634: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b6637: mov ecx, dword ptr [0x793600] */ r_ecx = R32((u32)(0x793600u));
    /* 005b663d: call 0x5da830 */ r_esp -= 4; W32(r_esp, 0x5b6642u); f_005da830();
    /* 005b6642: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005b6645: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b6647: je 0x5b664f */ if (fZ) goto L_005b664f;
L_005b6649:; BB(0x005b6649);
    /* 005b6649: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005b664b: jmp 0x5b665c */ goto L_005b665c;
L_005b664f:; BB(0x005b664f);
    /* 005b664f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b6651: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b6654: call 0x5b5fb0 */ r_esp -= 4; W32(r_esp, 0x5b6659u); f_005b5fb0();
    /* 005b6659: mov al, byte ptr [eax + 2] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0x2u))) & 0xffu);
L_005b665c:; BB(0x005b665c);
    /* 005b665c: mov esp, ebp */ r_esp = r_ebp;
    /* 005b665e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b665f: ret  */ FN_RET(0x005b6630); r_esp += 4; return;
}

void f_005b6660(void) /* sub_5B6660 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b6660);
    /* 005b6660: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b6661: mov ebp, esp */ r_ebp = r_esp;
    /* 005b6663: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b6664: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b6667: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b666a: imul eax, eax, 0x118 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x118u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005b6670: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b6673: mov al, byte ptr [ecx + eax + 0x64] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ecx+r_eax+0x64u))) & 0xffu);
    /* 005b6677: mov esp, ebp */ r_esp = r_ebp;
    /* 005b6679: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b667a: ret 4 */ FN_RET(0x005b6660); r_esp += 8; return;
}

void f_005b6680(void) /* sub_5B6680 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b6680);
    /* 005b6680: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b6681: mov ebp, esp */ r_ebp = r_esp;
    /* 005b6683: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b6684: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b6687: mov ecx, dword ptr [0x793600] */ r_ecx = R32((u32)(0x793600u));
    /* 005b668d: call 0x5da830 */ r_esp -= 4; W32(r_esp, 0x5b6692u); f_005da830();
    /* 005b6692: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005b6695: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b6697: je 0x5b669f */ if (fZ) goto L_005b669f;
L_005b6699:; BB(0x005b6699);
    /* 005b6699: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005b669b: jmp 0x5b66b4 */ goto L_005b66b4;
L_005b669f:; BB(0x005b669f);
    /* 005b669f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b66a1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b66a4: call 0x5b5fb0 */ r_esp -= 4; W32(r_esp, 0x5b66a9u); f_005b5fb0();
    /* 005b66a9: movsx eax, byte ptr [eax + 0xb] */ r_eax = (u32)(i32)(i8)R8((u32)(r_eax+0xbu));
    /* 005b66ad: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 005b66af: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 005b66b1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_005b66b4:; BB(0x005b66b4);
    /* 005b66b4: mov esp, ebp */ r_esp = r_ebp;
    /* 005b66b6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b66b7: ret  */ FN_RET(0x005b6680); r_esp += 4; return;
}

void f_005b66c0(void) /* sub_5B66C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b66c0);
    /* 005b66c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b66c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005b66c3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b66c6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005b66c9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005b66d0: jmp 0x5b66db */ goto L_005b66db;
L_005b66d2:; BB(0x005b66d2);
    /* 005b66d2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b66d5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b66d8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005b66db:; BB(0x005b66db);
    /* 005b66db: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b66df: jge 0x5b66f7 */ if ((fS==fO)) goto L_005b66f7;
L_005b66e1:; BB(0x005b66e1);
    /* 005b66e1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b66e4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b66e5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b66e8: call 0x5b5ff0 */ r_esp -= 4; W32(r_esp, 0x5b66edu); f_005b5ff0();
    /* 005b66ed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005b66ef: jle 0x5b66f5 */ if ((fZ||fS!=fO)) goto L_005b66f5;
L_005b66f1:; BB(0x005b66f1);
    /* 005b66f1: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005b66f3: jmp 0x5b66f9 */ goto L_005b66f9;
L_005b66f5:; BB(0x005b66f5);
    /* 005b66f5: jmp 0x5b66d2 */ goto L_005b66d2;
L_005b66f7:; BB(0x005b66f7);
    /* 005b66f7: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_005b66f9:; BB(0x005b66f9);
    /* 005b66f9: mov esp, ebp */ r_esp = r_ebp;
    /* 005b66fb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b66fc: ret  */ FN_RET(0x005b66c0); r_esp += 4; return;
}

void f_005b6700(void) /* sub_5B6700 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b6700);
    /* 005b6700: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b6701: mov ebp, esp */ r_ebp = r_esp;
    /* 005b6703: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b6704: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b6707: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b670a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b670d: cmp dword ptr [ecx + eax*8 + 0x590], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*8+0x590u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b6715: jg 0x5b6727 */ if ((!fZ&&fS==fO)) goto L_005b6727;
L_005b6717:; BB(0x005b6717);
    /* 005b6717: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b671a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b671d: cmp dword ptr [eax + edx*8 + 0x644], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*8+0x644u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b6725: jle 0x5b672b */ if ((fZ||fS!=fO)) goto L_005b672b;
L_005b6727:; BB(0x005b6727);
    /* 005b6727: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005b6729: jmp 0x5b672d */ goto L_005b672d;
L_005b672b:; BB(0x005b672b);
    /* 005b672b: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_005b672d:; BB(0x005b672d);
    /* 005b672d: mov esp, ebp */ r_esp = r_ebp;
    /* 005b672f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b6730: ret 4 */ FN_RET(0x005b6700); r_esp += 8; return;
}

void f_005b6740(void) /* sub_5B6740 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b6740);
    /* 005b6740: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b6741: mov ebp, esp */ r_ebp = r_esp;
    /* 005b6743: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b6746: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b6749: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b674c: movzx ecx, byte ptr [eax + 0x5b4] */ r_ecx = (u32)R8((u32)(r_eax+0x5b4u));
    /* 005b6753: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b6755: jne 0x5b6773 */ if (!fZ) goto L_005b6773;
L_005b6757:; BB(0x005b6757);
    /* 005b6757: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b675a: call 0x5b6790 */ r_esp -= 4; W32(r_esp, 0x5b675fu); f_005b6790();
    /* 005b675f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b6762: cmp dword ptr [edx + 0x5b0], eax */ {  u32 a = R32((u32)(r_edx+0x5b0u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b6768: jge 0x5b6773 */ if ((fS==fO)) goto L_005b6773;
L_005b676a:; BB(0x005b676a);
    /* 005b676a: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005b6771: jmp 0x5b677a */ goto L_005b677a;
L_005b6773:; BB(0x005b6773);
    /* 005b6773: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
L_005b677a:; BB(0x005b677a);
    /* 005b677a: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 005b677d: mov esp, ebp */ r_esp = r_ebp;
    /* 005b677f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b6780: ret  */ FN_RET(0x005b6740); r_esp += 4; return;
}

void f_005b6790(void) /* sub_5B6790 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b6790);
    /* 005b6790: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b6791: mov ebp, esp */ r_ebp = r_esp;
    /* 005b6793: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b6796: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b6797: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b679a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b679d: mov esi, dword ptr [eax + 0x57c] */ r_esi = R32((u32)(r_eax+0x57cu));
    /* 005b67a3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b67a6: call 0x5b5c30 */ r_esp -= 4; W32(r_esp, 0x5b67abu); f_005b5c30();
    /* 005b67ab: movsx ecx, al */ r_ecx = (u32)(i32)(i8)(u8)r_eax;
    /* 005b67ae: imul ecx, dword ptr [esi + 0x80c] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_esi+0x80cu)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005b67b5: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005b67b8: fild dword ptr [ebp - 8] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff8u)));
    /* 005b67bb: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 005b67c1: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x5b67c6u); f_00686cc0();
    /* 005b67c6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b67c7: mov esp, ebp */ r_esp = r_ebp;
    /* 005b67c9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b67ca: ret  */ FN_RET(0x005b6790); r_esp += 4; return;
}

void f_005b67d0(void) /* sub_5B67D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b67d0);
    /* 005b67d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b67d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005b67d3: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b67d6: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005b67d9: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 005b67dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b67dd: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 005b67e0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b67e1: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005b67e4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b67e5: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005b67e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b67e9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b67ec: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b67ed: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b67f0: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b67f3: mov ecx, dword ptr [eax + edx*4 + 0x580] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x580u));
    /* 005b67fa: call 0x5b8ab0 */ r_esp -= 4; W32(r_esp, 0x5b67ffu); f_005b8ab0();
    /* 005b67ff: mov byte ptr [ebp - 1], 0 */ W8((u32)(r_ebp+0xffffffffu), 0x0u);
    /* 005b6803: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005b680a: jmp 0x5b6815 */ goto L_005b6815;
L_005b680c:; BB(0x005b680c);
    /* 005b680c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b680f: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b6812: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_005b6815:; BB(0x005b6815);
    /* 005b6815: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b6818: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b6819: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b681c: call 0x5b58f0 */ r_esp -= 4; W32(r_esp, 0x5b6821u); f_005b58f0();
    /* 005b6821: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b6824: jge 0x5b6845 */ if ((fS==fO)) goto L_005b6845;
L_005b6826:; BB(0x005b6826);
    /* 005b6826: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b6829: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b682a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b682d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b682e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b6831: call 0x5b3300 */ r_esp -= 4; W32(r_esp, 0x5b6836u); f_005b3300();
    /* 005b6836: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005b6839: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b683b: je 0x5b6843 */ if (fZ) goto L_005b6843;
L_005b683d:; BB(0x005b683d);
    /* 005b683d: mov byte ptr [ebp - 1], 1 */ W8((u32)(r_ebp+0xffffffffu), 0x1u);
    /* 005b6841: jmp 0x5b6845 */ goto L_005b6845;
L_005b6843:; BB(0x005b6843);
    /* 005b6843: jmp 0x5b680c */ goto L_005b680c;
L_005b6845:; BB(0x005b6845);
    /* 005b6845: movzx eax, byte ptr [ebp - 1] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 005b6849: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b684b: je 0x5b6866 */ if (fZ) goto L_005b6866;
L_005b684d:; BB(0x005b684d);
    /* 005b684d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b6850: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b6851: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5b6856u); f_005dcb00();
    /* 005b6856: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b6859: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005b685c: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b685f: mov byte ptr [edx + 0x4a2], 1 */ W8((u32)(r_edx+0x4a2u), 0x1u);
L_005b6866:; BB(0x005b6866);
    /* 005b6866: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005b6869: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b686a: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005b686d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b686e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b6871: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b6872: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b6875: call 0x5b71a0 */ r_esp -= 4; W32(r_esp, 0x5b687au); f_005b71a0();
    /* 005b687a: mov esp, ebp */ r_esp = r_ebp;
    /* 005b687c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b687d: ret 0x14 */ FN_RET(0x005b67d0); r_esp += 24; return;
}

void f_005b6880(void) /* sub_5B6880 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b6880);
    /* 005b6880: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b6881: mov ebp, esp */ r_ebp = r_esp;
    /* 005b6883: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b6886: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005b6889: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b688c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b688d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b6890: call 0x5b6700 */ r_esp -= 4; W32(r_esp, 0x5b6895u); f_005b6700();
    /* 005b6895: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005b6898: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b689a: jne 0x5b68a1 */ if (!fZ) goto L_005b68a1;
L_005b689c:; BB(0x005b689c);
    /* 005b689c: jmp 0x5b69a9 */ goto L_005b69a9;
L_005b68a1:; BB(0x005b68a1);
    /* 005b68a1: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b68a4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b68a5: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5b68aau); f_005dcb00();
    /* 005b68aa: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b68ad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b68af: jne 0x5b68b6 */ if (!fZ) goto L_005b68b6;
L_005b68b1:; BB(0x005b68b1);
    /* 005b68b1: jmp 0x5b69a9 */ goto L_005b69a9;
L_005b68b6:; BB(0x005b68b6);
    /* 005b68b6: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b68b9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b68ba: mov ecx, dword ptr [0x793600] */ r_ecx = R32((u32)(0x793600u));
    /* 005b68c0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005b68c2: mov ecx, dword ptr [0x793600] */ r_ecx = R32((u32)(0x793600u));
    /* 005b68c8: mov eax, dword ptr [edx + 0x290] */ r_eax = R32((u32)(r_edx+0x290u));
    /* 005b68ce: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5b68d0u); call_ind(t); }
    /* 005b68d0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b68d3: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b68d6: cmp dword ptr [edx + ecx*8 + 0x590], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*8+0x590u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b68de: jle 0x5b6916 */ if ((fZ||fS!=fO)) goto L_005b6916;
L_005b68e0:; BB(0x005b68e0);
    /* 005b68e0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b68e2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b68e4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b68e7: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b68ea: lea edx, [ecx + eax*8 + 0x590] */ r_edx = (u32)(r_ecx+r_eax*8+0x590u);
    /* 005b68f1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b68f2: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b68f5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b68f8: mov edx, dword ptr [ecx + eax*4 + 0x580] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x580u));
    /* 005b68ff: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b6902: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b6905: mov ecx, dword ptr [ecx + eax*4 + 0x580] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x580u));
    /* 005b690c: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005b690e: mov eax, dword ptr [edx + 0xc4] */ r_eax = R32((u32)(r_edx+0xc4u));
    /* 005b6914: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5b6916u); call_ind(t); }
L_005b6916:; BB(0x005b6916);
    /* 005b6916: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b6919: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b691c: cmp dword ptr [edx + ecx*8 + 0x644], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*8+0x644u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b6924: jle 0x5b695c */ if ((fZ||fS!=fO)) goto L_005b695c;
L_005b6926:; BB(0x005b6926);
    /* 005b6926: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b6928: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b692a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b692d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b6930: lea edx, [ecx + eax*8 + 0x644] */ r_edx = (u32)(r_ecx+r_eax*8+0x644u);
    /* 005b6937: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b6938: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b693b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b693e: mov edx, dword ptr [ecx + eax*4 + 0x634] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x634u));
    /* 005b6945: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b6948: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b694b: mov ecx, dword ptr [ecx + eax*4 + 0x634] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x634u));
    /* 005b6952: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005b6954: mov eax, dword ptr [edx + 0xc4] */ r_eax = R32((u32)(r_edx+0xc4u));
    /* 005b695a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5b695cu); call_ind(t); }
L_005b695c:; BB(0x005b695c);
    /* 005b695c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b695f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b6960: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5b6965u); f_005dcb00();
    /* 005b6965: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b6968: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005b696b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b696e: mov byte ptr [edx + 0x4a0], 1 */ W8((u32)(r_edx+0x4a0u), 0x1u);
    /* 005b6975: mov ecx, dword ptr [0x7935f8] */ r_ecx = R32((u32)(0x7935f8u));
    /* 005b697b: call 0x5a7ea0 */ r_esp -= 4; W32(r_esp, 0x5b6980u); f_005a7ea0();
    /* 005b6980: mov ecx, dword ptr [0x793600] */ r_ecx = R32((u32)(0x793600u));
    /* 005b6986: call 0x5db890 */ r_esp -= 4; W32(r_esp, 0x5b698bu); f_005db890();
    /* 005b698b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b698d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b698f: mov eax, dword ptr [0x793600] */ r_eax = R32((u32)(0x793600u));
    /* 005b6994: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005b6997: mov edx, dword ptr [0x793600] */ r_edx = R32((u32)(0x793600u));
    /* 005b699d: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005b69a0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005b69a2: mov ecx, eax */ r_ecx = r_eax;
    /* 005b69a4: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005b69a7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5b69a9u); call_ind(t); }
L_005b69a9:; BB(0x005b69a9);
    /* 005b69a9: mov esp, ebp */ r_esp = r_ebp;
    /* 005b69ab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b69ac: ret 4 */ FN_RET(0x005b6880); r_esp += 8; return;
}

void f_005b69b0(void) /* sub_5B69B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b69b0);
    /* 005b69b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b69b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005b69b3: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b69b6: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005b69b9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005b69c0: jmp 0x5b69cb */ goto L_005b69cb;
L_005b69c2:; BB(0x005b69c2);
    /* 005b69c2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b69c5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b69c8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005b69cb:; BB(0x005b69cb);
    /* 005b69cb: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b69cf: jge 0x5b6a4c */ if ((fS==fO)) goto L_005b6a4c;
L_005b69d1:; BB(0x005b69d1);
    /* 005b69d1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b69d4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b69d5: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5b69dau); f_005dcb00();
    /* 005b69da: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b69dd: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005b69e0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b69e3: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5b69e8u); f_0063aac0();
    /* 005b69e8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005b69ea: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005b69ed: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b69ef: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b69f3: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 005b69f6: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005b69f9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b69fb: jne 0x5b6a47 */ if (!fZ) goto L_005b6a47;
L_005b69fd:; BB(0x005b69fd);
    /* 005b69fd: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b6a00: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b6a01: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5b6a06u); f_005dcb00();
    /* 005b6a06: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b6a09: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005b6a0c: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b6a0f: mov cl, byte ptr [eax + 0x4a1] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x4a1u))) & 0xffu);
    /* 005b6a15: mov byte ptr [ebp - 0x11], cl */ W8((u32)(r_ebp+0xffffffefu), (u8)r_ecx);
    /* 005b6a18: movzx edx, byte ptr [ebp - 0x11] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffefu));
    /* 005b6a1c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b6a1e: jne 0x5b6a47 */ if (!fZ) goto L_005b6a47;
L_005b6a20:; BB(0x005b6a20);
    /* 005b6a20: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b6a23: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b6a24: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5b6a29u); f_005dcb00();
    /* 005b6a29: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b6a2c: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005b6a2f: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005b6a32: mov dl, byte ptr [ecx + 0x4a0] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x4a0u))) & 0xffu);
    /* 005b6a38: mov byte ptr [ebp - 0x19], dl */ W8((u32)(r_ebp+0xffffffe7u), (u8)r_edx);
    /* 005b6a3b: movzx eax, byte ptr [ebp - 0x19] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffe7u));
    /* 005b6a3f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b6a41: jne 0x5b6a47 */ if (!fZ) goto L_005b6a47;
L_005b6a43:; BB(0x005b6a43);
    /* 005b6a43: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005b6a45: jmp 0x5b6a4e */ goto L_005b6a4e;
L_005b6a47:; BB(0x005b6a47);
    /* 005b6a47: jmp 0x5b69c2 */ goto L_005b69c2;
L_005b6a4c:; BB(0x005b6a4c);
    /* 005b6a4c: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_005b6a4e:; BB(0x005b6a4e);
    /* 005b6a4e: mov esp, ebp */ r_esp = r_ebp;
    /* 005b6a50: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b6a51: ret  */ FN_RET(0x005b69b0); r_esp += 4; return;
}

void f_005b6a60(void) /* sub_5B6A60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b6a60);
    /* 005b6a60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b6a61: mov ebp, esp */ r_ebp = r_esp;
    /* 005b6a63: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b6a66: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 005b6a69: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b6a6b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b6a6d: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005b6a70: call 0x5b70e0 */ r_esp -= 4; W32(r_esp, 0x5b6a75u); f_005b70e0();
    /* 005b6a75: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005b6a78: call 0x5b8430 */ r_esp -= 4; W32(r_esp, 0x5b6a7du); f_005b8430();
    /* 005b6a7d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005b6a84: jmp 0x5b6a8f */ goto L_005b6a8f;
L_005b6a86:; BB(0x005b6a86);
    /* 005b6a86: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b6a89: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b6a8c: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005b6a8f:; BB(0x005b6a8f);
    /* 005b6a8f: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b6a93: jge 0x5b6abb */ if ((fS==fO)) goto L_005b6abb;
L_005b6a95:; BB(0x005b6a95);
    /* 005b6a95: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b6a98: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005b6a9b: mov ecx, dword ptr [edx + ecx*4 + 0x580] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x580u));
    /* 005b6aa2: call 0x5cb9b0 */ r_esp -= 4; W32(r_esp, 0x5b6aa7u); f_005cb9b0();
    /* 005b6aa7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b6aaa: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005b6aad: mov ecx, dword ptr [ecx + eax*4 + 0x634] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x634u));
    /* 005b6ab4: call 0x5cb9b0 */ r_esp -= 4; W32(r_esp, 0x5b6ab9u); f_005cb9b0();
    /* 005b6ab9: jmp 0x5b6a86 */ goto L_005b6a86;
L_005b6abb:; BB(0x005b6abb);
    /* 005b6abb: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005b6ac2: jmp 0x5b6acd */ goto L_005b6acd;
L_005b6ac4:; BB(0x005b6ac4);
    /* 005b6ac4: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b6ac7: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b6aca: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_005b6acd:; BB(0x005b6acd);
    /* 005b6acd: cmp dword ptr [ebp - 8], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b6ad1: jge 0x5b6b35 */ if ((fS==fO)) goto L_005b6b35;
L_005b6ad3:; BB(0x005b6ad3);
    /* 005b6ad3: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005b6ada: jmp 0x5b6ae5 */ goto L_005b6ae5;
L_005b6adc:; BB(0x005b6adc);
    /* 005b6adc: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b6adf: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b6ae2: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_005b6ae5:; BB(0x005b6ae5);
    /* 005b6ae5: cmp dword ptr [ebp - 0xc], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b6ae9: jge 0x5b6b33 */ if ((fS==fO)) goto L_005b6b33;
L_005b6aeb:; BB(0x005b6aeb);
    /* 005b6aeb: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005b6af2: jmp 0x5b6afd */ goto L_005b6afd;
L_005b6af4:; BB(0x005b6af4);
    /* 005b6af4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b6af7: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b6afa: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_005b6afd:; BB(0x005b6afd);
    /* 005b6afd: cmp dword ptr [ebp - 0x10], 0x16 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b6b01: jge 0x5b6b31 */ if ((fS==fO)) goto L_005b6b31;
L_005b6b03:; BB(0x005b6b03);
    /* 005b6b03: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b6b05: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b6b08: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b6b09: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b6b0c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b6b0d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b6b10: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b6b11: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005b6b14: call 0x5b7340 */ r_esp -= 4; W32(r_esp, 0x5b6b19u); f_005b7340();
    /* 005b6b19: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b6b1b: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b6b1e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b6b1f: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b6b22: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b6b23: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b6b26: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b6b27: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005b6b2a: call 0x5b70b0 */ r_esp -= 4; W32(r_esp, 0x5b6b2fu); f_005b70b0();
    /* 005b6b2f: jmp 0x5b6af4 */ goto L_005b6af4;
L_005b6b31:; BB(0x005b6b31);
    /* 005b6b31: jmp 0x5b6adc */ goto L_005b6adc;
L_005b6b33:; BB(0x005b6b33);
    /* 005b6b33: jmp 0x5b6ac4 */ goto L_005b6ac4;
L_005b6b35:; BB(0x005b6b35);
    /* 005b6b35: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 005b6b3c: jmp 0x5b6b47 */ goto L_005b6b47;
L_005b6b3e:; BB(0x005b6b3e);
    /* 005b6b3e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b6b41: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b6b44: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
L_005b6b47:; BB(0x005b6b47);
    /* 005b6b47: cmp dword ptr [ebp - 0x14], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b6b4b: jge 0x5b6c39 */ if ((fS==fO)) goto L_005b6c39;
L_005b6b51:; BB(0x005b6b51);
    /* 005b6b51: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005b6b54: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b6b55: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5b6b5au); f_005dcb00();
    /* 005b6b5a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b6b5d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005b6b60: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005b6b63: mov byte ptr [ecx + 0x4a2], 0 */ W8((u32)(r_ecx+0x4a2u), 0x0u);
    /* 005b6b6a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b6b6d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b6b6e: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5b6b73u); f_005dcb00();
    /* 005b6b73: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b6b76: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005b6b79: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005b6b7c: mov byte ptr [eax + 0x4a0], 0 */ W8((u32)(r_eax+0x4a0u), 0x0u);
    /* 005b6b83: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b6b86: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b6b87: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5b6b8cu); f_005dcb00();
    /* 005b6b8c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b6b8f: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005b6b92: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005b6b95: mov byte ptr [edx + 0x4a1], 0 */ W8((u32)(r_edx+0x4a1u), 0x0u);
    /* 005b6b9c: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 005b6ba3: jmp 0x5b6bae */ goto L_005b6bae;
L_005b6ba5:; BB(0x005b6ba5);
    /* 005b6ba5: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005b6ba8: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b6bab: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_005b6bae:; BB(0x005b6bae);
    /* 005b6bae: cmp dword ptr [ebp - 0x18], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b6bb2: jge 0x5b6bf0 */ if ((fS==fO)) goto L_005b6bf0;
L_005b6bb4:; BB(0x005b6bb4);
    /* 005b6bb4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b6bb7: imul ecx, ecx, 0x118 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x118u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005b6bbd: add ecx, dword ptr [ebp - 0x18] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b6bc0: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005b6bc3: mov byte ptr [edx + ecx + 0x5c], 0 */ W8((u32)(r_edx+r_ecx+0x5cu), 0x0u);
    /* 005b6bc8: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b6bca: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005b6bcd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b6bce: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b6bd1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b6bd2: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005b6bd5: call 0x5b71a0 */ r_esp -= 4; W32(r_esp, 0x5b6bdau); f_005b71a0();
    /* 005b6bda: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b6bdd: imul edx, edx, 0x118 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x118u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005b6be3: add edx, dword ptr [ebp - 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b6be6: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005b6be9: mov byte ptr [eax + edx + 0x60], 0 */ W8((u32)(r_eax+r_edx+0x60u), 0x0u);
    /* 005b6bee: jmp 0x5b6ba5 */ goto L_005b6ba5;
L_005b6bf0:; BB(0x005b6bf0);
    /* 005b6bf0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b6bf3: imul ecx, ecx, 0x118 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x118u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005b6bf9: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005b6bfc: mov byte ptr [edx + ecx + 0x67], 0 */ W8((u32)(r_edx+r_ecx+0x67u), 0x0u);
    /* 005b6c01: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005b6c04: imul eax, eax, 0x118 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x118u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005b6c0a: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005b6c0d: mov byte ptr [ecx + eax + 0x65], 0 */ W8((u32)(r_ecx+r_eax+0x65u), 0x0u);
    /* 005b6c12: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b6c15: imul edx, edx, 0x118 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x118u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005b6c1b: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005b6c1e: mov byte ptr [eax + edx + 0x66], 0 */ W8((u32)(r_eax+r_edx+0x66u), 0x0u);
    /* 005b6c23: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b6c26: imul ecx, ecx, 0x118 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x118u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005b6c2c: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005b6c2f: mov byte ptr [edx + ecx + 0x64], 0 */ W8((u32)(r_edx+r_ecx+0x64u), 0x0u);
    /* 005b6c34: jmp 0x5b6b3e */ goto L_005b6b3e;
L_005b6c39:; BB(0x005b6c39);
    /* 005b6c39: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 005b6c40: jmp 0x5b6c4b */ goto L_005b6c4b;
L_005b6c42:; BB(0x005b6c42);
    /* 005b6c42: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005b6c45: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b6c48: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
L_005b6c4b:; BB(0x005b6c4b);
    /* 005b6c4b: cmp dword ptr [ebp - 0x1c], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b6c4f: jge 0x5b6c7f */ if ((fS==fO)) goto L_005b6c7f;
L_005b6c51:; BB(0x005b6c51);
    /* 005b6c51: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b6c53: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005b6c56: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b6c57: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005b6c5a: call 0x5b73a0 */ r_esp -= 4; W32(r_esp, 0x5b6c5fu); f_005b73a0();
    /* 005b6c5f: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005b6c62: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005b6c65: mov dword ptr [eax + edx*4 + 0x664], 0xffffffff */ W32((u32)(r_eax+r_edx*4+0x664u), 0xffffffffu);
    /* 005b6c70: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005b6c73: add ecx, dword ptr [ebp - 0x1c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b6c76: mov byte ptr [ecx + 0x674], 0 */ W8((u32)(r_ecx+0x674u), 0x0u);
    /* 005b6c7d: jmp 0x5b6c42 */ goto L_005b6c42;
L_005b6c7f:; BB(0x005b6c7f);
    /* 005b6c7f: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005b6c82: mov dword ptr [edx + 0x5bc], 0xffffffff */ W32((u32)(r_edx+0x5bcu), 0xffffffffu);
    /* 005b6c8c: mov esp, ebp */ r_esp = r_ebp;
    /* 005b6c8e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b6c8f: ret  */ FN_RET(0x005b6a60); r_esp += 4; return;
}

void f_005b6c90(void) /* sub_5B6C90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b6c90);
    /* 005b6c90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b6c91: mov ebp, esp */ r_ebp = r_esp;
    /* 005b6c93: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b6c96: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005b6c99: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b6c9c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b6c9d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b6ca0: call 0x5b4e50 */ r_esp -= 4; W32(r_esp, 0x5b6ca5u); f_005b4e50();
    /* 005b6ca5: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005b6ca8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b6cab: mov edx, dword ptr [ecx + 0x5bc] */ r_edx = R32((u32)(r_ecx+0x5bcu));
    /* 005b6cb1: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005b6cb4: cmp dword ptr [ebp - 0xc], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005b6cb8: ja 0x5b6e01 */ if ((!fC&&!fZ)) goto L_005b6e01;
L_005b6cbe:; BB(0x005b6cbe);
    /* 005b6cbe: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b6cc1: jmp dword ptr [eax*4 + 0x5b6e14] */ { u32 t = R32((u32)(r_eax*4+0x5b6e14u)); switch (t) { case 0x5b6cdbu: goto L_005b6cdb; case 0x5b6cecu: goto L_005b6cec; case 0x5b6da5u: goto L_005b6da5; case 0x5b6e01u: goto L_005b6e01; case 0x5b6cc8u: goto L_005b6cc8; default: UNSUP(0x005b6cc1, "jump table entry is not a known target"); } }
L_005b6cc8:; BB(0x005b6cc8);
    /* 005b6cc8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b6ccb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b6ccc: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5b6cd1u); f_005dcb00();
    /* 005b6cd1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b6cd4: mov byte ptr [eax + 0x4b0], 1 */ W8((u32)(r_eax+0x4b0u), 0x1u);
L_005b6cdb:; BB(0x005b6cdb);
    /* 005b6cdb: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b6cde: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b6cdf: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b6ce2: call 0x5b3f80 */ r_esp -= 4; W32(r_esp, 0x5b6ce7u); f_005b3f80();
    /* 005b6ce7: jmp 0x5b6e01 */ goto L_005b6e01;
L_005b6cec:; BB(0x005b6cec);
    /* 005b6cec: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b6cee: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b6cf1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b6cf2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b6cf5: call 0x5b3300 */ r_esp -= 4; W32(r_esp, 0x5b6cfau); f_005b3300();
    /* 005b6cfa: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005b6cfd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b6cff: je 0x5b6d4a */ if (fZ) goto L_005b6d4a;
L_005b6d01:; BB(0x005b6d01);
    /* 005b6d01: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b6d03: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b6d05: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b6d07: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b6d0a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b6d0b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b6d0e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b6d0f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b6d12: call 0x5b67d0 */ r_esp -= 4; W32(r_esp, 0x5b6d17u); f_005b67d0();
    /* 005b6d17: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005b6d19: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b6d1c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b6d1d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b6d20: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b6d21: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b6d24: call 0x5b71a0 */ r_esp -= 4; W32(r_esp, 0x5b6d29u); f_005b71a0();
    /* 005b6d29: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b6d2c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b6d2d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b6d30: call 0x5b3f80 */ r_esp -= 4; W32(r_esp, 0x5b6d35u); f_005b3f80();
    /* 005b6d35: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b6d38: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b6d39: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5b6d3eu); f_005dcb00();
    /* 005b6d3e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b6d41: mov byte ptr [eax + 0x4b0], 1 */ W8((u32)(r_eax+0x4b0u), 0x1u);
    /* 005b6d48: jmp 0x5b6da3 */ goto L_005b6da3;
L_005b6d4a:; BB(0x005b6d4a);
    /* 005b6d4a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b6d4d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b6d4e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b6d51: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b6d52: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b6d55: call 0x5b4f50 */ r_esp -= 4; W32(r_esp, 0x5b6d5au); f_005b4f50();
    /* 005b6d5a: cmp eax, 0x15 */ {  u32 a = r_eax; u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b6d5d: jne 0x5b6d6d */ if (!fZ) goto L_005b6d6d;
L_005b6d5f:; BB(0x005b6d5f);
    /* 005b6d5f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b6d62: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b6d63: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b6d66: call 0x5b3f80 */ r_esp -= 4; W32(r_esp, 0x5b6d6bu); f_005b3f80();
    /* 005b6d6b: jmp 0x5b6da3 */ goto L_005b6da3;
L_005b6d6d:; BB(0x005b6d6d);
    /* 005b6d6d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b6d70: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b6d71: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b6d74: call 0x5b6170 */ r_esp -= 4; W32(r_esp, 0x5b6d79u); f_005b6170();
    /* 005b6d79: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005b6d7c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b6d7e: je 0x5b6da3 */ if (fZ) goto L_005b6da3;
L_005b6d80:; BB(0x005b6d80);
    /* 005b6d80: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b6d83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b6d84: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b6d87: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b6d88: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b6d8b: call 0x5b3710 */ r_esp -= 4; W32(r_esp, 0x5b6d90u); f_005b3710();
    /* 005b6d90: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005b6d93: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b6d95: jne 0x5b6da3 */ if (!fZ) goto L_005b6da3;
L_005b6d97:; BB(0x005b6d97);
    /* 005b6d97: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b6d9a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b6d9b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b6d9e: call 0x5b3f80 */ r_esp -= 4; W32(r_esp, 0x5b6da3u); f_005b3f80();
L_005b6da3:; BB(0x005b6da3);
    /* 005b6da3: jmp 0x5b6e01 */ goto L_005b6e01;
L_005b6da5:; BB(0x005b6da5);
    /* 005b6da5: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b6da7: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b6daa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b6dab: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b6dae: call 0x5b3300 */ r_esp -= 4; W32(r_esp, 0x5b6db3u); f_005b3300();
    /* 005b6db3: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005b6db6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b6db8: je 0x5b6df5 */ if (fZ) goto L_005b6df5;
L_005b6dba:; BB(0x005b6dba);
    /* 005b6dba: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b6dbc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b6dbe: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b6dc0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b6dc3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b6dc4: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b6dc7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b6dc8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b6dcb: call 0x5b67d0 */ r_esp -= 4; W32(r_esp, 0x5b6dd0u); f_005b67d0();
    /* 005b6dd0: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005b6dd2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b6dd5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b6dd6: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b6dd9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b6dda: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b6ddd: call 0x5b71a0 */ r_esp -= 4; W32(r_esp, 0x5b6de2u); f_005b71a0();
    /* 005b6de2: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b6de5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b6de6: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5b6debu); f_005dcb00();
    /* 005b6deb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b6dee: mov byte ptr [eax + 0x4b0], 1 */ W8((u32)(r_eax+0x4b0u), 0x1u);
L_005b6df5:; BB(0x005b6df5);
    /* 005b6df5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b6df8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b6df9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b6dfc: call 0x5b3f80 */ r_esp -= 4; W32(r_esp, 0x5b6e01u); f_005b3f80();
L_005b6e01:; BB(0x005b6e01);
    /* 005b6e01: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b6e04: mov dword ptr [ecx + 0x5bc], 0xffffffff */ W32((u32)(r_ecx+0x5bcu), 0xffffffffu);
    /* 005b6e0e: mov esp, ebp */ r_esp = r_ebp;
    /* 005b6e10: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b6e11: ret 4 */ FN_RET(0x005b6c90); r_esp += 8; return;
}

void f_005b6f40(void) /* sub_5B6F40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b6f40);
    /* 005b6f40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b6f41: mov ebp, esp */ r_ebp = r_esp;
    /* 005b6f43: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b6f46: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b6f47: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 005b6f4a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005b6f51: jmp 0x5b6f5c */ goto L_005b6f5c;
L_005b6f53:; BB(0x005b6f53);
    /* 005b6f53: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b6f56: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b6f59: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005b6f5c:; BB(0x005b6f5c);
    /* 005b6f5c: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b6f60: jge 0x5b707e */ if ((fS==fO)) goto L_005b707e;
L_005b6f66:; BB(0x005b6f66);
    /* 005b6f66: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b6f69: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b6f6a: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5b6f6fu); f_005dcb00();
    /* 005b6f6f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b6f72: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005b6f75: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005b6f78: mov al, byte ptr [edx + 0x4a0] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x4a0u))) & 0xffu);
    /* 005b6f7e: mov byte ptr [ebp - 0x29], al */ W8((u32)(r_ebp+0xffffffd7u), (u8)r_eax);
    /* 005b6f81: movzx ecx, byte ptr [ebp - 0x29] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffd7u));
    /* 005b6f85: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b6f87: je 0x5b7021 */ if (fZ) goto L_005b7021;
L_005b6f8d:; BB(0x005b6f8d);
    /* 005b6f8d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b6f90: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005b6f93: mov ecx, dword ptr [eax + edx*4 + 0x580] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x580u));
    /* 005b6f9a: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 005b6f9d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b6fa0: shl edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 005b6fa3: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005b6fa6: lea ecx, [eax + edx + 0x48] */ r_ecx = (u32)(r_eax+r_edx+0x48u);
    /* 005b6faa: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005b6fac: shl edx, 3 */ { u32 c = (3u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 005b6faf: mov eax, dword ptr [ecx + edx] */ r_eax = R32((u32)(r_ecx+r_edx));
    /* 005b6fb2: mov ecx, dword ptr [ecx + edx + 4] */ r_ecx = R32((u32)(r_ecx+r_edx+0x4u));
    /* 005b6fb6: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005b6fb9: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005b6fbc: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b6fbf: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b6fc2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b6fc5: mov esi, dword ptr [ebp - 0x38] */ r_esi = R32((u32)(r_ebp+0xffffffc8u));
    /* 005b6fc8: mov dword ptr [esi + ecx*8 + 0x590], edx */ W32((u32)(r_esi+r_ecx*8+0x590u), r_edx);
    /* 005b6fcf: mov dword ptr [esi + ecx*8 + 0x594], eax */ W32((u32)(r_esi+r_ecx*8+0x594u), r_eax);
    /* 005b6fd6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b6fd9: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005b6fdc: mov ecx, dword ptr [eax + edx*4 + 0x634] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x634u));
    /* 005b6fe3: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 005b6fe6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b6fe9: shl edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 005b6fec: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005b6fef: lea ecx, [eax + edx + 0x48] */ r_ecx = (u32)(r_eax+r_edx+0x48u);
    /* 005b6ff3: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005b6ff5: shl edx, 3 */ { u32 c = (3u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 005b6ff8: mov eax, dword ptr [ecx + edx] */ r_eax = R32((u32)(r_ecx+r_edx));
    /* 005b6ffb: mov ecx, dword ptr [ecx + edx + 4] */ r_ecx = R32((u32)(r_ecx+r_edx+0x4u));
    /* 005b6fff: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005b7002: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005b7005: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b7008: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b700b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b700e: mov esi, dword ptr [ebp - 0x38] */ r_esi = R32((u32)(r_ebp+0xffffffc8u));
    /* 005b7011: mov dword ptr [esi + ecx*8 + 0x644], edx */ W32((u32)(r_esi+r_ecx*8+0x644u), r_edx);
    /* 005b7018: mov dword ptr [esi + ecx*8 + 0x648], eax */ W32((u32)(r_esi+r_ecx*8+0x648u), r_eax);
    /* 005b701f: jmp 0x5b7079 */ goto L_005b7079;
L_005b7021:; BB(0x005b7021);
    /* 005b7021: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b7023: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b7025: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5b702au); f_0064c8a0();
    /* 005b702a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b702d: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005b7030: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 005b7033: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b7036: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005b7039: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005b703c: mov dword ptr [eax + edx*8 + 0x590], ecx */ W32((u32)(r_eax+r_edx*8+0x590u), r_ecx);
    /* 005b7043: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005b7046: mov dword ptr [eax + edx*8 + 0x594], ecx */ W32((u32)(r_eax+r_edx*8+0x594u), r_ecx);
    /* 005b704d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b704f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b7051: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5b7056u); f_0064c8a0();
    /* 005b7056: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b7059: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005b705c: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 005b705f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b7062: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005b7065: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005b7068: mov dword ptr [eax + edx*8 + 0x644], ecx */ W32((u32)(r_eax+r_edx*8+0x644u), r_ecx);
    /* 005b706f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005b7072: mov dword ptr [eax + edx*8 + 0x648], ecx */ W32((u32)(r_eax+r_edx*8+0x648u), r_ecx);
L_005b7079:; BB(0x005b7079);
    /* 005b7079: jmp 0x5b6f53 */ goto L_005b6f53;
L_005b707e:; BB(0x005b707e);
    /* 005b707e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b707f: mov esp, ebp */ r_esp = r_ebp;
    /* 005b7081: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b7082: ret  */ FN_RET(0x005b6f40); r_esp += 4; return;
}

