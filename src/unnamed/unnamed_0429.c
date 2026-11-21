#include "protos.h"

void f_004298a0(void) /* sub_4298A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004298a0);
    /* 004298a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004298a1: mov ebp, esp */ r_ebp = r_esp;
    /* 004298a3: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004298a6: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 004298a9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004298b0: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 004298b7: mov byte ptr [ebp - 0xa], 0 */ W8((u32)(r_ebp+0xfffffff6u), 0x0u);
    /* 004298bb: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 004298c1: call 0x4351b0 */ r_esp -= 4; W32(r_esp, 0x4298c6u); f_004351b0();
    /* 004298c6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004298c8: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004298cb: setne cl */ r_ecx = (r_ecx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 004298ce: mov byte ptr [ebp - 9], cl */ W8((u32)(r_ebp+0xfffffff7u), (u8)r_ecx);
    /* 004298d1: movzx edx, byte ptr [ebp - 9] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffff7u));
    /* 004298d5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004298d7: je 0x429992 */ if (fZ) goto L_00429992;
L_004298dd:; BB(0x004298dd);
    /* 004298dd: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 004298e3: call 0x4351b0 */ r_esp -= 4; W32(r_esp, 0x4298e8u); f_004351b0();
    /* 004298e8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004298eb: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004298ef: jl 0x429900 */ if ((fS!=fO)) goto L_00429900;
L_004298f1:; BB(0x004298f1);
    /* 004298f1: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004298f5: jg 0x429900 */ if ((!fZ&&fS==fO)) goto L_00429900;
L_004298f7:; BB(0x004298f7);
    /* 004298f7: mov dword ptr [ebp - 0x1c], 1 */ W32((u32)(r_ebp+0xffffffe4u), 0x1u);
    /* 004298fe: jmp 0x429907 */ goto L_00429907;
L_00429900:; BB(0x00429900);
    /* 00429900: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_00429907:; BB(0x00429907);
    /* 00429907: mov al, byte ptr [ebp - 0x1c] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffe4u))) & 0xffu);
    /* 0042990a: mov byte ptr [ebp - 0xa], al */ W8((u32)(r_ebp+0xfffffff6u), (u8)r_eax);
    /* 0042990d: movzx ecx, byte ptr [ebp - 0xa] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffff6u));
    /* 00429911: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00429913: je 0x429992 */ if (fZ) goto L_00429992;
L_00429915:; BB(0x00429915);
    /* 00429915: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00429918: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00429919: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x42991eu); f_005dcb00();
    /* 0042991e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00429921: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00429924: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00429928: je 0x429992 */ if (fZ) goto L_00429992;
L_0042992a:; BB(0x0042992a);
    /* 0042992a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042992d: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x429932u); f_0063aac0();
    /* 00429932: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00429934: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00429937: cmp dword ptr [ebp - 0x10], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042993b: je 0x429959 */ if (fZ) goto L_00429959;
L_0042993d:; BB(0x0042993d);
    /* 0042993d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00429940: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x429945u); f_0063aac0();
    /* 00429945: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00429947: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0042994a: cmp dword ptr [ebp - 0x14], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042994e: je 0x429959 */ if (fZ) goto L_00429959;
L_00429950:; BB(0x00429950);
    /* 00429950: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 00429957: jmp 0x429960 */ goto L_00429960;
L_00429959:; BB(0x00429959);
    /* 00429959: mov dword ptr [ebp - 0x20], 1 */ W32((u32)(r_ebp+0xffffffe0u), 0x1u);
L_00429960:; BB(0x00429960);
    /* 00429960: movzx edx, byte ptr [ebp - 0x20] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffe0u));
    /* 00429964: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00429966: je 0x429992 */ if (fZ) goto L_00429992;
L_00429968:; BB(0x00429968);
    /* 00429968: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042996b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042996c: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 00429972: call 0x436230 */ r_esp -= 4; W32(r_esp, 0x429977u); f_00436230();
    /* 00429977: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0042997a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042997c: je 0x429992 */ if (fZ) goto L_00429992;
L_0042997e:; BB(0x0042997e);
    /* 0042997e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00429980: push 0x30dbd2 */ { u32 v = 0x30dbd2u; r_esp -= 4; W32(r_esp, v); }
    /* 00429985: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0042998b: call 0x5f2b20 */ r_esp -= 4; W32(r_esp, 0x429990u); f_005f2b20();
    /* 00429990: jmp 0x4299a2 */ goto L_004299a2;
L_00429992:; BB(0x00429992);
    /* 00429992: push 0x30dbd2 */ { u32 v = 0x30dbd2u; r_esp -= 4; W32(r_esp, v); }
    /* 00429997: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0042999d: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x4299a2u); f_005f2ba0();
L_004299a2:; BB(0x004299a2);
    /* 004299a2: mov esp, ebp */ r_esp = r_ebp;
    /* 004299a4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004299a5: ret  */ FN_RET(0x004298a0); r_esp += 4; return;
}

