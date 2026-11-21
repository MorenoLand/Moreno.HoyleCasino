#include "protos.h"

void f_00491870(void) /* sub_491870 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00491870);
    /* 00491870: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00491871: mov ebp, esp */ r_ebp = r_esp;
    /* 00491873: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00491876: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00491879: mov word ptr [ebp - 0xc], 0 */ W16((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0049187f: mov eax, dword ptr [0x7913e0] */ r_eax = R32((u32)(0x7913e0u));
    /* 00491884: movzx eax, byte ptr [eax] */ r_eax = (u32)R8((u32)(r_eax));
    /* 00491887: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0049188a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0049188c: mov edx, 2 */ r_edx = 0x2u;
    /* 00491891: mul edx */ { u64 t = (u64)r_eax * r_edx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 00491893: seto cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fO) ? 1 : 0) & 0xffu);
    /* 00491896: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00491898: or ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0049189a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0049189b: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x4918a0u); f_00686d82();
    /* 004918a0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004918a3: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004918a6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004918a9: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004918ac: mov byte ptr [ebp - 1], 0 */ W8((u32)(r_ebp+0xffffffffu), 0x0u);
    /* 004918b0: jmp 0x4918bb */ goto L_004918bb;
L_004918b2:; BB(0x004918b2);
    /* 004918b2: mov cl, byte ptr [ebp - 1] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffffu))) & 0xffu);
    /* 004918b5: add cl, 1 */ {  u32 a = (u8)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004918b8: mov byte ptr [ebp - 1], cl */ W8((u32)(r_ebp+0xffffffffu), (u8)r_ecx);
L_004918bb:; BB(0x004918bb);
    /* 004918bb: movzx edx, byte ptr [ebp - 1] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 004918bf: mov eax, dword ptr [0x7913e0] */ r_eax = R32((u32)(0x7913e0u));
    /* 004918c4: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 004918c7: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004918c9: jg 0x4918da */ if ((!fZ&&fS==fO)) goto L_004918da;
L_004918cb:; BB(0x004918cb);
    /* 004918cb: movzx edx, byte ptr [ebp - 1] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 004918cf: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004918d2: mov word ptr [eax + edx*2], 0 */ W16((u32)(r_eax+r_edx*2), 0x0u);
    /* 004918d8: jmp 0x4918b2 */ goto L_004918b2;
L_004918da:; BB(0x004918da);
    /* 004918da: mov word ptr [ebp - 0x10], 0 */ W16((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 004918e0: jmp 0x4918ee */ goto L_004918ee;
L_004918e2:; BB(0x004918e2);
    /* 004918e2: mov cx, word ptr [ebp - 0x10] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff0u))) & 0xffffu);
    /* 004918e6: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004918ea: mov word ptr [ebp - 0x10], cx */ W16((u32)(r_ebp+0xfffffff0u), (u16)r_ecx);
L_004918ee:; BB(0x004918ee);
    /* 004918ee: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004918f2: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004918f5: movsx ecx, word ptr [eax + 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x4u));
    /* 004918f9: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004918fb: jge 0x491938 */ if ((fS==fO)) goto L_00491938;
L_004918fd:; BB(0x004918fd);
    /* 004918fd: lea edx, [ebp - 0x16] */ r_edx = (u32)(r_ebp+0xffffffeau);
    /* 00491900: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00491901: lea eax, [ebp - 0x15] */ r_eax = (u32)(r_ebp+0xffffffebu);
    /* 00491904: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00491905: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 00491909: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0049190c: add ecx, dword ptr [edx] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0049190e: call 0x464480 */ r_esp -= 4; W32(r_esp, 0x491913u); f_00464480();
    /* 00491913: mov ecx, eax */ r_ecx = r_eax;
    /* 00491915: call 0x463fd0 */ r_esp -= 4; W32(r_esp, 0x49191au); f_00463fd0();
    /* 0049191a: movzx eax, byte ptr [eax] */ r_eax = (u32)R8((u32)(r_eax));
    /* 0049191d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00491920: lea edx, [ecx + eax*2] */ r_edx = (u32)(r_ecx+r_eax*2);
    /* 00491923: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 00491926: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00491929: mov cx, word ptr [eax] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax))) & 0xffffu);
    /* 0049192c: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00491930: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00491933: mov word ptr [edx], cx */ W16((u32)(r_edx), (u16)r_ecx);
    /* 00491936: jmp 0x4918e2 */ goto L_004918e2;
L_00491938:; BB(0x00491938);
    /* 00491938: mov eax, dword ptr [0x7913b4] */ r_eax = R32((u32)(0x7913b4u));
    /* 0049193d: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 0049193f: mov byte ptr [ebp - 1], cl */ W8((u32)(r_ebp+0xffffffffu), (u8)r_ecx);
    /* 00491942: jmp 0x49194d */ goto L_0049194d;
L_00491944:; BB(0x00491944);
    /* 00491944: mov dl, byte ptr [ebp - 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffffu))) & 0xffu);
    /* 00491947: add dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0049194a: mov byte ptr [ebp - 1], dl */ W8((u32)(r_ebp+0xffffffffu), (u8)r_edx);
L_0049194d:; BB(0x0049194d);
    /* 0049194d: movzx eax, byte ptr [ebp - 1] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 00491951: mov ecx, dword ptr [0x791410] */ r_ecx = R32((u32)(0x791410u));
    /* 00491957: movzx edx, byte ptr [ecx] */ r_edx = (u32)R8((u32)(r_ecx));
    /* 0049195a: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0049195c: jg 0x49197b */ if ((!fZ&&fS==fO)) goto L_0049197b;
L_0049195e:; BB(0x0049195e);
    /* 0049195e: movzx eax, byte ptr [ebp - 1] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 00491962: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00491965: movsx edx, word ptr [ecx + eax*2] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+r_eax*2));
    /* 00491969: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0049196b: jle 0x491979 */ if ((fZ||fS!=fO)) goto L_00491979;
L_0049196d:; BB(0x0049196d);
    /* 0049196d: mov ax, word ptr [ebp - 0xc] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff4u))) & 0xffffu);
    /* 00491971: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00491975: mov word ptr [ebp - 0xc], ax */ W16((u32)(r_ebp+0xfffffff4u), (u16)r_eax);
L_00491979:; BB(0x00491979);
    /* 00491979: jmp 0x491944 */ goto L_00491944;
L_0049197b:; BB(0x0049197b);
    /* 0049197b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0049197e: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00491981: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00491984: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00491985: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x49198au); f_00686cae();
    /* 0049198a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0049198d: mov ax, word ptr [ebp - 0xc] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff4u))) & 0xffffu);
    /* 00491991: mov esp, ebp */ r_esp = r_ebp;
    /* 00491993: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00491994: ret  */ FN_RET(0x00491870); r_esp += 4; return;
}

