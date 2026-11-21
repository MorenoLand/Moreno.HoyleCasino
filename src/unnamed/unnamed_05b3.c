#include "protos.h"

void f_005b31b0(void) /* sub_5B31B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b31b0);
    /* 005b31b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b31b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005b31b3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b31b6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005b31b9: cmp dword ptr [ebp + 0x10], -1 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b31bd: jne 0x5b31ce */ if (!fZ) goto L_005b31ce;
L_005b31bf:; BB(0x005b31bf);
    /* 005b31bf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b31c2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b31c3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b31c6: call 0x5b4e50 */ r_esp -= 4; W32(r_esp, 0x5b31cbu); f_005b4e50();
    /* 005b31cb: mov dword ptr [ebp + 0x10], eax */ W32((u32)(r_ebp+0x10u), r_eax);
L_005b31ce:; BB(0x005b31ce);
    /* 005b31ce: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005b31d5: jmp 0x5b31e0 */ goto L_005b31e0;
L_005b31d7:; BB(0x005b31d7);
    /* 005b31d7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b31da: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b31dd: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005b31e0:; BB(0x005b31e0);
    /* 005b31e0: cmp dword ptr [ebp - 4], 0x16 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b31e4: jge 0x5b3205 */ if ((fS==fO)) goto L_005b3205;
L_005b31e6:; BB(0x005b31e6);
    /* 005b31e6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b31e9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b31ea: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005b31ed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b31ee: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b31f1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b31f2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b31f5: call 0x5b5c60 */ r_esp -= 4; W32(r_esp, 0x5b31fau); f_005b5c60();
    /* 005b31fa: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 005b31fd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b31ff: jne 0x5b3203 */ if (!fZ) goto L_005b3203;
L_005b3201:; BB(0x005b3201);
    /* 005b3201: jmp 0x5b3205 */ goto L_005b3205;
L_005b3203:; BB(0x005b3203);
    /* 005b3203: jmp 0x5b31d7 */ goto L_005b31d7;
L_005b3205:; BB(0x005b3205);
    /* 005b3205: mov ax, word ptr [ebp + 0xc] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xcu))) & 0xffffu);
    /* 005b3209: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b320a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b320d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b320e: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005b3211: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b3212: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b3215: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b3216: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b3219: call 0x5b7340 */ r_esp -= 4; W32(r_esp, 0x5b321eu); f_005b7340();
    /* 005b321e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b3221: mov edx, dword ptr [ecx + 0x5b0] */ r_edx = R32((u32)(r_ecx+0x5b0u));
    /* 005b3227: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b322a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b322d: mov dword ptr [eax + 0x5b0], edx */ W32((u32)(r_eax+0x5b0u), r_edx);
    /* 005b3233: mov esp, ebp */ r_esp = r_ebp;
    /* 005b3235: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b3236: ret 0xc */ FN_RET(0x005b31b0); r_esp += 16; return;
}

void f_005b3240(void) /* sub_5B3240 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b3240);
    /* 005b3240: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b3241: mov ebp, esp */ r_ebp = r_esp;
    /* 005b3243: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b3246: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005b3249: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005b324c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b324d: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005b3250: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b3251: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b3254: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b3255: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b3258: call 0x5b5f60 */ r_esp -= 4; W32(r_esp, 0x5b325du); f_005b5f60();
    /* 005b325d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005b3260: cmp dword ptr [ebp - 4], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b3264: jne 0x5b3282 */ if (!fZ) goto L_005b3282;
L_005b3266:; BB(0x005b3266);
    /* 005b3266: mov dword ptr [ebp - 4], 0xb */ W32((u32)(r_ebp+0xfffffffcu), 0xbu);
    /* 005b326d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b3270: mov ecx, dword ptr [eax + 0x5d0] */ r_ecx = R32((u32)(r_eax+0x5d0u));
    /* 005b3276: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b3279: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b327c: mov dword ptr [edx + 0x5d0], ecx */ W32((u32)(r_edx+0x5d0u), r_ecx);
L_005b3282:; BB(0x005b3282);
    /* 005b3282: cmp dword ptr [ebp - 4], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b3286: jge 0x5b329d */ if ((fS==fO)) goto L_005b329d;
L_005b3288:; BB(0x005b3288);
    /* 005b3288: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b328b: mov ecx, dword ptr [eax + 0x5cc] */ r_ecx = R32((u32)(r_eax+0x5ccu));
    /* 005b3291: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b3294: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b3297: mov dword ptr [edx + 0x5cc], ecx */ W32((u32)(r_edx+0x5ccu), r_ecx);
L_005b329d:; BB(0x005b329d);
    /* 005b329d: cmp dword ptr [ebp - 4], 9 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b32a1: jle 0x5b32b8 */ if ((fZ||fS!=fO)) goto L_005b32b8;
L_005b32a3:; BB(0x005b32a3);
    /* 005b32a3: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b32a6: mov ecx, dword ptr [eax + 0x5cc] */ r_ecx = R32((u32)(r_eax+0x5ccu));
    /* 005b32ac: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005b32af: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b32b2: mov dword ptr [edx + 0x5cc], ecx */ W32((u32)(r_edx+0x5ccu), r_ecx);
L_005b32b8:; BB(0x005b32b8);
    /* 005b32b8: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b32bb: mov ecx, dword ptr [eax + 0x5c4] */ r_ecx = R32((u32)(r_eax+0x5c4u));
    /* 005b32c1: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b32c4: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b32c7: mov dword ptr [edx + 0x5c4], ecx */ W32((u32)(r_edx+0x5c4u), r_ecx);
    /* 005b32cd: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b32d0: call 0x5b3340 */ r_esp -= 4; W32(r_esp, 0x5b32d5u); f_005b3340();
    /* 005b32d5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b32d8: mov dword ptr [ecx + 0x5c8], eax */ W32((u32)(r_ecx+0x5c8u), r_eax);
    /* 005b32de: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b32e0: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005b32e3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b32e4: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005b32e7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b32e8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b32eb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b32ec: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b32ef: call 0x5b70b0 */ r_esp -= 4; W32(r_esp, 0x5b32f4u); f_005b70b0();
    /* 005b32f4: mov esp, ebp */ r_esp = r_ebp;
    /* 005b32f6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b32f7: ret 0xc */ FN_RET(0x005b3240); r_esp += 16; return;
}

