#include "protos.h"

void f_0049df90(void) /* sub_49DF90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0049df90);
    /* 0049df90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0049df91: mov ebp, esp */ r_ebp = r_esp;
    /* 0049df93: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0049df95: push 0x6a100b */ { u32 v = 0x6a100bu; r_esp -= 4; W32(r_esp, v); }
    /* 0049df9a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0049dfa0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049dfa1: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0049dfa4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0049dfa9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0049dfab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049dfac: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0049dfaf: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0049dfb5: mov dword ptr [ebp - 0x50], ecx */ W32((u32)(r_ebp+0xffffffb0u), r_ecx);
    /* 0049dfb8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0049dfba: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0049dfbc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0049dfbe: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0049dfc0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0049dfc2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0049dfc4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0049dfc6: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 0049dfc9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049dfca: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0049dfcd: call 0x485940 */ r_esp -= 4; W32(r_esp, 0x49dfd2u); f_00485940();
    /* 0049dfd2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0049dfd9: mov ecx, dword ptr [0x791390] */ r_ecx = R32((u32)(0x791390u));
    /* 0049dfdf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0049dfe0: lea edx, [ebp - 0x15] */ r_edx = (u32)(r_ebp+0xffffffebu);
    /* 0049dfe3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0049dfe4: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0049dfe7: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x49dfecu); f_004a2160();
    /* 0049dfec: mov ecx, eax */ r_ecx = r_eax;
    /* 0049dfee: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x49dff3u); f_004a1e10();
    /* 0049dff3: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0049dff6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049dff8: je 0x49e1f7 */ if (fZ) goto L_0049e1f7;
L_0049dffe:; BB(0x0049dffe);
    /* 0049dffe: mov ecx, dword ptr [0x791414] */ r_ecx = R32((u32)(0x791414u));
    /* 0049e004: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0049e005: lea edx, [ebp - 0x16] */ r_edx = (u32)(r_ebp+0xffffffeau);
    /* 0049e008: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0049e009: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0049e00c: call 0x4a2200 */ r_esp -= 4; W32(r_esp, 0x49e011u); f_004a2200();
    /* 0049e011: mov ecx, eax */ r_ecx = r_eax;
    /* 0049e013: call 0x4a1fb0 */ r_esp -= 4; W32(r_esp, 0x49e018u); f_004a1fb0();
    /* 0049e018: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0049e01b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049e01d: je 0x49e042 */ if (fZ) goto L_0049e042;
L_0049e01f:; BB(0x0049e01f);
    /* 0049e01f: mov word ptr [ebp - 0x18], 0x2a */ W16((u32)(r_ebp+0xffffffe8u), 0x2au);
    /* 0049e025: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0049e02c: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0049e02f: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x49e034u); f_004a20f0();
    /* 0049e034: mov ax, word ptr [ebp - 0x18] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe8u))) & 0xffffu);
    /* 0049e038: jmp 0x49e417 */ goto L_0049e417;
L_0049e042:; BB(0x0049e042);
    /* 0049e042: mov ecx, dword ptr [0x7913a4] */ r_ecx = R32((u32)(0x7913a4u));
    /* 0049e048: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0049e049: lea edx, [ebp - 0x19] */ r_edx = (u32)(r_ebp+0xffffffe7u);
    /* 0049e04c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0049e04d: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0049e050: call 0x4a2200 */ r_esp -= 4; W32(r_esp, 0x49e055u); f_004a2200();
    /* 0049e055: mov ecx, eax */ r_ecx = r_eax;
    /* 0049e057: call 0x4a1fb0 */ r_esp -= 4; W32(r_esp, 0x49e05cu); f_004a1fb0();
    /* 0049e05c: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0049e05f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049e061: je 0x49e086 */ if (fZ) goto L_0049e086;
L_0049e063:; BB(0x0049e063);
    /* 0049e063: mov word ptr [ebp - 0x1c], 0x2b */ W16((u32)(r_ebp+0xffffffe4u), 0x2bu);
    /* 0049e069: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0049e070: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0049e073: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x49e078u); f_004a20f0();
    /* 0049e078: mov ax, word ptr [ebp - 0x1c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe4u))) & 0xffffu);
    /* 0049e07c: jmp 0x49e417 */ goto L_0049e417;
