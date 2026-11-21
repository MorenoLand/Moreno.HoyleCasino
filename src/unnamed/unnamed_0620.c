#include "protos.h"

void f_00620050(void) /* sub_620050 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00620050);
    /* 00620050: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00620051: mov ebp, esp */ r_ebp = r_esp;
    /* 00620053: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00620054: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00620055: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00620058: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062005b: mov ecx, dword ptr [eax + 0x30c] */ r_ecx = R32((u32)(r_eax+0x30cu));
    /* 00620061: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00620064: mov eax, dword ptr [edx + 0x310] */ r_eax = R32((u32)(r_edx+0x310u));
    /* 0062006a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062006d: mov edx, dword ptr [edx + 0x30c] */ r_edx = R32((u32)(r_edx+0x30cu));
    /* 00620073: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 00620076: mov esi, dword ptr [esi + 0x310] */ r_esi = R32((u32)(r_esi+0x310u));
    /* 0062007c: mov edx, dword ptr [esi + edx*8 - 8] */ r_edx = R32((u32)(r_esi+r_edx*8+0xfffffff8u));
    /* 00620080: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00620083: imul edx, edx, 0x18 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x18u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00620086: mov eax, dword ptr [eax + ecx*8 - 4] */ r_eax = R32((u32)(r_eax+r_ecx*8+0xfffffffcu));
    /* 0062008a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0062008d: mov dword ptr [eax + edx + 8], ecx */ W32((u32)(r_eax+r_edx+0x8u), r_ecx);
    /* 00620091: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00620094: mov eax, dword ptr [edx + 0x30c] */ r_eax = R32((u32)(r_edx+0x30cu));
    /* 0062009a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062009d: mov edx, dword ptr [ecx + 0x310] */ r_edx = R32((u32)(r_ecx+0x310u));
    /* 006200a3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006200a6: mov ecx, dword ptr [ecx + 0x30c] */ r_ecx = R32((u32)(r_ecx+0x30cu));
    /* 006200ac: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 006200af: mov esi, dword ptr [esi + 0x310] */ r_esi = R32((u32)(r_esi+0x310u));
    /* 006200b5: mov ecx, dword ptr [esi + ecx*8 - 8] */ r_ecx = R32((u32)(r_esi+r_ecx*8+0xfffffff8u));
    /* 006200b9: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006200bc: imul ecx, ecx, 0x18 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x18u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006200bf: mov edx, dword ptr [edx + eax*8 - 4] */ r_edx = R32((u32)(r_edx+r_eax*8+0xfffffffcu));
    /* 006200c3: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006200c6: mov dword ptr [edx + ecx + 0xc], eax */ W32((u32)(r_edx+r_ecx+0xcu), r_eax);
    /* 006200ca: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006200cb: mov esp, ebp */ r_esp = r_ebp;
    /* 006200cd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006200ce: ret 8 */ FN_RET(0x00620050); r_esp += 12; return;
}

void f_006200e0(void) /* sub_6200E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006200e0);
    /* 006200e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006200e1: mov ebp, esp */ r_ebp = r_esp;
    /* 006200e3: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006200e6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006200e7: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 006200ea: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006200ed: mov eax, dword ptr [eax + 0x30c] */ r_eax = R32((u32)(r_eax+0x30cu));
    /* 006200f3: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006200f6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006200f8: mov edx, 8 */ r_edx = 0x8u;
    /* 006200fd: mul edx */ { u64 t = (u64)r_eax * r_edx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 006200ff: seto cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fO) ? 1 : 0) & 0xffu);
    /* 00620102: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00620104: or ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00620106: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00620107: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x62010cu); f_00686d82();
    /* 0062010c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062010f: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00620112: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00620115: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00620118: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0062011b: mov edx, dword ptr [ecx + 0x30c] */ r_edx = R32((u32)(r_ecx+0x30cu));
    /* 00620121: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00620124: mov dword ptr [eax + edx*8], 0 */ W32((u32)(r_eax+r_edx*8), 0x0u);
    /* 0062012b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0062012e: mov edx, dword ptr [ecx + 0x30c] */ r_edx = R32((u32)(r_ecx+0x30cu));
    /* 00620134: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00620137: mov dword ptr [eax + edx*8 + 4], 0 */ W32((u32)(r_eax+r_edx*8+0x4u), 0x0u);
    /* 0062013f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00620146: jmp 0x620151 */ goto L_00620151;
L_00620148:; BB(0x00620148);
    /* 00620148: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062014b: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062014e: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00620151:; BB(0x00620151);
    /* 00620151: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00620154: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00620157: cmp eax, dword ptr [edx + 0x30c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x30cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062015d: jge 0x620181 */ if ((fS==fO)) goto L_00620181;
L_0062015f:; BB(0x0062015f);
    /* 0062015f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00620162: mov edx, dword ptr [ecx + 0x310] */ r_edx = R32((u32)(r_ecx+0x310u));
    /* 00620168: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062016b: mov ecx, dword ptr [edx + eax*8] */ r_ecx = R32((u32)(r_edx+r_eax*8));
    /* 0062016e: mov edx, dword ptr [edx + eax*8 + 4] */ r_edx = R32((u32)(r_edx+r_eax*8+0x4u));
    /* 00620172: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00620175: mov esi, dword ptr [ebp - 8] */ r_esi = R32((u32)(r_ebp+0xfffffff8u));
    /* 00620178: mov dword ptr [esi + eax*8], ecx */ W32((u32)(r_esi+r_eax*8), r_ecx);
    /* 0062017b: mov dword ptr [esi + eax*8 + 4], edx */ W32((u32)(r_esi+r_eax*8+0x4u), r_edx);
    /* 0062017f: jmp 0x620148 */ goto L_00620148;
L_00620181:; BB(0x00620181);
    /* 00620181: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00620184: mov edx, dword ptr [ecx + 0x310] */ r_edx = R32((u32)(r_ecx+0x310u));
    /* 0062018a: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0062018d: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00620190: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00620191: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x620196u); f_00686cae();
    /* 00620196: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00620199: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0062019c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062019f: mov dword ptr [ecx + 0x310], edx */ W32((u32)(r_ecx+0x310u), r_edx);
    /* 006201a5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006201a8: mov ecx, dword ptr [eax + 0x30c] */ r_ecx = R32((u32)(r_eax+0x30cu));
    /* 006201ae: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006201b1: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006201b4: mov dword ptr [edx + 0x30c], ecx */ W32((u32)(r_edx+0x30cu), r_ecx);
    /* 006201ba: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006201bb: mov esp, ebp */ r_esp = r_ebp;
    /* 006201bd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006201be: ret  */ FN_RET(0x006200e0); r_esp += 4; return;
}

void f_006201c0(void) /* sub_6201C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006201c0);
    /* 006201c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006201c1: mov ebp, esp */ r_ebp = r_esp;
    /* 006201c3: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006201c6: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 006201c9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006201cc: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 006201cf: mov dword ptr [ebp - 0x14], 0x20786574 */ W32((u32)(r_ebp+0xffffffecu), 0x20786574u);
    /* 006201d6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006201d9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006201da: lea edx, [ebp - 8] */ r_edx = (u32)(r_ebp+0xfffffff8u);
    /* 006201dd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006201de: call 0x6204b0 */ r_esp -= 4; W32(r_esp, 0x6201e3u); f_006204b0();
    /* 006201e3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006201e6: mov dword ptr [ebp - 0x14], 0x31303031 */ W32((u32)(r_ebp+0xffffffecu), 0x31303031u);
    /* 006201ed: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006201f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006201f1: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 006201f4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006201f5: call 0x6204b0 */ r_esp -= 4; W32(r_esp, 0x6201fau); f_006204b0();
    /* 006201fa: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006201fd: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00620204: jmp 0x62020f */ goto L_0062020f;
L_00620206:; BB(0x00620206);
    /* 00620206: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00620209: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0062020c: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0062020f:; BB(0x0062020f);
    /* 0062020f: cmp dword ptr [ebp - 4], 0x100 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00620216: jge 0x62026e */ if ((fS==fO)) goto L_0062026e;
L_00620218:; BB(0x00620218);
    /* 00620218: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0062021a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062021d: imul eax, eax, 3 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00620220: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00620223: lea edx, [ecx + eax + 8] */ r_edx = (u32)(r_ecx+r_eax+0x8u);
    /* 00620227: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00620228: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 0062022b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062022c: call 0x6204f0 */ r_esp -= 4; W32(r_esp, 0x620231u); f_006204f0();
    /* 00620231: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00620234: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00620236: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00620239: imul ecx, ecx, 3 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x3u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0062023c: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0062023f: lea eax, [edx + ecx + 9] */ r_eax = (u32)(r_edx+r_ecx+0x9u);
    /* 00620243: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00620244: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 00620247: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00620248: call 0x6204f0 */ r_esp -= 4; W32(r_esp, 0x62024du); f_006204f0();
    /* 0062024d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00620250: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00620252: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00620255: imul edx, edx, 3 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x3u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00620258: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0062025b: lea ecx, [eax + edx + 0xa] */ r_ecx = (u32)(r_eax+r_edx+0xau);
    /* 0062025f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00620260: lea edx, [ebp - 8] */ r_edx = (u32)(r_ebp+0xfffffff8u);
    /* 00620263: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00620264: call 0x6204f0 */ r_esp -= 4; W32(r_esp, 0x620269u); f_006204f0();
    /* 00620269: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062026c: jmp 0x620206 */ goto L_00620206;
L_0062026e:; BB(0x0062026e);
    /* 0062026e: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00620271: mov cx, word ptr [eax + 0x30c] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+0x30cu))) & 0xffffu);
    /* 00620278: mov word ptr [ebp - 0xc], cx */ W16((u32)(r_ebp+0xfffffff4u), (u16)r_ecx);
    /* 0062027c: mov dx, word ptr [ebp - 0xc] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff4u))) & 0xffffu);
    /* 00620280: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00620281: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 00620284: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00620285: call 0x6204d0 */ r_esp -= 4; W32(r_esp, 0x62028au); f_006204d0();
    /* 0062028a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062028d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00620294: jmp 0x62029f */ goto L_0062029f;
L_00620296:; BB(0x00620296);
    /* 00620296: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00620299: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062029c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0062029f:; BB(0x0062029f);
    /* 0062029f: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006202a2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006202a5: cmp eax, dword ptr [edx + 0x30c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x30cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006202ab: jge 0x620495 */ if ((fS==fO)) goto L_00620495;
L_006202b1:; BB(0x006202b1);
    /* 006202b1: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006202b4: mov edx, dword ptr [ecx + 0x310] */ r_edx = R32((u32)(r_ecx+0x310u));
    /* 006202ba: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006202bd: mov cx, word ptr [edx + eax*8] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_edx+r_eax*8))) & 0xffffu);
    /* 006202c1: mov word ptr [ebp - 0xc], cx */ W16((u32)(r_ebp+0xfffffff4u), (u16)r_ecx);
    /* 006202c5: mov dx, word ptr [ebp - 0xc] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff4u))) & 0xffffu);
    /* 006202c9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006202ca: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 006202cd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006202ce: call 0x6204d0 */ r_esp -= 4; W32(r_esp, 0x6202d3u); f_006204d0();
    /* 006202d3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006202d6: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 006202dd: jmp 0x6202e8 */ goto L_006202e8;
L_006202df:; BB(0x006202df);
    /* 006202df: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006202e2: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006202e5: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
L_006202e8:; BB(0x006202e8);
    /* 006202e8: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006202eb: mov eax, dword ptr [edx + 0x310] */ r_eax = R32((u32)(r_edx+0x310u));
    /* 006202f1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006202f4: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006202f7: cmp edx, dword ptr [eax + ecx*8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+r_ecx*8)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006202fa: jge 0x620490 */ if ((fS==fO)) goto L_00620490;