void f_005b3300(void) /* sub_5B3300 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b3300);
    /* 005b3300: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b3301: mov ebp, esp */ r_ebp = r_esp;
    /* 005b3303: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b3304: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b3307: cmp dword ptr [ebp + 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b330b: jne 0x5b331c */ if (!fZ) goto L_005b331c;
L_005b330d:; BB(0x005b330d);
    /* 005b330d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b3310: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b3311: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b3314: call 0x5b4e50 */ r_esp -= 4; W32(r_esp, 0x5b3319u); f_005b4e50();
    /* 005b3319: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
L_005b331c:; BB(0x005b331c);
    /* 005b331c: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005b331f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b3320: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b3323: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b3324: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b3327: call 0x5b4f50 */ r_esp -= 4; W32(r_esp, 0x5b332cu); f_005b4f50();
    /* 005b332c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005b332e: cmp eax, 0x15 */ {  u32 a = r_eax; u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b3331: setg cl */ r_ecx = (r_ecx & 0xffffff00u) | ((((!fZ&&fS==fO)) ? 1 : 0) & 0xffu);
    /* 005b3334: mov al, cl */ r_eax = (r_eax & 0xffffff00u) | (((u8)r_ecx) & 0xffu);
    /* 005b3336: mov esp, ebp */ r_esp = r_ebp;
    /* 005b3338: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b3339: ret 8 */ FN_RET(0x005b3300); r_esp += 12; return;
}

