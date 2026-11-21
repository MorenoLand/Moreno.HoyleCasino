#include "protos.h"

void f_00435040(void) /* sub_435040 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00435040);
    /* 00435040: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00435041: mov ebp, esp */ r_ebp = r_esp;
    /* 00435043: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00435046: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00435049: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043504c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043504d: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x435052u); f_005dcb00();
    /* 00435052: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00435055: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00435058: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043505b: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x435060u); f_0063aac0();
    /* 00435060: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00435062: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00435065: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00435069: je 0x435087 */ if (fZ) goto L_00435087;
L_0043506b:; BB(0x0043506b);
    /* 0043506b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043506e: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x435073u); f_0063aac0();
    /* 00435073: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00435075: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00435078: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043507c: je 0x435087 */ if (fZ) goto L_00435087;
L_0043507e:; BB(0x0043507e);
    /* 0043507e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00435085: jmp 0x43508e */ goto L_0043508e;
L_00435087:; BB(0x00435087);
    /* 00435087: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
L_0043508e:; BB(0x0043508e);
    /* 0043508e: movzx eax, byte ptr [ebp - 0x24] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffdcu));
    /* 00435092: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00435094: jne 0x4350ea */ if (!fZ) goto L_004350ea;
L_00435096:; BB(0x00435096);
    /* 00435096: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00435099: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043509a: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x43509fu); f_005dcb00();
    /* 0043509f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004350a2: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 004350a5: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004350a8: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 004350ab: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004350ae: cmp dword ptr [ebp - 0x14], 0x16 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004350b2: je 0x4350db */ if (fZ) goto L_004350db;
L_004350b4:; BB(0x004350b4);
    /* 004350b4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004350b7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004350b8: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4350bdu); f_005dcb00();
    /* 004350bd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004350c0: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 004350c3: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004350c6: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 004350c9: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004350cc: cmp dword ptr [ebp - 0x1c], 0x15 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004350d0: je 0x4350db */ if (fZ) goto L_004350db;
L_004350d2:; BB(0x004350d2);
    /* 004350d2: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 004350d9: jmp 0x4350e2 */ goto L_004350e2;
L_004350db:; BB(0x004350db);
    /* 004350db: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_004350e2:; BB(0x004350e2);
    /* 004350e2: mov al, byte ptr [ebp - 0x28] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffd8u))) & 0xffu);
    /* 004350e5: jmp 0x43519c */ goto L_0043519c;
L_004350ea:; BB(0x004350ea);
    /* 004350ea: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004350ec: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004350ef: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004350f0: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004350f3: call 0x4369a0 */ r_esp -= 4; W32(r_esp, 0x4350f8u); f_004369a0();
    /* 004350f8: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004350fb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004350fd: jne 0x435196 */ if (!fZ) goto L_00435196;
L_00435103:; BB(0x00435103);
    /* 00435103: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00435105: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00435108: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00435109: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0043510c: call 0x4369a0 */ r_esp -= 4; W32(r_esp, 0x435111u); f_004369a0();
    /* 00435111: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00435114: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00435116: jne 0x435196 */ if (!fZ) goto L_00435196;
L_00435118:; BB(0x00435118);
    /* 00435118: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 0043511a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0043511d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043511e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00435121: call 0x4369a0 */ r_esp -= 4; W32(r_esp, 0x435126u); f_004369a0();
    /* 00435126: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00435129: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043512b: jne 0x435196 */ if (!fZ) goto L_00435196;
L_0043512d:; BB(0x0043512d);
    /* 0043512d: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 0043512f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00435132: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00435133: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00435136: call 0x4369a0 */ r_esp -= 4; W32(r_esp, 0x43513bu); f_004369a0();
    /* 0043513b: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0043513e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00435140: jne 0x435196 */ if (!fZ) goto L_00435196;
L_00435142:; BB(0x00435142);
    /* 00435142: push 0x39 */ { u32 v = 0x39u; r_esp -= 4; W32(r_esp, v); }
    /* 00435144: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00435147: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00435148: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0043514b: call 0x4369a0 */ r_esp -= 4; W32(r_esp, 0x435150u); f_004369a0();
    /* 00435150: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00435153: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00435155: jne 0x435196 */ if (!fZ) goto L_00435196;
L_00435157:; BB(0x00435157);
    /* 00435157: push 0x3a */ { u32 v = 0x3au; r_esp -= 4; W32(r_esp, v); }
    /* 00435159: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0043515c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043515d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00435160: call 0x4369a0 */ r_esp -= 4; W32(r_esp, 0x435165u); f_004369a0();
    /* 00435165: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00435168: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043516a: jne 0x435196 */ if (!fZ) goto L_00435196;
L_0043516c:; BB(0x0043516c);
    /* 0043516c: push 0x3b */ { u32 v = 0x3bu; r_esp -= 4; W32(r_esp, v); }
    /* 0043516e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00435171: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00435172: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00435175: call 0x4369a0 */ r_esp -= 4; W32(r_esp, 0x43517au); f_004369a0();
    /* 0043517a: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0043517d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043517f: jne 0x435196 */ if (!fZ) goto L_00435196;
L_00435181:; BB(0x00435181);
    /* 00435181: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 00435183: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00435186: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00435187: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0043518a: call 0x4369a0 */ r_esp -= 4; W32(r_esp, 0x43518fu); f_004369a0();
    /* 0043518f: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00435192: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00435194: je 0x43519a */ if (fZ) goto L_0043519a;
L_00435196:; BB(0x00435196);
    /* 00435196: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00435198: jmp 0x43519c */ goto L_0043519c;
L_0043519a:; BB(0x0043519a);
    /* 0043519a: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_0043519c:; BB(0x0043519c);
    /* 0043519c: mov esp, ebp */ r_esp = r_ebp;
    /* 0043519e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043519f: ret 4 */ FN_RET(0x00435040); r_esp += 8; return;
}

void f_004351b0(void) /* sub_4351B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004351b0);
    /* 004351b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004351b1: mov ebp, esp */ r_ebp = r_esp;
    /* 004351b3: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004351b6: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 004351b9: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 004351c0: mov dword ptr [ebp - 0x10], 3 */ W32((u32)(r_ebp+0xfffffff0u), 0x3u);
    /* 004351c7: mov dword ptr [ebp - 0xc], 2 */ W32((u32)(r_ebp+0xfffffff4u), 0x2u);
    /* 004351ce: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 004351d5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004351dc: jmp 0x4351e7 */ goto L_004351e7;
L_004351de:; BB(0x004351de);
    /* 004351de: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004351e1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004351e4: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_004351e7:; BB(0x004351e7);
    /* 004351e7: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004351eb: jge 0x43527d */ if ((fS==fO)) goto L_0043527d;
L_004351f1:; BB(0x004351f1);
    /* 004351f1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004351f4: mov edx, dword ptr [ebp + ecx*4 - 0x14] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffecu));
    /* 004351f8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004351f9: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4351feu); f_005dcb00();
    /* 004351fe: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00435201: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00435204: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00435207: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x43520cu); f_0063aac0();
    /* 0043520c: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0043520e: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00435211: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00435213: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00435217: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0043521a: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 0043521d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043521f: jne 0x435278 */ if (!fZ) goto L_00435278;
L_00435221:; BB(0x00435221);
    /* 00435221: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00435224: mov ecx, dword ptr [ebp + eax*4 - 0x14] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffffecu));
    /* 00435228: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00435229: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x43522eu); f_005dcb00();
    /* 0043522e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00435231: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00435234: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00435237: mov al, byte ptr [edx + 0x4a0] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x4a0u))) & 0xffu);
    /* 0043523d: mov byte ptr [ebp - 0x21], al */ W8((u32)(r_ebp+0xffffffdfu), (u8)r_eax);
    /* 00435240: movzx ecx, byte ptr [ebp - 0x21] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffdfu));
    /* 00435244: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00435246: jne 0x435278 */ if (!fZ) goto L_00435278;
L_00435248:; BB(0x00435248);
    /* 00435248: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043524b: mov eax, dword ptr [ebp + edx*4 - 0x14] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xffffffecu));
    /* 0043524f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00435250: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x435255u); f_005dcb00();
    /* 00435255: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00435258: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0043525b: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0043525e: mov dl, byte ptr [ecx + 0x4a1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x4a1u))) & 0xffu);
    /* 00435264: mov byte ptr [ebp - 0x29], dl */ W8((u32)(r_ebp+0xffffffd7u), (u8)r_edx);
    /* 00435267: movzx eax, byte ptr [ebp - 0x29] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffd7u));
    /* 0043526b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043526d: jne 0x435278 */ if (!fZ) goto L_00435278;
L_0043526f:; BB(0x0043526f);
    /* 0043526f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00435272: mov eax, dword ptr [ebp + ecx*4 - 0x14] */ r_eax = R32((u32)(r_ebp+r_ecx*4+0xffffffecu));
    /* 00435276: jmp 0x435280 */ goto L_00435280;
L_00435278:; BB(0x00435278);
    /* 00435278: jmp 0x4351de */ goto L_004351de;
L_0043527d:; BB(0x0043527d);
    /* 0043527d: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_00435280:; BB(0x00435280);
    /* 00435280: mov esp, ebp */ r_esp = r_ebp;
    /* 00435282: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00435283: ret  */ FN_RET(0x004351b0); r_esp += 4; return;
}

