#include "protos.h"

void f_005b8090(void) /* sub_5B8090 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b8090);
    /* 005b8090: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b8091: mov ebp, esp */ r_ebp = r_esp;
    /* 005b8093: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b8096: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005b8099: cmp dword ptr [ebp + 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b809d: jne 0x5b80ae */ if (!fZ) goto L_005b80ae;
L_005b809f:; BB(0x005b809f);
    /* 005b809f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b80a2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b80a3: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005b80a6: call 0x5b4e50 */ r_esp -= 4; W32(r_esp, 0x5b80abu); f_005b4e50();
    /* 005b80ab: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
L_005b80ae:; BB(0x005b80ae);
    /* 005b80ae: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b80b1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b80b2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005b80b5: call 0x5b58f0 */ r_esp -= 4; W32(r_esp, 0x5b80bau); f_005b58f0();
    /* 005b80ba: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005b80bd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b80bf: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005b80c2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b80c3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b80c6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b80c7: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005b80ca: call 0x5b5c60 */ r_esp -= 4; W32(r_esp, 0x5b80cfu); f_005b5c60();
    /* 005b80cf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b80d0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b80d2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b80d5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b80d6: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b80d9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b80da: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005b80dd: call 0x5b7340 */ r_esp -= 4; W32(r_esp, 0x5b80e2u); f_005b7340();
    /* 005b80e2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b80e4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b80e6: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005b80e9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b80ea: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b80ed: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b80ee: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005b80f1: call 0x5b7340 */ r_esp -= 4; W32(r_esp, 0x5b80f6u); f_005b7340();
    /* 005b80f6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b80f9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b80fa: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b80fd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b80fe: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005b8101: call 0x5b7090 */ r_esp -= 4; W32(r_esp, 0x5b8106u); f_005b7090();
    /* 005b8106: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b8109: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005b810c: mov eax, dword ptr [edx + ecx*4 + 0x580] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x580u));
    /* 005b8113: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005b8116: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b8119: shl ecx, 5 */ { u32 c = (5u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 005b811c: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005b811f: lea eax, [edx + ecx + 0x48] */ r_eax = (u32)(r_edx+r_ecx+0x48u);
    /* 005b8123: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005b8125: shl ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 005b8128: mov edx, dword ptr [eax + ecx] */ r_edx = R32((u32)(r_eax+r_ecx));
    /* 005b812b: mov eax, dword ptr [eax + ecx + 4] */ r_eax = R32((u32)(r_eax+r_ecx+0x4u));
    /* 005b812f: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005b8132: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005b8135: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b8138: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005b813a: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005b813d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b8140: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005b8142: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005b8145: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b8148: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b8149: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b814c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b814d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b8150: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8151: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5b8156u); f_005dcb00();
    /* 005b8156: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b8159: mov ecx, eax */ r_ecx = r_eax;
    /* 005b815b: call 0x5d5cf0 */ r_esp -= 4; W32(r_esp, 0x5b8160u); f_005d5cf0();
    /* 005b8160: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b8163: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005b8166: mov edx, dword ptr [ecx + eax*4 + 0x580] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x580u));
    /* 005b816d: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 005b8170: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b8173: shl eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005b8176: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005b8179: lea edx, [ecx + eax + 0x48] */ r_edx = (u32)(r_ecx+r_eax+0x48u);
    /* 005b817d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b817f: shl eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005b8182: mov ecx, dword ptr [edx + eax] */ r_ecx = R32((u32)(r_edx+r_eax));
    /* 005b8185: mov edx, dword ptr [edx + eax + 4] */ r_edx = R32((u32)(r_edx+r_eax+0x4u));
    /* 005b8189: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005b818c: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 005b818f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b8192: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b8193: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b8196: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8197: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b819a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b819b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005b819e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b819f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b81a2: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005b81a5: mov eax, dword ptr [edx + ecx*4 + 0x580] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x580u));
    /* 005b81ac: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b81af: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005b81b2: mov ecx, dword ptr [edx + ecx*4 + 0x580] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x580u));
    /* 005b81b9: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005b81bb: mov edx, dword ptr [eax + 0xb8] */ r_edx = R32((u32)(r_eax+0xb8u));
    /* 005b81c1: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5b81c3u); call_ind(t); }
    /* 005b81c3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b81c5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b81c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b81c9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b81cc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b81cd: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005b81d0: call 0x5b5f60 */ r_esp -= 4; W32(r_esp, 0x5b81d5u); f_005b5f60();
    /* 005b81d5: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b81d8: jne 0x5b81e8 */ if (!fZ) goto L_005b81e8;
L_005b81da:; BB(0x005b81da);
    /* 005b81da: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b81dc: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b81df: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b81e0: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005b81e3: call 0x5b7480 */ r_esp -= 4; W32(r_esp, 0x5b81e8u); f_005b7480();
L_005b81e8:; BB(0x005b81e8);
    /* 005b81e8: mov esp, ebp */ r_esp = r_ebp;
    /* 005b81ea: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b81eb: ret 8 */ FN_RET(0x005b8090); r_esp += 12; return;
}

void f_005b81f0(void) /* sub_5B81F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b81f0);
    /* 005b81f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b81f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005b81f3: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b81f6: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005b81f9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b81fc: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b81ff: mov edx, dword ptr [ecx + eax*4 + 0x580] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x580u));
    /* 005b8206: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005b8209: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b820c: shl eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005b820f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b8212: lea edx, [ecx + eax + 0x48] */ r_edx = (u32)(r_ecx+r_eax+0x48u);
    /* 005b8216: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b8218: shl eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005b821b: mov ecx, dword ptr [edx + eax] */ r_ecx = R32((u32)(r_edx+r_eax));
    /* 005b821e: mov edx, dword ptr [edx + eax + 4] */ r_edx = R32((u32)(r_edx+r_eax+0x4u));
    /* 005b8222: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005b8225: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 005b8228: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b822b: fld qword ptr [0x6b2c38] */ FPUSH(R_F64((u32)(0x6b2c38u)));
    /* 005b8231: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 005b8234: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 005b8237: call 0x64c560 */ r_esp -= 4; W32(r_esp, 0x5b823cu); f_0064c560();
    /* 005b823c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b823f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b8240: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b8243: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8244: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b8247: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8248: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5b824du); f_005dcb00();
    /* 005b824d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b8250: mov ecx, eax */ r_ecx = r_eax;
    /* 005b8252: call 0x5d5cf0 */ r_esp -= 4; W32(r_esp, 0x5b8257u); f_005d5cf0();
    /* 005b8257: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b8259: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b825c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b825d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b8260: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8261: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b8264: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8265: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b8268: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b826b: mov edx, dword ptr [ecx + eax*4 + 0x580] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x580u));
    /* 005b8272: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b8275: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b8278: mov ecx, dword ptr [ecx + eax*4 + 0x580] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x580u));
    /* 005b827f: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005b8281: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 005b8287: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5b8289u); call_ind(t); }
    /* 005b8289: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b828c: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005b828e: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005b8291: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b8294: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005b8296: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 005b8299: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b829c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b829d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b82a0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b82a1: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b82a4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b82a5: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5b82aau); f_005dcb00();
    /* 005b82aa: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b82ad: mov ecx, eax */ r_ecx = r_eax;
    /* 005b82af: call 0x5d5fb0 */ r_esp -= 4; W32(r_esp, 0x5b82b4u); f_005d5fb0();
    /* 005b82b4: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005b82b6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b82b8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b82bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b82bc: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b82bf: call 0x5b71a0 */ r_esp -= 4; W32(r_esp, 0x5b82c4u); f_005b71a0();
    /* 005b82c4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b82c7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b82c8: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5b82cdu); f_005dcb00();
    /* 005b82cd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b82d0: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005b82d3: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b82d6: mov byte ptr [edx + 0x4a2], 1 */ W8((u32)(r_edx+0x4a2u), 0x1u);
    /* 005b82dd: mov esp, ebp */ r_esp = r_ebp;
    /* 005b82df: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b82e0: ret 4 */ FN_RET(0x005b81f0); r_esp += 8; return;
}

