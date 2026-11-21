#include "protos.h"

void f_00442180(void) /* sub_442180 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00442180);
    /* 00442180: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00442181: mov ebp, esp */ r_ebp = r_esp;
    /* 00442183: sub esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00442186: mov dword ptr [ebp - 0x64], ecx */ W32((u32)(r_ebp+0xffffff9cu), r_ecx);
    /* 00442189: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00442190: jmp 0x44219b */ goto L_0044219b;
L_00442192:; BB(0x00442192);
    /* 00442192: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00442195: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00442198: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0044219b:; BB(0x0044219b);
    /* 0044219b: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044219f: jge 0x4421cb */ if ((fS==fO)) goto L_004421cb;
L_004421a1:; BB(0x004421a1);
    /* 004421a1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004421a4: imul ecx, ecx, 0x78 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x78u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004421a7: mov edx, dword ptr [0x7906f0] */ r_edx = R32((u32)(0x7906f0u));
    /* 004421ad: mov eax, dword ptr [edx + ecx + 0x48] */ r_eax = R32((u32)(r_edx+r_ecx+0x48u));
    /* 004421b1: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 004421b4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004421b7: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 004421ba: mov dword ptr [ebp + ecx*4 - 0x18], edx */ W32((u32)(r_ebp+r_ecx*4+0xffffffe8u), r_edx);
    /* 004421be: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004421c1: mov dword ptr [ebp + eax*4 - 0x2c], 0xffffffff */ W32((u32)(r_ebp+r_eax*4+0xffffffd4u), 0xffffffffu);
    /* 004421c9: jmp 0x442192 */ goto L_00442192;
L_004421cb:; BB(0x004421cb);
    /* 004421cb: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004421d2: jmp 0x4421dd */ goto L_004421dd;
L_004421d4:; BB(0x004421d4);
    /* 004421d4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004421d7: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004421da: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_004421dd:; BB(0x004421dd);
    /* 004421dd: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004421e1: jge 0x442226 */ if ((fS==fO)) goto L_00442226;
L_004421e3:; BB(0x004421e3);
    /* 004421e3: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 004421ea: jmp 0x4421f5 */ goto L_004421f5;
L_004421ec:; BB(0x004421ec);
    /* 004421ec: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004421ef: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004421f2: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
L_004421f5:; BB(0x004421f5);
    /* 004421f5: cmp dword ptr [ebp - 0x30], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004421f9: jge 0x442224 */ if ((fS==fO)) goto L_00442224;
L_004421fb:; BB(0x004421fb);
    /* 004421fb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004421fe: imul eax, eax, 0x78 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x78u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00442201: mov ecx, dword ptr [0x7906f0] */ r_ecx = R32((u32)(0x7906f0u));
    /* 00442207: mov edx, dword ptr [ecx + eax + 0x6c] */ r_edx = R32((u32)(r_ecx+r_eax+0x6cu));
    /* 0044220b: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 0044220e: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00442211: cmp eax, dword ptr [ebp - 0x30] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffd0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00442214: jne 0x442222 */ if (!fZ) goto L_00442222;
L_00442216:; BB(0x00442216);
    /* 00442216: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00442219: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044221c: mov dword ptr [ebp + ecx*4 - 0x2c], edx */ W32((u32)(r_ebp+r_ecx*4+0xffffffd4u), r_edx);
    /* 00442220: jmp 0x442224 */ goto L_00442224;
L_00442222:; BB(0x00442222);
    /* 00442222: jmp 0x4421ec */ goto L_004421ec;
L_00442224:; BB(0x00442224);
    /* 00442224: jmp 0x4421d4 */ goto L_004421d4;
L_00442226:; BB(0x00442226);
    /* 00442226: push 0x443410 */ { u32 v = 0x443410u; r_esp -= 4; W32(r_esp, v); }
    /* 0044222b: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0044222d: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0044222f: lea eax, [ebp - 0x18] */ r_eax = (u32)(r_ebp+0xffffffe8u);
    /* 00442232: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00442233: call dword ptr [0x6b2248] */ { u32 t = R32((u32)(0x6b2248u)); r_esp -= 4; W32(r_esp, 0x442239u); call_ind(t); }
    /* 00442239: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044223c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00442243: jmp 0x44224e */ goto L_0044224e;
L_00442245:; BB(0x00442245);
    /* 00442245: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00442248: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0044224b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0044224e:; BB(0x0044224e);
    /* 0044224e: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00442252: jge 0x4422a5 */ if ((fS==fO)) goto L_004422a5;
L_00442254:; BB(0x00442254);
    /* 00442254: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0044225b: jmp 0x442266 */ goto L_00442266;
L_0044225d:; BB(0x0044225d);
    /* 0044225d: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00442260: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00442263: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
L_00442266:; BB(0x00442266);
    /* 00442266: cmp dword ptr [ebp - 0x30], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044226a: jge 0x4422a3 */ if ((fS==fO)) goto L_004422a3;
L_0044226c:; BB(0x0044226c);
    /* 0044226c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044226f: imul eax, eax, 0x78 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x78u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00442272: mov ecx, dword ptr [0x7906f0] */ r_ecx = R32((u32)(0x7906f0u));
    /* 00442278: mov edx, dword ptr [ecx + eax + 0x48] */ r_edx = R32((u32)(r_ecx+r_eax+0x48u));
    /* 0044227c: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 0044227f: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00442282: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00442285: cmp ecx, dword ptr [ebp + eax*4 - 0x18] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+r_eax*4+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00442289: jne 0x4422a1 */ if (!fZ) goto L_004422a1;