L_0049e086:; BB(0x0049e086);
    /* 0049e086: mov ecx, dword ptr [0x791404] */ r_ecx = R32((u32)(0x791404u));
    /* 0049e08c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0049e08d: lea edx, [ebp - 0x1d] */ r_edx = (u32)(r_ebp+0xffffffe3u);
    /* 0049e090: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0049e091: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0049e094: call 0x4a2200 */ r_esp -= 4; W32(r_esp, 0x49e099u); f_004a2200();
    /* 0049e099: mov ecx, eax */ r_ecx = r_eax;
    /* 0049e09b: call 0x4a1fb0 */ r_esp -= 4; W32(r_esp, 0x49e0a0u); f_004a1fb0();
    /* 0049e0a0: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0049e0a3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049e0a5: je 0x49e0ca */ if (fZ) goto L_0049e0ca;
L_0049e0a7:; BB(0x0049e0a7);
    /* 0049e0a7: mov word ptr [ebp - 0x20], 0x2c */ W16((u32)(r_ebp+0xffffffe0u), 0x2cu);
    /* 0049e0ad: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0049e0b4: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0049e0b7: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x49e0bcu); f_004a20f0();
    /* 0049e0bc: mov ax, word ptr [ebp - 0x20] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe0u))) & 0xffffu);
    /* 0049e0c0: jmp 0x49e417 */ goto L_0049e417;
L_0049e0ca:; BB(0x0049e0ca);
    /* 0049e0ca: mov ecx, dword ptr [0x7913f8] */ r_ecx = R32((u32)(0x7913f8u));
    /* 0049e0d0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0049e0d1: lea edx, [ebp - 0x21] */ r_edx = (u32)(r_ebp+0xffffffdfu);
    /* 0049e0d4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0049e0d5: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0049e0d8: call 0x4a2200 */ r_esp -= 4; W32(r_esp, 0x49e0ddu); f_004a2200();
    /* 0049e0dd: mov ecx, eax */ r_ecx = r_eax;
    /* 0049e0df: call 0x4a1fb0 */ r_esp -= 4; W32(r_esp, 0x49e0e4u); f_004a1fb0();
    /* 0049e0e4: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0049e0e7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049e0e9: je 0x49e10e */ if (fZ) goto L_0049e10e;
L_0049e0eb:; BB(0x0049e0eb);
    /* 0049e0eb: mov word ptr [ebp - 0x24], 0x2d */ W16((u32)(r_ebp+0xffffffdcu), 0x2du);
    /* 0049e0f1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0049e0f8: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0049e0fb: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x49e100u); f_004a20f0();
    /* 0049e100: mov ax, word ptr [ebp - 0x24] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffdcu))) & 0xffffu);
    /* 0049e104: jmp 0x49e417 */ goto L_0049e417;
L_0049e10e:; BB(0x0049e10e);
    /* 0049e10e: mov ecx, dword ptr [0x791410] */ r_ecx = R32((u32)(0x791410u));
    /* 0049e114: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0049e115: lea edx, [ebp - 0x25] */ r_edx = (u32)(r_ebp+0xffffffdbu);
    /* 0049e118: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0049e119: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0049e11c: call 0x4a2200 */ r_esp -= 4; W32(r_esp, 0x49e121u); f_004a2200();
    /* 0049e121: mov ecx, eax */ r_ecx = r_eax;
    /* 0049e123: call 0x4a1fb0 */ r_esp -= 4; W32(r_esp, 0x49e128u); f_004a1fb0();
    /* 0049e128: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0049e12b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049e12d: je 0x49e152 */ if (fZ) goto L_0049e152;
L_0049e12f:; BB(0x0049e12f);
    /* 0049e12f: mov word ptr [ebp - 0x28], 0x2e */ W16((u32)(r_ebp+0xffffffd8u), 0x2eu);
    /* 0049e135: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0049e13c: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0049e13f: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x49e144u); f_004a20f0();
    /* 0049e144: mov ax, word ptr [ebp - 0x28] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffd8u))) & 0xffffu);
    /* 0049e148: jmp 0x49e417 */ goto L_0049e417;
L_0049e152:; BB(0x0049e152);
    /* 0049e152: mov ecx, dword ptr [0x7913f4] */ r_ecx = R32((u32)(0x7913f4u));
    /* 0049e158: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0049e159: lea edx, [ebp - 0x29] */ r_edx = (u32)(r_ebp+0xffffffd7u);
    /* 0049e15c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0049e15d: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0049e160: call 0x4a2200 */ r_esp -= 4; W32(r_esp, 0x49e165u); f_004a2200();
    /* 0049e165: mov ecx, eax */ r_ecx = r_eax;
    /* 0049e167: call 0x4a1fb0 */ r_esp -= 4; W32(r_esp, 0x49e16cu); f_004a1fb0();
    /* 0049e16c: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0049e16f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049e171: je 0x49e193 */ if (fZ) goto L_0049e193;