L_00620300:; BB(0x00620300);
    /* 00620300: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00620303: mov ecx, dword ptr [eax + 0x310] */ r_ecx = R32((u32)(r_eax+0x310u));
    /* 00620309: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062030c: imul edx, edx, 0x18 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x18u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0062030f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00620312: mov ecx, dword ptr [ecx + eax*8 + 4] */ r_ecx = R32((u32)(r_ecx+r_eax*8+0x4u));
    /* 00620316: mov dx, word ptr [edx + ecx] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx))) & 0xffffu);
    /* 0062031a: mov word ptr [ebp - 0xc], dx */ W16((u32)(r_ebp+0xfffffff4u), (u16)r_edx);
    /* 0062031e: mov ax, word ptr [ebp - 0xc] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff4u))) & 0xffffu);
    /* 00620322: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00620323: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 00620326: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00620327: call 0x6204d0 */ r_esp -= 4; W32(r_esp, 0x62032cu); f_006204d0();
    /* 0062032c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062032f: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00620332: mov eax, dword ptr [edx + 0x310] */ r_eax = R32((u32)(r_edx+0x310u));
    /* 00620338: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062033b: imul ecx, ecx, 0x18 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x18u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0062033e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00620341: mov eax, dword ptr [eax + edx*8 + 4] */ r_eax = R32((u32)(r_eax+r_edx*8+0x4u));
    /* 00620345: mov cx, word ptr [eax + ecx + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_ecx+0x4u))) & 0xffffu);
    /* 0062034a: mov word ptr [ebp - 0xc], cx */ W16((u32)(r_ebp+0xfffffff4u), (u16)r_ecx);
    /* 0062034e: mov dx, word ptr [ebp - 0xc] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff4u))) & 0xffffu);
    /* 00620352: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00620353: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 00620356: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00620357: call 0x6204d0 */ r_esp -= 4; W32(r_esp, 0x62035cu); f_006204d0();
    /* 0062035c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062035f: mov word ptr [ebp - 0xc], 0 */ W16((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 00620365: mov cx, word ptr [ebp - 0xc] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff4u))) & 0xffffu);
    /* 00620369: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062036a: lea edx, [ebp - 8] */ r_edx = (u32)(r_ebp+0xfffffff8u);
    /* 0062036d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062036e: call 0x6204d0 */ r_esp -= 4; W32(r_esp, 0x620373u); f_006204d0();
    /* 00620373: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00620376: mov word ptr [ebp - 0xc], 0 */ W16((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0062037c: mov ax, word ptr [ebp - 0xc] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff4u))) & 0xffffu);
    /* 00620380: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00620381: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 00620384: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00620385: call 0x6204d0 */ r_esp -= 4; W32(r_esp, 0x62038au); f_006204d0();
    /* 0062038a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062038d: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00620390: mov eax, dword ptr [edx + 0x310] */ r_eax = R32((u32)(r_edx+0x310u));
    /* 00620396: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00620399: imul ecx, ecx, 0x18 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x18u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0062039c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062039f: mov eax, dword ptr [eax + edx*8 + 4] */ r_eax = R32((u32)(r_eax+r_edx*8+0x4u));
    /* 006203a3: mov cx, word ptr [eax + ecx + 8] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_ecx+0x8u))) & 0xffffu);
    /* 006203a8: mov word ptr [ebp - 0xc], cx */ W16((u32)(r_ebp+0xfffffff4u), (u16)r_ecx);
    /* 006203ac: mov dx, word ptr [ebp - 0xc] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff4u))) & 0xffffu);
    /* 006203b0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006203b1: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 006203b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006203b5: call 0x6204d0 */ r_esp -= 4; W32(r_esp, 0x6203bau); f_006204d0();
    /* 006203ba: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006203bd: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006203c0: mov edx, dword ptr [ecx + 0x310] */ r_edx = R32((u32)(r_ecx+0x310u));
    /* 006203c6: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006203c9: imul eax, eax, 0x18 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x18u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006203cc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006203cf: mov edx, dword ptr [edx + ecx*8 + 4] */ r_edx = R32((u32)(r_edx+r_ecx*8+0x4u));
    /* 006203d3: mov ax, word ptr [edx + eax + 0xc] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_eax+0xcu))) & 0xffffu);
    /* 006203d8: mov word ptr [ebp - 0xc], ax */ W16((u32)(r_ebp+0xfffffff4u), (u16)r_eax);
    /* 006203dc: mov cx, word ptr [ebp - 0xc] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff4u))) & 0xffffu);
    /* 006203e0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006203e1: lea edx, [ebp - 8] */ r_edx = (u32)(r_ebp+0xfffffff8u);
    /* 006203e4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006203e5: call 0x6204d0 */ r_esp -= 4; W32(r_esp, 0x6203eau); f_006204d0();
    /* 006203ea: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006203ed: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 006203f4: jmp 0x6203ff */ goto L_006203ff;
L_006203f6:; BB(0x006203f6);
    /* 006203f6: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 006203f9: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006203fc: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_006203ff:; BB(0x006203ff);
    /* 006203ff: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00620402: mov edx, dword ptr [ecx + 0x310] */ r_edx = R32((u32)(r_ecx+0x310u));
    /* 00620408: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062040b: imul eax, eax, 0x18 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x18u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0062040e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00620411: mov edx, dword ptr [edx + ecx*8 + 4] */ r_edx = R32((u32)(r_edx+r_ecx*8+0x4u));
    /* 00620415: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00620418: cmp ecx, dword ptr [edx + eax + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062041c: jge 0x62048b */ if ((fS==fO)) goto L_0062048b;
L_0062041e:; BB(0x0062041e);
    /* 0062041e: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00620421: mov eax, dword ptr [edx + 0x310] */ r_eax = R32((u32)(r_edx+0x310u));
    /* 00620427: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062042a: imul ecx, ecx, 0x18 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x18u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0062042d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00620430: mov eax, dword ptr [eax + edx*8 + 4] */ r_eax = R32((u32)(r_eax+r_edx*8+0x4u));
    /* 00620434: mov ecx, dword ptr [eax + ecx + 0x10] */ r_ecx = R32((u32)(r_eax+r_ecx+0x10u));
    /* 00620438: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062043b: mov ax, word ptr [ecx + edx*4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ecx+r_edx*4))) & 0xffffu);
    /* 0062043f: mov word ptr [ebp - 0xc], ax */ W16((u32)(r_ebp+0xfffffff4u), (u16)r_eax);
    /* 00620443: mov cx, word ptr [ebp - 0xc] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff4u))) & 0xffffu);
    /* 00620447: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00620448: lea edx, [ebp - 8] */ r_edx = (u32)(r_ebp+0xfffffff8u);
    /* 0062044b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062044c: call 0x6204d0 */ r_esp -= 4; W32(r_esp, 0x620451u); f_006204d0();
    /* 00620451: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00620454: movsx eax, word ptr [ebp - 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 00620458: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00620459: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0062045c: mov edx, dword ptr [ecx + 0x310] */ r_edx = R32((u32)(r_ecx+0x310u));
    /* 00620462: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00620465: imul eax, eax, 0x18 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x18u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00620468: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062046b: mov edx, dword ptr [edx + ecx*8 + 4] */ r_edx = R32((u32)(r_edx+r_ecx*8+0x4u));
    /* 0062046f: mov eax, dword ptr [edx + eax + 0x14] */ r_eax = R32((u32)(r_edx+r_eax+0x14u));
    /* 00620473: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00620476: mov edx, dword ptr [eax + ecx*4] */ r_edx = R32((u32)(r_eax+r_ecx*4));
    /* 00620479: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062047a: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 0062047d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062047e: call 0x6204f0 */ r_esp -= 4; W32(r_esp, 0x620483u); f_006204f0();
    /* 00620483: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00620486: jmp 0x6203f6 */ goto L_006203f6;
L_0062048b:; BB(0x0062048b);
    /* 0062048b: jmp 0x6202df */ goto L_006202df;
L_00620490:; BB(0x00620490);
    /* 00620490: jmp 0x620296 */ goto L_00620296;
L_00620495:; BB(0x00620495);
    /* 00620495: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00620498: sub eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0062049b: mov esp, ebp */ r_esp = r_ebp;
    /* 0062049d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062049e: ret 4 */ FN_RET(0x006201c0); r_esp += 8; return;
}

void f_006204b0(void) /* sub_6204B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006204b0);
    /* 006204b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006204b1: mov ebp, esp */ r_ebp = r_esp;
    /* 006204b3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006204b6: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 006204b8: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 006204bb: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 006204bd: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006204c0: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 006204c2: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006204c5: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006204c8: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 006204ca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006204cb: ret  */ FN_RET(0x006204b0); r_esp += 4; return;
}

void f_006204d0(void) /* sub_6204D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006204d0);
    /* 006204d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006204d1: mov ebp, esp */ r_ebp = r_esp;
    /* 006204d3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006204d6: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 006204d8: mov dx, word ptr [ebp + 0xc] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xcu))) & 0xffffu);
    /* 006204dc: mov word ptr [ecx], dx */ W16((u32)(r_ecx), (u16)r_edx);
    /* 006204df: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006204e2: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 006204e4: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006204e7: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006204ea: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 006204ec: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006204ed: ret  */ FN_RET(0x006204d0); r_esp += 4; return;
}

void f_006204f0(void) /* sub_6204F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006204f0);
    /* 006204f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006204f1: mov ebp, esp */ r_ebp = r_esp;
    /* 006204f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006204f4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006204fb: jmp 0x620506 */ goto L_00620506;
L_006204fd:; BB(0x006204fd);
    /* 006204fd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00620500: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00620503: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00620506:; BB(0x00620506);
    /* 00620506: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00620509: cmp ecx, dword ptr [ebp + 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062050c: jge 0x620532 */ if ((fS==fO)) goto L_00620532;
L_0062050e:; BB(0x0062050e);
    /* 0062050e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00620511: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00620513: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00620516: mov dl, byte ptr [ecx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 00620518: mov byte ptr [eax], dl */ W8((u32)(r_eax), (u8)r_edx);
    /* 0062051a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0062051d: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0062051f: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00620522: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00620525: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 00620527: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0062052a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062052d: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
    /* 00620530: jmp 0x6204fd */ goto L_006204fd;
L_00620532:; BB(0x00620532);
    /* 00620532: mov esp, ebp */ r_esp = r_ebp;
    /* 00620534: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00620535: ret  */ FN_RET(0x006204f0); r_esp += 4; return;
}

void f_00620540(void) /* sub_620540 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00620540);
    /* 00620540: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00620541: mov ebp, esp */ r_ebp = r_esp;
    /* 00620543: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00620546: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00620549: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00620550: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00620553: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00620556: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00620559: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062055c: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062055f: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00620562: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00620565: add edx, 0x300 */ {  u32 a = r_edx; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0062056b: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0062056e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00620571: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00620574: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00620577: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0062057e: jmp 0x620589 */ goto L_00620589;
L_00620580:; BB(0x00620580);
    /* 00620580: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00620583: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00620586: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_00620589:; BB(0x00620589);
    /* 00620589: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0062058c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062058f: cmp eax, dword ptr [edx + 0x30c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x30cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00620595: jge 0x62063f */ if ((fS==fO)) goto L_0062063f;
L_0062059b:; BB(0x0062059b);
    /* 0062059b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062059e: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006205a1: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006205a4: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 006205ab: jmp 0x6205b6 */ goto L_006205b6;
L_006205ad:; BB(0x006205ad);
    /* 006205ad: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006205b0: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006205b3: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_006205b6:; BB(0x006205b6);
    /* 006205b6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006205b9: mov ecx, dword ptr [eax + 0x310] */ r_ecx = R32((u32)(r_eax+0x310u));
    /* 006205bf: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006205c2: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 006205c5: cmp eax, dword ptr [ecx + edx*8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+r_edx*8)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006205c8: jge 0x62063a */ if ((fS==fO)) goto L_0062063a;
L_006205ca:; BB(0x006205ca);
    /* 006205ca: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006205cd: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006205d0: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006205d3: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 006205da: jmp 0x6205e5 */ goto L_006205e5;
L_006205dc:; BB(0x006205dc);
    /* 006205dc: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006205df: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006205e2: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_006205e5:; BB(0x006205e5);
    /* 006205e5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006205e8: mov ecx, dword ptr [eax + 0x310] */ r_ecx = R32((u32)(r_eax+0x310u));
    /* 006205ee: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006205f1: imul edx, edx, 0x18 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x18u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006205f4: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 006205f7: mov ecx, dword ptr [ecx + eax*8 + 4] */ r_ecx = R32((u32)(r_ecx+r_eax*8+0x4u));
    /* 006205fb: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 006205fe: cmp eax, dword ptr [ecx + edx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+r_edx+0x4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00620602: jge 0x620635 */ if ((fS==fO)) goto L_00620635;
L_00620604:; BB(0x00620604);
    /* 00620604: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00620607: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062060a: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0062060d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00620610: mov eax, dword ptr [edx + 0x310] */ r_eax = R32((u32)(r_edx+0x310u));
    /* 00620616: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00620619: imul ecx, ecx, 0x18 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x18u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0062061c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062061f: mov eax, dword ptr [eax + edx*8 + 4] */ r_eax = R32((u32)(r_eax+r_edx*8+0x4u));
    /* 00620623: mov ecx, dword ptr [eax + ecx + 0x10] */ r_ecx = R32((u32)(r_eax+r_ecx+0x10u));
    /* 00620627: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062062a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062062d: add eax, dword ptr [ecx + edx*4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+r_edx*4)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00620630: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00620633: jmp 0x6205dc */ goto L_006205dc;
L_00620635:; BB(0x00620635);
    /* 00620635: jmp 0x6205ad */ goto L_006205ad;
L_0062063a:; BB(0x0062063a);
    /* 0062063a: jmp 0x620580 */ goto L_00620580;
L_0062063f:; BB(0x0062063f);
    /* 0062063f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00620642: mov esp, ebp */ r_esp = r_ebp;
    /* 00620644: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00620645: ret  */ FN_RET(0x00620540); r_esp += 4; return;
}