void f_004299b0(void) /* sub_4299B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004299b0);
    /* 004299b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004299b1: mov ebp, esp */ r_ebp = r_esp;
    /* 004299b3: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004299b6: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 004299b9: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004299bc: call 0x4298a0 */ r_esp -= 4; W32(r_esp, 0x4299c1u); f_004298a0();
    /* 004299c1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004299c8: jmp 0x4299d3 */ goto L_004299d3;
L_004299ca:; BB(0x004299ca);
    /* 004299ca: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004299cd: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004299d0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_004299d3:; BB(0x004299d3);
    /* 004299d3: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004299d7: jge 0x4299ea */ if ((fS==fO)) goto L_004299ea;
L_004299d9:; BB(0x004299d9);
    /* 004299d9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004299dc: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004299df: mov ecx, dword ptr [edx + ecx*4 + 4] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 004299e3: call 0x42bf10 */ r_esp -= 4; W32(r_esp, 0x4299e8u); f_0042bf10();
    /* 004299e8: jmp 0x4299ca */ goto L_004299ca;
L_004299ea:; BB(0x004299ea);
    /* 004299ea: mov eax, dword ptr [0x7906d4] */ r_eax = R32((u32)(0x7906d4u));
    /* 004299ef: mov ecx, dword ptr [eax + 0xab4] */ r_ecx = R32((u32)(r_eax+0xab4u));
    /* 004299f5: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004299f8: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004299fc: jge 0x429a1c */ if ((fS==fO)) goto L_00429a1c;
L_004299fe:; BB(0x004299fe);
    /* 004299fe: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00429a01: mov eax, dword ptr [edx + 0x160] */ r_eax = R32((u32)(r_edx+0x160u));
    /* 00429a07: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00429a0a: mov ecx, dword ptr [ecx + 0x160] */ r_ecx = R32((u32)(r_ecx+0x160u));
    /* 00429a10: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00429a12: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00429a15: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x429a17u); call_ind(t); }
    /* 00429a17: jmp 0x429b79 */ goto L_00429b79;
