#include "protos.h"

void f_00648ec0(void) /* CharacterScript::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00648ec0);
    /* 00648ec0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00648ec1: mov ebp, esp */ r_ebp = r_esp;
    /* 00648ec3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00648ec4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00648ec7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00648ec9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00648ecc: call 0x5fc0d0 */ r_esp -= 4; W32(r_esp, 0x648ed1u); f_005fc0d0();
    /* 00648ed1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00648ed4: mov dword ptr [eax], 0x6dc9a0 */ W32((u32)(r_eax), 0x6dc9a0u);
    /* 00648eda: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00648edd: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00648ee0: mov dword ptr [ecx + 0x20], edx */ W32((u32)(r_ecx+0x20u), r_edx);
    /* 00648ee3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00648ee6: mov dword ptr [eax + 0x24], 0 */ W32((u32)(r_eax+0x24u), 0x0u);
    /* 00648eed: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00648ef0: mov dword ptr [ecx + 0x28], 0xffffffff */ W32((u32)(r_ecx+0x28u), 0xffffffffu);
    /* 00648ef7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00648efa: mov dword ptr [edx + 0x42c], 0 */ W32((u32)(r_edx+0x42cu), 0x0u);
    /* 00648f04: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00648f07: mov dword ptr [eax + 0x430], 0 */ W32((u32)(r_eax+0x430u), 0x0u);
    /* 00648f11: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00648f14: mov dword ptr [ecx + 0x434], 0 */ W32((u32)(r_ecx+0x434u), 0x0u);
    /* 00648f1e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00648f21: mov dword ptr [edx + 0x440], 0 */ W32((u32)(r_edx+0x440u), 0x0u);
    /* 00648f2b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00648f2e: mov dword ptr [eax + 0x444], 0 */ W32((u32)(r_eax+0x444u), 0x0u);
    /* 00648f38: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00648f3b: mov byte ptr [ecx + 0x448], 1 */ W8((u32)(r_ecx+0x448u), 0x1u);
    /* 00648f42: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00648f45: mov esp, ebp */ r_esp = r_ebp;
    /* 00648f47: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00648f48: ret 4 */ FN_RET(0x00648ec0); r_esp += 8; return;
}