void f_005b3340(void) /* sub_5B3340 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b3340);
    /* 005b3340: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b3341: mov ebp, esp */ r_ebp = r_esp;
    /* 005b3343: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b3346: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005b3349: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b334c: call 0x5b58a0 */ r_esp -= 4; W32(r_esp, 0x5b3351u); f_005b58a0();
    /* 005b3351: imul eax, eax, 0x34 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x34u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005b3354: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b3357: cmp dword ptr [ecx + 0x5c4], eax */ {  u32 a = R32((u32)(r_ecx+0x5c4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b335d: jl 0x5b3363 */ if ((fS!=fO)) goto L_005b3363;
L_005b335f:; BB(0x005b335f);
    /* 005b335f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b3361: jmp 0x5b33db */ goto L_005b33db;
L_005b3363:; BB(0x005b3363);
    /* 005b3363: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b3366: call 0x5b58a0 */ r_esp -= 4; W32(r_esp, 0x5b336bu); f_005b58a0();
    /* 005b336b: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005b336d: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005b3370: fild dword ptr [ebp - 0x18] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffe8u)));
    /* 005b3373: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b3376: fild dword ptr [edx + 0x5c4] */ FPUSH((long double)(i32)R32((u32)(r_edx+0x5c4u)));
    /* 005b337c: fdiv qword ptr [0x6b4b18] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b18u));
    /* 005b3382: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 005b3384: fstp qword ptr [ebp - 8] */ W_F64((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 005b3387: fld qword ptr [0x6b3e40] */ FPUSH(R_F64((u32)(0x6b3e40u)));
    /* 005b338d: fcomp qword ptr [ebp - 8] */ fx_compare(ST(0), R_F64((u32)(r_ebp+0xfffffff8u))); FPOP();
    /* 005b3390: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005b3392: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005b3395: jne 0x5b33a0 */ if (!fZ) goto L_005b33a0;
L_005b3397:; BB(0x005b3397);
    /* 005b3397: fld qword ptr [0x6b3e40] */ FPUSH(R_F64((u32)(0x6b3e40u)));
    /* 005b339d: fstp qword ptr [ebp - 8] */ W_F64((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
L_005b33a0:; BB(0x005b33a0);
    /* 005b33a0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005b33a3: fild dword ptr [eax + 0x5cc] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x5ccu)));
    /* 005b33a9: fdiv qword ptr [ebp - 8] */ ST(0) = ST(0) / R_F64((u32)(r_ebp+0xfffffff8u));
    /* 005b33ac: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 005b33af: fldz  */ FPUSH(0.0);
    /* 005b33b1: fcomp qword ptr [ebp - 0x10] */ fx_compare(ST(0), R_F64((u32)(r_ebp+0xfffffff0u))); FPOP();
    /* 005b33b4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005b33b6: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005b33b9: jne 0x5b33cd */ if (!fZ) goto L_005b33cd;
L_005b33bb:; BB(0x005b33bb);
    /* 005b33bb: fld qword ptr [ebp - 0x10] */ FPUSH(R_F64((u32)(r_ebp+0xfffffff0u)));
    /* 005b33be: fsub qword ptr [0x6b2c38] */ ST(0) = ST(0) - R_F64((u32)(0x6b2c38u));
    /* 005b33c4: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x5b33c9u); f_00686cc0();
    /* 005b33c9: jmp 0x5b33db */ goto L_005b33db;
L_005b33cd:; BB(0x005b33cd);
    /* 005b33cd: fld qword ptr [ebp - 0x10] */ FPUSH(R_F64((u32)(r_ebp+0xfffffff0u)));
    /* 005b33d0: fadd qword ptr [0x6b2c38] */ ST(0) = ST(0) + R_F64((u32)(0x6b2c38u));
    /* 005b33d6: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x5b33dbu); f_00686cc0();
L_005b33db:; BB(0x005b33db);
    /* 005b33db: mov esp, ebp */ r_esp = r_ebp;
    /* 005b33dd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b33de: ret  */ FN_RET(0x005b3340); r_esp += 4; return;
}

void f_005b33e0(void) /* sub_5B33E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b33e0);
    /* 005b33e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b33e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005b33e3: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b33e6: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005b33e9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b33ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b33ed: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 005b33f0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b33f1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b33f4: call 0x5b51a0 */ r_esp -= 4; W32(r_esp, 0x5b33f9u); f_005b51a0();
    /* 005b33f9: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005b33fc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b33fd: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005b33ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b3400: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 005b3403: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b3404: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b3407: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b3408: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5b340du); f_005dcb00();
    /* 005b340d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b3410: mov ecx, eax */ r_ecx = r_eax;
    /* 005b3412: call 0x5d5a90 */ r_esp -= 4; W32(r_esp, 0x5b3417u); f_005d5a90();
    /* 005b3417: mov ecx, eax */ r_ecx = r_eax;
    /* 005b3419: call 0x64c7a0 */ r_esp -= 4; W32(r_esp, 0x5b341eu); f_0064c7a0();
    /* 005b341e: mov esp, ebp */ r_esp = r_ebp;
    /* 005b3420: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b3421: ret 4 */ FN_RET(0x005b33e0); r_esp += 8; return;
}

void f_005b3430(void) /* sub_5B3430 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b3430);
    /* 005b3430: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b3431: mov ebp, esp */ r_ebp = r_esp;
    /* 005b3433: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b3436: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b3439: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b343c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b343d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b3440: call 0x5b58f0 */ r_esp -= 4; W32(r_esp, 0x5b3445u); f_005b58f0();
    /* 005b3445: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b3448: jle 0x5b346c */ if ((fZ||fS!=fO)) goto L_005b346c;
L_005b344a:; BB(0x005b344a);
    /* 005b344a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b344d: call 0x5b8540 */ r_esp -= 4; W32(r_esp, 0x5b3452u); f_005b8540();
    /* 005b3452: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005b3455: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b3457: je 0x5b349d */ if (fZ) goto L_005b349d;
L_005b3459:; BB(0x005b3459);
    /* 005b3459: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b345c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b345d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b3460: call 0x5b6170 */ r_esp -= 4; W32(r_esp, 0x5b3465u); f_005b6170();
    /* 005b3465: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005b3468: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b346a: jne 0x5b349d */ if (!fZ) goto L_005b349d;
L_005b346c:; BB(0x005b346c);
    /* 005b346c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b346f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b3470: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b3473: call 0x5b36b0 */ r_esp -= 4; W32(r_esp, 0x5b3478u); f_005b36b0();
    /* 005b3478: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005b347b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b347d: je 0x5b349d */ if (fZ) goto L_005b349d;
L_005b347f:; BB(0x005b347f);
    /* 005b347f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b3482: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b3483: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b3486: call 0x5b4e50 */ r_esp -= 4; W32(r_esp, 0x5b348bu); f_005b4e50();
    /* 005b348b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b348c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b348f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b3490: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b3493: call 0x5b5830 */ r_esp -= 4; W32(r_esp, 0x5b3498u); f_005b5830();
    /* 005b3498: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b349b: jle 0x5b34a4 */ if ((fZ||fS!=fO)) goto L_005b34a4;
L_005b349d:; BB(0x005b349d);
    /* 005b349d: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005b349f: jmp 0x5b3698 */ goto L_005b3698;
L_005b34a4:; BB(0x005b34a4);
    /* 005b34a4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b34a7: call 0x5b4f20 */ r_esp -= 4; W32(r_esp, 0x5b34acu); f_005b4f20();
    /* 005b34ac: movsx edx, al */ r_edx = (u32)(i32)(i8)(u8)r_eax;
    /* 005b34af: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005b34b2: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005b34b6: ja 0x5b3696 */ if ((!fC&&!fZ)) goto L_005b3696;
L_005b34bc:; BB(0x005b34bc);
    /* 005b34bc: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b34bf: jmp dword ptr [eax*4 + 0x5b36a0] */ { u32 t = R32((u32)(r_eax*4+0x5b36a0u)); switch (t) { case 0x5b34c6u: goto L_005b34c6; case 0x5b351au: goto L_005b351a; case 0x5b35aau: goto L_005b35aa; case 0x5b367bu: goto L_005b367b; default: UNSUP(0x005b34bf, "jump table entry is not a known target"); } }
L_005b34c6:; BB(0x005b34c6);
    /* 005b34c6: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b34c9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b34ca: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b34cd: call 0x5b4e50 */ r_esp -= 4; W32(r_esp, 0x5b34d2u); f_005b4e50();
    /* 005b34d2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b34d3: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b34d6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b34d7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b34da: call 0x5b5260 */ r_esp -= 4; W32(r_esp, 0x5b34dfu); f_005b5260();
    /* 005b34df: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b34e2: je 0x5b350b */ if (fZ) goto L_005b350b;
L_005b34e4:; BB(0x005b34e4);
    /* 005b34e4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b34e7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b34e8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b34eb: call 0x5b4e50 */ r_esp -= 4; W32(r_esp, 0x5b34f0u); f_005b4e50();
    /* 005b34f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b34f1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b34f4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b34f5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b34f8: call 0x5b5040 */ r_esp -= 4; W32(r_esp, 0x5b34fdu); f_005b5040();
    /* 005b34fd: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b3500: je 0x5b350b */ if (fZ) goto L_005b350b;
L_005b3502:; BB(0x005b3502);
    /* 005b3502: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005b3509: jmp 0x5b3512 */ goto L_005b3512;
L_005b350b:; BB(0x005b350b);
    /* 005b350b: mov dword ptr [ebp - 0xc], 1 */ W32((u32)(r_ebp+0xfffffff4u), 0x1u);
L_005b3512:; BB(0x005b3512);
    /* 005b3512: mov al, byte ptr [ebp - 0xc] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff4u))) & 0xffu);
    /* 005b3515: jmp 0x5b3698 */ goto L_005b3698;
L_005b351a:; BB(0x005b351a);
    /* 005b351a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b351d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b351e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b3521: call 0x5b4e50 */ r_esp -= 4; W32(r_esp, 0x5b3526u); f_005b4e50();
    /* 005b3526: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b3527: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b352a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b352b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b352e: call 0x5b5260 */ r_esp -= 4; W32(r_esp, 0x5b3533u); f_005b5260();
    /* 005b3533: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b3536: je 0x5b359b */ if (fZ) goto L_005b359b;
L_005b3538:; BB(0x005b3538);
    /* 005b3538: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b353b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b353c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b353f: call 0x5b4e50 */ r_esp -= 4; W32(r_esp, 0x5b3544u); f_005b4e50();
    /* 005b3544: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b3545: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b3548: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b3549: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b354c: call 0x5b5040 */ r_esp -= 4; W32(r_esp, 0x5b3551u); f_005b5040();
    /* 005b3551: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b3554: je 0x5b359b */ if (fZ) goto L_005b359b;
L_005b3556:; BB(0x005b3556);
    /* 005b3556: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b3559: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b355a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b355d: call 0x5b4e50 */ r_esp -= 4; W32(r_esp, 0x5b3562u); f_005b4e50();
    /* 005b3562: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b3563: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b3566: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b3567: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b356a: call 0x5b5260 */ r_esp -= 4; W32(r_esp, 0x5b356fu); f_005b5260();
    /* 005b356f: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b3572: je 0x5b359b */ if (fZ) goto L_005b359b;
L_005b3574:; BB(0x005b3574);
    /* 005b3574: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b3577: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b3578: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b357b: call 0x5b4e50 */ r_esp -= 4; W32(r_esp, 0x5b3580u); f_005b4e50();
    /* 005b3580: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b3581: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b3584: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b3585: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b3588: call 0x5b5040 */ r_esp -= 4; W32(r_esp, 0x5b358du); f_005b5040();
    /* 005b358d: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b3590: je 0x5b359b */ if (fZ) goto L_005b359b;
L_005b3592:; BB(0x005b3592);
    /* 005b3592: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005b3599: jmp 0x5b35a2 */ goto L_005b35a2;
L_005b359b:; BB(0x005b359b);
    /* 005b359b: mov dword ptr [ebp - 0x10], 1 */ W32((u32)(r_ebp+0xfffffff0u), 0x1u);
L_005b35a2:; BB(0x005b35a2);
    /* 005b35a2: mov al, byte ptr [ebp - 0x10] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff0u))) & 0xffu);
    /* 005b35a5: jmp 0x5b3698 */ goto L_005b3698;
L_005b35aa:; BB(0x005b35aa);
    /* 005b35aa: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b35ad: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b35ae: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b35b1: call 0x5b4e50 */ r_esp -= 4; W32(r_esp, 0x5b35b6u); f_005b4e50();
    /* 005b35b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b35b7: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b35ba: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b35bb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b35be: call 0x5b5260 */ r_esp -= 4; W32(r_esp, 0x5b35c3u); f_005b5260();
    /* 005b35c3: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b35c6: je 0x5b366f */ if (fZ) goto L_005b366f;
L_005b35cc:; BB(0x005b35cc);
    /* 005b35cc: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b35cf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b35d0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b35d3: call 0x5b4e50 */ r_esp -= 4; W32(r_esp, 0x5b35d8u); f_005b4e50();
    /* 005b35d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b35d9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b35dc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b35dd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b35e0: call 0x5b5040 */ r_esp -= 4; W32(r_esp, 0x5b35e5u); f_005b5040();
    /* 005b35e5: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b35e8: je 0x5b366f */ if (fZ) goto L_005b366f;
L_005b35ee:; BB(0x005b35ee);
    /* 005b35ee: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b35f1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b35f2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b35f5: call 0x5b4e50 */ r_esp -= 4; W32(r_esp, 0x5b35fau); f_005b4e50();
    /* 005b35fa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b35fb: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b35fe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b35ff: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b3602: call 0x5b5260 */ r_esp -= 4; W32(r_esp, 0x5b3607u); f_005b5260();
    /* 005b3607: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b360a: je 0x5b366f */ if (fZ) goto L_005b366f;
L_005b360c:; BB(0x005b360c);
    /* 005b360c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b360f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b3610: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b3613: call 0x5b4e50 */ r_esp -= 4; W32(r_esp, 0x5b3618u); f_005b4e50();
    /* 005b3618: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b3619: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b361c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b361d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b3620: call 0x5b5040 */ r_esp -= 4; W32(r_esp, 0x5b3625u); f_005b5040();
    /* 005b3625: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b3628: je 0x5b366f */ if (fZ) goto L_005b366f;
L_005b362a:; BB(0x005b362a);
    /* 005b362a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b362d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b362e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b3631: call 0x5b4e50 */ r_esp -= 4; W32(r_esp, 0x5b3636u); f_005b4e50();
    /* 005b3636: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b3637: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b363a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b363b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b363e: call 0x5b5260 */ r_esp -= 4; W32(r_esp, 0x5b3643u); f_005b5260();
    /* 005b3643: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b3646: je 0x5b366f */ if (fZ) goto L_005b366f;
L_005b3648:; BB(0x005b3648);
    /* 005b3648: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b364b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b364c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b364f: call 0x5b4e50 */ r_esp -= 4; W32(r_esp, 0x5b3654u); f_005b4e50();
    /* 005b3654: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b3655: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b3658: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b3659: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b365c: call 0x5b5040 */ r_esp -= 4; W32(r_esp, 0x5b3661u); f_005b5040();
    /* 005b3661: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b3664: je 0x5b366f */ if (fZ) goto L_005b366f;
L_005b3666:; BB(0x005b3666);
    /* 005b3666: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 005b366d: jmp 0x5b3676 */ goto L_005b3676;
L_005b366f:; BB(0x005b366f);
    /* 005b366f: mov dword ptr [ebp - 0x14], 1 */ W32((u32)(r_ebp+0xffffffecu), 0x1u);
L_005b3676:; BB(0x005b3676);
    /* 005b3676: mov al, byte ptr [ebp - 0x14] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffecu))) & 0xffu);
    /* 005b3679: jmp 0x5b3698 */ goto L_005b3698;
L_005b367b:; BB(0x005b367b);
    /* 005b367b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b367e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b367f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b3682: call 0x5b4e50 */ r_esp -= 4; W32(r_esp, 0x5b3687u); f_005b4e50();
    /* 005b3687: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b3688: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b368b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b368c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b368f: call 0x5b6480 */ r_esp -= 4; W32(r_esp, 0x5b3694u); f_005b6480();
    /* 005b3694: jmp 0x5b3698 */ goto L_005b3698;
L_005b3696:; BB(0x005b3696);
    /* 005b3696: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_005b3698:; BB(0x005b3698);
    /* 005b3698: mov esp, ebp */ r_esp = r_ebp;
    /* 005b369a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b369b: ret 4 */ FN_RET(0x005b3430); r_esp += 8; return;
}

void f_005b36b0(void) /* sub_5B36B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b36b0);
    /* 005b36b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b36b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005b36b3: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b36b6: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005b36b9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b36bc: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b36bf: mov edx, dword ptr [ecx + eax*4 + 0x580] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x580u));
    /* 005b36c6: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005b36c9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b36cc: shl eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005b36cf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b36d2: lea edx, [ecx + eax + 0x48] */ r_edx = (u32)(r_ecx+r_eax+0x48u);
    /* 005b36d6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b36d8: shl eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005b36db: mov ecx, dword ptr [edx + eax] */ r_ecx = R32((u32)(r_edx+r_eax));
    /* 005b36de: mov edx, dword ptr [edx + eax + 4] */ r_edx = R32((u32)(r_edx+r_eax+0x4u));
    /* 005b36e2: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005b36e5: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 005b36e8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b36eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b36ec: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5b36f1u); f_005dcb00();
    /* 005b36f1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b36f4: mov ecx, eax */ r_ecx = r_eax;
    /* 005b36f6: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x5b36fbu); f_005d5a50();
    /* 005b36fb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005b36fd: cmp eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b3700: setge cl */ r_ecx = (r_ecx & 0xffffff00u) | ((((fS==fO)) ? 1 : 0) & 0xffu);
    /* 005b3703: mov al, cl */ r_eax = (r_eax & 0xffffff00u) | (((u8)r_ecx) & 0xffu);
    /* 005b3705: mov esp, ebp */ r_esp = r_ebp;
    /* 005b3707: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b3708: ret 4 */ FN_RET(0x005b36b0); r_esp += 8; return;
}

void f_005b3710(void) /* sub_5B3710 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b3710);
    /* 005b3710: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b3711: mov ebp, esp */ r_ebp = r_esp;
    /* 005b3713: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b3714: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b3717: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b371a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b371b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b371e: call 0x5b36b0 */ r_esp -= 4; W32(r_esp, 0x5b3723u); f_005b36b0();
    /* 005b3723: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005b3726: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b3728: jne 0x5b3731 */ if (!fZ) goto L_005b3731;
L_005b372a:; BB(0x005b372a);
    /* 005b372a: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005b372c: jmp 0x5b37e2 */ goto L_005b37e2;
L_005b3731:; BB(0x005b3731);
    /* 005b3731: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b3734: call 0x5b5950 */ r_esp -= 4; W32(r_esp, 0x5b3739u); f_005b5950();
    /* 005b3739: movsx edx, al */ r_edx = (u32)(i32)(i8)(u8)r_eax;
    /* 005b373c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b373e: je 0x5b37e0 */ if (fZ) goto L_005b37e0;
L_005b3744:; BB(0x005b3744);
    /* 005b3744: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005b3747: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b3748: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b374b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b374c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b374f: call 0x5b82f0 */ r_esp -= 4; W32(r_esp, 0x5b3754u); f_005b82f0();
    /* 005b3754: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005b3757: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b3759: je 0x5b37e0 */ if (fZ) goto L_005b37e0;
L_005b375f:; BB(0x005b375f);
    /* 005b375f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b3762: call 0x5b8570 */ r_esp -= 4; W32(r_esp, 0x5b3767u); f_005b8570();
    /* 005b3767: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005b376a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b376c: jne 0x5b379a */ if (!fZ) goto L_005b379a;
L_005b376e:; BB(0x005b376e);
    /* 005b376e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b3770: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005b3773: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b3774: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b3777: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b3778: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b377b: call 0x5b5f60 */ r_esp -= 4; W32(r_esp, 0x5b3780u); f_005b5f60();
    /* 005b3780: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b3783: jne 0x5b379a */ if (!fZ) goto L_005b379a;
L_005b3785:; BB(0x005b3785);
    /* 005b3785: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b3788: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b3789: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b378c: call 0x5b58f0 */ r_esp -= 4; W32(r_esp, 0x5b3791u); f_005b58f0();
    /* 005b3791: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b3794: jle 0x5b379a */ if ((fZ||fS!=fO)) goto L_005b379a;
L_005b3796:; BB(0x005b3796);
    /* 005b3796: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005b3798: jmp 0x5b37e2 */ goto L_005b37e2;
L_005b379a:; BB(0x005b379a);
    /* 005b379a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b379d: call 0x5b5950 */ r_esp -= 4; W32(r_esp, 0x5b37a2u); f_005b5950();
    /* 005b37a2: movsx ecx, al */ r_ecx = (u32)(i32)(i8)(u8)r_eax;
    /* 005b37a5: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b37a8: jne 0x5b37bb */ if (!fZ) goto L_005b37bb;
L_005b37aa:; BB(0x005b37aa);
    /* 005b37aa: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b37ad: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b37ae: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b37b1: call 0x5b58f0 */ r_esp -= 4; W32(r_esp, 0x5b37b6u); f_005b58f0();
    /* 005b37b6: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b37b9: je 0x5b37dc */ if (fZ) goto L_005b37dc;
L_005b37bb:; BB(0x005b37bb);
    /* 005b37bb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b37be: call 0x5b5950 */ r_esp -= 4; W32(r_esp, 0x5b37c3u); f_005b5950();
    /* 005b37c3: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 005b37c6: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b37c9: jne 0x5b37e0 */ if (!fZ) goto L_005b37e0;
L_005b37cb:; BB(0x005b37cb);
    /* 005b37cb: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b37ce: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b37cf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b37d2: call 0x5b58f0 */ r_esp -= 4; W32(r_esp, 0x5b37d7u); f_005b58f0();
    /* 005b37d7: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b37da: jge 0x5b37e0 */ if ((fS==fO)) goto L_005b37e0;
L_005b37dc:; BB(0x005b37dc);
    /* 005b37dc: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005b37de: jmp 0x5b37e2 */ goto L_005b37e2;
L_005b37e0:; BB(0x005b37e0);
    /* 005b37e0: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_005b37e2:; BB(0x005b37e2);
    /* 005b37e2: mov esp, ebp */ r_esp = r_ebp;
    /* 005b37e4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b37e5: ret 8 */ FN_RET(0x005b3710); r_esp += 12; return;
}

void f_005b37f0(void) /* sub_5B37F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b37f0);
    /* 005b37f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b37f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005b37f3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b37f6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b37f9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b37fc: call 0x5b6680 */ r_esp -= 4; W32(r_esp, 0x5b3801u); f_005b6680();
    /* 005b3801: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005b3804: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b3806: je 0x5b3835 */ if (fZ) goto L_005b3835;
L_005b3808:; BB(0x005b3808);
    /* 005b3808: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b380b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b380c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b380f: call 0x5b58f0 */ r_esp -= 4; W32(r_esp, 0x5b3814u); f_005b58f0();
    /* 005b3814: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b3817: jne 0x5b3835 */ if (!fZ) goto L_005b3835;
L_005b3819:; BB(0x005b3819);
    /* 005b3819: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b381b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b381e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b381f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b3822: call 0x5b5830 */ r_esp -= 4; W32(r_esp, 0x5b3827u); f_005b5830();
    /* 005b3827: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b382a: jne 0x5b3835 */ if (!fZ) goto L_005b3835;
L_005b382c:; BB(0x005b382c);
    /* 005b382c: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 005b3833: jmp 0x5b383c */ goto L_005b383c;
L_005b3835:; BB(0x005b3835);
    /* 005b3835: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_005b383c:; BB(0x005b383c);
    /* 005b383c: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 005b383f: mov esp, ebp */ r_esp = r_ebp;
    /* 005b3841: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b3842: ret 4 */ FN_RET(0x005b37f0); r_esp += 8; return;
}

void f_005b3b60(void) /* sub_5B3B60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b3b60);
    /* 005b3b60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b3b61: mov ebp, esp */ r_ebp = r_esp;
    /* 005b3b63: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b3b66: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b3b67: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005b3b6a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b3b6d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b3b6e: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 005b3b71: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b3b72: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b3b75: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b3b78: mov ecx, dword ptr [eax + edx*4 + 0x634] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x634u));
    /* 005b3b7f: call 0x5cb880 */ r_esp -= 4; W32(r_esp, 0x5b3b84u); f_005cb880();
    /* 005b3b84: cmp dword ptr [eax], 0 */ {  u32 a = R32((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b3b87: jle 0x5b3cc1 */ if ((fZ||fS!=fO)) goto L_005b3cc1;
L_005b3b8d:; BB(0x005b3b8d);
    /* 005b3b8d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b3b8f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b3b91: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b3b94: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b3b95: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b3b98: call 0x5b5c60 */ r_esp -= 4; W32(r_esp, 0x5b3b9du); f_005b5c60();
    /* 005b3b9d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b3b9e: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x5b3ba3u); f_00641290();
    /* 005b3ba3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b3ba6: mov esi, eax */ r_esi = r_eax;
    /* 005b3ba8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b3baa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b3bac: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b3baf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b3bb0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b3bb3: call 0x5b5c60 */ r_esp -= 4; W32(r_esp, 0x5b3bb8u); f_005b5c60();
    /* 005b3bb8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b3bb9: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x5b3bbeu); f_00641290();
    /* 005b3bbe: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b3bc1: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b3bc3: jne 0x5b3c92 */ if (!fZ) goto L_005b3c92;
L_005b3bc9:; BB(0x005b3bc9);
    /* 005b3bc9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b3bcb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b3bcd: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b3bd0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b3bd1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b3bd4: call 0x5b5c60 */ r_esp -= 4; W32(r_esp, 0x5b3bd9u); f_005b5c60();
    /* 005b3bd9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b3bda: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x5b3bdfu); f_00641280();
    /* 005b3bdf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b3be2: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b3be5: jne 0x5b3c05 */ if (!fZ) goto L_005b3c05;
L_005b3be7:; BB(0x005b3be7);
    /* 005b3be7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b3be9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b3beb: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b3bee: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b3bef: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b3bf2: call 0x5b5c60 */ r_esp -= 4; W32(r_esp, 0x5b3bf7u); f_005b5c60();
    /* 005b3bf7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b3bf8: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x5b3bfdu); f_00641280();
    /* 005b3bfd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b3c00: cmp eax, 0xd */ {  u32 a = r_eax; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b3c03: je 0x5b3c41 */ if (fZ) goto L_005b3c41;
L_005b3c05:; BB(0x005b3c05);
    /* 005b3c05: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b3c07: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b3c09: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b3c0c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b3c0d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b3c10: call 0x5b5c60 */ r_esp -= 4; W32(r_esp, 0x5b3c15u); f_005b5c60();
    /* 005b3c15: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b3c16: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x5b3c1bu); f_00641280();
    /* 005b3c1b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b3c1e: cmp eax, 0xd */ {  u32 a = r_eax; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b3c21: jne 0x5b3c61 */ if (!fZ) goto L_005b3c61;
L_005b3c23:; BB(0x005b3c23);
    /* 005b3c23: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b3c25: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b3c27: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b3c2a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b3c2b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b3c2e: call 0x5b5c60 */ r_esp -= 4; W32(r_esp, 0x5b3c33u); f_005b5c60();
    /* 005b3c33: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b3c34: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x5b3c39u); f_00641280();
    /* 005b3c39: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b3c3c: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b3c3f: jne 0x5b3c61 */ if (!fZ) goto L_005b3c61;
L_005b3c41:; BB(0x005b3c41);
    /* 005b3c41: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b3c43: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 005b3c45: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b3c47: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b3c49: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b3c4c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b3c4d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b3c50: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b3c53: mov ecx, dword ptr [eax + edx*4 + 0x634] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x634u));
    /* 005b3c5a: call 0x5b8ab0 */ r_esp -= 4; W32(r_esp, 0x5b3c5fu); f_005b8ab0();
    /* 005b3c5f: jmp 0x5b3c7f */ goto L_005b3c7f;
L_005b3c61:; BB(0x005b3c61);
    /* 005b3c61: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005b3c63: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005b3c65: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b3c67: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b3c69: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b3c6c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b3c6d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b3c70: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b3c73: mov ecx, dword ptr [eax + edx*4 + 0x634] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x634u));
    /* 005b3c7a: call 0x5b8ab0 */ r_esp -= 4; W32(r_esp, 0x5b3c7fu); f_005b8ab0();
L_005b3c7f:; BB(0x005b3c7f);
    /* 005b3c7f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b3c82: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b3c85: mov dword ptr [edx + ecx*4 + 0x664], 1 */ W32((u32)(r_edx+r_ecx*4+0x664u), 0x1u);
    /* 005b3c90: jmp 0x5b3cc1 */ goto L_005b3cc1;
L_005b3c92:; BB(0x005b3c92);
    /* 005b3c92: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b3c94: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b3c96: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b3c98: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b3c9a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b3c9d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b3c9e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b3ca1: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b3ca4: mov ecx, dword ptr [edx + ecx*4 + 0x634] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x634u));
    /* 005b3cab: call 0x5b8ab0 */ r_esp -= 4; W32(r_esp, 0x5b3cb0u); f_005b8ab0();
    /* 005b3cb0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b3cb3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b3cb6: mov dword ptr [ecx + eax*4 + 0x664], 0 */ W32((u32)(r_ecx+r_eax*4+0x664u), 0x0u);
L_005b3cc1:; BB(0x005b3cc1);
    /* 005b3cc1: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b3cc4: add edx, dword ptr [ebp + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b3cc7: mov byte ptr [edx + 0x674], 1 */ W8((u32)(r_edx+0x674u), 0x1u);
    /* 005b3cce: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b3ccf: mov esp, ebp */ r_esp = r_ebp;
    /* 005b3cd1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b3cd2: ret 4 */ FN_RET(0x005b3b60); r_esp += 8; return;
}

void f_005b3ce0(void) /* sub_5B3CE0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b3ce0);
    /* 005b3ce0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b3ce1: mov ebp, esp */ r_ebp = r_esp;
    /* 005b3ce3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b3ce6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005b3ce9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b3cec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b3ced: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5b3cf2u); f_005dcb00();
    /* 005b3cf2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b3cf5: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005b3cf8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b3cfb: mov byte ptr [ecx + 0x4a2], 1 */ W8((u32)(r_ecx+0x4a2u), 0x1u);
    /* 005b3d02: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b3d05: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b3d06: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b3d09: call 0x5b6660 */ r_esp -= 4; W32(r_esp, 0x5b3d0eu); f_005b6660();
    /* 005b3d0e: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005b3d11: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b3d13: je 0x5b3d29 */ if (fZ) goto L_005b3d29;
L_005b3d15:; BB(0x005b3d15);
    /* 005b3d15: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b3d17: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005b3d19: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b3d1b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b3d1d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b3d20: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b3d21: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b3d24: call 0x5b67d0 */ r_esp -= 4; W32(r_esp, 0x5b3d29u); f_005b67d0();
L_005b3d29:; BB(0x005b3d29);
    /* 005b3d29: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b3d2c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b3d2d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b3d30: call 0x5b6040 */ r_esp -= 4; W32(r_esp, 0x5b3d35u); f_005b6040();
    /* 005b3d35: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005b3d38: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b3d3a: je 0x5b3d75 */ if (fZ) goto L_005b3d75;
L_005b3d3c:; BB(0x005b3d3c);
    /* 005b3d3c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b3d3e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b3d40: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005b3d42: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b3d44: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b3d47: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b3d48: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b3d4b: call 0x5b67d0 */ r_esp -= 4; W32(r_esp, 0x5b3d50u); f_005b67d0();
    /* 005b3d50: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005b3d52: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b3d54: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b3d57: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b3d58: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b3d5b: call 0x5b71a0 */ r_esp -= 4; W32(r_esp, 0x5b3d60u); f_005b71a0();
    /* 005b3d60: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b3d63: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b3d64: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5b3d69u); f_005dcb00();
    /* 005b3d69: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b3d6c: mov byte ptr [eax + 0x4b0], 0 */ W8((u32)(r_eax+0x4b0u), 0x0u);
    /* 005b3d73: jmp 0x5b3dac */ goto L_005b3dac;
L_005b3d75:; BB(0x005b3d75);
    /* 005b3d75: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b3d77: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b3d79: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b3d7b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b3d7d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b3d80: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b3d81: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b3d84: call 0x5b67d0 */ r_esp -= 4; W32(r_esp, 0x5b3d89u); f_005b67d0();
    /* 005b3d89: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b3d8b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b3d8d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b3d90: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b3d91: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b3d94: call 0x5b71a0 */ r_esp -= 4; W32(r_esp, 0x5b3d99u); f_005b71a0();
    /* 005b3d99: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b3d9c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b3d9d: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5b3da2u); f_005dcb00();
    /* 005b3da2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b3da5: mov byte ptr [eax + 0x4b0], 1 */ W8((u32)(r_eax+0x4b0u), 0x1u);
L_005b3dac:; BB(0x005b3dac);
    /* 005b3dac: mov esp, ebp */ r_esp = r_ebp;
    /* 005b3dae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b3daf: ret 4 */ FN_RET(0x005b3ce0); r_esp += 8; return;
}

void f_005b3dc0(void) /* sub_5B3DC0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b3dc0);
    /* 005b3dc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b3dc1: mov ebp, esp */ r_ebp = r_esp;
    /* 005b3dc3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b3dc4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b3dc7: mov ecx, dword ptr [0x793600] */ r_ecx = R32((u32)(0x793600u));
    /* 005b3dcd: call 0x5da830 */ r_esp -= 4; W32(r_esp, 0x5b3dd2u); f_005da830();
    /* 005b3dd2: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005b3dd5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b3dd7: je 0x5b3ddf */ if (fZ) goto L_005b3ddf;
L_005b3dd9:; BB(0x005b3dd9);
    /* 005b3dd9: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005b3ddb: jmp 0x5b3dec */ goto L_005b3dec;
L_005b3ddf:; BB(0x005b3ddf);
    /* 005b3ddf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b3de1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b3de4: call 0x5b5fb0 */ r_esp -= 4; W32(r_esp, 0x5b3de9u); f_005b5fb0();
    /* 005b3de9: mov al, byte ptr [eax + 3] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0x3u))) & 0xffu);
L_005b3dec:; BB(0x005b3dec);
    /* 005b3dec: mov esp, ebp */ r_esp = r_ebp;
    /* 005b3dee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b3def: ret  */ FN_RET(0x005b3dc0); r_esp += 4; return;
}

void f_005b3df0(void) /* sub_5B3DF0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b3df0);
    /* 005b3df0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b3df1: mov ebp, esp */ r_ebp = r_esp;
    /* 005b3df3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b3df4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b3df7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b3df9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b3dfb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b3dfd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b3dff: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b3e02: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b3e03: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b3e06: call 0x5b67d0 */ r_esp -= 4; W32(r_esp, 0x5b3e0bu); f_005b67d0();
    /* 005b3e0b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b3e0d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b3e10: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b3e11: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b3e14: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b3e17: mov ecx, dword ptr [eax + edx*4 + 0x580] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x580u));
    /* 005b3e1e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b3e21: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b3e24: mov edx, dword ptr [eax + edx*4 + 0x580] */ r_edx = R32((u32)(r_eax+r_edx*4+0x580u));
    /* 005b3e2b: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005b3e2d: mov ecx, edx */ r_ecx = r_edx;
    /* 005b3e2f: mov edx, dword ptr [eax + 0xbc] */ r_edx = R32((u32)(r_eax+0xbcu));
    /* 005b3e35: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5b3e37u); call_ind(t); }
    /* 005b3e37: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b3e39: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b3e3c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b3e3d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b3e40: call 0x5b7380 */ r_esp -= 4; W32(r_esp, 0x5b3e45u); f_005b7380();
    /* 005b3e45: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b3e47: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b3e49: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b3e4c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b3e4d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b3e50: call 0x5b71a0 */ r_esp -= 4; W32(r_esp, 0x5b3e55u); f_005b71a0();
    /* 005b3e55: mov esp, ebp */ r_esp = r_ebp;
    /* 005b3e57: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b3e58: ret 4 */ FN_RET(0x005b3df0); r_esp += 8; return;
}

void f_005b3e60(void) /* sub_5B3E60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b3e60);
    /* 005b3e60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b3e61: mov ebp, esp */ r_ebp = r_esp;
    /* 005b3e63: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b3e66: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005b3e69: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005b3e6b: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005b3e6d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b3e6f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b3e72: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b3e73: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b3e76: call 0x5b4e50 */ r_esp -= 4; W32(r_esp, 0x5b3e7bu); f_005b4e50();
    /* 005b3e7b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b3e7c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b3e7f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b3e80: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b3e83: call 0x5b67d0 */ r_esp -= 4; W32(r_esp, 0x5b3e88u); f_005b67d0();
    /* 005b3e88: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b3e8b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b3e8c: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5b3e91u); f_005dcb00();
    /* 005b3e91: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b3e94: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005b3e97: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b3e9a: mov byte ptr [eax + 0x4a2], 1 */ W8((u32)(r_eax+0x4a2u), 0x1u);
    /* 005b3ea1: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 005b3ea3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b3ea5: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b3ea8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b3ea9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b3eac: call 0x5b71a0 */ r_esp -= 4; W32(r_esp, 0x5b3eb1u); f_005b71a0();
    /* 005b3eb1: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b3eb4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b3eb5: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5b3ebau); f_005dcb00();
    /* 005b3eba: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b3ebd: mov byte ptr [eax + 0x4b0], 0 */ W8((u32)(r_eax+0x4b0u), 0x0u);
    /* 005b3ec4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b3ec7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b3ec8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b3ecb: call 0x5b3f80 */ r_esp -= 4; W32(r_esp, 0x5b3ed0u); f_005b3f80();
    /* 005b3ed0: mov esp, ebp */ r_esp = r_ebp;
    /* 005b3ed2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b3ed3: ret 4 */ FN_RET(0x005b3e60); r_esp += 8; return;
}

void f_005b3ee0(void) /* sub_5B3EE0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b3ee0);
    /* 005b3ee0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b3ee1: mov ebp, esp */ r_ebp = r_esp;
    /* 005b3ee3: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b3ee6: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005b3ee9: cmp dword ptr [ebp + 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b3eed: jne 0x5b3efe */ if (!fZ) goto L_005b3efe;
L_005b3eef:; BB(0x005b3eef);
    /* 005b3eef: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b3ef2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b3ef3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b3ef6: call 0x5b4e50 */ r_esp -= 4; W32(r_esp, 0x5b3efbu); f_005b4e50();
    /* 005b3efb: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
L_005b3efe:; BB(0x005b3efe);
    /* 005b3efe: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b3f00: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005b3f03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b3f04: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b3f07: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b3f08: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b3f0b: call 0x5b7140 */ r_esp -= 4; W32(r_esp, 0x5b3f10u); f_005b7140();
    /* 005b3f10: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b3f13: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b3f16: mov edx, dword ptr [ecx + eax*4 + 0x580] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x580u));
    /* 005b3f1d: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005b3f20: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b3f23: shl eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005b3f26: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b3f29: lea edx, [ecx + eax + 0x48] */ r_edx = (u32)(r_ecx+r_eax+0x48u);
    /* 005b3f2d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b3f2f: shl eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005b3f32: mov ecx, dword ptr [edx + eax] */ r_ecx = R32((u32)(r_edx+r_eax));
    /* 005b3f35: mov edx, dword ptr [edx + eax + 4] */ r_edx = R32((u32)(r_edx+r_eax+0x4u));
    /* 005b3f39: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005b3f3c: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 005b3f3f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b3f41: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005b3f44: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b3f45: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 005b3f48: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b3f49: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b3f4c: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b3f4f: mov ecx, dword ptr [eax + edx*4 + 0x580] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x580u));
    /* 005b3f56: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b3f59: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b3f5c: mov edx, dword ptr [eax + edx*4 + 0x580] */ r_edx = R32((u32)(r_eax+r_edx*4+0x580u));
    /* 005b3f63: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005b3f65: mov ecx, edx */ r_ecx = r_edx;
    /* 005b3f67: mov edx, dword ptr [eax + 0xc4] */ r_edx = R32((u32)(r_eax+0xc4u));
    /* 005b3f6d: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5b3f6fu); call_ind(t); }
    /* 005b3f6f: mov esp, ebp */ r_esp = r_ebp;
    /* 005b3f71: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b3f72: ret 8 */ FN_RET(0x005b3ee0); r_esp += 12; return;
}