void f_005b82f0(void) /* sub_5B82F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b82f0);
    /* 005b82f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b82f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005b82f3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b82f6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b82f7: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b82fa: cmp dword ptr [ebp + 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b82fe: jne 0x5b830f */ if (!fZ) goto L_005b830f;
L_005b8300:; BB(0x005b8300);
    /* 005b8300: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b8303: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b8304: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b8307: call 0x5b4e50 */ r_esp -= 4; W32(r_esp, 0x5b830cu); f_005b4e50();
    /* 005b830c: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
L_005b830f:; BB(0x005b830f);
    /* 005b830f: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005b8312: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8313: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b8316: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8317: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b831a: call 0x5b5830 */ r_esp -= 4; W32(r_esp, 0x5b831fu); f_005b5830();
    /* 005b831f: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b8322: jne 0x5b8357 */ if (!fZ) goto L_005b8357;
L_005b8324:; BB(0x005b8324);
    /* 005b8324: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b8326: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005b8329: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b832a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b832d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b832e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b8331: call 0x5b5f60 */ r_esp -= 4; W32(r_esp, 0x5b8336u); f_005b5f60();
    /* 005b8336: mov esi, eax */ r_esi = r_eax;
    /* 005b8338: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b833a: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005b833d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b833e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b8341: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b8342: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b8345: call 0x5b5f60 */ r_esp -= 4; W32(r_esp, 0x5b834au); f_005b5f60();
    /* 005b834a: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b834c: jne 0x5b8357 */ if (!fZ) goto L_005b8357;