L_00429a1c:; BB(0x00429a1c);
    /* 00429a1c: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 00429a22: mov edx, dword ptr [ecx + 0xab4] */ r_edx = R32((u32)(r_ecx+0xab4u));
    /* 00429a28: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00429a2b: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00429a2e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00429a2f: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x429a34u); f_005dcb00();
    /* 00429a34: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00429a37: cmp dword ptr [eax + 0x49c], 0 */ {  u32 a = R32((u32)(r_eax+0x49cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00429a3e: je 0x429b79 */ if (fZ) goto L_00429b79;
L_00429a44:; BB(0x00429a44);
    /* 00429a44: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 00429a4a: mov edx, dword ptr [ecx + 0xab4] */ r_edx = R32((u32)(r_ecx+0xab4u));
    /* 00429a50: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00429a53: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00429a56: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00429a57: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x429a5cu); f_005dcb00();
    /* 00429a5c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00429a5f: mov ecx, dword ptr [eax + 0x49c] */ r_ecx = R32((u32)(r_eax+0x49cu));
    /* 00429a65: call 0x5f54c0 */ r_esp -= 4; W32(r_esp, 0x429a6au); f_005f54c0();
    /* 00429a6a: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00429a6d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00429a6f: je 0x429b79 */ if (fZ) goto L_00429b79;
L_00429a75:; BB(0x00429a75);
    /* 00429a75: mov edx, dword ptr [0x7906d4] */ r_edx = R32((u32)(0x7906d4u));
    /* 00429a7b: mov eax, dword ptr [edx + 0xab4] */ r_eax = R32((u32)(r_edx+0xab4u));
    /* 00429a81: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00429a84: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00429a87: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00429a88: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x429a8du); f_005dcb00();
    /* 00429a8d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00429a90: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00429a93: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00429a96: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 00429a99: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00429a9c: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00429a9f: call 0x646f80 */ r_esp -= 4; W32(r_esp, 0x429aa4u); f_00646f80();
    /* 00429aa4: mov ecx, eax */ r_ecx = r_eax;
    /* 00429aa6: call 0x5f53c0 */ r_esp -= 4; W32(r_esp, 0x429aabu); f_005f53c0();
    /* 00429aab: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00429aae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00429aaf: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00429ab2: mov edx, dword ptr [ecx + 0x160] */ r_edx = R32((u32)(r_ecx+0x160u));
    /* 00429ab8: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00429abb: mov ecx, dword ptr [eax + 0x160] */ r_ecx = R32((u32)(r_eax+0x160u));
    /* 00429ac1: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00429ac3: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00429ac6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x429ac8u); call_ind(t); }
    /* 00429ac8: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 00429ace: mov edx, dword ptr [ecx + 0xab4] */ r_edx = R32((u32)(r_ecx+0xab4u));
    /* 00429ad4: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 00429ad7: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00429ada: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00429adb: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x429ae0u); f_005dcb00();
    /* 00429ae0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00429ae3: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00429ae6: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00429ae9: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00429aec: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 00429aef: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00429af2: call 0x646f80 */ r_esp -= 4; W32(r_esp, 0x429af7u); f_00646f80();
    /* 00429af7: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00429afa: mov eax, dword ptr [0x7906d4] */ r_eax = R32((u32)(0x7906d4u));
    /* 00429aff: mov ecx, dword ptr [eax + 0xab4] */ r_ecx = R32((u32)(r_eax+0xab4u));
    /* 00429b05: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 00429b08: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00429b0b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00429b0c: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x429b11u); f_005dcb00();
    /* 00429b11: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00429b14: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00429b17: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00429b1a: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00429b1d: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 00429b20: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00429b23: call 0x646f80 */ r_esp -= 4; W32(r_esp, 0x429b28u); f_00646f80();
    /* 00429b28: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00429b2b: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00429b2e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00429b30: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00429b33: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 00429b36: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x429b38u); call_ind(t); }
    /* 00429b38: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00429b39: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00429b3c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00429b3e: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00429b41: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 00429b44: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x429b46u); call_ind(t); }
    /* 00429b46: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00429b47: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00429b4a: mov ecx, dword ptr [ecx + 0x160] */ r_ecx = R32((u32)(r_ecx+0x160u));
    /* 00429b50: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00429b53: mov eax, dword ptr [edx + 0x160] */ r_eax = R32((u32)(r_edx+0x160u));
    /* 00429b59: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00429b5b: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00429b5e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x429b60u); call_ind(t); }
    /* 00429b60: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00429b63: mov edx, dword ptr [ecx + 0x160] */ r_edx = R32((u32)(r_ecx+0x160u));
    /* 00429b69: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00429b6c: mov ecx, dword ptr [eax + 0x160] */ r_ecx = R32((u32)(r_eax+0x160u));
    /* 00429b72: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00429b74: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00429b77: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x429b79u); call_ind(t); }
L_00429b79:; BB(0x00429b79);
    /* 00429b79: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00429b80: jmp 0x429b8b */ goto L_00429b8b;
L_00429b82:; BB(0x00429b82);
    /* 00429b82: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00429b85: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00429b88: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00429b8b:; BB(0x00429b8b);
    /* 00429b8b: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00429b8f: jge 0x429bf9 */ if ((fS==fO)) goto L_00429bf9;
L_00429b91:; BB(0x00429b91);
    /* 00429b91: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00429b94: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00429b95: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 00429b9b: call 0x4349b0 */ r_esp -= 4; W32(r_esp, 0x429ba0u); f_004349b0();
    /* 00429ba0: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00429ba3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00429ba5: je 0x429bf7 */ if (fZ) goto L_00429bf7;
L_00429ba7:; BB(0x00429ba7);
    /* 00429ba7: mov ecx, dword ptr [0x7906d0] */ r_ecx = R32((u32)(0x7906d0u));
    /* 00429bad: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x429bb2u); f_005da7b0();
    /* 00429bb2: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00429bb5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00429bb7: je 0x429bf7 */ if (fZ) goto L_00429bf7;
L_00429bb9:; BB(0x00429bb9);
    /* 00429bb9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00429bbc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00429bbd: mov eax, dword ptr [0x7906d0] */ r_eax = R32((u32)(0x7906d0u));
    /* 00429bc2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00429bc4: mov ecx, dword ptr [0x7906d0] */ r_ecx = R32((u32)(0x7906d0u));
    /* 00429bca: mov eax, dword ptr [edx + 0x2c4] */ r_eax = R32((u32)(r_edx+0x2c4u));
    /* 00429bd0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x429bd2u); call_ind(t); }
    /* 00429bd2: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00429bd5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00429bd7: jne 0x429bf7 */ if (!fZ) goto L_00429bf7;
L_00429bd9:; BB(0x00429bd9);
    /* 00429bd9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00429bdc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00429bdd: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 00429be3: call 0x434a00 */ r_esp -= 4; W32(r_esp, 0x429be8u); f_00434a00();
    /* 00429be8: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00429beb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00429bed: je 0x429bf7 */ if (fZ) goto L_00429bf7;
L_00429bef:; BB(0x00429bef);
    /* 00429bef: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00429bf2: call 0x429e90 */ r_esp -= 4; W32(r_esp, 0x429bf7u); f_00429e90();
L_00429bf7:; BB(0x00429bf7);
    /* 00429bf7: jmp 0x429b82 */ goto L_00429b82;
L_00429bf9:; BB(0x00429bf9);
    /* 00429bf9: mov ecx, dword ptr [0x7906d0] */ r_ecx = R32((u32)(0x7906d0u));
    /* 00429bff: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x429c04u); f_005da7b0();
    /* 00429c04: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00429c07: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00429c09: je 0x429c2a */ if (fZ) goto L_00429c2a;
L_00429c0b:; BB(0x00429c0b);
    /* 00429c0b: cmp dword ptr [0x163068c], 0 */ {  u32 a = R32((u32)(0x163068cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00429c12: jne 0x429c2a */ if (!fZ) goto L_00429c2a;
L_00429c14:; BB(0x00429c14);
    /* 00429c14: mov edx, dword ptr [0x7906d0] */ r_edx = R32((u32)(0x7906d0u));
    /* 00429c1a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00429c1c: mov ecx, dword ptr [0x7906d0] */ r_ecx = R32((u32)(0x7906d0u));
    /* 00429c22: mov edx, dword ptr [eax + 0x2f0] */ r_edx = R32((u32)(r_eax+0x2f0u));
    /* 00429c28: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x429c2au); call_ind(t); }
L_00429c2a:; BB(0x00429c2a);
    /* 00429c2a: mov esp, ebp */ r_esp = r_ebp;
    /* 00429c2c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00429c2d: ret  */ FN_RET(0x004299b0); r_esp += 4; return;
}

void f_00429c30(void) /* sub_429C30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00429c30);
    /* 00429c30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00429c31: mov ebp, esp */ r_ebp = r_esp;
    /* 00429c33: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00429c36: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00429c39: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00429c40: jmp 0x429c4b */ goto L_00429c4b;
L_00429c42:; BB(0x00429c42);
    /* 00429c42: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00429c45: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00429c48: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00429c4b:; BB(0x00429c4b);
    /* 00429c4b: cmp dword ptr [ebp - 4], 0x4c */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00429c4f: jge 0x429cd5 */ if ((fS==fO)) goto L_00429cd5;
L_00429c55:; BB(0x00429c55);
    /* 00429c55: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00429c5c: jmp 0x429c67 */ goto L_00429c67;
L_00429c5e:; BB(0x00429c5e);
    /* 00429c5e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00429c61: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00429c64: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_00429c67:; BB(0x00429c67);
    /* 00429c67: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00429c6b: jge 0x429cd0 */ if ((fS==fO)) goto L_00429cd0;
L_00429c6d:; BB(0x00429c6d);
    /* 00429c6d: mov edx, dword ptr [0x7906d4] */ r_edx = R32((u32)(0x7906d4u));
    /* 00429c73: cmp dword ptr [edx + 0xae0], -1 */ {  u32 a = R32((u32)(r_edx+0xae0u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00429c7a: je 0x429cae */ if (fZ) goto L_00429cae;
L_00429c7c:; BB(0x00429c7c);
    /* 00429c7c: mov eax, dword ptr [0x7906d4] */ r_eax = R32((u32)(0x7906d4u));
    /* 00429c81: mov ecx, dword ptr [eax + 0xae0] */ r_ecx = R32((u32)(r_eax+0xae0u));
    /* 00429c87: cmp ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00429c8a: jne 0x429cac */ if (!fZ) goto L_00429cac;
L_00429c8c:; BB(0x00429c8c);
    /* 00429c8c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00429c8f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00429c90: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00429c93: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00429c94: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00429c97: call 0x429d90 */ r_esp -= 4; W32(r_esp, 0x429c9cu); f_00429d90();
    /* 00429c9c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00429c9f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00429ca0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00429ca3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00429ca4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00429ca7: call 0x429dd0 */ r_esp -= 4; W32(r_esp, 0x429cacu); f_00429dd0();
L_00429cac:; BB(0x00429cac);
    /* 00429cac: jmp 0x429cce */ goto L_00429cce;
L_00429cae:; BB(0x00429cae);
    /* 00429cae: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00429cb1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00429cb2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00429cb5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00429cb6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00429cb9: call 0x429d90 */ r_esp -= 4; W32(r_esp, 0x429cbeu); f_00429d90();
    /* 00429cbe: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00429cc1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00429cc2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00429cc5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00429cc6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00429cc9: call 0x429dd0 */ r_esp -= 4; W32(r_esp, 0x429cceu); f_00429dd0();
L_00429cce:; BB(0x00429cce);
    /* 00429cce: jmp 0x429c5e */ goto L_00429c5e;
L_00429cd0:; BB(0x00429cd0);
    /* 00429cd0: jmp 0x429c42 */ goto L_00429c42;
L_00429cd5:; BB(0x00429cd5);
    /* 00429cd5: mov esp, ebp */ r_esp = r_ebp;
    /* 00429cd7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00429cd8: ret  */ FN_RET(0x00429c30); r_esp += 4; return;
}

void f_00429ce0(void) /* sub_429CE0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00429ce0);
    /* 00429ce0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00429ce1: mov ebp, esp */ r_ebp = r_esp;
    /* 00429ce3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00429ce6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00429ce9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00429cf0: jmp 0x429cfb */ goto L_00429cfb;
L_00429cf2:; BB(0x00429cf2);
    /* 00429cf2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00429cf5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00429cf8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00429cfb:; BB(0x00429cfb);
    /* 00429cfb: cmp dword ptr [ebp - 4], 0x4c */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00429cff: jge 0x429d87 */ if ((fS==fO)) goto L_00429d87;
L_00429d05:; BB(0x00429d05);
    /* 00429d05: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00429d0c: jmp 0x429d17 */ goto L_00429d17;
L_00429d0e:; BB(0x00429d0e);
    /* 00429d0e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00429d11: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00429d14: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_00429d17:; BB(0x00429d17);
    /* 00429d17: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00429d1b: jge 0x429d82 */ if ((fS==fO)) goto L_00429d82;
L_00429d1d:; BB(0x00429d1d);
    /* 00429d1d: mov edx, dword ptr [0x7906d4] */ r_edx = R32((u32)(0x7906d4u));
    /* 00429d23: cmp dword ptr [edx + 0xae0], -1 */ {  u32 a = R32((u32)(r_edx+0xae0u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00429d2a: je 0x429d60 */ if (fZ) goto L_00429d60;
L_00429d2c:; BB(0x00429d2c);
    /* 00429d2c: mov eax, dword ptr [0x7906d4] */ r_eax = R32((u32)(0x7906d4u));
    /* 00429d31: mov ecx, dword ptr [eax + 0xae0] */ r_ecx = R32((u32)(r_eax+0xae0u));
    /* 00429d37: cmp ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00429d3a: jne 0x429d3e */ if (!fZ) goto L_00429d3e;
L_00429d3c:; BB(0x00429d3c);
    /* 00429d3c: jmp 0x429d5e */ goto L_00429d5e;
L_00429d3e:; BB(0x00429d3e);
    /* 00429d3e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00429d41: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00429d42: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00429d45: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00429d46: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00429d49: call 0x429e10 */ r_esp -= 4; W32(r_esp, 0x429d4eu); f_00429e10();
    /* 00429d4e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00429d51: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00429d52: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00429d55: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00429d56: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00429d59: call 0x429e50 */ r_esp -= 4; W32(r_esp, 0x429d5eu); f_00429e50();
L_00429d5e:; BB(0x00429d5e);
    /* 00429d5e: jmp 0x429d80 */ goto L_00429d80;
L_00429d60:; BB(0x00429d60);
    /* 00429d60: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00429d63: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00429d64: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00429d67: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00429d68: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00429d6b: call 0x429e10 */ r_esp -= 4; W32(r_esp, 0x429d70u); f_00429e10();
    /* 00429d70: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00429d73: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00429d74: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00429d77: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00429d78: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00429d7b: call 0x429e50 */ r_esp -= 4; W32(r_esp, 0x429d80u); f_00429e50();
L_00429d80:; BB(0x00429d80);
    /* 00429d80: jmp 0x429d0e */ goto L_00429d0e;
L_00429d82:; BB(0x00429d82);
    /* 00429d82: jmp 0x429cf2 */ goto L_00429cf2;
L_00429d87:; BB(0x00429d87);
    /* 00429d87: mov esp, ebp */ r_esp = r_ebp;
    /* 00429d89: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00429d8a: ret  */ FN_RET(0x00429ce0); r_esp += 4; return;
}

void f_00429d90(void) /* sub_429D90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00429d90);
    /* 00429d90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00429d91: mov ebp, esp */ r_ebp = r_esp;
    /* 00429d93: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00429d96: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00429d99: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00429d9c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00429d9f: mov edx, dword ptr [ecx + eax*4 + 0x14] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x14u));
    /* 00429da3: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00429da6: mov ecx, dword ptr [edx + eax*4 + 0xafc] */ r_ecx = R32((u32)(r_edx+r_eax*4+0xafcu));
    /* 00429dad: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00429db0: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00429db4: jne 0x429db8 */ if (!fZ) goto L_00429db8;
L_00429db6:; BB(0x00429db6);
    /* 00429db6: jmp 0x429dc5 */ goto L_00429dc5;
L_00429db8:; BB(0x00429db8);
    /* 00429db8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00429dbb: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00429dbd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00429dc0: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 00429dc3: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x429dc5u); call_ind(t); }
L_00429dc5:; BB(0x00429dc5);
    /* 00429dc5: mov esp, ebp */ r_esp = r_ebp;
    /* 00429dc7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00429dc8: ret 8 */ FN_RET(0x00429d90); r_esp += 12; return;
}

void f_00429dd0(void) /* sub_429DD0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00429dd0);
    /* 00429dd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00429dd1: mov ebp, esp */ r_ebp = r_esp;
    /* 00429dd3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00429dd6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00429dd9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00429ddc: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00429ddf: mov edx, dword ptr [ecx + eax*4 + 0x14] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x14u));
    /* 00429de3: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00429de6: mov ecx, dword ptr [edx + eax*4 + 0xaec] */ r_ecx = R32((u32)(r_edx+r_eax*4+0xaecu));
    /* 00429ded: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00429df0: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00429df4: jne 0x429df8 */ if (!fZ) goto L_00429df8;
L_00429df6:; BB(0x00429df6);
    /* 00429df6: jmp 0x429e05 */ goto L_00429e05;
L_00429df8:; BB(0x00429df8);
    /* 00429df8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00429dfb: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00429dfd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00429e00: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 00429e03: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x429e05u); call_ind(t); }
L_00429e05:; BB(0x00429e05);
    /* 00429e05: mov esp, ebp */ r_esp = r_ebp;
    /* 00429e07: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00429e08: ret 8 */ FN_RET(0x00429dd0); r_esp += 12; return;
}

void f_00429e10(void) /* sub_429E10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00429e10);
    /* 00429e10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00429e11: mov ebp, esp */ r_ebp = r_esp;
    /* 00429e13: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00429e16: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00429e19: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00429e1c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00429e1f: mov edx, dword ptr [ecx + eax*4 + 0x14] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x14u));
    /* 00429e23: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00429e26: mov ecx, dword ptr [edx + eax*4 + 0xafc] */ r_ecx = R32((u32)(r_edx+r_eax*4+0xafcu));
    /* 00429e2d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00429e30: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00429e34: jne 0x429e38 */ if (!fZ) goto L_00429e38;
L_00429e36:; BB(0x00429e36);
    /* 00429e36: jmp 0x429e45 */ goto L_00429e45;
L_00429e38:; BB(0x00429e38);
    /* 00429e38: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00429e3b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00429e3d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00429e40: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 00429e43: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x429e45u); call_ind(t); }
L_00429e45:; BB(0x00429e45);
    /* 00429e45: mov esp, ebp */ r_esp = r_ebp;
    /* 00429e47: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00429e48: ret 8 */ FN_RET(0x00429e10); r_esp += 12; return;
}

void f_00429e50(void) /* sub_429E50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00429e50);
    /* 00429e50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00429e51: mov ebp, esp */ r_ebp = r_esp;
    /* 00429e53: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00429e56: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00429e59: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00429e5c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00429e5f: mov edx, dword ptr [ecx + eax*4 + 0x14] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x14u));
    /* 00429e63: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00429e66: mov ecx, dword ptr [edx + eax*4 + 0xaec] */ r_ecx = R32((u32)(r_edx+r_eax*4+0xaecu));
    /* 00429e6d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00429e70: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00429e74: jne 0x429e78 */ if (!fZ) goto L_00429e78;
L_00429e76:; BB(0x00429e76);
    /* 00429e76: jmp 0x429e85 */ goto L_00429e85;
L_00429e78:; BB(0x00429e78);
    /* 00429e78: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00429e7b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00429e7d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00429e80: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 00429e83: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x429e85u); call_ind(t); }
L_00429e85:; BB(0x00429e85);
    /* 00429e85: mov esp, ebp */ r_esp = r_ebp;
    /* 00429e87: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00429e88: ret 8 */ FN_RET(0x00429e50); r_esp += 12; return;
}

void f_00429e90(void) /* sub_429E90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00429e90);
    /* 00429e90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00429e91: mov ebp, esp */ r_ebp = r_esp;
    /* 00429e93: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00429e96: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00429e99: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00429e9c: call 0x429f20 */ r_esp -= 4; W32(r_esp, 0x429ea1u); f_00429f20();
    /* 00429ea1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00429ea8: jmp 0x429eb3 */ goto L_00429eb3;
L_00429eaa:; BB(0x00429eaa);
    /* 00429eaa: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00429ead: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00429eb0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00429eb3:; BB(0x00429eb3);
    /* 00429eb3: cmp dword ptr [ebp - 4], 0x4c */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00429eb7: jge 0x429f16 */ if ((fS==fO)) goto L_00429f16;
L_00429eb9:; BB(0x00429eb9);
    /* 00429eb9: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00429ec0: jmp 0x429ecb */ goto L_00429ecb;
L_00429ec2:; BB(0x00429ec2);
    /* 00429ec2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00429ec5: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00429ec8: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_00429ecb:; BB(0x00429ecb);
    /* 00429ecb: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00429ecf: jge 0x429f14 */ if ((fS==fO)) goto L_00429f14;
L_00429ed1:; BB(0x00429ed1);
    /* 00429ed1: mov edx, dword ptr [0x7906d4] */ r_edx = R32((u32)(0x7906d4u));
    /* 00429ed7: cmp dword ptr [edx + 0xae0], -1 */ {  u32 a = R32((u32)(r_edx+0xae0u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00429ede: je 0x429f02 */ if (fZ) goto L_00429f02;
L_00429ee0:; BB(0x00429ee0);
    /* 00429ee0: mov eax, dword ptr [0x7906d4] */ r_eax = R32((u32)(0x7906d4u));
    /* 00429ee5: mov ecx, dword ptr [eax + 0xae0] */ r_ecx = R32((u32)(r_eax+0xae0u));
    /* 00429eeb: cmp ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00429eee: jne 0x429f00 */ if (!fZ) goto L_00429f00;
L_00429ef0:; BB(0x00429ef0);
    /* 00429ef0: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00429ef3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00429ef4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00429ef7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00429ef8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00429efb: call 0x42a050 */ r_esp -= 4; W32(r_esp, 0x429f00u); f_0042a050();
L_00429f00:; BB(0x00429f00);
    /* 00429f00: jmp 0x429f12 */ goto L_00429f12;
L_00429f02:; BB(0x00429f02);
    /* 00429f02: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00429f05: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00429f06: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00429f09: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00429f0a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00429f0d: call 0x42a050 */ r_esp -= 4; W32(r_esp, 0x429f12u); f_0042a050();
L_00429f12:; BB(0x00429f12);
    /* 00429f12: jmp 0x429ec2 */ goto L_00429ec2;
L_00429f14:; BB(0x00429f14);
    /* 00429f14: jmp 0x429eaa */ goto L_00429eaa;
L_00429f16:; BB(0x00429f16);
    /* 00429f16: mov esp, ebp */ r_esp = r_ebp;
    /* 00429f18: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00429f19: ret  */ FN_RET(0x00429e90); r_esp += 4; return;
}

void f_00429f20(void) /* sub_429F20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00429f20);
    /* 00429f20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00429f21: mov ebp, esp */ r_ebp = r_esp;
    /* 00429f23: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00429f26: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00429f29: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00429f30: jmp 0x429f3b */ goto L_00429f3b;
L_00429f32:; BB(0x00429f32);
    /* 00429f32: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00429f35: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00429f38: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00429f3b:; BB(0x00429f3b);
    /* 00429f3b: cmp dword ptr [ebp - 4], 0x4c */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00429f3f: jge 0x429f52 */ if ((fS==fO)) goto L_00429f52;
L_00429f41:; BB(0x00429f41);
    /* 00429f41: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00429f44: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00429f47: mov ecx, dword ptr [edx + ecx*4 + 0x14] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x14u));
    /* 00429f4b: call 0x5cc3e0 */ r_esp -= 4; W32(r_esp, 0x429f50u); f_005cc3e0();
    /* 00429f50: jmp 0x429f32 */ goto L_00429f32;
L_00429f52:; BB(0x00429f52);
    /* 00429f52: mov esp, ebp */ r_esp = r_ebp;
    /* 00429f54: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00429f55: ret  */ FN_RET(0x00429f20); r_esp += 4; return;
}

void f_00429f60(void) /* sub_429F60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00429f60);
    /* 00429f60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00429f61: mov ebp, esp */ r_ebp = r_esp;
    /* 00429f63: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00429f66: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00429f69: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00429f70: jmp 0x429f7b */ goto L_00429f7b;
L_00429f72:; BB(0x00429f72);
    /* 00429f72: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00429f75: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00429f78: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00429f7b:; BB(0x00429f7b);
    /* 00429f7b: cmp dword ptr [ebp - 4], 0x4c */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00429f7f: jge 0x429f96 */ if ((fS==fO)) goto L_00429f96;
L_00429f81:; BB(0x00429f81);
    /* 00429f81: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00429f84: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00429f85: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00429f88: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00429f8b: mov ecx, dword ptr [eax + edx*4 + 0x14] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x14u));
    /* 00429f8f: call 0x42cb70 */ r_esp -= 4; W32(r_esp, 0x429f94u); f_0042cb70();
    /* 00429f94: jmp 0x429f72 */ goto L_00429f72;
L_00429f96:; BB(0x00429f96);
    /* 00429f96: mov esp, ebp */ r_esp = r_ebp;
    /* 00429f98: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00429f99: ret 4 */ FN_RET(0x00429f60); r_esp += 8; return;
}

void f_00429fa0(void) /* sub_429FA0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00429fa0);
    /* 00429fa0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00429fa1: mov ebp, esp */ r_ebp = r_esp;
    /* 00429fa3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00429fa6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00429fa9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00429fb0: jmp 0x429fbb */ goto L_00429fbb;
L_00429fb2:; BB(0x00429fb2);
    /* 00429fb2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00429fb5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00429fb8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00429fbb:; BB(0x00429fbb);
    /* 00429fbb: cmp dword ptr [ebp - 4], 0x4c */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00429fbf: jge 0x429fd2 */ if ((fS==fO)) goto L_00429fd2;
L_00429fc1:; BB(0x00429fc1);
    /* 00429fc1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00429fc4: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00429fc7: mov ecx, dword ptr [edx + ecx*4 + 0x14] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x14u));
    /* 00429fcb: call 0x42cbd0 */ r_esp -= 4; W32(r_esp, 0x429fd0u); f_0042cbd0();
    /* 00429fd0: jmp 0x429fb2 */ goto L_00429fb2;
L_00429fd2:; BB(0x00429fd2);
    /* 00429fd2: mov esp, ebp */ r_esp = r_ebp;
    /* 00429fd4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00429fd5: ret  */ FN_RET(0x00429fa0); r_esp += 4; return;
}