void f_005b3f80(void) /* sub_5B3F80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b3f80);
    /* 005b3f80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b3f81: mov ebp, esp */ r_ebp = r_esp;
    /* 005b3f83: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b3f86: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005b3f89: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b3f8c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b3f8d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b3f90: call 0x5b4e50 */ r_esp -= 4; W32(r_esp, 0x5b3f95u); f_005b4e50();
    /* 005b3f95: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005b3f98: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b3f9a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b3f9d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b3f9e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b3fa1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b3fa2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b3fa5: call 0x5b7170 */ r_esp -= 4; W32(r_esp, 0x5b3faau); f_005b7170();
L_005b3faa:; BB(0x005b3faa);
    /* 005b3faa: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b3fae: jle 0x5b3fe4 */ if ((fZ||fS!=fO)) goto L_005b3fe4;
L_005b3fb0:; BB(0x005b3fb0);
    /* 005b3fb0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b3fb3: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005b3fb6: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005b3fb9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b3fbc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b3fbd: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b3fc0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b3fc1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b3fc4: call 0x5b6610 */ r_esp -= 4; W32(r_esp, 0x5b3fc9u); f_005b6610();
    /* 005b3fc9: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005b3fcc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b3fce: jne 0x5b3fe2 */ if (!fZ) goto L_005b3fe2;
L_005b3fd0:; BB(0x005b3fd0);
    /* 005b3fd0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b3fd3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b3fd4: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b3fd7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b3fd8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b3fdb: call 0x5b7090 */ r_esp -= 4; W32(r_esp, 0x5b3fe0u); f_005b7090();
    /* 005b3fe0: jmp 0x5b3ff2 */ goto L_005b3ff2;
L_005b3fe2:; BB(0x005b3fe2);
    /* 005b3fe2: jmp 0x5b3faa */ goto L_005b3faa;
L_005b3fe4:; BB(0x005b3fe4);
    /* 005b3fe4: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b3fe6: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b3fe9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b3fea: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b3fed: call 0x5b7090 */ r_esp -= 4; W32(r_esp, 0x5b3ff2u); f_005b7090();
L_005b3ff2:; BB(0x005b3ff2);
    /* 005b3ff2: mov esp, ebp */ r_esp = r_ebp;
    /* 005b3ff4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b3ff5: ret 4 */ FN_RET(0x005b3f80); r_esp += 8; return;
}

