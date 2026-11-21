#include "protos.h"

void f_005f4070(void) /* sub_5F4070 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f4070);
    /* 005f4070: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f4071: mov ebp, esp */ r_ebp = r_esp;
    /* 005f4073: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f4076: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005f4079: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f407c: call 0x5f41f0 */ r_esp -= 4; W32(r_esp, 0x5f4081u); f_005f41f0();
    /* 005f4081: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005f4084: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f4088: je 0x5f409d */ if (fZ) goto L_005f409d;
L_005f408a:; BB(0x005f408a);
    /* 005f408a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f408d: movzx ecx, byte ptr [eax + 0x1b1] */ r_ecx = (u32)R8((u32)(r_eax+0x1b1u));
    /* 005f4094: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f4096: jne 0x5f409d */ if (!fZ) goto L_005f409d;
L_005f4098:; BB(0x005f4098);
    /* 005f4098: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f409b: jmp 0x5f40d5 */ goto L_005f40d5;
L_005f409d:; BB(0x005f409d);
    /* 005f409d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f40a0: call 0x5f3fe0 */ r_esp -= 4; W32(r_esp, 0x5f40a5u); f_005f3fe0();
    /* 005f40a5: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005f40a8: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f40ac: je 0x5f40c1 */ if (fZ) goto L_005f40c1;
L_005f40ae:; BB(0x005f40ae);
    /* 005f40ae: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f40b1: movzx eax, byte ptr [edx + 0x1b1] */ r_eax = (u32)R8((u32)(r_edx+0x1b1u));
    /* 005f40b8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f40ba: jne 0x5f40c1 */ if (!fZ) goto L_005f40c1;
L_005f40bc:; BB(0x005f40bc);
    /* 005f40bc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f40bf: jmp 0x5f40d5 */ goto L_005f40d5;
L_005f40c1:; BB(0x005f40c1);
    /* 005f40c1: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005f40c4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f40c5: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005f40c8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f40c9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f40cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f40cd: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f40d0: call 0x5f40e0 */ r_esp -= 4; W32(r_esp, 0x5f40d5u); f_005f40e0();
L_005f40d5:; BB(0x005f40d5);
    /* 005f40d5: mov esp, ebp */ r_esp = r_ebp;
    /* 005f40d7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f40d8: ret 0xc */ FN_RET(0x005f4070); r_esp += 16; return;
}

void f_005f40e0(void) /* sub_5F40E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f40e0);
    /* 005f40e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f40e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005f40e3: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f40e6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005f40e7: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005f40ea: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005f40f1: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f40f4: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f40f7: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x5f40fcu); f_0060c9a0();
    /* 005f40fc: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005f40ff: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005f4102: jmp 0x5f410d */ goto L_005f410d;
L_005f4104:; BB(0x005f4104);
    /* 005f4104: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f4107: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005f410a: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005f410d:; BB(0x005f410d);
    /* 005f410d: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f4111: jl 0x5f41b2 */ if ((fS!=fO)) goto L_005f41b2;
L_005f4117:; BB(0x005f4117);
    /* 005f4117: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f411a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f411b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f411e: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f4121: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x5f4126u); f_0060ca40();
    /* 005f4126: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005f4129: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f412c: mov eax, dword ptr [edx + 0x1a8] */ r_eax = R32((u32)(r_edx+0x1a8u));
    /* 005f4132: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005f4135: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f4138: cmp ecx, dword ptr [ebp + 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f413b: jne 0x5f414b */ if (!fZ) goto L_005f414b;
L_005f413d:; BB(0x005f413d);
    /* 005f413d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f4140: movzx eax, byte ptr [edx + 0x1b1] */ r_eax = (u32)R8((u32)(r_edx+0x1b1u));
    /* 005f4147: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f4149: je 0x5f414d */ if (fZ) goto L_005f414d;
L_005f414b:; BB(0x005f414b);
    /* 005f414b: jmp 0x5f4104 */ goto L_005f4104;
L_005f414d:; BB(0x005f414d);
    /* 005f414d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f4150: call 0x5f8910 */ r_esp -= 4; W32(r_esp, 0x5f4155u); f_005f8910();
    /* 005f4155: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005f4158: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f415a: je 0x5f41ad */ if (fZ) goto L_005f41ad;
L_005f415c:; BB(0x005f415c);
    /* 005f415c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f415f: call 0x5f84d0 */ r_esp -= 4; W32(r_esp, 0x5f4164u); f_005f84d0();
    /* 005f4164: cmp dword ptr [ebp + 8], eax */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f4167: jl 0x5f41ad */ if ((fS!=fO)) goto L_005f41ad;
L_005f4169:; BB(0x005f4169);
    /* 005f4169: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f416c: call 0x5f84d0 */ r_esp -= 4; W32(r_esp, 0x5f4171u); f_005f84d0();
    /* 005f4171: mov esi, eax */ r_esi = r_eax;
    /* 005f4173: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f4176: call 0x5f8550 */ r_esp -= 4; W32(r_esp, 0x5f417bu); f_005f8550();
    /* 005f417b: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005f417d: cmp dword ptr [ebp + 8], esi */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f4180: jg 0x5f41ad */ if ((!fZ&&fS==fO)) goto L_005f41ad;
