#include "protos.h"

void f_004db070(void) /* sub_4DB070 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004db070);
    /* 004db070: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004db071: mov ebp, esp */ r_ebp = r_esp;
    /* 004db073: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004db075: push 0x6a2524 */ { u32 v = 0x6a2524u; r_esp -= 4; W32(r_esp, v); }
    /* 004db07a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004db080: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004db081: sub esp, 0x8c */ {  u32 a = r_esp; u32 b = 0x8cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004db087: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 004db08c: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004db08e: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 004db091: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004db092: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 004db095: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 004db09b: mov dword ptr [ebp - 0x98], ecx */ W32((u32)(r_ebp+0xffffff68u), r_ecx);
    /* 004db0a1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004db0a8: mov eax, dword ptr [0x791390] */ r_eax = R32((u32)(0x791390u));
    /* 004db0ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004db0ae: lea ecx, [ebp - 0x7d] */ r_ecx = (u32)(r_ebp+0xffffff83u);
    /* 004db0b1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004db0b2: lea ecx, [ebp + 8] */ r_ecx = (u32)(r_ebp+0x8u);
    /* 004db0b5: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x4db0bau); f_004a2160();
    /* 004db0ba: mov ecx, eax */ r_ecx = r_eax;
    /* 004db0bc: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x4db0c1u); f_004a1e10();
    /* 004db0c1: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004db0c4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004db0c6: je 0x4db166 */ if (fZ) goto L_004db166;
L_004db0cc:; BB(0x004db0cc);
    /* 004db0cc: lea eax, [ebp - 0x7e] */ r_eax = (u32)(r_ebp+0xffffff82u);
    /* 004db0cf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004db0d0: lea ecx, [ebp + 8] */ r_ecx = (u32)(r_ebp+0x8u);
    /* 004db0d3: call 0x4a22f0 */ r_esp -= 4; W32(r_esp, 0x4db0d8u); f_004a22f0();
    /* 004db0d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004db0d9: call 0x4dae80 */ r_esp -= 4; W32(r_esp, 0x4db0deu); f_004dae80();
    /* 004db0de: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004db0e1: movsx ecx, al */ r_ecx = (u32)(i32)(i8)(u8)r_eax;
    /* 004db0e4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004db0e5: lea edx, [ebp - 0x7f] */ r_edx = (u32)(r_ebp+0xffffff81u);
    /* 004db0e8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004db0e9: lea ecx, [ebp + 8] */ r_ecx = (u32)(r_ebp+0x8u);
    /* 004db0ec: call 0x4a22a0 */ r_esp -= 4; W32(r_esp, 0x4db0f1u); f_004a22a0();
    /* 004db0f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004db0f2: call 0x4dae80 */ r_esp -= 4; W32(r_esp, 0x4db0f7u); f_004dae80();
    /* 004db0f7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004db0fa: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 004db0fd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004db0fe: lea ecx, [ebp - 0x80] */ r_ecx = (u32)(r_ebp+0xffffff80u);
    /* 004db101: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004db102: lea ecx, [ebp + 8] */ r_ecx = (u32)(r_ebp+0x8u);
    /* 004db105: call 0x4a2250 */ r_esp -= 4; W32(r_esp, 0x4db10au); f_004a2250();
    /* 004db10a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004db10b: call 0x4dae80 */ r_esp -= 4; W32(r_esp, 0x4db110u); f_004dae80();
    /* 004db110: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004db113: movsx edx, al */ r_edx = (u32)(i32)(i8)(u8)r_eax;
    /* 004db116: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004db117: lea eax, [ebp - 0x81] */ r_eax = (u32)(r_ebp+0xffffff7fu);
    /* 004db11d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004db11e: lea ecx, [ebp + 8] */ r_ecx = (u32)(r_ebp+0x8u);
    /* 004db121: call 0x4a2200 */ r_esp -= 4; W32(r_esp, 0x4db126u); f_004a2200();
    /* 004db126: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004db127: call 0x4dae80 */ r_esp -= 4; W32(r_esp, 0x4db12cu); f_004dae80();
    /* 004db12c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004db12f: movsx ecx, al */ r_ecx = (u32)(i32)(i8)(u8)r_eax;
    /* 004db132: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004db133: lea edx, [ebp - 0x82] */ r_edx = (u32)(r_ebp+0xffffff7eu);
    /* 004db139: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004db13a: lea ecx, [ebp + 8] */ r_ecx = (u32)(r_ebp+0x8u);
    /* 004db13d: call 0x4a21b0 */ r_esp -= 4; W32(r_esp, 0x4db142u); f_004a21b0();
    /* 004db142: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004db143: call 0x4dae80 */ r_esp -= 4; W32(r_esp, 0x4db148u); f_004dae80();
    /* 004db148: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004db14b: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 004db14e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004db14f: push 0x6bf99c */ { u32 v = 0x6bf99cu; r_esp -= 4; W32(r_esp, v); }
    /* 004db154: lea ecx, [ebp - 0x7c] */ r_ecx = (u32)(r_ebp+0xffffff84u);
    /* 004db157: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004db158: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4db15eu); call_ind(t); }
    /* 004db15e: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004db161: jmp 0x4db5a0 */ goto L_004db5a0;
L_004db166:; BB(0x004db166);
    /* 004db166: mov edx, dword ptr [0x7913b0] */ r_edx = R32((u32)(0x7913b0u));
    /* 004db16c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004db16d: lea eax, [ebp - 0x83] */ r_eax = (u32)(r_ebp+0xffffff7du);
    /* 004db173: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004db174: lea ecx, [ebp + 8] */ r_ecx = (u32)(r_ebp+0x8u);
    /* 004db177: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x4db17cu); f_004a2160();
    /* 004db17c: mov ecx, eax */ r_ecx = r_eax;
    /* 004db17e: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x4db183u); f_004a1e10();
    /* 004db183: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004db186: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004db188: je 0x4db1af */ if (fZ) goto L_004db1af;
L_004db18a:; BB(0x004db18a);
    /* 004db18a: push 0x6ba750 */ { u32 v = 0x6ba750u; r_esp -= 4; W32(r_esp, v); }
    /* 004db18f: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4db194u); f_00630f40();
    /* 004db194: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004db197: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004db198: push 0x6b2fd8 */ { u32 v = 0x6b2fd8u; r_esp -= 4; W32(r_esp, v); }
    /* 004db19d: lea edx, [ebp - 0x7c] */ r_edx = (u32)(r_ebp+0xffffff84u);
    /* 004db1a0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004db1a1: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4db1a7u); call_ind(t); }
    /* 004db1a7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004db1aa: jmp 0x4db5a0 */ goto L_004db5a0;
L_004db1af:; BB(0x004db1af);
    /* 004db1af: mov eax, dword ptr [0x79139c] */ r_eax = R32((u32)(0x79139cu));
    /* 004db1b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004db1b5: lea ecx, [ebp - 0x84] */ r_ecx = (u32)(r_ebp+0xffffff7cu);
    /* 004db1bb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004db1bc: lea ecx, [ebp + 8] */ r_ecx = (u32)(r_ebp+0x8u);
    /* 004db1bf: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x4db1c4u); f_004a2160();
    /* 004db1c4: mov ecx, eax */ r_ecx = r_eax;
    /* 004db1c6: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x4db1cbu); f_004a1e10();
    /* 004db1cb: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004db1ce: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004db1d0: je 0x4db1f7 */ if (fZ) goto L_004db1f7;
L_004db1d2:; BB(0x004db1d2);
    /* 004db1d2: push 0x6bf988 */ { u32 v = 0x6bf988u; r_esp -= 4; W32(r_esp, v); }
    /* 004db1d7: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4db1dcu); f_00630f40();
    /* 004db1dc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004db1df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004db1e0: push 0x6b2fd8 */ { u32 v = 0x6b2fd8u; r_esp -= 4; W32(r_esp, v); }
    /* 004db1e5: lea eax, [ebp - 0x7c] */ r_eax = (u32)(r_ebp+0xffffff84u);
    /* 004db1e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004db1e9: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4db1efu); call_ind(t); }
    /* 004db1ef: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004db1f2: jmp 0x4db5a0 */ goto L_004db5a0;
L_004db1f7:; BB(0x004db1f7);
    /* 004db1f7: mov ecx, dword ptr [0x791380] */ r_ecx = R32((u32)(0x791380u));
    /* 004db1fd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004db1fe: lea edx, [ebp - 0x85] */ r_edx = (u32)(r_ebp+0xffffff7bu);
    /* 004db204: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004db205: lea ecx, [ebp + 8] */ r_ecx = (u32)(r_ebp+0x8u);
    /* 004db208: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x4db20du); f_004a2160();
    /* 004db20d: mov ecx, eax */ r_ecx = r_eax;
    /* 004db20f: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x4db214u); f_004a1e10();
    /* 004db214: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004db217: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004db219: je 0x4db240 */ if (fZ) goto L_004db240;
L_004db21b:; BB(0x004db21b);
    /* 004db21b: push 0x6ba760 */ { u32 v = 0x6ba760u; r_esp -= 4; W32(r_esp, v); }
    /* 004db220: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4db225u); f_00630f40();
    /* 004db225: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004db228: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004db229: push 0x6b2fd8 */ { u32 v = 0x6b2fd8u; r_esp -= 4; W32(r_esp, v); }
    /* 004db22e: lea ecx, [ebp - 0x7c] */ r_ecx = (u32)(r_ebp+0xffffff84u);
    /* 004db231: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004db232: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4db238u); call_ind(t); }
    /* 004db238: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004db23b: jmp 0x4db5a0 */ goto L_004db5a0;
L_004db240:; BB(0x004db240);
    /* 004db240: mov edx, dword ptr [0x791418] */ r_edx = R32((u32)(0x791418u));
    /* 004db246: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004db247: lea eax, [ebp - 0x86] */ r_eax = (u32)(r_ebp+0xffffff7au);
    /* 004db24d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004db24e: lea ecx, [ebp + 8] */ r_ecx = (u32)(r_ebp+0x8u);
    /* 004db251: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x4db256u); f_004a2160();
    /* 004db256: mov ecx, eax */ r_ecx = r_eax;
    /* 004db258: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x4db25du); f_004a1e10();
    /* 004db25d: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004db260: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004db262: je 0x4db289 */ if (fZ) goto L_004db289;
L_004db264:; BB(0x004db264);
    /* 004db264: push 0x6bf974 */ { u32 v = 0x6bf974u; r_esp -= 4; W32(r_esp, v); }
    /* 004db269: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4db26eu); f_00630f40();
    /* 004db26e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004db271: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004db272: push 0x6b2fd8 */ { u32 v = 0x6b2fd8u; r_esp -= 4; W32(r_esp, v); }
    /* 004db277: lea edx, [ebp - 0x7c] */ r_edx = (u32)(r_ebp+0xffffff84u);
    /* 004db27a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004db27b: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4db281u); call_ind(t); }
    /* 004db281: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004db284: jmp 0x4db5a0 */ goto L_004db5a0;
L_004db289:; BB(0x004db289);
    /* 004db289: mov eax, dword ptr [0x79140c] */ r_eax = R32((u32)(0x79140cu));
    /* 004db28e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004db28f: lea ecx, [ebp - 0x87] */ r_ecx = (u32)(r_ebp+0xffffff79u);
    /* 004db295: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004db296: lea ecx, [ebp + 8] */ r_ecx = (u32)(r_ebp+0x8u);
    /* 004db299: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x4db29eu); f_004a2160();
    /* 004db29e: mov ecx, eax */ r_ecx = r_eax;
    /* 004db2a0: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x4db2a5u); f_004a1e10();
    /* 004db2a5: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004db2a8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004db2aa: je 0x4db2d1 */ if (fZ) goto L_004db2d1;
L_004db2ac:; BB(0x004db2ac);
    /* 004db2ac: push 0x6ba790 */ { u32 v = 0x6ba790u; r_esp -= 4; W32(r_esp, v); }
    /* 004db2b1: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4db2b6u); f_00630f40();
    /* 004db2b6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004db2b9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004db2ba: push 0x6b2fd8 */ { u32 v = 0x6b2fd8u; r_esp -= 4; W32(r_esp, v); }
    /* 004db2bf: lea eax, [ebp - 0x7c] */ r_eax = (u32)(r_ebp+0xffffff84u);
    /* 004db2c2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004db2c3: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4db2c9u); call_ind(t); }
    /* 004db2c9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004db2cc: jmp 0x4db5a0 */ goto L_004db5a0;
L_004db2d1:; BB(0x004db2d1);
    /* 004db2d1: mov ecx, dword ptr [0x7913e4] */ r_ecx = R32((u32)(0x7913e4u));
    /* 004db2d7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004db2d8: lea edx, [ebp - 0x88] */ r_edx = (u32)(r_ebp+0xffffff78u);
    /* 004db2de: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004db2df: lea ecx, [ebp + 8] */ r_ecx = (u32)(r_ebp+0x8u);
    /* 004db2e2: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x4db2e7u); f_004a2160();
    /* 004db2e7: mov ecx, eax */ r_ecx = r_eax;
    /* 004db2e9: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x4db2eeu); f_004a1e10();
    /* 004db2ee: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004db2f1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004db2f3: je 0x4db31a */ if (fZ) goto L_004db31a;
L_004db2f5:; BB(0x004db2f5);
    /* 004db2f5: push 0x6bf964 */ { u32 v = 0x6bf964u; r_esp -= 4; W32(r_esp, v); }
    /* 004db2fa: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4db2ffu); f_00630f40();
    /* 004db2ff: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004db302: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004db303: push 0x6b2fd8 */ { u32 v = 0x6b2fd8u; r_esp -= 4; W32(r_esp, v); }
    /* 004db308: lea ecx, [ebp - 0x7c] */ r_ecx = (u32)(r_ebp+0xffffff84u);
    /* 004db30b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004db30c: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4db312u); call_ind(t); }
    /* 004db312: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004db315: jmp 0x4db5a0 */ goto L_004db5a0;
L_004db31a:; BB(0x004db31a);
    /* 004db31a: mov edx, dword ptr [0x791384] */ r_edx = R32((u32)(0x791384u));
    /* 004db320: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004db321: lea eax, [ebp - 0x89] */ r_eax = (u32)(r_ebp+0xffffff77u);
    /* 004db327: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004db328: lea ecx, [ebp + 8] */ r_ecx = (u32)(r_ebp+0x8u);
    /* 004db32b: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x4db330u); f_004a2160();
    /* 004db330: mov ecx, eax */ r_ecx = r_eax;
    /* 004db332: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x4db337u); f_004a1e10();
    /* 004db337: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004db33a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004db33c: je 0x4db363 */ if (fZ) goto L_004db363;
L_004db33e:; BB(0x004db33e);
    /* 004db33e: push 0x6bf954 */ { u32 v = 0x6bf954u; r_esp -= 4; W32(r_esp, v); }
    /* 004db343: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4db348u); f_00630f40();
    /* 004db348: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004db34b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004db34c: push 0x6b2fd8 */ { u32 v = 0x6b2fd8u; r_esp -= 4; W32(r_esp, v); }
    /* 004db351: lea edx, [ebp - 0x7c] */ r_edx = (u32)(r_ebp+0xffffff84u);
    /* 004db354: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004db355: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4db35bu); call_ind(t); }
    /* 004db35b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004db35e: jmp 0x4db5a0 */ goto L_004db5a0;
L_004db363:; BB(0x004db363);
    /* 004db363: mov eax, dword ptr [0x7913a0] */ r_eax = R32((u32)(0x7913a0u));
    /* 004db368: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004db369: lea ecx, [ebp - 0x8a] */ r_ecx = (u32)(r_ebp+0xffffff76u);
    /* 004db36f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004db370: lea ecx, [ebp + 8] */ r_ecx = (u32)(r_ebp+0x8u);
    /* 004db373: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x4db378u); f_004a2160();
    /* 004db378: mov ecx, eax */ r_ecx = r_eax;
    /* 004db37a: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x4db37fu); f_004a1e10();
    /* 004db37f: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004db382: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004db384: je 0x4db3ab */ if (fZ) goto L_004db3ab;
L_004db386:; BB(0x004db386);
    /* 004db386: push 0x6ba7a4 */ { u32 v = 0x6ba7a4u; r_esp -= 4; W32(r_esp, v); }
    /* 004db38b: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4db390u); f_00630f40();
    /* 004db390: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004db393: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004db394: push 0x6b2fd8 */ { u32 v = 0x6b2fd8u; r_esp -= 4; W32(r_esp, v); }
    /* 004db399: lea eax, [ebp - 0x7c] */ r_eax = (u32)(r_ebp+0xffffff84u);
    /* 004db39c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004db39d: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4db3a3u); call_ind(t); }
    /* 004db3a3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004db3a6: jmp 0x4db5a0 */ goto L_004db5a0;
L_004db3ab:; BB(0x004db3ab);
    /* 004db3ab: mov ecx, dword ptr [0x7913d4] */ r_ecx = R32((u32)(0x7913d4u));
    /* 004db3b1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004db3b2: lea edx, [ebp - 0x8b] */ r_edx = (u32)(r_ebp+0xffffff75u);
    /* 004db3b8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004db3b9: lea ecx, [ebp + 8] */ r_ecx = (u32)(r_ebp+0x8u);
    /* 004db3bc: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x4db3c1u); f_004a2160();
    /* 004db3c1: mov ecx, eax */ r_ecx = r_eax;
    /* 004db3c3: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x4db3c8u); f_004a1e10();
    /* 004db3c8: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004db3cb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004db3cd: je 0x4db3f4 */ if (fZ) goto L_004db3f4;
L_004db3cf:; BB(0x004db3cf);
    /* 004db3cf: push 0x6ba7b4 */ { u32 v = 0x6ba7b4u; r_esp -= 4; W32(r_esp, v); }
    /* 004db3d4: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4db3d9u); f_00630f40();
    /* 004db3d9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004db3dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004db3dd: push 0x6b2fd8 */ { u32 v = 0x6b2fd8u; r_esp -= 4; W32(r_esp, v); }
    /* 004db3e2: lea ecx, [ebp - 0x7c] */ r_ecx = (u32)(r_ebp+0xffffff84u);
    /* 004db3e5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004db3e6: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4db3ecu); call_ind(t); }
    /* 004db3ec: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004db3ef: jmp 0x4db5a0 */ goto L_004db5a0;
L_004db3f4:; BB(0x004db3f4);
    /* 004db3f4: mov edx, dword ptr [0x791394] */ r_edx = R32((u32)(0x791394u));
    /* 004db3fa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004db3fb: lea eax, [ebp - 0x8c] */ r_eax = (u32)(r_ebp+0xffffff74u);
    /* 004db401: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004db402: lea ecx, [ebp + 8] */ r_ecx = (u32)(r_ebp+0x8u);
    /* 004db405: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x4db40au); f_004a2160();
    /* 004db40a: mov ecx, eax */ r_ecx = r_eax;
    /* 004db40c: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x4db411u); f_004a1e10();
    /* 004db411: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004db414: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004db416: je 0x4db43d */ if (fZ) goto L_004db43d;
L_004db418:; BB(0x004db418);
    /* 004db418: push 0x6bf940 */ { u32 v = 0x6bf940u; r_esp -= 4; W32(r_esp, v); }
    /* 004db41d: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4db422u); f_00630f40();
    /* 004db422: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004db425: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004db426: push 0x6b2fd8 */ { u32 v = 0x6b2fd8u; r_esp -= 4; W32(r_esp, v); }
    /* 004db42b: lea edx, [ebp - 0x7c] */ r_edx = (u32)(r_ebp+0xffffff84u);
    /* 004db42e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004db42f: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4db435u); call_ind(t); }
    /* 004db435: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004db438: jmp 0x4db5a0 */ goto L_004db5a0;
L_004db43d:; BB(0x004db43d);
    /* 004db43d: mov eax, dword ptr [0x791398] */ r_eax = R32((u32)(0x791398u));
    /* 004db442: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004db443: lea ecx, [ebp - 0x8d] */ r_ecx = (u32)(r_ebp+0xffffff73u);
    /* 004db449: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004db44a: lea ecx, [ebp + 8] */ r_ecx = (u32)(r_ebp+0x8u);
    /* 004db44d: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x4db452u); f_004a2160();
    /* 004db452: mov ecx, eax */ r_ecx = r_eax;
    /* 004db454: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x4db459u); f_004a1e10();
    /* 004db459: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004db45c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004db45e: je 0x4db485 */ if (fZ) goto L_004db485;
L_004db460:; BB(0x004db460);
    /* 004db460: push 0x6ba7e4 */ { u32 v = 0x6ba7e4u; r_esp -= 4; W32(r_esp, v); }
    /* 004db465: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4db46au); f_00630f40();
    /* 004db46a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004db46d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004db46e: push 0x6b2fd8 */ { u32 v = 0x6b2fd8u; r_esp -= 4; W32(r_esp, v); }
    /* 004db473: lea eax, [ebp - 0x7c] */ r_eax = (u32)(r_ebp+0xffffff84u);
    /* 004db476: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004db477: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4db47du); call_ind(t); }
    /* 004db47d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004db480: jmp 0x4db5a0 */ goto L_004db5a0;
L_004db485:; BB(0x004db485);
    /* 004db485: mov ecx, dword ptr [0x7913e8] */ r_ecx = R32((u32)(0x7913e8u));
    /* 004db48b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004db48c: lea edx, [ebp - 0x8e] */ r_edx = (u32)(r_ebp+0xffffff72u);
    /* 004db492: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004db493: lea ecx, [ebp + 8] */ r_ecx = (u32)(r_ebp+0x8u);
    /* 004db496: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x4db49bu); f_004a2160();
    /* 004db49b: mov ecx, eax */ r_ecx = r_eax;
    /* 004db49d: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x4db4a2u); f_004a1e10();
    /* 004db4a2: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004db4a5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004db4a7: je 0x4db4ce */ if (fZ) goto L_004db4ce;
L_004db4a9:; BB(0x004db4a9);
    /* 004db4a9: push 0x6ba7fc */ { u32 v = 0x6ba7fcu; r_esp -= 4; W32(r_esp, v); }
    /* 004db4ae: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4db4b3u); f_00630f40();
    /* 004db4b3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004db4b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004db4b7: push 0x6b2fd8 */ { u32 v = 0x6b2fd8u; r_esp -= 4; W32(r_esp, v); }
    /* 004db4bc: lea ecx, [ebp - 0x7c] */ r_ecx = (u32)(r_ebp+0xffffff84u);
    /* 004db4bf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004db4c0: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4db4c6u); call_ind(t); }
    /* 004db4c6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004db4c9: jmp 0x4db5a0 */ goto L_004db5a0;
L_004db4ce:; BB(0x004db4ce);
    /* 004db4ce: mov edx, dword ptr [0x7913c4] */ r_edx = R32((u32)(0x7913c4u));
    /* 004db4d4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004db4d5: lea eax, [ebp - 0x8f] */ r_eax = (u32)(r_ebp+0xffffff71u);
    /* 004db4db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004db4dc: lea ecx, [ebp + 8] */ r_ecx = (u32)(r_ebp+0x8u);
    /* 004db4df: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x4db4e4u); f_004a2160();
    /* 004db4e4: mov ecx, eax */ r_ecx = r_eax;
    /* 004db4e6: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x4db4ebu); f_004a1e10();
    /* 004db4eb: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004db4ee: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004db4f0: je 0x4db517 */ if (fZ) goto L_004db517;
L_004db4f2:; BB(0x004db4f2);
    /* 004db4f2: push 0x6bf92c */ { u32 v = 0x6bf92cu; r_esp -= 4; W32(r_esp, v); }
    /* 004db4f7: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4db4fcu); f_00630f40();
    /* 004db4fc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004db4ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004db500: push 0x6b2fd8 */ { u32 v = 0x6b2fd8u; r_esp -= 4; W32(r_esp, v); }
    /* 004db505: lea edx, [ebp - 0x7c] */ r_edx = (u32)(r_ebp+0xffffff84u);
    /* 004db508: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004db509: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4db50fu); call_ind(t); }
    /* 004db50f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004db512: jmp 0x4db5a0 */ goto L_004db5a0;
L_004db517:; BB(0x004db517);
    /* 004db517: mov eax, dword ptr [0x7913ac] */ r_eax = R32((u32)(0x7913acu));
    /* 004db51c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004db51d: lea ecx, [ebp - 0x90] */ r_ecx = (u32)(r_ebp+0xffffff70u);
    /* 004db523: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004db524: lea ecx, [ebp + 8] */ r_ecx = (u32)(r_ebp+0x8u);
    /* 004db527: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x4db52cu); f_004a2160();
    /* 004db52c: mov ecx, eax */ r_ecx = r_eax;
    /* 004db52e: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x4db533u); f_004a1e10();
    /* 004db533: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004db536: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004db538: je 0x4db55c */ if (fZ) goto L_004db55c;
L_004db53a:; BB(0x004db53a);
    /* 004db53a: push 0x6bf914 */ { u32 v = 0x6bf914u; r_esp -= 4; W32(r_esp, v); }
    /* 004db53f: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4db544u); f_00630f40();
    /* 004db544: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004db547: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004db548: push 0x6b2fd8 */ { u32 v = 0x6b2fd8u; r_esp -= 4; W32(r_esp, v); }
    /* 004db54d: lea eax, [ebp - 0x7c] */ r_eax = (u32)(r_ebp+0xffffff84u);
    /* 004db550: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004db551: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4db557u); call_ind(t); }
    /* 004db557: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004db55a: jmp 0x4db5a0 */ goto L_004db5a0;
L_004db55c:; BB(0x004db55c);
    /* 004db55c: mov ecx, dword ptr [0x7913cc] */ r_ecx = R32((u32)(0x7913ccu));
    /* 004db562: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004db563: lea edx, [ebp - 0x91] */ r_edx = (u32)(r_ebp+0xffffff6fu);
    /* 004db569: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004db56a: lea ecx, [ebp + 8] */ r_ecx = (u32)(r_ebp+0x8u);
    /* 004db56d: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x4db572u); f_004a2160();
    /* 004db572: mov ecx, eax */ r_ecx = r_eax;
    /* 004db574: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x4db579u); f_004a1e10();
    /* 004db579: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004db57c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004db57e: je 0x4db5a0 */ if (fZ) goto L_004db5a0;
L_004db580:; BB(0x004db580);
    /* 004db580: push 0x6bf900 */ { u32 v = 0x6bf900u; r_esp -= 4; W32(r_esp, v); }
    /* 004db585: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4db58au); f_00630f40();
    /* 004db58a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004db58d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004db58e: push 0x6b2fd8 */ { u32 v = 0x6b2fd8u; r_esp -= 4; W32(r_esp, v); }
    /* 004db593: lea ecx, [ebp - 0x7c] */ r_ecx = (u32)(r_ebp+0xffffff84u);
    /* 004db596: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004db597: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4db59du); call_ind(t); }
    /* 004db59d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004db5a0:; BB(0x004db5a0);
    /* 004db5a0: lea edx, [ebp - 0x7c] */ r_edx = (u32)(r_ebp+0xffffff84u);
    /* 004db5a3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004db5a4: mov eax, dword ptr [ebp - 0x98] */ r_eax = R32((u32)(r_ebp+0xffffff68u));
    /* 004db5aa: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 004db5ad: mov edx, dword ptr [ebp - 0x98] */ r_edx = R32((u32)(r_ebp+0xffffff68u));
    /* 004db5b3: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 004db5b6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004db5b8: mov ecx, eax */ r_ecx = r_eax;
    /* 004db5ba: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004db5c0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4db5c2u); call_ind(t); }
    /* 004db5c2: mov ecx, dword ptr [ebp - 0x98] */ r_ecx = R32((u32)(r_ebp+0xffffff68u));
    /* 004db5c8: mov edx, dword ptr [ecx + 0x2c] */ r_edx = R32((u32)(r_ecx+0x2cu));
    /* 004db5cb: mov eax, dword ptr [ebp - 0x98] */ r_eax = R32((u32)(r_ebp+0xffffff68u));
    /* 004db5d1: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 004db5d4: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004db5d6: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 004db5d9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4db5dbu); call_ind(t); }
    /* 004db5db: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004db5e2: lea ecx, [ebp + 8] */ r_ecx = (u32)(r_ebp+0x8u);
    /* 004db5e5: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x4db5eau); f_004a20f0();
    /* 004db5ea: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004db5ed: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004db5f4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004db5f5: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004db5f8: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004db5fa: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x4db5ffu); f_00686d72();
    /* 004db5ff: mov esp, ebp */ r_esp = r_ebp;
    /* 004db601: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004db602: ret 4 */ FN_RET(0x004db070); r_esp += 8; return;
}