L_0049e173:; BB(0x0049e173);
    /* 0049e173: mov word ptr [ebp - 0x2c], 0x2f */ W16((u32)(r_ebp+0xffffffd4u), 0x2fu);
    /* 0049e179: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0049e180: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0049e183: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x49e188u); f_004a20f0();
    /* 0049e188: mov ax, word ptr [ebp - 0x2c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffd4u))) & 0xffffu);
    /* 0049e18c: jmp 0x49e417 */ goto L_0049e417;
L_0049e193:; BB(0x0049e193);
    /* 0049e193: mov ecx, dword ptr [0x79138c] */ r_ecx = R32((u32)(0x79138cu));
    /* 0049e199: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0049e19a: lea edx, [ebp - 0x2d] */ r_edx = (u32)(r_ebp+0xffffffd3u);
    /* 0049e19d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0049e19e: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0049e1a1: call 0x4a2200 */ r_esp -= 4; W32(r_esp, 0x49e1a6u); f_004a2200();
    /* 0049e1a6: mov ecx, eax */ r_ecx = r_eax;
    /* 0049e1a8: call 0x4a1fb0 */ r_esp -= 4; W32(r_esp, 0x49e1adu); f_004a1fb0();
    /* 0049e1ad: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0049e1b0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049e1b2: je 0x49e1d4 */ if (fZ) goto L_0049e1d4;
L_0049e1b4:; BB(0x0049e1b4);
    /* 0049e1b4: mov word ptr [ebp - 0x30], 0x30 */ W16((u32)(r_ebp+0xffffffd0u), 0x30u);
    /* 0049e1ba: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0049e1c1: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0049e1c4: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x49e1c9u); f_004a20f0();
    /* 0049e1c9: mov ax, word ptr [ebp - 0x30] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffd0u))) & 0xffffu);
    /* 0049e1cd: jmp 0x49e417 */ goto L_0049e417;
L_0049e1d4:; BB(0x0049e1d4);
    /* 0049e1d4: mov word ptr [ebp - 0x32], 0x31 */ W16((u32)(r_ebp+0xffffffceu), 0x31u);
    /* 0049e1da: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0049e1e1: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0049e1e4: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x49e1e9u); f_004a20f0();
    /* 0049e1e9: mov ax, word ptr [ebp - 0x32] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffceu))) & 0xffffu);
    /* 0049e1ed: jmp 0x49e417 */ goto L_0049e417;
L_0049e1f7:; BB(0x0049e1f7);
    /* 0049e1f7: mov ecx, dword ptr [0x7913b0] */ r_ecx = R32((u32)(0x7913b0u));
    /* 0049e1fd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0049e1fe: lea edx, [ebp - 0x33] */ r_edx = (u32)(r_ebp+0xffffffcdu);
    /* 0049e201: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0049e202: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0049e205: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x49e20au); f_004a2160();
    /* 0049e20a: mov ecx, eax */ r_ecx = r_eax;
    /* 0049e20c: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x49e211u); f_004a1e10();
    /* 0049e211: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0049e214: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049e216: je 0x49e3fe */ if (fZ) goto L_0049e3fe;
L_0049e21c:; BB(0x0049e21c);
    /* 0049e21c: lea ecx, [ebp - 0x35] */ r_ecx = (u32)(r_ebp+0xffffffcbu);
    /* 0049e21f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0049e220: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0049e223: call 0x4a2200 */ r_esp -= 4; W32(r_esp, 0x49e228u); f_004a2200();
    /* 0049e228: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049e229: lea edx, [ebp - 0x34] */ r_edx = (u32)(r_ebp+0xffffffccu);
    /* 0049e22c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0049e22d: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0049e230: call 0x4a21b0 */ r_esp -= 4; W32(r_esp, 0x49e235u); f_004a21b0();
    /* 0049e235: mov ecx, eax */ r_ecx = r_eax;
    /* 0049e237: call 0x4a2010 */ r_esp -= 4; W32(r_esp, 0x49e23cu); f_004a2010();
    /* 0049e23c: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0049e23f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049e241: je 0x49e254 */ if (fZ) goto L_0049e254;