void f_00620650(void) /* sub_620650 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00620650);
    /* 00620650: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00620651: mov ebp, esp */ r_ebp = r_esp;
    /* 00620653: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00620656: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00620659: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 0062065c: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 00620662: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00620669: jmp 0x620674 */ goto L_00620674;
L_0062066b:; BB(0x0062066b);
    /* 0062066b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062066e: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00620671: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00620674:; BB(0x00620674);
    /* 00620674: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00620677: cmp edx, dword ptr [ebp + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062067a: jge 0x6206d9 */ if ((fS==fO)) goto L_006206d9;
L_0062067c:; BB(0x0062067c);
    /* 0062067c: mov byte ptr [ebp - 9], 1 */ W8((u32)(r_ebp+0xfffffff7u), 0x1u);
    /* 00620680: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00620687: jmp 0x620692 */ goto L_00620692;
L_00620689:; BB(0x00620689);
    /* 00620689: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062068c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062068f: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_00620692:; BB(0x00620692);
    /* 00620692: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00620695: cmp ecx, dword ptr [ebp + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00620698: jge 0x6206bc */ if ((fS==fO)) goto L_006206bc;
L_0062069a:; BB(0x0062069a);
    /* 0062069a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062069d: imul edx, dword ptr [ebp + 0xc] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_ebp+0xcu)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006206a1: add edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006206a4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006206a7: movzx ecx, byte ptr [eax + edx*4 + 3] */ r_ecx = (u32)R8((u32)(r_eax+r_edx*4+0x3u));
    /* 006206ac: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006206ae: jle 0x6206ba */ if ((fZ||fS!=fO)) goto L_006206ba;
L_006206b0:; BB(0x006206b0);
    /* 006206b0: mov byte ptr [ebp - 9], 0 */ W8((u32)(r_ebp+0xfffffff7u), 0x0u);
    /* 006206b4: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 006206b7: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_006206ba:; BB(0x006206ba);
    /* 006206ba: jmp 0x620689 */ goto L_00620689;
L_006206bc:; BB(0x006206bc);
    /* 006206bc: movzx eax, byte ptr [ebp - 9] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffff7u));
    /* 006206c0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006206c2: je 0x6206d1 */ if (fZ) goto L_006206d1;
L_006206c4:; BB(0x006206c4);
    /* 006206c4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006206c7: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006206ca: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 006206cd: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 006206cf: jmp 0x6206d7 */ goto L_006206d7;
L_006206d1:; BB(0x006206d1);
    /* 006206d1: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 006206d4: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_006206d7:; BB(0x006206d7);
    /* 006206d7: jmp 0x62066b */ goto L_0062066b;
L_006206d9:; BB(0x006206d9);
    /* 006206d9: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 006206dc: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
    /* 006206e2: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 006206e9: jmp 0x6206f4 */ goto L_006206f4;
L_006206eb:; BB(0x006206eb);
    /* 006206eb: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006206ee: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006206f1: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_006206f4:; BB(0x006206f4);
    /* 006206f4: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 006206f7: cmp eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006206fa: jge 0x620759 */ if ((fS==fO)) goto L_00620759;
L_006206fc:; BB(0x006206fc);
    /* 006206fc: mov byte ptr [ebp - 9], 1 */ W8((u32)(r_ebp+0xfffffff7u), 0x1u);
    /* 00620700: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00620707: jmp 0x620712 */ goto L_00620712;
L_00620709:; BB(0x00620709);
    /* 00620709: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062070c: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062070f: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00620712:; BB(0x00620712);
    /* 00620712: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00620715: cmp edx, dword ptr [ebp + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00620718: jge 0x62073c */ if ((fS==fO)) goto L_0062073c;
L_0062071a:; BB(0x0062071a);
    /* 0062071a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062071d: imul eax, dword ptr [ebp + 0xc] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xcu)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00620721: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00620724: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00620727: movzx edx, byte ptr [ecx + eax*4 + 3] */ r_edx = (u32)R8((u32)(r_ecx+r_eax*4+0x3u));
    /* 0062072c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0062072e: jle 0x62073a */ if ((fZ||fS!=fO)) goto L_0062073a;
L_00620730:; BB(0x00620730);
    /* 00620730: mov byte ptr [ebp - 9], 0 */ W8((u32)(r_ebp+0xfffffff7u), 0x0u);
    /* 00620734: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00620737: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0062073a:; BB(0x0062073a);
    /* 0062073a: jmp 0x620709 */ goto L_00620709;
L_0062073c:; BB(0x0062073c);
    /* 0062073c: movzx ecx, byte ptr [ebp - 9] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffff7u));
    /* 00620740: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00620742: je 0x620751 */ if (fZ) goto L_00620751;
L_00620744:; BB(0x00620744);
    /* 00620744: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00620747: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0062074a: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0062074d: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 0062074f: jmp 0x620757 */ goto L_00620757;
L_00620751:; BB(0x00620751);
    /* 00620751: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00620754: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_00620757:; BB(0x00620757);
    /* 00620757: jmp 0x6206eb */ goto L_006206eb;
L_00620759:; BB(0x00620759);
    /* 00620759: mov edx, dword ptr [ebp + 0x20] */ r_edx = R32((u32)(r_ebp+0x20u));
    /* 0062075c: mov dword ptr [edx], 0 */ W32((u32)(r_edx), 0x0u);
    /* 00620762: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00620765: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00620768: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0062076b: jmp 0x620776 */ goto L_00620776;
L_0062076d:; BB(0x0062076d);
    /* 0062076d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00620770: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00620773: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00620776:; BB(0x00620776);
    /* 00620776: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062077a: jl 0x6207da */ if ((fS!=fO)) goto L_006207da;
L_0062077c:; BB(0x0062077c);
    /* 0062077c: mov byte ptr [ebp - 9], 1 */ W8((u32)(r_ebp+0xfffffff7u), 0x1u);
    /* 00620780: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00620787: jmp 0x620792 */ goto L_00620792;
L_00620789:; BB(0x00620789);
    /* 00620789: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062078c: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0062078f: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_00620792:; BB(0x00620792);
    /* 00620792: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00620795: cmp eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00620798: jge 0x6207bc */ if ((fS==fO)) goto L_006207bc;
L_0062079a:; BB(0x0062079a);
    /* 0062079a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062079d: imul ecx, dword ptr [ebp + 0xc] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0xcu)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006207a1: add ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006207a4: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006207a7: movzx eax, byte ptr [edx + ecx*4 + 3] */ r_eax = (u32)R8((u32)(r_edx+r_ecx*4+0x3u));
    /* 006207ac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006207ae: jle 0x6207ba */ if ((fZ||fS!=fO)) goto L_006207ba;
L_006207b0:; BB(0x006207b0);
    /* 006207b0: mov byte ptr [ebp - 9], 0 */ W8((u32)(r_ebp+0xfffffff7u), 0x0u);
    /* 006207b4: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 006207b7: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_006207ba:; BB(0x006207ba);
    /* 006207ba: jmp 0x620789 */ goto L_00620789;
L_006207bc:; BB(0x006207bc);
    /* 006207bc: movzx edx, byte ptr [ebp - 9] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffff7u));
    /* 006207c0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006207c2: je 0x6207d1 */ if (fZ) goto L_006207d1;
L_006207c4:; BB(0x006207c4);
    /* 006207c4: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 006207c7: sub eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006207ca: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 006207cd: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 006207cf: jmp 0x6207d8 */ goto L_006207d8;
L_006207d1:; BB(0x006207d1);
    /* 006207d1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
L_006207d8:; BB(0x006207d8);
    /* 006207d8: jmp 0x62076d */ goto L_0062076d;
L_006207da:; BB(0x006207da);
    /* 006207da: mov edx, dword ptr [ebp + 0x1c] */ r_edx = R32((u32)(r_ebp+0x1cu));
    /* 006207dd: mov dword ptr [edx], 0 */ W32((u32)(r_edx), 0x0u);
    /* 006207e3: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006207e6: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006207e9: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 006207ec: jmp 0x6207f7 */ goto L_006207f7;
L_006207ee:; BB(0x006207ee);
    /* 006207ee: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006207f1: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006207f4: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_006207f7:; BB(0x006207f7);
    /* 006207f7: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006207fb: jl 0x62085b */ if ((fS!=fO)) goto L_0062085b;
L_006207fd:; BB(0x006207fd);
    /* 006207fd: mov byte ptr [ebp - 9], 1 */ W8((u32)(r_ebp+0xfffffff7u), 0x1u);
    /* 00620801: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00620808: jmp 0x620813 */ goto L_00620813;
L_0062080a:; BB(0x0062080a);
    /* 0062080a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062080d: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00620810: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_00620813:; BB(0x00620813);
    /* 00620813: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00620816: cmp eax, dword ptr [ebp + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00620819: jge 0x62083d */ if ((fS==fO)) goto L_0062083d;
L_0062081b:; BB(0x0062081b);
    /* 0062081b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062081e: imul ecx, dword ptr [ebp + 0xc] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0xcu)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00620822: add ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00620825: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00620828: movzx eax, byte ptr [edx + ecx*4 + 3] */ r_eax = (u32)R8((u32)(r_edx+r_ecx*4+0x3u));
    /* 0062082d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0062082f: jle 0x62083b */ if ((fZ||fS!=fO)) goto L_0062083b;
L_00620831:; BB(0x00620831);
    /* 00620831: mov byte ptr [ebp - 9], 0 */ W8((u32)(r_ebp+0xfffffff7u), 0x0u);
    /* 00620835: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00620838: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0062083b:; BB(0x0062083b);
    /* 0062083b: jmp 0x62080a */ goto L_0062080a;
L_0062083d:; BB(0x0062083d);
    /* 0062083d: movzx edx, byte ptr [ebp - 9] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffff7u));
    /* 00620841: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00620843: je 0x620852 */ if (fZ) goto L_00620852;
L_00620845:; BB(0x00620845);
    /* 00620845: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00620848: sub eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0062084b: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 0062084e: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 00620850: jmp 0x620859 */ goto L_00620859;
L_00620852:; BB(0x00620852);
    /* 00620852: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_00620859:; BB(0x00620859);
    /* 00620859: jmp 0x6207ee */ goto L_006207ee;
L_0062085b:; BB(0x0062085b);
    /* 0062085b: mov esp, ebp */ r_esp = r_ebp;
    /* 0062085d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062085e: ret 0x1c */ FN_RET(0x00620650); r_esp += 32; return;
}

void f_00620870(void) /* sub_620870 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00620870);
    /* 00620870: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00620871: mov ebp, esp */ r_ebp = r_esp;
    /* 00620873: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00620874: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00620877: movzx eax, byte ptr [ebp + 0xc] */ r_eax = (u32)R8((u32)(r_ebp+0xcu));
    /* 0062087b: imul eax, eax, 3 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0062087e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062087f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00620882: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00620883: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00620886: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00620889: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062088a: call 0x686fde */ r_esp -= 4; W32(r_esp, 0x62088fu); f_00686fde();
    /* 0062088f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00620892: movzx ax, byte ptr [ebp + 0xc] */ r_eax = (r_eax & 0xffff0000u) | (((u32)R8((u32)(r_ebp+0xcu))) & 0xffffu);
    /* 00620897: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062089a: mov word ptr [ecx + 0x308], ax */ W16((u32)(r_ecx+0x308u), (u16)r_eax);
    /* 006208a1: mov esp, ebp */ r_esp = r_ebp;
    /* 006208a3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006208a4: ret 8 */ FN_RET(0x00620870); r_esp += 12; return;
}

void f_006208b0(void) /* sub_6208B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006208b0);
    /* 006208b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006208b1: mov ebp, esp */ r_ebp = r_esp;
    /* 006208b3: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006208b6: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 006208b9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006208c0: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 006208c7: jmp 0x6208d2 */ goto L_006208d2;
L_006208c9:; BB(0x006208c9);
    /* 006208c9: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 006208cc: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006208cf: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_006208d2:; BB(0x006208d2);
    /* 006208d2: cmp dword ptr [ebp - 0x10], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006208d6: jge 0x6209bf */ if ((fS==fO)) goto L_006209bf;
L_006208dc:; BB(0x006208dc);
    /* 006208dc: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 006208e3: jmp 0x6208ee */ goto L_006208ee;
L_006208e5:; BB(0x006208e5);
    /* 006208e5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006208e8: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006208eb: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_006208ee:; BB(0x006208ee);
    /* 006208ee: cmp dword ptr [ebp - 0xc], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006208f2: jge 0x6209ba */ if ((fS==fO)) goto L_006209ba;
L_006208f8:; BB(0x006208f8);
    /* 006208f8: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 006208ff: jmp 0x62090a */ goto L_0062090a;
L_00620901:; BB(0x00620901);
    /* 00620901: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00620904: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00620907: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0062090a:; BB(0x0062090a);
    /* 0062090a: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062090e: jge 0x6209b5 */ if ((fS==fO)) goto L_006209b5;