void f_00435290(void) /* sub_435290 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00435290);
    /* 00435290: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00435291: mov ebp, esp */ r_ebp = r_esp;
    /* 00435293: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00435296: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00435299: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043529c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043529d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004352a0: call 0x434820 */ r_esp -= 4; W32(r_esp, 0x4352a5u); f_00434820();
    /* 004352a5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004352a6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004352a9: call 0x435c60 */ r_esp -= 4; W32(r_esp, 0x4352aeu); f_00435c60();
    /* 004352ae: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004352b1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004352b3: je 0x4352e8 */ if (fZ) goto L_004352e8;
L_004352b5:; BB(0x004352b5);
    /* 004352b5: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004352b8: call 0x5cb920 */ r_esp -= 4; W32(r_esp, 0x4352bdu); f_005cb920();
    /* 004352bd: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004352c0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004352c2: je 0x4352e0 */ if (fZ) goto L_004352e0;
L_004352c4:; BB(0x004352c4);
    /* 004352c4: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004352c7: mov ecx, dword ptr [eax + 0xad8] */ r_ecx = R32((u32)(r_eax+0xad8u));
    /* 004352cd: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004352d0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004352d3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004352d4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004352d7: call 0x5cb820 */ r_esp -= 4; W32(r_esp, 0x4352dcu); f_005cb820();
    /* 004352dc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004352de: je 0x4352e4 */ if (fZ) goto L_004352e4;
L_004352e0:; BB(0x004352e0);
    /* 004352e0: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 004352e2: jmp 0x4352f4 */ goto L_004352f4;
L_004352e4:; BB(0x004352e4);
    /* 004352e4: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004352e6: jmp 0x4352f4 */ goto L_004352f4;
L_004352e8:; BB(0x004352e8);
    /* 004352e8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004352eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004352ec: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004352ef: call 0x4353e0 */ r_esp -= 4; W32(r_esp, 0x4352f4u); f_004353e0();
L_004352f4:; BB(0x004352f4);
    /* 004352f4: mov esp, ebp */ r_esp = r_ebp;
    /* 004352f6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004352f7: ret 4 */ FN_RET(0x00435290); r_esp += 8; return;
}

void f_00435300(void) /* sub_435300 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00435300);
    /* 00435300: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00435301: mov ebp, esp */ r_ebp = r_esp;
    /* 00435303: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00435306: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00435309: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043530c: mov ecx, dword ptr [eax + 0xad8] */ r_ecx = R32((u32)(r_eax+0xad8u));
    /* 00435312: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00435315: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00435319: je 0x4353d0 */ if (fZ) goto L_004353d0;
L_0043531f:; BB(0x0043531f);
    /* 0043531f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00435322: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x435327u); f_005f5400();
    /* 00435327: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043532a: jne 0x435348 */ if (!fZ) goto L_00435348;
L_0043532c:; BB(0x0043532c);
    /* 0043532c: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0043532e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00435331: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00435332: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00435335: call 0x4369a0 */ r_esp -= 4; W32(r_esp, 0x43533au); f_004369a0();
    /* 0043533a: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0043533d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043533f: jne 0x435348 */ if (!fZ) goto L_00435348;
L_00435341:; BB(0x00435341);
    /* 00435341: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00435343: jmp 0x4353d2 */ goto L_004353d2;
L_00435348:; BB(0x00435348);
    /* 00435348: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043534b: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x435350u); f_005f5400();
    /* 00435350: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00435351: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00435354: call 0x438840 */ r_esp -= 4; W32(r_esp, 0x435359u); f_00438840();
    /* 00435359: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0043535c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043535e: je 0x435383 */ if (fZ) goto L_00435383;
L_00435360:; BB(0x00435360);
    /* 00435360: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00435363: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x435368u); f_005f5400();
    /* 00435368: add eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043536b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043536c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043536f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00435370: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00435373: call 0x4369a0 */ r_esp -= 4; W32(r_esp, 0x435378u); f_004369a0();
    /* 00435378: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0043537b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043537d: jne 0x435383 */ if (!fZ) goto L_00435383;
L_0043537f:; BB(0x0043537f);
    /* 0043537f: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00435381: jmp 0x4353d2 */ goto L_004353d2;
L_00435383:; BB(0x00435383);
    /* 00435383: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00435386: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x43538bu); f_005f5400();
    /* 0043538b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043538c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043538f: call 0x4388a0 */ r_esp -= 4; W32(r_esp, 0x435394u); f_004388a0();
    /* 00435394: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00435397: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00435399: je 0x4353b4 */ if (fZ) goto L_004353b4;
L_0043539b:; BB(0x0043539b);
    /* 0043539b: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 0043539d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004353a0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004353a1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004353a4: call 0x4369a0 */ r_esp -= 4; W32(r_esp, 0x4353a9u); f_004369a0();
    /* 004353a9: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004353ac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004353ae: je 0x4353b4 */ if (fZ) goto L_004353b4;
L_004353b0:; BB(0x004353b0);
    /* 004353b0: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 004353b2: jmp 0x4353d2 */ goto L_004353d2;
L_004353b4:; BB(0x004353b4);
    /* 004353b4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004353b7: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x4353bcu); f_005f5400();
    /* 004353bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004353bd: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004353c0: call 0x438870 */ r_esp -= 4; W32(r_esp, 0x4353c5u); f_00438870();
    /* 004353c5: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004353c8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004353ca: je 0x4353d0 */ if (fZ) goto L_004353d0;
L_004353cc:; BB(0x004353cc);
    /* 004353cc: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 004353ce: jmp 0x4353d2 */ goto L_004353d2;
L_004353d0:; BB(0x004353d0);
    /* 004353d0: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_004353d2:; BB(0x004353d2);
    /* 004353d2: mov esp, ebp */ r_esp = r_ebp;
    /* 004353d4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004353d5: ret 4 */ FN_RET(0x00435300); r_esp += 8; return;
}

