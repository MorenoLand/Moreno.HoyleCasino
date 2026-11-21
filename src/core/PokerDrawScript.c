#include "protos.h"

void f_00477f20(void) /* PokerDrawScript::func_00477f20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00477f20);
    /* 00477f20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00477f21: mov ebp, esp */ r_ebp = r_esp;
    /* 00477f23: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00477f25: push 0x69fd97 */ { u32 v = 0x69fd97u; r_esp -= 4; W32(r_esp, v); }
    /* 00477f2a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00477f30: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00477f31: sub esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00477f37: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00477f38: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00477f3d: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00477f3f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00477f40: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00477f43: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00477f49: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00477f4f: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x477f54u); f_0047e3b0();
    /* 00477f54: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00477f57: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00477f5a: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x477f5fu); f_004c6cb0();
    /* 00477f5f: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00477f62: jne 0x478344 */ if (!fZ) goto L_00478344;
L_00477f68:; BB(0x00477f68);
    /* 00477f68: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00477f6b: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x477f70u); f_004c7010();
    /* 00477f70: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00477f73: je 0x477f8c */ if (fZ) goto L_00477f8c;
L_00477f75:; BB(0x00477f75);
    /* 00477f75: push 0x202 */ { u32 v = 0x202u; r_esp -= 4; W32(r_esp, v); }
    /* 00477f7a: push 0x6bc63c */ { u32 v = 0x6bc63cu; r_esp -= 4; W32(r_esp, v); }
    /* 00477f7f: push 0x6bc65c */ { u32 v = 0x6bc65cu; r_esp -= 4; W32(r_esp, v); }
    /* 00477f84: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x477f89u); f_005e9f20();
    /* 00477f89: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00477f8c:; BB(0x00477f8c);
    /* 00477f8c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00477f92: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x477f97u); f_0047e190();
    /* 00477f97: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00477f99: je 0x477fb2 */ if (fZ) goto L_00477fb2;
L_00477f9b:; BB(0x00477f9b);
    /* 00477f9b: push 0x204 */ { u32 v = 0x204u; r_esp -= 4; W32(r_esp, v); }
    /* 00477fa0: push 0x6bc63c */ { u32 v = 0x6bc63cu; r_esp -= 4; W32(r_esp, v); }
    /* 00477fa5: push 0x6bc5fc */ { u32 v = 0x6bc5fcu; r_esp -= 4; W32(r_esp, v); }
    /* 00477faa: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x477fafu); f_005e9f20();
    /* 00477faf: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00477fb2:; BB(0x00477fb2);
    /* 00477fb2: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00477fb8: call 0x47e280 */ r_esp -= 4; W32(r_esp, 0x477fbdu); f_0047e280();
    /* 00477fbd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00477fbf: jne 0x47817f */ if (!fZ) goto L_0047817f;
L_00477fc5:; BB(0x00477fc5);
    /* 00477fc5: mov edx, dword ptr [0x7912f0] */ r_edx = R32((u32)(0x7912f0u));
    /* 00477fcb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00477fcc: mov eax, dword ptr [0x7912f4] */ r_eax = R32((u32)(0x7912f4u));
    /* 00477fd1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00477fd2: mov ecx, dword ptr [0x791308] */ r_ecx = R32((u32)(0x791308u));
    /* 00477fd8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00477fd9: movzx edx, byte ptr [0x7912e9] */ r_edx = (u32)R8((u32)(0x7912e9u));
    /* 00477fe0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00477fe2: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00477fe5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00477fe6: call 0x46cd10 */ r_esp -= 4; W32(r_esp, 0x477febu); f_0046cd10();
    /* 00477feb: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00477fee: mov dword ptr [0x791318], eax */ W32((u32)(0x791318u), r_eax);
    /* 00477ff3: movzx ecx, byte ptr [0x7912e9] */ r_ecx = (u32)R8((u32)(0x7912e9u));
    /* 00477ffa: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00477ffc: jne 0x478090 */ if (!fZ) goto L_00478090;