L_00620914:; BB(0x00620914);
    /* 00620914: fild dword ptr [ebp - 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff0u)));
    /* 00620917: fmul qword ptr [0x6d8e30] */ ST(0) = ST(0) * R_F64((u32)(0x6d8e30u));
    /* 0062091d: fnstcw word ptr [ebp - 0x16] */ W16((u32)(r_ebp+0xffffffeau), fcw);
    /* 00620920: movzx eax, word ptr [ebp - 0x16] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffeau));
    /* 00620924: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00620929: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0062092c: fldcw word ptr [ebp - 0x1c] */ fcw = R16((u32)(r_ebp+0xffffffe4u));
    /* 0062092f: fistp dword ptr [ebp - 0x20] */ W32((u32)(r_ebp+0xffffffe0u), (u32)fx_int32(ST(0))); FPOP();
    /* 00620932: fldcw word ptr [ebp - 0x16] */ fcw = R16((u32)(r_ebp+0xffffffeau));
    /* 00620935: mov al, byte ptr [ebp - 0x20] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffe0u))) & 0xffu);
    /* 00620938: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062093b: imul ecx, ecx, 3 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x3u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0062093e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00620941: mov byte ptr [edx + ecx + 8], al */ W8((u32)(r_edx+r_ecx+0x8u), (u8)r_eax);
    /* 00620945: fild dword ptr [ebp - 0xc] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff4u)));
    /* 00620948: fmul qword ptr [0x6d8e30] */ ST(0) = ST(0) * R_F64((u32)(0x6d8e30u));
    /* 0062094e: fnstcw word ptr [ebp - 0x22] */ W16((u32)(r_ebp+0xffffffdeu), fcw);
    /* 00620951: movzx eax, word ptr [ebp - 0x22] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffdeu));
    /* 00620955: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0062095a: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0062095d: fldcw word ptr [ebp - 0x28] */ fcw = R16((u32)(r_ebp+0xffffffd8u));
    /* 00620960: fistp dword ptr [ebp - 0x2c] */ W32((u32)(r_ebp+0xffffffd4u), (u32)fx_int32(ST(0))); FPOP();
    /* 00620963: fldcw word ptr [ebp - 0x22] */ fcw = R16((u32)(r_ebp+0xffffffdeu));
    /* 00620966: mov al, byte ptr [ebp - 0x2c] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffd4u))) & 0xffu);
    /* 00620969: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062096c: imul ecx, ecx, 3 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x3u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0062096f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00620972: mov byte ptr [edx + ecx + 9], al */ W8((u32)(r_edx+r_ecx+0x9u), (u8)r_eax);
    /* 00620976: fild dword ptr [ebp - 8] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff8u)));
    /* 00620979: fmul qword ptr [0x6d8e28] */ ST(0) = ST(0) * R_F64((u32)(0x6d8e28u));
    /* 0062097f: fnstcw word ptr [ebp - 0x2e] */ W16((u32)(r_ebp+0xffffffd2u), fcw);
    /* 00620982: movzx eax, word ptr [ebp - 0x2e] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffd2u));
    /* 00620986: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0062098b: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0062098e: fldcw word ptr [ebp - 0x34] */ fcw = R16((u32)(r_ebp+0xffffffccu));
    /* 00620991: fistp dword ptr [ebp - 0x38] */ W32((u32)(r_ebp+0xffffffc8u), (u32)fx_int32(ST(0))); FPOP();
    /* 00620994: fldcw word ptr [ebp - 0x2e] */ fcw = R16((u32)(r_ebp+0xffffffd2u));
    /* 00620997: mov al, byte ptr [ebp - 0x38] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffc8u))) & 0xffu);
    /* 0062099a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062099d: imul ecx, ecx, 3 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x3u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006209a0: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006209a3: mov byte ptr [edx + ecx + 0xa], al */ W8((u32)(r_edx+r_ecx+0xau), (u8)r_eax);
    /* 006209a7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006209aa: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006209ad: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 006209b0: jmp 0x620901 */ goto L_00620901;
L_006209b5:; BB(0x006209b5);
    /* 006209b5: jmp 0x6208e5 */ goto L_006208e5;
L_006209ba:; BB(0x006209ba);
    /* 006209ba: jmp 0x6208c9 */ goto L_006208c9;
L_006209bf:; BB(0x006209bf);
    /* 006209bf: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006209c2: mov word ptr [ecx + 0x308], 0x100 */ W16((u32)(r_ecx+0x308u), 0x100u);
    /* 006209cb: mov esp, ebp */ r_esp = r_ebp;
    /* 006209cd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006209ce: ret  */ FN_RET(0x006208b0); r_esp += 4; return;
}

void f_006209d0(void) /* sub_6209D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006209d0);
    /* 006209d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006209d1: mov ebp, esp */ r_ebp = r_esp;
    /* 006209d3: sub esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006209d6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006209d7: mov dword ptr [ebp - 0x50], ecx */ W32((u32)(r_ebp+0xffffffb0u), r_ecx);
    /* 006209da: mov byte ptr [ebp - 0x22], 0 */ W8((u32)(r_ebp+0xffffffdeu), 0x0u);
    /* 006209de: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 006209e5: mov byte ptr [ebp - 0x21], 0 */ W8((u32)(r_ebp+0xffffffdfu), 0x0u);
    /* 006209e9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006209ec: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 006209ef: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 006209f6: jmp 0x620a01 */ goto L_00620a01;
L_006209f8:; BB(0x006209f8);
    /* 006209f8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006209fb: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006209fe: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_00620a01:; BB(0x00620a01);
    /* 00620a01: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00620a04: cmp edx, dword ptr [ebp + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00620a07: jge 0x620b18 */ if ((fS==fO)) goto L_00620b18;
L_00620a0d:; BB(0x00620a0d);
    /* 00620a0d: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00620a10: imul eax, dword ptr [ebp + 0xc] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xcu)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00620a14: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00620a17: lea edx, [ecx + eax*4] */ r_edx = (u32)(r_ecx+r_eax*4);
    /* 00620a1a: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00620a1d: mov byte ptr [ebp - 0x22], 1 */ W8((u32)(r_ebp+0xffffffdeu), 0x1u);
    /* 00620a21: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 00620a28: jmp 0x620a33 */ goto L_00620a33;
L_00620a2a:; BB(0x00620a2a);
    /* 00620a2a: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00620a2d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00620a30: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
L_00620a33:; BB(0x00620a33);
    /* 00620a33: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00620a36: cmp ecx, dword ptr [ebp + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00620a39: jge 0x620ac5 */ if ((fS==fO)) goto L_00620ac5;
L_00620a3f:; BB(0x00620a3f);
    /* 00620a3f: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00620a42: and edx, 0x80000001 */ {  u32 a = r_edx; u32 b = 0x80000001u; u32 r = (a & b) & 0xffffffffu; r_edx = r; fS = ((r >> 31) & 1); }
    /* 00620a48: jns 0x620a4f */ if (!fS) goto L_00620a4f;
L_00620a4a:; BB(0x00620a4a);
    /* 00620a4a: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00620a4b: or edx, 0xfffffffe */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00620a4e: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_00620a4f:; BB(0x00620a4f);
    /* 00620a4f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00620a51: je 0x620a82 */ if (fZ) goto L_00620a82;