L_005b834e:; BB(0x005b834e);
    /* 005b834e: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 005b8355: jmp 0x5b835e */ goto L_005b835e;
L_005b8357:; BB(0x005b8357);
    /* 005b8357: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_005b835e:; BB(0x005b835e);
    /* 005b835e: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 005b8361: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b8362: mov esp, ebp */ r_esp = r_ebp;
    /* 005b8364: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b8365: ret 8 */ FN_RET(0x005b82f0); r_esp += 12; return;
}

void f_005b8430(void) /* sub_5B8430 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b8430);
    /* 005b8430: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b8431: mov ebp, esp */ r_ebp = r_esp;
    /* 005b8433: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b8436: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b8437: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 005b843a: mov dword ptr [ebp - 0x2c], 5 */ W32((u32)(r_ebp+0xffffffd4u), 0x5u);
    /* 005b8441: mov dword ptr [ebp - 0x28], 5 */ W32((u32)(r_ebp+0xffffffd8u), 0x5u);
    /* 005b8448: mov dword ptr [ebp - 0x24], 6 */ W32((u32)(r_ebp+0xffffffdcu), 0x6u);
    /* 005b844f: mov dword ptr [ebp - 0x20], 5 */ W32((u32)(r_ebp+0xffffffe0u), 0x5u);
    /* 005b8456: mov dword ptr [ebp - 0x1c], 2 */ W32((u32)(r_ebp+0xffffffe4u), 0x2u);
    /* 005b845d: mov dword ptr [ebp - 0x18], 5 */ W32((u32)(r_ebp+0xffffffe8u), 0x5u);
    /* 005b8464: mov dword ptr [ebp - 0x14], 3 */ W32((u32)(r_ebp+0xffffffecu), 0x3u);
    /* 005b846b: mov dword ptr [ebp - 0x10], 1 */ W32((u32)(r_ebp+0xfffffff0u), 0x1u);
    /* 005b8472: mov dword ptr [ebp - 0xc], 2 */ W32((u32)(r_ebp+0xfffffff4u), 0x2u);
    /* 005b8479: mov dword ptr [ebp - 8], 4 */ W32((u32)(r_ebp+0xfffffff8u), 0x4u);
    /* 005b8480: mov dword ptr [ebp - 4], 6 */ W32((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 005b8487: mov ecx, dword ptr [0x793600] */ r_ecx = R32((u32)(0x793600u));
    /* 005b848d: call 0x5da830 */ r_esp -= 4; W32(r_esp, 0x5b8492u); f_005da830();
    /* 005b8492: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005b8495: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b8497: jne 0x5b84e4 */ if (!fZ) goto L_005b84e4;
L_005b8499:; BB(0x005b8499);
    /* 005b8499: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005b849c: call 0x5b58a0 */ r_esp -= 4; W32(r_esp, 0x5b84a1u); f_005b58a0();
    /* 005b84a1: mov esi, eax */ r_esi = r_eax;
    /* 005b84a3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b84a5: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005b84a8: call 0x5b5fb0 */ r_esp -= 4; W32(r_esp, 0x5b84adu); f_005b5fb0();
    /* 005b84ad: movsx ecx, byte ptr [eax + 9] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x9u));
    /* 005b84b1: cmp esi, dword ptr [ebp + ecx*4 - 0x10] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+r_ecx*4+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b84b5: je 0x5b84e4 */ if (fZ) goto L_005b84e4;
L_005b84b7:; BB(0x005b84b7);
    /* 005b84b7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b84b9: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005b84bc: call 0x5b5fb0 */ r_esp -= 4; W32(r_esp, 0x5b84c1u); f_005b5fb0();
    /* 005b84c1: movsx edx, byte ptr [eax + 9] */ r_edx = (u32)(i32)(i8)R8((u32)(r_eax+0x9u));
    /* 005b84c5: mov eax, dword ptr [ebp + edx*4 - 0x10] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xfffffff0u));
    /* 005b84c9: mov ecx, dword ptr [ebp + eax*4 - 0x2c] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffffd4u));
    /* 005b84cd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b84ce: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005b84d1: mov ecx, dword ptr [edx + 0x57c] */ r_ecx = R32((u32)(r_edx+0x57cu));
    /* 005b84d7: call 0x642e70 */ r_esp -= 4; W32(r_esp, 0x5b84dcu); f_00642e70();
    /* 005b84dc: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005b84df: call 0x5b7ef0 */ r_esp -= 4; W32(r_esp, 0x5b84e4u); f_005b7ef0();
L_005b84e4:; BB(0x005b84e4);
    /* 005b84e4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b84e5: mov esp, ebp */ r_esp = r_ebp;
    /* 005b84e7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b84e8: ret  */ FN_RET(0x005b8430); r_esp += 4; return;
}

void f_005b84f0(void) /* sub_5B84F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b84f0);
    /* 005b84f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b84f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005b84f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b84f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b84f7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b84fa: imul eax, eax, 0x118 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x118u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005b8500: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b8503: lea edx, [ecx + eax + 4] */ r_edx = (u32)(r_ecx+r_eax+0x4u);
    /* 005b8507: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005b850a: imul eax, eax, 0x16 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x16u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005b850d: add edx, dword ptr [ebp + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b8510: mov al, byte ptr [eax + edx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+r_edx))) & 0xffu);
    /* 005b8513: mov esp, ebp */ r_esp = r_ebp;
    /* 005b8515: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b8516: ret 0xc */ FN_RET(0x005b84f0); r_esp += 16; return;
}