L_005f4182:; BB(0x005f4182);
    /* 005f4182: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f4185: call 0x5f84f0 */ r_esp -= 4; W32(r_esp, 0x5f418au); f_005f84f0();
    /* 005f418a: cmp dword ptr [ebp + 0xc], eax */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f418d: jl 0x5f41ad */ if ((fS!=fO)) goto L_005f41ad;
L_005f418f:; BB(0x005f418f);
    /* 005f418f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f4192: call 0x5f84f0 */ r_esp -= 4; W32(r_esp, 0x5f4197u); f_005f84f0();
    /* 005f4197: mov esi, eax */ r_esi = r_eax;
    /* 005f4199: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f419c: call 0x5f8570 */ r_esp -= 4; W32(r_esp, 0x5f41a1u); f_005f8570();
    /* 005f41a1: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005f41a3: cmp dword ptr [ebp + 0xc], esi */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f41a6: jg 0x5f41ad */ if ((!fZ&&fS==fO)) goto L_005f41ad;
L_005f41a8:; BB(0x005f41a8);
    /* 005f41a8: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f41ab: jmp 0x5f41b5 */ goto L_005f41b5;
L_005f41ad:; BB(0x005f41ad);
    /* 005f41ad: jmp 0x5f4104 */ goto L_005f4104;
L_005f41b2:; BB(0x005f41b2);
    /* 005f41b2: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
L_005f41b5:; BB(0x005f41b5);
    /* 005f41b5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005f41b6: mov esp, ebp */ r_esp = r_ebp;
    /* 005f41b8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f41b9: ret 0xc */ FN_RET(0x005f40e0); r_esp += 16; return;
}

void f_005f41c0(void) /* sub_5F41C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f41c0);
    /* 005f41c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f41c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005f41c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f41c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005f41c7: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f41cb: je 0x5f41dd */ if (fZ) goto L_005f41dd;
L_005f41cd:; BB(0x005f41cd);
    /* 005f41cd: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f41d0: movzx ecx, byte ptr [eax + 0x1b1] */ r_ecx = (u32)R8((u32)(r_eax+0x1b1u));
    /* 005f41d7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f41d9: je 0x5f41dd */ if (fZ) goto L_005f41dd;
L_005f41db:; BB(0x005f41db);
    /* 005f41db: jmp 0x5f41e6 */ goto L_005f41e6;
L_005f41dd:; BB(0x005f41dd);
    /* 005f41dd: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f41e0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f41e3: mov dword ptr [edx + 0x40], eax */ W32((u32)(r_edx+0x40u), r_eax);
L_005f41e6:; BB(0x005f41e6);
    /* 005f41e6: mov esp, ebp */ r_esp = r_ebp;
    /* 005f41e8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f41e9: ret 4 */ FN_RET(0x005f41c0); r_esp += 8; return;
}

void f_005f4210(void) /* sub_5F4210 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f4210);
    /* 005f4210: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f4211: mov ebp, esp */ r_ebp = r_esp;
    /* 005f4213: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f4216: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005f4217: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005f421a: cmp dword ptr [ebp + 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0x28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f421e: je 0x5f4229 */ if (fZ) goto L_005f4229;
L_005f4220:; BB(0x005f4220);
    /* 005f4220: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 005f4223: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
L_005f4229:; BB(0x005f4229);
    /* 005f4229: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f422c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005f422e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f4231: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 005f4234: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f4236u); call_ind(t); }
    /* 005f4236: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005f4239: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f423b: jne 0x5f425f */ if (!fZ) goto L_005f425f;