L_0049e243:; BB(0x0049e243);
    /* 0049e243: lea ecx, [ebp - 0x36] */ r_ecx = (u32)(r_ebp+0xffffffcau);
    /* 0049e246: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0049e247: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0049e24a: call 0x4a21b0 */ r_esp -= 4; W32(r_esp, 0x49e24fu); f_004a21b0();
    /* 0049e24f: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0049e252: jmp 0x49e263 */ goto L_0049e263;
L_0049e254:; BB(0x0049e254);
    /* 0049e254: lea edx, [ebp - 0x37] */ r_edx = (u32)(r_ebp+0xffffffc9u);
    /* 0049e257: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0049e258: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0049e25b: call 0x4a2200 */ r_esp -= 4; W32(r_esp, 0x49e260u); f_004a2200();
    /* 0049e260: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_0049e263:; BB(0x0049e263);
    /* 0049e263: mov eax, dword ptr [0x791414] */ r_eax = R32((u32)(0x791414u));
    /* 0049e268: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049e269: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0049e26c: call 0x4a1fb0 */ r_esp -= 4; W32(r_esp, 0x49e271u); f_004a1fb0();
    /* 0049e271: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0049e274: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049e276: je 0x49e29b */ if (fZ) goto L_0049e29b;
L_0049e278:; BB(0x0049e278);
    /* 0049e278: mov word ptr [ebp - 0x3a], 0x2a */ W16((u32)(r_ebp+0xffffffc6u), 0x2au);
    /* 0049e27e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0049e285: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0049e288: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x49e28du); f_004a20f0();
    /* 0049e28d: mov ax, word ptr [ebp - 0x3a] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffc6u))) & 0xffffu);
    /* 0049e291: jmp 0x49e417 */ goto L_0049e417;
L_0049e29b:; BB(0x0049e29b);
    /* 0049e29b: mov edx, dword ptr [0x7913a4] */ r_edx = R32((u32)(0x7913a4u));
    /* 0049e2a1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0049e2a2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0049e2a5: call 0x4a1fb0 */ r_esp -= 4; W32(r_esp, 0x49e2aau); f_004a1fb0();
    /* 0049e2aa: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0049e2ad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049e2af: je 0x49e2d4 */ if (fZ) goto L_0049e2d4;
L_0049e2b1:; BB(0x0049e2b1);
    /* 0049e2b1: mov word ptr [ebp - 0x3c], 0x2b */ W16((u32)(r_ebp+0xffffffc4u), 0x2bu);
    /* 0049e2b7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0049e2be: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0049e2c1: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x49e2c6u); f_004a20f0();
    /* 0049e2c6: mov ax, word ptr [ebp - 0x3c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffc4u))) & 0xffffu);
    /* 0049e2ca: jmp 0x49e417 */ goto L_0049e417;
L_0049e2d4:; BB(0x0049e2d4);
    /* 0049e2d4: mov ecx, dword ptr [0x791404] */ r_ecx = R32((u32)(0x791404u));
    /* 0049e2da: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0049e2db: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0049e2de: call 0x4a1fb0 */ r_esp -= 4; W32(r_esp, 0x49e2e3u); f_004a1fb0();
    /* 0049e2e3: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0049e2e6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049e2e8: je 0x49e30d */ if (fZ) goto L_0049e30d;
L_0049e2ea:; BB(0x0049e2ea);
    /* 0049e2ea: mov word ptr [ebp - 0x3e], 0x2c */ W16((u32)(r_ebp+0xffffffc2u), 0x2cu);
    /* 0049e2f0: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0049e2f7: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0049e2fa: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x49e2ffu); f_004a20f0();
    /* 0049e2ff: mov ax, word ptr [ebp - 0x3e] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffc2u))) & 0xffffu);
    /* 0049e303: jmp 0x49e417 */ goto L_0049e417;
L_0049e30d:; BB(0x0049e30d);
    /* 0049e30d: mov eax, dword ptr [0x7913f8] */ r_eax = R32((u32)(0x7913f8u));
    /* 0049e312: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049e313: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0049e316: call 0x4a1fb0 */ r_esp -= 4; W32(r_esp, 0x49e31bu); f_004a1fb0();
    /* 0049e31b: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0049e31e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049e320: je 0x49e345 */ if (fZ) goto L_0049e345;
L_0049e322:; BB(0x0049e322);
    /* 0049e322: mov word ptr [ebp - 0x40], 0x2d */ W16((u32)(r_ebp+0xffffffc0u), 0x2du);
    /* 0049e328: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0049e32f: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0049e332: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x49e337u); f_004a20f0();
    /* 0049e337: mov ax, word ptr [ebp - 0x40] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffc0u))) & 0xffffu);
    /* 0049e33b: jmp 0x49e417 */ goto L_0049e417;