void f_004353e0(void) /* sub_4353E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004353e0);
    /* 004353e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004353e1: mov ebp, esp */ r_ebp = r_esp;
    /* 004353e3: sub esp, 0xe4 */ {  u32 a = r_esp; u32 b = 0xe4u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004353e9: mov dword ptr [ebp - 0xa0], ecx */ W32((u32)(r_ebp+0xffffff60u), r_ecx);
    /* 004353ef: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004353f1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004353f3: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x4353f8u); f_0064c8a0();
    /* 004353f8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004353fb: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004353fe: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00435401: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00435404: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00435407: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043540a: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043540d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00435410: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x435415u); f_005f5400();
    /* 00435415: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00435418: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043541b: mov dword ptr [ebp - 0xa4], edx */ W32((u32)(r_ebp+0xffffff5cu), r_edx);
    /* 00435421: cmp dword ptr [ebp - 0xa4], 0x3d */ {  u32 a = R32((u32)(r_ebp+0xffffff5cu)); u32 b = 0x3du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00435428: ja 0x435bbf */ if ((!fC&&!fZ)) goto L_00435bbf;
L_0043542e:; BB(0x0043542e);
    /* 0043542e: mov eax, dword ptr [ebp - 0xa4] */ r_eax = R32((u32)(r_ebp+0xffffff5cu));
    /* 00435434: movzx ecx, byte ptr [eax + 0x435c18] */ r_ecx = (u32)R8((u32)(r_eax+0x435c18u));
    /* 0043543b: jmp dword ptr [ecx*4 + 0x435bc8] */ { u32 t = R32((u32)(r_ecx*4+0x435bc8u)); switch (t) { case 0x435449u: goto L_00435449; case 0x4354bdu: goto L_004354bd; case 0x435524u: goto L_00435524; case 0x435579u: goto L_00435579; case 0x435632u: goto L_00435632; case 0x435442u: goto L_00435442; case 0x43564fu: goto L_0043564f; case 0x4356c0u: goto L_004356c0; case 0x435731u: goto L_00435731; case 0x4357a2u: goto L_004357a2; case 0x435813u: goto L_00435813; case 0x435884u: goto L_00435884; case 0x4358f5u: goto L_004358f5; case 0x435966u: goto L_00435966; case 0x4359d7u: goto L_004359d7; case 0x435a4eu: goto L_00435a4e; case 0x435acbu: goto L_00435acb; case 0x435b45u: goto L_00435b45; case 0x4355e0u: goto L_004355e0; case 0x435bbfu: goto L_00435bbf; default: UNSUP(0x0043543b, "jump table entry is not a known target"); } }
L_00435442:; BB(0x00435442);
    /* 00435442: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00435444: jmp 0x435bc1 */ goto L_00435bc1;
L_00435449:; BB(0x00435449);
    /* 00435449: mov edx, dword ptr [ebp - 0xa0] */ r_edx = R32((u32)(r_ebp+0xffffff60u));
    /* 0043544f: mov eax, dword ptr [edx + 0xad8] */ r_eax = R32((u32)(r_edx+0xad8u));
    /* 00435455: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00435458: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043545b: shl ecx, 5 */ { u32 c = (5u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0043545e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00435461: lea eax, [edx + ecx + 0x48] */ r_eax = (u32)(r_edx+r_ecx+0x48u);
    /* 00435465: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00435467: shl ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0043546a: mov edx, dword ptr [eax + ecx] */ r_edx = R32((u32)(r_eax+r_ecx));
    /* 0043546d: mov eax, dword ptr [eax + ecx + 4] */ r_eax = R32((u32)(r_eax+r_ecx+0x4u));
    /* 00435471: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00435474: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00435477: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 0043547d: mov edx, dword ptr [ecx + 0xac4] */ r_edx = R32((u32)(r_ecx+0xac4u));
    /* 00435483: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 00435486: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00435488: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043548c: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0043548f: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00435492: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00435494: je 0x4354a8 */ if (fZ) goto L_004354a8;
L_00435496:; BB(0x00435496);
    /* 00435496: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043549a: je 0x4354a8 */ if (fZ) goto L_004354a8;
L_0043549c:; BB(0x0043549c);
    /* 0043549c: mov dword ptr [ebp - 0xa8], 0 */ W32((u32)(r_ebp+0xffffff58u), 0x0u);
    /* 004354a6: jmp 0x4354b2 */ goto L_004354b2;
L_004354a8:; BB(0x004354a8);
    /* 004354a8: mov dword ptr [ebp - 0xa8], 1 */ W32((u32)(r_ebp+0xffffff58u), 0x1u);
L_004354b2:; BB(0x004354b2);
    /* 004354b2: mov al, byte ptr [ebp - 0xa8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffff58u))) & 0xffu);
    /* 004354b8: jmp 0x435bc1 */ goto L_00435bc1;
L_004354bd:; BB(0x004354bd);
    /* 004354bd: mov edx, dword ptr [ebp - 0xa0] */ r_edx = R32((u32)(r_ebp+0xffffff60u));
    /* 004354c3: mov eax, dword ptr [edx + 0xac4] */ r_eax = R32((u32)(r_edx+0xac4u));
    /* 004354c9: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004354cc: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004354ce: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004354d2: setne cl */ r_ecx = (r_ecx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 004354d5: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 004354d8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004354da: je 0x43550f */ if (fZ) goto L_0043550f;
L_004354dc:; BB(0x004354dc);
    /* 004354dc: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 004354e2: mov ecx, dword ptr [eax + 0xad8] */ r_ecx = R32((u32)(r_eax+0xad8u));
    /* 004354e8: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 004354eb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004354ed: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004354f0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004354f1: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 004354f7: call 0x4369a0 */ r_esp -= 4; W32(r_esp, 0x4354fcu); f_004369a0();
    /* 004354fc: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004354ff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00435501: je 0x43550f */ if (fZ) goto L_0043550f;
L_00435503:; BB(0x00435503);
    /* 00435503: mov dword ptr [ebp - 0xac], 1 */ W32((u32)(r_ebp+0xffffff54u), 0x1u);
    /* 0043550d: jmp 0x435519 */ goto L_00435519;
L_0043550f:; BB(0x0043550f);
    /* 0043550f: mov dword ptr [ebp - 0xac], 0 */ W32((u32)(r_ebp+0xffffff54u), 0x0u);
L_00435519:; BB(0x00435519);
    /* 00435519: mov al, byte ptr [ebp - 0xac] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffff54u))) & 0xffu);
    /* 0043551f: jmp 0x435bc1 */ goto L_00435bc1;
L_00435524:; BB(0x00435524);
    /* 00435524: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 0043552a: mov edx, dword ptr [ecx + 0xad8] */ r_edx = R32((u32)(r_ecx+0xad8u));
    /* 00435530: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 00435533: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00435536: shl eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00435539: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043553c: lea edx, [ecx + eax + 0x48] */ r_edx = (u32)(r_ecx+r_eax+0x48u);
    /* 00435540: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00435542: shl eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00435545: mov ecx, dword ptr [edx + eax] */ r_ecx = R32((u32)(r_edx+r_eax));
    /* 00435548: mov edx, dword ptr [edx + eax + 4] */ r_edx = R32((u32)(r_edx+r_eax+0x4u));
    /* 0043554c: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0043554f: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 00435552: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 00435558: mov ecx, dword ptr [eax + 0xac4] */ r_ecx = R32((u32)(r_eax+0xac4u));
    /* 0043555e: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 00435561: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00435563: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00435567: setne dl */ r_edx = (r_edx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0043556a: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 0043556d: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 0043556f: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 00435571: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00435574: jmp 0x435bc1 */ goto L_00435bc1;
L_00435579:; BB(0x00435579);
    /* 00435579: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 0043557f: mov ecx, dword ptr [eax + 0xac4] */ r_ecx = R32((u32)(r_eax+0xac4u));
    /* 00435585: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 00435588: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0043558a: cmp dword ptr [ebp - 0x30], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043558e: setne dl */ r_edx = (r_edx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 00435591: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 00435594: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00435596: je 0x4355cb */ if (fZ) goto L_004355cb;
L_00435598:; BB(0x00435598);
    /* 00435598: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 0043559e: mov edx, dword ptr [ecx + 0xad8] */ r_edx = R32((u32)(r_ecx+0xad8u));
    /* 004355a4: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 004355a7: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004355a9: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 004355ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004355ad: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 004355b3: call 0x4369a0 */ r_esp -= 4; W32(r_esp, 0x4355b8u); f_004369a0();
    /* 004355b8: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004355bb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004355bd: je 0x4355cb */ if (fZ) goto L_004355cb;
L_004355bf:; BB(0x004355bf);
    /* 004355bf: mov dword ptr [ebp - 0xb0], 1 */ W32((u32)(r_ebp+0xffffff50u), 0x1u);
    /* 004355c9: jmp 0x4355d5 */ goto L_004355d5;
L_004355cb:; BB(0x004355cb);
    /* 004355cb: mov dword ptr [ebp - 0xb0], 0 */ W32((u32)(r_ebp+0xffffff50u), 0x0u);
L_004355d5:; BB(0x004355d5);
    /* 004355d5: mov al, byte ptr [ebp - 0xb0] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffff50u))) & 0xffu);
    /* 004355db: jmp 0x435bc1 */ goto L_00435bc1;
L_004355e0:; BB(0x004355e0);
    /* 004355e0: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 004355e6: call 0x434410 */ r_esp -= 4; W32(r_esp, 0x4355ebu); f_00434410();
    /* 004355eb: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004355ee: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004355f0: jne 0x43561d */ if (!fZ) goto L_0043561d;
L_004355f2:; BB(0x004355f2);
    /* 004355f2: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 004355f8: mov ecx, dword ptr [eax + 0xac4] */ r_ecx = R32((u32)(r_eax+0xac4u));
    /* 004355fe: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 00435601: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00435603: cmp dword ptr [ebp - 0x38], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00435607: setne dl */ r_edx = (r_edx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0043560a: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 0043560d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043560f: jne 0x43561d */ if (!fZ) goto L_0043561d;
L_00435611:; BB(0x00435611);
    /* 00435611: mov dword ptr [ebp - 0xb4], 0 */ W32((u32)(r_ebp+0xffffff4cu), 0x0u);
    /* 0043561b: jmp 0x435627 */ goto L_00435627;
L_0043561d:; BB(0x0043561d);
    /* 0043561d: mov dword ptr [ebp - 0xb4], 1 */ W32((u32)(r_ebp+0xffffff4cu), 0x1u);
L_00435627:; BB(0x00435627);
    /* 00435627: mov al, byte ptr [ebp - 0xb4] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffff4cu))) & 0xffu);
    /* 0043562d: jmp 0x435bc1 */ goto L_00435bc1;
L_00435632:; BB(0x00435632);
    /* 00435632: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 00435638: mov edx, dword ptr [ecx + 0xac4] */ r_edx = R32((u32)(r_ecx+0xac4u));
    /* 0043563e: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 00435641: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00435643: cmp dword ptr [ebp - 0x3c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00435647: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0043564a: jmp 0x435bc1 */ goto L_00435bc1;
L_0043564f:; BB(0x0043564f);
    /* 0043564f: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 00435655: mov ecx, dword ptr [eax + 0xad8] */ r_ecx = R32((u32)(r_eax+0xad8u));
    /* 0043565b: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 0043565e: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 00435660: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00435663: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00435664: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 0043566a: call 0x4369a0 */ r_esp -= 4; W32(r_esp, 0x43566fu); f_004369a0();
    /* 0043566f: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00435672: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00435674: jne 0x4356ab */ if (!fZ) goto L_004356ab;
L_00435676:; BB(0x00435676);
    /* 00435676: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 0043567c: mov edx, dword ptr [ecx + 0xad8] */ r_edx = R32((u32)(r_ecx+0xad8u));
    /* 00435682: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 00435685: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00435688: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00435689: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0043568c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043568d: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 00435693: call 0x4369a0 */ r_esp -= 4; W32(r_esp, 0x435698u); f_004369a0();
    /* 00435698: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0043569b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043569d: jne 0x4356ab */ if (!fZ) goto L_004356ab;
L_0043569f:; BB(0x0043569f);
    /* 0043569f: mov dword ptr [ebp - 0xb8], 0 */ W32((u32)(r_ebp+0xffffff48u), 0x0u);
    /* 004356a9: jmp 0x4356b5 */ goto L_004356b5;
L_004356ab:; BB(0x004356ab);
    /* 004356ab: mov dword ptr [ebp - 0xb8], 1 */ W32((u32)(r_ebp+0xffffff48u), 0x1u);
L_004356b5:; BB(0x004356b5);
    /* 004356b5: mov al, byte ptr [ebp - 0xb8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffff48u))) & 0xffu);
    /* 004356bb: jmp 0x435bc1 */ goto L_00435bc1;
L_004356c0:; BB(0x004356c0);
    /* 004356c0: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 004356c6: mov ecx, dword ptr [eax + 0xad8] */ r_ecx = R32((u32)(r_eax+0xad8u));
    /* 004356cc: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 004356cf: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 004356d1: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004356d4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004356d5: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 004356db: call 0x4369a0 */ r_esp -= 4; W32(r_esp, 0x4356e0u); f_004369a0();
    /* 004356e0: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004356e3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004356e5: jne 0x43571c */ if (!fZ) goto L_0043571c;
L_004356e7:; BB(0x004356e7);
    /* 004356e7: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 004356ed: mov edx, dword ptr [ecx + 0xad8] */ r_edx = R32((u32)(r_ecx+0xad8u));
    /* 004356f3: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 004356f6: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004356f9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004356fa: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 004356fd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004356fe: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 00435704: call 0x4369a0 */ r_esp -= 4; W32(r_esp, 0x435709u); f_004369a0();
    /* 00435709: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0043570c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043570e: jne 0x43571c */ if (!fZ) goto L_0043571c;
L_00435710:; BB(0x00435710);
    /* 00435710: mov dword ptr [ebp - 0xbc], 0 */ W32((u32)(r_ebp+0xffffff44u), 0x0u);
    /* 0043571a: jmp 0x435726 */ goto L_00435726;
L_0043571c:; BB(0x0043571c);
    /* 0043571c: mov dword ptr [ebp - 0xbc], 1 */ W32((u32)(r_ebp+0xffffff44u), 0x1u);
L_00435726:; BB(0x00435726);
    /* 00435726: mov al, byte ptr [ebp - 0xbc] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffff44u))) & 0xffu);
    /* 0043572c: jmp 0x435bc1 */ goto L_00435bc1;
L_00435731:; BB(0x00435731);
    /* 00435731: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 00435737: mov ecx, dword ptr [eax + 0xad8] */ r_ecx = R32((u32)(r_eax+0xad8u));
    /* 0043573d: mov dword ptr [ebp - 0x50], ecx */ W32((u32)(r_ebp+0xffffffb0u), r_ecx);
    /* 00435740: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 00435742: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00435745: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00435746: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 0043574c: call 0x4369a0 */ r_esp -= 4; W32(r_esp, 0x435751u); f_004369a0();
    /* 00435751: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00435754: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00435756: jne 0x43578d */ if (!fZ) goto L_0043578d;
L_00435758:; BB(0x00435758);
    /* 00435758: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 0043575e: mov edx, dword ptr [ecx + 0xad8] */ r_edx = R32((u32)(r_ecx+0xad8u));
    /* 00435764: mov dword ptr [ebp - 0x54], edx */ W32((u32)(r_ebp+0xffffffacu), r_edx);
    /* 00435767: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043576a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043576b: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0043576e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043576f: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 00435775: call 0x4369a0 */ r_esp -= 4; W32(r_esp, 0x43577au); f_004369a0();
    /* 0043577a: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0043577d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043577f: jne 0x43578d */ if (!fZ) goto L_0043578d;
L_00435781:; BB(0x00435781);
    /* 00435781: mov dword ptr [ebp - 0xc0], 0 */ W32((u32)(r_ebp+0xffffff40u), 0x0u);
    /* 0043578b: jmp 0x435797 */ goto L_00435797;
L_0043578d:; BB(0x0043578d);
    /* 0043578d: mov dword ptr [ebp - 0xc0], 1 */ W32((u32)(r_ebp+0xffffff40u), 0x1u);
L_00435797:; BB(0x00435797);
    /* 00435797: mov al, byte ptr [ebp - 0xc0] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffff40u))) & 0xffu);
    /* 0043579d: jmp 0x435bc1 */ goto L_00435bc1;
L_004357a2:; BB(0x004357a2);
    /* 004357a2: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 004357a8: mov ecx, dword ptr [eax + 0xad8] */ r_ecx = R32((u32)(r_eax+0xad8u));
    /* 004357ae: mov dword ptr [ebp - 0x58], ecx */ W32((u32)(r_ebp+0xffffffa8u), r_ecx);
    /* 004357b1: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 004357b3: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 004357b6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004357b7: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 004357bd: call 0x4369a0 */ r_esp -= 4; W32(r_esp, 0x4357c2u); f_004369a0();
    /* 004357c2: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004357c5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004357c7: jne 0x4357fe */ if (!fZ) goto L_004357fe;
L_004357c9:; BB(0x004357c9);
    /* 004357c9: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 004357cf: mov edx, dword ptr [ecx + 0xad8] */ r_edx = R32((u32)(r_ecx+0xad8u));
    /* 004357d5: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
    /* 004357d8: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004357db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004357dc: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 004357df: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004357e0: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 004357e6: call 0x4369a0 */ r_esp -= 4; W32(r_esp, 0x4357ebu); f_004369a0();
    /* 004357eb: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004357ee: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004357f0: jne 0x4357fe */ if (!fZ) goto L_004357fe;
L_004357f2:; BB(0x004357f2);
    /* 004357f2: mov dword ptr [ebp - 0xc4], 0 */ W32((u32)(r_ebp+0xffffff3cu), 0x0u);
    /* 004357fc: jmp 0x435808 */ goto L_00435808;
L_004357fe:; BB(0x004357fe);
    /* 004357fe: mov dword ptr [ebp - 0xc4], 1 */ W32((u32)(r_ebp+0xffffff3cu), 0x1u);
L_00435808:; BB(0x00435808);
    /* 00435808: mov al, byte ptr [ebp - 0xc4] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffff3cu))) & 0xffu);
    /* 0043580e: jmp 0x435bc1 */ goto L_00435bc1;
L_00435813:; BB(0x00435813);
    /* 00435813: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 00435819: mov ecx, dword ptr [eax + 0xad8] */ r_ecx = R32((u32)(r_eax+0xad8u));
    /* 0043581f: mov dword ptr [ebp - 0x60], ecx */ W32((u32)(r_ebp+0xffffffa0u), r_ecx);
    /* 00435822: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 00435824: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00435827: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00435828: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 0043582e: call 0x4369a0 */ r_esp -= 4; W32(r_esp, 0x435833u); f_004369a0();
    /* 00435833: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00435836: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00435838: jne 0x43586f */ if (!fZ) goto L_0043586f;
L_0043583a:; BB(0x0043583a);
    /* 0043583a: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 00435840: mov edx, dword ptr [ecx + 0xad8] */ r_edx = R32((u32)(r_ecx+0xad8u));
    /* 00435846: mov dword ptr [ebp - 0x64], edx */ W32((u32)(r_ebp+0xffffff9cu), r_edx);
    /* 00435849: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043584c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043584d: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 00435850: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00435851: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 00435857: call 0x4369a0 */ r_esp -= 4; W32(r_esp, 0x43585cu); f_004369a0();
    /* 0043585c: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0043585f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00435861: jne 0x43586f */ if (!fZ) goto L_0043586f;
L_00435863:; BB(0x00435863);
    /* 00435863: mov dword ptr [ebp - 0xc8], 0 */ W32((u32)(r_ebp+0xffffff38u), 0x0u);
    /* 0043586d: jmp 0x435879 */ goto L_00435879;
L_0043586f:; BB(0x0043586f);
    /* 0043586f: mov dword ptr [ebp - 0xc8], 1 */ W32((u32)(r_ebp+0xffffff38u), 0x1u);
L_00435879:; BB(0x00435879);
    /* 00435879: mov al, byte ptr [ebp - 0xc8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffff38u))) & 0xffu);
    /* 0043587f: jmp 0x435bc1 */ goto L_00435bc1;
L_00435884:; BB(0x00435884);
    /* 00435884: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 0043588a: mov ecx, dword ptr [eax + 0xad8] */ r_ecx = R32((u32)(r_eax+0xad8u));
    /* 00435890: mov dword ptr [ebp - 0x68], ecx */ W32((u32)(r_ebp+0xffffff98u), r_ecx);
    /* 00435893: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 00435895: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 00435898: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00435899: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 0043589f: call 0x4369a0 */ r_esp -= 4; W32(r_esp, 0x4358a4u); f_004369a0();
    /* 004358a4: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004358a7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004358a9: jne 0x4358e0 */ if (!fZ) goto L_004358e0;
L_004358ab:; BB(0x004358ab);
    /* 004358ab: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 004358b1: mov edx, dword ptr [ecx + 0xad8] */ r_edx = R32((u32)(r_ecx+0xad8u));
    /* 004358b7: mov dword ptr [ebp - 0x6c], edx */ W32((u32)(r_ebp+0xffffff94u), r_edx);
    /* 004358ba: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004358bd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004358be: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 004358c1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004358c2: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 004358c8: call 0x4369a0 */ r_esp -= 4; W32(r_esp, 0x4358cdu); f_004369a0();
    /* 004358cd: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004358d0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004358d2: jne 0x4358e0 */ if (!fZ) goto L_004358e0;
L_004358d4:; BB(0x004358d4);
    /* 004358d4: mov dword ptr [ebp - 0xcc], 0 */ W32((u32)(r_ebp+0xffffff34u), 0x0u);
    /* 004358de: jmp 0x4358ea */ goto L_004358ea;
L_004358e0:; BB(0x004358e0);
    /* 004358e0: mov dword ptr [ebp - 0xcc], 1 */ W32((u32)(r_ebp+0xffffff34u), 0x1u);
L_004358ea:; BB(0x004358ea);
    /* 004358ea: mov al, byte ptr [ebp - 0xcc] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffff34u))) & 0xffu);
    /* 004358f0: jmp 0x435bc1 */ goto L_00435bc1;
L_004358f5:; BB(0x004358f5);
    /* 004358f5: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 004358fb: mov ecx, dword ptr [eax + 0xad8] */ r_ecx = R32((u32)(r_eax+0xad8u));
    /* 00435901: mov dword ptr [ebp - 0x70], ecx */ W32((u32)(r_ebp+0xffffff90u), r_ecx);
    /* 00435904: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00435906: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 00435909: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043590a: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 00435910: call 0x4369a0 */ r_esp -= 4; W32(r_esp, 0x435915u); f_004369a0();
    /* 00435915: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00435918: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043591a: jne 0x435951 */ if (!fZ) goto L_00435951;
L_0043591c:; BB(0x0043591c);
    /* 0043591c: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 00435922: mov edx, dword ptr [ecx + 0xad8] */ r_edx = R32((u32)(r_ecx+0xad8u));
    /* 00435928: mov dword ptr [ebp - 0x74], edx */ W32((u32)(r_ebp+0xffffff8cu), r_edx);
    /* 0043592b: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043592e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043592f: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 00435932: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00435933: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 00435939: call 0x4369a0 */ r_esp -= 4; W32(r_esp, 0x43593eu); f_004369a0();
    /* 0043593e: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00435941: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00435943: jne 0x435951 */ if (!fZ) goto L_00435951;
L_00435945:; BB(0x00435945);
    /* 00435945: mov dword ptr [ebp - 0xd0], 0 */ W32((u32)(r_ebp+0xffffff30u), 0x0u);
    /* 0043594f: jmp 0x43595b */ goto L_0043595b;
L_00435951:; BB(0x00435951);
    /* 00435951: mov dword ptr [ebp - 0xd0], 1 */ W32((u32)(r_ebp+0xffffff30u), 0x1u);
L_0043595b:; BB(0x0043595b);
    /* 0043595b: mov al, byte ptr [ebp - 0xd0] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffff30u))) & 0xffu);
    /* 00435961: jmp 0x435bc1 */ goto L_00435bc1;
L_00435966:; BB(0x00435966);
    /* 00435966: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 0043596c: mov ecx, dword ptr [eax + 0xad8] */ r_ecx = R32((u32)(r_eax+0xad8u));
    /* 00435972: mov dword ptr [ebp - 0x78], ecx */ W32((u32)(r_ebp+0xffffff88u), r_ecx);
    /* 00435975: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00435977: mov edx, dword ptr [ebp - 0x78] */ r_edx = R32((u32)(r_ebp+0xffffff88u));
    /* 0043597a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043597b: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 00435981: call 0x4369a0 */ r_esp -= 4; W32(r_esp, 0x435986u); f_004369a0();
    /* 00435986: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00435989: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043598b: jne 0x4359c2 */ if (!fZ) goto L_004359c2;
L_0043598d:; BB(0x0043598d);
    /* 0043598d: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 00435993: mov edx, dword ptr [ecx + 0xad8] */ r_edx = R32((u32)(r_ecx+0xad8u));
    /* 00435999: mov dword ptr [ebp - 0x7c], edx */ W32((u32)(r_ebp+0xffffff84u), r_edx);
    /* 0043599c: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043599f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004359a0: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 004359a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004359a4: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 004359aa: call 0x4369a0 */ r_esp -= 4; W32(r_esp, 0x4359afu); f_004369a0();
    /* 004359af: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004359b2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004359b4: jne 0x4359c2 */ if (!fZ) goto L_004359c2;
L_004359b6:; BB(0x004359b6);
    /* 004359b6: mov dword ptr [ebp - 0xd4], 0 */ W32((u32)(r_ebp+0xffffff2cu), 0x0u);
    /* 004359c0: jmp 0x4359cc */ goto L_004359cc;
L_004359c2:; BB(0x004359c2);
    /* 004359c2: mov dword ptr [ebp - 0xd4], 1 */ W32((u32)(r_ebp+0xffffff2cu), 0x1u);
L_004359cc:; BB(0x004359cc);
    /* 004359cc: mov al, byte ptr [ebp - 0xd4] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffff2cu))) & 0xffu);
    /* 004359d2: jmp 0x435bc1 */ goto L_00435bc1;
L_004359d7:; BB(0x004359d7);
    /* 004359d7: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 004359dd: mov ecx, dword ptr [eax + 0xad8] */ r_ecx = R32((u32)(r_eax+0xad8u));
    /* 004359e3: mov dword ptr [ebp - 0x80], ecx */ W32((u32)(r_ebp+0xffffff80u), r_ecx);
    /* 004359e6: push 0x21 */ { u32 v = 0x21u; r_esp -= 4; W32(r_esp, v); }
    /* 004359e8: mov edx, dword ptr [ebp - 0x80] */ r_edx = R32((u32)(r_ebp+0xffffff80u));
    /* 004359eb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004359ec: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 004359f2: call 0x4369a0 */ r_esp -= 4; W32(r_esp, 0x4359f7u); f_004369a0();
    /* 004359f7: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004359fa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004359fc: jne 0x435a39 */ if (!fZ) goto L_00435a39;
L_004359fe:; BB(0x004359fe);
    /* 004359fe: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 00435a04: mov edx, dword ptr [ecx + 0xad8] */ r_edx = R32((u32)(r_ecx+0xad8u));
    /* 00435a0a: mov dword ptr [ebp - 0x84], edx */ W32((u32)(r_ebp+0xffffff7cu), r_edx);
    /* 00435a10: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00435a13: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00435a14: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 00435a1a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00435a1b: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 00435a21: call 0x4369a0 */ r_esp -= 4; W32(r_esp, 0x435a26u); f_004369a0();
    /* 00435a26: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00435a29: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00435a2b: jne 0x435a39 */ if (!fZ) goto L_00435a39;
L_00435a2d:; BB(0x00435a2d);
    /* 00435a2d: mov dword ptr [ebp - 0xd8], 0 */ W32((u32)(r_ebp+0xffffff28u), 0x0u);
    /* 00435a37: jmp 0x435a43 */ goto L_00435a43;
L_00435a39:; BB(0x00435a39);
    /* 00435a39: mov dword ptr [ebp - 0xd8], 1 */ W32((u32)(r_ebp+0xffffff28u), 0x1u);
L_00435a43:; BB(0x00435a43);
    /* 00435a43: mov al, byte ptr [ebp - 0xd8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffff28u))) & 0xffu);
    /* 00435a49: jmp 0x435bc1 */ goto L_00435bc1;
L_00435a4e:; BB(0x00435a4e);
    /* 00435a4e: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 00435a54: mov ecx, dword ptr [eax + 0xad8] */ r_ecx = R32((u32)(r_eax+0xad8u));
    /* 00435a5a: mov dword ptr [ebp - 0x88], ecx */ W32((u32)(r_ebp+0xffffff78u), r_ecx);
    /* 00435a60: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 00435a62: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 00435a68: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00435a69: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 00435a6f: call 0x4369a0 */ r_esp -= 4; W32(r_esp, 0x435a74u); f_004369a0();
    /* 00435a74: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00435a77: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00435a79: jne 0x435ab6 */ if (!fZ) goto L_00435ab6;
L_00435a7b:; BB(0x00435a7b);
    /* 00435a7b: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 00435a81: mov edx, dword ptr [ecx + 0xad8] */ r_edx = R32((u32)(r_ecx+0xad8u));
    /* 00435a87: mov dword ptr [ebp - 0x8c], edx */ W32((u32)(r_ebp+0xffffff74u), r_edx);
    /* 00435a8d: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00435a90: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00435a91: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 00435a97: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00435a98: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 00435a9e: call 0x4369a0 */ r_esp -= 4; W32(r_esp, 0x435aa3u); f_004369a0();
    /* 00435aa3: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00435aa6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00435aa8: jne 0x435ab6 */ if (!fZ) goto L_00435ab6;
L_00435aaa:; BB(0x00435aaa);
    /* 00435aaa: mov dword ptr [ebp - 0xdc], 0 */ W32((u32)(r_ebp+0xffffff24u), 0x0u);
    /* 00435ab4: jmp 0x435ac0 */ goto L_00435ac0;
L_00435ab6:; BB(0x00435ab6);
    /* 00435ab6: mov dword ptr [ebp - 0xdc], 1 */ W32((u32)(r_ebp+0xffffff24u), 0x1u);
L_00435ac0:; BB(0x00435ac0);
    /* 00435ac0: mov al, byte ptr [ebp - 0xdc] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffff24u))) & 0xffu);
    /* 00435ac6: jmp 0x435bc1 */ goto L_00435bc1;
L_00435acb:; BB(0x00435acb);
    /* 00435acb: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 00435ad1: mov ecx, dword ptr [eax + 0xad8] */ r_ecx = R32((u32)(r_eax+0xad8u));
    /* 00435ad7: mov dword ptr [ebp - 0x90], ecx */ W32((u32)(r_ebp+0xffffff70u), r_ecx);
    /* 00435add: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 00435adf: mov edx, dword ptr [ebp - 0x90] */ r_edx = R32((u32)(r_ebp+0xffffff70u));
    /* 00435ae5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00435ae6: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 00435aec: call 0x4369a0 */ r_esp -= 4; W32(r_esp, 0x435af1u); f_004369a0();
    /* 00435af1: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00435af4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00435af6: jne 0x435b33 */ if (!fZ) goto L_00435b33;
L_00435af8:; BB(0x00435af8);
    /* 00435af8: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 00435afe: mov edx, dword ptr [ecx + 0xad8] */ r_edx = R32((u32)(r_ecx+0xad8u));
    /* 00435b04: mov dword ptr [ebp - 0x94], edx */ W32((u32)(r_ebp+0xffffff6cu), r_edx);
    /* 00435b0a: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00435b0d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00435b0e: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 00435b14: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00435b15: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 00435b1b: call 0x4369a0 */ r_esp -= 4; W32(r_esp, 0x435b20u); f_004369a0();
    /* 00435b20: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00435b23: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00435b25: jne 0x435b33 */ if (!fZ) goto L_00435b33;
L_00435b27:; BB(0x00435b27);
    /* 00435b27: mov dword ptr [ebp - 0xe0], 0 */ W32((u32)(r_ebp+0xffffff20u), 0x0u);
    /* 00435b31: jmp 0x435b3d */ goto L_00435b3d;
L_00435b33:; BB(0x00435b33);
    /* 00435b33: mov dword ptr [ebp - 0xe0], 1 */ W32((u32)(r_ebp+0xffffff20u), 0x1u);
L_00435b3d:; BB(0x00435b3d);
    /* 00435b3d: mov al, byte ptr [ebp - 0xe0] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffff20u))) & 0xffu);
    /* 00435b43: jmp 0x435bc1 */ goto L_00435bc1;
L_00435b45:; BB(0x00435b45);
    /* 00435b45: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 00435b4b: mov ecx, dword ptr [eax + 0xad8] */ r_ecx = R32((u32)(r_eax+0xad8u));
    /* 00435b51: mov dword ptr [ebp - 0x98], ecx */ W32((u32)(r_ebp+0xffffff68u), r_ecx);
    /* 00435b57: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00435b59: mov edx, dword ptr [ebp - 0x98] */ r_edx = R32((u32)(r_ebp+0xffffff68u));
    /* 00435b5f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00435b60: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 00435b66: call 0x4369a0 */ r_esp -= 4; W32(r_esp, 0x435b6bu); f_004369a0();
    /* 00435b6b: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00435b6e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00435b70: jne 0x435bad */ if (!fZ) goto L_00435bad;
L_00435b72:; BB(0x00435b72);
    /* 00435b72: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 00435b78: mov edx, dword ptr [ecx + 0xad8] */ r_edx = R32((u32)(r_ecx+0xad8u));
    /* 00435b7e: mov dword ptr [ebp - 0x9c], edx */ W32((u32)(r_ebp+0xffffff64u), r_edx);
    /* 00435b84: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00435b87: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00435b88: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00435b8e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00435b8f: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 00435b95: call 0x4369a0 */ r_esp -= 4; W32(r_esp, 0x435b9au); f_004369a0();
    /* 00435b9a: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00435b9d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00435b9f: jne 0x435bad */ if (!fZ) goto L_00435bad;
L_00435ba1:; BB(0x00435ba1);
    /* 00435ba1: mov dword ptr [ebp - 0xe4], 0 */ W32((u32)(r_ebp+0xffffff1cu), 0x0u);
    /* 00435bab: jmp 0x435bb7 */ goto L_00435bb7;
L_00435bad:; BB(0x00435bad);
    /* 00435bad: mov dword ptr [ebp - 0xe4], 1 */ W32((u32)(r_ebp+0xffffff1cu), 0x1u);
L_00435bb7:; BB(0x00435bb7);
    /* 00435bb7: mov al, byte ptr [ebp - 0xe4] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffff1cu))) & 0xffu);
    /* 00435bbd: jmp 0x435bc1 */ goto L_00435bc1;
L_00435bbf:; BB(0x00435bbf);
    /* 00435bbf: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_00435bc1:; BB(0x00435bc1);
    /* 00435bc1: mov esp, ebp */ r_esp = r_ebp;
    /* 00435bc3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00435bc4: ret 4 */ FN_RET(0x004353e0); r_esp += 8; return;
}

void f_00435c60(void) /* sub_435C60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00435c60);
    /* 00435c60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00435c61: mov ebp, esp */ r_ebp = r_esp;
    /* 00435c63: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00435c66: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00435c69: cmp dword ptr [ebp + 8], 0xe */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00435c6d: jle 0x435c75 */ if ((fZ||fS!=fO)) goto L_00435c75;
L_00435c6f:; BB(0x00435c6f);
    /* 00435c6f: cmp dword ptr [ebp + 8], 0x16 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00435c73: jl 0x435c8a */ if ((fS!=fO)) goto L_00435c8a;
L_00435c75:; BB(0x00435c75);
    /* 00435c75: cmp dword ptr [ebp + 8], 0x18 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00435c79: jle 0x435c81 */ if ((fZ||fS!=fO)) goto L_00435c81;
L_00435c7b:; BB(0x00435c7b);
    /* 00435c7b: cmp dword ptr [ebp + 8], 0x20 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00435c7f: jl 0x435c8a */ if ((fS!=fO)) goto L_00435c8a;
L_00435c81:; BB(0x00435c81);
    /* 00435c81: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00435c88: jmp 0x435c91 */ goto L_00435c91;
L_00435c8a:; BB(0x00435c8a);
    /* 00435c8a: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
L_00435c91:; BB(0x00435c91);
    /* 00435c91: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 00435c94: mov esp, ebp */ r_esp = r_ebp;
    /* 00435c96: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00435c97: ret 4 */ FN_RET(0x00435c60); r_esp += 8; return;
}

void f_00435ca0(void) /* sub_435CA0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00435ca0);
    /* 00435ca0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00435ca1: mov ebp, esp */ r_ebp = r_esp;
    /* 00435ca3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00435ca6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00435ca9: cmp dword ptr [ebp + 8], 1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00435cad: je 0x435cdc */ if (fZ) goto L_00435cdc;
L_00435caf:; BB(0x00435caf);
    /* 00435caf: cmp dword ptr [ebp + 8], 0x19 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00435cb3: je 0x435cdc */ if (fZ) goto L_00435cdc;
L_00435cb5:; BB(0x00435cb5);
    /* 00435cb5: cmp dword ptr [ebp + 8], 0x1a */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x1au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00435cb9: je 0x435cdc */ if (fZ) goto L_00435cdc;
L_00435cbb:; BB(0x00435cbb);
    /* 00435cbb: cmp dword ptr [ebp + 8], 0x1b */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x1bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00435cbf: je 0x435cdc */ if (fZ) goto L_00435cdc;
L_00435cc1:; BB(0x00435cc1);
    /* 00435cc1: cmp dword ptr [ebp + 8], 0x1c */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00435cc5: je 0x435cdc */ if (fZ) goto L_00435cdc;
L_00435cc7:; BB(0x00435cc7);
    /* 00435cc7: cmp dword ptr [ebp + 8], 0x1d */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x1du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00435ccb: je 0x435cdc */ if (fZ) goto L_00435cdc;
L_00435ccd:; BB(0x00435ccd);
    /* 00435ccd: cmp dword ptr [ebp + 8], 0x1e */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00435cd1: je 0x435cdc */ if (fZ) goto L_00435cdc;
L_00435cd3:; BB(0x00435cd3);
    /* 00435cd3: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00435cda: jmp 0x435ce3 */ goto L_00435ce3;
L_00435cdc:; BB(0x00435cdc);
    /* 00435cdc: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
L_00435ce3:; BB(0x00435ce3);
    /* 00435ce3: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 00435ce6: mov esp, ebp */ r_esp = r_ebp;
    /* 00435ce8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00435ce9: ret 4 */ FN_RET(0x00435ca0); r_esp += 8; return;
}

void f_00435cf0(void) /* sub_435CF0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00435cf0);
    /* 00435cf0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00435cf1: mov ebp, esp */ r_ebp = r_esp;
    /* 00435cf3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00435cf6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00435cf9: cmp dword ptr [ebp + 8], 3 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00435cfd: je 0x435d2c */ if (fZ) goto L_00435d2c;
L_00435cff:; BB(0x00435cff);
    /* 00435cff: cmp dword ptr [ebp + 8], 0x25 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x25u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00435d03: je 0x435d2c */ if (fZ) goto L_00435d2c;
L_00435d05:; BB(0x00435d05);
    /* 00435d05: cmp dword ptr [ebp + 8], 0x26 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x26u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00435d09: je 0x435d2c */ if (fZ) goto L_00435d2c;
L_00435d0b:; BB(0x00435d0b);
    /* 00435d0b: cmp dword ptr [ebp + 8], 0x27 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x27u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00435d0f: je 0x435d2c */ if (fZ) goto L_00435d2c;
L_00435d11:; BB(0x00435d11);
    /* 00435d11: cmp dword ptr [ebp + 8], 0x28 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00435d15: je 0x435d2c */ if (fZ) goto L_00435d2c;
L_00435d17:; BB(0x00435d17);
    /* 00435d17: cmp dword ptr [ebp + 8], 0x29 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x29u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00435d1b: je 0x435d2c */ if (fZ) goto L_00435d2c;
L_00435d1d:; BB(0x00435d1d);
    /* 00435d1d: cmp dword ptr [ebp + 8], 0x2a */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x2au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00435d21: je 0x435d2c */ if (fZ) goto L_00435d2c;
L_00435d23:; BB(0x00435d23);
    /* 00435d23: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00435d2a: jmp 0x435d33 */ goto L_00435d33;
L_00435d2c:; BB(0x00435d2c);
    /* 00435d2c: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
L_00435d33:; BB(0x00435d33);
    /* 00435d33: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 00435d36: mov esp, ebp */ r_esp = r_ebp;
    /* 00435d38: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00435d39: ret 4 */ FN_RET(0x00435cf0); r_esp += 8; return;
}

void f_00435d40(void) /* sub_435D40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00435d40);
    /* 00435d40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00435d41: mov ebp, esp */ r_ebp = r_esp;
    /* 00435d43: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00435d46: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00435d49: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 00435d4b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00435d4e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00435d4f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00435d52: call 0x4369a0 */ r_esp -= 4; W32(r_esp, 0x435d57u); f_004369a0();
    /* 00435d57: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00435d5a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00435d5c: jne 0x435dd0 */ if (!fZ) goto L_00435dd0;
L_00435d5e:; BB(0x00435d5e);
    /* 00435d5e: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00435d60: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00435d63: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00435d64: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00435d67: call 0x4369a0 */ r_esp -= 4; W32(r_esp, 0x435d6cu); f_004369a0();
    /* 00435d6c: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00435d6f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00435d71: jne 0x435dd0 */ if (!fZ) goto L_00435dd0;
L_00435d73:; BB(0x00435d73);
    /* 00435d73: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 00435d75: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00435d78: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00435d79: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00435d7c: call 0x4369a0 */ r_esp -= 4; W32(r_esp, 0x435d81u); f_004369a0();
    /* 00435d81: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00435d84: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00435d86: jne 0x435dd0 */ if (!fZ) goto L_00435dd0;
L_00435d88:; BB(0x00435d88);
    /* 00435d88: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 00435d8a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00435d8d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00435d8e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00435d91: call 0x4369a0 */ r_esp -= 4; W32(r_esp, 0x435d96u); f_004369a0();
    /* 00435d96: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00435d99: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00435d9b: jne 0x435dd0 */ if (!fZ) goto L_00435dd0;
L_00435d9d:; BB(0x00435d9d);
    /* 00435d9d: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 00435d9f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00435da2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00435da3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00435da6: call 0x4369a0 */ r_esp -= 4; W32(r_esp, 0x435dabu); f_004369a0();
    /* 00435dab: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00435dae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00435db0: jne 0x435dd0 */ if (!fZ) goto L_00435dd0;
L_00435db2:; BB(0x00435db2);
    /* 00435db2: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 00435db4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00435db7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00435db8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00435dbb: call 0x4369a0 */ r_esp -= 4; W32(r_esp, 0x435dc0u); f_004369a0();
    /* 00435dc0: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00435dc3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00435dc5: jne 0x435dd0 */ if (!fZ) goto L_00435dd0;
L_00435dc7:; BB(0x00435dc7);
    /* 00435dc7: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00435dce: jmp 0x435dd7 */ goto L_00435dd7;
L_00435dd0:; BB(0x00435dd0);
    /* 00435dd0: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
L_00435dd7:; BB(0x00435dd7);
    /* 00435dd7: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 00435dda: mov esp, ebp */ r_esp = r_ebp;
    /* 00435ddc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00435ddd: ret 4 */ FN_RET(0x00435d40); r_esp += 8; return;
}

void f_00435de0(void) /* sub_435DE0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00435de0);
    /* 00435de0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00435de1: mov ebp, esp */ r_ebp = r_esp;
    /* 00435de3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00435de6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00435de9: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00435deb: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00435dee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00435def: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00435df2: call 0x4369a0 */ r_esp -= 4; W32(r_esp, 0x435df7u); f_004369a0();
    /* 00435df7: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00435dfa: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00435dfc: jne 0x435e70 */ if (!fZ) goto L_00435e70;
L_00435dfe:; BB(0x00435dfe);
    /* 00435dfe: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00435e00: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00435e03: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00435e04: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00435e07: call 0x4369a0 */ r_esp -= 4; W32(r_esp, 0x435e0cu); f_004369a0();
    /* 00435e0c: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00435e0f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00435e11: jne 0x435e70 */ if (!fZ) goto L_00435e70;
L_00435e13:; BB(0x00435e13);
    /* 00435e13: push 0x21 */ { u32 v = 0x21u; r_esp -= 4; W32(r_esp, v); }
    /* 00435e15: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00435e18: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00435e19: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00435e1c: call 0x4369a0 */ r_esp -= 4; W32(r_esp, 0x435e21u); f_004369a0();
    /* 00435e21: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00435e24: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00435e26: jne 0x435e70 */ if (!fZ) goto L_00435e70;
L_00435e28:; BB(0x00435e28);
    /* 00435e28: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 00435e2a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00435e2d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00435e2e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00435e31: call 0x4369a0 */ r_esp -= 4; W32(r_esp, 0x435e36u); f_004369a0();
    /* 00435e36: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00435e39: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00435e3b: jne 0x435e70 */ if (!fZ) goto L_00435e70;
L_00435e3d:; BB(0x00435e3d);
    /* 00435e3d: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 00435e3f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00435e42: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00435e43: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00435e46: call 0x4369a0 */ r_esp -= 4; W32(r_esp, 0x435e4bu); f_004369a0();
    /* 00435e4b: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00435e4e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00435e50: jne 0x435e70 */ if (!fZ) goto L_00435e70;
L_00435e52:; BB(0x00435e52);
    /* 00435e52: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00435e54: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00435e57: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00435e58: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00435e5b: call 0x4369a0 */ r_esp -= 4; W32(r_esp, 0x435e60u); f_004369a0();
    /* 00435e60: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00435e63: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00435e65: jne 0x435e70 */ if (!fZ) goto L_00435e70;
L_00435e67:; BB(0x00435e67);
    /* 00435e67: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00435e6e: jmp 0x435e77 */ goto L_00435e77;
L_00435e70:; BB(0x00435e70);
    /* 00435e70: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
L_00435e77:; BB(0x00435e77);
    /* 00435e77: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 00435e7a: mov esp, ebp */ r_esp = r_ebp;
    /* 00435e7c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00435e7d: ret 4 */ FN_RET(0x00435de0); r_esp += 8; return;
}

void f_00435e80(void) /* sub_435E80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00435e80);
    /* 00435e80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00435e81: mov ebp, esp */ r_ebp = r_esp;
    /* 00435e83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00435e84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00435e87: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00435e8a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00435e8b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00435e8e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00435e8f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00435e92: call 0x4369a0 */ r_esp -= 4; W32(r_esp, 0x435e97u); f_004369a0();
    /* 00435e97: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00435e9a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00435e9c: je 0x435ed8 */ if (fZ) goto L_00435ed8;
L_00435e9e:; BB(0x00435e9e);
    /* 00435e9e: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00435ea1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00435ea2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00435ea5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00435ea6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00435ea9: call 0x4369a0 */ r_esp -= 4; W32(r_esp, 0x435eaeu); f_004369a0();
    /* 00435eae: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00435eb1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00435eb3: je 0x435ebd */ if (fZ) goto L_00435ebd;
L_00435eb5:; BB(0x00435eb5);
    /* 00435eb5: movzx eax, byte ptr [ebp + 0x18] */ r_eax = (u32)R8((u32)(r_ebp+0x18u));
    /* 00435eb9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00435ebb: je 0x435ed8 */ if (fZ) goto L_00435ed8;
L_00435ebd:; BB(0x00435ebd);
    /* 00435ebd: movzx ecx, byte ptr [ebp + 0x14] */ r_ecx = (u32)R8((u32)(r_ebp+0x14u));
    /* 00435ec1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00435ec3: je 0x435ed4 */ if (fZ) goto L_00435ed4;
L_00435ec5:; BB(0x00435ec5);
    /* 00435ec5: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00435ec8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00435ec9: mov ecx, dword ptr [0x7906dc] */ r_ecx = R32((u32)(0x7906dcu));
    /* 00435ecf: call 0x42a2b0 */ r_esp -= 4; W32(r_esp, 0x435ed4u); f_0042a2b0();
L_00435ed4:; BB(0x00435ed4);
    /* 00435ed4: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00435ed6: jmp 0x435eda */ goto L_00435eda;
L_00435ed8:; BB(0x00435ed8);
    /* 00435ed8: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_00435eda:; BB(0x00435eda);
    /* 00435eda: mov esp, ebp */ r_esp = r_ebp;
    /* 00435edc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00435edd: ret 0x14 */ FN_RET(0x00435e80); r_esp += 24; return;
}

void f_00435ee0(void) /* sub_435EE0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00435ee0);
    /* 00435ee0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00435ee1: mov ebp, esp */ r_ebp = r_esp;
    /* 00435ee3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00435ee6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00435ee9: mov al, byte ptr [ebp + 0x10] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x10u))) & 0xffu);
    /* 00435eec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00435eed: mov cl, byte ptr [ebp + 0xc] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xcu))) & 0xffu);
    /* 00435ef0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00435ef1: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 00435ef3: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 00435ef5: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00435ef8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00435ef9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00435efc: call 0x435e80 */ r_esp -= 4; W32(r_esp, 0x435f01u); f_00435e80();
    /* 00435f01: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00435f04: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00435f06: je 0x435fb4 */ if (fZ) goto L_00435fb4;
L_00435f0c:; BB(0x00435f0c);
    /* 00435f0c: mov cl, byte ptr [ebp + 0x10] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x10u))) & 0xffu);
    /* 00435f0f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00435f10: mov dl, byte ptr [ebp + 0xc] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xcu))) & 0xffu);
    /* 00435f13: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00435f14: push 0x1a */ { u32 v = 0x1au; r_esp -= 4; W32(r_esp, v); }
    /* 00435f16: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00435f18: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00435f1b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00435f1c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00435f1f: call 0x435e80 */ r_esp -= 4; W32(r_esp, 0x435f24u); f_00435e80();
    /* 00435f24: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00435f27: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00435f29: je 0x435fb4 */ if (fZ) goto L_00435fb4;
L_00435f2f:; BB(0x00435f2f);
    /* 00435f2f: mov dl, byte ptr [ebp + 0x10] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x10u))) & 0xffu);
    /* 00435f32: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00435f33: mov al, byte ptr [ebp + 0xc] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xcu))) & 0xffu);
    /* 00435f36: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00435f37: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 00435f39: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 00435f3b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00435f3e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00435f3f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00435f42: call 0x435e80 */ r_esp -= 4; W32(r_esp, 0x435f47u); f_00435e80();
    /* 00435f47: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00435f4a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00435f4c: je 0x435fb4 */ if (fZ) goto L_00435fb4;
L_00435f4e:; BB(0x00435f4e);
    /* 00435f4e: mov al, byte ptr [ebp + 0x10] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x10u))) & 0xffu);
    /* 00435f51: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00435f52: mov cl, byte ptr [ebp + 0xc] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xcu))) & 0xffu);
    /* 00435f55: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00435f56: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00435f58: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 00435f5a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00435f5d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00435f5e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00435f61: call 0x435e80 */ r_esp -= 4; W32(r_esp, 0x435f66u); f_00435e80();
    /* 00435f66: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00435f69: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00435f6b: je 0x435fb4 */ if (fZ) goto L_00435fb4;
L_00435f6d:; BB(0x00435f6d);
    /* 00435f6d: mov cl, byte ptr [ebp + 0x10] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x10u))) & 0xffu);
    /* 00435f70: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00435f71: mov dl, byte ptr [ebp + 0xc] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xcu))) & 0xffu);
    /* 00435f74: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00435f75: push 0x1d */ { u32 v = 0x1du; r_esp -= 4; W32(r_esp, v); }
    /* 00435f77: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 00435f79: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00435f7c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00435f7d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00435f80: call 0x435e80 */ r_esp -= 4; W32(r_esp, 0x435f85u); f_00435e80();
    /* 00435f85: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00435f88: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00435f8a: je 0x435fb4 */ if (fZ) goto L_00435fb4;
L_00435f8c:; BB(0x00435f8c);
    /* 00435f8c: mov dl, byte ptr [ebp + 0x10] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x10u))) & 0xffu);
    /* 00435f8f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00435f90: mov al, byte ptr [ebp + 0xc] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xcu))) & 0xffu);
    /* 00435f93: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00435f94: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 00435f96: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 00435f98: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00435f9b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00435f9c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00435f9f: call 0x435e80 */ r_esp -= 4; W32(r_esp, 0x435fa4u); f_00435e80();
    /* 00435fa4: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00435fa7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00435fa9: je 0x435fb4 */ if (fZ) goto L_00435fb4;
L_00435fab:; BB(0x00435fab);
    /* 00435fab: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00435fb2: jmp 0x435fbb */ goto L_00435fbb;
L_00435fb4:; BB(0x00435fb4);
    /* 00435fb4: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
L_00435fbb:; BB(0x00435fbb);
    /* 00435fbb: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 00435fbe: mov esp, ebp */ r_esp = r_ebp;
    /* 00435fc0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00435fc1: ret 0xc */ FN_RET(0x00435ee0); r_esp += 16; return;
}