void f_00648f50(void) /* CharacterScript::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00648f50);
    /* 00648f50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00648f51: mov ebp, esp */ r_ebp = r_esp;
    /* 00648f53: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00648f55: push 0x6abe87 */ { u32 v = 0x6abe87u; r_esp -= 4; W32(r_esp, v); }
    /* 00648f5a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00648f60: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00648f61: sub esp, 0xf8 */ {  u32 a = r_esp; u32 b = 0xf8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00648f67: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00648f68: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00648f6d: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00648f6f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00648f70: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00648f73: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00648f79: mov dword ptr [ebp - 0xc4], ecx */ W32((u32)(r_ebp+0xffffff3cu), r_ecx);
    /* 00648f7f: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 00648f86: mov eax, dword ptr [ebp - 0xc4] */ r_eax = R32((u32)(r_ebp+0xffffff3cu));
    /* 00648f8c: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00648f8f: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00648f92: mov dword ptr [ebp - 0x68], edx */ W32((u32)(r_ebp+0xffffff98u), r_edx);
    /* 00648f95: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 00648f98: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x648f9du); f_0063aac0();
    /* 00648f9d: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00648f9f: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 00648fa2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00648fa4: cmp dword ptr [ebp - 0x64], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff9cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00648fa8: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00648fab: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 00648fae: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00648fb0: je 0x648fb7 */ if (fZ) goto L_00648fb7;
L_00648fb2:; BB(0x00648fb2);
    /* 00648fb2: jmp 0x64a6ee */ goto L_0064a6ee;
L_00648fb7:; BB(0x00648fb7);
    /* 00648fb7: mov eax, dword ptr [ebp - 0xc4] */ r_eax = R32((u32)(r_ebp+0xffffff3cu));
    /* 00648fbd: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00648fc0: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 00648fc3: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00648fc6: cmp eax, dword ptr [0x16306a4] */ {  u32 a = r_eax; u32 b = R32((u32)(0x16306a4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00648fcc: je 0x648ff0 */ if (fZ) goto L_00648ff0;
L_00648fce:; BB(0x00648fce);
    /* 00648fce: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00648fd4: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00648fd6: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00648fdc: mov eax, dword ptr [edx + 0xa4] */ r_eax = R32((u32)(r_edx+0xa4u));
    /* 00648fe2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x648fe4u); call_ind(t); }
    /* 00648fe4: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00648fe7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00648fe9: jne 0x648ff0 */ if (!fZ) goto L_00648ff0;
L_00648feb:; BB(0x00648feb);
    /* 00648feb: jmp 0x64a6ee */ goto L_0064a6ee;
L_00648ff0:; BB(0x00648ff0);
    /* 00648ff0: mov edx, dword ptr [ebp - 0xc4] */ r_edx = R32((u32)(r_ebp+0xffffff3cu));
    /* 00648ff6: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 00648ff9: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00648ffc: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 00648fff: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 00649002: mov eax, dword ptr [ebp - 0xc4] */ r_eax = R32((u32)(r_ebp+0xffffff3cu));
    /* 00649008: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0064900b: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 0064900e: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 00649011: mov eax, dword ptr [ebp - 0xc4] */ r_eax = R32((u32)(r_ebp+0xffffff3cu));
    /* 00649017: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0064901a: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0064901d: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 00649020: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 00649026: call 0x5fc360 */ r_esp -= 4; W32(r_esp, 0x64902bu); f_005fc360();
    /* 0064902b: mov dword ptr [ebp - 0xc8], eax */ W32((u32)(r_ebp+0xffffff38u), r_eax);
    /* 00649031: cmp dword ptr [ebp - 0xc8], 0xf */ {  u32 a = R32((u32)(r_ebp+0xffffff38u)); u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00649038: ja 0x64a6ee */ if ((!fC&&!fZ)) goto L_0064a6ee;
L_0064903e:; BB(0x0064903e);
    /* 0064903e: mov eax, dword ptr [ebp - 0xc8] */ r_eax = R32((u32)(r_ebp+0xffffff38u));
    /* 00649044: jmp dword ptr [eax*4 + 0x64a700] */ { u32 t = R32((u32)(r_eax*4+0x64a700u)); switch (t) { case 0x64904bu: goto L_0064904b; case 0x6491f7u: goto L_006491f7; case 0x649392u: goto L_00649392; case 0x649607u: goto L_00649607; case 0x6496afu: goto L_006496af; case 0x64974au: goto L_0064974a; case 0x6499a1u: goto L_006499a1; case 0x6499f9u: goto L_006499f9; case 0x649ad0u: goto L_00649ad0; case 0x649b44u: goto L_00649b44; case 0x649d3au: goto L_00649d3a; case 0x64a198u: goto L_0064a198; case 0x64a286u: goto L_0064a286; case 0x64a2f0u: goto L_0064a2f0; case 0x64a3b7u: goto L_0064a3b7; case 0x64a616u: goto L_0064a616; case 0x64a3ffu: goto L_0064a3ff; case 0x64a4bbu: goto L_0064a4bb; case 0x64a58au: goto L_0064a58a; case 0x64a414u: goto L_0064a414; case 0x64a474u: goto L_0064a474; case 0x64a546u: goto L_0064a546; case 0x64a502u: goto L_0064a502; case 0x64a5a8u: goto L_0064a5a8; default: UNSUP(0x00649044, "jump table entry is not a known target"); } }
L_0064904b:; BB(0x0064904b);
    /* 0064904b: push 0x3eb */ { u32 v = 0x3ebu; r_esp -= 4; W32(r_esp, v); }
    /* 00649050: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00649056: call 0x635cb0 */ r_esp -= 4; W32(r_esp, 0x64905bu); f_00635cb0();
    /* 0064905b: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0064905e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00649060: je 0x649081 */ if (fZ) goto L_00649081;
L_00649062:; BB(0x00649062);
    /* 00649062: push 0x1f4 */ { u32 v = 0x1f4u; r_esp -= 4; W32(r_esp, v); }
    /* 00649067: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00649069: mov edx, dword ptr [ebp - 0xc4] */ r_edx = R32((u32)(r_ebp+0xffffff3cu));
    /* 0064906f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00649071: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 00649077: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0064907a: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x64907cu); call_ind(t); }
    /* 0064907c: jmp 0x64a6ee */ goto L_0064a6ee;
L_00649081:; BB(0x00649081);
    /* 00649081: mov eax, dword ptr [ebp - 0xc4] */ r_eax = R32((u32)(r_ebp+0xffffff3cu));
    /* 00649087: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0064908a: call 0x646cb0 */ r_esp -= 4; W32(r_esp, 0x64908fu); f_00646cb0();
    /* 0064908f: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00649092: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00649094: je 0x6490b5 */ if (fZ) goto L_006490b5;
L_00649096:; BB(0x00649096);
    /* 00649096: push 0x1f4 */ { u32 v = 0x1f4u; r_esp -= 4; W32(r_esp, v); }
    /* 0064909b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064909d: mov edx, dword ptr [ebp - 0xc4] */ r_edx = R32((u32)(r_ebp+0xffffff3cu));
    /* 006490a3: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006490a5: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 006490ab: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 006490ae: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x6490b0u); call_ind(t); }
    /* 006490b0: jmp 0x64a6ee */ goto L_0064a6ee;
L_006490b5:; BB(0x006490b5);
    /* 006490b5: mov eax, dword ptr [ebp - 0xc4] */ r_eax = R32((u32)(r_ebp+0xffffff3cu));
    /* 006490bb: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 006490be: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 006490c1: mov dword ptr [ebp - 0x74], edx */ W32((u32)(r_ebp+0xffffff8cu), r_edx);
    /* 006490c4: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 006490c7: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x6490ccu); f_0063aac0();
    /* 006490cc: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 006490ce: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 006490d1: cmp dword ptr [ebp - 0x6c], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff94u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006490d5: je 0x6490f6 */ if (fZ) goto L_006490f6;
L_006490d7:; BB(0x006490d7);
    /* 006490d7: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 006490da: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x6490dfu); f_0063aac0();
    /* 006490df: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 006490e1: mov dword ptr [ebp - 0x70], ecx */ W32((u32)(r_ebp+0xffffff90u), r_ecx);
    /* 006490e4: cmp dword ptr [ebp - 0x70], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff90u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006490e8: je 0x6490f6 */ if (fZ) goto L_006490f6;
L_006490ea:; BB(0x006490ea);
    /* 006490ea: mov dword ptr [ebp - 0xcc], 0 */ W32((u32)(r_ebp+0xffffff34u), 0x0u);
    /* 006490f4: jmp 0x649100 */ goto L_00649100;
L_006490f6:; BB(0x006490f6);
    /* 006490f6: mov dword ptr [ebp - 0xcc], 1 */ W32((u32)(r_ebp+0xffffff34u), 0x1u);
L_00649100:; BB(0x00649100);
    /* 00649100: movzx edx, byte ptr [ebp - 0xcc] */ r_edx = (u32)R8((u32)(r_ebp+0xffffff34u));
    /* 00649107: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00649109: je 0x64915b */ if (fZ) goto L_0064915b;
L_0064910b:; BB(0x0064910b);
    /* 0064910b: movzx eax, byte ptr [0x795fbc] */ r_eax = (u32)R8((u32)(0x795fbcu));
    /* 00649112: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00649114: je 0x649122 */ if (fZ) goto L_00649122;
L_00649116:; BB(0x00649116);
    /* 00649116: mov dword ptr [ebp - 0xd0], 0 */ W32((u32)(r_ebp+0xffffff30u), 0x0u);
    /* 00649120: jmp 0x64913a */ goto L_0064913a;
L_00649122:; BB(0x00649122);
    /* 00649122: push 0xb4 */ { u32 v = 0xb4u; r_esp -= 4; W32(r_esp, v); }
    /* 00649127: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x64912cu); f_0062fbf0();
    /* 0064912c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064912f: add eax, 0xb4 */ {  u32 a = r_eax; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00649134: mov dword ptr [ebp - 0xd0], eax */ W32((u32)(r_ebp+0xffffff30u), r_eax);
L_0064913a:; BB(0x0064913a);
    /* 0064913a: mov ecx, dword ptr [ebp - 0xd0] */ r_ecx = R32((u32)(r_ebp+0xffffff30u));
    /* 00649140: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00649141: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00649143: mov edx, dword ptr [ebp - 0xc4] */ r_edx = R32((u32)(r_ebp+0xffffff3cu));
    /* 00649149: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0064914b: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 00649151: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 00649154: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x649156u); call_ind(t); }
    /* 00649156: jmp 0x64a6ee */ goto L_0064a6ee;
L_0064915b:; BB(0x0064915b);
    /* 0064915b: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 0064915d: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x649162u); f_0062fbf0();
    /* 00649162: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00649165: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00649167: jne 0x649183 */ if (!fZ) goto L_00649183;
L_00649169:; BB(0x00649169);
    /* 00649169: movzx eax, byte ptr [0x795f98] */ r_eax = (u32)R8((u32)(0x795f98u));
    /* 00649170: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00649172: jne 0x649183 */ if (!fZ) goto L_00649183;
L_00649174:; BB(0x00649174);
    /* 00649174: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064917a: call 0x6377b0 */ r_esp -= 4; W32(r_esp, 0x64917fu); f_006377b0();
    /* 0064917f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00649181: jg 0x64918e */ if ((!fZ&&fS==fO)) goto L_0064918e;
L_00649183:; BB(0x00649183);
    /* 00649183: movzx ecx, byte ptr [0x795fbb] */ r_ecx = (u32)R8((u32)(0x795fbbu));
    /* 0064918a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064918c: je 0x6491a7 */ if (fZ) goto L_006491a7;
L_0064918e:; BB(0x0064918e);
    /* 0064918e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00649190: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00649192: mov edx, dword ptr [ebp - 0xc4] */ r_edx = R32((u32)(r_ebp+0xffffff3cu));
    /* 00649198: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0064919a: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 006491a0: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 006491a3: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x6491a5u); call_ind(t); }
    /* 006491a5: jmp 0x6491f2 */ goto L_006491f2;
L_006491a7:; BB(0x006491a7);
    /* 006491a7: movzx eax, byte ptr [0x795fbc] */ r_eax = (u32)R8((u32)(0x795fbcu));
    /* 006491ae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006491b0: je 0x6491be */ if (fZ) goto L_006491be;
L_006491b2:; BB(0x006491b2);
    /* 006491b2: mov dword ptr [ebp - 0xd4], 0 */ W32((u32)(r_ebp+0xffffff2cu), 0x0u);
    /* 006491bc: jmp 0x6491d6 */ goto L_006491d6;
L_006491be:; BB(0x006491be);
    /* 006491be: push 0xb4 */ { u32 v = 0xb4u; r_esp -= 4; W32(r_esp, v); }
    /* 006491c3: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x6491c8u); f_0062fbf0();
    /* 006491c8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006491cb: add eax, 0xb4 */ {  u32 a = r_eax; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006491d0: mov dword ptr [ebp - 0xd4], eax */ W32((u32)(r_ebp+0xffffff2cu), r_eax);
L_006491d6:; BB(0x006491d6);
    /* 006491d6: mov ecx, dword ptr [ebp - 0xd4] */ r_ecx = R32((u32)(r_ebp+0xffffff2cu));
    /* 006491dc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006491dd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006491df: mov edx, dword ptr [ebp - 0xc4] */ r_edx = R32((u32)(r_ebp+0xffffff3cu));
    /* 006491e5: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006491e7: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 006491ed: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 006491f0: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x6491f2u); call_ind(t); }
L_006491f2:; BB(0x006491f2);
    /* 006491f2: jmp 0x64a6ee */ goto L_0064a6ee;
L_006491f7:; BB(0x006491f7);
    /* 006491f7: mov eax, dword ptr [ebp - 0xc4] */ r_eax = R32((u32)(r_ebp+0xffffff3cu));
    /* 006491fd: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00649200: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00649203: mov dword ptr [ebp - 0x80], edx */ W32((u32)(r_ebp+0xffffff80u), r_edx);
    /* 00649206: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 00649209: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x64920eu); f_0063aac0();
    /* 0064920e: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00649210: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 00649213: cmp dword ptr [ebp - 0x78], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff88u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00649217: je 0x649238 */ if (fZ) goto L_00649238;
L_00649219:; BB(0x00649219);
    /* 00649219: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 0064921c: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x649221u); f_0063aac0();
    /* 00649221: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00649223: mov dword ptr [ebp - 0x7c], ecx */ W32((u32)(r_ebp+0xffffff84u), r_ecx);
    /* 00649226: cmp dword ptr [ebp - 0x7c], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff84u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064922a: je 0x649238 */ if (fZ) goto L_00649238;
L_0064922c:; BB(0x0064922c);
    /* 0064922c: mov dword ptr [ebp - 0xd8], 0 */ W32((u32)(r_ebp+0xffffff28u), 0x0u);
    /* 00649236: jmp 0x649242 */ goto L_00649242;
L_00649238:; BB(0x00649238);
    /* 00649238: mov dword ptr [ebp - 0xd8], 1 */ W32((u32)(r_ebp+0xffffff28u), 0x1u);
L_00649242:; BB(0x00649242);
    /* 00649242: movzx edx, byte ptr [ebp - 0xd8] */ r_edx = (u32)R8((u32)(r_ebp+0xffffff28u));
    /* 00649249: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064924b: je 0x649330 */ if (fZ) goto L_00649330;
L_00649251:; BB(0x00649251);
    /* 00649251: mov eax, dword ptr [ebp - 0xc4] */ r_eax = R32((u32)(r_ebp+0xffffff3cu));
    /* 00649257: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0064925a: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0064925d: mov dword ptr [ebp - 0x84], edx */ W32((u32)(r_ebp+0xffffff7cu), r_edx);
    /* 00649263: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 00649269: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x64926eu); f_0063aac0();
    /* 0064926e: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00649270: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 00649276: cmp dword ptr [ebp - 0x88], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff78u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064927d: jne 0x6492e0 */ if (!fZ) goto L_006492e0;
L_0064927f:; BB(0x0064927f);
    /* 0064927f: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 00649281: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00649287: call 0x639520 */ r_esp -= 4; W32(r_esp, 0x64928cu); f_00639520();
    /* 0064928c: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0064928f: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00649291: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x649296u); f_0062fbf0();
    /* 00649296: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00649299: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064929b: jne 0x6492ca */ if (!fZ) goto L_006492ca;
L_0064929d:; BB(0x0064929d);
    /* 0064929d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064929f: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006492a2: imul ecx, ecx, 0x380 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x380u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006492a8: mov edx, dword ptr [ecx + 0x76357c] */ r_edx = R32((u32)(r_ecx+0x76357cu));
    /* 006492ae: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006492af: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x6492b4u); f_0062fbf0();
    /* 006492b4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006492b7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006492b8: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 006492ba: mov eax, dword ptr [ebp - 0xc4] */ r_eax = R32((u32)(r_ebp+0xffffff3cu));
    /* 006492c0: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 006492c3: call 0x6475c0 */ r_esp -= 4; W32(r_esp, 0x6492c8u); f_006475c0();
    /* 006492c8: jmp 0x6492de */ goto L_006492de;
L_006492ca:; BB(0x006492ca);
    /* 006492ca: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006492cc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006492ce: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 006492d0: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 006492d6: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 006492d9: call 0x6475c0 */ r_esp -= 4; W32(r_esp, 0x6492deu); f_006475c0();
L_006492de:; BB(0x006492de);
    /* 006492de: jmp 0x64932b */ goto L_0064932b;
L_006492e0:; BB(0x006492e0);
    /* 006492e0: movzx edx, byte ptr [0x795fbc] */ r_edx = (u32)R8((u32)(0x795fbcu));
    /* 006492e7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006492e9: je 0x6492f7 */ if (fZ) goto L_006492f7;
L_006492eb:; BB(0x006492eb);
    /* 006492eb: mov dword ptr [ebp - 0xdc], 0 */ W32((u32)(r_ebp+0xffffff24u), 0x0u);
    /* 006492f5: jmp 0x64930f */ goto L_0064930f;
L_006492f7:; BB(0x006492f7);
    /* 006492f7: push 0xb4 */ { u32 v = 0xb4u; r_esp -= 4; W32(r_esp, v); }
    /* 006492fc: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x649301u); f_0062fbf0();
    /* 00649301: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00649304: add eax, 0xb4 */ {  u32 a = r_eax; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00649309: mov dword ptr [ebp - 0xdc], eax */ W32((u32)(r_ebp+0xffffff24u), r_eax);
L_0064930f:; BB(0x0064930f);
    /* 0064930f: mov eax, dword ptr [ebp - 0xdc] */ r_eax = R32((u32)(r_ebp+0xffffff24u));
    /* 00649315: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00649316: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 00649318: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 0064931e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00649320: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 00649326: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00649329: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64932bu); call_ind(t); }
L_0064932b:; BB(0x0064932b);
    /* 0064932b: jmp 0x64a6ee */ goto L_0064a6ee;
L_00649330:; BB(0x00649330);
    /* 00649330: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00649333: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00649334: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064933a: call 0x639520 */ r_esp -= 4; W32(r_esp, 0x64933fu); f_00639520();
    /* 0064933f: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00649342: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00649344: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x649349u); f_0062fbf0();
    /* 00649349: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064934c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064934e: jne 0x64937b */ if (!fZ) goto L_0064937b;
L_00649350:; BB(0x00649350);
    /* 00649350: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00649352: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00649355: imul edx, edx, 0x380 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x380u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0064935b: mov eax, dword ptr [edx + 0x76357c] */ r_eax = R32((u32)(r_edx+0x76357cu));
    /* 00649361: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00649362: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x649367u); f_0062fbf0();
    /* 00649367: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064936a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064936b: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 00649371: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 00649374: call 0x6473f0 */ r_esp -= 4; W32(r_esp, 0x649379u); f_006473f0();
    /* 00649379: jmp 0x64938d */ goto L_0064938d;
L_0064937b:; BB(0x0064937b);
    /* 0064937b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064937d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064937f: mov edx, dword ptr [ebp - 0xc4] */ r_edx = R32((u32)(r_ebp+0xffffff3cu));
    /* 00649385: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 00649388: call 0x6473f0 */ r_esp -= 4; W32(r_esp, 0x64938du); f_006473f0();
L_0064938d:; BB(0x0064938d);
    /* 0064938d: jmp 0x64a6ee */ goto L_0064a6ee;
L_00649392:; BB(0x00649392);
    /* 00649392: mov eax, dword ptr [ebp - 0xc4] */ r_eax = R32((u32)(r_ebp+0xffffff3cu));
    /* 00649398: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 0064939e: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 006493a4: cmp edx, dword ptr [ecx + 0x42c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x42cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006493aa: jl 0x649401 */ if ((fS!=fO)) goto L_00649401;
L_006493ac:; BB(0x006493ac);
    /* 006493ac: mov eax, dword ptr [ebp - 0xc4] */ r_eax = R32((u32)(r_ebp+0xffffff3cu));
    /* 006493b2: cmp dword ptr [eax + 0x10], 0 */ {  u32 a = R32((u32)(r_eax+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006493b6: je 0x6493d3 */ if (fZ) goto L_006493d3;
L_006493b8:; BB(0x006493b8);
    /* 006493b8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006493ba: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 006493c0: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 006493c3: mov eax, dword ptr [ebp - 0xc4] */ r_eax = R32((u32)(r_ebp+0xffffff3cu));
    /* 006493c9: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 006493cc: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 006493ce: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 006493d1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6493d3u); call_ind(t); }
L_006493d3:; BB(0x006493d3);
    /* 006493d3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006493d5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006493d7: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 006493dd: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 006493e0: call 0x6464d0 */ r_esp -= 4; W32(r_esp, 0x6493e5u); f_006464d0();
    /* 006493e5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006493e7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006493e9: mov edx, dword ptr [ebp - 0xc4] */ r_edx = R32((u32)(r_ebp+0xffffff3cu));
    /* 006493ef: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006493f1: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 006493f7: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 006493fa: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x6493fcu); call_ind(t); }
    /* 006493fc: jmp 0x64a6ee */ goto L_0064a6ee;
L_00649401:; BB(0x00649401);
    /* 00649401: mov eax, dword ptr [ebp - 0xc4] */ r_eax = R32((u32)(r_ebp+0xffffff3cu));
    /* 00649407: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0064940a: mov byte ptr [ecx + 0x5c], 1 */ W8((u32)(r_ecx+0x5cu), 0x1u);
    /* 0064940e: mov edx, dword ptr [ebp - 0xc4] */ r_edx = R32((u32)(r_ebp+0xffffff3cu));
    /* 00649414: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 00649417: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0064941a: mov dword ptr [ebp - 0x94], ecx */ W32((u32)(r_ebp+0xffffff6cu), r_ecx);
    /* 00649420: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 00649426: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x64942bu); f_0063aac0();
    /* 0064942b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0064942d: mov dword ptr [ebp - 0x8c], edx */ W32((u32)(r_ebp+0xffffff74u), r_edx);
    /* 00649433: cmp dword ptr [ebp - 0x8c], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff74u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064943a: je 0x649464 */ if (fZ) goto L_00649464;
L_0064943c:; BB(0x0064943c);
    /* 0064943c: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 00649442: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x649447u); f_0063aac0();
    /* 00649447: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00649449: mov dword ptr [ebp - 0x90], eax */ W32((u32)(r_ebp+0xffffff70u), r_eax);
    /* 0064944f: cmp dword ptr [ebp - 0x90], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff70u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00649456: je 0x649464 */ if (fZ) goto L_00649464;
L_00649458:; BB(0x00649458);
    /* 00649458: mov dword ptr [ebp - 0xe0], 0 */ W32((u32)(r_ebp+0xffffff20u), 0x0u);
    /* 00649462: jmp 0x64946e */ goto L_0064946e;
L_00649464:; BB(0x00649464);
    /* 00649464: mov dword ptr [ebp - 0xe0], 1 */ W32((u32)(r_ebp+0xffffff20u), 0x1u);
L_0064946e:; BB(0x0064946e);
    /* 0064946e: movzx ecx, byte ptr [ebp - 0xe0] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffff20u));
    /* 00649475: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00649477: je 0x649518 */ if (fZ) goto L_00649518;
L_0064947d:; BB(0x0064947d);
    /* 0064947d: mov edx, dword ptr [ebp - 0xc4] */ r_edx = R32((u32)(r_ebp+0xffffff3cu));
    /* 00649483: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 00649486: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00649489: mov dword ptr [ebp - 0x98], ecx */ W32((u32)(r_ebp+0xffffff68u), r_ecx);
    /* 0064948f: mov ecx, dword ptr [ebp - 0x98] */ r_ecx = R32((u32)(r_ebp+0xffffff68u));
    /* 00649495: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x64949au); f_0063aac0();
    /* 0064949a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0064949c: mov dword ptr [ebp - 0x9c], edx */ W32((u32)(r_ebp+0xffffff64u), r_edx);
    /* 006494a2: cmp dword ptr [ebp - 0x9c], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff64u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006494a9: je 0x6494cb */ if (fZ) goto L_006494cb;
L_006494ab:; BB(0x006494ab);
    /* 006494ab: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 006494ad: jne 0x6494c6 */ if (!fZ) goto L_006494c6;
L_006494af:; BB(0x006494af);
    /* 006494af: push 0x5a1 */ { u32 v = 0x5a1u; r_esp -= 4; W32(r_esp, v); }
    /* 006494b4: push 0x6dc610 */ { u32 v = 0x6dc610u; r_esp -= 4; W32(r_esp, v); }
    /* 006494b9: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 006494be: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x6494c3u); f_005e9f20();
    /* 006494c3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006494c6:; BB(0x006494c6);
    /* 006494c6: jmp 0x64a6ee */ goto L_0064a6ee;
L_006494cb:; BB(0x006494cb);
    /* 006494cb: mov edx, dword ptr [ebp - 0xc4] */ r_edx = R32((u32)(r_ebp+0xffffff3cu));
    /* 006494d1: mov eax, dword ptr [edx + 0x430] */ r_eax = R32((u32)(r_edx+0x430u));
    /* 006494d7: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 006494dd: movzx edx, byte ptr [ecx + eax*2 + 0x2c] */ r_edx = (u32)R8((u32)(r_ecx+r_eax*2+0x2cu));
    /* 006494e2: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 006494e5: mov eax, dword ptr [ebp - 0xc4] */ r_eax = R32((u32)(r_ebp+0xffffff3cu));
    /* 006494eb: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 006494ee: mov edx, dword ptr [ecx + 0x34] */ r_edx = R32((u32)(r_ecx+0x34u));
    /* 006494f1: mov dword ptr [ebp - 0xa0], edx */ W32((u32)(r_ebp+0xffffff60u), r_edx);
    /* 006494f7: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 006494fd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006494fe: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00649501: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00649502: mov edx, dword ptr [ebp - 0xc4] */ r_edx = R32((u32)(r_ebp+0xffffff3cu));
    /* 00649508: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 0064950b: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0064950e: call 0x665270 */ r_esp -= 4; W32(r_esp, 0x649513u); f_00665270();
    /* 00649513: jmp 0x6495ba */ goto L_006495ba;
L_00649518:; BB(0x00649518);
    /* 00649518: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 0064951e: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 00649521: call 0x646d10 */ r_esp -= 4; W32(r_esp, 0x649526u); f_00646d10();
    /* 00649526: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00649527: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0064952a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064952b: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00649531: call 0x639610 */ r_esp -= 4; W32(r_esp, 0x649536u); f_00639610();
    /* 00649536: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00649537: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0064953a: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x64953fu); f_005eaf00();
    /* 0064953f: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00649542: call 0x5eb240 */ r_esp -= 4; W32(r_esp, 0x649547u); f_005eb240();
    /* 00649547: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00649548: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0064954b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0064954d: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00649550: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00649556: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x649558u); call_ind(t); }
    /* 00649558: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 0064955e: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 00649561: call 0x646d10 */ r_esp -= 4; W32(r_esp, 0x649566u); f_00646d10();
    /* 00649566: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00649567: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0064956a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064956b: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00649571: call 0x639670 */ r_esp -= 4; W32(r_esp, 0x649576u); f_00639670();
    /* 00649576: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00649577: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0064957a: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x64957fu); f_005eaf00();
    /* 0064957f: mov eax, dword ptr [ebp - 0xc4] */ r_eax = R32((u32)(r_ebp+0xffffff3cu));
    /* 00649585: mov ecx, dword ptr [eax + 0x430] */ r_ecx = R32((u32)(r_eax+0x430u));
    /* 0064958b: mov edx, dword ptr [ebp - 0xc4] */ r_edx = R32((u32)(r_ebp+0xffffff3cu));
    /* 00649591: movzx eax, byte ptr [edx + ecx*2 + 0x2c] */ r_eax = (u32)R8((u32)(r_edx+r_ecx*2+0x2cu));
    /* 00649596: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00649599: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0064959c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064959d: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 006495a0: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006495a2: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 006495a5: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 006495ab: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x6495adu); call_ind(t); }
    /* 006495ad: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 006495b0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006495b2: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 006495b5: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 006495b8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6495bau); call_ind(t); }
L_006495ba:; BB(0x006495ba);
    /* 006495ba: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 006495c0: mov edx, dword ptr [ecx + 0x430] */ r_edx = R32((u32)(r_ecx+0x430u));
    /* 006495c6: mov eax, dword ptr [ebp - 0xc4] */ r_eax = R32((u32)(r_ebp+0xffffff3cu));
    /* 006495cc: movzx ecx, byte ptr [eax + edx*2 + 0x2d] */ r_ecx = (u32)R8((u32)(r_eax+r_edx*2+0x2du));
    /* 006495d1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006495d2: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006495d4: mov edx, dword ptr [ebp - 0xc4] */ r_edx = R32((u32)(r_ebp+0xffffff3cu));
    /* 006495da: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006495dc: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 006495e2: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 006495e5: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x6495e7u); call_ind(t); }
    /* 006495e7: mov eax, dword ptr [ebp - 0xc4] */ r_eax = R32((u32)(r_ebp+0xffffff3cu));
    /* 006495ed: mov ecx, dword ptr [eax + 0x430] */ r_ecx = R32((u32)(r_eax+0x430u));
    /* 006495f3: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006495f6: mov edx, dword ptr [ebp - 0xc4] */ r_edx = R32((u32)(r_ebp+0xffffff3cu));
    /* 006495fc: mov dword ptr [edx + 0x430], ecx */ W32((u32)(r_edx+0x430u), r_ecx);
    /* 00649602: jmp 0x64a6ee */ goto L_0064a6ee;
L_00649607:; BB(0x00649607);
    /* 00649607: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0064960a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064960b: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00649611: call 0x639520 */ r_esp -= 4; W32(r_esp, 0x649616u); f_00639520();
    /* 00649616: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00649619: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0064961c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064961d: mov edx, dword ptr [ebp - 0xc4] */ r_edx = R32((u32)(r_ebp+0xffffff3cu));
    /* 00649623: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 00649626: call 0x6483e0 */ r_esp -= 4; W32(r_esp, 0x64962bu); f_006483e0();
    /* 0064962b: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0064962e: cmp dword ptr [ebp - 0x48], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00649632: jne 0x649650 */ if (!fZ) goto L_00649650;
L_00649634:; BB(0x00649634);
    /* 00649634: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00649636: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00649638: mov eax, dword ptr [ebp - 0xc4] */ r_eax = R32((u32)(r_ebp+0xffffff3cu));
    /* 0064963e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00649640: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 00649646: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00649649: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64964bu); call_ind(t); }
    /* 0064964b: jmp 0x64a6ee */ goto L_0064a6ee;
L_00649650:; BB(0x00649650);
    /* 00649650: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00649653: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00649654: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x649659u); f_0062fbf0();
    /* 00649659: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064965c: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0064965f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00649661: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00649663: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00649665: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00649668: imul edx, edx, 0x380 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x380u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0064966e: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00649671: imul eax, eax, 0x2c */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x2cu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00649674: mov ecx, dword ptr [edx + eax + 0x763584] */ r_ecx = R32((u32)(r_edx+r_eax+0x763584u));
    /* 0064967b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064967c: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x649681u); f_0062fbf0();
    /* 00649681: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00649684: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00649685: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00649688: imul edx, edx, 0x380 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x380u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0064968e: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00649691: imul eax, eax, 0x2c */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x2cu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00649694: mov ecx, dword ptr [edx + eax + 0x763580] */ r_ecx = R32((u32)(r_edx+r_eax+0x763580u));
    /* 0064969b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064969c: mov edx, dword ptr [ebp - 0xc4] */ r_edx = R32((u32)(r_ebp+0xffffff3cu));
    /* 006496a2: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 006496a5: call 0x647210 */ r_esp -= 4; W32(r_esp, 0x6496aau); f_00647210();
    /* 006496aa: jmp 0x64a6ee */ goto L_0064a6ee;
L_006496af:; BB(0x006496af);
    /* 006496af: mov eax, dword ptr [ebp - 0xc4] */ r_eax = R32((u32)(r_ebp+0xffffff3cu));
    /* 006496b5: cmp dword ptr [eax + 0x438], -1 */ {  u32 a = R32((u32)(r_eax+0x438u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006496bc: je 0x64972e */ if (fZ) goto L_0064972e;
L_006496be:; BB(0x006496be);
    /* 006496be: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 006496c4: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 006496c7: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 006496ca: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 006496cd: mov dword ptr [ebp - 0xa4], ecx */ W32((u32)(r_ebp+0xffffff5cu), r_ecx);
    /* 006496d3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006496d5: push 0x436 */ { u32 v = 0x436u; r_esp -= 4; W32(r_esp, v); }
    /* 006496da: mov edx, dword ptr [ebp - 0xa4] */ r_edx = R32((u32)(r_ebp+0xffffff5cu));
    /* 006496e0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006496e1: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006496e7: call 0x637000 */ r_esp -= 4; W32(r_esp, 0x6496ecu); f_00637000();
    /* 006496ec: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 006496ef: cmp dword ptr [ebp - 0x1c], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006496f3: je 0x64972e */ if (fZ) goto L_0064972e;
L_006496f5:; BB(0x006496f5);
    /* 006496f5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006496f7: mov eax, dword ptr [ebp - 0xc4] */ r_eax = R32((u32)(r_ebp+0xffffff3cu));
    /* 006496fd: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00649700: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00649701: fld dword ptr [ecx + 0x54] */ FPUSH(R_F32((u32)(r_ecx+0x54u)));
    /* 00649704: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00649707: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00649708: fld1  */ FPUSH(1.0);
    /* 0064970a: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0064970d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064970f: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 00649711: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00649713: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00649715: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00649718: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00649719: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0064971e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00649720: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00649726: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 0064972c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64972eu); call_ind(t); }
L_0064972e:; BB(0x0064972e);
    /* 0064972e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00649730: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00649732: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 00649738: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0064973a: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 00649740: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00649743: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x649745u); call_ind(t); }
    /* 00649745: jmp 0x64a6ee */ goto L_0064a6ee;
L_0064974a:; BB(0x0064974a);
    /* 0064974a: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 00649750: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00649753: mov byte ptr [edx + 0x5c], 1 */ W8((u32)(r_edx+0x5cu), 0x1u);
    /* 00649757: mov eax, dword ptr [ebp - 0xc4] */ r_eax = R32((u32)(r_ebp+0xffffff3cu));
    /* 0064975d: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 00649763: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 00649769: cmp edx, dword ptr [ecx + 0x42c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x42cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064976f: jl 0x64984d */ if ((fS!=fO)) goto L_0064984d;
L_00649775:; BB(0x00649775);
    /* 00649775: mov eax, dword ptr [ebp - 0xc4] */ r_eax = R32((u32)(r_ebp+0xffffff3cu));
    /* 0064977b: cmp dword ptr [eax + 0x438], -1 */ {  u32 a = R32((u32)(r_eax+0x438u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00649782: je 0x6497f8 */ if (fZ) goto L_006497f8;
L_00649784:; BB(0x00649784);
    /* 00649784: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 0064978a: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 0064978d: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00649790: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00649793: mov dword ptr [ebp - 0xa8], ecx */ W32((u32)(r_ebp+0xffffff58u), r_ecx);
    /* 00649799: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0064979b: mov edx, dword ptr [ebp - 0xc4] */ r_edx = R32((u32)(r_ebp+0xffffff3cu));
    /* 006497a1: mov eax, dword ptr [edx + 0x438] */ r_eax = R32((u32)(r_edx+0x438u));
    /* 006497a7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006497a8: mov ecx, dword ptr [ebp - 0xa8] */ r_ecx = R32((u32)(r_ebp+0xffffff58u));
    /* 006497ae: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006497af: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006497b5: call 0x637000 */ r_esp -= 4; W32(r_esp, 0x6497bau); f_00637000();
    /* 006497ba: mov edx, dword ptr [ebp - 0xc4] */ r_edx = R32((u32)(r_ebp+0xffffff3cu));
    /* 006497c0: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
    /* 006497c3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006497c5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006497c7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006497c9: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006497cb: mov eax, dword ptr [ebp - 0xc4] */ r_eax = R32((u32)(r_ebp+0xffffff3cu));
    /* 006497d1: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 006497d4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006497d5: mov edx, dword ptr [ebp - 0xc4] */ r_edx = R32((u32)(r_ebp+0xffffff3cu));
    /* 006497db: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 006497de: call 0x646fa0 */ r_esp -= 4; W32(r_esp, 0x6497e3u); f_00646fa0();
    /* 006497e3: mov eax, dword ptr [ebp - 0xc4] */ r_eax = R32((u32)(r_ebp+0xffffff3cu));
    /* 006497e9: mov dword ptr [eax + 0x438], 0xffffffff */ W32((u32)(r_eax+0x438u), 0xffffffffu);
    /* 006497f3: jmp 0x64a6ee */ goto L_0064a6ee;
L_006497f8:; BB(0x006497f8);
    /* 006497f8: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 006497fe: cmp dword ptr [ecx + 0x10], 0 */ {  u32 a = R32((u32)(r_ecx+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00649802: je 0x64981f */ if (fZ) goto L_0064981f;
L_00649804:; BB(0x00649804);
    /* 00649804: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00649806: mov edx, dword ptr [ebp - 0xc4] */ r_edx = R32((u32)(r_ebp+0xffffff3cu));
    /* 0064980c: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 0064980f: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 00649815: mov ecx, dword ptr [ecx + 0x10] */ r_ecx = R32((u32)(r_ecx+0x10u));
    /* 00649818: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0064981a: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0064981d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64981fu); call_ind(t); }
L_0064981f:; BB(0x0064981f);
    /* 0064981f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00649821: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00649823: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 00649829: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 0064982c: call 0x6464d0 */ r_esp -= 4; W32(r_esp, 0x649831u); f_006464d0();
    /* 00649831: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00649833: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00649835: mov edx, dword ptr [ebp - 0xc4] */ r_edx = R32((u32)(r_ebp+0xffffff3cu));
    /* 0064983b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0064983d: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 00649843: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 00649846: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x649848u); call_ind(t); }
    /* 00649848: jmp 0x64a6ee */ goto L_0064a6ee;
L_0064984d:; BB(0x0064984d);
    /* 0064984d: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00649850: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00649851: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00649857: call 0x639700 */ r_esp -= 4; W32(r_esp, 0x64985cu); f_00639700();
    /* 0064985c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064985e: je 0x649875 */ if (fZ) goto L_00649875;
L_00649860:; BB(0x00649860);
    /* 00649860: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 00649866: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 00649869: call 0x646d10 */ r_esp -= 4; W32(r_esp, 0x64986eu); f_00646d10();
    /* 0064986e: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00649871: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00649873: je 0x64988c */ if (fZ) goto L_0064988c;
L_00649875:; BB(0x00649875);
    /* 00649875: mov eax, dword ptr [ebp - 0xc4] */ r_eax = R32((u32)(r_ebp+0xffffff3cu));
    /* 0064987b: mov ecx, dword ptr [eax + 0x434] */ r_ecx = R32((u32)(r_eax+0x434u));
    /* 00649881: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00649882: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00649885: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x64988au); f_005eaf00();
    /* 0064988a: jmp 0x6498a4 */ goto L_006498a4;
L_0064988c:; BB(0x0064988c);
    /* 0064988c: mov edx, dword ptr [ebp - 0xc4] */ r_edx = R32((u32)(r_ebp+0xffffff3cu));
    /* 00649892: mov eax, dword ptr [edx + 0x434] */ r_eax = R32((u32)(r_edx+0x434u));
    /* 00649898: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0064989b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064989c: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0064989f: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x6498a4u); f_005eaf00();
L_006498a4:; BB(0x006498a4);
    /* 006498a4: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 006498aa: mov edx, dword ptr [ecx + 0x430] */ r_edx = R32((u32)(r_ecx+0x430u));
    /* 006498b0: mov eax, dword ptr [ebp - 0xc4] */ r_eax = R32((u32)(r_ebp+0xffffff3cu));
    /* 006498b6: movzx ecx, byte ptr [eax + edx*2 + 0x2c] */ r_ecx = (u32)R8((u32)(r_eax+r_edx*2+0x2cu));
    /* 006498bb: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 006498be: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 006498c1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006498c2: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 006498c5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006498c7: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 006498ca: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 006498d0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6498d2u); call_ind(t); }
    /* 006498d2: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 006498d5: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006498d7: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 006498da: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 006498dd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6498dfu); call_ind(t); }
    /* 006498df: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 006498e5: mov edx, dword ptr [ecx + 0x430] */ r_edx = R32((u32)(r_ecx+0x430u));
    /* 006498eb: mov eax, dword ptr [ebp - 0xc4] */ r_eax = R32((u32)(r_ebp+0xffffff3cu));
    /* 006498f1: movzx ecx, byte ptr [eax + edx*2 + 0x2d] */ r_ecx = (u32)R8((u32)(r_eax+r_edx*2+0x2du));
    /* 006498f6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006498f7: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006498f9: mov edx, dword ptr [ebp - 0xc4] */ r_edx = R32((u32)(r_ebp+0xffffff3cu));
    /* 006498ff: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00649901: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 00649907: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0064990a: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x64990cu); call_ind(t); }
    /* 0064990c: mov eax, dword ptr [ebp - 0xc4] */ r_eax = R32((u32)(r_ebp+0xffffff3cu));
    /* 00649912: mov ecx, dword ptr [eax + 0x430] */ r_ecx = R32((u32)(r_eax+0x430u));
    /* 00649918: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0064991b: mov edx, dword ptr [ebp - 0xc4] */ r_edx = R32((u32)(r_ebp+0xffffff3cu));
    /* 00649921: mov dword ptr [edx + 0x430], ecx */ W32((u32)(r_edx+0x430u), r_ecx);
    /* 00649927: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0064992c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0064992e: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00649934: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 00649937: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x649939u); call_ind(t); }
    /* 00649939: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0064993c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064993e: je 0x64999c */ if (fZ) goto L_0064999c;
L_00649940:; BB(0x00649940);
    /* 00649940: mov edx, dword ptr [ebp - 0xc4] */ r_edx = R32((u32)(r_ebp+0xffffff3cu));
    /* 00649946: cmp dword ptr [edx + 0x43c], 0 */ {  u32 a = R32((u32)(r_edx+0x43cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064994d: je 0x64999c */ if (fZ) goto L_0064999c;
L_0064994f:; BB(0x0064994f);
    /* 0064994f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00649951: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00649952: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 00649958: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0064995b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064995c: fld1  */ FPUSH(1.0);
    /* 0064995e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00649961: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00649963: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00649965: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00649967: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00649969: mov eax, dword ptr [ebp - 0xc4] */ r_eax = R32((u32)(r_ebp+0xffffff3cu));
    /* 0064996f: mov ecx, dword ptr [eax + 0x43c] */ r_ecx = R32((u32)(r_eax+0x43cu));
    /* 00649975: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00649976: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0064997c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0064997e: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00649984: mov edx, dword ptr [eax + 0x80] */ r_edx = R32((u32)(r_eax+0x80u));
    /* 0064998a: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x64998cu); call_ind(t); }
    /* 0064998c: mov eax, dword ptr [ebp - 0xc4] */ r_eax = R32((u32)(r_ebp+0xffffff3cu));
    /* 00649992: mov dword ptr [eax + 0x43c], 0 */ W32((u32)(r_eax+0x43cu), 0x0u);
L_0064999c:; BB(0x0064999c);
    /* 0064999c: jmp 0x64a6ee */ goto L_0064a6ee;
L_006499a1:; BB(0x006499a1);
    /* 006499a1: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 006499a7: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 006499aa: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 006499ad: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 006499b0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006499b1: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006499b7: call 0x636d40 */ r_esp -= 4; W32(r_esp, 0x6499bcu); f_00636d40();
    /* 006499bc: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 006499bf: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006499c1: je 0x6499dd */ if (fZ) goto L_006499dd;
L_006499c3:; BB(0x006499c3);
    /* 006499c3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006499c5: mov eax, dword ptr [ebp - 0xc4] */ r_eax = R32((u32)(r_ebp+0xffffff3cu));
    /* 006499cb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006499cd: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 006499d3: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 006499d6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6499d8u); call_ind(t); }
    /* 006499d8: jmp 0x64a6ee */ goto L_0064a6ee;
L_006499dd:; BB(0x006499dd);
    /* 006499dd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006499df: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 006499e1: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 006499e7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006499e9: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 006499ef: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 006499f2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6499f4u); call_ind(t); }
    /* 006499f4: jmp 0x64a6ee */ goto L_0064a6ee;
L_006499f9:; BB(0x006499f9);
    /* 006499f9: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 006499ff: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00649a02: mov byte ptr [edx + 0x5c], 1 */ W8((u32)(r_edx+0x5cu), 0x1u);
    /* 00649a06: mov eax, dword ptr [ebp - 0xc4] */ r_eax = R32((u32)(r_ebp+0xffffff3cu));
    /* 00649a0c: movzx ecx, byte ptr [eax + 0x2c] */ r_ecx = (u32)R8((u32)(r_eax+0x2cu));
    /* 00649a10: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 00649a13: cmp dword ptr [ebp - 0x34], 0x1e */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00649a17: jne 0x649a4f */ if (!fZ) goto L_00649a4f;
L_00649a19:; BB(0x00649a19);
    /* 00649a19: push 0x219dde */ { u32 v = 0x219ddeu; r_esp -= 4; W32(r_esp, v); }
    /* 00649a1e: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00649a21: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x649a26u); f_005eaf00();
    /* 00649a26: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00649a29: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00649a2b: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00649a2e: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 00649a31: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x649a33u); call_ind(t); }
    /* 00649a33: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00649a35: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00649a37: mov eax, dword ptr [ebp - 0xc4] */ r_eax = R32((u32)(r_ebp+0xffffff3cu));
    /* 00649a3d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00649a3f: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 00649a45: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00649a48: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x649a4au); call_ind(t); }
    /* 00649a4a: jmp 0x64a6ee */ goto L_0064a6ee;
L_00649a4f:; BB(0x00649a4f);
    /* 00649a4f: cmp dword ptr [ebp - 0x34], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00649a53: jne 0x649ab4 */ if (!fZ) goto L_00649ab4;
L_00649a55:; BB(0x00649a55);
    /* 00649a55: cmp dword ptr [ebp - 0x2c], 0x20 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00649a59: jl 0x649ab4 */ if ((fS!=fO)) goto L_00649ab4;
L_00649a5b:; BB(0x00649a5b);
    /* 00649a5b: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00649a5e: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00649a5f: and edx, 0x1f */ {  u32 a = r_edx; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00649a62: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00649a64: sar eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00649a67: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00649a6a: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00649a6d: add ecx, 0x219353 */ {  u32 a = r_ecx; u32 b = 0x219353u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00649a73: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00649a74: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00649a77: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x649a7cu); f_005eaf00();
    /* 00649a7c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00649a7e: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00649a81: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00649a83: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00649a86: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 00649a8c: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x649a8eu); call_ind(t); }
    /* 00649a8e: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00649a91: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00649a93: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00649a96: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00649a99: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x649a9bu); call_ind(t); }
    /* 00649a9b: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00649a9d: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00649a9f: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 00649aa5: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00649aa7: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 00649aad: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00649ab0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x649ab2u); call_ind(t); }
    /* 00649ab2: jmp 0x649acb */ goto L_00649acb;
L_00649ab4:; BB(0x00649ab4);
    /* 00649ab4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00649ab6: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00649ab8: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 00649abe: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00649ac0: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 00649ac6: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00649ac9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x649acbu); call_ind(t); }
L_00649acb:; BB(0x00649acb);
    /* 00649acb: jmp 0x64a6ee */ goto L_0064a6ee;
L_00649ad0:; BB(0x00649ad0);
    /* 00649ad0: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 00649ad6: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00649ad9: mov byte ptr [edx + 0x5c], 1 */ W8((u32)(r_edx+0x5cu), 0x1u);
    /* 00649add: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00649ae0: call 0x5eb220 */ r_esp -= 4; W32(r_esp, 0x649ae5u); f_005eb220();
    /* 00649ae5: mov esi, eax */ r_esi = r_eax;
    /* 00649ae7: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00649aea: call 0x5eb240 */ r_esp -= 4; W32(r_esp, 0x649aefu); f_005eb240();
    /* 00649aef: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00649af1: jne 0x649b0c */ if (!fZ) goto L_00649b0c;
L_00649af3:; BB(0x00649af3);
    /* 00649af3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00649af5: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00649af7: mov eax, dword ptr [ebp - 0xc4] */ r_eax = R32((u32)(r_ebp+0xffffff3cu));
    /* 00649afd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00649aff: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 00649b05: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00649b08: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x649b0au); call_ind(t); }
    /* 00649b0a: jmp 0x649b3f */ goto L_00649b3f;
L_00649b0c:; BB(0x00649b0c);
    /* 00649b0c: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00649b0f: call 0x5eb220 */ r_esp -= 4; W32(r_esp, 0x649b14u); f_005eb220();
    /* 00649b14: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00649b17: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00649b18: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00649b1b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00649b1d: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00649b20: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00649b26: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x649b28u); call_ind(t); }
    /* 00649b28: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00649b2a: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00649b2c: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 00649b32: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00649b34: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 00649b3a: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00649b3d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x649b3fu); call_ind(t); }
L_00649b3f:; BB(0x00649b3f);
    /* 00649b3f: jmp 0x64a6ee */ goto L_0064a6ee;
L_00649b44:; BB(0x00649b44);
    /* 00649b44: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 00649b4a: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00649b4d: mov byte ptr [edx + 0x5c], 1 */ W8((u32)(r_edx+0x5cu), 0x1u);
    /* 00649b51: mov eax, dword ptr [ebp - 0xc4] */ r_eax = R32((u32)(r_ebp+0xffffff3cu));
    /* 00649b57: cmp dword ptr [eax + 0x42c], 0 */ {  u32 a = R32((u32)(r_eax+0x42cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00649b5e: jne 0x649bd0 */ if (!fZ) goto L_00649bd0;
L_00649b60:; BB(0x00649b60);
    /* 00649b60: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 00649b66: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00649b69: add edx, 0x4c */ {  u32 a = r_edx; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00649b6c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00649b6d: mov eax, dword ptr [ebp - 0xc4] */ r_eax = R32((u32)(r_ebp+0xffffff3cu));
    /* 00649b73: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00649b76: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00649b77: fld dword ptr [ecx + 0x54] */ FPUSH(R_F32((u32)(r_ecx+0x54u)));
    /* 00649b7a: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00649b7d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00649b7e: fld1  */ FPUSH(1.0);
    /* 00649b80: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00649b83: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00649b85: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 00649b87: mov edx, dword ptr [ebp - 0xc4] */ r_edx = R32((u32)(r_ebp+0xffffff3cu));
    /* 00649b8d: mov al, byte ptr [edx + 0x448] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x448u))) & 0xffu);
    /* 00649b93: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00649b94: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00649b96: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 00649b9c: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 00649b9f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00649ba0: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 00649ba5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00649ba7: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00649bad: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 00649bb3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x649bb5u); call_ind(t); }
    /* 00649bb5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00649bb6: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 00649bb8: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 00649bbe: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00649bc0: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 00649bc6: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00649bc9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x649bcbu); call_ind(t); }
    /* 00649bcb: jmp 0x649d35 */ goto L_00649d35;
L_00649bd0:; BB(0x00649bd0);
    /* 00649bd0: movzx ecx, byte ptr [0x7960cb] */ r_ecx = (u32)R8((u32)(0x7960cbu));
    /* 00649bd7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00649bd9: je 0x649c08 */ if (fZ) goto L_00649c08;
L_00649bdb:; BB(0x00649bdb);
    /* 00649bdb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00649bdd: mov edx, dword ptr [ebp - 0xc4] */ r_edx = R32((u32)(r_ebp+0xffffff3cu));
    /* 00649be3: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 00649be6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00649be7: push 0x2047474f */ { u32 v = 0x2047474fu; r_esp -= 4; W32(r_esp, v); }
    /* 00649bec: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 00649bf2: mov ecx, dword ptr [ecx + 0x18] */ r_ecx = R32((u32)(r_ecx+0x18u));
    /* 00649bf5: call 0x603c50 */ r_esp -= 4; W32(r_esp, 0x649bfau); f_00603c50();
    /* 00649bfa: mov edx, dword ptr [ebp - 0xc4] */ r_edx = R32((u32)(r_ebp+0xffffff3cu));
    /* 00649c00: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 00649c03: mov dword ptr [ecx + 0x4c], eax */ W32((u32)(r_ecx+0x4cu), r_eax);
    /* 00649c06: jmp 0x649c5e */ goto L_00649c5e;
L_00649c08:; BB(0x00649c08);
    /* 00649c08: mov edx, dword ptr [ebp - 0xc4] */ r_edx = R32((u32)(r_ebp+0xffffff3cu));
    /* 00649c0e: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 00649c11: add eax, 0x4c */ {  u32 a = r_eax; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00649c14: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00649c15: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 00649c1b: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00649c1e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00649c1f: fld dword ptr [edx + 0x54] */ FPUSH(R_F32((u32)(r_edx+0x54u)));
    /* 00649c22: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00649c25: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00649c26: fld1  */ FPUSH(1.0);
    /* 00649c28: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00649c2b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00649c2d: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 00649c2f: mov eax, dword ptr [ebp - 0xc4] */ r_eax = R32((u32)(r_ebp+0xffffff3cu));
    /* 00649c35: mov cl, byte ptr [eax + 0x448] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x448u))) & 0xffu);
    /* 00649c3b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00649c3c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00649c3e: mov edx, dword ptr [ebp - 0xc4] */ r_edx = R32((u32)(r_ebp+0xffffff3cu));
    /* 00649c44: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 00649c47: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00649c48: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00649c4e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00649c50: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00649c56: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 00649c5c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x649c5eu); call_ind(t); }
L_00649c5e:; BB(0x00649c5e);
    /* 00649c5e: call dword ptr [0x6b2474] */ { u32 t = R32((u32)(0x6b2474u)); r_esp -= 4; W32(r_esp, 0x649c64u); call_ind(t); }
    /* 00649c64: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 00649c6a: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00649c6d: mov dword ptr [edx + 0x58], eax */ W32((u32)(r_edx+0x58u), r_eax);
    /* 00649c70: mov eax, dword ptr [ebp - 0xc4] */ r_eax = R32((u32)(r_ebp+0xffffff3cu));
    /* 00649c76: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00649c79: cmp dword ptr [ecx + 0x48], 0 */ {  u32 a = R32((u32)(r_ecx+0x48u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00649c7d: je 0x649d1e */ if (fZ) goto L_00649d1e;
L_00649c83:; BB(0x00649c83);
    /* 00649c83: mov edx, dword ptr [ebp - 0xc4] */ r_edx = R32((u32)(r_ebp+0xffffff3cu));
    /* 00649c89: mov esi, dword ptr [edx + 0x20] */ r_esi = R32((u32)(r_edx+0x20u));
    /* 00649c8c: mov eax, dword ptr [ebp - 0xc4] */ r_eax = R32((u32)(r_ebp+0xffffff3cu));
    /* 00649c92: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00649c95: call 0x646d10 */ r_esp -= 4; W32(r_esp, 0x649c9au); f_00646d10();
    /* 00649c9a: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00649c9d: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 00649c9f: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 00649ca1: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00649ca4: add ecx, dword ptr [esi + 0x48] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esi+0x48u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00649ca7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00649ca8: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00649cab: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x649cb0u); f_005eaf00();
    /* 00649cb0: push 0x43c */ { u32 v = 0x43cu; r_esp -= 4; W32(r_esp, v); }
    /* 00649cb5: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x649cbau); f_00686d82();
    /* 00649cba: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00649cbd: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 00649cc0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00649cc7: cmp dword ptr [ebp - 0x60], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00649ccb: je 0x649cf8 */ if (fZ) goto L_00649cf8;
L_00649ccd:; BB(0x00649ccd);
    /* 00649ccd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00649ccf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00649cd1: mov edx, dword ptr [ebp - 0xc4] */ r_edx = R32((u32)(r_ebp+0xffffff3cu));
    /* 00649cd7: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 00649cda: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 00649cdd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00649cde: mov edx, dword ptr [ebp - 0xc4] */ r_edx = R32((u32)(r_ebp+0xffffff3cu));
    /* 00649ce4: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 00649ce7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00649ce8: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00649ceb: call 0x64a7a0 */ r_esp -= 4; W32(r_esp, 0x649cf0u); f_0064a7a0();
    /* 00649cf0: mov dword ptr [ebp - 0xe4], eax */ W32((u32)(r_ebp+0xffffff1cu), r_eax);
    /* 00649cf6: jmp 0x649d02 */ goto L_00649d02;
L_00649cf8:; BB(0x00649cf8);
    /* 00649cf8: mov dword ptr [ebp - 0xe4], 0 */ W32((u32)(r_ebp+0xffffff1cu), 0x0u);
L_00649d02:; BB(0x00649d02);
    /* 00649d02: mov ecx, dword ptr [ebp - 0xe4] */ r_ecx = R32((u32)(r_ebp+0xffffff1cu));
    /* 00649d08: mov dword ptr [ebp - 0x5c], ecx */ W32((u32)(r_ebp+0xffffffa4u), r_ecx);
    /* 00649d0b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00649d12: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00649d15: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00649d16: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00649d19: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x649d1eu); f_005f5d50();
L_00649d1e:; BB(0x00649d1e);
    /* 00649d1e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00649d20: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00649d22: mov eax, dword ptr [ebp - 0xc4] */ r_eax = R32((u32)(r_ebp+0xffffff3cu));
    /* 00649d28: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00649d2a: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 00649d30: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00649d33: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x649d35u); call_ind(t); }
L_00649d35:; BB(0x00649d35);
    /* 00649d35: jmp 0x64a6ee */ goto L_0064a6ee;
L_00649d3a:; BB(0x00649d3a);
    /* 00649d3a: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 00649d40: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00649d43: mov byte ptr [edx + 0x5c], 1 */ W8((u32)(r_edx+0x5cu), 0x1u);
    /* 00649d47: mov eax, dword ptr [ebp - 0xc4] */ r_eax = R32((u32)(r_ebp+0xffffff3cu));
    /* 00649d4d: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 00649d53: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 00649d59: cmp edx, dword ptr [ecx + 0x42c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x42cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00649d5f: jge 0x649d9e */ if ((fS==fO)) goto L_00649d9e;
L_00649d61:; BB(0x00649d61);
    /* 00649d61: movzx eax, byte ptr [0x7960cb] */ r_eax = (u32)R8((u32)(0x7960cbu));
    /* 00649d68: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00649d6a: jne 0x649df1 */ if (!fZ) goto L_00649df1;
L_00649d70:; BB(0x00649d70);
    /* 00649d70: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 00649d76: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00649d79: cmp dword ptr [edx + 0x4c], 0 */ {  u32 a = R32((u32)(r_edx+0x4cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00649d7d: je 0x649d9e */ if (fZ) goto L_00649d9e;
L_00649d7f:; BB(0x00649d7f);
    /* 00649d7f: mov eax, dword ptr [ebp - 0xc4] */ r_eax = R32((u32)(r_ebp+0xffffff3cu));
    /* 00649d85: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00649d88: mov edx, dword ptr [ecx + 0x4c] */ r_edx = R32((u32)(r_ecx+0x4cu));
    /* 00649d8b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00649d8c: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00649d92: call 0x5f45a0 */ r_esp -= 4; W32(r_esp, 0x649d97u); f_005f45a0();
    /* 00649d97: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00649d9a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00649d9c: jne 0x649df1 */ if (!fZ) goto L_00649df1;
L_00649d9e:; BB(0x00649d9e);
    /* 00649d9e: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 00649da4: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00649da7: cmp dword ptr [edx + 0x48], 0 */ {  u32 a = R32((u32)(r_edx+0x48u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00649dab: je 0x649dd5 */ if (fZ) goto L_00649dd5;
L_00649dad:; BB(0x00649dad);
    /* 00649dad: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 00649db0: cmp dword ptr [eax + 0x180], 0 */ {  u32 a = R32((u32)(r_eax+0x180u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00649db7: je 0x649dd5 */ if (fZ) goto L_00649dd5;
L_00649db9:; BB(0x00649db9);
    /* 00649db9: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00649dbb: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00649dbd: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 00649dc3: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00649dc5: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 00649dcb: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00649dce: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x649dd0u); call_ind(t); }
    /* 00649dd0: jmp 0x64a6ee */ goto L_0064a6ee;
L_00649dd5:; BB(0x00649dd5);
    /* 00649dd5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00649dd7: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 00649dd9: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 00649ddf: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00649de1: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 00649de7: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00649dea: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x649decu); call_ind(t); }
    /* 00649dec: jmp 0x64a6ee */ goto L_0064a6ee;
L_00649df1:; BB(0x00649df1);
    /* 00649df1: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 00649df7: mov edx, dword ptr [ecx + 0x430] */ r_edx = R32((u32)(r_ecx+0x430u));
    /* 00649dfd: mov eax, dword ptr [ebp - 0xc4] */ r_eax = R32((u32)(r_ebp+0xffffff3cu));
    /* 00649e03: movzx ecx, byte ptr [eax + edx*2 + 0x2c] */ r_ecx = (u32)R8((u32)(r_eax+r_edx*2+0x2cu));
    /* 00649e08: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 00649e0b: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 00649e12: mov edx, dword ptr [ebp - 0xc4] */ r_edx = R32((u32)(r_ebp+0xffffff3cu));
    /* 00649e18: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 00649e1b: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00649e1e: mov dword ptr [ebp - 0xb4], ecx */ W32((u32)(r_ebp+0xffffff4cu), r_ecx);
    /* 00649e24: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00649e2a: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x649e2fu); f_0063aac0();
    /* 00649e2f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00649e31: mov dword ptr [ebp - 0xac], edx */ W32((u32)(r_ebp+0xffffff54u), r_edx);
    /* 00649e37: cmp dword ptr [ebp - 0xac], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff54u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00649e3e: je 0x649e68 */ if (fZ) goto L_00649e68;
L_00649e40:; BB(0x00649e40);
    /* 00649e40: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00649e46: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x649e4bu); f_0063aac0();
    /* 00649e4b: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00649e4d: mov dword ptr [ebp - 0xb0], eax */ W32((u32)(r_ebp+0xffffff50u), r_eax);
    /* 00649e53: cmp dword ptr [ebp - 0xb0], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff50u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00649e5a: je 0x649e68 */ if (fZ) goto L_00649e68;
L_00649e5c:; BB(0x00649e5c);
    /* 00649e5c: mov dword ptr [ebp - 0xe8], 0 */ W32((u32)(r_ebp+0xffffff18u), 0x0u);
    /* 00649e66: jmp 0x649e72 */ goto L_00649e72;
L_00649e68:; BB(0x00649e68);
    /* 00649e68: mov dword ptr [ebp - 0xe8], 1 */ W32((u32)(r_ebp+0xffffff18u), 0x1u);
L_00649e72:; BB(0x00649e72);
    /* 00649e72: movzx ecx, byte ptr [ebp - 0xe8] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffff18u));
    /* 00649e79: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00649e7b: je 0x649f5c */ if (fZ) goto L_00649f5c;
L_00649e81:; BB(0x00649e81);
    /* 00649e81: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 00649e87: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00649e89: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00649e8f: mov edx, dword ptr [eax + 0xc8] */ r_edx = R32((u32)(r_eax+0xc8u));
    /* 00649e95: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x649e97u); call_ind(t); }
    /* 00649e97: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00649e9a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00649e9c: je 0x649ebb */ if (fZ) goto L_00649ebb;
L_00649e9e:; BB(0x00649e9e);
    /* 00649e9e: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00649ea4: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00649ea6: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00649eac: mov eax, dword ptr [edx + 0x1e0] */ r_eax = R32((u32)(r_edx+0x1e0u));
    /* 00649eb2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x649eb4u); call_ind(t); }
    /* 00649eb4: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00649eb7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00649eb9: jne 0x649edb */ if (!fZ) goto L_00649edb;
L_00649ebb:; BB(0x00649ebb);
    /* 00649ebb: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00649ebd: jne 0x649ed6 */ if (!fZ) goto L_00649ed6;
L_00649ebf:; BB(0x00649ebf);
    /* 00649ebf: push 0x652 */ { u32 v = 0x652u; r_esp -= 4; W32(r_esp, v); }
    /* 00649ec4: push 0x6dc610 */ { u32 v = 0x6dc610u; r_esp -= 4; W32(r_esp, v); }
    /* 00649ec9: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00649ece: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x649ed3u); f_005e9f20();
    /* 00649ed3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00649ed6:; BB(0x00649ed6);
    /* 00649ed6: jmp 0x64a6ee */ goto L_0064a6ee;
L_00649edb:; BB(0x00649edb);
    /* 00649edb: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 00649ee1: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00649ee4: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00649ee7: mov dword ptr [ebp - 0xb8], eax */ W32((u32)(r_ebp+0xffffff48u), r_eax);
    /* 00649eed: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 00649ef3: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x649ef8u); f_0063aac0();
    /* 00649ef8: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00649efa: mov dword ptr [ebp - 0xbc], ecx */ W32((u32)(r_ebp+0xffffff44u), r_ecx);
    /* 00649f00: cmp dword ptr [ebp - 0xbc], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff44u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00649f07: je 0x649f29 */ if (fZ) goto L_00649f29;
L_00649f09:; BB(0x00649f09);
    /* 00649f09: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00649f0b: jne 0x649f24 */ if (!fZ) goto L_00649f24;
L_00649f0d:; BB(0x00649f0d);
    /* 00649f0d: push 0x654 */ { u32 v = 0x654u; r_esp -= 4; W32(r_esp, v); }
    /* 00649f12: push 0x6dc610 */ { u32 v = 0x6dc610u; r_esp -= 4; W32(r_esp, v); }
    /* 00649f17: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00649f1c: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x649f21u); f_005e9f20();
    /* 00649f21: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00649f24:; BB(0x00649f24);
    /* 00649f24: jmp 0x64a6ee */ goto L_0064a6ee;
L_00649f29:; BB(0x00649f29);
    /* 00649f29: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 00649f2f: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00649f32: mov eax, dword ptr [edx + 0x34] */ r_eax = R32((u32)(r_edx+0x34u));
    /* 00649f35: mov dword ptr [ebp - 0xc0], eax */ W32((u32)(r_ebp+0xffffff40u), r_eax);
    /* 00649f3b: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 00649f41: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00649f42: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00649f45: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00649f46: mov eax, dword ptr [ebp - 0xc4] */ r_eax = R32((u32)(r_ebp+0xffffff3cu));
    /* 00649f4c: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00649f4f: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 00649f52: call 0x665270 */ r_esp -= 4; W32(r_esp, 0x649f57u); f_00665270();
    /* 00649f57: jmp 0x64a028 */ goto L_0064a028;
L_00649f5c:; BB(0x00649f5c);
    /* 00649f5c: mov edx, dword ptr [ebp - 0xc4] */ r_edx = R32((u32)(r_ebp+0xffffff3cu));
    /* 00649f62: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 00649f65: cmp dword ptr [eax + 0x48], 0 */ {  u32 a = R32((u32)(r_eax+0x48u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00649f69: jne 0x649fda */ if (!fZ) goto L_00649fda;
L_00649f6b:; BB(0x00649f6b);
    /* 00649f6b: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 00649f71: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 00649f74: call 0x646d10 */ r_esp -= 4; W32(r_esp, 0x649f79u); f_00646d10();
    /* 00649f79: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00649f7a: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00649f7d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00649f7e: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00649f84: call 0x639610 */ r_esp -= 4; W32(r_esp, 0x649f89u); f_00639610();
    /* 00649f89: add eax, dword ptr [ebp - 0x4c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffb4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00649f8c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00649f8d: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00649f90: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x649f95u); f_005eaf00();
    /* 00649f95: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00649f98: call 0x5eb240 */ r_esp -= 4; W32(r_esp, 0x649f9du); f_005eb240();
    /* 00649f9d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00649f9e: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 00649fa1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00649fa3: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00649fa6: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00649fac: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x649faeu); call_ind(t); }
    /* 00649fae: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 00649fb4: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 00649fb7: call 0x646d10 */ r_esp -= 4; W32(r_esp, 0x649fbcu); f_00646d10();
    /* 00649fbc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00649fbd: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00649fc0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00649fc1: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00649fc7: call 0x639670 */ r_esp -= 4; W32(r_esp, 0x649fccu); f_00639670();
    /* 00649fcc: add eax, dword ptr [ebp - 0x4c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffb4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00649fcf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00649fd0: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00649fd3: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x649fd8u); f_005eaf00();
    /* 00649fd8: jmp 0x64a007 */ goto L_0064a007;
L_00649fda:; BB(0x00649fda);
    /* 00649fda: mov eax, dword ptr [ebp - 0xc4] */ r_eax = R32((u32)(r_ebp+0xffffff3cu));
    /* 00649fe0: mov esi, dword ptr [eax + 0x20] */ r_esi = R32((u32)(r_eax+0x20u));
    /* 00649fe3: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 00649fe9: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 00649fec: call 0x646d10 */ r_esp -= 4; W32(r_esp, 0x649ff1u); f_00646d10();
    /* 00649ff1: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00649ff4: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); fC = (b != 0); }
    /* 00649ff6: sbb edx, edx */ { u32 c = fC; u32 a = r_edx; u32 b = r_edx; u32 r = (a - b - c) & 0xffffffffu; r_edx = r;  }
    /* 00649ff8: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00649ffb: add edx, dword ptr [esi + 0x48] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esi+0x48u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00649ffe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00649fff: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0064a002: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x64a007u); f_005eaf00();
L_0064a007:; BB(0x0064a007);
    /* 0064a007: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0064a00a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064a00b: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0064a00e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0064a010: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0064a013: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0064a019: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64a01bu); call_ind(t); }
    /* 0064a01b: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0064a01e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0064a020: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0064a023: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0064a026: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64a028u); call_ind(t); }
L_0064a028:; BB(0x0064a028);
    /* 0064a028: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 0064a02e: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 0064a031: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 0064a034: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064a035: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 0064a03b: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 0064a03e: call 0x608410 */ r_esp -= 4; W32(r_esp, 0x64a043u); f_00608410();
    /* 0064a043: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0064a046: movzx edx, byte ptr [0x7960cb] */ r_edx = (u32)R8((u32)(0x7960cbu));
    /* 0064a04d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064a04f: je 0x64a068 */ if (fZ) goto L_0064a068;
L_0064a051:; BB(0x0064a051);
    /* 0064a051: call dword ptr [0x6b2474] */ { u32 t = R32((u32)(0x6b2474u)); r_esp -= 4; W32(r_esp, 0x64a057u); call_ind(t); }
    /* 0064a057: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 0064a05d: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 0064a060: sub eax, dword ptr [edx + 0x58] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x58u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0064a063: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0064a066: jmp 0x64a07d */ goto L_0064a07d;
L_0064a068:; BB(0x0064a068);
    /* 0064a068: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064a06b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064a06c: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 0064a072: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 0064a075: call 0x608790 */ r_esp -= 4; W32(r_esp, 0x64a07au); f_00608790();
    /* 0064a07a: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_0064a07d:; BB(0x0064a07d);
    /* 0064a07d: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0064a080: imul eax, eax, 0x3c */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3cu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0064a083: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0064a084: mov ecx, 0x3e8 */ r_ecx = 0x3e8u;
    /* 0064a089: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0064a089, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0064a089, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0064a08b: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0064a08e: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
    /* 0064a095: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 0064a09c: jmp 0x64a0a7 */ goto L_0064a0a7;
L_0064a09e:; BB(0x0064a09e);
    /* 0064a09e: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064a0a1: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0064a0a4: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
L_0064a0a7:; BB(0x0064a0a7);
    /* 0064a0a7: mov eax, dword ptr [ebp - 0xc4] */ r_eax = R32((u32)(r_ebp+0xffffff3cu));
    /* 0064a0ad: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064a0b0: cmp ecx, dword ptr [eax + 0x430] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x430u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064a0b6: jge 0x64a0ce */ if ((fS==fO)) goto L_0064a0ce;
L_0064a0b8:; BB(0x0064a0b8);
    /* 0064a0b8: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064a0bb: mov eax, dword ptr [ebp - 0xc4] */ r_eax = R32((u32)(r_ebp+0xffffff3cu));
    /* 0064a0c1: movzx ecx, byte ptr [eax + edx*2 + 0x2d] */ r_ecx = (u32)R8((u32)(r_eax+r_edx*2+0x2du));
    /* 0064a0c6: add ecx, dword ptr [ebp - 0x54] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffacu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0064a0c9: mov dword ptr [ebp - 0x54], ecx */ W32((u32)(r_ebp+0xffffffacu), r_ecx);
    /* 0064a0cc: jmp 0x64a09e */ goto L_0064a09e;
L_0064a0ce:; BB(0x0064a0ce);
    /* 0064a0ce: mov edx, dword ptr [ebp - 0xc4] */ r_edx = R32((u32)(r_ebp+0xffffff3cu));
    /* 0064a0d4: mov eax, dword ptr [edx + 0x430] */ r_eax = R32((u32)(r_edx+0x430u));
    /* 0064a0da: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 0064a0e0: movzx edx, byte ptr [ecx + eax*2 + 0x2d] */ r_edx = (u32)R8((u32)(r_ecx+r_eax*2+0x2du));
    /* 0064a0e5: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 0064a0e8: mov byte ptr [ebp - 0x55], 0 */ W8((u32)(r_ebp+0xffffffabu), 0x0u);
    /* 0064a0ec: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 0064a0ef: cmp eax, dword ptr [ebp - 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064a0f2: jle 0x64a123 */ if ((fZ||fS!=fO)) goto L_0064a123;
L_0064a0f4:; BB(0x0064a0f4);
    /* 0064a0f4: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0064a0f7: sub ecx, dword ptr [ebp - 0x18] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0064a0fa: cmp ecx, 0xf */ {  u32 a = r_ecx; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064a0fd: jge 0x64a10d */ if ((fS==fO)) goto L_0064a10d;
L_0064a0ff:; BB(0x0064a0ff);
    /* 0064a0ff: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 0064a102: sub edx, dword ptr [ebp - 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0064a105: mov dword ptr [ebp - 0xec], edx */ W32((u32)(r_ebp+0xffffff14u), r_edx);
    /* 0064a10b: jmp 0x64a117 */ goto L_0064a117;
L_0064a10d:; BB(0x0064a10d);
    /* 0064a10d: mov dword ptr [ebp - 0xec], 0xf */ W32((u32)(r_ebp+0xffffff14u), 0xfu);
L_0064a117:; BB(0x0064a117);
    /* 0064a117: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 0064a11a: add eax, dword ptr [ebp - 0xec] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffff14u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0064a120: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
L_0064a123:; BB(0x0064a123);
    /* 0064a123: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064a126: cmp ecx, dword ptr [ebp - 0x54] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffacu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064a129: jle 0x64a14c */ if ((fZ||fS!=fO)) goto L_0064a14c;
L_0064a12b:; BB(0x0064a12b);
    /* 0064a12b: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064a12e: sub edx, dword ptr [ebp - 0x54] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffacu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0064a131: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 0064a134: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r; fS = ((r >> 31) & 1); }
    /* 0064a136: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 0064a139: jns 0x64a14c */ if (!fS) goto L_0064a14c;
L_0064a13b:; BB(0x0064a13b);
    /* 0064a13b: cmp dword ptr [ebp - 0x50], -5 */ {  u32 a = R32((u32)(r_ebp+0xffffffb0u)); u32 b = 0xfffffffbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064a13f: jg 0x64a145 */ if ((!fZ&&fS==fO)) goto L_0064a145;
L_0064a141:; BB(0x0064a141);
    /* 0064a141: mov byte ptr [ebp - 0x55], 1 */ W8((u32)(r_ebp+0xffffffabu), 0x1u);
L_0064a145:; BB(0x0064a145);
    /* 0064a145: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
L_0064a14c:; BB(0x0064a14c);
    /* 0064a14c: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0064a14f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064a150: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0064a152: mov edx, dword ptr [ebp - 0xc4] */ r_edx = R32((u32)(r_ebp+0xffffff3cu));
    /* 0064a158: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0064a15a: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 0064a160: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0064a163: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x64a165u); call_ind(t); }
    /* 0064a165: mov eax, dword ptr [ebp - 0xc4] */ r_eax = R32((u32)(r_ebp+0xffffff3cu));
    /* 0064a16b: mov ecx, dword ptr [eax + 0x430] */ r_ecx = R32((u32)(r_eax+0x430u));
    /* 0064a171: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0064a174: mov edx, dword ptr [ebp - 0xc4] */ r_edx = R32((u32)(r_ebp+0xffffff3cu));
    /* 0064a17a: mov dword ptr [edx + 0x430], ecx */ W32((u32)(r_edx+0x430u), r_ecx);
    /* 0064a180: movzx eax, byte ptr [ebp - 0x55] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffabu));
    /* 0064a184: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064a186: je 0x64a193 */ if (fZ) goto L_0064a193;
L_0064a188:; BB(0x0064a188);
    /* 0064a188: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 0064a18e: call 0x5fc3d0 */ r_esp -= 4; W32(r_esp, 0x64a193u); f_005fc3d0();
L_0064a193:; BB(0x0064a193);
    /* 0064a193: jmp 0x64a6ee */ goto L_0064a6ee;
L_0064a198:; BB(0x0064a198);
    /* 0064a198: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 0064a19e: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 0064a1a1: mov byte ptr [edx + 0x5c], 1 */ W8((u32)(r_edx+0x5cu), 0x1u);
    /* 0064a1a5: mov eax, dword ptr [ebp - 0xc4] */ r_eax = R32((u32)(r_ebp+0xffffff3cu));
    /* 0064a1ab: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0064a1ae: mov dword ptr [ecx + 0x48], 0 */ W32((u32)(r_ecx+0x48u), 0x0u);
    /* 0064a1b5: mov edx, dword ptr [ebp - 0xc4] */ r_edx = R32((u32)(r_ebp+0xffffff3cu));
    /* 0064a1bb: movzx eax, byte ptr [edx + 0x2c] */ r_eax = (u32)R8((u32)(r_edx+0x2cu));
    /* 0064a1bf: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0064a1c2: cmp dword ptr [ebp - 0x34], 0x1e */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064a1c6: jne 0x64a1fe */ if (!fZ) goto L_0064a1fe;
L_0064a1c8:; BB(0x0064a1c8);
    /* 0064a1c8: push 0x219dde */ { u32 v = 0x219ddeu; r_esp -= 4; W32(r_esp, v); }
    /* 0064a1cd: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0064a1d0: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x64a1d5u); f_005eaf00();
    /* 0064a1d5: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0064a1d8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0064a1da: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0064a1dd: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0064a1e0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64a1e2u); call_ind(t); }
    /* 0064a1e2: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0064a1e4: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0064a1e6: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 0064a1ec: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0064a1ee: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 0064a1f4: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0064a1f7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64a1f9u); call_ind(t); }
    /* 0064a1f9: jmp 0x64a6ee */ goto L_0064a6ee;
L_0064a1fe:; BB(0x0064a1fe);
    /* 0064a1fe: cmp dword ptr [ebp - 0x34], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064a202: jne 0x64a26a */ if (!fZ) goto L_0064a26a;
L_0064a204:; BB(0x0064a204);
    /* 0064a204: cmp dword ptr [ebp - 0x2c], 0x20 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064a208: jl 0x64a26a */ if ((fS!=fO)) goto L_0064a26a;
L_0064a20a:; BB(0x0064a20a);
    /* 0064a20a: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0064a20d: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0064a20e: and edx, 0x1f */ {  u32 a = r_edx; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0064a211: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0064a213: sar eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0064a216: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0064a219: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0064a21c: add ecx, 0x219353 */ {  u32 a = r_ecx; u32 b = 0x219353u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0064a222: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064a223: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0064a226: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x64a22bu); f_005eaf00();
    /* 0064a22b: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0064a22e: call 0x5eb240 */ r_esp -= 4; W32(r_esp, 0x64a233u); f_005eb240();
    /* 0064a233: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064a234: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0064a237: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0064a239: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0064a23c: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 0064a242: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x64a244u); call_ind(t); }
    /* 0064a244: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0064a247: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0064a249: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0064a24c: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0064a24f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64a251u); call_ind(t); }
    /* 0064a251: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0064a253: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0064a255: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 0064a25b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0064a25d: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 0064a263: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0064a266: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64a268u); call_ind(t); }
    /* 0064a268: jmp 0x64a281 */ goto L_0064a281;
L_0064a26a:; BB(0x0064a26a);
    /* 0064a26a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064a26c: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0064a26e: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 0064a274: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0064a276: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 0064a27c: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0064a27f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64a281u); call_ind(t); }
L_0064a281:; BB(0x0064a281);
    /* 0064a281: jmp 0x64a6ee */ goto L_0064a6ee;
L_0064a286:; BB(0x0064a286);
    /* 0064a286: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 0064a28c: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 0064a28f: mov byte ptr [edx + 0x5c], 1 */ W8((u32)(r_edx+0x5cu), 0x1u);
    /* 0064a293: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0064a296: call 0x5eb220 */ r_esp -= 4; W32(r_esp, 0x64a29bu); f_005eb220();
    /* 0064a29b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064a29d: jne 0x64a2b8 */ if (!fZ) goto L_0064a2b8;
L_0064a29f:; BB(0x0064a29f);
    /* 0064a29f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064a2a1: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0064a2a3: mov eax, dword ptr [ebp - 0xc4] */ r_eax = R32((u32)(r_ebp+0xffffff3cu));
    /* 0064a2a9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0064a2ab: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 0064a2b1: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0064a2b4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64a2b6u); call_ind(t); }
    /* 0064a2b6: jmp 0x64a2eb */ goto L_0064a2eb;
L_0064a2b8:; BB(0x0064a2b8);
    /* 0064a2b8: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0064a2bb: call 0x5eb220 */ r_esp -= 4; W32(r_esp, 0x64a2c0u); f_005eb220();
    /* 0064a2c0: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0064a2c3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064a2c4: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0064a2c7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0064a2c9: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0064a2cc: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0064a2d2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64a2d4u); call_ind(t); }
    /* 0064a2d4: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0064a2d6: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0064a2d8: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 0064a2de: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0064a2e0: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 0064a2e6: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0064a2e9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64a2ebu); call_ind(t); }
L_0064a2eb:; BB(0x0064a2eb);
    /* 0064a2eb: jmp 0x64a6ee */ goto L_0064a6ee;
L_0064a2f0:; BB(0x0064a2f0);
    /* 0064a2f0: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 0064a2f6: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 0064a2f9: mov byte ptr [edx + 0x50], 1 */ W8((u32)(r_edx+0x50u), 0x1u);
    /* 0064a2fd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064a2ff: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064a301: mov eax, dword ptr [ebp - 0xc4] */ r_eax = R32((u32)(r_ebp+0xffffff3cu));
    /* 0064a307: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0064a30a: call 0x6464d0 */ r_esp -= 4; W32(r_esp, 0x64a30fu); f_006464d0();
    /* 0064a30f: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 0064a315: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 0064a318: mov byte ptr [edx + 0x50], 0 */ W8((u32)(r_edx+0x50u), 0x0u);
    /* 0064a31c: mov eax, dword ptr [ebp - 0xc4] */ r_eax = R32((u32)(r_ebp+0xffffff3cu));
    /* 0064a322: cmp dword ptr [eax + 0x440], 0 */ {  u32 a = R32((u32)(r_eax+0x440u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064a329: jle 0x64a36b */ if ((fZ||fS!=fO)) goto L_0064a36b;
L_0064a32b:; BB(0x0064a32b);
    /* 0064a32b: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 0064a331: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 0064a334: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 0064a339: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0064a33c: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0064a33e: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0064a341: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64a343u); call_ind(t); }
    /* 0064a343: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 0064a349: sub eax, dword ptr [ecx + 0x444] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x444u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0064a34f: mov edx, dword ptr [ebp - 0xc4] */ r_edx = R32((u32)(r_ebp+0xffffff3cu));
    /* 0064a355: mov ecx, dword ptr [edx + 0x440] */ r_ecx = R32((u32)(r_edx+0x440u));
    /* 0064a35b: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fS = ((r >> 31) & 1); }
    /* 0064a35d: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 0064a360: jns 0x64a369 */ if (!fS) goto L_0064a369;
L_0064a362:; BB(0x0064a362);
    /* 0064a362: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_0064a369:; BB(0x0064a369);
    /* 0064a369: jmp 0x64a372 */ goto L_0064a372;
L_0064a36b:; BB(0x0064a36b);
    /* 0064a36b: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_0064a372:; BB(0x0064a372);
    /* 0064a372: mov edx, dword ptr [ebp - 0xc4] */ r_edx = R32((u32)(r_ebp+0xffffff3cu));
    /* 0064a378: cmp dword ptr [edx + 0x10], 0 */ {  u32 a = R32((u32)(r_edx+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064a37c: je 0x64a39b */ if (fZ) goto L_0064a39b;
L_0064a37e:; BB(0x0064a37e);
    /* 0064a37e: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0064a381: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064a382: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 0064a388: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 0064a38b: mov eax, dword ptr [ebp - 0xc4] */ r_eax = R32((u32)(r_ebp+0xffffff3cu));
    /* 0064a391: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 0064a394: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0064a396: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0064a399: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64a39bu); call_ind(t); }
L_0064a39b:; BB(0x0064a39b);
    /* 0064a39b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064a39d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064a39f: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 0064a3a5: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0064a3a7: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 0064a3ad: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0064a3b0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64a3b2u); call_ind(t); }
    /* 0064a3b2: jmp 0x64a6ee */ goto L_0064a6ee;
L_0064a3b7:; BB(0x0064a3b7);
    /* 0064a3b7: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 0064a3be: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0064a3c1: call 0x5eafc0 */ r_esp -= 4; W32(r_esp, 0x64a3c6u); f_005eafc0();
    /* 0064a3c6: mov dword ptr [ebp - 0xf0], eax */ W32((u32)(r_ebp+0xffffff10u), r_eax);
    /* 0064a3cc: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 0064a3d2: sub ecx, 0xf712c */ {  u32 a = r_ecx; u32 b = 0xf712cu; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0064a3d8: mov dword ptr [ebp - 0xf0], ecx */ W32((u32)(r_ebp+0xffffff10u), r_ecx);
    /* 0064a3de: cmp dword ptr [ebp - 0xf0], 0x35 */ {  u32 a = R32((u32)(r_ebp+0xffffff10u)); u32 b = 0x35u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0064a3e5: ja 0x64a5a8 */ if ((!fC&&!fZ)) goto L_0064a5a8;
L_0064a3eb:; BB(0x0064a3eb);
    /* 0064a3eb: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 0064a3f1: movzx eax, byte ptr [edx + 0x64a760] */ r_eax = (u32)R8((u32)(r_edx+0x64a760u));
    /* 0064a3f8: jmp dword ptr [eax*4 + 0x64a740] */ { u32 t = R32((u32)(r_eax*4+0x64a740u)); switch (t) { case 0x64a616u: goto L_0064a616; case 0x64a3b7u: goto L_0064a3b7; case 0x64a2f0u: goto L_0064a2f0; case 0x64a286u: goto L_0064a286; case 0x64a198u: goto L_0064a198; case 0x649d3au: goto L_00649d3a; case 0x649b44u: goto L_00649b44; case 0x649ad0u: goto L_00649ad0; case 0x6499f9u: goto L_006499f9; case 0x6499a1u: goto L_006499a1; case 0x64974au: goto L_0064974a; case 0x6496afu: goto L_006496af; case 0x649607u: goto L_00649607; case 0x649392u: goto L_00649392; case 0x6491f7u: goto L_006491f7; case 0x64904bu: goto L_0064904b; case 0x64a3ffu: goto L_0064a3ff; case 0x64a4bbu: goto L_0064a4bb; case 0x64a58au: goto L_0064a58a; case 0x64a414u: goto L_0064a414; case 0x64a474u: goto L_0064a474; case 0x64a546u: goto L_0064a546; case 0x64a502u: goto L_0064a502; case 0x64a5a8u: goto L_0064a5a8; default: UNSUP(0x0064a3f8, "jump table entry is not a known target"); } }
L_0064a3ff:; BB(0x0064a3ff);
    /* 0064a3ff: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 0064a405: mov dword ptr [ecx + 0x42c], 0 */ W32((u32)(r_ecx+0x42cu), 0x0u);
    /* 0064a40f: jmp 0x64a5b6 */ goto L_0064a5b6;
L_0064a414:; BB(0x0064a414);
    /* 0064a414: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0064a416: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x64a41bu); f_0062fbf0();
    /* 0064a41b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064a41e: mov dword ptr [ebp - 0xf4], eax */ W32((u32)(r_ebp+0xffffff0cu), r_eax);
    /* 0064a424: cmp dword ptr [ebp - 0xf4], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff0cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064a42b: je 0x64a441 */ if (fZ) goto L_0064a441;
L_0064a42d:; BB(0x0064a42d);
    /* 0064a42d: cmp dword ptr [ebp - 0xf4], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffff0cu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064a434: je 0x64a451 */ if (fZ) goto L_0064a451;
L_0064a436:; BB(0x0064a436);
    /* 0064a436: cmp dword ptr [ebp - 0xf4], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff0cu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064a43d: je 0x64a461 */ if (fZ) goto L_0064a461;
L_0064a43f:; BB(0x0064a43f);
    /* 0064a43f: jmp 0x64a46f */ goto L_0064a46f;
L_0064a441:; BB(0x0064a441);
    /* 0064a441: mov dword ptr [ebp - 0x14], 0x76d3cc */ W32((u32)(r_ebp+0xffffffecu), 0x76d3ccu);
    /* 0064a448: mov dword ptr [ebp - 0x38], 6 */ W32((u32)(r_ebp+0xffffffc8u), 0x6u);
    /* 0064a44f: jmp 0x64a46f */ goto L_0064a46f;
L_0064a451:; BB(0x0064a451);
    /* 0064a451: mov dword ptr [ebp - 0x14], 0x76d3c4 */ W32((u32)(r_ebp+0xffffffecu), 0x76d3c4u);
    /* 0064a458: mov dword ptr [ebp - 0x38], 6 */ W32((u32)(r_ebp+0xffffffc8u), 0x6u);
    /* 0064a45f: jmp 0x64a46f */ goto L_0064a46f;
L_0064a461:; BB(0x0064a461);
    /* 0064a461: mov dword ptr [ebp - 0x14], 0x76d3bc */ W32((u32)(r_ebp+0xffffffecu), 0x76d3bcu);
    /* 0064a468: mov dword ptr [ebp - 0x38], 8 */ W32((u32)(r_ebp+0xffffffc8u), 0x8u);
L_0064a46f:; BB(0x0064a46f);
    /* 0064a46f: jmp 0x64a5b6 */ goto L_0064a5b6;
L_0064a474:; BB(0x0064a474);
    /* 0064a474: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0064a476: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x64a47bu); f_0062fbf0();
    /* 0064a47b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064a47e: mov dword ptr [ebp - 0xf8], eax */ W32((u32)(r_ebp+0xffffff08u), r_eax);
    /* 0064a484: cmp dword ptr [ebp - 0xf8], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff08u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064a48b: je 0x64a498 */ if (fZ) goto L_0064a498;
L_0064a48d:; BB(0x0064a48d);
    /* 0064a48d: cmp dword ptr [ebp - 0xf8], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffff08u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064a494: je 0x64a4a8 */ if (fZ) goto L_0064a4a8;
L_0064a496:; BB(0x0064a496);
    /* 0064a496: jmp 0x64a4b6 */ goto L_0064a4b6;
L_0064a498:; BB(0x0064a498);
    /* 0064a498: mov dword ptr [ebp - 0x14], 0x76d3cc */ W32((u32)(r_ebp+0xffffffecu), 0x76d3ccu);
    /* 0064a49f: mov dword ptr [ebp - 0x38], 6 */ W32((u32)(r_ebp+0xffffffc8u), 0x6u);
    /* 0064a4a6: jmp 0x64a4b6 */ goto L_0064a4b6;
L_0064a4a8:; BB(0x0064a4a8);
    /* 0064a4a8: mov dword ptr [ebp - 0x14], 0x76d3b0 */ W32((u32)(r_ebp+0xffffffecu), 0x76d3b0u);
    /* 0064a4af: mov dword ptr [ebp - 0x38], 0xc */ W32((u32)(r_ebp+0xffffffc8u), 0xcu);
L_0064a4b6:; BB(0x0064a4b6);
    /* 0064a4b6: jmp 0x64a5b6 */ goto L_0064a5b6;
L_0064a4bb:; BB(0x0064a4bb);
    /* 0064a4bb: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0064a4bd: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x64a4c2u); f_0062fbf0();
    /* 0064a4c2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064a4c5: mov dword ptr [ebp - 0xfc], eax */ W32((u32)(r_ebp+0xffffff04u), r_eax);
    /* 0064a4cb: cmp dword ptr [ebp - 0xfc], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff04u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064a4d2: je 0x64a4df */ if (fZ) goto L_0064a4df;
L_0064a4d4:; BB(0x0064a4d4);
    /* 0064a4d4: cmp dword ptr [ebp - 0xfc], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffff04u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064a4db: je 0x64a4ef */ if (fZ) goto L_0064a4ef;
L_0064a4dd:; BB(0x0064a4dd);
    /* 0064a4dd: jmp 0x64a4fd */ goto L_0064a4fd;
L_0064a4df:; BB(0x0064a4df);
    /* 0064a4df: mov dword ptr [ebp - 0x14], 0x76d3a0 */ W32((u32)(r_ebp+0xffffffecu), 0x76d3a0u);
    /* 0064a4e6: mov dword ptr [ebp - 0x38], 0x10 */ W32((u32)(r_ebp+0xffffffc8u), 0x10u);
    /* 0064a4ed: jmp 0x64a4fd */ goto L_0064a4fd;
L_0064a4ef:; BB(0x0064a4ef);
    /* 0064a4ef: mov dword ptr [ebp - 0x14], 0x76d390 */ W32((u32)(r_ebp+0xffffffecu), 0x76d390u);
    /* 0064a4f6: mov dword ptr [ebp - 0x38], 0x10 */ W32((u32)(r_ebp+0xffffffc8u), 0x10u);
L_0064a4fd:; BB(0x0064a4fd);
    /* 0064a4fd: jmp 0x64a5b6 */ goto L_0064a5b6;
L_0064a502:; BB(0x0064a502);
    /* 0064a502: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0064a504: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x64a509u); f_0062fbf0();
    /* 0064a509: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064a50c: mov dword ptr [ebp - 0x100], eax */ W32((u32)(r_ebp+0xffffff00u), r_eax);
    /* 0064a512: cmp dword ptr [ebp - 0x100], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff00u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064a519: je 0x64a526 */ if (fZ) goto L_0064a526;
L_0064a51b:; BB(0x0064a51b);
    /* 0064a51b: cmp dword ptr [ebp - 0x100], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffff00u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064a522: je 0x64a536 */ if (fZ) goto L_0064a536;
L_0064a524:; BB(0x0064a524);
    /* 0064a524: jmp 0x64a544 */ goto L_0064a544;
L_0064a526:; BB(0x0064a526);
    /* 0064a526: mov dword ptr [ebp - 0x14], 0x76d3cc */ W32((u32)(r_ebp+0xffffffecu), 0x76d3ccu);
    /* 0064a52d: mov dword ptr [ebp - 0x38], 6 */ W32((u32)(r_ebp+0xffffffc8u), 0x6u);
    /* 0064a534: jmp 0x64a544 */ goto L_0064a544;
L_0064a536:; BB(0x0064a536);
    /* 0064a536: mov dword ptr [ebp - 0x14], 0x76d388 */ W32((u32)(r_ebp+0xffffffecu), 0x76d388u);
    /* 0064a53d: mov dword ptr [ebp - 0x38], 6 */ W32((u32)(r_ebp+0xffffffc8u), 0x6u);
L_0064a544:; BB(0x0064a544);
    /* 0064a544: jmp 0x64a5b6 */ goto L_0064a5b6;
L_0064a546:; BB(0x0064a546);
    /* 0064a546: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0064a548: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x64a54du); f_0062fbf0();
    /* 0064a54d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064a550: mov dword ptr [ebp - 0x104], eax */ W32((u32)(r_ebp+0xfffffefcu), r_eax);
    /* 0064a556: cmp dword ptr [ebp - 0x104], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffefcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064a55d: je 0x64a56a */ if (fZ) goto L_0064a56a;
L_0064a55f:; BB(0x0064a55f);
    /* 0064a55f: cmp dword ptr [ebp - 0x104], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffefcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064a566: je 0x64a57a */ if (fZ) goto L_0064a57a;
L_0064a568:; BB(0x0064a568);
    /* 0064a568: jmp 0x64a588 */ goto L_0064a588;
L_0064a56a:; BB(0x0064a56a);
    /* 0064a56a: mov dword ptr [ebp - 0x14], 0x76d3cc */ W32((u32)(r_ebp+0xffffffecu), 0x76d3ccu);
    /* 0064a571: mov dword ptr [ebp - 0x38], 6 */ W32((u32)(r_ebp+0xffffffc8u), 0x6u);
    /* 0064a578: jmp 0x64a588 */ goto L_0064a588;
L_0064a57a:; BB(0x0064a57a);
    /* 0064a57a: mov dword ptr [ebp - 0x14], 0x76d380 */ W32((u32)(r_ebp+0xffffffecu), 0x76d380u);
    /* 0064a581: mov dword ptr [ebp - 0x38], 6 */ W32((u32)(r_ebp+0xffffffc8u), 0x6u);
L_0064a588:; BB(0x0064a588);
    /* 0064a588: jmp 0x64a5b6 */ goto L_0064a5b6;
L_0064a58a:; BB(0x0064a58a);
    /* 0064a58a: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0064a58c: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x64a591u); f_0062fbf0();
    /* 0064a591: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064a594: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064a596: jne 0x64a5a8 */ if (!fZ) goto L_0064a5a8;
L_0064a598:; BB(0x0064a598);
    /* 0064a598: mov dword ptr [ebp - 0x14], 0x76d37c */ W32((u32)(r_ebp+0xffffffecu), 0x76d37cu);
    /* 0064a59f: mov dword ptr [ebp - 0x38], 2 */ W32((u32)(r_ebp+0xffffffc8u), 0x2u);
    /* 0064a5a6: jmp 0x64a5b6 */ goto L_0064a5b6;
L_0064a5a8:; BB(0x0064a5a8);
    /* 0064a5a8: mov dword ptr [ebp - 0x14], 0x76d3cc */ W32((u32)(r_ebp+0xffffffecu), 0x76d3ccu);
    /* 0064a5af: mov dword ptr [ebp - 0x38], 6 */ W32((u32)(r_ebp+0xffffffc8u), 0x6u);
L_0064a5b6:; BB(0x0064a5b6);
    /* 0064a5b6: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064a5ba: je 0x64a5ea */ if (fZ) goto L_0064a5ea;
L_0064a5bc:; BB(0x0064a5bc);
    /* 0064a5bc: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0064a5bf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064a5c0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0064a5c3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064a5c4: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 0064a5ca: add ecx, 0x2c */ {  u32 a = r_ecx; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0064a5cd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064a5ce: call 0x686fde */ r_esp -= 4; W32(r_esp, 0x64a5d3u); f_00686fde();
    /* 0064a5d3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064a5d6: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0064a5d9: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0064a5da: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0064a5dc: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0064a5de: mov edx, dword ptr [ebp - 0xc4] */ r_edx = R32((u32)(r_ebp+0xffffff3cu));
    /* 0064a5e4: mov dword ptr [edx + 0x42c], eax */ W32((u32)(r_edx+0x42cu), r_eax);
L_0064a5ea:; BB(0x0064a5ea);
    /* 0064a5ea: mov eax, dword ptr [ebp - 0xc4] */ r_eax = R32((u32)(r_ebp+0xffffff3cu));
    /* 0064a5f0: mov dword ptr [eax + 0x430], 0 */ W32((u32)(r_eax+0x430u), 0x0u);
    /* 0064a5fa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064a5fc: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0064a5fe: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 0064a604: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0064a606: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 0064a60c: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0064a60f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64a611u); call_ind(t); }
    /* 0064a611: jmp 0x64a6ee */ goto L_0064a6ee;
L_0064a616:; BB(0x0064a616);
    /* 0064a616: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 0064a61c: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 0064a61f: mov byte ptr [edx + 0x5c], 1 */ W8((u32)(r_edx+0x5cu), 0x1u);
    /* 0064a623: mov eax, dword ptr [ebp - 0xc4] */ r_eax = R32((u32)(r_ebp+0xffffff3cu));
    /* 0064a629: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 0064a62f: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 0064a635: cmp edx, dword ptr [ecx + 0x42c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x42cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064a63b: jl 0x64a66b */ if ((fS!=fO)) goto L_0064a66b;
L_0064a63d:; BB(0x0064a63d);
    /* 0064a63d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064a63f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064a641: mov eax, dword ptr [ebp - 0xc4] */ r_eax = R32((u32)(r_ebp+0xffffff3cu));
    /* 0064a647: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0064a64a: call 0x6464d0 */ r_esp -= 4; W32(r_esp, 0x64a64fu); f_006464d0();
    /* 0064a64f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064a651: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064a653: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 0064a659: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0064a65b: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 0064a661: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0064a664: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64a666u); call_ind(t); }
    /* 0064a666: jmp 0x64a6ee */ goto L_0064a6ee;
L_0064a66b:; BB(0x0064a66b);
    /* 0064a66b: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 0064a671: mov edx, dword ptr [ecx + 0x430] */ r_edx = R32((u32)(r_ecx+0x430u));
    /* 0064a677: mov eax, dword ptr [ebp - 0xc4] */ r_eax = R32((u32)(r_ebp+0xffffff3cu));
    /* 0064a67d: movzx ecx, byte ptr [eax + edx*2 + 0x2c] */ r_ecx = (u32)R8((u32)(r_eax+r_edx*2+0x2cu));
    /* 0064a682: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 0064a685: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0064a688: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064a689: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0064a68c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0064a68e: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0064a691: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0064a697: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64a699u); call_ind(t); }
    /* 0064a699: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0064a69c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0064a69e: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0064a6a1: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0064a6a4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64a6a6u); call_ind(t); }
    /* 0064a6a6: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 0064a6ac: mov edx, dword ptr [ecx + 0x430] */ r_edx = R32((u32)(r_ecx+0x430u));
    /* 0064a6b2: mov eax, dword ptr [ebp - 0xc4] */ r_eax = R32((u32)(r_ebp+0xffffff3cu));
    /* 0064a6b8: movzx ecx, byte ptr [eax + edx*2 + 0x2d] */ r_ecx = (u32)R8((u32)(r_eax+r_edx*2+0x2du));
    /* 0064a6bd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064a6be: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0064a6c0: mov edx, dword ptr [ebp - 0xc4] */ r_edx = R32((u32)(r_ebp+0xffffff3cu));
    /* 0064a6c6: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0064a6c8: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 0064a6ce: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0064a6d1: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x64a6d3u); call_ind(t); }
    /* 0064a6d3: mov eax, dword ptr [ebp - 0xc4] */ r_eax = R32((u32)(r_ebp+0xffffff3cu));
    /* 0064a6d9: mov ecx, dword ptr [eax + 0x430] */ r_ecx = R32((u32)(r_eax+0x430u));
    /* 0064a6df: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0064a6e2: mov edx, dword ptr [ebp - 0xc4] */ r_edx = R32((u32)(r_ebp+0xffffff3cu));
    /* 0064a6e8: mov dword ptr [edx + 0x430], ecx */ W32((u32)(r_edx+0x430u), r_ecx);
L_0064a6ee:; BB(0x0064a6ee);
    /* 0064a6ee: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064a6f1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0064a6f8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064a6f9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0064a6fa: mov esp, ebp */ r_esp = r_ebp;
    /* 0064a6fc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064a6fd: ret  */ FN_RET(0x00648f50); r_esp += 4; return;
}

