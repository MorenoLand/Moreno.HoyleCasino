#include "protos.h"

void f_00421070(void) /* sub_421070 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00421070);
    /* 00421070: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00421071: mov ebp, esp */ r_ebp = r_esp;
    /* 00421073: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00421076: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0042107b: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042107d: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00421080: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 00421083: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0042108a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00421091: mov ecx, dword ptr [0x790358] */ r_ecx = R32((u32)(0x790358u));
    /* 00421097: call 0x427560 */ r_esp -= 4; W32(r_esp, 0x42109cu); f_00427560();
    /* 0042109c: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0042109f: mov byte ptr [ebp - 0xc], 0 */ W8((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 004210a3: mov byte ptr [ebp - 0xb], 0 */ W8((u32)(r_ebp+0xfffffff5u), 0x0u);
    /* 004210a7: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004210a9: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4210aeu); f_0062fbf0();
    /* 004210ae: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004210b1: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004210b4: jge 0x4210d9 */ if ((fS==fO)) goto L_004210d9;
L_004210b6:; BB(0x004210b6);
    /* 004210b6: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004210b8: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4210bdu); f_0062fbf0();
    /* 004210bd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004210c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004210c1: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 004210c4: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 004210c7: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004210ca: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004210cd: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004210cf: mov ecx, eax */ r_ecx = r_eax;
    /* 004210d1: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 004210d7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4210d9u); call_ind(t); }
L_004210d9:; BB(0x004210d9);
    /* 004210d9: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004210dc: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 004210df: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 004210e2: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 004210e5: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004210e7: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 004210ea: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4210ecu); call_ind(t); }
    /* 004210ec: mov byte ptr [ebp - 0x20], 0 */ W8((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 004210f0: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 004210f2: lea ecx, [ebp - 0x20] */ r_ecx = (u32)(r_ebp+0xffffffe0u);
    /* 004210f5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004210f6: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004210f9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004210fa: call dword ptr [0x6b21dc] */ { u32 t = R32((u32)(0x6b21dcu)); r_esp -= 4; W32(r_esp, 0x421100u); call_ind(t); }
    /* 00421100: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00421103: lea eax, [ebp - 0x20] */ r_eax = (u32)(r_ebp+0xffffffe0u);
    /* 00421106: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00421107: call 0x686ecc */ r_esp -= 4; W32(r_esp, 0x42110cu); f_00686ecc();
    /* 0042110c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042110f: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00421112: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00421114: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x421119u); f_0062fbf0();
    /* 00421119: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042111c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042111e: je 0x421165 */ if (fZ) goto L_00421165;
L_00421120:; BB(0x00421120);
    /* 00421120: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00421127: jmp 0x421132 */ goto L_00421132;
L_00421129:; BB(0x00421129);
    /* 00421129: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042112c: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0042112f: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_00421132:; BB(0x00421132);
    /* 00421132: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00421136: jge 0x421165 */ if ((fS==fO)) goto L_00421165;
L_00421138:; BB(0x00421138);
    /* 00421138: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0042113a: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x42113fu); f_0062fbf0();
    /* 0042113f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00421142: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00421143: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00421146: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00421149: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 0042114d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00421150: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00421153: mov edx, dword ptr [eax + edx*4 + 8] */ r_edx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 00421157: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00421159: mov ecx, edx */ r_ecx = r_edx;
    /* 0042115b: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 00421161: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x421163u); call_ind(t); }
    /* 00421163: jmp 0x421129 */ goto L_00421129;
L_00421165:; BB(0x00421165);
    /* 00421165: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00421168: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0042116b: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0042116e: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00421171: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00421173: mov ecx, eax */ r_ecx = r_eax;
    /* 00421175: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00421178: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42117au); call_ind(t); }
    /* 0042117a: cmp dword ptr [ebp - 0x24], 6 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042117e: jle 0x42119c */ if ((fZ||fS!=fO)) goto L_0042119c;
L_00421180:; BB(0x00421180);
    /* 00421180: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00421183: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 00421186: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00421189: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0042118c: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0042118e: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00421191: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x421193u); call_ind(t); }
    /* 00421193: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0042119a: jmp 0x4211b6 */ goto L_004211b6;
L_0042119c:; BB(0x0042119c);
    /* 0042119c: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0042119f: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 004211a2: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 004211a5: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 004211a8: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004211aa: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 004211ad: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4211afu); call_ind(t); }
    /* 004211af: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_004211b6:; BB(0x004211b6);
    /* 004211b6: cmp dword ptr [ebp - 0x24], 9 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004211ba: jle 0x4211d8 */ if ((fZ||fS!=fO)) goto L_004211d8;
L_004211bc:; BB(0x004211bc);
    /* 004211bc: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004211bf: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 004211c2: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 004211c5: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 004211c8: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004211ca: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 004211cd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4211cfu); call_ind(t); }
    /* 004211cf: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 004211d6: jmp 0x4211f2 */ goto L_004211f2;
L_004211d8:; BB(0x004211d8);
    /* 004211d8: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004211db: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 004211de: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 004211e1: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 004211e4: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004211e6: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 004211e9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4211ebu); call_ind(t); }
    /* 004211eb: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_004211f2:; BB(0x004211f2);
    /* 004211f2: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004211f5: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004211f8: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004211fb: jmp 0x421206 */ goto L_00421206;
L_004211fd:; BB(0x004211fd);
    /* 004211fd: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00421200: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00421203: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_00421206:; BB(0x00421206);
    /* 00421206: cmp dword ptr [ebp - 8], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042120a: jle 0x421290 */ if ((fZ||fS!=fO)) goto L_00421290;
L_00421210:; BB(0x00421210);
    /* 00421210: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00421213: mov cl, byte ptr [ebp + eax - 0x20] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+r_eax+0xffffffe0u))) & 0xffu);
    /* 00421217: mov byte ptr [ebp - 0xc], cl */ W8((u32)(r_ebp+0xfffffff4u), (u8)r_ecx);
    /* 0042121a: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0042121c: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x421221u); f_0062fbf0();
    /* 00421221: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00421224: add eax, 0x3106de */ {  u32 a = r_eax; u32 b = 0x3106deu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00421229: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042122a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042122d: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00421230: mov ecx, dword ptr [eax + edx*4 + 0x14] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x14u));
    /* 00421234: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x421239u); f_005eaf00();
    /* 00421239: lea ecx, [ebp - 0xc] */ r_ecx = (u32)(r_ebp+0xfffffff4u);
    /* 0042123c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042123d: call dword ptr [0x6b223c] */ { u32 t = R32((u32)(0x6b223cu)); r_esp -= 4; W32(r_esp, 0x421243u); call_ind(t); }
    /* 00421243: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00421246: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00421247: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042124a: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0042124d: mov ecx, dword ptr [eax + edx*4 + 0x14] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x14u));
    /* 00421251: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00421254: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00421257: mov edx, dword ptr [eax + edx*4 + 0x14] */ r_edx = R32((u32)(r_eax+r_edx*4+0x14u));
    /* 0042125b: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0042125d: mov ecx, edx */ r_ecx = r_edx;
    /* 0042125f: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 00421265: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x421267u); call_ind(t); }
    /* 00421267: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042126a: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0042126d: mov edx, dword ptr [ecx + eax*4 + 0x14] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x14u));
    /* 00421271: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00421274: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00421277: mov ecx, dword ptr [ecx + eax*4 + 0x14] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x14u));
    /* 0042127b: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0042127d: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00421280: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x421282u); call_ind(t); }
    /* 00421282: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00421285: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00421288: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0042128b: jmp 0x4211fd */ goto L_004211fd;
L_00421290:; BB(0x00421290);
    /* 00421290: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00421293: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00421295: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x42129au); f_00686d72();
    /* 0042129a: mov esp, ebp */ r_esp = r_ebp;
    /* 0042129c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042129d: ret  */ FN_RET(0x00421070); r_esp += 4; return;
}

void f_00421450(void) /* sub_421450 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00421450);
    /* 00421450: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00421451: mov ebp, esp */ r_ebp = r_esp;
    /* 00421453: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00421456: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00421459: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0042145f: call 0x637630 */ r_esp -= 4; W32(r_esp, 0x421464u); f_00637630();
    /* 00421464: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00421467: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00421469: je 0x42149b */ if (fZ) goto L_0042149b;
L_0042146b:; BB(0x0042146b);
    /* 0042146b: movzx ecx, byte ptr [0x795f94] */ r_ecx = (u32)R8((u32)(0x795f94u));
    /* 00421472: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00421474: jne 0x42149b */ if (!fZ) goto L_0042149b;
L_00421476:; BB(0x00421476);
    /* 00421476: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00421479: movzx eax, byte ptr [edx + 0x24] */ r_eax = (u32)R8((u32)(r_edx+0x24u));
    /* 0042147d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042147f: jne 0x42149b */ if (!fZ) goto L_0042149b;
L_00421481:; BB(0x00421481);
    /* 00421481: mov ecx, dword ptr [0x790358] */ r_ecx = R32((u32)(0x790358u));
    /* 00421487: movzx edx, byte ptr [ecx + 0xae] */ r_edx = (u32)R8((u32)(r_ecx+0xaeu));
    /* 0042148e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00421490: jne 0x42149b */ if (!fZ) goto L_0042149b;
L_00421492:; BB(0x00421492);
    /* 00421492: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 00421499: jmp 0x4214a2 */ goto L_004214a2;
L_0042149b:; BB(0x0042149b);
    /* 0042149b: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_004214a2:; BB(0x004214a2);
    /* 004214a2: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 004214a5: mov esp, ebp */ r_esp = r_ebp;
    /* 004214a7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004214a8: ret  */ FN_RET(0x00421450); r_esp += 4; return;
}