void f_00435fd0(void) /* sub_435FD0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00435fd0);
    /* 00435fd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00435fd1: mov ebp, esp */ r_ebp = r_esp;
    /* 00435fd3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00435fd6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00435fd9: mov al, byte ptr [ebp + 0x10] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x10u))) & 0xffu);
    /* 00435fdc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00435fdd: mov cl, byte ptr [ebp + 0xc] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xcu))) & 0xffu);
    /* 00435fe0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00435fe1: push 0x25 */ { u32 v = 0x25u; r_esp -= 4; W32(r_esp, v); }
    /* 00435fe3: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00435fe5: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00435fe8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00435fe9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00435fec: call 0x435e80 */ r_esp -= 4; W32(r_esp, 0x435ff1u); f_00435e80();
    /* 00435ff1: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00435ff4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00435ff6: je 0x4360a4 */ if (fZ) goto L_004360a4;
L_00435ffc:; BB(0x00435ffc);
    /* 00435ffc: mov cl, byte ptr [ebp + 0x10] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x10u))) & 0xffu);
    /* 00435fff: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00436000: mov dl, byte ptr [ebp + 0xc] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xcu))) & 0xffu);
    /* 00436003: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00436004: push 0x26 */ { u32 v = 0x26u; r_esp -= 4; W32(r_esp, v); }
    /* 00436006: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00436008: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043600b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043600c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043600f: call 0x435e80 */ r_esp -= 4; W32(r_esp, 0x436014u); f_00435e80();
    /* 00436014: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00436017: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00436019: je 0x4360a4 */ if (fZ) goto L_004360a4;