void f_005b8520(void) /* sub_5B8520 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b8520);
    /* 005b8520: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b8521: mov ebp, esp */ r_ebp = r_esp;
    /* 005b8523: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8524: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b8527: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b852a: imul eax, eax, 0x118 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x118u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005b8530: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b8533: mov al, byte ptr [ecx + eax + 0x66] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ecx+r_eax+0x66u))) & 0xffu);
    /* 005b8537: mov esp, ebp */ r_esp = r_ebp;
    /* 005b8539: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b853a: ret 4 */ FN_RET(0x005b8520); r_esp += 8; return;
}

void f_005b8540(void) /* sub_5B8540 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b8540);
    /* 005b8540: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b8541: mov ebp, esp */ r_ebp = r_esp;
    /* 005b8543: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8544: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b8547: mov ecx, dword ptr [0x793600] */ r_ecx = R32((u32)(0x793600u));
    /* 005b854d: call 0x5da830 */ r_esp -= 4; W32(r_esp, 0x5b8552u); f_005da830();
    /* 005b8552: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005b8555: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b8557: je 0x5b855f */ if (fZ) goto L_005b855f;
L_005b8559:; BB(0x005b8559);
    /* 005b8559: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005b855b: jmp 0x5b856b */ goto L_005b856b;
L_005b855f:; BB(0x005b855f);
    /* 005b855f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b8561: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b8564: call 0x5b5fb0 */ r_esp -= 4; W32(r_esp, 0x5b8569u); f_005b5fb0();
    /* 005b8569: mov al, byte ptr [eax] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
L_005b856b:; BB(0x005b856b);
    /* 005b856b: mov esp, ebp */ r_esp = r_ebp;
    /* 005b856d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b856e: ret  */ FN_RET(0x005b8540); r_esp += 4; return;
}

void f_005b8570(void) /* sub_5B8570 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b8570);
    /* 005b8570: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b8571: mov ebp, esp */ r_ebp = r_esp;
    /* 005b8573: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8574: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b8577: mov ecx, dword ptr [0x793600] */ r_ecx = R32((u32)(0x793600u));
    /* 005b857d: call 0x5da830 */ r_esp -= 4; W32(r_esp, 0x5b8582u); f_005da830();
    /* 005b8582: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005b8585: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b8587: je 0x5b858f */ if (fZ) goto L_005b858f;
L_005b8589:; BB(0x005b8589);
    /* 005b8589: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005b858b: jmp 0x5b859c */ goto L_005b859c;
L_005b858f:; BB(0x005b858f);
    /* 005b858f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b8591: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b8594: call 0x5b5fb0 */ r_esp -= 4; W32(r_esp, 0x5b8599u); f_005b5fb0();
    /* 005b8599: mov al, byte ptr [eax + 1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0x1u))) & 0xffu);
L_005b859c:; BB(0x005b859c);
    /* 005b859c: mov esp, ebp */ r_esp = r_ebp;
    /* 005b859e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b859f: ret  */ FN_RET(0x005b8570); r_esp += 4; return;
}

