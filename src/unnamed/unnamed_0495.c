#include "protos.h"

void f_004958e0(void) /* sub_4958E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004958e0);
    /* 004958e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004958e1: mov ebp, esp */ r_ebp = r_esp;
    /* 004958e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004958e5: push 0x6a0960 */ { u32 v = 0x6a0960u; r_esp -= 4; W32(r_esp, v); }
    /* 004958ea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004958f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004958f1: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004958f4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 004958f9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004958fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004958fc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 004958ff: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00495905: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 00495908: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0049590f: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00495912: mov word ptr [eax], 0 */ W16((u32)(r_eax), 0x0u);
    /* 00495917: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 0049591a: mov word ptr [ecx], 0 */ W16((u32)(r_ecx), 0x0u);
    /* 0049591f: mov edx, dword ptr [ebp + 0x1c] */ r_edx = R32((u32)(r_ebp+0x1cu));
    /* 00495922: mov word ptr [edx], 0 */ W16((u32)(r_edx), 0x0u);
    /* 00495927: mov eax, dword ptr [ebp + 0x20] */ r_eax = R32((u32)(r_ebp+0x20u));
    /* 0049592a: mov word ptr [eax], 0 */ W16((u32)(r_eax), 0x0u);
    /* 0049592f: mov ecx, dword ptr [ebp + 0x24] */ r_ecx = R32((u32)(r_ebp+0x24u));
    /* 00495932: mov word ptr [ecx], 0 */ W16((u32)(r_ecx), 0x0u);
    /* 00495937: mov edx, dword ptr [ebp + 0x28] */ r_edx = R32((u32)(r_ebp+0x28u));
    /* 0049593a: mov word ptr [edx], 0 */ W16((u32)(r_edx), 0x0u);
    /* 0049593f: mov eax, dword ptr [ebp + 0x2c] */ r_eax = R32((u32)(r_ebp+0x2cu));
    /* 00495942: mov word ptr [eax], 0 */ W16((u32)(r_eax), 0x0u);
    /* 00495947: mov ecx, dword ptr [ebp + 0x30] */ r_ecx = R32((u32)(r_ebp+0x30u));
    /* 0049594a: mov word ptr [ecx], 0 */ W16((u32)(r_ecx), 0x0u);
    /* 0049594f: mov edx, dword ptr [ebp + 0x34] */ r_edx = R32((u32)(r_ebp+0x34u));
    /* 00495952: mov word ptr [edx], 0 */ W16((u32)(r_edx), 0x0u);
    /* 00495957: mov eax, dword ptr [ebp + 0x38] */ r_eax = R32((u32)(r_ebp+0x38u));
    /* 0049595a: mov word ptr [eax], 0 */ W16((u32)(r_eax), 0x0u);
    /* 0049595f: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00495962: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00495963: lea ecx, [ebp - 0x20] */ r_ecx = (u32)(r_ebp+0xffffffe0u);
    /* 00495966: call 0x484320 */ r_esp -= 4; W32(r_esp, 0x49596bu); f_00484320();
    /* 0049596b: mov byte ptr [ebp - 4], 1 */ W8((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0049596f: lea ecx, [ebp - 0x2d] */ r_ecx = (u32)(r_ebp+0xffffffd3u);
    /* 00495972: call 0x464110 */ r_esp -= 4; W32(r_esp, 0x495977u); f_00464110();
    /* 00495977: mov byte ptr [ebp - 4], 2 */ W8((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0049597b: lea ecx, [ebp - 0xe] */ r_ecx = (u32)(r_ebp+0xfffffff2u);
    /* 0049597e: call 0x464110 */ r_esp -= 4; W32(r_esp, 0x495983u); f_00464110();
    /* 00495983: mov byte ptr [ebp - 4], 3 */ W8((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 00495987: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 0049598a: call 0x4a20d0 */ r_esp -= 4; W32(r_esp, 0x49598fu); f_004a20d0();
    /* 0049598f: mov byte ptr [ebp - 4], 4 */ W8((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 00495993: lea ecx, [ebp - 0x2c] */ r_ecx = (u32)(r_ebp+0xffffffd4u);
    /* 00495996: call 0x4646a0 */ r_esp -= 4; W32(r_esp, 0x49599bu); f_004646a0();
    /* 0049599b: mov byte ptr [ebp - 4], 5 */ W8((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 0049599f: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 004959a2: movsx eax, word ptr [edx + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x4u));
    /* 004959a6: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004959a9: jle 0x4959b1 */ if ((fZ||fS!=fO)) goto L_004959b1;
L_004959ab:; BB(0x004959ab);
    /* 004959ab: mov byte ptr [ebp - 0x15], 1 */ W8((u32)(r_ebp+0xffffffebu), 0x1u);
    /* 004959af: jmp 0x4959b5 */ goto L_004959b5;
L_004959b1:; BB(0x004959b1);
    /* 004959b1: mov byte ptr [ebp - 0x15], 0 */ W8((u32)(r_ebp+0xffffffebu), 0x0u);
L_004959b5:; BB(0x004959b5);
    /* 004959b5: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 004959b8: movsx edx, word ptr [ecx + 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x4u));
    /* 004959bc: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004959bf: jle 0x4959c7 */ if ((fZ||fS!=fO)) goto L_004959c7;
L_004959c1:; BB(0x004959c1);
    /* 004959c1: mov byte ptr [ebp - 0xd], 1 */ W8((u32)(r_ebp+0xfffffff3u), 0x1u);
    /* 004959c5: jmp 0x4959cb */ goto L_004959cb;
L_004959c7:; BB(0x004959c7);
    /* 004959c7: mov byte ptr [ebp - 0xd], 0 */ W8((u32)(r_ebp+0xfffffff3u), 0x0u);
L_004959cb:; BB(0x004959cb);
    /* 004959cb: movzx eax, byte ptr [ebp - 0xd] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffff3u));
    /* 004959cf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004959d1: jne 0x4959ea */ if (!fZ) goto L_004959ea;
L_004959d3:; BB(0x004959d3);
    /* 004959d3: lea ecx, [ebp - 0x2d] */ r_ecx = (u32)(r_ebp+0xffffffd3u);
    /* 004959d6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004959d7: lea ecx, [ebp + 8] */ r_ecx = (u32)(r_ebp+0x8u);
    /* 004959da: call 0x464a10 */ r_esp -= 4; W32(r_esp, 0x4959dfu); f_00464a10();
    /* 004959df: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004959e2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004959e4: je 0x495cad */ if (fZ) goto L_00495cad;
L_004959ea:; BB(0x004959ea);
    /* 004959ea: movzx eax, byte ptr [ebp - 0x15] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffebu));
    /* 004959ee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004959f0: jne 0x495a06 */ if (!fZ) goto L_00495a06;
L_004959f2:; BB(0x004959f2);
    /* 004959f2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004959f5: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 004959f8: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 004959fb: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 004959fe: mov ax, word ptr [ebp + 0x10] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0x10u))) & 0xffffu);
    /* 00495a02: mov word ptr [ebp - 0x24], ax */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_eax);
L_00495a06:; BB(0x00495a06);
    /* 00495a06: movzx ecx, byte ptr [ebp - 0x15] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffebu));
    /* 00495a0a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00495a0c: jne 0x495a25 */ if (!fZ) goto L_00495a25;
L_00495a0e:; BB(0x00495a0e);
    /* 00495a0e: lea edx, [ebp - 0xe] */ r_edx = (u32)(r_ebp+0xfffffff2u);
    /* 00495a11: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00495a12: lea ecx, [ebp - 0x2c] */ r_ecx = (u32)(r_ebp+0xffffffd4u);
    /* 00495a15: call 0x464a10 */ r_esp -= 4; W32(r_esp, 0x495a1au); f_00464a10();
    /* 00495a1a: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00495a1d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00495a1f: je 0x495c9e */ if (fZ) goto L_00495c9e;
L_00495a25:; BB(0x00495a25);
    /* 00495a25: movzx ecx, byte ptr [ebp - 0xd] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffff3u));
    /* 00495a29: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00495a2b: jne 0x495a39 */ if (!fZ) goto L_00495a39;
L_00495a2d:; BB(0x00495a2d);
    /* 00495a2d: lea edx, [ebp - 0x2d] */ r_edx = (u32)(r_ebp+0xffffffd3u);
    /* 00495a30: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00495a31: lea ecx, [ebp - 0x20] */ r_ecx = (u32)(r_ebp+0xffffffe0u);
    /* 00495a34: call 0x484830 */ r_esp -= 4; W32(r_esp, 0x495a39u); f_00484830();
L_00495a39:; BB(0x00495a39);
    /* 00495a39: movzx eax, byte ptr [ebp - 0x15] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffebu));
    /* 00495a3d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00495a3f: jne 0x495a4d */ if (!fZ) goto L_00495a4d;
L_00495a41:; BB(0x00495a41);
    /* 00495a41: lea ecx, [ebp - 0xe] */ r_ecx = (u32)(r_ebp+0xfffffff2u);
    /* 00495a44: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00495a45: lea ecx, [ebp - 0x20] */ r_ecx = (u32)(r_ebp+0xffffffe0u);
    /* 00495a48: call 0x484830 */ r_esp -= 4; W32(r_esp, 0x495a4du); f_00484830();
L_00495a4d:; BB(0x00495a4d);
    /* 00495a4d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00495a4f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00495a51: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00495a53: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00495a55: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00495a57: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00495a59: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00495a5b: lea edx, [ebp - 0x32] */ r_edx = (u32)(r_ebp+0xffffffceu);
    /* 00495a5e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00495a5f: lea ecx, [ebp - 0x20] */ r_ecx = (u32)(r_ebp+0xffffffe0u);
    /* 00495a62: call 0x485940 */ r_esp -= 4; W32(r_esp, 0x495a67u); f_00485940();
    /* 00495a67: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00495a6a: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00495a6d: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00495a6f: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00495a72: lea ecx, [ebp - 0x32] */ r_ecx = (u32)(r_ebp+0xffffffceu);
    /* 00495a75: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x495a7au); f_004a20f0();
    /* 00495a7a: mov edx, dword ptr [0x7913cc] */ r_edx = R32((u32)(0x7913ccu));
    /* 00495a80: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00495a81: lea eax, [ebp - 0x33] */ r_eax = (u32)(r_ebp+0xffffffcdu);
    /* 00495a84: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00495a85: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 00495a88: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x495a8du); f_004a2160();
    /* 00495a8d: mov ecx, eax */ r_ecx = r_eax;
    /* 00495a8f: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x495a94u); f_004a1e10();
    /* 00495a94: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00495a97: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00495a99: je 0x495ab0 */ if (fZ) goto L_00495ab0;
L_00495a9b:; BB(0x00495a9b);
    /* 00495a9b: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 00495a9e: mov ax, word ptr [edx] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx))) & 0xffffu);
    /* 00495aa1: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00495aa5: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 00495aa8: mov word ptr [ecx], ax */ W16((u32)(r_ecx), (u16)r_eax);
    /* 00495aab: jmp 0x495c67 */ goto L_00495c67;
L_00495ab0:; BB(0x00495ab0);
    /* 00495ab0: mov edx, dword ptr [0x791398] */ r_edx = R32((u32)(0x791398u));
    /* 00495ab6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00495ab7: lea eax, [ebp - 0x34] */ r_eax = (u32)(r_ebp+0xffffffccu);
    /* 00495aba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00495abb: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 00495abe: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x495ac3u); f_004a2160();
    /* 00495ac3: mov ecx, eax */ r_ecx = r_eax;
    /* 00495ac5: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x495acau); f_004a1e10();
    /* 00495aca: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00495acd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00495acf: je 0x495ae6 */ if (fZ) goto L_00495ae6;
L_00495ad1:; BB(0x00495ad1);
    /* 00495ad1: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 00495ad4: mov ax, word ptr [edx] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx))) & 0xffffu);
    /* 00495ad7: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00495adb: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 00495ade: mov word ptr [ecx], ax */ W16((u32)(r_ecx), (u16)r_eax);
    /* 00495ae1: jmp 0x495c67 */ goto L_00495c67;
L_00495ae6:; BB(0x00495ae6);
    /* 00495ae6: mov edx, dword ptr [0x791394] */ r_edx = R32((u32)(0x791394u));
    /* 00495aec: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00495aed: lea eax, [ebp - 0x35] */ r_eax = (u32)(r_ebp+0xffffffcbu);
    /* 00495af0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00495af1: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 00495af4: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x495af9u); f_004a2160();
    /* 00495af9: mov ecx, eax */ r_ecx = r_eax;
    /* 00495afb: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x495b00u); f_004a1e10();
    /* 00495b00: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00495b03: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00495b05: je 0x495b1c */ if (fZ) goto L_00495b1c;
L_00495b07:; BB(0x00495b07);
    /* 00495b07: mov edx, dword ptr [ebp + 0x1c] */ r_edx = R32((u32)(r_ebp+0x1cu));
    /* 00495b0a: mov ax, word ptr [edx] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx))) & 0xffffu);
    /* 00495b0d: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00495b11: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 00495b14: mov word ptr [ecx], ax */ W16((u32)(r_ecx), (u16)r_eax);
    /* 00495b17: jmp 0x495c67 */ goto L_00495c67;
L_00495b1c:; BB(0x00495b1c);
    /* 00495b1c: mov edx, dword ptr [0x7913d4] */ r_edx = R32((u32)(0x7913d4u));
    /* 00495b22: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00495b23: lea eax, [ebp - 0x36] */ r_eax = (u32)(r_ebp+0xffffffcau);
    /* 00495b26: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00495b27: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 00495b2a: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x495b2fu); f_004a2160();
    /* 00495b2f: mov ecx, eax */ r_ecx = r_eax;
    /* 00495b31: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x495b36u); f_004a1e10();
    /* 00495b36: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00495b39: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00495b3b: je 0x495b52 */ if (fZ) goto L_00495b52;
L_00495b3d:; BB(0x00495b3d);
    /* 00495b3d: mov edx, dword ptr [ebp + 0x20] */ r_edx = R32((u32)(r_ebp+0x20u));
    /* 00495b40: mov ax, word ptr [edx] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx))) & 0xffffu);
    /* 00495b43: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00495b47: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 00495b4a: mov word ptr [ecx], ax */ W16((u32)(r_ecx), (u16)r_eax);
    /* 00495b4d: jmp 0x495c67 */ goto L_00495c67;
L_00495b52:; BB(0x00495b52);
    /* 00495b52: mov edx, dword ptr [0x7913a0] */ r_edx = R32((u32)(0x7913a0u));
    /* 00495b58: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00495b59: lea eax, [ebp - 0x37] */ r_eax = (u32)(r_ebp+0xffffffc9u);
    /* 00495b5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00495b5d: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 00495b60: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x495b65u); f_004a2160();
    /* 00495b65: mov ecx, eax */ r_ecx = r_eax;
    /* 00495b67: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x495b6cu); f_004a1e10();
    /* 00495b6c: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00495b6f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00495b71: je 0x495b88 */ if (fZ) goto L_00495b88;
L_00495b73:; BB(0x00495b73);
    /* 00495b73: mov edx, dword ptr [ebp + 0x24] */ r_edx = R32((u32)(r_ebp+0x24u));
    /* 00495b76: mov ax, word ptr [edx] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx))) & 0xffffu);
    /* 00495b79: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00495b7d: mov ecx, dword ptr [ebp + 0x24] */ r_ecx = R32((u32)(r_ebp+0x24u));
    /* 00495b80: mov word ptr [ecx], ax */ W16((u32)(r_ecx), (u16)r_eax);
    /* 00495b83: jmp 0x495c67 */ goto L_00495c67;
L_00495b88:; BB(0x00495b88);
    /* 00495b88: mov edx, dword ptr [0x79140c] */ r_edx = R32((u32)(0x79140cu));
    /* 00495b8e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00495b8f: lea eax, [ebp - 0x38] */ r_eax = (u32)(r_ebp+0xffffffc8u);
    /* 00495b92: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00495b93: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 00495b96: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x495b9bu); f_004a2160();
    /* 00495b9b: mov ecx, eax */ r_ecx = r_eax;
    /* 00495b9d: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x495ba2u); f_004a1e10();
    /* 00495ba2: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00495ba5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00495ba7: je 0x495bbe */ if (fZ) goto L_00495bbe;
L_00495ba9:; BB(0x00495ba9);
    /* 00495ba9: mov edx, dword ptr [ebp + 0x28] */ r_edx = R32((u32)(r_ebp+0x28u));
    /* 00495bac: mov ax, word ptr [edx] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx))) & 0xffffu);
    /* 00495baf: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00495bb3: mov ecx, dword ptr [ebp + 0x28] */ r_ecx = R32((u32)(r_ebp+0x28u));
    /* 00495bb6: mov word ptr [ecx], ax */ W16((u32)(r_ecx), (u16)r_eax);
    /* 00495bb9: jmp 0x495c67 */ goto L_00495c67;
L_00495bbe:; BB(0x00495bbe);
    /* 00495bbe: mov edx, dword ptr [0x791418] */ r_edx = R32((u32)(0x791418u));
    /* 00495bc4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00495bc5: lea eax, [ebp - 0x39] */ r_eax = (u32)(r_ebp+0xffffffc7u);
    /* 00495bc8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00495bc9: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 00495bcc: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x495bd1u); f_004a2160();
    /* 00495bd1: mov ecx, eax */ r_ecx = r_eax;
    /* 00495bd3: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x495bd8u); f_004a1e10();
    /* 00495bd8: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00495bdb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00495bdd: je 0x495bf1 */ if (fZ) goto L_00495bf1;
L_00495bdf:; BB(0x00495bdf);
    /* 00495bdf: mov edx, dword ptr [ebp + 0x2c] */ r_edx = R32((u32)(r_ebp+0x2cu));
    /* 00495be2: mov ax, word ptr [edx] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx))) & 0xffffu);
    /* 00495be5: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00495be9: mov ecx, dword ptr [ebp + 0x2c] */ r_ecx = R32((u32)(r_ebp+0x2cu));
    /* 00495bec: mov word ptr [ecx], ax */ W16((u32)(r_ecx), (u16)r_eax);
    /* 00495bef: jmp 0x495c67 */ goto L_00495c67;
L_00495bf1:; BB(0x00495bf1);
    /* 00495bf1: mov edx, dword ptr [0x791380] */ r_edx = R32((u32)(0x791380u));
    /* 00495bf7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00495bf8: lea eax, [ebp - 0x3a] */ r_eax = (u32)(r_ebp+0xffffffc6u);
    /* 00495bfb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00495bfc: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 00495bff: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x495c04u); f_004a2160();
    /* 00495c04: mov ecx, eax */ r_ecx = r_eax;
    /* 00495c06: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x495c0bu); f_004a1e10();
    /* 00495c0b: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00495c0e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00495c10: je 0x495c24 */ if (fZ) goto L_00495c24;
L_00495c12:; BB(0x00495c12);
    /* 00495c12: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 00495c15: mov ax, word ptr [edx] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx))) & 0xffffu);
    /* 00495c18: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00495c1c: mov ecx, dword ptr [ebp + 0x30] */ r_ecx = R32((u32)(r_ebp+0x30u));
    /* 00495c1f: mov word ptr [ecx], ax */ W16((u32)(r_ecx), (u16)r_eax);
    /* 00495c22: jmp 0x495c67 */ goto L_00495c67;
L_00495c24:; BB(0x00495c24);
    /* 00495c24: mov edx, dword ptr [0x7913b0] */ r_edx = R32((u32)(0x7913b0u));
    /* 00495c2a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00495c2b: lea eax, [ebp - 0x3b] */ r_eax = (u32)(r_ebp+0xffffffc5u);
    /* 00495c2e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00495c2f: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 00495c32: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x495c37u); f_004a2160();
    /* 00495c37: mov ecx, eax */ r_ecx = r_eax;
    /* 00495c39: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x495c3eu); f_004a1e10();
    /* 00495c3e: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00495c41: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00495c43: je 0x495c57 */ if (fZ) goto L_00495c57;
L_00495c45:; BB(0x00495c45);
    /* 00495c45: mov edx, dword ptr [ebp + 0x34] */ r_edx = R32((u32)(r_ebp+0x34u));
    /* 00495c48: mov ax, word ptr [edx] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx))) & 0xffffu);
    /* 00495c4b: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00495c4f: mov ecx, dword ptr [ebp + 0x34] */ r_ecx = R32((u32)(r_ebp+0x34u));
    /* 00495c52: mov word ptr [ecx], ax */ W16((u32)(r_ecx), (u16)r_eax);
    /* 00495c55: jmp 0x495c67 */ goto L_00495c67;
L_00495c57:; BB(0x00495c57);
    /* 00495c57: mov edx, dword ptr [ebp + 0x38] */ r_edx = R32((u32)(r_ebp+0x38u));
    /* 00495c5a: mov ax, word ptr [edx] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx))) & 0xffffu);
    /* 00495c5d: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00495c61: mov ecx, dword ptr [ebp + 0x38] */ r_ecx = R32((u32)(r_ebp+0x38u));
    /* 00495c64: mov word ptr [ecx], ax */ W16((u32)(r_ecx), (u16)r_eax);
L_00495c67:; BB(0x00495c67);
    /* 00495c67: movzx edx, byte ptr [ebp - 0xd] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffff3u));
    /* 00495c6b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00495c6d: jne 0x495c7b */ if (!fZ) goto L_00495c7b;
L_00495c6f:; BB(0x00495c6f);
    /* 00495c6f: lea eax, [ebp - 0x2d] */ r_eax = (u32)(r_ebp+0xffffffd3u);
    /* 00495c72: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00495c73: lea ecx, [ebp - 0x20] */ r_ecx = (u32)(r_ebp+0xffffffe0u);
    /* 00495c76: call 0x484ad0 */ r_esp -= 4; W32(r_esp, 0x495c7bu); f_00484ad0();
L_00495c7b:; BB(0x00495c7b);
    /* 00495c7b: movzx ecx, byte ptr [ebp - 0x15] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffebu));
    /* 00495c7f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00495c81: jne 0x495c8f */ if (!fZ) goto L_00495c8f;
L_00495c83:; BB(0x00495c83);
    /* 00495c83: lea edx, [ebp - 0xe] */ r_edx = (u32)(r_ebp+0xfffffff2u);
    /* 00495c86: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00495c87: lea ecx, [ebp - 0x20] */ r_ecx = (u32)(r_ebp+0xffffffe0u);
    /* 00495c8a: call 0x484ad0 */ r_esp -= 4; W32(r_esp, 0x495c8fu); f_00484ad0();
L_00495c8f:; BB(0x00495c8f);
    /* 00495c8f: movzx eax, byte ptr [ebp - 0x15] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffebu));
    /* 00495c93: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00495c95: je 0x495c99 */ if (fZ) goto L_00495c99;
L_00495c97:; BB(0x00495c97);
    /* 00495c97: jmp 0x495c9e */ goto L_00495c9e;
L_00495c99:; BB(0x00495c99);
    /* 00495c99: jmp 0x495a06 */ goto L_00495a06;
L_00495c9e:; BB(0x00495c9e);
    /* 00495c9e: movzx ecx, byte ptr [ebp - 0xd] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffff3u));
    /* 00495ca2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00495ca4: je 0x495ca8 */ if (fZ) goto L_00495ca8;
L_00495ca6:; BB(0x00495ca6);
    /* 00495ca6: jmp 0x495cad */ goto L_00495cad;
L_00495ca8:; BB(0x00495ca8);
    /* 00495ca8: jmp 0x4959cb */ goto L_004959cb;
L_00495cad:; BB(0x00495cad);
    /* 00495cad: mov byte ptr [ebp - 4], 4 */ W8((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 00495cb1: lea ecx, [ebp - 0x2c] */ r_ecx = (u32)(r_ebp+0xffffffd4u);
    /* 00495cb4: call 0x4646e0 */ r_esp -= 4; W32(r_esp, 0x495cb9u); f_004646e0();
    /* 00495cb9: mov byte ptr [ebp - 4], 3 */ W8((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 00495cbd: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 00495cc0: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x495cc5u); f_004a20f0();
    /* 00495cc5: mov byte ptr [ebp - 4], 2 */ W8((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00495cc9: lea ecx, [ebp - 0xe] */ r_ecx = (u32)(r_ebp+0xfffffff2u);
    /* 00495ccc: call 0x464210 */ r_esp -= 4; W32(r_esp, 0x495cd1u); f_00464210();
    /* 00495cd1: mov byte ptr [ebp - 4], 1 */ W8((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00495cd5: lea ecx, [ebp - 0x2d] */ r_ecx = (u32)(r_ebp+0xffffffd3u);
    /* 00495cd8: call 0x464210 */ r_esp -= 4; W32(r_esp, 0x495cddu); f_00464210();
    /* 00495cdd: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00495ce1: lea ecx, [ebp - 0x20] */ r_ecx = (u32)(r_ebp+0xffffffe0u);
    /* 00495ce4: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x495ce9u); f_00484470();
    /* 00495ce9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00495cf0: lea ecx, [ebp + 8] */ r_ecx = (u32)(r_ebp+0x8u);
    /* 00495cf3: call 0x4646e0 */ r_esp -= 4; W32(r_esp, 0x495cf8u); f_004646e0();
    /* 00495cf8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00495cfb: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00495d02: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00495d03: mov esp, ebp */ r_esp = r_ebp;
    /* 00495d05: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00495d06: ret 0x34 */ FN_RET(0x004958e0); r_esp += 56; return;
}

void f_00495d10(void) /* sub_495D10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00495d10);
    /* 00495d10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00495d11: mov ebp, esp */ r_ebp = r_esp;
    /* 00495d13: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00495d15: push 0x6a09bb */ { u32 v = 0x6a09bbu; r_esp -= 4; W32(r_esp, v); }
    /* 00495d1a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00495d20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00495d21: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00495d24: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00495d29: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00495d2b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00495d2c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00495d2f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00495d35: mov dword ptr [ebp - 0x4c], ecx */ W32((u32)(r_ebp+0xffffffb4u), r_ecx);
    /* 00495d38: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00495d3f: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00495d42: mov word ptr [eax], 0 */ W16((u32)(r_eax), 0x0u);
    /* 00495d47: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 00495d4a: mov word ptr [ecx], 0 */ W16((u32)(r_ecx), 0x0u);
    /* 00495d4f: mov edx, dword ptr [ebp + 0x1c] */ r_edx = R32((u32)(r_ebp+0x1cu));
    /* 00495d52: mov word ptr [edx], 0 */ W16((u32)(r_edx), 0x0u);
    /* 00495d57: mov eax, dword ptr [ebp + 0x20] */ r_eax = R32((u32)(r_ebp+0x20u));
    /* 00495d5a: mov word ptr [eax], 0 */ W16((u32)(r_eax), 0x0u);
    /* 00495d5f: mov ecx, dword ptr [ebp + 0x24] */ r_ecx = R32((u32)(r_ebp+0x24u));
    /* 00495d62: mov word ptr [ecx], 0 */ W16((u32)(r_ecx), 0x0u);
    /* 00495d67: mov edx, dword ptr [ebp + 0x28] */ r_edx = R32((u32)(r_ebp+0x28u));
    /* 00495d6a: mov word ptr [edx], 0 */ W16((u32)(r_edx), 0x0u);
    /* 00495d6f: mov eax, dword ptr [ebp + 0x2c] */ r_eax = R32((u32)(r_ebp+0x2cu));
    /* 00495d72: mov word ptr [eax], 0 */ W16((u32)(r_eax), 0x0u);
    /* 00495d77: mov ecx, dword ptr [ebp + 0x30] */ r_ecx = R32((u32)(r_ebp+0x30u));
    /* 00495d7a: mov word ptr [ecx], 0 */ W16((u32)(r_ecx), 0x0u);
    /* 00495d7f: mov edx, dword ptr [ebp + 0x34] */ r_edx = R32((u32)(r_ebp+0x34u));
    /* 00495d82: mov word ptr [edx], 0 */ W16((u32)(r_edx), 0x0u);
    /* 00495d87: mov eax, dword ptr [ebp + 0x38] */ r_eax = R32((u32)(r_ebp+0x38u));
    /* 00495d8a: mov word ptr [eax], 0 */ W16((u32)(r_eax), 0x0u);
    /* 00495d8f: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00495d92: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00495d93: lea ecx, [ebp - 0x2c] */ r_ecx = (u32)(r_ebp+0xffffffd4u);
    /* 00495d96: call 0x484320 */ r_esp -= 4; W32(r_esp, 0x495d9bu); f_00484320();
    /* 00495d9b: mov byte ptr [ebp - 4], 1 */ W8((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00495d9f: lea ecx, [ebp - 0x39] */ r_ecx = (u32)(r_ebp+0xffffffc7u);
    /* 00495da2: call 0x464110 */ r_esp -= 4; W32(r_esp, 0x495da7u); f_00464110();
    /* 00495da7: mov byte ptr [ebp - 4], 2 */ W8((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00495dab: lea ecx, [ebp - 0xe] */ r_ecx = (u32)(r_ebp+0xfffffff2u);
    /* 00495dae: call 0x464110 */ r_esp -= 4; W32(r_esp, 0x495db3u); f_00464110();
    /* 00495db3: mov byte ptr [ebp - 4], 3 */ W8((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 00495db7: lea ecx, [ebp - 0x21] */ r_ecx = (u32)(r_ebp+0xffffffdfu);
    /* 00495dba: call 0x464110 */ r_esp -= 4; W32(r_esp, 0x495dbfu); f_00464110();
    /* 00495dbf: mov byte ptr [ebp - 4], 4 */ W8((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 00495dc3: lea ecx, [ebp - 0x20] */ r_ecx = (u32)(r_ebp+0xffffffe0u);
    /* 00495dc6: call 0x4a20d0 */ r_esp -= 4; W32(r_esp, 0x495dcbu); f_004a20d0();
    /* 00495dcb: mov byte ptr [ebp - 4], 5 */ W8((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 00495dcf: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 00495dd2: call 0x4646a0 */ r_esp -= 4; W32(r_esp, 0x495dd7u); f_004646a0();
    /* 00495dd7: mov byte ptr [ebp - 4], 6 */ W8((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 00495ddb: lea ecx, [ebp - 0x1c] */ r_ecx = (u32)(r_ebp+0xffffffe4u);
    /* 00495dde: call 0x4646a0 */ r_esp -= 4; W32(r_esp, 0x495de3u); f_004646a0();
    /* 00495de3: mov byte ptr [ebp - 4], 7 */ W8((u32)(r_ebp+0xfffffffcu), 0x7u);
    /* 00495de7: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00495dea: movsx eax, word ptr [edx + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x4u));
    /* 00495dee: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00495df1: jle 0x495df9 */ if ((fZ||fS!=fO)) goto L_00495df9;
L_00495df3:; BB(0x00495df3);
    /* 00495df3: mov byte ptr [ebp - 0x22], 1 */ W8((u32)(r_ebp+0xffffffdeu), 0x1u);
    /* 00495df7: jmp 0x495dfd */ goto L_00495dfd;
L_00495df9:; BB(0x00495df9);
    /* 00495df9: mov byte ptr [ebp - 0x22], 0 */ W8((u32)(r_ebp+0xffffffdeu), 0x0u);
L_00495dfd:; BB(0x00495dfd);
    /* 00495dfd: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00495e00: movsx edx, word ptr [ecx + 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x4u));
    /* 00495e04: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00495e07: jle 0x495e0f */ if ((fZ||fS!=fO)) goto L_00495e0f;
L_00495e09:; BB(0x00495e09);
    /* 00495e09: mov byte ptr [ebp - 0x23], 1 */ W8((u32)(r_ebp+0xffffffddu), 0x1u);
    /* 00495e0d: jmp 0x495e13 */ goto L_00495e13;
L_00495e0f:; BB(0x00495e0f);
    /* 00495e0f: mov byte ptr [ebp - 0x23], 0 */ W8((u32)(r_ebp+0xffffffddu), 0x0u);
L_00495e13:; BB(0x00495e13);
    /* 00495e13: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00495e16: movsx ecx, word ptr [eax + 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x4u));
    /* 00495e1a: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00495e1d: jle 0x495e25 */ if ((fZ||fS!=fO)) goto L_00495e25;
L_00495e1f:; BB(0x00495e1f);
    /* 00495e1f: mov byte ptr [ebp - 0xd], 1 */ W8((u32)(r_ebp+0xfffffff3u), 0x1u);
    /* 00495e23: jmp 0x495e29 */ goto L_00495e29;
L_00495e25:; BB(0x00495e25);
    /* 00495e25: mov byte ptr [ebp - 0xd], 0 */ W8((u32)(r_ebp+0xfffffff3u), 0x0u);
L_00495e29:; BB(0x00495e29);
    /* 00495e29: movzx edx, byte ptr [ebp - 0xd] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffff3u));
    /* 00495e2d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00495e2f: jne 0x495e48 */ if (!fZ) goto L_00495e48;
L_00495e31:; BB(0x00495e31);
    /* 00495e31: lea eax, [ebp - 0x39] */ r_eax = (u32)(r_ebp+0xffffffc7u);
    /* 00495e34: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00495e35: lea ecx, [ebp + 8] */ r_ecx = (u32)(r_ebp+0x8u);
    /* 00495e38: call 0x464a10 */ r_esp -= 4; W32(r_esp, 0x495e3du); f_00464a10();
    /* 00495e3d: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00495e40: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00495e42: je 0x49617d */ if (fZ) goto L_0049617d;
L_00495e48:; BB(0x00495e48);
    /* 00495e48: movzx edx, byte ptr [ebp - 0x23] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffddu));
    /* 00495e4c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00495e4e: jne 0x495e64 */ if (!fZ) goto L_00495e64;
L_00495e50:; BB(0x00495e50);
    /* 00495e50: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00495e53: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00495e56: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00495e59: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 00495e5c: mov dx, word ptr [ebp + 0x10] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0x10u))) & 0xffffu);
    /* 00495e60: mov word ptr [ebp - 0x30], dx */ W16((u32)(r_ebp+0xffffffd0u), (u16)r_edx);
L_00495e64:; BB(0x00495e64);
    /* 00495e64: movzx eax, byte ptr [ebp - 0x23] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffddu));
    /* 00495e68: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00495e6a: jne 0x495e83 */ if (!fZ) goto L_00495e83;
L_00495e6c:; BB(0x00495e6c);
    /* 00495e6c: lea ecx, [ebp - 0xe] */ r_ecx = (u32)(r_ebp+0xfffffff2u);
    /* 00495e6f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00495e70: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 00495e73: call 0x464a10 */ r_esp -= 4; W32(r_esp, 0x495e78u); f_00464a10();
    /* 00495e78: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00495e7b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00495e7d: je 0x49616e */ if (fZ) goto L_0049616e;
L_00495e83:; BB(0x00495e83);
    /* 00495e83: movzx eax, byte ptr [ebp - 0x22] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffdeu));
    /* 00495e87: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00495e89: jne 0x495e9f */ if (!fZ) goto L_00495e9f;
L_00495e8b:; BB(0x00495e8b);
    /* 00495e8b: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00495e8e: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00495e91: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00495e94: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00495e97: mov ax, word ptr [ebp - 0x30] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffd0u))) & 0xffffu);
    /* 00495e9b: mov word ptr [ebp - 0x14], ax */ W16((u32)(r_ebp+0xffffffecu), (u16)r_eax);
L_00495e9f:; BB(0x00495e9f);
    /* 00495e9f: movzx ecx, byte ptr [ebp - 0x22] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffdeu));
    /* 00495ea3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00495ea5: jne 0x495ebe */ if (!fZ) goto L_00495ebe;
L_00495ea7:; BB(0x00495ea7);
    /* 00495ea7: lea edx, [ebp - 0x21] */ r_edx = (u32)(r_ebp+0xffffffdfu);
    /* 00495eaa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00495eab: lea ecx, [ebp - 0x1c] */ r_ecx = (u32)(r_ebp+0xffffffe4u);
    /* 00495eae: call 0x464a10 */ r_esp -= 4; W32(r_esp, 0x495eb3u); f_00464a10();
    /* 00495eb3: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00495eb6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00495eb8: je 0x49615f */ if (fZ) goto L_0049615f;
L_00495ebe:; BB(0x00495ebe);
    /* 00495ebe: movzx ecx, byte ptr [ebp - 0xd] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffff3u));
    /* 00495ec2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00495ec4: jne 0x495ed2 */ if (!fZ) goto L_00495ed2;
L_00495ec6:; BB(0x00495ec6);
    /* 00495ec6: lea edx, [ebp - 0x39] */ r_edx = (u32)(r_ebp+0xffffffc7u);
    /* 00495ec9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00495eca: lea ecx, [ebp - 0x2c] */ r_ecx = (u32)(r_ebp+0xffffffd4u);
    /* 00495ecd: call 0x484830 */ r_esp -= 4; W32(r_esp, 0x495ed2u); f_00484830();
L_00495ed2:; BB(0x00495ed2);
    /* 00495ed2: movzx eax, byte ptr [ebp - 0x23] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffddu));
    /* 00495ed6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00495ed8: jne 0x495ee6 */ if (!fZ) goto L_00495ee6;
L_00495eda:; BB(0x00495eda);
    /* 00495eda: lea ecx, [ebp - 0xe] */ r_ecx = (u32)(r_ebp+0xfffffff2u);
    /* 00495edd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00495ede: lea ecx, [ebp - 0x2c] */ r_ecx = (u32)(r_ebp+0xffffffd4u);
    /* 00495ee1: call 0x484830 */ r_esp -= 4; W32(r_esp, 0x495ee6u); f_00484830();
L_00495ee6:; BB(0x00495ee6);
    /* 00495ee6: movzx edx, byte ptr [ebp - 0x22] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffdeu));
    /* 00495eea: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00495eec: jne 0x495efa */ if (!fZ) goto L_00495efa;
L_00495eee:; BB(0x00495eee);
    /* 00495eee: lea eax, [ebp - 0x21] */ r_eax = (u32)(r_ebp+0xffffffdfu);
    /* 00495ef1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00495ef2: lea ecx, [ebp - 0x2c] */ r_ecx = (u32)(r_ebp+0xffffffd4u);
    /* 00495ef5: call 0x484830 */ r_esp -= 4; W32(r_esp, 0x495efau); f_00484830();
L_00495efa:; BB(0x00495efa);
    /* 00495efa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00495efc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00495efe: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00495f00: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00495f02: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00495f04: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00495f06: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00495f08: lea ecx, [ebp - 0x3e] */ r_ecx = (u32)(r_ebp+0xffffffc2u);
    /* 00495f0b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00495f0c: lea ecx, [ebp - 0x2c] */ r_ecx = (u32)(r_ebp+0xffffffd4u);
    /* 00495f0f: call 0x485940 */ r_esp -= 4; W32(r_esp, 0x495f14u); f_00485940();
    /* 00495f14: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 00495f17: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00495f1a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00495f1c: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00495f1f: lea ecx, [ebp - 0x3e] */ r_ecx = (u32)(r_ebp+0xffffffc2u);
    /* 00495f22: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x495f27u); f_004a20f0();
    /* 00495f27: mov ecx, dword ptr [0x7913cc] */ r_ecx = R32((u32)(0x7913ccu));
    /* 00495f2d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00495f2e: lea edx, [ebp - 0x3f] */ r_edx = (u32)(r_ebp+0xffffffc1u);
    /* 00495f31: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00495f32: lea ecx, [ebp - 0x20] */ r_ecx = (u32)(r_ebp+0xffffffe0u);
    /* 00495f35: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x495f3au); f_004a2160();
    /* 00495f3a: mov ecx, eax */ r_ecx = r_eax;
    /* 00495f3c: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x495f41u); f_004a1e10();
    /* 00495f41: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00495f44: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00495f46: je 0x495f5d */ if (fZ) goto L_00495f5d;
L_00495f48:; BB(0x00495f48);
    /* 00495f48: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 00495f4b: mov dx, word ptr [ecx] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx))) & 0xffffu);
    /* 00495f4e: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00495f52: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00495f55: mov word ptr [eax], dx */ W16((u32)(r_eax), (u16)r_edx);
    /* 00495f58: jmp 0x496114 */ goto L_00496114;
L_00495f5d:; BB(0x00495f5d);
    /* 00495f5d: mov ecx, dword ptr [0x791398] */ r_ecx = R32((u32)(0x791398u));
    /* 00495f63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00495f64: lea edx, [ebp - 0x40] */ r_edx = (u32)(r_ebp+0xffffffc0u);
    /* 00495f67: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00495f68: lea ecx, [ebp - 0x20] */ r_ecx = (u32)(r_ebp+0xffffffe0u);
    /* 00495f6b: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x495f70u); f_004a2160();
    /* 00495f70: mov ecx, eax */ r_ecx = r_eax;
    /* 00495f72: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x495f77u); f_004a1e10();
    /* 00495f77: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00495f7a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00495f7c: je 0x495f93 */ if (fZ) goto L_00495f93;
L_00495f7e:; BB(0x00495f7e);
    /* 00495f7e: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 00495f81: mov dx, word ptr [ecx] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx))) & 0xffffu);
    /* 00495f84: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00495f88: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 00495f8b: mov word ptr [eax], dx */ W16((u32)(r_eax), (u16)r_edx);
    /* 00495f8e: jmp 0x496114 */ goto L_00496114;
L_00495f93:; BB(0x00495f93);
    /* 00495f93: mov ecx, dword ptr [0x791394] */ r_ecx = R32((u32)(0x791394u));
    /* 00495f99: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00495f9a: lea edx, [ebp - 0x41] */ r_edx = (u32)(r_ebp+0xffffffbfu);
    /* 00495f9d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00495f9e: lea ecx, [ebp - 0x20] */ r_ecx = (u32)(r_ebp+0xffffffe0u);
    /* 00495fa1: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x495fa6u); f_004a2160();
    /* 00495fa6: mov ecx, eax */ r_ecx = r_eax;
    /* 00495fa8: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x495fadu); f_004a1e10();
    /* 00495fad: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00495fb0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00495fb2: je 0x495fc9 */ if (fZ) goto L_00495fc9;
L_00495fb4:; BB(0x00495fb4);
    /* 00495fb4: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 00495fb7: mov dx, word ptr [ecx] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx))) & 0xffffu);
    /* 00495fba: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00495fbe: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 00495fc1: mov word ptr [eax], dx */ W16((u32)(r_eax), (u16)r_edx);
    /* 00495fc4: jmp 0x496114 */ goto L_00496114;
L_00495fc9:; BB(0x00495fc9);
    /* 00495fc9: mov ecx, dword ptr [0x7913d4] */ r_ecx = R32((u32)(0x7913d4u));
    /* 00495fcf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00495fd0: lea edx, [ebp - 0x42] */ r_edx = (u32)(r_ebp+0xffffffbeu);
    /* 00495fd3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00495fd4: lea ecx, [ebp - 0x20] */ r_ecx = (u32)(r_ebp+0xffffffe0u);
    /* 00495fd7: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x495fdcu); f_004a2160();
    /* 00495fdc: mov ecx, eax */ r_ecx = r_eax;
    /* 00495fde: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x495fe3u); f_004a1e10();
    /* 00495fe3: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00495fe6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00495fe8: je 0x495fff */ if (fZ) goto L_00495fff;
L_00495fea:; BB(0x00495fea);
    /* 00495fea: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 00495fed: mov dx, word ptr [ecx] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx))) & 0xffffu);
    /* 00495ff0: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00495ff4: mov eax, dword ptr [ebp + 0x20] */ r_eax = R32((u32)(r_ebp+0x20u));
    /* 00495ff7: mov word ptr [eax], dx */ W16((u32)(r_eax), (u16)r_edx);
    /* 00495ffa: jmp 0x496114 */ goto L_00496114;
L_00495fff:; BB(0x00495fff);
    /* 00495fff: mov ecx, dword ptr [0x7913a0] */ r_ecx = R32((u32)(0x7913a0u));
    /* 00496005: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00496006: lea edx, [ebp - 0x43] */ r_edx = (u32)(r_ebp+0xffffffbdu);
    /* 00496009: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0049600a: lea ecx, [ebp - 0x20] */ r_ecx = (u32)(r_ebp+0xffffffe0u);
    /* 0049600d: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x496012u); f_004a2160();
    /* 00496012: mov ecx, eax */ r_ecx = r_eax;
    /* 00496014: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x496019u); f_004a1e10();
    /* 00496019: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0049601c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049601e: je 0x496035 */ if (fZ) goto L_00496035;
L_00496020:; BB(0x00496020);
    /* 00496020: mov ecx, dword ptr [ebp + 0x24] */ r_ecx = R32((u32)(r_ebp+0x24u));
    /* 00496023: mov dx, word ptr [ecx] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx))) & 0xffffu);
    /* 00496026: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0049602a: mov eax, dword ptr [ebp + 0x24] */ r_eax = R32((u32)(r_ebp+0x24u));
    /* 0049602d: mov word ptr [eax], dx */ W16((u32)(r_eax), (u16)r_edx);
    /* 00496030: jmp 0x496114 */ goto L_00496114;
L_00496035:; BB(0x00496035);
    /* 00496035: mov ecx, dword ptr [0x79140c] */ r_ecx = R32((u32)(0x79140cu));
    /* 0049603b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0049603c: lea edx, [ebp - 0x44] */ r_edx = (u32)(r_ebp+0xffffffbcu);
    /* 0049603f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00496040: lea ecx, [ebp - 0x20] */ r_ecx = (u32)(r_ebp+0xffffffe0u);
    /* 00496043: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x496048u); f_004a2160();
    /* 00496048: mov ecx, eax */ r_ecx = r_eax;
    /* 0049604a: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x49604fu); f_004a1e10();
    /* 0049604f: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00496052: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00496054: je 0x49606b */ if (fZ) goto L_0049606b;
L_00496056:; BB(0x00496056);
    /* 00496056: mov ecx, dword ptr [ebp + 0x28] */ r_ecx = R32((u32)(r_ebp+0x28u));
    /* 00496059: mov dx, word ptr [ecx] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx))) & 0xffffu);
    /* 0049605c: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00496060: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 00496063: mov word ptr [eax], dx */ W16((u32)(r_eax), (u16)r_edx);
    /* 00496066: jmp 0x496114 */ goto L_00496114;
L_0049606b:; BB(0x0049606b);
    /* 0049606b: mov ecx, dword ptr [0x791418] */ r_ecx = R32((u32)(0x791418u));
    /* 00496071: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00496072: lea edx, [ebp - 0x45] */ r_edx = (u32)(r_ebp+0xffffffbbu);
    /* 00496075: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00496076: lea ecx, [ebp - 0x20] */ r_ecx = (u32)(r_ebp+0xffffffe0u);
    /* 00496079: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x49607eu); f_004a2160();
    /* 0049607e: mov ecx, eax */ r_ecx = r_eax;
    /* 00496080: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x496085u); f_004a1e10();
    /* 00496085: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00496088: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049608a: je 0x49609e */ if (fZ) goto L_0049609e;
L_0049608c:; BB(0x0049608c);
    /* 0049608c: mov ecx, dword ptr [ebp + 0x2c] */ r_ecx = R32((u32)(r_ebp+0x2cu));
    /* 0049608f: mov dx, word ptr [ecx] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx))) & 0xffffu);
    /* 00496092: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00496096: mov eax, dword ptr [ebp + 0x2c] */ r_eax = R32((u32)(r_ebp+0x2cu));
    /* 00496099: mov word ptr [eax], dx */ W16((u32)(r_eax), (u16)r_edx);
    /* 0049609c: jmp 0x496114 */ goto L_00496114;
L_0049609e:; BB(0x0049609e);
    /* 0049609e: mov ecx, dword ptr [0x791380] */ r_ecx = R32((u32)(0x791380u));
    /* 004960a4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004960a5: lea edx, [ebp - 0x46] */ r_edx = (u32)(r_ebp+0xffffffbau);
    /* 004960a8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004960a9: lea ecx, [ebp - 0x20] */ r_ecx = (u32)(r_ebp+0xffffffe0u);
    /* 004960ac: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x4960b1u); f_004a2160();
    /* 004960b1: mov ecx, eax */ r_ecx = r_eax;
    /* 004960b3: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x4960b8u); f_004a1e10();
    /* 004960b8: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004960bb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004960bd: je 0x4960d1 */ if (fZ) goto L_004960d1;
L_004960bf:; BB(0x004960bf);
    /* 004960bf: mov ecx, dword ptr [ebp + 0x30] */ r_ecx = R32((u32)(r_ebp+0x30u));
    /* 004960c2: mov dx, word ptr [ecx] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx))) & 0xffffu);
    /* 004960c5: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004960c9: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 004960cc: mov word ptr [eax], dx */ W16((u32)(r_eax), (u16)r_edx);
    /* 004960cf: jmp 0x496114 */ goto L_00496114;
L_004960d1:; BB(0x004960d1);
    /* 004960d1: mov ecx, dword ptr [0x7913b0] */ r_ecx = R32((u32)(0x7913b0u));
    /* 004960d7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004960d8: lea edx, [ebp - 0x47] */ r_edx = (u32)(r_ebp+0xffffffb9u);
    /* 004960db: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004960dc: lea ecx, [ebp - 0x20] */ r_ecx = (u32)(r_ebp+0xffffffe0u);
    /* 004960df: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x4960e4u); f_004a2160();
    /* 004960e4: mov ecx, eax */ r_ecx = r_eax;
    /* 004960e6: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x4960ebu); f_004a1e10();
    /* 004960eb: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004960ee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004960f0: je 0x496104 */ if (fZ) goto L_00496104;
L_004960f2:; BB(0x004960f2);
    /* 004960f2: mov ecx, dword ptr [ebp + 0x34] */ r_ecx = R32((u32)(r_ebp+0x34u));
    /* 004960f5: mov dx, word ptr [ecx] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx))) & 0xffffu);
    /* 004960f8: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004960fc: mov eax, dword ptr [ebp + 0x34] */ r_eax = R32((u32)(r_ebp+0x34u));
    /* 004960ff: mov word ptr [eax], dx */ W16((u32)(r_eax), (u16)r_edx);
    /* 00496102: jmp 0x496114 */ goto L_00496114;
L_00496104:; BB(0x00496104);
    /* 00496104: mov ecx, dword ptr [ebp + 0x38] */ r_ecx = R32((u32)(r_ebp+0x38u));
    /* 00496107: mov dx, word ptr [ecx] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx))) & 0xffffu);
    /* 0049610a: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0049610e: mov eax, dword ptr [ebp + 0x38] */ r_eax = R32((u32)(r_ebp+0x38u));
    /* 00496111: mov word ptr [eax], dx */ W16((u32)(r_eax), (u16)r_edx);
L_00496114:; BB(0x00496114);
    /* 00496114: movzx ecx, byte ptr [ebp - 0xd] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffff3u));
    /* 00496118: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049611a: jne 0x496128 */ if (!fZ) goto L_00496128;
L_0049611c:; BB(0x0049611c);
    /* 0049611c: lea edx, [ebp - 0x39] */ r_edx = (u32)(r_ebp+0xffffffc7u);
    /* 0049611f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00496120: lea ecx, [ebp - 0x2c] */ r_ecx = (u32)(r_ebp+0xffffffd4u);
    /* 00496123: call 0x484ad0 */ r_esp -= 4; W32(r_esp, 0x496128u); f_00484ad0();
L_00496128:; BB(0x00496128);
    /* 00496128: movzx eax, byte ptr [ebp - 0x23] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffddu));
    /* 0049612c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049612e: jne 0x49613c */ if (!fZ) goto L_0049613c;
L_00496130:; BB(0x00496130);
    /* 00496130: lea ecx, [ebp - 0xe] */ r_ecx = (u32)(r_ebp+0xfffffff2u);
    /* 00496133: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00496134: lea ecx, [ebp - 0x2c] */ r_ecx = (u32)(r_ebp+0xffffffd4u);
    /* 00496137: call 0x484ad0 */ r_esp -= 4; W32(r_esp, 0x49613cu); f_00484ad0();
L_0049613c:; BB(0x0049613c);
    /* 0049613c: movzx edx, byte ptr [ebp - 0x22] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffdeu));
    /* 00496140: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00496142: jne 0x496150 */ if (!fZ) goto L_00496150;
L_00496144:; BB(0x00496144);
    /* 00496144: lea eax, [ebp - 0x21] */ r_eax = (u32)(r_ebp+0xffffffdfu);
    /* 00496147: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00496148: lea ecx, [ebp - 0x2c] */ r_ecx = (u32)(r_ebp+0xffffffd4u);
    /* 0049614b: call 0x484ad0 */ r_esp -= 4; W32(r_esp, 0x496150u); f_00484ad0();
L_00496150:; BB(0x00496150);
    /* 00496150: movzx ecx, byte ptr [ebp - 0x22] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffdeu));
    /* 00496154: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00496156: je 0x49615a */ if (fZ) goto L_0049615a;
L_00496158:; BB(0x00496158);
    /* 00496158: jmp 0x49615f */ goto L_0049615f;
L_0049615a:; BB(0x0049615a);
    /* 0049615a: jmp 0x495e9f */ goto L_00495e9f;
L_0049615f:; BB(0x0049615f);
    /* 0049615f: movzx edx, byte ptr [ebp - 0x23] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffddu));
    /* 00496163: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00496165: je 0x496169 */ if (fZ) goto L_00496169;
L_00496167:; BB(0x00496167);
    /* 00496167: jmp 0x49616e */ goto L_0049616e;
L_00496169:; BB(0x00496169);
    /* 00496169: jmp 0x495e64 */ goto L_00495e64;
L_0049616e:; BB(0x0049616e);
    /* 0049616e: movzx eax, byte ptr [ebp - 0xd] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffff3u));
    /* 00496172: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00496174: je 0x496178 */ if (fZ) goto L_00496178;
L_00496176:; BB(0x00496176);
    /* 00496176: jmp 0x49617d */ goto L_0049617d;
L_00496178:; BB(0x00496178);
    /* 00496178: jmp 0x495e29 */ goto L_00495e29;
L_0049617d:; BB(0x0049617d);
    /* 0049617d: mov byte ptr [ebp - 4], 6 */ W8((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 00496181: lea ecx, [ebp - 0x1c] */ r_ecx = (u32)(r_ebp+0xffffffe4u);
    /* 00496184: call 0x4646e0 */ r_esp -= 4; W32(r_esp, 0x496189u); f_004646e0();
    /* 00496189: mov byte ptr [ebp - 4], 5 */ W8((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 0049618d: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 00496190: call 0x4646e0 */ r_esp -= 4; W32(r_esp, 0x496195u); f_004646e0();
    /* 00496195: mov byte ptr [ebp - 4], 4 */ W8((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 00496199: lea ecx, [ebp - 0x20] */ r_ecx = (u32)(r_ebp+0xffffffe0u);
    /* 0049619c: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x4961a1u); f_004a20f0();
    /* 004961a1: mov byte ptr [ebp - 4], 3 */ W8((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 004961a5: lea ecx, [ebp - 0x21] */ r_ecx = (u32)(r_ebp+0xffffffdfu);
    /* 004961a8: call 0x464210 */ r_esp -= 4; W32(r_esp, 0x4961adu); f_00464210();
    /* 004961ad: mov byte ptr [ebp - 4], 2 */ W8((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 004961b1: lea ecx, [ebp - 0xe] */ r_ecx = (u32)(r_ebp+0xfffffff2u);
    /* 004961b4: call 0x464210 */ r_esp -= 4; W32(r_esp, 0x4961b9u); f_00464210();
    /* 004961b9: mov byte ptr [ebp - 4], 1 */ W8((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 004961bd: lea ecx, [ebp - 0x39] */ r_ecx = (u32)(r_ebp+0xffffffc7u);
    /* 004961c0: call 0x464210 */ r_esp -= 4; W32(r_esp, 0x4961c5u); f_00464210();
    /* 004961c5: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004961c9: lea ecx, [ebp - 0x2c] */ r_ecx = (u32)(r_ebp+0xffffffd4u);
    /* 004961cc: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x4961d1u); f_00484470();
    /* 004961d1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004961d8: lea ecx, [ebp + 8] */ r_ecx = (u32)(r_ebp+0x8u);
    /* 004961db: call 0x4646e0 */ r_esp -= 4; W32(r_esp, 0x4961e0u); f_004646e0();
    /* 004961e0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004961e3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004961ea: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004961eb: mov esp, ebp */ r_esp = r_ebp;
    /* 004961ed: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004961ee: ret 0x34 */ FN_RET(0x00495d10); r_esp += 56; return;
}