L_0043601f:; BB(0x0043601f);
    /* 0043601f: mov dl, byte ptr [ebp + 0x10] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x10u))) & 0xffu);
    /* 00436022: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00436023: mov al, byte ptr [ebp + 0xc] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xcu))) & 0xffu);
    /* 00436026: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00436027: push 0x27 */ { u32 v = 0x27u; r_esp -= 4; W32(r_esp, v); }
    /* 00436029: push 0x21 */ { u32 v = 0x21u; r_esp -= 4; W32(r_esp, v); }
    /* 0043602b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043602e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043602f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00436032: call 0x435e80 */ r_esp -= 4; W32(r_esp, 0x436037u); f_00435e80();
    /* 00436037: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0043603a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043603c: je 0x4360a4 */ if (fZ) goto L_004360a4;
L_0043603e:; BB(0x0043603e);
    /* 0043603e: mov al, byte ptr [ebp + 0x10] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x10u))) & 0xffu);
    /* 00436041: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00436042: mov cl, byte ptr [ebp + 0xc] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xcu))) & 0xffu);
    /* 00436045: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00436046: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 00436048: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 0043604a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0043604d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043604e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00436051: call 0x435e80 */ r_esp -= 4; W32(r_esp, 0x436056u); f_00435e80();
    /* 00436056: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00436059: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043605b: je 0x4360a4 */ if (fZ) goto L_004360a4;