L_005f423d:; BB(0x005f423d);
    /* 005f423d: cmp dword ptr [ebp + 0x18], 0xb */ {  u32 a = R32((u32)(r_ebp+0x18u)); u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f4241: je 0x5f425f */ if (fZ) goto L_005f425f;
L_005f4243:; BB(0x005f4243);
    /* 005f4243: cmp dword ptr [ebp + 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f4247: je 0x5f4258 */ if (fZ) goto L_005f4258;
L_005f4249:; BB(0x005f4249);
    /* 005f4249: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f424b: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005f424e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005f4250: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005f4253: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 005f4256: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5f4258u); call_ind(t); }
L_005f4258:; BB(0x005f4258);
    /* 005f4258: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005f425a: jmp 0x5f43ce */ goto L_005f43ce;
L_005f425f:; BB(0x005f425f);
    /* 005f425f: cmp dword ptr [ebp + 8], 0x2033504d */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x2033504du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f4266: jne 0x5f4299 */ if (!fZ) goto L_005f4299;
L_005f4268:; BB(0x005f4268);
    /* 005f4268: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 005f426b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f426c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f426d: fld dword ptr [ebp + 0x24] */ FPUSH(R_F32((u32)(r_ebp+0x24u)));
    /* 005f4270: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005f4273: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f4274: fld dword ptr [ebp + 0x20] */ FPUSH(R_F32((u32)(r_ebp+0x20u)));
    /* 005f4277: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005f427a: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 005f427d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f427e: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 005f4281: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f4282: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005f4285: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f4286: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 005f428c: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 005f428f: call 0x608cf0 */ r_esp -= 4; W32(r_esp, 0x5f4294u); f_00608cf0();
    /* 005f4294: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005f4297: jmp 0x5f4304 */ goto L_005f4304;
L_005f4299:; BB(0x005f4299);
    /* 005f4299: cmp dword ptr [ebp + 8], 0x2047474f */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x2047474fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f42a0: jne 0x5f42d2 */ if (!fZ) goto L_005f42d2;
L_005f42a2:; BB(0x005f42a2);
    /* 005f42a2: mov edx, dword ptr [ebp + 0x28] */ r_edx = R32((u32)(r_ebp+0x28u));
    /* 005f42a5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f42a6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f42a7: fld dword ptr [ebp + 0x24] */ FPUSH(R_F32((u32)(r_ebp+0x24u)));
    /* 005f42aa: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005f42ad: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f42ae: fld dword ptr [ebp + 0x20] */ FPUSH(R_F32((u32)(r_ebp+0x20u)));
    /* 005f42b1: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005f42b4: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 005f42b7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f42b8: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 005f42bb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f42bc: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005f42bf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f42c0: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 005f42c5: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005f42c8: call 0x608c30 */ r_esp -= 4; W32(r_esp, 0x5f42cdu); f_00608c30();
    /* 005f42cd: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005f42d0: jmp 0x5f4304 */ goto L_005f4304;
L_005f42d2:; BB(0x005f42d2);
    /* 005f42d2: mov ecx, dword ptr [ebp + 0x28] */ r_ecx = R32((u32)(r_ebp+0x28u));
    /* 005f42d5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f42d6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f42d7: fld dword ptr [ebp + 0x24] */ FPUSH(R_F32((u32)(r_ebp+0x24u)));
    /* 005f42da: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005f42dd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f42de: fld dword ptr [ebp + 0x20] */ FPUSH(R_F32((u32)(r_ebp+0x20u)));
    /* 005f42e1: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005f42e4: mov edx, dword ptr [ebp + 0x1c] */ r_edx = R32((u32)(r_ebp+0x1cu));
    /* 005f42e7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f42e8: mov al, byte ptr [ebp + 0x14] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x14u))) & 0xffu);
    /* 005f42eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f42ec: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 005f42ef: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f42f0: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005f42f3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f42f4: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 005f42f9: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005f42fc: call 0x608b50 */ r_esp -= 4; W32(r_esp, 0x5f4301u); f_00608b50();
    /* 005f4301: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_005f4304:; BB(0x005f4304);
    /* 005f4304: movzx ecx, byte ptr [0x795fb1] */ r_ecx = (u32)R8((u32)(0x795fb1u));
    /* 005f430b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f430d: je 0x5f4340 */ if (fZ) goto L_005f4340;
L_005f430f:; BB(0x005f430f);
    /* 005f430f: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 005f4312: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f4313: movzx eax, byte ptr [ebp + 0x14] */ r_eax = (u32)R8((u32)(r_ebp+0x14u));
    /* 005f4317: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f4318: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005f431b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f431c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f431f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f4320: push 0x6d6850 */ { u32 v = 0x6d6850u; r_esp -= 4; W32(r_esp, v); }
    /* 005f4325: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x5f432au); f_0062fde0();
    /* 005f432a: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005f432d: cmp dword ptr [ebp - 8], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f4331: jne 0x5f4340 */ if (!fZ) goto L_005f4340;
L_005f4333:; BB(0x005f4333);
    /* 005f4333: push 0x6d6834 */ { u32 v = 0x6d6834u; r_esp -= 4; W32(r_esp, v); }
    /* 005f4338: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x5f433du); f_0062fde0();
    /* 005f433d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005f4340:; BB(0x005f4340);
    /* 005f4340: cmp dword ptr [ebp - 8], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f4344: jne 0x5f435f */ if (!fZ) goto L_005f435f;
L_005f4346:; BB(0x005f4346);
    /* 005f4346: cmp dword ptr [ebp + 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f434a: je 0x5f435b */ if (fZ) goto L_005f435b;
L_005f434c:; BB(0x005f434c);
    /* 005f434c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f434e: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005f4351: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005f4353: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005f4356: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 005f4359: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f435bu); call_ind(t); }
L_005f435b:; BB(0x005f435b);
    /* 005f435b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005f435d: jmp 0x5f43ce */ goto L_005f43ce;
L_005f435f:; BB(0x005f435f);
    /* 005f435f: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005f4362: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f4363: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f4366: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f4367: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 005f436c: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005f436f: call 0x608930 */ r_esp -= 4; W32(r_esp, 0x5f4374u); f_00608930();
    /* 005f4374: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f4377: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f4378: mov edx, dword ptr [0x7960d8] */ r_edx = R32((u32)(0x7960d8u));
    /* 005f437e: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005f4381: call 0x608890 */ r_esp -= 4; W32(r_esp, 0x5f4386u); f_00608890();
    /* 005f4386: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005f4389: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f438c: imul eax, eax, 0x3c */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3cu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005f438f: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005f4390: mov ecx, 0x3e8 */ r_ecx = 0x3e8u;
    /* 005f4395: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005f4395, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005f4395, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005f4397: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005f439a: cmp dword ptr [ebp + 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f439e: je 0x5f43cb */ if (fZ) goto L_005f43cb;
L_005f43a0:; BB(0x005f43a0);
    /* 005f43a0: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 005f43a6: call 0x5f3e70 */ r_esp -= 4; W32(r_esp, 0x5f43abu); f_005f3e70();
    /* 005f43ab: mov esi, eax */ r_esi = r_eax;
    /* 005f43ad: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 005f43b3: call 0x5f3e50 */ r_esp -= 4; W32(r_esp, 0x5f43b8u); f_005f3e50();
    /* 005f43b8: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 005f43ba: add esi, dword ptr [ebp - 4] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005f43bd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005f43be: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005f43c1: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005f43c3: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005f43c6: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 005f43c9: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5f43cbu); call_ind(t); }
L_005f43cb:; BB(0x005f43cb);
    /* 005f43cb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
L_005f43ce:; BB(0x005f43ce);
    /* 005f43ce: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005f43cf: mov esp, ebp */ r_esp = r_ebp;
    /* 005f43d1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f43d2: ret 0x24 */ FN_RET(0x005f4210); r_esp += 40; return;
}