L_0044228b:; BB(0x0044228b);
    /* 0044228b: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0044228e: cmp dword ptr [ebp + edx*4 - 0x2c], -1 */ {  u32 a = R32((u32)(r_ebp+r_edx*4+0xffffffd4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00442293: jne 0x4422a1 */ if (!fZ) goto L_004422a1;
L_00442295:; BB(0x00442295);
    /* 00442295: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00442298: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044229b: mov dword ptr [ebp + eax*4 - 0x2c], ecx */ W32((u32)(r_ebp+r_eax*4+0xffffffd4u), r_ecx);
    /* 0044229f: jmp 0x4422a3 */ goto L_004422a3;
L_004422a1:; BB(0x004422a1);
    /* 004422a1: jmp 0x44225d */ goto L_0044225d;
L_004422a3:; BB(0x004422a3);
    /* 004422a3: jmp 0x442245 */ goto L_00442245;
L_004422a5:; BB(0x004422a5);
    /* 004422a5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004422ac: jmp 0x4422b7 */ goto L_004422b7;
L_004422ae:; BB(0x004422ae);
    /* 004422ae: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004422b1: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004422b4: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_004422b7:; BB(0x004422b7);
    /* 004422b7: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004422bb: jge 0x44231e */ if ((fS==fO)) goto L_0044231e;
L_004422bd:; BB(0x004422bd);
    /* 004422bd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004422c0: imul eax, eax, 0x14 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x14u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004422c3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004422c4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004422c6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004422c9: mov edx, dword ptr [ebp + ecx*4 - 0x2c] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffd4u));
    /* 004422cd: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 004422d0: mov ecx, dword ptr [eax + edx*4 + 0xb4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xb4u));
    /* 004422d7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004422da: mov eax, dword ptr [ebp + edx*4 - 0x2c] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xffffffd4u));
    /* 004422de: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004422e1: mov eax, dword ptr [edx + eax*4 + 0xb4] */ r_eax = R32((u32)(r_edx+r_eax*4+0xb4u));
    /* 004422e8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004422ea: mov ecx, eax */ r_ecx = r_eax;
    /* 004422ec: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 004422ef: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4422f1u); call_ind(t); }
    /* 004422f1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004422f4: mov edx, dword ptr [ebp + ecx*4 - 0x2c] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffd4u));
    /* 004422f8: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 004422fb: mov ecx, dword ptr [eax + edx*4 + 0xb4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xb4u));
    /* 00442302: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00442305: mov eax, dword ptr [ebp + edx*4 - 0x2c] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xffffffd4u));
    /* 00442309: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0044230c: mov eax, dword ptr [edx + eax*4 + 0xb4] */ r_eax = R32((u32)(r_edx+r_eax*4+0xb4u));
    /* 00442313: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00442315: mov ecx, eax */ r_ecx = r_eax;
    /* 00442317: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0044231a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x44231cu); call_ind(t); }
    /* 0044231c: jmp 0x4422ae */ goto L_004422ae;
L_0044231e:; BB(0x0044231e);
    /* 0044231e: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00442321: imul ecx, ecx, 0x78 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x78u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00442324: mov edx, dword ptr [0x7906f0] */ r_edx = R32((u32)(0x7906f0u));
    /* 0044232a: mov eax, dword ptr [edx + ecx + 0x48] */ r_eax = R32((u32)(r_edx+r_ecx+0x48u));
    /* 0044232e: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00442331: cmp dword ptr [ebp - 0x40], 0x17 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x17u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00442335: jne 0x44234e */ if (!fZ) goto L_0044234e;
L_00442337:; BB(0x00442337);
    /* 00442337: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0044233a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044233b: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0044233e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044233f: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00442342: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00442343: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 00442346: mov ecx, dword ptr [ecx + 0x18] */ r_ecx = R32((u32)(r_ecx+0x18u));
    /* 00442349: call 0x43d630 */ r_esp -= 4; W32(r_esp, 0x44234eu); f_0043d630();
L_0044234e:; BB(0x0044234e);
    /* 0044234e: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00442351: imul edx, edx, 0x78 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x78u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00442354: mov eax, dword ptr [0x7906f0] */ r_eax = R32((u32)(0x7906f0u));
    /* 00442359: mov ecx, dword ptr [eax + edx + 0x48] */ r_ecx = R32((u32)(r_eax+r_edx+0x48u));
    /* 0044235d: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 00442360: cmp dword ptr [ebp - 0x44], 0x30 */ {  u32 a = R32((u32)(r_ebp+0xffffffbcu)); u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00442364: jl 0x4423c4 */ if ((fS!=fO)) goto L_004423c4;
L_00442366:; BB(0x00442366);
    /* 00442366: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00442369: imul edx, edx, 0x78 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x78u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0044236c: mov eax, dword ptr [0x7906f0] */ r_eax = R32((u32)(0x7906f0u));
    /* 00442371: mov ecx, dword ptr [eax + edx + 0x48] */ r_ecx = R32((u32)(r_eax+r_edx+0x48u));
    /* 00442375: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 00442378: cmp dword ptr [ebp - 0x48], 0x34 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044237c: jg 0x4423c4 */ if ((!fZ&&fS==fO)) goto L_004423c4;
L_0044237e:; BB(0x0044237e);
    /* 0044237e: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00442380: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x442385u); f_0062fbf0();
    /* 00442385: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00442388: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044238a: je 0x4423a5 */ if (fZ) goto L_004423a5;
L_0044238c:; BB(0x0044238c);
    /* 0044238c: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0044238f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00442390: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00442393: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00442394: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00442397: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00442398: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0044239b: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 0044239e: call 0x43d660 */ r_esp -= 4; W32(r_esp, 0x4423a3u); f_0043d660();
    /* 004423a3: jmp 0x4423c4 */ goto L_004423c4;
L_004423a5:; BB(0x004423a5);
    /* 004423a5: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004423a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004423a9: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004423ac: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004423ad: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004423b0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004423b1: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 004423b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004423b5: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004423b8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004423b9: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004423bc: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 004423bf: call 0x43d410 */ r_esp -= 4; W32(r_esp, 0x4423c4u); f_0043d410();
L_004423c4:; BB(0x004423c4);
    /* 004423c4: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 004423c7: imul eax, eax, 0x78 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x78u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004423ca: mov ecx, dword ptr [0x7906f0] */ r_ecx = R32((u32)(0x7906f0u));
    /* 004423d0: mov edx, dword ptr [ecx + eax + 0x48] */ r_edx = R32((u32)(r_ecx+r_eax+0x48u));
    /* 004423d4: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 004423d7: cmp dword ptr [ebp - 0x4c], 0x6c */ {  u32 a = R32((u32)(r_ebp+0xffffffb4u)); u32 b = 0x6cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004423db: jl 0x44240d */ if ((fS!=fO)) goto L_0044240d;
L_004423dd:; BB(0x004423dd);
    /* 004423dd: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 004423e0: imul eax, eax, 0x78 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x78u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004423e3: mov ecx, dword ptr [0x7906f0] */ r_ecx = R32((u32)(0x7906f0u));
    /* 004423e9: mov edx, dword ptr [ecx + eax + 0x48] */ r_edx = R32((u32)(r_ecx+r_eax+0x48u));
    /* 004423ed: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 004423f0: cmp dword ptr [ebp - 0x50], 0x73 */ {  u32 a = R32((u32)(r_ebp+0xffffffb0u)); u32 b = 0x73u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004423f4: jg 0x44240d */ if ((!fZ&&fS==fO)) goto L_0044240d;
L_004423f6:; BB(0x004423f6);
    /* 004423f6: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 004423f9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004423fa: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004423fd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004423fe: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00442401: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00442402: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 00442405: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 00442408: call 0x43d690 */ r_esp -= 4; W32(r_esp, 0x44240du); f_0043d690();
L_0044240d:; BB(0x0044240d);
    /* 0044240d: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 00442410: movzx edx, byte ptr [ecx + 0x1c] */ r_edx = (u32)R8((u32)(r_ecx+0x1cu));
    /* 00442414: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00442416: jne 0x442489 */ if (!fZ) goto L_00442489;
L_00442418:; BB(0x00442418);
    /* 00442418: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0044241b: imul eax, eax, 0x78 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x78u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0044241e: mov ecx, dword ptr [0x7906f0] */ r_ecx = R32((u32)(0x7906f0u));
    /* 00442424: mov edx, dword ptr [ecx + eax + 0x48] */ r_edx = R32((u32)(r_ecx+r_eax+0x48u));
    /* 00442428: mov dword ptr [ebp - 0x54], edx */ W32((u32)(r_ebp+0xffffffacu), r_edx);
    /* 0044242b: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0044242e: imul eax, eax, 0x78 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x78u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00442431: mov ecx, dword ptr [0x7906f0] */ r_ecx = R32((u32)(0x7906f0u));
    /* 00442437: mov edx, dword ptr [ecx + eax + 0x48] */ r_edx = R32((u32)(r_ecx+r_eax+0x48u));
    /* 0044243b: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 0044243e: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 00442441: sub eax, dword ptr [ebp - 0x58] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffa8u)); u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00442444: jne 0x442489 */ if (!fZ) goto L_00442489;
L_00442446:; BB(0x00442446);
    /* 00442446: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00442449: imul ecx, ecx, 0x78 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x78u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0044244c: mov edx, dword ptr [0x7906f0] */ r_edx = R32((u32)(0x7906f0u));
    /* 00442452: mov eax, dword ptr [edx + ecx + 0x48] */ r_eax = R32((u32)(r_edx+r_ecx+0x48u));
    /* 00442456: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 00442459: cmp dword ptr [ebp - 0x5c], 0x87 */ {  u32 a = R32((u32)(r_ebp+0xffffffa4u)); u32 b = 0x87u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00442460: jl 0x442489 */ if ((fS!=fO)) goto L_00442489;
L_00442462:; BB(0x00442462);
    /* 00442462: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00442465: imul ecx, ecx, 0x78 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x78u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00442468: mov edx, dword ptr [0x7906f0] */ r_edx = R32((u32)(0x7906f0u));
    /* 0044246e: mov eax, dword ptr [edx + ecx + 0x48] */ r_eax = R32((u32)(r_edx+r_ecx+0x48u));
    /* 00442472: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 00442475: cmp dword ptr [ebp - 0x60], 0x8e */ {  u32 a = R32((u32)(r_ebp+0xffffffa0u)); u32 b = 0x8eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044247c: jg 0x442489 */ if ((!fZ&&fS==fO)) goto L_00442489;
L_0044247e:; BB(0x0044247e);
    /* 0044247e: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 00442481: mov ecx, dword ptr [ecx + 0x18] */ r_ecx = R32((u32)(r_ecx+0x18u));
    /* 00442484: call 0x43d940 */ r_esp -= 4; W32(r_esp, 0x442489u); f_0043d940();
L_00442489:; BB(0x00442489);
    /* 00442489: mov esp, ebp */ r_esp = r_ebp;
    /* 0044248b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044248c: ret  */ FN_RET(0x00442180); r_esp += 4; return;
}

void f_00442490(void) /* sub_442490 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00442490);
    /* 00442490: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00442491: mov ebp, esp */ r_ebp = r_esp;
    /* 00442493: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00442496: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00442497: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 0044249a: mov dword ptr [ebp - 0x18], 0x1d4d3 */ W32((u32)(r_ebp+0xffffffe8u), 0x1d4d3u);
    /* 004424a1: mov dword ptr [ebp - 0x14], 0x1d4d4 */ W32((u32)(r_ebp+0xffffffecu), 0x1d4d4u);
    /* 004424a8: mov dword ptr [ebp - 0x10], 0x1d4e0 */ W32((u32)(r_ebp+0xfffffff0u), 0x1d4e0u);
    /* 004424af: mov dword ptr [ebp - 0xc], 0x1d4e4 */ W32((u32)(r_ebp+0xfffffff4u), 0x1d4e4u);
    /* 004424b6: mov dword ptr [ebp - 8], 0x1d4e8 */ W32((u32)(r_ebp+0xfffffff8u), 0x1d4e8u);
    /* 004424bd: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004424c4: jmp 0x4424cf */ goto L_004424cf;
L_004424c6:; BB(0x004424c6);
    /* 004424c6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004424c9: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004424cc: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_004424cf:; BB(0x004424cf);
    /* 004424cf: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004424d3: jge 0x4424e8 */ if ((fS==fO)) goto L_004424e8;
L_004424d5:; BB(0x004424d5);
    /* 004424d5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004424d7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004424da: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 004424dd: mov ecx, dword ptr [edx + ecx*4 + 4] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 004424e1: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x4424e6u); f_005f5d50();
    /* 004424e6: jmp 0x4424c6 */ goto L_004424c6;
L_004424e8:; BB(0x004424e8);
    /* 004424e8: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 004424eb: mov ecx, dword ptr [eax + 0xb0] */ r_ecx = R32((u32)(r_eax+0xb0u));
    /* 004424f1: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004424f4: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 004424f7: mov dword ptr [edx + 0xb0], ecx */ W32((u32)(r_edx+0xb0u), r_ecx);
    /* 004424fd: push 0x1d4df */ { u32 v = 0x1d4dfu; r_esp -= 4; W32(r_esp, v); }
    /* 00442502: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00442508: call 0x5f1ad0 */ r_esp -= 4; W32(r_esp, 0x44250du); f_005f1ad0();
    /* 0044250d: push 0x1d4de */ { u32 v = 0x1d4deu; r_esp -= 4; W32(r_esp, v); }
    /* 00442512: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 00442515: mov ecx, dword ptr [eax + 0xa8] */ r_ecx = R32((u32)(r_eax+0xa8u));
    /* 0044251b: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x442520u); f_005eaf00();
    /* 00442520: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00442527: jmp 0x442532 */ goto L_00442532;
L_00442529:; BB(0x00442529);
    /* 00442529: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044252c: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0044252f: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00442532:; BB(0x00442532);
    /* 00442532: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00442536: jge 0x4425ea */ if ((fS==fO)) goto L_004425ea;
L_0044253c:; BB(0x0044253c);
    /* 0044253c: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0044253f: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00442545: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00442546: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00442549: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044254a: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0044254d: call 0x43fab0 */ r_esp -= 4; W32(r_esp, 0x442552u); f_0043fab0();
    /* 00442552: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00442555: mov eax, dword ptr [0x7906f0] */ r_eax = R32((u32)(0x7906f0u));
    /* 0044255a: mov ecx, dword ptr [eax + edx*4 + 0x268] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x268u));
    /* 00442561: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00442564: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00442567: sub edx, 0x86 */ {  u32 a = r_edx; u32 b = 0x86u; u32 r = (a - b) & 0xffffffffu; r_edx = r; fS = ((r >> 31) & 1); }
    /* 0044256d: js 0x44258b */ if (fS) goto L_0044258b;
L_0044256f:; BB(0x0044256f);
    /* 0044256f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00442572: mov ecx, dword ptr [0x7906f0] */ r_ecx = R32((u32)(0x7906f0u));
    /* 00442578: mov edx, dword ptr [ecx + eax*4 + 0x268] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x268u));
    /* 0044257f: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 00442582: cmp dword ptr [ebp - 0x24], 0x94 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x94u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00442589: jne 0x4425a8 */ if (!fZ) goto L_004425a8;
L_0044258b:; BB(0x0044258b);
    /* 0044258b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044258e: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00442591: mov edx, dword ptr [ecx + eax*4 + 4] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 00442595: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00442598: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0044259b: mov ecx, dword ptr [ecx + eax*4 + 4] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 0044259f: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004425a1: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 004425a4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4425a6u); call_ind(t); }
    /* 004425a6: jmp 0x4425e5 */ goto L_004425e5;
L_004425a8:; BB(0x004425a8);
    /* 004425a8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004425ab: mov edx, dword ptr [0x7906f0] */ r_edx = R32((u32)(0x7906f0u));
    /* 004425b1: mov eax, dword ptr [edx + ecx*4 + 0x268] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x268u));
    /* 004425b8: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 004425bb: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004425be: sub ecx, 0x86 */ {  u32 a = r_ecx; u32 b = 0x86u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004425c4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004425c5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004425c8: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 004425cb: mov ecx, dword ptr [eax + edx*4 + 4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 004425cf: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004425d2: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 004425d5: mov edx, dword ptr [eax + edx*4 + 4] */ r_edx = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 004425d9: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004425db: mov ecx, edx */ r_ecx = r_edx;
    /* 004425dd: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 004425e3: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4425e5u); call_ind(t); }
L_004425e5:; BB(0x004425e5);
    /* 004425e5: jmp 0x442529 */ goto L_00442529;
L_004425ea:; BB(0x004425ea);
    /* 004425ea: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004425f1: jmp 0x4425fc */ goto L_004425fc;
L_004425f3:; BB(0x004425f3);
    /* 004425f3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004425f6: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004425f9: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_004425fc:; BB(0x004425fc);
    /* 004425fc: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00442600: jge 0x4427da */ if ((fS==fO)) goto L_004427da;
L_00442606:; BB(0x00442606);
    /* 00442606: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 0044260d: jmp 0x442618 */ goto L_00442618;
L_0044260f:; BB(0x0044260f);
    /* 0044260f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00442612: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00442615: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
L_00442618:; BB(0x00442618);
    /* 00442618: cmp dword ptr [ebp - 0x1c], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044261c: jge 0x4427d5 */ if ((fS==fO)) goto L_004427d5;
L_00442622:; BB(0x00442622);
    /* 00442622: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00442625: cmp edx, dword ptr [ebp - 0x1c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00442628: je 0x4427d0 */ if (fZ) goto L_004427d0;
L_0044262e:; BB(0x0044262e);
    /* 0044262e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00442631: mov ecx, dword ptr [0x7906f0] */ r_ecx = R32((u32)(0x7906f0u));
    /* 00442637: mov edx, dword ptr [ecx + eax*4 + 0x268] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x268u));
    /* 0044263e: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 00442641: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00442644: mov ecx, dword ptr [0x7906f0] */ r_ecx = R32((u32)(0x7906f0u));
    /* 0044264a: mov edx, dword ptr [ecx + eax*4 + 0x268] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x268u));
    /* 00442651: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 00442654: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00442657: cmp eax, dword ptr [ebp - 0x30] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffd0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044265a: jne 0x4427d0 */ if (!fZ) goto L_004427d0;
L_00442660:; BB(0x00442660);
    /* 00442660: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00442663: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00442666: mov ecx, dword ptr [edx + ecx*4 + 4] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 0044266a: call 0x5eb220 */ r_esp -= 4; W32(r_esp, 0x44266fu); f_005eb220();
    /* 0044266f: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00442672: jne 0x4427d0 */ if (!fZ) goto L_004427d0;
L_00442678:; BB(0x00442678);
    /* 00442678: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0044267b: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0044267e: mov ecx, dword ptr [ecx + eax*4 + 4] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 00442682: call 0x5eb220 */ r_esp -= 4; W32(r_esp, 0x442687u); f_005eb220();
    /* 00442687: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044268a: jne 0x4427d0 */ if (!fZ) goto L_004427d0;
L_00442690:; BB(0x00442690);
    /* 00442690: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00442692: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00442695: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 00442698: mov ecx, dword ptr [eax + edx*4 + 4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 0044269c: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0044269f: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 004426a2: mov edx, dword ptr [eax + edx*4 + 4] */ r_edx = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 004426a6: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004426a8: mov ecx, edx */ r_ecx = r_edx;
    /* 004426aa: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 004426ad: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4426afu); call_ind(t); }
    /* 004426af: sub eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004426b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004426b3: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004426b6: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 004426b9: mov edx, dword ptr [ecx + eax*4 + 4] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 004426bd: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004426c0: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 004426c3: mov ecx, dword ptr [ecx + eax*4 + 4] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 004426c7: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004426c9: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 004426cc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4426ceu); call_ind(t); }
    /* 004426ce: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004426d0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004426d3: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 004426d6: mov eax, dword ptr [edx + ecx*4 + 4] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 004426da: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004426dd: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 004426e0: mov ecx, dword ptr [edx + ecx*4 + 4] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 004426e4: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 004426e6: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 004426e9: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4426ebu); call_ind(t); }
    /* 004426eb: sub eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004426ee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004426ef: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004426f2: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 004426f5: mov edx, dword ptr [ecx + eax*4 + 4] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 004426f9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004426fc: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 004426ff: mov ecx, dword ptr [ecx + eax*4 + 4] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 00442703: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00442705: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00442708: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x44270au); call_ind(t); }
    /* 0044270a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044270d: imul ecx, ecx, 0x78 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x78u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00442710: mov edx, dword ptr [0x7906f0] */ r_edx = R32((u32)(0x7906f0u));
    /* 00442716: mov eax, dword ptr [edx + ecx + 0x6c] */ r_eax = R32((u32)(r_edx+r_ecx+0x6cu));
    /* 0044271a: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0044271d: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00442720: imul ecx, ecx, 0x78 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x78u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00442723: mov edx, dword ptr [0x7906f0] */ r_edx = R32((u32)(0x7906f0u));
    /* 00442729: mov eax, dword ptr [edx + ecx + 0x6c] */ r_eax = R32((u32)(r_edx+r_ecx+0x6cu));
    /* 0044272d: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00442730: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00442733: cmp ecx, dword ptr [ebp - 0x38] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffc8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00442736: jge 0x442786 */ if ((fS==fO)) goto L_00442786;
L_00442738:; BB(0x00442738);
    /* 00442738: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044273a: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0044273d: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 00442740: mov ecx, dword ptr [eax + edx*4 + 4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 00442744: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00442747: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0044274a: mov edx, dword ptr [eax + edx*4 + 4] */ r_edx = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 0044274e: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00442750: mov ecx, edx */ r_ecx = r_edx;
    /* 00442752: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 00442755: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x442757u); call_ind(t); }
    /* 00442757: mov esi, eax */ r_esi = r_eax;
    /* 00442759: sub esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0044275c: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0044275e: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x442763u); f_0062fbf0();
    /* 00442763: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00442766: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00442768: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00442769: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0044276c: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0044276f: mov edx, dword ptr [ecx + eax*4 + 4] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 00442773: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00442776: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00442779: mov ecx, dword ptr [ecx + eax*4 + 4] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 0044277d: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0044277f: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00442782: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x442784u); call_ind(t); }
    /* 00442784: jmp 0x4427d0 */ goto L_004427d0;
L_00442786:; BB(0x00442786);
    /* 00442786: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00442788: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044278b: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0044278e: mov eax, dword ptr [edx + ecx*4 + 4] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 00442792: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00442795: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00442798: mov ecx, dword ptr [edx + ecx*4 + 4] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 0044279c: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0044279e: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 004427a1: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4427a3u); call_ind(t); }
    /* 004427a3: mov esi, eax */ r_esi = r_eax;
    /* 004427a5: sub esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004427a8: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004427aa: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4427afu); f_0062fbf0();
    /* 004427af: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004427b2: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004427b4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004427b5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004427b8: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 004427bb: mov edx, dword ptr [ecx + eax*4 + 4] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 004427bf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004427c2: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 004427c5: mov ecx, dword ptr [ecx + eax*4 + 4] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 004427c9: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004427cb: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 004427ce: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4427d0u); call_ind(t); }
L_004427d0:; BB(0x004427d0);
    /* 004427d0: jmp 0x44260f */ goto L_0044260f;
L_004427d5:; BB(0x004427d5);
    /* 004427d5: jmp 0x4425f3 */ goto L_004425f3;
L_004427da:; BB(0x004427da);
    /* 004427da: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004427dc: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 004427e2: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 004427e5: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x4427eau); f_005fb300();
    /* 004427ea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004427ec: jne 0x442820 */ if (!fZ) goto L_00442820;
L_004427ee:; BB(0x004427ee);
    /* 004427ee: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004427f0: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004427f2: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004427f4: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004427f6: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004427f8: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 004427fd: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004427ff: push 0x1b7 */ { u32 v = 0x1b7u; r_esp -= 4; W32(r_esp, v); }
    /* 00442804: push 0x1e0 */ { u32 v = 0x1e0u; r_esp -= 4; W32(r_esp, v); }
    /* 00442809: push 0x1d4f1 */ { u32 v = 0x1d4f1u; r_esp -= 4; W32(r_esp, v); }
    /* 0044280e: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00442810: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00442812: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 00442818: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 0044281b: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x442820u); f_005f9de0();
L_00442820:; BB(0x00442820);
    /* 00442820: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00442822: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 00442827: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0044282a: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x44282fu); f_005fb300();
    /* 0044282f: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00442832: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00442835: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00442837: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0044283a: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0044283d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x44283fu); call_ind(t); }
    /* 0044283f: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00442842: mov ecx, dword ptr [ecx + 0x18] */ r_ecx = R32((u32)(r_ecx+0x18u));
    /* 00442845: call 0x43d730 */ r_esp -= 4; W32(r_esp, 0x44284au); f_0043d730();
    /* 0044284a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0044284b: mov esp, ebp */ r_esp = r_ebp;
    /* 0044284d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044284e: ret  */ FN_RET(0x00442490); r_esp += 4; return;
}

void f_00442850(void) /* sub_442850 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00442850);
    /* 00442850: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00442851: mov ebp, esp */ r_ebp = r_esp;
    /* 00442853: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00442855: push 0x69eab4 */ { u32 v = 0x69eab4u; r_esp -= 4; W32(r_esp, v); }
    /* 0044285a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00442860: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00442861: sub esp, 0x108 */ {  u32 a = r_esp; u32 b = 0x108u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00442867: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0044286c: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0044286e: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00442871: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00442872: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00442875: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0044287b: mov dword ptr [ebp - 0xf0], ecx */ W32((u32)(r_ebp+0xffffff10u), r_ecx);
    /* 00442881: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 00442888: mov dword ptr [ebp - 0x5c], 0x130 */ W32((u32)(r_ebp+0xffffffa4u), 0x130u);
    /* 0044288f: mov dword ptr [ebp - 0x58], 0x141 */ W32((u32)(r_ebp+0xffffffa8u), 0x141u);
    /* 00442896: mov dword ptr [ebp - 0x54], 0x152 */ W32((u32)(r_ebp+0xffffffacu), 0x152u);
    /* 0044289d: mov dword ptr [ebp - 0x50], 0x163 */ W32((u32)(r_ebp+0xffffffb0u), 0x163u);
    /* 004428a4: mov dword ptr [ebp - 0x4c], 0x174 */ W32((u32)(r_ebp+0xffffffb4u), 0x174u);
    /* 004428ab: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 004428b2: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 004428b9: push 0x1d4d6 */ { u32 v = 0x1d4d6u; r_esp -= 4; W32(r_esp, v); }
    /* 004428be: mov ecx, dword ptr [0x7906ec] */ r_ecx = R32((u32)(0x7906ecu));
    /* 004428c4: call 0x5f1ad0 */ r_esp -= 4; W32(r_esp, 0x4428c9u); f_005f1ad0();
    /* 004428c9: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 004428cf: call 0x443300 */ r_esp -= 4; W32(r_esp, 0x4428d4u); f_00443300();
    /* 004428d4: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 004428db: jmp 0x4428e6 */ goto L_004428e6;
L_004428dd:; BB(0x004428dd);
    /* 004428dd: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004428e0: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004428e3: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_004428e6:; BB(0x004428e6);
    /* 004428e6: cmp dword ptr [ebp - 0x10], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004428ea: jge 0x442a64 */ if ((fS==fO)) goto L_00442a64;
L_004428f0:; BB(0x004428f0);
    /* 004428f0: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004428f3: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 004428f9: cmp dword ptr [edx + ecx*4 + 0x104], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x104u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00442901: jne 0x442997 */ if (!fZ) goto L_00442997;
L_00442907:; BB(0x00442907);
    /* 00442907: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 0044290c: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x442911u); f_00686d82();
    /* 00442911: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00442914: mov dword ptr [ebp - 0x94], eax */ W32((u32)(r_ebp+0xffffff6cu), r_eax);
    /* 0044291a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00442921: cmp dword ptr [ebp - 0x94], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff6cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00442928: je 0x44293d */ if (fZ) goto L_0044293d;
L_0044292a:; BB(0x0044292a);
    /* 0044292a: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 00442930: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x442935u); f_005eaaf0();
    /* 00442935: mov dword ptr [ebp - 0xf4], eax */ W32((u32)(r_ebp+0xffffff0cu), r_eax);
    /* 0044293b: jmp 0x442947 */ goto L_00442947;
L_0044293d:; BB(0x0044293d);
    /* 0044293d: mov dword ptr [ebp - 0xf4], 0 */ W32((u32)(r_ebp+0xffffff0cu), 0x0u);
L_00442947:; BB(0x00442947);
    /* 00442947: mov eax, dword ptr [ebp - 0xf4] */ r_eax = R32((u32)(r_ebp+0xffffff0cu));
    /* 0044294d: mov dword ptr [ebp - 0x90], eax */ W32((u32)(r_ebp+0xffffff70u), r_eax);
    /* 00442953: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0044295a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0044295d: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 00442963: mov eax, dword ptr [ebp - 0x90] */ r_eax = R32((u32)(r_ebp+0xffffff70u));
    /* 00442969: mov dword ptr [edx + ecx*4 + 0x104], eax */ W32((u32)(r_edx+r_ecx*4+0x104u), r_eax);
    /* 00442970: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00442972: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00442974: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00442976: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00442978: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0044297b: add ecx, 0x1d4f5 */ {  u32 a = r_ecx; u32 b = 0x1d4f5u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00442981: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00442982: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00442985: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 0044298b: mov ecx, dword ptr [eax + edx*4 + 0x104] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x104u));
    /* 00442992: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x442997u); f_005eae80();
L_00442997:; BB(0x00442997);
    /* 00442997: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0044299a: mov dword ptr [ebp + ecx*4 - 0x40], 0xffffffff */ W32((u32)(r_ebp+r_ecx*4+0xffffffc0u), 0xffffffffu);
    /* 004429a2: mov dword ptr [ebp - 0x8c], 0 */ W32((u32)(r_ebp+0xffffff74u), 0x0u);
    /* 004429ac: jmp 0x4429bd */ goto L_004429bd;
L_004429ae:; BB(0x004429ae);
    /* 004429ae: mov edx, dword ptr [ebp - 0x8c] */ r_edx = R32((u32)(r_ebp+0xffffff74u));
    /* 004429b4: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004429b7: mov dword ptr [ebp - 0x8c], edx */ W32((u32)(r_ebp+0xffffff74u), r_edx);
L_004429bd:; BB(0x004429bd);
    /* 004429bd: cmp dword ptr [ebp - 0x8c], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffff74u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004429c4: jge 0x442a36 */ if ((fS==fO)) goto L_00442a36;
L_004429c6:; BB(0x004429c6);
    /* 004429c6: mov eax, dword ptr [ebp - 0x8c] */ r_eax = R32((u32)(r_ebp+0xffffff74u));
    /* 004429cc: imul eax, eax, 0x78 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x78u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004429cf: mov ecx, dword ptr [0x7906f0] */ r_ecx = R32((u32)(0x7906f0u));
    /* 004429d5: mov edx, dword ptr [ecx + eax + 0x6c] */ r_edx = R32((u32)(r_ecx+r_eax+0x6cu));
    /* 004429d9: mov dword ptr [ebp - 0xd0], edx */ W32((u32)(r_ebp+0xffffff30u), r_edx);
    /* 004429df: mov eax, dword ptr [ebp - 0xd0] */ r_eax = R32((u32)(r_ebp+0xffffff30u));
    /* 004429e5: cmp eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004429e8: jne 0x442a31 */ if (!fZ) goto L_00442a31;
L_004429ea:; BB(0x004429ea);
    /* 004429ea: mov ecx, 4 */ r_ecx = 0x4u;
    /* 004429ef: sub ecx, dword ptr [ebp - 0x8c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffff74u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004429f5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004429f6: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004429f9: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 004429ff: mov ecx, dword ptr [eax + edx*4 + 0x104] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x104u));
    /* 00442a06: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00442a09: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 00442a0f: mov edx, dword ptr [eax + edx*4 + 0x104] */ r_edx = R32((u32)(r_eax+r_edx*4+0x104u));
    /* 00442a16: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00442a18: mov ecx, edx */ r_ecx = r_edx;
    /* 00442a1a: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 00442a20: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x442a22u); call_ind(t); }
    /* 00442a22: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00442a25: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 00442a2b: mov dword ptr [ebp + eax*4 - 0x40], ecx */ W32((u32)(r_ebp+r_eax*4+0xffffffc0u), r_ecx);
    /* 00442a2f: jmp 0x442a36 */ goto L_00442a36;
L_00442a31:; BB(0x00442a31);
    /* 00442a31: jmp 0x4429ae */ goto L_004429ae;
L_00442a36:; BB(0x00442a36);
    /* 00442a36: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00442a39: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 00442a3f: mov ecx, dword ptr [eax + edx*4 + 0x104] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x104u));
    /* 00442a46: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00442a49: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 00442a4f: mov edx, dword ptr [eax + edx*4 + 0x104] */ r_edx = R32((u32)(r_eax+r_edx*4+0x104u));
    /* 00442a56: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00442a58: mov ecx, edx */ r_ecx = r_edx;
    /* 00442a5a: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 00442a5d: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x442a5fu); call_ind(t); }
    /* 00442a5f: jmp 0x4428dd */ goto L_004428dd;
L_00442a64:; BB(0x00442a64);
    /* 00442a64: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00442a6b: jmp 0x442a76 */ goto L_00442a76;
L_00442a6d:; BB(0x00442a6d);
    /* 00442a6d: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00442a70: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00442a73: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_00442a76:; BB(0x00442a76);
    /* 00442a76: cmp dword ptr [ebp - 0x10], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00442a7a: jge 0x442b60 */ if ((fS==fO)) goto L_00442b60;
L_00442a80:; BB(0x00442a80);
    /* 00442a80: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00442a83: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 00442a89: cmp dword ptr [edx + ecx*4 + 0x114], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x114u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00442a91: jne 0x442b32 */ if (!fZ) goto L_00442b32;
L_00442a97:; BB(0x00442a97);
    /* 00442a97: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 00442a9c: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x442aa1u); f_00686d82();
    /* 00442aa1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00442aa4: mov dword ptr [ebp - 0x9c], eax */ W32((u32)(r_ebp+0xffffff64u), r_eax);
    /* 00442aaa: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00442ab1: cmp dword ptr [ebp - 0x9c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff64u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00442ab8: je 0x442acd */ if (fZ) goto L_00442acd;
L_00442aba:; BB(0x00442aba);
    /* 00442aba: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00442ac0: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x442ac5u); f_005eaaf0();
    /* 00442ac5: mov dword ptr [ebp - 0xf8], eax */ W32((u32)(r_ebp+0xffffff08u), r_eax);
    /* 00442acb: jmp 0x442ad7 */ goto L_00442ad7;
L_00442acd:; BB(0x00442acd);
    /* 00442acd: mov dword ptr [ebp - 0xf8], 0 */ W32((u32)(r_ebp+0xffffff08u), 0x0u);
L_00442ad7:; BB(0x00442ad7);
    /* 00442ad7: mov eax, dword ptr [ebp - 0xf8] */ r_eax = R32((u32)(r_ebp+0xffffff08u));
    /* 00442add: mov dword ptr [ebp - 0x98], eax */ W32((u32)(r_ebp+0xffffff68u), r_eax);
    /* 00442ae3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00442aea: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00442aed: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 00442af3: mov eax, dword ptr [ebp - 0x98] */ r_eax = R32((u32)(r_ebp+0xffffff68u));
    /* 00442af9: mov dword ptr [edx + ecx*4 + 0x114], eax */ W32((u32)(r_edx+r_ecx*4+0x114u), r_eax);
    /* 00442b00: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00442b02: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00442b04: push 0x43 */ { u32 v = 0x43u; r_esp -= 4; W32(r_esp, v); }
    /* 00442b06: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00442b09: imul ecx, ecx, 0x1cf */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x1cfu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00442b0f: add ecx, 0x25 */ {  u32 a = r_ecx; u32 b = 0x25u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00442b12: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00442b13: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00442b16: add edx, 0x1d4fd */ {  u32 a = r_edx; u32 b = 0x1d4fdu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00442b1c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00442b1d: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00442b20: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 00442b26: mov ecx, dword ptr [ecx + eax*4 + 0x114] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x114u));
    /* 00442b2d: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x442b32u); f_005eae80();
L_00442b32:; BB(0x00442b32);
    /* 00442b32: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00442b35: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 00442b3b: mov ecx, dword ptr [eax + edx*4 + 0x114] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x114u));
    /* 00442b42: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00442b45: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 00442b4b: mov edx, dword ptr [eax + edx*4 + 0x114] */ r_edx = R32((u32)(r_eax+r_edx*4+0x114u));
    /* 00442b52: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00442b54: mov ecx, edx */ r_ecx = r_edx;
    /* 00442b56: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 00442b59: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x442b5bu); call_ind(t); }
    /* 00442b5b: jmp 0x442a6d */ goto L_00442a6d;
L_00442b60:; BB(0x00442b60);
    /* 00442b60: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00442b62: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 00442b67: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 00442b6a: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x442b6fu); f_005fb300();
    /* 00442b6f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00442b71: jne 0x442ba5 */ if (!fZ) goto L_00442ba5;
L_00442b73:; BB(0x00442b73);
    /* 00442b73: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00442b75: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00442b77: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00442b79: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00442b7b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00442b7d: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00442b82: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00442b84: push 0x1b2 */ { u32 v = 0x1b2u; r_esp -= 4; W32(r_esp, v); }
    /* 00442b89: push 0x1e8 */ { u32 v = 0x1e8u; r_esp -= 4; W32(r_esp, v); }
    /* 00442b8e: push 0x1d4f3 */ { u32 v = 0x1d4f3u; r_esp -= 4; W32(r_esp, v); }
    /* 00442b93: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00442b95: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00442b97: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00442b9d: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 00442ba0: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x442ba5u); f_005f9de0();
L_00442ba5:; BB(0x00442ba5);
    /* 00442ba5: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00442ba7: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 00442bad: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 00442bb0: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x442bb5u); f_005fb300();
    /* 00442bb5: mov dword ptr [ebp - 0xfc], eax */ W32((u32)(r_ebp+0xffffff04u), r_eax);
    /* 00442bbb: mov eax, dword ptr [ebp - 0xfc] */ r_eax = R32((u32)(r_ebp+0xffffff04u));
    /* 00442bc1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00442bc3: mov ecx, dword ptr [ebp - 0xfc] */ r_ecx = R32((u32)(r_ebp+0xffffff04u));
    /* 00442bc9: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00442bcc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x442bceu); call_ind(t); }
    /* 00442bce: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00442bd0: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00442bd6: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 00442bd9: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x442bdeu); f_005fb300();
    /* 00442bde: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00442be0: jne 0x442c14 */ if (!fZ) goto L_00442c14;
L_00442be2:; BB(0x00442be2);
    /* 00442be2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00442be4: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00442be6: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00442be8: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00442bea: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00442bec: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00442bf1: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00442bf3: push 0x18c */ { u32 v = 0x18cu; r_esp -= 4; W32(r_esp, v); }
    /* 00442bf8: push 0x1ac */ { u32 v = 0x1acu; r_esp -= 4; W32(r_esp, v); }
    /* 00442bfd: push 0x1d4f2 */ { u32 v = 0x1d4f2u; r_esp -= 4; W32(r_esp, v); }
    /* 00442c02: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00442c04: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00442c06: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 00442c0c: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 00442c0f: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x442c14u); f_005f9de0();
L_00442c14:; BB(0x00442c14);
    /* 00442c14: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00442c16: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 00442c1b: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 00442c1e: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x442c23u); f_005fb300();
    /* 00442c23: mov dword ptr [ebp - 0x100], eax */ W32((u32)(r_ebp+0xffffff00u), r_eax);
    /* 00442c29: mov ecx, dword ptr [ebp - 0x100] */ r_ecx = R32((u32)(r_ebp+0xffffff00u));
    /* 00442c2f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00442c31: mov ecx, dword ptr [ebp - 0x100] */ r_ecx = R32((u32)(r_ebp+0xffffff00u));
    /* 00442c37: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00442c3a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x442c3cu); call_ind(t); }
    /* 00442c3c: movzx ecx, byte ptr [0x795f94] */ r_ecx = (u32)R8((u32)(0x795f94u));
    /* 00442c43: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00442c45: jne 0x442d6d */ if (!fZ) goto L_00442d6d;
L_00442c4b:; BB(0x00442c4b);
    /* 00442c4b: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 00442c51: cmp dword ptr [edx + 0x110], 0 */ {  u32 a = R32((u32)(r_edx+0x110u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00442c58: jne 0x442ce4 */ if (!fZ) goto L_00442ce4;
L_00442c5e:; BB(0x00442c5e);
    /* 00442c5e: push 0x184 */ { u32 v = 0x184u; r_esp -= 4; W32(r_esp, v); }
    /* 00442c63: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x442c68u); f_00686d82();
    /* 00442c68: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00442c6b: mov dword ptr [ebp - 0xa4], eax */ W32((u32)(r_ebp+0xffffff5cu), r_eax);
    /* 00442c71: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00442c78: cmp dword ptr [ebp - 0xa4], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff5cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00442c7f: je 0x442c94 */ if (fZ) goto L_00442c94;
L_00442c81:; BB(0x00442c81);
    /* 00442c81: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 00442c87: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x442c8cu); f_005f5bf0();
    /* 00442c8c: mov dword ptr [ebp - 0x104], eax */ W32((u32)(r_ebp+0xfffffefcu), r_eax);
    /* 00442c92: jmp 0x442c9e */ goto L_00442c9e;
L_00442c94:; BB(0x00442c94);
    /* 00442c94: mov dword ptr [ebp - 0x104], 0 */ W32((u32)(r_ebp+0xfffffefcu), 0x0u);
L_00442c9e:; BB(0x00442c9e);
    /* 00442c9e: mov eax, dword ptr [ebp - 0x104] */ r_eax = R32((u32)(r_ebp+0xfffffefcu));
    /* 00442ca4: mov dword ptr [ebp - 0xa0], eax */ W32((u32)(r_ebp+0xffffff60u), r_eax);
    /* 00442caa: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00442cb1: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 00442cb7: mov edx, dword ptr [ebp - 0xa0] */ r_edx = R32((u32)(r_ebp+0xffffff60u));
    /* 00442cbd: mov dword ptr [ecx + 0x110], edx */ W32((u32)(r_ecx+0x110u), r_edx);
    /* 00442cc3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00442cc5: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00442cc7: push 0xffffff74 */ { u32 v = 0xffffff74u; r_esp -= 4; W32(r_esp, v); }
    /* 00442ccc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00442cce: push 0x1d4f8 */ { u32 v = 0x1d4f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00442cd3: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 00442cd9: mov ecx, dword ptr [eax + 0x110] */ r_ecx = R32((u32)(r_eax+0x110u));
    /* 00442cdf: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x442ce4u); f_005eae80();
L_00442ce4:; BB(0x00442ce4);
    /* 00442ce4: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 00442cea: mov edx, dword ptr [ecx + 0x110] */ r_edx = R32((u32)(r_ecx+0x110u));
    /* 00442cf0: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 00442cf6: mov ecx, dword ptr [eax + 0x110] */ r_ecx = R32((u32)(r_eax+0x110u));
    /* 00442cfc: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00442cfe: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00442d01: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x442d03u); call_ind(t); }
    /* 00442d03: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00442d05: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x442d0au); f_00686d82();
    /* 00442d0a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00442d0d: mov dword ptr [ebp - 0xac], eax */ W32((u32)(r_ebp+0xffffff54u), r_eax);
    /* 00442d13: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 00442d1a: cmp dword ptr [ebp - 0xac], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff54u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00442d21: je 0x442d38 */ if (fZ) goto L_00442d38;
L_00442d23:; BB(0x00442d23);
    /* 00442d23: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00442d25: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 00442d2b: call 0x600a70 */ r_esp -= 4; W32(r_esp, 0x442d30u); f_00600a70();
    /* 00442d30: mov dword ptr [ebp - 0x108], eax */ W32((u32)(r_ebp+0xfffffef8u), r_eax);
    /* 00442d36: jmp 0x442d42 */ goto L_00442d42;
L_00442d38:; BB(0x00442d38);
    /* 00442d38: mov dword ptr [ebp - 0x108], 0 */ W32((u32)(r_ebp+0xfffffef8u), 0x0u);
L_00442d42:; BB(0x00442d42);
    /* 00442d42: mov ecx, dword ptr [ebp - 0x108] */ r_ecx = R32((u32)(r_ebp+0xfffffef8u));
    /* 00442d48: mov dword ptr [ebp - 0xa8], ecx */ W32((u32)(r_ebp+0xffffff58u), r_ecx);
    /* 00442d4e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00442d55: mov edx, dword ptr [ebp - 0xa8] */ r_edx = R32((u32)(r_ebp+0xffffff58u));
    /* 00442d5b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00442d5c: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 00442d62: mov ecx, dword ptr [eax + 0x110] */ r_ecx = R32((u32)(r_eax+0x110u));
    /* 00442d68: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x442d6du); f_005f5d50();
L_00442d6d:; BB(0x00442d6d);
    /* 00442d6d: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00442d74: jmp 0x442d7f */ goto L_00442d7f;
L_00442d76:; BB(0x00442d76);
    /* 00442d76: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00442d79: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00442d7c: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_00442d7f:; BB(0x00442d7f);
    /* 00442d7f: cmp dword ptr [ebp - 0x10], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00442d83: jge 0x44326e */ if ((fS==fO)) goto L_0044326e;
L_00442d89:; BB(0x00442d89);
    /* 00442d89: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00442d8c: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 00442d92: cmp dword ptr [eax + edx*4 + 0xc8], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0xc8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00442d9a: jne 0x442e4c */ if (!fZ) goto L_00442e4c;
L_00442da0:; BB(0x00442da0);
    /* 00442da0: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 00442da5: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x442daau); f_00686d82();
    /* 00442daa: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00442dad: mov dword ptr [ebp - 0xb4], eax */ W32((u32)(r_ebp+0xffffff4cu), r_eax);
    /* 00442db3: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 00442dba: cmp dword ptr [ebp - 0xb4], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff4cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00442dc1: je 0x442dd6 */ if (fZ) goto L_00442dd6;
L_00442dc3:; BB(0x00442dc3);
    /* 00442dc3: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00442dc9: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x442dceu); f_005eaaf0();
    /* 00442dce: mov dword ptr [ebp - 0x10c], eax */ W32((u32)(r_ebp+0xfffffef4u), r_eax);
    /* 00442dd4: jmp 0x442de0 */ goto L_00442de0;
L_00442dd6:; BB(0x00442dd6);
    /* 00442dd6: mov dword ptr [ebp - 0x10c], 0 */ W32((u32)(r_ebp+0xfffffef4u), 0x0u);
L_00442de0:; BB(0x00442de0);
    /* 00442de0: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 00442de6: mov dword ptr [ebp - 0xb0], ecx */ W32((u32)(r_ebp+0xffffff50u), r_ecx);
    /* 00442dec: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00442df3: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00442df6: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 00442dfc: mov ecx, dword ptr [ebp - 0xb0] */ r_ecx = R32((u32)(r_ebp+0xffffff50u));
    /* 00442e02: mov dword ptr [eax + edx*4 + 0xc8], ecx */ W32((u32)(r_eax+r_edx*4+0xc8u), r_ecx);
    /* 00442e09: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00442e0c: imul edx, edx, 0x78 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x78u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00442e0f: mov eax, dword ptr [0x7906f0] */ r_eax = R32((u32)(0x7906f0u));
    /* 00442e14: mov ecx, dword ptr [eax + edx + 0x6c] */ r_ecx = R32((u32)(r_eax+r_edx+0x6cu));
    /* 00442e18: mov dword ptr [ebp - 0xd4], ecx */ W32((u32)(r_ebp+0xffffff2cu), r_ecx);
    /* 00442e1e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00442e20: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00442e22: mov edx, dword ptr [ebp - 0xd4] */ r_edx = R32((u32)(r_ebp+0xffffff2cu));
    /* 00442e28: mov eax, dword ptr [ebp + edx*4 - 0x5c] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xffffffa4u));
    /* 00442e2c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00442e2d: push 0x8b */ { u32 v = 0x8bu; r_esp -= 4; W32(r_esp, v); }
    /* 00442e32: push 0x1d4d7 */ { u32 v = 0x1d4d7u; r_esp -= 4; W32(r_esp, v); }
    /* 00442e37: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00442e3a: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 00442e40: mov ecx, dword ptr [edx + ecx*4 + 0xc8] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0xc8u));
    /* 00442e47: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x442e4cu); f_005eae80();
L_00442e4c:; BB(0x00442e4c);
    /* 00442e4c: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00442e4f: imul eax, eax, 0x78 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x78u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00442e52: mov ecx, dword ptr [0x7906f0] */ r_ecx = R32((u32)(0x7906f0u));
    /* 00442e58: mov edx, dword ptr [ecx + eax + 0x6c] */ r_edx = R32((u32)(r_ecx+r_eax+0x6cu));
    /* 00442e5c: mov dword ptr [ebp - 0xd8], edx */ W32((u32)(r_ebp+0xffffff28u), r_edx);
    /* 00442e62: mov eax, dword ptr [ebp - 0xd8] */ r_eax = R32((u32)(r_ebp+0xffffff28u));
    /* 00442e68: mov ecx, dword ptr [ebp + eax*4 - 0x5c] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffffa4u));
    /* 00442e6c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00442e6d: push 0x8b */ { u32 v = 0x8bu; r_esp -= 4; W32(r_esp, v); }
    /* 00442e72: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00442e75: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 00442e7b: mov ecx, dword ptr [eax + edx*4 + 0xc8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xc8u));
    /* 00442e82: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00442e85: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 00442e8b: mov edx, dword ptr [eax + edx*4 + 0xc8] */ r_edx = R32((u32)(r_eax+r_edx*4+0xc8u));
    /* 00442e92: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00442e94: mov ecx, edx */ r_ecx = r_edx;
    /* 00442e96: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 00442e99: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x442e9bu); call_ind(t); }
    /* 00442e9b: mov eax, 4 */ r_eax = 0x4u;
    /* 00442ea0: sub eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00442ea3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00442ea4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00442ea7: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 00442ead: mov eax, dword ptr [edx + ecx*4 + 0xc8] */ r_eax = R32((u32)(r_edx+r_ecx*4+0xc8u));
    /* 00442eb4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00442eb7: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 00442ebd: mov ecx, dword ptr [edx + ecx*4 + 0xc8] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0xc8u));
    /* 00442ec4: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00442ec6: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 00442ecc: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x442eceu); call_ind(t); }
    /* 00442ece: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00442ed1: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 00442ed7: mov edx, dword ptr [ecx + eax*4 + 0xc8] */ r_edx = R32((u32)(r_ecx+r_eax*4+0xc8u));
    /* 00442ede: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00442ee1: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 00442ee7: mov ecx, dword ptr [ecx + eax*4 + 0xc8] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0xc8u));
    /* 00442eee: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00442ef0: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00442ef3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x442ef5u); call_ind(t); }
    /* 00442ef5: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00442ef8: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 00442efe: cmp dword ptr [edx + ecx*4 + 0xdc], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0xdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00442f06: jne 0x442fc1 */ if (!fZ) goto L_00442fc1;
L_00442f0c:; BB(0x00442f0c);
    /* 00442f0c: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 00442f11: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x442f16u); f_00686d82();
    /* 00442f16: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00442f19: mov dword ptr [ebp - 0xbc], eax */ W32((u32)(r_ebp+0xffffff44u), r_eax);
    /* 00442f1f: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 00442f26: cmp dword ptr [ebp - 0xbc], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff44u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00442f2d: je 0x442f42 */ if (fZ) goto L_00442f42;
L_00442f2f:; BB(0x00442f2f);
    /* 00442f2f: mov ecx, dword ptr [ebp - 0xbc] */ r_ecx = R32((u32)(r_ebp+0xffffff44u));
    /* 00442f35: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x442f3au); f_005ec5a0();
    /* 00442f3a: mov dword ptr [ebp - 0x110], eax */ W32((u32)(r_ebp+0xfffffef0u), r_eax);
    /* 00442f40: jmp 0x442f4c */ goto L_00442f4c;
L_00442f42:; BB(0x00442f42);
    /* 00442f42: mov dword ptr [ebp - 0x110], 0 */ W32((u32)(r_ebp+0xfffffef0u), 0x0u);
L_00442f4c:; BB(0x00442f4c);
    /* 00442f4c: mov eax, dword ptr [ebp - 0x110] */ r_eax = R32((u32)(r_ebp+0xfffffef0u));
    /* 00442f52: mov dword ptr [ebp - 0xb8], eax */ W32((u32)(r_ebp+0xffffff48u), r_eax);
    /* 00442f58: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00442f5f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00442f62: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 00442f68: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 00442f6e: mov dword ptr [edx + ecx*4 + 0xdc], eax */ W32((u32)(r_edx+r_ecx*4+0xdcu), r_eax);
    /* 00442f75: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00442f78: imul ecx, ecx, 0x78 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x78u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00442f7b: mov edx, dword ptr [0x7906f0] */ r_edx = R32((u32)(0x7906f0u));
    /* 00442f81: mov eax, dword ptr [edx + ecx + 0x6c] */ r_eax = R32((u32)(r_edx+r_ecx+0x6cu));
    /* 00442f85: mov dword ptr [ebp - 0xdc], eax */ W32((u32)(r_ebp+0xffffff24u), r_eax);
    /* 00442f8b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00442f8d: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 00442f8f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00442f91: mov ecx, dword ptr [ebp - 0xdc] */ r_ecx = R32((u32)(r_ebp+0xffffff24u));
    /* 00442f97: mov edx, dword ptr [ebp + ecx*4 - 0x5c] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffa4u));
    /* 00442f9b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00442f9c: push 0x154 */ { u32 v = 0x154u; r_esp -= 4; W32(r_esp, v); }
    /* 00442fa1: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00442fa3: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 00442fa5: push 0x6a */ { u32 v = 0x6au; r_esp -= 4; W32(r_esp, v); }
    /* 00442fa7: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00442fac: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00442faf: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 00442fb5: mov ecx, dword ptr [ecx + eax*4 + 0xdc] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0xdcu));
    /* 00442fbc: call 0x5ec8f0 */ r_esp -= 4; W32(r_esp, 0x442fc1u); f_005ec8f0();
L_00442fc1:; BB(0x00442fc1);
    /* 00442fc1: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00442fc6: lea edx, [ebp - 0x34] */ r_edx = (u32)(r_ebp+0xffffffccu);
    /* 00442fc9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00442fca: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x442fcfu); f_00686d8e();
    /* 00442fcf: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00442fd2: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00442fd5: imul eax, eax, 0x78 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x78u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00442fd8: mov ecx, dword ptr [0x7906f0] */ r_ecx = R32((u32)(0x7906f0u));
    /* 00442fde: mov edx, dword ptr [ecx + eax + 0x70] */ r_edx = R32((u32)(r_ecx+r_eax+0x70u));
    /* 00442fe2: mov dword ptr [ebp - 0xe0], edx */ W32((u32)(r_ebp+0xffffff20u), r_edx);
    /* 00442fe8: mov eax, dword ptr [ebp - 0xe0] */ r_eax = R32((u32)(r_ebp+0xffffff20u));
    /* 00442fee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00442fef: push 0x6b2828 */ { u32 v = 0x6b2828u; r_esp -= 4; W32(r_esp, v); }
    /* 00442ff4: lea ecx, [ebp - 0x34] */ r_ecx = (u32)(r_ebp+0xffffffccu);
    /* 00442ff7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00442ff8: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x442ffeu); call_ind(t); }
    /* 00442ffe: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00443001: lea edx, [ebp - 0x34] */ r_edx = (u32)(r_ebp+0xffffffccu);
    /* 00443004: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00443005: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00443008: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 0044300e: mov edx, dword ptr [ecx + eax*4 + 0xdc] */ r_edx = R32((u32)(r_ecx+r_eax*4+0xdcu));
    /* 00443015: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00443018: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 0044301e: mov ecx, dword ptr [ecx + eax*4 + 0xdc] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0xdcu));
    /* 00443025: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00443027: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0044302d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x44302fu); call_ind(t); }
    /* 0044302f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00443032: imul ecx, ecx, 0x78 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x78u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00443035: mov edx, dword ptr [0x7906f0] */ r_edx = R32((u32)(0x7906f0u));
    /* 0044303b: mov eax, dword ptr [edx + ecx + 0x6c] */ r_eax = R32((u32)(r_edx+r_ecx+0x6cu));
    /* 0044303f: mov dword ptr [ebp - 0xe4], eax */ W32((u32)(r_ebp+0xffffff1cu), r_eax);
    /* 00443045: mov ecx, dword ptr [ebp - 0xe4] */ r_ecx = R32((u32)(r_ebp+0xffffff1cu));
    /* 0044304b: mov edx, dword ptr [ebp + ecx*4 - 0x5c] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffa4u));
    /* 0044304f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00443050: push 0x154 */ { u32 v = 0x154u; r_esp -= 4; W32(r_esp, v); }
    /* 00443055: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00443058: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 0044305e: mov edx, dword ptr [ecx + eax*4 + 0xdc] */ r_edx = R32((u32)(r_ecx+r_eax*4+0xdcu));
    /* 00443065: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00443068: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 0044306e: mov ecx, dword ptr [ecx + eax*4 + 0xdc] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0xdcu));
    /* 00443075: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00443077: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0044307a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x44307cu); call_ind(t); }
    /* 0044307c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0044307f: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 00443085: mov eax, dword ptr [edx + ecx*4 + 0xdc] */ r_eax = R32((u32)(r_edx+r_ecx*4+0xdcu));
    /* 0044308c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0044308f: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 00443095: mov ecx, dword ptr [edx + ecx*4 + 0xdc] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0xdcu));
    /* 0044309c: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0044309e: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 004430a1: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4430a3u); call_ind(t); }
    /* 004430a3: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004430a6: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 004430ac: cmp dword ptr [ecx + eax*4 + 0xf0], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0xf0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004430b4: jne 0x443172 */ if (!fZ) goto L_00443172;
L_004430ba:; BB(0x004430ba);
    /* 004430ba: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 004430bf: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x4430c4u); f_00686d82();
    /* 004430c4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004430c7: mov dword ptr [ebp - 0xc4], eax */ W32((u32)(r_ebp+0xffffff3cu), r_eax);
    /* 004430cd: mov dword ptr [ebp - 4], 6 */ W32((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 004430d4: cmp dword ptr [ebp - 0xc4], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff3cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004430db: je 0x4430f0 */ if (fZ) goto L_004430f0;
L_004430dd:; BB(0x004430dd);
    /* 004430dd: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 004430e3: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x4430e8u); f_005ec5a0();
    /* 004430e8: mov dword ptr [ebp - 0x114], eax */ W32((u32)(r_ebp+0xfffffeecu), r_eax);
    /* 004430ee: jmp 0x4430fa */ goto L_004430fa;
L_004430f0:; BB(0x004430f0);
    /* 004430f0: mov dword ptr [ebp - 0x114], 0 */ W32((u32)(r_ebp+0xfffffeecu), 0x0u);
L_004430fa:; BB(0x004430fa);
    /* 004430fa: mov edx, dword ptr [ebp - 0x114] */ r_edx = R32((u32)(r_ebp+0xfffffeecu));
    /* 00443100: mov dword ptr [ebp - 0xc0], edx */ W32((u32)(r_ebp+0xffffff40u), r_edx);
    /* 00443106: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0044310d: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00443110: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 00443116: mov edx, dword ptr [ebp - 0xc0] */ r_edx = R32((u32)(r_ebp+0xffffff40u));
    /* 0044311c: mov dword ptr [ecx + eax*4 + 0xf0], edx */ W32((u32)(r_ecx+r_eax*4+0xf0u), r_edx);
    /* 00443123: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00443126: imul eax, eax, 0x78 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x78u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00443129: mov ecx, dword ptr [0x7906f0] */ r_ecx = R32((u32)(0x7906f0u));
    /* 0044312f: mov edx, dword ptr [ecx + eax + 0x6c] */ r_edx = R32((u32)(r_ecx+r_eax+0x6cu));
    /* 00443133: mov dword ptr [ebp - 0xe8], edx */ W32((u32)(r_ebp+0xffffff18u), r_edx);
    /* 00443139: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0044313b: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 0044313d: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0044313f: mov eax, dword ptr [ebp - 0xe8] */ r_eax = R32((u32)(r_ebp+0xffffff18u));
    /* 00443145: mov ecx, dword ptr [ebp + eax*4 - 0x5c] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffffa4u));
    /* 00443149: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044314a: push 0x1bd */ { u32 v = 0x1bdu; r_esp -= 4; W32(r_esp, v); }
    /* 0044314f: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00443151: push 0xb9 */ { u32 v = 0xb9u; r_esp -= 4; W32(r_esp, v); }
    /* 00443156: push 0x6a */ { u32 v = 0x6au; r_esp -= 4; W32(r_esp, v); }
    /* 00443158: push 0x6b35b0 */ { u32 v = 0x6b35b0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044315d: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00443160: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 00443166: mov ecx, dword ptr [eax + edx*4 + 0xf0] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xf0u));
    /* 0044316d: call 0x5ec8f0 */ r_esp -= 4; W32(r_esp, 0x443172u); f_005ec8f0();
L_00443172:; BB(0x00443172);
    /* 00443172: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00443175: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00443176: lea edx, [ebp - 0x88] */ r_edx = (u32)(r_ebp+0xffffff78u);
    /* 0044317c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044317d: mov ecx, dword ptr [0x7906f0] */ r_ecx = R32((u32)(0x7906f0u));
    /* 00443183: call 0x445ff0 */ r_esp -= 4; W32(r_esp, 0x443188u); f_00445ff0();
    /* 00443188: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0044318b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0044318e: add eax, dword ptr [ebp - 0x48] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffb8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00443191: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00443194: push 0x6b8328 */ { u32 v = 0x6b8328u; r_esp -= 4; W32(r_esp, v); }
    /* 00443199: lea ecx, [ebp - 0x88] */ r_ecx = (u32)(r_ebp+0xffffff78u);
    /* 0044319f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004431a0: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x4431a5u); f_00686d8e();
    /* 004431a5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004431a8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004431aa: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004431ac: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004431ae: lea edx, [ebp - 0x88] */ r_edx = (u32)(r_ebp+0xffffff78u);
    /* 004431b4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004431b5: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 004431b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004431b9: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004431bc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004431bd: call 0x64c8d0 */ r_esp -= 4; W32(r_esp, 0x4431c2u); f_0064c8d0();
    /* 004431c2: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004431c5: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004431c8: imul edx, edx, 0x78 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x78u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004431cb: mov eax, dword ptr [0x7906f0] */ r_eax = R32((u32)(0x7906f0u));
    /* 004431d0: mov ecx, dword ptr [eax + edx + 0x6c] */ r_ecx = R32((u32)(r_eax+r_edx+0x6cu));
    /* 004431d4: mov dword ptr [ebp - 0xec], ecx */ W32((u32)(r_ebp+0xffffff14u), r_ecx);
    /* 004431da: mov edx, dword ptr [ebp - 0xec] */ r_edx = R32((u32)(r_ebp+0xffffff14u));
    /* 004431e0: mov eax, dword ptr [ebp + edx*4 - 0x5c] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xffffffa4u));
    /* 004431e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004431e5: push 0x1bd */ { u32 v = 0x1bdu; r_esp -= 4; W32(r_esp, v); }
    /* 004431ea: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004431ed: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 004431f3: mov eax, dword ptr [edx + ecx*4 + 0xf0] */ r_eax = R32((u32)(r_edx+r_ecx*4+0xf0u));
    /* 004431fa: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004431fd: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 00443203: mov ecx, dword ptr [edx + ecx*4 + 0xf0] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0xf0u));
    /* 0044320a: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0044320c: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0044320f: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x443211u); call_ind(t); }
    /* 00443211: lea eax, [ebp - 0x88] */ r_eax = (u32)(r_ebp+0xffffff78u);
    /* 00443217: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00443218: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0044321b: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 00443221: mov eax, dword ptr [edx + ecx*4 + 0xf0] */ r_eax = R32((u32)(r_edx+r_ecx*4+0xf0u));
    /* 00443228: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0044322b: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 00443231: mov ecx, dword ptr [edx + ecx*4 + 0xf0] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0xf0u));
    /* 00443238: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0044323a: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 00443240: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x443242u); call_ind(t); }
    /* 00443242: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00443245: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 0044324b: mov edx, dword ptr [ecx + eax*4 + 0xf0] */ r_edx = R32((u32)(r_ecx+r_eax*4+0xf0u));
    /* 00443252: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00443255: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 0044325b: mov ecx, dword ptr [ecx + eax*4 + 0xf0] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0xf0u));
    /* 00443262: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00443264: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00443267: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x443269u); call_ind(t); }
    /* 00443269: jmp 0x442d76 */ goto L_00442d76;
L_0044326e:; BB(0x0044326e);
    /* 0044326e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00443270: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00443273: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00443274: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x443279u); f_0064c8a0();
    /* 00443279: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044327c: mov dword ptr [ebp - 0xcc], eax */ W32((u32)(r_ebp+0xffffff34u), r_eax);
    /* 00443282: mov dword ptr [ebp - 0xc8], edx */ W32((u32)(r_ebp+0xffffff38u), r_edx);
    /* 00443288: mov edx, dword ptr [ebp - 0xcc] */ r_edx = R32((u32)(r_ebp+0xffffff34u));
    /* 0044328e: mov dword ptr [ebp - 0x64], edx */ W32((u32)(r_ebp+0xffffff9cu), r_edx);
    /* 00443291: mov eax, dword ptr [ebp - 0xc8] */ r_eax = R32((u32)(r_ebp+0xffffff38u));
    /* 00443297: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 0044329a: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0044329d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044329e: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004432a1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004432a2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004432a4: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4432a9u); f_005dcb00();
    /* 004432a9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004432ac: mov ecx, eax */ r_ecx = r_eax;
    /* 004432ae: call 0x5d5fb0 */ r_esp -= 4; W32(r_esp, 0x4432b3u); f_005d5fb0();
    /* 004432b3: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 004432b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004432b7: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004432ba: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004432bb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004432bd: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4432c2u); f_005dcb00();
    /* 004432c2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004432c5: mov ecx, eax */ r_ecx = r_eax;
    /* 004432c7: call 0x5d5cf0 */ r_esp -= 4; W32(r_esp, 0x4432ccu); f_005d5cf0();
    /* 004432cc: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004432cf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004432d0: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 004432d3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004432d4: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 004432d7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004432d8: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 004432de: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 004432e1: call 0x43d7a0 */ r_esp -= 4; W32(r_esp, 0x4432e6u); f_0043d7a0();
    /* 004432e6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004432e9: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004432f0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004432f1: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004432f4: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004432f6: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x4432fbu); f_00686d72();
    /* 004432fb: mov esp, ebp */ r_esp = r_ebp;
    /* 004432fd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004432fe: ret  */ FN_RET(0x00442850); r_esp += 4; return;
}