L_00620a53:; BB(0x00620a53);
    /* 00620a53: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00620a56: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 00620a59: cmp ecx, 0x19 */ {  u32 a = r_ecx; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00620a5c: jg 0x620a76 */ if ((!fZ&&fS==fO)) goto L_00620a76;
L_00620a5e:; BB(0x00620a5e);
    /* 00620a5e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00620a61: movzx eax, byte ptr [edx + 1] */ r_eax = (u32)R8((u32)(r_edx+0x1u));
    /* 00620a65: cmp eax, 0x19 */ {  u32 a = r_eax; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00620a68: jg 0x620a76 */ if ((!fZ&&fS==fO)) goto L_00620a76;
L_00620a6a:; BB(0x00620a6a);
    /* 00620a6a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00620a6d: movzx edx, byte ptr [ecx + 2] */ r_edx = (u32)R8((u32)(r_ecx+0x2u));
    /* 00620a71: cmp edx, 0x19 */ {  u32 a = r_edx; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00620a74: jle 0x620a80 */ if ((fZ||fS!=fO)) goto L_00620a80;
L_00620a76:; BB(0x00620a76);
    /* 00620a76: mov byte ptr [ebp - 0x22], 0 */ W8((u32)(r_ebp+0xffffffdeu), 0x0u);
    /* 00620a7a: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00620a7d: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
L_00620a80:; BB(0x00620a80);
    /* 00620a80: jmp 0x620ab7 */ goto L_00620ab7;
L_00620a82:; BB(0x00620a82);
    /* 00620a82: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00620a85: movzx edx, byte ptr [ecx] */ r_edx = (u32)R8((u32)(r_ecx));
    /* 00620a88: cmp edx, 0xe6 */ {  u32 a = r_edx; u32 b = 0xe6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00620a8e: jl 0x620aad */ if ((fS!=fO)) goto L_00620aad;
L_00620a90:; BB(0x00620a90);
    /* 00620a90: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00620a93: movzx ecx, byte ptr [eax + 1] */ r_ecx = (u32)R8((u32)(r_eax+0x1u));
    /* 00620a97: cmp ecx, 0xe6 */ {  u32 a = r_ecx; u32 b = 0xe6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00620a9d: jl 0x620aad */ if ((fS!=fO)) goto L_00620aad;
L_00620a9f:; BB(0x00620a9f);
    /* 00620a9f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00620aa2: movzx eax, byte ptr [edx + 2] */ r_eax = (u32)R8((u32)(r_edx+0x2u));
    /* 00620aa6: cmp eax, 0xe6 */ {  u32 a = r_eax; u32 b = 0xe6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00620aab: jge 0x620ab7 */ if ((fS==fO)) goto L_00620ab7;
L_00620aad:; BB(0x00620aad);
    /* 00620aad: mov byte ptr [ebp - 0x22], 0 */ W8((u32)(r_ebp+0xffffffdeu), 0x0u);
    /* 00620ab1: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00620ab4: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
L_00620ab7:; BB(0x00620ab7);
    /* 00620ab7: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00620aba: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00620abd: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00620ac0: jmp 0x620a2a */ goto L_00620a2a;
L_00620ac5:; BB(0x00620ac5);
    /* 00620ac5: movzx eax, byte ptr [ebp - 0x22] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffdeu));
    /* 00620ac9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00620acb: je 0x620b0a */ if (fZ) goto L_00620b0a;
L_00620acd:; BB(0x00620acd);
    /* 00620acd: mov byte ptr [ebp - 0x21], 1 */ W8((u32)(r_ebp+0xffffffdfu), 0x1u);
    /* 00620ad1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00620ad3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00620ad5: movzx ecx, byte ptr [ebp + 0x18] */ r_ecx = (u32)R8((u32)(r_ebp+0x18u));
    /* 00620ad9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00620ada: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00620add: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00620ade: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00620ae1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00620ae2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00620ae5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00620ae6: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00620ae9: call 0x6209d0 */ r_esp -= 4; W32(r_esp, 0x620aeeu); f_006209d0();
    /* 00620aee: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00620af1: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00620af4: imul edx, dword ptr [ebp + 0xc] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_ebp+0xcu)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00620af8: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00620afb: lea ecx, [eax + edx*4] */ r_ecx = (u32)(r_eax+r_edx*4);
    /* 00620afe: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00620b01: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 00620b08: jmp 0x620b13 */ goto L_00620b13;
L_00620b0a:; BB(0x00620b0a);
    /* 00620b0a: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00620b0d: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00620b10: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
L_00620b13:; BB(0x00620b13);
    /* 00620b13: jmp 0x6209f8 */ goto L_006209f8;
L_00620b18:; BB(0x00620b18);
    /* 00620b18: movzx eax, byte ptr [ebp - 0x21] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffdfu));
    /* 00620b1c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00620b1e: je 0x620b42 */ if (fZ) goto L_00620b42;
L_00620b20:; BB(0x00620b20);
    /* 00620b20: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00620b22: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00620b24: movzx ecx, byte ptr [ebp + 0x18] */ r_ecx = (u32)R8((u32)(r_ebp+0x18u));
    /* 00620b28: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00620b29: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00620b2c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00620b2d: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00620b30: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00620b31: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00620b34: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00620b35: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00620b38: call 0x6209d0 */ r_esp -= 4; W32(r_esp, 0x620b3du); f_006209d0();
    /* 00620b3d: jmp 0x620f90 */ goto L_00620f90;
L_00620b42:; BB(0x00620b42);
    /* 00620b42: cmp dword ptr [ebp + 0x14], 4 */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00620b46: jne 0x620c56 */ if (!fZ) goto L_00620c56;
L_00620b4c:; BB(0x00620b4c);
    /* 00620b4c: mov byte ptr [ebp - 0x23], 0 */ W8((u32)(r_ebp+0xffffffddu), 0x0u);
    /* 00620b50: mov byte ptr [ebp - 0x2d], 0 */ W8((u32)(r_ebp+0xffffffd3u), 0x0u);
    /* 00620b54: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 00620b5b: jmp 0x620b66 */ goto L_00620b66;
L_00620b5d:; BB(0x00620b5d);
    /* 00620b5d: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00620b60: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00620b63: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_00620b66:; BB(0x00620b66);
    /* 00620b66: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00620b69: cmp eax, dword ptr [ebp + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00620b6c: jge 0x620bf7 */ if ((fS==fO)) goto L_00620bf7;
L_00620b72:; BB(0x00620b72);
    /* 00620b72: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 00620b79: jmp 0x620b84 */ goto L_00620b84;
L_00620b7b:; BB(0x00620b7b);
    /* 00620b7b: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00620b7e: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00620b81: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
L_00620b84:; BB(0x00620b84);
    /* 00620b84: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00620b87: cmp edx, dword ptr [ebp + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00620b8a: jge 0x620bf2 */ if ((fS==fO)) goto L_00620bf2;
L_00620b8c:; BB(0x00620b8c);
    /* 00620b8c: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00620b8f: imul eax, dword ptr [ebp + 0xc] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xcu)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00620b93: add eax, dword ptr [ebp - 0x34] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffccu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00620b96: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00620b99: movzx ecx, byte ptr [ebp - 0x2d] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffd3u));
    /* 00620b9d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00620b9f: jne 0x620bd1 */ if (!fZ) goto L_00620bd1;
L_00620ba1:; BB(0x00620ba1);
    /* 00620ba1: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00620ba4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00620ba7: movzx ecx, byte ptr [eax + edx*4] */ r_ecx = (u32)R8((u32)(r_eax+r_edx*4));
    /* 00620bab: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00620bad: jne 0x620bcd */ if (!fZ) goto L_00620bcd;
L_00620baf:; BB(0x00620baf);
    /* 00620baf: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00620bb2: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00620bb5: movzx ecx, byte ptr [eax + edx*4 + 1] */ r_ecx = (u32)R8((u32)(r_eax+r_edx*4+0x1u));
    /* 00620bba: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00620bbc: jne 0x620bcd */ if (!fZ) goto L_00620bcd;
L_00620bbe:; BB(0x00620bbe);
    /* 00620bbe: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00620bc1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00620bc4: movzx ecx, byte ptr [eax + edx*4 + 2] */ r_ecx = (u32)R8((u32)(r_eax+r_edx*4+0x2u));
    /* 00620bc9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00620bcb: je 0x620bd1 */ if (fZ) goto L_00620bd1;
L_00620bcd:; BB(0x00620bcd);
    /* 00620bcd: mov byte ptr [ebp - 0x2d], 1 */ W8((u32)(r_ebp+0xffffffd3u), 0x1u);
L_00620bd1:; BB(0x00620bd1);
    /* 00620bd1: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00620bd4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00620bd7: movzx ecx, byte ptr [eax + edx*4 + 3] */ r_ecx = (u32)R8((u32)(r_eax+r_edx*4+0x3u));
    /* 00620bdc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00620bde: je 0x620bf0 */ if (fZ) goto L_00620bf0;
L_00620be0:; BB(0x00620be0);
    /* 00620be0: mov byte ptr [ebp - 0x23], 1 */ W8((u32)(r_ebp+0xffffffddu), 0x1u);
    /* 00620be4: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00620be7: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00620bea: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00620bed: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
L_00620bf0:; BB(0x00620bf0);
    /* 00620bf0: jmp 0x620b7b */ goto L_00620b7b;
L_00620bf2:; BB(0x00620bf2);
    /* 00620bf2: jmp 0x620b5d */ goto L_00620b5d;
L_00620bf7:; BB(0x00620bf7);
    /* 00620bf7: movzx ecx, byte ptr [ebp - 0x23] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffddu));
    /* 00620bfb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00620bfd: jne 0x620c51 */ if (!fZ) goto L_00620c51;
L_00620bff:; BB(0x00620bff);
    /* 00620bff: movzx edx, byte ptr [ebp - 0x2d] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffd3u));
    /* 00620c03: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00620c05: je 0x620c51 */ if (fZ) goto L_00620c51;
L_00620c07:; BB(0x00620c07);
    /* 00620c07: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 00620c0e: jmp 0x620c19 */ goto L_00620c19;
L_00620c10:; BB(0x00620c10);
    /* 00620c10: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00620c13: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00620c16: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_00620c19:; BB(0x00620c19);
    /* 00620c19: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00620c1c: cmp ecx, dword ptr [ebp + 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00620c1f: jge 0x620c51 */ if ((fS==fO)) goto L_00620c51;
L_00620c21:; BB(0x00620c21);
    /* 00620c21: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 00620c28: jmp 0x620c33 */ goto L_00620c33;
L_00620c2a:; BB(0x00620c2a);
    /* 00620c2a: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00620c2d: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00620c30: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
L_00620c33:; BB(0x00620c33);
    /* 00620c33: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00620c36: cmp eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00620c39: jge 0x620c4f */ if ((fS==fO)) goto L_00620c4f;
L_00620c3b:; BB(0x00620c3b);
    /* 00620c3b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00620c3e: imul ecx, dword ptr [ebp + 0xc] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0xcu)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00620c42: add ecx, dword ptr [ebp - 0x34] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffccu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00620c45: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00620c48: mov byte ptr [edx + ecx*4 + 3], 0xff */ W8((u32)(r_edx+r_ecx*4+0x3u), 0xffu);
    /* 00620c4d: jmp 0x620c2a */ goto L_00620c2a;
L_00620c4f:; BB(0x00620c4f);
    /* 00620c4f: jmp 0x620c10 */ goto L_00620c10;
L_00620c51:; BB(0x00620c51);
    /* 00620c51: jmp 0x620d2b */ goto L_00620d2b;
L_00620c56:; BB(0x00620c56);
    /* 00620c56: mov dword ptr [ebp - 0x3c], 0xffffffff */ W32((u32)(r_ebp+0xffffffc4u), 0xffffffffu);
    /* 00620c5d: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00620c60: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 00620c63: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 00620c66: sub ecx, 0xe */ {  u32 a = r_ecx; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00620c69: mov dword ptr [ebp - 0x54], ecx */ W32((u32)(r_ebp+0xffffffacu), r_ecx);
    /* 00620c6c: cmp dword ptr [ebp - 0x54], 0x32 */ {  u32 a = R32((u32)(r_ebp+0xffffffacu)); u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00620c70: ja 0x620c9c */ if ((!fC&&!fZ)) goto L_00620c9c;
L_00620c72:; BB(0x00620c72);
    /* 00620c72: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 00620c75: movzx eax, byte ptr [edx + 0x620fa8] */ r_eax = (u32)R8((u32)(r_edx+0x620fa8u));
    /* 00620c7c: jmp dword ptr [eax*4 + 0x620f98] */ { u32 t = R32((u32)(r_eax*4+0x620f98u)); switch (t) { case 0x620c8cu: goto L_00620c8c; case 0x620c83u: goto L_00620c83; case 0x620c95u: goto L_00620c95; case 0x620c9cu: goto L_00620c9c; default: UNSUP(0x00620c7c, "jump table entry is not a known target"); } }
L_00620c83:; BB(0x00620c83);
    /* 00620c83: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 00620c8a: jmp 0x620c9c */ goto L_00620c9c;
L_00620c8c:; BB(0x00620c8c);
    /* 00620c8c: mov dword ptr [ebp - 0x3c], 0x80 */ W32((u32)(r_ebp+0xffffffc4u), 0x80u);
    /* 00620c93: jmp 0x620c9c */ goto L_00620c9c;
L_00620c95:; BB(0x00620c95);
    /* 00620c95: mov dword ptr [ebp - 0x3c], 0xff */ W32((u32)(r_ebp+0xffffffc4u), 0xffu);
L_00620c9c:; BB(0x00620c9c);
    /* 00620c9c: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 00620ca3: jmp 0x620cae */ goto L_00620cae;
L_00620ca5:; BB(0x00620ca5);
    /* 00620ca5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00620ca8: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00620cab: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_00620cae:; BB(0x00620cae);
    /* 00620cae: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00620cb1: cmp edx, dword ptr [ebp + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00620cb4: jge 0x620d2b */ if ((fS==fO)) goto L_00620d2b;
L_00620cb6:; BB(0x00620cb6);
    /* 00620cb6: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 00620cbd: jmp 0x620cc8 */ goto L_00620cc8;
L_00620cbf:; BB(0x00620cbf);
    /* 00620cbf: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00620cc2: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00620cc5: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
L_00620cc8:; BB(0x00620cc8);
    /* 00620cc8: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00620ccb: cmp ecx, dword ptr [ebp + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00620cce: jge 0x620d26 */ if ((fS==fO)) goto L_00620d26;
L_00620cd0:; BB(0x00620cd0);
    /* 00620cd0: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00620cd3: imul edx, dword ptr [ebp + 0xc] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_ebp+0xcu)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00620cd7: add edx, dword ptr [ebp - 0x34] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffccu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00620cda: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 00620cdd: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00620ce0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00620ce3: movzx edx, byte ptr [ecx + eax*4] */ r_edx = (u32)R8((u32)(r_ecx+r_eax*4));
    /* 00620ce7: cmp edx, dword ptr [ebp - 0x3c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffc4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00620cea: jne 0x620d0c */ if (!fZ) goto L_00620d0c;
L_00620cec:; BB(0x00620cec);
    /* 00620cec: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00620cef: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00620cf2: movzx edx, byte ptr [ecx + eax*4 + 1] */ r_edx = (u32)R8((u32)(r_ecx+r_eax*4+0x1u));
    /* 00620cf7: cmp edx, dword ptr [ebp - 0x3c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffc4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00620cfa: jne 0x620d0c */ if (!fZ) goto L_00620d0c;
L_00620cfc:; BB(0x00620cfc);
    /* 00620cfc: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00620cff: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00620d02: movzx edx, byte ptr [ecx + eax*4 + 2] */ r_edx = (u32)R8((u32)(r_ecx+r_eax*4+0x2u));
    /* 00620d07: cmp edx, dword ptr [ebp - 0x3c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffc4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00620d0a: je 0x620d19 */ if (fZ) goto L_00620d19;
L_00620d0c:; BB(0x00620d0c);
    /* 00620d0c: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00620d0f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00620d12: mov byte ptr [ecx + eax*4 + 3], 0xff */ W8((u32)(r_ecx+r_eax*4+0x3u), 0xffu);
    /* 00620d17: jmp 0x620d24 */ goto L_00620d24;
L_00620d19:; BB(0x00620d19);
    /* 00620d19: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00620d1c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00620d1f: mov byte ptr [eax + edx*4 + 3], 0 */ W8((u32)(r_eax+r_edx*4+0x3u), 0x0u);
L_00620d24:; BB(0x00620d24);
    /* 00620d24: jmp 0x620cbf */ goto L_00620cbf;
L_00620d26:; BB(0x00620d26);
    /* 00620d26: jmp 0x620ca5 */ goto L_00620ca5;
L_00620d2b:; BB(0x00620d2b);
    /* 00620d2b: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 00620d32: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00620d39: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00620d40: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 00620d47: movzx ecx, byte ptr [ebp + 0x18] */ r_ecx = (u32)R8((u32)(r_ebp+0x18u));
    /* 00620d4b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00620d4d: je 0x620d73 */ if (fZ) goto L_00620d73;
L_00620d4f:; BB(0x00620d4f);
    /* 00620d4f: lea edx, [ebp - 4] */ r_edx = (u32)(r_ebp+0xfffffffcu);
    /* 00620d52: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00620d53: lea eax, [ebp - 0x28] */ r_eax = (u32)(r_ebp+0xffffffd8u);
    /* 00620d56: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00620d57: lea ecx, [ebp - 0x20] */ r_ecx = (u32)(r_ebp+0xffffffe0u);
    /* 00620d5a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00620d5b: lea edx, [ebp - 0x18] */ r_edx = (u32)(r_ebp+0xffffffe8u);
    /* 00620d5e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00620d5f: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00620d62: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00620d63: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00620d66: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00620d67: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00620d6a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00620d6b: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00620d6e: call 0x620650 */ r_esp -= 4; W32(r_esp, 0x620d73u); f_00620650();
L_00620d73:; BB(0x00620d73);
    /* 00620d73: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 00620d76: mov eax, dword ptr [eax + 0x314] */ r_eax = R32((u32)(r_eax+0x314u));
    /* 00620d7c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00620d7f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00620d81: mov edx, 0x14 */ r_edx = 0x14u;
    /* 00620d86: mul edx */ { u64 t = (u64)r_eax * r_edx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 00620d88: seto cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fO) ? 1 : 0) & 0xffu);
    /* 00620d8b: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00620d8d: or ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00620d8f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00620d90: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x620d95u); f_00686d82();
    /* 00620d95: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00620d98: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00620d9b: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00620d9e: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00620da1: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 00620da8: jmp 0x620db3 */ goto L_00620db3;
L_00620daa:; BB(0x00620daa);
    /* 00620daa: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00620dad: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00620db0: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_00620db3:; BB(0x00620db3);
    /* 00620db3: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00620db6: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00620db9: cmp eax, dword ptr [edx + 0x314] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x314u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00620dbf: jge 0x620df9 */ if ((fS==fO)) goto L_00620df9;
L_00620dc1:; BB(0x00620dc1);
    /* 00620dc1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00620dc4: imul ecx, ecx, 0x14 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x14u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00620dc7: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00620dca: mov eax, dword ptr [edx + 0x318] */ r_eax = R32((u32)(r_edx+0x318u));
    /* 00620dd0: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00620dd2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00620dd5: imul ecx, ecx, 0x14 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x14u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00620dd8: add ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00620ddb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00620ddd: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 00620ddf: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00620de2: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 00620de5: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 00620de8: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 00620deb: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 00620dee: mov dword ptr [ecx + 0xc], edx */ W32((u32)(r_ecx+0xcu), r_edx);
    /* 00620df1: mov eax, dword ptr [eax + 0x10] */ r_eax = R32((u32)(r_eax+0x10u));
    /* 00620df4: mov dword ptr [ecx + 0x10], eax */ W32((u32)(r_ecx+0x10u), r_eax);
    /* 00620df7: jmp 0x620daa */ goto L_00620daa;
L_00620df9:; BB(0x00620df9);
    /* 00620df9: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00620dfc: mov edx, dword ptr [ecx + 0x314] */ r_edx = R32((u32)(r_ecx+0x314u));
    /* 00620e02: imul edx, edx, 0x14 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x14u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00620e05: add edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00620e08: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 00620e0b: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 00620e0e: mov ecx, dword ptr [eax + 0x314] */ r_ecx = R32((u32)(r_eax+0x314u));
    /* 00620e14: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00620e17: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00620e1a: mov dword ptr [edx + 0x314], ecx */ W32((u32)(r_edx+0x314u), r_ecx);
    /* 00620e20: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 00620e23: cmp dword ptr [eax + 0x318], 0 */ {  u32 a = R32((u32)(r_eax+0x318u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00620e2a: je 0x620e44 */ if (fZ) goto L_00620e44;
L_00620e2c:; BB(0x00620e2c);
    /* 00620e2c: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00620e2f: mov edx, dword ptr [ecx + 0x318] */ r_edx = R32((u32)(r_ecx+0x318u));
    /* 00620e35: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 00620e38: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00620e3b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00620e3c: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x620e41u); f_00686cae();
    /* 00620e41: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00620e44:; BB(0x00620e44);
    /* 00620e44: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00620e47: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00620e4a: mov dword ptr [ecx + 0x318], edx */ W32((u32)(r_ecx+0x318u), r_edx);
    /* 00620e50: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00620e53: cmp eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00620e56: je 0x620e70 */ if (fZ) goto L_00620e70;
L_00620e58:; BB(0x00620e58);
    /* 00620e58: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00620e5b: cmp ecx, dword ptr [ebp + 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00620e5e: je 0x620e70 */ if (fZ) goto L_00620e70;
L_00620e60:; BB(0x00620e60);
    /* 00620e60: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00620e63: cmp edx, dword ptr [ebp + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00620e66: je 0x620e70 */ if (fZ) goto L_00620e70;
L_00620e68:; BB(0x00620e68);
    /* 00620e68: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00620e6b: cmp eax, dword ptr [ebp + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00620e6e: jne 0x620ea6 */ if (!fZ) goto L_00620ea6;
L_00620e70:; BB(0x00620e70);
    /* 00620e70: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00620e73: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
    /* 00620e79: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00620e7c: mov dword ptr [edx + 4], 0 */ W32((u32)(r_edx+0x4u), 0x0u);
    /* 00620e83: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00620e86: mov dword ptr [eax + 8], 0 */ W32((u32)(r_eax+0x8u), 0x0u);
    /* 00620e8d: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00620e90: mov dword ptr [ecx + 0xc], 0 */ W32((u32)(r_ecx+0xcu), 0x0u);
    /* 00620e97: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00620e9a: mov dword ptr [edx + 0x10], 0 */ W32((u32)(r_edx+0x10u), 0x0u);
    /* 00620ea1: jmp 0x620f26 */ goto L_00620f26;
L_00620ea6:; BB(0x00620ea6);
    /* 00620ea6: movzx eax, byte ptr [ebp + 0x1c] */ r_eax = (u32)R8((u32)(r_ebp+0x1cu));
    /* 00620eaa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00620eac: je 0x620ec1 */ if (fZ) goto L_00620ec1;
L_00620eae:; BB(0x00620eae);
    /* 00620eae: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00620eb1: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00620eb4: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 00620eb6: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00620eb9: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00620ebc: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 00620ebf: jmp 0x620ed4 */ goto L_00620ed4;
L_00620ec1:; BB(0x00620ec1);
    /* 00620ec1: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00620ec4: mov dword ptr [edx], 0 */ W32((u32)(r_edx), 0x0u);
    /* 00620eca: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00620ecd: mov dword ptr [eax + 4], 0 */ W32((u32)(r_eax+0x4u), 0x0u);
L_00620ed4:; BB(0x00620ed4);
    /* 00620ed4: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00620ed7: sub ecx, dword ptr [ebp - 0x18] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00620eda: sub ecx, dword ptr [ebp - 0x28] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffd8u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00620edd: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00620ee0: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 00620ee3: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00620ee6: sub eax, dword ptr [ebp - 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00620ee9: sub eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00620eec: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00620eef: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 00620ef2: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00620ef5: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00620ef8: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 00620efb: imul ecx, dword ptr [eax + 0xc] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_eax+0xcu)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00620eff: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00620f01: mov eax, ecx */ r_eax = r_ecx;
    /* 00620f03: mov edx, 4 */ r_edx = 0x4u;
    /* 00620f08: mul edx */ { u64 t = (u64)r_eax * r_edx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 00620f0a: seto bl */ r_ebx = (r_ebx & 0xffffff00u) | (((fO) ? 1 : 0) & 0xffu);
    /* 00620f0d: neg ebx */ { u32 x = r_ebx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00620f0f: or ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 00620f11: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00620f12: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x620f17u); f_00686d82();
    /* 00620f17: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00620f1a: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00620f1d: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00620f20: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00620f23: mov dword ptr [eax + 0x10], ecx */ W32((u32)(r_eax+0x10u), r_ecx);
L_00620f26:; BB(0x00620f26);
    /* 00620f26: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 00620f2d: jmp 0x620f38 */ goto L_00620f38;
L_00620f2f:; BB(0x00620f2f);
    /* 00620f2f: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00620f32: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00620f35: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_00620f38:; BB(0x00620f38);
    /* 00620f38: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00620f3b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00620f3e: cmp ecx, dword ptr [eax + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00620f41: jge 0x620f90 */ if ((fS==fO)) goto L_00620f90;
L_00620f43:; BB(0x00620f43);
    /* 00620f43: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 00620f4a: jmp 0x620f55 */ goto L_00620f55;
L_00620f4c:; BB(0x00620f4c);
    /* 00620f4c: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00620f4f: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00620f52: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
L_00620f55:; BB(0x00620f55);
    /* 00620f55: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00620f58: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00620f5b: cmp ecx, dword ptr [eax + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00620f5e: jge 0x620f8e */ if ((fS==fO)) goto L_00620f8e;
L_00620f60:; BB(0x00620f60);
    /* 00620f60: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00620f63: add edx, dword ptr [ebp - 0x20] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00620f66: imul edx, dword ptr [ebp + 0xc] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_ebp+0xcu)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00620f6a: add edx, dword ptr [ebp - 0x34] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffccu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00620f6d: add edx, dword ptr [ebp - 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00620f70: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00620f73: mov ecx, dword ptr [eax + edx*4] */ r_ecx = R32((u32)(r_eax+r_edx*4));
    /* 00620f76: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00620f79: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00620f7c: imul eax, dword ptr [edx + 8] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_edx+0x8u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00620f80: add eax, dword ptr [ebp - 0x34] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffccu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00620f83: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00620f86: mov edx, dword ptr [edx + 0x10] */ r_edx = R32((u32)(r_edx+0x10u));
    /* 00620f89: mov dword ptr [edx + eax*4], ecx */ W32((u32)(r_edx+r_eax*4), r_ecx);
    /* 00620f8c: jmp 0x620f4c */ goto L_00620f4c;
L_00620f8e:; BB(0x00620f8e);
    /* 00620f8e: jmp 0x620f2f */ goto L_00620f2f;
L_00620f90:; BB(0x00620f90);
    /* 00620f90: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00620f91: mov esp, ebp */ r_esp = r_ebp;
    /* 00620f93: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00620f94: ret 0x18 */ FN_RET(0x006209d0); r_esp += 28; return;
}

void f_00620fe0(void) /* sub_620FE0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00620fe0);
    /* 00620fe0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00620fe1: mov ebp, esp */ r_ebp = r_esp;
    /* 00620fe3: sub esp, 0x378 */ {  u32 a = r_esp; u32 b = 0x378u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00620fe9: mov dword ptr [ebp - 0x378], ecx */ W32((u32)(r_ebp+0xfffffc88u), r_ecx);
    /* 00620fef: mov eax, dword ptr [ebp - 0x378] */ r_eax = R32((u32)(r_ebp+0xfffffc88u));
    /* 00620ff5: mov ecx, dword ptr [eax + 0x30c] */ r_ecx = R32((u32)(r_eax+0x30cu));
    /* 00620ffb: mov edx, dword ptr [ebp - 0x378] */ r_edx = R32((u32)(r_ebp+0xfffffc88u));
    /* 00621001: mov eax, dword ptr [edx + 0x310] */ r_eax = R32((u32)(r_edx+0x310u));
    /* 00621007: lea ecx, [eax + ecx*8 - 8] */ r_ecx = (u32)(r_eax+r_ecx*8+0xfffffff8u);
    /* 0062100b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0062100e: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00621011: cmp dword ptr [edx + 4], 0 */ {  u32 a = R32((u32)(r_edx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00621015: je 0x621032 */ if (fZ) goto L_00621032;
L_00621017:; BB(0x00621017);
    /* 00621017: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062101a: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0062101d: mov dword ptr [ebp - 0x348], ecx */ W32((u32)(r_ebp+0xfffffcb8u), r_ecx);
    /* 00621023: mov edx, dword ptr [ebp - 0x348] */ r_edx = R32((u32)(r_ebp+0xfffffcb8u));
    /* 00621029: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062102a: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x62102fu); f_00686cae();
    /* 0062102f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00621032:; BB(0x00621032);
    /* 00621032: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00621034: mov edx, dword ptr [ebp - 0x378] */ r_edx = R32((u32)(r_ebp+0xfffffc88u));
    /* 0062103a: mov eax, dword ptr [edx + 0x314] */ r_eax = R32((u32)(r_edx+0x314u));
    /* 00621040: mov edx, 0x18 */ r_edx = 0x18u;
    /* 00621045: mul edx */ { u64 t = (u64)r_eax * r_edx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 00621047: seto cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fO) ? 1 : 0) & 0xffu);
    /* 0062104a: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0062104c: or ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0062104e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062104f: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x621054u); f_00686d82();
    /* 00621054: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00621057: mov dword ptr [ebp - 0x34c], eax */ W32((u32)(r_ebp+0xfffffcb4u), r_eax);
    /* 0062105d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00621060: mov ecx, dword ptr [ebp - 0x34c] */ r_ecx = R32((u32)(r_ebp+0xfffffcb4u));
    /* 00621066: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 00621069: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062106c: mov eax, dword ptr [ebp - 0x378] */ r_eax = R32((u32)(r_ebp+0xfffffc88u));
    /* 00621072: mov ecx, dword ptr [eax + 0x314] */ r_ecx = R32((u32)(r_eax+0x314u));
    /* 00621078: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 0062107a: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 00621081: jmp 0x62108c */ goto L_0062108c;
L_00621083:; BB(0x00621083);
    /* 00621083: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00621086: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00621089: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_0062108c:; BB(0x0062108c);
    /* 0062108c: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062108f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00621092: cmp ecx, dword ptr [eax] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00621094: jge 0x621162 */ if ((fS==fO)) goto L_00621162;
L_0062109a:; BB(0x0062109a);
    /* 0062109a: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062109d: imul edx, edx, 0x14 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x14u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006210a0: mov eax, dword ptr [ebp - 0x378] */ r_eax = R32((u32)(r_ebp+0xfffffc88u));
    /* 006210a6: add edx, dword ptr [eax + 0x318] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x318u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006210ac: mov dword ptr [ebp - 0x32c], edx */ W32((u32)(r_ebp+0xfffffcd4u), r_edx);
    /* 006210b2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006210b5: imul ecx, ecx, 0x18 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x18u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006210b8: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006210bb: add ecx, dword ptr [edx + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006210be: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 006210c1: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006210c4: mov ecx, dword ptr [ebp - 0x32c] */ r_ecx = R32((u32)(r_ebp+0xfffffcd4u));
    /* 006210ca: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006210cc: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 006210cf: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006210d2: mov ecx, dword ptr [ebp - 0x32c] */ r_ecx = R32((u32)(r_ebp+0xfffffcd4u));
    /* 006210d8: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 006210db: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
    /* 006210de: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006210e1: mov ecx, dword ptr [ebp - 0x32c] */ r_ecx = R32((u32)(r_ebp+0xfffffcd4u));
    /* 006210e7: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 006210ea: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 006210ec: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006210ef: mov ecx, dword ptr [ebp - 0x32c] */ r_ecx = R32((u32)(r_ebp+0xfffffcd4u));
    /* 006210f5: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 006210f8: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 006210fb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006210fd: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00621100: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00621103: mov edx, 4 */ r_edx = 0x4u;
    /* 00621108: mul edx */ { u64 t = (u64)r_eax * r_edx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 0062110a: seto cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fO) ? 1 : 0) & 0xffu);
    /* 0062110d: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0062110f: or ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00621111: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00621112: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x621117u); f_00686d82();
    /* 00621117: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062111a: mov dword ptr [ebp - 0x350], eax */ W32((u32)(r_ebp+0xfffffcb0u), r_eax);
    /* 00621120: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00621123: mov ecx, dword ptr [ebp - 0x350] */ r_ecx = R32((u32)(r_ebp+0xfffffcb0u));
    /* 00621129: mov dword ptr [eax + 0x14], ecx */ W32((u32)(r_eax+0x14u), r_ecx);
    /* 0062112c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0062112e: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00621131: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00621134: mov edx, 4 */ r_edx = 0x4u;
    /* 00621139: mul edx */ { u64 t = (u64)r_eax * r_edx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 0062113b: seto cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fO) ? 1 : 0) & 0xffu);
    /* 0062113e: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00621140: or ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00621142: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00621143: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x621148u); f_00686d82();
    /* 00621148: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062114b: mov dword ptr [ebp - 0x354], eax */ W32((u32)(r_ebp+0xfffffcacu), r_eax);
    /* 00621151: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00621154: mov ecx, dword ptr [ebp - 0x354] */ r_ecx = R32((u32)(r_ebp+0xfffffcacu));
    /* 0062115a: mov dword ptr [eax + 0x10], ecx */ W32((u32)(r_eax+0x10u), r_ecx);
    /* 0062115d: jmp 0x621083 */ goto L_00621083;
L_00621162:; BB(0x00621162);
    /* 00621162: mov byte ptr [ebp - 0x15], 0 */ W8((u32)(r_ebp+0xffffffebu), 0x0u);
    /* 00621166: push 0x80000 */ { u32 v = 0x80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0062116b: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x621170u); f_00686d82();
    /* 00621170: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00621173: mov dword ptr [ebp - 0x358], eax */ W32((u32)(r_ebp+0xfffffca8u), r_eax);
    /* 00621179: mov edx, dword ptr [ebp - 0x358] */ r_edx = R32((u32)(r_ebp+0xfffffca8u));
    /* 0062117f: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00621182: push 0x80000 */ { u32 v = 0x80000u; r_esp -= 4; W32(r_esp, v); }
    /* 00621187: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00621189: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062118c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062118d: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x621192u); f_00686fa2();
    /* 00621192: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00621195: push 0x300 */ { u32 v = 0x300u; r_esp -= 4; W32(r_esp, v); }
    /* 0062119a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062119c: lea ecx, [ebp - 0x328] */ r_ecx = (u32)(r_ebp+0xfffffcd8u);
    /* 006211a2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006211a3: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x6211a8u); f_00686fa2();
    /* 006211a8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006211ab: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 006211b2: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 006211b9: jmp 0x6211c4 */ goto L_006211c4;
L_006211bb:; BB(0x006211bb);
    /* 006211bb: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006211be: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006211c1: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_006211c4:; BB(0x006211c4);
    /* 006211c4: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006211c7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006211ca: cmp ecx, dword ptr [eax] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006211cc: jge 0x6213cd */ if ((fS==fO)) goto L_006213cd;
L_006211d2:; BB(0x006211d2);
    /* 006211d2: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006211d5: imul edx, edx, 0x14 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x14u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006211d8: mov eax, dword ptr [ebp - 0x378] */ r_eax = R32((u32)(r_ebp+0xfffffc88u));
    /* 006211de: add edx, dword ptr [eax + 0x318] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x318u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006211e4: mov dword ptr [ebp - 0x32c], edx */ W32((u32)(r_ebp+0xfffffcd4u), r_edx);
    /* 006211ea: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006211ed: imul ecx, ecx, 0x18 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x18u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006211f0: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006211f3: add ecx, dword ptr [edx + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006211f6: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 006211f9: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006211fc: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006211ff: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00621202: imul edx, dword ptr [ecx] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_ecx)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00621205: mov dword ptr [ebp - 0x334], edx */ W32((u32)(r_ebp+0xfffffcccu), r_edx);
    /* 0062120b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00621212: jmp 0x62121f */ goto L_0062121f;
L_00621214:; BB(0x00621214);
    /* 00621214: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00621217: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062121a: add ecx, dword ptr [eax] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062121c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0062121f:; BB(0x0062121f);
    /* 0062121f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00621222: cmp edx, dword ptr [ebp - 0x334] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffcccu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00621228: jge 0x6213c8 */ if ((fS==fO)) goto L_006213c8;
L_0062122e:; BB(0x0062122e);
    /* 0062122e: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00621231: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00621234: add ecx, dword ptr [eax] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00621236: mov dword ptr [ebp - 0x338], ecx */ W32((u32)(r_ebp+0xfffffcc8u), r_ecx);
    /* 0062123c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062123f: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00621242: jmp 0x62124d */ goto L_0062124d;
L_00621244:; BB(0x00621244);
    /* 00621244: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00621247: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062124a: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0062124d:; BB(0x0062124d);
    /* 0062124d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00621250: cmp ecx, dword ptr [ebp - 0x338] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffcc8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00621256: jge 0x6213c3 */ if ((fS==fO)) goto L_006213c3;
L_0062125c:; BB(0x0062125c);
    /* 0062125c: mov edx, dword ptr [ebp - 0x32c] */ r_edx = R32((u32)(r_ebp+0xfffffcd4u));
    /* 00621262: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 00621265: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00621268: mov edx, dword ptr [eax + ecx*4] */ r_edx = R32((u32)(r_eax+r_ecx*4));
    /* 0062126b: mov dword ptr [ebp - 0x33c], edx */ W32((u32)(r_ebp+0xfffffcc4u), r_edx);
    /* 00621271: movzx eax, byte ptr [ebp - 0x339] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffcc7u));
    /* 00621278: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062127a: je 0x6213be */ if (fZ) goto L_006213be;
L_00621280:; BB(0x00621280);
    /* 00621280: movzx ecx, byte ptr [ebp - 0x33c] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffcc4u));
    /* 00621287: sar ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0062128a: shl ecx, 6 */ { u32 c = (6u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0062128d: shl ecx, 5 */ { u32 c = (5u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00621290: movzx edx, byte ptr [ebp - 0x33b] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffcc5u));
    /* 00621297: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0062129a: shl edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0062129d: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062129f: movzx eax, byte ptr [ebp - 0x33a] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffcc6u));
    /* 006212a6: sar eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 006212a9: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006212ab: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006212ae: lea eax, [edx + ecx*4] */ r_eax = (u32)(r_edx+r_ecx*4);
    /* 006212b1: mov dword ptr [ebp - 0x340], eax */ W32((u32)(r_ebp+0xfffffcc0u), r_eax);
    /* 006212b7: mov ecx, dword ptr [ebp - 0x340] */ r_ecx = R32((u32)(r_ebp+0xfffffcc0u));
    /* 006212bd: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006212bf: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006212c2: mov eax, dword ptr [ebp - 0x340] */ r_eax = R32((u32)(r_ebp+0xfffffcc0u));
    /* 006212c8: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 006212ca: movzx ecx, byte ptr [ebp - 0x15] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffebu));
    /* 006212ce: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006212d0: jne 0x6213be */ if (!fZ) goto L_006213be;
L_006212d6:; BB(0x006212d6);
    /* 006212d6: mov dword ptr [ebp - 0x344], 0 */ W32((u32)(r_ebp+0xfffffcbcu), 0x0u);
    /* 006212e0: jmp 0x6212f1 */ goto L_006212f1;
L_006212e2:; BB(0x006212e2);
    /* 006212e2: mov edx, dword ptr [ebp - 0x344] */ r_edx = R32((u32)(r_ebp+0xfffffcbcu));
    /* 006212e8: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006212eb: mov dword ptr [ebp - 0x344], edx */ W32((u32)(r_ebp+0xfffffcbcu), r_edx);
L_006212f1:; BB(0x006212f1);
    /* 006212f1: mov eax, dword ptr [ebp - 0x344] */ r_eax = R32((u32)(r_ebp+0xfffffcbcu));
    /* 006212f7: cmp eax, dword ptr [ebp - 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006212fa: jge 0x621356 */ if ((fS==fO)) goto L_00621356;
L_006212fc:; BB(0x006212fc);
    /* 006212fc: mov ecx, dword ptr [ebp - 0x344] */ r_ecx = R32((u32)(r_ebp+0xfffffcbcu));
    /* 00621302: imul ecx, ecx, 3 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x3u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00621305: movzx edx, byte ptr [ebp + ecx - 0x328] */ r_edx = (u32)R8((u32)(r_ebp+r_ecx+0xfffffcd8u));
    /* 0062130d: movzx eax, byte ptr [ebp - 0x33c] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffcc4u));
    /* 00621314: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00621316: jne 0x621354 */ if (!fZ) goto L_00621354;
L_00621318:; BB(0x00621318);
    /* 00621318: mov ecx, dword ptr [ebp - 0x344] */ r_ecx = R32((u32)(r_ebp+0xfffffcbcu));
    /* 0062131e: imul ecx, ecx, 3 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x3u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00621321: movzx edx, byte ptr [ebp + ecx - 0x327] */ r_edx = (u32)R8((u32)(r_ebp+r_ecx+0xfffffcd9u));
    /* 00621329: movzx eax, byte ptr [ebp - 0x33b] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffcc5u));
    /* 00621330: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00621332: jne 0x621354 */ if (!fZ) goto L_00621354;
L_00621334:; BB(0x00621334);
    /* 00621334: mov ecx, dword ptr [ebp - 0x344] */ r_ecx = R32((u32)(r_ebp+0xfffffcbcu));
    /* 0062133a: imul ecx, ecx, 3 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x3u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0062133d: movzx edx, byte ptr [ebp + ecx - 0x326] */ r_edx = (u32)R8((u32)(r_ebp+r_ecx+0xfffffcdau));
    /* 00621345: movzx eax, byte ptr [ebp - 0x33a] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffcc6u));
    /* 0062134c: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062134e: jne 0x621354 */ if (!fZ) goto L_00621354;
L_00621350:; BB(0x00621350);
    /* 00621350: jmp 0x6213be */ goto L_006213be;
L_00621354:; BB(0x00621354);
    /* 00621354: jmp 0x6212e2 */ goto L_006212e2;
L_00621356:; BB(0x00621356);
    /* 00621356: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00621359: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062135c: cmp ecx, 0x100 */ {  u32 a = r_ecx; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00621362: jle 0x621373 */ if ((fZ||fS!=fO)) goto L_00621373;
L_00621364:; BB(0x00621364);
    /* 00621364: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00621367: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0062136a: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0062136d: mov byte ptr [ebp - 0x15], 1 */ W8((u32)(r_ebp+0xffffffebu), 0x1u);
    /* 00621371: jmp 0x6213be */ goto L_006213be;
L_00621373:; BB(0x00621373);
    /* 00621373: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00621376: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00621379: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0062137c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0062137f: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00621382: imul ecx, ecx, 3 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x3u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00621385: mov dl, byte ptr [ebp - 0x33c] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffcc4u))) & 0xffu);
    /* 0062138b: mov byte ptr [ebp + ecx - 0x328], dl */ W8((u32)(r_ebp+r_ecx+0xfffffcd8u), (u8)r_edx);
    /* 00621392: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00621395: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00621398: imul eax, eax, 3 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0062139b: mov cl, byte ptr [ebp - 0x33b] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffcc5u))) & 0xffu);
    /* 006213a1: mov byte ptr [ebp + eax - 0x327], cl */ W8((u32)(r_ebp+r_eax+0xfffffcd9u), (u8)r_ecx);
    /* 006213a8: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006213ab: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006213ae: imul edx, edx, 3 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x3u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006213b1: mov al, byte ptr [ebp - 0x33a] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffcc6u))) & 0xffu);
    /* 006213b7: mov byte ptr [ebp + edx - 0x326], al */ W8((u32)(r_ebp+r_edx+0xfffffcdau), (u8)r_eax);
L_006213be:; BB(0x006213be);
    /* 006213be: jmp 0x621244 */ goto L_00621244;
L_006213c3:; BB(0x006213c3);
    /* 006213c3: jmp 0x621214 */ goto L_00621214;
L_006213c8:; BB(0x006213c8);
    /* 006213c8: jmp 0x6211bb */ goto L_006211bb;
L_006213cd:; BB(0x006213cd);
    /* 006213cd: cmp dword ptr [ebp - 0x14], 0x100 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006213d4: jge 0x6213ff */ if ((fS==fO)) goto L_006213ff;
L_006213d6:; BB(0x006213d6);
    /* 006213d6: mov cl, byte ptr [ebp - 0x14] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffecu))) & 0xffu);
    /* 006213d9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006213da: lea edx, [ebp - 0x328] */ r_edx = (u32)(r_ebp+0xfffffcd8u);
    /* 006213e0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006213e1: mov ecx, dword ptr [ebp - 0x378] */ r_ecx = R32((u32)(r_ebp+0xfffffc88u));
    /* 006213e7: call 0x620870 */ r_esp -= 4; W32(r_esp, 0x6213ecu); f_00620870();
    /* 006213ec: mov eax, dword ptr [ebp - 0x378] */ r_eax = R32((u32)(r_ebp+0xfffffc88u));
    /* 006213f2: mov cx, word ptr [ebp - 0x14] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffecu))) & 0xffffu);
    /* 006213f6: mov word ptr [eax + 0x308], cx */ W16((u32)(r_eax+0x308u), (u16)r_ecx);
    /* 006213fd: jmp 0x62142b */ goto L_0062142b;
L_006213ff:; BB(0x006213ff);
    /* 006213ff: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00621402: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00621403: mov eax, dword ptr [ebp - 0x378] */ r_eax = R32((u32)(r_ebp+0xfffffc88u));
    /* 00621409: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062140c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062140d: call 0x6216c0 */ r_esp -= 4; W32(r_esp, 0x621412u); f_006216c0();
    /* 00621412: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00621415: mov ecx, dword ptr [ebp - 0x378] */ r_ecx = R32((u32)(r_ebp+0xfffffc88u));
    /* 0062141b: mov word ptr [ecx + 0x308], 0x100 */ W16((u32)(r_ecx+0x308u), 0x100u);
    /* 00621424: mov dword ptr [ebp - 0x14], 0x101 */ W32((u32)(r_ebp+0xffffffecu), 0x101u);
L_0062142b:; BB(0x0062142b);
    /* 0062142b: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 00621432: jmp 0x62143d */ goto L_0062143d;
L_00621434:; BB(0x00621434);
    /* 00621434: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00621437: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0062143a: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_0062143d:; BB(0x0062143d);
    /* 0062143d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00621440: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00621443: cmp ecx, dword ptr [eax] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00621445: jge 0x621602 */ if ((fS==fO)) goto L_00621602;
L_0062144b:; BB(0x0062144b);
    /* 0062144b: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062144e: imul edx, edx, 0x14 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x14u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00621451: mov eax, dword ptr [ebp - 0x378] */ r_eax = R32((u32)(r_ebp+0xfffffc88u));
    /* 00621457: add edx, dword ptr [eax + 0x318] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x318u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0062145d: mov dword ptr [ebp - 0x32c], edx */ W32((u32)(r_ebp+0xfffffcd4u), r_edx);
    /* 00621463: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00621466: imul ecx, ecx, 0x18 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x18u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00621469: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062146c: add ecx, dword ptr [edx + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062146f: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00621472: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00621475: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00621478: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0062147a: imul edx, dword ptr [ecx + 4] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_ecx+0x4u)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0062147e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062147f: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x621484u); f_00686d82();
    /* 00621484: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00621487: mov dword ptr [ebp - 0x35c], eax */ W32((u32)(r_ebp+0xfffffca4u), r_eax);
    /* 0062148d: mov eax, dword ptr [ebp - 0x35c] */ r_eax = R32((u32)(r_ebp+0xfffffca4u));
    /* 00621493: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00621496: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00621499: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0062149c: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0062149e: imul eax, dword ptr [edx + 4] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_edx+0x4u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006214a2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006214a3: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x6214a8u); f_00686d82();
    /* 006214a8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006214ab: mov dword ptr [ebp - 0x360], eax */ W32((u32)(r_ebp+0xfffffca0u), r_eax);
    /* 006214b1: mov ecx, dword ptr [ebp - 0x360] */ r_ecx = R32((u32)(r_ebp+0xfffffca0u));
    /* 006214b7: mov dword ptr [ebp - 0x330], ecx */ W32((u32)(r_ebp+0xfffffcd0u), r_ecx);
    /* 006214bd: push 0x80000 */ { u32 v = 0x80000u; r_esp -= 4; W32(r_esp, v); }
    /* 006214c2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006214c4: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006214c7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006214c8: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x6214cdu); f_00686fa2();
    /* 006214cd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006214d0: cmp dword ptr [ebp - 0x14], 0x100 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006214d7: jg 0x62151d */ if ((!fZ&&fS==fO)) goto L_0062151d;
L_006214d9:; BB(0x006214d9);
    /* 006214d9: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006214dc: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 006214df: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006214e0: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006214e3: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006214e5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006214e6: mov ecx, dword ptr [ebp - 0x330] */ r_ecx = R32((u32)(r_ebp+0xfffffcd0u));
    /* 006214ec: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006214ed: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006214f0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006214f1: mov eax, dword ptr [ebp - 0x32c] */ r_eax = R32((u32)(r_ebp+0xfffffcd4u));
    /* 006214f7: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 006214fa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006214fb: mov edx, dword ptr [ebp - 0x378] */ r_edx = R32((u32)(r_ebp+0xfffffc88u));
    /* 00621501: movzx eax, word ptr [edx + 0x308] */ r_eax = (u32)R16((u32)(r_edx+0x308u));
    /* 00621508: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00621509: mov ecx, dword ptr [ebp - 0x378] */ r_ecx = R32((u32)(r_ebp+0xfffffc88u));
    /* 0062150f: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00621512: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00621513: call 0x622150 */ r_esp -= 4; W32(r_esp, 0x621518u); f_00622150();
    /* 00621518: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062151b: jmp 0x621563 */ goto L_00621563;
L_0062151d:; BB(0x0062151d);
    /* 0062151d: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00621520: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00621523: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00621524: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00621527: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00621529: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062152a: mov eax, dword ptr [ebp - 0x330] */ r_eax = R32((u32)(r_ebp+0xfffffcd0u));
    /* 00621530: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00621531: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00621534: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00621535: mov edx, dword ptr [ebp - 0x32c] */ r_edx = R32((u32)(r_ebp+0xfffffcd4u));
    /* 0062153b: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 0062153e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062153f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00621542: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00621543: mov edx, dword ptr [ebp - 0x378] */ r_edx = R32((u32)(r_ebp+0xfffffc88u));
    /* 00621549: movzx eax, word ptr [edx + 0x308] */ r_eax = (u32)R16((u32)(r_edx+0x308u));
    /* 00621550: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00621551: mov ecx, dword ptr [ebp - 0x378] */ r_ecx = R32((u32)(r_ebp+0xfffffc88u));
    /* 00621557: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062155a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062155b: call 0x622340 */ r_esp -= 4; W32(r_esp, 0x621560u); f_00622340();
    /* 00621560: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00621563:; BB(0x00621563);
    /* 00621563: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0062156a: jmp 0x621575 */ goto L_00621575;
L_0062156c:; BB(0x0062156c);
    /* 0062156c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062156f: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00621572: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_00621575:; BB(0x00621575);
    /* 00621575: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00621578: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062157b: cmp ecx, dword ptr [eax + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062157e: jge 0x6215ca */ if ((fS==fO)) goto L_006215ca;
L_00621580:; BB(0x00621580);
    /* 00621580: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00621583: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00621584: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00621587: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062158a: imul ecx, dword ptr [eax] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_eax)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0062158d: add ecx, dword ptr [ebp - 0x330] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffcd0u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00621593: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00621594: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00621597: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 0062159a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062159d: lea edx, [eax + ecx*4] */ r_edx = (u32)(r_eax+r_ecx*4);
    /* 006215a0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006215a1: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006215a4: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 006215a6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006215a7: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006215aa: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006215ad: imul eax, dword ptr [edx] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_edx)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006215b0: add eax, dword ptr [ebp - 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006215b3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006215b4: call 0x618330 */ r_esp -= 4; W32(r_esp, 0x6215b9u); f_00618330();
    /* 006215b9: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006215bc: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006215bf: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 006215c2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006215c5: mov dword ptr [edx + ecx*4], eax */ W32((u32)(r_edx+r_ecx*4), r_eax);
    /* 006215c8: jmp 0x62156c */ goto L_0062156c;
L_006215ca:; BB(0x006215ca);
    /* 006215ca: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006215cd: mov dword ptr [ebp - 0x364], edx */ W32((u32)(r_ebp+0xfffffc9cu), r_edx);
    /* 006215d3: mov eax, dword ptr [ebp - 0x364] */ r_eax = R32((u32)(r_ebp+0xfffffc9cu));
    /* 006215d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006215da: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x6215dfu); f_00686cae();
    /* 006215df: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006215e2: mov ecx, dword ptr [ebp - 0x330] */ r_ecx = R32((u32)(r_ebp+0xfffffcd0u));
    /* 006215e8: mov dword ptr [ebp - 0x368], ecx */ W32((u32)(r_ebp+0xfffffc98u), r_ecx);
    /* 006215ee: mov edx, dword ptr [ebp - 0x368] */ r_edx = R32((u32)(r_ebp+0xfffffc98u));
    /* 006215f4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006215f5: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x6215fau); f_00686cae();
    /* 006215fa: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006215fd: jmp 0x621434 */ goto L_00621434;
L_00621602:; BB(0x00621602);
    /* 00621602: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00621605: mov dword ptr [ebp - 0x36c], eax */ W32((u32)(r_ebp+0xfffffc94u), r_eax);
    /* 0062160b: mov ecx, dword ptr [ebp - 0x36c] */ r_ecx = R32((u32)(r_ebp+0xfffffc94u));
    /* 00621611: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00621612: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x621617u); f_00686cae();
    /* 00621617: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062161a: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 00621621: jmp 0x62162c */ goto L_0062162c;
L_00621623:; BB(0x00621623);
    /* 00621623: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00621626: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00621629: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_0062162c:; BB(0x0062162c);
    /* 0062162c: mov eax, dword ptr [ebp - 0x378] */ r_eax = R32((u32)(r_ebp+0xfffffc88u));
    /* 00621632: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00621635: cmp ecx, dword ptr [eax + 0x314] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x314u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062163b: jge 0x62166a */ if ((fS==fO)) goto L_0062166a;
L_0062163d:; BB(0x0062163d);
    /* 0062163d: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00621640: imul edx, edx, 0x14 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x14u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00621643: mov eax, dword ptr [ebp - 0x378] */ r_eax = R32((u32)(r_ebp+0xfffffc88u));
    /* 00621649: mov ecx, dword ptr [eax + 0x318] */ r_ecx = R32((u32)(r_eax+0x318u));
    /* 0062164f: mov edx, dword ptr [ecx + edx + 0x10] */ r_edx = R32((u32)(r_ecx+r_edx+0x10u));
    /* 00621653: mov dword ptr [ebp - 0x370], edx */ W32((u32)(r_ebp+0xfffffc90u), r_edx);
    /* 00621659: mov eax, dword ptr [ebp - 0x370] */ r_eax = R32((u32)(r_ebp+0xfffffc90u));
    /* 0062165f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00621660: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x621665u); f_00686cae();
    /* 00621665: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00621668: jmp 0x621623 */ goto L_00621623;
L_0062166a:; BB(0x0062166a);
    /* 0062166a: mov ecx, dword ptr [ebp - 0x378] */ r_ecx = R32((u32)(r_ebp+0xfffffc88u));
    /* 00621670: mov edx, dword ptr [ecx + 0x318] */ r_edx = R32((u32)(r_ecx+0x318u));
    /* 00621676: mov dword ptr [ebp - 0x374], edx */ W32((u32)(r_ebp+0xfffffc8cu), r_edx);
    /* 0062167c: mov eax, dword ptr [ebp - 0x374] */ r_eax = R32((u32)(r_ebp+0xfffffc8cu));
    /* 00621682: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00621683: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x621688u); f_00686cae();
    /* 00621688: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062168b: mov ecx, dword ptr [ebp - 0x378] */ r_ecx = R32((u32)(r_ebp+0xfffffc88u));
    /* 00621691: mov dword ptr [ecx + 0x318], 0 */ W32((u32)(r_ecx+0x318u), 0x0u);
    /* 0062169b: mov edx, dword ptr [ebp - 0x378] */ r_edx = R32((u32)(r_ebp+0xfffffc88u));
    /* 006216a1: mov dword ptr [edx + 0x314], 0 */ W32((u32)(r_edx+0x314u), 0x0u);
    /* 006216ab: mov esp, ebp */ r_esp = r_ebp;
    /* 006216ad: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006216ae: ret 8 */ FN_RET(0x00620fe0); r_esp += 12; return;
}