void f_005f4460(void) /* sub_5F4460 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f4460);
    /* 005f4460: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f4461: mov ebp, esp */ r_ebp = r_esp;
    /* 005f4463: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f4466: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005f4469: cmp dword ptr [ebp + 8], -1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f446d: je 0x5f4488 */ if (fZ) goto L_005f4488;
L_005f446f:; BB(0x005f446f);
    /* 005f446f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f4472: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f4473: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 005f4479: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 005f447c: call 0x609650 */ r_esp -= 4; W32(r_esp, 0x5f4481u); f_00609650();
    /* 005f4481: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005f4484: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f4486: je 0x5f448a */ if (fZ) goto L_005f448a;
L_005f4488:; BB(0x005f4488);
    /* 005f4488: jmp 0x5f44cf */ goto L_005f44cf;
L_005f448a:; BB(0x005f448a);
    /* 005f448a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f448d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f448e: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 005f4494: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 005f4497: call 0x6088e0 */ r_esp -= 4; W32(r_esp, 0x5f449cu); f_006088e0();
    /* 005f449c: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005f449f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005f44a1: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005f44a4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f44a5: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 005f44aa: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005f44ad: call 0x609720 */ r_esp -= 4; W32(r_esp, 0x5f44b2u); f_00609720();
    /* 005f44b2: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f44b6: je 0x5f44cf */ if (fZ) goto L_005f44cf;
L_005f44b8:; BB(0x005f44b8);
    /* 005f44b8: movzx ecx, byte ptr [ebp + 0xc] */ r_ecx = (u32)R8((u32)(r_ebp+0xcu));
    /* 005f44bc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f44be: je 0x5f44cf */ if (fZ) goto L_005f44cf;
L_005f44c0:; BB(0x005f44c0);
    /* 005f44c0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f44c2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f44c5: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005f44c7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f44ca: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 005f44cd: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5f44cfu); call_ind(t); }
L_005f44cf:; BB(0x005f44cf);
    /* 005f44cf: mov esp, ebp */ r_esp = r_ebp;
    /* 005f44d1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f44d2: ret 8 */ FN_RET(0x005f4460); r_esp += 12; return;
}

void f_005f44e0(void) /* sub_5F44E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f44e0);
    /* 005f44e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f44e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005f44e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f44e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005f44e7: mov al, byte ptr [ebp + 0xc] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xcu))) & 0xffu);
    /* 005f44ea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f44eb: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005f44ee: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f44ef: mov edx, dword ptr [0x7960d8] */ r_edx = R32((u32)(0x7960d8u));
    /* 005f44f5: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005f44f8: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x5f44fdu); f_00608470();
    /* 005f44fd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f44fe: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f4501: call 0x5f4460 */ r_esp -= 4; W32(r_esp, 0x5f4506u); f_005f4460();
    /* 005f4506: mov esp, ebp */ r_esp = r_ebp;
    /* 005f4508: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f4509: ret 8 */ FN_RET(0x005f44e0); r_esp += 12; return;
}

