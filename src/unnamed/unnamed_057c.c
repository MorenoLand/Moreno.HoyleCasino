#include "protos.h"

void f_0057c0b0(void) /* sub_57C0B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0057c0b0);
    /* 0057c0b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057c0b1: mov ebp, esp */ r_ebp = r_esp;
    /* 0057c0b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057c0b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0057c0b7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0057c0ba: imul eax, eax, 0x224 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x224u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0057c0c0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057c0c3: mov edx, dword ptr [ecx + 0x19d0] */ r_edx = R32((u32)(r_ecx+0x19d0u));
    /* 0057c0c9: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0057c0cc: mov dword ptr [edx + eax + 0x208], ecx */ W32((u32)(r_edx+r_eax+0x208u), r_ecx);
    /* 0057c0d3: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0057c0d6: imul edx, edx, 0x224 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x224u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0057c0dc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057c0df: mov ecx, dword ptr [eax + 0x19d0] */ r_ecx = R32((u32)(r_eax+0x19d0u));
    /* 0057c0e5: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0057c0e8: mov dword ptr [ecx + edx + 0x20c], eax */ W32((u32)(r_ecx+r_edx+0x20cu), r_eax);
    /* 0057c0ef: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0057c0f2: imul ecx, ecx, 0x224 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x224u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0057c0f8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057c0fb: mov eax, dword ptr [edx + 0x19d0] */ r_eax = R32((u32)(r_edx+0x19d0u));
    /* 0057c101: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 0057c104: mov dword ptr [eax + ecx + 0x210], edx */ W32((u32)(r_eax+r_ecx+0x210u), r_edx);
    /* 0057c10b: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 0057c10e: mov dword ptr [eax + ecx + 0x214], edx */ W32((u32)(r_eax+r_ecx+0x214u), r_edx);
    /* 0057c115: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0057c117: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0057c11d: call 0x5df700 */ r_esp -= 4; W32(r_esp, 0x57c122u); f_005df700();
    /* 0057c122: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0057c125: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057c127: je 0x57c131 */ if (fZ) goto L_0057c131;
L_0057c129:; BB(0x0057c129);
    /* 0057c129: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057c12c: call 0x5f85d0 */ r_esp -= 4; W32(r_esp, 0x57c131u); f_005f85d0();
L_0057c131:; BB(0x0057c131);
    /* 0057c131: mov esp, ebp */ r_esp = r_ebp;
    /* 0057c133: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057c134: ret 0x14 */ FN_RET(0x0057c0b0); r_esp += 24; return;
}

void f_0057c140(void) /* sub_57C140 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0057c140);
    /* 0057c140: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057c141: mov ebp, esp */ r_ebp = r_esp;
    /* 0057c143: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057c144: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0057c145: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0057c148: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0057c14a: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0057c150: call 0x5df700 */ r_esp -= 4; W32(r_esp, 0x57c155u); f_005df700();
    /* 0057c155: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0057c158: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057c15a: je 0x57c23b */ if (fZ) goto L_0057c23b;