void f_004db610(void) /* sub_4DB610 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004db610);
    /* 004db610: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004db611: mov ebp, esp */ r_ebp = r_esp;
    /* 004db613: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004db614: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004db617: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004db61a: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 004db61d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004db620: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 004db623: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004db625: mov ecx, eax */ r_ecx = r_eax;
    /* 004db627: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 004db62a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4db62cu); call_ind(t); }
    /* 004db62c: mov esp, ebp */ r_esp = r_ebp;
    /* 004db62e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004db62f: ret  */ FN_RET(0x004db610); r_esp += 4; return;
}

void f_004db630(void) /* sub_4DB630 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004db630);
    /* 004db630: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004db631: mov ebp, esp */ r_ebp = r_esp;
    /* 004db633: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004db635: push 0x6a258e */ { u32 v = 0x6a258eu; r_esp -= 4; W32(r_esp, v); }
    /* 004db63a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004db640: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004db641: sub esp, 0x8c */ {  u32 a = r_esp; u32 b = 0x8cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004db647: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 004db64c: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004db64e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004db64f: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 004db652: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 004db658: mov dword ptr [ebp - 0x6c], ecx */ W32((u32)(r_ebp+0xffffff94u), r_ecx);
    /* 004db65b: mov byte ptr [ebp - 0x11], 1 */ W8((u32)(r_ebp+0xffffffefu), 0x1u);
    /* 004db65f: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 004db662: call 0x4c70d0 */ r_esp -= 4; W32(r_esp, 0x4db667u); f_004c70d0();
    /* 004db667: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 004db66a: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 004db66d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004db670: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 004db673: cmp dword ptr [ebp - 0x70], 8 */ {  u32 a = R32((u32)(r_ebp+0xffffff90u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004db677: ja 0x4db694 */ if ((!fC&&!fZ)) goto L_004db694;
L_004db679:; BB(0x004db679);
    /* 004db679: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 004db67c: movzx edx, byte ptr [ecx + 0x4dbdb8] */ r_edx = (u32)R8((u32)(r_ecx+0x4dbdb8u));
    /* 004db683: jmp dword ptr [edx*4 + 0x4dbdb0] */ { u32 t = R32((u32)(r_edx*4+0x4dbdb0u)); switch (t) { case 0x4db68au: goto L_004db68a; case 0x4db690u: goto L_004db690; default: UNSUP(0x004db683, "jump table entry is not a known target"); } }
L_004db68a:; BB(0x004db68a);
    /* 004db68a: mov byte ptr [ebp - 0x11], 1 */ W8((u32)(r_ebp+0xffffffefu), 0x1u);
    /* 004db68e: jmp 0x4db694 */ goto L_004db694;
L_004db690:; BB(0x004db690);
    /* 004db690: mov byte ptr [ebp - 0x11], 0 */ W8((u32)(r_ebp+0xffffffefu), 0x0u);
L_004db694:; BB(0x004db694);
    /* 004db694: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 004db697: cmp dword ptr [eax + 0x20], 0 */ {  u32 a = R32((u32)(r_eax+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004db69b: jne 0x4db7a0 */ if (!fZ) goto L_004db7a0;
L_004db6a1:; BB(0x004db6a1);
    /* 004db6a1: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 004db6a6: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x4db6abu); f_00686d82();
    /* 004db6ab: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004db6ae: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004db6b1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004db6b8: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004db6bc: je 0x4db6cb */ if (fZ) goto L_004db6cb;
L_004db6be:; BB(0x004db6be);
    /* 004db6be: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004db6c1: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x4db6c6u); f_005eaaf0();
    /* 004db6c6: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 004db6c9: jmp 0x4db6d2 */ goto L_004db6d2;
L_004db6cb:; BB(0x004db6cb);
    /* 004db6cb: mov dword ptr [ebp - 0x74], 0 */ W32((u32)(r_ebp+0xffffff8cu), 0x0u);
L_004db6d2:; BB(0x004db6d2);
    /* 004db6d2: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 004db6d5: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 004db6d8: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004db6df: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 004db6e2: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004db6e5: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 004db6e8: movzx ecx, byte ptr [ebp - 0x11] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffefu));
    /* 004db6ec: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004db6ee: je 0x4db729 */ if (fZ) goto L_004db729;
L_004db6f0:; BB(0x004db6f0);
    /* 004db6f0: push 0x186a5 */ { u32 v = 0x186a5u; r_esp -= 4; W32(r_esp, v); }
    /* 004db6f5: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 004db6f8: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 004db6fb: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x4db700u); f_005eaf00();
    /* 004db700: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 004db703: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 004db706: add ecx, 0x5a */ {  u32 a = r_ecx; u32 b = 0x5au; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004db709: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004db70a: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 004db70d: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 004db710: add eax, 0x64 */ {  u32 a = r_eax; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004db713: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004db714: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 004db717: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 004db71a: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 004db71d: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 004db720: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004db722: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 004db725: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4db727u); call_ind(t); }
    /* 004db727: jmp 0x4db762 */ goto L_004db762;
L_004db729:; BB(0x004db729);
    /* 004db729: push 0x186a6 */ { u32 v = 0x186a6u; r_esp -= 4; W32(r_esp, v); }
    /* 004db72e: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 004db731: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 004db734: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x4db739u); f_005eaf00();
    /* 004db739: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 004db73c: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 004db73f: add eax, 0x5a */ {  u32 a = r_eax; u32 b = 0x5au; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004db742: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004db743: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 004db746: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 004db749: sub edx, 0x61 */ {  u32 a = r_edx; u32 b = 0x61u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004db74c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004db74d: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 004db750: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 004db753: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 004db756: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 004db759: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004db75b: mov ecx, eax */ r_ecx = r_eax;
    /* 004db75d: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 004db760: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4db762u); call_ind(t); }
L_004db762:; BB(0x004db762);
    /* 004db762: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 004db765: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 004db768: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 004db76b: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 004db76e: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004db770: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 004db773: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4db775u); call_ind(t); }
    /* 004db775: push 0x190 */ { u32 v = 0x190u; r_esp -= 4; W32(r_esp, v); }
    /* 004db77a: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 004db77d: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 004db780: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 004db783: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 004db786: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004db788: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 004db78b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4db78du); call_ind(t); }
    /* 004db78d: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 004db790: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 004db793: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 004db796: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 004db799: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004db79b: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 004db79e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4db7a0u); call_ind(t); }
L_004db7a0:; BB(0x004db7a0);
    /* 004db7a0: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 004db7a3: cmp dword ptr [ecx + 0x24], 0 */ {  u32 a = R32((u32)(r_ecx+0x24u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004db7a7: jne 0x4db8e6 */ if (!fZ) goto L_004db8e6;
L_004db7ad:; BB(0x004db7ad);
    /* 004db7ad: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 004db7b2: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x4db7b7u); f_00686d82();
    /* 004db7b7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004db7ba: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 004db7bd: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 004db7c4: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004db7c8: je 0x4db7d7 */ if (fZ) goto L_004db7d7;
L_004db7ca:; BB(0x004db7ca);
    /* 004db7ca: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004db7cd: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x4db7d2u); f_005ec5a0();
    /* 004db7d2: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 004db7d5: jmp 0x4db7de */ goto L_004db7de;
L_004db7d7:; BB(0x004db7d7);
    /* 004db7d7: mov dword ptr [ebp - 0x78], 0 */ W32((u32)(r_ebp+0xffffff88u), 0x0u);
L_004db7de:; BB(0x004db7de);
    /* 004db7de: mov edx, dword ptr [ebp - 0x78] */ r_edx = R32((u32)(r_ebp+0xffffff88u));
    /* 004db7e1: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 004db7e4: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004db7eb: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 004db7ee: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004db7f1: mov dword ptr [eax + 0x24], ecx */ W32((u32)(r_eax+0x24u), r_ecx);
    /* 004db7f4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004db7f5: mov edx, esp */ r_edx = r_esp;
    /* 004db7f7: mov ax, word ptr [0x75ee1c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x75ee1cu))) & 0xffffu);
    /* 004db7fd: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 004db800: mov cl, byte ptr [0x75ee1e] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(0x75ee1eu))) & 0xffu);
    /* 004db806: mov byte ptr [edx + 2], cl */ W8((u32)(r_edx+0x2u), (u8)r_ecx);
    /* 004db809: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004db80b: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 004db80d: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 004db810: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 004db813: call 0x5ecd00 */ r_esp -= 4; W32(r_esp, 0x4db818u); f_005ecd00();
    /* 004db818: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 004db81b: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 004db81e: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 004db821: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 004db824: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004db826: mov ecx, eax */ r_ecx = r_eax;
    /* 004db828: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 004db82b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4db82du); call_ind(t); }
    /* 004db82d: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004db830: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004db831: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 004db834: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 004db837: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 004db83a: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 004db83d: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004db83f: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 004db842: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4db844u); call_ind(t); }
    /* 004db844: movzx ecx, byte ptr [ebp - 0x11] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffefu));
    /* 004db848: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 004db84a: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 004db84c: and ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 004db84f: add ecx, -5 */ {  u32 a = r_ecx; u32 b = 0xfffffffbu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004db852: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004db854: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004db855: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 004db858: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 004db85b: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 004db85e: mov ecx, dword ptr [ecx + 0x24] */ r_ecx = R32((u32)(r_ecx+0x24u));
    /* 004db861: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004db863: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 004db866: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4db868u); call_ind(t); }
    /* 004db868: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 004db86a: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 004db86d: mov ecx, dword ptr [ecx + 0x24] */ r_ecx = R32((u32)(r_ecx+0x24u));
    /* 004db870: call 0x5eccb0 */ r_esp -= 4; W32(r_esp, 0x4db875u); f_005eccb0();
    /* 004db875: push 0x5e */ { u32 v = 0x5eu; r_esp -= 4; W32(r_esp, v); }
    /* 004db877: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 004db87a: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 004db87d: call 0x5ecc60 */ r_esp -= 4; W32(r_esp, 0x4db882u); f_005ecc60();
    /* 004db882: movzx eax, byte ptr [ebp - 0x11] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffefu));
    /* 004db886: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 004db888: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 004db88a: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004db88d: or eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004db890: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004db891: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 004db894: mov ecx, dword ptr [ecx + 0x24] */ r_ecx = R32((u32)(r_ecx+0x24u));
    /* 004db897: call 0x5ef310 */ r_esp -= 4; W32(r_esp, 0x4db89cu); f_005ef310();
    /* 004db89c: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 004db89f: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 004db8a2: call 0x5f53c0 */ r_esp -= 4; W32(r_esp, 0x4db8a7u); f_005f53c0();
    /* 004db8a7: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004db8aa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004db8ab: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 004db8ae: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 004db8b1: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 004db8b4: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 004db8b7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004db8b9: mov ecx, eax */ r_ecx = r_eax;
    /* 004db8bb: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 004db8be: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4db8c0u); call_ind(t); }
    /* 004db8c0: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 004db8c3: mov edx, dword ptr [ecx + 0x24] */ r_edx = R32((u32)(r_ecx+0x24u));
    /* 004db8c6: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 004db8c9: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 004db8cc: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004db8ce: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 004db8d1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4db8d3u); call_ind(t); }
    /* 004db8d3: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 004db8d6: mov edx, dword ptr [ecx + 0x24] */ r_edx = R32((u32)(r_ecx+0x24u));
    /* 004db8d9: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 004db8dc: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 004db8df: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004db8e1: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 004db8e4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4db8e6u); call_ind(t); }
L_004db8e6:; BB(0x004db8e6);
    /* 004db8e6: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 004db8e9: cmp dword ptr [ecx + 0x2c], 0 */ {  u32 a = R32((u32)(r_ecx+0x2cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004db8ed: jne 0x4dba20 */ if (!fZ) goto L_004dba20;
L_004db8f3:; BB(0x004db8f3);
    /* 004db8f3: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 004db8f8: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x4db8fdu); f_00686d82();
    /* 004db8fd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004db900: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 004db903: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 004db90a: cmp dword ptr [ebp - 0x30], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004db90e: je 0x4db91d */ if (fZ) goto L_004db91d;
L_004db910:; BB(0x004db910);
    /* 004db910: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004db913: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x4db918u); f_005ec5a0();
    /* 004db918: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 004db91b: jmp 0x4db924 */ goto L_004db924;
L_004db91d:; BB(0x004db91d);
    /* 004db91d: mov dword ptr [ebp - 0x7c], 0 */ W32((u32)(r_ebp+0xffffff84u), 0x0u);
L_004db924:; BB(0x004db924);
    /* 004db924: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 004db927: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 004db92a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004db931: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 004db934: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004db937: mov dword ptr [eax + 0x2c], ecx */ W32((u32)(r_eax+0x2cu), r_ecx);
    /* 004db93a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004db93b: mov edx, esp */ r_edx = r_esp;
    /* 004db93d: mov ax, word ptr [0x75ee1c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x75ee1cu))) & 0xffffu);
    /* 004db943: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 004db946: mov cl, byte ptr [0x75ee1e] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(0x75ee1eu))) & 0xffu);
    /* 004db94c: mov byte ptr [edx + 2], cl */ W8((u32)(r_edx+0x2u), (u8)r_ecx);
    /* 004db94f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004db951: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 004db953: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 004db956: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 004db959: call 0x5ecd00 */ r_esp -= 4; W32(r_esp, 0x4db95eu); f_005ecd00();
    /* 004db95e: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 004db961: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 004db964: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 004db967: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 004db96a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004db96c: mov ecx, eax */ r_ecx = r_eax;
    /* 004db96e: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 004db971: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4db973u); call_ind(t); }
    /* 004db973: add eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004db976: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004db977: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 004db97a: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 004db97d: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 004db980: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 004db983: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004db985: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 004db988: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4db98au); call_ind(t); }
    /* 004db98a: movzx ecx, byte ptr [ebp - 0x11] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffefu));
    /* 004db98e: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 004db990: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 004db992: and ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 004db995: add ecx, -5 */ {  u32 a = r_ecx; u32 b = 0xfffffffbu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004db998: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004db99a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004db99b: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 004db99e: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 004db9a1: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 004db9a4: mov ecx, dword ptr [ecx + 0x2c] */ r_ecx = R32((u32)(r_ecx+0x2cu));
    /* 004db9a7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004db9a9: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 004db9ac: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4db9aeu); call_ind(t); }
    /* 004db9ae: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 004db9b0: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 004db9b3: mov ecx, dword ptr [ecx + 0x2c] */ r_ecx = R32((u32)(r_ecx+0x2cu));
    /* 004db9b6: call 0x5eccb0 */ r_esp -= 4; W32(r_esp, 0x4db9bbu); f_005eccb0();
    /* 004db9bb: push 0x5e */ { u32 v = 0x5eu; r_esp -= 4; W32(r_esp, v); }
    /* 004db9bd: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 004db9c0: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 004db9c3: call 0x5ecc60 */ r_esp -= 4; W32(r_esp, 0x4db9c8u); f_005ecc60();
    /* 004db9c8: movzx eax, byte ptr [ebp - 0x11] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffefu));
    /* 004db9cc: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 004db9ce: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 004db9d0: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004db9d3: or eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004db9d6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004db9d7: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 004db9da: mov ecx, dword ptr [ecx + 0x2c] */ r_ecx = R32((u32)(r_ecx+0x2cu));
    /* 004db9dd: call 0x5ef310 */ r_esp -= 4; W32(r_esp, 0x4db9e2u); f_005ef310();
    /* 004db9e2: push 0x191 */ { u32 v = 0x191u; r_esp -= 4; W32(r_esp, v); }
    /* 004db9e7: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 004db9ea: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 004db9ed: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 004db9f0: mov ecx, dword ptr [ecx + 0x2c] */ r_ecx = R32((u32)(r_ecx+0x2cu));
    /* 004db9f3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004db9f5: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 004db9f8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4db9fau); call_ind(t); }
    /* 004db9fa: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 004db9fd: mov edx, dword ptr [ecx + 0x2c] */ r_edx = R32((u32)(r_ecx+0x2cu));
    /* 004dba00: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 004dba03: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 004dba06: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004dba08: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 004dba0b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4dba0du); call_ind(t); }
    /* 004dba0d: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 004dba10: mov edx, dword ptr [ecx + 0x2c] */ r_edx = R32((u32)(r_ecx+0x2cu));
    /* 004dba13: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 004dba16: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 004dba19: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004dba1b: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 004dba1e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4dba20u); call_ind(t); }
L_004dba20:; BB(0x004dba20);
    /* 004dba20: movzx ecx, byte ptr [ebp - 0x11] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffefu));
    /* 004dba24: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dba26: je 0x4dbaac */ if (fZ) goto L_004dbaac;
L_004dba2c:; BB(0x004dba2c);
    /* 004dba2c: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 004dba2f: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004dba32: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dba33: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4dba38u); f_005dcb00();
    /* 004dba38: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dba3b: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 004dba3e: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 004dba41: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 004dba44: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 004dba47: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 004dba4a: call 0x646f80 */ r_esp -= 4; W32(r_esp, 0x4dba4fu); f_00646f80();
    /* 004dba4f: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 004dba52: mov eax, dword ptr [ebp - 0x80] */ r_eax = R32((u32)(r_ebp+0xffffff80u));
    /* 004dba55: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004dba57: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 004dba5a: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 004dba5d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4dba5fu); call_ind(t); }
    /* 004dba5f: add eax, 0x64 */ {  u32 a = r_eax; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004dba62: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 004dba65: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 004dba68: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 004dba6b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004dba6c: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4dba71u); f_005dcb00();
    /* 004dba71: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dba74: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 004dba77: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 004dba7a: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 004dba7d: mov dword ptr [ebp - 0x58], ecx */ W32((u32)(r_ebp+0xffffffa8u), r_ecx);
    /* 004dba80: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 004dba83: call 0x646f80 */ r_esp -= 4; W32(r_esp, 0x4dba88u); f_00646f80();
    /* 004dba88: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 004dba8e: mov edx, dword ptr [ebp - 0x84] */ r_edx = R32((u32)(r_ebp+0xffffff7cu));
    /* 004dba94: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004dba96: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 004dba9c: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 004dba9f: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4dbaa1u); call_ind(t); }
    /* 004dbaa1: sub eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004dbaa4: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 004dbaa7: jmp 0x4dbb2d */ goto L_004dbb2d;
L_004dbaac:; BB(0x004dbaac);
    /* 004dbaac: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 004dbaaf: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 004dbab2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004dbab3: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4dbab8u); f_005dcb00();
    /* 004dbab8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dbabb: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 004dbabe: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 004dbac1: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 004dbac4: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 004dbac7: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 004dbaca: call 0x646f80 */ r_esp -= 4; W32(r_esp, 0x4dbacfu); f_00646f80();
    /* 004dbacf: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 004dbad5: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 004dbadb: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004dbadd: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 004dbae3: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 004dbae6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4dbae8u); call_ind(t); }
    /* 004dbae8: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 004dbaeb: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 004dbaee: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 004dbaf1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004dbaf2: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4dbaf7u); f_005dcb00();
    /* 004dbaf7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dbafa: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 004dbafd: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 004dbb00: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 004dbb03: mov dword ptr [ebp - 0x68], ecx */ W32((u32)(r_ebp+0xffffff98u), r_ecx);
    /* 004dbb06: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 004dbb09: call 0x646f80 */ r_esp -= 4; W32(r_esp, 0x4dbb0eu); f_00646f80();
    /* 004dbb0e: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 004dbb14: mov edx, dword ptr [ebp - 0x8c] */ r_edx = R32((u32)(r_ebp+0xffffff74u));
    /* 004dbb1a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004dbb1c: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 004dbb22: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 004dbb25: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4dbb27u); call_ind(t); }
    /* 004dbb27: sub eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004dbb2a: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_004dbb2d:; BB(0x004dbb2d);
    /* 004dbb2d: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 004dbb30: cmp dword ptr [eax + 0x30], 0 */ {  u32 a = R32((u32)(r_eax+0x30u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dbb34: jne 0x4dbbf3 */ if (!fZ) goto L_004dbbf3;
L_004dbb3a:; BB(0x004dbb3a);
    /* 004dbb3a: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 004dbb3f: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x4dbb44u); f_00686d82();
    /* 004dbb44: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dbb47: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 004dbb4a: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 004dbb51: cmp dword ptr [ebp - 0x38], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dbb55: je 0x4dbb67 */ if (fZ) goto L_004dbb67;
L_004dbb57:; BB(0x004dbb57);
    /* 004dbb57: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004dbb5a: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x4dbb5fu); f_005eaaf0();
    /* 004dbb5f: mov dword ptr [ebp - 0x90], eax */ W32((u32)(r_ebp+0xffffff70u), r_eax);
    /* 004dbb65: jmp 0x4dbb71 */ goto L_004dbb71;
L_004dbb67:; BB(0x004dbb67);
    /* 004dbb67: mov dword ptr [ebp - 0x90], 0 */ W32((u32)(r_ebp+0xffffff70u), 0x0u);
L_004dbb71:; BB(0x004dbb71);
    /* 004dbb71: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 004dbb77: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 004dbb7a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004dbb81: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 004dbb84: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 004dbb87: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 004dbb8a: push 0x186aa */ { u32 v = 0x186aau; r_esp -= 4; W32(r_esp, v); }
    /* 004dbb8f: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 004dbb92: mov ecx, dword ptr [ecx + 0x30] */ r_ecx = R32((u32)(r_ecx+0x30u));
    /* 004dbb95: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x4dbb9au); f_005eaf00();
    /* 004dbb9a: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004dbb9d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004dbb9e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004dbba1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dbba2: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 004dbba5: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 004dbba8: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 004dbbab: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 004dbbae: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004dbbb0: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 004dbbb3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4dbbb5u); call_ind(t); }
    /* 004dbbb5: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 004dbbb8: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 004dbbbb: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 004dbbbe: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 004dbbc1: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004dbbc3: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 004dbbc6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4dbbc8u); call_ind(t); }
    /* 004dbbc8: push 0x1f4 */ { u32 v = 0x1f4u; r_esp -= 4; W32(r_esp, v); }
    /* 004dbbcd: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 004dbbd0: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 004dbbd3: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 004dbbd6: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 004dbbd9: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004dbbdb: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 004dbbde: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4dbbe0u); call_ind(t); }
    /* 004dbbe0: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 004dbbe3: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 004dbbe6: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 004dbbe9: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 004dbbec: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004dbbee: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 004dbbf1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4dbbf3u); call_ind(t); }
L_004dbbf3:; BB(0x004dbbf3);
    /* 004dbbf3: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 004dbbf6: cmp dword ptr [ecx + 0x34], 0 */ {  u32 a = R32((u32)(r_ecx+0x34u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dbbfa: jne 0x4dbcca */ if (!fZ) goto L_004dbcca;
L_004dbc00:; BB(0x004dbc00);
    /* 004dbc00: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 004dbc05: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x4dbc0au); f_00686d82();
    /* 004dbc0a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dbc0d: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 004dbc10: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 004dbc17: cmp dword ptr [ebp - 0x40], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dbc1b: je 0x4dbc2d */ if (fZ) goto L_004dbc2d;
L_004dbc1d:; BB(0x004dbc1d);
    /* 004dbc1d: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 004dbc20: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x4dbc25u); f_005eaaf0();
    /* 004dbc25: mov dword ptr [ebp - 0x94], eax */ W32((u32)(r_ebp+0xffffff6cu), r_eax);
    /* 004dbc2b: jmp 0x4dbc37 */ goto L_004dbc37;
L_004dbc2d:; BB(0x004dbc2d);
    /* 004dbc2d: mov dword ptr [ebp - 0x94], 0 */ W32((u32)(r_ebp+0xffffff6cu), 0x0u);
L_004dbc37:; BB(0x004dbc37);
    /* 004dbc37: mov edx, dword ptr [ebp - 0x94] */ r_edx = R32((u32)(r_ebp+0xffffff6cu));
    /* 004dbc3d: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 004dbc40: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004dbc47: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 004dbc4a: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 004dbc4d: mov dword ptr [eax + 0x34], ecx */ W32((u32)(r_eax+0x34u), r_ecx);
    /* 004dbc50: push 0x186a9 */ { u32 v = 0x186a9u; r_esp -= 4; W32(r_esp, v); }
    /* 004dbc55: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 004dbc58: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 004dbc5b: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x4dbc60u); f_005eaf00();
    /* 004dbc60: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004dbc63: add eax, 0x21 */ {  u32 a = r_eax; u32 b = 0x21u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004dbc66: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dbc67: movzx ecx, byte ptr [ebp - 0x11] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffefu));
    /* 004dbc6b: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 004dbc6d: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 004dbc6f: and ecx, 0xfffffffa */ {  u32 a = r_ecx; u32 b = 0xfffffffau; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 004dbc72: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004dbc75: add ecx, dword ptr [ebp - 0x18] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004dbc78: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004dbc79: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 004dbc7c: mov eax, dword ptr [edx + 0x34] */ r_eax = R32((u32)(r_edx+0x34u));
    /* 004dbc7f: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 004dbc82: mov ecx, dword ptr [ecx + 0x34] */ r_ecx = R32((u32)(r_ecx+0x34u));
    /* 004dbc85: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004dbc87: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 004dbc8a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4dbc8cu); call_ind(t); }
    /* 004dbc8c: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 004dbc8f: mov edx, dword ptr [ecx + 0x34] */ r_edx = R32((u32)(r_ecx+0x34u));
    /* 004dbc92: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 004dbc95: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 004dbc98: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004dbc9a: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 004dbc9d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4dbc9fu); call_ind(t); }
    /* 004dbc9f: push 0x1f4 */ { u32 v = 0x1f4u; r_esp -= 4; W32(r_esp, v); }
    /* 004dbca4: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 004dbca7: mov edx, dword ptr [ecx + 0x34] */ r_edx = R32((u32)(r_ecx+0x34u));
    /* 004dbcaa: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 004dbcad: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 004dbcb0: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004dbcb2: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 004dbcb5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4dbcb7u); call_ind(t); }
    /* 004dbcb7: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 004dbcba: mov edx, dword ptr [ecx + 0x34] */ r_edx = R32((u32)(r_ecx+0x34u));
    /* 004dbcbd: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 004dbcc0: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 004dbcc3: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004dbcc5: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 004dbcc8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4dbccau); call_ind(t); }
L_004dbcca:; BB(0x004dbcca);
    /* 004dbcca: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 004dbccd: cmp dword ptr [ecx + 0x38], 0 */ {  u32 a = R32((u32)(r_ecx+0x38u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dbcd1: jne 0x4dbda1 */ if (!fZ) goto L_004dbda1;
L_004dbcd7:; BB(0x004dbcd7);
    /* 004dbcd7: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 004dbcdc: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x4dbce1u); f_00686d82();
    /* 004dbce1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dbce4: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 004dbce7: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 004dbcee: cmp dword ptr [ebp - 0x48], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dbcf2: je 0x4dbd04 */ if (fZ) goto L_004dbd04;
L_004dbcf4:; BB(0x004dbcf4);
    /* 004dbcf4: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004dbcf7: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x4dbcfcu); f_005eaaf0();
    /* 004dbcfc: mov dword ptr [ebp - 0x98], eax */ W32((u32)(r_ebp+0xffffff68u), r_eax);
    /* 004dbd02: jmp 0x4dbd0e */ goto L_004dbd0e;
L_004dbd04:; BB(0x004dbd04);
    /* 004dbd04: mov dword ptr [ebp - 0x98], 0 */ W32((u32)(r_ebp+0xffffff68u), 0x0u);
L_004dbd0e:; BB(0x004dbd0e);
    /* 004dbd0e: mov edx, dword ptr [ebp - 0x98] */ r_edx = R32((u32)(r_ebp+0xffffff68u));
    /* 004dbd14: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 004dbd17: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004dbd1e: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 004dbd21: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 004dbd24: mov dword ptr [eax + 0x38], ecx */ W32((u32)(r_eax+0x38u), r_ecx);
    /* 004dbd27: push 0x186a8 */ { u32 v = 0x186a8u; r_esp -= 4; W32(r_esp, v); }
    /* 004dbd2c: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 004dbd2f: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 004dbd32: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x4dbd37u); f_005eaf00();
    /* 004dbd37: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004dbd3a: add eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004dbd3d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dbd3e: movzx ecx, byte ptr [ebp - 0x11] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffefu));
    /* 004dbd42: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 004dbd44: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 004dbd46: and ecx, 0xfffffffa */ {  u32 a = r_ecx; u32 b = 0xfffffffau; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 004dbd49: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004dbd4c: add ecx, dword ptr [ebp - 0x18] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004dbd4f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004dbd50: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 004dbd53: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 004dbd56: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 004dbd59: mov ecx, dword ptr [ecx + 0x38] */ r_ecx = R32((u32)(r_ecx+0x38u));
    /* 004dbd5c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004dbd5e: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 004dbd61: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4dbd63u); call_ind(t); }
    /* 004dbd63: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 004dbd66: mov edx, dword ptr [ecx + 0x38] */ r_edx = R32((u32)(r_ecx+0x38u));
    /* 004dbd69: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 004dbd6c: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 004dbd6f: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004dbd71: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 004dbd74: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4dbd76u); call_ind(t); }
    /* 004dbd76: push 0x1f4 */ { u32 v = 0x1f4u; r_esp -= 4; W32(r_esp, v); }
    /* 004dbd7b: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 004dbd7e: mov edx, dword ptr [ecx + 0x38] */ r_edx = R32((u32)(r_ecx+0x38u));
    /* 004dbd81: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 004dbd84: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 004dbd87: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004dbd89: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 004dbd8c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4dbd8eu); call_ind(t); }
    /* 004dbd8e: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 004dbd91: mov edx, dword ptr [ecx + 0x38] */ r_edx = R32((u32)(r_ecx+0x38u));
    /* 004dbd94: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 004dbd97: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 004dbd9a: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004dbd9c: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 004dbd9f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4dbda1u); call_ind(t); }
L_004dbda1:; BB(0x004dbda1);
    /* 004dbda1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004dbda4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004dbdab: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004dbdac: mov esp, ebp */ r_esp = r_ebp;
    /* 004dbdae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004dbdaf: ret  */ FN_RET(0x004db630); r_esp += 4; return;
}

void f_004dbdd0(void) /* sub_4DBDD0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004dbdd0);
    /* 004dbdd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004dbdd1: mov ebp, esp */ r_ebp = r_esp;
    /* 004dbdd3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004dbdd5: push 0x6a25ee */ { u32 v = 0x6a25eeu; r_esp -= 4; W32(r_esp, v); }
    /* 004dbdda: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004dbde0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dbde1: sub esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004dbde4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 004dbde9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004dbdeb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dbdec: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 004dbdef: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 004dbdf5: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 004dbdf8: mov byte ptr [ebp - 0x11], 1 */ W8((u32)(r_ebp+0xffffffefu), 0x1u);
    /* 004dbdfc: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004dbdff: call 0x4c70d0 */ r_esp -= 4; W32(r_esp, 0x4dbe04u); f_004c70d0();
    /* 004dbe04: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 004dbe07: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 004dbe0a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004dbe0d: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 004dbe10: cmp dword ptr [ebp - 0x4c], 8 */ {  u32 a = R32((u32)(r_ebp+0xffffffb4u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004dbe14: ja 0x4dbe31 */ if ((!fC&&!fZ)) goto L_004dbe31;
L_004dbe16:; BB(0x004dbe16);
    /* 004dbe16: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 004dbe19: movzx edx, byte ptr [ecx + 0x4dc478] */ r_edx = (u32)R8((u32)(r_ecx+0x4dc478u));
    /* 004dbe20: jmp dword ptr [edx*4 + 0x4dc470] */ { u32 t = R32((u32)(r_edx*4+0x4dc470u)); switch (t) { case 0x4dbe27u: goto L_004dbe27; case 0x4dbe2du: goto L_004dbe2d; default: UNSUP(0x004dbe20, "jump table entry is not a known target"); } }
L_004dbe27:; BB(0x004dbe27);
    /* 004dbe27: mov byte ptr [ebp - 0x11], 1 */ W8((u32)(r_ebp+0xffffffefu), 0x1u);
    /* 004dbe2b: jmp 0x4dbe31 */ goto L_004dbe31;
L_004dbe2d:; BB(0x004dbe2d);
    /* 004dbe2d: mov byte ptr [ebp - 0x11], 0 */ W8((u32)(r_ebp+0xffffffefu), 0x0u);
L_004dbe31:; BB(0x004dbe31);
    /* 004dbe31: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 004dbe34: cmp dword ptr [eax + 0x44], 0 */ {  u32 a = R32((u32)(r_eax+0x44u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dbe38: jne 0x4dbf3d */ if (!fZ) goto L_004dbf3d;
L_004dbe3e:; BB(0x004dbe3e);
    /* 004dbe3e: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 004dbe43: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x4dbe48u); f_00686d82();
    /* 004dbe48: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dbe4b: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004dbe4e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004dbe55: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dbe59: je 0x4dbe68 */ if (fZ) goto L_004dbe68;
L_004dbe5b:; BB(0x004dbe5b);
    /* 004dbe5b: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004dbe5e: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x4dbe63u); f_005eaaf0();
    /* 004dbe63: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 004dbe66: jmp 0x4dbe6f */ goto L_004dbe6f;
L_004dbe68:; BB(0x004dbe68);
    /* 004dbe68: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
L_004dbe6f:; BB(0x004dbe6f);
    /* 004dbe6f: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 004dbe72: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 004dbe75: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004dbe7c: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004dbe7f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004dbe82: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 004dbe85: movzx ecx, byte ptr [ebp - 0x11] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffefu));
    /* 004dbe89: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dbe8b: je 0x4dbec6 */ if (fZ) goto L_004dbec6;
L_004dbe8d:; BB(0x004dbe8d);
    /* 004dbe8d: push 0x186a5 */ { u32 v = 0x186a5u; r_esp -= 4; W32(r_esp, v); }
    /* 004dbe92: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004dbe95: mov ecx, dword ptr [edx + 0x44] */ r_ecx = R32((u32)(r_edx+0x44u));
    /* 004dbe98: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x4dbe9du); f_005eaf00();
    /* 004dbe9d: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 004dbea0: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 004dbea3: add ecx, 0x5a */ {  u32 a = r_ecx; u32 b = 0x5au; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004dbea6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004dbea7: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004dbeaa: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 004dbead: add eax, 0x64 */ {  u32 a = r_eax; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004dbeb0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dbeb1: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004dbeb4: mov edx, dword ptr [ecx + 0x44] */ r_edx = R32((u32)(r_ecx+0x44u));
    /* 004dbeb7: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 004dbeba: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 004dbebd: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004dbebf: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 004dbec2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4dbec4u); call_ind(t); }
    /* 004dbec4: jmp 0x4dbeff */ goto L_004dbeff;
L_004dbec6:; BB(0x004dbec6);
    /* 004dbec6: push 0x186a6 */ { u32 v = 0x186a6u; r_esp -= 4; W32(r_esp, v); }
    /* 004dbecb: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004dbece: mov ecx, dword ptr [ecx + 0x44] */ r_ecx = R32((u32)(r_ecx+0x44u));
    /* 004dbed1: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x4dbed6u); f_005eaf00();
    /* 004dbed6: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004dbed9: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 004dbedc: add eax, 0x5a */ {  u32 a = r_eax; u32 b = 0x5au; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004dbedf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dbee0: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004dbee3: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 004dbee6: sub edx, 0x61 */ {  u32 a = r_edx; u32 b = 0x61u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004dbee9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004dbeea: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 004dbeed: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 004dbef0: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004dbef3: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 004dbef6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004dbef8: mov ecx, eax */ r_ecx = r_eax;
    /* 004dbefa: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 004dbefd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4dbeffu); call_ind(t); }
L_004dbeff:; BB(0x004dbeff);
    /* 004dbeff: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004dbf02: mov edx, dword ptr [ecx + 0x44] */ r_edx = R32((u32)(r_ecx+0x44u));
    /* 004dbf05: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 004dbf08: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 004dbf0b: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004dbf0d: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 004dbf10: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4dbf12u); call_ind(t); }
    /* 004dbf12: push 0xb4 */ { u32 v = 0xb4u; r_esp -= 4; W32(r_esp, v); }
    /* 004dbf17: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004dbf1a: mov edx, dword ptr [ecx + 0x44] */ r_edx = R32((u32)(r_ecx+0x44u));
    /* 004dbf1d: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 004dbf20: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 004dbf23: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004dbf25: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 004dbf28: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4dbf2au); call_ind(t); }
    /* 004dbf2a: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004dbf2d: mov edx, dword ptr [ecx + 0x44] */ r_edx = R32((u32)(r_ecx+0x44u));
    /* 004dbf30: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 004dbf33: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 004dbf36: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004dbf38: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 004dbf3b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4dbf3du); call_ind(t); }
L_004dbf3d:; BB(0x004dbf3d);
    /* 004dbf3d: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004dbf40: cmp dword ptr [ecx + 0x3c], 0 */ {  u32 a = R32((u32)(r_ecx+0x3cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dbf44: jne 0x4dc074 */ if (!fZ) goto L_004dc074;
L_004dbf4a:; BB(0x004dbf4a);
    /* 004dbf4a: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 004dbf4f: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x4dbf54u); f_00686d82();
    /* 004dbf54: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dbf57: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004dbf5a: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 004dbf61: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dbf65: je 0x4dbf74 */ if (fZ) goto L_004dbf74;
L_004dbf67:; BB(0x004dbf67);
    /* 004dbf67: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004dbf6a: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x4dbf6fu); f_005ec5a0();
    /* 004dbf6f: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 004dbf72: jmp 0x4dbf7b */ goto L_004dbf7b;
L_004dbf74:; BB(0x004dbf74);
    /* 004dbf74: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
L_004dbf7b:; BB(0x004dbf7b);
    /* 004dbf7b: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 004dbf7e: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 004dbf81: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004dbf88: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 004dbf8b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004dbf8e: mov dword ptr [eax + 0x3c], ecx */ W32((u32)(r_eax+0x3cu), r_ecx);
    /* 004dbf91: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004dbf92: mov edx, esp */ r_edx = r_esp;
    /* 004dbf94: mov ax, word ptr [0x75ee1c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x75ee1cu))) & 0xffffu);
    /* 004dbf9a: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 004dbf9d: mov cl, byte ptr [0x75ee1e] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(0x75ee1eu))) & 0xffu);
    /* 004dbfa3: mov byte ptr [edx + 2], cl */ W8((u32)(r_edx+0x2u), (u8)r_ecx);
    /* 004dbfa6: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004dbfa8: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 004dbfaa: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004dbfad: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 004dbfb0: call 0x5ecd00 */ r_esp -= 4; W32(r_esp, 0x4dbfb5u); f_005ecd00();
    /* 004dbfb5: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 004dbfb8: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 004dbfbb: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004dbfbe: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 004dbfc1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004dbfc3: mov ecx, eax */ r_ecx = r_eax;
    /* 004dbfc5: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 004dbfc8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4dbfcau); call_ind(t); }
    /* 004dbfca: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004dbfcd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dbfce: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004dbfd1: mov edx, dword ptr [ecx + 0x44] */ r_edx = R32((u32)(r_ecx+0x44u));
    /* 004dbfd4: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 004dbfd7: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 004dbfda: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004dbfdc: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 004dbfdf: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4dbfe1u); call_ind(t); }
    /* 004dbfe1: movzx ecx, byte ptr [ebp - 0x11] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffefu));
    /* 004dbfe5: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 004dbfe7: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 004dbfe9: and ecx, 0xfffffffe */ {  u32 a = r_ecx; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 004dbfec: add ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004dbfef: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004dbff1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dbff2: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004dbff5: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 004dbff8: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004dbffb: mov ecx, dword ptr [ecx + 0x3c] */ r_ecx = R32((u32)(r_ecx+0x3cu));
    /* 004dbffe: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004dc000: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 004dc003: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4dc005u); call_ind(t); }
    /* 004dc005: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc007: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004dc00a: mov ecx, dword ptr [ecx + 0x3c] */ r_ecx = R32((u32)(r_ecx+0x3cu));
    /* 004dc00d: call 0x5eccb0 */ r_esp -= 4; W32(r_esp, 0x4dc012u); f_005eccb0();
    /* 004dc012: push 0x53 */ { u32 v = 0x53u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc014: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004dc017: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 004dc01a: call 0x5ecc60 */ r_esp -= 4; W32(r_esp, 0x4dc01fu); f_005ecc60();
    /* 004dc01f: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc021: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 004dc024: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 004dc027: call 0x5ef310 */ r_esp -= 4; W32(r_esp, 0x4dc02cu); f_005ef310();
    /* 004dc02c: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004dc02f: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 004dc032: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 004dc035: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 004dc038: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004dc03a: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 004dc03d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4dc03fu); call_ind(t); }
    /* 004dc03f: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004dc042: mov ecx, dword ptr [ecx + 0x44] */ r_ecx = R32((u32)(r_ecx+0x44u));
    /* 004dc045: call 0x5f53c0 */ r_esp -= 4; W32(r_esp, 0x4dc04au); f_005f53c0();
    /* 004dc04a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004dc04d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dc04e: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004dc051: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 004dc054: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004dc057: mov ecx, dword ptr [ecx + 0x3c] */ r_ecx = R32((u32)(r_ecx+0x3cu));
    /* 004dc05a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004dc05c: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 004dc05f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4dc061u); call_ind(t); }
    /* 004dc061: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004dc064: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 004dc067: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 004dc06a: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 004dc06d: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004dc06f: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 004dc072: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4dc074u); call_ind(t); }
L_004dc074:; BB(0x004dc074);
    /* 004dc074: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004dc077: cmp dword ptr [ecx + 0x40], 0 */ {  u32 a = R32((u32)(r_ecx+0x40u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dc07b: jne 0x4dc1ab */ if (!fZ) goto L_004dc1ab;
L_004dc081:; BB(0x004dc081);
    /* 004dc081: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc086: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x4dc08bu); f_00686d82();
    /* 004dc08b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dc08e: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 004dc091: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 004dc098: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dc09c: je 0x4dc0ab */ if (fZ) goto L_004dc0ab;
L_004dc09e:; BB(0x004dc09e);
    /* 004dc09e: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004dc0a1: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x4dc0a6u); f_005ec5a0();
    /* 004dc0a6: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 004dc0a9: jmp 0x4dc0b2 */ goto L_004dc0b2;
L_004dc0ab:; BB(0x004dc0ab);
    /* 004dc0ab: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
L_004dc0b2:; BB(0x004dc0b2);
    /* 004dc0b2: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 004dc0b5: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 004dc0b8: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004dc0bf: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 004dc0c2: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004dc0c5: mov dword ptr [eax + 0x40], ecx */ W32((u32)(r_eax+0x40u), r_ecx);
    /* 004dc0c8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004dc0c9: mov edx, esp */ r_edx = r_esp;
    /* 004dc0cb: mov ax, word ptr [0x75ee1c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x75ee1cu))) & 0xffffu);
    /* 004dc0d1: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 004dc0d4: mov cl, byte ptr [0x75ee1e] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(0x75ee1eu))) & 0xffu);
    /* 004dc0da: mov byte ptr [edx + 2], cl */ W8((u32)(r_edx+0x2u), (u8)r_ecx);
    /* 004dc0dd: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004dc0df: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc0e1: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004dc0e4: mov ecx, dword ptr [edx + 0x40] */ r_ecx = R32((u32)(r_edx+0x40u));
    /* 004dc0e7: call 0x5ecd00 */ r_esp -= 4; W32(r_esp, 0x4dc0ecu); f_005ecd00();
    /* 004dc0ec: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 004dc0ef: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 004dc0f2: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004dc0f5: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 004dc0f8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004dc0fa: mov ecx, eax */ r_ecx = r_eax;
    /* 004dc0fc: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 004dc0ff: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4dc101u); call_ind(t); }
    /* 004dc101: add eax, 0x12 */ {  u32 a = r_eax; u32 b = 0x12u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004dc104: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dc105: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004dc108: mov edx, dword ptr [ecx + 0x44] */ r_edx = R32((u32)(r_ecx+0x44u));
    /* 004dc10b: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 004dc10e: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 004dc111: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004dc113: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 004dc116: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4dc118u); call_ind(t); }
    /* 004dc118: movzx ecx, byte ptr [ebp - 0x11] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffefu));
    /* 004dc11c: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 004dc11e: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 004dc120: and ecx, 0xfffffffe */ {  u32 a = r_ecx; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 004dc123: add ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004dc126: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004dc128: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dc129: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004dc12c: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 004dc12f: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004dc132: mov ecx, dword ptr [ecx + 0x40] */ r_ecx = R32((u32)(r_ecx+0x40u));
    /* 004dc135: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004dc137: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 004dc13a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4dc13cu); call_ind(t); }
    /* 004dc13c: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc13e: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004dc141: mov ecx, dword ptr [ecx + 0x40] */ r_ecx = R32((u32)(r_ecx+0x40u));
    /* 004dc144: call 0x5eccb0 */ r_esp -= 4; W32(r_esp, 0x4dc149u); f_005eccb0();
    /* 004dc149: push 0x53 */ { u32 v = 0x53u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc14b: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004dc14e: mov ecx, dword ptr [edx + 0x40] */ r_ecx = R32((u32)(r_edx+0x40u));
    /* 004dc151: call 0x5ecc60 */ r_esp -= 4; W32(r_esp, 0x4dc156u); f_005ecc60();
    /* 004dc156: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc158: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 004dc15b: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 004dc15e: call 0x5ef310 */ r_esp -= 4; W32(r_esp, 0x4dc163u); f_005ef310();
    /* 004dc163: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004dc166: mov edx, dword ptr [ecx + 0x40] */ r_edx = R32((u32)(r_ecx+0x40u));
    /* 004dc169: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 004dc16c: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 004dc16f: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004dc171: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 004dc174: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4dc176u); call_ind(t); }
    /* 004dc176: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004dc179: mov ecx, dword ptr [ecx + 0x44] */ r_ecx = R32((u32)(r_ecx+0x44u));
    /* 004dc17c: call 0x5f53c0 */ r_esp -= 4; W32(r_esp, 0x4dc181u); f_005f53c0();
    /* 004dc181: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004dc184: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dc185: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004dc188: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 004dc18b: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004dc18e: mov ecx, dword ptr [ecx + 0x40] */ r_ecx = R32((u32)(r_ecx+0x40u));
    /* 004dc191: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004dc193: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 004dc196: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4dc198u); call_ind(t); }
    /* 004dc198: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004dc19b: mov edx, dword ptr [ecx + 0x40] */ r_edx = R32((u32)(r_ecx+0x40u));
    /* 004dc19e: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 004dc1a1: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 004dc1a4: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004dc1a6: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 004dc1a9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4dc1abu); call_ind(t); }
L_004dc1ab:; BB(0x004dc1ab);
    /* 004dc1ab: mov word ptr [ebp - 0x10], 0 */ W16((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 004dc1b1: jmp 0x4dc1bf */ goto L_004dc1bf;
L_004dc1b3:; BB(0x004dc1b3);
    /* 004dc1b3: mov cx, word ptr [ebp - 0x10] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff0u))) & 0xffffu);
    /* 004dc1b7: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004dc1bb: mov word ptr [ebp - 0x10], cx */ W16((u32)(r_ebp+0xfffffff0u), (u16)r_ecx);
L_004dc1bf:; BB(0x004dc1bf);
    /* 004dc1bf: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004dc1c3: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004dc1c6: jge 0x4dc36d */ if ((fS==fO)) goto L_004dc36d;
L_004dc1cc:; BB(0x004dc1cc);
    /* 004dc1cc: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004dc1d0: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004dc1d3: cmp dword ptr [ecx + eax*4 + 0x48], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x48u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dc1d8: jne 0x4dc29a */ if (!fZ) goto L_004dc29a;
L_004dc1de:; BB(0x004dc1de);
    /* 004dc1de: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc1e3: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x4dc1e8u); f_00686d82();
    /* 004dc1e8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dc1eb: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 004dc1ee: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 004dc1f5: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dc1f9: je 0x4dc208 */ if (fZ) goto L_004dc208;
L_004dc1fb:; BB(0x004dc1fb);
    /* 004dc1fb: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004dc1fe: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x4dc203u); f_005eaaf0();
    /* 004dc203: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 004dc206: jmp 0x4dc20f */ goto L_004dc20f;
L_004dc208:; BB(0x004dc208);
    /* 004dc208: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
L_004dc20f:; BB(0x004dc20f);
    /* 004dc20f: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 004dc212: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 004dc215: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004dc21c: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004dc220: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004dc223: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004dc226: mov dword ptr [ecx + eax*4 + 0x48], edx */ W32((u32)(r_ecx+r_eax*4+0x48u), r_edx);
    /* 004dc22a: push 0x18a8b */ { u32 v = 0x18a8bu; r_esp -= 4; W32(r_esp, v); }
    /* 004dc22f: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004dc233: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004dc236: mov ecx, dword ptr [ecx + eax*4 + 0x48] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x48u));
    /* 004dc23a: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x4dc23fu); f_005eaf00();
    /* 004dc23f: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004dc243: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 004dc246: mov ecx, dword ptr [eax + edx*4 + 0x48] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x48u));
    /* 004dc24a: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004dc24e: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 004dc251: mov edx, dword ptr [eax + edx*4 + 0x48] */ r_edx = R32((u32)(r_eax+r_edx*4+0x48u));
    /* 004dc255: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004dc257: mov ecx, edx */ r_ecx = r_edx;
    /* 004dc259: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 004dc25c: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4dc25eu); call_ind(t); }
    /* 004dc25e: push 0x65 */ { u32 v = 0x65u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc260: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004dc264: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004dc267: mov edx, dword ptr [ecx + eax*4 + 0x48] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x48u));
    /* 004dc26b: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004dc26f: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004dc272: mov ecx, dword ptr [ecx + eax*4 + 0x48] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x48u));
    /* 004dc276: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004dc278: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 004dc27b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4dc27du); call_ind(t); }
    /* 004dc27d: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004dc281: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004dc284: mov eax, dword ptr [edx + ecx*4 + 0x48] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x48u));
    /* 004dc288: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004dc28c: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004dc28f: mov ecx, dword ptr [edx + ecx*4 + 0x48] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x48u));
    /* 004dc293: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 004dc295: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 004dc298: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4dc29au); call_ind(t); }
L_004dc29a:; BB(0x004dc29a);
    /* 004dc29a: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004dc29e: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004dc2a1: cmp dword ptr [ecx + eax*4 + 0x50], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x50u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dc2a6: jne 0x4dc368 */ if (!fZ) goto L_004dc368;
L_004dc2ac:; BB(0x004dc2ac);
    /* 004dc2ac: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc2b1: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x4dc2b6u); f_00686d82();
    /* 004dc2b6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dc2b9: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 004dc2bc: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 004dc2c3: cmp dword ptr [ebp - 0x3c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dc2c7: je 0x4dc2d6 */ if (fZ) goto L_004dc2d6;
L_004dc2c9:; BB(0x004dc2c9);
    /* 004dc2c9: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 004dc2cc: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x4dc2d1u); f_005eaaf0();
    /* 004dc2d1: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 004dc2d4: jmp 0x4dc2dd */ goto L_004dc2dd;
L_004dc2d6:; BB(0x004dc2d6);
    /* 004dc2d6: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
L_004dc2dd:; BB(0x004dc2dd);
    /* 004dc2dd: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 004dc2e0: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 004dc2e3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004dc2ea: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004dc2ee: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004dc2f1: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004dc2f4: mov dword ptr [ecx + eax*4 + 0x50], edx */ W32((u32)(r_ecx+r_eax*4+0x50u), r_edx);
    /* 004dc2f8: push 0x18a8b */ { u32 v = 0x18a8bu; r_esp -= 4; W32(r_esp, v); }
    /* 004dc2fd: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004dc301: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004dc304: mov ecx, dword ptr [ecx + eax*4 + 0x50] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x50u));
    /* 004dc308: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x4dc30du); f_005eaf00();
    /* 004dc30d: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004dc311: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 004dc314: mov ecx, dword ptr [eax + edx*4 + 0x50] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x50u));
    /* 004dc318: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004dc31c: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 004dc31f: mov edx, dword ptr [eax + edx*4 + 0x50] */ r_edx = R32((u32)(r_eax+r_edx*4+0x50u));
    /* 004dc323: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004dc325: mov ecx, edx */ r_ecx = r_edx;
    /* 004dc327: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 004dc32a: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4dc32cu); call_ind(t); }
    /* 004dc32c: push 0x65 */ { u32 v = 0x65u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc32e: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004dc332: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004dc335: mov edx, dword ptr [ecx + eax*4 + 0x50] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x50u));
    /* 004dc339: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004dc33d: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004dc340: mov ecx, dword ptr [ecx + eax*4 + 0x50] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x50u));
    /* 004dc344: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004dc346: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 004dc349: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4dc34bu); call_ind(t); }
    /* 004dc34b: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004dc34f: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004dc352: mov eax, dword ptr [edx + ecx*4 + 0x50] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x50u));
    /* 004dc356: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004dc35a: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004dc35d: mov ecx, dword ptr [edx + ecx*4 + 0x50] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x50u));
    /* 004dc361: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 004dc363: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 004dc366: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4dc368u); call_ind(t); }
L_004dc368:; BB(0x004dc368);
    /* 004dc368: jmp 0x4dc1b3 */ goto L_004dc1b3;
L_004dc36d:; BB(0x004dc36d);
    /* 004dc36d: mov word ptr [ebp - 0x10], 0 */ W16((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 004dc373: jmp 0x4dc381 */ goto L_004dc381;
L_004dc375:; BB(0x004dc375);
    /* 004dc375: mov ax, word ptr [ebp - 0x10] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff0u))) & 0xffffu);
    /* 004dc379: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004dc37d: mov word ptr [ebp - 0x10], ax */ W16((u32)(r_ebp+0xfffffff0u), (u16)r_eax);
L_004dc381:; BB(0x004dc381);
    /* 004dc381: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004dc385: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004dc388: jge 0x4dc45f */ if ((fS==fO)) goto L_004dc45f;
L_004dc38e:; BB(0x004dc38e);
    /* 004dc38e: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004dc392: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 004dc395: cmp dword ptr [eax + edx*4 + 0x58], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x58u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dc39a: jne 0x4dc45a */ if (!fZ) goto L_004dc45a;
L_004dc3a0:; BB(0x004dc3a0);
    /* 004dc3a0: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc3a5: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x4dc3aau); f_00686d82();
    /* 004dc3aa: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dc3ad: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 004dc3b0: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 004dc3b7: cmp dword ptr [ebp - 0x44], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffbcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dc3bb: je 0x4dc3ca */ if (fZ) goto L_004dc3ca;
L_004dc3bd:; BB(0x004dc3bd);
    /* 004dc3bd: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 004dc3c0: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x4dc3c5u); f_005eaaf0();
    /* 004dc3c5: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 004dc3c8: jmp 0x4dc3d1 */ goto L_004dc3d1;
L_004dc3ca:; BB(0x004dc3ca);
    /* 004dc3ca: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
L_004dc3d1:; BB(0x004dc3d1);
    /* 004dc3d1: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004dc3d4: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 004dc3d7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004dc3de: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004dc3e2: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 004dc3e5: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 004dc3e8: mov dword ptr [eax + edx*4 + 0x58], ecx */ W32((u32)(r_eax+r_edx*4+0x58u), r_ecx);
    /* 004dc3ec: push 0x18a8a */ { u32 v = 0x18a8au; r_esp -= 4; W32(r_esp, v); }
    /* 004dc3f1: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004dc3f5: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 004dc3f8: mov ecx, dword ptr [eax + edx*4 + 0x58] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x58u));
    /* 004dc3fc: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x4dc401u); f_005eaf00();
    /* 004dc401: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004dc405: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004dc408: mov eax, dword ptr [edx + ecx*4 + 0x58] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x58u));
    /* 004dc40c: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004dc410: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004dc413: mov ecx, dword ptr [edx + ecx*4 + 0x58] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x58u));
    /* 004dc417: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 004dc419: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 004dc41c: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4dc41eu); call_ind(t); }
    /* 004dc41e: push 0x79 */ { u32 v = 0x79u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc420: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004dc424: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004dc427: mov edx, dword ptr [ecx + eax*4 + 0x58] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x58u));
    /* 004dc42b: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004dc42f: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004dc432: mov ecx, dword ptr [ecx + eax*4 + 0x58] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x58u));
    /* 004dc436: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004dc438: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 004dc43b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4dc43du); call_ind(t); }
    /* 004dc43d: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004dc441: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004dc444: mov eax, dword ptr [edx + ecx*4 + 0x58] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x58u));
    /* 004dc448: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004dc44c: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004dc44f: mov ecx, dword ptr [edx + ecx*4 + 0x58] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x58u));
    /* 004dc453: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 004dc455: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 004dc458: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4dc45au); call_ind(t); }
L_004dc45a:; BB(0x004dc45a);
    /* 004dc45a: jmp 0x4dc375 */ goto L_004dc375;
L_004dc45f:; BB(0x004dc45f);
    /* 004dc45f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004dc462: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004dc469: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004dc46a: mov esp, ebp */ r_esp = r_ebp;
    /* 004dc46c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004dc46d: ret  */ FN_RET(0x004dbdd0); r_esp += 4; return;
}