void f_005f4510(void) /* sub_5F4510 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f4510);
    /* 005f4510: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f4511: mov ebp, esp */ r_ebp = r_esp;
    /* 005f4513: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f4514: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005f4517: mov al, byte ptr [ebp + 0xc] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xcu))) & 0xffu);
    /* 005f451a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f451b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005f451e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f451f: mov edx, dword ptr [0x7960d8] */ r_edx = R32((u32)(0x7960d8u));
    /* 005f4525: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005f4528: call 0x608410 */ r_esp -= 4; W32(r_esp, 0x5f452du); f_00608410();
    /* 005f452d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f452e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f4531: call 0x5f4460 */ r_esp -= 4; W32(r_esp, 0x5f4536u); f_005f4460();
    /* 005f4536: mov esp, ebp */ r_esp = r_ebp;
    /* 005f4538: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f4539: ret 8 */ FN_RET(0x005f4510); r_esp += 12; return;
}

void f_005f4540(void) /* sub_5F4540 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f4540);
    /* 005f4540: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f4541: mov ebp, esp */ r_ebp = r_esp;
    /* 005f4543: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f4544: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005f4547: cmp dword ptr [ebp + 8], -1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f454b: jne 0x5f4551 */ if (!fZ) goto L_005f4551;
L_005f454d:; BB(0x005f454d);
    /* 005f454d: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005f454f: jmp 0x5f4563 */ goto L_005f4563;
L_005f4551:; BB(0x005f4551);
    /* 005f4551: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f4554: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f4555: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 005f455b: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 005f455e: call 0x609b80 */ r_esp -= 4; W32(r_esp, 0x5f4563u); f_00609b80();
L_005f4563:; BB(0x005f4563);
    /* 005f4563: mov esp, ebp */ r_esp = r_ebp;
    /* 005f4565: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f4566: ret 4 */ FN_RET(0x005f4540); r_esp += 8; return;
}

void f_005f4570(void) /* sub_5F4570 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f4570);
    /* 005f4570: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f4571: mov ebp, esp */ r_ebp = r_esp;
    /* 005f4573: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f4574: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005f4577: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f457a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f457b: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 005f4581: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 005f4584: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x5f4589u); f_00608470();
    /* 005f4589: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f458a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f458d: call 0x5f4540 */ r_esp -= 4; W32(r_esp, 0x5f4592u); f_005f4540();
    /* 005f4592: mov esp, ebp */ r_esp = r_ebp;
    /* 005f4594: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f4595: ret 4 */ FN_RET(0x005f4570); r_esp += 8; return;
}

void f_005f45a0(void) /* sub_5F45A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f45a0);
    /* 005f45a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f45a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005f45a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f45a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005f45a7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f45aa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f45ab: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 005f45b1: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 005f45b4: call 0x608410 */ r_esp -= 4; W32(r_esp, 0x5f45b9u); f_00608410();
    /* 005f45b9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f45ba: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f45bd: call 0x5f4540 */ r_esp -= 4; W32(r_esp, 0x5f45c2u); f_005f4540();
    /* 005f45c2: mov esp, ebp */ r_esp = r_ebp;
    /* 005f45c4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f45c5: ret 4 */ FN_RET(0x005f45a0); r_esp += 8; return;
}

void f_005f45d0(void) /* sub_5F45D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f45d0);
    /* 005f45d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f45d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005f45d3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f45d6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005f45d9: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 005f45de: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005f45e1: call 0x609ca0 */ r_esp -= 4; W32(r_esp, 0x5f45e6u); f_00609ca0();
    /* 005f45e6: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005f45e9: jmp 0x5f45fc */ goto L_005f45fc;
L_005f45eb:; BB(0x005f45eb);
    /* 005f45eb: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 005f45f1: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 005f45f4: call 0x609ca0 */ r_esp -= 4; W32(r_esp, 0x5f45f9u); f_00609ca0();
    /* 005f45f9: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005f45fc:; BB(0x005f45fc);
    /* 005f45fc: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f4600: je 0x5f4614 */ if (fZ) goto L_005f4614;
L_005f4602:; BB(0x005f4602);
    /* 005f4602: mov dl, byte ptr [ebp + 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 005f4605: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f4606: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f4609: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f460a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f460d: call 0x5f4510 */ r_esp -= 4; W32(r_esp, 0x5f4612u); f_005f4510();
    /* 005f4612: jmp 0x5f45eb */ goto L_005f45eb;
L_005f4614:; BB(0x005f4614);
    /* 005f4614: mov esp, ebp */ r_esp = r_ebp;
    /* 005f4616: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f4617: ret 4 */ FN_RET(0x005f45d0); r_esp += 8; return;
}

void f_005f4620(void) /* sub_5F4620 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f4620);
    /* 005f4620: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f4621: mov ebp, esp */ r_ebp = r_esp;
    /* 005f4623: sub esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f4626: mov dword ptr [ebp - 0x5c], ecx */ W32((u32)(r_ebp+0xffffffa4u), r_ecx);
    /* 005f4629: mov dword ptr [ebp - 0x50], 0xffffffff */ W32((u32)(r_ebp+0xffffffb0u), 0xffffffffu);
    /* 005f4630: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
    /* 005f4637: jmp 0x5f4642 */ goto L_005f4642;