L_0057c160:; BB(0x0057c160);
    /* 0057c160: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057c163: cmp dword ptr [ecx + 0x19d8], 0 */ {  u32 a = R32((u32)(r_ecx+0x19d8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057c16a: jne 0x57c171 */ if (!fZ) goto L_0057c171;
L_0057c16c:; BB(0x0057c16c);
    /* 0057c16c: jmp 0x57c23b */ goto L_0057c23b;
L_0057c171:; BB(0x0057c171);
    /* 0057c171: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 0057c177: call 0x5db240 */ r_esp -= 4; W32(r_esp, 0x57c17cu); f_005db240();
    /* 0057c17c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057c17f: mov byte ptr [edx + 0x1bc], 1 */ W8((u32)(r_edx+0x1bcu), 0x1u);
    /* 0057c186: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057c189: mov byte ptr [eax + 0x1bd], 1 */ W8((u32)(r_eax+0x1bdu), 0x1u);
    /* 0057c190: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057c193: call 0x5f85d0 */ r_esp -= 4; W32(r_esp, 0x57c198u); f_005f85d0();
    /* 0057c198: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057c19b: mov ecx, dword ptr [ecx + 0x19e0] */ r_ecx = R32((u32)(r_ecx+0x19e0u));
    /* 0057c1a1: call 0x57d3a0 */ r_esp -= 4; W32(r_esp, 0x57c1a6u); f_0057d3a0();
    /* 0057c1a6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057c1a9: call 0x5f84f0 */ r_esp -= 4; W32(r_esp, 0x57c1aeu); f_005f84f0();
    /* 0057c1ae: mov esi, eax */ r_esi = r_eax;
    /* 0057c1b0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057c1b3: mov eax, dword ptr [edx + 0x19d8] */ r_eax = R32((u32)(r_edx+0x19d8u));
    /* 0057c1b9: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0057c1bc: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057c1bf: mov eax, dword ptr [edx + 0x19d8] */ r_eax = R32((u32)(r_edx+0x19d8u));
    /* 0057c1c5: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0057c1c8: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0057c1ca: mov ecx, edx */ r_ecx = r_edx;
    /* 0057c1cc: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 0057c1cf: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x57c1d1u); call_ind(t); }
    /* 0057c1d1: lea eax, [esi + eax - 4] */ r_eax = (u32)(r_esi+r_eax+0xfffffffcu);
    /* 0057c1d5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057c1d6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057c1d9: call 0x5f84d0 */ r_esp -= 4; W32(r_esp, 0x57c1deu); f_005f84d0();
    /* 0057c1de: mov esi, eax */ r_esi = r_eax;
    /* 0057c1e0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057c1e3: mov edx, dword ptr [ecx + 0x19d8] */ r_edx = R32((u32)(r_ecx+0x19d8u));
    /* 0057c1e9: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0057c1ec: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057c1ef: mov edx, dword ptr [ecx + 0x19d8] */ r_edx = R32((u32)(r_ecx+0x19d8u));
    /* 0057c1f5: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 0057c1f8: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0057c1fa: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 0057c1fd: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x57c1ffu); call_ind(t); }
    /* 0057c1ff: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0057c201: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057c204: mov ecx, dword ptr [eax + 0x19d8] */ r_ecx = R32((u32)(r_eax+0x19d8u));
    /* 0057c20a: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0057c20d: call 0x5f5550 */ r_esp -= 4; W32(r_esp, 0x57c212u); f_005f5550();
    /* 0057c212: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0057c214: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0057c215: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057c218: mov ecx, dword ptr [edx + 0x19e0] */ r_ecx = R32((u32)(r_edx+0x19e0u));
    /* 0057c21e: call 0x5f8420 */ r_esp -= 4; W32(r_esp, 0x57c223u); f_005f8420();
    /* 0057c223: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0057c225: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057c228: mov ecx, dword ptr [eax + 0x19e0] */ r_ecx = R32((u32)(r_eax+0x19e0u));
    /* 0057c22e: call 0x57cb70 */ r_esp -= 4; W32(r_esp, 0x57c233u); f_0057cb70();
    /* 0057c233: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057c236: call 0x57b1b0 */ r_esp -= 4; W32(r_esp, 0x57c23bu); f_0057b1b0();
L_0057c23b:; BB(0x0057c23b);
    /* 0057c23b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0057c23c: mov esp, ebp */ r_esp = r_ebp;
    /* 0057c23e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057c23f: ret  */ FN_RET(0x0057c140); r_esp += 4; return;
}

void f_0057c240(void) /* sub_57C240 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0057c240);
    /* 0057c240: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057c241: mov ebp, esp */ r_ebp = r_esp;
    /* 0057c243: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057c244: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0057c247: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057c24a: mov byte ptr [eax + 0x1bd], 0 */ W8((u32)(r_eax+0x1bdu), 0x0u);
    /* 0057c251: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057c254: call 0x5f85d0 */ r_esp -= 4; W32(r_esp, 0x57c259u); f_005f85d0();
    /* 0057c259: mov esp, ebp */ r_esp = r_ebp;
    /* 0057c25b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057c25c: ret  */ FN_RET(0x0057c240); r_esp += 4; return;
}

void f_0057c410(void) /* sub_57C410 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0057c410);
    /* 0057c410: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057c411: mov ebp, esp */ r_ebp = r_esp;
    /* 0057c413: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057c414: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0057c415: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0057c418: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057c41b: mov ecx, dword ptr [eax + 0x1d0] */ r_ecx = R32((u32)(r_eax+0x1d0u));
    /* 0057c421: imul ecx, ecx, 0x224 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x224u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0057c427: mov edx, dword ptr [0x793578] */ r_edx = R32((u32)(0x793578u));
    /* 0057c42d: mov eax, dword ptr [edx + 0x19d0] */ r_eax = R32((u32)(r_edx+0x19d0u));
    /* 0057c433: movsx ecx, byte ptr [eax + ecx] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+r_ecx));
    /* 0057c437: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057c439: jne 0x57c440 */ if (!fZ) goto L_0057c440;
L_0057c43b:; BB(0x0057c43b);
    /* 0057c43b: jmp 0x57c54f */ goto L_0057c54f;
L_0057c440:; BB(0x0057c440);
    /* 0057c440: movzx edx, byte ptr [ebp + 8] */ r_edx = (u32)R8((u32)(r_ebp+0x8u));
    /* 0057c444: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057c446: je 0x57c45e */ if (fZ) goto L_0057c45e;
L_0057c448:; BB(0x0057c448);
    /* 0057c448: push 0xee */ { u32 v = 0xeeu; r_esp -= 4; W32(r_esp, v); }
    /* 0057c44d: push 0xc6 */ { u32 v = 0xc6u; r_esp -= 4; W32(r_esp, v); }
    /* 0057c452: push 0x7d */ { u32 v = 0x7du; r_esp -= 4; W32(r_esp, v); }
    /* 0057c454: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057c457: call 0x5ee8c0 */ r_esp -= 4; W32(r_esp, 0x57c45cu); f_005ee8c0();
    /* 0057c45c: jmp 0x57c4a5 */ goto L_0057c4a5;
L_0057c45e:; BB(0x0057c45e);
    /* 0057c45e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057c460: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057c462: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057c464: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057c467: call 0x5ee8c0 */ r_esp -= 4; W32(r_esp, 0x57c46cu); f_005ee8c0();
    /* 0057c46c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057c46d: mov eax, esp */ r_eax = r_esp;
    /* 0057c46f: mov cx, word ptr [0x75ee1c] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(0x75ee1cu))) & 0xffffu);
    /* 0057c476: mov word ptr [eax], cx */ W16((u32)(r_eax), (u16)r_ecx);
    /* 0057c479: mov dl, byte ptr [0x75ee1e] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(0x75ee1eu))) & 0xffu);
    /* 0057c47f: mov byte ptr [eax + 2], dl */ W8((u32)(r_eax+0x2u), (u8)r_edx);
    /* 0057c482: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0057c484: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057c487: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0057c489: cmp dword ptr [eax + 0x1d0], 1 */ {  u32 a = R32((u32)(r_eax+0x1d0u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057c490: setg cl */ r_ecx = (r_ecx & 0xffffff00u) | ((((!fZ&&fS==fO)) ? 1 : 0) & 0xffu);
    /* 0057c493: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0057c496: and ecx, 0xffffffc8 */ {  u32 a = r_ecx; u32 b = 0xffffffc8u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0057c499: add ecx, 0x67 */ {  u32 a = r_ecx; u32 b = 0x67u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0057c49c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057c49d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057c4a0: call 0x5ecd00 */ r_esp -= 4; W32(r_esp, 0x57c4a5u); f_005ecd00();
L_0057c4a5:; BB(0x0057c4a5);
    /* 0057c4a5: push 0x41f */ { u32 v = 0x41fu; r_esp -= 4; W32(r_esp, v); }
    /* 0057c4aa: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057c4ad: mov ecx, dword ptr [edx + 0x1d4] */ r_ecx = R32((u32)(r_edx+0x1d4u));
    /* 0057c4b3: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x57c4b8u); f_005eaf00();
    /* 0057c4b8: push 0x1f5 */ { u32 v = 0x1f5u; r_esp -= 4; W32(r_esp, v); }
    /* 0057c4bd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057c4c0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0057c4c2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057c4c5: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0057c4c8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57c4cau); call_ind(t); }
    /* 0057c4ca: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057c4cd: call 0x5f6270 */ r_esp -= 4; W32(r_esp, 0x57c4d2u); f_005f6270();
    /* 0057c4d2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057c4d5: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0057c4d7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057c4da: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 0057c4dd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57c4dfu); call_ind(t); }
    /* 0057c4df: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0057c4e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057c4e3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057c4e6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0057c4e8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057c4eb: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 0057c4ee: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57c4f0u); call_ind(t); }
    /* 0057c4f0: mov esi, eax */ r_esi = r_eax;
    /* 0057c4f2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057c4f5: call 0x5f5550 */ r_esp -= 4; W32(r_esp, 0x57c4fau); f_005f5550();
    /* 0057c4fa: lea ecx, [esi + eax - 6] */ r_ecx = (u32)(r_esi+r_eax+0xfffffffau);
    /* 0057c4fe: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057c4ff: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057c502: mov eax, dword ptr [edx + 0x1d4] */ r_eax = R32((u32)(r_edx+0x1d4u));
    /* 0057c508: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057c50b: mov ecx, dword ptr [ecx + 0x1d4] */ r_ecx = R32((u32)(r_ecx+0x1d4u));
    /* 0057c511: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0057c513: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0057c516: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57c518u); call_ind(t); }
    /* 0057c518: push 0x1f6 */ { u32 v = 0x1f6u; r_esp -= 4; W32(r_esp, v); }
    /* 0057c51d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057c520: mov edx, dword ptr [ecx + 0x1d4] */ r_edx = R32((u32)(r_ecx+0x1d4u));
    /* 0057c526: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057c529: mov ecx, dword ptr [eax + 0x1d4] */ r_ecx = R32((u32)(r_eax+0x1d4u));
    /* 0057c52f: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0057c531: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0057c534: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57c536u); call_ind(t); }
    /* 0057c536: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057c539: mov edx, dword ptr [ecx + 0x1d4] */ r_edx = R32((u32)(r_ecx+0x1d4u));
    /* 0057c53f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057c542: mov ecx, dword ptr [eax + 0x1d4] */ r_ecx = R32((u32)(r_eax+0x1d4u));
    /* 0057c548: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0057c54a: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0057c54d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57c54fu); call_ind(t); }
L_0057c54f:; BB(0x0057c54f);
    /* 0057c54f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0057c550: mov esp, ebp */ r_esp = r_ebp;
    /* 0057c552: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057c553: ret 4 */ FN_RET(0x0057c410); r_esp += 8; return;
}

void f_0057c800(void) /* sub_57C800 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0057c800);
    /* 0057c800: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057c801: mov ebp, esp */ r_ebp = r_esp;
    /* 0057c803: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0057c805: push 0x6a67fa */ { u32 v = 0x6a67fau; r_esp -= 4; W32(r_esp, v); }
    /* 0057c80a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0057c810: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057c811: sub esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0057c814: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0057c819: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0057c81b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057c81c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0057c81f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0057c825: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 0057c828: mov byte ptr [ebp - 0x24], 0x31 */ W8((u32)(r_ebp+0xffffffdcu), 0x31u);
    /* 0057c82c: mov byte ptr [ebp - 0x23], 0x37 */ W8((u32)(r_ebp+0xffffffddu), 0x37u);
    /* 0057c830: mov byte ptr [ebp - 0x22], 0x70 */ W8((u32)(r_ebp+0xffffffdeu), 0x70u);
    /* 0057c834: mov byte ptr [ebp - 0x21], 0xff */ W8((u32)(r_ebp+0xffffffdfu), 0xffu);
    /* 0057c838: mov byte ptr [ebp - 0x20], 0xff */ W8((u32)(r_ebp+0xffffffe0u), 0xffu);
    /* 0057c83c: mov byte ptr [ebp - 0x1f], 0xff */ W8((u32)(r_ebp+0xffffffe1u), 0xffu);
    /* 0057c840: mov byte ptr [ebp - 0x1e], 0x31 */ W8((u32)(r_ebp+0xffffffe2u), 0x31u);
    /* 0057c844: mov byte ptr [ebp - 0x1d], 0x37 */ W8((u32)(r_ebp+0xffffffe3u), 0x37u);
    /* 0057c848: mov byte ptr [ebp - 0x1c], 0x70 */ W8((u32)(r_ebp+0xffffffe4u), 0x70u);
    /* 0057c84c: mov byte ptr [ebp - 0x1b], 0xff */ W8((u32)(r_ebp+0xffffffe5u), 0xffu);
    /* 0057c850: mov byte ptr [ebp - 0x1a], 0xff */ W8((u32)(r_ebp+0xffffffe6u), 0xffu);
    /* 0057c854: mov byte ptr [ebp - 0x19], 0xff */ W8((u32)(r_ebp+0xffffffe7u), 0xffu);
    /* 0057c858: mov byte ptr [ebp - 0x18], 0x31 */ W8((u32)(r_ebp+0xffffffe8u), 0x31u);
    /* 0057c85c: mov byte ptr [ebp - 0x17], 0x37 */ W8((u32)(r_ebp+0xffffffe9u), 0x37u);
    /* 0057c860: mov byte ptr [ebp - 0x16], 0x70 */ W8((u32)(r_ebp+0xffffffeau), 0x70u);
    /* 0057c864: mov byte ptr [ebp - 0x15], 0xe6 */ W8((u32)(r_ebp+0xffffffebu), 0xe6u);
    /* 0057c868: mov byte ptr [ebp - 0x14], 0xe6 */ W8((u32)(r_ebp+0xffffffecu), 0xe6u);
    /* 0057c86c: mov byte ptr [ebp - 0x13], 0xff */ W8((u32)(r_ebp+0xffffffedu), 0xffu);
    /* 0057c870: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 0057c872: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 0057c874: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0057c877: call 0x5f8510 */ r_esp -= 4; W32(r_esp, 0x57c87cu); f_005f8510();
    /* 0057c87c: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0057c883: jmp 0x57c88e */ goto L_0057c88e;
L_0057c885:; BB(0x0057c885);
    /* 0057c885: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057c888: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0057c88b: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_0057c88e:; BB(0x0057c88e);
    /* 0057c88e: cmp dword ptr [ebp - 0x10], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057c892: jge 0x57c984 */ if ((fS==fO)) goto L_0057c984;
L_0057c898:; BB(0x0057c898);
    /* 0057c898: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057c89b: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0057c89e: cmp dword ptr [edx + ecx*4 + 0x1b8], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x1b8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057c8a6: jne 0x57c8f3 */ if (!fZ) goto L_0057c8f3;
L_0057c8a8:; BB(0x0057c8a8);
    /* 0057c8a8: push 0x5c */ { u32 v = 0x5cu; r_esp -= 4; W32(r_esp, v); }
    /* 0057c8aa: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x57c8afu); f_00686d82();
    /* 0057c8af: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057c8b2: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0057c8b5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0057c8bc: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057c8c0: je 0x57c8cf */ if (fZ) goto L_0057c8cf;
L_0057c8c2:; BB(0x0057c8c2);
    /* 0057c8c2: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0057c8c5: call 0x5f6130 */ r_esp -= 4; W32(r_esp, 0x57c8cau); f_005f6130();
    /* 0057c8ca: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0057c8cd: jmp 0x57c8d6 */ goto L_0057c8d6;
L_0057c8cf:; BB(0x0057c8cf);
    /* 0057c8cf: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_0057c8d6:; BB(0x0057c8d6);
    /* 0057c8d6: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0057c8d9: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0057c8dc: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0057c8e3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057c8e6: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0057c8e9: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057c8ec: mov dword ptr [edx + ecx*4 + 0x1b8], eax */ W32((u32)(r_edx+r_ecx*4+0x1b8u), r_eax);
L_0057c8f3:; BB(0x0057c8f3);
    /* 0057c8f3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057c8f6: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0057c8f9: mov eax, dword ptr [edx + ecx*4 + 0x1b8] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x1b8u));
    /* 0057c900: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0057c903: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 0057c906: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057c909: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0057c90c: mov ecx, dword ptr [eax + edx*4 + 0x1b8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x1b8u));
    /* 0057c913: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057c916: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0057c919: mov edx, dword ptr [eax + edx*4 + 0x1b8] */ r_edx = R32((u32)(r_eax+r_edx*4+0x1b8u));
    /* 0057c920: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0057c922: mov ecx, edx */ r_ecx = r_edx;
    /* 0057c924: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 0057c927: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x57c929u); call_ind(t); }
    /* 0057c929: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057c92c: imul eax, eax, 3 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0057c92f: lea ecx, [ebp + eax - 0x24] */ r_ecx = (u32)(r_ebp+r_eax+0xffffffdcu);
    /* 0057c933: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057c934: mov edx, esp */ r_edx = r_esp;
    /* 0057c936: mov ax, word ptr [ecx] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ecx))) & 0xffffu);
    /* 0057c939: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 0057c93c: mov cl, byte ptr [ecx + 2] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ecx+0x2u))) & 0xffu);
    /* 0057c93f: mov byte ptr [edx + 2], cl */ W8((u32)(r_edx+0x2u), (u8)r_ecx);
    /* 0057c942: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057c945: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0057c948: mov ecx, dword ptr [eax + edx*4 + 0x1b8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x1b8u));
    /* 0057c94f: call 0x5f6510 */ r_esp -= 4; W32(r_esp, 0x57c954u); f_005f6510();
    /* 0057c954: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057c957: imul ecx, ecx, 3 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x3u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0057c95a: lea edx, [ebp + ecx - 0x24] */ r_edx = (u32)(r_ebp+r_ecx+0xffffffdcu);
    /* 0057c95e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057c95f: mov eax, esp */ r_eax = r_esp;
    /* 0057c961: mov cx, word ptr [edx] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_edx))) & 0xffffu);
    /* 0057c964: mov word ptr [eax], cx */ W16((u32)(r_eax), (u16)r_ecx);
    /* 0057c967: mov dl, byte ptr [edx + 2] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edx+0x2u))) & 0xffu);
    /* 0057c96a: mov byte ptr [eax + 2], dl */ W8((u32)(r_eax+0x2u), (u8)r_edx);
    /* 0057c96d: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057c970: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0057c973: mov ecx, dword ptr [ecx + eax*4 + 0x1b8] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x1b8u));
    /* 0057c97a: call 0x5f6430 */ r_esp -= 4; W32(r_esp, 0x57c97fu); f_005f6430();
    /* 0057c97f: jmp 0x57c885 */ goto L_0057c885;
L_0057c984:; BB(0x0057c984);
    /* 0057c984: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0057c987: cmp dword ptr [edx + 0x1d0], 0 */ {  u32 a = R32((u32)(r_edx+0x1d0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057c98e: jne 0x57c9da */ if (!fZ) goto L_0057c9da;
L_0057c990:; BB(0x0057c990);
    /* 0057c990: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057c995: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x57c99au); f_00686d82();
    /* 0057c99a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057c99d: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0057c9a0: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0057c9a7: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057c9ab: je 0x57c9ba */ if (fZ) goto L_0057c9ba;
L_0057c9ad:; BB(0x0057c9ad);
    /* 0057c9ad: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0057c9b0: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x57c9b5u); f_005ec5a0();
    /* 0057c9b5: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 0057c9b8: jmp 0x57c9c1 */ goto L_0057c9c1;
L_0057c9ba:; BB(0x0057c9ba);
    /* 0057c9ba: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
L_0057c9c1:; BB(0x0057c9c1);
    /* 0057c9c1: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 0057c9c4: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0057c9c7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0057c9ce: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0057c9d1: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0057c9d4: mov dword ptr [ecx + 0x1d0], edx */ W32((u32)(r_ecx+0x1d0u), r_edx);
L_0057c9da:; BB(0x0057c9da);
    /* 0057c9da: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0057c9dd: mov ecx, dword ptr [eax + 0x1d0] */ r_ecx = R32((u32)(r_eax+0x1d0u));
    /* 0057c9e3: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0057c9e6: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 0057c9e9: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0057c9ee: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0057c9f1: mov ecx, dword ptr [eax + 0x1d0] */ r_ecx = R32((u32)(r_eax+0x1d0u));
    /* 0057c9f7: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0057c9fa: mov eax, dword ptr [edx + 0x1d0] */ r_eax = R32((u32)(r_edx+0x1d0u));
    /* 0057ca00: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0057ca02: mov ecx, eax */ r_ecx = r_eax;
    /* 0057ca04: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0057ca0a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57ca0cu); call_ind(t); }
    /* 0057ca0c: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0057ca0f: mov edx, dword ptr [ecx + 0x1d0] */ r_edx = R32((u32)(r_ecx+0x1d0u));
    /* 0057ca15: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0057ca18: mov ecx, dword ptr [eax + 0x1d0] */ r_ecx = R32((u32)(r_eax+0x1d0u));
    /* 0057ca1e: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0057ca20: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0057ca23: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57ca25u); call_ind(t); }
    /* 0057ca25: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0057ca27: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0057ca2a: mov ecx, dword ptr [ecx + 0x1d0] */ r_ecx = R32((u32)(r_ecx+0x1d0u));
    /* 0057ca30: call 0x5ef3b0 */ r_esp -= 4; W32(r_esp, 0x57ca35u); f_005ef3b0();
    /* 0057ca35: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057ca36: mov edx, esp */ r_edx = r_esp;
    /* 0057ca38: mov ax, word ptr [0x75ee1c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x75ee1cu))) & 0xffffu);
    /* 0057ca3e: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 0057ca41: mov cl, byte ptr [0x75ee1e] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(0x75ee1eu))) & 0xffu);
    /* 0057ca47: mov byte ptr [edx + 2], cl */ W8((u32)(r_edx+0x2u), (u8)r_ecx);
    /* 0057ca4a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0057ca4c: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 0057ca4e: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0057ca51: mov ecx, dword ptr [edx + 0x1d0] */ r_ecx = R32((u32)(r_edx+0x1d0u));
    /* 0057ca57: call 0x5ecd00 */ r_esp -= 4; W32(r_esp, 0x57ca5cu); f_005ecd00();
    /* 0057ca5c: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0057ca5f: cmp dword ptr [eax + 0x1d4], 0 */ {  u32 a = R32((u32)(r_eax+0x1d4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057ca66: jne 0x57cab2 */ if (!fZ) goto L_0057cab2;
L_0057ca68:; BB(0x0057ca68);
    /* 0057ca68: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 0057ca6d: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x57ca72u); f_00686d82();
    /* 0057ca72: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057ca75: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0057ca78: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0057ca7f: cmp dword ptr [ebp - 0x3c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057ca83: je 0x57ca92 */ if (fZ) goto L_0057ca92;
L_0057ca85:; BB(0x0057ca85);
    /* 0057ca85: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0057ca88: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x57ca8du); f_005eaaf0();
    /* 0057ca8d: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 0057ca90: jmp 0x57ca99 */ goto L_0057ca99;
L_0057ca92:; BB(0x0057ca92);
    /* 0057ca92: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
L_0057ca99:; BB(0x0057ca99);
    /* 0057ca99: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0057ca9c: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 0057ca9f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0057caa6: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0057caa9: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0057caac: mov dword ptr [edx + 0x1d4], eax */ W32((u32)(r_edx+0x1d4u), r_eax);
L_0057cab2:; BB(0x0057cab2);
    /* 0057cab2: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0057cab5: mov edx, dword ptr [ecx + 0x1d4] */ r_edx = R32((u32)(r_ecx+0x1d4u));
    /* 0057cabb: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0057cabe: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0057cac1: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0057cac4: mov edx, dword ptr [ecx + 0x1d4] */ r_edx = R32((u32)(r_ecx+0x1d4u));
    /* 0057caca: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0057cacd: mov ecx, dword ptr [eax + 0x1d4] */ r_ecx = R32((u32)(r_eax+0x1d4u));
    /* 0057cad3: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0057cad5: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0057cad8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57cadau); call_ind(t); }
    /* 0057cada: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0057cadd: cmp dword ptr [ecx + 0x1d8], 0 */ {  u32 a = R32((u32)(r_ecx+0x1d8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057cae4: jne 0x57cb30 */ if (!fZ) goto L_0057cb30;
L_0057cae6:; BB(0x0057cae6);
    /* 0057cae6: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 0057caeb: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x57caf0u); f_00686d82();
    /* 0057caf0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057caf3: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0057caf6: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0057cafd: cmp dword ptr [ebp - 0x44], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffbcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057cb01: je 0x57cb10 */ if (fZ) goto L_0057cb10;
L_0057cb03:; BB(0x0057cb03);
    /* 0057cb03: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0057cb06: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x57cb0bu); f_005eaaf0();
    /* 0057cb0b: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 0057cb0e: jmp 0x57cb17 */ goto L_0057cb17;
L_0057cb10:; BB(0x0057cb10);
    /* 0057cb10: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
L_0057cb17:; BB(0x0057cb17);
    /* 0057cb17: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0057cb1a: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 0057cb1d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0057cb24: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0057cb27: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0057cb2a: mov dword ptr [eax + 0x1d8], ecx */ W32((u32)(r_eax+0x1d8u), r_ecx);
L_0057cb30:; BB(0x0057cb30);
    /* 0057cb30: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0057cb33: mov eax, dword ptr [edx + 0x1d8] */ r_eax = R32((u32)(r_edx+0x1d8u));
    /* 0057cb39: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0057cb3c: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 0057cb3f: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0057cb42: mov eax, dword ptr [edx + 0x1d8] */ r_eax = R32((u32)(r_edx+0x1d8u));
    /* 0057cb48: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0057cb4b: mov ecx, dword ptr [ecx + 0x1d8] */ r_ecx = R32((u32)(r_ecx+0x1d8u));
    /* 0057cb51: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0057cb53: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0057cb56: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57cb58u); call_ind(t); }
    /* 0057cb58: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0057cb5b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0057cb62: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0057cb63: mov esp, ebp */ r_esp = r_ebp;
    /* 0057cb65: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057cb66: ret  */ FN_RET(0x0057c800); r_esp += 4; return;
}