L_0043605d:; BB(0x0043605d);
    /* 0043605d: mov cl, byte ptr [ebp + 0x10] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x10u))) & 0xffu);
    /* 00436060: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00436061: mov dl, byte ptr [ebp + 0xc] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xcu))) & 0xffu);
    /* 00436064: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00436065: push 0x29 */ { u32 v = 0x29u; r_esp -= 4; W32(r_esp, v); }
    /* 00436067: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 00436069: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043606c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043606d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00436070: call 0x435e80 */ r_esp -= 4; W32(r_esp, 0x436075u); f_00435e80();
    /* 00436075: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00436078: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043607a: je 0x4360a4 */ if (fZ) goto L_004360a4;
L_0043607c:; BB(0x0043607c);
    /* 0043607c: mov dl, byte ptr [ebp + 0x10] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x10u))) & 0xffu);
    /* 0043607f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00436080: mov al, byte ptr [ebp + 0xc] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xcu))) & 0xffu);
    /* 00436083: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00436084: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 00436086: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00436088: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043608b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043608c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043608f: call 0x435e80 */ r_esp -= 4; W32(r_esp, 0x436094u); f_00435e80();
    /* 00436094: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00436097: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00436099: je 0x4360a4 */ if (fZ) goto L_004360a4;
L_0043609b:; BB(0x0043609b);
    /* 0043609b: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 004360a2: jmp 0x4360ab */ goto L_004360ab;
L_004360a4:; BB(0x004360a4);
    /* 004360a4: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
L_004360ab:; BB(0x004360ab);
    /* 004360ab: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 004360ae: mov esp, ebp */ r_esp = r_ebp;
    /* 004360b0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004360b1: ret 0xc */ FN_RET(0x00435fd0); r_esp += 16; return;
}