L_005f4639:; BB(0x005f4639);
    /* 005f4639: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005f463c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005f463f: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
L_005f4642:; BB(0x005f4642);
    /* 005f4642: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005f4645: imul ecx, ecx, 0x50 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x50u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005f4648: cmp dword ptr [ecx + 0x76d6f0], -1 */ {  u32 a = R32((u32)(r_ecx+0x76d6f0u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f464f: je 0x5f46df */ if (fZ) goto L_005f46df;
L_005f4655:; BB(0x005f4655);
    /* 005f4655: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005f4658: imul edx, edx, 0x50 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x50u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005f465b: mov eax, dword ptr [edx + 0x76d6f0] */ r_eax = R32((u32)(r_edx+0x76d6f0u));
    /* 005f4661: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f4664: jne 0x5f46da */ if (!fZ) goto L_005f46da;
L_005f4666:; BB(0x005f4666);
    /* 005f4666: mov dword ptr [ebp - 0x58], 1 */ W32((u32)(r_ebp+0xffffffa8u), 0x1u);
    /* 005f466d: jmp 0x5f4678 */ goto L_005f4678;
L_005f466f:; BB(0x005f466f);
    /* 005f466f: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005f4672: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f4675: mov dword ptr [ebp - 0x58], ecx */ W32((u32)(r_ebp+0xffffffa8u), r_ecx);
L_005f4678:; BB(0x005f4678);
    /* 005f4678: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005f467b: imul edx, edx, 0x50 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x50u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005f467e: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 005f4681: cmp dword ptr [edx + eax*4 + 0x76d6f0], -1 */ {  u32 a = R32((u32)(r_edx+r_eax*4+0x76d6f0u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f4689: je 0x5f46a4 */ if (fZ) goto L_005f46a4;
L_005f468b:; BB(0x005f468b);
    /* 005f468b: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005f468e: imul ecx, ecx, 0x50 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x50u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005f4691: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005f4694: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 005f4697: mov ecx, dword ptr [ecx + eax*4 + 0x76d6f0] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x76d6f0u));
    /* 005f469e: mov dword ptr [ebp + edx*4 - 0x54], ecx */ W32((u32)(r_ebp+r_edx*4+0xffffffacu), r_ecx);
    /* 005f46a2: jmp 0x5f466f */ goto L_005f466f;
L_005f46a4:; BB(0x005f46a4);
    /* 005f46a4: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005f46a7: mov dword ptr [ebp + edx*4 - 0x54], 0xffffffff */ W32((u32)(r_ebp+r_edx*4+0xffffffacu), 0xffffffffu);
    /* 005f46af: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f46b0: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 005f46b6: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005f46b9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f46ba: fld dword ptr [ebp + 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xcu)));
    /* 005f46bd: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005f46c0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f46c2: lea eax, [ebp - 0x50] */ r_eax = (u32)(r_ebp+0xffffffb0u);
    /* 005f46c5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f46c6: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005f46c9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f46ca: mov edx, dword ptr [0x7960d8] */ r_edx = R32((u32)(0x7960d8u));
    /* 005f46d0: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005f46d3: call 0x60a9c0 */ r_esp -= 4; W32(r_esp, 0x5f46d8u); f_0060a9c0();
    /* 005f46d8: jmp 0x5f46df */ goto L_005f46df;
L_005f46da:; BB(0x005f46da);
    /* 005f46da: jmp 0x5f4639 */ goto L_005f4639;
L_005f46df:; BB(0x005f46df);
    /* 005f46df: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005f46e2: imul eax, eax, 0x50 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x50u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005f46e5: cmp dword ptr [eax + 0x76d6f0], -1 */ {  u32 a = R32((u32)(r_eax+0x76d6f0u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f46ec: jne 0x5f4715 */ if (!fZ) goto L_005f4715;
L_005f46ee:; BB(0x005f46ee);
    /* 005f46ee: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f46ef: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 005f46f5: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005f46f8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f46f9: fld dword ptr [ebp + 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xcu)));
    /* 005f46fc: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005f46ff: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f4701: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f4703: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005f4706: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f4707: mov edx, dword ptr [0x7960d8] */ r_edx = R32((u32)(0x7960d8u));
    /* 005f470d: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005f4710: call 0x60a9c0 */ r_esp -= 4; W32(r_esp, 0x5f4715u); f_0060a9c0();
L_005f4715:; BB(0x005f4715);
    /* 005f4715: mov esp, ebp */ r_esp = r_ebp;
    /* 005f4717: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f4718: ret 8 */ FN_RET(0x005f4620); r_esp += 12; return;
}

void f_005f4720(void) /* sub_5F4720 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f4720);
    /* 005f4720: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f4721: mov ebp, esp */ r_ebp = r_esp;
    /* 005f4723: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f4724: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005f4727: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f472a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f472b: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 005f4731: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 005f4734: call 0x60a8f0 */ r_esp -= 4; W32(r_esp, 0x5f4739u); f_0060a8f0();
    /* 005f4739: mov esp, ebp */ r_esp = r_ebp;
    /* 005f473b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f473c: ret 4 */ FN_RET(0x005f4720); r_esp += 8; return;
}

void f_005f4740(void) /* sub_5F4740 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f4740);
    /* 005f4740: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f4741: mov ebp, esp */ r_ebp = r_esp;
    /* 005f4743: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f4744: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005f4747: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 005f474c: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005f474f: call 0x60a950 */ r_esp -= 4; W32(r_esp, 0x5f4754u); f_0060a950();
    /* 005f4754: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 005f4756: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 005f4758: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005f475a: mov esp, ebp */ r_esp = r_ebp;
    /* 005f475c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f475d: ret  */ FN_RET(0x005f4740); r_esp += 4; return;
}

void f_005f4760(void) /* sub_5F4760 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f4760);
    /* 005f4760: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f4761: mov ebp, esp */ r_ebp = r_esp;
    /* 005f4763: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f4764: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005f4767: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 005f476c: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005f476f: call 0x60a950 */ r_esp -= 4; W32(r_esp, 0x5f4774u); f_0060a950();
    /* 005f4774: mov esp, ebp */ r_esp = r_ebp;
    /* 005f4776: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f4777: ret  */ FN_RET(0x005f4760); r_esp += 4; return;
}

void f_005f4780(void) /* sub_5F4780 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f4780);
    /* 005f4780: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f4781: mov ebp, esp */ r_ebp = r_esp;
    /* 005f4783: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f4784: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005f4787: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f478a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f478b: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 005f4791: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 005f4794: call 0x60a650 */ r_esp -= 4; W32(r_esp, 0x5f4799u); f_0060a650();
    /* 005f4799: mov esp, ebp */ r_esp = r_ebp;
    /* 005f479b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f479c: ret 4 */ FN_RET(0x005f4780); r_esp += 8; return;
}

void f_005f47a0(void) /* sub_5F47A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f47a0);
    /* 005f47a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f47a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005f47a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f47a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005f47a7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f47aa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f47ab: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 005f47b1: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 005f47b4: call 0x60a7b0 */ r_esp -= 4; W32(r_esp, 0x5f47b9u); f_0060a7b0();
    /* 005f47b9: mov esp, ebp */ r_esp = r_ebp;
    /* 005f47bb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f47bc: ret 4 */ FN_RET(0x005f47a0); r_esp += 8; return;
}

void f_005f47e0(void) /* sub_5F47E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f47e0);
    /* 005f47e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f47e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005f47e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f47e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005f47e7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005f47e9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f47ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f47ed: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 005f47f3: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 005f47f6: call 0x60a480 */ r_esp -= 4; W32(r_esp, 0x5f47fbu); f_0060a480();
    /* 005f47fb: mov esp, ebp */ r_esp = r_ebp;
    /* 005f47fd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f47fe: ret 4 */ FN_RET(0x005f47e0); r_esp += 8; return;
}

void f_005f4830(void) /* sub_5F4830 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f4830);
    /* 005f4830: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f4831: mov ebp, esp */ r_ebp = r_esp;
    /* 005f4833: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f4836: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005f4839: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f483c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f483d: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 005f4843: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 005f4846: call 0x609d80 */ r_esp -= 4; W32(r_esp, 0x5f484bu); f_00609d80();
    /* 005f484b: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005f484e: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f4852: je 0x5f486c */ if (fZ) goto L_005f486c;
L_005f4854:; BB(0x005f4854);
    /* 005f4854: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f4855: fld dword ptr [ebp + 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xcu)));
    /* 005f4858: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005f485b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f485e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f485f: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 005f4864: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005f4867: call 0x609ef0 */ r_esp -= 4; W32(r_esp, 0x5f486cu); f_00609ef0();
L_005f486c:; BB(0x005f486c);
    /* 005f486c: mov esp, ebp */ r_esp = r_ebp;
    /* 005f486e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f486f: ret 8 */ FN_RET(0x005f4830); r_esp += 12; return;
}

void f_005f4ed0(void) /* sub_5F4ED0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f4ed0);
    /* 005f4ed0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f4ed1: mov ebp, esp */ r_ebp = r_esp;
    /* 005f4ed3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f4ed4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005f4ed7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f4eda: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 005f4edd: and ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 005f4ee0: je 0x5f4f2c */ if (fZ) goto L_005f4f2c;
L_005f4ee2:; BB(0x005f4ee2);
    /* 005f4ee2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f4ee5: mov byte ptr [edx + 8], 1 */ W8((u32)(r_edx+0x8u), 0x1u);
    /* 005f4ee9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f4eec: movzx ecx, byte ptr [eax + 0xa] */ r_ecx = (u32)R8((u32)(r_eax+0xau));
    /* 005f4ef0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f4ef2: je 0x5f4f2a */ if (fZ) goto L_005f4f2a;
L_005f4ef4:; BB(0x005f4ef4);
    /* 005f4ef4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f4ef7: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005f4ef9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f4efc: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 005f4eff: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5f4f01u); call_ind(t); }
    /* 005f4f01: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005f4f04: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005f4f07: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005f4f09: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f4f0c: mov dword ptr [eax + 0x2c], edx */ W32((u32)(r_eax+0x2cu), r_edx);
    /* 005f4f0f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f4f12: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005f4f14: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f4f17: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 005f4f1a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f4f1cu); call_ind(t); }
    /* 005f4f1c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005f4f1f: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 005f4f22: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005f4f24: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f4f27: mov dword ptr [eax + 0x30], edx */ W32((u32)(r_eax+0x30u), r_edx);
L_005f4f2a:; BB(0x005f4f2a);
    /* 005f4f2a: jmp 0x5f4f3e */ goto L_005f4f3e;
L_005f4f2c:; BB(0x005f4f2c);
    /* 005f4f2c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005f4f2f: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 005f4f32: and edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 005f4f35: je 0x5f4f3e */ if (fZ) goto L_005f4f3e;
L_005f4f37:; BB(0x005f4f37);
    /* 005f4f37: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f4f3a: mov byte ptr [eax + 9], 1 */ W8((u32)(r_eax+0x9u), 0x1u);
L_005f4f3e:; BB(0x005f4f3e);
    /* 005f4f3e: mov esp, ebp */ r_esp = r_ebp;
    /* 005f4f40: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f4f41: ret 4 */ FN_RET(0x005f4ed0); r_esp += 8; return;
}