L_00478002:; BB(0x00478002);
    /* 00478002: cmp dword ptr [0x791318], 0 */ {  u32 a = R32((u32)(0x791318u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00478009: jne 0x478090 */ if (!fZ) goto L_00478090;
L_0047800f:; BB(0x0047800f);
    /* 0047800f: mov byte ptr [ebp - 0x19], 0 */ W8((u32)(r_ebp+0xffffffe7u), 0x0u);
    /* 00478013: lea edx, [ebp - 0x18] */ r_edx = (u32)(r_ebp+0xffffffe8u);
    /* 00478016: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00478017: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0047801a: call 0x4c7c40 */ r_esp -= 4; W32(r_esp, 0x47801fu); f_004c7c40();
    /* 0047801f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00478026: lea ecx, [ebp - 0x18] */ r_ecx = (u32)(r_ebp+0xffffffe8u);
    /* 00478029: call 0x484bf0 */ r_esp -= 4; W32(r_esp, 0x47802eu); f_00484bf0();
    /* 0047802e: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 00478031: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00478034: jl 0x47803a */ if ((fS!=fO)) goto L_0047803a;
L_00478036:; BB(0x00478036);
    /* 00478036: mov byte ptr [ebp - 0x19], 1 */ W8((u32)(r_ebp+0xffffffe7u), 0x1u);
L_0047803a:; BB(0x0047803a);
    /* 0047803a: lea ecx, [ebp - 0x18] */ r_ecx = (u32)(r_ebp+0xffffffe8u);
    /* 0047803d: call 0x485000 */ r_esp -= 4; W32(r_esp, 0x478042u); f_00485000();
    /* 00478042: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 00478045: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00478048: jl 0x47804e */ if ((fS!=fO)) goto L_0047804e;
L_0047804a:; BB(0x0047804a);
    /* 0047804a: mov byte ptr [ebp - 0x19], 1 */ W8((u32)(r_ebp+0xffffffe7u), 0x1u);
L_0047804e:; BB(0x0047804e);
    /* 0047804e: movzx edx, byte ptr [ebp - 0x19] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffe7u));
    /* 00478052: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00478054: je 0x478081 */ if (fZ) goto L_00478081;
L_00478056:; BB(0x00478056);
    /* 00478056: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0047805c: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0047805f: call 0x4f6640 */ r_esp -= 4; W32(r_esp, 0x478064u); f_004f6640();
    /* 00478064: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00478067: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00478069: je 0x478077 */ if (fZ) goto L_00478077;
L_0047806b:; BB(0x0047806b);
    /* 0047806b: mov dword ptr [0x791318], 1 */ W32((u32)(0x791318u), 0x1u);
    /* 00478075: jmp 0x478081 */ goto L_00478081;
L_00478077:; BB(0x00478077);
    /* 00478077: mov dword ptr [0x791318], 3 */ W32((u32)(0x791318u), 0x3u);
L_00478081:; BB(0x00478081);
    /* 00478081: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00478088: lea ecx, [ebp - 0x18] */ r_ecx = (u32)(r_ebp+0xffffffe8u);
    /* 0047808b: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x478090u); f_00484470();
L_00478090:; BB(0x00478090);
    /* 00478090: movzx ecx, byte ptr [0x7912e9] */ r_ecx = (u32)R8((u32)(0x7912e9u));
    /* 00478097: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00478099: jne 0x47817a */ if (!fZ) goto L_0047817a;
L_0047809f:; BB(0x0047809f);
    /* 0047809f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004780a5: call 0x47d7b0 */ r_esp -= 4; W32(r_esp, 0x4780aau); f_0047d7b0();
    /* 004780aa: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004780ad: jne 0x47817a */ if (!fZ) goto L_0047817a;
L_004780b3:; BB(0x004780b3);
    /* 004780b3: cmp dword ptr [0x791318], 2 */ {  u32 a = R32((u32)(0x791318u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004780ba: jne 0x47817a */ if (!fZ) goto L_0047817a;
L_004780c0:; BB(0x004780c0);
    /* 004780c0: lea edx, [ebp - 0x28] */ r_edx = (u32)(r_ebp+0xffffffd8u);
    /* 004780c3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004780c4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004780c7: call 0x4c7c40 */ r_esp -= 4; W32(r_esp, 0x4780ccu); f_004c7c40();
    /* 004780cc: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 004780d3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004780d5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004780d7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004780d9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004780db: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004780dd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004780df: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004780e1: lea eax, [ebp - 0x20] */ r_eax = (u32)(r_ebp+0xffffffe0u);
    /* 004780e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004780e5: lea ecx, [ebp - 0x28] */ r_ecx = (u32)(r_ebp+0xffffffd8u);
    /* 004780e8: call 0x485940 */ r_esp -= 4; W32(r_esp, 0x4780edu); f_00485940();
    /* 004780ed: mov byte ptr [ebp - 4], 2 */ W8((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 004780f1: lea ecx, [ebp - 0x72] */ r_ecx = (u32)(r_ebp+0xffffff8eu);
    /* 004780f4: call 0x4a20d0 */ r_esp -= 4; W32(r_esp, 0x4780f9u); f_004a20d0();
    /* 004780f9: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 004780fc: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 004780ff: mov dword ptr [ebp - 0x84], ecx */ W32((u32)(r_ebp+0xffffff7cu), r_ecx);
    /* 00478105: mov byte ptr [ebp - 4], 3 */ W8((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 00478109: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 0047810e: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 00478113: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 00478118: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 0047811d: mov edx, dword ptr [0x791400] */ r_edx = R32((u32)(0x791400u));
    /* 00478123: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00478124: mov eax, dword ptr [0x7913b0] */ r_eax = R32((u32)(0x7913b0u));
    /* 00478129: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047812a: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 00478130: call 0x4a2100 */ r_esp -= 4; W32(r_esp, 0x478135u); f_004a2100();
    /* 00478135: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00478136: lea ecx, [ebp - 0x20] */ r_ecx = (u32)(r_ebp+0xffffffe0u);
    /* 00478139: call 0x4a2550 */ r_esp -= 4; W32(r_esp, 0x47813eu); f_004a2550();
    /* 0047813e: mov byte ptr [ebp - 0x6d], al */ W8((u32)(r_ebp+0xffffff93u), (u8)r_eax);
    /* 00478141: mov byte ptr [ebp - 4], 2 */ W8((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00478145: lea ecx, [ebp - 0x72] */ r_ecx = (u32)(r_ebp+0xffffff8eu);
    /* 00478148: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x47814du); f_004a20f0();
    /* 0047814d: movzx ecx, byte ptr [ebp - 0x6d] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffff93u));
    /* 00478151: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00478153: je 0x47815f */ if (fZ) goto L_0047815f;
L_00478155:; BB(0x00478155);
    /* 00478155: mov dword ptr [0x791318], 1 */ W32((u32)(0x791318u), 0x1u);
L_0047815f:; BB(0x0047815f);
    /* 0047815f: mov byte ptr [ebp - 4], 1 */ W8((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00478163: lea ecx, [ebp - 0x20] */ r_ecx = (u32)(r_ebp+0xffffffe0u);
    /* 00478166: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x47816bu); f_004a20f0();
    /* 0047816b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00478172: lea ecx, [ebp - 0x28] */ r_ecx = (u32)(r_ebp+0xffffffd8u);
    /* 00478175: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x47817au); f_00484470();
L_0047817a:; BB(0x0047817a);
    /* 0047817a: jmp 0x4782b4 */ goto L_004782b4;
L_0047817f:; BB(0x0047817f);
    /* 0047817f: mov edx, dword ptr [0x7912f4] */ r_edx = R32((u32)(0x7912f4u));
    /* 00478185: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00478186: mov eax, dword ptr [0x791308] */ r_eax = R32((u32)(0x791308u));
    /* 0047818b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047818c: movzx ecx, byte ptr [0x7912e9] */ r_ecx = (u32)R8((u32)(0x7912e9u));
    /* 00478193: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00478195: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00478198: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00478199: call 0x46ef30 */ r_esp -= 4; W32(r_esp, 0x47819eu); f_0046ef30();
    /* 0047819e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004781a1: mov dword ptr [0x791318], eax */ W32((u32)(0x791318u), r_eax);
    /* 004781a6: movzx eax, byte ptr [0x7912e9] */ r_eax = (u32)R8((u32)(0x7912e9u));
    /* 004781ad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004781af: jne 0x4782b4 */ if (!fZ) goto L_004782b4;
L_004781b5:; BB(0x004781b5);
    /* 004781b5: cmp dword ptr [0x791318], 0 */ {  u32 a = R32((u32)(0x791318u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004781bc: jne 0x4782b4 */ if (!fZ) goto L_004782b4;
L_004781c2:; BB(0x004781c2);
    /* 004781c2: mov byte ptr [ebp - 0x35], 0 */ W8((u32)(r_ebp+0xffffffcbu), 0x0u);
    /* 004781c6: lea ecx, [ebp - 0x34] */ r_ecx = (u32)(r_ebp+0xffffffccu);
    /* 004781c9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004781ca: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004781cd: call 0x4c7c40 */ r_esp -= 4; W32(r_esp, 0x4781d2u); f_004c7c40();
    /* 004781d2: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 004781d9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004781db: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004781dd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004781df: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004781e1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004781e3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004781e5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004781e7: lea edx, [ebp - 0x2c] */ r_edx = (u32)(r_ebp+0xffffffd4u);
    /* 004781ea: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004781eb: lea ecx, [ebp - 0x34] */ r_ecx = (u32)(r_ebp+0xffffffccu);
    /* 004781ee: call 0x485940 */ r_esp -= 4; W32(r_esp, 0x4781f3u); f_00485940();
    /* 004781f3: mov byte ptr [ebp - 4], 5 */ W8((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 004781f7: mov eax, dword ptr [0x791390] */ r_eax = R32((u32)(0x791390u));
    /* 004781fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004781fd: lea ecx, [ebp - 0x73] */ r_ecx = (u32)(r_ebp+0xffffff8du);
    /* 00478200: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00478201: lea ecx, [ebp - 0x2c] */ r_ecx = (u32)(r_ebp+0xffffffd4u);
    /* 00478204: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x478209u); f_004a2160();
    /* 00478209: mov ecx, eax */ r_ecx = r_eax;
    /* 0047820b: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x478210u); f_004a1e10();
    /* 00478210: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00478213: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00478215: je 0x47822e */ if (fZ) goto L_0047822e;
L_00478217:; BB(0x00478217);
    /* 00478217: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00478219: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0047821b: lea ecx, [ebp - 0x34] */ r_ecx = (u32)(r_ebp+0xffffffccu);
    /* 0047821e: call 0x485320 */ r_esp -= 4; W32(r_esp, 0x478223u); f_00485320();
    /* 00478223: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00478226: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00478228: je 0x47822e */ if (fZ) goto L_0047822e;
L_0047822a:; BB(0x0047822a);
    /* 0047822a: mov byte ptr [ebp - 0x35], 1 */ W8((u32)(r_ebp+0xffffffcbu), 0x1u);
L_0047822e:; BB(0x0047822e);
    /* 0047822e: mov ecx, dword ptr [0x7913b0] */ r_ecx = R32((u32)(0x7913b0u));
    /* 00478234: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00478235: lea edx, [ebp - 0x74] */ r_edx = (u32)(r_ebp+0xffffff8cu);
    /* 00478238: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00478239: lea ecx, [ebp - 0x2c] */ r_ecx = (u32)(r_ebp+0xffffffd4u);
    /* 0047823c: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x478241u); f_004a2160();
    /* 00478241: mov ecx, eax */ r_ecx = r_eax;
    /* 00478243: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x478248u); f_004a1e10();
    /* 00478248: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0047824b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047824d: je 0x478266 */ if (fZ) goto L_00478266;
L_0047824f:; BB(0x0047824f);
    /* 0047824f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00478251: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00478253: lea ecx, [ebp - 0x34] */ r_ecx = (u32)(r_ebp+0xffffffccu);
    /* 00478256: call 0x485320 */ r_esp -= 4; W32(r_esp, 0x47825bu); f_00485320();
    /* 0047825b: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0047825e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00478260: je 0x478266 */ if (fZ) goto L_00478266;
L_00478262:; BB(0x00478262);
    /* 00478262: mov byte ptr [ebp - 0x35], 1 */ W8((u32)(r_ebp+0xffffffcbu), 0x1u);
L_00478266:; BB(0x00478266);
    /* 00478266: movzx edx, byte ptr [ebp - 0x35] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffcbu));
    /* 0047826a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047826c: je 0x478299 */ if (fZ) goto L_00478299;
L_0047826e:; BB(0x0047826e);
    /* 0047826e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00478274: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00478277: call 0x4f6640 */ r_esp -= 4; W32(r_esp, 0x47827cu); f_004f6640();
    /* 0047827c: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0047827f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00478281: je 0x47828f */ if (fZ) goto L_0047828f;
L_00478283:; BB(0x00478283);
    /* 00478283: mov dword ptr [0x791318], 1 */ W32((u32)(0x791318u), 0x1u);
    /* 0047828d: jmp 0x478299 */ goto L_00478299;
L_0047828f:; BB(0x0047828f);
    /* 0047828f: mov dword ptr [0x791318], 3 */ W32((u32)(0x791318u), 0x3u);
L_00478299:; BB(0x00478299);
    /* 00478299: mov byte ptr [ebp - 4], 4 */ W8((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 0047829d: lea ecx, [ebp - 0x2c] */ r_ecx = (u32)(r_ebp+0xffffffd4u);
    /* 004782a0: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x4782a5u); f_004a20f0();
    /* 004782a5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004782ac: lea ecx, [ebp - 0x34] */ r_ecx = (u32)(r_ebp+0xffffffccu);
    /* 004782af: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x4782b4u); f_00484470();
L_004782b4:; BB(0x004782b4);
    /* 004782b4: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004782ba: call 0x47d6b0 */ r_esp -= 4; W32(r_esp, 0x4782bfu); f_0047d6b0();
    /* 004782bf: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004782c2: jne 0x478335 */ if (!fZ) goto L_00478335;
L_004782c4:; BB(0x004782c4);
    /* 004782c4: cmp dword ptr [0x791318], 2 */ {  u32 a = R32((u32)(0x791318u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004782cb: je 0x4782d6 */ if (fZ) goto L_004782d6;
L_004782cd:; BB(0x004782cd);
    /* 004782cd: cmp dword ptr [0x791318], 4 */ {  u32 a = R32((u32)(0x791318u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004782d4: jne 0x478335 */ if (!fZ) goto L_00478335;
L_004782d6:; BB(0x004782d6);
    /* 004782d6: movzx ecx, byte ptr [0x7912e9] */ r_ecx = (u32)R8((u32)(0x7912e9u));
    /* 004782dd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004782df: je 0x478306 */ if (fZ) goto L_00478306;
L_004782e1:; BB(0x004782e1);
    /* 004782e1: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004782e7: call 0x47bde0 */ r_esp -= 4; W32(r_esp, 0x4782ecu); f_0047bde0();
    /* 004782ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004782ed: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004782f3: call 0x47bd60 */ r_esp -= 4; W32(r_esp, 0x4782f8u); f_0047bd60();
    /* 004782f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004782f9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004782fc: call 0x4c79f0 */ r_esp -= 4; W32(r_esp, 0x478301u); f_004c79f0();
    /* 00478301: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00478304: jmp 0x478329 */ goto L_00478329;
L_00478306:; BB(0x00478306);
    /* 00478306: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0047830c: call 0x47bda0 */ r_esp -= 4; W32(r_esp, 0x478311u); f_0047bda0();
    /* 00478311: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00478312: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00478318: call 0x47bd60 */ r_esp -= 4; W32(r_esp, 0x47831du); f_0047bd60();
    /* 0047831d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047831e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00478321: call 0x4c79f0 */ r_esp -= 4; W32(r_esp, 0x478326u); f_004c79f0();
    /* 00478326: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
L_00478329:; BB(0x00478329);
    /* 00478329: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0047832c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0047832d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00478330: call 0x4c79b0 */ r_esp -= 4; W32(r_esp, 0x478335u); f_004c79b0();
L_00478335:; BB(0x00478335);
    /* 00478335: mov eax, 5 */ r_eax = 0x5u;
    /* 0047833a: jmp 0x4787cd */ goto L_004787cd;
L_00478344:; BB(0x00478344);
    /* 00478344: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00478347: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x47834cu); f_004c6cb0();
    /* 0047834c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047834f: jne 0x478786 */ if (!fZ) goto L_00478786;
L_00478355:; BB(0x00478355);
    /* 00478355: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00478358: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x47835du); f_004c7010();
    /* 0047835d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00478360: je 0x478379 */ if (fZ) goto L_00478379;
L_00478362:; BB(0x00478362);
    /* 00478362: push 0x259 */ { u32 v = 0x259u; r_esp -= 4; W32(r_esp, v); }
    /* 00478367: push 0x6bc63c */ { u32 v = 0x6bc63cu; r_esp -= 4; W32(r_esp, v); }
    /* 0047836c: push 0x6bc65c */ { u32 v = 0x6bc65cu; r_esp -= 4; W32(r_esp, v); }
    /* 00478371: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x478376u); f_005e9f20();
    /* 00478376: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00478379:; BB(0x00478379);
    /* 00478379: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0047837f: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x478384u); f_0047e190();
    /* 00478384: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00478386: je 0x47839f */ if (fZ) goto L_0047839f;
L_00478388:; BB(0x00478388);
    /* 00478388: push 0x25a */ { u32 v = 0x25au; r_esp -= 4; W32(r_esp, v); }
    /* 0047838d: push 0x6bc63c */ { u32 v = 0x6bc63cu; r_esp -= 4; W32(r_esp, v); }
    /* 00478392: push 0x6bc5fc */ { u32 v = 0x6bc5fcu; r_esp -= 4; W32(r_esp, v); }
    /* 00478397: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x47839cu); f_005e9f20();
    /* 0047839c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0047839f:; BB(0x0047839f);
    /* 0047839f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004783a5: call 0x47e280 */ r_esp -= 4; W32(r_esp, 0x4783aau); f_0047e280();
    /* 004783aa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004783ac: jne 0x47855d */ if (!fZ) goto L_0047855d;
L_004783b2:; BB(0x004783b2);
    /* 004783b2: mov edx, dword ptr [0x7912f0] */ r_edx = R32((u32)(0x7912f0u));
    /* 004783b8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004783b9: mov eax, dword ptr [0x7912f4] */ r_eax = R32((u32)(0x7912f4u));
    /* 004783be: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004783bf: mov ecx, dword ptr [0x791308] */ r_ecx = R32((u32)(0x791308u));
    /* 004783c5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004783c6: movzx edx, byte ptr [0x7912e9] */ r_edx = (u32)R8((u32)(0x7912e9u));
    /* 004783cd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004783cf: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 004783d2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004783d3: call 0x46cd10 */ r_esp -= 4; W32(r_esp, 0x4783d8u); f_0046cd10();
    /* 004783d8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004783db: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 004783de: movzx ecx, byte ptr [0x7912e9] */ r_ecx = (u32)R8((u32)(0x7912e9u));
    /* 004783e5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004783e7: jne 0x47846e */ if (!fZ) goto L_0047846e;
L_004783ed:; BB(0x004783ed);
    /* 004783ed: cmp dword ptr [ebp - 0x40], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004783f1: jne 0x47846e */ if (!fZ) goto L_0047846e;
L_004783f3:; BB(0x004783f3);
    /* 004783f3: mov byte ptr [ebp - 0x49], 0 */ W8((u32)(r_ebp+0xffffffb7u), 0x0u);
    /* 004783f7: lea edx, [ebp - 0x48] */ r_edx = (u32)(r_ebp+0xffffffb8u);
    /* 004783fa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004783fb: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004783fe: call 0x4c7c40 */ r_esp -= 4; W32(r_esp, 0x478403u); f_004c7c40();
    /* 00478403: mov dword ptr [ebp - 4], 6 */ W32((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 0047840a: lea ecx, [ebp - 0x48] */ r_ecx = (u32)(r_ebp+0xffffffb8u);
    /* 0047840d: call 0x484bf0 */ r_esp -= 4; W32(r_esp, 0x478412u); f_00484bf0();
    /* 00478412: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 00478415: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00478418: jl 0x47841e */ if ((fS!=fO)) goto L_0047841e;
L_0047841a:; BB(0x0047841a);
    /* 0047841a: mov byte ptr [ebp - 0x49], 1 */ W8((u32)(r_ebp+0xffffffb7u), 0x1u);
L_0047841e:; BB(0x0047841e);
    /* 0047841e: lea ecx, [ebp - 0x48] */ r_ecx = (u32)(r_ebp+0xffffffb8u);
    /* 00478421: call 0x485000 */ r_esp -= 4; W32(r_esp, 0x478426u); f_00485000();
    /* 00478426: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 00478429: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0047842c: jl 0x478432 */ if ((fS!=fO)) goto L_00478432;
L_0047842e:; BB(0x0047842e);
    /* 0047842e: mov byte ptr [ebp - 0x49], 1 */ W8((u32)(r_ebp+0xffffffb7u), 0x1u);
L_00478432:; BB(0x00478432);
    /* 00478432: movzx edx, byte ptr [ebp - 0x49] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffb7u));
    /* 00478436: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00478438: je 0x47845f */ if (fZ) goto L_0047845f;
L_0047843a:; BB(0x0047843a);
    /* 0047843a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00478440: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00478443: call 0x4f6640 */ r_esp -= 4; W32(r_esp, 0x478448u); f_004f6640();
    /* 00478448: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0047844b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047844d: je 0x478458 */ if (fZ) goto L_00478458;
L_0047844f:; BB(0x0047844f);
    /* 0047844f: mov dword ptr [ebp - 0x40], 1 */ W32((u32)(r_ebp+0xffffffc0u), 0x1u);
    /* 00478456: jmp 0x47845f */ goto L_0047845f;
L_00478458:; BB(0x00478458);
    /* 00478458: mov dword ptr [ebp - 0x40], 3 */ W32((u32)(r_ebp+0xffffffc0u), 0x3u);
L_0047845f:; BB(0x0047845f);
    /* 0047845f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00478466: lea ecx, [ebp - 0x48] */ r_ecx = (u32)(r_ebp+0xffffffb8u);
    /* 00478469: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x47846eu); f_00484470();
L_0047846e:; BB(0x0047846e);
    /* 0047846e: movzx ecx, byte ptr [0x7912e9] */ r_ecx = (u32)R8((u32)(0x7912e9u));
    /* 00478475: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00478477: jne 0x478558 */ if (!fZ) goto L_00478558;
L_0047847d:; BB(0x0047847d);
    /* 0047847d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00478483: call 0x47d7b0 */ r_esp -= 4; W32(r_esp, 0x478488u); f_0047d7b0();
    /* 00478488: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047848b: jne 0x478558 */ if (!fZ) goto L_00478558;
L_00478491:; BB(0x00478491);
    /* 00478491: cmp dword ptr [ebp - 0x40], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00478495: jne 0x478558 */ if (!fZ) goto L_00478558;
L_0047849b:; BB(0x0047849b);
    /* 0047849b: lea edx, [ebp - 0x58] */ r_edx = (u32)(r_ebp+0xffffffa8u);
    /* 0047849e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0047849f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004784a2: call 0x4c7c40 */ r_esp -= 4; W32(r_esp, 0x4784a7u); f_004c7c40();
    /* 004784a7: mov dword ptr [ebp - 4], 7 */ W32((u32)(r_ebp+0xfffffffcu), 0x7u);
    /* 004784ae: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004784b0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004784b2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004784b4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004784b6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004784b8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004784ba: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004784bc: lea eax, [ebp - 0x50] */ r_eax = (u32)(r_ebp+0xffffffb0u);
    /* 004784bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004784c0: lea ecx, [ebp - 0x58] */ r_ecx = (u32)(r_ebp+0xffffffa8u);
    /* 004784c3: call 0x485940 */ r_esp -= 4; W32(r_esp, 0x4784c8u); f_00485940();
    /* 004784c8: mov byte ptr [ebp - 4], 8 */ W8((u32)(r_ebp+0xfffffffcu), 0x8u);
    /* 004784cc: lea ecx, [ebp - 0x7a] */ r_ecx = (u32)(r_ebp+0xffffff86u);
    /* 004784cf: call 0x4a20d0 */ r_esp -= 4; W32(r_esp, 0x4784d4u); f_004a20d0();
    /* 004784d4: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 004784da: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 004784e0: mov dword ptr [ebp - 0x8c], ecx */ W32((u32)(r_ebp+0xffffff74u), r_ecx);
    /* 004784e6: mov byte ptr [ebp - 4], 9 */ W8((u32)(r_ebp+0xfffffffcu), 0x9u);
    /* 004784ea: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 004784ef: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 004784f4: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 004784f9: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 004784fe: mov edx, dword ptr [0x791400] */ r_edx = R32((u32)(0x791400u));
    /* 00478504: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00478505: mov eax, dword ptr [0x7913b0] */ r_eax = R32((u32)(0x7913b0u));
    /* 0047850a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047850b: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 00478511: call 0x4a2100 */ r_esp -= 4; W32(r_esp, 0x478516u); f_004a2100();
    /* 00478516: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00478517: lea ecx, [ebp - 0x50] */ r_ecx = (u32)(r_ebp+0xffffffb0u);
    /* 0047851a: call 0x4a2550 */ r_esp -= 4; W32(r_esp, 0x47851fu); f_004a2550();
    /* 0047851f: mov byte ptr [ebp - 0x75], al */ W8((u32)(r_ebp+0xffffff8bu), (u8)r_eax);
    /* 00478522: mov byte ptr [ebp - 4], 8 */ W8((u32)(r_ebp+0xfffffffcu), 0x8u);
    /* 00478526: lea ecx, [ebp - 0x7a] */ r_ecx = (u32)(r_ebp+0xffffff86u);
    /* 00478529: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x47852eu); f_004a20f0();
    /* 0047852e: movzx ecx, byte ptr [ebp - 0x75] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffff8bu));
    /* 00478532: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00478534: je 0x47853d */ if (fZ) goto L_0047853d;
L_00478536:; BB(0x00478536);
    /* 00478536: mov dword ptr [ebp - 0x40], 1 */ W32((u32)(r_ebp+0xffffffc0u), 0x1u);
L_0047853d:; BB(0x0047853d);
    /* 0047853d: mov byte ptr [ebp - 4], 7 */ W8((u32)(r_ebp+0xfffffffcu), 0x7u);
    /* 00478541: lea ecx, [ebp - 0x50] */ r_ecx = (u32)(r_ebp+0xffffffb0u);
    /* 00478544: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x478549u); f_004a20f0();
    /* 00478549: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00478550: lea ecx, [ebp - 0x58] */ r_ecx = (u32)(r_ebp+0xffffffa8u);
    /* 00478553: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x478558u); f_00484470();
L_00478558:; BB(0x00478558);
    /* 00478558: jmp 0x478687 */ goto L_00478687;
L_0047855d:; BB(0x0047855d);
    /* 0047855d: mov edx, dword ptr [0x7912f4] */ r_edx = R32((u32)(0x7912f4u));
    /* 00478563: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00478564: mov eax, dword ptr [0x791308] */ r_eax = R32((u32)(0x791308u));
    /* 00478569: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047856a: movzx ecx, byte ptr [0x7912e9] */ r_ecx = (u32)R8((u32)(0x7912e9u));
    /* 00478571: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00478573: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00478576: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00478577: call 0x46ef30 */ r_esp -= 4; W32(r_esp, 0x47857cu); f_0046ef30();
    /* 0047857c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047857f: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00478582: movzx eax, byte ptr [0x7912e9] */ r_eax = (u32)R8((u32)(0x7912e9u));
    /* 00478589: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047858b: jne 0x478687 */ if (!fZ) goto L_00478687;
L_00478591:; BB(0x00478591);
    /* 00478591: cmp dword ptr [ebp - 0x40], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00478595: jne 0x478687 */ if (!fZ) goto L_00478687;
L_0047859b:; BB(0x0047859b);
    /* 0047859b: mov byte ptr [ebp - 0x65], 0 */ W8((u32)(r_ebp+0xffffff9bu), 0x0u);
    /* 0047859f: lea ecx, [ebp - 0x64] */ r_ecx = (u32)(r_ebp+0xffffff9cu);
    /* 004785a2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004785a3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004785a6: call 0x4c7c40 */ r_esp -= 4; W32(r_esp, 0x4785abu); f_004c7c40();
    /* 004785ab: mov dword ptr [ebp - 4], 0xa */ W32((u32)(r_ebp+0xfffffffcu), 0xau);
    /* 004785b2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004785b4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004785b6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004785b8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004785ba: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004785bc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004785be: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004785c0: lea edx, [ebp - 0x5c] */ r_edx = (u32)(r_ebp+0xffffffa4u);
    /* 004785c3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004785c4: lea ecx, [ebp - 0x64] */ r_ecx = (u32)(r_ebp+0xffffff9cu);
    /* 004785c7: call 0x485940 */ r_esp -= 4; W32(r_esp, 0x4785ccu); f_00485940();
    /* 004785cc: mov byte ptr [ebp - 4], 0xb */ W8((u32)(r_ebp+0xfffffffcu), 0xbu);
    /* 004785d0: mov eax, dword ptr [0x791390] */ r_eax = R32((u32)(0x791390u));
    /* 004785d5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004785d6: lea ecx, [ebp - 0x7b] */ r_ecx = (u32)(r_ebp+0xffffff85u);
    /* 004785d9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004785da: lea ecx, [ebp - 0x5c] */ r_ecx = (u32)(r_ebp+0xffffffa4u);
    /* 004785dd: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x4785e2u); f_004a2160();
    /* 004785e2: mov ecx, eax */ r_ecx = r_eax;
    /* 004785e4: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x4785e9u); f_004a1e10();
    /* 004785e9: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004785ec: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004785ee: je 0x478607 */ if (fZ) goto L_00478607;
L_004785f0:; BB(0x004785f0);
    /* 004785f0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004785f2: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 004785f4: lea ecx, [ebp - 0x64] */ r_ecx = (u32)(r_ebp+0xffffff9cu);
    /* 004785f7: call 0x485320 */ r_esp -= 4; W32(r_esp, 0x4785fcu); f_00485320();
    /* 004785fc: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004785ff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00478601: je 0x478607 */ if (fZ) goto L_00478607;
L_00478603:; BB(0x00478603);
    /* 00478603: mov byte ptr [ebp - 0x65], 1 */ W8((u32)(r_ebp+0xffffff9bu), 0x1u);
L_00478607:; BB(0x00478607);
    /* 00478607: mov ecx, dword ptr [0x7913b0] */ r_ecx = R32((u32)(0x7913b0u));
    /* 0047860d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047860e: lea edx, [ebp - 0x7c] */ r_edx = (u32)(r_ebp+0xffffff84u);
    /* 00478611: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00478612: lea ecx, [ebp - 0x5c] */ r_ecx = (u32)(r_ebp+0xffffffa4u);
    /* 00478615: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x47861au); f_004a2160();
    /* 0047861a: mov ecx, eax */ r_ecx = r_eax;
    /* 0047861c: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x478621u); f_004a1e10();
    /* 00478621: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00478624: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00478626: je 0x47863f */ if (fZ) goto L_0047863f;
L_00478628:; BB(0x00478628);
    /* 00478628: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047862a: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0047862c: lea ecx, [ebp - 0x64] */ r_ecx = (u32)(r_ebp+0xffffff9cu);
    /* 0047862f: call 0x485320 */ r_esp -= 4; W32(r_esp, 0x478634u); f_00485320();
    /* 00478634: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00478637: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00478639: je 0x47863f */ if (fZ) goto L_0047863f;
L_0047863b:; BB(0x0047863b);
    /* 0047863b: mov byte ptr [ebp - 0x65], 1 */ W8((u32)(r_ebp+0xffffff9bu), 0x1u);
L_0047863f:; BB(0x0047863f);
    /* 0047863f: movzx edx, byte ptr [ebp - 0x65] */ r_edx = (u32)R8((u32)(r_ebp+0xffffff9bu));
    /* 00478643: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00478645: je 0x47866c */ if (fZ) goto L_0047866c;
L_00478647:; BB(0x00478647);
    /* 00478647: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0047864d: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00478650: call 0x4f6640 */ r_esp -= 4; W32(r_esp, 0x478655u); f_004f6640();
    /* 00478655: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00478658: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047865a: je 0x478665 */ if (fZ) goto L_00478665;
L_0047865c:; BB(0x0047865c);
    /* 0047865c: mov dword ptr [ebp - 0x40], 1 */ W32((u32)(r_ebp+0xffffffc0u), 0x1u);
    /* 00478663: jmp 0x47866c */ goto L_0047866c;
L_00478665:; BB(0x00478665);
    /* 00478665: mov dword ptr [ebp - 0x40], 3 */ W32((u32)(r_ebp+0xffffffc0u), 0x3u);
L_0047866c:; BB(0x0047866c);
    /* 0047866c: mov byte ptr [ebp - 4], 0xa */ W8((u32)(r_ebp+0xfffffffcu), 0xau);
    /* 00478670: lea ecx, [ebp - 0x5c] */ r_ecx = (u32)(r_ebp+0xffffffa4u);
    /* 00478673: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x478678u); f_004a20f0();
    /* 00478678: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0047867f: lea ecx, [ebp - 0x64] */ r_ecx = (u32)(r_ebp+0xffffff9cu);
    /* 00478682: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x478687u); f_00484470();
L_00478687:; BB(0x00478687);
    /* 00478687: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0047868d: call 0x47d6b0 */ r_esp -= 4; W32(r_esp, 0x478692u); f_0047d6b0();
    /* 00478692: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00478695: jne 0x478702 */ if (!fZ) goto L_00478702;
L_00478697:; BB(0x00478697);
    /* 00478697: cmp dword ptr [ebp - 0x40], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047869b: je 0x4786a3 */ if (fZ) goto L_004786a3;
L_0047869d:; BB(0x0047869d);
    /* 0047869d: cmp dword ptr [ebp - 0x40], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004786a1: jne 0x478702 */ if (!fZ) goto L_00478702;
L_004786a3:; BB(0x004786a3);
    /* 004786a3: movzx ecx, byte ptr [0x7912e9] */ r_ecx = (u32)R8((u32)(0x7912e9u));
    /* 004786aa: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004786ac: je 0x4786d3 */ if (fZ) goto L_004786d3;
L_004786ae:; BB(0x004786ae);
    /* 004786ae: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004786b4: call 0x47bde0 */ r_esp -= 4; W32(r_esp, 0x4786b9u); f_0047bde0();
    /* 004786b9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004786ba: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004786c0: call 0x47bd60 */ r_esp -= 4; W32(r_esp, 0x4786c5u); f_0047bd60();
    /* 004786c5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004786c6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004786c9: call 0x4c79f0 */ r_esp -= 4; W32(r_esp, 0x4786ceu); f_004c79f0();
    /* 004786ce: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 004786d1: jmp 0x4786f6 */ goto L_004786f6;
L_004786d3:; BB(0x004786d3);
    /* 004786d3: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004786d9: call 0x47bda0 */ r_esp -= 4; W32(r_esp, 0x4786deu); f_0047bda0();
    /* 004786de: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004786df: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004786e5: call 0x47bd60 */ r_esp -= 4; W32(r_esp, 0x4786eau); f_0047bd60();
    /* 004786ea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004786eb: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004786ee: call 0x4c79f0 */ r_esp -= 4; W32(r_esp, 0x4786f3u); f_004c79f0();
    /* 004786f3: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
L_004786f6:; BB(0x004786f6);
    /* 004786f6: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 004786f9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004786fa: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004786fd: call 0x4c79b0 */ r_esp -= 4; W32(r_esp, 0x478702u); f_004c79b0();
L_00478702:; BB(0x00478702);
    /* 00478702: cmp dword ptr [ebp - 0x40], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00478706: jne 0x47873c */ if (!fZ) goto L_0047873c;
L_00478708:; BB(0x00478708);
    /* 00478708: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0047870b: call 0x4c6eb0 */ r_esp -= 4; W32(r_esp, 0x478710u); f_004c6eb0();
    /* 00478710: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00478713: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00478715: je 0x47873c */ if (fZ) goto L_0047873c;
L_00478717:; BB(0x00478717);
    /* 00478717: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0047871d: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00478720: call 0x4f6640 */ r_esp -= 4; W32(r_esp, 0x478725u); f_004f6640();
    /* 00478725: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00478728: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047872a: je 0x478735 */ if (fZ) goto L_00478735;
L_0047872c:; BB(0x0047872c);
    /* 0047872c: mov dword ptr [ebp - 0x40], 1 */ W32((u32)(r_ebp+0xffffffc0u), 0x1u);
    /* 00478733: jmp 0x47873c */ goto L_0047873c;
L_00478735:; BB(0x00478735);
    /* 00478735: mov dword ptr [ebp - 0x40], 3 */ W32((u32)(r_ebp+0xffffffc0u), 0x3u);
L_0047873c:; BB(0x0047873c);
    /* 0047873c: cmp dword ptr [ebp - 0x40], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00478740: jne 0x47877f */ if (!fZ) goto L_0047877f;
L_00478742:; BB(0x00478742);
    /* 00478742: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00478745: call 0x4c6e30 */ r_esp -= 4; W32(r_esp, 0x47874au); f_004c6e30();
    /* 0047874a: mov esi, eax */ r_esi = r_eax;
    /* 0047874c: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0047874e: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x478753u); f_0062fbf0();
    /* 00478753: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00478756: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00478758: jle 0x47877f */ if ((fZ||fS!=fO)) goto L_0047877f;
L_0047875a:; BB(0x0047875a);
    /* 0047875a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00478760: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00478763: call 0x4f6640 */ r_esp -= 4; W32(r_esp, 0x478768u); f_004f6640();
    /* 00478768: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0047876b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047876d: je 0x478778 */ if (fZ) goto L_00478778;
L_0047876f:; BB(0x0047876f);
    /* 0047876f: mov dword ptr [ebp - 0x40], 1 */ W32((u32)(r_ebp+0xffffffc0u), 0x1u);
    /* 00478776: jmp 0x47877f */ goto L_0047877f;
L_00478778:; BB(0x00478778);
    /* 00478778: mov dword ptr [ebp - 0x40], 3 */ W32((u32)(r_ebp+0xffffffc0u), 0x3u);
L_0047877f:; BB(0x0047877f);
    /* 0047877f: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00478782: jmp 0x4787cd */ goto L_004787cd;
L_00478786:; BB(0x00478786);
    /* 00478786: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00478789: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x47878eu); f_004c6cb0();
    /* 0047878e: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00478791: jne 0x4787b0 */ if (!fZ) goto L_004787b0;
L_00478793:; BB(0x00478793);
    /* 00478793: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00478795: jne 0x4787ae */ if (!fZ) goto L_004787ae;
L_00478797:; BB(0x00478797);
    /* 00478797: push 0x2e5 */ { u32 v = 0x2e5u; r_esp -= 4; W32(r_esp, v); }
    /* 0047879c: push 0x6bc63c */ { u32 v = 0x6bc63cu; r_esp -= 4; W32(r_esp, v); }
    /* 004787a1: push 0x6b2b64 */ { u32 v = 0x6b2b64u; r_esp -= 4; W32(r_esp, v); }
    /* 004787a6: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4787abu); f_005e9f20();
    /* 004787ab: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004787ae:; BB(0x004787ae);
    /* 004787ae: jmp 0x4787cb */ goto L_004787cb;
L_004787b0:; BB(0x004787b0);
    /* 004787b0: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 004787b2: jne 0x4787cb */ if (!fZ) goto L_004787cb;
L_004787b4:; BB(0x004787b4);
    /* 004787b4: push 0x2e8 */ { u32 v = 0x2e8u; r_esp -= 4; W32(r_esp, v); }
    /* 004787b9: push 0x6bc63c */ { u32 v = 0x6bc63cu; r_esp -= 4; W32(r_esp, v); }
    /* 004787be: push 0x6b2b64 */ { u32 v = 0x6b2b64u; r_esp -= 4; W32(r_esp, v); }
    /* 004787c3: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4787c8u); f_005e9f20();
    /* 004787c8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004787cb:; BB(0x004787cb);
    /* 004787cb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004787cd:; BB(0x004787cd);
    /* 004787cd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004787d0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004787d7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004787d8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004787d9: mov esp, ebp */ r_esp = r_ebp;
    /* 004787db: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004787dc: ret  */ FN_RET(0x00477f20); r_esp += 4; return;
}

