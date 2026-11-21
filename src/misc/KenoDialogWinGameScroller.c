#include "protos.h"

void f_0058ec60(void) /* KenoDialogWinGameScroller::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0058ec60);
    /* 0058ec60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058ec61: mov ebp, esp */ r_ebp = r_esp;
    /* 0058ec63: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0058ec65: push 0x6a6ff1 */ { u32 v = 0x6a6ff1u; r_esp -= 4; W32(r_esp, v); }
    /* 0058ec6a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0058ec70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058ec71: sub esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0058ec74: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0058ec79: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0058ec7b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058ec7c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0058ec7f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0058ec85: mov dword ptr [ebp - 0x54], ecx */ W32((u32)(r_ebp+0xffffffacu), r_ecx);
    /* 0058ec88: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0058ec8b: call 0x5e9e20 */ r_esp -= 4; W32(r_esp, 0x58ec90u); f_005e9e20();
    /* 0058ec90: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0058ec97: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 0058ec9a: mov dword ptr [eax], 0x6cde04 */ W32((u32)(r_eax), 0x6cde04u);
    /* 0058eca0: mov dword ptr [ebp - 0x28], 0x1e */ W32((u32)(r_ebp+0xffffffd8u), 0x1eu);
    /* 0058eca7: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0058ecaa: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0058ecad: mov dword ptr [ecx + 0x174], edx */ W32((u32)(r_ecx+0x174u), r_edx);
    /* 0058ecb3: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 0058ecb6: mov dword ptr [eax + 0x14c], 0 */ W32((u32)(r_eax+0x14cu), 0x0u);
    /* 0058ecc0: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0058ecc3: mov dword ptr [ecx + 0x150], 0 */ W32((u32)(r_ecx+0x150u), 0x0u);
    /* 0058eccd: push 0x1e4 */ { u32 v = 0x1e4u; r_esp -= 4; W32(r_esp, v); }
    /* 0058ecd2: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x58ecd7u); f_00686d82();
    /* 0058ecd7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058ecda: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0058ecdd: mov byte ptr [ebp - 4], 1 */ W8((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0058ece1: cmp dword ptr [ebp - 0x38], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058ece5: je 0x58ecfa */ if (fZ) goto L_0058ecfa;
L_0058ece7:; BB(0x0058ece7);
    /* 0058ece7: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 0058ecea: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058eceb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0058eced: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0058ecf0: call 0x58fae0 */ r_esp -= 4; W32(r_esp, 0x58ecf5u); f_0058fae0();
    /* 0058ecf5: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 0058ecf8: jmp 0x58ed01 */ goto L_0058ed01;
L_0058ecfa:; BB(0x0058ecfa);
    /* 0058ecfa: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
L_0058ed01:; BB(0x0058ed01);
    /* 0058ed01: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0058ed04: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0058ed07: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0058ed0b: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0058ed0e: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0058ed11: mov dword ptr [ecx + 0x144], edx */ W32((u32)(r_ecx+0x144u), r_edx);
    /* 0058ed17: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 0058ed1a: mov ecx, dword ptr [eax + 0x144] */ r_ecx = R32((u32)(r_eax+0x144u));
    /* 0058ed20: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 0058ed23: mov eax, dword ptr [edx + 0x174] */ r_eax = R32((u32)(r_edx+0x174u));
    /* 0058ed29: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0058ed2c: push 0x30dfeb */ { u32 v = 0x30dfebu; r_esp -= 4; W32(r_esp, v); }
    /* 0058ed31: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0058ed34: mov edx, dword ptr [ecx + 0x144] */ r_edx = R32((u32)(r_ecx+0x144u));
    /* 0058ed3a: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 0058ed3d: mov ecx, dword ptr [eax + 0x144] */ r_ecx = R32((u32)(r_eax+0x144u));
    /* 0058ed43: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0058ed45: mov eax, dword ptr [edx + 0xc8] */ r_eax = R32((u32)(r_edx+0xc8u));
    /* 0058ed4b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58ed4du); call_ind(t); }
    /* 0058ed4d: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0058ed50: mov edx, dword ptr [ecx + 0x144] */ r_edx = R32((u32)(r_ecx+0x144u));
    /* 0058ed56: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 0058ed59: mov ecx, dword ptr [eax + 0x144] */ r_ecx = R32((u32)(r_eax+0x144u));
    /* 0058ed5f: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0058ed61: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0058ed64: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58ed66u); call_ind(t); }
    /* 0058ed66: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0058ed69: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0058ed6a: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 0058ed6d: mov eax, dword ptr [edx + 0x144] */ r_eax = R32((u32)(r_edx+0x144u));
    /* 0058ed73: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0058ed76: mov ecx, dword ptr [ecx + 0x144] */ r_ecx = R32((u32)(r_ecx+0x144u));
    /* 0058ed7c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0058ed7e: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0058ed81: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58ed83u); call_ind(t); }
    /* 0058ed83: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 0058ed88: push 0xc1 */ { u32 v = 0xc1u; r_esp -= 4; W32(r_esp, v); }
    /* 0058ed8d: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0058ed90: mov edx, dword ptr [ecx + 0x144] */ r_edx = R32((u32)(r_ecx+0x144u));
    /* 0058ed96: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 0058ed99: mov ecx, dword ptr [eax + 0x144] */ r_ecx = R32((u32)(r_eax+0x144u));
    /* 0058ed9f: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0058eda1: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0058eda4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58eda6u); call_ind(t); }
    /* 0058eda6: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0058eda9: mov ecx, dword ptr [ecx + 0x144] */ r_ecx = R32((u32)(r_ecx+0x144u));
    /* 0058edaf: call 0x58fb90 */ r_esp -= 4; W32(r_esp, 0x58edb4u); f_0058fb90();
    /* 0058edb4: push 0x1e4 */ { u32 v = 0x1e4u; r_esp -= 4; W32(r_esp, v); }
    /* 0058edb9: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x58edbeu); f_00686d82();
    /* 0058edbe: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058edc1: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0058edc4: mov byte ptr [ebp - 4], 2 */ W8((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0058edc8: cmp dword ptr [ebp - 0x40], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058edcc: je 0x58ede1 */ if (fZ) goto L_0058ede1;
L_0058edce:; BB(0x0058edce);
    /* 0058edce: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 0058edd1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058edd2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0058edd4: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0058edd7: call 0x58fae0 */ r_esp -= 4; W32(r_esp, 0x58eddcu); f_0058fae0();
    /* 0058eddc: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 0058eddf: jmp 0x58ede8 */ goto L_0058ede8;
L_0058ede1:; BB(0x0058ede1);
    /* 0058ede1: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
L_0058ede8:; BB(0x0058ede8);
    /* 0058ede8: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 0058edeb: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0058edee: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0058edf2: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0058edf5: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0058edf8: mov dword ptr [ecx + 0x148], edx */ W32((u32)(r_ecx+0x148u), r_edx);
    /* 0058edfe: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 0058ee01: mov ecx, dword ptr [eax + 0x148] */ r_ecx = R32((u32)(r_eax+0x148u));
    /* 0058ee07: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 0058ee0a: mov eax, dword ptr [edx + 0x174] */ r_eax = R32((u32)(r_edx+0x174u));
    /* 0058ee10: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0058ee13: push 0x30dfec */ { u32 v = 0x30dfecu; r_esp -= 4; W32(r_esp, v); }
    /* 0058ee18: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0058ee1b: mov edx, dword ptr [ecx + 0x148] */ r_edx = R32((u32)(r_ecx+0x148u));
    /* 0058ee21: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 0058ee24: mov ecx, dword ptr [eax + 0x148] */ r_ecx = R32((u32)(r_eax+0x148u));
    /* 0058ee2a: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0058ee2c: mov eax, dword ptr [edx + 0xc8] */ r_eax = R32((u32)(r_edx+0xc8u));
    /* 0058ee32: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58ee34u); call_ind(t); }
    /* 0058ee34: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0058ee37: mov edx, dword ptr [ecx + 0x148] */ r_edx = R32((u32)(r_ecx+0x148u));
    /* 0058ee3d: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 0058ee40: mov ecx, dword ptr [eax + 0x148] */ r_ecx = R32((u32)(r_eax+0x148u));
    /* 0058ee46: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0058ee48: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0058ee4b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58ee4du); call_ind(t); }
    /* 0058ee4d: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0058ee50: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0058ee51: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 0058ee54: mov eax, dword ptr [edx + 0x148] */ r_eax = R32((u32)(r_edx+0x148u));
    /* 0058ee5a: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0058ee5d: mov ecx, dword ptr [ecx + 0x148] */ r_ecx = R32((u32)(r_ecx+0x148u));
    /* 0058ee63: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0058ee65: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0058ee68: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58ee6au); call_ind(t); }
    /* 0058ee6a: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 0058ee6f: push 0xfd */ { u32 v = 0xfdu; r_esp -= 4; W32(r_esp, v); }
    /* 0058ee74: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0058ee77: mov edx, dword ptr [ecx + 0x148] */ r_edx = R32((u32)(r_ecx+0x148u));
    /* 0058ee7d: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 0058ee80: mov ecx, dword ptr [eax + 0x148] */ r_ecx = R32((u32)(r_eax+0x148u));
    /* 0058ee86: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0058ee88: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0058ee8b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58ee8du); call_ind(t); }
    /* 0058ee8d: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0058ee90: mov ecx, dword ptr [ecx + 0x148] */ r_ecx = R32((u32)(r_ecx+0x148u));
    /* 0058ee96: call 0x58fb90 */ r_esp -= 4; W32(r_esp, 0x58ee9bu); f_0058fb90();
    /* 0058ee9b: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 0058eea0: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x58eea5u); f_00686d82();
    /* 0058eea5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058eea8: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0058eeab: mov byte ptr [ebp - 4], 3 */ W8((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0058eeaf: cmp dword ptr [ebp - 0x48], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058eeb3: je 0x58eec2 */ if (fZ) goto L_0058eec2;
L_0058eeb5:; BB(0x0058eeb5);
    /* 0058eeb5: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0058eeb8: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x58eebdu); f_005ec5a0();
    /* 0058eebd: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 0058eec0: jmp 0x58eec9 */ goto L_0058eec9;
L_0058eec2:; BB(0x0058eec2);
    /* 0058eec2: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
L_0058eec9:; BB(0x0058eec9);
    /* 0058eec9: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0058eecc: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 0058eecf: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0058eed3: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 0058eed6: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0058eed9: mov dword ptr [eax + 0x178], ecx */ W32((u32)(r_eax+0x178u), r_ecx);
    /* 0058eedf: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 0058eee2: mov eax, dword ptr [edx + 0x178] */ r_eax = R32((u32)(r_edx+0x178u));
    /* 0058eee8: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0058eeeb: mov edx, dword ptr [ecx + 0x174] */ r_edx = R32((u32)(r_ecx+0x174u));
    /* 0058eef1: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0058eef4: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 0058eef7: mov ecx, dword ptr [eax + 0x178] */ r_ecx = R32((u32)(r_eax+0x178u));
    /* 0058eefd: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 0058ef00: mov eax, dword ptr [edx + 0x178] */ r_eax = R32((u32)(r_edx+0x178u));
    /* 0058ef06: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0058ef08: mov ecx, eax */ r_ecx = r_eax;
    /* 0058ef0a: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0058ef0d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58ef0fu); call_ind(t); }
    /* 0058ef0f: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0058ef14: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0058ef17: mov edx, dword ptr [ecx + 0x178] */ r_edx = R32((u32)(r_ecx+0x178u));
    /* 0058ef1d: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 0058ef20: mov ecx, dword ptr [eax + 0x178] */ r_ecx = R32((u32)(r_eax+0x178u));
    /* 0058ef26: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0058ef28: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0058ef2e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58ef30u); call_ind(t); }
    /* 0058ef30: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0058ef31: mov ecx, esp */ r_ecx = r_esp;
    /* 0058ef33: mov dx, word ptr [0x75ee1c] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(0x75ee1cu))) & 0xffffu);
    /* 0058ef3a: mov word ptr [ecx], dx */ W16((u32)(r_ecx), (u16)r_edx);
    /* 0058ef3d: mov al, byte ptr [0x75ee1e] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0x75ee1eu))) & 0xffu);
    /* 0058ef42: mov byte ptr [ecx + 2], al */ W8((u32)(r_ecx+0x2u), (u8)r_eax);
    /* 0058ef45: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0058ef47: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 0058ef49: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0058ef4c: mov ecx, dword ptr [ecx + 0x178] */ r_ecx = R32((u32)(r_ecx+0x178u));
    /* 0058ef52: call 0x5ecd00 */ r_esp -= 4; W32(r_esp, 0x58ef57u); f_005ecd00();
    /* 0058ef57: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 0058ef5a: mov eax, dword ptr [edx + 0x178] */ r_eax = R32((u32)(r_edx+0x178u));
    /* 0058ef60: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0058ef63: mov ecx, dword ptr [ecx + 0x178] */ r_ecx = R32((u32)(r_ecx+0x178u));
    /* 0058ef69: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0058ef6b: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0058ef6e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58ef70u); call_ind(t); }
    /* 0058ef70: push 0xcc */ { u32 v = 0xccu; r_esp -= 4; W32(r_esp, v); }
    /* 0058ef75: push 0xc9 */ { u32 v = 0xc9u; r_esp -= 4; W32(r_esp, v); }
    /* 0058ef7a: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0058ef7d: mov edx, dword ptr [ecx + 0x178] */ r_edx = R32((u32)(r_ecx+0x178u));
    /* 0058ef83: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 0058ef86: mov ecx, dword ptr [eax + 0x178] */ r_ecx = R32((u32)(r_eax+0x178u));
    /* 0058ef8c: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0058ef8e: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0058ef91: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58ef93u); call_ind(t); }
    /* 0058ef93: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0058ef95: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0058ef98: mov ecx, dword ptr [ecx + 0x178] */ r_ecx = R32((u32)(r_ecx+0x178u));
    /* 0058ef9e: call 0x5eccb0 */ r_esp -= 4; W32(r_esp, 0x58efa3u); f_005eccb0();
    /* 0058efa3: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 0058efa5: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 0058efa8: mov ecx, dword ptr [edx + 0x178] */ r_ecx = R32((u32)(r_edx+0x178u));
    /* 0058efae: call 0x5ecc60 */ r_esp -= 4; W32(r_esp, 0x58efb3u); f_005ecc60();
    /* 0058efb3: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 0058efb5: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 0058efb8: mov ecx, dword ptr [eax + 0x178] */ r_ecx = R32((u32)(r_eax+0x178u));
    /* 0058efbe: call 0x5ef310 */ r_esp -= 4; W32(r_esp, 0x58efc3u); f_005ef310();
    /* 0058efc3: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0058efc6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0058efc7: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 0058efca: mov eax, dword ptr [edx + 0x178] */ r_eax = R32((u32)(r_edx+0x178u));
    /* 0058efd0: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0058efd3: mov ecx, dword ptr [ecx + 0x178] */ r_ecx = R32((u32)(r_ecx+0x178u));
    /* 0058efd9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0058efdb: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0058efde: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58efe0u); call_ind(t); }
    /* 0058efe0: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0058efe3: mov edx, dword ptr [ecx + 0x178] */ r_edx = R32((u32)(r_ecx+0x178u));
    /* 0058efe9: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 0058efec: mov ecx, dword ptr [eax + 0x178] */ r_ecx = R32((u32)(r_eax+0x178u));
    /* 0058eff2: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0058eff4: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0058eff7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58eff9u); call_ind(t); }
    /* 0058eff9: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0058f000: jmp 0x58f00b */ goto L_0058f00b;
L_0058f002:; BB(0x0058f002);
    /* 0058f002: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0058f005: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0058f008: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_0058f00b:; BB(0x0058f00b);
    /* 0058f00b: cmp dword ptr [ebp - 0x10], 0x50 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058f00f: jge 0x58f0de */ if ((fS==fO)) goto L_0058f0de;
L_0058f015:; BB(0x0058f015);
    /* 0058f015: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 0058f01a: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x58f01fu); f_00686d82();
    /* 0058f01f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058f022: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 0058f025: mov byte ptr [ebp - 4], 4 */ W8((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 0058f029: cmp dword ptr [ebp - 0x50], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058f02d: je 0x58f03c */ if (fZ) goto L_0058f03c;
L_0058f02f:; BB(0x0058f02f);
    /* 0058f02f: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0058f032: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x58f037u); f_005eaaf0();
    /* 0058f037: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 0058f03a: jmp 0x58f043 */ goto L_0058f043;
L_0058f03c:; BB(0x0058f03c);
    /* 0058f03c: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
L_0058f043:; BB(0x0058f043);
    /* 0058f043: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0058f046: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 0058f049: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0058f04d: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0058f050: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0058f053: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0058f056: mov dword ptr [ecx + eax*4 + 4], edx */ W32((u32)(r_ecx+r_eax*4+0x4u), r_edx);
    /* 0058f05a: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0058f05d: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0058f060: mov edx, dword ptr [ecx + eax*4 + 4] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 0058f064: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 0058f067: mov ecx, dword ptr [eax + 0x174] */ r_ecx = R32((u32)(r_eax+0x174u));
    /* 0058f06d: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 0058f070: push 0x30dfed */ { u32 v = 0x30dfedu; r_esp -= 4; W32(r_esp, v); }
    /* 0058f075: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0058f078: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 0058f07b: mov ecx, dword ptr [eax + edx*4 + 4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 0058f07f: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x58f084u); f_005eaf00();
    /* 0058f084: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0058f087: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 0058f08a: mov eax, dword ptr [edx + ecx*4 + 4] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 0058f08e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0058f091: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 0058f094: mov ecx, dword ptr [edx + ecx*4 + 4] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 0058f098: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0058f09a: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 0058f09d: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x58f09fu); call_ind(t); }
    /* 0058f09f: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0058f0a2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058f0a3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0058f0a6: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 0058f0a9: mov eax, dword ptr [edx + ecx*4 + 4] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 0058f0ad: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0058f0b0: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 0058f0b3: mov ecx, dword ptr [edx + ecx*4 + 4] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 0058f0b7: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0058f0b9: mov edx, dword ptr [eax + 0x6c] */ r_edx = R32((u32)(r_eax+0x6cu));
    /* 0058f0bc: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x58f0beu); call_ind(t); }
    /* 0058f0be: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0058f0c1: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0058f0c4: mov edx, dword ptr [ecx + eax*4 + 4] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 0058f0c8: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0058f0cb: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0058f0ce: mov ecx, dword ptr [ecx + eax*4 + 4] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 0058f0d2: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0058f0d4: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0058f0d7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58f0d9u); call_ind(t); }
    /* 0058f0d9: jmp 0x58f002 */ goto L_0058f002;
L_0058f0de:; BB(0x0058f0de);
    /* 0058f0de: mov dword ptr [ebp - 0x20], 0x1a */ W32((u32)(r_ebp+0xffffffe0u), 0x1au);
    /* 0058f0e5: mov dword ptr [ebp - 0x1c], 0x1a */ W32((u32)(r_ebp+0xffffffe4u), 0x1au);
    /* 0058f0ec: mov dword ptr [ebp - 0x18], 3 */ W32((u32)(r_ebp+0xffffffe8u), 0x3u);
    /* 0058f0f3: mov dword ptr [ebp - 0x14], 0x67 */ W32((u32)(r_ebp+0xffffffecu), 0x67u);
    /* 0058f0fa: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0058f101: jmp 0x58f10c */ goto L_0058f10c;
L_0058f103:; BB(0x0058f103);
    /* 0058f103: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0058f106: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0058f109: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_0058f10c:; BB(0x0058f10c);
    /* 0058f10c: cmp dword ptr [ebp - 0x10], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058f110: jge 0x58f225 */ if ((fS==fO)) goto L_0058f225;
L_0058f116:; BB(0x0058f116);
    /* 0058f116: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0058f11d: jmp 0x58f128 */ goto L_0058f128;
L_0058f11f:; BB(0x0058f11f);
    /* 0058f11f: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0058f122: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0058f125: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
L_0058f128:; BB(0x0058f128);
    /* 0058f128: cmp dword ptr [ebp - 0x2c], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058f12c: jge 0x58f219 */ if ((fS==fO)) goto L_0058f219;
L_0058f132:; BB(0x0058f132);
    /* 0058f132: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0058f139: jmp 0x58f144 */ goto L_0058f144;
L_0058f13b:; BB(0x0058f13b);
    /* 0058f13b: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0058f13e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0058f141: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
L_0058f144:; BB(0x0058f144);
    /* 0058f144: cmp dword ptr [ebp - 0x24], 0xa */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058f148: jge 0x58f214 */ if ((fS==fO)) goto L_0058f214;
L_0058f14e:; BB(0x0058f14e);
    /* 0058f14e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0058f151: imul ecx, ecx, 0x28 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x28u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0058f154: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0058f157: imul edx, edx, 0xa */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xau; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0058f15a: add ecx, dword ptr [ebp - 0x24] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0058f15d: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0058f15f: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 0058f162: cmp dword ptr [ebp - 0x24], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058f166: jle 0x58f1dc */ if ((fZ||fS!=fO)) goto L_0058f1dc;
L_0058f168:; BB(0x0058f168);
    /* 0058f168: cmp dword ptr [ebp - 0x24], 6 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058f16c: jle 0x58f1a5 */ if ((fZ||fS!=fO)) goto L_0058f1a5;
L_0058f16e:; BB(0x0058f16e);
    /* 0058f16e: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0058f171: imul eax, dword ptr [ebp - 0x1c] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xffffffe4u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0058f175: add eax, dword ptr [ebp - 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0058f178: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058f179: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0058f17c: imul ecx, dword ptr [ebp - 0x20] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0xffffffe0u)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0058f180: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0058f183: lea eax, [edx + ecx - 3] */ r_eax = (u32)(r_edx+r_ecx+0xfffffffdu);
    /* 0058f187: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058f188: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0058f18b: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 0058f18e: mov eax, dword ptr [edx + ecx*4 + 4] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 0058f192: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0058f195: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 0058f198: mov ecx, dword ptr [edx + ecx*4 + 4] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 0058f19c: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0058f19e: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0058f1a1: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x58f1a3u); call_ind(t); }
    /* 0058f1a3: jmp 0x58f1da */ goto L_0058f1da;
L_0058f1a5:; BB(0x0058f1a5);
    /* 0058f1a5: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0058f1a8: imul eax, dword ptr [ebp - 0x1c] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xffffffe4u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0058f1ac: add eax, dword ptr [ebp - 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0058f1af: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058f1b0: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0058f1b3: imul ecx, dword ptr [ebp - 0x20] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0xffffffe0u)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0058f1b7: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0058f1ba: lea eax, [edx + ecx - 1] */ r_eax = (u32)(r_edx+r_ecx+0xffffffffu);
    /* 0058f1be: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058f1bf: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0058f1c2: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 0058f1c5: mov eax, dword ptr [edx + ecx*4 + 4] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 0058f1c9: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0058f1cc: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 0058f1cf: mov ecx, dword ptr [edx + ecx*4 + 4] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 0058f1d3: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0058f1d5: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0058f1d8: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x58f1dau); call_ind(t); }
L_0058f1da:; BB(0x0058f1da);
    /* 0058f1da: jmp 0x58f20f */ goto L_0058f20f;
L_0058f1dc:; BB(0x0058f1dc);
    /* 0058f1dc: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0058f1df: imul eax, dword ptr [ebp - 0x1c] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xffffffe4u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0058f1e3: add eax, dword ptr [ebp - 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0058f1e6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058f1e7: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0058f1ea: imul ecx, dword ptr [ebp - 0x20] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0xffffffe0u)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0058f1ee: add ecx, dword ptr [ebp - 0x18] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0058f1f1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0058f1f2: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0058f1f5: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 0058f1f8: mov ecx, dword ptr [eax + edx*4 + 4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 0058f1fc: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0058f1ff: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 0058f202: mov edx, dword ptr [eax + edx*4 + 4] */ r_edx = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 0058f206: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0058f208: mov ecx, edx */ r_ecx = r_edx;
    /* 0058f20a: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0058f20d: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x58f20fu); call_ind(t); }
L_0058f20f:; BB(0x0058f20f);
    /* 0058f20f: jmp 0x58f13b */ goto L_0058f13b;
L_0058f214:; BB(0x0058f214);
    /* 0058f214: jmp 0x58f11f */ goto L_0058f11f;
L_0058f219:; BB(0x0058f219);
    /* 0058f219: mov dword ptr [ebp - 0x14], 0xdf */ W32((u32)(r_ebp+0xffffffecu), 0xdfu);
    /* 0058f220: jmp 0x58f103 */ goto L_0058f103;
L_0058f225:; BB(0x0058f225);
    /* 0058f225: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0058f22c: jmp 0x58f237 */ goto L_0058f237;
L_0058f22e:; BB(0x0058f22e);
    /* 0058f22e: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0058f231: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0058f234: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_0058f237:; BB(0x0058f237);
    /* 0058f237: cmp dword ptr [ebp - 0x10], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058f23b: jge 0x58f261 */ if ((fS==fO)) goto L_0058f261;
L_0058f23d:; BB(0x0058f23d);
    /* 0058f23d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0058f240: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 0058f243: mov dword ptr [edx + ecx*4 + 0x154], 0 */ W32((u32)(r_edx+r_ecx*4+0x154u), 0x0u);
    /* 0058f24e: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0058f251: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0058f254: mov dword ptr [ecx + eax*4 + 0x164], 0 */ W32((u32)(r_ecx+r_eax*4+0x164u), 0x0u);
    /* 0058f25f: jmp 0x58f22e */ goto L_0058f22e;
L_0058f261:; BB(0x0058f261);
    /* 0058f261: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0058f268: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 0058f26b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0058f26e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0058f275: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0058f276: mov esp, ebp */ r_esp = r_ebp;
    /* 0058f278: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058f279: ret 4 */ FN_RET(0x0058ec60); r_esp += 8; return;
}

void f_0058f280(void) /* KenoDialogWinGameScroller::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0058f280);
    /* 0058f280: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058f281: mov ebp, esp */ r_ebp = r_esp;
    /* 0058f283: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0058f285: push 0x6a7014 */ { u32 v = 0x6a7014u; r_esp -= 4; W32(r_esp, v); }
    /* 0058f28a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0058f290: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058f291: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0058f294: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0058f299: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0058f29b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058f29c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0058f29f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0058f2a5: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 0058f2a8: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0058f2ab: mov dword ptr [eax], 0x6cde04 */ W32((u32)(r_eax), 0x6cde04u);
    /* 0058f2b1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0058f2b8: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0058f2bb: call 0x58f450 */ r_esp -= 4; W32(r_esp, 0x58f2c0u); f_0058f450();
    /* 0058f2c0: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0058f2c7: jmp 0x58f2d2 */ goto L_0058f2d2;
L_0058f2c9:; BB(0x0058f2c9);
    /* 0058f2c9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0058f2cc: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0058f2cf: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_0058f2d2:; BB(0x0058f2d2);
    /* 0058f2d2: cmp dword ptr [ebp - 0x10], 0x50 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058f2d6: jge 0x58f31b */ if ((fS==fO)) goto L_0058f31b;
L_0058f2d8:; BB(0x0058f2d8);
    /* 0058f2d8: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0058f2db: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0058f2de: mov ecx, dword ptr [eax + edx*4 + 4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 0058f2e2: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0058f2e5: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0058f2e8: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0058f2eb: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058f2ef: je 0x58f304 */ if (fZ) goto L_0058f304;
L_0058f2f1:; BB(0x0058f2f1);
    /* 0058f2f1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0058f2f3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0058f2f6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0058f2f8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0058f2fb: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0058f2fd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58f2ffu); call_ind(t); }
    /* 0058f2ff: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0058f302: jmp 0x58f30b */ goto L_0058f30b;
L_0058f304:; BB(0x0058f304);
    /* 0058f304: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_0058f30b:; BB(0x0058f30b);
    /* 0058f30b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0058f30e: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0058f311: mov dword ptr [edx + ecx*4 + 4], 0 */ W32((u32)(r_edx+r_ecx*4+0x4u), 0x0u);
    /* 0058f319: jmp 0x58f2c9 */ goto L_0058f2c9;
L_0058f31b:; BB(0x0058f31b);
    /* 0058f31b: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0058f31e: mov ecx, dword ptr [eax + 0x144] */ r_ecx = R32((u32)(r_eax+0x144u));
    /* 0058f324: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0058f327: mov eax, dword ptr [edx + 0x144] */ r_eax = R32((u32)(r_edx+0x144u));
    /* 0058f32d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0058f32f: mov ecx, eax */ r_ecx = r_eax;
    /* 0058f331: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0058f334: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58f336u); call_ind(t); }
    /* 0058f336: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0058f339: mov edx, dword ptr [ecx + 0x144] */ r_edx = R32((u32)(r_ecx+0x144u));
    /* 0058f33f: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0058f342: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0058f345: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0058f348: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058f34c: je 0x58f361 */ if (fZ) goto L_0058f361;
L_0058f34e:; BB(0x0058f34e);
    /* 0058f34e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0058f350: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0058f353: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0058f355: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0058f358: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0058f35a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58f35cu); call_ind(t); }
    /* 0058f35c: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0058f35f: jmp 0x58f368 */ goto L_0058f368;
L_0058f361:; BB(0x0058f361);
    /* 0058f361: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_0058f368:; BB(0x0058f368);
    /* 0058f368: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0058f36b: mov dword ptr [ecx + 0x144], 0 */ W32((u32)(r_ecx+0x144u), 0x0u);
    /* 0058f375: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0058f378: mov eax, dword ptr [edx + 0x148] */ r_eax = R32((u32)(r_edx+0x148u));
    /* 0058f37e: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0058f381: mov ecx, dword ptr [ecx + 0x148] */ r_ecx = R32((u32)(r_ecx+0x148u));
    /* 0058f387: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0058f389: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0058f38c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58f38eu); call_ind(t); }
    /* 0058f38e: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0058f391: mov edx, dword ptr [ecx + 0x148] */ r_edx = R32((u32)(r_ecx+0x148u));
    /* 0058f397: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 0058f39a: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0058f39d: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0058f3a0: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058f3a4: je 0x58f3b9 */ if (fZ) goto L_0058f3b9;
L_0058f3a6:; BB(0x0058f3a6);
    /* 0058f3a6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0058f3a8: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0058f3ab: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0058f3ad: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0058f3b0: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0058f3b2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58f3b4u); call_ind(t); }
    /* 0058f3b4: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0058f3b7: jmp 0x58f3c0 */ goto L_0058f3c0;
L_0058f3b9:; BB(0x0058f3b9);
    /* 0058f3b9: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_0058f3c0:; BB(0x0058f3c0);
    /* 0058f3c0: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0058f3c3: mov dword ptr [ecx + 0x148], 0 */ W32((u32)(r_ecx+0x148u), 0x0u);
    /* 0058f3cd: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0058f3d0: mov eax, dword ptr [edx + 0x178] */ r_eax = R32((u32)(r_edx+0x178u));
    /* 0058f3d6: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0058f3d9: mov ecx, dword ptr [ecx + 0x178] */ r_ecx = R32((u32)(r_ecx+0x178u));
    /* 0058f3df: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0058f3e1: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0058f3e4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58f3e6u); call_ind(t); }
    /* 0058f3e6: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0058f3e9: mov edx, dword ptr [ecx + 0x178] */ r_edx = R32((u32)(r_ecx+0x178u));
    /* 0058f3ef: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 0058f3f2: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0058f3f5: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0058f3f8: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058f3fc: je 0x58f411 */ if (fZ) goto L_0058f411;
L_0058f3fe:; BB(0x0058f3fe);
    /* 0058f3fe: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0058f400: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0058f403: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0058f405: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0058f408: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0058f40a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58f40cu); call_ind(t); }
    /* 0058f40c: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0058f40f: jmp 0x58f418 */ goto L_0058f418;
L_0058f411:; BB(0x0058f411);
    /* 0058f411: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_0058f418:; BB(0x0058f418);
    /* 0058f418: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0058f41b: mov dword ptr [ecx + 0x178], 0 */ W32((u32)(r_ecx+0x178u), 0x0u);
    /* 0058f425: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0058f42c: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0058f42f: call 0x5e9e40 */ r_esp -= 4; W32(r_esp, 0x58f434u); f_005e9e40();
    /* 0058f434: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0058f437: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0058f43e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0058f43f: mov esp, ebp */ r_esp = r_ebp;
    /* 0058f441: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058f442: ret  */ FN_RET(0x0058f280); r_esp += 4; return;
}