void f_005f4f50(void) /* sub_5F4F50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f4f50);
    /* 005f4f50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f4f51: mov ebp, esp */ r_ebp = r_esp;
    /* 005f4f53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f4f54: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005f4f57: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f4f5a: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 005f4f5d: and ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 005f4f60: je 0x5f4f9d */ if (fZ) goto L_005f4f9d;
L_005f4f62:; BB(0x005f4f62);
    /* 005f4f62: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f4f65: mov byte ptr [edx + 8], 0 */ W8((u32)(r_edx+0x8u), 0x0u);
    /* 005f4f69: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f4f6c: movzx ecx, byte ptr [eax + 0xa] */ r_ecx = (u32)R8((u32)(r_eax+0xau));
    /* 005f4f70: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f4f72: je 0x5f4f9b */ if (fZ) goto L_005f4f9b;
L_005f4f74:; BB(0x005f4f74);
    /* 005f4f74: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005f4f77: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f4f7a: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 005f4f7d: sub ecx, dword ptr [eax + 0x30] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x30u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005f4f80: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f4f81: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005f4f84: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f4f87: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005f4f8a: sub ecx, dword ptr [eax + 0x2c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x2cu)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005f4f8d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f4f8e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f4f91: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005f4f93: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f4f96: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 005f4f99: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5f4f9bu); call_ind(t); }
L_005f4f9b:; BB(0x005f4f9b);
    /* 005f4f9b: jmp 0x5f4faf */ goto L_005f4faf;