L_0049e345:; BB(0x0049e345);
    /* 0049e345: mov edx, dword ptr [0x791410] */ r_edx = R32((u32)(0x791410u));
    /* 0049e34b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0049e34c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0049e34f: call 0x4a1fb0 */ r_esp -= 4; W32(r_esp, 0x49e354u); f_004a1fb0();
    /* 0049e354: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0049e357: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049e359: je 0x49e37e */ if (fZ) goto L_0049e37e;
L_0049e35b:; BB(0x0049e35b);
    /* 0049e35b: mov word ptr [ebp - 0x42], 0x2e */ W16((u32)(r_ebp+0xffffffbeu), 0x2eu);
    /* 0049e361: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0049e368: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0049e36b: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x49e370u); f_004a20f0();
    /* 0049e370: mov ax, word ptr [ebp - 0x42] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffbeu))) & 0xffffu);
    /* 0049e374: jmp 0x49e417 */ goto L_0049e417;
L_0049e37e:; BB(0x0049e37e);
    /* 0049e37e: mov ecx, dword ptr [0x7913f4] */ r_ecx = R32((u32)(0x7913f4u));
    /* 0049e384: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0049e385: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0049e388: call 0x4a1fb0 */ r_esp -= 4; W32(r_esp, 0x49e38du); f_004a1fb0();
    /* 0049e38d: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0049e390: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049e392: je 0x49e3b1 */ if (fZ) goto L_0049e3b1;
L_0049e394:; BB(0x0049e394);
    /* 0049e394: mov word ptr [ebp - 0x44], 0x2f */ W16((u32)(r_ebp+0xffffffbcu), 0x2fu);
    /* 0049e39a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0049e3a1: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0049e3a4: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x49e3a9u); f_004a20f0();
    /* 0049e3a9: mov ax, word ptr [ebp - 0x44] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffbcu))) & 0xffffu);
    /* 0049e3ad: jmp 0x49e417 */ goto L_0049e417;
L_0049e3b1:; BB(0x0049e3b1);
    /* 0049e3b1: mov eax, dword ptr [0x79138c] */ r_eax = R32((u32)(0x79138cu));
    /* 0049e3b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049e3b7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0049e3ba: call 0x4a1fb0 */ r_esp -= 4; W32(r_esp, 0x49e3bfu); f_004a1fb0();
    /* 0049e3bf: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0049e3c2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049e3c4: je 0x49e3e3 */ if (fZ) goto L_0049e3e3;
L_0049e3c6:; BB(0x0049e3c6);
    /* 0049e3c6: mov word ptr [ebp - 0x46], 0x30 */ W16((u32)(r_ebp+0xffffffbau), 0x30u);
    /* 0049e3cc: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0049e3d3: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0049e3d6: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x49e3dbu); f_004a20f0();
    /* 0049e3db: mov ax, word ptr [ebp - 0x46] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffbau))) & 0xffffu);
    /* 0049e3df: jmp 0x49e417 */ goto L_0049e417;
L_0049e3e3:; BB(0x0049e3e3);
    /* 0049e3e3: mov word ptr [ebp - 0x48], 0x31 */ W16((u32)(r_ebp+0xffffffb8u), 0x31u);
    /* 0049e3e9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0049e3f0: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0049e3f3: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x49e3f8u); f_004a20f0();
    /* 0049e3f8: mov ax, word ptr [ebp - 0x48] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffb8u))) & 0xffffu);
    /* 0049e3fc: jmp 0x49e417 */ goto L_0049e417;
L_0049e3fe:; BB(0x0049e3fe);
    /* 0049e3fe: mov word ptr [ebp - 0x4a], 0xffff */ W16((u32)(r_ebp+0xffffffb6u), 0xffffu);
    /* 0049e404: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0049e40b: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0049e40e: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x49e413u); f_004a20f0();
    /* 0049e413: mov ax, word ptr [ebp - 0x4a] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffb6u))) & 0xffffu);
L_0049e417:; BB(0x0049e417);
    /* 0049e417: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0049e41a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0049e421: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0049e422: mov esp, ebp */ r_esp = r_ebp;
    /* 0049e424: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0049e425: ret  */ FN_RET(0x0049df90); r_esp += 4; return;
}