L_005f4f9d:; BB(0x005f4f9d);
    /* 005f4f9d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f4fa0: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 005f4fa3: and ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 005f4fa6: je 0x5f4faf */ if (fZ) goto L_005f4faf;
L_005f4fa8:; BB(0x005f4fa8);
    /* 005f4fa8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f4fab: mov byte ptr [edx + 9], 0 */ W8((u32)(r_edx+0x9u), 0x0u);
L_005f4faf:; BB(0x005f4faf);
    /* 005f4faf: mov esp, ebp */ r_esp = r_ebp;
    /* 005f4fb1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f4fb2: ret 4 */ FN_RET(0x005f4f50); r_esp += 8; return;
}

void f_005f4fc0(void) /* sub_5F4FC0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f4fc0);
    /* 005f4fc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f4fc1: mov ebp, esp */ r_ebp = r_esp;
    /* 005f4fc3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f4fc4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005f4fc7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f4fca: movzx ecx, byte ptr [eax + 0xa] */ r_ecx = (u32)R8((u32)(r_eax+0xau));
    /* 005f4fce: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f4fd0: je 0x5f5004 */ if (fZ) goto L_005f5004;
L_005f4fd2:; BB(0x005f4fd2);
    /* 005f4fd2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f4fd5: movzx eax, byte ptr [edx + 8] */ r_eax = (u32)R8((u32)(r_edx+0x8u));
    /* 005f4fd9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f4fdb: je 0x5f5004 */ if (fZ) goto L_005f5004;
L_005f4fdd:; BB(0x005f4fdd);
    /* 005f4fdd: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005f4fe0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f4fe3: mov eax, dword ptr [ecx + 0xc] */ r_eax = R32((u32)(r_ecx+0xcu));
    /* 005f4fe6: sub eax, dword ptr [edx + 0x30] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x30u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005f4fe9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f4fea: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005f4fed: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f4ff0: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 005f4ff3: sub eax, dword ptr [edx + 0x2c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x2cu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005f4ff6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f4ff7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f4ffa: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005f4ffc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f4fff: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 005f5002: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f5004u); call_ind(t); }
L_005f5004:; BB(0x005f5004);
    /* 005f5004: mov esp, ebp */ r_esp = r_ebp;
    /* 005f5006: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f5007: ret 4 */ FN_RET(0x005f4fc0); r_esp += 8; return;
}

